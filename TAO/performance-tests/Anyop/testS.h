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

#ifndef _TAO_IDL_TESTS_4VWKWQ_H_
#define _TAO_IDL_TESTS_4VWKWQ_H_

#include /**/ "ace/pre.h"

#include "testC.h"
#include "tao/BooleanSeqS.h"
#include "tao/CharSeqS.h"
#include "tao/DoubleSeqS.h"
#include "tao/FloatSeqS.h"
#include "tao/LongDoubleSeqS.h"
#include "tao/LongSeqS.h"
#include "tao/OctetSeqS.h"
#include "tao/ShortSeqS.h"
#include "tao/StringSeqS.h"
#include "tao/ULongSeqS.h"
#include "tao/UShortSeqS.h"
#include "tao/WCharSeqS.h"
#include "tao/WStringSeqS.h"
#include "tao/LongLongSeqS.h"
#include "tao/ULongLongSeqS.h"
#include "tao/PolicyS.h"
#include "tao/Policy_ManagerS.h"
#include "tao/Policy_CurrentS.h"
#include "tao/ServicesS.h"
#include "tao/ParameterModeS.h"
#include "tao/orb_typesS.h"
#include "tao/Typecode_typesS.h"
#include "tao/WrongTransactionS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/BD_String_SArgument_T.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Fixed_Array_SArgument_T.h"
#include "tao/PortableServer/Var_Array_SArgument_T.h"
#include "tao/PortableServer/Any_SArg_Traits.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/TypeCode_SArg_Traits.h"
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

#if !defined (_COFFEE__SARG_TRAITS_)
#define _COFFEE__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Coffee>
    : public
        Object_SArg_Traits_T<
            ::Coffee_ptr,
            ::Coffee_var,
            ::Coffee_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Coffee::Desc>
    : public
        Var_Size_SArg_Traits_T<
            ::Coffee::Desc,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_PARAM_TEST__SARG_TRAITS_)
#define _PARAM_TEST__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Param_Test>
    : public
        Object_SArg_Traits_T<
            ::Param_Test_ptr,
            ::Param_Test_var,
            ::Param_Test_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

#if !defined (_SHORT_STRING128__SARG_TRAITS_)
#define _SHORT_STRING128__SARG_TRAITS_

  template<>
  class SArg_Traits<short_string_128>
    : public
        BD_String_SArg_Traits_T<
            CORBA::String_var,
            128,
            TAO::Any_Insert_Policy_Stream
        >
  {
  };

#endif /* end #if !defined */

