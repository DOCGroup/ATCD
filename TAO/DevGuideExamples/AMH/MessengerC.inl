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
DevGuide::Messenger::Messenger (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
DevGuide::Messenger::Messenger (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_ci.cpp:44

ACE_INLINE
DevGuide::AMH_MessengerExceptionHolder::AMH_MessengerExceptionHolder (void)
  : exception (0)
{}

ACE_INLINE const char*
DevGuide::AMH_MessengerExceptionHolder::_tao_obv_static_repository_id ()
{
  return "IDL:DevGuide/AMH_MessengerExceptionHolder:1.0";
}

