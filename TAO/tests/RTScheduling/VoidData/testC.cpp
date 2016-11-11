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
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for test.

test_ptr
TAO::Objref_Traits<test>::duplicate (
    test_ptr p)
{
  return test::_duplicate (p);
}

void
TAO::Objref_Traits<test>::release (
    test_ptr p)
{
  ::CORBA::release (p);
}

test_ptr
TAO::Objref_Traits<test>::nil (void)
{
  return test::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<test>::marshal (
    const test_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

test::test (void)
{}

test::~test (void)
{
}

void
test::_tao_any_destructor (void *_tao_void_pointer)
{
  test *_tao_tmp_pointer =
    static_cast<test *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

test_ptr
test::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return test::_duplicate (
      dynamic_cast<test_ptr> (_tao_objref)
    );
}

test_ptr
test::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return test::_duplicate (
      dynamic_cast<test_ptr> (_tao_objref)
    );
}

test_ptr
test::_nil (void)
{
  return 0;
}

test_ptr
test::_duplicate (test_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
test::_tao_release (test_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
test::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:test:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
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
      return false;
    }
}

const char* test::_interface_repository_id (void) const
{
  return "IDL:test:1.0";
}

::CORBA::Boolean
test::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_test (
    ::CORBA::tk_local_interface,
    "IDL:test:1.0",
    "test");
  
::CORBA::TypeCode_ptr const _tc_test =
  &_tao_tc_test;

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<test>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<test>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<test>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    test_ptr _tao_elem)
{
  test_ptr _tao_objptr =
    test::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    test_ptr *_tao_elem)
{
  TAO::Any_Impl_T<test>::insert (
      _tao_any,
      test::_tao_any_destructor,
      _tc_test,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    test_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<test>::extract (
        _tao_any,
        test::_tao_any_destructor,
        _tc_test,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



