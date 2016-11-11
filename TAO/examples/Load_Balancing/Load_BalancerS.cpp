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

#ifndef _TAO_IDL_LOAD_BALANCERS_PF466U_CPP_
#define _TAO_IDL_LOAD_BALANCERS_PF466U_CPP_


#include "Load_BalancerS.h"
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

class TAO_Load_Balancer_Object_Group_Factory_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /mnt/win_d/projects/ATCD/ACE/bin/ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Load_Balancer_Object_Group_Factory_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Load_Balancer_Object_Group_Factory_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
     24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
     24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
     24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
     24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
     24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
     24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
     24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
     24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
     24, 24, 24, 24, 24,  0, 24,  0, 24, 24,
      0,  5, 24, 24, 24, 24, 24, 24, 24,  0,
      0, 24, 24, 24,  0,  5,  0, 24, 24, 24,
     24, 24, 24, 24, 24, 24, 24, 24,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Load_Balancer_Object_Group_Factory_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 10,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 18,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 23,
      HASH_VALUE_RANGE = 19,
      DUPLICATES = 0,
      WORDLIST_SIZE = 15
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"make_random", &POA_Load_Balancer::Object_Group_Factory::make_random_skel, 0},
      {"resolve", &POA_Load_Balancer::Object_Group_Factory::resolve_skel, 0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"make_round_robin", &POA_Load_Balancer::Object_Group_Factory::make_round_robin_skel, 0},
      {"",0,0},
      {"random_groups", &POA_Load_Balancer::Object_Group_Factory::random_groups_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"round_robin_groups", &POA_Load_Balancer::Object_Group_Factory::round_robin_groups_skel, 0},
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

static TAO_Load_Balancer_Object_Group_Factory_Perfect_Hash_OpTable tao_Load_Balancer_Object_Group_Factory_optable;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:90

POA_Load_Balancer::Object_Group_Factory::Object_Group_Factory (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Load_Balancer_Object_Group_Factory_optable;
}

