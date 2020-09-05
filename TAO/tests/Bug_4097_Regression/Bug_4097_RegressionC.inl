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
// Inline operations for union MultiLabelUnion
// *************************************************************

// TAO_IDL - Generated from
// be/be_visitor_union/discriminant_ci.cpp:145

ACE_INLINE
void
MultiLabelUnion::_default ()
{
  this->_reset ();
  this->disc_ = -2147483647;
}

// Accessor to set the discriminant.
ACE_INLINE
void
MultiLabelUnion::_d ( ::CORBA::Long discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
::CORBA::Long
MultiLabelUnion::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:577

// Accessor to set the member.
ACE_INLINE
void
MultiLabelUnion::mlu_char (CORBA::Char val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 0;
  // Set the value.
  this->u_.mlu_char_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Char
MultiLabelUnion::mlu_char (void) const
{
  return this->u_.mlu_char_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:577

// Accessor to set the member.
ACE_INLINE
void
MultiLabelUnion::mlu_long (CORBA::Long val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 2;
  // Set the value.
  this->u_.mlu_long_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Long
MultiLabelUnion::mlu_long (void) const
{
  return this->u_.mlu_long_;
}

