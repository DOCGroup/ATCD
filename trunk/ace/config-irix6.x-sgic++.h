/* -*- C++ -*- */
// $Id$

// Use this file for IRIX 6.[234] if you have the pthreads patches
// installed.

#if !defined (ACE_CONFIG_IRIX6X_H)
#define ACE_CONFIG_IRIX6X_H

// Include basic (non-threaded) configuration
#include <ace/config-irix6.x-sgic++-nothreads.h>

// Add threading support

#define ACE_HAS_IRIX62_THREADS
#define ACE_HAS_PTHREAD_SIGMASK
#define ACE_HAS_UALARM

// Needed for the threading stuff?
#include /**/ <sched.h>
#include /**/ <task.h>
#define PTHREAD_MIN_PRIORITY PX_PRIO_MIN
#define PTHREAD_MAX_PRIORITY PX_PRIO_MAX

// ACE supports threads.
#define ACE_HAS_THREADS

// Platform has no implementation of pthread_condattr_setpshared(),
// even though it supports pthreads! (like Irix 6.2)
#define ACE_LACKS_CONDATTR_PSHARED

// IRIX 6.2 supports a variant of POSIX Pthreads, supposedly POSIX 1c
#define ACE_HAS_PTHREADS

// Platforms has pthread_thr_sigsetmask
#define ACE_HAS_PTHREAD_SIGMASK

// Platform has pthread_equal().
#define ACE_HAS_PTHREAD_EQUAL

// Platform has pthread_t defined.
#define ACE_HAS_PTHREAD_T

// Compiler/platform has thread-specific storage
#define ACE_HAS_THREAD_SPECIFIC_STORAGE

// Compile using multi-thread libraries
#if !defined (ACE_MT_SAFE)
  #define ACE_MT_SAFE 1
#endif /* ACE_MT_SAFE */

// The OS bind() call will select the port if it's 0.
#define ACE_HAS_WILDCARD_BIND

#endif /* ACE_CONFIG_IRIX6X_H */
