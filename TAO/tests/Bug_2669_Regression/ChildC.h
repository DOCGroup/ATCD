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

#ifndef _TAO_IDL_CHILDC_M05HLI_H_
#define _TAO_IDL_CHILDC_M05HLI_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/Messaging/Messaging.h"
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

#include "ParentC.h"

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
// be/be_interface.cpp:748

#if !defined (_CHILDINTERFACE__VAR_OUT_CH_)
#define _CHILDINTERFACE__VAR_OUT_CH_

class AMI_ChildInterfaceHandler;
typedef AMI_ChildInterfaceHandler *AMI_ChildInterfaceHandler_ptr;

class ChildInterface;
typedef ChildInterface *ChildInterface_ptr;

typedef
  TAO_Objref_Var_T<
      ChildInterface
    >
  ChildInterface_var;

typedef
  TAO_Objref_Out_T<
      ChildInterface
    >
  ChildInterface_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  ChildInterface
  : public virtual ::ParentInterface

{
public:
  friend class TAO::Narrow_Utils<ChildInterface>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef ChildInterface_ptr _ptr_type;
  typedef ChildInterface_var _var_type;
  typedef ChildInterface_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static ChildInterface_ptr _duplicate (ChildInterface_ptr obj);

  static void _tao_release (ChildInterface_ptr obj);

  static ChildInterface_ptr _narrow (::CORBA::Object_ptr obj);
  static ChildInterface_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static ChildInterface_ptr _nil (void);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  ChildInterface (void);

  // Concrete non-local interface only.
  ChildInterface (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);

  // Non-local interface only.
  ChildInterface (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~ChildInterface (void);

private:
  // Private and unimplemented for concrete interfaces.
  ChildInterface (const ChildInterface &);

  void operator= (const ChildInterface &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_ChildInterface;

// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_AMI_CHILDINTERFACEHANDLER__VAR_OUT_CH_)
#define _AMI_CHILDINTERFACEHANDLER__VAR_OUT_CH_

class AMI_ChildInterfaceHandler;
typedef AMI_ChildInterfaceHandler *AMI_ChildInterfaceHandler_ptr;

typedef
  TAO_Objref_Var_T<
      AMI_ChildInterfaceHandler
    >
  AMI_ChildInterfaceHandler_var;

typedef
  TAO_Objref_Out_T<
      AMI_ChildInterfaceHandler
    >
  AMI_ChildInterfaceHandler_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  AMI_ChildInterfaceHandler
  : public virtual ::AMI_ParentInterfaceHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_ChildInterfaceHandler>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef AMI_ChildInterfaceHandler_ptr _ptr_type;
  typedef AMI_ChildInterfaceHandler_var _var_type;
  typedef AMI_ChildInterfaceHandler_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_ChildInterfaceHandler_ptr _duplicate (AMI_ChildInterfaceHandler_ptr obj);

  static void _tao_release (AMI_ChildInterfaceHandler_ptr obj);

  static AMI_ChildInterfaceHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_ChildInterfaceHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_ChildInterfaceHandler_ptr _nil (void);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  AMI_ChildInterfaceHandler (void);

  // Concrete non-local interface only.
  AMI_ChildInterfaceHandler (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);

  // Non-local interface only.
  AMI_ChildInterfaceHandler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~AMI_ChildInterfaceHandler (void);

private:
  // Private and unimplemented for concrete interfaces.
  AMI_ChildInterfaceHandler (const AMI_ChildInterfaceHandler &);

  void operator= (const AMI_ChildInterfaceHandler &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_AMI_ChildInterfaceHandler;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:35

namespace ChildModule
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_CHILDMODULE_CHILDINTERFACE__VAR_OUT_CH_)
#define _CHILDMODULE_CHILDINTERFACE__VAR_OUT_CH_

  class AMI_ChildInterfaceHandler;
  typedef AMI_ChildInterfaceHandler *AMI_ChildInterfaceHandler_ptr;

  class ChildInterface;
  typedef ChildInterface *ChildInterface_ptr;

  typedef
    TAO_Objref_Var_T<
        ChildInterface
      >
    ChildInterface_var;

  typedef
    TAO_Objref_Out_T<
        ChildInterface
      >
    ChildInterface_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  ChildInterface
    : public virtual ::ParentModule::ParentInterface

  {
  public:
    friend class TAO::Narrow_Utils<ChildInterface>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef ChildInterface_ptr _ptr_type;
    typedef ChildInterface_var _var_type;
    typedef ChildInterface_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static ChildInterface_ptr _duplicate (ChildInterface_ptr obj);

    static void _tao_release (ChildInterface_ptr obj);

    static ChildInterface_ptr _narrow (::CORBA::Object_ptr obj);
    static ChildInterface_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ChildInterface_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    ChildInterface (void);

    // Concrete non-local interface only.
    ChildInterface (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    ChildInterface (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~ChildInterface (void);

  private:
    // Private and unimplemented for concrete interfaces.
    ChildInterface (const ChildInterface &);

    void operator= (const ChildInterface &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_ChildInterface;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_CHILDMODULE_AMI_CHILDINTERFACEHANDLER__VAR_OUT_CH_)
#define _CHILDMODULE_AMI_CHILDINTERFACEHANDLER__VAR_OUT_CH_

  class AMI_ChildInterfaceHandler;
  typedef AMI_ChildInterfaceHandler *AMI_ChildInterfaceHandler_ptr;

  typedef
    TAO_Objref_Var_T<
        AMI_ChildInterfaceHandler
      >
    AMI_ChildInterfaceHandler_var;

  typedef
    TAO_Objref_Out_T<
        AMI_ChildInterfaceHandler
      >
    AMI_ChildInterfaceHandler_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  AMI_ChildInterfaceHandler
    : public virtual ::ParentModule::AMI_ParentInterfaceHandler

  {
  public:
    friend class TAO::Narrow_Utils<AMI_ChildInterfaceHandler>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef AMI_ChildInterfaceHandler_ptr _ptr_type;
    typedef AMI_ChildInterfaceHandler_var _var_type;
    typedef AMI_ChildInterfaceHandler_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static AMI_ChildInterfaceHandler_ptr _duplicate (AMI_ChildInterfaceHandler_ptr obj);

    static void _tao_release (AMI_ChildInterfaceHandler_ptr obj);

    static AMI_ChildInterfaceHandler_ptr _narrow (::CORBA::Object_ptr obj);
    static AMI_ChildInterfaceHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static AMI_ChildInterfaceHandler_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    AMI_ChildInterfaceHandler (void);

    // Concrete non-local interface only.
    AMI_ChildInterfaceHandler (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    AMI_ChildInterfaceHandler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~AMI_ChildInterfaceHandler (void);

  private:
    // Private and unimplemented for concrete interfaces.
    AMI_ChildInterfaceHandler (const AMI_ChildInterfaceHandler &);

    void operator= (const AMI_ChildInterfaceHandler &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_AMI_ChildInterfaceHandler;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module ChildModule

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

#if !defined (_CHILDINTERFACE__ARG_TRAITS_)
#define _CHILDINTERFACE__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::ChildInterface>
    : public
        Object_Arg_Traits_T<
            ::ChildInterface_ptr,
            ::ChildInterface_var,
            ::ChildInterface_out,
            TAO::Objref_Traits<ChildInterface>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_AMI_CHILDINTERFACEHANDLER__ARG_TRAITS_)
#define _AMI_CHILDINTERFACEHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::AMI_ChildInterfaceHandler>
    : public
        Object_Arg_Traits_T<
            ::AMI_ChildInterfaceHandler_ptr,
            ::AMI_ChildInterfaceHandler_var,
            ::AMI_ChildInterfaceHandler_out,
            TAO::Objref_Traits<AMI_ChildInterfaceHandler>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_CHILDMODULE_CHILDINTERFACE__ARG_TRAITS_)
#define _CHILDMODULE_CHILDINTERFACE__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::ChildModule::ChildInterface>
    : public
        Object_Arg_Traits_T<
            ::ChildModule::ChildInterface_ptr,
            ::ChildModule::ChildInterface_var,
            ::ChildModule::ChildInterface_out,
            TAO::Objref_Traits<ChildModule::ChildInterface>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_CHILDMODULE_AMI_CHILDINTERFACEHANDLER__ARG_TRAITS_)
#define _CHILDMODULE_AMI_CHILDINTERFACEHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::ChildModule::AMI_ChildInterfaceHandler>
    : public
        Object_Arg_Traits_T<
            ::ChildModule::AMI_ChildInterfaceHandler_ptr,
            ::ChildModule::AMI_ChildInterfaceHandler_var,
            ::ChildModule::AMI_ChildInterfaceHandler_out,
            TAO::Objref_Traits<ChildModule::AMI_ChildInterfaceHandler>,
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

#if !defined (_CHILDINTERFACE__TRAITS_)
#define _CHILDINTERFACE__TRAITS_

  template<>
  struct  Objref_Traits< ::ChildInterface>
  {
    static ::ChildInterface_ptr duplicate (
        ::ChildInterface_ptr p);
    static void release (
        ::ChildInterface_ptr p);
    static ::ChildInterface_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::ChildInterface_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMI_CHILDINTERFACEHANDLER__TRAITS_)
#define _AMI_CHILDINTERFACEHANDLER__TRAITS_

  template<>
  struct  Objref_Traits< ::AMI_ChildInterfaceHandler>
  {
    static ::AMI_ChildInterfaceHandler_ptr duplicate (
        ::AMI_ChildInterfaceHandler_ptr p);
    static void release (
        ::AMI_ChildInterfaceHandler_ptr p);
    static ::AMI_ChildInterfaceHandler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::AMI_ChildInterfaceHandler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_CHILDMODULE_CHILDINTERFACE__TRAITS_)
#define _CHILDMODULE_CHILDINTERFACE__TRAITS_

  template<>
  struct  Objref_Traits< ::ChildModule::ChildInterface>
  {
    static ::ChildModule::ChildInterface_ptr duplicate (
        ::ChildModule::ChildInterface_ptr p);
    static void release (
        ::ChildModule::ChildInterface_ptr p);
    static ::ChildModule::ChildInterface_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::ChildModule::ChildInterface_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_CHILDMODULE_AMI_CHILDINTERFACEHANDLER__TRAITS_)
#define _CHILDMODULE_AMI_CHILDINTERFACEHANDLER__TRAITS_

  template<>
  struct  Objref_Traits< ::ChildModule::AMI_ChildInterfaceHandler>
  {
    static ::ChildModule::AMI_ChildInterfaceHandler_ptr duplicate (
        ::ChildModule::AMI_ChildInterfaceHandler_ptr p);
    static void release (
        ::ChildModule::AMI_ChildInterfaceHandler_ptr p);
    static ::ChildModule::AMI_ChildInterfaceHandler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::ChildModule::AMI_ChildInterfaceHandler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, ChildInterface_ptr); // copying
 void operator<<= (::CORBA::Any &, ChildInterface_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ChildInterface_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, AMI_ChildInterfaceHandler_ptr); // copying
 void operator<<= (::CORBA::Any &, AMI_ChildInterfaceHandler_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_ChildInterfaceHandler_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ChildModule
{
   void operator<<= ( ::CORBA::Any &, ChildInterface_ptr); // copying
   void operator<<= ( ::CORBA::Any &, ChildInterface_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ChildInterface_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, ChildModule::ChildInterface_ptr); // copying
 void operator<<= (::CORBA::Any &, ChildModule::ChildInterface_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ChildModule::ChildInterface_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ChildModule
{
   void operator<<= ( ::CORBA::Any &, AMI_ChildInterfaceHandler_ptr); // copying
   void operator<<= ( ::CORBA::Any &, AMI_ChildInterfaceHandler_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_ChildInterfaceHandler_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, ChildModule::AMI_ChildInterfaceHandler_ptr); // copying
 void operator<<= (::CORBA::Any &, ChildModule::AMI_ChildInterfaceHandler_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ChildModule::AMI_ChildInterfaceHandler_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ChildInterface_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, ChildInterface_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMI_ChildInterfaceHandler_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, AMI_ChildInterfaceHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ChildModule::ChildInterface_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, ChildModule::ChildInterface_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const ChildModule::AMI_ChildInterfaceHandler_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, ChildModule::AMI_ChildInterfaceHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "ChildC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

