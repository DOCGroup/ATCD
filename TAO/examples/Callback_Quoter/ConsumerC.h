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

#ifndef _TAO_IDL_CONSUMERC_DKPYEI_H_
#define _TAO_IDL_CONSUMERC_DKPYEI_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
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

namespace Callback_Quoter
{

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  Invalid_Stock : public ::CORBA::UserException
  {
  public:
    ::TAO::String_Manager reason;

    Invalid_Stock (void);
    Invalid_Stock (const Invalid_Stock &);
    ~Invalid_Stock (void);

    Invalid_Stock &operator= (const Invalid_Stock &);

    static Invalid_Stock *_downcast ( ::CORBA::Exception *);
    static const Invalid_Stock *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ctor.cpp:51

    Invalid_Stock (
        const char * _tao_reason);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  Invalid_Handle : public ::CORBA::UserException
  {
  public:
    ::TAO::String_Manager reason;

    Invalid_Handle (void);
    Invalid_Handle (const Invalid_Handle &);
    ~Invalid_Handle (void);

    Invalid_Handle &operator= (const Invalid_Handle &);

    static Invalid_Handle *_downcast ( ::CORBA::Exception *);
    static const Invalid_Handle *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ctor.cpp:51

    Invalid_Handle (
        const char * _tao_reason);
  };

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct Info;

  typedef
    ::TAO_Var_Var_T<
        Info
      >
    Info_var;

  typedef
    ::TAO_Out_T<
        Info
      >
    Info_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  Info
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef Info_var _var_type;
    typedef Info_out _out_type;
    
    ::TAO::String_Manager stock_name;
    ::CORBA::Long value;
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_CALLBACK_QUOTER_CONSUMER__VAR_OUT_CH_)
#define _CALLBACK_QUOTER_CONSUMER__VAR_OUT_CH_

  class Consumer;
  typedef Consumer *Consumer_ptr;

  typedef
    TAO_Objref_Var_T<
        Consumer
      >
    Consumer_var;
  
  typedef
    TAO_Objref_Out_T<
        Consumer
      >
    Consumer_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Consumer
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Consumer>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Consumer_ptr _ptr_type;
    typedef Consumer_var _var_type;
    typedef Consumer_out _out_type;

    // The static operations.
    static Consumer_ptr _duplicate (Consumer_ptr obj);

    static void _tao_release (Consumer_ptr obj);

    static Consumer_ptr _narrow (::CORBA::Object_ptr obj);
    static Consumer_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Consumer_ptr _nil (void);

    virtual void push (
      const ::Callback_Quoter::Info & data);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Consumer (void);

    // Concrete non-local interface only.
    Consumer (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Consumer (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Consumer (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Consumer (const Consumer &);

    void operator= (const Consumer &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Callback_Quoter

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Callback_Quoter::Info>
    : public
        Var_Size_Arg_Traits_T<
            ::Callback_Quoter::Info,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_CALLBACK_QUOTER_CONSUMER__ARG_TRAITS_)
#define _CALLBACK_QUOTER_CONSUMER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Callback_Quoter::Consumer>
    : public
        Object_Arg_Traits_T<
            ::Callback_Quoter::Consumer_ptr,
            ::Callback_Quoter::Consumer_var,
            ::Callback_Quoter::Consumer_out,
            TAO::Objref_Traits<Callback_Quoter::Consumer>,
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

#if !defined (_CALLBACK_QUOTER_CONSUMER__TRAITS_)
#define _CALLBACK_QUOTER_CONSUMER__TRAITS_

  template<>
  struct  Objref_Traits< ::Callback_Quoter::Consumer>
  {
    static ::Callback_Quoter::Consumer_ptr duplicate (
        ::Callback_Quoter::Consumer_ptr p);
    static void release (
        ::Callback_Quoter::Consumer_ptr p);
    static ::Callback_Quoter::Consumer_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Callback_Quoter::Consumer_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Callback_Quoter::Invalid_Stock &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Callback_Quoter::Invalid_Stock &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Callback_Quoter::Invalid_Handle &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Callback_Quoter::Invalid_Handle &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Callback_Quoter::Info &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Callback_Quoter::Info &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Callback_Quoter::Consumer_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Callback_Quoter::Consumer_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "ConsumerC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

