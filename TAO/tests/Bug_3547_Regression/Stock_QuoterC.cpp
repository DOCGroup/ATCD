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


#include "Stock_QuoterC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "Stock_QuoterC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_exception/exception_ctor.cpp:51

Bad_Ticker_Symbol::Bad_Ticker_Symbol (
    const char * _tao_symbol)
  : ::CORBA::UserException (
        "IDL:Bad_Ticker_Symbol:1.0",
        "Bad_Ticker_Symbol"
      )
{
  this->symbol = ::CORBA::string_dup (_tao_symbol);
}



// TAO_IDL - Generated from
// be/be_visitor_exception/exception_cs.cpp:98

Bad_Ticker_Symbol::Bad_Ticker_Symbol (void)
  : ::CORBA::UserException (
        "IDL:Bad_Ticker_Symbol:1.0",
        "Bad_Ticker_Symbol"
      )
{
}

Bad_Ticker_Symbol::~Bad_Ticker_Symbol (void)
{
}

Bad_Ticker_Symbol::Bad_Ticker_Symbol (const ::Bad_Ticker_Symbol &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
  this->symbol = ::CORBA::string_dup (_tao_excp.symbol.in ());
}

Bad_Ticker_Symbol&
Bad_Ticker_Symbol::operator= (const ::Bad_Ticker_Symbol &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  this->symbol = ::CORBA::string_dup (_tao_excp.symbol.in ());
  return *this;
}

Bad_Ticker_Symbol *
Bad_Ticker_Symbol::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<Bad_Ticker_Symbol *> (_tao_excp);
}

const Bad_Ticker_Symbol *
Bad_Ticker_Symbol::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const Bad_Ticker_Symbol *> (_tao_excp);
}

::CORBA::Exception *Bad_Ticker_Symbol::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::Bad_Ticker_Symbol, 0);
  return retval;
}

::CORBA::Exception *
Bad_Ticker_Symbol::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::Bad_Ticker_Symbol (*this),
      0
    );
  return result;
}

void Bad_Ticker_Symbol::_raise (void) const
{
  throw *this;
}

void Bad_Ticker_Symbol::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void Bad_Ticker_Symbol::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Stock_Quoter.

Stock_Quoter_ptr
TAO::Objref_Traits<Stock_Quoter>::duplicate (
    Stock_Quoter_ptr p)
{
  return Stock_Quoter::_duplicate (p);
}

void
TAO::Objref_Traits<Stock_Quoter>::release (
    Stock_Quoter_ptr p)
{
  ::CORBA::release (p);
}

Stock_Quoter_ptr
TAO::Objref_Traits<Stock_Quoter>::nil (void)
{
  return Stock_Quoter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Stock_Quoter>::marshal (
    const Stock_Quoter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Float
Stock_Quoter::get_quote (
  const char * stock_id)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Float>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_stock_id (stock_id);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_stock_id
    };

  static TAO::Exception_Data
  _tao_Stock_Quoter_get_quote_exceptiondata [] =
    {
      {
        "IDL:Bad_Ticker_Symbol:1.0",
        Bad_Ticker_Symbol::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "get_quote",
      9,
      TAO::TAO_CO_NONE

    );

  _tao_call.invoke (
      _tao_Stock_Quoter_get_quote_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Stock_Quoter::shutdown (
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
      TAO::TAO_CO_NONE,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

Stock_Quoter::Stock_Quoter (void)
{
}

Stock_Quoter::~Stock_Quoter (void)
{
}

Stock_Quoter_ptr
Stock_Quoter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Stock_Quoter>::narrow (
        _tao_objref,
        "IDL:Stock_Quoter:1.0");
}

Stock_Quoter_ptr
Stock_Quoter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Stock_Quoter>::unchecked_narrow (
        _tao_objref);
}

Stock_Quoter_ptr
Stock_Quoter::_nil (void)
{
  return 0;
}

Stock_Quoter_ptr
Stock_Quoter::_duplicate (Stock_Quoter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Stock_Quoter::_tao_release (Stock_Quoter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Stock_Quoter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Stock_Quoter:1.0"
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

const char* Stock_Quoter::_interface_repository_id (void) const
{
  return "IDL:Stock_Quoter:1.0";
}

::CORBA::Boolean
Stock_Quoter::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Bad_Ticker_Symbol &_tao_aggregate
  )
{
  // First marshal the repository ID.
  if (strm << _tao_aggregate._rep_id ())
    {
      // Now marshal the members (if any).
      return (
        (strm << _tao_aggregate.symbol.in ())
       );
    }
  else
    {
      return false;
    }
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Bad_Ticker_Symbol &_tao_aggregate
  )
{
  // Demarshal the members.
  return (
    (strm >> _tao_aggregate.symbol.out ())
  );
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Stock_Quoter_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Stock_Quoter_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Stock_Quoter RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



