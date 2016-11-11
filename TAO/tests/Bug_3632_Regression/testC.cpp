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

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_TEST_BOUNDED_STRING_SEQ_CS_)
#define _TEST_BOUNDED_STRING_SEQ_CS_

Test::bounded_string_seq::bounded_string_seq (void)
{}

Test::bounded_string_seq::bounded_string_seq (
    ::CORBA::ULong length,
    ::CORBA::Char * * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::bounded_basic_string_sequence<char, 10>
    (length, buffer, release)
{}

Test::bounded_string_seq::bounded_string_seq (
    const bounded_string_seq &seq)
  : ::TAO::bounded_basic_string_sequence<char, 10> (seq)
{}

Test::bounded_string_seq::~bounded_string_seq (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_Test_bounded_string_seq_CPP_
#define _TAO_CDR_OP_Test_bounded_string_seq_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::bounded_string_seq &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::bounded_string_seq &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Test_bounded_string_seq_CPP_ */

