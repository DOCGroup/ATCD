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

#ifndef _TAO_IDL_AMI_TESTC_7C7WNQ_H_
#define _TAO_IDL_AMI_TESTC_7C7WNQ_H_

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
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Messaging/Messaging.h"
#include "tao/Valuetype/Value_VarOut_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
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

namespace A
{

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  DidTheRightThing : public ::CORBA::UserException
  {
  public:

    DidTheRightThing (void);
    DidTheRightThing (const DidTheRightThing &);
    ~DidTheRightThing (void);

    DidTheRightThing &operator= (const DidTheRightThing &);

    static void _tao_any_destructor (void *);

    static DidTheRightThing *_downcast ( ::CORBA::Exception *);
    static const DidTheRightThing *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_DidTheRightThing;

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  DidTheWrongThing : public ::CORBA::UserException
  {
  public:

    DidTheWrongThing (void);
    DidTheWrongThing (const DidTheWrongThing &);
    ~DidTheWrongThing (void);

    DidTheWrongThing &operator= (const DidTheWrongThing &);

    static void _tao_any_destructor (void *);

    static DidTheWrongThing *_downcast ( ::CORBA::Exception *);
    static const DidTheWrongThing *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_DidTheWrongThing;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_A_AMI_TEST__VAR_OUT_CH_)
#define _A_AMI_TEST__VAR_OUT_CH_

  class AMI_AMI_TestHandler;
  typedef AMI_AMI_TestHandler *AMI_AMI_TestHandler_ptr;

  class AMI_Test;
  typedef AMI_Test *AMI_Test_ptr;

  typedef
    TAO_Objref_Var_T<
        AMI_Test
      >
    AMI_Test_var;
  
  typedef
    TAO_Objref_Out_T<
        AMI_Test
      >
    AMI_Test_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  AMI_Test
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<AMI_Test>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef AMI_Test_ptr _ptr_type;
    typedef AMI_Test_var _var_type;
    typedef AMI_Test_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_Test_ptr _duplicate (AMI_Test_ptr obj);

    static void _tao_release (AMI_Test_ptr obj);

    static AMI_Test_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_Test_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_Test_ptr _nil (void);

    virtual void foo (
      ::CORBA::Long value);

    virtual void shutdown (
      void);

    virtual void sendc_foo (
      ::A::AMI_AMI_TestHandler_ptr ami_handler,
      ::CORBA::Long value);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI_Test (void);

    // Concrete non-local interface only.
    AMI_Test (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI_Test (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~AMI_Test (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI_Test (const AMI_Test &);

    void operator= (const AMI_Test &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_AMI_Test;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_A_AMI_AMI_TESTHANDLER__VAR_OUT_CH_)
#define _A_AMI_AMI_TESTHANDLER__VAR_OUT_CH_

  class AMI_AMI_TestHandler;
  typedef AMI_AMI_TestHandler *AMI_AMI_TestHandler_ptr;

  typedef
    TAO_Objref_Var_T<
        AMI_AMI_TestHandler
      >
    AMI_AMI_TestHandler_var;
  
  typedef
    TAO_Objref_Out_T<
        AMI_AMI_TestHandler
      >
    AMI_AMI_TestHandler_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  AMI_AMI_TestHandler
    : public virtual ::Messaging::ReplyHandler
  
  {
  public:
    friend class TAO::Narrow_Utils<AMI_AMI_TestHandler>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef AMI_AMI_TestHandler_ptr _ptr_type;
    typedef AMI_AMI_TestHandler_var _var_type;
    typedef AMI_AMI_TestHandler_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_AMI_TestHandler_ptr _duplicate (AMI_AMI_TestHandler_ptr obj);

    static void _tao_release (AMI_AMI_TestHandler_ptr obj);

    static AMI_AMI_TestHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_AMI_TestHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_AMI_TestHandler_ptr _nil (void);

    virtual void foo (
      void);

    static void
    foo_reply_stub (
      TAO_InputCDR &_tao_reply_cdr,
      ::Messaging::ReplyHandler_ptr _tao_reply_handler,
      ::CORBA::ULong reply_status);

    virtual void foo_excep (
      ::Messaging::ExceptionHolder * excep_holder);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    AMI_AMI_TestHandler (void);

    // Concrete non-local interface only.
    AMI_AMI_TestHandler (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    AMI_AMI_TestHandler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~AMI_AMI_TestHandler (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    AMI_AMI_TestHandler (const AMI_AMI_TestHandler &);

    void operator= (const AMI_AMI_TestHandler &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_AMI_AMI_TestHandler;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module A

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

#if !defined (_A_AMI_TEST__ARG_TRAITS_)
#define _A_AMI_TEST__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::AMI_Test>
    : public
        Object_Arg_Traits_T<
            ::A::AMI_Test_ptr,
            ::A::AMI_Test_var,
            ::A::AMI_Test_out,
            TAO::Objref_Traits<A::AMI_Test>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_A_AMI_AMI_TESTHANDLER__ARG_TRAITS_)
#define _A_AMI_AMI_TESTHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::A::AMI_AMI_TestHandler>
    : public
        Object_Arg_Traits_T<
            ::A::AMI_AMI_TestHandler_ptr,
            ::A::AMI_AMI_TestHandler_var,
            ::A::AMI_AMI_TestHandler_out,
            TAO::Objref_Traits<A::AMI_AMI_TestHandler>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/obv_module.cpp:44

namespace OBV_A
{
}

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_A_AMI_TEST__TRAITS_)
#define _A_AMI_TEST__TRAITS_

  template<>
  struct  Objref_Traits< ::A::AMI_Test>
  {
    static ::A::AMI_Test_ptr duplicate (
        ::A::AMI_Test_ptr p);
    static void release (
        ::A::AMI_Test_ptr p);
    static ::A::AMI_Test_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::A::AMI_Test_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_A_AMI_AMI_TESTHANDLER__TRAITS_)
#define _A_AMI_AMI_TESTHANDLER__TRAITS_

  template<>
  struct  Objref_Traits< ::A::AMI_AMI_TestHandler>
  {
    static ::A::AMI_AMI_TestHandler_ptr duplicate (
        ::A::AMI_AMI_TestHandler_ptr p);
    static void release (
        ::A::AMI_AMI_TestHandler_ptr p);
    static ::A::AMI_AMI_TestHandler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::A::AMI_AMI_TestHandler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_ch.cpp:38

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace A
{
  

   void operator<<= (::CORBA::Any &, const ::A::DidTheRightThing &); // copying version
   void operator<<= (::CORBA::Any &, ::A::DidTheRightThing*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::A::DidTheRightThing *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::A::DidTheRightThing *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 void operator<<= (::CORBA::Any &, const A::DidTheRightThing &); // copying version
 void operator<<= (::CORBA::Any &, A::DidTheRightThing*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::DidTheRightThing *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const A::DidTheRightThing *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_ch.cpp:38

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace A
{
  

   void operator<<= (::CORBA::Any &, const ::A::DidTheWrongThing &); // copying version
   void operator<<= (::CORBA::Any &, ::A::DidTheWrongThing*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::A::DidTheWrongThing *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::A::DidTheWrongThing *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 void operator<<= (::CORBA::Any &, const A::DidTheWrongThing &); // copying version
 void operator<<= (::CORBA::Any &, A::DidTheWrongThing*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::DidTheWrongThing *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const A::DidTheWrongThing *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace A
{
   void operator<<= ( ::CORBA::Any &, AMI_Test_ptr); // copying
   void operator<<= ( ::CORBA::Any &, AMI_Test_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_Test_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, A::AMI_Test_ptr); // copying
 void operator<<= (::CORBA::Any &, A::AMI_Test_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMI_Test_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace A
{
   void operator<<= ( ::CORBA::Any &, AMI_AMI_TestHandler_ptr); // copying
   void operator<<= ( ::CORBA::Any &, AMI_AMI_TestHandler_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_AMI_TestHandler_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, A::AMI_AMI_TestHandler_ptr); // copying
 void operator<<= (::CORBA::Any &, A::AMI_AMI_TestHandler_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, A::AMI_AMI_TestHandler_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::DidTheRightThing &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, A::DidTheRightThing &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::DidTheWrongThing &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, A::DidTheWrongThing &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::AMI_Test_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, A::AMI_Test_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const A::AMI_AMI_TestHandler_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, A::AMI_AMI_TestHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "ami_testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

