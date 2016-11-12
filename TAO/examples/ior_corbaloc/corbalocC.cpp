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


#include "corbalocC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "corbalocC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for corbaloc::Status.

corbaloc::Status_ptr
TAO::Objref_Traits<corbaloc::Status>::duplicate (
    corbaloc::Status_ptr p)
{
  return corbaloc::Status::_duplicate (p);
}

void
TAO::Objref_Traits<corbaloc::Status>::release (
    corbaloc::Status_ptr p)
{
  ::CORBA::release (p);
}

corbaloc::Status_ptr
TAO::Objref_Traits<corbaloc::Status>::nil (void)
{
  return corbaloc::Status::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<corbaloc::Status>::marshal (
    const corbaloc::Status_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Boolean
corbaloc::Status::print_status (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::ACE_InputCDR::to_boolean>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "print_status",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

corbaloc::Status::Status (void)
{
}

corbaloc::Status::~Status (void)
{
}

corbaloc::Status_ptr
corbaloc::Status::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Status>::narrow (
        _tao_objref,
        "IDL:corbaloc/Status:1.0");
}

corbaloc::Status_ptr
corbaloc::Status::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Status>::unchecked_narrow (
        _tao_objref);
}

corbaloc::Status_ptr
corbaloc::Status::_nil (void)
{
  return 0;
}

corbaloc::Status_ptr
corbaloc::Status::_duplicate (Status_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
corbaloc::Status::_tao_release (Status_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
corbaloc::Status::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:corbaloc/Status:1.0"
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

const char* corbaloc::Status::_interface_repository_id (void) const
{
  return "IDL:corbaloc/Status:1.0";
}

::CORBA::Boolean
corbaloc::Status::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const corbaloc::Status_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    corbaloc::Status_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::corbaloc::Status RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



