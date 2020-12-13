// -*- C++ -*-

//=============================================================================
/**
 *  @file    os_ftw.h
 *
 *  file tree traversal
 *
 *  @author Don Hinton <dhinton@dresystems.com>
 *  @author This code was originally in various places including ace/OS.h.
 */
//=============================================================================

#ifndef ACE_OS_INCLUDE_OS_FTW_H
#define ACE_OS_INCLUDE_OS_FTW_H

#include /**/ "ace/pre.h"

#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "sys/os_stat.h"

#if !defined (ACE_LACKS_FTW_H)
# include /**/ <ftw.h>
#endif /* !ACE_LACKS_FTW_H */

#include /**/ "ace/post.h"
#endif /* ACE_OS_INCLUDE_OS_FTW_H */
