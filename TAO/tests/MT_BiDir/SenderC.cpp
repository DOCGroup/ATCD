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


#include "SenderC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "SenderC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Sender.

Sender_ptr
TAO::Objref_Traits<Sender>::duplicate (
    Sender_ptr p)
{
  return Sender::_duplicate (p);
}

void
TAO::Objref_Traits<Sender>::release (
    Sender_ptr p)
{
  ::CORBA::release (p);
}

Sender_ptr
TAO::Objref_Traits<Sender>::nil (void)
{
  return Sender::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Sender>::marshal (
    const Sender_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_exception/exception_cs.cpp:98

Sender::Table_Full::Table_Full (void)
  : ::CORBA::UserException (
        "IDL:Sender/Table_Full:1.0",
        "Table_Full"
      )
{
}

Sender::Table_Full::~Table_Full (void)
{
}

Sender::Table_Full::Table_Full (const ::Sender::Table_Full &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

Sender::Table_Full&
Sender::Table_Full::operator= (const ::Sender::Table_Full &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

Sender::Table_Full *
Sender::Table_Full::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<Table_Full *> (_tao_excp);
}

const Sender::Table_Full *
Sender::Table_Full::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const Table_Full *> (_tao_excp);
}

::CORBA::Exception *Sender::Table_Full::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::Sender::Table_Full, 0);
  return retval;
}

::CORBA::Exception *
Sender::Table_Full::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::Sender::Table_Full (*this),
      0
    );
  return result;
}

void Sender::Table_Full::_raise (void) const
{
  throw *this;
}

void Sender::Table_Full::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void Sender::Table_Full::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}



// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
Sender::receiver_object (
  ::Receiver_ptr recv)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Receiver>::in_arg_val _tao_recv (recv);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_recv
    };

  static TAO::Exception_Data
  _tao_Sender_receiver_object_exceptiondata [] =
    {
      {
        "IDL:Sender/Table_Full:1.0",
        Sender::Table_Full::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "receiver_object",
      15,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (
      _tao_Sender_receiver_object_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

Sender::Sender (void)
{
}

Sender::~Sender (void)
{
}

Sender_ptr
Sender::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Sender>::narrow (
        _tao_objref,
        "IDL:Sender:1.0");
}

Sender_ptr
Sender::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Sender>::unchecked_narrow (
        _tao_objref);
}

Sender_ptr
Sender::_nil (void)
{
  return 0;
}

Sender_ptr
Sender::_duplicate (Sender_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Sender::_tao_release (Sender_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Sender::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Sender:1.0"
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

const char* Sender::_interface_repository_id (void) const
{
  return "IDL:Sender:1.0";
}

::CORBA::Boolean
Sender::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Sender::Table_Full &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    Sender::Table_Full&
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
    const Sender_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Sender_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Sender RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



