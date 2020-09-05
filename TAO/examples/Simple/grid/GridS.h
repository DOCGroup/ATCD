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

#ifndef _TAO_IDL_GRIDS_DIU2UQ_H_
#define _TAO_IDL_GRIDS_DIU2UQ_H_

#include /**/ "ace/pre.h"

#include "GridC.h"
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

#if !defined (_GRID__SARG_TRAITS_)
#define _GRID__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Grid>
    : public
        Object_SArg_Traits_T<
            ::Grid_ptr,
            ::Grid_var,
            ::Grid_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_GRID_FACTORY__SARG_TRAITS_)
#define _GRID_FACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Grid_Factory>
    : public
        Object_SArg_Traits_T<
            ::Grid_Factory_ptr,
            ::Grid_Factory_var,
            ::Grid_Factory_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_sh.cpp:73

class POA_Grid;
typedef POA_Grid *POA_Grid_ptr;

class  POA_Grid
  : public virtual PortableServer::ServantBase
{
protected:
  POA_Grid (void);

public:
  /// Useful for template programming.
  typedef ::Grid _stub_type;
  typedef ::Grid_ptr _stub_ptr_type;
  typedef ::Grid_var _stub_var_type;

  POA_Grid (const POA_Grid& rhs);
  virtual ~POA_Grid (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);

  ::Grid *_this (void);

  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::Short height (
    void) = 0;

  static void _get_height_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void height (
    ::CORBA::Short height) = 0;

  static void _set_height_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::Short width (
    void) = 0;

  static void _get_width_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void width (
    ::CORBA::Short width) = 0;

  static void _set_width_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void set (
    ::CORBA::Short n,
    ::CORBA::Short m,
    ::CORBA::Long value) = 0;

  static void set_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::Long get (
    ::CORBA::Short n,
    ::CORBA::Short m) = 0;

  static void get_skel (
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
// be/be_visitor_interface/interface_sh.cpp:73

class POA_Grid_Factory;
typedef POA_Grid_Factory *POA_Grid_Factory_ptr;

class  POA_Grid_Factory
  : public virtual PortableServer::ServantBase
{
protected:
  POA_Grid_Factory (void);

public:
  /// Useful for template programming.
  typedef ::Grid_Factory _stub_type;
  typedef ::Grid_Factory_ptr _stub_ptr_type;
  typedef ::Grid_Factory_var _stub_var_type;

  POA_Grid_Factory (const POA_Grid_Factory& rhs);
  virtual ~POA_Grid_Factory (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);

  ::Grid_Factory *_this (void);

  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Grid_ptr make_grid (
    ::CORBA::Short height,
    ::CORBA::Short width) = 0;

  static void make_grid_skel (
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

#include /**/ "ace/post.h"

#endif /* ifndef */

