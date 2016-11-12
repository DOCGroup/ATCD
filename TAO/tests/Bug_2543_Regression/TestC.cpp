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


#include "TestC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

#if !defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/value_typecode.cpp:65

static TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const _tao_fields_Base[] =
  {
    { "l", &CORBA::_tc_long, ::CORBA::PUBLIC_MEMBER }

  };
static TAO::TypeCode::Value<char const *,
                     ::CORBA::TypeCode_ptr const *,
                     TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const *,
                     TAO::Null_RefCount_Policy>
  _tao_tc_Base (
    ::CORBA::tk_value,
    "IDL:Base:1.0",
    "Base",
    ::CORBA::VM_NONE,
    &::CORBA::_tc_null,
    _tao_fields_Base,
    1);

::CORBA::TypeCode_ptr const _tc_Base =
  &_tao_tc_Base;

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_cs.cpp:53

void
TAO::Value_Traits<Base>::add_ref (
    Base * p)
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<Base>::remove_ref (
    Base * p)
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<Base>::release (
    Base * p)
{
  ::CORBA::remove_ref (p);
}

Base *
Base::_downcast ( ::CORBA::ValueBase *v)
{
  return dynamic_cast< ::Base * > (v);
}

const char *
Base::_tao_obv_repository_id (void) const
{
  return this->_tao_obv_static_repository_id ();
}

void
Base::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

