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

#ifndef _TAO_IDL_TESTC_GLMPQ8_H_
#define _TAO_IDL_TESTC_GLMPQ8_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Messaging/Messaging.h"
#include "tao/Valuetype/Value_VarOut_T.h"
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
  // be/be_visitor_typedef/typedef_ch.cpp:370

  typedef ::CORBA::ULongLong Timestamp;
  typedef ::CORBA::ULongLong_out Timestamp_out;

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Timestamp;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_ROUNDTRIP__VAR_OUT_CH_)
#define _TEST_ROUNDTRIP__VAR_OUT_CH_

  class AMI_RoundtripHandler;
  typedef AMI_RoundtripHandler *AMI_RoundtripHandler_ptr;

  class Roundtrip;
  typedef Roundtrip *Roundtrip_ptr;

  typedef
    TAO_Objref_Var_T<
        Roundtrip
      >
    Roundtrip_var;
  
  typedef
    TAO_Objref_Out_T<
        Roundtrip
      >
    Roundtrip_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Roundtrip
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Roundtrip>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Roundtrip_ptr _ptr_type;
    typedef Roundtrip_var _var_type;
    typedef Roundtrip_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Roundtrip_ptr _duplicate (Roundtrip_ptr obj);

    static void _tao_release (Roundtrip_ptr obj);

    static Roundtrip_ptr _narrow (::CORBA::Object_ptr obj);
    static Roundtrip_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Roundtrip_ptr _nil (void);

    virtual ::Test::Timestamp test_method (
      ::Test::Timestamp send_time);

    virtual void shutdown (
      void);

    virtual void sendc_test_method (
      ::Test::AMI_RoundtripHandler_ptr ami_handler,
      ::Test::Timestamp send_time);

    virtual void sendc_shutdown (
      ::Test::AMI_RoundtripHandler_ptr ami_handler);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Roundtrip (void);

    // Concrete non-local interface only.
    Roundtrip (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Roundtrip (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Roundtrip (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Roundtrip (const Roundtrip &);

    void operator= (const Roundtrip &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Roundtrip;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_AMI_ROUNDTRIPHANDLER__VAR_OUT_CH_)
#define _TEST_AMI_ROUNDTRIPHANDLER__VAR_OUT_CH_

  class AMI_RoundtripHandler;
  typedef AMI_RoundtripHandler *AMI_RoundtripHandler_ptr;

  typedef
    TAO_Objref_Var_T<
        AMI_RoundtripHandler
      >
    AMI_RoundtripHandler_var;
  
  typedef
    TAO_Objref_Out_T<
        AMI_RoundtripHandler
      >
    AMI_RoundtripHandler_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  AMI_RoundtripHandler
    : public virtual ::Messaging::ReplyHandler
  
  {
  public:
    friend class TAO::Narrow_Utils<AMI_RoundtripHandler>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef AMI_RoundtripHandler_ptr _ptr_type;
    typedef AMI_RoundtripHandler_var _var_type;
    typedef AMI_RoundtripHandler_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_RoundtripHandler_ptr _duplicate (AMI_RoundtripHandler_ptr obj);

    static void _tao_release (AMI_RoundtripHandler_ptr obj);

    static AMI_RoundtripHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_RoundtripHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_RoundtripHandler_ptr _nil (void);

    virtual void test_method (
      ::Test::Timestamp ami_return_val);

    static void
    test_method_reply_stub (
      TAO_InputCDR &_tao_reply_cdr,
      ::Messaging::ReplyHandler_ptr _tao_reply_handler,
      ::CORBA::ULong reply_status);

    virtual void test_method_excep (
      ::Messaging::ExceptionHolder * excep_holder);

    virtual void shutdown (
      void);

    static void
    shutdown_reply_stub (
      TAO_InputCDR &_tao_reply_cdr,
      ::Messaging::ReplyHandler_ptr _tao_reply_handler,
      ::CORBA::ULong reply_status);

    virtual void shutdown_excep (
      ::Messaging::ExceptionHolder * excep_holder);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI_RoundtripHandler (void);

    // Concrete non-local interface only.
    AMI_RoundtripHandler (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI_RoundtripHandler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~AMI_RoundtripHandler (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI_RoundtripHandler (const AMI_RoundtripHandler &);

    void operator= (const AMI_RoundtripHandler &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_AMI_RoundtripHandler;

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
  // be/be_visitor_arg_traits.cpp:306

#if !defined (_MESSAGING_EXCEPTIONHOLDER__ARG_TRAITS_)
#define _MESSAGING_EXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::Messaging::ExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::Messaging::ExceptionHolder *,
            ::Messaging::ExceptionHolder_var,
            ::Messaging::ExceptionHolder_out,
            TAO::Value_Traits<Messaging::ExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_ROUNDTRIP__ARG_TRAITS_)
#define _TEST_ROUNDTRIP__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Roundtrip>
    : public
        Object_Arg_Traits_T<
            ::Test::Roundtrip_ptr,
            ::Test::Roundtrip_var,
            ::Test::Roundtrip_out,
            TAO::Objref_Traits<Test::Roundtrip>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_AMI_ROUNDTRIPHANDLER__ARG_TRAITS_)
#define _TEST_AMI_ROUNDTRIPHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::AMI_RoundtripHandler>
    : public
        Object_Arg_Traits_T<
            ::Test::AMI_RoundtripHandler_ptr,
            ::Test::AMI_RoundtripHandler_var,
            ::Test::AMI_RoundtripHandler_out,
            TAO::Objref_Traits<Test::AMI_RoundtripHandler>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/obv_module.cpp:44

namespace OBV_Test
{
}

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_TEST_ROUNDTRIP__TRAITS_)
#define _TEST_ROUNDTRIP__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Roundtrip>
  {
    static ::Test::Roundtrip_ptr duplicate (
        ::Test::Roundtrip_ptr p);
    static void release (
        ::Test::Roundtrip_ptr p);
    static ::Test::Roundtrip_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Roundtrip_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_AMI_ROUNDTRIPHANDLER__TRAITS_)
#define _TEST_AMI_ROUNDTRIPHANDLER__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::AMI_RoundtripHandler>
  {
    static ::Test::AMI_RoundtripHandler_ptr duplicate (
        ::Test::AMI_RoundtripHandler_ptr p);
    static void release (
        ::Test::AMI_RoundtripHandler_ptr p);
    static ::Test::AMI_RoundtripHandler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::AMI_RoundtripHandler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, Roundtrip_ptr); // copying
   void operator<<= ( ::CORBA::Any &, Roundtrip_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Roundtrip_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Test::Roundtrip_ptr); // copying
 void operator<<= (::CORBA::Any &, Test::Roundtrip_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Roundtrip_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, AMI_RoundtripHandler_ptr); // copying
   void operator<<= ( ::CORBA::Any &, AMI_RoundtripHandler_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_RoundtripHandler_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Test::AMI_RoundtripHandler_ptr); // copying
 void operator<<= (::CORBA::Any &, Test::AMI_RoundtripHandler_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::AMI_RoundtripHandler_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Roundtrip_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Roundtrip_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::AMI_RoundtripHandler_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::AMI_RoundtripHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

