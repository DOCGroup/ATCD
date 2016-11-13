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

#ifndef _TAO_IDL_FT_TESTREPLICAC_UDGQTM_H_
#define _TAO_IDL_FT_TESTREPLICAC_UDGQTM_H_

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
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "orbsvcs/FT_ReplicaC.h"

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

namespace FT_TEST
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_FT_TEST_TESTREPLICA__VAR_OUT_CH_)
#define _FT_TEST_TESTREPLICA__VAR_OUT_CH_

  class TestReplica;
  typedef TestReplica *TestReplica_ptr;

  typedef
    TAO_Objref_Var_T<
        TestReplica
      >
    TestReplica_var;

  typedef
    TAO_Objref_Out_T<
        TestReplica
      >
    TestReplica_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  TestReplica
    : public virtual ::FT::Updateable,
      public virtual ::FT::PullMonitorable,
      public virtual ::PortableGroup::TAO_UpdateObjectGroup

  {
  public:
    friend class TAO::Narrow_Utils<TestReplica>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef TestReplica_ptr _ptr_type;
    typedef TestReplica_var _var_type;
    typedef TestReplica_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static TestReplica_ptr _duplicate (TestReplica_ptr obj);

    static void _tao_release (TestReplica_ptr obj);

    static TestReplica_ptr _narrow (::CORBA::Object_ptr obj);
    static TestReplica_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static TestReplica_ptr _nil (void);

    virtual void set (
      ::CORBA::Long value);

    virtual ::CORBA::Long increment (
      ::CORBA::Long delta);

    virtual ::CORBA::Long get (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_enum/enum_ch.cpp:44

    enum Bane
    {
      NOT_YET,
      RIGHT_NOW,
      WHILE_IDLE,
      BEFORE_STATE_CHANGE,
      BEFORE_REPLICATION,
      BEFORE_REPLY,
      DURING_IS_ALIVE,
      DENY_IS_ALIVE,
      DURING_GET_UPDATE,
      BEFORE_SET_UPDATE,
      AFTER_SET_UPDATE,
      DURING_GET_STATE,
      BEFORE_SET_STATE,
      AFTER_SET_STATE,
      CLEAN_EXIT
    };

    typedef Bane &Bane_out;

    // TAO_IDL - Generated from
    // be/be_visitor_typecode/typecode_decl.cpp:34

    static ::CORBA::TypeCode_ptr const _tc_Bane;

    virtual void die (
      ::FT_TEST::TestReplica::Bane when);

    virtual void shutdown (
      void);

    virtual ::CORBA::Long counter (
      void);

    virtual void counter (
      ::CORBA::Long counter);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    TestReplica (void);

    // Concrete non-local interface only.
    TestReplica (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    TestReplica (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~TestReplica (void);

  private:
    // Private and unimplemented for concrete interfaces.
    TestReplica (const TestReplica &);

    void operator= (const TestReplica &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_TestReplica;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_FT_TEST_REPLICAFACTORY__VAR_OUT_CH_)
#define _FT_TEST_REPLICAFACTORY__VAR_OUT_CH_

  class ReplicaFactory;
  typedef ReplicaFactory *ReplicaFactory_ptr;

  typedef
    TAO_Objref_Var_T<
        ReplicaFactory
      >
    ReplicaFactory_var;

  typedef
    TAO_Objref_Out_T<
        ReplicaFactory
      >
    ReplicaFactory_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  ReplicaFactory
    : public virtual ::PortableGroup::GenericFactory,
      public virtual ::FT::PullMonitorable

  {
  public:
    friend class TAO::Narrow_Utils<ReplicaFactory>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef ReplicaFactory_ptr _ptr_type;
    typedef ReplicaFactory_var _var_type;
    typedef ReplicaFactory_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static ReplicaFactory_ptr _duplicate (ReplicaFactory_ptr obj);

    static void _tao_release (ReplicaFactory_ptr obj);

    static ReplicaFactory_ptr _narrow (::CORBA::Object_ptr obj);
    static ReplicaFactory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ReplicaFactory_ptr _nil (void);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    ReplicaFactory (void);

    // Concrete non-local interface only.
    ReplicaFactory (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    ReplicaFactory (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~ReplicaFactory (void);

  private:
    // Private and unimplemented for concrete interfaces.
    ReplicaFactory (const ReplicaFactory &);

    void operator= (const ReplicaFactory &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_ReplicaFactory;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module FT_TEST

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FT_TEST_TESTREPLICA__ARG_TRAITS_)
#define _FT_TEST_TESTREPLICA__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::FT_TEST::TestReplica>
    : public
        Object_Arg_Traits_T<
            ::FT_TEST::TestReplica_ptr,
            ::FT_TEST::TestReplica_var,
            ::FT_TEST::TestReplica_out,
            TAO::Objref_Traits<FT_TEST::TestReplica>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:902

  template<>
  class Arg_Traits< ::FT_TEST::TestReplica::Bane>
    : public
        Basic_Arg_Traits_T<
            ::FT_TEST::TestReplica::Bane,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FT_TEST_REPLICAFACTORY__ARG_TRAITS_)
#define _FT_TEST_REPLICAFACTORY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::FT_TEST::ReplicaFactory>
    : public
        Object_Arg_Traits_T<
            ::FT_TEST::ReplicaFactory_ptr,
            ::FT_TEST::ReplicaFactory_var,
            ::FT_TEST::ReplicaFactory_out,
            TAO::Objref_Traits<FT_TEST::ReplicaFactory>,
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

#if !defined (_FT_TEST_TESTREPLICA__TRAITS_)
#define _FT_TEST_TESTREPLICA__TRAITS_

  template<>
  struct  Objref_Traits< ::FT_TEST::TestReplica>
  {
    static ::FT_TEST::TestReplica_ptr duplicate (
        ::FT_TEST::TestReplica_ptr p);
    static void release (
        ::FT_TEST::TestReplica_ptr p);
    static ::FT_TEST::TestReplica_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::FT_TEST::TestReplica_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_FT_TEST_REPLICAFACTORY__TRAITS_)
#define _FT_TEST_REPLICAFACTORY__TRAITS_

  template<>
  struct  Objref_Traits< ::FT_TEST::ReplicaFactory>
  {
    static ::FT_TEST::ReplicaFactory_ptr duplicate (
        ::FT_TEST::ReplicaFactory_ptr p);
    static void release (
        ::FT_TEST::ReplicaFactory_ptr p);
    static ::FT_TEST::ReplicaFactory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::FT_TEST::ReplicaFactory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT_TEST
{
   void operator<<= ( ::CORBA::Any &, TestReplica_ptr); // copying
   void operator<<= ( ::CORBA::Any &, TestReplica_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, TestReplica_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, FT_TEST::TestReplica_ptr); // copying
 void operator<<= (::CORBA::Any &, FT_TEST::TestReplica_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT_TEST::TestReplica_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_enum/any_op_ch.cpp:36

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT_TEST
{


   void operator<<= (::CORBA::Any &, ::FT_TEST::TestReplica::Bane);
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::FT_TEST::TestReplica::Bane &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 void operator<<= (::CORBA::Any &, FT_TEST::TestReplica::Bane);
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT_TEST::TestReplica::Bane &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT_TEST
{
   void operator<<= ( ::CORBA::Any &, ReplicaFactory_ptr); // copying
   void operator<<= ( ::CORBA::Any &, ReplicaFactory_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ReplicaFactory_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, FT_TEST::ReplicaFactory_ptr); // copying
 void operator<<= (::CORBA::Any &, FT_TEST::ReplicaFactory_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT_TEST::ReplicaFactory_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const FT_TEST::TestReplica_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, FT_TEST::TestReplica_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_ch.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, FT_TEST::TestReplica::Bane _tao_enumerator);
 ::CORBA::Boolean operator>> (TAO_InputCDR &strm, FT_TEST::TestReplica::Bane &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const FT_TEST::ReplicaFactory_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, FT_TEST::ReplicaFactory_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "FT_TestReplicaC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

