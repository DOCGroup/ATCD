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


#include "dataC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

#if !defined (__ACE_INLINE__)
#include "dataC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const
    _tao_fields_ECM_IDLData_Point[] =
      {
        { "x", &CORBA::_tc_double },
        { "y", &CORBA::_tc_double }
      };

static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_ECM_IDLData_Point (
  ::CORBA::tk_struct,
  "IDL:ECM_IDLData/Point:1.0",
  "Point",
  _tao_fields_ECM_IDLData_Point,
  2);


namespace ECM_IDLData
{
  ::CORBA::TypeCode_ptr const _tc_Point =
    &_tao_tc_ECM_IDLData_Point;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
ECM_IDLData::Point::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Point *_tao_tmp_pointer =
    static_cast<Point *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_ECM_IDLDATA_VECTOR_CS_)
#define _ECM_IDLDATA_VECTOR_CS_

ECM_IDLData::Vector::Vector (void)
{}

ECM_IDLData::Vector::Vector (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        Point
      > (max)
{}

ECM_IDLData::Vector::Vector (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ECM_IDLData::Point * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        Point
      >
    (max, length, buffer, release)
{}

ECM_IDLData::Vector::Vector (
    const Vector &seq)
  : ::TAO::unbounded_value_sequence<
        Point
      > (seq)
{}

ECM_IDLData::Vector::~Vector (void)
{}

void ECM_IDLData::Vector::_tao_any_destructor (
    void * _tao_void_pointer)
{
  Vector * _tao_tmp_pointer =
    static_cast<Vector *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:49



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:461


#ifndef _TAO_TYPECODE_ECM_IDLData_Vector_GUARD
#define _TAO_TYPECODE_ECM_IDLData_Vector_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        ECM_IDLData_Vector_0 (
          ::CORBA::tk_sequence,
          &ECM_IDLData::_tc_Point,
          0U);

      ::CORBA::TypeCode_ptr const tc_ECM_IDLData_Vector_0 =
        &ECM_IDLData_Vector_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_ECM_IDLData_Vector_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_ECM_IDLData_Vector (
    ::CORBA::tk_alias,
    "IDL:ECM_IDLData/Vector:1.0",
    "Vector",
    &TAO::TypeCode::tc_ECM_IDLData_Vector_0);


namespace ECM_IDLData
{
  ::CORBA::TypeCode_ptr const _tc_Vector =
    &_tao_tc_ECM_IDLData_Vector;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:461

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const
    _tao_fields_ECM_IDLData_Info[] =
      {
        { "mobile_name", &CORBA::_tc_string },
        { "mobile_speed", &CORBA::_tc_double },
        { "trajectory", &ECM_IDLData::_tc_Vector }
      };

static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_ECM_IDLData_Info (
  ::CORBA::tk_struct,
  "IDL:ECM_IDLData/Info:1.0",
  "Info",
  _tao_fields_ECM_IDLData_Info,
  3);


namespace ECM_IDLData
{
  ::CORBA::TypeCode_ptr const _tc_Info =
    &_tao_tc_ECM_IDLData_Info;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
ECM_IDLData::Info::_tao_any_destructor (
    void *_tao_void_pointer)
{
  Info *_tao_tmp_pointer =
    static_cast<Info *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ECM_IDLData
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::ECM_IDLData::Point &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::ECM_IDLData::Point>::insert_copy (
        _tao_any,
        ::ECM_IDLData::Point::_tao_any_destructor,
        ::ECM_IDLData::_tc_Point,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    ECM_IDLData::Point *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::ECM_IDLData::Point>::insert (
      _tao_any,
      ::ECM_IDLData::Point::_tao_any_destructor,
      ::ECM_IDLData::_tc_Point,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::ECM_IDLData::Point *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::ECM_IDLData::Point *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::ECM_IDLData::Point *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::ECM_IDLData::Point>::extract (
        _tao_any,
        ::ECM_IDLData::Point::_tao_any_destructor,
        ::ECM_IDLData::_tc_Point,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const ECM_IDLData::Point &_tao_elem)
{
  TAO::Any_Dual_Impl_T<ECM_IDLData::Point>::insert_copy (
    _tao_any,
    ECM_IDLData::Point::_tao_any_destructor,
    ECM_IDLData::_tc_Point,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  ECM_IDLData::Point *_tao_elem)
{
  TAO::Any_Dual_Impl_T<ECM_IDLData::Point>::insert (
    _tao_any,
    ECM_IDLData::Point::_tao_any_destructor,
    ECM_IDLData::_tc_Point,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  ECM_IDLData::Point *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ECM_IDLData::Point *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const ECM_IDLData::Point *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<ECM_IDLData::Point>::extract (
      _tao_any,
      ECM_IDLData::Point::_tao_any_destructor,
      ECM_IDLData::_tc_Point,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_cs.cpp:45


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ECM_IDLData
{

  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::ECM_IDLData::Vector &_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::ECM_IDLData::Vector>::insert_copy (
        _tao_any,
        ::ECM_IDLData::Vector::_tao_any_destructor,
        ::ECM_IDLData::_tc_Vector,
        _tao_elem
      );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    ::ECM_IDLData::Vector *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::ECM_IDLData::Vector>::insert (
      _tao_any,
      ::ECM_IDLData::Vector::_tao_any_destructor,
      ::ECM_IDLData::_tc_Vector,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::ECM_IDLData::Vector *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::ECM_IDLData::Vector *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::ECM_IDLData::Vector *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::ECM_IDLData::Vector>::extract (
        _tao_any,
        ::ECM_IDLData::Vector::_tao_any_destructor,
        ::ECM_IDLData::_tc_Vector,
        _tao_elem
      );
}
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const ECM_IDLData::Vector &_tao_elem)
{
  TAO::Any_Dual_Impl_T<ECM_IDLData::Vector>::insert_copy (
      _tao_any,
      ECM_IDLData::Vector::_tao_any_destructor,
      ECM_IDLData::_tc_Vector,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    ECM_IDLData::Vector *_tao_elem)
{
  TAO::Any_Dual_Impl_T<ECM_IDLData::Vector>::insert (
      _tao_any,
      ECM_IDLData::Vector::_tao_any_destructor,
      ECM_IDLData::_tc_Vector,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ECM_IDLData::Vector *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ECM_IDLData::Vector *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ECM_IDLData::Vector *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<ECM_IDLData::Vector>::extract (
        _tao_any,
        ECM_IDLData::Vector::_tao_any_destructor,
        ECM_IDLData::_tc_Vector,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace ECM_IDLData
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::ECM_IDLData::Info &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::ECM_IDLData::Info>::insert_copy (
        _tao_any,
        ::ECM_IDLData::Info::_tao_any_destructor,
        ::ECM_IDLData::_tc_Info,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    ECM_IDLData::Info *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::ECM_IDLData::Info>::insert (
      _tao_any,
      ::ECM_IDLData::Info::_tao_any_destructor,
      ::ECM_IDLData::_tc_Info,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::ECM_IDLData::Info *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::ECM_IDLData::Info *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::ECM_IDLData::Info *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::ECM_IDLData::Info>::extract (
        _tao_any,
        ::ECM_IDLData::Info::_tao_any_destructor,
        ::ECM_IDLData::_tc_Info,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const ECM_IDLData::Info &_tao_elem)
{
  TAO::Any_Dual_Impl_T<ECM_IDLData::Info>::insert_copy (
    _tao_any,
    ECM_IDLData::Info::_tao_any_destructor,
    ECM_IDLData::_tc_Info,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  ECM_IDLData::Info *_tao_elem)
{
  TAO::Any_Dual_Impl_T<ECM_IDLData::Info>::insert (
    _tao_any,
    ECM_IDLData::Info::_tao_any_destructor,
    ECM_IDLData::_tc_Info,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  ECM_IDLData::Info *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ECM_IDLData::Info *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const ECM_IDLData::Info *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<ECM_IDLData::Info>::extract (
      _tao_any,
      ECM_IDLData::Info::_tao_any_destructor,
      ECM_IDLData::_tc_Info,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ECM_IDLData::Point &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.x) &&
    (strm << _tao_aggregate.y);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ECM_IDLData::Point &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.x) &&
    (strm >> _tao_aggregate.y);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_ECM_IDLData_Vector_CPP_
#define _TAO_CDR_OP_ECM_IDLData_Vector_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ECM_IDLData::Vector &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ECM_IDLData::Vector &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_ECM_IDLData_Vector_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ECM_IDLData::Info &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.mobile_name.in ()) &&
    (strm << _tao_aggregate.mobile_speed) &&
    (strm << _tao_aggregate.trajectory);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ECM_IDLData::Info &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.mobile_name.out ()) &&
    (strm >> _tao_aggregate.mobile_speed) &&
    (strm >> _tao_aggregate.trajectory);
}

TAO_END_VERSIONED_NAMESPACE_DECL



