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

// Traits specializations for Test::BoundSequences.

Test::BoundSequences_ptr
TAO::Objref_Traits<Test::BoundSequences>::duplicate (
    Test::BoundSequences_ptr p)
{
  return Test::BoundSequences::_duplicate (p);
}

void
TAO::Objref_Traits<Test::BoundSequences>::release (
    Test::BoundSequences_ptr p)
{
  ::CORBA::release (p);
}

Test::BoundSequences_ptr
TAO::Objref_Traits<Test::BoundSequences>::nil (void)
{
  return Test::BoundSequences::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::BoundSequences>::marshal (
    const Test::BoundSequences_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_TEST_BOUNDSEQUENCES_SEQUENCEOF10LONG_CS_)
#define _TEST_BOUNDSEQUENCES_SEQUENCEOF10LONG_CS_

Test::BoundSequences::SequenceOf10Long::SequenceOf10Long (void)
{}

Test::BoundSequences::SequenceOf10Long::SequenceOf10Long (
    ::CORBA::ULong length,
    ::CORBA::Long * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_value_sequence<
        ::CORBA::Long,
        10
      >
    (length, buffer, release)
{}

Test::BoundSequences::SequenceOf10Long::SequenceOf10Long (
    const SequenceOf10Long &seq)
  : ::TAO::bounded_value_sequence<
        ::CORBA::Long,
        10
      > (seq)
{}

Test::BoundSequences::SequenceOf10Long::~SequenceOf10Long (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::ULong
Test::BoundSequences::SendSequenceOf10Long (
  ::CORBA::ULong LengthSent,
  const ::Test::BoundSequences::SequenceOf10Long & inSeq)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::CORBA::ULong>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::ULong>::in_arg_val _tao_LengthSent (LengthSent);
  TAO::Arg_Traits< ::Test::BoundSequences::SequenceOf10Long>::in_arg_val _tao_inSeq (inSeq);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_LengthSent,
      &_tao_inSeq
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "SendSequenceOf10Long",
      20,
      TAO::TAO_CO_NONE
      
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::BoundSequences::shutdown (
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
      TAO::TAO_CO_NONE,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

Test::BoundSequences::BoundSequences (void)
{
}

Test::BoundSequences::~BoundSequences (void)
{
}

Test::BoundSequences_ptr
Test::BoundSequences::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<BoundSequences>::narrow (
        _tao_objref,
        "IDL:Test/BoundSequences:1.0");
}

Test::BoundSequences_ptr
Test::BoundSequences::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<BoundSequences>::unchecked_narrow (
        _tao_objref);
}

Test::BoundSequences_ptr
Test::BoundSequences::_nil (void)
{
  return 0;
}

Test::BoundSequences_ptr
Test::BoundSequences::_duplicate (BoundSequences_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::BoundSequences::_tao_release (BoundSequences_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::BoundSequences::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/BoundSequences:1.0"
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

const char* Test::BoundSequences::_interface_repository_id (void) const
{
  return "IDL:Test/BoundSequences:1.0";
}

::CORBA::Boolean
Test::BoundSequences::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_Test_BoundSequences_SequenceOf10Long_CPP_
#define _TAO_CDR_OP_Test_BoundSequences_SequenceOf10Long_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::BoundSequences::SequenceOf10Long &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::BoundSequences::SequenceOf10Long &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Test_BoundSequences_SequenceOf10Long_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::BoundSequences_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::BoundSequences_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Test::BoundSequences RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



