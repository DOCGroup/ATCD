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


#include "NavWeapC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "NavWeapC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const
    _tao_fields_Navigation[] =
      {
        { "position_latitude", &CORBA::_tc_long },
        { "position_longitude", &CORBA::_tc_long },
        { "altitude", &CORBA::_tc_ulong },
        { "heading", &CORBA::_tc_long },
        { "roll", &CORBA::_tc_long },
        { "pitch", &CORBA::_tc_long },
        { "utilization", &CORBA::_tc_double },
        { "overhead", &CORBA::_tc_double },
        { "arrival_time", &TimeBase::_tc_TimeT },
        { "deadline_time", &TimeBase::_tc_TimeT },
        { "completion_time", &TimeBase::_tc_TimeT },
        { "computation_time", &TimeBase::_tc_TimeT },
        { "criticality", &CORBA::_tc_ulong },
        { "update_data", &CORBA::_tc_ulong }
      };

static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_Navigation (
  ::CORBA::tk_struct,
  "IDL:Navigation:1.0",
  "Navigation",
  _tao_fields_Navigation,
  14);

::CORBA::TypeCode_ptr const _tc_Navigation =
  &_tao_tc_Navigation;

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
Navigation::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Navigation *_tao_tmp_pointer =
    static_cast<Navigation *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const
    _tao_fields_Weapons[] =
      {
        { "number_of_weapons", &CORBA::_tc_ulong },
        { "weapon1_identifier", &CORBA::_tc_string },
        { "weapon1_status", &CORBA::_tc_ulong },
        { "weapon2_identifier", &CORBA::_tc_string },
        { "weapon2_status", &CORBA::_tc_ulong },
        { "weapon3_identifier", &CORBA::_tc_string },
        { "weapon3_status", &CORBA::_tc_ulong },
        { "weapon4_identifier", &CORBA::_tc_string },
        { "weapon4_status", &CORBA::_tc_ulong },
        { "weapon5_identifier", &CORBA::_tc_string },
        { "weapon5_status", &CORBA::_tc_ulong },
        { "utilization", &CORBA::_tc_double },
        { "overhead", &CORBA::_tc_double },
        { "arrival_time", &TimeBase::_tc_TimeT },
        { "deadline_time", &TimeBase::_tc_TimeT },
        { "completion_time", &TimeBase::_tc_TimeT },
        { "computation_time", &TimeBase::_tc_TimeT },
        { "criticality", &CORBA::_tc_ulong },
        { "update_data", &CORBA::_tc_ulong }
      };

static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_Weapons (
  ::CORBA::tk_struct,
  "IDL:Weapons:1.0",
  "Weapons",
  _tao_fields_Weapons,
  19);

::CORBA::TypeCode_ptr const _tc_Weapons =
  &_tao_tc_Weapons;

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
Weapons::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Weapons *_tao_tmp_pointer =
    static_cast<Weapons *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for NavWeapTerminator.

NavWeapTerminator_ptr
TAO::Objref_Traits<NavWeapTerminator>::duplicate (
    NavWeapTerminator_ptr p)
{
  return NavWeapTerminator::_duplicate (p);
}

void
TAO::Objref_Traits<NavWeapTerminator>::release (
    NavWeapTerminator_ptr p)
{
  ::CORBA::release (p);
}

