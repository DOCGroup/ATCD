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

#ifndef _TAO_IDL_LOAD_BALANCERS_7OP0HT_H_
#define _TAO_IDL_LOAD_BALANCERS_7OP0HT_H_

#include /**/ "ace/pre.h"

#include "Load_BalancerC.h"
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
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Load_Balancer::Member_ID_List>
    : public
        Var_Size_SArg_Traits_T<
            ::Load_Balancer::Member_ID_List,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Load_Balancer::Member>
    : public
        Var_Size_SArg_Traits_T<
            ::Load_Balancer::Member,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::Load_Balancer::Group_List>
    : public
        Var_Size_SArg_Traits_T<
            ::Load_Balancer::Group_List,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_LOAD_BALANCER_OBJECT_GROUP__SARG_TRAITS_)
#define _LOAD_BALANCER_OBJECT_GROUP__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Load_Balancer::Object_Group>
    : public
        Object_SArg_Traits_T<
            ::Load_Balancer::Object_Group_ptr,
            ::Load_Balancer::Object_Group_var,
            ::Load_Balancer::Object_Group_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_LOAD_BALANCER_OBJECT_GROUP_FACTORY__SARG_TRAITS_)
#define _LOAD_BALANCER_OBJECT_GROUP_FACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Load_Balancer::Object_Group_Factory>
    : public
        Object_SArg_Traits_T<
            ::Load_Balancer::Object_Group_Factory_ptr,
            ::Load_Balancer::Object_Group_Factory_var,
            ::Load_Balancer::Object_Group_Factory_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_Load_Balancer
{


  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Object_Group_Factory;
  typedef Object_Group_Factory *Object_Group_Factory_ptr;

  class  Object_Group_Factory
    : public virtual PortableServer::ServantBase
  {
  protected:
    Object_Group_Factory (void);

  public:
    /// Useful for template programming.
    typedef ::Load_Balancer::Object_Group_Factory _stub_type;
    typedef ::Load_Balancer::Object_Group_Factory_ptr _stub_ptr_type;
    typedef ::Load_Balancer::Object_Group_Factory_var _stub_var_type;

    Object_Group_Factory (const Object_Group_Factory& rhs);
    virtual ~Object_Group_Factory (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Load_Balancer::Object_Group_Factory *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Load_Balancer::Object_Group_ptr make_round_robin (
      const char * id) = 0;

    static void make_round_robin_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Load_Balancer::Object_Group_ptr make_random (
      const char * id) = 0;

    static void make_random_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Load_Balancer::Object_Group_ptr resolve (
      const char * id) = 0;

    static void resolve_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Load_Balancer::Group_List * round_robin_groups (
      void) = 0;

    static void round_robin_groups_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Load_Balancer::Group_List * random_groups (
      void) = 0;

    static void random_groups_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Object_Group;
  typedef Object_Group *Object_Group_ptr;

  class  Object_Group
    : public virtual PortableServer::ServantBase
  {
  protected:
    Object_Group (void);

  public:
    /// Useful for template programming.
    typedef ::Load_Balancer::Object_Group _stub_type;
    typedef ::Load_Balancer::Object_Group_ptr _stub_ptr_type;
    typedef ::Load_Balancer::Object_Group_var _stub_var_type;

    Object_Group (const Object_Group& rhs);
    virtual ~Object_Group (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::Load_Balancer::Object_Group *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual char * id (
      void) = 0;

    static void _get_id_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void bind (
      const ::Load_Balancer::Member & member_) = 0;

    static void bind_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void unbind (
      const char * id) = 0;

    static void unbind_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Object_ptr resolve (
      void) = 0;

    static void resolve_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Object_ptr resolve_with_id (
      const char * id) = 0;

    static void resolve_with_id_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::Load_Balancer::Member_ID_List * members (
      void) = 0;

    static void members_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void destroy (
      void) = 0;

    static void destroy_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Load_Balancer

#include /**/ "ace/post.h"

#endif /* ifndef */

