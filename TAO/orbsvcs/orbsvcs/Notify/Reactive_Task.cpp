#include "Reactive_Task.h"

#if ! defined (__ACE_INLINE__)
#include "Reactive_Task.inl"
#endif /* __ACE_INLINE__ */

#include "Timer_Reactor.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_Reactive_Task::TAO_Notify_Reactive_Task ()
  :timer_ (0)
{
}

TAO_Notify_Reactive_Task::~TAO_Notify_Reactive_Task ()
{
}

void
TAO_Notify_Reactive_Task::init ()
{
  ACE_ASSERT (this->timer_.get() == 0);

  TAO_Notify_Timer_Reactor* timer = 0;
  ACE_NEW_THROW_EX (timer,
                    TAO_Notify_Timer_Reactor (),
                    CORBA::NO_MEMORY ());
  this->timer_.reset (timer);
}

void
TAO_Notify_Reactive_Task::release ()
{
  delete this; //TODO: Release via factory.
}

void
TAO_Notify_Reactive_Task::shutdown ()
{
}

void
TAO_Notify_Reactive_Task::execute (TAO_Notify_Method_Request& method_request)
{
  method_request.execute ();
}

TAO_Notify_Timer*
TAO_Notify_Reactive_Task::timer ()
{
  return this->timer_.get();
}

TAO_END_VERSIONED_NAMESPACE_DECL
