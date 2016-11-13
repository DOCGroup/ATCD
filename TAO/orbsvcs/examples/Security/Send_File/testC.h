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

#ifndef _TAO_IDL_TESTC_ACWRLE_H_
#define _TAO_IDL_TESTC_ACWRLE_H_

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
// be/be_interface.cpp:748

#if !defined (_SIMPLE_SERVER__VAR_OUT_CH_)
#define _SIMPLE_SERVER__VAR_OUT_CH_

class Simple_Server;
typedef Simple_Server *Simple_Server_ptr;

typedef
  TAO_Objref_Var_T<
      Simple_Server
    >
  Simple_Server_var;

typedef
  TAO_Objref_Out_T<
      Simple_Server
    >
  Simple_Server_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  Simple_Server
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Simple_Server>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Simple_Server_ptr _ptr_type;
  typedef Simple_Server_var _var_type;
  typedef Simple_Server_out _out_type;

  // The static operations.
  static Simple_Server_ptr _duplicate (Simple_Server_ptr obj);

  static void _tao_release (Simple_Server_ptr obj);

  static Simple_Server_ptr _narrow (::CORBA::Object_ptr obj);
  static Simple_Server_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Simple_Server_ptr _nil (void);

  virtual void send_line (
    const char * line);

  virtual void shutdown (
    void);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Simple_Server (void);

  // Concrete non-local interface only.
  Simple_Server (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);

  // Non-local interface only.
  Simple_Server (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Simple_Server (void);

private:
  // Private and unimplemented for concrete interfaces.
  Simple_Server (const Simple_Server &);

  void operator= (const Simple_Server &);
};

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_SIMPLE_SERVER__ARG_TRAITS_)
#define _SIMPLE_SERVER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Simple_Server>
    : public
        Object_Arg_Traits_T<
            ::Simple_Server_ptr,
            ::Simple_Server_var,
            ::Simple_Server_out,
            TAO::Objref_Traits<Simple_Server>,
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

#if !defined (_SIMPLE_SERVER__TRAITS_)
#define _SIMPLE_SERVER__TRAITS_

  template<>
  struct  Objref_Traits< ::Simple_Server>
  {
    static ::Simple_Server_ptr duplicate (
        ::Simple_Server_ptr p);
    static void release (
        ::Simple_Server_ptr p);
    static ::Simple_Server_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Simple_Server_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Simple_Server_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Simple_Server_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

