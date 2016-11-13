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
// be/be_codegen.cpp:149

#ifndef _TAO_IDL_TESTC_YI44KE_H_
#define _TAO_IDL_TESTC_YI44KE_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Array_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/BD_String_Argument_T.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Object_Argument_T.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"
#include "tao/Fixed_Array_Argument_T.h"
#include "tao/Var_Array_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 4 || TAO_MICRO_VERSION != 1
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO

// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:157
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:35

namespace Test
{

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:35

  const CORBA::ULong FIX_ARRAY_SIZE = 10U;

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:35

  const CORBA::ULong VAR_ARRAY_SIZE = 3U;

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:35

  const CORBA::ULong BOUNDED_STRING_SIZE = 10U;

  // TAO_IDL - Generated from
  // be/be_visitor_constant/constant_ch.cpp:35

  const CORBA::ULong BOUNDED_VAR_SIZE = 10U;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_BOUNDED_VAR_SIZE_ARG_CH_)
#define _TEST_BOUNDED_VAR_SIZE_ARG_CH_

  class Bounded_Var_Size_Arg;

  typedef
    ::TAO_FixedSeq_Var_T<
        Bounded_Var_Size_Arg
      >
    Bounded_Var_Size_Arg_var;

  typedef
    ::TAO_Seq_Out_T<
        Bounded_Var_Size_Arg
      >
    Bounded_Var_Size_Arg_out;

  class  Bounded_Var_Size_Arg
    : public
        ::TAO::bounded_value_sequence<
            ::CORBA::Char,
            10
          >
  {
  public:
    Bounded_Var_Size_Arg (void);
    Bounded_Var_Size_Arg (
      ::CORBA::ULong length,
      ::CORBA::Char* buffer,
      ::CORBA::Boolean release = false);
    Bounded_Var_Size_Arg (const Bounded_Var_Size_Arg &);
    virtual ~Bounded_Var_Size_Arg (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef Bounded_Var_Size_Arg_var _var_type;
    typedef Bounded_Var_Size_Arg_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Bounded_Var_Size_Arg;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_UNBOUNDED_VAR_SIZE_ARG_CH_)
#define _TEST_UNBOUNDED_VAR_SIZE_ARG_CH_

  class Unbounded_Var_Size_Arg;

  typedef
    ::TAO_FixedSeq_Var_T<
        Unbounded_Var_Size_Arg
      >
    Unbounded_Var_Size_Arg_var;

  typedef
    ::TAO_Seq_Out_T<
        Unbounded_Var_Size_Arg
      >
    Unbounded_Var_Size_Arg_out;

  class  Unbounded_Var_Size_Arg
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Char
          >
  {
  public:
    Unbounded_Var_Size_Arg (void);
    Unbounded_Var_Size_Arg ( ::CORBA::ULong max);
    Unbounded_Var_Size_Arg (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Char* buffer,
      ::CORBA::Boolean release = false);
    Unbounded_Var_Size_Arg (const Unbounded_Var_Size_Arg &);
    virtual ~Unbounded_Var_Size_Arg (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef Unbounded_Var_Size_Arg_var _var_type;
    typedef Unbounded_Var_Size_Arg_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Unbounded_Var_Size_Arg;

  // TAO_IDL - Generated from
  // be/be_visitor_array/array_ch.cpp:52

  typedef ::CORBA::Long Fixed_Array[10];
  typedef ::CORBA::Long Fixed_Array_slice;
  struct Fixed_Array_tag {};


  typedef
    TAO_FixedArray_Var_T<
        Fixed_Array,
        Fixed_Array_slice,
        Fixed_Array_tag
      >
    Fixed_Array_var;

  typedef
    Fixed_Array
    Fixed_Array_out;

  typedef
    TAO_Array_Forany_T<
        Fixed_Array,
        Fixed_Array_slice,
        Fixed_Array_tag
      >
    Fixed_Array_forany;

  TAO_NAMESPACE_STORAGE_CLASS Fixed_Array_slice *
  Fixed_Array_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  Fixed_Array_free (
      Fixed_Array_slice *_tao_slice);

  TAO_NAMESPACE_STORAGE_CLASS Fixed_Array_slice *
  Fixed_Array_dup (
      const Fixed_Array_slice *_tao_slice);

  TAO_NAMESPACE_STORAGE_CLASS void
  Fixed_Array_copy (
      Fixed_Array_slice *_tao_to,
      const Fixed_Array_slice *_tao_from);

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Fixed_Array;

  // TAO_IDL - Generated from
  // be/be_visitor_array/array_ch.cpp:52

  typedef ::TAO::String_Manager Var_Array[3];
  typedef ::TAO::String_Manager Var_Array_slice;
  struct Var_Array_tag {};


  typedef
    TAO_VarArray_Var_T<
        Var_Array,
        Var_Array_slice,
        Var_Array_tag
      >
    Var_Array_var;

  typedef
    TAO_Array_Out_T<
        Var_Array,
        Var_Array_var,
        Var_Array_slice,
        Var_Array_tag
      >
    Var_Array_out;

  typedef
    TAO_Array_Forany_T<
        Var_Array,
        Var_Array_slice,
        Var_Array_tag
      >
    Var_Array_forany;

  TAO_NAMESPACE_STORAGE_CLASS Var_Array_slice *
  Var_Array_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  Var_Array_free (
      Var_Array_slice *_tao_slice);

  TAO_NAMESPACE_STORAGE_CLASS Var_Array_slice *
  Var_Array_dup (
      const Var_Array_slice *_tao_slice);

  TAO_NAMESPACE_STORAGE_CLASS void
  Var_Array_copy (
      Var_Array_slice *_tao_to,
      const Var_Array_slice *_tao_from);

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Var_Array;

  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:404

  typedef char * Bounded_String;
  typedef ::CORBA::String_var Bounded_String_var;
  typedef ::CORBA::String_out Bounded_String_out;

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Bounded_String;

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct TimeOfDay;

  typedef
    ::TAO_Fixed_Var_T<
        TimeOfDay
      >
    TimeOfDay_var;

  typedef
    TimeOfDay &
    TimeOfDay_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  TimeOfDay
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef TimeOfDay_var _var_type;
    typedef TimeOfDay_out _out_type;

    static void _tao_any_destructor (void *);

    ::CORBA::Short hour;
    ::CORBA::Short minute;
    ::CORBA::Short second;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_TimeOfDay;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_SIMPLE_TEST__VAR_OUT_CH_)
#define _TEST_SIMPLE_TEST__VAR_OUT_CH_

  class Simple_Test;
  typedef Simple_Test *Simple_Test_ptr;

  typedef
    TAO_Objref_Var_T<
        Simple_Test
      >
    Simple_Test_var;

  typedef
    TAO_Objref_Out_T<
        Simple_Test
      >
    Simple_Test_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Simple_Test
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Simple_Test>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Simple_Test_ptr _ptr_type;
    typedef Simple_Test_var _var_type;
    typedef Simple_Test_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Simple_Test_ptr _duplicate (Simple_Test_ptr obj);

    static void _tao_release (Simple_Test_ptr obj);

    static Simple_Test_ptr _narrow (::CORBA::Object_ptr obj);
    static Simple_Test_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Simple_Test_ptr _nil (void);

    virtual void test_method (
      ::CORBA::ULong & error_count);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Simple_Test (void);

    // Concrete non-local interface only.
    Simple_Test (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Simple_Test (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Simple_Test (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Simple_Test (const Simple_Test &);

    void operator= (const Simple_Test &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Simple_Test;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_HELLO__VAR_OUT_CH_)
#define _TEST_HELLO__VAR_OUT_CH_

  class Hello;
  typedef Hello *Hello_ptr;

  typedef
    TAO_Objref_Var_T<
        Hello
      >
    Hello_var;

  typedef
    TAO_Objref_Out_T<
        Hello
      >
    Hello_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Hello
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Hello>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Hello_ptr _ptr_type;
    typedef Hello_var _var_type;
    typedef Hello_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Hello_ptr _duplicate (Hello_ptr obj);

    static void _tao_release (Hello_ptr obj);

    static Hello_ptr _narrow (::CORBA::Object_ptr obj);
    static Hello_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Hello_ptr _nil (void);

    virtual void test_basic_arg (
      ::CORBA::Long inval,
      ::CORBA::Long_out outval);

    virtual void test_unbounded_string_arg (
      const char * message);

    virtual void test_unbounded_string_arg_out (
      const char * message,
      ::CORBA::String_out out_message);

    virtual void test_bounded_string_arg (
      const char * message);

    virtual void test_fixed_array_arg (
      const ::Test::Fixed_Array message);

    virtual void test_var_array_arg (
      const ::Test::Var_Array messages);

    virtual void test_bounded_var_size_arg (
      const ::Test::Bounded_Var_Size_Arg & message);

    virtual void test_unbounded_var_size_arg (
      const ::Test::Unbounded_Var_Size_Arg & message);

    virtual void test_fixed_size_arg (
      const ::Test::TimeOfDay & t);

    virtual void test_special_basic_arg (
      ::CORBA::Char value);

    virtual void test_objref_arg (
      ::Test::Simple_Test_ptr test);

    virtual void test_object_arg (
      ::CORBA::Object_ptr o);

    virtual void test_args_1 (
      ::CORBA::Object_ptr arg1,
      ::CORBA::Char arg2,
      ::Test::Simple_Test_ptr arg3);

    virtual void test_args_2 (
      const char * arg1,
      const ::Test::Fixed_Array arg2,
      const ::Test::TimeOfDay & arg3);

    virtual void test_args_3 (
      const char * arg1,
      const ::Test::Bounded_Var_Size_Arg & arg2,
      const ::Test::Unbounded_Var_Size_Arg & arg3,
      const ::Test::Var_Array arg4);

    virtual char * get_string (
      void);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Hello (void);

    // Concrete non-local interface only.
    Hello (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Hello (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Hello (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Hello (const Hello &);

    void operator= (const Hello &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Hello;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Test

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::Bounded_Var_Size_Arg>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::Bounded_Var_Size_Arg,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::Unbounded_Var_Size_Arg>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::Unbounded_Var_Size_Arg,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class Arg_Traits< ::Test::Fixed_Array_tag>
    : public
        Fixed_Array_Arg_Traits_T<
            ::Test::Fixed_Array_var,
            ::Test::Fixed_Array_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class Arg_Traits< ::Test::Var_Array_tag>
    : public
        Var_Array_Arg_Traits_T<
            ::Test::Var_Array_out,
            ::Test::Var_Array_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#if !defined (_BOUNDED_STRING10__ARG_TRAITS_)
#define _BOUNDED_STRING10__ARG_TRAITS_

  struct Bounded_String_10 {};

  template<>
  class Arg_Traits<Bounded_String_10>
    : public
        BD_String_Arg_Traits_T<
            CORBA::String_var,
            10,
            TAO::Any_Insert_Policy_Stream
        >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Test::TimeOfDay>
    : public
        Fixed_Size_Arg_Traits_T<
            ::Test::TimeOfDay,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_SIMPLE_TEST__ARG_TRAITS_)
#define _TEST_SIMPLE_TEST__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Simple_Test>
    : public
        Object_Arg_Traits_T<
            ::Test::Simple_Test_ptr,
            ::Test::Simple_Test_var,
            ::Test::Simple_Test_out,
            TAO::Objref_Traits<Test::Simple_Test>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_HELLO__ARG_TRAITS_)
#define _TEST_HELLO__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Hello>
    : public
        Object_Arg_Traits_T<
            ::Test::Hello_ptr,
            ::Test::Hello_var,
            ::Test::Hello_out,
            TAO::Objref_Traits<Test::Hello>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
  template<>
  struct  Array_Traits<
      Test::Fixed_Array_forany
    >
  {
    static void free (
        Test::Fixed_Array_slice * _tao_slice);
    static Test::Fixed_Array_slice * dup (
        const Test::Fixed_Array_slice * _tao_slice);
    static void copy (
        Test::Fixed_Array_slice * _tao_to,
        const Test::Fixed_Array_slice * _tao_from);
    static Test::Fixed_Array_slice * alloc (void);
    static void zero (
        Test::Fixed_Array_slice * _tao_slice);
  };
  template<>
  struct  Array_Traits<
      Test::Var_Array_forany
    >
  {
    static void free (
        Test::Var_Array_slice * _tao_slice);
    static Test::Var_Array_slice * dup (
        const Test::Var_Array_slice * _tao_slice);
    static void copy (
        Test::Var_Array_slice * _tao_to,
        const Test::Var_Array_slice * _tao_from);
    static Test::Var_Array_slice * alloc (void);
    static void zero (
        Test::Var_Array_slice * _tao_slice);
  };

#if !defined (_TEST_SIMPLE_TEST__TRAITS_)
#define _TEST_SIMPLE_TEST__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Simple_Test>
  {
    static ::Test::Simple_Test_ptr duplicate (
        ::Test::Simple_Test_ptr p);
    static void release (
        ::Test::Simple_Test_ptr p);
    static ::Test::Simple_Test_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Simple_Test_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_HELLO__TRAITS_)
#define _TEST_HELLO__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Hello>
  {
    static ::Test::Hello_ptr duplicate (
        ::Test::Hello_ptr p);
    static void release (
        ::Test::Hello_ptr p);
    static ::Test::Hello_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Hello_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, const ::Test::Bounded_Var_Size_Arg &); // copying version
   void operator<<= ( ::CORBA::Any &, ::Test::Bounded_Var_Size_Arg*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::Bounded_Var_Size_Arg *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::Bounded_Var_Size_Arg *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const Test::Bounded_Var_Size_Arg &); // copying version
 void operator<<= ( ::CORBA::Any &, Test::Bounded_Var_Size_Arg*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Bounded_Var_Size_Arg *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::Bounded_Var_Size_Arg *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, const ::Test::Unbounded_Var_Size_Arg &); // copying version
   void operator<<= ( ::CORBA::Any &, ::Test::Unbounded_Var_Size_Arg*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::Unbounded_Var_Size_Arg *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::Unbounded_Var_Size_Arg *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const Test::Unbounded_Var_Size_Arg &); // copying version
 void operator<<= ( ::CORBA::Any &, Test::Unbounded_Var_Size_Arg*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Unbounded_Var_Size_Arg *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::Unbounded_Var_Size_Arg *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_array/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Test::Fixed_Array_forany &);
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Fixed_Array_forany &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Test::Var_Array_forany &);
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Var_Array_forany &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= (::CORBA::Any &, const ::Test::TimeOfDay &); // copying version
   void operator<<= (::CORBA::Any &, ::Test::TimeOfDay*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::TimeOfDay *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::TimeOfDay *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Test::TimeOfDay &); // copying version
 void operator<<= (::CORBA::Any &, Test::TimeOfDay*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::TimeOfDay *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::TimeOfDay *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, Simple_Test_ptr); // copying
   void operator<<= ( ::CORBA::Any &, Simple_Test_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Simple_Test_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Test::Simple_Test_ptr); // copying
 void operator<<= (::CORBA::Any &, Test::Simple_Test_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Simple_Test_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, Hello_ptr); // copying
   void operator<<= ( ::CORBA::Any &, Hello_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Hello_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Test::Hello_ptr); // copying
 void operator<<= (::CORBA::Any &, Test::Hello_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Hello_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_Bounded_Var_Size_Arg_H_
#define _TAO_CDR_OP_Test_Bounded_Var_Size_Arg_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Bounded_Var_Size_Arg &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Bounded_Var_Size_Arg &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_Bounded_Var_Size_Arg_H_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_Unbounded_Var_Size_Arg_H_
#define _TAO_CDR_OP_Test_Unbounded_Var_Size_Arg_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Unbounded_Var_Size_Arg &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Unbounded_Var_Size_Arg &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_Unbounded_Var_Size_Arg_H_ */

// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_ch.cpp:99


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Test::Fixed_Array_forany &_tao_array);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Fixed_Array_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_ch.cpp:99


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 CORBA::Boolean operator<< (TAO_OutputCDR &strm, const Test::Var_Array_forany &_tao_array);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Var_Array_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::TimeOfDay &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::TimeOfDay &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Simple_Test_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Simple_Test_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Hello_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Hello_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

