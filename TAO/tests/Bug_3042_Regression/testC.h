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
// be/be_codegen.cpp:149

#ifndef _TAO_IDL_TESTC_C2TRYM_H_
#define _TAO_IDL_TESTC_C2TRYM_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 4 || TAO_MICRO_VERSION != 1
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:35

namespace Foo
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct Node;

  typedef
    ::TAO_Var_Var_T<
        Node
      >
    Node_var;

  typedef
    ::TAO_Out_T<
        Node
      >
    Node_out;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_FOO_NODESEQUENCE_CH_)
#define _FOO_NODESEQUENCE_CH_

  class nodesequence;

  typedef
    ::TAO_VarSeq_Var_T<
        nodesequence
      >
    nodesequence_var;

  typedef
    ::TAO_Seq_Out_T<
        nodesequence
      >
    nodesequence_out;

  class  nodesequence
    : public
        ::TAO::bounded_value_sequence<
            Node,
            5
          >
  {
  public:
    nodesequence (void);
    nodesequence (
      ::CORBA::ULong length,
      Node* buffer,
      ::CORBA::Boolean release = false);
    nodesequence (const nodesequence &);
    virtual ~nodesequence (void);
    

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef nodesequence_var _var_type;
    typedef nodesequence_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  Node
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef Node_var _var_type;
    typedef Node_out _out_type;
    
    Foo::nodesequence nodes;
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Foo

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Foo::nodesequence>
    : public
        Var_Size_Arg_Traits_T<
            ::Foo::nodesequence,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Foo::Node>
    : public
        Var_Size_Arg_Traits_T<
            ::Foo::Node,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Foo_nodesequence_H_
#define _TAO_CDR_OP_Foo_nodesequence_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Foo::nodesequence &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Foo::nodesequence &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Foo_nodesequence_H_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Foo::Node &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Foo::Node &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

