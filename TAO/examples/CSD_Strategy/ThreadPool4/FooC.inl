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
// be/be_visitor_array/array_ci.cpp:147

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


ACE_INLINE
void
TAO::Array_Traits<Fixed_Array_forany>::free (
    Fixed_Array_slice * _tao_slice)
{
  Fixed_Array_free (_tao_slice);
}

ACE_INLINE
Fixed_Array_slice *
TAO::Array_Traits<Fixed_Array_forany>::dup (
    const Fixed_Array_slice * _tao_slice)
{
  return Fixed_Array_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<Fixed_Array_forany>::copy (
    Fixed_Array_slice * _tao_to,
    const Fixed_Array_slice * _tao_from)
{
  Fixed_Array_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<Fixed_Array_forany>::zero (
    Fixed_Array_slice * _tao_slice)
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 20; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Long ();
    }
}

ACE_INLINE
Fixed_Array_slice *
TAO::Array_Traits<Fixed_Array_forany>::alloc (void)
{
  return Fixed_Array_alloc ();
}


TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_array/array_ci.cpp:147

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


ACE_INLINE
void
TAO::Array_Traits<Var_Array_forany>::free (
    Var_Array_slice * _tao_slice)
{
  Var_Array_free (_tao_slice);
}

ACE_INLINE
Var_Array_slice *
TAO::Array_Traits<Var_Array_forany>::dup (
    const Var_Array_slice * _tao_slice)
{
  return Var_Array_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<Var_Array_forany>::copy (
    Var_Array_slice * _tao_to,
    const Var_Array_slice * _tao_from)
{
  Var_Array_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<Var_Array_forany>::zero (
    Var_Array_slice * _tao_slice)
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 3; ++i0)
    {
      _tao_slice[i0] = ::TAO::String_Manager ();
    }
}

ACE_INLINE
Var_Array_slice *
TAO::Array_Traits<Var_Array_forany>::alloc (void)
{
  return Var_Array_alloc ();
}


TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:59

ACE_INLINE
Foo::Foo (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
Foo::Foo (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

