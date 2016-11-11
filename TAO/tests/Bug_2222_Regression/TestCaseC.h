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

#ifndef _TAO_IDL_TESTCASEC_VO1IR4_H_
#define _TAO_IDL_TESTCASEC_VO1IR4_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "TestTypeC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 4 || TAO_MICRO_VERSION != 1
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be/be_visitor_typedef/typedef_ch.cpp:179

typedef Array_Typedef Typedef_Of_Imported_Array_Typedef;
typedef Array_Typedef_slice Typedef_Of_Imported_Array_Typedef_slice;
typedef Array_Typedef_var Typedef_Of_Imported_Array_Typedef_var;
typedef Array_Typedef_out Typedef_Of_Imported_Array_Typedef_out;
typedef Array_Typedef_tag Typedef_Of_Imported_Array_Typedef_tag;
typedef Array_Typedef_forany Typedef_Of_Imported_Array_Typedef_forany;

ACE_INLINE 
Typedef_Of_Imported_Array_Typedef_slice *
Typedef_Of_Imported_Array_Typedef_alloc (void);

ACE_INLINE 
Typedef_Of_Imported_Array_Typedef_slice *
Typedef_Of_Imported_Array_Typedef_dup (
    const Typedef_Of_Imported_Array_Typedef_slice *_tao_slice);

ACE_INLINE 
void Typedef_Of_Imported_Array_Typedef_copy (
    Typedef_Of_Imported_Array_Typedef_slice *_tao_to,
    const Typedef_Of_Imported_Array_Typedef_slice *_tao_from);

ACE_INLINE 
void Typedef_Of_Imported_Array_Typedef_free (
    Typedef_Of_Imported_Array_Typedef_slice *_tao_slice);

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
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
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TestCaseC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

