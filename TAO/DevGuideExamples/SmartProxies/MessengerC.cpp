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


#include "MessengerC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "MessengerC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Messenger.

Messenger_ptr
TAO::Objref_Traits<Messenger>::duplicate (
    Messenger_ptr p)
{
  return Messenger::_duplicate (p);
}

void
TAO::Objref_Traits<Messenger>::release (
    Messenger_ptr p)
{
  ::CORBA::release (p);
}

Messenger_ptr
TAO::Objref_Traits<Messenger>::nil (void)
{
  return Messenger::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Messenger>::marshal (
    const Messenger_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Boolean
Messenger::send_message (
  const char * user_name,
  const char * subject,
  char *& message)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::ACE_InputCDR::to_boolean>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_user_name (user_name);
  TAO::Arg_Traits< char *>::in_arg_val _tao_subject (subject);
  TAO::Arg_Traits< char *>::inout_arg_val _tao_message (message);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_user_name,
      &_tao_subject,
      &_tao_message
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      4,
      "send_message",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

Messenger::Messenger (void)
{
}

Messenger::~Messenger (void)
{
}

void
Messenger::_tao_any_destructor (void *_tao_void_pointer)
{
  Messenger *_tao_tmp_pointer =
    static_cast<Messenger *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Messenger_ptr
Messenger::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  Messenger *proxy = 0;

  proxy = TAO::Narrow_Utils<Messenger>::narrow (
      _tao_objref,
      "IDL:Messenger:1.0");
  return TAO_Messenger_PROXY_FACTORY_ADAPTER::instance ()->create_proxy (proxy);
}

Messenger_ptr
Messenger::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  Messenger *proxy = 0;

  proxy = TAO::Narrow_Utils<Messenger>::unchecked_narrow (
      _tao_objref);
  return TAO_Messenger_PROXY_FACTORY_ADAPTER::instance ()->create_proxy (proxy);
}

Messenger_ptr
Messenger::_nil (void)
{
  return 0;
}

Messenger_ptr
Messenger::_duplicate (Messenger_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Messenger::_tao_release (Messenger_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Messenger::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Messenger:1.0"
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

const char* Messenger::_interface_repository_id (void) const
{
  return "IDL:Messenger:1.0";
}

::CORBA::Boolean
Messenger::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

TAO_Messenger_Default_Proxy_Factory::TAO_Messenger_Default_Proxy_Factory (int permanent)
{
  TAO_Messenger_PROXY_FACTORY_ADAPTER::instance ()->register_proxy_factory (this, permanent);
}

TAO_Messenger_Default_Proxy_Factory::~TAO_Messenger_Default_Proxy_Factory (void)
{
}

Messenger_ptr
TAO_Messenger_Default_Proxy_Factory::create_proxy (
    ::Messenger_ptr proxy
  )
{
  return proxy;
}

TAO_Messenger_Proxy_Factory_Adapter::TAO_Messenger_Proxy_Factory_Adapter (void)
  : proxy_factory_ (0),
    one_shot_factory_ (false),
    disable_factory_ (false)
{
}

TAO_Messenger_Proxy_Factory_Adapter::~TAO_Messenger_Proxy_Factory_Adapter (void)
{
  // Making sure the factory which the adapter has is destroyed with it.
  if (this->proxy_factory_ != 0)
    {
      delete this->proxy_factory_;
    }
}

void
TAO_Messenger_Proxy_Factory_Adapter::register_proxy_factory (
    TAO_Messenger_Default_Proxy_Factory *df,
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
TAO_Messenger_Proxy_Factory_Adapter::unregister_proxy_factory (void)
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

Messenger_ptr
TAO_Messenger_Proxy_Factory_Adapter::create_proxy (
    ::Messenger_ptr proxy
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
        TAO_Messenger_Default_Proxy_Factory (0),
         0);


  return this->proxy_factory_->create_proxy (proxy);
}

TAO_Messenger_Smart_Proxy_Base::TAO_Messenger_Smart_Proxy_Base (void)
{
}

TAO_Messenger_Smart_Proxy_Base::~TAO_Messenger_Smart_Proxy_Base (void)
{
}

TAO_Stub *
TAO_Messenger_Smart_Proxy_Base::_stubobj (void) const
{
  return this->base_proxy_->_stubobj ();
}

TAO_Stub *
TAO_Messenger_Smart_Proxy_Base::_stubobj (void)
{
  return this->base_proxy_->_stubobj ();
}

::CORBA::Boolean TAO_Messenger_Smart_Proxy_Base::send_message  (
  const char * user_name,
  const char * subject,
  char *& message){
  return this->get_proxy ()->send_message (

      user_name,
      subject,
      message
    );

}

Messenger_ptr
TAO_Messenger_Smart_Proxy_Base::get_proxy (void)

{
  // Obtain the real proxy stored in <base_proxy_>
  if (CORBA::is_nil (this->proxy_.in ()))
    {
       // Verify whether factory is one-shot, if so disable
       // factory temporarily or not else remove.
      TAO_Messenger_PROXY_FACTORY_ADAPTER::instance ()->unregister_proxy_factory ();
      this->proxy_ = ::Messenger::_narrow (this->base_proxy_.in ());
    }
  return this->proxy_.in ();
}



// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messenger (
    ::CORBA::tk_objref,
    "IDL:Messenger:1.0",
    "Messenger");

::CORBA::TypeCode_ptr const _tc_Messenger =
  &_tao_tc_Messenger;

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Messenger>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Messenger_ptr _tao_elem)
{
  Messenger_ptr _tao_objptr =
    Messenger::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Messenger_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Messenger>::insert (
      _tao_any,
      Messenger::_tao_any_destructor,
      _tc_Messenger,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Messenger_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Messenger>::extract (
        _tao_any,
        Messenger::_tao_any_destructor,
        _tc_Messenger,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Messenger RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



