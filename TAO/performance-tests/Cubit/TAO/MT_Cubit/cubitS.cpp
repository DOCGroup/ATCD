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

#ifndef _TAO_IDL_CUBITS_ETFEAX_CPP_
#define _TAO_IDL_CUBITS_ETFEAX_CPP_


#include "cubitS.h"
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

class TAO_Cubit_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /mnt/win_d/projects/ATCD/ACE/bin/ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Cubit_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Cubit_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
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
     21, 21, 21, 21, 21,  0, 21,  0, 21,  5,
      5, 10, 21,  0, 21, 21, 21, 21, 21, 21,
      0, 21,  0, 21, 21,  0,  0, 21, 21, 21,
     21, 21, 21, 21, 21, 21, 21, 21,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Cubit_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 11,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 20,
      HASH_VALUE_RANGE = 17,
      DUPLICATES = 2,
      WORDLIST_SIZE = 15
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"noop", &POA_Cubit::noop_skel, 0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"shutdown", &POA_Cubit::shutdown_skel, 0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"cube_long", &POA_Cubit::cube_long_skel, 0},
      {"cube_octet", &POA_Cubit::cube_octet_skel, 0},
      {"cube_short", &POA_Cubit::cube_short_skel, 0},
      {"cube_struct", &POA_Cubit::cube_struct_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
    };

  static const signed char lookup[] =
    {
       -1,  -1,  -1,  -1,   4,   5,  -1,  -1,   6,  -1,   7, -10,  -2,   8, 
        9, -24,  12,  -1,  -1,  13,  14, 
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          int slot = lookup[key];

          if (slot >= 0 && slot < WORDLIST_SIZE)
            {
              const char *s = wordlist[slot].opname;

              if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
                return &wordlist[slot];
            }
          else if (slot < 0 && slot >= -MAX_HASH_VALUE)
            return 0;
          else
            {
              unsigned int offset = key + slot + (slot > 0 ? -MAX_HASH_VALUE : MAX_HASH_VALUE);
              const TAO_operation_db_entry *base = &wordlist[-lookup[offset]];
              const TAO_operation_db_entry *ptr = base + -lookup[offset + 1];

              while (--ptr >= base)
                if (*str == *ptr->opname && !ACE_OS::strncmp (str + 1, ptr->opname + 1, len - 1))
                  return ptr;
            }
        }
    }
  return 0;
}

static TAO_Cubit_Perfect_Hash_OpTable tao_Cubit_optable;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:90

POA_Cubit::POA_Cubit (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Cubit_optable;
}

