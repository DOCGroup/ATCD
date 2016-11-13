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

#ifndef _TAO_IDL_INTEROP_WCHARS_X2487V_H_
#define _TAO_IDL_INTEROP_WCHARS_X2487V_H_

#include /**/ "ace/pre.h"

#include "interop_wcharC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Fixed_Array_SArgument_T.h"
#include "tao/PortableServer/Var_Array_SArgument_T.h"
#include "tao/PortableServer/Any_SArg_Traits.h"
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

  template<>
  class SArg_Traits< ::interop::warray_tag>
    : public
        Fixed_Array_SArg_Traits_T<
            ::interop::warray_var,
            ::interop::warray_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::interop::wstruct>
    : public
        Var_Size_SArg_Traits_T<
            ::interop::wstruct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::interop::wstructseq>
    : public
        Var_Size_SArg_Traits_T<
            ::interop::wstructseq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:902

  template<>
  class SArg_Traits< ::interop::wchar_types>
    : public
        Basic_SArg_Traits_T<
            ::interop::wchar_types,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class SArg_Traits< ::interop::wunion>
    : public
        Var_Size_SArg_Traits_T<
            ::interop::wunion,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_INTEROP_WCHAR_PASSER__SARG_TRAITS_)
#define _INTEROP_WCHAR_PASSER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::interop::WChar_Passer>
    : public
        Object_SArg_Traits_T<
            ::interop::WChar_Passer_ptr,
            ::interop::WChar_Passer_var,
            ::interop::WChar_Passer_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_interop
{


  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class WChar_Passer;
  typedef WChar_Passer *WChar_Passer_ptr;

  class  WChar_Passer
    : public virtual PortableServer::ServantBase
  {
  protected:
    WChar_Passer (void);

  public:
    /// Useful for template programming.
    typedef ::interop::WChar_Passer _stub_type;
    typedef ::interop::WChar_Passer_ptr _stub_ptr_type;
    typedef ::interop::WChar_Passer_var _stub_var_type;

    WChar_Passer (const WChar_Passer& rhs);
    virtual ~WChar_Passer (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);

    ::interop::WChar_Passer *_this (void);

    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual char * orb_name (
      void) = 0;

    static void _get_orb_name_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Boolean wchar_to_server (
      ::CORBA::WChar test,
      ::CORBA::Short key) = 0;

    static void wchar_to_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::WChar wchar_from_server (
      ::CORBA::Short key) = 0;

    static void wchar_from_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Boolean wstring_to_server (
      const ::CORBA::WChar * test,
      ::CORBA::Short key) = 0;

    static void wstring_to_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::WChar * wstring_from_server (
      ::CORBA::Short key) = 0;

    static void wstring_from_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Boolean warray_to_server (
      const ::interop::warray test,
      ::CORBA::Short key) = 0;

    static void warray_to_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::interop::warray_slice * warray_from_server (
      ::CORBA::Short key) = 0;

    static void warray_from_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Boolean wstruct_to_server (
      const ::interop::wstruct & test,
      ::CORBA::Short key) = 0;

    static void wstruct_to_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::interop::wstruct * wstruct_from_server (
      ::CORBA::Short key) = 0;

    static void wstruct_from_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Boolean wstructseq_to_server (
      const ::interop::wstructseq & test,
      ::CORBA::Short key) = 0;

    static void wstructseq_to_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::interop::wstructseq * wstructseq_from_server (
      ::CORBA::Short key) = 0;

    static void wstructseq_from_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Boolean wunion_to_server (
      const ::interop::wunion & test,
      ::CORBA::Short key) = 0;

    static void wunion_to_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::interop::wunion * wunion_from_server (
      ::CORBA::Short key,
      ::interop::wchar_types type) = 0;

    static void wunion_from_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Boolean any_to_server (
      const ::CORBA::Any & test,
      ::CORBA::Short key) = 0;

    static void any_to_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Any * any_from_server (
      ::CORBA::Short key,
      ::interop::wchar_types type) = 0;

    static void any_from_server_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Any * any_echo (
      const ::CORBA::Any & test) = 0;

    static void any_echo_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void exception_test (
      ::CORBA::Short key) = 0;

    static void exception_test_skel (
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
// be/be_visitor_module/module_sh.cpp:66

} // module interop

#include /**/ "ace/post.h"

#endif /* ifndef */

