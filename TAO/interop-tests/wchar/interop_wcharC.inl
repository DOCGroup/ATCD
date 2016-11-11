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
TAO::Array_Traits<interop::warray_forany>::free (
    interop::warray_slice * _tao_slice)
{
  interop::warray_free (_tao_slice);
}

ACE_INLINE
interop::warray_slice *
TAO::Array_Traits<interop::warray_forany>::dup (
    const interop::warray_slice * _tao_slice)
{
  return interop::warray_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<interop::warray_forany>::copy (
    interop::warray_slice * _tao_to,
    const interop::warray_slice * _tao_from)
{
  interop::warray_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<interop::warray_forany>::zero (
    interop::warray_slice * _tao_slice)
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 10; ++i0)
    {
      _tao_slice[i0] = ::CORBA::WChar ();
    }
}

ACE_INLINE
interop::warray_slice *
TAO::Array_Traits<interop::warray_forany>::alloc (void)
{
  return interop::warray_alloc ();
}


TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_union/union_ci.cpp:36

// *************************************************************
// Inline operations for union interop::wunion
// *************************************************************

// TAO_IDL - Generated from
// be/be_visitor_union/discriminant_ci.cpp:55

ACE_INLINE
void
interop::wunion::_default ()
{
  this->_reset ();
  this->disc_ = static_cast <interop::wchar_types> (-1);
}

// Accessor to set the discriminant.
ACE_INLINE
void
interop::wunion::_d (interop::wchar_types discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
interop::wchar_types
interop::wunion::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:577

// Accessor to set the member.
ACE_INLINE
void
interop::wunion::u_char (CORBA::WChar val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = interop::is_wchar;
  // Set the value.
  this->u_.u_char_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::WChar
interop::wunion::u_char (void) const
{
  return this->u_.u_char_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:862

/// Accessor to set the member.
ACE_INLINE
void
interop::wunion::u_string ( ::CORBA::WChar *val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = interop::is_wstring;
  this->u_.u_string_ = val;
}

// Accessor to set the member.
ACE_INLINE
void
interop::wunion::u_string (const ::CORBA::WChar *val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = interop::is_wstring;
  // Set the value.
  this->u_.u_string_ = ::CORBA::wstring_dup (val);
}

/// Accessor to set the member.
ACE_INLINE
void
interop::wunion::u_string (const ::CORBA::WString_var &val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = interop::is_wstring;
  // Set the value.
  ::CORBA::WString_var u_string_var = val;
  this->u_.u_string_ = u_string_var._retn ();
}

ACE_INLINE
const ::CORBA::WChar *
interop::wunion::u_string (void) const // get method
{
  return this->u_.u_string_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:157

// Accessor to set the member.
ACE_INLINE
void
interop::wunion::u_array (interop::warray val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = interop::is_warray;
  // Set the value.
  this->u_.u_array_ = interop::warray_dup (val);
}

/// Retrieve the member.
ACE_INLINE
interop::warray_slice *
interop::wunion::u_array (void) const
{
  return this->u_.u_array_;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:59

ACE_INLINE
interop::WChar_Passer::WChar_Passer (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
interop::WChar_Passer::WChar_Passer (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

