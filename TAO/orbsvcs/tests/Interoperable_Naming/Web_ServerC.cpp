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


#include "Web_ServerC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "Web_ServerC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Web_Server::Iterator_Factory.

Web_Server::Iterator_Factory_ptr
TAO::Objref_Traits<Web_Server::Iterator_Factory>::duplicate (
    Web_Server::Iterator_Factory_ptr p)
{
  return Web_Server::Iterator_Factory::_duplicate (p);
}

void
TAO::Objref_Traits<Web_Server::Iterator_Factory>::release (
    Web_Server::Iterator_Factory_ptr p)
{
  ::CORBA::release (p);
}

Web_Server::Iterator_Factory_ptr
TAO::Objref_Traits<Web_Server::Iterator_Factory>::nil (void)
{
  return Web_Server::Iterator_Factory::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Web_Server::Iterator_Factory>::marshal (
    const Web_Server::Iterator_Factory_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Web_Server::Iterator_Factory::Iterator_Factory (void)
{
}

Web_Server::Iterator_Factory::~Iterator_Factory (void)
{
}

void
Web_Server::Iterator_Factory::_tao_any_destructor (void *_tao_void_pointer)
{
  Iterator_Factory *_tao_tmp_pointer =
    static_cast<Iterator_Factory *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Web_Server::Iterator_Factory_ptr
Web_Server::Iterator_Factory::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Iterator_Factory>::narrow (
        _tao_objref,
        "IDL:Web_Server/Iterator_Factory:1.0");
}

Web_Server::Iterator_Factory_ptr
Web_Server::Iterator_Factory::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Iterator_Factory>::unchecked_narrow (
        _tao_objref);
}

Web_Server::Iterator_Factory_ptr
Web_Server::Iterator_Factory::_nil (void)
{
  return 0;
}

Web_Server::Iterator_Factory_ptr
Web_Server::Iterator_Factory::_duplicate (Iterator_Factory_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Web_Server::Iterator_Factory::_tao_release (Iterator_Factory_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Web_Server::Iterator_Factory::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Web_Server/Iterator_Factory:1.0"
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

const char* Web_Server::Iterator_Factory::_interface_repository_id (void) const
{
  return "IDL:Web_Server/Iterator_Factory:1.0";
}

::CORBA::Boolean
Web_Server::Iterator_Factory::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Web_Server_Iterator_Factory (
    ::CORBA::tk_objref,
    "IDL:Web_Server/Iterator_Factory:1.0",
    "Iterator_Factory");


namespace Web_Server
{
  ::CORBA::TypeCode_ptr const _tc_Iterator_Factory =
    &_tao_tc_Web_Server_Iterator_Factory;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Web_Server::Iterator_Factory>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Web_Server
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Iterator_Factory_ptr _tao_elem)
  {
    Iterator_Factory_ptr _tao_objptr =
      Iterator_Factory::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Iterator_Factory_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<Iterator_Factory>::insert (
        _tao_any,
        Iterator_Factory::_tao_any_destructor,
        _tc_Iterator_Factory,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      Iterator_Factory_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<Iterator_Factory>::extract (
          _tao_any,
          Iterator_Factory::_tao_any_destructor,
          _tc_Iterator_Factory,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Web_Server::Iterator_Factory_ptr _tao_elem)
{
  Web_Server::Iterator_Factory_ptr _tao_objptr =
    Web_Server::Iterator_Factory::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Web_Server::Iterator_Factory_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Web_Server::Iterator_Factory>::insert (
      _tao_any,
      Web_Server::Iterator_Factory::_tao_any_destructor,
      Web_Server::_tc_Iterator_Factory,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Web_Server::Iterator_Factory_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Web_Server::Iterator_Factory>::extract (
        _tao_any,
        Web_Server::Iterator_Factory::_tao_any_destructor,
        Web_Server::_tc_Iterator_Factory,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Web_Server::Iterator_Factory_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Web_Server::Iterator_Factory_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Web_Server::Iterator_Factory RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



