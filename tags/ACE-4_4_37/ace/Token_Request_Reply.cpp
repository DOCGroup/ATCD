// Token_Request_Reply.cpp
// $Id$

#define ACE_BUILD_DLL
#include "ace/Token_Request_Reply.h"

#if !defined (__ACE_INLINE__)
#include "ace/Token_Request_Reply.i"
#endif /* __ACE_INLINE__ */

// Default "do nothing" constructor.

ACE_Token_Request::ACE_Token_Request (void)
  : token_name_ (0),
    client_id_ (0)
{
}

// Create a ACE_Token_Request message.  

ACE_Token_Request::ACE_Token_Request (int token_type,
				      int proxy_type,
				      ACE_UINT32 operation_type,
				      const char token_name[],
				      const char client_id[],
				      const ACE_Synch_Options &options)
{
  this->token_type (token_type);
  this->proxy_type (proxy_type);
  this->operation_type (operation_type);
  this->requeue_position (0);      // to avoid Purify UMR
  this->notify (0);                // to avoid Purify UMR
  transfer_.arg_ = 0;              // to avoid Purify UMR
  ACE_OS::memset (transfer_.data_, 0, sizeof transfer_.data_); // to avoid Purify UMR
  this->token_name (token_name, client_id);
  this->options (options);
}

// Encode the transfer buffer into network byte order 
// so that it can be sent to the server.

int
ACE_Token_Request::encode (void *&buf)
{
  buf = (void *) &this->transfer_;
  return this->length ();
}

// Decode the transfer buffer into host byte byte order 
// so that it can be used by the server.

int
ACE_Token_Request::decode (void)
{
  this->token_name_ = this->transfer_.data_;

  options_.set (transfer_.use_timeout_ == 1 ? ACE_Synch_Options::USE_TIMEOUT : 0,
		ACE_Time_Value (transfer_.sec_, transfer_.usec_),
		(void *) transfer_.arg_);

  // Decode the variable-sized portion.
  int token_len = ACE_OS::strlen (this->token_name_);

  // Check to make sure this->tokenName_ isn't too long!
  if (token_len >= ACE_MAXTOKENNAMELEN)
    {
      errno = ENAMETOOLONG;
      return -1;
    }
  else // Skip this->tokenName_ + '\0' + ':'.
    this->client_id_ = &this->token_name_[token_len + 2];

  size_t data_size = ((sizeof this->transfer_ 
		      - sizeof this->transfer_.data_)  // Fixed-size header.
		     + ACE_OS::strlen (this->token_name_) + 1 // this->tokenName_ + '\0'
		     + ACE_OS::strlen (this->client_id_) + 1  // this->clientId_ + '\0'
		     + 1);	                       // Space for ':'
  // Make sure the message was correctly received and framed.
  return this->length () == data_size ? 0 : -1;
}

// Print out the current values of the ACE_Token_Request.

void
ACE_Token_Request::dump (void) const
{
  ACE_DEBUG ((LM_DEBUG, ACE_BEGIN_DUMP, this));
  ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("*******\nlength = %d\ntoken name = %s\nclient id = %s\n"), 
	     this->length (), this->token_name (), this->client_id ()));
  ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("type = ")));

  if (this->token_type () == ACE_Tokens::MUTEX)
    ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("MUTEX\n")));
  else // == ACE_Tokens::RWLOCK
    {
      if (this->proxy_type () == ACE_RW_Token::READER)
	ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("RLOCK\n")));
      else // == WRITER
	ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("WLOCK\n")));
    }

  ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("operation = ")));
  switch (this->operation_type ())
    {
    case ACE_Token_Request::ACQUIRE:
      ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("ACQUIRE\n")));
      break;
    case ACE_Token_Request::RELEASE:
      ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("RELEASE\n")));
      break;
    case ACE_Token_Request::RENEW:
      ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("RENEW\n")));
      break;
    default:
      ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("<unknown operation type> = %d\n"), this->operation_type ()));
      break;
    }

  if (this->options ()[ACE_Synch_Options::USE_TIMEOUT] == 0)
    ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("blocking forever\n")));
  else
    {
      ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("waiting for %ld secs and %ld usecs\n"), 
		 this->options ().timeout ().sec (), this->options ().timeout ().usec ()));
    }
  ACE_DEBUG ((LM_DEBUG, ACE_END_DUMP));    
}

// ************************************************************
// ************************************************************
// ************************************************************

// Create a ACE_Token_Reply message.  

ACE_Token_Reply::ACE_Token_Reply (void) // Type of reply.
{
  this->arg (0);
  this->errnum (0);
  this->length (sizeof (Transfer));
}

// Encode the transfer buffer into network byte order 
// so that it can be sent to the client.

int
ACE_Token_Reply::encode (void *&buf)
{
  buf = (void *) &this->transfer_;
  return this->length ();
}

// Decode the transfer buffer into host byte order 
// so that it can be used by the client.

int
ACE_Token_Reply::decode (void)
{
  return 0;
}

// Print out current values of the ACE_Token_Reply object.

void
ACE_Token_Reply::dump (void) const
{
  ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("*******\nlength = %d\nerrnum = %d"), 
	     this->length (), this->errnum ()));
  ACE_DEBUG ((LM_DEBUG,  ASYS_TEXT ("arg = %d"), this->arg ()));
}

