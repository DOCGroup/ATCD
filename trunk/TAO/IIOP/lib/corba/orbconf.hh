/* orbconf.hh.  Generated automatically by configure.  */
// @(#)orbconf.hh	1.2 95/10/02
// Copyright 1995 by Sun Microsystems, Inc
//
// Build configuration file for the Inter-ORB Engine, and application
// level code using it via <corba.hh>
//
// !! Modify "orbconf.hh", not the file generated by "configure" !!
//
// Keep the tests in the order they're found in "configure.in".  Also, keep
// in mind that all "#undef" preprocessor directives are deemed to be the
// property of "autoconf"; if those are needed in their own right, they must
// be in some other file.
//
// This file builds on work originally contributed by a team at apm.co.uk:
// Owen Rees (rtor), Guangxing Li (gxl) and Mike Beasley (mdrb).
//

#ifndef	_ORB_CONFIG_HH
#define	_ORB_CONFIG_HH

/* Define if you have the <widec.h> header file.  */
#define HAVE_WIDEC_H 1

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef pid_t */

/* Define if your processor stores words with the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
#define WORDS_BIGENDIAN 1

/* The number of bytes in an int.  */
#define SIZEOF_INT 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 4

/* The number of bytes in a void *.  */
#define SIZEOF_VOID_P 4

/* The number of bytes in a long long.  */
#define SIZEOF_LONG_LONG 8

/* The number of bytes in a long double.  */
#define SIZEOF_LONG_DOUBLE 16

/* The number of bytes in a bool.  */
#define SIZEOF_BOOL 0

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define if you don't have vprintf but do have _doprnt.  */
/* #undef HAVE_DOPRNT */

/* Define if you have the vprintf function.  */
#define HAVE_VPRINTF 1

/* Define if you have the gettimeofday function.  */
#define HAVE_GETTIMEOFDAY 1

/* Define if you have the strdup function.  */
#define HAVE_STRDUP 1

/* Define if you have the popen function.  */
#define HAVE_POPEN 1

/* Define if SIG_IGN is broken.  */
/* #undef SIG_IGN_BROKEN */

/* Define if you have h_errno declared.  */
#define DECLARED_H_ERRNO 1

/* Define if you have accept declared.  */
#define DECLARED_ACCEPT 1

/* Define if you have bind declared.  */
#define DECLARED_BIND 1

/* Define if you have connect declared.  */
#define DECLARED_CONNECT 1

/* Define if you have listen declared.  */
#define DECLARED_LISTEN 1

/* Define if you have select declared.  */
#define DECLARED_SELECT 1

/* Define if you have setsockopt declared.  */
#define DECLARED_SETSOCKOPT 1

/* Define if you have shutdown declared.  */
#define DECLARED_SHUTDOWN 1

/* Define if you have socket declared.  */
#define DECLARED_SOCKET 1

/* Define if you have gettimeofday declared.  */
#define DECLARED_GETTIMEOFDAY 1

/* Define if you have kill declared.  */
#define DECLARED_KILL 1

/* Define if you have gethostname declared.  */
/* #undef DECLARED_GETHOSTNAME */

/* Define if you have bzero declared.  */
/* #undef DECLARED_BZERO */

/* Define if you have strerror declared.  */
#define DECLARED_STRERROR 1



//
// Various issues not dealt with via autoconf/configure.
//
#if	!defined (_WINSOCKAPI_)
	// Winsock added nonstandard APIs
#	define	closesocket(s)		close(s)
#endif	// _WINSOCKAPI_

#ifdef	minor
	// namespace pollution that's common on older UNIXes,
    // XXX this can't go here, "autoconf" wants to own #undef
/* #	undef	minor */
#endif	// minor


//
// BC++ seems to have a different convention for detecting Win32 than VC++.
//
#if	defined (__WIN32__)
#	define _WIN32
#endif	// BC++ convention

//
// For Win16, near/far pointers reflect same/other segment addressing.
//
#if	defined (unix) || defined (_WIN32)
#	define	_FAR
#endif

//
// Assume DOS/Windows if "configure" didn't get run.
//
#ifndef	SIZEOF_LONG
#	define SIZEOF_BOOL		0
#	ifdef	_WIN32
#		define	SIZEOF_INT	4
#	else	// Win16
#		define	SIZEOF_INT	2
#	endif	// Win32/Win16
#	define SIZEOF_LONG		4
#	define SIZEOF_VOID_P		4	// "large model" or Win32
#	define SIZEOF_LONG_LONG		8
#	define SIZEOF_LONGDOUBLE	12

#	define DECLARED_ACCEPT
#	define DECLARED_BIND
#	define DECLARED_CONNECT
#	define DECLARED_GETHOSTNAME
#	define DECLARED_H_ERRNO
#	define DECLARED_LISTEN
#	define DECLARED_LISTEN
#	define DECLARED_SELECT
#	define DECLARED_SETSOCKOPT
#	define DECLARED_SHUTDOWN
#	define DECLARED_SOCKET
#	define DECLARED_STRERROR

#	define HAVE_STRDUP
#	define HAVE_VPRINTF

typedef	unsigned long pid_t;

#endif

//
// For both Win16 and Win32, DLLs (shared libraries) need to know what
// classes, functions, and data are exported.  DLLs aren't quite dealt
// with here yet, it's tough to do it portably (viz. the different
// answers now used by BC++/VC++).
//
// (Wouldn't it be nice if more C++ compilers and linkers took advantage
// of syntax to help get ensure that only public interfaces get exported
// from shared libraries?  Hmmm...)
//
#if	defined (unix) || !defined (__BORLANDC__)
#	define	_EXPCLASS
#	define	_EXPFUNC
#	define	_EXPDATA
#endif

#if defined (hpux)
#	define SELECT_INT_STAR
#endif

#ifndef	HAVE_STRDUP
#define	strdup(s)	strcpy ((char *)malloc (strlen (s) + 1), s)
#endif

#endif	// _ORB_CONFIG_HH
