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
TAO::Array_Traits<Array_Typedef_forany>::free (
    Array_Typedef_slice * _tao_slice)
{
  Array_Typedef_free (_tao_slice);
}

ACE_INLINE
Array_Typedef_slice *
TAO::Array_Traits<Array_Typedef_forany>::dup (
    const Array_Typedef_slice * _tao_slice)
{
  return Array_Typedef_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<Array_Typedef_forany>::copy (
    Array_Typedef_slice * _tao_to,
    const Array_Typedef_slice * _tao_from)
{
  Array_Typedef_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<Array_Typedef_forany>::zero (
    Array_Typedef_slice * _tao_slice)
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 1; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Octet ();
    }
}

ACE_INLINE
Array_Typedef_slice *
TAO::Array_Traits<Array_Typedef_forany>::alloc (void)
{
  return Array_Typedef_alloc ();
}


TAO_END_VERSIONED_NAMESPACE_DECL


