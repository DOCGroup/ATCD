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

#ifndef _TAO_IDL_TESTS_1LMCP3_H_
#define _TAO_IDL_TESTS_1LMCP3_H_

#include /**/ "ace/pre.h"

#include "TestC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Messaging/MessagingS.h"
#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:306

#if !defined (_MESSAGING_EXCEPTIONHOLDER__SARG_TRAITS_)
#define _MESSAGING_EXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::Messaging::ExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::Messaging::ExceptionHolder *,
            ::Messaging::ExceptionHolder_var,
            ::Messaging::ExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_CONTROLLER__SARG_TRAITS_)
#define _TEST_CONTROLLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Controller>
    : public
        Object_SArg_Traits_T<
            ::Test::Controller_ptr,
            ::Test::Controller_var,
            ::Test::Controller_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_AMI_CONTROLLERHANDLER__SARG_TRAITS_)
#define _TEST_AMI_CONTROLLERHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::AMI_ControllerHandler>
    : public
        Object_SArg_Traits_T<
            ::Test::AMI_ControllerHandler_ptr,
            ::Test::AMI_ControllerHandler_var,
            ::Test::AMI_ControllerHandler_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_MANAGER__SARG_TRAITS_)
#define _TEST_MANAGER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Manager>
    : public
        Object_SArg_Traits_T<
            ::Test::Manager_ptr,
            ::Test::Manager_var,
            ::Test::Manager_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_AMI_MANAGERHANDLER__SARG_TRAITS_)
#define _TEST_AMI_MANAGERHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::AMI_ManagerHandler>
    : public
        Object_SArg_Traits_T<
            ::Test::AMI_ManagerHandler_ptr,
            ::Test::AMI_ManagerHandler_var,
            ::Test::AMI_ManagerHandler_out,
            TAO::Any_Insert_Policy_Stream
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

  class Controller;
  typedef Controller *Controller_ptr;

  class  Controller
    : public virtual PortableServer::ServantBase
  {
  protected:
    Controller (void);
  
  public:
    /// Useful for template programming.
    typedef ::Test::Controller _stub_type;
    typedef ::Test::Controller_ptr _stub_ptr_type;
    typedef ::Test::Controller_var _stub_var_type;

    Controller (const Controller& rhs);
    virtual ~Controller (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Test::Controller *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void worker_started (
      void) = 0;

    static void worker_started_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void worker_finished (
      void) = 0;

    static void worker_finished_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class AMI_ControllerHandler;
  typedef AMI_ControllerHandler *AMI_ControllerHandler_ptr;

  class  AMI_ControllerHandler
    : public virtual POA_Messaging::ReplyHandler
  {
  protected:
    AMI_ControllerHandler (void);
  
  public:
    /// Useful for template programming.
    typedef ::Test::AMI_ControllerHandler _stub_type;
    typedef ::Test::AMI_ControllerHandler_ptr _stub_ptr_type;
    typedef ::Test::AMI_ControllerHandler_var _stub_var_type;

    AMI_ControllerHandler (const AMI_ControllerHandler& rhs);
    virtual ~AMI_ControllerHandler (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Test::AMI_ControllerHandler *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void worker_started (
      void) = 0;

    static void worker_started_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void worker_started_excep (
      ::Messaging::ExceptionHolder * excep_holder) = 0;

    static void worker_started_excep_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void worker_finished (
      void) = 0;

    static void worker_finished_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void worker_finished_excep (
      ::Messaging::ExceptionHolder * excep_holder) = 0;

    static void worker_finished_excep_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Manager;
  typedef Manager *Manager_ptr;

  class  Manager
    : public virtual PortableServer::ServantBase
  {
  protected:
    Manager (void);
  
  public:
    /// Useful for template programming.
    typedef ::Test::Manager _stub_type;
    typedef ::Test::Manager_ptr _stub_ptr_type;
    typedef ::Test::Manager_var _stub_var_type;

    Manager (const Manager& rhs);
    virtual ~Manager (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Test::Manager *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void start_workers (
      ::CORBA::Short worker_count,
      ::CORBA::Long milliseconds,
      ::Test::Controller_ptr the_controller) = 0;

    static void start_workers_skel (
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

  class AMI_ManagerHandler;
  typedef AMI_ManagerHandler *AMI_ManagerHandler_ptr;

  class  AMI_ManagerHandler
    : public virtual POA_Messaging::ReplyHandler
  {
  protected:
    AMI_ManagerHandler (void);
  
  public:
    /// Useful for template programming.
    typedef ::Test::AMI_ManagerHandler _stub_type;
    typedef ::Test::AMI_ManagerHandler_ptr _stub_ptr_type;
    typedef ::Test::AMI_ManagerHandler_var _stub_var_type;

    AMI_ManagerHandler (const AMI_ManagerHandler& rhs);
    virtual ~AMI_ManagerHandler (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Test::AMI_ManagerHandler *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void start_workers (
      void) = 0;

    static void start_workers_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void start_workers_excep (
      ::Messaging::ExceptionHolder * excep_holder) = 0;

    static void start_workers_excep_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Test

#include /**/ "ace/post.h"

#endif /* ifndef */

