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


#include "LoggerC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "LoggerC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Logger.

Logger_ptr
TAO::Objref_Traits<Logger>::duplicate (
    Logger_ptr p)
{
  return Logger::_duplicate (p);
}

void
TAO::Objref_Traits<Logger>::release (
    Logger_ptr p)
{
  ::CORBA::release (p);
}

Logger_ptr
TAO::Objref_Traits<Logger>::nil (void)
{
  return Logger::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Logger>::marshal (
    const Logger_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Logger::log (
  const ::Logger::Log_Record & log_rec)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Logger::Log_Record>::in_arg_val _tao_log_rec (log_rec);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_log_rec
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "log",
      3,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Logger::logv (
  const ::Logger::Log_Record & log_rec,
  ::Logger::Verbosity_Level level)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Logger::Log_Record>::in_arg_val _tao_log_rec (log_rec);
  TAO::Arg_Traits< ::Logger::Verbosity_Level>::in_arg_val _tao_level (level);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_log_rec,
      &_tao_level
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "logv",
      4,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Logger::log_twoway (
  const ::Logger::Log_Record & log_rec)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Logger::Log_Record>::in_arg_val _tao_log_rec (log_rec);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_log_rec
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "log_twoway",
      10,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Logger::logv_twoway (
  const ::Logger::Log_Record & log_rec,
  ::Logger::Verbosity_Level level)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Logger::Log_Record>::in_arg_val _tao_log_rec (log_rec);
  TAO::Arg_Traits< ::Logger::Verbosity_Level>::in_arg_val _tao_level (level);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_log_rec,
      &_tao_level
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "logv_twoway",
      11,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Logger::verbosity (
  ::Logger::Verbosity_Level level)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Logger::Verbosity_Level>::in_arg_val _tao_level (level);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_level
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "verbosity",
      9,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION

    );

  _tao_call.invoke (0, 0);
}

Logger::Logger (void)
{
}

Logger::~Logger (void)
{
}

Logger_ptr
Logger::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Logger>::narrow (
        _tao_objref,
        "IDL:Logger:1.0");
}

Logger_ptr
Logger::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Logger>::unchecked_narrow (
        _tao_objref);
}

Logger_ptr
Logger::_nil (void)
{
  return 0;
}

Logger_ptr
Logger::_duplicate (Logger_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Logger::_tao_release (Logger_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Logger::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Logger:1.0"
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

const char* Logger::_interface_repository_id (void) const
{
  return "IDL:Logger:1.0";
}

::CORBA::Boolean
Logger::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Logger_Factory.

Logger_Factory_ptr
TAO::Objref_Traits<Logger_Factory>::duplicate (
    Logger_Factory_ptr p)
{
  return Logger_Factory::_duplicate (p);
}

void
TAO::Objref_Traits<Logger_Factory>::release (
    Logger_Factory_ptr p)
{
  ::CORBA::release (p);
}

Logger_Factory_ptr
TAO::Objref_Traits<Logger_Factory>::nil (void)
{
  return Logger_Factory::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Logger_Factory>::marshal (
    const Logger_Factory_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::Logger_ptr
Logger_Factory::make_logger (
  const char * name)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::Logger>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_name (name);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_name
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "make_logger",
      11,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

Logger_Factory::Logger_Factory (void)
{
}

Logger_Factory::~Logger_Factory (void)
{
}

Logger_Factory_ptr
Logger_Factory::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Logger_Factory>::narrow (
        _tao_objref,
        "IDL:Logger_Factory:1.0");
}

Logger_Factory_ptr
Logger_Factory::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Logger_Factory>::unchecked_narrow (
        _tao_objref);
}

Logger_Factory_ptr
Logger_Factory::_nil (void)
{
  return 0;
}

Logger_Factory_ptr
Logger_Factory::_duplicate (Logger_Factory_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Logger_Factory::_tao_release (Logger_Factory_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Logger_Factory::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Logger_Factory:1.0"
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

const char* Logger_Factory::_interface_repository_id (void) const
{
  return "IDL:Logger_Factory:1.0";
}

::CORBA::Boolean
Logger_Factory::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, Logger::Log_Priority _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, Logger::Log_Priority & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;

  if (_tao_success)
    {
      _tao_enumerator = static_cast<Logger::Log_Priority> (_tao_temp);
    }

  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, Logger::Verbosity_Level _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, Logger::Verbosity_Level & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;

  if (_tao_success)
    {
      _tao_enumerator = static_cast<Logger::Verbosity_Level> (_tao_temp);
    }

  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Logger::Log_Record &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.type) &&
    (strm << _tao_aggregate.time) &&
    (strm << _tao_aggregate.app_id) &&
    (strm << _tao_aggregate.host_addr) &&
    (strm << ACE_OutputCDR::from_string (_tao_aggregate.msg_data.in (), 4096));
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Logger::Log_Record &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.type) &&
    (strm >> _tao_aggregate.time) &&
    (strm >> _tao_aggregate.app_id) &&
    (strm >> _tao_aggregate.host_addr) &&
    (strm >> ACE_InputCDR::to_string (_tao_aggregate.msg_data.out (), 4096));
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Logger_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Logger_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Logger RHS_SCOPED_NAME;

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
    const Logger_Factory_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Logger_Factory_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Logger_Factory RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



