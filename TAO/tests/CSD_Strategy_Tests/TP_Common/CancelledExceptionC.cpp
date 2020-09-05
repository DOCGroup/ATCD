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


#include "CancelledExceptionC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/SystemException.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "CancelledExceptionC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_exception/exception_cs.cpp:98

CancelledException::CancelledException (void)
  : ::CORBA::UserException (
        "IDL:CancelledException:1.0",
        "CancelledException"
      )
{
}

CancelledException::~CancelledException (void)
{
}

CancelledException::CancelledException (const ::CancelledException &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

CancelledException&
CancelledException::operator= (const ::CancelledException &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

void CancelledException::_tao_any_destructor (void *_tao_void_pointer)
{
  CancelledException *_tao_tmp_pointer =
    static_cast<CancelledException *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

CancelledException *
CancelledException::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<CancelledException *> (_tao_excp);
}

const CancelledException *
CancelledException::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const CancelledException *> (_tao_excp);
}

::CORBA::Exception *CancelledException::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::CancelledException, 0);
  return retval;
}

::CORBA::Exception *
CancelledException::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::CancelledException (*this),
      0
    );
  return result;
}

void CancelledException::_raise (void) const
{
  throw *this;
}

void CancelledException::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void CancelledException::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr CancelledException::_tao_type (void) const
{
  return ::_tc_CancelledException;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const * const
    _tao_fields_CancelledException = 0;

static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_CancelledException (
  ::CORBA::tk_except,
  "IDL:CancelledException:1.0",
  "CancelledException",
  _tao_fields_CancelledException,
  0);

::CORBA::TypeCode_ptr const _tc_CancelledException =
  &_tao_tc_CancelledException;

// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<CancelledException>::demarshal_value (TAO_InputCDR & cdr)
  {
    ::CORBA::String_var id;

    if (!(cdr >> id.out ()))
      {
        return false;
      }

    try
      {
        this->value_->_tao_decode (cdr);
      }
    catch (const ::CORBA::Exception &)
      {
        return false;
      }

    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const CancelledException &_tao_elem)
{
  TAO::Any_Dual_Impl_T<CancelledException>::insert_copy (
      _tao_any,
      CancelledException::_tao_any_destructor,
      _tc_CancelledException,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    CancelledException *_tao_elem)
{
  TAO::Any_Dual_Impl_T<CancelledException>::insert (
      _tao_any,
      CancelledException::_tao_any_destructor,
      _tc_CancelledException,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    CancelledException *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const CancelledException *&> (
      _tao_elem);
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const CancelledException *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CancelledException>::extract (
        _tao_any,
        CancelledException::_tao_any_destructor,
        _tc_CancelledException,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CancelledException &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    CancelledException&
  )
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



