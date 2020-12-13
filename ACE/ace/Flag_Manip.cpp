#include "Flag_Manip.h"

#if defined (ACE_LACKS_FCNTL)
#  include "OS_NS_stropts.h"
#  include "OS_NS_errno.h"
#endif /* ACE_LACKS_FCNTL */

#if defined (ACE_LACKS_IOCTL)
#  include "OS_NS_devctl.h"
#endif

#if !defined (__ACE_INLINE__)
#include "Flag_Manip.inl"
#endif /* __ACE_INLINE__ */

#if defined (CYGWIN32)
#  include "os_include/os_termios.h"
#endif /* CYGWIN32 */

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

// Flags are file status flags to turn on.

int
ACE::set_flags (ACE_HANDLE handle, int flags)
{
  ACE_TRACE ("ACE::set_flags");
#if defined (ACE_LACKS_FCNTL)
  switch (flags)
    {
    case ACE_NONBLOCK:
      // nonblocking argument (1)
      // blocking:            (0)
      {
        int nonblock = 1;
# if defined (ACE_LACKS_IOCTL)
        int dev_info;
        return ACE_OS::posix_devctl (handle, FIONBIO, &nonblock,
                                     sizeof nonblock, &dev_info);
# else
        return ACE_OS::ioctl (handle, FIONBIO, &nonblock);
# endif
      }
    default:
      ACE_NOTSUP_RETURN (-1);
    }
#else
  int val = ACE_OS::fcntl (handle, F_GETFL, 0);

  if (val == -1)
    return -1;

  // Turn on flags.
  ACE_SET_BITS (val, flags);

  if (ACE_OS::fcntl (handle, F_SETFL, val) == -1)
    return -1;
  else
    return 0;
#endif /* ACE_LACKS_FCNTL */
}

// Flags are the file status flags to turn off.

int
ACE::clr_flags (ACE_HANDLE handle, int flags)
{
  ACE_TRACE ("ACE::clr_flags");
#if defined (ACE_LACKS_FCNTL)
  switch (flags)
    {
    case ACE_NONBLOCK:
      // nonblocking argument (1)
      // blocking:            (0)
      {
        int nonblock = 0;
# if defined (ACE_LACKS_IOCTL)
        int dev_info;
        return ACE_OS::posix_devctl (handle, FIONBIO, &nonblock,
                                     sizeof nonblock, &dev_info);
# else
        return ACE_OS::ioctl (handle, FIONBIO, &nonblock);
# endif
      }
    default:
      ACE_NOTSUP_RETURN (-1);
    }
#else
  int val = ACE_OS::fcntl (handle, F_GETFL, 0);

  if (val == -1)
    return -1;

  // Turn flags off.
  ACE_CLR_BITS (val, flags);

  if (ACE_OS::fcntl (handle, F_SETFL, val) == -1)
    return -1;
  else
    return 0;
#endif /* ACE_LACKS_FCNTL */
}

ACE_END_VERSIONED_NAMESPACE_DECL
