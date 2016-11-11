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
// be/be_codegen.cpp:373


#include "testC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_ANYSEQ_CS_)
#define _ANYSEQ_CS_

AnySeq::AnySeq (void)
{}

AnySeq::AnySeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Any
      > (max)
{}

AnySeq::AnySeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Any * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Any
      >
    (max, length, buffer, release)
{}

AnySeq::AnySeq (
    const AnySeq &seq)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Any
      > (seq)
{}

AnySeq::~AnySeq (void)
{}

void AnySeq::_tao_any_destructor (
    void * _tao_void_pointer)
{
  AnySeq * _tao_tmp_pointer =
    static_cast<AnySeq *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:49



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:461


#ifndef _TAO_TYPECODE_AnySeq_GUARD
#define _TAO_TYPECODE_AnySeq_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        AnySeq_0 (
          ::CORBA::tk_sequence,
          &CORBA::_tc_any,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_AnySeq_0 =
        &AnySeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_AnySeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_AnySeq (
    ::CORBA::tk_alias,
    "IDL:AnySeq:1.0",
    "AnySeq",
    &TAO::TypeCode::tc_AnySeq_0);
  
::CORBA::TypeCode_ptr const _tc_AnySeq =
  &_tao_tc_AnySeq;

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_Container[] =
      {
        { "contents", &CORBA::_tc_any }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_Container (
  ::CORBA::tk_struct,
  "IDL:Container:1.0",
  "Container",
  _tao_fields_Container,
  1);

::CORBA::TypeCode_ptr const _tc_Container =
  &_tao_tc_Container;

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
Container::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Container *_tao_tmp_pointer =
    static_cast<Container *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_Inner[] =
      {
        { "value1", &CORBA::_tc_long },
        { "value2", &CORBA::_tc_long },
        { "value3", &CORBA::_tc_long },
        { "value4", &CORBA::_tc_long },
        { "value5", &CORBA::_tc_long }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_Inner (
  ::CORBA::tk_struct,
  "IDL:Inner:1.0",
  "Inner",
  _tao_fields_Inner,
  5);

::CORBA::TypeCode_ptr const _tc_Inner =
  &_tao_tc_Inner;

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
Inner::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Inner *_tao_tmp_pointer =
    static_cast<Inner *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test.

Test_ptr
TAO::Objref_Traits<Test>::duplicate (
    Test_ptr p)
{
  return Test::_duplicate (p);
}

void
TAO::Objref_Traits<Test>::release (
    Test_ptr p)
{
  ::CORBA::release (p);
}

Test_ptr
TAO::Objref_Traits<Test>::nil (void)
{
  return Test::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test>::marshal (
    const Test_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::AnySeq *
Test::RunTest (
  const ::AnySeq & params)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::AnySeq>::ret_val _tao_retval;
  TAO::Arg_Traits< ::AnySeq>::in_arg_val _tao_params (params);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_params
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "RunTest",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::shutdown (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

Test::Test (void)
{
}

Test::~Test (void)
{
}

void
Test::_tao_any_destructor (void *_tao_void_pointer)
{
  Test *_tao_tmp_pointer =
    static_cast<Test *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Test_ptr
Test::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Test>::narrow (
        _tao_objref,
        "IDL:Test:1.0");
}

Test_ptr
Test::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Test>::unchecked_narrow (
        _tao_objref);
}

Test_ptr
Test::_nil (void)
{
  return 0;
}

Test_ptr
Test::_duplicate (Test_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::_tao_release (Test_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* Test::_interface_repository_id (void) const
{
  return "IDL:Test:1.0";
}

::CORBA::Boolean
Test::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Test (
    ::CORBA::tk_objref,
    "IDL:Test:1.0",
    "Test");
  
::CORBA::TypeCode_ptr const _tc_Test =
  &_tao_tc_Test;

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_cs.cpp:45


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const AnySeq &_tao_elem)
{
  TAO::Any_Dual_Impl_T<AnySeq>::insert_copy (
      _tao_any,
      AnySeq::_tao_any_destructor,
      _tc_AnySeq,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    AnySeq *_tao_elem)
{
  TAO::Any_Dual_Impl_T<AnySeq>::insert (
      _tao_any,
      AnySeq::_tao_any_destructor,
      _tc_AnySeq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    AnySeq *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const AnySeq *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const AnySeq *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<AnySeq>::extract (
        _tao_any,
        AnySeq::_tao_any_destructor,
        _tc_AnySeq,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const Container &_tao_elem)
{
  TAO::Any_Dual_Impl_T<Container>::insert_copy (
    _tao_any,
    Container::_tao_any_destructor,
    _tc_Container,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  Container *_tao_elem)
{
  TAO::Any_Dual_Impl_T<Container>::insert (
    _tao_any,
    Container::_tao_any_destructor,
    _tc_Container,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  Container *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const Container *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const Container *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<Container>::extract (
      _tao_any,
      Container::_tao_any_destructor,
      _tc_Container,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const Inner &_tao_elem)
{
  TAO::Any_Dual_Impl_T<Inner>::insert_copy (
    _tao_any,
    Inner::_tao_any_destructor,
    _tc_Inner,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  Inner *_tao_elem)
{
  TAO::Any_Dual_Impl_T<Inner>::insert (
    _tao_any,
    Inner::_tao_any_destructor,
    _tc_Inner,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  Inner *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const Inner *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const Inner *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<Inner>::extract (
      _tao_any,
      Inner::_tao_any_destructor,
      _tc_Inner,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Test>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test_ptr _tao_elem)
{
  Test_ptr _tao_objptr =
    Test::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Test>::insert (
      _tao_any,
      Test::_tao_any_destructor,
      _tc_Test,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Test_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Test>::extract (
        _tao_any,
        Test::_tao_any_destructor,
        _tc_Test,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_AnySeq_CPP_
#define _TAO_CDR_OP_AnySeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const AnySeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    AnySeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_AnySeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Container &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.contents);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Container &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.contents);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Inner &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.value1) &&
    (strm << _tao_aggregate.value2) &&
    (strm << _tao_aggregate.value3) &&
    (strm << _tao_aggregate.value4) &&
    (strm << _tao_aggregate.value5);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Inner &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.value1) &&
    (strm >> _tao_aggregate.value2) &&
    (strm >> _tao_aggregate.value3) &&
    (strm >> _tao_aggregate.value4) &&
    (strm >> _tao_aggregate.value5);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Test RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