POA_Cubit::POA_Cubit (const POA_Cubit& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Cubit::~POA_Cubit (void)
{
}


// TAO_IDL - Generated from
// be/be_visitor_operation/upcall_command_ss.cpp:80

class cube_octet_Cubit
  : public TAO::Upcall_Command
{
public:
  inline cube_octet_Cubit (
    POA_Cubit * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  virtual void execute (void)
  {
    TAO::SArg_Traits< ::ACE_InputCDR::to_octet>::ret_arg_type retval =
      TAO::Portable_Server::get_ret_arg< ::ACE_InputCDR::to_octet> (
        this->operation_details_,
        this->args_);
    
    TAO::SArg_Traits< ::ACE_InputCDR::to_octet>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::ACE_InputCDR::to_octet> (
        this->operation_details_,
        this->args_,
        1);
      
    retval =
      this->servant_->cube_octet (
        arg_1);
  }

private:
  POA_Cubit * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Cubit::cube_octet_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::ACE_InputCDR::to_octet>::ret_val retval;
  TAO::SArg_Traits< ::ACE_InputCDR::to_octet>::in_arg_val _tao_o;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_o
    };
  
  static size_t const nargs = 2;

  POA_Cubit * const impl =
    dynamic_cast<POA_Cubit *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  cube_octet_Cubit command (
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



// TAO_IDL - Generated from
// be/be_visitor_operation/upcall_command_ss.cpp:80

class cube_short_Cubit
  : public TAO::Upcall_Command
{
public:
  inline cube_short_Cubit (
    POA_Cubit * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  virtual void execute (void)
  {
    TAO::SArg_Traits< ::CORBA::Short>::ret_arg_type retval =
      TAO::Portable_Server::get_ret_arg< ::CORBA::Short> (
        this->operation_details_,
        this->args_);
    
    TAO::SArg_Traits< ::CORBA::Short>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::CORBA::Short> (
        this->operation_details_,
        this->args_,
        1);
      
    retval =
      this->servant_->cube_short (
        arg_1);
  }

private:
  POA_Cubit * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Cubit::cube_short_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Short>::ret_val retval;
  TAO::SArg_Traits< ::CORBA::Short>::in_arg_val _tao_s;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_s
    };
  
  static size_t const nargs = 2;

  POA_Cubit * const impl =
    dynamic_cast<POA_Cubit *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  cube_short_Cubit command (
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



// TAO_IDL - Generated from
// be/be_visitor_operation/upcall_command_ss.cpp:80

class cube_long_Cubit
  : public TAO::Upcall_Command
{
public:
  inline cube_long_Cubit (
    POA_Cubit * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  virtual void execute (void)
  {
    TAO::SArg_Traits< ::CORBA::Long>::ret_arg_type retval =
      TAO::Portable_Server::get_ret_arg< ::CORBA::Long> (
        this->operation_details_,
        this->args_);
    
    TAO::SArg_Traits< ::CORBA::Long>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::CORBA::Long> (
        this->operation_details_,
        this->args_,
        1);
      
    retval =
      this->servant_->cube_long (
        arg_1);
  }

private:
  POA_Cubit * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Cubit::cube_long_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Long>::ret_val retval;
  TAO::SArg_Traits< ::CORBA::Long>::in_arg_val _tao_l;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_l
    };
  
  static size_t const nargs = 2;

  POA_Cubit * const impl =
    dynamic_cast<POA_Cubit *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  cube_long_Cubit command (
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



// TAO_IDL - Generated from
// be/be_visitor_operation/upcall_command_ss.cpp:80

class cube_struct_Cubit
  : public TAO::Upcall_Command
{
public:
  inline cube_struct_Cubit (
    POA_Cubit * servant,
    TAO_Operation_Details const * operation_details,
    TAO::Argument * const args[])
    : servant_ (servant)
      , operation_details_ (operation_details)
      , args_ (args)
  {
  }

  virtual void execute (void)
  {
    TAO::SArg_Traits< ::Cubit::Many>::ret_arg_type retval =
      TAO::Portable_Server::get_ret_arg< ::Cubit::Many> (
        this->operation_details_,
        this->args_);
    
    TAO::SArg_Traits< ::Cubit::Many>::in_arg_type arg_1 =
      TAO::Portable_Server::get_in_arg< ::Cubit::Many> (
        this->operation_details_,
        this->args_,
        1);
      
    retval =
      this->servant_->cube_struct (
        arg_1);
  }

private:
  POA_Cubit * const servant_;
  TAO_Operation_Details const * const operation_details_;
  TAO::Argument * const * const args_;
};

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Cubit::cube_struct_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Cubit::Many>::ret_val retval;
  TAO::SArg_Traits< ::Cubit::Many>::in_arg_val _tao_values;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_values
    };
  
  static size_t const nargs = 2;

  POA_Cubit * const impl =
    dynamic_cast<POA_Cubit *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  cube_struct_Cubit command (
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



// TAO_IDL - Generated from
// be/be_visitor_operation/upcall_command_ss.cpp:80

class noop_Cubit
  : public TAO::Upcall_Command
{
public:
  inline noop_Cubit (
    POA_Cubit * servant)
    : servant_ (servant)
  {
  }

  virtual void execute (void)
  {
    this->servant_->noop ();
  }

private:
  POA_Cubit * const servant_;
};

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Cubit::noop_skel (
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

  POA_Cubit * const impl =
    dynamic_cast<POA_Cubit *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  noop_Cubit command (
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
// be/be_visitor_operation/upcall_command_ss.cpp:80

class shutdown_Cubit
  : public TAO::Upcall_Command
{
public:
  inline shutdown_Cubit (
    POA_Cubit * servant)
    : servant_ (servant)
  {
  }

  virtual void execute (void)
  {
    this->servant_->shutdown ();
  }

private:
  POA_Cubit * const servant_;
};

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Cubit::shutdown_skel (
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

  POA_Cubit * const impl =
    dynamic_cast<POA_Cubit *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  shutdown_Cubit command (
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



::CORBA::Boolean POA_Cubit::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Cubit:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Cubit::_interface_repository_id (void) const
{
  return "IDL:Cubit:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:423

void POA_Cubit::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:370

Cubit *
POA_Cubit::_this (void)
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

  typedef ::Cubit STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

#endif /* ifndef */

