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

#ifndef _TAO_IDL_TESTC_39EIEB_H_
#define _TAO_IDL_TESTC_39EIEB_H_

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
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
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
// be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_ANYSEQ_CH_)
#define _ANYSEQ_CH_

class AnySeq;

typedef
  ::TAO_VarSeq_Var_T<
      AnySeq
    >
  AnySeq_var;

typedef
  ::TAO_Seq_Out_T<
      AnySeq
    >
  AnySeq_out;

class  AnySeq
  : public
      ::TAO::unbounded_value_sequence<
          ::CORBA::Any
        >
{
public:
  AnySeq (void);
  AnySeq ( ::CORBA::ULong max);
  AnySeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Any* buffer,
    ::CORBA::Boolean release = false);
  AnySeq (const AnySeq &);
  virtual ~AnySeq (void);


  // TAO_IDL - Generated from
  // be/be_type.cpp:304


  typedef AnySeq_var _var_type;
  typedef AnySeq_out _out_type;

  static void _tao_any_destructor (void *);
};

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_AnySeq;

// TAO_IDL - Generated from
// be/be_type.cpp:258

struct Container;

typedef
  ::TAO_Var_Var_T<
      Container
    >
  Container_var;

typedef
  ::TAO_Out_T<
      Container
    >
  Container_out;

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_ch.cpp:48

struct  Container
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:304


  typedef Container_var _var_type;
  typedef Container_out _out_type;

  static void _tao_any_destructor (void *);

  ::CORBA::Any contents;
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_Container;

// TAO_IDL - Generated from
// be/be_type.cpp:258

struct Inner;

typedef
  ::TAO_Fixed_Var_T<
      Inner
    >
  Inner_var;

typedef
  Inner &
  Inner_out;

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_ch.cpp:48

struct  Inner
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:304


  typedef Inner_var _var_type;
  typedef Inner_out _out_type;

  static void _tao_any_destructor (void *);

  ::CORBA::Long value1;
  ::CORBA::Long value2;
  ::CORBA::Long value3;
  ::CORBA::Long value4;
  ::CORBA::Long value5;
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_Inner;

// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_TEST__VAR_OUT_CH_)
#define _TEST__VAR_OUT_CH_

class Test;
typedef Test *Test_ptr;

typedef
  TAO_Objref_Var_T<
      Test
    >
  Test_var;

typedef
  TAO_Objref_Out_T<
      Test
    >
  Test_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  Test
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Test>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Test_ptr _ptr_type;
  typedef Test_var _var_type;
  typedef Test_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static Test_ptr _duplicate (Test_ptr obj);

  static void _tao_release (Test_ptr obj);

  static Test_ptr _narrow (::CORBA::Object_ptr obj);
  static Test_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Test_ptr _nil (void);

  virtual ::AnySeq * RunTest (
    const ::AnySeq & params);

  virtual void shutdown (
    void);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Test (void);

  // Concrete non-local interface only.
  Test (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);

  // Non-local interface only.
  Test (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Test (void);

private:
  // Private and unimplemented for concrete interfaces.
  Test (const Test &);

  void operator= (const Test &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_Test;

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::AnySeq>
    : public
        Var_Size_Arg_Traits_T<
            ::AnySeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Container>
    : public
        Var_Size_Arg_Traits_T<
            ::Container,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Inner>
    : public
        Fixed_Size_Arg_Traits_T<
            ::Inner,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST__ARG_TRAITS_)
#define _TEST__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test>
    : public
        Object_Arg_Traits_T<
            ::Test_ptr,
            ::Test_var,
            ::Test_out,
            TAO::Objref_Traits<Test>,
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

#if !defined (_TEST__TRAITS_)
#define _TEST__TRAITS_

  template<>
  struct  Objref_Traits< ::Test>
  {
    static ::Test_ptr duplicate (
        ::Test_ptr p);
    static void release (
        ::Test_ptr p);
    static ::Test_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const AnySeq &); // copying version
 void operator<<= ( ::CORBA::Any &, AnySeq*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AnySeq *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const AnySeq *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Container &); // copying version
 void operator<<= (::CORBA::Any &, Container*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Container *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Container *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:42


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Inner &); // copying version
 void operator<<= (::CORBA::Any &, Inner*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Inner *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Inner *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Test_ptr); // copying
 void operator<<= (::CORBA::Any &, Test_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_AnySeq_H_
#define _TAO_CDR_OP_AnySeq_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const AnySeq &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    AnySeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_AnySeq_H_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Container &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Container &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Inner &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Inner &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

