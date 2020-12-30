#include "orbsvcs/Event/EC_ProxyConsumer.h"
#include "orbsvcs/Event/EC_Event_Channel_Base.h"
#include "orbsvcs/Event/EC_Supplier_Filter.h"
#include "orbsvcs/Event/EC_Supplier_Filter_Builder.h"

#include "ace/Reverse_Lock_T.h"

#if ! defined (__ACE_INLINE__)
#include "orbsvcs/Event/EC_ProxyConsumer.inl"
#endif /* __ACE_INLINE__ */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

typedef ACE_Reverse_Lock<ACE_Lock> TAO_EC_Unlock;

TAO_EC_ProxyPushConsumer::
    TAO_EC_ProxyPushConsumer (TAO_EC_Event_Channel_Base* ec)
  : event_channel_ (ec),
    ec_refcount_ (1),
    connected_ (false),
    filter_ (nullptr)
{
  this->lock_ =
    this->event_channel_->create_consumer_lock ();

  this->default_POA_ =
    this->event_channel_->consumer_poa ();

  this->qos_.is_gateway = false;
}

TAO_EC_ProxyPushConsumer::~TAO_EC_ProxyPushConsumer ()
{
  this->event_channel_->destroy_consumer_lock (this->lock_);
  this->cleanup_i ();
}


CORBA::Boolean
TAO_EC_ProxyPushConsumer::supplier_non_existent (
      CORBA::Boolean_out disconnected)
{
  CORBA::Object_var supplier;
  {
    ACE_GUARD_THROW_EX (
        ACE_Lock, ace_mon, *this->lock_,
        CORBA::INTERNAL ());

    disconnected = false;
    if (!this->is_connected_i ())
      {
        disconnected = true;
        return false;
      }
    if (CORBA::is_nil (this->supplier_.in ()))
      {
        return false;
      }
    supplier = CORBA::Object::_duplicate (this->supplier_.in ());
  }

#if (TAO_HAS_MINIMUM_CORBA == 0)
  return supplier->_non_existent ();
#else
  return 0;
#endif /* TAO_HAS_MINIMUM_CORBA */
}

void
TAO_EC_ProxyPushConsumer::connected (TAO_EC_ProxyPushSupplier* supplier)
{
  TAO_EC_ProxyPushConsumer_Guard ace_mon (this->lock_,
                                          this->ec_refcount_,
                                          this->event_channel_,
                                          this);
  if (!ace_mon.locked ())
    return;

  ace_mon.filter->connected (supplier);
}

void
TAO_EC_ProxyPushConsumer::reconnected (TAO_EC_ProxyPushSupplier* supplier)
{
  TAO_EC_ProxyPushConsumer_Guard ace_mon (this->lock_,
                                          this->ec_refcount_,
                                          this->event_channel_,
                                          this);
  if (!ace_mon.locked ())
    return;

  ace_mon.filter->reconnected (supplier);
}

void
TAO_EC_ProxyPushConsumer::disconnected (TAO_EC_ProxyPushSupplier* supplier)
{
  TAO_EC_ProxyPushConsumer_Guard ace_mon (this->lock_,
                                          this->ec_refcount_,
                                          this->event_channel_,
                                          this);
  if (!ace_mon.locked ())
    return;

  ace_mon.filter->disconnected (supplier);
}

void
TAO_EC_ProxyPushConsumer::connected (TAO_EC_ProxyPushConsumer*)
{
}

void
TAO_EC_ProxyPushConsumer::reconnected (TAO_EC_ProxyPushConsumer*)
{
}

void
TAO_EC_ProxyPushConsumer::disconnected (TAO_EC_ProxyPushConsumer*)
{
}

void
TAO_EC_ProxyPushConsumer::shutdown_hook ()
{
}

