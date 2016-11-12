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


#include "TestC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::Receiver.

Test::Receiver_ptr
TAO::Objref_Traits<Test::Receiver>::duplicate (
    Test::Receiver_ptr p)
{
  return Test::Receiver::_duplicate (p);
}

void
TAO::Objref_Traits<Test::Receiver>::release (
    Test::Receiver_ptr p)
{
  ::CORBA::release (p);
}

Test::Receiver_ptr
TAO::Objref_Traits<Test::Receiver>::nil (void)
{
  return Test::Receiver::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::Receiver>::marshal (
    const Test::Receiver_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
Test::Receiver::receive_call (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "receive_call",
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

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
Test::Receiver::get_call_count (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "get_call_count",
      14,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Receiver::shutdown (
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

Test::Receiver::Receiver (void)
{
}

Test::Receiver::~Receiver (void)
{
}

Test::Receiver_ptr
Test::Receiver::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Receiver>::narrow (
        _tao_objref,
        "IDL:Test/Receiver:1.0");
}

Test::Receiver_ptr
Test::Receiver::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Receiver>::unchecked_narrow (
        _tao_objref);
}

Test::Receiver_ptr
Test::Receiver::_nil (void)
{
  return 0;
}

Test::Receiver_ptr
Test::Receiver::_duplicate (Receiver_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::Receiver::_tao_release (Receiver_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::Receiver::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Receiver:1.0"
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

const char* Test::Receiver::_interface_repository_id (void) const
{
  return "IDL:Test/Receiver:1.0";
}

::CORBA::Boolean
Test::Receiver::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::Sender.

Test::Sender_ptr
TAO::Objref_Traits<Test::Sender>::duplicate (
    Test::Sender_ptr p)
{
  return Test::Sender::_duplicate (p);
}

void
TAO::Objref_Traits<Test::Sender>::release (
    Test::Sender_ptr p)
{
  ::CORBA::release (p);
}

Test::Sender_ptr
TAO::Objref_Traits<Test::Sender>::nil (void)
{
  return Test::Sender::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::Sender>::marshal (
    const Test::Sender_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Sender::ping (
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
      "ping",
      4,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Sender::active_objects (
  ::CORBA::Short ao)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Short>::in_arg_val _tao_ao (ao);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_ao
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "active_objects",
      14,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Sender::send_ready_message (
  ::Test::Receiver_ptr callback)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Test::Receiver>::in_arg_val _tao_callback (callback);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_callback
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "send_ready_message",
      18,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Sender::shutdown (
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

Test::Sender::Sender (void)
{
}

Test::Sender::~Sender (void)
{
}

Test::Sender_ptr
Test::Sender::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Sender>::narrow (
        _tao_objref,
        "IDL:Test/Sender:1.0");
}

Test::Sender_ptr
Test::Sender::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Sender>::unchecked_narrow (
        _tao_objref);
}

Test::Sender_ptr
Test::Sender::_nil (void)
{
  return 0;
}

Test::Sender_ptr
Test::Sender::_duplicate (Sender_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::Sender::_tao_release (Sender_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::Sender::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Sender:1.0"
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

const char* Test::Sender::_interface_repository_id (void) const
{
  return "IDL:Test/Sender:1.0";
}

::CORBA::Boolean
Test::Sender::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Receiver_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Receiver_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test::Receiver RHS_SCOPED_NAME;

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
    const Test::Sender_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Sender_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test::Sender RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



