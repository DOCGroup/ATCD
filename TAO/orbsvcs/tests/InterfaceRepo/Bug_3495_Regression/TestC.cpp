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
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_union/union_cs.cpp:76

Test::structOne::ErrorInfo::ErrorInfo (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = -2147483647;
}

Test::structOne::ErrorInfo::ErrorInfo (const ::Test::structOne::ErrorInfo &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case 0:
    {
      this->u_.errorstring_ = ::CORBA::string_dup (u.u_.errorstring_);
    }
    break;
    case 10:
    {
      this->u_.errornumber_ = u.u_.errornumber_;
    }
    break;
    default:
    break;
  }
}

Test::structOne::ErrorInfo::~ErrorInfo (void)
{
  // Finalize.
  this->_reset ();
}

Test::structOne::ErrorInfo &
Test::structOne::ErrorInfo::operator= (const ::Test::structOne::ErrorInfo &u)
{
  if (&u == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case 0:
    {
      this->u_.errorstring_ = ::CORBA::string_dup (u.u_.errorstring_);
    }
    break;
    case 10:
    {
      this->u_.errornumber_ = u.u_.errornumber_;
    }
    break;
    default:
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void Test::structOne::ErrorInfo::_reset (void)
{
  switch (this->disc_)
  {
    
    case 0:
      ::CORBA::string_free (this->u_.errorstring_);
      this->u_.errorstring_ = 0;
      
    break;
    
    case 10:
      
    break;
    
    default:
    break;
  }
}

// TAO_IDL - Generated from
// be/be_visitor_union/union_cs.cpp:76

Test::structTwo::ErrorInfo::ErrorInfo (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = -2147483647;
}

Test::structTwo::ErrorInfo::ErrorInfo (const ::Test::structTwo::ErrorInfo &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case 100:
    {
      this->u_.failstring_ = ::CORBA::string_dup (u.u_.failstring_);
    }
    break;
    default:
    break;
  }
}

Test::structTwo::ErrorInfo::~ErrorInfo (void)
{
  // Finalize.
  this->_reset ();
}

Test::structTwo::ErrorInfo &
Test::structTwo::ErrorInfo::operator= (const ::Test::structTwo::ErrorInfo &u)
{
  if (&u == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case 100:
    {
      this->u_.failstring_ = ::CORBA::string_dup (u.u_.failstring_);
    }
    break;
    default:
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void Test::structTwo::ErrorInfo::_reset (void)
{
  switch (this->disc_)
  {
    
    case 100:
      ::CORBA::string_free (this->u_.failstring_);
      this->u_.failstring_ = 0;
      
    break;
    
    default:
    break;
  }
}

// TAO_IDL - Generated from
// be/be_visitor_union/union_cs.cpp:76

Test::exceptionOne::ExceptionUnion::ExceptionUnion (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = -2147483647;
}

Test::exceptionOne::ExceptionUnion::ExceptionUnion (const ::Test::exceptionOne::ExceptionUnion &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case 100:
    {
      this->u_.failstring_ = ::CORBA::string_dup (u.u_.failstring_);
    }
    break;
    default:
    break;
  }
}

Test::exceptionOne::ExceptionUnion::~ExceptionUnion (void)
{
  // Finalize.
  this->_reset ();
}

Test::exceptionOne::ExceptionUnion &
Test::exceptionOne::ExceptionUnion::operator= (const ::Test::exceptionOne::ExceptionUnion &u)
{
  if (&u == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case 100:
    {
      this->u_.failstring_ = ::CORBA::string_dup (u.u_.failstring_);
    }
    break;
    default:
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void Test::exceptionOne::ExceptionUnion::_reset (void)
{
  switch (this->disc_)
  {
    
    case 100:
      ::CORBA::string_free (this->u_.failstring_);
      this->u_.failstring_ = 0;
      
    break;
    
    default:
    break;
  }
}

// TAO_IDL - Generated from
// be/be_visitor_exception/exception_ctor.cpp:51

Test::exceptionOne::exceptionOne (
    const Test::exceptionOne::ExceptionUnion & _tao_exceptiononly)
  : ::CORBA::UserException (
        "IDL:Test/exceptionOne:1.0",
        "exceptionOne"
      )
{
  this->exceptiononly = _tao_exceptiononly;
}



// TAO_IDL - Generated from
// be/be_visitor_exception/exception_cs.cpp:98

Test::exceptionOne::exceptionOne (void)
  : ::CORBA::UserException (
        "IDL:Test/exceptionOne:1.0",
        "exceptionOne"
      )
{
}

Test::exceptionOne::~exceptionOne (void)
{
}

Test::exceptionOne::exceptionOne (const ::Test::exceptionOne &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
  this->exceptiononly = _tao_excp.exceptiononly;
}

Test::exceptionOne&
Test::exceptionOne::operator= (const ::Test::exceptionOne &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  this->exceptiononly = _tao_excp.exceptiononly;
  return *this;
}

Test::exceptionOne *
Test::exceptionOne::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<exceptionOne *> (_tao_excp);
}

const Test::exceptionOne *
Test::exceptionOne::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const exceptionOne *> (_tao_excp);
}

::CORBA::Exception *Test::exceptionOne::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::Test::exceptionOne, 0);
  return retval;
}