#if !defined (_SHORT_WSTRING128__SARG_TRAITS_)
#define _SHORT_WSTRING128__SARG_TRAITS_

  template<>
  class SArg_Traits<short_wstring_128>
    : public
        BD_String_SArg_Traits_T<
            CORBA::WString_var,
            128,
            TAO::Any_Insert_Policy_Stream
        >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Param_Test::Fixed_Struct>
    : public
        Fixed_Size_SArg_Traits_T<
            ::Param_Test::Fixed_Struct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Param_Test::NameComponent>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::NameComponent,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Param_Test::Step>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Step,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::PathSpec>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::PathSpec,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Short_Seq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Short_Seq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Bounded_Short_Seq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Bounded_Short_Seq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Long_Seq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Long_Seq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Bounded_Long_Seq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Bounded_Long_Seq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::StrSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::StrSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Bounded_StrSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Bounded_StrSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::WStrSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::WStrSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Bounded_WStrSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Bounded_WStrSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::StructSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::StructSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Bounded_StructSeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Bounded_StructSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Coffee_Mix>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Coffee_Mix,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Bounded_Coffee_Mix>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Bounded_Coffee_Mix,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::AnySeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::AnySeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Param_Test::Var_Struct>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Var_Struct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Param_Test::Nested_Struct>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Nested_Struct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Param_Test::Objref_Struct>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Objref_Struct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::Param_Test::Fixed_Array_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::Param_Test::Fixed_Array_var,
            ::Param_Test::Fixed_Array_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::Param_Test::Var_Array_tag>
    : public
        Var_Array_SArg_Traits_T<
            ::Param_Test::Var_Array_out,
            ::Param_Test::Var_Array_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::ArraySeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::ArraySeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Bounded_ArraySeq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Bounded_ArraySeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::Param_Test::short32_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::Param_Test::short32_var,
            ::Param_Test::short32_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class SArg_Traits< ::Param_Test::Big_Union>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Big_Union,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:902

  template<>
  class SArg_Traits< ::Param_Test::Small_Union_Switch>
    : public
        Basic_SArg_Traits_T<
            ::Param_Test::Small_Union_Switch,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class SArg_Traits< ::Param_Test::Small_Union>
    : public
        Fixed_Size_SArg_Traits_T<
            ::Param_Test::Small_Union,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Param_Test::level4>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::level4,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Param_Test::level8>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::level8,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Recursive_Seq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Recursive_Seq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Param_Test::Recursive_Struct>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Recursive_Struct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Nested_Rec_Seq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Nested_Rec_Seq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class SArg_Traits< ::Param_Test::nested_rec_union>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::nested_rec_union,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Param_Test::Recursive_Union_Seq>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Recursive_Union_Seq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class SArg_Traits< ::Param_Test::Recursive_Union>
    : public
        Var_Size_SArg_Traits_T<
            ::Param_Test::Recursive_Union,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class SArg_Traits< ::Param_Test::Multdim_Array_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::Param_Test::Multdim_Array_var,
            ::Param_Test::Multdim_Array_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_sh.cpp:73

class POA_Coffee;
typedef POA_Coffee *POA_Coffee_ptr;

