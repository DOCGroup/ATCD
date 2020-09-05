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
#include "tao/ORB_Core.h"
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_TEST_PAYLOAD_CS_)
#define _TEST_PAYLOAD_CS_

Test::Payload::Payload (void)
{}

Test::Payload::Payload (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      > (max)
{}

Test::Payload::Payload (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Octet * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      >
    (max, length, buffer, release)
{}

Test::Payload::Payload (
    const Payload &seq)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      > (seq)
{}

Test::Payload::~Payload (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_TEST_SESSION_LIST_CS_)
#define _TEST_SESSION_LIST_CS_

Test::Session_List::Session_List (void)
{}

Test::Session_List::Session_List (
    ::CORBA::ULong max)
  : ::TAO::unbounded_object_reference_sequence<
        Session,
        Session_var
      > (max)
{}

Test::Session_List::Session_List (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Test::Session_ptr * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_object_reference_sequence<
        Session,
        Session_var
      >
    (max, length, buffer, release)
{}

Test::Session_List::Session_List (
    const Session_List &seq)
  : ::TAO::unbounded_object_reference_sequence<
        Session,
        Session_var
      > (seq)
{}

Test::Session_List::~Session_List (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::Session_Control.

Test::Session_Control_ptr
TAO::Objref_Traits<Test::Session_Control>::duplicate (
    Test::Session_Control_ptr p)
{
  return Test::Session_Control::_duplicate (p);
}

void
TAO::Objref_Traits<Test::Session_Control>::release (
    Test::Session_Control_ptr p)
{
  ::CORBA::release (p);
}

Test::Session_Control_ptr
TAO::Objref_Traits<Test::Session_Control>::nil (void)
{
  return Test::Session_Control::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::Session_Control>::marshal (
    const Test::Session_Control_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Session_Control::session_finished (
  ::CORBA::Boolean success)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::ACE_InputCDR::to_boolean>::in_arg_val _tao_success (success);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_success
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "session_finished",
      16,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

Test::Session_Control::Session_Control (void)
{
}

Test::Session_Control::~Session_Control (void)
{
}

Test::Session_Control_ptr
Test::Session_Control::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Session_Control>::narrow (
        _tao_objref,
        "IDL:Test/Session_Control:1.0");
}

Test::Session_Control_ptr
Test::Session_Control::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Session_Control>::unchecked_narrow (
        _tao_objref);
}

Test::Session_Control_ptr
Test::Session_Control::_nil (void)
{
  return 0;
}

Test::Session_Control_ptr
Test::Session_Control::_duplicate (Session_Control_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::Session_Control::_tao_release (Session_Control_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::Session_Control::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Session_Control:1.0"
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

const char* Test::Session_Control::_interface_repository_id (void) const
{
  return "IDL:Test/Session_Control:1.0";
}

::CORBA::Boolean
Test::Session_Control::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::Peer.

Test::Peer_ptr
TAO::Objref_Traits<Test::Peer>::duplicate (
    Test::Peer_ptr p)
{
  return Test::Peer::_duplicate (p);
}

void
TAO::Objref_Traits<Test::Peer>::release (
    Test::Peer_ptr p)
{
  ::CORBA::release (p);
}

Test::Peer_ptr
TAO::Objref_Traits<Test::Peer>::nil (void)
{
  return Test::Peer::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::Peer>::marshal (
    const Test::Peer_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::Test::Session_ptr
Test::Peer::create_session (
  ::Test::Session_Control_ptr control,
  ::CORBA::ULong payload_size,
  ::CORBA::ULong thread_count,
  ::CORBA::ULong message_count,
  ::CORBA::ULong peer_count)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::Test::Session>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Test::Session_Control>::in_arg_val _tao_control (control);
  TAO::Arg_Traits< ::CORBA::ULong>::in_arg_val _tao_payload_size (payload_size);
  TAO::Arg_Traits< ::CORBA::ULong>::in_arg_val _tao_thread_count (thread_count);
  TAO::Arg_Traits< ::CORBA::ULong>::in_arg_val _tao_message_count (message_count);
  TAO::Arg_Traits< ::CORBA::ULong>::in_arg_val _tao_peer_count (peer_count);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_control,
      &_tao_payload_size,
      &_tao_thread_count,
      &_tao_message_count,
      &_tao_peer_count
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      6,
      "create_session",
      14,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Peer::shutdown (
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

Test::Peer::Peer (void)
{
}

Test::Peer::~Peer (void)
{
}

Test::Peer_ptr
Test::Peer::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Peer>::narrow (
        _tao_objref,
        "IDL:Test/Peer:1.0");
}

Test::Peer_ptr
Test::Peer::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Peer>::unchecked_narrow (
        _tao_objref);
}

Test::Peer_ptr
Test::Peer::_nil (void)
{
  return 0;
}

Test::Peer_ptr
Test::Peer::_duplicate (Peer_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::Peer::_tao_release (Peer_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::Peer::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Peer:1.0"
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

const char* Test::Peer::_interface_repository_id (void) const
{
  return "IDL:Test/Peer:1.0";
}

::CORBA::Boolean
Test::Peer::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_exception/exception_cs.cpp:98

Test::Already_Running::Already_Running (void)
  : ::CORBA::UserException (
        "IDL:Test/Already_Running:1.0",
        "Already_Running"
      )
{
}

Test::Already_Running::~Already_Running (void)
{
}

Test::Already_Running::Already_Running (const ::Test::Already_Running &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

Test::Already_Running&
Test::Already_Running::operator= (const ::Test::Already_Running &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

Test::Already_Running *
Test::Already_Running::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<Already_Running *> (_tao_excp);
}

const Test::Already_Running *
Test::Already_Running::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const Already_Running *> (_tao_excp);
}

::CORBA::Exception *Test::Already_Running::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::Test::Already_Running, 0);
  return retval;
}

::CORBA::Exception *
Test::Already_Running::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::Test::Already_Running (*this),
      0
    );
  return result;
}

void Test::Already_Running::_raise (void) const
{
  throw *this;
}

void Test::Already_Running::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void Test::Already_Running::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}



// TAO_IDL - Generated from
// be/be_visitor_exception/exception_cs.cpp:98

Test::No_Peers::No_Peers (void)
  : ::CORBA::UserException (
        "IDL:Test/No_Peers:1.0",
        "No_Peers"
      )
{
}

Test::No_Peers::~No_Peers (void)
{
}

Test::No_Peers::No_Peers (const ::Test::No_Peers &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

Test::No_Peers&
Test::No_Peers::operator= (const ::Test::No_Peers &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

Test::No_Peers *
Test::No_Peers::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<No_Peers *> (_tao_excp);
}

const Test::No_Peers *
Test::No_Peers::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const No_Peers *> (_tao_excp);
}

::CORBA::Exception *Test::No_Peers::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::Test::No_Peers, 0);
  return retval;
}

::CORBA::Exception *
Test::No_Peers::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::Test::No_Peers (*this),
      0
    );
  return result;
}

