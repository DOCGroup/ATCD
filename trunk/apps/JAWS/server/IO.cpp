// $Id$

#include "IO.h"
#include "HTTP_Helpers.h"
#include "JAWS_File.h"
#include "ace/Message_Block.h"
#include "ace/SOCK_Stream.h"

JAWS_IO::JAWS_IO (void)
  : handle_ (ACE_INVALID_HANDLE),
    handler_ (0)
{
}

JAWS_IO::~JAWS_IO (void)
{
}

ACE_HANDLE
JAWS_IO::handle (void)
{
  return this->handle_;
}

void
JAWS_IO::handle (ACE_HANDLE handle)
{
  this->handle_ = handle;
}

void
JAWS_IO::handler (JAWS_IO_Handler *handler)
{
  this->handler_ = handler;
}

JAWS_Synch_IO::JAWS_Synch_IO (void)
  : JAWS_IO ()
{
}

JAWS_Synch_IO::~JAWS_Synch_IO (void)
{
  ACE_OS::closesocket (this->handle_);
}

void 
JAWS_Synch_IO::read (ACE_Message_Block& mb, int size)
{
  ACE_SOCK_Stream stream;
  stream.set_handle (this->handle_);
  int result = stream.recv (mb.wr_ptr (), size);
  if (result <= 0)
    this->handler_->read_error ();
  else 
    {
      mb.wr_ptr (result);
      this->handler_->read_complete (mb);
    } 
}

void
JAWS_Synch_IO::receive_file (const char *filename,
			     void *initial_data,
			     int initial_data_length,
			     int entire_length)
{
  JAWS_File_Handle jf (filename, entire_length);

  int result = jf.error ();

  if (result == JAWS_File::OKIE_DOKIE)
    {
      ACE_SOCK_Stream stream;
      stream.set_handle (this->handle_);

      int bytes_to_memcpy = ACE_MIN (entire_length, initial_data_length);
      ACE_OS::memcpy (jf.address (), initial_data, bytes_to_memcpy);
      
      int bytes_to_read = entire_length - bytes_to_memcpy;
      
      int bytes = stream.recv_n ((char *) jf.address () + initial_data_length,
				 bytes_to_read);
      if (bytes == bytes_to_read)
	this->handler_->receive_file_complete ();
      else
	result = -1;
    }

  if (result != JAWS_File::OKIE_DOKIE)    
    this->handler_->receive_file_error (result);
}

void
JAWS_Synch_IO::transmit_file (const char *filename,
			      const char *header, 
			      int header_size,
			      const char *trailer, 
			      int trailer_size)
{
  JAWS_File_Handle jf (filename);

  int result = jf.error ();

  if (result == JAWS_File::OKIE_DOKIE)
    {
      ACE_SOCK_Stream stream;
      stream.set_handle (this->handle_);
      
      if ((stream.send_n (header, header_size) == header_size) &&
	  ((unsigned long) stream.send_n (jf.address (), jf.size ())
           == jf.size ()) &&
	  (stream.send_n (trailer, trailer_size) == trailer_size))
	this->handler_->transmit_file_complete ();
      else
	result = -1;      
    }
  if (result != JAWS_File::OKIE_DOKIE)    
    this->handler_->transmit_file_error (result);
}

void 
JAWS_Synch_IO::send_confirmation_message (const char *buffer, 
					  int length)
{
  this->send_message (buffer, length);
  this->handler_->confirmation_message_complete ();
}

void 
JAWS_Synch_IO::send_error_message (const char *buffer, 
				   int length)
{
  this->send_message (buffer, length);
  this->handler_->error_message_complete ();
}

void 
JAWS_Synch_IO::send_message (const char *buffer, 
			     int length)
{
  ACE_SOCK_Stream stream;
  stream.set_handle (this->handle_);
  stream.send_n (buffer, length);  
}

// This only works on Win32
#if defined (ACE_WIN32)

JAWS_Asynch_IO::JAWS_Asynch_IO (void)
  : JAWS_IO ()
{
}

JAWS_Asynch_IO::~JAWS_Asynch_IO (void)
{
  ACE_OS::closesocket (this->handle_);
}

void 
JAWS_Asynch_IO::read (ACE_Message_Block& mb, int size)
{
  ACE_Asynch_Read_Stream ar;
  if (ar.open (*this, this->handle_) == -1 || 
      ar.read (mb, size) == -1)
    this->handler_->read_error ();
}

