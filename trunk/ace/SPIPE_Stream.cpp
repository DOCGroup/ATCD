// SPIPE_Stream.cpp
// $Id$

#define ACE_BUILD_DLL
#include "ace/SPIPE_Stream.h"

ACE_ALLOC_HOOK_DEFINE(ACE_SPIPE_Stream)

void
ACE_SPIPE_Stream::dump (void) const
{
  ACE_TRACE ("ACE_SPIPE_Stream::dump");
}

// Simple-minded do nothing constructor.

ACE_SPIPE_Stream::ACE_SPIPE_Stream (void)
{
  ACE_TRACE ("ACE_SPIPE_Stream::ACE_SPIPE_Stream");
}

// Send N char *ptrs and int lengths.  Note that the char *'s precede
// the ints (basically, an varargs version of writev).  The count N is
// the *total* number of trailing arguments, *not* a couple of the
// number of tuple pairs!

ssize_t
ACE_SPIPE_Stream::send (size_t n, ...) const
{
  ACE_TRACE ("ACE_SPIPE_Stream::send");
  va_list argp;  
  size_t total_tuples = n / 2;
  ssize_t result;
#if defined (ACE_HAS_ALLOCA)
  iovec *iovp = (iovec *) alloca (total_tuples * sizeof (iovec));
#else
  iovec *iovp;
  
  ACE_NEW_RETURN (iovp, iovec[total_tuples], -1);
#endif /* !defined (ACE_HAS_ALLOCA) */

  va_start (argp, n);

  for (size_t i = 0; i < total_tuples; i++)
    {
      iovp[i].iov_base = va_arg (argp, char *);
      iovp[i].iov_len  = va_arg (argp, int);
    }

  result = ACE_OS::writev (this->get_handle (), iovp, total_tuples);
#if !defined (ACE_HAS_ALLOCA)
  delete [] iovp;
#endif /* !defined (ACE_HAS_ALLOCA) */
  va_end (argp);
  return result;
}

// This is basically an interface to ACE_OS::readv, that doesn't use
// the struct iovec explicitly.  The ... can be passed as an arbitrary
// number of (char *ptr, int len) tuples.  However, the count N is the
// *total* number of trailing arguments, *not* a couple of the number
// of tuple pairs!

ssize_t
ACE_SPIPE_Stream::recv (size_t n, ...) const
{
  ACE_TRACE ("ACE_SPIPE_Stream::recv");
  va_list argp;  
  size_t total_tuples = n / 2;
  ssize_t result;
#if defined (ACE_HAS_ALLOCA)
  iovec *iovp = (iovec *) alloca (total_tuples * sizeof (iovec));
#else
  iovec *iovp;
  
  ACE_NEW_RETURN (iovp, iovec[total_tuples], -1);
#endif /* !defined (ACE_HAS_ALLOCA) */

  va_start (argp, n);

  for (size_t i = 0; i < total_tuples; i++)
    {
      iovp[i].iov_base = va_arg (argp, char *);
      iovp[i].iov_len  = va_arg (argp, int);
    }

  result = ACE_OS::readv (this->get_handle (), iovp, total_tuples);
#if !defined (ACE_HAS_ALLOCA)
  delete [] iovp;
#endif /* !defined (ACE_HAS_ALLOCA) */
  va_end (argp);
  return result;
}
