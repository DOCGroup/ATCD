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

#ifndef _TAO_IDL_EVENT_COMMC_IEGWMF_H_
#define _TAO_IDL_EVENT_COMMC_IEGWMF_H_

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
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Any.h"
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

namespace Event_Comm
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct Event;

  typedef
    ::TAO_Var_Var_T<
        Event
      >
    Event_var;

  typedef
    ::TAO_Out_T<
        Event
      >
    Event_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  Event
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef Event_var _var_type;
    typedef Event_out _out_type;
    
    ::TAO::String_Manager tag_;
    ::CORBA::Any value_;
    ::CORBA::Object_var object_ref_;
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_EVENT_COMM_CONSUMER__VAR_OUT_CH_)
#define _EVENT_COMM_CONSUMER__VAR_OUT_CH_

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
      const ::Event_Comm::Event & event_instance);

    virtual void disconnect (
      const char * reason);

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
  // be/be_interface.cpp:748

#if !defined (_EVENT_COMM_NOTIFIER__VAR_OUT_CH_)
#define _EVENT_COMM_NOTIFIER__VAR_OUT_CH_

  class Notifier;
  typedef Notifier *Notifier_ptr;

  typedef
    TAO_Objref_Var_T<
        Notifier
      >
    Notifier_var;
  
  typedef
    TAO_Objref_Out_T<
        Notifier
      >
    Notifier_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Notifier
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Notifier>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Notifier_ptr _ptr_type;
    typedef Notifier_var _var_type;
    typedef Notifier_out _out_type;

    // The static operations.
    static Notifier_ptr _duplicate (Notifier_ptr obj);

    static void _tao_release (Notifier_ptr obj);

    static Notifier_ptr _narrow (::CORBA::Object_ptr obj);
    static Notifier_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Notifier_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:41

    class  CannotSubscribe : public ::CORBA::UserException
    {
    public:
      ::TAO::String_Manager reason_;

      CannotSubscribe (void);
      CannotSubscribe (const CannotSubscribe &);
      ~CannotSubscribe (void);

      CannotSubscribe &operator= (const CannotSubscribe &);

      static CannotSubscribe *_downcast ( ::CORBA::Exception *);
      static const CannotSubscribe *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);

      // TAO_IDL - Generated from
      // be/be_visitor_exception/exception_ctor.cpp:51

      CannotSubscribe (
          const char * _tao_reason_);
    };

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:41

    class  CannotUnsubscribe : public ::CORBA::UserException
    {
    public:
      ::TAO::String_Manager reason_;

      CannotUnsubscribe (void);
      CannotUnsubscribe (const CannotUnsubscribe &);
      ~CannotUnsubscribe (void);

      CannotUnsubscribe &operator= (const CannotUnsubscribe &);

      static CannotUnsubscribe *_downcast ( ::CORBA::Exception *);
      static const CannotUnsubscribe *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);

      // TAO_IDL - Generated from
      // be/be_visitor_exception/exception_ctor.cpp:51

      CannotUnsubscribe (
          const char * _tao_reason_);
    };

    virtual void disconnect (
      const char * reason);

    virtual void push (
      const ::Event_Comm::Event & event_instance);

    virtual void subscribe (
      ::Event_Comm::Consumer_ptr subscriber,
      const char * filtering_criteria);

    virtual void unsubscribe (
      ::Event_Comm::Consumer_ptr unsubscriber,
      const char * filtering_criteria);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Notifier (void);

    // Concrete non-local interface only.
    Notifier (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Notifier (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Notifier (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Notifier (const Notifier &);

    void operator= (const Notifier &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Event_Comm

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Event_Comm::Event>
    : public
        Var_Size_Arg_Traits_T<
            ::Event_Comm::Event,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_EVENT_COMM_CONSUMER__ARG_TRAITS_)
#define _EVENT_COMM_CONSUMER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Event_Comm::Consumer>
    : public
        Object_Arg_Traits_T<
            ::Event_Comm::Consumer_ptr,
            ::Event_Comm::Consumer_var,
            ::Event_Comm::Consumer_out,
            TAO::Objref_Traits<Event_Comm::Consumer>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_EVENT_COMM_NOTIFIER__ARG_TRAITS_)
#define _EVENT_COMM_NOTIFIER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Event_Comm::Notifier>
    : public
        Object_Arg_Traits_T<
            ::Event_Comm::Notifier_ptr,
            ::Event_Comm::Notifier_var,
            ::Event_Comm::Notifier_out,
            TAO::Objref_Traits<Event_Comm::Notifier>,
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

#if !defined (_EVENT_COMM_CONSUMER__TRAITS_)
#define _EVENT_COMM_CONSUMER__TRAITS_

  template<>
  struct  Objref_Traits< ::Event_Comm::Consumer>
  {
    static ::Event_Comm::Consumer_ptr duplicate (
        ::Event_Comm::Consumer_ptr p);
    static void release (
        ::Event_Comm::Consumer_ptr p);
    static ::Event_Comm::Consumer_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Event_Comm::Consumer_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_EVENT_COMM_NOTIFIER__TRAITS_)
#define _EVENT_COMM_NOTIFIER__TRAITS_

  template<>
  struct  Objref_Traits< ::Event_Comm::Notifier>
  {
    static ::Event_Comm::Notifier_ptr duplicate (
        ::Event_Comm::Notifier_ptr p);
    static void release (
        ::Event_Comm::Notifier_ptr p);
    static ::Event_Comm::Notifier_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Event_Comm::Notifier_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Event_Comm::Event &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Event_Comm::Event &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Event_Comm::Consumer_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Event_Comm::Consumer_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Event_Comm::Notifier_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Event_Comm::Notifier_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Event_Comm::Notifier::CannotSubscribe &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Event_Comm::Notifier::CannotSubscribe &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Event_Comm::Notifier::CannotUnsubscribe &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Event_Comm::Notifier::CannotUnsubscribe &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "Event_CommC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

