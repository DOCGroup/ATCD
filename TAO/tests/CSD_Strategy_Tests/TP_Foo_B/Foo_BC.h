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

#ifndef _TAO_IDL_FOO_BC_BRRLXC_H_
#define _TAO_IDL_FOO_BC_BRRLXC_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "CSD_TP_Foo_B_Export.h"
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

#include "FooExceptionC.h"
#include "CallbackC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 4 || TAO_MICRO_VERSION != 1
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO CSD_TP_Foo_B_Export

// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:157
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_BOUNDED_VAR_SIZE_CH_)
#define _BOUNDED_VAR_SIZE_CH_

class Bounded_Var_Size;

typedef
  ::TAO_FixedSeq_Var_T<
      Bounded_Var_Size
    >
  Bounded_Var_Size_var;

typedef
  ::TAO_Seq_Out_T<
      Bounded_Var_Size
    >
  Bounded_Var_Size_out;

class CSD_TP_Foo_B_Export Bounded_Var_Size
  : public
      ::TAO::bounded_value_sequence<
          ::CORBA::Char,
          32
        >
{
public:
  Bounded_Var_Size (void);
  Bounded_Var_Size (
    ::CORBA::ULong length,
    ::CORBA::Char* buffer,
    ::CORBA::Boolean release = false);
  Bounded_Var_Size (const Bounded_Var_Size &);
  virtual ~Bounded_Var_Size (void);
  

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  
  typedef Bounded_Var_Size_var _var_type;
  typedef Bounded_Var_Size_out _out_type;

  static void _tao_any_destructor (void *);
};

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern CSD_TP_Foo_B_Export ::CORBA::TypeCode_ptr const _tc_Bounded_Var_Size;

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_UNBOUNDED_VAR_SIZE_CH_)
#define _UNBOUNDED_VAR_SIZE_CH_

class Unbounded_Var_Size;

typedef
  ::TAO_FixedSeq_Var_T<
      Unbounded_Var_Size
    >
  Unbounded_Var_Size_var;

typedef
  ::TAO_Seq_Out_T<
      Unbounded_Var_Size
    >
  Unbounded_Var_Size_out;

class CSD_TP_Foo_B_Export Unbounded_Var_Size
  : public
      ::TAO::unbounded_value_sequence<
          ::CORBA::Char
        >
{
public:
  Unbounded_Var_Size (void);
  Unbounded_Var_Size ( ::CORBA::ULong max);
  Unbounded_Var_Size (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Char* buffer,
    ::CORBA::Boolean release = false);
  Unbounded_Var_Size (const Unbounded_Var_Size &);
  virtual ~Unbounded_Var_Size (void);
  

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  
  typedef Unbounded_Var_Size_var _var_type;
  typedef Unbounded_Var_Size_out _out_type;

  static void _tao_any_destructor (void *);
};

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern CSD_TP_Foo_B_Export ::CORBA::TypeCode_ptr const _tc_Unbounded_Var_Size;

// TAO_IDL - Generated from
// be/be_visitor_array/array_ch.cpp:52

typedef ::CORBA::Long Fixed_Array[20];
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

TAO_EXPORT_MACRO Fixed_Array_slice *
Fixed_Array_alloc (void);

TAO_EXPORT_MACRO void
Fixed_Array_free (
    Fixed_Array_slice *_tao_slice);

TAO_EXPORT_MACRO Fixed_Array_slice *
Fixed_Array_dup (
    const Fixed_Array_slice *_tao_slice);

TAO_EXPORT_MACRO void
Fixed_Array_copy (
    Fixed_Array_slice *_tao_to,
    const Fixed_Array_slice *_tao_from);

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern CSD_TP_Foo_B_Export ::CORBA::TypeCode_ptr const _tc_Fixed_Array;

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

TAO_EXPORT_MACRO Var_Array_slice *
Var_Array_alloc (void);

TAO_EXPORT_MACRO void
Var_Array_free (
    Var_Array_slice *_tao_slice);

TAO_EXPORT_MACRO Var_Array_slice *
Var_Array_dup (
    const Var_Array_slice *_tao_slice);

