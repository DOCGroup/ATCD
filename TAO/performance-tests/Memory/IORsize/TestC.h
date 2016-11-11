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

#ifndef _TAO_IDL_TESTC_RNRSJF_H_
#define _TAO_IDL_TESTC_RNRSJF_H_

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
  // be/be_interface.cpp:748

#if !defined (_TEST_FOO__VAR_OUT_CH_)
#define _TEST_FOO__VAR_OUT_CH_

  class Foo;
  typedef Foo *Foo_ptr;

  typedef
    TAO_Objref_Var_T<
        Foo
      >
    Foo_var;
  
  typedef
    TAO_Objref_Out_T<
        Foo
      >
    Foo_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Foo
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Foo>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Foo_ptr _ptr_type;
    typedef Foo_var _var_type;
    typedef Foo_out _out_type;

    // The static operations.
    static Foo_ptr _duplicate (Foo_ptr obj);

    static void _tao_release (Foo_ptr obj);

    static Foo_ptr _narrow (::CORBA::Object_ptr obj);
    static Foo_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Foo_ptr _nil (void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Foo (void);

    // Concrete non-local interface only.
    Foo (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Foo (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Foo (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Foo (const Foo &);

    void operator= (const Foo &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_PAYLOAD_CH_)
#define _TEST_PAYLOAD_CH_

  class PayLoad;

  typedef
    ::TAO_VarSeq_Var_T<
        PayLoad
      >
    PayLoad_var;

  typedef
    ::TAO_Seq_Out_T<
        PayLoad
      >
    PayLoad_out;

  class  PayLoad
    : public
        ::TAO::unbounded_object_reference_sequence<
            Foo,
            Foo_var
          >
  {
  public:
    PayLoad (void);
    PayLoad ( ::CORBA::ULong max);
    PayLoad (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      Foo_ptr* buffer,
      ::CORBA::Boolean release = false);
    PayLoad (const PayLoad &);
    virtual ~PayLoad (void);
    

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef PayLoad_var _var_type;
    typedef PayLoad_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_MEMORY_GROWTH__VAR_OUT_CH_)
#define _TEST_MEMORY_GROWTH__VAR_OUT_CH_

  class Memory_Growth;
  typedef Memory_Growth *Memory_Growth_ptr;

  typedef
    TAO_Objref_Var_T<
        Memory_Growth
      >
    Memory_Growth_var;
  
  typedef
    TAO_Objref_Out_T<
        Memory_Growth
      >
    Memory_Growth_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Memory_Growth
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Memory_Growth>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Memory_Growth_ptr _ptr_type;
    typedef Memory_Growth_var _var_type;
    typedef Memory_Growth_out _out_type;

    // The static operations.
    static Memory_Growth_ptr _duplicate (Memory_Growth_ptr obj);

    static void _tao_release (Memory_Growth_ptr obj);

    static Memory_Growth_ptr _narrow (::CORBA::Object_ptr obj);
    static Memory_Growth_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Memory_Growth_ptr _nil (void);

    virtual void send_objref (
      const ::Test::PayLoad & p);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Memory_Growth (void);

    // Concrete non-local interface only.
    Memory_Growth (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Memory_Growth (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Memory_Growth (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Memory_Growth (const Memory_Growth &);

    void operator= (const Memory_Growth &);
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

#if !defined (_TEST_FOO__ARG_TRAITS_)
#define _TEST_FOO__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Foo>
    : public
        Object_Arg_Traits_T<
            ::Test::Foo_ptr,
            ::Test::Foo_var,
            ::Test::Foo_out,
            TAO::Objref_Traits<Test::Foo>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::PayLoad>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::PayLoad,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_MEMORY_GROWTH__ARG_TRAITS_)
#define _TEST_MEMORY_GROWTH__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Memory_Growth>
    : public
        Object_Arg_Traits_T<
            ::Test::Memory_Growth_ptr,
            ::Test::Memory_Growth_var,
            ::Test::Memory_Growth_out,
            TAO::Objref_Traits<Test::Memory_Growth>,
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

#if !defined (_TEST_FOO__TRAITS_)
#define _TEST_FOO__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Foo>
  {
    static ::Test::Foo_ptr duplicate (
        ::Test::Foo_ptr p);
    static void release (
        ::Test::Foo_ptr p);
    static ::Test::Foo_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Foo_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_MEMORY_GROWTH__TRAITS_)
#define _TEST_MEMORY_GROWTH__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Memory_Growth>
  {
    static ::Test::Memory_Growth_ptr duplicate (
        ::Test::Memory_Growth_ptr p);
    static void release (
        ::Test::Memory_Growth_ptr p);
    static ::Test::Memory_Growth_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Memory_Growth_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Foo_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Foo_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_PayLoad_H_
#define _TAO_CDR_OP_Test_PayLoad_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::PayLoad &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::PayLoad &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_PayLoad_H_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Memory_Growth_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Memory_Growth_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

