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


#include "testC.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test.

Test_ptr
TAO::Objref_Traits<Test>::duplicate (
    Test_ptr p)
{
  return Test::_duplicate (p);
}

void
TAO::Objref_Traits<Test>::release (
    Test_ptr p)
{
  ::CORBA::release (p);
}

Test_ptr
TAO::Objref_Traits<Test>::nil (void)
{
  return Test::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test>::marshal (
    const Test_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Short
Test::box_prices (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Short>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "box_prices",
      10,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
Test::tickets (
  ::CORBA::Short number)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Short>::in_arg_val _tao_number (number);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_number
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "tickets",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::shutdown (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

Test::Test (void)
{
}

Test::~Test (void)
{
}

Test_ptr
Test::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  Test *proxy = 0;

  proxy = TAO::Narrow_Utils<Test>::narrow (
      _tao_objref,
      "IDL:Test:1.0");
  return TAO_Test_PROXY_FACTORY_ADAPTER::instance ()->create_proxy (proxy);
}

Test_ptr
Test::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  Test *proxy = 0;

  proxy = TAO::Narrow_Utils<Test>::unchecked_narrow (
      _tao_objref);
  return TAO_Test_PROXY_FACTORY_ADAPTER::instance ()->create_proxy (proxy);
}

Test_ptr
Test::_nil (void)
{
  return 0;
}

Test_ptr
Test::_duplicate (Test_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::_tao_release (Test_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test:1.0"
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
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* Test::_interface_repository_id (void) const
{
  return "IDL:Test:1.0";
}

::CORBA::Boolean
Test::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

TAO_Test_Default_Proxy_Factory::TAO_Test_Default_Proxy_Factory (int permanent)
{
  TAO_Test_PROXY_FACTORY_ADAPTER::instance ()->register_proxy_factory (this, permanent);
}

TAO_Test_Default_Proxy_Factory::~TAO_Test_Default_Proxy_Factory (void)
{
}

Test_ptr
TAO_Test_Default_Proxy_Factory::create_proxy (
    ::Test_ptr proxy
  )
{
  return proxy;
}

TAO_Test_Proxy_Factory_Adapter::TAO_Test_Proxy_Factory_Adapter (void)
  : proxy_factory_ (0),
    one_shot_factory_ (false),
    disable_factory_ (false)
{
}

TAO_Test_Proxy_Factory_Adapter::~TAO_Test_Proxy_Factory_Adapter (void)
{
  // Making sure the factory which the adapter has is destroyed with it.
  if (this->proxy_factory_ != 0)
    {
      delete this->proxy_factory_;
    }
}

void
TAO_Test_Proxy_Factory_Adapter::register_proxy_factory (
    TAO_Test_Default_Proxy_Factory *df,
    bool one_shot_factory
  )
{
  ACE_MT (
      ACE_GUARD (
          TAO_SYNCH_RECURSIVE_MUTEX,
          ace_mon,
          this->lock_
        )
    );

  // Remove any existing <proxy_factory_> and replace with the new one.
  this->unregister_proxy_factory ();
  this->proxy_factory_ = df;
  this->one_shot_factory_ = one_shot_factory;
}

void
TAO_Test_Proxy_Factory_Adapter::unregister_proxy_factory (void)
{
  ACE_MT (
      ACE_GUARD (
          TAO_SYNCH_RECURSIVE_MUTEX,
          ace_mon,
          this->lock_
        )
    );

  if (this->one_shot_factory_)
    {
      this->disable_factory_ = true;
    }

  if (this->one_shot_factory_ == false && this->proxy_factory_ != 0)
    {
      delete this->proxy_factory_;
      this->proxy_factory_ = 0;
    }
}

Test_ptr
TAO_Test_Proxy_Factory_Adapter::create_proxy (
    ::Test_ptr proxy
  )
{
  ACE_MT (ACE_GUARD_RETURN (TAO_SYNCH_RECURSIVE_MUTEX, ace_mon,
    this->lock_, 0));

  // To take care of those <unchecked_narrow> methods where we
  // want to override the smart proxy factory if there exists one.
  if (this->disable_factory_)
    {
      this->disable_factory_ = false;
      return proxy;
    }

  // Verify that an <proxy_factory_> is available else make one.
  if (this->proxy_factory_ == 0)
    ACE_NEW_RETURN (this->proxy_factory_,
        TAO_Test_Default_Proxy_Factory (0),
         0);


  return this->proxy_factory_->create_proxy (proxy);
}

TAO_Test_Smart_Proxy_Base::TAO_Test_Smart_Proxy_Base (void)
{
}

TAO_Test_Smart_Proxy_Base::~TAO_Test_Smart_Proxy_Base (void)
{
}

TAO_Stub *
TAO_Test_Smart_Proxy_Base::_stubobj (void) const
{
  return this->base_proxy_->_stubobj ();
}

TAO_Stub *
TAO_Test_Smart_Proxy_Base::_stubobj (void)
{
  return this->base_proxy_->_stubobj ();
}

::CORBA::Short TAO_Test_Smart_Proxy_Base::box_prices  (
  void){
  return this->get_proxy ()->box_prices (

    );

}

::CORBA::Long TAO_Test_Smart_Proxy_Base::tickets  (
  ::CORBA::Short number){
  return this->get_proxy ()->tickets (

      number
    );

}

void TAO_Test_Smart_Proxy_Base::shutdown  (
  void){
  this->get_proxy ()->shutdown (

    );

}

Test_ptr
TAO_Test_Smart_Proxy_Base::get_proxy (void)

{
  // Obtain the real proxy stored in <base_proxy_>
  if (CORBA::is_nil (this->proxy_.in ()))
    {
       // Verify whether factory is one-shot, if so disable
       // factory temporarily or not else remove.
      TAO_Test_PROXY_FACTORY_ADAPTER::instance ()->unregister_proxy_factory ();
      this->proxy_ = ::Test::_narrow (this->base_proxy_.in ());
    }
  return this->proxy_.in ();
}



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



