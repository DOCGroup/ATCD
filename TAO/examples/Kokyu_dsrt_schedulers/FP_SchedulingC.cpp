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


#include "FP_SchedulingC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "FP_SchedulingC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const
    _tao_fields_FP_Scheduling_SegmentSchedulingParameter[] =
      {
        { "base_priority", &RTCORBA::_tc_Priority }
      };

static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_FP_Scheduling_SegmentSchedulingParameter (
  ::CORBA::tk_struct,
  "IDL:FP_Scheduling/SegmentSchedulingParameter:1.0",
  "SegmentSchedulingParameter",
  _tao_fields_FP_Scheduling_SegmentSchedulingParameter,
  1);


namespace FP_Scheduling
{
  ::CORBA::TypeCode_ptr const _tc_SegmentSchedulingParameter =
    &_tao_tc_FP_Scheduling_SegmentSchedulingParameter;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
FP_Scheduling::SegmentSchedulingParameter::_tao_any_destructor (
    void *_tao_void_pointer)
{
  SegmentSchedulingParameter *_tao_tmp_pointer =
    static_cast<SegmentSchedulingParameter *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for FP_Scheduling::SegmentSchedulingParameterPolicy.

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
TAO::Objref_Traits<FP_Scheduling::SegmentSchedulingParameterPolicy>::duplicate (
    FP_Scheduling::SegmentSchedulingParameterPolicy_ptr p)
{
  return FP_Scheduling::SegmentSchedulingParameterPolicy::_duplicate (p);
}

void
TAO::Objref_Traits<FP_Scheduling::SegmentSchedulingParameterPolicy>::release (
    FP_Scheduling::SegmentSchedulingParameterPolicy_ptr p)
{
  ::CORBA::release (p);
}

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
TAO::Objref_Traits<FP_Scheduling::SegmentSchedulingParameterPolicy>::nil (void)
{
  return FP_Scheduling::SegmentSchedulingParameterPolicy::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<FP_Scheduling::SegmentSchedulingParameterPolicy>::marshal (
    const FP_Scheduling::SegmentSchedulingParameterPolicy_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

FP_Scheduling::SegmentSchedulingParameterPolicy::SegmentSchedulingParameterPolicy (void)
{}

FP_Scheduling::SegmentSchedulingParameterPolicy::~SegmentSchedulingParameterPolicy (void)
{
}

void
FP_Scheduling::SegmentSchedulingParameterPolicy::_tao_any_destructor (void *_tao_void_pointer)
{
  SegmentSchedulingParameterPolicy *_tao_tmp_pointer =
    static_cast<SegmentSchedulingParameterPolicy *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
FP_Scheduling::SegmentSchedulingParameterPolicy::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return SegmentSchedulingParameterPolicy::_duplicate (
      dynamic_cast<SegmentSchedulingParameterPolicy_ptr> (_tao_objref)
    );
}

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
FP_Scheduling::SegmentSchedulingParameterPolicy::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return SegmentSchedulingParameterPolicy::_duplicate (
      dynamic_cast<SegmentSchedulingParameterPolicy_ptr> (_tao_objref)
    );
}

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
FP_Scheduling::SegmentSchedulingParameterPolicy::_nil (void)
{
  return 0;
}

FP_Scheduling::SegmentSchedulingParameterPolicy_ptr
FP_Scheduling::SegmentSchedulingParameterPolicy::_duplicate (SegmentSchedulingParameterPolicy_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
FP_Scheduling::SegmentSchedulingParameterPolicy::_tao_release (SegmentSchedulingParameterPolicy_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
FP_Scheduling::SegmentSchedulingParameterPolicy::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:FP_Scheduling/SegmentSchedulingParameterPolicy:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
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
      return false;
    }
}

const char* FP_Scheduling::SegmentSchedulingParameterPolicy::_interface_repository_id (void) const
{
  return "IDL:FP_Scheduling/SegmentSchedulingParameterPolicy:1.0";
}

::CORBA::Boolean
FP_Scheduling::SegmentSchedulingParameterPolicy::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_FP_Scheduling_SegmentSchedulingParameterPolicy (
    ::CORBA::tk_local_interface,
    "IDL:FP_Scheduling/SegmentSchedulingParameterPolicy:1.0",
    "SegmentSchedulingParameterPolicy");


namespace FP_Scheduling
{
  ::CORBA::TypeCode_ptr const _tc_SegmentSchedulingParameterPolicy =
    &_tao_tc_FP_Scheduling_SegmentSchedulingParameterPolicy;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for FP_Scheduling::FP_Scheduler.

FP_Scheduling::FP_Scheduler_ptr
TAO::Objref_Traits<FP_Scheduling::FP_Scheduler>::duplicate (
    FP_Scheduling::FP_Scheduler_ptr p)
{
  return FP_Scheduling::FP_Scheduler::_duplicate (p);
}

void
TAO::Objref_Traits<FP_Scheduling::FP_Scheduler>::release (
    FP_Scheduling::FP_Scheduler_ptr p)
{
  ::CORBA::release (p);
}

FP_Scheduling::FP_Scheduler_ptr
TAO::Objref_Traits<FP_Scheduling::FP_Scheduler>::nil (void)
{
  return FP_Scheduling::FP_Scheduler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<FP_Scheduling::FP_Scheduler>::marshal (
    const FP_Scheduling::FP_Scheduler_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

FP_Scheduling::FP_Scheduler::FP_Scheduler (void)
{}

FP_Scheduling::FP_Scheduler::~FP_Scheduler (void)
{
}

void
FP_Scheduling::FP_Scheduler::_tao_any_destructor (void *_tao_void_pointer)
{
  FP_Scheduler *_tao_tmp_pointer =
    static_cast<FP_Scheduler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

FP_Scheduling::FP_Scheduler_ptr
FP_Scheduling::FP_Scheduler::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FP_Scheduler::_duplicate (
      dynamic_cast<FP_Scheduler_ptr> (_tao_objref)
    );
}

FP_Scheduling::FP_Scheduler_ptr
FP_Scheduling::FP_Scheduler::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return FP_Scheduler::_duplicate (
      dynamic_cast<FP_Scheduler_ptr> (_tao_objref)
    );
}

FP_Scheduling::FP_Scheduler_ptr
FP_Scheduling::FP_Scheduler::_nil (void)
{
  return 0;
}

FP_Scheduling::FP_Scheduler_ptr
FP_Scheduling::FP_Scheduler::_duplicate (FP_Scheduler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
FP_Scheduling::FP_Scheduler::_tao_release (FP_Scheduler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
FP_Scheduling::FP_Scheduler::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:RTScheduling/Scheduler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:FP_Scheduling/FP_Scheduler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
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
      return false;
    }
}

const char* FP_Scheduling::FP_Scheduler::_interface_repository_id (void) const
{
  return "IDL:FP_Scheduling/FP_Scheduler:1.0";
}

::CORBA::Boolean
FP_Scheduling::FP_Scheduler::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_FP_Scheduling_FP_Scheduler (
    ::CORBA::tk_local_interface,
    "IDL:FP_Scheduling/FP_Scheduler:1.0",
    "FP_Scheduler");


namespace FP_Scheduling
{
  ::CORBA::TypeCode_ptr const _tc_FP_Scheduler =
    &_tao_tc_FP_Scheduling_FP_Scheduler;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FP_Scheduling
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::FP_Scheduling::SegmentSchedulingParameter &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::FP_Scheduling::SegmentSchedulingParameter>::insert_copy (
        _tao_any,
        ::FP_Scheduling::SegmentSchedulingParameter::_tao_any_destructor,
        ::FP_Scheduling::_tc_SegmentSchedulingParameter,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    FP_Scheduling::SegmentSchedulingParameter *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::FP_Scheduling::SegmentSchedulingParameter>::insert (
      _tao_any,
      ::FP_Scheduling::SegmentSchedulingParameter::_tao_any_destructor,
      ::FP_Scheduling::_tc_SegmentSchedulingParameter,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::FP_Scheduling::SegmentSchedulingParameter *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::FP_Scheduling::SegmentSchedulingParameter *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::FP_Scheduling::SegmentSchedulingParameter *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::FP_Scheduling::SegmentSchedulingParameter>::extract (
        _tao_any,
        ::FP_Scheduling::SegmentSchedulingParameter::_tao_any_destructor,
        ::FP_Scheduling::_tc_SegmentSchedulingParameter,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const FP_Scheduling::SegmentSchedulingParameter &_tao_elem)
{
  TAO::Any_Dual_Impl_T<FP_Scheduling::SegmentSchedulingParameter>::insert_copy (
    _tao_any,
    FP_Scheduling::SegmentSchedulingParameter::_tao_any_destructor,
    FP_Scheduling::_tc_SegmentSchedulingParameter,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  FP_Scheduling::SegmentSchedulingParameter *_tao_elem)
{
  TAO::Any_Dual_Impl_T<FP_Scheduling::SegmentSchedulingParameter>::insert (
    _tao_any,
    FP_Scheduling::SegmentSchedulingParameter::_tao_any_destructor,
    FP_Scheduling::_tc_SegmentSchedulingParameter,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  FP_Scheduling::SegmentSchedulingParameter *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const FP_Scheduling::SegmentSchedulingParameter *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const FP_Scheduling::SegmentSchedulingParameter *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<FP_Scheduling::SegmentSchedulingParameter>::extract (
      _tao_any,
      FP_Scheduling::SegmentSchedulingParameter::_tao_any_destructor,
      FP_Scheduling::_tc_SegmentSchedulingParameter,
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
  Any_Impl_T<FP_Scheduling::SegmentSchedulingParameterPolicy>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<FP_Scheduling::SegmentSchedulingParameterPolicy>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<FP_Scheduling::SegmentSchedulingParameterPolicy>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FP_Scheduling
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      SegmentSchedulingParameterPolicy_ptr _tao_elem)
  {
    SegmentSchedulingParameterPolicy_ptr _tao_objptr =
      SegmentSchedulingParameterPolicy::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      SegmentSchedulingParameterPolicy_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<SegmentSchedulingParameterPolicy>::insert (
        _tao_any,
        SegmentSchedulingParameterPolicy::_tao_any_destructor,
        _tc_SegmentSchedulingParameterPolicy,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      SegmentSchedulingParameterPolicy_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<SegmentSchedulingParameterPolicy>::extract (
          _tao_any,
          SegmentSchedulingParameterPolicy::_tao_any_destructor,
          _tc_SegmentSchedulingParameterPolicy,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    FP_Scheduling::SegmentSchedulingParameterPolicy_ptr _tao_elem)
{
  FP_Scheduling::SegmentSchedulingParameterPolicy_ptr _tao_objptr =
    FP_Scheduling::SegmentSchedulingParameterPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    FP_Scheduling::SegmentSchedulingParameterPolicy_ptr *_tao_elem)
{
  TAO::Any_Impl_T<FP_Scheduling::SegmentSchedulingParameterPolicy>::insert (
      _tao_any,
      FP_Scheduling::SegmentSchedulingParameterPolicy::_tao_any_destructor,
      FP_Scheduling::_tc_SegmentSchedulingParameterPolicy,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    FP_Scheduling::SegmentSchedulingParameterPolicy_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<FP_Scheduling::SegmentSchedulingParameterPolicy>::extract (
        _tao_any,
        FP_Scheduling::SegmentSchedulingParameterPolicy::_tao_any_destructor,
        FP_Scheduling::_tc_SegmentSchedulingParameterPolicy,
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
  Any_Impl_T<FP_Scheduling::FP_Scheduler>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<FP_Scheduling::FP_Scheduler>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<FP_Scheduling::FP_Scheduler>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FP_Scheduling
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      FP_Scheduler_ptr _tao_elem)
  {
    FP_Scheduler_ptr _tao_objptr =
      FP_Scheduler::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      FP_Scheduler_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<FP_Scheduler>::insert (
        _tao_any,
        FP_Scheduler::_tao_any_destructor,
        _tc_FP_Scheduler,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      FP_Scheduler_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<FP_Scheduler>::extract (
          _tao_any,
          FP_Scheduler::_tao_any_destructor,
          _tc_FP_Scheduler,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    FP_Scheduling::FP_Scheduler_ptr _tao_elem)
{
  FP_Scheduling::FP_Scheduler_ptr _tao_objptr =
    FP_Scheduling::FP_Scheduler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    FP_Scheduling::FP_Scheduler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<FP_Scheduling::FP_Scheduler>::insert (
      _tao_any,
      FP_Scheduling::FP_Scheduler::_tao_any_destructor,
      FP_Scheduling::_tc_FP_Scheduler,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    FP_Scheduling::FP_Scheduler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<FP_Scheduling::FP_Scheduler>::extract (
        _tao_any,
        FP_Scheduling::FP_Scheduler::_tao_any_destructor,
        FP_Scheduling::_tc_FP_Scheduler,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const FP_Scheduling::SegmentSchedulingParameter &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.base_priority);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    FP_Scheduling::SegmentSchedulingParameter &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.base_priority);
}

TAO_END_VERSIONED_NAMESPACE_DECL



