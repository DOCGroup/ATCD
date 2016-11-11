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
#include "tao/ORB_Core.h"
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

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_TEST_DATA_CS_)
#define _TEST_DATA_CS_

test::data::data (void)
{}

test::data::data (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      > (max)
{}

test::data::data (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Octet * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      >
    (max, length, buffer, release)
{}

test::data::data (
    const data &seq)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      > (seq)
{}

test::data::~data (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
test::method (
  ::CORBA::ULong request_number,
  ::CORBA::Long start_time,
  const ::test::data & d,
  ::CORBA::ULong work)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::ULong>::in_arg_val _tao_request_number (request_number);
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_start_time (start_time);
  TAO::Arg_Traits< ::test::data>::in_arg_val _tao_d (d);
  TAO::Arg_Traits< ::CORBA::ULong>::in_arg_val _tao_work (work);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_request_number,
      &_tao_start_time,
      &_tao_d,
      &_tao_work
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      5,
      "method",
      6,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION
      
    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
test::flush (
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
      "flush",
      5,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
test::shutdown (
  ::CORBA::Long start_time)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_start_time (start_time);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_start_time
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION
      
    );

  _tao_call.invoke (0, 0);
}

test::test (void)
{
}

test::~test (void)
{
}

test_ptr
test::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<test>::narrow (
        _tao_objref,
        "IDL:test:1.0");
}

test_ptr
test::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<test>::unchecked_narrow (
        _tao_objref);
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

const char* test::_interface_repository_id (void) const
{
  return "IDL:test:1.0";
}

::CORBA::Boolean
test::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_test_data_CPP_
#define _TAO_CDR_OP_test_data_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const test::data &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    test::data &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_test_data_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const test_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    test_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::test RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



