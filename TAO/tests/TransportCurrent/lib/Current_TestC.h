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

#ifndef _TAO_IDL_CURRENT_TESTC_Z2LNST_H_
#define _TAO_IDL_CURRENT_TESTC_Z2LNST_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "Current_Test_Export.h"
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
#define TAO_EXPORT_MACRO Current_Test_Export

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
  // be/be_visitor_module/module_ch.cpp:35

  namespace Transport
  {

    // TAO_IDL - Generated from
    // be/be_interface.cpp:748

#if !defined (_TEST_TRANSPORT_CURRENTTEST__VAR_OUT_CH_)
#define _TEST_TRANSPORT_CURRENTTEST__VAR_OUT_CH_

    class CurrentTest;
    typedef CurrentTest *CurrentTest_ptr;

    typedef
      TAO_Objref_Var_T<
          CurrentTest
        >
      CurrentTest_var;
    
    typedef
      TAO_Objref_Out_T<
          CurrentTest
        >
      CurrentTest_out;

#endif /* end #if !defined */

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:40

    class Current_Test_Export CurrentTest
      : public virtual ::CORBA::Object
    {
    public:
      friend class TAO::Narrow_Utils<CurrentTest>;

      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      typedef CurrentTest_ptr _ptr_type;
      typedef CurrentTest_var _var_type;
      typedef CurrentTest_out _out_type;

      // The static operations.
      static CurrentTest_ptr _duplicate (CurrentTest_ptr obj);

      static void _tao_release (CurrentTest_ptr obj);

      static CurrentTest_ptr _narrow (::CORBA::Object_ptr obj);
      static CurrentTest_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
      static CurrentTest_ptr _nil (void);

      // TAO_IDL - Generated from
      // be/be_visitor_constant/constant_ch.cpp:35

      static const CORBA::ULong ContextTag = 11259375U;

      virtual void invoked_by_client (
        void);

      virtual void invoked_during_upcall (
        void);

      virtual ::CORBA::Long self_test (
        void);

      virtual void shutdown (
        void);

      // TAO_IDL - Generated from
      // be/be_visitor_interface/interface_ch.cpp:137

      virtual ::CORBA::Boolean _is_a (const char *type_id);
      virtual const char* _interface_repository_id (void) const;
      virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
    
    protected:
      // Concrete interface only.
      CurrentTest (void);

      // Concrete non-local interface only.
      CurrentTest (
          ::IOP::IOR *ior,
          TAO_ORB_Core *orb_core);
      
      // Non-local interface only.
      CurrentTest (
          TAO_Stub *objref,
          ::CORBA::Boolean _tao_collocated = false,
          TAO_Abstract_ServantBase *servant = 0,
          TAO_ORB_Core *orb_core = 0);

      virtual ~CurrentTest (void);
    
    private:
      // Private and unimplemented for concrete interfaces.
      CurrentTest (const CurrentTest &);

      void operator= (const CurrentTest &);
    };
  
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_ch.cpp:64
  
  } // module Test::Transport

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

#if !defined (_TEST_TRANSPORT_CURRENTTEST__ARG_TRAITS_)
#define _TEST_TRANSPORT_CURRENTTEST__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Transport::CurrentTest>
    : public
        Object_Arg_Traits_T<
            ::Test::Transport::CurrentTest_ptr,
            ::Test::Transport::CurrentTest_var,
            ::Test::Transport::CurrentTest_out,
            TAO::Objref_Traits<Test::Transport::CurrentTest>,
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

#if !defined (_TEST_TRANSPORT_CURRENTTEST__TRAITS_)
#define _TEST_TRANSPORT_CURRENTTEST__TRAITS_

  template<>
  struct Current_Test_Export Objref_Traits< ::Test::Transport::CurrentTest>
  {
    static ::Test::Transport::CurrentTest_ptr duplicate (
        ::Test::Transport::CurrentTest_ptr p);
    static void release (
        ::Test::Transport::CurrentTest_ptr p);
    static ::Test::Transport::CurrentTest_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Transport::CurrentTest_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

Current_Test_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Transport::CurrentTest_ptr );
Current_Test_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Transport::CurrentTest_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "Current_TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

