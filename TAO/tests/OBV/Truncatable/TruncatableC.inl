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
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
OBV_TruncatableTest::BaseValue::BaseValue (void)
{}

ACE_INLINE const char*
OBV_TruncatableTest::BaseValue::_tao_obv_static_repository_id ()
{
  return "IDL:OBV_TruncatableTest/BaseValue:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
OBV_TruncatableTest::TValue1::TValue1 (void)
{
  this->is_truncatable_ = true;
}

ACE_INLINE const char*
OBV_TruncatableTest::TValue1::_tao_obv_static_repository_id ()
{
  return "IDL:OBV_TruncatableTest/TValue1:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
OBV_TruncatableTest::TValue2::TValue2 (void)
{
  this->is_truncatable_ = true;
}

ACE_INLINE const char*
OBV_TruncatableTest::TValue2::_tao_obv_static_repository_id ()
{
  return "IDL:OBV_TruncatableTest/TValue2:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
OBV_TruncatableTest::TValue3::TValue3 (void)
{}

ACE_INLINE const char*
OBV_TruncatableTest::TValue3::_tao_obv_static_repository_id ()
{
  return "IDL:OBV_TruncatableTest/TValue3:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
OBV_TruncatableTest::NestedValue::NestedValue (void)
{}

ACE_INLINE const char*
OBV_TruncatableTest::NestedValue::_tao_obv_static_repository_id ()
{
  return "IDL:OBV_TruncatableTest/NestedValue:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
OBV_TruncatableTest::TValue4::TValue4 (void)
{
  this->is_truncatable_ = true;
}

ACE_INLINE const char*
OBV_TruncatableTest::TValue4::_tao_obv_static_repository_id ()
{
  return "IDL:OBV_TruncatableTest/TValue4:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
OBV_TruncatableTest::TValue5::TValue5 (void)
{
  this->is_truncatable_ = true;
}

ACE_INLINE const char*
OBV_TruncatableTest::TValue5::_tao_obv_static_repository_id ()
{
  return "IDL:OBV_TruncatableTest/TValue5:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
OBV_TruncatableTest::TValue6::TValue6 (void)
{
  this->is_truncatable_ = true;
}

ACE_INLINE const char*
OBV_TruncatableTest::TValue6::_tao_obv_static_repository_id ()
{
  return "IDL:OBV_TruncatableTest/TValue6:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:59

ACE_INLINE
OBV_TruncatableTest::Test::Test (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
OBV_TruncatableTest::Test::Test (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

