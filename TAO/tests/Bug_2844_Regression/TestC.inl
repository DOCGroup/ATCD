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
// Inline operations for union Test::NestedRecursiveStruct5::MyUnion5
// *************************************************************

// TAO_IDL - Generated from
// be/be_visitor_union/discriminant_ci.cpp:145



// Accessor to set the discriminant.
ACE_INLINE
void
Test::NestedRecursiveStruct5::MyUnion5::_d ( ::CORBA::Short discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
::CORBA::Short
Test::NestedRecursiveStruct5::MyUnion5::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union/union_ci.cpp:36

// *************************************************************
// Inline operations for union Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5
// *************************************************************

// TAO_IDL - Generated from
// be/be_visitor_union/discriminant_ci.cpp:145

ACE_INLINE
void
Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5::_default ()
{
  this->_reset ();
  this->disc_ = -32768;
}

// Accessor to set the discriminant.
ACE_INLINE
void
Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5::_d ( ::CORBA::Short discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
::CORBA::Short
Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:788

/// Accessor to set the member.
ACE_INLINE
void
Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5::recursive_structs5 (const Test::NestedRecursiveStructSeq5 &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 0;
  ACE_NEW (
      this->u_.recursive_structs5_,
      Test::NestedRecursiveStructSeq5 (val)
    );
}

/// Readonly get method.
ACE_INLINE
const Test::NestedRecursiveStructSeq5 &
Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5::recursive_structs5 (void) const
{
  return *this->u_.recursive_structs5_;
}

/// Read/write get method.
ACE_INLINE
Test::NestedRecursiveStructSeq5 &
Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5::recursive_structs5 (void)
{
  return *this->u_.recursive_structs5_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:1065

/// Accessor to set the member.
ACE_INLINE
void
Test::NestedRecursiveStruct5::MyUnion5::ins65 (const Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 0;
  ACE_NEW (
      this->u_.ins65_,
      Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 (val)
    );
}

// Readonly get method.
ACE_INLINE
const Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 &
Test::NestedRecursiveStruct5::MyUnion5::ins65 (void) const
{
  return *this->u_.ins65_;
}

// Read/write get method.
ACE_INLINE
Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 &
Test::NestedRecursiveStruct5::MyUnion5::ins65 (void)
{
  return *this->u_.ins65_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:577

// Accessor to set the member.
ACE_INLINE
void
Test::NestedRecursiveStruct5::MyUnion5::i (CORBA::Long val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = -32768;
  // Set the value.
  this->u_.i_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Long
Test::NestedRecursiveStruct5::MyUnion5::i (void) const
{
  return this->u_.i_;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:59

ACE_INLINE
Test::Hello::Hello (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
Test::Hello::Hello (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

