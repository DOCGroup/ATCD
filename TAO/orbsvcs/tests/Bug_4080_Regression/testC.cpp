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
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::UIPMC_Object.

Test::UIPMC_Object_ptr
TAO::Objref_Traits<Test::UIPMC_Object>::duplicate (
    Test::UIPMC_Object_ptr p)
{
  return Test::UIPMC_Object::_duplicate (p);
}

void
TAO::Objref_Traits<Test::UIPMC_Object>::release (
    Test::UIPMC_Object_ptr p)
{
  ::CORBA::release (p);
}

Test::UIPMC_Object_ptr
TAO::Objref_Traits<Test::UIPMC_Object>::nil (void)
{
  return Test::UIPMC_Object::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::UIPMC_Object>::marshal (
    const Test::UIPMC_Object_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::UIPMC_Object::process (
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
      "process",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

Test::UIPMC_Object::UIPMC_Object (void)
{
}

Test::UIPMC_Object::~UIPMC_Object (void)
{
}

Test::UIPMC_Object_ptr
Test::UIPMC_Object::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<UIPMC_Object>::narrow (
        _tao_objref,
        "IDL:Test/UIPMC_Object:1.0");
}

Test::UIPMC_Object_ptr
Test::UIPMC_Object::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<UIPMC_Object>::unchecked_narrow (
        _tao_objref);
}

Test::UIPMC_Object_ptr
Test::UIPMC_Object::_nil (void)
{
  return 0;
}

Test::UIPMC_Object_ptr
Test::UIPMC_Object::_duplicate (UIPMC_Object_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::UIPMC_Object::_tao_release (UIPMC_Object_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::UIPMC_Object::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/UIPMC_Object:1.0"
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

const char* Test::UIPMC_Object::_interface_repository_id (void) const
{
  return "IDL:Test/UIPMC_Object:1.0";
}

::CORBA::Boolean
Test::UIPMC_Object::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::UIPMC_Object_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::UIPMC_Object_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Test::UIPMC_Object RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



