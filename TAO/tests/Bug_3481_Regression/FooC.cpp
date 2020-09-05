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
// be/be_codegen.cpp:373


#include "FooC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "FooC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Foo.

Foo_ptr
TAO::Objref_Traits<Foo>::duplicate (
    Foo_ptr p)
{
  return Foo::_duplicate (p);
}

void
TAO::Objref_Traits<Foo>::release (
    Foo_ptr p)
{
  ::CORBA::release (p);
}

Foo_ptr
TAO::Objref_Traits<Foo>::nil (void)
{
  return Foo::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Foo>::marshal (
    const Foo_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Foo::Foo (void)
{}

Foo::~Foo (void)
{
}

Foo_ptr
Foo::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Foo::_duplicate (
      dynamic_cast<Foo_ptr> (_tao_objref)
    );
}

Foo_ptr
Foo::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Foo::_duplicate (
      dynamic_cast<Foo_ptr> (_tao_objref)
    );
}

Foo_ptr
Foo::_nil (void)
{
  return 0;
}

Foo_ptr
Foo::_duplicate (Foo_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Foo::_tao_release (Foo_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Foo::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Foo:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Foo::_interface_repository_id (void) const
{
  return "IDL:Foo:1.0";
}

::CORBA::Boolean
Foo::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_FOOSEQ_CS_)
#define _FOOSEQ_CS_

FooSeq::FooSeq (void)
{}

FooSeq::FooSeq (
    ::CORBA::ULong max)
  : ::TAO::unbounded_object_reference_sequence<
        Foo,
        Foo_var
      > (max)
{}

FooSeq::FooSeq (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Foo_ptr * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_object_reference_sequence<
        Foo,
        Foo_var
      >
    (max, length, buffer, release)
{}

FooSeq::FooSeq (
    const FooSeq &seq)
  : ::TAO::unbounded_object_reference_sequence<
        Foo,
        Foo_var
      > (seq)
{}

FooSeq::~FooSeq (void)
{}

#endif /* end #if !defined */