NavWeapTerminator_ptr
TAO::Objref_Traits<NavWeapTerminator>::nil (void)
{
  return NavWeapTerminator::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<NavWeapTerminator>::marshal (
    const NavWeapTerminator_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
NavWeapTerminator::shutdown (
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
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

NavWeapTerminator::NavWeapTerminator (void)
{
}

NavWeapTerminator::~NavWeapTerminator (void)
{
}

void
NavWeapTerminator::_tao_any_destructor (void *_tao_void_pointer)
{
  NavWeapTerminator *_tao_tmp_pointer =
    static_cast<NavWeapTerminator *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

NavWeapTerminator_ptr
NavWeapTerminator::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<NavWeapTerminator>::narrow (
        _tao_objref,
        "IDL:NavWeapTerminator:1.0");
}

NavWeapTerminator_ptr
NavWeapTerminator::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<NavWeapTerminator>::unchecked_narrow (
        _tao_objref);
}

NavWeapTerminator_ptr
NavWeapTerminator::_nil (void)
{
  return 0;
}

NavWeapTerminator_ptr
NavWeapTerminator::_duplicate (NavWeapTerminator_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
NavWeapTerminator::_tao_release (NavWeapTerminator_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
NavWeapTerminator::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:NavWeapTerminator:1.0"
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

const char* NavWeapTerminator::_interface_repository_id (void) const
{
  return "IDL:NavWeapTerminator:1.0";
}

::CORBA::Boolean
NavWeapTerminator::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_NavWeapTerminator (
    ::CORBA::tk_objref,
    "IDL:NavWeapTerminator:1.0",
    "NavWeapTerminator");

::CORBA::TypeCode_ptr const _tc_NavWeapTerminator =
  &_tao_tc_NavWeapTerminator;

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const Navigation &_tao_elem)
{
  TAO::Any_Dual_Impl_T<Navigation>::insert_copy (
    _tao_any,
    Navigation::_tao_any_destructor,
    _tc_Navigation,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  Navigation *_tao_elem)
{
  TAO::Any_Dual_Impl_T<Navigation>::insert (
    _tao_any,
    Navigation::_tao_any_destructor,
    _tc_Navigation,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  Navigation *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const Navigation *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const Navigation *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<Navigation>::extract (
      _tao_any,
      Navigation::_tao_any_destructor,
      _tc_Navigation,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const Weapons &_tao_elem)
{
  TAO::Any_Dual_Impl_T<Weapons>::insert_copy (
    _tao_any,
    Weapons::_tao_any_destructor,
    _tc_Weapons,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  Weapons *_tao_elem)
{
  TAO::Any_Dual_Impl_T<Weapons>::insert (
    _tao_any,
    Weapons::_tao_any_destructor,
    _tc_Weapons,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  Weapons *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const Weapons *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const Weapons *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<Weapons>::extract (
      _tao_any,
      Weapons::_tao_any_destructor,
      _tc_Weapons,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<NavWeapTerminator>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    NavWeapTerminator_ptr _tao_elem)
{
  NavWeapTerminator_ptr _tao_objptr =
    NavWeapTerminator::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    NavWeapTerminator_ptr *_tao_elem)
{
  TAO::Any_Impl_T<NavWeapTerminator>::insert (
      _tao_any,
      NavWeapTerminator::_tao_any_destructor,
      _tc_NavWeapTerminator,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    NavWeapTerminator_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<NavWeapTerminator>::extract (
        _tao_any,
        NavWeapTerminator::_tao_any_destructor,
        _tc_NavWeapTerminator,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Navigation &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.position_latitude) &&
    (strm << _tao_aggregate.position_longitude) &&
    (strm << _tao_aggregate.altitude) &&
    (strm << _tao_aggregate.heading) &&
    (strm << _tao_aggregate.roll) &&
    (strm << _tao_aggregate.pitch) &&
    (strm << _tao_aggregate.utilization) &&
    (strm << _tao_aggregate.overhead) &&
    (strm << _tao_aggregate.arrival_time) &&
    (strm << _tao_aggregate.deadline_time) &&
    (strm << _tao_aggregate.completion_time) &&
    (strm << _tao_aggregate.computation_time) &&
    (strm << _tao_aggregate.criticality) &&
    (strm << _tao_aggregate.update_data);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Navigation &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.position_latitude) &&
    (strm >> _tao_aggregate.position_longitude) &&
    (strm >> _tao_aggregate.altitude) &&
    (strm >> _tao_aggregate.heading) &&
    (strm >> _tao_aggregate.roll) &&
    (strm >> _tao_aggregate.pitch) &&
    (strm >> _tao_aggregate.utilization) &&
    (strm >> _tao_aggregate.overhead) &&
    (strm >> _tao_aggregate.arrival_time) &&
    (strm >> _tao_aggregate.deadline_time) &&
    (strm >> _tao_aggregate.completion_time) &&
    (strm >> _tao_aggregate.computation_time) &&
    (strm >> _tao_aggregate.criticality) &&
    (strm >> _tao_aggregate.update_data);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Weapons &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.number_of_weapons) &&
    (strm << _tao_aggregate.weapon1_identifier.in ()) &&
    (strm << _tao_aggregate.weapon1_status) &&
    (strm << _tao_aggregate.weapon2_identifier.in ()) &&
    (strm << _tao_aggregate.weapon2_status) &&
    (strm << _tao_aggregate.weapon3_identifier.in ()) &&
    (strm << _tao_aggregate.weapon3_status) &&
    (strm << _tao_aggregate.weapon4_identifier.in ()) &&
    (strm << _tao_aggregate.weapon4_status) &&
    (strm << _tao_aggregate.weapon5_identifier.in ()) &&
    (strm << _tao_aggregate.weapon5_status) &&
    (strm << _tao_aggregate.utilization) &&
    (strm << _tao_aggregate.overhead) &&
    (strm << _tao_aggregate.arrival_time) &&
    (strm << _tao_aggregate.deadline_time) &&
    (strm << _tao_aggregate.completion_time) &&
    (strm << _tao_aggregate.computation_time) &&
    (strm << _tao_aggregate.criticality) &&
    (strm << _tao_aggregate.update_data);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Weapons &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.number_of_weapons) &&
    (strm >> _tao_aggregate.weapon1_identifier.out ()) &&
    (strm >> _tao_aggregate.weapon1_status) &&
    (strm >> _tao_aggregate.weapon2_identifier.out ()) &&
    (strm >> _tao_aggregate.weapon2_status) &&
    (strm >> _tao_aggregate.weapon3_identifier.out ()) &&
    (strm >> _tao_aggregate.weapon3_status) &&
    (strm >> _tao_aggregate.weapon4_identifier.out ()) &&
    (strm >> _tao_aggregate.weapon4_status) &&
    (strm >> _tao_aggregate.weapon5_identifier.out ()) &&
    (strm >> _tao_aggregate.weapon5_status) &&
    (strm >> _tao_aggregate.utilization) &&
    (strm >> _tao_aggregate.overhead) &&
    (strm >> _tao_aggregate.arrival_time) &&
    (strm >> _tao_aggregate.deadline_time) &&
    (strm >> _tao_aggregate.completion_time) &&
    (strm >> _tao_aggregate.computation_time) &&
    (strm >> _tao_aggregate.criticality) &&
    (strm >> _tao_aggregate.update_data);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const NavWeapTerminator_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    NavWeapTerminator_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::NavWeapTerminator RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



