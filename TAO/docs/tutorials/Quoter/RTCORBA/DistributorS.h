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
// be/be_codegen.cpp:458

#ifndef _TAO_IDL_DISTRIBUTORS_V6ZQLL_H_
#define _TAO_IDL_DISTRIBUTORS_V6ZQLL_H_

#include /**/ "ace/pre.h"

#include "DistributorC.h"
#include "CommonS.h"
#include "tao/RTCORBA/RTCORBA_includeS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_STOCK_STOCKDISTRIBUTOR__SARG_TRAITS_)
#define _STOCK_STOCKDISTRIBUTOR__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Stock::StockDistributor>
    : public
        Object_SArg_Traits_T<
            ::Stock::StockDistributor_ptr,
            ::Stock::StockDistributor_var,
            ::Stock::StockDistributor_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_STOCK_STOCKDISTRIBUTORHOME__SARG_TRAITS_)
#define _STOCK_STOCKDISTRIBUTORHOME__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Stock::StockDistributorHome>
    : public
        Object_SArg_Traits_T<
            ::Stock::StockDistributorHome_ptr,
            ::Stock::StockDistributorHome_var,
            ::Stock::StockDistributorHome_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_Stock
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class StockDistributor;
  typedef StockDistributor *StockDistributor_ptr;

  class  StockDistributor
    : public virtual POA_Stock::Trigger
  {
  protected:
    StockDistributor (void);
  
  public:
    /// Useful for template programming.
    typedef ::Stock::StockDistributor _stub_type;
    typedef ::Stock::StockDistributor_ptr _stub_ptr_type;
    typedef ::Stock::StockDistributor_var _stub_var_type;

    StockDistributor (const StockDistributor& rhs);
    virtual ~StockDistributor (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Stock::StockDistributor *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Stock::Cookie * subscribe_notifier (
      ::Stock::StockNameConsumer_ptr c,
      ::RTCORBA::Priority priority) = 0;

    static void subscribe_notifier_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Stock::StockNameConsumer_ptr unsubscribe_notifier (
      ::Stock::Cookie * ck) = 0;

    static void unsubscribe_notifier_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Stock::StockQuoter_ptr provide_quoter_info (
      ::Stock::Cookie * ck) = 0;

    static void provide_quoter_info_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Long notification_rate (
      void) = 0;

    static void _get_notification_rate_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void notification_rate (
      ::CORBA::Long notification_rate) = 0;

    static void _set_notification_rate_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void shutdown (
      void) = 0;

    static void shutdown_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class StockDistributorHome;
  typedef StockDistributorHome *StockDistributorHome_ptr;

  class  StockDistributorHome
    : public virtual PortableServer::ServantBase
  {
  protected:
    StockDistributorHome (void);
  
  public:
    /// Useful for template programming.
    typedef ::Stock::StockDistributorHome _stub_type;
    typedef ::Stock::StockDistributorHome_ptr _stub_ptr_type;
    typedef ::Stock::StockDistributorHome_var _stub_var_type;

    StockDistributorHome (const StockDistributorHome& rhs);
    virtual ~StockDistributorHome (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Stock::StockDistributorHome *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Stock::StockDistributor_ptr create (
      void) = 0;

    static void create_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Stock

#include /**/ "ace/post.h"

#endif /* ifndef */

