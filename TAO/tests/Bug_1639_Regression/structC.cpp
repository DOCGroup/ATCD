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


#include "structC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/AnyTypeCode/TypeCode_Case_T.h"
#include "tao/AnyTypeCode/Union_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "structC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const
    _tao_fields_StructTest_MyStruct[] =
      {
        { "MyOctet", &CORBA::_tc_octet },
        { "MyLong", &CORBA::_tc_ulong }
      };

static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_StructTest_MyStruct (
  ::CORBA::tk_struct,
  "IDL:StructTest/MyStruct:1.0",
  "MyStruct",
  _tao_fields_StructTest_MyStruct,
  2);


namespace StructTest
{
  ::CORBA::TypeCode_ptr const _tc_MyStruct =
    &_tao_tc_StructTest_MyStruct;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/structure_cs.cpp:56

void
StructTest::MyStruct::_tao_any_destructor (
    void *_tao_void_pointer)
{
  MyStruct *_tao_tmp_pointer =
    static_cast<MyStruct *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:49

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_StructTest_MyStructAlias (
    ::CORBA::tk_alias,
    "IDL:StructTest/MyStructAlias:1.0",
    "MyStructAlias",
    &StructTest::_tc_MyStruct);


namespace StructTest
{
  ::CORBA::TypeCode_ptr const _tc_MyStructAlias =
    &_tao_tc_StructTest_MyStructAlias;
}

// TAO_IDL - Generated from
// be/be_visitor_union/union_cs.cpp:76

StructTest::MyUnion::MyUnion (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = false;
}

StructTest::MyUnion::MyUnion (const ::StructTest::MyUnion &u)
{
  this->disc_ = u.disc_;

  if (this->disc_)
    {
      this->u_.MyShort_ = u.u_.MyShort_;
    }

}

StructTest::MyUnion::~MyUnion (void)
{
  // Finalize.
  this->_reset ();
}

void StructTest::MyUnion::_tao_any_destructor (void *_tao_void_pointer)
{
  MyUnion *tmp =
    static_cast<MyUnion *> (_tao_void_pointer);
  delete tmp;
}

StructTest::MyUnion &
StructTest::MyUnion::operator= (const ::StructTest::MyUnion &u)
{
  if (&u == this)
    {
      return *this;
    }

  this->_reset ();
  this->disc_ = u.disc_;


  if (this->disc_)
    {
      this->u_.MyShort_ = u.u_.MyShort_;
    }

  return *this;
}

/// Reset method to reset old values of a union.
void StructTest::MyUnion::_reset (void)
{

  if (this->disc_)
    {

    }

}

// TAO_IDL - Generated from
// be/be_visitor_typecode/union_typecode.cpp:65

static TAO::TypeCode::Case_T<CORBA::Boolean, char const *, ::CORBA::TypeCode_ptr const *> const _tao_cases_StructTest_MyUnion__0 (true, "MyShort", &CORBA::_tc_ushort);

static TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_cases_StructTest_MyUnion[] =
  {
    &_tao_cases_StructTest_MyUnion__0
  };

static TAO::TypeCode::Union<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::TypeCode::Case<char const *, ::CORBA::TypeCode_ptr const *> const * const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_StructTest_MyUnion (
    "IDL:StructTest/MyUnion:1.0",
    "MyUnion",
    &CORBA::_tc_boolean,
    _tao_cases_StructTest_MyUnion,
    sizeof (_tao_cases_StructTest_MyUnion)/sizeof (_tao_cases_StructTest_MyUnion[0]),
    -1);


namespace StructTest
{
  ::CORBA::TypeCode_ptr const _tc_MyUnion =
    &_tao_tc_StructTest_MyUnion;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:49

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_StructTest_MyUnionAlias (
    ::CORBA::tk_alias,
    "IDL:StructTest/MyUnionAlias:1.0",
    "MyUnionAlias",
    &StructTest::_tc_MyUnion);


namespace StructTest
{
  ::CORBA::TypeCode_ptr const _tc_MyUnionAlias =
    &_tao_tc_StructTest_MyUnionAlias;
}

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_cs.cpp:43



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace StructTest
{
  /// Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::StructTest::MyStruct &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::StructTest::MyStruct>::insert_copy (
        _tao_any,
        ::StructTest::MyStruct::_tao_any_destructor,
        ::StructTest::_tc_MyStruct,
        _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any, ::
    StructTest::MyStruct *_tao_elem)
{
  TAO::Any_Dual_Impl_T< ::StructTest::MyStruct>::insert (
      _tao_any,
      ::StructTest::MyStruct::_tao_any_destructor,
      ::StructTest::_tc_MyStruct,
      _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::StructTest::MyStruct *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const ::StructTest::MyStruct *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::StructTest::MyStruct *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T< ::StructTest::MyStruct>::extract (
        _tao_any,
        ::StructTest::MyStruct::_tao_any_destructor,
        ::StructTest::_tc_MyStruct,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const StructTest::MyStruct &_tao_elem)
{
  TAO::Any_Dual_Impl_T<StructTest::MyStruct>::insert_copy (
    _tao_any,
    StructTest::MyStruct::_tao_any_destructor,
    StructTest::_tc_MyStruct,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  StructTest::MyStruct *_tao_elem)
{
  TAO::Any_Dual_Impl_T<StructTest::MyStruct>::insert (
    _tao_any,
    StructTest::MyStruct::_tao_any_destructor,
    StructTest::_tc_MyStruct,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  StructTest::MyStruct *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const StructTest::MyStruct *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const StructTest::MyStruct *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<StructTest::MyStruct>::extract (
      _tao_any,
      StructTest::MyStruct::_tao_any_destructor,
      StructTest::_tc_MyStruct,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_union/any_op_cs.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace StructTest
{
  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::StructTest::MyUnion &_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::StructTest::MyUnion>::insert_copy (
        _tao_any,
        ::StructTest::MyUnion::_tao_any_destructor,
        ::StructTest::_tc_MyUnion,
        _tao_elem
      );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    ::StructTest::MyUnion *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T< ::StructTest::MyUnion>::insert (
      _tao_any,
      ::StructTest::MyUnion::_tao_any_destructor,
      ::StructTest::_tc_MyUnion,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    ::StructTest::MyUnion *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const ::StructTest::MyUnion *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const ::StructTest::MyUnion *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T< ::StructTest::MyUnion>::extract (
        _tao_any,
        ::StructTest::MyUnion::_tao_any_destructor,
        ::StructTest::_tc_MyUnion,
        _tao_elem
      );
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const StructTest::MyUnion &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<StructTest::MyUnion>::insert_copy (
      _tao_any,
      StructTest::MyUnion::_tao_any_destructor,
      StructTest::_tc_MyUnion,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    StructTest::MyUnion *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<StructTest::MyUnion>::insert (
      _tao_any,
      StructTest::MyUnion::_tao_any_destructor,
      StructTest::_tc_MyUnion,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    StructTest::MyUnion *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const StructTest::MyUnion *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const StructTest::MyUnion *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<StructTest::MyUnion>::extract (
        _tao_any,
        StructTest::MyUnion::_tao_any_destructor,
        StructTest::_tc_MyUnion,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const StructTest::MyStruct &_tao_aggregate)
{
  return
    (strm << ::ACE_OutputCDR::from_octet (_tao_aggregate.MyOctet)) &&
    (strm << _tao_aggregate.MyLong);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    StructTest::MyStruct &_tao_aggregate)
{
  return
    (strm >> ::ACE_InputCDR::to_octet (_tao_aggregate.MyOctet)) &&
    (strm >> _tao_aggregate.MyLong);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_cs.cpp:74


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const StructTest::MyUnion &_tao_union
  )
{
  ::ACE_OutputCDR::from_boolean tmp (_tao_union._d ());
  if ( !(strm << tmp) )
    {
      return false;
    }

  ::CORBA::Boolean result = true;

  if (_tao_union._d ())
    {
      result = strm << _tao_union.MyShort ();
    }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    StructTest::MyUnion &_tao_union
  )
{
  CORBA::Boolean _tao_discriminant;
  ::ACE_InputCDR::to_boolean tmp (_tao_discriminant);
  if ( !(strm >> tmp) )
    {
      return false;
    }

  ::CORBA::Boolean result = true;

  _tao_union._default ();
  _tao_union._d (_tao_discriminant);
  if (_tao_discriminant)
    {
      CORBA::UShort _tao_union_tmp;
      result = strm >> _tao_union_tmp;

      if (result)
        {
          _tao_union.MyShort (_tao_union_tmp);
          _tao_union._d (_tao_discriminant);
        }
    }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