class  POA_Coffee
  : public virtual PortableServer::ServantBase
{
protected:
  POA_Coffee (void);

public:
  /// Useful for template programming.
  typedef ::Coffee _stub_type;
  typedef ::Coffee_ptr _stub_ptr_type;
  typedef ::Coffee_var _stub_var_type;

  POA_Coffee (const POA_Coffee& rhs);
  virtual ~POA_Coffee (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::Coffee *_this (void);
  
  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Coffee::Desc * description (
    void) = 0;

  static void _get_description_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void description (
    const ::Coffee::Desc & description) = 0;

  static void _set_description_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_sh.cpp:73

class POA_Param_Test;
typedef POA_Param_Test *POA_Param_Test_ptr;

class  POA_Param_Test
  : public virtual PortableServer::ServantBase
{
protected:
  POA_Param_Test (void);

public:
  /// Useful for template programming.
  typedef ::Param_Test _stub_type;
  typedef ::Param_Test_ptr _stub_ptr_type;
  typedef ::Param_Test_var _stub_var_type;

  POA_Param_Test (const POA_Param_Test& rhs);
  virtual ~POA_Param_Test (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::Param_Test *_this (void);
  
  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::Short test_short (
    ::CORBA::Short s1,
    ::CORBA::Short & s2,
    ::CORBA::Short_out s3) = 0;

  static void test_short_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::ULongLong test_ulonglong (
    ::CORBA::ULongLong s1,
    ::CORBA::ULongLong & s2,
    ::CORBA::ULongLong_out s3) = 0;

  static void test_ulonglong_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual char * test_unbounded_string (
    const char * s1,
    char *& s2,
    ::CORBA::String_out s3) = 0;

  static void test_unbounded_string_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual char * test_bounded_string (
    const char * s1,
    char *& s2,
    ::CORBA::String_out s3) = 0;

  static void test_bounded_string_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::WChar * test_unbounded_wstring (
    const ::CORBA::WChar * ws1,
    ::CORBA::WChar *& ws2,
    ::CORBA::WString_out ws3) = 0;

  static void test_unbounded_wstring_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::WChar * test_bounded_wstring (
    const ::CORBA::WChar * ws1,
    ::CORBA::WChar *& ws2,
    ::CORBA::WString_out ws3) = 0;

  static void test_bounded_wstring_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Fixed_Struct test_fixed_struct (
    const ::Param_Test::Fixed_Struct & s1,
    ::Param_Test::Fixed_Struct & s2,
    ::Param_Test::Fixed_Struct_out s3) = 0;

  static void test_fixed_struct_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::PathSpec * test_unbounded_struct_sequence (
    const ::Param_Test::PathSpec & s1,
    ::Param_Test::PathSpec & s2,
    ::Param_Test::PathSpec_out s3) = 0;

  static void test_unbounded_struct_sequence_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Short_Seq * test_short_sequence (
    const ::Param_Test::Short_Seq & s1,
    ::Param_Test::Short_Seq & s2,
    ::Param_Test::Short_Seq_out s3) = 0;

  static void test_short_sequence_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Bounded_Short_Seq * test_bounded_short_sequence (
    const ::Param_Test::Bounded_Short_Seq & s1,
    ::Param_Test::Bounded_Short_Seq & s2,
    ::Param_Test::Bounded_Short_Seq_out s3) = 0;

  static void test_bounded_short_sequence_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Long_Seq * test_long_sequence (
    const ::Param_Test::Long_Seq & s1,
    ::Param_Test::Long_Seq & s2,
    ::Param_Test::Long_Seq_out s3) = 0;

  static void test_long_sequence_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Bounded_Long_Seq * test_bounded_long_sequence (
    const ::Param_Test::Bounded_Long_Seq & s1,
    ::Param_Test::Bounded_Long_Seq & s2,
    ::Param_Test::Bounded_Long_Seq_out s3) = 0;

  static void test_bounded_long_sequence_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::StrSeq * test_strseq (
    const ::Param_Test::StrSeq & s1,
    ::Param_Test::StrSeq & s2,
    ::Param_Test::StrSeq_out s3) = 0;

  static void test_strseq_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Bounded_StrSeq * test_bounded_strseq (
    const ::Param_Test::Bounded_StrSeq & s1,
    ::Param_Test::Bounded_StrSeq & s2,
    ::Param_Test::Bounded_StrSeq_out s3) = 0;

  static void test_bounded_strseq_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::WStrSeq * test_wstrseq (
    const ::Param_Test::WStrSeq & ws1,
    ::Param_Test::WStrSeq & ws2,
    ::Param_Test::WStrSeq_out ws3) = 0;

  static void test_wstrseq_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Bounded_WStrSeq * test_bounded_wstrseq (
    const ::Param_Test::Bounded_WStrSeq & ws1,
    ::Param_Test::Bounded_WStrSeq & ws2,
    ::Param_Test::Bounded_WStrSeq_out ws3) = 0;

  static void test_bounded_wstrseq_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::StructSeq * test_struct_sequence (
    const ::Param_Test::StructSeq & s1,
    ::Param_Test::StructSeq & s2,
    ::Param_Test::StructSeq_out s3) = 0;

  static void test_struct_sequence_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Bounded_StructSeq * test_bounded_struct_sequence (
    const ::Param_Test::Bounded_StructSeq & s1,
    ::Param_Test::Bounded_StructSeq & s2,
    ::Param_Test::Bounded_StructSeq_out s3) = 0;

  static void test_bounded_struct_sequence_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Coffee_Mix * test_coffe_mix (
    const ::Param_Test::Coffee_Mix & s1,
    ::Param_Test::Coffee_Mix & s2,
    ::Param_Test::Coffee_Mix_out s3) = 0;

  static void test_coffe_mix_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Bounded_Coffee_Mix * test_bounded_coffe_mix (
    const ::Param_Test::Bounded_Coffee_Mix & s1,
    ::Param_Test::Bounded_Coffee_Mix & s2,
    ::Param_Test::Bounded_Coffee_Mix_out s3) = 0;

  static void test_bounded_coffe_mix_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::AnySeq * test_anyseq (
    const ::Param_Test::AnySeq & s1,
    ::Param_Test::AnySeq & s2,
    ::Param_Test::AnySeq_out s3) = 0;

  static void test_anyseq_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Var_Struct * test_var_struct (
    const ::Param_Test::Var_Struct & s1,
    ::Param_Test::Var_Struct & s2,
    ::Param_Test::Var_Struct_out s3) = 0;

  static void test_var_struct_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Nested_Struct * test_nested_struct (
    const ::Param_Test::Nested_Struct & s1,
    ::Param_Test::Nested_Struct & s2,
    ::Param_Test::Nested_Struct_out s3) = 0;

  static void test_nested_struct_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Coffee_ptr make_coffee (
    void) = 0;

  static void make_coffee_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Coffee_ptr test_objref (
    ::Coffee_ptr o1,
    ::Coffee_ptr & o2,
    ::Coffee_out o3) = 0;

  static void test_objref_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::TypeCode_ptr test_typecode (
    ::CORBA::TypeCode_ptr t1,
    ::CORBA::TypeCode_ptr & t2,
    ::CORBA::TypeCode_out t3) = 0;

  static void test_typecode_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::Any * test_any (
    const ::CORBA::Any & a1,
    ::CORBA::Any & a2,
    ::CORBA::Any_out a3) = 0;

  static void test_any_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Objref_Struct * test_objref_struct (
    const ::Param_Test::Objref_Struct & t1,
    ::Param_Test::Objref_Struct & t2,
    ::Param_Test::Objref_Struct_out t3) = 0;

  static void test_objref_struct_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Fixed_Array_slice * test_fixed_array (
    const ::Param_Test::Fixed_Array l1,
    ::Param_Test::Fixed_Array l2,
    ::Param_Test::Fixed_Array_out l3) = 0;

  static void test_fixed_array_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Var_Array_slice * test_var_array (
    const ::Param_Test::Var_Array v1,
    ::Param_Test::Var_Array v2,
    ::Param_Test::Var_Array_out v3) = 0;

  static void test_var_array_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::ArraySeq * test_array_sequence (
    const ::Param_Test::ArraySeq & s1,
    ::Param_Test::ArraySeq & s2,
    ::Param_Test::ArraySeq_out s3) = 0;

  static void test_array_sequence_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Bounded_ArraySeq * test_bounded_array_sequence (
    const ::Param_Test::Bounded_ArraySeq & s1,
    ::Param_Test::Bounded_ArraySeq & s2,
    ::Param_Test::Bounded_ArraySeq_out s3) = 0;

  static void test_bounded_array_sequence_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::ULong test_exception (
    ::CORBA::ULong s1,
    ::CORBA::ULong & s2,
    ::CORBA::ULong_out s3) = 0;

  static void test_exception_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Big_Union * test_big_union (
    const ::Param_Test::Big_Union & u1,
    ::Param_Test::Big_Union & u2,
    ::Param_Test::Big_Union_out u3) = 0;

  static void test_big_union_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Small_Union test_small_union (
    const ::Param_Test::Small_Union & u1,
    ::Param_Test::Small_Union & u2,
    ::Param_Test::Small_Union_out u3) = 0;

  static void test_small_union_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::Any * test_complex_any (
    const ::CORBA::Any & ca1,
    ::CORBA::Any & ca2,
    ::CORBA::Any_out ca3) = 0;

  static void test_complex_any_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Recursive_Struct * test_recursive_struct (
    const ::Param_Test::Recursive_Struct & rs1,
    ::Param_Test::Recursive_Struct & rs2,
    ::Param_Test::Recursive_Struct_out rs3) = 0;

  static void test_recursive_struct_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Recursive_Union * test_recursive_union (
    const ::Param_Test::Recursive_Union & ru1,
    ::Param_Test::Recursive_Union & ru2,
    ::Param_Test::Recursive_Union_out ru3) = 0;

  static void test_recursive_union_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Param_Test::Multdim_Array_slice * test_multdim_array (
    const ::Param_Test::Multdim_Array m1,
    ::Param_Test::Multdim_Array m2,
    ::Param_Test::Multdim_Array_out m3) = 0;

  static void test_multdim_array_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

#include /**/ "ace/post.h"

#endif /* ifndef */

