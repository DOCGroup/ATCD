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


#include "TimeModuleC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
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
#include "TimeModuleC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_TimeModule_TimeOfDay[] =
      {
        { "hour", &CORBA::_tc_short },
        { "minute", &CORBA::_tc_short },
        { "second", &CORBA::_tc_short }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_TimeModule_TimeOfDay (
  ::CORBA::tk_struct,
  "IDL:TimeModule/TimeOfDay:1.0",
  "TimeOfDay",
  _tao_fields_TimeModule_TimeOfDay,
  3);


namespace TimeModule
{
  ::CORBA::TypeCode_ptr const _tc_TimeOfDay =
    &_tao_tc_TimeModule_TimeOfDay;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
TimeModule::TimeOfDay::_tao_any_destructor (
    void *_tao_void_pointer)
{
  TimeOfDay *_tao_tmp_pointer =
    static_cast<TimeOfDay *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for TimeModule::Time.

TimeModule::Time_ptr
TAO::Objref_Traits<TimeModule::Time>::duplicate (
    TimeModule::Time_ptr p)
{
  return TimeModule::Time::_duplicate (p);
}

void
TAO::Objref_Traits<TimeModule::Time>::release (
    TimeModule::Time_ptr p)
{
  ::CORBA::release (p);
}

TimeModule::Time_ptr
TAO::Objref_Traits<TimeModule::Time>::nil (void)
{
  return TimeModule::Time::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<TimeModule::Time>::marshal (
    const TimeModule::Time_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::TimeModule::TimeOfDay
TimeModule::Time::get_gmt (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::TimeModule::TimeOfDay>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "get_gmt",
      7,
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
TimeModule::Time::Shutdown (
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
      "Shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

TimeModule::Time::Time (void)
{
}

TimeModule::Time::~Time (void)
{
}

void
TimeModule::Time::_tao_any_destructor (void *_tao_void_pointer)
{
  Time *_tao_tmp_pointer =
    static_cast<Time *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

TimeModule::Time_ptr
TimeModule::Time::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Time>::narrow (
        _tao_objref,
        "IDL:TimeModule/Time:1.0");
}

TimeModule::Time_ptr
TimeModule::Time::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Time>::unchecked_narrow (
        _tao_objref);
}

TimeModule::Time_ptr
TimeModule::Time::_nil (void)
{
  return 0;
}

TimeModule::Time_ptr
TimeModule::Time::_duplicate (Time_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
TimeModule::Time::_tao_release (Time_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
TimeModule::Time::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:TimeModule/Time:1.0"
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

const char* TimeModule::Time::_interface_repository_id (void) const
{
  return "IDL:TimeModule/Time:1.0";
}

::CORBA::Boolean
TimeModule::Time::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TimeModule_Time (
    ::CORBA::tk_objref,
    "IDL:TimeModule/Time:1.0",
    "Time");
  

namespace TimeModule
{
  ::CORBA::TypeCode_ptr const _tc_Time =
    &_tao_tc_TimeModule_Time;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TimeModule
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::TimeModule::TimeOfDay &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::TimeModule::TimeOfDay>::insert_copy (
        _tao_any,
        ::TimeModule::TimeOfDay::_tao_any_destructor,
        ::TimeModule::_tc_TimeOfDay,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    TimeModule::TimeOfDay *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::TimeModule::TimeOfDay>::insert (
      _tao_any,
      ::TimeModule::TimeOfDay::_tao_any_destructor,
      ::TimeModule::_tc_TimeOfDay,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::TimeModule::TimeOfDay *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::TimeModule::TimeOfDay *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::TimeModule::TimeOfDay *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::TimeModule::TimeOfDay>::extract (
        _tao_any,
        ::TimeModule::TimeOfDay::_tao_any_destructor,
        ::TimeModule::_tc_TimeOfDay,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const TimeModule::TimeOfDay &_tao_elem)
{
  TAO::Any_Dual_Impl_T<TimeModule::TimeOfDay>::insert_copy (
    _tao_any,
    TimeModule::TimeOfDay::_tao_any_destructor,
    TimeModule::_tc_TimeOfDay,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  TimeModule::TimeOfDay *_tao_elem)
{
  TAO::Any_Dual_Impl_T<TimeModule::TimeOfDay>::insert (
    _tao_any,
    TimeModule::TimeOfDay::_tao_any_destructor,
    TimeModule::_tc_TimeOfDay,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  TimeModule::TimeOfDay *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const TimeModule::TimeOfDay *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const TimeModule::TimeOfDay *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<TimeModule::TimeOfDay>::extract (
      _tao_any,
      TimeModule::TimeOfDay::_tao_any_destructor,
      TimeModule::_tc_TimeOfDay,
      _tao_elem);
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
  Any_Impl_T<TimeModule::Time>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TimeModule
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Time_ptr _tao_elem)
  {
    Time_ptr _tao_objptr =
      Time::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Time_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<Time>::insert (
        _tao_any,
        Time::_tao_any_destructor,
        _tc_Time,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      Time_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<Time>::extract (
          _tao_any,
          Time::_tao_any_destructor,
          _tc_Time,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    TimeModule::Time_ptr _tao_elem)
{
  TimeModule::Time_ptr _tao_objptr =
    TimeModule::Time::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    TimeModule::Time_ptr *_tao_elem)
{
  TAO::Any_Impl_T<TimeModule::Time>::insert (
      _tao_any,
      TimeModule::Time::_tao_any_destructor,
      TimeModule::_tc_Time,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    TimeModule::Time_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<TimeModule::Time>::extract (
        _tao_any,
        TimeModule::Time::_tao_any_destructor,
        TimeModule::_tc_Time,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TimeModule::TimeOfDay &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.hour) &&
    (strm << _tao_aggregate.minute) &&
    (strm << _tao_aggregate.second);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TimeModule::TimeOfDay &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.hour) &&
    (strm >> _tao_aggregate.minute) &&
    (strm >> _tao_aggregate.second);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TimeModule::Time_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TimeModule::Time_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::TimeModule::Time RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