void
TAO_EC_ProxyPushConsumer::shutdown ()
{
  RtecEventComm::PushSupplier_var supplier;

  {
    ACE_GUARD_THROW_EX (
        ACE_Lock, ace_mon, *this->lock_,
        RtecEventChannelAdmin::EventChannel::SYNCHRONIZATION_ERROR ());

    supplier = this->supplier_._retn ();
    this->connected_ = false;

    this->shutdown_hook ();

    if (this->filter_ != nullptr)
      {
        this->filter_->shutdown ();

        this->cleanup_i ();
      }
  }

  this->deactivate ();

  if (CORBA::is_nil (supplier.in ()))
    return;

  try
    {
      supplier->disconnect_push_supplier ();
    }
  catch (const CORBA::Exception&)
    {
      // Ignore exceptions, we must isolate other clients from
      // failures on this one.
    }
}

void
TAO_EC_ProxyPushConsumer::cleanup_i ()
{
  this->supplier_ =
    RtecEventComm::PushSupplier::_nil ();
  this->connected_ = false;

  if (this->filter_ != nullptr)
    {
      this->filter_->unbind (this);
      this->filter_->_decr_refcnt ();
      this->filter_ = nullptr;
    }
}

void
TAO_EC_ProxyPushConsumer::deactivate ()
{
  try
    {
      PortableServer::ObjectId id =
          this->object_id ();
      this->default_POA_->deactivate_object (id);
    }
  catch (const CORBA::Exception&)
    {
      // Exceptions here should not be propagated.  They usually
      // indicate that an object is being disconnected twice, or some
      // race condition, but not a fault that the user needs to know
      // about.
    }
}

CORBA::ULong
TAO_EC_ProxyPushConsumer::_incr_refcnt ()
{
  ACE_GUARD_RETURN (ACE_Lock, ace_mon, *this->lock_, 0);
  return this->ec_refcount_++;
}

void
TAO_EC_ProxyPushConsumer::refcount_zero_hook ()
{
  // Use the event channel
  this->event_channel_->destroy_proxy (this);
}

CORBA::ULong
TAO_EC_ProxyPushConsumer::_decr_refcnt ()
{
  {
    ACE_GUARD_RETURN (ACE_Lock, ace_mon, *this->lock_, 0);
    this->ec_refcount_--;
    if (this->ec_refcount_ != 0)
      return this->ec_refcount_;
  }

  this->refcount_zero_hook ();
  return 0;
}


// ****************************************************************

TAO_EC_ProxyPushConsumer_Guard::
    TAO_EC_ProxyPushConsumer_Guard (ACE_Lock *lock,
                                    CORBA::ULong &refcount,
                                    TAO_EC_Event_Channel_Base *,
                                    TAO_EC_ProxyPushConsumer *proxy)
 :   lock_ (lock),
     refcount_ (refcount),
     proxy_ (proxy),
     locked_ (false)
{
  ACE_GUARD (ACE_Lock, ace_mon, *this->lock_);
  // If the guard fails there is not much we can do, raising an
  // exception is wrong, the client has *no* way to handle that kind
  // of error.  Even worse, there is no exception to raise in that
  // case.
  // @@ Returning something won't work either, the error should be
  // logged though!

  if (proxy->is_connected_i ())
    {
      this->filter = this->proxy_->filter_i ();
      this->filter->_incr_refcnt ();

      this->locked_ = true;
      ++this->refcount_;
    }
}

TAO_EC_ProxyPushConsumer_Guard::
    ~TAO_EC_ProxyPushConsumer_Guard ()
{
  // This access is safe because guard objects are created on the
  // stack, only one thread has access to them
  if (!this->locked_)
    return;

  {
    ACE_GUARD (ACE_Lock, ace_mon, *this->lock_);
    // If the guard fails there is not much we can do, raising an
    // exception is wrong, the client has *no* way to handle that kind
    // of error.  Even worse, there is no exception to raise in that
    // case.
    // @@ Returning something won't work either, the error should be
    // logged though!

    this->filter->_decr_refcnt ();

    --this->refcount_;
    if (this->refcount_ != 0)
      return;
  }

  this->proxy_->refcount_zero_hook ();
}

TAO_END_VERSIONED_NAMESPACE_DECL
