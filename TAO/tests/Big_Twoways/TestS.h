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

#ifndef _TAO_IDL_TESTS_KXNXDZ_H_
#define _TAO_IDL_TESTS_KXNXDZ_H_

#include /**/ "ace/pre.h"

#include "TestC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
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
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Test::Payload>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::Payload,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_SESSION__SARG_TRAITS_)
#define _TEST_SESSION__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Session>
    : public
        Object_SArg_Traits_T<
            ::Test::Session_ptr,
            ::Test::Session_var,
            ::Test::Session_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Test::Session_List>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::Session_List,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_SESSION_CONTROL__SARG_TRAITS_)
#define _TEST_SESSION_CONTROL__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Session_Control>
    : public
        Object_SArg_Traits_T<
            ::Test::Session_Control_ptr,
            ::Test::Session_Control_var,
            ::Test::Session_Control_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_PEER__SARG_TRAITS_)
#define _TEST_PEER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Peer>
    : public
        Object_SArg_Traits_T<
            ::Test::Peer_ptr,
            ::Test::Peer_var,
            ::Test::Peer_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_COORDINATOR__SARG_TRAITS_)
#define _TEST_COORDINATOR__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Coordinator>
    : public
        Object_SArg_Traits_T<
            ::Test::Coordinator_ptr,
            ::Test::Coordinator_var,
            ::Test::Coordinator_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_Test
{


  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Session_Control;
  typedef Session_Control *Session_Control_ptr;

  class  Session_Control
    : public virtual PortableServer::ServantBase
  {
  protected:
    Session_Control (void);

  public:
    /// Useful for template programming.
    typedef ::Test::Session_Control _stub_type;
    typedef ::Test::Session_Control_ptr _stub_ptr_type;
    typedef ::Test::Session_Control_var _stub_var_type;

    Session_Control (const Session_Control& rhs);
    virtual ~Session_Control (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Test::Session_Control *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void session_finished (
      ::CORBA::Boolean success) = 0;

    static void session_finished_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Peer;
  typedef Peer *Peer_ptr;

  class  Peer
    : public virtual PortableServer::ServantBase
  {
  protected:
    Peer (void);

  public:
    /// Useful for template programming.
    typedef ::Test::Peer _stub_type;
    typedef ::Test::Peer_ptr _stub_ptr_type;
    typedef ::Test::Peer_var _stub_var_type;

    Peer (const Peer& rhs);
    virtual ~Peer (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Test::Peer *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Test::Session_ptr create_session (
      ::Test::Session_Control_ptr control,
      ::CORBA::ULong payload_size,
      ::CORBA::ULong thread_count,
      ::CORBA::ULong message_count,
      ::CORBA::ULong peer_count) = 0;

    static void create_session_skel (
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
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Session;
  typedef Session *Session_ptr;

  class  Session
    : public virtual PortableServer::ServantBase
  {
  protected:
    Session (void);

  public:
    /// Useful for template programming.
    typedef ::Test::Session _stub_type;
    typedef ::Test::Session_ptr _stub_ptr_type;
    typedef ::Test::Session_var _stub_var_type;

    Session (const Session& rhs);
    virtual ~Session (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Test::Session *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void start (
      const ::Test::Session_List & other_sessions) = 0;

    static void start_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Test::Payload * echo_payload (
      const ::Test::Payload & the_payload) = 0;

    static void echo_payload_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void destroy (
      void) = 0;

    static void destroy_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Coordinator;
  typedef Coordinator *Coordinator_ptr;

  class  Coordinator
    : public virtual PortableServer::ServantBase
  {
  protected:
    Coordinator (void);

  public:
    /// Useful for template programming.
    typedef ::Test::Coordinator _stub_type;
    typedef ::Test::Coordinator_ptr _stub_ptr_type;
    typedef ::Test::Coordinator_var _stub_var_type;

    Coordinator (const Coordinator& rhs);
    virtual ~Coordinator (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Test::Coordinator *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void add_peer (
      ::Test::Peer_ptr the_peer) = 0;

    static void add_peer_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Test

#include /**/ "ace/post.h"

#endif /* ifndef */

