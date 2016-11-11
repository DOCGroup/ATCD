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

#ifndef _TAO_IDL_TESTC_8DPBFS_H_
#define _TAO_IDL_TESTC_8DPBFS_H_

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

namespace Test
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_DUMMY__VAR_OUT_CH_)
#define _TEST_DUMMY__VAR_OUT_CH_

  class Dummy;
  typedef Dummy *Dummy_ptr;

  typedef
    TAO_Objref_Var_T<
        Dummy
      >
    Dummy_var;
  
  typedef
    TAO_Objref_Out_T<
        Dummy
      >
    Dummy_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Dummy
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Dummy>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Dummy_ptr _ptr_type;
    typedef Dummy_var _var_type;
    typedef Dummy_out _out_type;

    // The static operations.
    static Dummy_ptr _duplicate (Dummy_ptr obj);

    static void _tao_release (Dummy_ptr obj);

    static Dummy_ptr _narrow (::CORBA::Object_ptr obj);
    static Dummy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Dummy_ptr _nil (void);

    virtual char * getMessage (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Dummy (void);

    // Concrete non-local interface only.
    Dummy (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Dummy (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Dummy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Dummy (const Dummy &);

    void operator= (const Dummy &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_TIME__VAR_OUT_CH_)
#define _TEST_TIME__VAR_OUT_CH_

  class Time;
  typedef Time *Time_ptr;

  typedef
    TAO_Objref_Var_T<
        Time
      >
    Time_var;
  
  typedef
    TAO_Objref_Out_T<
        Time
      >
    Time_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Time
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Time>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Time_ptr _ptr_type;
    typedef Time_var _var_type;
    typedef Time_out _out_type;

    // The static operations.
    static Time_ptr _duplicate (Time_ptr obj);

    static void _tao_release (Time_ptr obj);

    static Time_ptr _narrow (::CORBA::Object_ptr obj);
    static Time_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Time_ptr _nil (void);

    virtual ::CORBA::Long current_time (
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
    Time (void);

    // Concrete non-local interface only.
    Time (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Time (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Time (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Time (const Time &);

    void operator= (const Time &);
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

#if !defined (_TEST_DUMMY__ARG_TRAITS_)
#define _TEST_DUMMY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Dummy>
    : public
        Object_Arg_Traits_T<
            ::Test::Dummy_ptr,
            ::Test::Dummy_var,
            ::Test::Dummy_out,
            TAO::Objref_Traits<Test::Dummy>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_TIME__ARG_TRAITS_)
#define _TEST_TIME__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Time>
    : public
        Object_Arg_Traits_T<
            ::Test::Time_ptr,
            ::Test::Time_var,
            ::Test::Time_out,
            TAO::Objref_Traits<Test::Time>,
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

#if !defined (_TEST_DUMMY__TRAITS_)
#define _TEST_DUMMY__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Dummy>
  {
    static ::Test::Dummy_ptr duplicate (
        ::Test::Dummy_ptr p);
    static void release (
        ::Test::Dummy_ptr p);
    static ::Test::Dummy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Dummy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_TIME__TRAITS_)
#define _TEST_TIME__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Time>
  {
    static ::Test::Time_ptr duplicate (
        ::Test::Time_ptr p);
    static void release (
        ::Test::Time_ptr p);
    static ::Test::Time_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Time_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Dummy_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Dummy_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Time_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Time_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

