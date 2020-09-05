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

#ifndef _TAO_IDL_TESTC_CWU9XK_H_
#define _TAO_IDL_TESTC_CWU9XK_H_

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

namespace Test
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_SHUTDOWN_HELPER__VAR_OUT_CH_)
#define _TEST_SHUTDOWN_HELPER__VAR_OUT_CH_

  class Shutdown_Helper;
  typedef Shutdown_Helper *Shutdown_Helper_ptr;

  typedef
    TAO_Objref_Var_T<
        Shutdown_Helper
      >
    Shutdown_Helper_var;

  typedef
    TAO_Objref_Out_T<
        Shutdown_Helper
      >
    Shutdown_Helper_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_ONEWAY_RECEIVER__VAR_OUT_CH_)
#define _TEST_ONEWAY_RECEIVER__VAR_OUT_CH_

  class Oneway_Receiver;
  typedef Oneway_Receiver *Oneway_Receiver_ptr;

  typedef
    TAO_Objref_Var_T<
        Oneway_Receiver
      >
    Oneway_Receiver_var;

  typedef
    TAO_Objref_Out_T<
        Oneway_Receiver
      >
    Oneway_Receiver_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Oneway_Receiver
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Oneway_Receiver>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Oneway_Receiver_ptr _ptr_type;
    typedef Oneway_Receiver_var _var_type;
    typedef Oneway_Receiver_out _out_type;

    // The static operations.
    static Oneway_Receiver_ptr _duplicate (Oneway_Receiver_ptr obj);

    static void _tao_release (Oneway_Receiver_ptr obj);

    static Oneway_Receiver_ptr _narrow (::CORBA::Object_ptr obj);
    static Oneway_Receiver_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Oneway_Receiver_ptr _nil (void);

    virtual void raise_no_permission (
      void);

    virtual void destroy (
      void);

    virtual ::Test::Shutdown_Helper_ptr get_shutdown_helper (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Oneway_Receiver (void);

    // Concrete non-local interface only.
    Oneway_Receiver (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Oneway_Receiver (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Oneway_Receiver (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Oneway_Receiver (const Oneway_Receiver &);

    void operator= (const Oneway_Receiver &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Shutdown_Helper
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Shutdown_Helper>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Shutdown_Helper_ptr _ptr_type;
    typedef Shutdown_Helper_var _var_type;
    typedef Shutdown_Helper_out _out_type;

    // The static operations.
    static Shutdown_Helper_ptr _duplicate (Shutdown_Helper_ptr obj);

    static void _tao_release (Shutdown_Helper_ptr obj);

    static Shutdown_Helper_ptr _narrow (::CORBA::Object_ptr obj);
    static Shutdown_Helper_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Shutdown_Helper_ptr _nil (void);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Shutdown_Helper (void);

    // Concrete non-local interface only.
    Shutdown_Helper (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Shutdown_Helper (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Shutdown_Helper (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Shutdown_Helper (const Shutdown_Helper &);

    void operator= (const Shutdown_Helper &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Test

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_SHUTDOWN_HELPER__ARG_TRAITS_)
#define _TEST_SHUTDOWN_HELPER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Shutdown_Helper>
    : public
        Object_Arg_Traits_T<
            ::Test::Shutdown_Helper_ptr,
            ::Test::Shutdown_Helper_var,
            ::Test::Shutdown_Helper_out,
            TAO::Objref_Traits<Test::Shutdown_Helper>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_ONEWAY_RECEIVER__ARG_TRAITS_)
#define _TEST_ONEWAY_RECEIVER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Oneway_Receiver>
    : public
        Object_Arg_Traits_T<
            ::Test::Oneway_Receiver_ptr,
            ::Test::Oneway_Receiver_var,
            ::Test::Oneway_Receiver_out,
            TAO::Objref_Traits<Test::Oneway_Receiver>,
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

#if !defined (_TEST_ONEWAY_RECEIVER__TRAITS_)
#define _TEST_ONEWAY_RECEIVER__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Oneway_Receiver>
  {
    static ::Test::Oneway_Receiver_ptr duplicate (
        ::Test::Oneway_Receiver_ptr p);
    static void release (
        ::Test::Oneway_Receiver_ptr p);
    static ::Test::Oneway_Receiver_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Oneway_Receiver_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_SHUTDOWN_HELPER__TRAITS_)
#define _TEST_SHUTDOWN_HELPER__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Shutdown_Helper>
  {
    static ::Test::Shutdown_Helper_ptr duplicate (
        ::Test::Shutdown_Helper_ptr p);
    static void release (
        ::Test::Shutdown_Helper_ptr p);
    static ::Test::Shutdown_Helper_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Shutdown_Helper_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Oneway_Receiver_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Oneway_Receiver_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Shutdown_Helper_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Shutdown_Helper_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

