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

#ifndef _TAO_IDL_TESTC_NHOJ1V_H_
#define _TAO_IDL_TESTC_NHOJ1V_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/Valuetype/ValueFactory.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Valuetype/Value_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
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
// be/be_valuetype.cpp:564



#if !defined (_TESTVALUETYPE__VAR_OUT_CH_)
#define _TESTVALUETYPE__VAR_OUT_CH_

class TestValuetype;
typedef
  TAO_Value_Var_T<
      TestValuetype
    >
  TestValuetype_var;

typedef
  TAO_Value_Out_T<
      TestValuetype
    >
  TestValuetype_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ch.cpp:50

class  TestValuetype
  : public virtual ::CORBA::ValueBase
{
public:

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef TestValuetype * _ptr_type;
  typedef TestValuetype_var _var_type;
  typedef TestValuetype_out _out_type;

  static void _tao_any_destructor (void *);

  static TestValuetype* _downcast ( ::CORBA::ValueBase *v);
  
  /// TAO extensions or internals
  static ::CORBA::Boolean _tao_unmarshal (
      TAO_InputCDR &strm,
      TestValuetype *&new_object);
  
  virtual const char* _tao_obv_repository_id (void) const;

  virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

  static const char* _tao_obv_static_repository_id (void);

  virtual ::CORBA::TypeCode_ptr _tao_type (void) const;

public:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_ch.cpp:238

protected:
  TestValuetype (void);
  virtual ~TestValuetype (void);

  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t ) const;
  
private:
  TestValuetype (const TestValuetype &);
  void operator= (const TestValuetype &);
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__TestValuetype (TAO_OutputCDR &, TAO_ChunkInfo &) const = 0;

  virtual ::CORBA::Boolean
  _tao_unmarshal__TestValuetype (TAO_InputCDR &, TAO_ChunkInfo &) = 0;
};

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_init_ch.cpp:57

class  TestValuetype_init
  : public virtual ::CORBA::ValueFactoryBase
{
public:

  virtual TestValuetype* create (
    ::CORBA::Boolean b,
    ::CORBA::Short s) = 0;

  static TestValuetype_init* _downcast ( ::CORBA::ValueFactoryBase *);

  // TAO-specific extensions
public:
  virtual const char* tao_repository_id (void);

protected:
  TestValuetype_init (void);

protected:
  virtual ~TestValuetype_init (void);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_TestValuetype;

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:306

#if !defined (_TESTVALUETYPE__ARG_TRAITS_)
#define _TESTVALUETYPE__ARG_TRAITS_

  template<>
  class Arg_Traits< ::TestValuetype>
    : public
        Object_Arg_Traits_T<
            ::TestValuetype *,
            ::TestValuetype_var,
            ::TestValuetype_out,
            TAO::Value_Traits<TestValuetype>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_obv_ch.cpp:44

// OBV_ class
class  OBV_TestValuetype
  : public virtual TestValuetype
{

public:

public:
  OBV_TestValuetype (void);
  virtual ~OBV_TestValuetype (void);
  
protected:
  virtual ::CORBA::Boolean
  _tao_marshal__TestValuetype (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__TestValuetype (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook (void);

private:
  CORBA::Boolean require_truncation_;
};

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_TESTVALUETYPE__TRAITS_)
#define _TESTVALUETYPE__TRAITS_

  template<>
  struct  Value_Traits<TestValuetype>
  {
    static void add_ref (TestValuetype *);
    static void remove_ref (TestValuetype *);
    static void release (TestValuetype *);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/any_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, TestValuetype *); // copying
 void operator<<= (::CORBA::Any &, TestValuetype **); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, TestValuetype *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_valuetype.cpp:456


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern  void add_ref (TestValuetype *);
  extern  void remove_ref (TestValuetype *);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/cdr_op_ch.cpp:49


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const TestValuetype *);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, TestValuetype *&);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

