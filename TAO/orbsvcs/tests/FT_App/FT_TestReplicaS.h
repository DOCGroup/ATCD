// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.4.1
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:458

#ifndef _TAO_IDL_FT_TESTREPLICAS_8MSZ2O_H_
#define _TAO_IDL_FT_TESTREPLICAS_8MSZ2O_H_

#include /**/ "ace/pre.h"

#include "FT_TestReplicaC.h"
#include "orbsvcs/FT_ReplicaS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/TypeCode_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FT_TEST_TESTREPLICA__SARG_TRAITS_)
#define _FT_TEST_TESTREPLICA__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::FT_TEST::TestReplica>
    : public
        Object_SArg_Traits_T<
            ::FT_TEST::TestReplica_ptr,
            ::FT_TEST::TestReplica_var,
            ::FT_TEST::TestReplica_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:902

  template<>
  class SArg_Traits< ::FT_TEST::TestReplica::Bane>
    : public
        Basic_SArg_Traits_T<
            ::FT_TEST::TestReplica::Bane,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FT_TEST_REPLICAFACTORY__SARG_TRAITS_)
#define _FT_TEST_REPLICAFACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::FT_TEST::ReplicaFactory>
    : public
        Object_SArg_Traits_T<
            ::FT_TEST::ReplicaFactory_ptr,
            ::FT_TEST::ReplicaFactory_var,
            ::FT_TEST::ReplicaFactory_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_FT_TEST
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class TestReplica;
  typedef TestReplica *TestReplica_ptr;

  class  TestReplica
    : public virtual POA_FT::Updateable,
      public virtual POA_FT::PullMonitorable,
      public virtual POA_PortableGroup::TAO_UpdateObjectGroup
  {
  protected:
    TestReplica (void);
  
  public:
    /// Useful for template programming.
    typedef ::FT_TEST::TestReplica _stub_type;
    typedef ::FT_TEST::TestReplica_ptr _stub_ptr_type;
    typedef ::FT_TEST::TestReplica_var _stub_var_type;

    TestReplica (const TestReplica& rhs);
    virtual ~TestReplica (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::FT_TEST::TestReplica *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void set (
      ::CORBA::Long value) = 0;

    static void set_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Long increment (
      ::CORBA::Long delta) = 0;

    static void increment_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Long get (
      void) = 0;

    static void get_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void die (
      ::FT_TEST::TestReplica::Bane when) = 0;

    static void die_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void shutdown (
      void) = 0;

    static void shutdown_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Long counter (
      void) = 0;

    static void _get_counter_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void counter (
      ::CORBA::Long counter) = 0;

    static void _set_counter_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class ReplicaFactory;
  typedef ReplicaFactory *ReplicaFactory_ptr;

  class  ReplicaFactory
    : public virtual POA_PortableGroup::GenericFactory,
      public virtual POA_FT::PullMonitorable
  {
  protected:
    ReplicaFactory (void);
  
  public:
    /// Useful for template programming.
    typedef ::FT_TEST::ReplicaFactory _stub_type;
    typedef ::FT_TEST::ReplicaFactory_ptr _stub_ptr_type;
    typedef ::FT_TEST::ReplicaFactory_var _stub_var_type;

    ReplicaFactory (const ReplicaFactory& rhs);
    virtual ~ReplicaFactory (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::FT_TEST::ReplicaFactory *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void shutdown (
      void) = 0;

    static void shutdown_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module FT_TEST

#include /**/ "ace/post.h"

#endif /* ifndef */

