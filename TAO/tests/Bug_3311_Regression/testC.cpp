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
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_union/union_cs.cpp:76

CityBlue::CityBlue (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = 0;
}

CityBlue::CityBlue (const ::CityBlue &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case ACE_UINT64_LITERAL (1):
    {
      this->u_.ucb_long_ = u.u_.ucb_long_;
    }
    break;
    default:
    {
      this->u_.ucb_short_ = u.u_.ucb_short_;
    }
    break;
  }
}

CityBlue::~CityBlue (void)
{
  // Finalize.
  this->_reset ();
}

CityBlue &
CityBlue::operator= (const ::CityBlue &u)
{
  if (&u == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case ACE_UINT64_LITERAL (1):
    {
      this->u_.ucb_long_ = u.u_.ucb_long_;
    }
    break;
    default:
    {
      this->u_.ucb_short_ = u.u_.ucb_short_;
    }
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void CityBlue::_reset (void)
{
  switch (this->disc_)
  {
    
    case ACE_UINT64_LITERAL (1):
      
    break;
    
    default:
      
    break;
    
  }
}

// TAO_IDL - Generated from
// be/be_visitor_union/union_cs.cpp:76

CityMan::CityMan (void)
{
  ACE_OS::memset (&this->u_, 0, sizeof (this->u_));
  this->disc_ = 0;
}

CityMan::CityMan (const ::CityMan &u)
{
  this->disc_ = u.disc_;
  switch (this->disc_)
  {
    case ACE_INT64_LITERAL (1):
    {
      this->u_.ucm_long_ = u.u_.ucm_long_;
    }
    break;
    default:
    {
      this->u_.ucm_short_ = u.u_.ucm_short_;
    }
    break;
  }
}

CityMan::~CityMan (void)
{
  // Finalize.
  this->_reset ();
}

CityMan &
CityMan::operator= (const ::CityMan &u)
{
  if (&u == this)
    {
      return *this;
    }
  
  this->_reset ();
  this->disc_ = u.disc_;

  switch (this->disc_)
  {
    case ACE_INT64_LITERAL (1):
    {
      this->u_.ucm_long_ = u.u_.ucm_long_;
    }
    break;
    default:
    {
      this->u_.ucm_short_ = u.u_.ucm_short_;
    }
    break;
  }
  
  return *this;
}

/// Reset method to reset old values of a union.
void CityMan::_reset (void)
{
  switch (this->disc_)
  {
    
    case ACE_INT64_LITERAL (1):
      
    break;
    
    default:
      
    break;
    
  }
}

// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_cs.cpp:74


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CityBlue &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case ACE_UINT64_LITERAL (1):
      {
        result = strm << _tao_union.ucb_long ();
      }
      break;
    default:
      {
        result = strm << _tao_union.ucb_short ();
      }
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CityBlue &_tao_union
  )
{
  CORBA::ULongLong _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case ACE_UINT64_LITERAL (1):
      {
        CORBA::Long _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.ucb_long (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      {
        CORBA::Short _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.ucb_short (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_cs.cpp:74


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CityMan &_tao_union
  )
{
  if ( !(strm << _tao_union._d ()) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_union._d ())
  {
    case ACE_INT64_LITERAL (1):
      {
        result = strm << _tao_union.ucm_long ();
      }
      break;
    default:
      {
        result = strm << _tao_union.ucm_short ();
      }
      break;
  }

  return result;
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CityMan &_tao_union
  )
{
  CORBA::LongLong _tao_discriminant;
  if ( !(strm >> _tao_discriminant) )
    {
      return false;
    }
  
  ::CORBA::Boolean result = true;

  switch (_tao_discriminant)
  {
    case ACE_INT64_LITERAL (1):
      {
        CORBA::Long _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.ucm_long (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
    default:
      {
        CORBA::Short _tao_union_tmp;
        result = strm >> _tao_union_tmp;

        if (result)
          {
            _tao_union.ucm_short (_tao_union_tmp);
            _tao_union._d (_tao_discriminant);
          }
      }
      break;
  }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL



