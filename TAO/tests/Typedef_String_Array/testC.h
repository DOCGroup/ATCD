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

#ifndef _TAO_IDL_TESTC_9JNFNV_H_
#define _TAO_IDL_TESTC_9JNFNV_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Array_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include "tao/Fixed_Array_Argument_T.h"
#include "tao/Var_Array_Argument_T.h"
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
// be/be_visitor_root/root_ch.cpp:157
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_typedef/typedef_ch.cpp:404

typedef char * MyString;
typedef ::CORBA::String_var MyString_var;
typedef ::CORBA::String_out MyString_out;

// TAO_IDL - Generated from
// be/be_visitor_array/array_ch.cpp:52

typedef ::TAO::String_Manager ArrayOfString[15];
typedef ::TAO::String_Manager ArrayOfString_slice;
struct ArrayOfString_tag {};


typedef
  TAO_VarArray_Var_T<
      ArrayOfString,
      ArrayOfString_slice,
      ArrayOfString_tag
    >
  ArrayOfString_var;

typedef
  TAO_Array_Out_T<
      ArrayOfString,
      ArrayOfString_var,
      ArrayOfString_slice,
      ArrayOfString_tag
    >
  ArrayOfString_out;

typedef
  TAO_Array_Forany_T<
      ArrayOfString,
      ArrayOfString_slice,
      ArrayOfString_tag
    >
  ArrayOfString_forany;

TAO_EXPORT_MACRO ArrayOfString_slice *
ArrayOfString_alloc (void);

TAO_EXPORT_MACRO void
ArrayOfString_free (
    ArrayOfString_slice *_tao_slice);

TAO_EXPORT_MACRO ArrayOfString_slice *
ArrayOfString_dup (
    const ArrayOfString_slice *_tao_slice);

TAO_EXPORT_MACRO void
ArrayOfString_copy (
    ArrayOfString_slice *_tao_to,
    const ArrayOfString_slice *_tao_from);

// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_SIMPLESTRINGS__VAR_OUT_CH_)
#define _SIMPLESTRINGS__VAR_OUT_CH_

class SimpleStrings;
typedef SimpleStrings *SimpleStrings_ptr;

typedef
  TAO_Objref_Var_T<
      SimpleStrings
    >
  SimpleStrings_var;

typedef
  TAO_Objref_Out_T<
      SimpleStrings
    >
  SimpleStrings_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  SimpleStrings
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<SimpleStrings>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef SimpleStrings_ptr _ptr_type;
  typedef SimpleStrings_var _var_type;
  typedef SimpleStrings_out _out_type;

  // The static operations.
  static SimpleStrings_ptr _duplicate (SimpleStrings_ptr obj);

  static void _tao_release (SimpleStrings_ptr obj);

  static SimpleStrings_ptr _narrow (::CORBA::Object_ptr obj);
  static SimpleStrings_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static SimpleStrings_ptr _nil (void);

  virtual void get_strings (
    ::ArrayOfString_out strings);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  SimpleStrings (void);

  // Concrete non-local interface only.
  SimpleStrings (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  SimpleStrings (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~SimpleStrings (void);

private:
  // Private and unimplemented for concrete interfaces.
  SimpleStrings (const SimpleStrings &);

  void operator= (const SimpleStrings &);
};

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  template<>
  class Arg_Traits< ::ArrayOfString_tag>
    : public
        Var_Array_Arg_Traits_T<
            ::ArrayOfString_out,
            ::ArrayOfString_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_SIMPLESTRINGS__ARG_TRAITS_)
#define _SIMPLESTRINGS__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::SimpleStrings>
    : public
        Object_Arg_Traits_T<
            ::SimpleStrings_ptr,
            ::SimpleStrings_var,
            ::SimpleStrings_out,
            TAO::Objref_Traits<SimpleStrings>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
  template<>
  struct  Array_Traits<
      ArrayOfString_forany
    >
  {
    static void free (
        ArrayOfString_slice * _tao_slice);
    static ArrayOfString_slice * dup (
        const ArrayOfString_slice * _tao_slice);
    static void copy (
        ArrayOfString_slice * _tao_to,
        const ArrayOfString_slice * _tao_from);
    static ArrayOfString_slice * alloc (void);
    static void zero (
        ArrayOfString_slice * _tao_slice);
  };

#if !defined (_SIMPLESTRINGS__TRAITS_)
#define _SIMPLESTRINGS__TRAITS_

  template<>
  struct  Objref_Traits< ::SimpleStrings>
  {
    static ::SimpleStrings_ptr duplicate (
        ::SimpleStrings_ptr p);
    static void release (
        ::SimpleStrings_ptr p);
    static ::SimpleStrings_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::SimpleStrings_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_ch.cpp:99


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 CORBA::Boolean operator<< (TAO_OutputCDR &strm, const ::ArrayOfString_forany &_tao_array);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, ::ArrayOfString_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const SimpleStrings_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, SimpleStrings_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

