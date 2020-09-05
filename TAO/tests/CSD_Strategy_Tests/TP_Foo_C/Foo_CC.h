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

#ifndef _TAO_IDL_FOO_CC_H3OJYN_H_
#define _TAO_IDL_FOO_CC_H3OJYN_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "CSD_TP_Foo_C_Export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "FooExceptionC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 4 || TAO_MICRO_VERSION != 1
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO CSD_TP_Foo_C_Export

// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:157
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_FOO_C__VAR_OUT_CH_)
#define _FOO_C__VAR_OUT_CH_

class Foo_C;
typedef Foo_C *Foo_C_ptr;

typedef
  TAO_Objref_Var_T<
      Foo_C
    >
  Foo_C_var;

typedef
  TAO_Objref_Out_T<
      Foo_C
    >
  Foo_C_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class CSD_TP_Foo_C_Export Foo_C
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Foo_C>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Foo_C_ptr _ptr_type;
  typedef Foo_C_var _var_type;
  typedef Foo_C_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static Foo_C_ptr _duplicate (Foo_C_ptr obj);

  static void _tao_release (Foo_C_ptr obj);

  static Foo_C_ptr _narrow (::CORBA::Object_ptr obj);
  static Foo_C_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Foo_C_ptr _nil (void);

  virtual void op1 (
    void);

  virtual void op2 (
    ::CORBA::Long value);

  virtual ::CORBA::Long op3 (
    ::CORBA::Long value);

  virtual void op4 (
    ::CORBA::Long value);

  virtual void op5 (
    void);

  virtual void done (
    void);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Foo_C (void);

  // Concrete non-local interface only.
  Foo_C (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);

  // Non-local interface only.
  Foo_C (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Foo_C (void);

private:
  // Private and unimplemented for concrete interfaces.
  Foo_C (const Foo_C &);

  void operator= (const Foo_C &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern CSD_TP_Foo_C_Export ::CORBA::TypeCode_ptr const _tc_Foo_C;

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FOO_C__ARG_TRAITS_)
#define _FOO_C__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Foo_C>
    : public
        Object_Arg_Traits_T<
            ::Foo_C_ptr,
            ::Foo_C_var,
            ::Foo_C_out,
            TAO::Objref_Traits<Foo_C>,
            TAO::Any_Insert_Policy_Stream
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

#if !defined (_FOO_C__TRAITS_)
#define _FOO_C__TRAITS_

  template<>
  struct CSD_TP_Foo_C_Export Objref_Traits< ::Foo_C>
  {
    static ::Foo_C_ptr duplicate (
        ::Foo_C_ptr p);
    static void release (
        ::Foo_C_ptr p);
    static ::Foo_C_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Foo_C_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_C_Export void operator<<= (::CORBA::Any &, Foo_C_ptr); // copying
CSD_TP_Foo_C_Export void operator<<= (::CORBA::Any &, Foo_C_ptr *); // non-copying
CSD_TP_Foo_C_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Foo_C_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_TP_Foo_C_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Foo_C_ptr );
CSD_TP_Foo_C_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Foo_C_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "Foo_CC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

