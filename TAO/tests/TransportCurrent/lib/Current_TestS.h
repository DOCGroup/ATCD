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

#ifndef _TAO_IDL_CURRENT_TESTS_TJ1R3D_H_
#define _TAO_IDL_CURRENT_TESTS_TJ1R3D_H_

#include /**/ "ace/pre.h"

#include "Current_TestC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
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

#if !defined (_TEST_TRANSPORT_CURRENTTEST__SARG_TRAITS_)
#define _TEST_TRANSPORT_CURRENTTEST__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Transport::CurrentTest>
    : public
        Object_SArg_Traits_T<
            ::Test::Transport::CurrentTest_ptr,
            ::Test::Transport::CurrentTest_var,
            ::Test::Transport::CurrentTest_out,
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
  // be/be_visitor_module/module_sh.cpp:35

  namespace Transport
  {


    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_sh.cpp:73

    class CurrentTest;
    typedef CurrentTest *CurrentTest_ptr;

    class Current_Test_Export CurrentTest
      : public virtual PortableServer::ServantBase
    {
    protected:
      CurrentTest (void);

    public:
      /// Useful for template programming.
      typedef ::Test::Transport::CurrentTest _stub_type;
      typedef ::Test::Transport::CurrentTest_ptr _stub_ptr_type;
      typedef ::Test::Transport::CurrentTest_var _stub_var_type;

      CurrentTest (const CurrentTest& rhs);
      virtual ~CurrentTest (void);

      virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

      virtual void _dispatch (
          TAO_ServerRequest & req,
          TAO::Portable_Server::Servant_Upcall *servant_upcall);

      ::Test::Transport::CurrentTest *_this (void);

      virtual const char* _interface_repository_id (void) const;

      // TAO_IDL - Generated from
      // be/be_visitor_operation/operation_sh.cpp:36

      virtual void invoked_by_client (
        void) = 0;

      static void invoked_by_client_skel (
          TAO_ServerRequest &server_request,
          TAO::Portable_Server::Servant_Upcall *servant_upcall,
          TAO_ServantBase *servant);

      // TAO_IDL - Generated from
      // be/be_visitor_operation/operation_sh.cpp:36

      virtual void invoked_during_upcall (
        void) = 0;

      static void invoked_during_upcall_skel (
          TAO_ServerRequest &server_request,
          TAO::Portable_Server::Servant_Upcall *servant_upcall,
          TAO_ServantBase *servant);

      // TAO_IDL - Generated from
      // be/be_visitor_operation/operation_sh.cpp:36

      virtual ::CORBA::Long self_test (
        void) = 0;

      static void self_test_skel (
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

  } // module Test::Transport

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Test

#include /**/ "ace/post.h"

#endif /* ifndef */

