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
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Simple_Server.

Simple_Server_ptr
TAO::Objref_Traits<Simple_Server>::duplicate (
    Simple_Server_ptr p)
{
  return Simple_Server::_duplicate (p);
}

void
TAO::Objref_Traits<Simple_Server>::release (
    Simple_Server_ptr p)
{
  ::CORBA::release (p);
}

Simple_Server_ptr
TAO::Objref_Traits<Simple_Server>::nil (void)
{
  return Simple_Server::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Simple_Server>::marshal (
    const Simple_Server_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_exception/exception_cs.cpp:98

Simple_Server::WrongProtocolType::WrongProtocolType (void)
  : ::CORBA::UserException (
        "IDL:Simple_Server/WrongProtocolType:1.0",
        "WrongProtocolType"
      )
{
}

Simple_Server::WrongProtocolType::~WrongProtocolType (void)
{
}

Simple_Server::WrongProtocolType::WrongProtocolType (const ::Simple_Server::WrongProtocolType &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

Simple_Server::WrongProtocolType&
Simple_Server::WrongProtocolType::operator= (const ::Simple_Server::WrongProtocolType &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

Simple_Server::WrongProtocolType *
Simple_Server::WrongProtocolType::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<WrongProtocolType *> (_tao_excp);
}

const Simple_Server::WrongProtocolType *
Simple_Server::WrongProtocolType::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const WrongProtocolType *> (_tao_excp);
}

::CORBA::Exception *Simple_Server::WrongProtocolType::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::Simple_Server::WrongProtocolType, 0);
  return retval;
}

::CORBA::Exception *
Simple_Server::WrongProtocolType::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::Simple_Server::WrongProtocolType (*this),
      0
    );
  return result;
}

void Simple_Server::WrongProtocolType::_raise (void) const
{
  throw *this;
}

void Simple_Server::WrongProtocolType::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void Simple_Server::WrongProtocolType::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}



// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Simple_Server::ping (
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
Simple_Server::validate_protocol (
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

  static TAO::Exception_Data
  _tao_Simple_Server_validate_protocol_exceptiondata [] =
    {
      {
        "IDL:Simple_Server/WrongProtocolType:1.0",
        Simple_Server::WrongProtocolType::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "validate_protocol",
      17,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (
      _tao_Simple_Server_validate_protocol_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
Simple_Server::test_method (
  ::CORBA::Long x)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_x (x);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_x
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "test_method",
      11,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Simple_Server::shutdown (
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

Simple_Server::Simple_Server (void)
{
}

Simple_Server::~Simple_Server (void)
{
}

Simple_Server_ptr
Simple_Server::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Simple_Server>::narrow (
        _tao_objref,
        "IDL:Simple_Server:1.0");
}

Simple_Server_ptr
Simple_Server::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Simple_Server>::unchecked_narrow (
        _tao_objref);
}

Simple_Server_ptr
Simple_Server::_nil (void)
{
  return 0;
}

Simple_Server_ptr
Simple_Server::_duplicate (Simple_Server_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Simple_Server::_tao_release (Simple_Server_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Simple_Server::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Simple_Server:1.0"
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

const char* Simple_Server::_interface_repository_id (void) const
{
  return "IDL:Simple_Server:1.0";
}

::CORBA::Boolean
Simple_Server::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Simple_Server::WrongProtocolType &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    Simple_Server::WrongProtocolType&
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
    const Simple_Server_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Simple_Server_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Simple_Server RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



