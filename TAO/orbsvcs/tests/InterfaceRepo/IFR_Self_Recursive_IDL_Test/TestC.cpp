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
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_TEST_SEQBADDAY_CS_)
#define _TEST_SEQBADDAY_CS_

Test::SeqBadDay::SeqBadDay (void)
{}

Test::SeqBadDay::SeqBadDay (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        BadDay
      > (max)
{}

Test::SeqBadDay::SeqBadDay (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Test::BadDay * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        BadDay
      >
    (max, length, buffer, release)
{}

Test::SeqBadDay::SeqBadDay (
    const SeqBadDay &seq)
  : ::TAO::unbounded_value_sequence<
        BadDay
      > (seq)
{}

Test::SeqBadDay::~SeqBadDay (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::GoodDay.

Test::GoodDay_ptr
TAO::Objref_Traits<Test::GoodDay>::duplicate (
    Test::GoodDay_ptr p)
{
  return Test::GoodDay::_duplicate (p);
}

void
TAO::Objref_Traits<Test::GoodDay>::release (
    Test::GoodDay_ptr p)
{
  ::CORBA::release (p);
}

Test::GoodDay_ptr
TAO::Objref_Traits<Test::GoodDay>::nil (void)
{
  return Test::GoodDay::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::GoodDay>::marshal (
    const Test::GoodDay_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

char *
Test::GoodDay::get_string (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< char *>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "get_string",
      10,
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
Test::GoodDay::shutdown (
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

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::Test::GoodDay::RoughWeek *
Test::GoodDay::this_week (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::Test::GoodDay::RoughWeek>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "this_week",
      9,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

Test::GoodDay::GoodDay (void)
{
}

Test::GoodDay::~GoodDay (void)
{
}

Test::GoodDay_ptr
Test::GoodDay::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<GoodDay>::narrow (
        _tao_objref,
        "IDL:Test/GoodDay:1.0");
}

Test::GoodDay_ptr
Test::GoodDay::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<GoodDay>::unchecked_narrow (
        _tao_objref);
}

Test::GoodDay_ptr
Test::GoodDay::_nil (void)
{
  return 0;
}

Test::GoodDay_ptr
Test::GoodDay::_duplicate (GoodDay_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::GoodDay::_tao_release (GoodDay_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::GoodDay::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/GoodDay:1.0"
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

const char* Test::GoodDay::_interface_repository_id (void) const
{
  return "IDL:Test/GoodDay:1.0";
}

::CORBA::Boolean
Test::GoodDay::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_Test_SeqBadDay_CPP_
#define _TAO_CDR_OP_Test_SeqBadDay_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::SeqBadDay &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::SeqBadDay &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Test_SeqBadDay_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::BadDay &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.the_seq);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::BadDay &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.the_seq);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::GoodDay::RoughWeek &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.isitok) &&
    (strm << _tao_aggregate.bad);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::GoodDay::RoughWeek &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.isitok) &&
    (strm >> _tao_aggregate.bad);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::GoodDay_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::GoodDay_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Test::GoodDay RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



