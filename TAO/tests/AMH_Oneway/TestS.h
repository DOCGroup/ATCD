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

#ifndef _TAO_IDL_TESTS_LJL3DC_H_
#define _TAO_IDL_TESTS_LJL3DC_H_

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
#include "tao/Messaging/AMH_Response_Handler.h"

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_ROUNDTRIP__SARG_TRAITS_)
#define _TEST_ROUNDTRIP__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Roundtrip>
    : public
        Object_SArg_Traits_T<
            ::Test::Roundtrip_ptr,
            ::Test::Roundtrip_var,
            ::Test::Roundtrip_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:306

#if !defined (_TEST_AMH_ROUNDTRIPEXCEPTIONHOLDER__SARG_TRAITS_)
#define _TEST_AMH_ROUNDTRIPEXCEPTIONHOLDER__SARG_TRAITS_

  template<>
  class SArg_Traits< ::Test::AMH_RoundtripExceptionHolder>
    : public
        Object_SArg_Traits_T<
            ::Test::AMH_RoundtripExceptionHolder *,
            ::Test::AMH_RoundtripExceptionHolder_var,
            ::Test::AMH_RoundtripExceptionHolder_out,
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
  // be/be_visitor_interface/amh_sh.cpp:46

  class AMH_Roundtrip;
  typedef AMH_Roundtrip *AMH_Roundtrip_ptr;

  class  AMH_Roundtrip
    : public virtual PortableServer::ServantBase
  {
  protected:
    AMH_Roundtrip (void);

  public:
    AMH_Roundtrip (const AMH_Roundtrip& rhs);
    virtual ~AMH_Roundtrip (void);


    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest &req,
        TAO::Portable_Server::Servant_Upcall *_servant_upcall);

    Test::Roundtrip *_this (void);

  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/amh_sh.cpp:127

  static void test_method_skel (
      TAO_ServerRequest &_tao_req,
      TAO::Portable_Server::Servant_Upcall *_tao_obj,
      TAO_ServantBase *_tao_servant_upcall);

  virtual void test_method (
      Test::AMH_RoundtripResponseHandler_ptr _tao_rh,
      ::Test::Timestamp send_time
    ) = 0;

};

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_sh.cpp:73

class Roundtrip;
typedef Roundtrip *Roundtrip_ptr;

class  Roundtrip
  : public virtual PortableServer::ServantBase
{
protected:
  Roundtrip (void);

public:
  /// Useful for template programming.
  typedef ::Test::Roundtrip _stub_type;
  typedef ::Test::Roundtrip_ptr _stub_ptr_type;
  typedef ::Test::Roundtrip_var _stub_var_type;

  Roundtrip (const Roundtrip& rhs);
  virtual ~Roundtrip (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);

  ::Test::Roundtrip *_this (void);

  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void test_method (
    ::Test::Timestamp send_time) = 0;

  static void test_method_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

// TAO_IDL - Generated from
// be/be_visitor_interface/amh_rh_sh.cpp:50

class TAO_AMH_RoundtripResponseHandler;
typedef TAO_AMH_RoundtripResponseHandler *TAO_AMH_RoundtripResponseHandler_ptr;

class  TAO_AMH_RoundtripResponseHandler
  : public TAO_AMH_Response_Handler,
    public ::Test::AMH_RoundtripResponseHandler
{
public:
  TAO_AMH_RoundtripResponseHandler (void);
  virtual ~TAO_AMH_RoundtripResponseHandler (void);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/amh_rh_sh.cpp:60

  virtual void test_method (
    void);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/amh_rh_sh.cpp:60

  virtual void test_method_excep (
    ::Test::AMH_RoundtripExceptionHolder * holder);
};

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Test

#include /**/ "ace/post.h"

#endif /* ifndef */

