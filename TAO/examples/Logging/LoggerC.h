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
// be/be_codegen.cpp:149

#ifndef _TAO_IDL_LOGGERC_1OFA3G_H_
#define _TAO_IDL_LOGGERC_1OFA3G_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/BD_String_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 4 || TAO_MICRO_VERSION != 1
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO

// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:157
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_typedef/typedef_ch.cpp:404

typedef char * TAO_log_string;
typedef ::CORBA::String_var TAO_log_string_var;
typedef ::CORBA::String_out TAO_log_string_out;

// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_LOGGER__VAR_OUT_CH_)
#define _LOGGER__VAR_OUT_CH_

class Logger;
typedef Logger *Logger_ptr;

typedef
  TAO_Objref_Var_T<
      Logger
    >
  Logger_var;

typedef
  TAO_Objref_Out_T<
      Logger
    >
  Logger_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  Logger
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Logger>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Logger_ptr _ptr_type;
  typedef Logger_var _var_type;
  typedef Logger_out _out_type;

  // The static operations.
  static Logger_ptr _duplicate (Logger_ptr obj);

  static void _tao_release (Logger_ptr obj);

  static Logger_ptr _narrow (::CORBA::Object_ptr obj);
  static Logger_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Logger_ptr _nil (void);

  // TAO_IDL - Generated from
  // be/be_visitor_enum/enum_ch.cpp:44

  enum Log_Priority
  {
    LM_SHUTDOWN,
    LM_TRACE,
    LM_DEBUG,
    LM_INFO,
    LM_NOTICE,
    LM_WARNING,
    LM_STARTUP,
    LM_ERROR,
    LM_CRITICAL,
    LM_ALERT,
    LM_EMERGENCY,
    LM_MAX
  };

  typedef Log_Priority &Log_Priority_out;

  // TAO_IDL - Generated from
  // be/be_visitor_enum/enum_ch.cpp:44

  enum Verbosity_Level
  {
    VERBOSE,
    VERBOSE_LITE,
    SILENT
  };

  typedef Verbosity_Level &Verbosity_Level_out;

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct Log_Record;

  typedef
    ::TAO_Var_Var_T<
        Log_Record
      >
    Log_Record_var;

  typedef
    ::TAO_Out_T<
        Log_Record
      >
    Log_Record_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  Log_Record
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef Log_Record_var _var_type;
    typedef Log_Record_out _out_type;

    Logger::Log_Priority type;
    ::CORBA::Long time;
    ::CORBA::Long app_id;
    ::CORBA::Long host_addr;
    ::TAO::String_Manager msg_data;
  };

  virtual void log (
    const ::Logger::Log_Record & log_rec);

  virtual void logv (
    const ::Logger::Log_Record & log_rec,
    ::Logger::Verbosity_Level level);

  virtual void log_twoway (
    const ::Logger::Log_Record & log_rec);

  virtual void logv_twoway (
    const ::Logger::Log_Record & log_rec,
    ::Logger::Verbosity_Level level);

  virtual void verbosity (
    ::Logger::Verbosity_Level level);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Logger (void);

  // Concrete non-local interface only.
  Logger (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);

  // Non-local interface only.
  Logger (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Logger (void);

private:
  // Private and unimplemented for concrete interfaces.
  Logger (const Logger &);

  void operator= (const Logger &);
};

// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_LOGGER_FACTORY__VAR_OUT_CH_)
#define _LOGGER_FACTORY__VAR_OUT_CH_

class Logger_Factory;
typedef Logger_Factory *Logger_Factory_ptr;

typedef
  TAO_Objref_Var_T<
      Logger_Factory
    >
  Logger_Factory_var;

typedef
  TAO_Objref_Out_T<
      Logger_Factory
    >
  Logger_Factory_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  Logger_Factory
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Logger_Factory>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Logger_Factory_ptr _ptr_type;
  typedef Logger_Factory_var _var_type;
  typedef Logger_Factory_out _out_type;

  // The static operations.
  static Logger_Factory_ptr _duplicate (Logger_Factory_ptr obj);

  static void _tao_release (Logger_Factory_ptr obj);

  static Logger_Factory_ptr _narrow (::CORBA::Object_ptr obj);
  static Logger_Factory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Logger_Factory_ptr _nil (void);

  virtual ::Logger_ptr make_logger (
    const char * name);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Logger_Factory (void);

  // Concrete non-local interface only.
  Logger_Factory (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);

  // Non-local interface only.
  Logger_Factory (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Logger_Factory (void);

private:
  // Private and unimplemented for concrete interfaces.
  Logger_Factory (const Logger_Factory &);

  void operator= (const Logger_Factory &);
};

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

#if !defined (_TAO_LOG_STRING4096__ARG_TRAITS_)
#define _TAO_LOG_STRING4096__ARG_TRAITS_

  struct TAO_log_string_4096 {};

  template<>
  class Arg_Traits<TAO_log_string_4096>
    : public
        BD_String_Arg_Traits_T<
            CORBA::String_var,
            4096,
            TAO::Any_Insert_Policy_Noop
        >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_LOGGER__ARG_TRAITS_)
#define _LOGGER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Logger>
    : public
        Object_Arg_Traits_T<
            ::Logger_ptr,
            ::Logger_var,
            ::Logger_out,
            TAO::Objref_Traits<Logger>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:902

  template<>
  class Arg_Traits< ::Logger::Log_Priority>
    : public
        Basic_Arg_Traits_T<
            ::Logger::Log_Priority,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:902

  template<>
  class Arg_Traits< ::Logger::Verbosity_Level>
    : public
        Basic_Arg_Traits_T<
            ::Logger::Verbosity_Level,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Logger::Log_Record>
    : public
        Var_Size_Arg_Traits_T<
            ::Logger::Log_Record,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_LOGGER_FACTORY__ARG_TRAITS_)
#define _LOGGER_FACTORY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Logger_Factory>
    : public
        Object_Arg_Traits_T<
            ::Logger_Factory_ptr,
            ::Logger_Factory_var,
            ::Logger_Factory_out,
            TAO::Objref_Traits<Logger_Factory>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_LOGGER__TRAITS_)
#define _LOGGER__TRAITS_

  template<>
  struct  Objref_Traits< ::Logger>
  {
    static ::Logger_ptr duplicate (
        ::Logger_ptr p);
    static void release (
        ::Logger_ptr p);
    static ::Logger_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Logger_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_LOGGER_FACTORY__TRAITS_)
#define _LOGGER_FACTORY__TRAITS_

  template<>
  struct  Objref_Traits< ::Logger_Factory>
  {
    static ::Logger_Factory_ptr duplicate (
        ::Logger_Factory_ptr p);
    static void release (
        ::Logger_Factory_ptr p);
    static ::Logger_Factory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Logger_Factory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Logger_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Logger_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_ch.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, Logger::Log_Priority _tao_enumerator);
 ::CORBA::Boolean operator>> (TAO_InputCDR &strm, Logger::Log_Priority &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_ch.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, Logger::Verbosity_Level _tao_enumerator);
 ::CORBA::Boolean operator>> (TAO_InputCDR &strm, Logger::Verbosity_Level &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Logger::Log_Record &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Logger::Log_Record &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Logger_Factory_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Logger_Factory_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "LoggerC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

