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

#ifndef _TAO_IDL_TESTC_XSODTG_H_
#define _TAO_IDL_TESTC_XSODTG_H_

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
// be/be_visitor_module/module_ch.cpp:35

namespace Bug1495_Regression
{

  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:370

  typedef ::CORBA::LongLong ThreadId;
  typedef ::CORBA::LongLong_out ThreadId_out;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_BUG1495_REGRESSION_BUG1495__VAR_OUT_CH_)
#define _BUG1495_REGRESSION_BUG1495__VAR_OUT_CH_

  class Bug1495;
  typedef Bug1495 *Bug1495_ptr;

  typedef
    TAO_Objref_Var_T<
        Bug1495
      >
    Bug1495_var;

  typedef
    TAO_Objref_Out_T<
        Bug1495
      >
    Bug1495_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Bug1495
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Bug1495>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Bug1495_ptr _ptr_type;
    typedef Bug1495_var _var_type;
    typedef Bug1495_out _out_type;

    // The static operations.
    static Bug1495_ptr _duplicate (Bug1495_ptr obj);

    static void _tao_release (Bug1495_ptr obj);

    static Bug1495_ptr _narrow (::CORBA::Object_ptr obj);
    static Bug1495_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Bug1495_ptr _nil (void);

    virtual void get_thread_id (
      ::Bug1495_Regression::ThreadId_out thread_id);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Bug1495 (void);

    // Concrete non-local interface only.
    Bug1495 (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Bug1495 (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Bug1495 (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Bug1495 (const Bug1495 &);

    void operator= (const Bug1495 &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Bug1495_Regression

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_BUG1495_REGRESSION_BUG1495__ARG_TRAITS_)
#define _BUG1495_REGRESSION_BUG1495__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Bug1495_Regression::Bug1495>
    : public
        Object_Arg_Traits_T<
            ::Bug1495_Regression::Bug1495_ptr,
            ::Bug1495_Regression::Bug1495_var,
            ::Bug1495_Regression::Bug1495_out,
            TAO::Objref_Traits<Bug1495_Regression::Bug1495>,
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

#if !defined (_BUG1495_REGRESSION_BUG1495__TRAITS_)
#define _BUG1495_REGRESSION_BUG1495__TRAITS_

  template<>
  struct  Objref_Traits< ::Bug1495_Regression::Bug1495>
  {
    static ::Bug1495_Regression::Bug1495_ptr duplicate (
        ::Bug1495_Regression::Bug1495_ptr p);
    static void release (
        ::Bug1495_Regression::Bug1495_ptr p);
    static ::Bug1495_Regression::Bug1495_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Bug1495_Regression::Bug1495_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Bug1495_Regression::Bug1495_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Bug1495_Regression::Bug1495_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

