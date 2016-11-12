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
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/value_typecode.cpp:65

static TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_fields_TestValuetype = 0;
static TAO::TypeCode::Value<char const *,
                     ::CORBA::TypeCode_ptr const *,
                     TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const *,
                     TAO::Null_RefCount_Policy>
  _tao_tc_TestValuetype (
    ::CORBA::tk_value,
    "IDL:TestValuetype:1.0",
    "TestValuetype",
    ::CORBA::VM_NONE,
    &::CORBA::_tc_null,
    _tao_fields_TestValuetype,
    0);

::CORBA::TypeCode_ptr const _tc_TestValuetype =
  &_tao_tc_TestValuetype;

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_cs.cpp:53

void
TAO::Value_Traits<TestValuetype>::add_ref (
    TestValuetype * p)
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<TestValuetype>::remove_ref (
    TestValuetype * p)
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<TestValuetype>::release (
    TestValuetype * p)
{
  ::CORBA::remove_ref (p);
}

TestValuetype *
TestValuetype::_downcast ( ::CORBA::ValueBase *v)
{
  return dynamic_cast< ::TestValuetype * > (v);
}

const char *
TestValuetype::_tao_obv_repository_id (void) const
{
  return this->_tao_obv_static_repository_id ();
}

void
TestValuetype::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

void
TestValuetype::_tao_any_destructor (void *_tao_void_pointer)
{
  TestValuetype *_tao_tmp_pointer =
    static_cast<TestValuetype *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr TestValuetype::_tao_type (void) const
{
  return ::_tc_TestValuetype;
}

TestValuetype::~TestValuetype (void)
{}

::CORBA::Boolean
TestValuetype::_tao_marshal_v (TAO_OutputCDR & strm) const
{
  TAO_ChunkInfo ci (this->is_truncatable_ || this->chunking_);
  return this->_tao_marshal__TestValuetype (strm, ci);
}

::CORBA::Boolean
TestValuetype::_tao_unmarshal_v (TAO_InputCDR & strm)
{
  TAO_ChunkInfo ci (this->is_truncatable_ || this->chunking_, 1);
  return this->_tao_unmarshal__TestValuetype (strm,ci);
}

::CORBA::Boolean
TestValuetype::_tao_match_formal_type (ptrdiff_t formal_type_id) const
{
  return formal_type_id == reinterpret_cast<ptrdiff_t> (TestValuetype::_downcast);
}

::CORBA::Boolean
TestValuetype::_tao_unmarshal (
    TAO_InputCDR &strm,
    TestValuetype *&new_object
  )
{
  ::CORBA::ValueBase *base = 0;
  ::CORBA::Boolean is_indirected = false;
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean const retval =
    ::CORBA::ValueBase::_tao_unmarshal_pre (
        strm,
        base,
        TestValuetype::_tao_obv_static_repository_id (),
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
  new_object = TestValuetype::_downcast (base);
  if (0 == new_object)
    return false;

  if (is_indirected)
    new_object->_add_ref ();

  owner._retn ();
  return true;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_init_cs.cpp:73

TestValuetype_init::TestValuetype_init (void)
{
}

TestValuetype_init::~TestValuetype_init (void)
{
}

TestValuetype_init *
TestValuetype_init::_downcast ( ::CORBA::ValueFactoryBase *v)
{
  return dynamic_cast< ::TestValuetype_init * > (v);
}

const char*
TestValuetype_init::tao_repository_id (void)
{
  return ::TestValuetype::_tao_obv_static_repository_id ();
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_obv_cs.cpp:44

OBV_TestValuetype::OBV_TestValuetype (void)
: require_truncation_ (false)
{}

OBV_TestValuetype::~OBV_TestValuetype (void)
{}

::CORBA::Boolean
OBV_TestValuetype::_tao_marshal__TestValuetype (TAO_OutputCDR &strm, TAO_ChunkInfo& ci) const
{
  return _tao_marshal_state (strm, ci);
}

::CORBA::Boolean
OBV_TestValuetype::_tao_unmarshal__TestValuetype (TAO_InputCDR &strm, TAO_ChunkInfo& ci)
{
  return _tao_unmarshal_state (strm, ci);
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/any_op_cs.cpp:45
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<TestValuetype>::to_value (
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
    TestValuetype *_tao_elem
  )
{
  #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
    TestValuetype *_tao_copy =
      _tao_elem ?
        TestValuetype::_downcast (_tao_elem->_copy_value ())
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
    TestValuetype **_tao_elem
  )
{
  TAO::Any_Impl_T<TestValuetype>::insert (
      _tao_any,
      TestValuetype::_tao_any_destructor,
      _tc_TestValuetype,
      *_tao_elem
    );
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    TestValuetype *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<TestValuetype>::extract (
        _tao_any,
        TestValuetype::_tao_any_destructor,
        _tc_TestValuetype,
        _tao_elem
      );
}


TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_valuetype.cpp:512

void
CORBA::add_ref (TestValuetype * vt)
{
  if (vt != 0)
    {
      vt->_add_ref ();
    }
}

void
CORBA::remove_ref (TestValuetype * vt)
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
    const TestValuetype *_tao_valuetype
  )
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuetype,
        reinterpret_cast<ptrdiff_t> (&TestValuetype::_downcast)
      );
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    TestValuetype *&_tao_valuetype
  )
{
  return TestValuetype::_tao_unmarshal (strm, _tao_valuetype);
}


TAO_END_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be/be_visitor_valuetype/marshal_cs.cpp:33

::CORBA::Boolean
OBV_TestValuetype::_tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo&) const
{
  return true;
}

::CORBA::Boolean
OBV_TestValuetype::_tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo&)
{
  return true;
}

void
OBV_TestValuetype::truncation_hook (void)
{
  this->require_truncation_ = true;
}



