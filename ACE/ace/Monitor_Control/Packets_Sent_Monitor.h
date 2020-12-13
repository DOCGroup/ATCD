// -*- C++ -*-

//=============================================================================
/**
 * @file Packets_Sent_Monitor.h
 *
 * @author Jeff Parsons <j.parsons@vanderbilt.edu>
 */
//=============================================================================

#ifndef PACKETS_SENT_MONITOR_H
#define PACKETS_SENT_MONITOR_H

#include /**/ "ace/pre.h"

#include "ace/Monitor_Base.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if defined (ACE_HAS_MONITOR_FRAMEWORK) && (ACE_HAS_MONITOR_FRAMEWORK == 1)

#if defined (ACE_HAS_PDH_H) && !defined (ACE_LACKS_PDH_H)
#include "Windows_Multi_Instance_Monitor.h"
#elif defined (ACE_LINUX) || defined (AIX)
#include "Linux_Network_Interface_Monitor.h"
#elif defined (ACE_HAS_KSTAT)
#include "Solaris_Network_Interface_Monitor.h"
#elif defined (__FreeBSD__) || defined (__Lynx__)
#include "FreeBSD_Network_Interface_Monitor.h"
#elif defined (__NetBSD__) || defined (__OpenBSD__)
#include "BSD_Network_Interface_Monitor.h"
#else
#include "Null_Network_Interface_Monitor.h"
#endif

#include "Monitor_Control_export.h"

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

namespace ACE
{
  namespace Monitor_Control
  {
    /**
     * @class Packets_Sent_Monitor
     *
     * @brief Monitors total packets sent over all network interfaces.
     */
    class MONITOR_CONTROL_Export Packets_Sent_Monitor
      : public Monitor_Base
#if defined (ACE_HAS_WIN32_PDH)
      , public Windows_Multi_Instance_Monitor
#elif defined (ACE_LINUX) || defined (AIX)
      , public Linux_Network_Interface_Monitor
#elif defined (ACE_HAS_KSTAT)
      , public Solaris_Network_Interface_Monitor
#elif defined (__NetBSD__) || defined (__OpenBSD__)
      , public BSD_Network_Interface_Monitor
#elif defined (__FreeBSD__) || defined (__Lynx__)
      , public FreeBSD_Network_Interface_Monitor
#else
      , public Null_Network_Interface_Monitor
#endif
    {
    public:
      Packets_Sent_Monitor (const char* name);

      /// Implementation of the pure virtual method.
      virtual void update (void);

      /// Stores the default name, used if none is supplied by the user.
      static const char* default_name (void);

    private:
      /// Overridden reset, calls platform-specific reset.
      virtual void clear_i (void);

    private:
      static const char* default_name_;
    };
  }
}

ACE_END_VERSIONED_NAMESPACE_DECL

#endif /* ACE_HAS_MONITOR_FRAMEWORK==1 */

#include /**/ "ace/post.h"

#endif // PACKETS_SENT_MONITOR_H