TAO_EXPORT_MACRO void
Var_Array_copy (
    Var_Array_slice *_tao_to,
    const Var_Array_slice *_tao_from);

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern CSD_TP_Foo_B_Export ::CORBA::TypeCode_ptr const _tc_Var_Array;

// TAO_IDL - Generated from
// be/be_visitor_typedef/typedef_ch.cpp:404

typedef char * string_20;
typedef ::CORBA::String_var string_20_var;
typedef ::CORBA::String_out string_20_out;

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern CSD_TP_Foo_B_Export ::CORBA::TypeCode_ptr const _tc_string_20;

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

struct CSD_TP_Foo_B_Export TimeOfDay
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

extern CSD_TP_Foo_B_Export ::CORBA::TypeCode_ptr const _tc_TimeOfDay;

// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_FOO_B__VAR_OUT_CH_)
#define _FOO_B__VAR_OUT_CH_

class Foo_B;
typedef Foo_B *Foo_B_ptr;

typedef
  TAO_Objref_Var_T<
      Foo_B
    >
  Foo_B_var;

typedef
  TAO_Objref_Out_T<
      Foo_B
    >
  Foo_B_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class CSD_TP_Foo_B_Export Foo_B
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Foo_B>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Foo_B_ptr _ptr_type;
  typedef Foo_B_var _var_type;
  typedef Foo_B_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static Foo_B_ptr _duplicate (Foo_B_ptr obj);

  static void _tao_release (Foo_B_ptr obj);

  static Foo_B_ptr _narrow (::CORBA::Object_ptr obj);
  static Foo_B_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Foo_B_ptr _nil (void);

  virtual void op1 (
    void);

  virtual void op2 (
    ::CORBA::Long value);

  virtual ::CORBA::Long op3 (
    ::CORBA::Long value);

  virtual void op4 (
    ::CORBA::Long value);

  virtual void op5 (
    void);

  virtual ::CORBA::Boolean op6 (
    const ::TimeOfDay & t,
    char *& message);

  virtual void op7 (
    ::Callback_ptr cb);

  virtual void test_unbounded_string_arg (
    const char * message);

  virtual void test_bounded_string_arg (
    const char * message);

  virtual void test_fixed_array_arg (
    const ::Fixed_Array message);

  virtual void test_var_array_arg (
    const ::Var_Array messages);

  virtual void test_bounded_var_size_arg (
    const ::Bounded_Var_Size & message);

  virtual void test_unbounded_var_size_arg (
    const ::Unbounded_Var_Size & message);

  virtual void test_fixed_size_arg (
    const ::TimeOfDay & t);

  virtual void test_special_basic_arg (
    ::CORBA::Boolean value,
    ::CORBA::Long client_id);

  virtual void test_objref_arg (
    ::Callback_ptr cb);

  virtual void done (
    void);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Foo_B (void);

  // Concrete non-local interface only.
  Foo_B (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  Foo_B (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Foo_B (void);

private:
  // Private and unimplemented for concrete interfaces.
  Foo_B (const Foo_B &);

  void operator= (const Foo_B &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern CSD_TP_Foo_B_Export ::CORBA::TypeCode_ptr const _tc_Foo_B;

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Bounded_Var_Size>
    : public
        Var_Size_Arg_Traits_T<
            ::Bounded_Var_Size,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Unbounded_Var_Size>
    : public
        Var_Size_Arg_Traits_T<
            ::Unbounded_Var_Size,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class Arg_Traits< ::Fixed_Array_tag>
    : public
        Fixed_Array_Arg_Traits_T<
            ::Fixed_Array_var,
            ::Fixed_Array_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  template<>
  class Arg_Traits< ::Var_Array_tag>
    : public
        Var_Array_Arg_Traits_T<
            ::Var_Array_out,
            ::Var_Array_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#if !defined (_STRING_2020__ARG_TRAITS_)
#define _STRING_2020__ARG_TRAITS_

  struct string_20_20 {};

  template<>
  class Arg_Traits<string_20_20>
    : public
        BD_String_Arg_Traits_T<
            CORBA::String_var,
            20,
            TAO::Any_Insert_Policy_Stream
        >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::TimeOfDay>
    : public
        Fixed_Size_Arg_Traits_T<
            ::TimeOfDay,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FOO_B__ARG_TRAITS_)
#define _FOO_B__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Foo_B>
    : public
        Object_Arg_Traits_T<
            ::Foo_B_ptr,
            ::Foo_B_var,
            ::Foo_B_out,
            TAO::Objref_Traits<Foo_B>,
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
  struct CSD_TP_Foo_B_Export Array_Traits<
      Fixed_Array_forany
    >
  {
    static void free (
        Fixed_Array_slice * _tao_slice);
    static Fixed_Array_slice * dup (
        const Fixed_Array_slice * _tao_slice);
    static void copy (
        Fixed_Array_slice * _tao_to,
        const Fixed_Array_slice * _tao_from);
    static Fixed_Array_slice * alloc (void);
    static void zero (
        Fixed_Array_slice * _tao_slice);
  };
  template<>
  struct CSD_TP_Foo_B_Export Array_Traits<
      Var_Array_forany
    >
  {
    static void free (
        Var_Array_slice * _tao_slice);
    static Var_Array_slice * dup (
        const Var_Array_slice * _tao_slice);
    static void copy (
        Var_Array_slice * _tao_to,
        const Var_Array_slice * _tao_from);
    static Var_Array_slice * alloc (void);
    static void zero (
        Var_Array_slice * _tao_slice);
  };

#if !defined (_FOO_B__TRAITS_)
#define _FOO_B__TRAITS_

  template<>
  struct CSD_TP_Foo_B_Export Objref_Traits< ::Foo_B>
  {
    static ::Foo_B_ptr duplicate (
        ::Foo_B_ptr p);
    static void release (
        ::Foo_B_ptr p);
    static ::Foo_B_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Foo_B_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_B_Export void operator<<= ( ::CORBA::Any &, const Bounded_Var_Size &); // copying version
CSD_TP_Foo_B_Export void operator<<= ( ::CORBA::Any &, Bounded_Var_Size*); // noncopying version
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Bounded_Var_Size *&); // deprecated
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Bounded_Var_Size *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_B_Export void operator<<= ( ::CORBA::Any &, const Unbounded_Var_Size &); // copying version
CSD_TP_Foo_B_Export void operator<<= ( ::CORBA::Any &, Unbounded_Var_Size*); // noncopying version
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Unbounded_Var_Size *&); // deprecated
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Unbounded_Var_Size *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_B_Export void operator<<= (::CORBA::Any &, const Fixed_Array_forany &);
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Fixed_Array_forany &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_B_Export void operator<<= (::CORBA::Any &, const Var_Array_forany &);
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Var_Array_forany &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_B_Export void operator<<= (::CORBA::Any &, const TimeOfDay &); // copying version
CSD_TP_Foo_B_Export void operator<<= (::CORBA::Any &, TimeOfDay*); // noncopying version
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, TimeOfDay *&); // deprecated
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const TimeOfDay *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_B_Export void operator<<= (::CORBA::Any &, Foo_B_ptr); // copying
CSD_TP_Foo_B_Export void operator<<= (::CORBA::Any &, Foo_B_ptr *); // non-copying
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Foo_B_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Bounded_Var_Size_H_
#define _TAO_CDR_OP_Bounded_Var_Size_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


CSD_TP_Foo_B_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bounded_Var_Size &_tao_sequence);
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bounded_Var_Size &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Bounded_Var_Size_H_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Unbounded_Var_Size_H_
#define _TAO_CDR_OP_Unbounded_Var_Size_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


CSD_TP_Foo_B_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Unbounded_Var_Size &_tao_sequence);
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Unbounded_Var_Size &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Unbounded_Var_Size_H_ */

// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_ch.cpp:99


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_B_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const ::Fixed_Array_forany &_tao_array);
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, ::Fixed_Array_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_ch.cpp:99


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_B_Export CORBA::Boolean operator<< (TAO_OutputCDR &strm, const ::Var_Array_forany &_tao_array);
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, ::Var_Array_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_B_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const TimeOfDay &);
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, TimeOfDay &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_B_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Foo_B_ptr );
CSD_TP_Foo_B_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Foo_B_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "Foo_BC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

