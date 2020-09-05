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


#include "ORT_testC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "ORT_testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for ObjectReferenceTemplate::ORT_test.

ObjectReferenceTemplate::ORT_test_ptr
TAO::Objref_Traits<ObjectReferenceTemplate::ORT_test>::duplicate (
    ObjectReferenceTemplate::ORT_test_ptr p)
{
  return ObjectReferenceTemplate::ORT_test::_duplicate (p);
}

void
TAO::Objref_Traits<ObjectReferenceTemplate::ORT_test>::release (
    ObjectReferenceTemplate::ORT_test_ptr p)
{
  ::CORBA::release (p);
}

ObjectReferenceTemplate::ORT_test_ptr
TAO::Objref_Traits<ObjectReferenceTemplate::ORT_test>::nil (void)
{
  return ObjectReferenceTemplate::ORT_test::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<ObjectReferenceTemplate::ORT_test>::marshal (
    const ObjectReferenceTemplate::ORT_test_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Boolean
ObjectReferenceTemplate::ORT_test::request_server (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::ACE_InputCDR::to_boolean>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "request_server",
      14,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
ObjectReferenceTemplate::ORT_test::shutdown (
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
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

ObjectReferenceTemplate::ORT_test::ORT_test (void)
{
}

ObjectReferenceTemplate::ORT_test::~ORT_test (void)
{
}

ObjectReferenceTemplate::ORT_test_ptr
ObjectReferenceTemplate::ORT_test::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<ORT_test>::narrow (
        _tao_objref,
        "IDL:ObjectReferenceTemplate/ORT_test:1.0");
}

ObjectReferenceTemplate::ORT_test_ptr
ObjectReferenceTemplate::ORT_test::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<ORT_test>::unchecked_narrow (
        _tao_objref);
}

ObjectReferenceTemplate::ORT_test_ptr
ObjectReferenceTemplate::ORT_test::_nil (void)
{
  return 0;
}

ObjectReferenceTemplate::ORT_test_ptr
ObjectReferenceTemplate::ORT_test::_duplicate (ORT_test_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
ObjectReferenceTemplate::ORT_test::_tao_release (ORT_test_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
ObjectReferenceTemplate::ORT_test::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:ObjectReferenceTemplate/ORT_test:1.0"
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

const char* ObjectReferenceTemplate::ORT_test::_interface_repository_id (void) const
{
  return "IDL:ObjectReferenceTemplate/ORT_test:1.0";
}

::CORBA::Boolean
ObjectReferenceTemplate::ORT_test::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ObjectReferenceTemplate::ORT_test_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ObjectReferenceTemplate::ORT_test_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::ObjectReferenceTemplate::ORT_test RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



