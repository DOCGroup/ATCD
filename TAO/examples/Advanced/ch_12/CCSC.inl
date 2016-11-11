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
// be/be_visitor_interface/interface_ci.cpp:59

ACE_INLINE
CCS::Thermometer::Thermometer (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
CCS::Thermometer::Thermometer (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:59

ACE_INLINE
CCS::Thermostat::Thermostat (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
CCS::Thermostat::Thermostat (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

// TAO_IDL - Generated from
// be/be_visitor_union/union_ci.cpp:36

// *************************************************************
// Inline operations for union CCS::Controller::KeyType
// *************************************************************

// TAO_IDL - Generated from
// be/be_visitor_union/discriminant_ci.cpp:55

ACE_INLINE
void
CCS::Controller::KeyType::_default ()
{
  this->_reset ();
  this->disc_ = static_cast <CCS::Controller::SearchCriterion> (-1);
}

// Accessor to set the discriminant.
ACE_INLINE
void
CCS::Controller::KeyType::_d (CCS::Controller::SearchCriterion discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
CCS::Controller::SearchCriterion
CCS::Controller::KeyType::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:577

// Accessor to set the member.
ACE_INLINE
void
CCS::Controller::KeyType::asset_num (CCS::AssetType val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = CCS::Controller::ASSET;
  // Set the value.
  this->u_.asset_num_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CCS::AssetType
CCS::Controller::KeyType::asset_num (void) const
{
  return this->u_.asset_num_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:862

/// Accessor to set the member.
ACE_INLINE
void
CCS::Controller::KeyType::loc (char *val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = CCS::Controller::LOCATION;
  this->u_.loc_ = val;
}

// Accessor to set the member.
ACE_INLINE
void
CCS::Controller::KeyType::loc (const char *val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = CCS::Controller::LOCATION;
  // Set the value.
  this->u_.loc_ = ::CORBA::string_dup (val);
}

/// Accessor to set the member.
ACE_INLINE
void
CCS::Controller::KeyType::loc (const ::CORBA::String_var &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = CCS::Controller::LOCATION;
  // Set the value.
  ::CORBA::String_var loc_var = val;
  this->u_.loc_ = loc_var._retn ();
}

ACE_INLINE
const char *
CCS::Controller::KeyType::loc (void) const // get method
{
  return this->u_.loc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:862

/// Accessor to set the member.
ACE_INLINE
void
CCS::Controller::KeyType::model_desc (char *val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = CCS::Controller::MODEL;
  this->u_.model_desc_ = val;
}

// Accessor to set the member.
ACE_INLINE
void
CCS::Controller::KeyType::model_desc (const char *val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = CCS::Controller::MODEL;
  // Set the value.
  this->u_.model_desc_ = ::CORBA::string_dup (val);
}

/// Accessor to set the member.
ACE_INLINE
void
CCS::Controller::KeyType::model_desc (const ::CORBA::String_var &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = CCS::Controller::MODEL;
  // Set the value.
  ::CORBA::String_var model_desc_var = val;
  this->u_.model_desc_ = model_desc_var._retn ();
}

ACE_INLINE
const char *
CCS::Controller::KeyType::model_desc (void) const // get method
{
  return this->u_.model_desc_;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:59

ACE_INLINE
CCS::Controller::Controller (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
CCS::Controller::Controller (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

