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


#include "MIF_SchedulingC.h"
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
#include "MIF_SchedulingC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_MIF_Scheduling_SchedulingParameter[] =
      {
        { "importance", &CORBA::_tc_long }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_MIF_Scheduling_SchedulingParameter (
  ::CORBA::tk_struct,
  "IDL:MIF_Scheduling/SchedulingParameter:1.0",
  "SchedulingParameter",
  _tao_fields_MIF_Scheduling_SchedulingParameter,
  1);


namespace MIF_Scheduling
{
  ::CORBA::TypeCode_ptr const _tc_SchedulingParameter =
    &_tao_tc_MIF_Scheduling_SchedulingParameter;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
MIF_Scheduling::SchedulingParameter::_tao_any_destructor (
    void *_tao_void_pointer)
{
  SchedulingParameter *_tao_tmp_pointer =
    static_cast<SchedulingParameter *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for MIF_Scheduling::SchedulingParameterPolicy.

MIF_Scheduling::SchedulingParameterPolicy_ptr
TAO::Objref_Traits<MIF_Scheduling::SchedulingParameterPolicy>::duplicate (
    MIF_Scheduling::SchedulingParameterPolicy_ptr p)
{
  return MIF_Scheduling::SchedulingParameterPolicy::_duplicate (p);
}

void
TAO::Objref_Traits<MIF_Scheduling::SchedulingParameterPolicy>::release (
    MIF_Scheduling::SchedulingParameterPolicy_ptr p)
{
  ::CORBA::release (p);
}

MIF_Scheduling::SchedulingParameterPolicy_ptr
TAO::Objref_Traits<MIF_Scheduling::SchedulingParameterPolicy>::nil (void)
{
  return MIF_Scheduling::SchedulingParameterPolicy::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MIF_Scheduling::SchedulingParameterPolicy>::marshal (
    const MIF_Scheduling::SchedulingParameterPolicy_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MIF_Scheduling::SchedulingParameterPolicy::SchedulingParameterPolicy (void)
{}

MIF_Scheduling::SchedulingParameterPolicy::~SchedulingParameterPolicy (void)
{
}

void
MIF_Scheduling::SchedulingParameterPolicy::_tao_any_destructor (void *_tao_void_pointer)
{
  SchedulingParameterPolicy *_tao_tmp_pointer =
    static_cast<SchedulingParameterPolicy *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

MIF_Scheduling::SchedulingParameterPolicy_ptr
MIF_Scheduling::SchedulingParameterPolicy::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return SchedulingParameterPolicy::_duplicate (
      dynamic_cast<SchedulingParameterPolicy_ptr> (_tao_objref)
    );
}

MIF_Scheduling::SchedulingParameterPolicy_ptr
MIF_Scheduling::SchedulingParameterPolicy::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return SchedulingParameterPolicy::_duplicate (
      dynamic_cast<SchedulingParameterPolicy_ptr> (_tao_objref)
    );
}

MIF_Scheduling::SchedulingParameterPolicy_ptr
MIF_Scheduling::SchedulingParameterPolicy::_nil (void)
{
  return 0;
}

MIF_Scheduling::SchedulingParameterPolicy_ptr
MIF_Scheduling::SchedulingParameterPolicy::_duplicate (SchedulingParameterPolicy_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MIF_Scheduling::SchedulingParameterPolicy::_tao_release (SchedulingParameterPolicy_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MIF_Scheduling::SchedulingParameterPolicy::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MIF_Scheduling/SchedulingParameterPolicy:1.0"
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

const char* MIF_Scheduling::SchedulingParameterPolicy::_interface_repository_id (void) const
{
  return "IDL:MIF_Scheduling/SchedulingParameterPolicy:1.0";
}

::CORBA::Boolean
MIF_Scheduling::SchedulingParameterPolicy::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_MIF_Scheduling_SchedulingParameterPolicy (
    ::CORBA::tk_local_interface,
    "IDL:MIF_Scheduling/SchedulingParameterPolicy:1.0",
    "SchedulingParameterPolicy");
  

namespace MIF_Scheduling
{
  ::CORBA::TypeCode_ptr const _tc_SchedulingParameterPolicy =
    &_tao_tc_MIF_Scheduling_SchedulingParameterPolicy;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for MIF_Scheduling::Scheduler.

MIF_Scheduling::Scheduler_ptr
TAO::Objref_Traits<MIF_Scheduling::Scheduler>::duplicate (
    MIF_Scheduling::Scheduler_ptr p)
{
  return MIF_Scheduling::Scheduler::_duplicate (p);
}

void
TAO::Objref_Traits<MIF_Scheduling::Scheduler>::release (
    MIF_Scheduling::Scheduler_ptr p)
{
  ::CORBA::release (p);
}

MIF_Scheduling::Scheduler_ptr
TAO::Objref_Traits<MIF_Scheduling::Scheduler>::nil (void)
{
  return MIF_Scheduling::Scheduler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MIF_Scheduling::Scheduler>::marshal (
    const MIF_Scheduling::Scheduler_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

MIF_Scheduling::Scheduler::Scheduler (void)
{}

MIF_Scheduling::Scheduler::~Scheduler (void)
{
}

void
MIF_Scheduling::Scheduler::_tao_any_destructor (void *_tao_void_pointer)
{
  Scheduler *_tao_tmp_pointer =
    static_cast<Scheduler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

MIF_Scheduling::Scheduler_ptr
MIF_Scheduling::Scheduler::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Scheduler::_duplicate (
      dynamic_cast<Scheduler_ptr> (_tao_objref)
    );
}

MIF_Scheduling::Scheduler_ptr
MIF_Scheduling::Scheduler::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Scheduler::_duplicate (
      dynamic_cast<Scheduler_ptr> (_tao_objref)
    );
}

MIF_Scheduling::Scheduler_ptr
MIF_Scheduling::Scheduler::_nil (void)
{
  return 0;
}

MIF_Scheduling::Scheduler_ptr
MIF_Scheduling::Scheduler::_duplicate (Scheduler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MIF_Scheduling::Scheduler::_tao_release (Scheduler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MIF_Scheduling::Scheduler::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:RTScheduling/Scheduler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:MIF_Scheduling/Scheduler:1.0"
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

const char* MIF_Scheduling::Scheduler::_interface_repository_id (void) const
{
  return "IDL:MIF_Scheduling/Scheduler:1.0";
}

::CORBA::Boolean
MIF_Scheduling::Scheduler::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_MIF_Scheduling_Scheduler (
    ::CORBA::tk_local_interface,
    "IDL:MIF_Scheduling/Scheduler:1.0",
    "Scheduler");
  

namespace MIF_Scheduling
{
  ::CORBA::TypeCode_ptr const _tc_Scheduler =
    &_tao_tc_MIF_Scheduling_Scheduler;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace MIF_Scheduling
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::MIF_Scheduling::SchedulingParameter &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::MIF_Scheduling::SchedulingParameter>::insert_copy (
        _tao_any,
        ::MIF_Scheduling::SchedulingParameter::_tao_any_destructor,
        ::MIF_Scheduling::_tc_SchedulingParameter,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    MIF_Scheduling::SchedulingParameter *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::MIF_Scheduling::SchedulingParameter>::insert (
      _tao_any,
      ::MIF_Scheduling::SchedulingParameter::_tao_any_destructor,
      ::MIF_Scheduling::_tc_SchedulingParameter,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::MIF_Scheduling::SchedulingParameter *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::MIF_Scheduling::SchedulingParameter *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::MIF_Scheduling::SchedulingParameter *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::MIF_Scheduling::SchedulingParameter>::extract (
        _tao_any,
        ::MIF_Scheduling::SchedulingParameter::_tao_any_destructor,
        ::MIF_Scheduling::_tc_SchedulingParameter,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const MIF_Scheduling::SchedulingParameter &_tao_elem)
{
  TAO::Any_Dual_Impl_T<MIF_Scheduling::SchedulingParameter>::insert_copy (
    _tao_any,
    MIF_Scheduling::SchedulingParameter::_tao_any_destructor,
    MIF_Scheduling::_tc_SchedulingParameter,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  MIF_Scheduling::SchedulingParameter *_tao_elem)
{
  TAO::Any_Dual_Impl_T<MIF_Scheduling::SchedulingParameter>::insert (
    _tao_any,
    MIF_Scheduling::SchedulingParameter::_tao_any_destructor,
    MIF_Scheduling::_tc_SchedulingParameter,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  MIF_Scheduling::SchedulingParameter *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const MIF_Scheduling::SchedulingParameter *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const MIF_Scheduling::SchedulingParameter *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<MIF_Scheduling::SchedulingParameter>::extract (
      _tao_any,
      MIF_Scheduling::SchedulingParameter::_tao_any_destructor,
      MIF_Scheduling::_tc_SchedulingParameter,
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
  Any_Impl_T<MIF_Scheduling::SchedulingParameterPolicy>::to_object (
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
  Any_Impl_T<MIF_Scheduling::SchedulingParameterPolicy>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<MIF_Scheduling::SchedulingParameterPolicy>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace MIF_Scheduling
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      SchedulingParameterPolicy_ptr _tao_elem)
  {
    SchedulingParameterPolicy_ptr _tao_objptr =
      SchedulingParameterPolicy::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      SchedulingParameterPolicy_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<SchedulingParameterPolicy>::insert (
        _tao_any,
        SchedulingParameterPolicy::_tao_any_destructor,
        _tc_SchedulingParameterPolicy,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      SchedulingParameterPolicy_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<SchedulingParameterPolicy>::extract (
          _tao_any,
          SchedulingParameterPolicy::_tao_any_destructor,
          _tc_SchedulingParameterPolicy,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    MIF_Scheduling::SchedulingParameterPolicy_ptr _tao_elem)
{
  MIF_Scheduling::SchedulingParameterPolicy_ptr _tao_objptr =
    MIF_Scheduling::SchedulingParameterPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    MIF_Scheduling::SchedulingParameterPolicy_ptr *_tao_elem)
{
  TAO::Any_Impl_T<MIF_Scheduling::SchedulingParameterPolicy>::insert (
      _tao_any,
      MIF_Scheduling::SchedulingParameterPolicy::_tao_any_destructor,
      MIF_Scheduling::_tc_SchedulingParameterPolicy,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    MIF_Scheduling::SchedulingParameterPolicy_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<MIF_Scheduling::SchedulingParameterPolicy>::extract (
        _tao_any,
        MIF_Scheduling::SchedulingParameterPolicy::_tao_any_destructor,
        MIF_Scheduling::_tc_SchedulingParameterPolicy,
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
  Any_Impl_T<MIF_Scheduling::Scheduler>::to_object (
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
  Any_Impl_T<MIF_Scheduling::Scheduler>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<MIF_Scheduling::Scheduler>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace MIF_Scheduling
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Scheduler_ptr _tao_elem)
  {
    Scheduler_ptr _tao_objptr =
      Scheduler::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Scheduler_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<Scheduler>::insert (
        _tao_any,
        Scheduler::_tao_any_destructor,
        _tc_Scheduler,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      Scheduler_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<Scheduler>::extract (
          _tao_any,
          Scheduler::_tao_any_destructor,
          _tc_Scheduler,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    MIF_Scheduling::Scheduler_ptr _tao_elem)
{
  MIF_Scheduling::Scheduler_ptr _tao_objptr =
    MIF_Scheduling::Scheduler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    MIF_Scheduling::Scheduler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<MIF_Scheduling::Scheduler>::insert (
      _tao_any,
      MIF_Scheduling::Scheduler::_tao_any_destructor,
      MIF_Scheduling::_tc_Scheduler,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    MIF_Scheduling::Scheduler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<MIF_Scheduling::Scheduler>::extract (
        _tao_any,
        MIF_Scheduling::Scheduler::_tao_any_destructor,
        MIF_Scheduling::_tc_Scheduler,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const MIF_Scheduling::SchedulingParameter &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.importance);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    MIF_Scheduling::SchedulingParameter &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.importance);
}

TAO_END_VERSIONED_NAMESPACE_DECL



