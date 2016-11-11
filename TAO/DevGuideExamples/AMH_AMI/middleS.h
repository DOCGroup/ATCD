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

#ifndef _TAO_IDL_MIDDLES_NJIGWX_H_
#define _TAO_IDL_MIDDLES_NJIGWX_H_

#include /**/ "ace/pre.h"

#include "middleC.h"
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
#include "tao/Messaging/AMH_Response_Handler.h"

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

#if !defined (_MIDDLE__SARG_TRAITS_)
#define _MIDDLE__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Middle>
    : public
        Object_SArg_Traits_T<
            ::Middle_ptr,
            ::Middle_var,
            ::Middle_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:306

#if !defined (_AMH_MIDDLEEXCEPTIONHOLDER__SARG_TRAITS_)
#define _AMH_MIDDLEEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::AMH_MiddleExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::AMH_MiddleExceptionHolder *,
            ::AMH_MiddleExceptionHolder_var,
            ::AMH_MiddleExceptionHolder_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_AMI_MIDDLEHANDLER__SARG_TRAITS_)
#define _AMI_MIDDLEHANDLER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::AMI_MiddleHandler>
    : public
        Object_SArg_Traits_T<
            ::AMI_MiddleHandler_ptr,
            ::AMI_MiddleHandler_var,
            ::AMI_MiddleHandler_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/amh_sh.cpp:46

class POA_AMH_Middle;
typedef POA_AMH_Middle *POA_AMH_Middle_ptr;

class  POA_AMH_Middle
  : public virtual PortableServer::ServantBase
{
protected:
  POA_AMH_Middle (void);

public:
  POA_AMH_Middle (const POA_AMH_Middle& rhs);
  virtual ~POA_AMH_Middle (void);


  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest &req,
      TAO::Portable_Server::Servant_Upcall *_servant_upcall);
  
  Middle *_this (void);

virtual const char* _interface_repository_id (void) const;

// TAO_IDL - Generated from
// be/be_visitor_operation/amh_sh.cpp:127

static void get_the_answer_skel (
    TAO_ServerRequest &_tao_req,
    TAO::Portable_Server::Servant_Upcall *_tao_obj,
    TAO_ServantBase *_tao_servant_upcall);
  
virtual void get_the_answer (
    AMH_MiddleResponseHandler_ptr _tao_rh,
    const char * question
  ) = 0;

};

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_sh.cpp:73

class POA_Middle;
typedef POA_Middle *POA_Middle_ptr;

class  POA_Middle
  : public virtual PortableServer::ServantBase
{
protected:
  POA_Middle (void);

public:
  /// Useful for template programming.
  typedef ::Middle _stub_type;
  typedef ::Middle_ptr _stub_ptr_type;
  typedef ::Middle_var _stub_var_type;

  POA_Middle (const POA_Middle& rhs);
  virtual ~POA_Middle (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::Middle *_this (void);
  
  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual char * get_the_answer (
    const char * question) = 0;

  static void get_the_answer_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

// TAO_IDL - Generated from
// be/be_visitor_interface/amh_rh_sh.cpp:50

class POA_TAO_AMH_MiddleResponseHandler;
typedef POA_TAO_AMH_MiddleResponseHandler *POA_TAO_AMH_MiddleResponseHandler_ptr;

class  POA_TAO_AMH_MiddleResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::AMH_MiddleResponseHandler
{
public:
  POA_TAO_AMH_MiddleResponseHandler (void);
  virtual ~POA_TAO_AMH_MiddleResponseHandler (void);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/amh_rh_sh.cpp:60

  virtual void get_the_answer (
    const char * return_value);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/amh_rh_sh.cpp:60

  virtual void get_the_answer_excep (
    ::AMH_MiddleExceptionHolder * holder);
};

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_sh.cpp:73

class POA_AMI_MiddleHandler;
typedef POA_AMI_MiddleHandler *POA_AMI_MiddleHandler_ptr;

class  POA_AMI_MiddleHandler
  : public virtual POA_Messaging::ReplyHandler
{
protected:
  POA_AMI_MiddleHandler (void);

public:
  /// Useful for template programming.
  typedef ::AMI_MiddleHandler _stub_type;
  typedef ::AMI_MiddleHandler_ptr _stub_ptr_type;
  typedef ::AMI_MiddleHandler_var _stub_var_type;

  POA_AMI_MiddleHandler (const POA_AMI_MiddleHandler& rhs);
  virtual ~POA_AMI_MiddleHandler (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::AMI_MiddleHandler *_this (void);
  
  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void get_the_answer (
    const char * ami_return_val) = 0;

  static void get_the_answer_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void get_the_answer_excep (
    ::Messaging::ExceptionHolder * excep_holder) = 0;

  static void get_the_answer_excep_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

#include /**/ "ace/post.h"

#endif /* ifndef */