void Test::No_Peers::_raise (void) const
{
  throw *this;
}

void Test::No_Peers::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void Test::No_Peers::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::Session.

Test::Session_ptr
TAO::Objref_Traits<Test::Session>::duplicate (
    Test::Session_ptr p)
{
  return Test::Session::_duplicate (p);
}

void
TAO::Objref_Traits<Test::Session>::release (
    Test::Session_ptr p)
{
  ::CORBA::release (p);
}

Test::Session_ptr
TAO::Objref_Traits<Test::Session>::nil (void)
{
  return Test::Session::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::Session>::marshal (
    const Test::Session_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Session::start (
  const ::Test::Session_List & other_sessions)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Test::Session_List>::in_arg_val _tao_other_sessions (other_sessions);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_other_sessions
    };

  static TAO::Exception_Data
  _tao_Test_Session_start_exceptiondata [] =
    {
      {
        "IDL:Test/Already_Running:1.0",
        Test::Already_Running::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      },

      {
        "IDL:Test/No_Peers:1.0",
        Test::No_Peers::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "start",
      5,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (
      _tao_Test_Session_start_exceptiondata,
      2
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Session::ping (
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
Test::Session::receive_payload (
  const ::Test::Payload & the_payload)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Test::Payload>::in_arg_val _tao_the_payload (the_payload);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_the_payload
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "receive_payload",
      15,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Session::destroy (
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
      "destroy",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

Test::Session::Session (void)
{
}

Test::Session::~Session (void)
{
}

Test::Session_ptr
Test::Session::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Session>::narrow (
        _tao_objref,
        "IDL:Test/Session:1.0");
}

Test::Session_ptr
Test::Session::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Session>::unchecked_narrow (
        _tao_objref);
}

Test::Session_ptr
Test::Session::_nil (void)
{
  return 0;
}

Test::Session_ptr
Test::Session::_duplicate (Session_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::Session::_tao_release (Session_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::Session::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Session:1.0"
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

const char* Test::Session::_interface_repository_id (void) const
{
  return "IDL:Test/Session:1.0";
}

::CORBA::Boolean
Test::Session::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::Coordinator.

Test::Coordinator_ptr
TAO::Objref_Traits<Test::Coordinator>::duplicate (
    Test::Coordinator_ptr p)
{
  return Test::Coordinator::_duplicate (p);
}

void
TAO::Objref_Traits<Test::Coordinator>::release (
    Test::Coordinator_ptr p)
{
  ::CORBA::release (p);
}

Test::Coordinator_ptr
TAO::Objref_Traits<Test::Coordinator>::nil (void)
{
  return Test::Coordinator::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::Coordinator>::marshal (
    const Test::Coordinator_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::Coordinator::add_peer (
  ::Test::Peer_ptr the_peer)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Test::Peer>::in_arg_val _tao_the_peer (the_peer);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_the_peer
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "add_peer",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

Test::Coordinator::Coordinator (void)
{
}

Test::Coordinator::~Coordinator (void)
{
}

Test::Coordinator_ptr
Test::Coordinator::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Coordinator>::narrow (
        _tao_objref,
        "IDL:Test/Coordinator:1.0");
}

Test::Coordinator_ptr
Test::Coordinator::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Coordinator>::unchecked_narrow (
        _tao_objref);
}

Test::Coordinator_ptr
Test::Coordinator::_nil (void)
{
  return 0;
}

Test::Coordinator_ptr
Test::Coordinator::_duplicate (Coordinator_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::Coordinator::_tao_release (Coordinator_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::Coordinator::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Coordinator:1.0"
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

const char* Test::Coordinator::_interface_repository_id (void) const
{
  return "IDL:Test/Coordinator:1.0";
}

::CORBA::Boolean
Test::Coordinator::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_Test_Payload_CPP_
#define _TAO_CDR_OP_Test_Payload_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Payload &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Payload &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Test_Payload_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_Test_Session_List_CPP_
#define _TAO_CDR_OP_Test_Session_List_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Session_List &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Session_List &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_Test_Session_List_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Session_Control_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Session_Control_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test::Session_Control RHS_SCOPED_NAME;

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
    const Test::Peer_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Peer_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test::Peer RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Already_Running &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    Test::Already_Running&
  )
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::No_Peers &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    Test::No_Peers&
  )
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Session_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Session_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test::Session RHS_SCOPED_NAME;

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
    const Test::Coordinator_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Coordinator_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test::Coordinator RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



