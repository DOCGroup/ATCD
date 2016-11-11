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

#ifndef _TAO_IDL_AMIS_EUB5AG_H_
#define _TAO_IDL_AMIS_EUB5AG_H_

#include /**/ "ace/pre.h"

#include "AMIC.h"
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

#if !defined (_AMI_TEST_ADDER__SARG_TRAITS_)
#define _AMI_TEST_ADDER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::AMI_test::adder>
    : public
        Object_SArg_Traits_T<
            ::AMI_test::adder_ptr,
            ::AMI_test::adder_var,
            ::AMI_test::adder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_AMI_TEST_AMI_ADDERHANDLER__SARG_TRAITS_)
#define _AMI_TEST_AMI_ADDERHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::AMI_test::AMI_adderHandler>
    : public
        Object_SArg_Traits_T<
            ::AMI_test::AMI_adderHandler_ptr,
            ::AMI_test::AMI_adderHandler_var,
            ::AMI_test::AMI_adderHandler_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_AMI_test
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class adder;
  typedef adder *adder_ptr;

  class  adder
    : public virtual PortableServer::ServantBase
  {
  protected:
    adder (void);
  
  public:
    /// Useful for template programming.
    typedef ::AMI_test::adder _stub_type;
    typedef ::AMI_test::adder_ptr _stub_ptr_type;
    typedef ::AMI_test::adder_var _stub_var_type;

    adder (const adder& rhs);
    virtual ~adder (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::AMI_test::adder *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Long add (
      ::CORBA::Long a,
      ::CORBA::Long b) = 0;

    static void add_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class AMI_adderHandler;
  typedef AMI_adderHandler *AMI_adderHandler_ptr;

  class  AMI_adderHandler
    : public virtual POA_Messaging::ReplyHandler
  {
  protected:
    AMI_adderHandler (void);
  
  public:
    /// Useful for template programming.
    typedef ::AMI_test::AMI_adderHandler _stub_type;
    typedef ::AMI_test::AMI_adderHandler_ptr _stub_ptr_type;
    typedef ::AMI_test::AMI_adderHandler_var _stub_var_type;

    AMI_adderHandler (const AMI_adderHandler& rhs);
    virtual ~AMI_adderHandler (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::AMI_test::AMI_adderHandler *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void add (
      ::CORBA::Long ami_return_val) = 0;

    static void add_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void add_excep (
      ::Messaging::ExceptionHolder * excep_holder) = 0;

    static void add_excep_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module AMI_test

#include /**/ "ace/post.h"

#endif /* ifndef */