// This method will be called when an asynchronous read completes on a stream. 
void
JAWS_Asynch_IO::handle_read_stream (const ACE_Asynch_Read_Stream::Result &result)
{  
  if (result.act () != 0)
    // This callback is for this->receive_file()
    {      
      int code = 0;
      if (result.success () && result.bytes_transferred () != 0)
	{
	  if (result.message_block ().length ()
              == result.message_block ().size ())
	    code = JAWS_File::OKIE_DOKIE;
	  else
	    {
	      ACE_Asynch_Read_Stream ar;
	      if (ar.open (*this, this->handle_) == -1 || 
		  ar.read (result.message_block (), 
			   result.message_block ().size ()
                           - result.message_block ().length (), 
			   result.act ()) == -1)
		code = -1;
	      else
		return;
	    }
	}
      else
	code = -1;

      if (code == JAWS_File::OKIE_DOKIE)
	this->handler_->receive_file_complete ();
      else
	this->handler_->receive_file_error (code);    
      
      delete &result.message_block ();
      delete (JAWS_File_Handle *) result.act ();
    }
  else
    {
      // This callback is for this->read()
      if (result.success () && result.bytes_transferred () != 0)
	this->handler_->read_complete (result.message_block ());
      else
	this->handler_->read_error ();    
    }
}

void
JAWS_Asynch_IO::receive_file (const char *filename,
			      void *initial_data,
			      int initial_data_length,
			      int entire_length)
{
  ACE_Message_Block *mb = 0;
  JAWS_File_Handle *jfp = new JAWS_File_Handle (filename, entire_length);

  int result = jfp->error ();

  if (result == JAWS_File::OKIE_DOKIE)
    {
      ACE_OS::memcpy (jfp->address (), initial_data, initial_data_length);
      
      int bytes_to_read = entire_length - initial_data_length;
      mb = new ACE_Message_Block ((char *)jfp->address ()
                                  + initial_data_length, bytes_to_read);
      ACE_Asynch_Read_Stream ar;
      if (ar.open (*this, this->handle_) == -1
          || ar.read (*mb, mb->size () - mb->length (), jfp) == -1)
	result = -1;
    }
  
  if (result != JAWS_File::OKIE_DOKIE)    
    {
      this->handler_->receive_file_error (result);
      delete mb;
      delete jfp;
    }
}

void
JAWS_Asynch_IO::transmit_file (const char *filename,
			       const char *header, 
			       int header_size,
			       const char *trailer, 
			       int trailer_size)
{
  ACE_Asynch_Transmit_File::Header_And_Trailer *header_and_trailer = 0;
  JAWS_File_Handle *jfp = new JAWS_File_Handle (filename);

  int result = jfp->error ();

  if (result == JAWS_File::OKIE_DOKIE)
    {
      ACE_Message_Block header_mb (header, header_size);
      ACE_Message_Block trailer_mb (trailer, trailer_size);
      header_and_trailer = new ACE_Asynch_Transmit_File::Header_And_Trailer
        (&header_mb, header_size, trailer_mb, trailer_size);
      ACE_Asynch_Transmit_File tf;
      if (tf.open (*this, this->handle_) == -1 ||
	  tf.transmit_file (jfp->handle (), // file handle 
			    header_and_trailer, // header and trailer data 
			    0,  // bytes_to_write
			    0,  // offset
			    0,  // offset_high
			    0,  // bytes_per_send
			    0,  // flags 
			    jfp // act
			    ) == -1)
	result = -1;
    }   
  
  if (result != JAWS_File::OKIE_DOKIE)    
    {
      this->handler_->transmit_file_error (result);
      delete header_and_trailer;
      delete jfp;
    }
}


// This method will be called when an asynchronous transmit file completes. 
void 
JAWS_Asynch_IO::handle_transmit_file (const ACE_Asynch_Transmit_File::Result &result)
{
  if (result.success ())
    this->handler_->transmit_file_complete ();
  else
    this->handler_->transmit_file_error (-1);
  
  delete result.header_and_trailer ();
  delete (JAWS_File_Handle *) result.act ();
}

void 
JAWS_Asynch_IO::send_confirmation_message (const char *buffer, 
					   int length)
{
  this->send_message (buffer, length, CONFORMATION);
}

void 
JAWS_Asynch_IO::send_error_message (const char *buffer, 
				    int length)
{
  this->send_message (buffer, length, ERROR_MESSAGE);
}

void 
JAWS_Asynch_IO::send_message (const char *buffer, 
			      int length, 
			      int act)
{
  ACE_Message_Block *mb = new ACE_Message_Block (buffer, length);  
  ACE_Asynch_Write_Stream aw;
  if (aw.open (*this, this->handle_) == -1 || 
      aw.write (*mb, length, (void *) act) == -1)
    {
      mb->release ();
      if (act == CONFORMATION)
	this->handler_->confirmation_message_complete ();
      else	
	this->handler_->error_message_complete ();
    }
}

void
JAWS_Asynch_IO::handle_write_stream (const ACE_Asynch_Write_Stream::Result &result)
{  
  result.message_block ().release ();
  if (result.act () == (void *) CONFORMATION)
    this->handler_->confirmation_message_complete ();
  else	
    this->handler_->error_message_complete ();
}

#endif /* ACE_WIN32 */

// #if defined (ACE_TEMPLATES_REQUIRE_SPECIALIZATION)
// template class ACE_Singleton<JAWS_VFS, ACE_SYNCH_MUTEX>;
// #endif /* ACE_TEMPLATES_REQUIRE_SPECIALIZATION */

