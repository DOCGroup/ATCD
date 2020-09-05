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


#include "ReceiverC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "ReceiverC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Receiver.

Receiver_ptr
TAO::Objref_Traits<Receiver>::duplicate (
    Receiver_ptr p)
{
  return Receiver::_duplicate (p);
}

void
TAO::Objref_Traits<Receiver>::release (
    Receiver_ptr p)
{
  ::CORBA::release (p);
}

Receiver_ptr
TAO::Objref_Traits<Receiver>::nil (void)
{
  return Receiver::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Receiver>::marshal (
    const Receiver_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Receiver::message (
  const char * msg)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_msg (msg);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_msg
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "message",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Receiver::shutdown (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

Receiver::Receiver (void)
{
}

Receiver::~Receiver (void)
{
}

Receiver_ptr
Receiver::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Receiver>::narrow (
        _tao_objref,
        "IDL:Receiver:1.0");
}

Receiver_ptr
Receiver::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Receiver>::unchecked_narrow (
        _tao_objref);
}

Receiver_ptr
Receiver::_nil (void)
{
  return 0;
}

Receiver_ptr
Receiver::_duplicate (Receiver_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Receiver::_tao_release (Receiver_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Receiver::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Receiver:1.0"
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

const char* Receiver::_interface_repository_id (void) const
{
  return "IDL:Receiver:1.0";
}

::CORBA::Boolean
Receiver::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Receiver_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Receiver_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Receiver RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



