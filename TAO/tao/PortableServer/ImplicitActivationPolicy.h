// -*- C++ -*-

//=============================================================================
/**
 *  @file ImplicitActivationPolicy.h
 *
 *  @author  Johnny Willemsen  <jwillemsen@remedy.nl>
 */
//=============================================================================

#ifndef TAO_PORTABLESERVER_IMPLICITACTIVATIONPOLICY_H
#define TAO_PORTABLESERVER_IMPLICITACTIVATIONPOLICY_H
#include /**/ "ace/pre.h"

#include "portableserver_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ImplicitActivationPolicyC.h"
#include "tao/LocalObject.h"

// This is to remove "inherits via dominance" warnings from MSVC.
// MSVC is being a little too paranoid.
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if (TAO_HAS_MINIMUM_POA == 0) && !defined (CORBA_E_COMPACT) && !defined (CORBA_E_MICRO)

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace Portable_Server
  {
    class TAO_PortableServer_Export ImplicitActivationPolicy
      : public virtual ::PortableServer::ImplicitActivationPolicy,
        public virtual ::CORBA::LocalObject
    {
    public:
      ImplicitActivationPolicy (::PortableServer::ImplicitActivationPolicyValue value);

      CORBA::Policy_ptr copy ();

      void destroy ();

      ::PortableServer::ImplicitActivationPolicyValue value ();

      CORBA::PolicyType policy_type ();

      /// Return the cached policy type for this policy.
      virtual TAO_Cached_Policy_Type _tao_cached_type () const;

      /// Returns the scope at which this policy can be applied. See orbconf.h.
      virtual TAO_Policy_Scope _tao_scope () const;

    private:
      ::PortableServer::ImplicitActivationPolicyValue value_;
    };
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* TAO_HAS_MINIMUM_POA == 0  && !CORBA_E_COMPACT && !CORBA_E_MICRO */

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#include /**/ "ace/post.h"
#endif /* TAO_PORTABLESERVER_IMPLICITACTIVATIONPOLICY_H */
