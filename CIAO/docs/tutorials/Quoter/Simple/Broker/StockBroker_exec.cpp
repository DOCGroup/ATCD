// $Id$

#include "StockBroker_exec.h"

namespace CIAO_Stock_StockBroker_Impl
{
  //==================================================================
  // Component Executor Implementation Class:   StockBroker_exec_i
  //==================================================================

  StockBroker_exec_i::StockBroker_exec_i (void)
  {
  }

  StockBroker_exec_i::~StockBroker_exec_i (void)
  {
  }


  // Supported or inherited operations.

  void
  StockBroker_exec_i::stock_subscribe (
    const char * stock_name)
  {
    if ((ACE_OS::strcmp (stock_name, "MSFT") == 0) ||
        (ACE_OS::strcmp (stock_name, "IBM") == 0))
    {
      std::set<std::string>::iterator iter =
        this->subscribed_stock_list_.find (stock_name);

      if (iter == this->subscribed_stock_list_.end ())
      {
        this->subscribed_stock_list_.insert (stock_name);
      }
    }
    else
    {
      throw Stock::Invalid_Stock ();
    }
  }

  void
  StockBroker_exec_i::stock_unsubscribe (
    const char * stock_name)
  {
    if ((ACE_OS::strcmp (stock_name, "MSFT") == 0) ||
        (ACE_OS::strcmp (stock_name, "IBM") == 0))
    {
      std::set<std::string>::iterator iter =
        this->subscribed_stock_list_.find (stock_name);
      if (iter != this->subscribed_stock_list_.end ())
      {
        this->subscribed_stock_list_.erase (iter);
      }
    }
    else
    {
      throw Stock::Invalid_Stock ();
    }

  }


  void
  StockBroker_exec_i::push_notify_in (
    Stock::StockName *ev)
  {

    ACE_DEBUG ((LM_INFO,
                "Broker - Got message from Distributor\n"));

    CORBA::String_var stock_name = CORBA::string_dup (ev->name ());

    // Retrieve stock information if the stock name is in the
    // subscribed_stock_list
    if (this->subscribed_stock_list_.find (stock_name.in ()) !=
        this->subscribed_stock_list_.end ())
    {
      Stock::StockQuoter_var quoter_obj =
        this->context_->get_connection_read_quoter ();

      if (CORBA::is_nil (quoter_obj.in ()))
      {
        throw CORBA::BAD_PARAM ();
      }

      Stock::StockInfo_var info =
        quoter_obj->get_stock_info (stock_name.in ());

      ACE_DEBUG ((LM_DEBUG, "Quoter - Current value of %s is %d\n",
                             stock_name.in (),
                             info->last));
    }
  }

  // Operations from Components::SessionComponent

  void
  StockBroker_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->context_ =
      ::Stock::CCM_StockBroker_Context::_narrow (ctx);

    if (CORBA::is_nil (this->context_.in ()))
    {
      throw ::CORBA::INTERNAL ();
    }
  }

  void
  StockBroker_exec_i::configuration_complete ()
  {
  }

  void
  StockBroker_exec_i::ccm_activate ()
  {
  }

  void
  StockBroker_exec_i::ccm_passivate ()
  {
  }

  void
  StockBroker_exec_i::ccm_remove ()
  {
  }

  //==================================================================
  // Home Executor Implementation Class:   StockBrokerHome_exec_i
  //==================================================================

  StockBrokerHome_exec_i::StockBrokerHome_exec_i (void)
  {
  }

  StockBrokerHome_exec_i::~StockBrokerHome_exec_i (void)
  {
  }

  // Supported or inherited operations.

  // Home operations.

  // Factory and finder operations.

  // Attribute operations.

  // Implicit operations.

  ::Components::EnterpriseComponent_ptr
  StockBrokerHome_exec_i::create ()
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_THROW_EX (
      retval,
      StockBroker_exec_i,
      CORBA::NO_MEMORY ());

    return retval;
  }

  extern "C" STOCKBROKER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_Stock_StockBrokerComp_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_RETURN (
      retval,
      StockBroker_exec_i,
      ::Components::EnterpriseComponent::_nil ());

    return retval;
  }

  extern "C" STOCKBROKER_EXEC_Export ::Components::HomeExecutorBase_ptr
  create_Stock_StockBrokerHome_Impl (void)
  {
    ::Components::HomeExecutorBase_ptr retval =
      ::Components::HomeExecutorBase::_nil ();

    ACE_NEW_RETURN (
      retval,
      StockBrokerHome_exec_i,
      ::Components::HomeExecutorBase::_nil ());

    return retval;
  }
}
