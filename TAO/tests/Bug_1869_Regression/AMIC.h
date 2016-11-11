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

#ifndef _TAO_IDL_AMIC_AJF25V_H_
#define _TAO_IDL_AMIC_AJF25V_H_

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

namespace AMI_test
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_AMI_TEST_ADDER__VAR_OUT_CH_)
#define _AMI_TEST_ADDER__VAR_OUT_CH_

  class AMI_adderHandler;
  typedef AMI_adderHandler *AMI_adderHandler_ptr;

  class adder;
  typedef adder *adder_ptr;

  typedef
    TAO_Objref_Var_T<
        adder
      >
    adder_var;
  
  typedef
    TAO_Objref_Out_T<
        adder
      >
    adder_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  adder
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<adder>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef adder_ptr _ptr_type;
    typedef adder_var _var_type;
    typedef adder_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static adder_ptr _duplicate (adder_ptr obj);

    static void _tao_release (adder_ptr obj);

    static adder_ptr _narrow (::CORBA::Object_ptr obj);
    static adder_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static adder_ptr _nil (void);

    virtual ::CORBA::Long add (
      ::CORBA::Long a,
      ::CORBA::Long b);

    virtual void sendc_add (
      ::AMI_test::AMI_adderHandler_ptr ami_handler,
      ::CORBA::Long a,
      ::CORBA::Long b);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    adder (void);

    // Concrete non-local interface only.
    adder (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    adder (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~adder (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    adder (const adder &);

    void operator= (const adder &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_adder;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_AMI_TEST_AMI_ADDERHANDLER__VAR_OUT_CH_)
#define _AMI_TEST_AMI_ADDERHANDLER__VAR_OUT_CH_

  class AMI_adderHandler;
  typedef AMI_adderHandler *AMI_adderHandler_ptr;

  typedef
    TAO_Objref_Var_T<
        AMI_adderHandler
      >
    AMI_adderHandler_var;
  
  typedef
    TAO_Objref_Out_T<
        AMI_adderHandler
      >
    AMI_adderHandler_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  AMI_adderHandler
    : public virtual ::Messaging::ReplyHandler
  
  {
  public:
    friend class TAO::Narrow_Utils<AMI_adderHandler>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef AMI_adderHandler_ptr _ptr_type;
    typedef AMI_adderHandler_var _var_type;
    typedef AMI_adderHandler_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_adderHandler_ptr _duplicate (AMI_adderHandler_ptr obj);

    static void _tao_release (AMI_adderHandler_ptr obj);

    static AMI_adderHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_adderHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_adderHandler_ptr _nil (void);

    virtual void add (
      ::CORBA::Long ami_return_val);

    static void
    add_reply_stub (
      TAO_InputCDR &_tao_reply_cdr,
      ::Messaging::ReplyHandler_ptr _tao_reply_handler,
      ::CORBA::ULong reply_status);

    virtual void add_excep (
      ::Messaging::ExceptionHolder * excep_holder);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI_adderHandler (void);

    // Concrete non-local interface only.
    AMI_adderHandler (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI_adderHandler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~AMI_adderHandler (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI_adderHandler (const AMI_adderHandler &);

    void operator= (const AMI_adderHandler &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_AMI_adderHandler;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module AMI_test

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

#if !defined (_AMI_TEST_ADDER__ARG_TRAITS_)
#define _AMI_TEST_ADDER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::AMI_test::adder>
    : public
        Object_Arg_Traits_T<
            ::AMI_test::adder_ptr,
            ::AMI_test::adder_var,
            ::AMI_test::adder_out,
            TAO::Objref_Traits<AMI_test::adder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_AMI_TEST_AMI_ADDERHANDLER__ARG_TRAITS_)
#define _AMI_TEST_AMI_ADDERHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::AMI_test::AMI_adderHandler>
    : public
        Object_Arg_Traits_T<
            ::AMI_test::AMI_adderHandler_ptr,
            ::AMI_test::AMI_adderHandler_var,
            ::AMI_test::AMI_adderHandler_out,
            TAO::Objref_Traits<AMI_test::AMI_adderHandler>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/obv_module.cpp:44

namespace OBV_AMI_test
{
}

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_AMI_TEST_ADDER__TRAITS_)
#define _AMI_TEST_ADDER__TRAITS_

  template<>
  struct  Objref_Traits< ::AMI_test::adder>
  {
    static ::AMI_test::adder_ptr duplicate (
        ::AMI_test::adder_ptr p);
    static void release (
        ::AMI_test::adder_ptr p);
    static ::AMI_test::adder_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::AMI_test::adder_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMI_TEST_AMI_ADDERHANDLER__TRAITS_)
#define _AMI_TEST_AMI_ADDERHANDLER__TRAITS_

  template<>
  struct  Objref_Traits< ::AMI_test::AMI_adderHandler>
  {
    static ::AMI_test::AMI_adderHandler_ptr duplicate (
        ::AMI_test::AMI_adderHandler_ptr p);
    static void release (
        ::AMI_test::AMI_adderHandler_ptr p);
    static ::AMI_test::AMI_adderHandler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::AMI_test::AMI_adderHandler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace AMI_test
{
   void operator<<= ( ::CORBA::Any &, adder_ptr); // copying
   void operator<<= ( ::CORBA::Any &, adder_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, adder_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, AMI_test::adder_ptr); // copying
 void operator<<= (::CORBA::Any &, AMI_test::adder_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_test::adder_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace AMI_test
{
   void operator<<= ( ::CORBA::Any &, AMI_adderHandler_ptr); // copying
   void operator<<= ( ::CORBA::Any &, AMI_adderHandler_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_adderHandler_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, AMI_test::AMI_adderHandler_ptr); // copying
 void operator<<= (::CORBA::Any &, AMI_test::AMI_adderHandler_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_test::AMI_adderHandler_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMI_test::adder_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, AMI_test::adder_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMI_test::AMI_adderHandler_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, AMI_test::AMI_adderHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "AMIC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

