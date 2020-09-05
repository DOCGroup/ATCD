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
// be/be_visitor_union/union_ci.cpp:36

// *************************************************************
// Inline operations for union DynAnyTest::EventData
// *************************************************************

// TAO_IDL - Generated from
// be/be_visitor_union/discriminant_ci.cpp:55

ACE_INLINE
void
DynAnyTest::EventData::_default ()
{
  this->_reset ();
  this->disc_ = static_cast <DynAnyTest::EventKind> (-1);
}

// Accessor to set the discriminant.
ACE_INLINE
void
DynAnyTest::EventData::_d (DynAnyTest::EventKind discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
DynAnyTest::EventKind
DynAnyTest::EventData::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:577

// Accessor to set the member.
ACE_INLINE
void
DynAnyTest::EventData::ev_data (const ::CORBA::Any & val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = DynAnyTest::ALARM_EVENT;
  ACE_NEW (
      this->u_.ev_data_,
      ::CORBA::Any (val)
    );
}

/// Retrieve the member.
ACE_INLINE
const ::CORBA::Any &
DynAnyTest::EventData::ev_data (void) const
{
  return *this->u_.ev_data_;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Any &
DynAnyTest::EventData::ev_data (void)
{
  return *this->u_.ev_data_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:862

/// Accessor to set the member.
ACE_INLINE
void
DynAnyTest::EventData::ev_desc (char *val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = DynAnyTest::LOG_EVENT;
  this->u_.ev_desc_ = val;
}

// Accessor to set the member.
ACE_INLINE
void
DynAnyTest::EventData::ev_desc (const char *val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = DynAnyTest::LOG_EVENT;
  // Set the value.
  this->u_.ev_desc_ = ::CORBA::string_dup (val);
}

/// Accessor to set the member.
ACE_INLINE
void
DynAnyTest::EventData::ev_desc (const ::CORBA::String_var &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = DynAnyTest::LOG_EVENT;
  // Set the value.
  ::CORBA::String_var ev_desc_var = val;
  this->u_.ev_desc_ = ev_desc_var._retn ();
}

ACE_INLINE
const char *
DynAnyTest::EventData::ev_desc (void) const // get method
{
  return this->u_.ev_desc_;
}

