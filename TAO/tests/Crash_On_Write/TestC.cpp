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
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::Oneway_Receiver.

Test::Oneway_Receiver_ptr
TAO::Objref_Traits<Test::Oneway_Receiver>::duplicate (
    Test::Oneway_Receiver_ptr p)
{
  return Test::Oneway_Receiver::_duplicate (p);
}

void
TAO::Objref_Traits<Test::Oneway_Receiver>::release (
    Test::Oneway_Receiver_ptr p)
{
  ::CORBA::release (p);
}

Test::Oneway_Receiver_ptr
TAO::Objref_Traits<Test::Oneway_Receiver>::nil (void)
{
  return Test::Oneway_Receiver::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::Oneway_Receiver>::marshal (
    const Test::Oneway_Receiver_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Oneway_Receiver::receive_oneway (
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
      "receive_oneway",
      14,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

Test::Oneway_Receiver::Oneway_Receiver (void)
{
}

Test::Oneway_Receiver::~Oneway_Receiver (void)
{
}

Test::Oneway_Receiver_ptr
Test::Oneway_Receiver::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Oneway_Receiver>::narrow (
        _tao_objref,
        "IDL:Test/Oneway_Receiver:1.0");
}

Test::Oneway_Receiver_ptr
Test::Oneway_Receiver::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Oneway_Receiver>::unchecked_narrow (
        _tao_objref);
}

Test::Oneway_Receiver_ptr
Test::Oneway_Receiver::_nil (void)
{
  return 0;
}

Test::Oneway_Receiver_ptr
Test::Oneway_Receiver::_duplicate (Oneway_Receiver_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::Oneway_Receiver::_tao_release (Oneway_Receiver_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::Oneway_Receiver::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Oneway_Receiver:1.0"
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

const char* Test::Oneway_Receiver::_interface_repository_id (void) const
{
  return "IDL:Test/Oneway_Receiver:1.0";
}

::CORBA::Boolean
Test::Oneway_Receiver::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Oneway_Receiver_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Oneway_Receiver_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test::Oneway_Receiver RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



