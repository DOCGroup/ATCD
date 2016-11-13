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

#ifndef _TAO_IDL_TESTC_CBU2CN_H_
#define _TAO_IDL_TESTC_CBU2CN_H_

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
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_OCTET_SEQ_CH_)
#define _TEST_OCTET_SEQ_CH_

  class Octet_Seq;

  typedef
    ::TAO_FixedSeq_Var_T<
        Octet_Seq
      >
    Octet_Seq_var;

  typedef
    ::TAO_Seq_Out_T<
        Octet_Seq
      >
    Octet_Seq_out;

  class  Octet_Seq
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Octet
          >
  {
  public:
    Octet_Seq (void);
    Octet_Seq ( ::CORBA::ULong max);
    Octet_Seq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Octet* buffer,
      ::CORBA::Boolean release = false);
    Octet_Seq (const Octet_Seq &);
    virtual ~Octet_Seq (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef Octet_Seq_var _var_type;
    typedef Octet_Seq_out _out_type;



#if (TAO_NO_COPY_OCTET_SEQUENCES == 1)
    Octet_Seq (
        ::CORBA::ULong length,
        const ACE_Message_Block* mb
      )
      : ::TAO::unbounded_value_sequence< ::CORBA::Octet> (length, mb) {}
#endif /* TAO_NO_COPY_OCTET_SEQUENCE == 1 */
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_HELLO__VAR_OUT_CH_)
#define _TEST_HELLO__VAR_OUT_CH_

  class Hello;
  typedef Hello *Hello_ptr;

  typedef
    TAO_Objref_Var_T<
        Hello
      >
    Hello_var;

  typedef
    TAO_Objref_Out_T<
        Hello
      >
    Hello_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Hello
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Hello>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Hello_ptr _ptr_type;
    typedef Hello_var _var_type;
    typedef Hello_out _out_type;

    // The static operations.
    static Hello_ptr _duplicate (Hello_ptr obj);

    static void _tao_release (Hello_ptr obj);

    static Hello_ptr _narrow (::CORBA::Object_ptr obj);
    static Hello_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Hello_ptr _nil (void);

    virtual char * get_string (
      const char * mystring);

    virtual ::Test::Octet_Seq * get_big_reply (
      ::CORBA::ULong size);

    virtual void big_request (
      const ::Test::Octet_Seq & octet_in);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Hello (void);

    // Concrete non-local interface only.
    Hello (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Hello (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Hello (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Hello (const Hello &);

    void operator= (const Hello &);
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
  class Arg_Traits< ::Test::Octet_Seq>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::Octet_Seq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_HELLO__ARG_TRAITS_)
#define _TEST_HELLO__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Hello>
    : public
        Object_Arg_Traits_T<
            ::Test::Hello_ptr,
            ::Test::Hello_var,
            ::Test::Hello_out,
            TAO::Objref_Traits<Test::Hello>,
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

#if !defined (_TEST_HELLO__TRAITS_)
#define _TEST_HELLO__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Hello>
  {
    static ::Test::Hello_ptr duplicate (
        ::Test::Hello_ptr p);
    static void release (
        ::Test::Hello_ptr p);
    static ::Test::Hello_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Hello_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_Octet_Seq_H_
#define _TAO_CDR_OP_Test_Octet_Seq_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Octet_Seq &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Octet_Seq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_Octet_Seq_H_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Hello_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Hello_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

