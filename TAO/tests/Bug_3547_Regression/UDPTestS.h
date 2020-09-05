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

#ifndef _TAO_IDL_UDPTESTS_TRTUGU_H_
#define _TAO_IDL_UDPTESTS_TRTUGU_H_

#include /**/ "ace/pre.h"

#include "UDPTestC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Fixed_Array_SArgument_T.h"
#include "tao/PortableServer/Var_Array_SArgument_T.h"

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

#if !defined (_UDPTESTI__SARG_TRAITS_)
#define _UDPTESTI__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::UDPTestI>
    : public
        Object_SArg_Traits_T<
            ::UDPTestI_ptr,
            ::UDPTestI_var,
            ::UDPTestI_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  template<>
  class SArg_Traits< ::UDPTestI::BufferT_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::UDPTestI::BufferT_var,
            ::UDPTestI::BufferT_forany,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_sh.cpp:73

class POA_UDPTestI;
typedef POA_UDPTestI *POA_UDPTestI_ptr;

class  POA_UDPTestI
  : public virtual PortableServer::ServantBase
{
protected:
  POA_UDPTestI (void);

public:
  /// Useful for template programming.
  typedef ::UDPTestI _stub_type;
  typedef ::UDPTestI_ptr _stub_ptr_type;
  typedef ::UDPTestI_var _stub_var_type;

  POA_UDPTestI (const POA_UDPTestI& rhs);
  virtual ~POA_UDPTestI (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);

  ::UDPTestI *_this (void);

  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void send (
    const ::UDPTestI::BufferT Msg) = 0;

  static void send_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

#include /**/ "ace/post.h"

#endif /* ifndef */

