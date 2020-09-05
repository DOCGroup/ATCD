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

#ifndef _TAO_IDL_LOGGERS_OFOCOM_H_
#define _TAO_IDL_LOGGERS_OFOCOM_H_

#include /**/ "ace/pre.h"

#include "LoggerC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/BD_String_SArgument_T.h"
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

#if !defined (_TAO_LOG_STRING4096__SARG_TRAITS_)
#define _TAO_LOG_STRING4096__SARG_TRAITS_

  template<>
  class SArg_Traits<TAO_log_string_4096>
    : public
        BD_String_SArg_Traits_T<
            CORBA::String_var,
            4096,
            TAO::Any_Insert_Policy_Noop
        >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_LOGGER__SARG_TRAITS_)
#define _LOGGER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Logger>
    : public
        Object_SArg_Traits_T<
            ::Logger_ptr,
            ::Logger_var,
            ::Logger_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:902

  template<>
  class SArg_Traits< ::Logger::Log_Priority>
    : public
        Basic_SArg_Traits_T<
            ::Logger::Log_Priority,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:902

  template<>
  class SArg_Traits< ::Logger::Verbosity_Level>
    : public
        Basic_SArg_Traits_T<
            ::Logger::Verbosity_Level,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class SArg_Traits< ::Logger::Log_Record>
    : public
        Var_Size_SArg_Traits_T<
            ::Logger::Log_Record,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_LOGGER_FACTORY__SARG_TRAITS_)
#define _LOGGER_FACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Logger_Factory>
    : public
        Object_SArg_Traits_T<
            ::Logger_Factory_ptr,
            ::Logger_Factory_var,
            ::Logger_Factory_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_sh.cpp:73

class POA_Logger;
typedef POA_Logger *POA_Logger_ptr;

class  POA_Logger
  : public virtual PortableServer::ServantBase
{
protected:
  POA_Logger (void);

public:
  /// Useful for template programming.
  typedef ::Logger _stub_type;
  typedef ::Logger_ptr _stub_ptr_type;
  typedef ::Logger_var _stub_var_type;

  POA_Logger (const POA_Logger& rhs);
  virtual ~POA_Logger (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);

  ::Logger *_this (void);

  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void log (
    const ::Logger::Log_Record & log_rec) = 0;

  static void log_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void logv (
    const ::Logger::Log_Record & log_rec,
    ::Logger::Verbosity_Level level) = 0;

  static void logv_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void log_twoway (
    const ::Logger::Log_Record & log_rec) = 0;

  static void log_twoway_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void logv_twoway (
    const ::Logger::Log_Record & log_rec,
    ::Logger::Verbosity_Level level) = 0;

  static void logv_twoway_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual void verbosity (
    ::Logger::Verbosity_Level level) = 0;

  static void verbosity_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_sh.cpp:73

class POA_Logger_Factory;
typedef POA_Logger_Factory *POA_Logger_Factory_ptr;

class  POA_Logger_Factory
  : public virtual PortableServer::ServantBase
{
protected:
  POA_Logger_Factory (void);

public:
  /// Useful for template programming.
  typedef ::Logger_Factory _stub_type;
  typedef ::Logger_Factory_ptr _stub_ptr_type;
  typedef ::Logger_Factory_var _stub_var_type;

  POA_Logger_Factory (const POA_Logger_Factory& rhs);
  virtual ~POA_Logger_Factory (void);

  virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

  virtual void _dispatch (
      TAO_ServerRequest & req,
      TAO::Portable_Server::Servant_Upcall *servant_upcall);

  ::Logger_Factory *_this (void);

  virtual const char* _interface_repository_id (void) const;

  // TAO_IDL - Generated from
  // be/be_visitor_operation/operation_sh.cpp:36

  virtual ::Logger_ptr make_logger (
    const char * name) = 0;

  static void make_logger_skel (
      TAO_ServerRequest &server_request,
      TAO::Portable_Server::Servant_Upcall *servant_upcall,
      TAO_ServantBase *servant);
};

#include /**/ "ace/post.h"

#endif /* ifndef */