::CORBA::Exception *
Test::exceptionOne::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::Test::exceptionOne (*this),
      0
    );
  return result;
}

void Test::exceptionOne::_raise (void) const
{
  throw *this;
}

void Test::exceptionOne::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void Test::exceptionOne::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::interfaceOne.

Test::interfaceOne_ptr
TAO::Objref_Traits<Test::interfaceOne>::duplicate (
    Test::interfaceOne_ptr p)
{
  return Test::interfaceOne::_duplicate (p);
}

void
TAO::Objref_Traits<Test::interfaceOne>::release (
    Test::interfaceOne_ptr p)
{
  ::CORBA::release (p);
}

Test::interfaceOne_ptr
TAO::Objref_Traits<Test::interfaceOne>::nil (void)
{
  return Test::interfaceOne::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::interfaceOne>::marshal (
    const Test::interfaceOne_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::interfaceOne::getstruct (
  ::Test::structOne_out tester)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Test::structOne>::out_arg_val _tao_tester (tester);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_tester
    };

  static TAO::Exception_Data
  _tao_Test_interfaceOne_getstruct_exceptiondata [] = 
    {
      {
        "IDL:Test/exceptionOne:1.0",
        Test::exceptionOne::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , 0
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "getstruct",
      9,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (
      _tao_Test_interfaceOne_getstruct_exceptiondata,
      1
    );
}

Test::interfaceOne::interfaceOne (void)
{
}

Test::interfaceOne::~interfaceOne (void)
{
}

Test::interfaceOne_ptr
Test::interfaceOne::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<interfaceOne>::narrow (
        _tao_objref,
        "IDL:Test/interfaceOne:1.0");
}

Test::interfaceOne_ptr
Test::interfaceOne::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<interfaceOne>::unchecked_narrow (
        _tao_objref);
}

Test::interfaceOne_ptr
Test::interfaceOne::_nil (void)
{
  return 0;
}

Test::interfaceOne_ptr
Test::interfaceOne::_duplicate (interfaceOne_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::interfaceOne::_tao_release (interfaceOne_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::interfaceOne::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/interfaceOne:1.0"
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

const char* Test::interfaceOne::_interface_repository_id (void) const
{
  return "IDL:Test/interfaceOne:1.0";
}

::CORBA::Boolean
Test::interfaceOne::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_cs.cpp:74


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::structOne::ErrorInfo &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case 0:
      {
        result = strm << _tao_union.errorstring ();
      }
      break;
    case 10:
      {
        result = strm << _tao_union.errornumber ();
      }
      break;
    default:
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::structOne::ErrorInfo &_tao_union
  )
{
  CORBA::Long _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case 0:
      {
        ::CORBA::String_var _tao_union_tmp;
        result = strm >> _tao_union_tmp.out ();

        if (result)
          {
            _tao_union.errorstring (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    case 10:
      {
        CORBA::Long _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.errornumber (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      _tao_union._default ();
      // For maximum interop compatibility, force the same value as transmitted
      _tao_union._d (_tao_discriminant);
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::structOne &_tao_aggregate)
{
  return
    (strm << ::ACE_OutputCDR::from_boolean (_tao_aggregate.first)) &&
    (strm << _tao_aggregate.second);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::structOne &_tao_aggregate)
{
  return
    (strm >> ::ACE_InputCDR::to_boolean (_tao_aggregate.first)) &&
    (strm >> _tao_aggregate.second);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_cs.cpp:74


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::structTwo::ErrorInfo &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case 100:
      {
        result = strm << _tao_union.failstring ();
      }
      break;
    default:
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::structTwo::ErrorInfo &_tao_union
  )
{
  CORBA::Long _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case 100:
      {
        ::CORBA::String_var _tao_union_tmp;
        result = strm >> _tao_union_tmp.out ();

        if (result)
          {
            _tao_union.failstring (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      _tao_union._default ();
      // For maximum interop compatibility, force the same value as transmitted
      _tao_union._d (_tao_discriminant);
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_cs.cpp:49

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::structTwo &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.thisonly);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::structTwo &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.thisonly);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_cs.cpp:74


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::exceptionOne::ExceptionUnion &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case 100:
      {
        result = strm << _tao_union.failstring ();
      }
      break;
    default:
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::exceptionOne::ExceptionUnion &_tao_union
  )
{
  CORBA::Long _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case 100:
      {
        ::CORBA::String_var _tao_union_tmp;
        result = strm >> _tao_union_tmp.out ();

        if (result)
          {
            _tao_union.failstring (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      _tao_union._default ();
      // For maximum interop compatibility, force the same value as transmitted
      _tao_union._d (_tao_discriminant);
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::exceptionOne &_tao_aggregate
  )
{
  // First marshal the repository ID.
  if (strm << _tao_aggregate._rep_id ())
    {
      // Now marshal the members (if any).
      return (
        (strm << _tao_aggregate.exceptiononly)
       );
    }
  else
    {
      return false;
    }
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::exceptionOne &_tao_aggregate
  )
{
  // Demarshal the members.
  return (
    (strm >> _tao_aggregate.exceptiononly)
  );
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::interfaceOne_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::interfaceOne_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Test::interfaceOne RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



