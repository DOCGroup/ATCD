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


#include "testC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for ID_Check.

ID_Check_ptr
TAO::Objref_Traits<ID_Check>::duplicate (
    ID_Check_ptr p)
{
  return ID_Check::_duplicate (p);
}

void
TAO::Objref_Traits<ID_Check>::release (
    ID_Check_ptr p)
{
  ::CORBA::release (p);
}

ID_Check_ptr
TAO::Objref_Traits<ID_Check>::nil (void)
{
  return ID_Check::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<ID_Check>::marshal (
    const ID_Check_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Boolean
ID_Check::check_servant_id (
  ::CORBA::Short index)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::ACE_InputCDR::to_boolean>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Short>::in_arg_val _tao_index (index);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_index
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "check_servant_id",
      16,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

ID_Check::ID_Check (void)
{
}

ID_Check::~ID_Check (void)
{
}

ID_Check_ptr
ID_Check::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<ID_Check>::narrow (
        _tao_objref,
        "IDL:ID_Check:1.0");
}

ID_Check_ptr
ID_Check::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<ID_Check>::unchecked_narrow (
        _tao_objref);
}

ID_Check_ptr
ID_Check::_nil (void)
{
  return 0;
}

ID_Check_ptr
ID_Check::_duplicate (ID_Check_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
ID_Check::_tao_release (ID_Check_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
ID_Check::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:ID_Check:1.0"
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

const char* ID_Check::_interface_repository_id (void) const
{
  return "IDL:ID_Check:1.0";
}

::CORBA::Boolean
ID_Check::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const ID_Check_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    ID_Check_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::ID_Check RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



