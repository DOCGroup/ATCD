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

#ifndef _TAO_IDL_SENDERS_JX6P9N_H_
#define _TAO_IDL_SENDERS_JX6P9N_H_

#include /**/ "ace/pre.h"

#include "SenderC.h"
#include "ReceiverS.h"
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

#if !defined (_SENDER__SARG_TRAITS_)
#define _SENDER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Sender>
    : public
        Object_SArg_Traits_T<
            ::Sender_ptr,
            ::Sender_var,
            ::Sender_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_sh.cpp:73

class POA_Sender;
typedef POA_Sender *POA_Sender_ptr;

class  POA_Sender
  : public virtual PortableServer::ServantBase
{
protected:
  POA_Sender (void);

public:
  /// Useful for template programming.
  typedef ::Sender _stub_type;
  typedef ::Sender_ptr _stub_ptr_type;
  typedef ::Sender_var _stub_var_type;

  POA_Sender (const POA_Sender& rhs);
  virtual ~POA_Sender (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);
  
  ::Sender *_this (void);
  
  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::CORBA::Long receiver_object (
    ::Receiver_ptr recv) = 0;

  static void receiver_object_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

#include /**/ "ace/post.h"

#endif /* ifndef */

