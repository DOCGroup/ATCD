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

#ifndef _TAO_IDL_VB_UNIONC_QDW5NE_H_
#define _TAO_IDL_VB_UNIONC_QDW5NE_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/CDR.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/String_Manager_T.h"
#include "tao/Valuetype/Value_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
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
// be/be_type.cpp:258

class Fixed_Union1;

typedef
  ::TAO_Fixed_Var_T<
      Fixed_Union1
    >
  Fixed_Union1_var;

typedef
  Fixed_Union1 &
  Fixed_Union1_out;

class  Fixed_Union1
{
public:
  Fixed_Union1 (void);
  Fixed_Union1 (const Fixed_Union1 &);
  ~Fixed_Union1 (void);

  Fixed_Union1 &operator= (const Fixed_Union1 &);

  // TAO_IDL - Generated from
  // be/be_visitor_union/discriminant_ch.cpp:100

  void _d ( ::CORBA::Long);
  ::CORBA::Long _d (void) const;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  
  typedef Fixed_Union1_var _var_type;
  typedef Fixed_Union1_out _out_type;

  static void _tao_any_destructor (void *);

  // TAO_IDL - Generated from
  // be/be_visitor_union_branch/public_ch.cpp:449

  void m1 ( ::CORBA::Long);
  ::CORBA::Long m1 (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_union_branch/public_ch.cpp:449

  void m2 ( ::CORBA::Short);
  ::CORBA::Short m2 (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_union/union_ch.cpp:121

  void _default (void);
private:
  ::CORBA::Long disc_;

  union
  {
    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/private_ch.cpp:377
    ::CORBA::Long m1_;
    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/private_ch.cpp:377
    ::CORBA::Short m2_;
  } u_;

  /// TAO extension - frees any allocated storage.
  void _reset (void);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_Fixed_Union1;

// TAO_IDL - Generated from
// be/be_type.cpp:258

class Variable_Union1;

typedef
  ::TAO_Var_Var_T<
      Variable_Union1
    >
  Variable_Union1_var;

typedef
  ::TAO_Out_T<
      Variable_Union1
    >
  Variable_Union1_out;

class  Variable_Union1
{
public:
  Variable_Union1 (void);
  Variable_Union1 (const Variable_Union1 &);
  ~Variable_Union1 (void);

  Variable_Union1 &operator= (const Variable_Union1 &);

  // TAO_IDL - Generated from
  // be/be_visitor_union/discriminant_ch.cpp:100

  void _d ( ::CORBA::Long);
  ::CORBA::Long _d (void) const;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  
  typedef Variable_Union1_var _var_type;
  typedef Variable_Union1_out _out_type;

  static void _tao_any_destructor (void *);

  // TAO_IDL - Generated from
  // be/be_visitor_union_branch/public_ch.cpp:449

  void m1 ( ::CORBA::Long);
  ::CORBA::Long m1 (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_union_branch/public_ch.cpp:580

  void m2 (char *);
  void m2 (const char *);
  void m2 (const ::CORBA::String_var&);
  const char *m2 (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_union/union_ch.cpp:121

  void _default (void);
private:
  ::CORBA::Long disc_;

  union
  {
    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/private_ch.cpp:377
    ::CORBA::Long m1_;
    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/private_ch.cpp:474
    char *m2_;
  } u_;

  /// TAO extension - frees any allocated storage.
  void _reset (void);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_Variable_Union1;

// TAO_IDL - Generated from
// be/be_visitor_valuebox/valuebox_ch.cpp:41

class VBfixed_union1;

typedef
  TAO_Value_Var_T<
      VBfixed_union1
    >
  VBfixed_union1_var;

typedef
  TAO_Value_Out_T<
      VBfixed_union1
    >
  VBfixed_union1_out;

class  VBfixed_union1
  : public virtual ::CORBA::DefaultValueRefCountBase
{
public:

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  
  typedef VBfixed_union1_var _var_type;
  typedef VBfixed_union1_out _out_type;

  static void _tao_any_destructor (void *);

  static VBfixed_union1* _downcast ( ::CORBA::ValueBase *);
  ::CORBA::ValueBase * _copy_value (void);

  virtual const char* _tao_obv_repository_id (void) const;

  virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &ids) const;

  static const char* _tao_obv_static_repository_id (void);

  static ::CORBA::Boolean _tao_unmarshal (
      TAO_InputCDR &,
      VBfixed_union1 *&
    );
  
  virtual ::CORBA::TypeCode_ptr _tao_type (void) const;

  

  // TAO_IDL - Generated from
  // be/be_visitor_valuebox/valuebox_ch.cpp:580

  // Constructors
  VBfixed_union1 (void);
  VBfixed_union1 (const Fixed_Union1& val);
  VBfixed_union1 (const VBfixed_union1& val);
  
  // Assignment operator
  VBfixed_union1& operator= (const Fixed_Union1& val);

  // Accessors and modifier
  const Fixed_Union1& _value (void) const;
  Fixed_Union1& _value (void);
  void _value (const Fixed_Union1& val);

  // Access to the boxed value for method signatures
  const Fixed_Union1& _boxed_in (void) const;
  Fixed_Union1& _boxed_inout (void);
  Fixed_Union1& _boxed_out (void);
  

  // TAO_IDL - Generated from
  // be/be_visitor_valuebox/field_ch.cpp:286

  void m1 ( ::CORBA::Long);
   ::CORBA::Long m1 (void) const;
  

  // TAO_IDL - Generated from
  // be/be_visitor_valuebox/field_ch.cpp:286

  void m2 ( ::CORBA::Short);
   ::CORBA::Short m2 (void) const;
  

  // TAO_IDL - Generated from
  // be/be_visitor_union/discriminant_ch.cpp:100

  void _d ( ::CORBA::Long);
  ::CORBA::Long _d (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_valuebox/valuebox_ch.cpp:672
private:
  Fixed_Union1_var _pd_value;
  

  // TAO_IDL - Generated from
  // be/be_visitor_valuebox/valuebox_ch.cpp:114

protected:
  virtual ~VBfixed_union1 (void);
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t ) const;
  
private:
  void operator= (const VBfixed_union1 & val);
  
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_VBfixed_union1;

// TAO_IDL - Generated from
// be/be_visitor_valuebox/valuebox_ch.cpp:41

class VBvariable_union1;

typedef
  TAO_Value_Var_T<
      VBvariable_union1
    >
  VBvariable_union1_var;

typedef
  TAO_Value_Out_T<
      VBvariable_union1
    >
  VBvariable_union1_out;

class  VBvariable_union1
  : public virtual ::CORBA::DefaultValueRefCountBase
{
public:

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  
  typedef VBvariable_union1_var _var_type;
  typedef VBvariable_union1_out _out_type;

  static void _tao_any_destructor (void *);

  static VBvariable_union1* _downcast ( ::CORBA::ValueBase *);
  ::CORBA::ValueBase * _copy_value (void);

  virtual const char* _tao_obv_repository_id (void) const;

  virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &ids) const;

  static const char* _tao_obv_static_repository_id (void);

  static ::CORBA::Boolean _tao_unmarshal (
      TAO_InputCDR &,
      VBvariable_union1 *&
    );
  
  virtual ::CORBA::TypeCode_ptr _tao_type (void) const;

  

  // TAO_IDL - Generated from
  // be/be_visitor_valuebox/valuebox_ch.cpp:580

  // Constructors
  VBvariable_union1 (void);
  VBvariable_union1 (const Variable_Union1& val);
  VBvariable_union1 (const VBvariable_union1& val);
  
  // Assignment operator
  VBvariable_union1& operator= (const Variable_Union1& val);

  // Accessors and modifier
  const Variable_Union1& _value (void) const;
  Variable_Union1& _value (void);
  void _value (const Variable_Union1& val);

  // Access to the boxed value for method signatures
  const Variable_Union1& _boxed_in (void) const;
  Variable_Union1& _boxed_inout (void);
  Variable_Union1*& _boxed_out (void);
  

  // TAO_IDL - Generated from
  // be/be_visitor_valuebox/field_ch.cpp:286

  void m1 ( ::CORBA::Long);
   ::CORBA::Long m1 (void) const;
  

  // TAO_IDL - Generated from
  // be/be_visitor_valuebox/field_ch.cpp:377

  void m2 (char *);
  void m2 (const char *);
  void m2 (const ::CORBA::String_var &);
  const char * m2 (void) const;
  

  // TAO_IDL - Generated from
  // be/be_visitor_union/discriminant_ch.cpp:100

  void _d ( ::CORBA::Long);
  ::CORBA::Long _d (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_valuebox/valuebox_ch.cpp:672
private:
  Variable_Union1_var _pd_value;
  

  // TAO_IDL - Generated from
  // be/be_visitor_valuebox/valuebox_ch.cpp:114

protected:
  virtual ~VBvariable_union1 (void);
  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t ) const;
  
private:
  void operator= (const VBvariable_union1 & val);
  
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_VBvariable_union1;

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class Arg_Traits< ::Fixed_Union1>
    : public
        Fixed_Size_Arg_Traits_T<
            ::Fixed_Union1,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class Arg_Traits< ::Variable_Union1>
    : public
        Var_Size_Arg_Traits_T<
            ::Variable_Union1,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:250

  template<>
  class Arg_Traits< ::VBfixed_union1>
    : public
        Object_Arg_Traits_T<
            ::VBfixed_union1 *,
            ::VBfixed_union1_var,
            ::VBfixed_union1_out,
            TAO::Value_Traits<VBfixed_union1>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:250

  template<>
  class Arg_Traits< ::VBvariable_union1>
    : public
        Object_Arg_Traits_T<
            ::VBvariable_union1 *,
            ::VBvariable_union1_var,
            ::VBvariable_union1_out,
            TAO::Value_Traits<VBvariable_union1>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_VBFIXED_UNION1__TRAITS_)
#define _VBFIXED_UNION1__TRAITS_

  template<>
  struct  Value_Traits<VBfixed_union1>
  {
    static void add_ref (VBfixed_union1 *);
    static void remove_ref (VBfixed_union1 *);
    static void release (VBfixed_union1 *);
  };

#endif /* end #if !defined */

#if !defined (_VBVARIABLE_UNION1__TRAITS_)
#define _VBVARIABLE_UNION1__TRAITS_

  template<>
  struct  Value_Traits<VBvariable_union1>
  {
    static void add_ref (VBvariable_union1 *);
    static void remove_ref (VBvariable_union1 *);
    static void release (VBvariable_union1 *);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Fixed_Union1 &); // copying version
 void operator<<= (::CORBA::Any &, Fixed_Union1*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Fixed_Union1 *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Fixed_Union1 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Variable_Union1 &); // copying version
 void operator<<= (::CORBA::Any &, Variable_Union1*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Variable_Union1 *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Variable_Union1 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuebox/any_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, VBfixed_union1 *); // copying
 void operator<<= (::CORBA::Any &, VBfixed_union1 **); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, VBfixed_union1 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuebox/any_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, VBvariable_union1 *); // copying
 void operator<<= (::CORBA::Any &, VBvariable_union1 **); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, VBvariable_union1 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_ch.cpp:38


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Fixed_Union1 &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Fixed_Union1 &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_ch.cpp:38


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Variable_Union1 &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Variable_Union1 &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuebox/cdr_op_ch.cpp:39


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const VBfixed_union1 *);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, VBfixed_union1 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuebox/cdr_op_ch.cpp:39


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const VBvariable_union1 *);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, VBvariable_union1 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "vb_unionC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

