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

#ifndef _TAO_IDL_TESTS_N06EZS_H_
#define _TAO_IDL_TESTS_N06EZS_H_

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

#if !defined (_TEST_PROCESS__SARG_TRAITS_)
#define _TEST_PROCESS__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Process>
    : public
        Object_SArg_Traits_T<
            ::Test::Process_ptr,
            ::Test::Process_var,
            ::Test::Process_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_PROCESS_FACTORY__SARG_TRAITS_)
#define _TEST_PROCESS_FACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Process_Factory>
    : public
        Object_SArg_Traits_T<
            ::Test::Process_Factory_ptr,
            ::Test::Process_Factory_var,
            ::Test::Process_Factory_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_STARTUP_CALLBACK__SARG_TRAITS_)
#define _TEST_STARTUP_CALLBACK__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Startup_Callback>
    : public
        Object_SArg_Traits_T<
            ::Test::Startup_Callback_ptr,
            ::Test::Startup_Callback_var,
            ::Test::Startup_Callback_out,
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

  class Process_Factory;
  typedef Process_Factory *Process_Factory_ptr;

  class  Process_Factory
    : public virtual PortableServer::ServantBase
  {
  protected:
    Process_Factory (void);

  public:
    /// Useful for template programming.
    typedef ::Test::Process_Factory _stub_type;
    typedef ::Test::Process_Factory_ptr _stub_ptr_type;
    typedef ::Test::Process_Factory_var _stub_var_type;

    Process_Factory (const Process_Factory& rhs);
    virtual ~Process_Factory (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Test::Process_Factory *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Test::Process_ptr create_new_process (
      void) = 0;

    static void create_new_process_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void noop (
      void) = 0;

    static void noop_skel (
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

  class Process;
  typedef Process *Process_ptr;

  class  Process
    : public virtual PortableServer::ServantBase
  {
  protected:
    Process (void);

  public:
    /// Useful for template programming.
    typedef ::Test::Process _stub_type;
    typedef ::Test::Process_ptr _stub_ptr_type;
    typedef ::Test::Process_var _stub_var_type;

    Process (const Process& rhs);
    virtual ~Process (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Test::Process *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Long get_process_id (
      void) = 0;

    static void get_process_id_skel (
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

  class Startup_Callback;
  typedef Startup_Callback *Startup_Callback_ptr;

  class  Startup_Callback
    : public virtual PortableServer::ServantBase
  {
  protected:
    Startup_Callback (void);

  public:
    /// Useful for template programming.
    typedef ::Test::Startup_Callback _stub_type;
    typedef ::Test::Startup_Callback_ptr _stub_ptr_type;
    typedef ::Test::Startup_Callback_var _stub_var_type;

    Startup_Callback (const Startup_Callback& rhs);
    virtual ~Startup_Callback (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Test::Startup_Callback *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void started (
      ::Test::Process_ptr the_process) = 0;

    static void started_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Test

#include /**/ "ace/post.h"

#endif /* ifndef */

