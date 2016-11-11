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


#include "alt_mappingC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
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
#include "tao/Vector_CDR_T.h"
#include "tao/AnyTypeCode/Vector_AnyOp_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "alt_mappingC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Alt_Mapping.

Alt_Mapping_ptr
TAO::Objref_Traits<Alt_Mapping>::duplicate (
    Alt_Mapping_ptr p)
{
  return Alt_Mapping::_duplicate (p);
}

void
TAO::Objref_Traits<Alt_Mapping>::release (
    Alt_Mapping_ptr p)
{
  ::CORBA::release (p);
}

Alt_Mapping_ptr
TAO::Objref_Traits<Alt_Mapping>::nil (void)
{
  return Alt_Mapping::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Alt_Mapping>::marshal (
    const Alt_Mapping_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

std::string
Alt_Mapping::test_unbounded_string (
  const std::string s1,
  std::string & s2,
  std::string & s3)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< std::string>::ret_val _tao_retval;
  TAO::Arg_Traits< std::string>::in_arg_val _tao_s1 (s1);
  TAO::Arg_Traits< std::string>::inout_arg_val _tao_s2 (s2);
  TAO::Arg_Traits< std::string>::out_arg_val _tao_s3 (s3);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_s1,
      &_tao_s2,
      &_tao_s3
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      4,
      "test_unbounded_string",
      21,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_Alt_Mapping_Fixed_Struct[] =
      {
        { "l", &CORBA::_tc_long },
        { "c", &CORBA::_tc_char },
        { "s", &CORBA::_tc_short },
        { "o", &CORBA::_tc_octet },
        { "f", &CORBA::_tc_float },
        { "b", &CORBA::_tc_boolean },
        { "d", &CORBA::_tc_double }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_Alt_Mapping_Fixed_Struct (
  ::CORBA::tk_struct,
  "IDL:Alt_Mapping/Fixed_Struct:1.0",
  "Fixed_Struct",
  _tao_fields_Alt_Mapping_Fixed_Struct,
  7);

::CORBA::TypeCode_ptr const Alt_Mapping::_tc_Fixed_Struct =
  &_tao_tc_Alt_Mapping_Fixed_Struct;

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
Alt_Mapping::Fixed_Struct::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Fixed_Struct *_tao_tmp_pointer =
    static_cast<Fixed_Struct *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:49



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:461


#ifndef _TAO_TYPECODE_Alt_Mapping_StructSeq_GUARD
#define _TAO_TYPECODE_Alt_Mapping_StructSeq_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        Alt_Mapping_StructSeq_0 (
          ::CORBA::tk_sequence,
          &Alt_Mapping::_tc_Fixed_Struct,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_Alt_Mapping_StructSeq_0 =
        &Alt_Mapping_StructSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_Alt_Mapping_StructSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Alt_Mapping_StructSeq (
    ::CORBA::tk_alias,
    "IDL:Alt_Mapping/StructSeq:1.0",
    "StructSeq",
    &TAO::TypeCode::tc_Alt_Mapping_StructSeq_0);
  
::CORBA::TypeCode_ptr const Alt_Mapping::_tc_StructSeq =
  &_tao_tc_Alt_Mapping_StructSeq;

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::Alt_Mapping::StructSeq
Alt_Mapping::test_struct_sequence (
  const ::Alt_Mapping::StructSeq & s1,
  ::Alt_Mapping::StructSeq & s2,
  ::Alt_Mapping::StructSeq & s3)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::Alt_Mapping::StructSeq>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Alt_Mapping::StructSeq>::in_arg_val _tao_s1 (s1);
  TAO::Arg_Traits< ::Alt_Mapping::StructSeq>::inout_arg_val _tao_s2 (s2);
  TAO::Arg_Traits< ::Alt_Mapping::StructSeq>::out_arg_val _tao_s3 (s3);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_s1,
      &_tao_s2,
      &_tao_s3
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      4,
      "test_struct_sequence",
      20,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Alt_Mapping::shutdown (
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

Alt_Mapping::Alt_Mapping (void)
{
}

Alt_Mapping::~Alt_Mapping (void)
{
}

void
Alt_Mapping::_tao_any_destructor (void *_tao_void_pointer)
{
  Alt_Mapping *_tao_tmp_pointer =
    static_cast<Alt_Mapping *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Alt_Mapping_ptr
Alt_Mapping::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Alt_Mapping>::narrow (
        _tao_objref,
        "IDL:Alt_Mapping:1.0");
}

Alt_Mapping_ptr
Alt_Mapping::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Alt_Mapping>::unchecked_narrow (
        _tao_objref);
}

Alt_Mapping_ptr
Alt_Mapping::_nil (void)
{
  return 0;
}

Alt_Mapping_ptr
Alt_Mapping::_duplicate (Alt_Mapping_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Alt_Mapping::_tao_release (Alt_Mapping_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Alt_Mapping::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Alt_Mapping:1.0"
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

const char* Alt_Mapping::_interface_repository_id (void) const
{
  return "IDL:Alt_Mapping:1.0";
}

::CORBA::Boolean
Alt_Mapping::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Alt_Mapping (
    ::CORBA::tk_objref,
    "IDL:Alt_Mapping:1.0",
    "Alt_Mapping");
  
::CORBA::TypeCode_ptr const _tc_Alt_Mapping =
  &_tao_tc_Alt_Mapping;

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Alt_Mapping>::to_object (
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
    Alt_Mapping_ptr _tao_elem)
{
  Alt_Mapping_ptr _tao_objptr =
    Alt_Mapping::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Alt_Mapping_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Alt_Mapping>::insert (
      _tao_any,
      Alt_Mapping::_tao_any_destructor,
      _tc_Alt_Mapping,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Alt_Mapping_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Alt_Mapping>::extract (
        _tao_any,
        Alt_Mapping::_tao_any_destructor,
        _tc_Alt_Mapping,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const Alt_Mapping::Fixed_Struct &_tao_elem)
{
  TAO::Any_Dual_Impl_T<Alt_Mapping::Fixed_Struct>::insert_copy (
    _tao_any,
    Alt_Mapping::Fixed_Struct::_tao_any_destructor,
    Alt_Mapping::_tc_Fixed_Struct,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  Alt_Mapping::Fixed_Struct *_tao_elem)
{
  TAO::Any_Dual_Impl_T<Alt_Mapping::Fixed_Struct>::insert (
    _tao_any,
    Alt_Mapping::Fixed_Struct::_tao_any_destructor,
    Alt_Mapping::_tc_Fixed_Struct,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  Alt_Mapping::Fixed_Struct *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const Alt_Mapping::Fixed_Struct *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const Alt_Mapping::Fixed_Struct *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<Alt_Mapping::Fixed_Struct>::extract (
      _tao_any,
      Alt_Mapping::Fixed_Struct::_tao_any_destructor,
      Alt_Mapping::_tc_Fixed_Struct,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_cs.cpp:45


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


void operator<<= (
  ::CORBA::Any &_tao_any,
  const std::vector<Alt_Mapping::Fixed_Struct> &_tao_elem)
{
  TAO::insert_value_vector<Alt_Mapping::Fixed_Struct> (
    _tao_any,
    _tao_elem);
}

::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  std::vector<Alt_Mapping::Fixed_Struct> &_tao_elem)
{
  return
    TAO::extract_value_vector<Alt_Mapping::Fixed_Struct> (
      _tao_any,
      _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Alt_Mapping::Fixed_Struct &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.l) &&
    (strm << ::ACE_OutputCDR::from_char (_tao_aggregate.c)) &&
    (strm << _tao_aggregate.s) &&
    (strm << ::ACE_OutputCDR::from_octet (_tao_aggregate.o)) &&
    (strm << _tao_aggregate.f) &&
    (strm << ::ACE_OutputCDR::from_boolean (_tao_aggregate.b)) &&
    (strm << _tao_aggregate.d);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Alt_Mapping::Fixed_Struct &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.l) &&
    (strm >> ::ACE_InputCDR::to_char (_tao_aggregate.c)) &&
    (strm >> _tao_aggregate.s) &&
    (strm >> ::ACE_InputCDR::to_octet (_tao_aggregate.o)) &&
    (strm >> _tao_aggregate.f) &&
    (strm >> ::ACE_InputCDR::to_boolean (_tao_aggregate.b)) &&
    (strm >> _tao_aggregate.d);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_Alt_Mapping_StructSeq_CPP_
#define _TAO_CDR_OP_Alt_Mapping_StructSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
  TAO_OutputCDR &strm,
  const std::vector<Alt_Mapping::Fixed_Struct> &_tao_vector)
{
  ::CORBA::ULong length = _tao_vector.size ();
  strm << length;

  for ( ::CORBA::ULong i = 0UL; i < length; ++i)
    {
      if (! (strm << _tao_vector[i]))
        {
          return false;
        }
    }
  
  return true;
}

::CORBA::Boolean operator>> (
  TAO_InputCDR &strm,
  std::vector<Alt_Mapping::Fixed_Struct> &_tao_vector)
{
  ::CORBA::ULong length = 0UL;
  Alt_Mapping::Fixed_Struct tmp;

  if (! (strm >> length))
    {
      return false;
    }
  
  _tao_vector.resize (length);

  for ( ::CORBA::ULong i = 0UL; i < length; ++i)
    {
      if (! (strm >> tmp))
        {
          return false;
        }
      
      _tao_vector[i] = tmp;
    }
  
  return true;
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Alt_Mapping_StructSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Alt_Mapping_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Alt_Mapping_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Alt_Mapping RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



