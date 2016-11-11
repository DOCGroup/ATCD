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

#ifndef _TAO_IDL_FILES_HOBHSE_H_
#define _TAO_IDL_FILES_HOBHSE_H_

#include /**/ "ace/pre.h"

#include "FileC.h"
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

#if !defined (_FILE_DESCRIPTOR__SARG_TRAITS_)
#define _FILE_DESCRIPTOR__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::File::Descriptor>
    : public
        Object_SArg_Traits_T<
            ::File::Descriptor_ptr,
            ::File::Descriptor_var,
            ::File::Descriptor_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class SArg_Traits< ::File::Descriptor::DataBuffer>
    : public
        Var_Size_SArg_Traits_T<
            ::File::Descriptor::DataBuffer,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FILE_SYSTEM__SARG_TRAITS_)
#define _FILE_SYSTEM__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::File::System>
    : public
        Object_SArg_Traits_T<
            ::File::System_ptr,
            ::File::System_var,
            ::File::System_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_File
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Descriptor;
  typedef Descriptor *Descriptor_ptr;

  class  Descriptor
    : public virtual PortableServer::ServantBase
  {
  protected:
    Descriptor (void);
  
  public:
    /// Useful for template programming.
    typedef ::File::Descriptor _stub_type;
    typedef ::File::Descriptor_ptr _stub_ptr_type;
    typedef ::File::Descriptor_var _stub_var_type;

    Descriptor (const Descriptor& rhs);
    virtual ~Descriptor (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::File::Descriptor *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::Long write (
      const ::File::Descriptor::DataBuffer & buffer) = 0;

    static void write_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::File::Descriptor::DataBuffer * read (
      ::CORBA::Long num_bytes) = 0;

    static void read_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::CORBA::ULong lseek (
      ::CORBA::ULong offset,
      ::CORBA::Long whence) = 0;

    static void lseek_skel (
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

  class System;
  typedef System *System_ptr;

  class  System
    : public virtual PortableServer::ServantBase
  {
  protected:
    System (void);
  
  public:
    /// Useful for template programming.
    typedef ::File::System _stub_type;
    typedef ::File::System_ptr _stub_ptr_type;
    typedef ::File::System_var _stub_var_type;

    System (const System& rhs);
    virtual ~System (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::File::System *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual ::File::Descriptor_ptr open (
      const char * file_name,
      ::CORBA::Long flags) = 0;

    static void open_skel (
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

} // module File

#include /**/ "ace/post.h"

#endif /* ifndef */

