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

#ifndef _TAO_IDL_TEST_OBJECTC_YOGEPP_H_
#define _TAO_IDL_TEST_OBJECTC_YOGEPP_H_

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

#if !defined (_TEST_OBJECT__VAR_OUT_CH_)
#define _TEST_OBJECT__VAR_OUT_CH_

class Test_Object;
typedef Test_Object *Test_Object_ptr;

typedef
  TAO_Objref_Var_T<
      Test_Object
    >
  Test_Object_var;

typedef
  TAO_Objref_Out_T<
      Test_Object
    >
  Test_Object_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  Test_Object
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Test_Object>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Test_Object_ptr _ptr_type;
  typedef Test_Object_var _var_type;
  typedef Test_Object_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static Test_Object_ptr _duplicate (Test_Object_ptr obj);

  static void _tao_release (Test_Object_ptr obj);

  static Test_Object_ptr _narrow (::CORBA::Object_ptr obj);
  static Test_Object_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Test_Object_ptr _nil (void);

  virtual ::CORBA::Short id (
    void);

  virtual void id (
    ::CORBA::Short id);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Test_Object (void);

  // Concrete non-local interface only.
  Test_Object (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  Test_Object (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Test_Object (void);

private:
  // Private and unimplemented for concrete interfaces.
  Test_Object (const Test_Object &);

  void operator= (const Test_Object &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_Test_Object;

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_OBJECT__ARG_TRAITS_)
#define _TEST_OBJECT__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test_Object>
    : public
        Object_Arg_Traits_T<
            ::Test_Object_ptr,
            ::Test_Object_var,
            ::Test_Object_out,
            TAO::Objref_Traits<Test_Object>,
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

#if !defined (_TEST_OBJECT__TRAITS_)
#define _TEST_OBJECT__TRAITS_

  template<>
  struct  Objref_Traits< ::Test_Object>
  {
    static ::Test_Object_ptr duplicate (
        ::Test_Object_ptr p);
    static void release (
        ::Test_Object_ptr p);
    static ::Test_Object_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test_Object_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Test_Object_ptr); // copying
 void operator<<= (::CORBA::Any &, Test_Object_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test_Object_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test_Object_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test_Object_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "test_objectC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

