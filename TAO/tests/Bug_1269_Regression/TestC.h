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

#ifndef _TAO_IDL_TESTC_0QDPOR_H_
#define _TAO_IDL_TESTC_0QDPOR_H_

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
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
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

namespace Test
{

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_PAYLOAD_CH_)
#define _TEST_PAYLOAD_CH_

  class Payload;

  typedef
    ::TAO_FixedSeq_Var_T<
        Payload
      >
    Payload_var;

  typedef
    ::TAO_Seq_Out_T<
        Payload
      >
    Payload_out;

  class  Payload
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Octet
          >
  {
  public:
    Payload (void);
    Payload ( ::CORBA::ULong max);
    Payload (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Octet* buffer,
      ::CORBA::Boolean release = false);
    Payload (const Payload &);
    virtual ~Payload (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef Payload_var _var_type;
    typedef Payload_out _out_type;



#if (TAO_NO_COPY_OCTET_SEQUENCES == 1)
    Payload (
        ::CORBA::ULong length,
        const ACE_Message_Block* mb
      )
      : ::TAO::unbounded_value_sequence< ::CORBA::Octet> (length, mb) {}
#endif /* TAO_NO_COPY_OCTET_SEQUENCE == 1 */
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_ECHO__VAR_OUT_CH_)
#define _TEST_ECHO__VAR_OUT_CH_

  class Echo;
  typedef Echo *Echo_ptr;

  typedef
    TAO_Objref_Var_T<
        Echo
      >
    Echo_var;

  typedef
    TAO_Objref_Out_T<
        Echo
      >
    Echo_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Echo
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Echo>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Echo_ptr _ptr_type;
    typedef Echo_var _var_type;
    typedef Echo_out _out_type;

    // The static operations.
    static Echo_ptr _duplicate (Echo_ptr obj);

    static void _tao_release (Echo_ptr obj);

    static Echo_ptr _narrow (::CORBA::Object_ptr obj);
    static Echo_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Echo_ptr _nil (void);

    virtual void echo_payload (
      const ::Test::Payload & data);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Echo (void);

    // Concrete non-local interface only.
    Echo (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Echo (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Echo (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Echo (const Echo &);

    void operator= (const Echo &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_ECHO_CALLER__VAR_OUT_CH_)
#define _TEST_ECHO_CALLER__VAR_OUT_CH_

  class Echo_Caller;
  typedef Echo_Caller *Echo_Caller_ptr;

  typedef
    TAO_Objref_Var_T<
        Echo_Caller
      >
    Echo_Caller_var;

  typedef
    TAO_Objref_Out_T<
        Echo_Caller
      >
    Echo_Caller_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Echo_Caller
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Echo_Caller>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Echo_Caller_ptr _ptr_type;
    typedef Echo_Caller_var _var_type;
    typedef Echo_Caller_out _out_type;

    // The static operations.
    static Echo_Caller_ptr _duplicate (Echo_Caller_ptr obj);

    static void _tao_release (Echo_Caller_ptr obj);

    static Echo_Caller_ptr _narrow (::CORBA::Object_ptr obj);
    static Echo_Caller_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Echo_Caller_ptr _nil (void);

    virtual void start_task (
      ::Test::Echo_ptr client);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Echo_Caller (void);

    // Concrete non-local interface only.
    Echo_Caller (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Echo_Caller (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Echo_Caller (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Echo_Caller (const Echo_Caller &);

    void operator= (const Echo_Caller &);
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
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::Payload>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::Payload,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_ECHO__ARG_TRAITS_)
#define _TEST_ECHO__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Echo>
    : public
        Object_Arg_Traits_T<
            ::Test::Echo_ptr,
            ::Test::Echo_var,
            ::Test::Echo_out,
            TAO::Objref_Traits<Test::Echo>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_ECHO_CALLER__ARG_TRAITS_)
#define _TEST_ECHO_CALLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Echo_Caller>
    : public
        Object_Arg_Traits_T<
            ::Test::Echo_Caller_ptr,
            ::Test::Echo_Caller_var,
            ::Test::Echo_Caller_out,
            TAO::Objref_Traits<Test::Echo_Caller>,
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

#if !defined (_TEST_ECHO__TRAITS_)
#define _TEST_ECHO__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Echo>
  {
    static ::Test::Echo_ptr duplicate (
        ::Test::Echo_ptr p);
    static void release (
        ::Test::Echo_ptr p);
    static ::Test::Echo_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Echo_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_ECHO_CALLER__TRAITS_)
#define _TEST_ECHO_CALLER__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Echo_Caller>
  {
    static ::Test::Echo_Caller_ptr duplicate (
        ::Test::Echo_Caller_ptr p);
    static void release (
        ::Test::Echo_Caller_ptr p);
    static ::Test::Echo_Caller_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Echo_Caller_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_Payload_H_
#define _TAO_CDR_OP_Test_Payload_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Payload &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Payload &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_Payload_H_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Echo_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Echo_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Echo_Caller_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Echo_Caller_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