void
Base::_tao_any_destructor (void *_tao_void_pointer)
{
  Base *_tao_tmp_pointer =
    static_cast<Base *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr Base::_tao_type (void) const
{
  return ::_tc_Base;
}

Base::~Base (void)
{}

::CORBA::Boolean
Base::_tao_marshal_v (TAO_OutputCDR & strm) const
{
  TAO_ChunkInfo ci (this->is_truncatable_ || this->chunking_);
  return this->_tao_marshal__Base (strm, ci);
}

::CORBA::Boolean
Base::_tao_unmarshal_v (TAO_InputCDR & strm)
{
  TAO_ChunkInfo ci (this->is_truncatable_ || this->chunking_, 1);
  return this->_tao_unmarshal__Base (strm,ci);
}

::CORBA::Boolean
Base::_tao_match_formal_type (ptrdiff_t formal_type_id) const
{
  return formal_type_id == reinterpret_cast<ptrdiff_t> (Base::_downcast);
}

::CORBA::Boolean
Base::_tao_unmarshal (
    TAO_InputCDR &strm,
    Base *&new_object
  )
{
  ::CORBA::ValueBase *base = 0;
  ::CORBA::Boolean is_indirected = false;
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean const retval =
    ::CORBA::ValueBase::_tao_unmarshal_pre (
        strm,
        base,
        Base::_tao_obv_static_repository_id (),
        is_null_object,
        is_indirected
      );

  ::CORBA::ValueBase_var owner (base);

  if (!retval)
    return false;

  if (is_null_object)
    return true;

  if (!is_indirected && !base->_tao_unmarshal_v (strm))
    return false;

  // Now base must point to the unmarshaled object.
  // Align the pointer to the right subobject.
  new_object = Base::_downcast (base);
  if (0 == new_object)
    return false;

  if (is_indirected)
    new_object->_add_ref ();

  owner._retn ();
  return true;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_init_cs.cpp:73

Base_init::Base_init (void)
{
}

Base_init::~Base_init (void)
{
}

Base_init *
Base_init::_downcast ( ::CORBA::ValueFactoryBase *v)
{
  return dynamic_cast< ::Base_init * > (v);
}

const char*
Base_init::tao_repository_id (void)
{
  return ::Base::_tao_obv_static_repository_id ();
}

::CORBA::ValueBase *
Base_init::create_for_unmarshal (void)
{
  ::CORBA::ValueBase *ret_val = 0;
  ACE_NEW_THROW_EX (
      ret_val,
      OBV_Base,
      ::CORBA::NO_MEMORY ()
    );
  return ret_val;
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_BASESEQ_CS_)
#define _BASESEQ_CS_

BaseSeq::BaseSeq (void)
{}

BaseSeq::BaseSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_valuetype_sequence<
        Base,
        Base_var
      > (max)
{}

BaseSeq::BaseSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Base * * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_valuetype_sequence<
        Base,
        Base_var
      >
    (max, length, buffer, release)
{}

BaseSeq::BaseSeq (
    const BaseSeq &seq)
  : ::TAO::unbounded_valuetype_sequence<
        Base,
        Base_var
      > (seq)
{}

BaseSeq::~BaseSeq (void)
{}

void BaseSeq::_tao_any_destructor (
    void * _tao_void_pointer)
{
  BaseSeq * _tao_tmp_pointer =
    static_cast<BaseSeq *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:49



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:461


#ifndef _TAO_TYPECODE_BaseSeq_GUARD
#define _TAO_TYPECODE_BaseSeq_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        BaseSeq_0 (
          ::CORBA::tk_sequence,
          &_tc_Base,
          0U);

      ::CORBA::TypeCode_ptr const tc_BaseSeq_0 =
        &BaseSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_BaseSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_BaseSeq (
    ::CORBA::tk_alias,
    "IDL:BaseSeq:1.0",
    "BaseSeq",
    &TAO::TypeCode::tc_BaseSeq_0);

::CORBA::TypeCode_ptr const _tc_BaseSeq =
  &_tao_tc_BaseSeq;

// TAO_IDL - Generated from
// be/be_visitor_typecode/value_typecode.cpp:65

static TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const _tao_fields_Value[] =
  {
    { "s", &CORBA::_tc_string, ::CORBA::PUBLIC_MEMBER }

  };
static TAO::TypeCode::Value<char const *,
                     ::CORBA::TypeCode_ptr const *,
                     TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const *,
                     TAO::Null_RefCount_Policy>
  _tao_tc_Value (
    ::CORBA::tk_value,
    "IDL:Value:1.0",
    "Value",
    ::CORBA::VM_NONE,
    &_tc_Base,
    _tao_fields_Value,
    1);

::CORBA::TypeCode_ptr const _tc_Value =
  &_tao_tc_Value;

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_cs.cpp:53

void
TAO::Value_Traits<Value>::add_ref (
    Value * p)
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<Value>::remove_ref (
    Value * p)
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<Value>::release (
    Value * p)
{
  ::CORBA::remove_ref (p);
}

Value *
Value::_downcast ( ::CORBA::ValueBase *v)
{
  return dynamic_cast< ::Value * > (v);
}

const char *
Value::_tao_obv_repository_id (void) const
{
  return this->_tao_obv_static_repository_id ();
}

void
Value::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

void
Value::_tao_any_destructor (void *_tao_void_pointer)
{
  Value *_tao_tmp_pointer =
    static_cast<Value *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr Value::_tao_type (void) const
{
  return ::_tc_Value;
}

Value::~Value (void)
{}

::CORBA::Boolean
Value::_tao_marshal_v (TAO_OutputCDR & strm) const
{
  TAO_ChunkInfo ci (this->is_truncatable_ || this->chunking_);
  return this->_tao_marshal__Value (strm, ci);
}

::CORBA::Boolean
Value::_tao_unmarshal_v (TAO_InputCDR & strm)
{
  TAO_ChunkInfo ci (this->is_truncatable_ || this->chunking_, 1);
  return this->_tao_unmarshal__Value (strm,ci);
}

::CORBA::Boolean
Value::_tao_match_formal_type (ptrdiff_t formal_type_id) const
{
  return formal_type_id == reinterpret_cast<ptrdiff_t> (Value::_downcast);
}

::CORBA::Boolean
Value::_tao_unmarshal (
    TAO_InputCDR &strm,
    Value *&new_object
  )
{
  ::CORBA::ValueBase *base = 0;
  ::CORBA::Boolean is_indirected = false;
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean const retval =
    ::CORBA::ValueBase::_tao_unmarshal_pre (
        strm,
        base,
        Value::_tao_obv_static_repository_id (),
        is_null_object,
        is_indirected
      );

  ::CORBA::ValueBase_var owner (base);

  if (!retval)
    return false;

  if (is_null_object)
    return true;

  if (!is_indirected && !base->_tao_unmarshal_v (strm))
    return false;

  // Now base must point to the unmarshaled object.
  // Align the pointer to the right subobject.
  new_object = Value::_downcast (base);
  if (0 == new_object)
    return false;

  if (is_indirected)
    new_object->_add_ref ();

  owner._retn ();
  return true;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_init_cs.cpp:73

Value_init::Value_init (void)
{
}

Value_init::~Value_init (void)
{
}

Value_init *
Value_init::_downcast ( ::CORBA::ValueFactoryBase *v)
{
  return dynamic_cast< ::Value_init * > (v);
}

const char*
Value_init::tao_repository_id (void)
{
  return ::Value::_tao_obv_static_repository_id ();
}

::CORBA::ValueBase *
Value_init::create_for_unmarshal (void)
{
  ::CORBA::ValueBase *ret_val = 0;
  ACE_NEW_THROW_EX (
      ret_val,
      OBV_Value,
      ::CORBA::NO_MEMORY ()
    );
  return ret_val;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_obv_cs.cpp:44

OBV_Base::OBV_Base (void)
: require_truncation_ (false)
{}

OBV_Base::OBV_Base (
    ::CORBA::Long _tao_init_l)
: require_truncation_ (false)
{
  l (_tao_init_l);
}

OBV_Base::~OBV_Base (void)
{}

::CORBA::ValueBase *
OBV_Base::_copy_value (void)
{
  ::CORBA::ValueBase *ret_val = 0;
  ACE_NEW_THROW_EX (
    ret_val,
    OBV_Base (
      l ()
    ),
    ::CORBA::NO_MEMORY ()
  );
  return ret_val;
}

::CORBA::Boolean
OBV_Base::_tao_marshal__Base (TAO_OutputCDR &strm, TAO_ChunkInfo& ci) const
{
  return _tao_marshal_state (strm, ci);
}

::CORBA::Boolean
OBV_Base::_tao_unmarshal__Base (TAO_InputCDR &strm, TAO_ChunkInfo& ci)
{
  return _tao_unmarshal_state (strm, ci);
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/field_cs.cpp:587

/// Accessor to set the member.
void
OBV_Base::l (const CORBA::Long val)
{
  // Set the value.
  this->_pd_l = val;
}

// Retrieve the member
::CORBA::Long
OBV_Base::l (void) const
{
  return this->_pd_l;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_obv_cs.cpp:44

OBV_Value::OBV_Value (void)
: require_truncation_ (false)
{}

OBV_Value::OBV_Value (
    ::CORBA::Long _tao_init_l,
    const char * _tao_init_s)
: require_truncation_ (false)
{
  l (_tao_init_l);
  s (_tao_init_s);
}

OBV_Value::~OBV_Value (void)
{}

::CORBA::Boolean
OBV_Value::_tao_marshal__Value (TAO_OutputCDR &strm, TAO_ChunkInfo& ci) const
{
  return _tao_marshal_state (strm, ci);
}

::CORBA::Boolean
OBV_Value::_tao_unmarshal__Value (TAO_InputCDR &strm, TAO_ChunkInfo& ci)
{
  return _tao_unmarshal_state (strm, ci);
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/field_cs.cpp:834

/// Accessor to set the member.
void
OBV_Value::s (char *val)
{
  this->_pd_s = (val);
}

/// Accessor to set the member.
void
OBV_Value::s (const char *val)
{
  // Set the value.
  this->_pd_s = ::CORBA::string_dup (val);
}

/// Accessor to set the member.
void
OBV_Value::s (const ::CORBA::String_var &val)
{
  ::CORBA::String_var s_var = val;
  this->_pd_s = s_var._retn ();
}

const char *
OBV_Value::s (void) const // get method
{
  return this->_pd_s;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/any_op_cs.cpp:45
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Base>::to_value (
      ::CORBA::ValueBase *&_tao_elem
    ) const
  {
    ::CORBA::add_ref (this->value_);
    _tao_elem = this->value_;
    return true;
  }
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Base *_tao_elem
  )
{
  #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
    Base *_tao_copy =
      _tao_elem ?
        Base::_downcast (_tao_elem->_copy_value ())
        : 0;
    _tao_any <<= &_tao_copy;
  #else
    ::CORBA::add_ref (_tao_elem);
    _tao_any <<= &_tao_elem;
  #endif
}

// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Base **_tao_elem
  )
{
  TAO::Any_Impl_T<Base>::insert (
      _tao_any,
      Base::_tao_any_destructor,
      _tc_Base,
      *_tao_elem
    );
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Base *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Base>::extract (
        _tao_any,
        Base::_tao_any_destructor,
        _tc_Base,
        _tao_elem
      );
}


TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_cs.cpp:45


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const BaseSeq &_tao_elem)
{
  TAO::Any_Dual_Impl_T<BaseSeq>::insert_copy (
      _tao_any,
      BaseSeq::_tao_any_destructor,
      _tc_BaseSeq,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    BaseSeq *_tao_elem)
{
  TAO::Any_Dual_Impl_T<BaseSeq>::insert (
      _tao_any,
      BaseSeq::_tao_any_destructor,
      _tc_BaseSeq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    BaseSeq *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const BaseSeq *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const BaseSeq *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<BaseSeq>::extract (
        _tao_any,
        BaseSeq::_tao_any_destructor,
        _tc_BaseSeq,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/any_op_cs.cpp:45
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Value>::to_value (
      ::CORBA::ValueBase *&_tao_elem
    ) const
  {
    ::CORBA::add_ref (this->value_);
    _tao_elem = this->value_;
    return true;
  }
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Value *_tao_elem
  )
{
  #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
    Value *_tao_copy =
      _tao_elem ?
        Value::_downcast (_tao_elem->_copy_value ())
        : 0;
    _tao_any <<= &_tao_copy;
  #else
    ::CORBA::add_ref (_tao_elem);
    _tao_any <<= &_tao_elem;
  #endif
}

// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Value **_tao_elem
  )
{
  TAO::Any_Impl_T<Value>::insert (
      _tao_any,
      Value::_tao_any_destructor,
      _tc_Value,
      *_tao_elem
    );
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Value *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Value>::extract (
        _tao_any,
        Value::_tao_any_destructor,
        _tc_Value,
        _tao_elem
      );
}


TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_valuetype.cpp:512

void
CORBA::add_ref (Base * vt)
{
  if (vt != 0)
    {
      vt->_add_ref ();
    }
}

void
CORBA::remove_ref (Base * vt)
{
  if (vt != 0)
    {
      vt->_remove_ref ();
    }
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/cdr_op_cs.cpp:60


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean
operator<< (
    TAO_OutputCDR &strm,
    const Base *_tao_valuetype
  )
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuetype,
        reinterpret_cast<ptrdiff_t> (&Base::_downcast)
      );
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    Base *&_tao_valuetype
  )
{
  return Base::_tao_unmarshal (strm, _tao_valuetype);
}


TAO_END_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be/be_visitor_valuetype/marshal_cs.cpp:33

::CORBA::Boolean
OBV_Base::_tao_marshal_state (TAO_OutputCDR &strm, TAO_ChunkInfo&ci) const
{
  if (! ci.start_chunk (strm))
    return false;

  CORBA::Boolean const ret =
      (strm << _pd_l);
  if ( ! ret)
    return false;

  if (! ci.end_chunk (strm))
    return false;

  return true;
}

::CORBA::Boolean
OBV_Base::_tao_unmarshal_state (TAO_InputCDR &strm, TAO_ChunkInfo&ci)
{
  if (!ci.handle_chunking (strm))
    return false;

  CORBA::Boolean const ret =
      (strm >> _pd_l);
  if (!ret)
    return false;

  if (this->require_truncation_)
    return ci.skip_chunks (strm);

  else
    return ci.handle_chunking (strm);


}

void
OBV_Base::truncation_hook (void)
{
  this->require_truncation_ = true;
}



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_BaseSeq_CPP_
#define _TAO_CDR_OP_BaseSeq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const BaseSeq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    BaseSeq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_BaseSeq_CPP_ */

// TAO_IDL - Generated from
// be/be_valuetype.cpp:512

void
CORBA::add_ref (Value * vt)
{
  if (vt != 0)
    {
      vt->_add_ref ();
    }
}

void
CORBA::remove_ref (Value * vt)
{
  if (vt != 0)
    {
      vt->_remove_ref ();
    }
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/cdr_op_cs.cpp:60


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean
operator<< (
    TAO_OutputCDR &strm,
    const Value *_tao_valuetype
  )
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuetype,
        reinterpret_cast<ptrdiff_t> (&Value::_downcast)
      );
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    Value *&_tao_valuetype
  )
{
  return Value::_tao_unmarshal (strm, _tao_valuetype);
}


TAO_END_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be/be_visitor_valuetype/marshal_cs.cpp:33

::CORBA::Boolean
OBV_Value::_tao_marshal_state (TAO_OutputCDR &strm, TAO_ChunkInfo&ci) const
{
  if (! ci.start_chunk (strm))
    return false;

  if (! this->_tao_marshal__Base (strm, ci))
    {
      return false;
    }

  if (! ci.start_chunk (strm))
    return false;

  CORBA::Boolean const ret =
      (strm << _pd_s.in ());
  if ( ! ret)
    return false;

  if (! ci.end_chunk (strm))
    return false;

  if (! ci.end_chunk (strm))
    return false;

  return true;
}

::CORBA::Boolean
OBV_Value::_tao_unmarshal_state (TAO_InputCDR &strm, TAO_ChunkInfo&ci)
{
  if (!ci.handle_chunking (strm))
    return false;

  if (!this->_tao_unmarshal__Base (strm, ci))
    {
      return false;
    }

  if (!ci.handle_chunking (strm))
    return false;

  CORBA::Boolean const ret =
      (strm >> _pd_s.out ());
  if (!ret)
    return false;

  if (this->require_truncation_)
    return ci.skip_chunks (strm);

  else
    return ci.handle_chunking (strm);


}

void
OBV_Value::truncation_hook (void)
{
  this->require_truncation_ = true;
}



