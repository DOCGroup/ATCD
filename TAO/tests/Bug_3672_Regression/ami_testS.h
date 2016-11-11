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

#ifndef _TAO_IDL_AMI_TESTS_384KBA_H_
#define _TAO_IDL_AMI_TESTS_384KBA_H_

#include /**/ "ace/pre.h"

#include "ami_testC.h"
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

#if !defined (_A_AMI_TEST__SARG_TRAITS_)
#define _A_AMI_TEST__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::A::AMI_Test>
    : public
        Object_SArg_Traits_T<
            ::A::AMI_Test_ptr,
            ::A::AMI_Test_var,
            ::A::AMI_Test_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_A_AMI_AMI_TESTHANDLER__SARG_TRAITS_)
#define _A_AMI_AMI_TESTHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::A::AMI_AMI_TestHandler>
    : public
        Object_SArg_Traits_T<
            ::A::AMI_AMI_TestHandler_ptr,
            ::A::AMI_AMI_TestHandler_var,
            ::A::AMI_AMI_TestHandler_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_A
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class AMI_Test;
  typedef AMI_Test *AMI_Test_ptr;

  class  AMI_Test
    : public virtual PortableServer::ServantBase
  {
  protected:
    AMI_Test (void);
  
  public:
    /// Useful for template programming.
    typedef ::A::AMI_Test _stub_type;
    typedef ::A::AMI_Test_ptr _stub_ptr_type;
    typedef ::A::AMI_Test_var _stub_var_type;

    AMI_Test (const AMI_Test& rhs);
    virtual ~AMI_Test (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::A::AMI_Test *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Long foo (
      ::CORBA::Long_out out_l) = 0;

    static void foo_skel (
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

  class AMI_AMI_TestHandler;
  typedef AMI_AMI_TestHandler *AMI_AMI_TestHandler_ptr;

  class  AMI_AMI_TestHandler
    : public virtual POA_Messaging::ReplyHandler
  {
  protected:
    AMI_AMI_TestHandler (void);
  
  public:
    /// Useful for template programming.
    typedef ::A::AMI_AMI_TestHandler _stub_type;
    typedef ::A::AMI_AMI_TestHandler_ptr _stub_ptr_type;
    typedef ::A::AMI_AMI_TestHandler_var _stub_var_type;

    AMI_AMI_TestHandler (const AMI_AMI_TestHandler& rhs);
    virtual ~AMI_AMI_TestHandler (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::A::AMI_AMI_TestHandler *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void foo (
      ::CORBA::Long ami_return_val,
      ::CORBA::Long out_l) = 0;

    static void foo_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void foo_excep (
      ::Messaging::ExceptionHolder * excep_holder) = 0;

    static void foo_excep_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module A

#include /**/ "ace/post.h"

#endif /* ifndef */

