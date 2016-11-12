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


#include "dynanyC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Enum_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/AnyTypeCode/TypeCode_Case_T.h"
#include "tao/AnyTypeCode/Union_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "tao/AnyTypeCode/Any_Basic_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "dynanyC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/enum_typecode.cpp:29
static char const * const _tao_enumerators_DynAnyTest_EventKind[] =
  {
    "ALARM_EVENT",
    "LOG_EVENT"

  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_DynAnyTest_EventKind (
    "IDL:DynAnyTest/EventKind:1.0",
    "EventKind",
    _tao_enumerators_DynAnyTest_EventKind,
    2);


namespace DynAnyTest
{
  ::CORBA::TypeCode_ptr const _tc_EventKind =
    &_tao_tc_DynAnyTest_EventKind;
}

// TAO_IDL - Generated from
// be/be_visitor_union/union_cs.cpp:76

DynAnyTest::EventData::EventData (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = (DynAnyTest::EventKind) -1;
}

DynAnyTest::EventData::EventData (const ::DynAnyTest::EventData &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case DynAnyTest::ALARM_EVENT:
    {
      if (u.u_.ev_data_ == 0)
        {
          this->u_.ev_data_ = 0;
        }
      else
        {
          ACE_NEW (
              this->u_.ev_data_,
              CORBA::Any (*u.u_.ev_data_)
            );
        }
    }
    break;
    case DynAnyTest::LOG_EVENT:
    {
      this->u_.ev_desc_ = ::CORBA::string_dup (u.u_.ev_desc_);
    }
    break;
    default:
    break;
  }
}

DynAnyTest::EventData::~EventData (void)
{
  // Finalize.
  this->_reset ();
}

void DynAnyTest::EventData::_tao_any_destructor (void *_tao_void_pointer)
{
  EventData *tmp =
    static_cast<EventData *> (_tao_void_pointer);
  delete tmp;
}

DynAnyTest::EventData &
DynAnyTest::EventData::operator= (const ::DynAnyTest::EventData &u)
{
  if (&u == this)
    {
      return *this;
    }

  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case DynAnyTest::ALARM_EVENT:
    {
      if (u.u_.ev_data_ == 0)
        {
          this->u_.ev_data_ = 0;
        }
      else
        {
          ACE_NEW_RETURN (
              this->u_.ev_data_,
              CORBA::Any (*u.u_.ev_data_),
              *this
            );
        }
    }
    break;
    case DynAnyTest::LOG_EVENT:
    {
      this->u_.ev_desc_ = ::CORBA::string_dup (u.u_.ev_desc_);
    }
    break;
    default:
    break;
  }

  return *this;
}

