/* -*- C++ -*- */
// $Id$

// According to Ben Eng <ben@jetpen.com>, the following configuration
// file is designed to work for Linux platforms using KAI C++.

#if !defined (ACE_CONFIG_H)
#define ACE_CONFIG_H

#if ! defined (__ACE_INLINE__)
#define __ACE_INLINE__
#endif /* ! __ACE_INLINE__ */

// Do we really need this #define here?
#define LINUX

#if defined (i386)
  // If running an Intel, assume that it's a Pentium so that
  // ACE_OS::gethrtime () can use the RDTSC instruction.  If
  // running a 486 or lower, be sure to comment this out.
  // (If not running an Intel CPU, this #define will not be seen
  //  because of the i386 protection, so it can be ignored.)
# define ACE_HAS_PENTIUM
#endif /* i386 */

// ONLY define this if you have config'd multicast into a 2.x kernel.
// If you do anything else, we've never tested it!
#define ACE_HAS_IP_MULTICAST
#define ACE_HAS_LONG_FDMASK

// Optimize ACE_Handle_Set for select().
#define ACE_HAS_HANDLE_SET_OPTIMIZED_FOR_SELECT

#define ACE_HAS_LONGLONG_T
#define ACE_HAS_STRING_CLASS

// Fixes a problem with new versions of Linux...
#ifndef msg_accrights
#undef msg_control
#define msg_accrights msg_control
#endif /* msg_accrights */

#ifndef msg_accrightslen
#undef msg_controllen
#define msg_accrightslen msg_controllen
#endif /* msg_accrightslen */

// You may need to undefine these for older versions of Linux.
//#define ACE_LACKS_SENDMSG
//#define ACE_LACKS_RECVMSG

#define ACE_HAS_POSIX_TIME

// Platform defines struct timespec but not timespec_t
#define ACE_LACKS_TIMESPEC_T

#define ACE_LACKS_STRRECVFD

// Platform supports System V IPC (most versions of UNIX, but not Win32)
#define ACE_HAS_SYSV_IPC			

// Compiler/platform contains the <sys/syscall.h> file.
#define ACE_HAS_SYSCALL_H

#define ACE_HAS_CONSISTENT_SIGNAL_PROTOTYPES
#define ACE_HAS_SVR4_DYNAMIC_LINKING
#define ACE_HAS_AUTOMATIC_INIT_FINI

// Compiler/platform has correctly prototyped header files.
#define ACE_HAS_CPLUSPLUS_HEADERS
#define ACE_LACKS_SOME_POSIX_PROTOTYPES

// Platforms lacks UNIX domain sockets.
//#define ACE_LACKS_UNIX_DOMAIN_SOCKETS

// Compiler/platform supports alloca().
#define ACE_HAS_ALLOCA

#define ACE_LACKS_MSYNC
#define ACE_LACKS_MADVISE

// Compiler/platform has <alloca.h>
#define ACE_HAS_ALLOCA_H

// Compiler/platform has the getrusage() system call.
#define ACE_HAS_GETRUSAGE

// Compiler/platform defines the sig_atomic_t typedef.
#define ACE_HAS_SIG_ATOMIC_T

// Compiler/platform supports sys_siglist array.
// #define ACE_HAS_SYS_SIGLIST

// Compiler/platform defines a union semun for SysV shared memory.
#define ACE_HAS_SEMUN

// Compiler supports the ssize_t typedef.
#define ACE_HAS_SSIZE_T

// Compiler/platform supports strerror ().
#define ACE_HAS_STRERROR

// Defines the page size of the system.
#define ACE_PAGE_SIZE 4096

#define ACE_HAS_SUNOS4_GETTIMEOFDAY

// Turns off the tracing feature.
#if !defined (ACE_NTRACE)
#define ACE_NTRACE 1
#endif /* ACE_NTRACE */

// Linux "improved" the interface to select() so that it modifies
// the struct timeval to reflect the amount of time not slept
// (see NOTES in Linux's select(2) man page).
#define ACE_HAS_NONCONST_SELECT_TIMEVAL

// Linux defines struct msghdr in /usr/include/socket.h
#define ACE_HAS_MSG

// TDN - adapted from file for SunOS4 platforms using the GNU g++ compiler
// Compiler's template mechanism must see source code (i.e., .C files).
#define ACE_TEMPLATES_REQUIRE_SOURCE

#define ACE_HAS_TEMPLATE_SPECIALIZATION
#define ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION
//#define ACE_HAS_BROKEN_EXPLICIT_TEMPLATE_DESTRUCTOR

// Compiler doesn't support static data member templates.
//#define ACE_LACKS_STATIC_DATA_MEMBER_TEMPLATES

// Define this if you want to use the standard C++ library
#if defined (__KCC)
#define ACE_HAS_STANDARD_CPP_LIBRARY 1
#define ACE_USES_STD_NAMESPACE_FOR_STDCPP_LIB 1
#define ACE_LACKS_IOSTREAM_FX 1
#define ACE_LACKS_LINEBUFFERED_STREAMBUF 1
#define ACE_LACKS_UNBUFFERED_STREAMBUF 1
#endif /* __KCC */

#endif /* ACE_CONFIG_H */
