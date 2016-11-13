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

#ifndef _TAO_IDL_DEMOC_YQGHND_H_
#define _TAO_IDL_DEMOC_YQGHND_H_

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
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Valuetype/Value_VarOut_T.h"
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
#include "tao/UB_String_Arguments.h"
#include "tao/AnyTypeCode/Any_Arg_Traits.h"
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

namespace Demo
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct BaseStruct;

  typedef
    ::TAO_Var_Var_T<
        BaseStruct
      >
    BaseStruct_var;

  typedef
    ::TAO_Out_T<
        BaseStruct
      >
    BaseStruct_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  BaseStruct
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef BaseStruct_var _var_type;
    typedef BaseStruct_out _out_type;

    static void _tao_any_destructor (void *);

    ::TAO::String_Manager str;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_BaseStruct;

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct NestedStruct;

  typedef
    ::TAO_Var_Var_T<
        NestedStruct
      >
    NestedStruct_var;

  typedef
    ::TAO_Out_T<
        NestedStruct
      >
    NestedStruct_out;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_DEMO_NESTEDSEQ_CH_)
#define _DEMO_NESTEDSEQ_CH_

  class NestedSeq;

  typedef
    ::TAO_VarSeq_Var_T<
        NestedSeq
      >
    NestedSeq_var;

  typedef
    ::TAO_Seq_Out_T<
        NestedSeq
      >
    NestedSeq_out;

  class  NestedSeq
    : public
        ::TAO::unbounded_value_sequence<
            NestedStruct
          >
  {
  public:
    NestedSeq (void);
    NestedSeq ( ::CORBA::ULong max);
    NestedSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      NestedStruct* buffer,
      ::CORBA::Boolean release = false);
    NestedSeq (const NestedSeq &);
    virtual ~NestedSeq (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef NestedSeq_var _var_type;
    typedef NestedSeq_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_NestedSeq;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  NestedStruct
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef NestedStruct_var _var_type;
    typedef NestedStruct_out _out_type;

    static void _tao_any_destructor (void *);

    Demo::BaseStruct foo1;
    Demo::BaseStruct foo2;
    Demo::BaseStruct foo3;
    Demo::NestedSeq bars;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_NestedStruct;

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  class BaseUnion;

  typedef
    ::TAO_Var_Var_T<
        BaseUnion
      >
    BaseUnion_var;

  typedef
    ::TAO_Out_T<
        BaseUnion
      >
    BaseUnion_out;

  class  BaseUnion
  {
  public:
    BaseUnion (void);
    BaseUnion (const BaseUnion &);
    ~BaseUnion (void);

    BaseUnion &operator= (const BaseUnion &);

    // TAO_IDL - Generated from
    // be/be_visitor_union/discriminant_ch.cpp:100

    void _d ( ::CORBA::Short);
    ::CORBA::Short _d (void) const;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef BaseUnion_var _var_type;
    typedef BaseUnion_out _out_type;

    static void _tao_any_destructor (void *);

    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/public_ch.cpp:580

    void str (char *);
    void str (const char *);
    void str (const ::CORBA::String_var&);
    const char *str (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/public_ch.cpp:449

    void l ( ::CORBA::Long);
    ::CORBA::Long l (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/public_ch.cpp:449

    void s ( ::CORBA::Short);
    ::CORBA::Short s (void) const;
  private:
    ::CORBA::Short disc_;

    union
    {
      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/private_ch.cpp:474
      char *str_;
      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/private_ch.cpp:377
      ::CORBA::Long l_;
      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/private_ch.cpp:377
      ::CORBA::Short s_;
    } u_;

    /// TAO extension - frees any allocated storage.
    void _reset (void);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_BaseUnion;

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  class NestedUnion;

  typedef
    ::TAO_Var_Var_T<
        NestedUnion
      >
    NestedUnion_var;

  typedef
    ::TAO_Out_T<
        NestedUnion
      >
    NestedUnion_out;

  class  NestedUnion
  {
  public:
    NestedUnion (void);
    NestedUnion (const NestedUnion &);
    ~NestedUnion (void);

    NestedUnion &operator= (const NestedUnion &);

    // TAO_IDL - Generated from
    // be/be_visitor_union/discriminant_ch.cpp:100

    void _d ( ::CORBA::Short);
    ::CORBA::Short _d (void) const;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef NestedUnion_var _var_type;
    typedef NestedUnion_out _out_type;

    static void _tao_any_destructor (void *);

    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/public_ch.cpp:749

    void bar1 (const Demo::BaseUnion &);
    const Demo::BaseUnion &bar1 (void) const;
    Demo::BaseUnion &bar1 (void);

    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/public_ch.cpp:749

    void bar2 (const Demo::BaseUnion &);
    const Demo::BaseUnion &bar2 (void) const;
    Demo::BaseUnion &bar2 (void);

    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/public_ch.cpp:749

    void defaultBar (const Demo::BaseUnion &);
    const Demo::BaseUnion &defaultBar (void) const;
    Demo::BaseUnion &defaultBar (void);
  private:
    ::CORBA::Short disc_;

    union
    {
      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/private_ch.cpp:599
      Demo::BaseUnion *bar1_;
      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/private_ch.cpp:599
      Demo::BaseUnion *bar2_;
      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/private_ch.cpp:599
      Demo::BaseUnion *defaultBar_;
    } u_;

    /// TAO extension - frees any allocated storage.
    void _reset (void);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_NestedUnion;

  // TAO_IDL - Generated from
  // be/be_valuetype.cpp:564



#if !defined (_DEMO_BASEVALUE__VAR_OUT_CH_)
#define _DEMO_BASEVALUE__VAR_OUT_CH_

  class BaseValue;
  typedef
    TAO_Value_Var_T<
        BaseValue
      >
    BaseValue_var;

  typedef
    TAO_Value_Out_T<
        BaseValue
      >
    BaseValue_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_ch.cpp:50

  class  BaseValue
    : public virtual ::CORBA::ValueBase
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef BaseValue * _ptr_type;
    typedef BaseValue_var _var_type;
    typedef BaseValue_out _out_type;

    static void _tao_any_destructor (void *);

    static BaseValue* _downcast ( ::CORBA::ValueBase *v);

    /// TAO extensions or internals
    static ::CORBA::Boolean _tao_unmarshal (
        TAO_InputCDR &strm,
        BaseValue *&new_object);

    virtual const char* _tao_obv_repository_id (void) const;

    virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

    static const char* _tao_obv_static_repository_id (void);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;

  public:

    // TAO_IDL - Generated from
    // be/be_visitor_valuetype/field_ch.cpp:608

    virtual void str (char *val) = 0;
    virtual void str (const char *val) = 0;
    virtual void str (const ::CORBA::String_var &val) = 0;
    virtual const char *str (void) const = 0;

  public:

    // TAO_IDL - Generated from
    // be/be_visitor_valuetype/valuetype_ch.cpp:238

  protected:
    BaseValue (void);
    virtual ~BaseValue (void);

    virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
    virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
    virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t ) const;

  private:
    BaseValue (const BaseValue &);
    void operator= (const BaseValue &);

  protected:
    virtual ::CORBA::Boolean
    _tao_marshal__Demo_BaseValue (TAO_OutputCDR &, TAO_ChunkInfo &) const = 0;

    virtual ::CORBA::Boolean
    _tao_unmarshal__Demo_BaseValue (TAO_InputCDR &, TAO_ChunkInfo &) = 0;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_init_ch.cpp:57

  class  BaseValue_init
    : public virtual ::CORBA::ValueFactoryBase
  {
  public:

    virtual BaseValue* create (
      const char * str) = 0;

    static BaseValue_init* _downcast ( ::CORBA::ValueFactoryBase *);

    // TAO-specific extensions
  public:
    virtual const char* tao_repository_id (void);

  protected:
    BaseValue_init (void);

  protected:
    virtual ~BaseValue_init (void);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_BaseValue;

  // TAO_IDL - Generated from
  // be/be_valuetype.cpp:564



#if !defined (_DEMO_NESTEDVALUE__VAR_OUT_CH_)
#define _DEMO_NESTEDVALUE__VAR_OUT_CH_

  class NestedValue;
  typedef
    TAO_Value_Var_T<
        NestedValue
      >
    NestedValue_var;

  typedef
    TAO_Value_Out_T<
        NestedValue
      >
    NestedValue_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_ch.cpp:50

  class  NestedValue
    : public virtual ::CORBA::ValueBase
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef NestedValue * _ptr_type;
    typedef NestedValue_var _var_type;
    typedef NestedValue_out _out_type;

    static void _tao_any_destructor (void *);

    static NestedValue* _downcast ( ::CORBA::ValueBase *v);

    /// TAO extensions or internals
    static ::CORBA::Boolean _tao_unmarshal (
        TAO_InputCDR &strm,
        NestedValue *&new_object);

    virtual const char* _tao_obv_repository_id (void) const;

    virtual void _tao_obv_truncatable_repo_ids (Repository_Id_List &) const;

    static const char* _tao_obv_static_repository_id (void);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;

  public:

    // TAO_IDL - Generated from
    // be/be_visitor_valuetype/field_ch.cpp:361

    virtual void foo1 (Demo::BaseValue *) = 0;
    virtual Demo::BaseValue *foo1 (void) const = 0;

  public:

    // TAO_IDL - Generated from
    // be/be_visitor_valuetype/field_ch.cpp:361

    virtual void foo2 (Demo::BaseValue *) = 0;
    virtual Demo::BaseValue *foo2 (void) const = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_valuetype/valuetype_ch.cpp:238

  protected:
    NestedValue (void);
    virtual ~NestedValue (void);

    virtual ::CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;
    virtual ::CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);
    virtual ::CORBA::Boolean _tao_match_formal_type (ptrdiff_t ) const;

  private:
    NestedValue (const NestedValue &);
    void operator= (const NestedValue &);

  protected:
    virtual ::CORBA::Boolean
    _tao_marshal__Demo_NestedValue (TAO_OutputCDR &, TAO_ChunkInfo &) const = 0;

    virtual ::CORBA::Boolean
    _tao_unmarshal__Demo_NestedValue (TAO_InputCDR &, TAO_ChunkInfo &) = 0;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_init_ch.cpp:57

  class  NestedValue_init
    : public virtual ::CORBA::ValueFactoryBase
  {
  public:
    NestedValue_init (void);

    static NestedValue_init* _downcast ( ::CORBA::ValueFactoryBase *);

    virtual ::CORBA::ValueBase *
    create_for_unmarshal (void);

    // TAO-specific extensions
  public:
    virtual const char* tao_repository_id (void);

  protected:
    virtual ~NestedValue_init (void);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_NestedValue;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_DEMO_ATC_TEST__VAR_OUT_CH_)
#define _DEMO_ATC_TEST__VAR_OUT_CH_

  class ATC_Test;
  typedef ATC_Test *ATC_Test_ptr;

  typedef
    TAO_Objref_Var_T<
        ATC_Test
      >
    ATC_Test_var;

  typedef
    TAO_Objref_Out_T<
        ATC_Test
      >
    ATC_Test_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  ATC_Test
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<ATC_Test>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef ATC_Test_ptr _ptr_type;
    typedef ATC_Test_var _var_type;
    typedef ATC_Test_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static ATC_Test_ptr _duplicate (ATC_Test_ptr obj);

    static void _tao_release (ATC_Test_ptr obj);

    static ATC_Test_ptr _narrow (::CORBA::Object_ptr obj);
    static ATC_Test_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ATC_Test_ptr _nil (void);

    virtual char * do_struct (
      const ::CORBA::Any & a);

    virtual char * do_union (
      const ::CORBA::Any & a);

    virtual char * do_value (
      const ::CORBA::Any & a);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    ATC_Test (void);

    // Concrete non-local interface only.
    ATC_Test (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    ATC_Test (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~ATC_Test (void);

  private:
    // Private and unimplemented for concrete interfaces.
    ATC_Test (const ATC_Test &);

    void operator= (const ATC_Test &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_ATC_Test;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Demo

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Demo::BaseStruct>
    : public
        Var_Size_Arg_Traits_T<
            ::Demo::BaseStruct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Demo::NestedSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::Demo::NestedSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Demo::NestedStruct>
    : public
        Var_Size_Arg_Traits_T<
            ::Demo::NestedStruct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class Arg_Traits< ::Demo::BaseUnion>
    : public
        Var_Size_Arg_Traits_T<
            ::Demo::BaseUnion,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class Arg_Traits< ::Demo::NestedUnion>
    : public
        Var_Size_Arg_Traits_T<
            ::Demo::NestedUnion,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:306

#if !defined (_DEMO_BASEVALUE__ARG_TRAITS_)
#define _DEMO_BASEVALUE__ARG_TRAITS_

  template<>
  class Arg_Traits< ::Demo::BaseValue>
    : public
        Object_Arg_Traits_T<
            ::Demo::BaseValue *,
            ::Demo::BaseValue_var,
            ::Demo::BaseValue_out,
            TAO::Value_Traits<Demo::BaseValue>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:306

#if !defined (_DEMO_NESTEDVALUE__ARG_TRAITS_)
#define _DEMO_NESTEDVALUE__ARG_TRAITS_

  template<>
  class Arg_Traits< ::Demo::NestedValue>
    : public
        Object_Arg_Traits_T<
            ::Demo::NestedValue *,
            ::Demo::NestedValue_var,
            ::Demo::NestedValue_out,
            TAO::Value_Traits<Demo::NestedValue>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_DEMO_ATC_TEST__ARG_TRAITS_)
#define _DEMO_ATC_TEST__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Demo::ATC_Test>
    : public
        Object_Arg_Traits_T<
            ::Demo::ATC_Test_ptr,
            ::Demo::ATC_Test_var,
            ::Demo::ATC_Test_out,
            TAO::Objref_Traits<Demo::ATC_Test>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/obv_module.cpp:44

namespace OBV_Demo
{

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/valuetype_obv_ch.cpp:44

  // OBV_ class
  class  BaseValue
    : public virtual Demo::BaseValue
  {

public:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:608

  virtual void str (char *val);
  virtual void str (const char *val);
  virtual void str (const ::CORBA::String_var &val);
  virtual const char *str (void) const;

public:

public:
  BaseValue (void);
  BaseValue (
      const char * _tao_init_str
    );
  virtual ~BaseValue (void);

protected:
  virtual ::CORBA::Boolean
  _tao_marshal__Demo_BaseValue (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__Demo_BaseValue (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook (void);

private:
  ::TAO::String_Manager _pd_str;
  CORBA::Boolean require_truncation_;
};

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_obv_ch.cpp:44

// OBV_ class
class  NestedValue
  : public virtual Demo::NestedValue,
    public virtual ::CORBA::DefaultValueRefCountBase
{

public:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:361

  virtual void foo1 (Demo::BaseValue *);
  virtual Demo::BaseValue *foo1 (void) const;

public:

  // TAO_IDL - Generated from
  // be/be_visitor_valuetype/field_ch.cpp:361

  virtual void foo2 (Demo::BaseValue *);
  virtual Demo::BaseValue *foo2 (void) const;

public:
  NestedValue (void);
  NestedValue (
      ::Demo::BaseValue * _tao_init_foo1,
      ::Demo::BaseValue * _tao_init_foo2
    );
  virtual ~NestedValue (void);

public:
  virtual ::CORBA::ValueBase *_copy_value (void);

protected:
  virtual ::CORBA::Boolean
  _tao_marshal__Demo_NestedValue (TAO_OutputCDR &, TAO_ChunkInfo &) const;

  virtual ::CORBA::Boolean
  _tao_unmarshal__Demo_NestedValue (TAO_InputCDR &, TAO_ChunkInfo &);

  ::CORBA::Boolean _tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo &) const;
  ::CORBA::Boolean _tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo &);
  virtual void truncation_hook (void);

private:
  Demo::BaseValue_var _pd_foo1;
  Demo::BaseValue_var _pd_foo2;
  CORBA::Boolean require_truncation_;
};
}

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_DEMO_BASEVALUE__TRAITS_)
#define _DEMO_BASEVALUE__TRAITS_

  template<>
  struct  Value_Traits<Demo::BaseValue>
  {
    static void add_ref (Demo::BaseValue *);
    static void remove_ref (Demo::BaseValue *);
    static void release (Demo::BaseValue *);
  };

#endif /* end #if !defined */

#if !defined (_DEMO_NESTEDVALUE__TRAITS_)
#define _DEMO_NESTEDVALUE__TRAITS_

  template<>
  struct  Value_Traits<Demo::NestedValue>
  {
    static void add_ref (Demo::NestedValue *);
    static void remove_ref (Demo::NestedValue *);
    static void release (Demo::NestedValue *);
  };

#endif /* end #if !defined */

#if !defined (_DEMO_ATC_TEST__TRAITS_)
#define _DEMO_ATC_TEST__TRAITS_

  template<>
  struct  Objref_Traits< ::Demo::ATC_Test>
  {
    static ::Demo::ATC_Test_ptr duplicate (
        ::Demo::ATC_Test_ptr p);
    static void release (
        ::Demo::ATC_Test_ptr p);
    static ::Demo::ATC_Test_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Demo::ATC_Test_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Demo
{
   void operator<<= (::CORBA::Any &, const ::Demo::BaseStruct &); // copying version
   void operator<<= (::CORBA::Any &, ::Demo::BaseStruct*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Demo::BaseStruct *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Demo::BaseStruct *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Demo::BaseStruct &); // copying version
 void operator<<= (::CORBA::Any &, Demo::BaseStruct*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Demo::BaseStruct *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Demo::BaseStruct *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Demo
{
   void operator<<= ( ::CORBA::Any &, const ::Demo::NestedSeq &); // copying version
   void operator<<= ( ::CORBA::Any &, ::Demo::NestedSeq*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Demo::NestedSeq *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Demo::NestedSeq *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const Demo::NestedSeq &); // copying version
 void operator<<= ( ::CORBA::Any &, Demo::NestedSeq*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Demo::NestedSeq *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Demo::NestedSeq *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Demo
{
   void operator<<= (::CORBA::Any &, const ::Demo::NestedStruct &); // copying version
   void operator<<= (::CORBA::Any &, ::Demo::NestedStruct*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Demo::NestedStruct *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Demo::NestedStruct *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Demo::NestedStruct &); // copying version
 void operator<<= (::CORBA::Any &, Demo::NestedStruct*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Demo::NestedStruct *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Demo::NestedStruct *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_union/any_op_ch.cpp:37



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Demo
{
   void operator<<= (::CORBA::Any &, const ::Demo::BaseUnion &); // copying version
   void operator<<= (::CORBA::Any &, ::Demo::BaseUnion*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Demo::BaseUnion *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Demo::BaseUnion *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Demo::BaseUnion &); // copying version
 void operator<<= (::CORBA::Any &, Demo::BaseUnion*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Demo::BaseUnion *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Demo::BaseUnion *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_union/any_op_ch.cpp:37



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Demo
{
   void operator<<= (::CORBA::Any &, const ::Demo::NestedUnion &); // copying version
   void operator<<= (::CORBA::Any &, ::Demo::NestedUnion*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Demo::NestedUnion *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Demo::NestedUnion *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Demo::NestedUnion &); // copying version
 void operator<<= (::CORBA::Any &, Demo::NestedUnion*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Demo::NestedUnion *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Demo::NestedUnion *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_valuetype/any_op_ch.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Demo
{
   void operator<<= ( ::CORBA::Any &, BaseValue *); // copying
   void operator<<= ( ::CORBA::Any &, BaseValue **); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, BaseValue *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Demo::BaseValue *); // copying
 void operator<<= (::CORBA::Any &, Demo::BaseValue **); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Demo::BaseValue *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_valuetype/any_op_ch.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Demo
{
   void operator<<= ( ::CORBA::Any &, NestedValue *); // copying
   void operator<<= ( ::CORBA::Any &, NestedValue **); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, NestedValue *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Demo::NestedValue *); // copying
 void operator<<= (::CORBA::Any &, Demo::NestedValue **); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Demo::NestedValue *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Demo
{
   void operator<<= ( ::CORBA::Any &, ATC_Test_ptr); // copying
   void operator<<= ( ::CORBA::Any &, ATC_Test_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ATC_Test_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Demo::ATC_Test_ptr); // copying
 void operator<<= (::CORBA::Any &, Demo::ATC_Test_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Demo::ATC_Test_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Demo::BaseStruct &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Demo::BaseStruct &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Demo_NestedSeq_H_
#define _TAO_CDR_OP_Demo_NestedSeq_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Demo::NestedSeq &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Demo::NestedSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Demo_NestedSeq_H_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Demo::NestedStruct &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Demo::NestedStruct &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_ch.cpp:38


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Demo::BaseUnion &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Demo::BaseUnion &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_ch.cpp:38


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Demo::NestedUnion &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Demo::NestedUnion &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_valuetype.cpp:456


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern  void add_ref (Demo::BaseValue *);
  extern  void remove_ref (Demo::BaseValue *);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/cdr_op_ch.cpp:49


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Demo::BaseValue *);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Demo::BaseValue *&);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_valuetype.cpp:456


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  extern  void add_ref (Demo::NestedValue *);
  extern  void remove_ref (Demo::NestedValue *);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_valuetype/cdr_op_ch.cpp:49


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Demo::NestedValue *);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Demo::NestedValue *&);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Demo::ATC_Test_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Demo::ATC_Test_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "DemoC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

