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

#ifndef _TAO_IDL_TESTS_VARKC5_H_
#define _TAO_IDL_TESTS_VARKC5_H_

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
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Test::Message>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::Message,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_RECEIVER__SARG_TRAITS_)
#define _TEST_RECEIVER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Receiver>
    : public
        Object_SArg_Traits_T<
            ::Test::Receiver_ptr,
            ::Test::Receiver_var,
            ::Test::Receiver_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_RECEIVER_FACTORY__SARG_TRAITS_)
#define _TEST_RECEIVER_FACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Receiver_Factory>
    : public
        Object_SArg_Traits_T<
            ::Test::Receiver_Factory_ptr,
            ::Test::Receiver_Factory_var,
            ::Test::Receiver_Factory_out,
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

  class Receiver;
  typedef Receiver *Receiver_ptr;

  class  Receiver
    : public virtual PortableServer::ServantBase
  {
  protected:
    Receiver (void);

  public:
    /// Useful for template programming.
    typedef ::Test::Receiver _stub_type;
    typedef ::Test::Receiver_ptr _stub_ptr_type;
    typedef ::Test::Receiver_var _stub_var_type;

    Receiver (const Receiver& rhs);
    virtual ~Receiver (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Test::Receiver *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void receive_data (
      const ::Test::Message & the_message) = 0;

    static void receive_data_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void done (
      void) = 0;

    static void done_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Receiver_Factory;
  typedef Receiver_Factory *Receiver_Factory_ptr;

  class  Receiver_Factory
    : public virtual PortableServer::ServantBase
  {
  protected:
    Receiver_Factory (void);

  public:
    /// Useful for template programming.
    typedef ::Test::Receiver_Factory _stub_type;
    typedef ::Test::Receiver_Factory_ptr _stub_ptr_type;
    typedef ::Test::Receiver_Factory_var _stub_var_type;

    Receiver_Factory (const Receiver_Factory& rhs);
    virtual ~Receiver_Factory (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Test::Receiver_Factory *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Test::Receiver_ptr create_receiver (
      void) = 0;

    static void create_receiver_skel (
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
// be/be_visitor_module/module_sh.cpp:66

} // module Test

#include /**/ "ace/post.h"

#endif /* ifndef */

