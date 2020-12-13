// -*- C++ -*-

//=============================================================================
/**
 *  @file IdAssignmentStrategyFactory.h
 *
 *  @author  Johnny Willemsen  <jwillemsen@remedy.nl>
 */
//=============================================================================

#ifndef TAO_PORTABLESERVER_IDASSIGNMENTSTRATEGYFACTORY_H
#define TAO_PORTABLESERVER_IDASSIGNMENTSTRATEGYFACTORY_H
#include /**/ "ace/pre.h"

#include "portableserver_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "StrategyFactory.h"
#include "IdAssignmentPolicyC.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace Portable_Server
  {
    class IdAssignmentStrategy;

    class TAO_PortableServer_Export IdAssignmentStrategyFactory
      : public StrategyFactory
    {
    public:
      /// Create a new servant retention strategy
      virtual IdAssignmentStrategy* create (::PortableServer::IdAssignmentPolicyValue value) = 0;

      virtual void destroy (IdAssignmentStrategy *strategy) = 0;
    };
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"
#endif /* TAO_PORTABLESERVER_IDASSIGNMENTSTRATEGYFACTORY_H */
