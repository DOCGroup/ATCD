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


#include "MT_Client_TestC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "MT_Client_TestC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Object_A.

Object_A_ptr
TAO::Objref_Traits<Object_A>::duplicate (
    Object_A_ptr p)
{
  return Object_A::_duplicate (p);
}

void
TAO::Objref_Traits<Object_A>::release (
    Object_A_ptr p)
{
  ::CORBA::release (p);
}

Object_A_ptr
TAO::Objref_Traits<Object_A>::nil (void)
{
  return Object_A::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Object_A>::marshal (
    const Object_A_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
Object_A::foo (
  ::CORBA::Long time)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_time (time);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_time
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "foo",
      3,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

Object_A::Object_A (void)
{
}

Object_A::~Object_A (void)
{
}

Object_A_ptr
Object_A::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Object_A>::narrow (
        _tao_objref,
        "IDL:Object_A:1.0");
}

Object_A_ptr
Object_A::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Object_A>::unchecked_narrow (
        _tao_objref);
}

Object_A_ptr
Object_A::_nil (void)
{
  return 0;
}

Object_A_ptr
Object_A::_duplicate (Object_A_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Object_A::_tao_release (Object_A_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Object_A::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Object_A:1.0"
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

const char* Object_A::_interface_repository_id (void) const
{
  return "IDL:Object_A:1.0";
}

::CORBA::Boolean
Object_A::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for MT_Object.

MT_Object_ptr
TAO::Objref_Traits<MT_Object>::duplicate (
    MT_Object_ptr p)
{
  return MT_Object::_duplicate (p);
}

void
TAO::Objref_Traits<MT_Object>::release (
    MT_Object_ptr p)
{
  ::CORBA::release (p);
}

MT_Object_ptr
TAO::Objref_Traits<MT_Object>::nil (void)
{
  return MT_Object::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<MT_Object>::marshal (
    const MT_Object_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
MT_Object::yadda (
  ::CORBA::Long hop_count,
  ::MT_Object_ptr partner)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_hop_count (hop_count);
  TAO::Arg_Traits< ::MT_Object>::in_arg_val _tao_partner (partner);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_hop_count,
      &_tao_partner
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "yadda",
      5,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

MT_Object::MT_Object (void)
{
}

MT_Object::~MT_Object (void)
{
}

MT_Object_ptr
MT_Object::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<MT_Object>::narrow (
        _tao_objref,
        "IDL:MT_Object:1.0");
}

MT_Object_ptr
MT_Object::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<MT_Object>::unchecked_narrow (
        _tao_objref);
}

MT_Object_ptr
MT_Object::_nil (void)
{
  return 0;
}

MT_Object_ptr
MT_Object::_duplicate (MT_Object_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
MT_Object::_tao_release (MT_Object_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
MT_Object::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:MT_Object:1.0"
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

const char* MT_Object::_interface_repository_id (void) const
{
  return "IDL:MT_Object:1.0";
}

::CORBA::Boolean
MT_Object::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Object_A_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Object_A_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Object_A RHS_SCOPED_NAME;

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
    const MT_Object_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    MT_Object_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::MT_Object RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



