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
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:49

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Test_Timestamp (
    ::CORBA::tk_alias,
    "IDL:Test/Timestamp:1.0",
    "Timestamp",
    &CORBA::_tc_ulonglong);


namespace Test
{
  ::CORBA::TypeCode_ptr const _tc_Timestamp =
    &_tao_tc_Test_Timestamp;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:49

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_Test_number (
    ::CORBA::tk_alias,
    "IDL:Test/number:1.0",
    "number",
    &CORBA::_tc_long);


namespace Test
{
  ::CORBA::TypeCode_ptr const _tc_number =
    &_tao_tc_Test_number;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::Roundtrip.

Test::Roundtrip_ptr
TAO::Objref_Traits<Test::Roundtrip>::duplicate (
    Test::Roundtrip_ptr p)
{
  return Test::Roundtrip::_duplicate (p);
}

void
TAO::Objref_Traits<Test::Roundtrip>::release (
    Test::Roundtrip_ptr p)
{
  ::CORBA::release (p);
}

Test::Roundtrip_ptr
TAO::Objref_Traits<Test::Roundtrip>::nil (void)
{
  return Test::Roundtrip::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::Roundtrip>::marshal (
    const Test::Roundtrip_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::Test::Timestamp
Test::Roundtrip::test_method (
  ::Test::Timestamp send_time,
  ::Test::number cl_number)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::ULongLong>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::ULongLong>::in_arg_val _tao_send_time (send_time);
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_cl_number (cl_number);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_send_time,
      &_tao_cl_number
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "test_method",
      11,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Roundtrip::shutdown (
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

Test::Roundtrip::Roundtrip (void)
{
}

Test::Roundtrip::~Roundtrip (void)
{
}

void
Test::Roundtrip::_tao_any_destructor (void *_tao_void_pointer)
{
  Roundtrip *_tao_tmp_pointer =
    static_cast<Roundtrip *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Test::Roundtrip_ptr
Test::Roundtrip::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Roundtrip>::narrow (
        _tao_objref,
        "IDL:Test/Roundtrip:1.0");
}

Test::Roundtrip_ptr
Test::Roundtrip::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Roundtrip>::unchecked_narrow (
        _tao_objref);
}

Test::Roundtrip_ptr
Test::Roundtrip::_nil (void)
{
  return 0;
}

Test::Roundtrip_ptr
Test::Roundtrip::_duplicate (Roundtrip_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::Roundtrip::_tao_release (Roundtrip_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::Roundtrip::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Roundtrip:1.0"
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

const char* Test::Roundtrip::_interface_repository_id (void) const
{
  return "IDL:Test/Roundtrip:1.0";
}

::CORBA::Boolean
Test::Roundtrip::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Test_Roundtrip (
    ::CORBA::tk_objref,
    "IDL:Test/Roundtrip:1.0",
    "Roundtrip");


namespace Test
{
  ::CORBA::TypeCode_ptr const _tc_Roundtrip =
    &_tao_tc_Test_Roundtrip;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Test::Roundtrip>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Roundtrip_ptr _tao_elem)
  {
    Roundtrip_ptr _tao_objptr =
      Roundtrip::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Roundtrip_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<Roundtrip>::insert (
        _tao_any,
        Roundtrip::_tao_any_destructor,
        _tc_Roundtrip,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      Roundtrip_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<Roundtrip>::extract (
          _tao_any,
          Roundtrip::_tao_any_destructor,
          _tc_Roundtrip,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test::Roundtrip_ptr _tao_elem)
{
  Test::Roundtrip_ptr _tao_objptr =
    Test::Roundtrip::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test::Roundtrip_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Test::Roundtrip>::insert (
      _tao_any,
      Test::Roundtrip::_tao_any_destructor,
      Test::_tc_Roundtrip,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Test::Roundtrip_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Test::Roundtrip>::extract (
        _tao_any,
        Test::Roundtrip::_tao_any_destructor,
        Test::_tc_Roundtrip,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Roundtrip_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Roundtrip_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test::Roundtrip RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



