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

#ifndef _TAO_IDL_FOOC_VWDB6W_H_
#define _TAO_IDL_FOOC_VWDB6W_H_

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
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
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
// be/be_interface.cpp:748

#if !defined (_X__VAR_OUT_CH_)
#define _X__VAR_OUT_CH_

class X;
typedef X *X_ptr;

typedef
  TAO_Objref_Var_T<
      X
    >
  X_var;

typedef
  TAO_Objref_Out_T<
      X
    >
  X_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  X
  : public virtual ::CORBA::Object
{
public:

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef X_ptr _ptr_type;
  typedef X_var _var_type;
  typedef X_out _out_type;

  // The static operations.
  static X_ptr _duplicate (X_ptr obj);

  static void _tao_release (X_ptr obj);

  static X_ptr _narrow (::CORBA::Object_ptr obj);
  static X_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static X_ptr _nil (void);

  virtual void op (
    void) = 0;

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Abstract or local interface only.
  X (void);



  virtual ~X (void);

private:
  // Private and unimplemented for concrete interfaces.
  X (const X &);

  void operator= (const X &);
};

// TAO_IDL - Generated from
// be/be_type.cpp:258

struct Y;

typedef
  ::TAO_Var_Var_T<
      Y
    >
  Y_var;

typedef
  ::TAO_Out_T<
      Y
    >
  Y_out;

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_ch.cpp:48

struct  Y
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:304


  typedef Y_var _var_type;
  typedef Y_out _out_type;

  X_var theX;
};

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_XSEQ_CH_)
#define _XSEQ_CH_

class XSeq;

typedef
  ::TAO_VarSeq_Var_T<
      XSeq
    >
  XSeq_var;

typedef
  ::TAO_Seq_Out_T<
      XSeq
    >
  XSeq_out;

class  XSeq
  : public
      ::TAO::unbounded_object_reference_sequence<
          X,
          X_var
        >
{
public:
  XSeq (void);
  XSeq ( ::CORBA::ULong max);
  XSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    X_ptr* buffer,
    ::CORBA::Boolean release = false);
  XSeq (const XSeq &);
  virtual ~XSeq (void);


  // TAO_IDL - Generated from
  // be/be_type.cpp:304


  typedef XSeq_var _var_type;
  typedef XSeq_out _out_type;
};

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Y>
    : public
        Var_Size_Arg_Traits_T<
            ::Y,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::XSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::XSeq,
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

#if !defined (_X__TRAITS_)
#define _X__TRAITS_

  template<>
  struct  Objref_Traits< ::X>
  {
    static ::X_ptr duplicate (
        ::X_ptr p);
    static void release (
        ::X_ptr p);
    static ::X_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::X_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "FooC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

