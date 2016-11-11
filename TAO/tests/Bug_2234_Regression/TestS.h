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

#ifndef _TAO_IDL_TESTS_XUYJPN_H_
#define _TAO_IDL_TESTS_XUYJPN_H_

#include /**/ "ace/pre.h"

#include "TestC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Fixed_Array_SArgument_T.h"
#include "tao/PortableServer/Var_Array_SArgument_T.h"
#include "tao/PortableServer/Any_SArg_Traits.h"
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
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Test::MyNonVarStruct>
    : public
        Fixed_Size_SArg_Traits_T<
            ::Test::MyNonVarStruct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Test::MyVarStruct>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::MyVarStruct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class SArg_Traits< ::Test::MyNonVarUnion>
    : public
        Fixed_Size_SArg_Traits_T<
            ::Test::MyNonVarUnion,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class SArg_Traits< ::Test::MyVarUnion>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::MyVarUnion,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Test::MySeqOfLong>
    : public
        Var_Size_SArg_Traits_T<
            ::Test::MySeqOfLong,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::Test::MyArray_tag>
    : public
        Var_Array_SArg_Traits_T<
            ::Test::MyArray_out,
            ::Test::MyArray_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_FOO__SARG_TRAITS_)
#define _TEST_FOO__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Foo>
    : public
        Object_SArg_Traits_T<
            ::Test::Foo_ptr,
            ::Test::Foo_var,
            ::Test::Foo_out,
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

  class Foo;
  typedef Foo *Foo_ptr;

  class  Foo
    : public virtual PortableServer::ServantBase
  {
  protected:
    Foo (void);
  
  public:
    /// Useful for template programming.
    typedef ::Test::Foo _stub_type;
    typedef ::Test::Foo_ptr _stub_ptr_type;
    typedef ::Test::Foo_var _stub_var_type;

    Foo (const Foo& rhs);
    virtual ~Foo (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Test::Foo *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Long TestLong (
      ::CORBA::Long a,
      ::CORBA::Long_out b,
      ::CORBA::Long & c) = 0;

    static void TestLong_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual char * TestString (
      const char * a,
      ::CORBA::String_out b,
      char *& c) = 0;

    static void TestString_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Test::MyNonVarStruct TestNonVarStruct (
      const ::Test::MyNonVarStruct & a,
      ::Test::MyNonVarStruct_out b,
      ::Test::MyNonVarStruct & c) = 0;

    static void TestNonVarStruct_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Test::MyVarStruct * TestVarStruct (
      const ::Test::MyVarStruct & a,
      ::Test::MyVarStruct_out b,
      ::Test::MyVarStruct & c) = 0;

    static void TestVarStruct_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Test::MyNonVarUnion TestNonVarUnion (
      const ::Test::MyNonVarUnion & a,
      ::Test::MyNonVarUnion_out b,
      ::Test::MyNonVarUnion & c) = 0;

    static void TestNonVarUnion_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Test::MyVarUnion * TestVarUnion (
      const ::Test::MyVarUnion & a,
      ::Test::MyVarUnion_out b,
      ::Test::MyVarUnion & c) = 0;

    static void TestVarUnion_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Test::MySeqOfLong * TestSeqOfLong (
      const ::Test::MySeqOfLong & a,
      ::Test::MySeqOfLong_out b,
      ::Test::MySeqOfLong & c) = 0;

    static void TestSeqOfLong_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Any * TestAny (
      const ::CORBA::Any & a,
      ::CORBA::Any_out b,
      ::CORBA::Any & c) = 0;

    static void TestAny_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Test::MyArray_slice * TestArray (
      const ::Test::MyArray a,
      ::Test::MyArray_out b,
      ::Test::MyArray c) = 0;

    static void TestArray_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Object_ptr TestObject (
      ::CORBA::Object_ptr a,
      ::CORBA::Object_out b,
      ::CORBA::Object_ptr & c) = 0;

    static void TestObject_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void ShutdownServer (
      void) = 0;

    static void ShutdownServer_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Test

#include /**/ "ace/post.h"

#endif /* ifndef */