POA_Load_Balancer::Object_Group_Factory::Object_Group_Factory (const Object_Group_Factory& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Load_Balancer::Object_Group_Factory::~Object_Group_Factory (void)
{
}

namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class make_round_robin_Object_Group_Factory
    : public TAO::Upcall_Command
  {
  public:
    inline make_round_robin_Object_Group_Factory (
      POA_Load_Balancer::Object_Group_Factory * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Load_Balancer::Object_Group>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Load_Balancer::Object_Group> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< char *>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< char *> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->make_round_robin (
          arg_1);
    }
  
  private:
    POA_Load_Balancer::Object_Group_Factory * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group_Factory::make_round_robin_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Load_Balancer::Object_Group>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_id;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_id
    };
  
  static size_t const nargs = 2;

  POA_Load_Balancer::Object_Group_Factory * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group_Factory *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  make_round_robin_Object_Group_Factory command (
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


namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class make_random_Object_Group_Factory
    : public TAO::Upcall_Command
  {
  public:
    inline make_random_Object_Group_Factory (
      POA_Load_Balancer::Object_Group_Factory * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Load_Balancer::Object_Group>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Load_Balancer::Object_Group> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< char *>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< char *> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->make_random (
          arg_1);
    }
  
  private:
    POA_Load_Balancer::Object_Group_Factory * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group_Factory::make_random_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Load_Balancer::Object_Group>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_id;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_id
    };
  
  static size_t const nargs = 2;

  POA_Load_Balancer::Object_Group_Factory * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group_Factory *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  make_random_Object_Group_Factory command (
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


namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class resolve_Object_Group_Factory
    : public TAO::Upcall_Command
  {
  public:
    inline resolve_Object_Group_Factory (
      POA_Load_Balancer::Object_Group_Factory * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Load_Balancer::Object_Group>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Load_Balancer::Object_Group> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< char *>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< char *> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->resolve (
          arg_1);
    }
  
  private:
    POA_Load_Balancer::Object_Group_Factory * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group_Factory::resolve_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Load_Balancer::Object_Group>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_id;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_id
    };
  
  static size_t const nargs = 2;

  POA_Load_Balancer::Object_Group_Factory * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group_Factory *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  resolve_Object_Group_Factory command (
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


namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class round_robin_groups_Object_Group_Factory
    : public TAO::Upcall_Command
  {
  public:
    inline round_robin_groups_Object_Group_Factory (
      POA_Load_Balancer::Object_Group_Factory * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Load_Balancer::Group_List>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Load_Balancer::Group_List> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->round_robin_groups ();
    }
  
  private:
    POA_Load_Balancer::Object_Group_Factory * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group_Factory::round_robin_groups_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Load_Balancer::Group_List>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Load_Balancer::Object_Group_Factory * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group_Factory *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  round_robin_groups_Object_Group_Factory command (
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


namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class random_groups_Object_Group_Factory
    : public TAO::Upcall_Command
  {
  public:
    inline random_groups_Object_Group_Factory (
      POA_Load_Balancer::Object_Group_Factory * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Load_Balancer::Group_List>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Load_Balancer::Group_List> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->random_groups ();
    }
  
  private:
    POA_Load_Balancer::Object_Group_Factory * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group_Factory::random_groups_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Load_Balancer::Group_List>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Load_Balancer::Object_Group_Factory * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group_Factory *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  random_groups_Object_Group_Factory command (
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
// be/be_visitor_interface/interface_ss.cpp:163



::CORBA::Boolean POA_Load_Balancer::Object_Group_Factory::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Load_Balancer/Object_Group_Factory:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Load_Balancer::Object_Group_Factory::_interface_repository_id (void) const
{
  return "IDL:Load_Balancer/Object_Group_Factory:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:423

void POA_Load_Balancer::Object_Group_Factory::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:370

Load_Balancer::Object_Group_Factory *
POA_Load_Balancer::Object_Group_Factory::_this (void)
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

  typedef ::Load_Balancer::Object_Group_Factory STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// be/be_interface.cpp:1865

class TAO_Load_Balancer_Object_Group_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /mnt/win_d/projects/ATCD/ACE/bin/ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Load_Balancer_Object_Group_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Load_Balancer_Object_Group_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
     23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
     23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
     23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
     23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
     23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
     23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
     23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
     23, 23, 23, 23, 23, 23, 23, 23, 23, 23,
     23, 23, 23, 23, 23,  0, 23,  0,  0, 23,
      0, 10, 23, 23, 23, 23, 23, 23, 23, 15,
     23, 23, 23, 23,  0,  0,  0,  0, 23, 23,
     23,  5, 23, 23, 23, 23, 23, 23,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Load_Balancer_Object_Group_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 12,
      MIN_WORD_LENGTH = 4,
      MAX_WORD_LENGTH = 15,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 22,
      HASH_VALUE_RANGE = 19,
      DUPLICATES = 0,
      WORDLIST_SIZE = 16
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"bind", &POA_Load_Balancer::Object_Group::bind_skel, 0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"unbind", &POA_Load_Balancer::Object_Group::unbind_skel, 0},
      {"_get_id", &POA_Load_Balancer::Object_Group::_get_id_skel, 0},
      {"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},
      {"destroy", &POA_Load_Balancer::Object_Group::destroy_skel, 0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"resolve_with_id", &POA_Load_Balancer::Object_Group::resolve_with_id_skel, 0},
      {"",0,0},
      {"resolve", &POA_Load_Balancer::Object_Group::resolve_skel, 0},
      {"",0,0},{"",0,0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},
      {"members", &POA_Load_Balancer::Object_Group::members_skel, 0},
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

static TAO_Load_Balancer_Object_Group_Perfect_Hash_OpTable tao_Load_Balancer_Object_Group_optable;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:90

POA_Load_Balancer::Object_Group::Object_Group (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Load_Balancer_Object_Group_optable;
}

POA_Load_Balancer::Object_Group::Object_Group (const Object_Group& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Load_Balancer::Object_Group::~Object_Group (void)
{
}

namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class _get_id_Object_Group
    : public TAO::Upcall_Command
  {
  public:
    inline _get_id_Object_Group (
      POA_Load_Balancer::Object_Group * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< char *>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< char *> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->id ();
    }
  
  private:
    POA_Load_Balancer::Object_Group * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group::_get_id_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< char *>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Load_Balancer::Object_Group * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  _get_id_Object_Group command (
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


namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class bind_Object_Group
    : public TAO::Upcall_Command
  {
  public:
    inline bind_Object_Group (
      POA_Load_Balancer::Object_Group * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Load_Balancer::Member>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Load_Balancer::Member> (
          this->operation_details_,
          this->args_,
          1);
        
      this->servant_->bind (
        arg_1);
    }
  
  private:
    POA_Load_Balancer::Object_Group * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group::bind_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::Load_Balancer::Member>::in_arg_val _tao_member_;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_member_
    };
  
  static size_t const nargs = 2;

  POA_Load_Balancer::Object_Group * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  bind_Object_Group command (
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


namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class unbind_Object_Group
    : public TAO::Upcall_Command
  {
  public:
    inline unbind_Object_Group (
      POA_Load_Balancer::Object_Group * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< char *>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< char *> (
          this->operation_details_,
          this->args_,
          1);
        
      this->servant_->unbind (
        arg_1);
    }
  
  private:
    POA_Load_Balancer::Object_Group * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group::unbind_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_id;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_id
    };
  
  static size_t const nargs = 2;

  POA_Load_Balancer::Object_Group * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  unbind_Object_Group command (
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


namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class resolve_Object_Group
    : public TAO::Upcall_Command
  {
  public:
    inline resolve_Object_Group (
      POA_Load_Balancer::Object_Group * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CORBA::Object>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::Object> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->resolve ();
    }
  
  private:
    POA_Load_Balancer::Object_Group * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group::resolve_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Object>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Load_Balancer::Object_Group * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  resolve_Object_Group command (
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


namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class resolve_with_id_Object_Group
    : public TAO::Upcall_Command
  {
  public:
    inline resolve_with_id_Object_Group (
      POA_Load_Balancer::Object_Group * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CORBA::Object>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::Object> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< char *>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< char *> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_->resolve_with_id (
          arg_1);
    }
  
  private:
    POA_Load_Balancer::Object_Group * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group::resolve_with_id_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Object>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_id;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_id
    };
  
  static size_t const nargs = 2;

  POA_Load_Balancer::Object_Group * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  resolve_with_id_Object_Group command (
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


namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class members_Object_Group
    : public TAO::Upcall_Command
  {
  public:
    inline members_Object_Group (
      POA_Load_Balancer::Object_Group * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Load_Balancer::Member_ID_List>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Load_Balancer::Member_ID_List> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->members ();
    }
  
  private:
    POA_Load_Balancer::Object_Group * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group::members_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Load_Balancer::Member_ID_List>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Load_Balancer::Object_Group * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  members_Object_Group command (
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


namespace POA_Load_Balancer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class destroy_Object_Group
    : public TAO::Upcall_Command
  {
  public:
    inline destroy_Object_Group (
      POA_Load_Balancer::Object_Group * servant)
      : servant_ (servant)
    {
    }

    virtual void execute (void)
    {
      this->servant_->destroy ();
    }
  
  private:
    POA_Load_Balancer::Object_Group * const servant_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Load_Balancer::Object_Group::destroy_skel (
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

  POA_Load_Balancer::Object_Group * const impl =
    dynamic_cast<POA_Load_Balancer::Object_Group *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  destroy_Object_Group command (
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



::CORBA::Boolean POA_Load_Balancer::Object_Group::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Load_Balancer/Object_Group:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Load_Balancer::Object_Group::_interface_repository_id (void) const
{
  return "IDL:Load_Balancer/Object_Group:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:423

void POA_Load_Balancer::Object_Group::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:370

Load_Balancer::Object_Group *
POA_Load_Balancer::Object_Group::_this (void)
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

  typedef ::Load_Balancer::Object_Group STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

#endif /* ifndef */

