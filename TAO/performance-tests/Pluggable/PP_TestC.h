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

#ifndef _TAO_IDL_PP_TESTC_DLVOER_H_
#define _TAO_IDL_PP_TESTC_DLVOER_H_

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
// be/be_interface.cpp:748

#if !defined (_PLUGGABLE_TEST__VAR_OUT_CH_)
#define _PLUGGABLE_TEST__VAR_OUT_CH_

class Pluggable_Test;
typedef Pluggable_Test *Pluggable_Test_ptr;

typedef
  TAO_Objref_Var_T<
      Pluggable_Test
    >
  Pluggable_Test_var;

typedef
  TAO_Objref_Out_T<
      Pluggable_Test
    >
  Pluggable_Test_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  Pluggable_Test
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Pluggable_Test>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Pluggable_Test_ptr _ptr_type;
  typedef Pluggable_Test_var _var_type;
  typedef Pluggable_Test_out _out_type;

  // The static operations.
  static Pluggable_Test_ptr _duplicate (Pluggable_Test_ptr obj);

  static void _tao_release (Pluggable_Test_ptr obj);

  static Pluggable_Test_ptr _narrow (::CORBA::Object_ptr obj);
  static Pluggable_Test_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Pluggable_Test_ptr _nil (void);

  virtual void send_oneway (
    void);

  virtual void send_void (
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
  Pluggable_Test (void);

  // Concrete non-local interface only.
  Pluggable_Test (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  Pluggable_Test (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Pluggable_Test (void);

private:
  // Private and unimplemented for concrete interfaces.
  Pluggable_Test (const Pluggable_Test &);

  void operator= (const Pluggable_Test &);
};

// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_PLUGGABLE_TEST_FACTORY__VAR_OUT_CH_)
#define _PLUGGABLE_TEST_FACTORY__VAR_OUT_CH_

class Pluggable_Test_Factory;
typedef Pluggable_Test_Factory *Pluggable_Test_Factory_ptr;

typedef
  TAO_Objref_Var_T<
      Pluggable_Test_Factory
    >
  Pluggable_Test_Factory_var;

typedef
  TAO_Objref_Out_T<
      Pluggable_Test_Factory
    >
  Pluggable_Test_Factory_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  Pluggable_Test_Factory
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Pluggable_Test_Factory>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Pluggable_Test_Factory_ptr _ptr_type;
  typedef Pluggable_Test_Factory_var _var_type;
  typedef Pluggable_Test_Factory_out _out_type;

  // The static operations.
  static Pluggable_Test_Factory_ptr _duplicate (Pluggable_Test_Factory_ptr obj);

  static void _tao_release (Pluggable_Test_Factory_ptr obj);

  static Pluggable_Test_Factory_ptr _narrow (::CORBA::Object_ptr obj);
  static Pluggable_Test_Factory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Pluggable_Test_Factory_ptr _nil (void);

  virtual ::Pluggable_Test_ptr make_pluggable_test (
    void);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Pluggable_Test_Factory (void);

  // Concrete non-local interface only.
  Pluggable_Test_Factory (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  Pluggable_Test_Factory (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Pluggable_Test_Factory (void);

private:
  // Private and unimplemented for concrete interfaces.
  Pluggable_Test_Factory (const Pluggable_Test_Factory &);

  void operator= (const Pluggable_Test_Factory &);
};

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_PLUGGABLE_TEST__ARG_TRAITS_)
#define _PLUGGABLE_TEST__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Pluggable_Test>
    : public
        Object_Arg_Traits_T<
            ::Pluggable_Test_ptr,
            ::Pluggable_Test_var,
            ::Pluggable_Test_out,
            TAO::Objref_Traits<Pluggable_Test>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_PLUGGABLE_TEST_FACTORY__ARG_TRAITS_)
#define _PLUGGABLE_TEST_FACTORY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Pluggable_Test_Factory>
    : public
        Object_Arg_Traits_T<
            ::Pluggable_Test_Factory_ptr,
            ::Pluggable_Test_Factory_var,
            ::Pluggable_Test_Factory_out,
            TAO::Objref_Traits<Pluggable_Test_Factory>,
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

#if !defined (_PLUGGABLE_TEST__TRAITS_)
#define _PLUGGABLE_TEST__TRAITS_

  template<>
  struct  Objref_Traits< ::Pluggable_Test>
  {
    static ::Pluggable_Test_ptr duplicate (
        ::Pluggable_Test_ptr p);
    static void release (
        ::Pluggable_Test_ptr p);
    static ::Pluggable_Test_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Pluggable_Test_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_PLUGGABLE_TEST_FACTORY__TRAITS_)
#define _PLUGGABLE_TEST_FACTORY__TRAITS_

  template<>
  struct  Objref_Traits< ::Pluggable_Test_Factory>
  {
    static ::Pluggable_Test_Factory_ptr duplicate (
        ::Pluggable_Test_Factory_ptr p);
    static void release (
        ::Pluggable_Test_Factory_ptr p);
    static ::Pluggable_Test_Factory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Pluggable_Test_Factory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Pluggable_Test_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Pluggable_Test_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Pluggable_Test_Factory_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Pluggable_Test_Factory_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "PP_TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

