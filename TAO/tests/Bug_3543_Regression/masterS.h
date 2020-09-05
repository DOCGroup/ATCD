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

#ifndef _TAO_IDL_MASTERS_QKOBY6_H_
#define _TAO_IDL_MASTERS_QKOBY6_H_

#include /**/ "ace/pre.h"

#include "masterC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"

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

#if !defined (_MASTERCLIENT_SERVER__SARG_TRAITS_)
#define _MASTERCLIENT_SERVER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::MasterClient::Server>
    : public
        Object_SArg_Traits_T<
            ::MasterClient::Server_ptr,
            ::MasterClient::Server_var,
            ::MasterClient::Server_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_MASTERCLIENT_MASTER__SARG_TRAITS_)
#define _MASTERCLIENT_MASTER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::MasterClient::Master>
    : public
        Object_SArg_Traits_T<
            ::MasterClient::Master_ptr,
            ::MasterClient::Master_var,
            ::MasterClient::Master_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_MasterClient
{


  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Server;
  typedef Server *Server_ptr;

  class  Server
    : public virtual PortableServer::ServantBase
  {
  protected:
    Server (void);

  public:
    /// Useful for template programming.
    typedef ::MasterClient::Server _stub_type;
    typedef ::MasterClient::Server_ptr _stub_ptr_type;
    typedef ::MasterClient::Server_var _stub_var_type;

    Server (const Server& rhs);
    virtual ~Server (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::MasterClient::Server *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void ping (
      void) = 0;

    static void ping_skel (
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

  class Master;
  typedef Master *Master_ptr;

  class  Master
    : public virtual PortableServer::ServantBase
  {
  protected:
    Master (void);

  public:
    /// Useful for template programming.
    typedef ::MasterClient::Master _stub_type;
    typedef ::MasterClient::Master_ptr _stub_ptr_type;
    typedef ::MasterClient::Master_var _stub_var_type;

    Master (const Master& rhs);
    virtual ~Master (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::MasterClient::Master *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void registerServer (
      ::MasterClient::Server_ptr c) = 0;

    static void registerServer_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module MasterClient

#include /**/ "ace/post.h"

#endif /* ifndef */

