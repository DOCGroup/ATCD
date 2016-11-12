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
// be/be_codegen.cpp:373


#include "FT_TestReplicaC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Enum_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Basic_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "FT_TestReplicaC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for FT_TEST::TestReplica.

FT_TEST::TestReplica_ptr
TAO::Objref_Traits<FT_TEST::TestReplica>::duplicate (
    FT_TEST::TestReplica_ptr p)
{
  return FT_TEST::TestReplica::_duplicate (p);
}

void
TAO::Objref_Traits<FT_TEST::TestReplica>::release (
    FT_TEST::TestReplica_ptr p)
{
  ::CORBA::release (p);
}

FT_TEST::TestReplica_ptr
TAO::Objref_Traits<FT_TEST::TestReplica>::nil (void)
{
  return FT_TEST::TestReplica::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<FT_TEST::TestReplica>::marshal (
    const FT_TEST::TestReplica_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
FT_TEST::TestReplica::set (
  ::CORBA::Long value)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_value (value);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_value
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "set",
      3,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
FT_TEST::TestReplica::increment (
  ::CORBA::Long delta)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_delta (delta);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_delta
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "increment",
      9,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
FT_TEST::TestReplica::get (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "get",
      3,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/enum_typecode.cpp:29
static char const * const _tao_enumerators_FT_TEST_TestReplica_Bane[] =
  {
    "NOT_YET",
    "RIGHT_NOW",
    "WHILE_IDLE",
    "BEFORE_STATE_CHANGE",
    "BEFORE_REPLICATION",
    "BEFORE_REPLY",
    "DURING_IS_ALIVE",
    "DENY_IS_ALIVE",
    "DURING_GET_UPDATE",
    "BEFORE_SET_UPDATE",
    "AFTER_SET_UPDATE",
    "DURING_GET_STATE",
    "BEFORE_SET_STATE",
    "AFTER_SET_STATE",
    "CLEAN_EXIT"

  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_FT_TEST_TestReplica_Bane (
    "IDL:FT_TEST/TestReplica/Bane:1.0",
    "Bane",
    _tao_enumerators_FT_TEST_TestReplica_Bane,
    15);

::CORBA::TypeCode_ptr const FT_TEST::TestReplica::_tc_Bane =
  &_tao_tc_FT_TEST_TestReplica_Bane;

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
FT_TEST::TestReplica::die (
  ::FT_TEST::TestReplica::Bane when)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::FT_TEST::TestReplica::Bane>::in_arg_val _tao_when (when);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_when
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "die",
      3,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
FT_TEST::TestReplica::shutdown (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
FT_TEST::TestReplica::counter (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "_get_counter",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
FT_TEST::TestReplica::counter (
  ::CORBA::Long counter)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_counter (counter);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_counter
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "_set_counter",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

FT_TEST::TestReplica::TestReplica (void)
{
}

FT_TEST::TestReplica::~TestReplica (void)
{
}

void
FT_TEST::TestReplica::_tao_any_destructor (void *_tao_void_pointer)
{
  TestReplica *_tao_tmp_pointer =
    static_cast<TestReplica *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

FT_TEST::TestReplica_ptr
FT_TEST::TestReplica::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<TestReplica>::narrow (
        _tao_objref,
        "IDL:FT_TEST/TestReplica:1.0");
}

FT_TEST::TestReplica_ptr
FT_TEST::TestReplica::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<TestReplica>::unchecked_narrow (
        _tao_objref);
}

FT_TEST::TestReplica_ptr
FT_TEST::TestReplica::_nil (void)
{
  return 0;
}

FT_TEST::TestReplica_ptr
FT_TEST::TestReplica::_duplicate (TestReplica_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
FT_TEST::TestReplica::_tao_release (TestReplica_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
FT_TEST::TestReplica::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/FT/Checkpointable:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/FT/Updateable:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/FT/PullMonitorable:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableGroup/TAO_UpdateObjectGroup:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:FT_TEST/TestReplica:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* FT_TEST::TestReplica::_interface_repository_id (void) const
{
  return "IDL:FT_TEST/TestReplica:1.0";
}

::CORBA::Boolean
FT_TEST::TestReplica::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_FT_TEST_TestReplica (
    ::CORBA::tk_objref,
    "IDL:FT_TEST/TestReplica:1.0",
    "TestReplica");


namespace FT_TEST
{
  ::CORBA::TypeCode_ptr const _tc_TestReplica =
    &_tao_tc_FT_TEST_TestReplica;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for FT_TEST::ReplicaFactory.

FT_TEST::ReplicaFactory_ptr
TAO::Objref_Traits<FT_TEST::ReplicaFactory>::duplicate (
    FT_TEST::ReplicaFactory_ptr p)
{
  return FT_TEST::ReplicaFactory::_duplicate (p);
}

void
TAO::Objref_Traits<FT_TEST::ReplicaFactory>::release (
    FT_TEST::ReplicaFactory_ptr p)
{
  ::CORBA::release (p);
}

FT_TEST::ReplicaFactory_ptr
TAO::Objref_Traits<FT_TEST::ReplicaFactory>::nil (void)
{
  return FT_TEST::ReplicaFactory::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<FT_TEST::ReplicaFactory>::marshal (
    const FT_TEST::ReplicaFactory_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
FT_TEST::ReplicaFactory::shutdown (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

FT_TEST::ReplicaFactory::ReplicaFactory (void)
{
}

FT_TEST::ReplicaFactory::~ReplicaFactory (void)
{
}

void
FT_TEST::ReplicaFactory::_tao_any_destructor (void *_tao_void_pointer)
{
  ReplicaFactory *_tao_tmp_pointer =
    static_cast<ReplicaFactory *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

FT_TEST::ReplicaFactory_ptr
FT_TEST::ReplicaFactory::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<ReplicaFactory>::narrow (
        _tao_objref,
        "IDL:FT_TEST/ReplicaFactory:1.0");
}

FT_TEST::ReplicaFactory_ptr
FT_TEST::ReplicaFactory::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<ReplicaFactory>::unchecked_narrow (
        _tao_objref);
}

FT_TEST::ReplicaFactory_ptr
FT_TEST::ReplicaFactory::_nil (void)
{
  return 0;
}

FT_TEST::ReplicaFactory_ptr
FT_TEST::ReplicaFactory::_duplicate (ReplicaFactory_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
FT_TEST::ReplicaFactory::_tao_release (ReplicaFactory_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
FT_TEST::ReplicaFactory::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableGroup/GenericFactory:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/FT/PullMonitorable:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:FT_TEST/ReplicaFactory:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* FT_TEST::ReplicaFactory::_interface_repository_id (void) const
{
  return "IDL:FT_TEST/ReplicaFactory:1.0";
}

::CORBA::Boolean
FT_TEST::ReplicaFactory::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_FT_TEST_ReplicaFactory (
    ::CORBA::tk_objref,
    "IDL:FT_TEST/ReplicaFactory:1.0",
    "ReplicaFactory");


namespace FT_TEST
{
  ::CORBA::TypeCode_ptr const _tc_ReplicaFactory =
    &_tao_tc_FT_TEST_ReplicaFactory;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<FT_TEST::TestReplica>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT_TEST
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      TestReplica_ptr _tao_elem)
  {
    TestReplica_ptr _tao_objptr =
      TestReplica::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      TestReplica_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<TestReplica>::insert (
        _tao_any,
        TestReplica::_tao_any_destructor,
        _tc_TestReplica,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      TestReplica_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<TestReplica>::extract (
          _tao_any,
          TestReplica::_tao_any_destructor,
          _tc_TestReplica,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    FT_TEST::TestReplica_ptr _tao_elem)
{
  FT_TEST::TestReplica_ptr _tao_objptr =
    FT_TEST::TestReplica::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    FT_TEST::TestReplica_ptr *_tao_elem)
{
  TAO::Any_Impl_T<FT_TEST::TestReplica>::insert (
      _tao_any,
      FT_TEST::TestReplica::_tao_any_destructor,
      FT_TEST::_tc_TestReplica,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    FT_TEST::TestReplica_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<FT_TEST::TestReplica>::extract (
        _tao_any,
        FT_TEST::TestReplica::_tao_any_destructor,
        FT_TEST::_tc_TestReplica,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_enum/any_op_cs.cpp:35

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT_TEST
{
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::FT_TEST::TestReplica::Bane _tao_elem
    )
  {
    TAO::Any_Basic_Impl_T< ::FT_TEST::TestReplica::Bane>::insert (
        _tao_any,
        ::FT_TEST::TestReplica::_tc_Bane,
        _tao_elem
      );
  }

  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::FT_TEST::TestReplica::Bane &_tao_elem
    )
  {
    return
      TAO::Any_Basic_Impl_T< ::FT_TEST::TestReplica::Bane>::extract (
          _tao_any,
          ::FT_TEST::TestReplica::_tc_Bane,
          _tao_elem
        );
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    FT_TEST::TestReplica::Bane _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<FT_TEST::TestReplica::Bane>::insert (
      _tao_any,
      FT_TEST::TestReplica::_tc_Bane,
      _tao_elem
    );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    FT_TEST::TestReplica::Bane &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<FT_TEST::TestReplica::Bane>::extract (
        _tao_any,
        FT_TEST::TestReplica::_tc_Bane,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<FT_TEST::ReplicaFactory>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT_TEST
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      ReplicaFactory_ptr _tao_elem)
  {
    ReplicaFactory_ptr _tao_objptr =
      ReplicaFactory::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      ReplicaFactory_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<ReplicaFactory>::insert (
        _tao_any,
        ReplicaFactory::_tao_any_destructor,
        _tc_ReplicaFactory,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      ReplicaFactory_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<ReplicaFactory>::extract (
          _tao_any,
          ReplicaFactory::_tao_any_destructor,
          _tc_ReplicaFactory,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    FT_TEST::ReplicaFactory_ptr _tao_elem)
{
  FT_TEST::ReplicaFactory_ptr _tao_objptr =
    FT_TEST::ReplicaFactory::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    FT_TEST::ReplicaFactory_ptr *_tao_elem)
{
  TAO::Any_Impl_T<FT_TEST::ReplicaFactory>::insert (
      _tao_any,
      FT_TEST::ReplicaFactory::_tao_any_destructor,
      FT_TEST::_tc_ReplicaFactory,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    FT_TEST::ReplicaFactory_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<FT_TEST::ReplicaFactory>::extract (
        _tao_any,
        FT_TEST::ReplicaFactory::_tao_any_destructor,
        FT_TEST::_tc_ReplicaFactory,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, FT_TEST::TestReplica::Bane _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, FT_TEST::TestReplica::Bane & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;

  if (_tao_success)
    {
      _tao_enumerator = static_cast<FT_TEST::TestReplica::Bane> (_tao_temp);
    }

  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const FT_TEST::TestReplica_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    FT_TEST::TestReplica_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::FT_TEST::TestReplica RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const FT_TEST::ReplicaFactory_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    FT_TEST::ReplicaFactory_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::FT_TEST::ReplicaFactory RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



