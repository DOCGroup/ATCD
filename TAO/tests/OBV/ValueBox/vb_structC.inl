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
Interface1::Interface1 (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
Interface1::Interface1 (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_ci.cpp:147

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


ACE_INLINE
void
TAO::Array_Traits<short_array_forany>::free (
    short_array_slice * _tao_slice)
{
  short_array_free (_tao_slice);
}

ACE_INLINE
short_array_slice *
TAO::Array_Traits<short_array_forany>::dup (
    const short_array_slice * _tao_slice)
{
  return short_array_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<short_array_forany>::copy (
    short_array_slice * _tao_to,
    const short_array_slice * _tao_from)
{
  short_array_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<short_array_forany>::zero (
    short_array_slice * _tao_slice)
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 15; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Short ();
    }
}

ACE_INLINE
short_array_slice *
TAO::Array_Traits<short_array_forany>::alloc (void)
{
  return short_array_alloc ();
}


TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_union/union_ci.cpp:36

// *************************************************************
// Inline operations for union Union1
// *************************************************************

// TAO_IDL - Generated from
// be/be_visitor_union/discriminant_ci.cpp:145

ACE_INLINE
void
Union1::_default ()
{
  this->_reset ();
  this->disc_ = -2147483647;
}

// Accessor to set the discriminant.
ACE_INLINE
void
Union1::_d ( ::CORBA::Long discval)
{
  this->disc_ = discval;
}

// Accessor to get the discriminant.
ACE_INLINE
::CORBA::Long
Union1::_d (void) const
{
  return this->disc_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:577

// Accessor to set the member.
ACE_INLINE
void
Union1::m1 (CORBA::Long val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 1;
  // Set the value.
  this->u_.m1_ = val;
}

/// Retrieve the member.
ACE_INLINE
::CORBA::Long
Union1::m1 (void) const
{
  return this->u_.m1_;
}

// TAO_IDL - Generated from
// be/be_visitor_union_branch/public_ci.cpp:229

/// Accessor to set the member.
ACE_INLINE
void
Union1::m2 (Pet val)
{
  // Set the discriminant value.
  this->_reset ();
  this->disc_ = 2;
  // Set the value.
  this->u_.m2_ = val;
}

/// Retrieve the member.
ACE_INLINE
Pet
Union1::m2 (void) const
{
  return this->u_.m2_;
}

// TAO_IDL - Generated from
// be/be_visitor_array/array_ci.cpp:147

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


ACE_INLINE
void
TAO::Array_Traits<oct_array_forany>::free (
    oct_array_slice * _tao_slice)
{
  oct_array_free (_tao_slice);
}

ACE_INLINE
oct_array_slice *
TAO::Array_Traits<oct_array_forany>::dup (
    const oct_array_slice * _tao_slice)
{
  return oct_array_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<oct_array_forany>::copy (
    oct_array_slice * _tao_to,
    const oct_array_slice * _tao_from)
{
  oct_array_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<oct_array_forany>::zero (
    oct_array_slice * _tao_slice)
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 10; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Octet ();
    }
}

ACE_INLINE
oct_array_slice *
TAO::Array_Traits<oct_array_forany>::alloc (void)
{
  return oct_array_alloc ();
}


TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_valuebox/valuebox_ci.cpp:398

ACE_INLINE
VBfixed_struct1::VBfixed_struct1 (void)
{
  Fixed_Struct1* p = 0;
  ACE_NEW (
    p,
    Fixed_Struct1);
  this->_pd_value = p;
}

ACE_INLINE
VBfixed_struct1::VBfixed_struct1 (const Fixed_Struct1& value)
{
  Fixed_Struct1* p = 0;
  ACE_NEW (
    p,
    Fixed_Struct1 (value));
  this->_pd_value = p;
}

ACE_INLINE
VBfixed_struct1::VBfixed_struct1 (const VBfixed_struct1& val)
  : ::CORBA::ValueBase (val),
    ::CORBA::DefaultValueRefCountBase (val)
{
  Fixed_Struct1* p = 0;
  ACE_NEW (
    p,
    Fixed_Struct1 (val._pd_value.in ()));
  this->_pd_value = p;
}

ACE_INLINE VBfixed_struct1 &
VBfixed_struct1::operator= (const Fixed_Struct1& value)
{
  Fixed_Struct1* p = 0;
  ACE_NEW_RETURN (
    p,
    Fixed_Struct1 (value),
    *this);

  this->_pd_value = p;
  return *this;
}

ACE_INLINE const Fixed_Struct1 &
VBfixed_struct1::_value (void) const
{
  return this->_pd_value.in ();
}

ACE_INLINE Fixed_Struct1 &
VBfixed_struct1::_value (void)
{
  return this->_pd_value.inout ();
}

ACE_INLINE void
VBfixed_struct1::_value (const Fixed_Struct1& value)
{
  Fixed_Struct1* p = 0;
  ACE_NEW (
    p,
    Fixed_Struct1 (value));
  this->_pd_value = p;
}

ACE_INLINE const Fixed_Struct1 &
VBfixed_struct1::_boxed_in (void) const
{
  return this->_pd_value.in ();
}

ACE_INLINE Fixed_Struct1&
VBfixed_struct1::_boxed_inout (void)
{
  return this->_pd_value.inout ();
}

ACE_INLINE Fixed_Struct1&
VBfixed_struct1::_boxed_out (void)
{
  return this->_pd_value.out ();
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:335

// Modifier to set the member.
ACE_INLINE void
VBfixed_struct1::l ( ::CORBA::Long val)
{
  this->_pd_value->l = val;
}

/// Accessor to retrieve the member.
ACE_INLINE  ::CORBA::Long
VBfixed_struct1::l (void) const
{
  return this->_pd_value->l;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:492

// Modifier to set the member.
ACE_INLINE void
VBfixed_struct1::abstruct (const Fixed_Struct1::Bstruct & val)
{
  this->_pd_value->abstruct = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const Fixed_Struct1::Bstruct &
VBfixed_struct1::abstruct (void) const
{
  return this->_pd_value->abstruct;
}

/// Accessor to retrieve the member.
ACE_INLINE Fixed_Struct1::Bstruct &
VBfixed_struct1::abstruct (void)
{
  return this->_pd_value->abstruct;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/valuebox_ci.cpp:49
ACE_INLINE const char*
VBfixed_struct1::_tao_obv_static_repository_id ()
{
  return "IDL:VBfixed_struct1:1.0";
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/valuebox_ci.cpp:398

ACE_INLINE
VBvariable_struct1::VBvariable_struct1 (void)
{
  Variable_Struct1* p = 0;
  ACE_NEW (
    p,
    Variable_Struct1 ());
  this->_pd_value = p;
}

ACE_INLINE
VBvariable_struct1::VBvariable_struct1 (const Variable_Struct1& value)
{
  Variable_Struct1* p = 0;
  ACE_NEW (
    p,
    Variable_Struct1 (value));
  this->_pd_value = p;
}

ACE_INLINE
VBvariable_struct1::VBvariable_struct1 (const VBvariable_struct1& val)
  : ::CORBA::ValueBase (val),
    ::CORBA::DefaultValueRefCountBase (val)
{
  Variable_Struct1* p = 0;
  ACE_NEW (
    p,
    Variable_Struct1 (val._pd_value.in ()));
  this->_pd_value = p;
}

ACE_INLINE VBvariable_struct1 &
VBvariable_struct1::operator= (const Variable_Struct1& value)
{
  Variable_Struct1* p = 0;
  ACE_NEW_RETURN (
    p,
    Variable_Struct1 (value),
    *this);

  this->_pd_value = p;
  return *this;
}

ACE_INLINE const Variable_Struct1 &
VBvariable_struct1::_value (void) const
{
  return this->_pd_value.in ();
}

ACE_INLINE Variable_Struct1 &
VBvariable_struct1::_value (void)
{
  return this->_pd_value.inout ();
}

ACE_INLINE void
VBvariable_struct1::_value (const Variable_Struct1& value)
{
  Variable_Struct1* p = 0;
  ACE_NEW (
    p,
    Variable_Struct1 (value));
  this->_pd_value = p;
}

ACE_INLINE const Variable_Struct1 &
VBvariable_struct1::_boxed_in (void) const
{
  return this->_pd_value.in ();
}

ACE_INLINE Variable_Struct1&
VBvariable_struct1::_boxed_inout (void)
{
  return this->_pd_value.inout ();
}

ACE_INLINE Variable_Struct1*&
VBvariable_struct1::_boxed_out (void)
{
  return this->_pd_value.out ();
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:335

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct1::l ( ::CORBA::Long val)
{
  this->_pd_value->l = val;
}

/// Accessor to retrieve the member.
ACE_INLINE  ::CORBA::Long
VBvariable_struct1::l (void) const
{
  return this->_pd_value->l;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:434

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct1::str (char * val)
{
  this->_pd_value->str = val;
}

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct1::str (const char * val)
{
  this->_pd_value->str = val;
}

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct1::str (const ::CORBA::String_var & val)
{
  this->_pd_value->str = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const char *
VBvariable_struct1::str (void) const
{
  return this->_pd_value->str;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/valuebox_ci.cpp:49
ACE_INLINE const char*
VBvariable_struct1::_tao_obv_static_repository_id ()
{
  return "IDL:VBvariable_struct1:1.0";
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/valuebox_ci.cpp:398

ACE_INLINE
VBvariable_struct2::VBvariable_struct2 (void)
{
  Variable_Struct2* p = 0;
  ACE_NEW (
    p,
    Variable_Struct2 ());
  this->_pd_value = p;
}

ACE_INLINE
VBvariable_struct2::VBvariable_struct2 (const Variable_Struct2& value)
{
  Variable_Struct2* p = 0;
  ACE_NEW (
    p,
    Variable_Struct2 (value));
  this->_pd_value = p;
}

ACE_INLINE
VBvariable_struct2::VBvariable_struct2 (const VBvariable_struct2& val)
  : ::CORBA::ValueBase (val),
    ::CORBA::DefaultValueRefCountBase (val)
{
  Variable_Struct2* p = 0;
  ACE_NEW (
    p,
    Variable_Struct2 (val._pd_value.in ()));
  this->_pd_value = p;
}

ACE_INLINE VBvariable_struct2 &
VBvariable_struct2::operator= (const Variable_Struct2& value)
{
  Variable_Struct2* p = 0;
  ACE_NEW_RETURN (
    p,
    Variable_Struct2 (value),
    *this);

  this->_pd_value = p;
  return *this;
}

ACE_INLINE const Variable_Struct2 &
VBvariable_struct2::_value (void) const
{
  return this->_pd_value.in ();
}

ACE_INLINE Variable_Struct2 &
VBvariable_struct2::_value (void)
{
  return this->_pd_value.inout ();
}

ACE_INLINE void
VBvariable_struct2::_value (const Variable_Struct2& value)
{
  Variable_Struct2* p = 0;
  ACE_NEW (
    p,
    Variable_Struct2 (value));
  this->_pd_value = p;
}

ACE_INLINE const Variable_Struct2 &
VBvariable_struct2::_boxed_in (void) const
{
  return this->_pd_value.in ();
}

ACE_INLINE Variable_Struct2&
VBvariable_struct2::_boxed_inout (void)
{
  return this->_pd_value.inout ();
}

ACE_INLINE Variable_Struct2*&
VBvariable_struct2::_boxed_out (void)
{
  return this->_pd_value.out ();
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:335

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::len ( ::CORBA::Long val)
{
  this->_pd_value->len = val;
}

/// Accessor to retrieve the member.
ACE_INLINE  ::CORBA::Long
VBvariable_struct2::len (void) const
{
  return this->_pd_value->len;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:335

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::whatever (const ::CORBA::Any & val)
{
  this->_pd_value->whatever = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const ::CORBA::Any &
VBvariable_struct2::whatever (void) const
{
  return this->_pd_value->whatever;
}

/// Accessor to retrieve the member.
ACE_INLINE  ::CORBA::Any &
VBvariable_struct2::whatever (void)
{
  return this->_pd_value->whatever;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:178

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::apet (Pet val)
{
  this->_pd_value->apet = val;
}

/// Accessor to retrieve the member.
ACE_INLINE Pet
VBvariable_struct2::apet (void) const
{
  return this->_pd_value->apet;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:124

/// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::octet_array (oct_array val)
{
  oct_array_copy (this->_pd_value->octet_array, val);
}

/// Accessor to retrieve the member.
ACE_INLINE const oct_array_slice *
VBvariable_struct2::octet_array (void) const
{
  return this->_pd_value->octet_array;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:124

/// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::td_array (short_array val)
{
  short_array_copy (this->_pd_value->td_array, val);
}

/// Accessor to retrieve the member.
ACE_INLINE const short_array_slice *
VBvariable_struct2::td_array (void) const
{
  return this->_pd_value->td_array;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:215

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::intf1 (Interface1_ptr val)
{
  this->_pd_value->intf1 = TAO::Objref_Traits< ::Interface1>::duplicate (val);
}

/// Accessor to retrieve the member.
ACE_INLINE Interface1_ptr
VBvariable_struct2::intf1 (void) const
{
  return this->_pd_value->intf1.in ();
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:215

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::intf2 (InterfaceFwd_ptr val)
{
  this->_pd_value->intf2 = TAO::Objref_Traits< ::InterfaceFwd>::duplicate (val);
}

/// Accessor to retrieve the member.
ACE_INLINE InterfaceFwd_ptr
VBvariable_struct2::intf2 (void) const
{
  return this->_pd_value->intf2.in ();
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:434

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::str (char * val)
{
  this->_pd_value->str = val;
}

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::str (const char * val)
{
  this->_pd_value->str = val;
}

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::str (const ::CORBA::String_var & val)
{
  this->_pd_value->str = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const char *
VBvariable_struct2::str (void) const
{
  return this->_pd_value->str;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:434

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::wstr (CORBA::WChar * val)
{
  this->_pd_value->wstr = val;
}

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::wstr (const CORBA::WChar * val)
{
  this->_pd_value->wstr = val;
}

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::wstr (const ::CORBA::WString_var & val)
{
  this->_pd_value->wstr = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const CORBA::WChar *
VBvariable_struct2::wstr (void) const
{
  return this->_pd_value->wstr;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:397

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::ls (const LongSeq & val)
{
  this->_pd_value->ls = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const LongSeq &
VBvariable_struct2::ls (void) const
{
  return this->_pd_value->ls;
}

/// Accessor to retrieve the member.
ACE_INLINE LongSeq &
VBvariable_struct2::ls (void)
{
  return this->_pd_value->ls;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:397

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::sqq (const PetSeq & val)
{
  this->_pd_value->sqq = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const PetSeq &
VBvariable_struct2::sqq (void) const
{
  return this->_pd_value->sqq;
}

/// Accessor to retrieve the member.
ACE_INLINE PetSeq &
VBvariable_struct2::sqq (void)
{
  return this->_pd_value->sqq;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:492

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::ns1 (const Variable_Struct2::NestedStruct1 & val)
{
  this->_pd_value->ns1 = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const Variable_Struct2::NestedStruct1 &
VBvariable_struct2::ns1 (void) const
{
  return this->_pd_value->ns1;
}

/// Accessor to retrieve the member.
ACE_INLINE Variable_Struct2::NestedStruct1 &
VBvariable_struct2::ns1 (void)
{
  return this->_pd_value->ns1;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:492

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::NestedStruct2 (const Variable_Struct1 & val)
{
  this->_pd_value->NestedStruct2 = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const Variable_Struct1 &
VBvariable_struct2::NestedStruct2 (void) const
{
  return this->_pd_value->NestedStruct2;
}

/// Accessor to retrieve the member.
ACE_INLINE Variable_Struct1 &
VBvariable_struct2::NestedStruct2 (void)
{
  return this->_pd_value->NestedStruct2;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:492

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::NestedStruct3 (const TDvariable_struct1 & val)
{
  this->_pd_value->NestedStruct3 = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const TDvariable_struct1 &
VBvariable_struct2::NestedStruct3 (void) const
{
  return this->_pd_value->NestedStruct3;
}

/// Accessor to retrieve the member.
ACE_INLINE TDvariable_struct1 &
VBvariable_struct2::NestedStruct3 (void)
{
  return this->_pd_value->NestedStruct3;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/field_ci.cpp:548

// Modifier to set the member.
ACE_INLINE void
VBvariable_struct2::un (const Union1 & val)
{
  this->_pd_value->un = val;
}

/// Accessor to retrieve the member.
ACE_INLINE const Union1 &
VBvariable_struct2::un (void) const
{
  return this->_pd_value->un;
}

/// Accessor to retrieve the member.
ACE_INLINE Union1 &
VBvariable_struct2::un (void)
{
  return this->_pd_value->un;
}



// TAO_IDL - Generated from
// be/be_visitor_valuebox/valuebox_ci.cpp:49
ACE_INLINE const char*
VBvariable_struct2::_tao_obv_static_repository_id ()
{
  return "IDL:VBvariable_struct2:1.0";
}



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:59

ACE_INLINE
InterfaceFwd::InterfaceFwd (
    TAO_Stub *objref,
    ::CORBA::Boolean _tao_collocated,
    TAO_Abstract_ServantBase *servant,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (objref, _tao_collocated, servant, oc)
{
}

ACE_INLINE
InterfaceFwd::InterfaceFwd (
    ::IOP::IOR *ior,
    TAO_ORB_Core *oc)
  : ::CORBA::Object (ior, oc)
{
}

