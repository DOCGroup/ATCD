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

#ifndef _TAO_IDL_TEST2C_ENRMYO_H_
#define _TAO_IDL_TEST2C_ENRMYO_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/String_Manager_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "TestC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 4 || TAO_MICRO_VERSION != 1
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:35

namespace Test2
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct MyAttRefSeqStruct;

  typedef
    ::TAO_Var_Var_T<
        MyAttRefSeqStruct
      >
    MyAttRefSeqStruct_var;

  typedef
    ::TAO_Out_T<
        MyAttRefSeqStruct
      >
    MyAttRefSeqStruct_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  MyAttRefSeqStruct
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef MyAttRefSeqStruct_var _var_type;
    typedef MyAttRefSeqStruct_out _out_type;

    static void _tao_any_destructor (void *);

    Test::MyAttRefSequence attRefSeq;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_MyAttRefSeqStruct;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Test2

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Test2::MyAttRefSeqStruct>
    : public
        Var_Size_Arg_Traits_T<
            ::Test2::MyAttRefSeqStruct,
            TAO::Any_Insert_Policy_Stream
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
// be/be_visitor_structure/any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test2
{
   void operator<<= (::CORBA::Any &, const ::Test2::MyAttRefSeqStruct &); // copying version
   void operator<<= (::CORBA::Any &, ::Test2::MyAttRefSeqStruct*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test2::MyAttRefSeqStruct *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test2::MyAttRefSeqStruct *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Test2::MyAttRefSeqStruct &); // copying version
 void operator<<= (::CORBA::Any &, Test2::MyAttRefSeqStruct*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test2::MyAttRefSeqStruct *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test2::MyAttRefSeqStruct *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test2::MyAttRefSeqStruct &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test2::MyAttRefSeqStruct &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "Test2C.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

