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
// Inline operations for union Demo::BaseUnion
// *************************************************************

// TAO_IDL - Generated from
// be/be_visitor_union/discriminant_ci.cpp:145



// Accessor to set the discriminant.
ACE_INLINE
void
Demo::BaseUnion::_d ( ::CORBA::Short discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
::CORBA::Short
Demo::BaseUnion::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:862

/// Accessor to set the member.
ACE_INLINE
void
Demo::BaseUnion::str (char *val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 1;
  this->u_.str_ = val;
}

// Accessor to set the member.
ACE_INLINE
void
Demo::BaseUnion::str (const char *val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 1;
  // Set the value.
  this->u_.str_ = ::CORBA::string_dup (val);
}

/// Accessor to set the member.
ACE_INLINE
void
Demo::BaseUnion::str (const ::CORBA::String_var &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 1;
  // Set the value.
  ::CORBA::String_var str_var = val;
  this->u_.str_ = str_var._retn ();
}

ACE_INLINE
const char *
Demo::BaseUnion::str (void) const // get method
{
  return this->u_.str_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:577

// Accessor to set the member.
ACE_INLINE
void
Demo::BaseUnion::l (CORBA::Long val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 2;
  // Set the value.
  this->u_.l_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Long
Demo::BaseUnion::l (void) const
{
  return this->u_.l_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:577

// Accessor to set the member.
ACE_INLINE
void
Demo::BaseUnion::s (CORBA::Short val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = -32768;
  // Set the value.
  this->u_.s_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Short
Demo::BaseUnion::s (void) const
{
  return this->u_.s_;
}

// TAO_IDL - Generated from
// be/be_visitor_union/union_ci.cpp:36

// *************************************************************
// Inline operations for union Demo::NestedUnion
// *************************************************************

// TAO_IDL - Generated from
// be/be_visitor_union/discriminant_ci.cpp:145



// Accessor to set the discriminant.
ACE_INLINE
void
Demo::NestedUnion::_d ( ::CORBA::Short discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
::CORBA::Short
Demo::NestedUnion::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:1232

// Accessor to set the member.
ACE_INLINE
void
Demo::NestedUnion::bar1 (const Demo::BaseUnion &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 1;
  ACE_NEW (
      this->u_.bar1_,
      Demo::BaseUnion (val)
    );
}

// Readonly get method.
ACE_INLINE
const Demo::BaseUnion &
Demo::NestedUnion::bar1 (void) const
{
  return *this->u_.bar1_;
}

// Read/write get method.
ACE_INLINE
Demo::BaseUnion &
Demo::NestedUnion::bar1 (void)
{
  return *this->u_.bar1_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:1232

// Accessor to set the member.
ACE_INLINE
void
Demo::NestedUnion::bar2 (const Demo::BaseUnion &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 2;
  ACE_NEW (
      this->u_.bar2_,
      Demo::BaseUnion (val)
    );
}

// Readonly get method.
ACE_INLINE
const Demo::BaseUnion &
Demo::NestedUnion::bar2 (void) const
{
  return *this->u_.bar2_;
}

// Read/write get method.
ACE_INLINE
Demo::BaseUnion &
Demo::NestedUnion::bar2 (void)
{
  return *this->u_.bar2_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:1232

// Accessor to set the member.
ACE_INLINE
void
Demo::NestedUnion::defaultBar (const Demo::BaseUnion &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = -32768;
  ACE_NEW (
      this->u_.defaultBar_,
      Demo::BaseUnion (val)
    );
}

// Readonly get method.
ACE_INLINE
const Demo::BaseUnion &
Demo::NestedUnion::defaultBar (void) const
{
  return *this->u_.defaultBar_;
}

// Read/write get method.
ACE_INLINE
Demo::BaseUnion &
Demo::NestedUnion::defaultBar (void)
{
  return *this->u_.defaultBar_;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
Demo::BaseValue::BaseValue (void)
{}

ACE_INLINE const char*
Demo::BaseValue::_tao_obv_static_repository_id ()
{
  return "IDL:Demo/BaseValue:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
Demo::NestedValue::NestedValue (void)
{}

ACE_INLINE const char*
Demo::NestedValue::_tao_obv_static_repository_id ()
{
  return "IDL:Demo/NestedValue:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:59

ACE_INLINE
Demo::ATC_Test::ATC_Test (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
Demo::ATC_Test::ATC_Test (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

