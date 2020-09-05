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
// be/be_codegen.cpp:649

#ifndef _TAO_IDL_TESTS_RGE4IM_CPP_
#define _TAO_IDL_TESTS_RGE4IM_CPP_


#include "TestS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"

// TAO_IDL - Generated from
// be/be_interface.cpp:1865

class TAO_Test_Oneway_Buffering_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /mnt/win_d/projects/ATCD/ACE/bin/ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Test_Oneway_Buffering_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Test_Oneway_Buffering_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
     21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
     21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
     21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
     21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
     21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
     21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
     21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
     21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
     21, 21, 21, 21, 21,  0, 21,  0, 21,  0,
      0,  5, 15, 21,  0, 21, 21, 21, 21, 21,
      0, 21, 21, 21,  0,  0,  0, 21, 21, 21,
     21, 21, 21, 21, 21, 21, 21, 21,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Test_Oneway_Buffering_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 9,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 20,
      HASH_VALUE_RANGE = 17,
      DUPLICATES = 0,
      WORDLIST_SIZE = 13
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"sync", &POA_Test::Oneway_Buffering::sync_skel, 0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"shutdown", &POA_Test::Oneway_Buffering::shutdown_skel, 0},
      {"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},
      {"receive_data", &POA_Test::Oneway_Buffering::receive_data_skel, 0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"flush", &POA_Test::Oneway_Buffering::flush_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_Test_Oneway_Buffering_Perfect_Hash_OpTable tao_Test_Oneway_Buffering_optable;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:90

POA_Test::Oneway_Buffering::Oneway_Buffering (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Test_Oneway_Buffering_optable;
}

POA_Test::Oneway_Buffering::Oneway_Buffering (const Oneway_Buffering& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Test::Oneway_Buffering::~Oneway_Buffering (void)
{
}

namespace POA_Test
{


  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class receive_data_Oneway_Buffering
    : public TAO::Upcall_Command
  {
  public:
    inline receive_data_Oneway_Buffering (
      POA_Test::Oneway_Buffering * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Test::Payload>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Test::Payload> (
          this->operation_details_,
          this->args_,
          1);

      this->servant_->receive_data (
        arg_1);
    }

  private:
    POA_Test::Oneway_Buffering * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Oneway_Buffering::receive_data_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::Test::Payload>::in_arg_val _tao_the_payload;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_the_payload
    };

  static size_t const nargs = 2;

  POA_Test::Oneway_Buffering * const impl =
    dynamic_cast<POA_Test::Oneway_Buffering *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  receive_data_Oneway_Buffering command (
    impl,
    server_request.operation_details (),
    args);

  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_Test
{


  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class flush_Oneway_Buffering
    : public TAO::Upcall_Command
  {
  public:
    inline flush_Oneway_Buffering (
      POA_Test::Oneway_Buffering * servant)
      : servant_ (servant)
    {
    }

    virtual void execute (void)
    {
      this->servant_->flush ();
    }

  private:
    POA_Test::Oneway_Buffering * const servant_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Oneway_Buffering::flush_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };

  static size_t const nargs = 1;

  POA_Test::Oneway_Buffering * const impl =
    dynamic_cast<POA_Test::Oneway_Buffering *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  flush_Oneway_Buffering command (
    impl);

  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_Test
{


  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class sync_Oneway_Buffering
    : public TAO::Upcall_Command
  {
  public:
    inline sync_Oneway_Buffering (
      POA_Test::Oneway_Buffering * servant)
      : servant_ (servant)
    {
    }

    virtual void execute (void)
    {
      this->servant_->sync ();
    }

  private:
    POA_Test::Oneway_Buffering * const servant_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Oneway_Buffering::sync_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };

  static size_t const nargs = 1;

  POA_Test::Oneway_Buffering * const impl =
    dynamic_cast<POA_Test::Oneway_Buffering *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  sync_Oneway_Buffering command (
    impl);

  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_Test
{


  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class shutdown_Oneway_Buffering
    : public TAO::Upcall_Command
  {
  public:
    inline shutdown_Oneway_Buffering (
      POA_Test::Oneway_Buffering * servant)
      : servant_ (servant)
    {
    }

    virtual void execute (void)
    {
      this->servant_->shutdown ();
    }

  private:
    POA_Test::Oneway_Buffering * const servant_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Oneway_Buffering::shutdown_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };

  static size_t const nargs = 1;

  POA_Test::Oneway_Buffering * const impl =
    dynamic_cast<POA_Test::Oneway_Buffering *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  shutdown_Oneway_Buffering command (
    impl);

  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:163



::CORBA::Boolean POA_Test::Oneway_Buffering::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Oneway_Buffering:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Test::Oneway_Buffering::_interface_repository_id (void) const
{
  return "IDL:Test/Oneway_Buffering:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:423

void POA_Test::Oneway_Buffering::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:370

Test::Oneway_Buffering *
POA_Test::Oneway_Buffering::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();

  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);

  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::Test::Oneway_Buffering STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// be/be_interface.cpp:1865

class TAO_Test_Oneway_Buffering_Admin_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /mnt/win_d/projects/ATCD/ACE/bin/ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Test_Oneway_Buffering_Admin_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Test_Oneway_Buffering_Admin_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22,  0, 22,  4,  0, 22,
      0,  5,  0, 22,  0, 22, 22, 22, 22, 22,
      0, 22, 22, 22,  5,  0,  0, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Test_Oneway_Buffering_Admin_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 10,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 20,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 21,
      HASH_VALUE_RANGE = 17,
      DUPLICATES = 0,
      WORDLIST_SIZE = 15
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"flush", &POA_Test::Oneway_Buffering_Admin::flush_skel, 0},
      {"",0,0},{"",0,0},
      {"shutdown", &POA_Test::Oneway_Buffering_Admin::shutdown_skel, 0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},
      {"request_count", &POA_Test::Oneway_Buffering_Admin::request_count_skel, 0},
      {"",0,0},
      {"bytes_received_count", &POA_Test::Oneway_Buffering_Admin::bytes_received_count_skel, 0},
      {"request_received", &POA_Test::Oneway_Buffering_Admin::request_received_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_Test_Oneway_Buffering_Admin_Perfect_Hash_OpTable tao_Test_Oneway_Buffering_Admin_optable;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:90

POA_Test::Oneway_Buffering_Admin::Oneway_Buffering_Admin (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Test_Oneway_Buffering_Admin_optable;
}

POA_Test::Oneway_Buffering_Admin::Oneway_Buffering_Admin (const Oneway_Buffering_Admin& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Test::Oneway_Buffering_Admin::~Oneway_Buffering_Admin (void)
{
}

namespace POA_Test
{


  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class request_count_Oneway_Buffering_Admin
    : public TAO::Upcall_Command
  {
  public:
    inline request_count_Oneway_Buffering_Admin (
      POA_Test::Oneway_Buffering_Admin * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CORBA::ULong>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::ULong> (
          this->operation_details_,
          this->args_);

      TAO::SArg_Traits< ::CORBA::ULong>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::CORBA::ULong> (
          this->operation_details_,
          this->args_,
          1);

      retval =
        this->servant_->request_count (
          arg_1);
    }

  private:
    POA_Test::Oneway_Buffering_Admin * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Oneway_Buffering_Admin::request_count_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::ULong>::ret_val retval;
  TAO::SArg_Traits< ::CORBA::ULong>::in_arg_val _tao_expected_count;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_expected_count
    };

  static size_t const nargs = 2;

  POA_Test::Oneway_Buffering_Admin * const impl =
    dynamic_cast<POA_Test::Oneway_Buffering_Admin *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  request_count_Oneway_Buffering_Admin command (
    impl,
    server_request.operation_details (),
    args);

  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_Test
{


  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class bytes_received_count_Oneway_Buffering_Admin
    : public TAO::Upcall_Command
  {
  public:
    inline bytes_received_count_Oneway_Buffering_Admin (
      POA_Test::Oneway_Buffering_Admin * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CORBA::ULong>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::ULong> (
          this->operation_details_,
          this->args_);

      TAO::SArg_Traits< ::CORBA::ULong>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::CORBA::ULong> (
          this->operation_details_,
          this->args_,
          1);

      retval =
        this->servant_->bytes_received_count (
          arg_1);
    }

  private:
    POA_Test::Oneway_Buffering_Admin * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Oneway_Buffering_Admin::bytes_received_count_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::ULong>::ret_val retval;
  TAO::SArg_Traits< ::CORBA::ULong>::in_arg_val _tao_expected_count;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_expected_count
    };

  static size_t const nargs = 2;

  POA_Test::Oneway_Buffering_Admin * const impl =
    dynamic_cast<POA_Test::Oneway_Buffering_Admin *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  bytes_received_count_Oneway_Buffering_Admin command (
    impl,
    server_request.operation_details (),
    args);

  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_Test
{


  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class request_received_Oneway_Buffering_Admin
    : public TAO::Upcall_Command
  {
  public:
    inline request_received_Oneway_Buffering_Admin (
      POA_Test::Oneway_Buffering_Admin * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CORBA::ULong>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::CORBA::ULong> (
          this->operation_details_,
          this->args_,
          1);

      this->servant_->request_received (
        arg_1);
    }

  private:
    POA_Test::Oneway_Buffering_Admin * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Oneway_Buffering_Admin::request_received_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::CORBA::ULong>::in_arg_val _tao_payload_length;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_payload_length
    };

  static size_t const nargs = 2;

  POA_Test::Oneway_Buffering_Admin * const impl =
    dynamic_cast<POA_Test::Oneway_Buffering_Admin *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  request_received_Oneway_Buffering_Admin command (
    impl,
    server_request.operation_details (),
    args);

  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_Test
{


  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class flush_Oneway_Buffering_Admin
    : public TAO::Upcall_Command
  {
  public:
    inline flush_Oneway_Buffering_Admin (
      POA_Test::Oneway_Buffering_Admin * servant)
      : servant_ (servant)
    {
    }

    virtual void execute (void)
    {
      this->servant_->flush ();
    }

  private:
    POA_Test::Oneway_Buffering_Admin * const servant_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Oneway_Buffering_Admin::flush_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };

  static size_t const nargs = 1;

  POA_Test::Oneway_Buffering_Admin * const impl =
    dynamic_cast<POA_Test::Oneway_Buffering_Admin *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  flush_Oneway_Buffering_Admin command (
    impl);

  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_Test
{


  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class shutdown_Oneway_Buffering_Admin
    : public TAO::Upcall_Command
  {
  public:
    inline shutdown_Oneway_Buffering_Admin (
      POA_Test::Oneway_Buffering_Admin * servant)
      : servant_ (servant)
    {
    }

    virtual void execute (void)
    {
      this->servant_->shutdown ();
    }

  private:
    POA_Test::Oneway_Buffering_Admin * const servant_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Oneway_Buffering_Admin::shutdown_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };

  static size_t const nargs = 1;

  POA_Test::Oneway_Buffering_Admin * const impl =
    dynamic_cast<POA_Test::Oneway_Buffering_Admin *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  shutdown_Oneway_Buffering_Admin command (
    impl);

  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:163



::CORBA::Boolean POA_Test::Oneway_Buffering_Admin::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Oneway_Buffering_Admin:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Test::Oneway_Buffering_Admin::_interface_repository_id (void) const
{
  return "IDL:Test/Oneway_Buffering_Admin:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:423

void POA_Test::Oneway_Buffering_Admin::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:370

Test::Oneway_Buffering_Admin *
POA_Test::Oneway_Buffering_Admin::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();

  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);

  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::Test::Oneway_Buffering_Admin STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

#endif /* ifndef */

