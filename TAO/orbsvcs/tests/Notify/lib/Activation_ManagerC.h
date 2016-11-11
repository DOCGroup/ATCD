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

#ifndef _TAO_IDL_ACTIVATION_MANAGERC_5MEVXL_H_
#define _TAO_IDL_ACTIVATION_MANAGERC_5MEVXL_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


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

namespace Notify_Test
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_NOTIFY_TEST_ACTIVATION_MANAGER__VAR_OUT_CH_)
#define _NOTIFY_TEST_ACTIVATION_MANAGER__VAR_OUT_CH_

  class Activation_Manager;
  typedef Activation_Manager *Activation_Manager_ptr;

  typedef
    TAO_Objref_Var_T<
        Activation_Manager
      >
    Activation_Manager_var;
  
  typedef
    TAO_Objref_Out_T<
        Activation_Manager
      >
    Activation_Manager_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Activation_Manager
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Activation_Manager>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Activation_Manager_ptr _ptr_type;
    typedef Activation_Manager_var _var_type;
    typedef Activation_Manager_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Activation_Manager_ptr _duplicate (Activation_Manager_ptr obj);

    static void _tao_release (Activation_Manager_ptr obj);

    static Activation_Manager_ptr _narrow (::CORBA::Object_ptr obj);
    static Activation_Manager_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Activation_Manager_ptr _nil (void);

    virtual void start (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Activation_Manager (void);

    // Concrete non-local interface only.
    Activation_Manager (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Activation_Manager (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Activation_Manager (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Activation_Manager (const Activation_Manager &);

    void operator= (const Activation_Manager &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Activation_Manager;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Notify_Test

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_NOTIFY_TEST_ACTIVATION_MANAGER__ARG_TRAITS_)
#define _NOTIFY_TEST_ACTIVATION_MANAGER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Notify_Test::Activation_Manager>
    : public
        Object_Arg_Traits_T<
            ::Notify_Test::Activation_Manager_ptr,
            ::Notify_Test::Activation_Manager_var,
            ::Notify_Test::Activation_Manager_out,
            TAO::Objref_Traits<Notify_Test::Activation_Manager>,
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

#if !defined (_NOTIFY_TEST_ACTIVATION_MANAGER__TRAITS_)
#define _NOTIFY_TEST_ACTIVATION_MANAGER__TRAITS_

  template<>
  struct  Objref_Traits< ::Notify_Test::Activation_Manager>
  {
    static ::Notify_Test::Activation_Manager_ptr duplicate (
        ::Notify_Test::Activation_Manager_ptr p);
    static void release (
        ::Notify_Test::Activation_Manager_ptr p);
    static ::Notify_Test::Activation_Manager_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Notify_Test::Activation_Manager_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Notify_Test
{
   void operator<<= ( ::CORBA::Any &, Activation_Manager_ptr); // copying
   void operator<<= ( ::CORBA::Any &, Activation_Manager_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Activation_Manager_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Notify_Test::Activation_Manager_ptr); // copying
 void operator<<= (::CORBA::Any &, Notify_Test::Activation_Manager_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Notify_Test::Activation_Manager_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Notify_Test::Activation_Manager_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Notify_Test::Activation_Manager_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "Activation_ManagerC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