/// Reset method to reset old values of a union.
void DynAnyTest::EventData::_reset (void)
{
  switch (this->disc_)
  {

    case DynAnyTest::ALARM_EVENT:
      delete this->u_.ev_data_;
      this->u_.ev_data_ = 0;

    break;

    case DynAnyTest::LOG_EVENT:
      ::CORBA::string_free (this->u_.ev_desc_);
      this->u_.ev_desc_ = 0;

    break;

    default:
    break;
  }
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/union_typecode.cpp:65

static TAO::TypeCode::Case_T<DynAnyTest::EventKind, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_DynAnyTest_EventData__0 (DynAnyTest::ALARM_EVENT, "ev_data", &CORBA::_tc_any);
static TAO::TypeCode::Case_T<DynAnyTest::EventKind, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_DynAnyTest_EventData__1 (DynAnyTest::LOG_EVENT, "ev_desc", &CORBA::_tc_string);

static TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_cases_DynAnyTest_EventData[] =
  {
    &_tao_cases_DynAnyTest_EventData__0,
    &_tao_cases_DynAnyTest_EventData__1
  };

static TAO::TypeCode::Union<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_DynAnyTest_EventData (
    "IDL:DynAnyTest/EventData:1.0",
    "EventData",
    &DynAnyTest::_tc_EventKind,
    _tao_cases_DynAnyTest_EventData,
    sizeof (_tao_cases_DynAnyTest_EventData)/sizeof (_tao_cases_DynAnyTest_EventData[0]),
    -1);


namespace DynAnyTest
{
  ::CORBA::TypeCode_ptr const _tc_EventData =
    &_tao_tc_DynAnyTest_EventData;
}

// TAO_IDL - Generated from
// be/be_visitor_enum/any_op_cs.cpp:35

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DynAnyTest
{
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::DynAnyTest::EventKind _tao_elem
    )
  {
    TAO::Any_Basic_Impl_T< ::DynAnyTest::EventKind>::insert (
        _tao_any,
        ::DynAnyTest::_tc_EventKind,
        _tao_elem
      );
  }

  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::DynAnyTest::EventKind &_tao_elem
    )
  {
    return
      TAO::Any_Basic_Impl_T< ::DynAnyTest::EventKind>::extract (
          _tao_any,
          ::DynAnyTest::_tc_EventKind,
          _tao_elem
        );
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    DynAnyTest::EventKind _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<DynAnyTest::EventKind>::insert (
      _tao_any,
      DynAnyTest::_tc_EventKind,
      _tao_elem
    );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    DynAnyTest::EventKind &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<DynAnyTest::EventKind>::extract (
        _tao_any,
        DynAnyTest::_tc_EventKind,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_union/any_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DynAnyTest
{
  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::DynAnyTest::EventData &_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::DynAnyTest::EventData>::insert_copy (
        _tao_any,
        ::DynAnyTest::EventData::_tao_any_destructor,
        ::DynAnyTest::_tc_EventData,
        _tao_elem
      );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    ::DynAnyTest::EventData *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T< ::DynAnyTest::EventData>::insert (
      _tao_any,
      ::DynAnyTest::EventData::_tao_any_destructor,
      ::DynAnyTest::_tc_EventData,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::DynAnyTest::EventData *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const ::DynAnyTest::EventData *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::DynAnyTest::EventData *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T< ::DynAnyTest::EventData>::extract (
        _tao_any,
        ::DynAnyTest::EventData::_tao_any_destructor,
        ::DynAnyTest::_tc_EventData,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const DynAnyTest::EventData &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<DynAnyTest::EventData>::insert_copy (
      _tao_any,
      DynAnyTest::EventData::_tao_any_destructor,
      DynAnyTest::_tc_EventData,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    DynAnyTest::EventData *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<DynAnyTest::EventData>::insert (
      _tao_any,
      DynAnyTest::EventData::_tao_any_destructor,
      DynAnyTest::_tc_EventData,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    DynAnyTest::EventData *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const DynAnyTest::EventData *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const DynAnyTest::EventData *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<DynAnyTest::EventData>::extract (
        _tao_any,
        DynAnyTest::EventData::_tao_any_destructor,
        DynAnyTest::_tc_EventData,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, DynAnyTest::EventKind _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, DynAnyTest::EventKind & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;

  if (_tao_success)
    {
      _tao_enumerator = static_cast<DynAnyTest::EventKind> (_tao_temp);
    }

  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_cs.cpp:74


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const DynAnyTest::EventData &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }

  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case DynAnyTest::ALARM_EVENT:
      {
        result = strm << _tao_union.ev_data ();
      }
      break;
    case DynAnyTest::LOG_EVENT:
      {
        result = strm << _tao_union.ev_desc ();
      }
      break;
    default:
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    DynAnyTest::EventData &_tao_union
  )
{
  DynAnyTest::EventKind _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }

  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case DynAnyTest::ALARM_EVENT:
      {
        CORBA::Any _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.ev_data (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    case DynAnyTest::LOG_EVENT:
      {
        ::CORBA::String_var _tao_union_tmp;
        result = strm >> _tao_union_tmp.out ();

        if (result)
          {
            _tao_union.ev_desc (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      _tao_union._default ();
      // For maximum interop compatibility, force the same value as transmitted
      _tao_union._d (_tao_discriminant);
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



