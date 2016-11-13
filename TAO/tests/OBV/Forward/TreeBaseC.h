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

#ifndef _TAO_IDL_TREEBASEC_TCPL0N_H_
#define _TAO_IDL_TREEBASEC_TCPL0N_H_

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
// be/be_valuetype.cpp:564



#if !defined (_BASENODE__VAR_OUT_CH_)
#define _BASENODE__VAR_OUT_CH_

class BaseNode;
typedef
  TAO_Value_Var_T<
      BaseNode
    >
  BaseNode_var;

typedef
  TAO_Value_Out_T<
      BaseNode
    >
  BaseNode_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ch.cpp:50

class  BaseNode
  : public virtual ::CORBA::ValueBase
{
public:

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef BaseNode * _ptr_type;
  typedef BaseNode_var _var_type;
  typedef BaseNode_out _out_type;

  static void _tao_any_destructor (void *);

  static BaseNode* _downcast ( ::CORBA::ValueBase *v);

  /// TAO extensions or internals
  static ::CORBA::Boolean _tao_unmarshal (
      TAO_InputCDR &strm,
      BaseNode *&new_object);

  virtual const char* _tao_obv_repository_id (void) const;

  virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

  static const char* _tao_obv_static_repository_id (void);

  virtual ::CORBA::TypeCode_ptr _tao_type (void) const;

public:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:361

  virtual void left (BaseNode *) = 0;
  virtual BaseNode *left (void) const = 0;

public:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:361

  virtual void right (BaseNode *) = 0;
  virtual BaseNode *right (void) const = 0;

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_ch.cpp:238

protected:
  BaseNode (void);
  virtual ~BaseNode (void);

  virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
  virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
  virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t ) const;

private:
  BaseNode (const BaseNode &);
  void operator= (const BaseNode &);

protected:
  virtual ::CORBA::Boolean
  _tao_marshal__BaseNode (TAO_OutputCDR &, TAO_ChunkInfo &) const = 0;

  virtual ::CORBA::Boolean
  _tao_unmarshal__BaseNode (TAO_InputCDR &, TAO_ChunkInfo &) = 0;
};

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_init_ch.cpp:57

class  BaseNode_init
  : public virtual ::CORBA::ValueFactoryBase
{
public:
  BaseNode_init (void);

  static BaseNode_init* _downcast ( ::CORBA::ValueFactoryBase *);

  virtual ::CORBA::ValueBase *
  create_for_unmarshal (void);

  // TAO-specific extensions
public:
  virtual const char* tao_repository_id (void);

protected:
  virtual ~BaseNode_init (void);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_BaseNode;

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:306

#if !defined (_BASENODE__ARG_TRAITS_)
#define _BASENODE__ARG_TRAITS_

  template<>
  class Arg_Traits< ::BaseNode>
    : public
        Object_Arg_Traits_T<
            ::BaseNode *,
            ::BaseNode_var,
            ::BaseNode_out,
            TAO::Value_Traits<BaseNode>,
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
class  OBV_BaseNode
  : public virtual BaseNode,
    public virtual ::CORBA::DefaultValueRefCountBase
{

public:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:361

  virtual void left (BaseNode *);
  virtual BaseNode *left (void) const;

public:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:361

  virtual void right (BaseNode *);
  virtual BaseNode *right (void) const;

public:
  OBV_BaseNode (void);
  OBV_BaseNode (
      ::BaseNode * _tao_init_left,
      ::BaseNode * _tao_init_right
    );
  virtual ~OBV_BaseNode (void);

public:
  virtual ::CORBA::ValueBase *_copy_value (void);

protected:
  virtual ::CORBA::Boolean
  _tao_marshal__BaseNode (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__BaseNode (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook (void);

private:
  BaseNode_var _pd_left;
  BaseNode_var _pd_right;
  CORBA::Boolean require_truncation_;
};

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_BASENODE__TRAITS_)
#define _BASENODE__TRAITS_

  template<>
  struct  Value_Traits<BaseNode>
  {
    static void add_ref (BaseNode *);
    static void remove_ref (BaseNode *);
    static void release (BaseNode *);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/any_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, BaseNode *); // copying
 void operator<<= (::CORBA::Any &, BaseNode **); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, BaseNode *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_valuetype.cpp:456


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern  void add_ref (BaseNode *);
  extern  void remove_ref (BaseNode *);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/cdr_op_ch.cpp:49


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const BaseNode *);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, BaseNode *&);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TreeBaseC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

