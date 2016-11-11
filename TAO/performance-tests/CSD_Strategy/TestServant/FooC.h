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

#ifndef _TAO_IDL_FOOC_ADH9UE_H_
#define _TAO_IDL_FOOC_ADH9UE_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "TestServant/CSD_PT_TestServant_Export.h"
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

#include "TestInf/FooExceptionC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 4 || TAO_MICRO_VERSION != 1
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO CSD_PT_TestServant_Export

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

#if !defined (_FOO__VAR_OUT_CH_)
#define _FOO__VAR_OUT_CH_

class Foo;
typedef Foo *Foo_ptr;

typedef
  TAO_Objref_Var_T<
      Foo
    >
  Foo_var;

typedef
  TAO_Objref_Out_T<
      Foo
    >
  Foo_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class CSD_PT_TestServant_Export Foo
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Foo>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Foo_ptr _ptr_type;
  typedef Foo_var _var_type;
  typedef Foo_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static Foo_ptr _duplicate (Foo_ptr obj);

  static void _tao_release (Foo_ptr obj);

  static Foo_ptr _narrow (::CORBA::Object_ptr obj);
  static Foo_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Foo_ptr _nil (void);

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
  Foo (void);

  // Concrete non-local interface only.
  Foo (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  Foo (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Foo (void);

private:
  // Private and unimplemented for concrete interfaces.
  Foo (const Foo &);

  void operator= (const Foo &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern CSD_PT_TestServant_Export ::CORBA::TypeCode_ptr const _tc_Foo;

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FOO__ARG_TRAITS_)
#define _FOO__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Foo>
    : public
        Object_Arg_Traits_T<
            ::Foo_ptr,
            ::Foo_var,
            ::Foo_out,
            TAO::Objref_Traits<Foo>,
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

#if !defined (_FOO__TRAITS_)
#define _FOO__TRAITS_

  template<>
  struct CSD_PT_TestServant_Export Objref_Traits< ::Foo>
  {
    static ::Foo_ptr duplicate (
        ::Foo_ptr p);
    static void release (
        ::Foo_ptr p);
    static ::Foo_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Foo_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_PT_TestServant_Export void operator<<= (::CORBA::Any &, Foo_ptr); // copying
CSD_PT_TestServant_Export void operator<<= (::CORBA::Any &, Foo_ptr *); // non-copying
CSD_PT_TestServant_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Foo_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

CSD_PT_TestServant_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Foo_ptr );
CSD_PT_TestServant_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Foo_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "FooC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

