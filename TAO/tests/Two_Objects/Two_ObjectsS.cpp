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

#ifndef _TAO_IDL_TWO_OBJECTSS_VCWUFK_CPP_
#define _TAO_IDL_TWO_OBJECTSS_VCWUFK_CPP_


#include "Two_ObjectsS.h"
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

class TAO_Two_Objects_Test_First_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /mnt/win_d/projects/ATCD/ACE/bin/ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Two_Objects_Test_First_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Two_Objects_Test_First_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19,  0, 19,  0, 19, 19,
      0,  5, 19, 19, 19, 19, 19, 19, 19, 19,
     19,  5, 19, 19, 19, 19,  0, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Two_Objects_Test_First_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 18,
      HASH_VALUE_RANGE = 14,
      DUPLICATES = 0,
      WORDLIST_SIZE = 11
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},
      {"oneway_method", &POA_Two_Objects_Test::First::oneway_method_skel, 0},
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

static TAO_Two_Objects_Test_First_Perfect_Hash_OpTable tao_Two_Objects_Test_First_optable;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:90

POA_Two_Objects_Test::First::First (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Two_Objects_Test_First_optable;
}

POA_Two_Objects_Test::First::First (const First& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Two_Objects_Test::First::~First (void)
{
}

namespace POA_Two_Objects_Test
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class oneway_method_First
    : public TAO::Upcall_Command
  {
  public:
    inline oneway_method_First (
      POA_Two_Objects_Test::First * servant)
      : servant_ (servant)
    {
    }

    virtual void execute (void)
    {
      this->servant_->oneway_method ();
    }
  
  private:
    POA_Two_Objects_Test::First * const servant_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Two_Objects_Test::First::oneway_method_skel (
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

  POA_Two_Objects_Test::First * const impl =
    dynamic_cast<POA_Two_Objects_Test::First *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  oneway_method_First command (
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



::CORBA::Boolean POA_Two_Objects_Test::First::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Two_Objects_Test/First:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Two_Objects_Test::First::_interface_repository_id (void) const
{
  return "IDL:Two_Objects_Test/First:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:423

void POA_Two_Objects_Test::First::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:370

Two_Objects_Test::First *
POA_Two_Objects_Test::First::_this (void)
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

  typedef ::Two_Objects_Test::First STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// be/be_interface.cpp:1865

class TAO_Two_Objects_Test_Second_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /mnt/win_d/projects/ATCD/ACE/bin/ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Two_Objects_Test_Second_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Two_Objects_Test_Second_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20,  0, 20,  0, 20, 20,
      5,  5, 20, 20, 20, 20, 20, 20, 20, 20,
      0, 20, 20, 20, 20,  0,  0, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Two_Objects_Test_Second_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 19,
      HASH_VALUE_RANGE = 15,
      DUPLICATES = 0,
      WORDLIST_SIZE = 12
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"shutdown", &POA_Two_Objects_Test::Second::shutdown_skel, 0},
      {"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"",0,0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},
      {"twoway_method", &POA_Two_Objects_Test::Second::twoway_method_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
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

static TAO_Two_Objects_Test_Second_Perfect_Hash_OpTable tao_Two_Objects_Test_Second_optable;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:90

POA_Two_Objects_Test::Second::Second (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Two_Objects_Test_Second_optable;
}

POA_Two_Objects_Test::Second::Second (const Second& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Two_Objects_Test::Second::~Second (void)
{
}

namespace POA_Two_Objects_Test
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class twoway_method_Second
    : public TAO::Upcall_Command
  {
  public:
    inline twoway_method_Second (
      POA_Two_Objects_Test::Second * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Two_Objects_Test::Octet_Seq>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Two_Objects_Test::Octet_Seq> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->twoway_method ();
    }
  
  private:
    POA_Two_Objects_Test::Second * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Two_Objects_Test::Second::twoway_method_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Two_Objects_Test::Octet_Seq>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Two_Objects_Test::Second * const impl =
    dynamic_cast<POA_Two_Objects_Test::Second *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  twoway_method_Second command (
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


namespace POA_Two_Objects_Test
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class shutdown_Second
    : public TAO::Upcall_Command
  {
  public:
    inline shutdown_Second (
      POA_Two_Objects_Test::Second * servant)
      : servant_ (servant)
    {
    }

    virtual void execute (void)
    {
      this->servant_->shutdown ();
    }
  
  private:
    POA_Two_Objects_Test::Second * const servant_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Two_Objects_Test::Second::shutdown_skel (
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

  POA_Two_Objects_Test::Second * const impl =
    dynamic_cast<POA_Two_Objects_Test::Second *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  shutdown_Second command (
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



::CORBA::Boolean POA_Two_Objects_Test::Second::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Two_Objects_Test/Second:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Two_Objects_Test::Second::_interface_repository_id (void) const
{
  return "IDL:Two_Objects_Test/Second:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:423

void POA_Two_Objects_Test::Second::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:370

Two_Objects_Test::Second *
POA_Two_Objects_Test::Second::_this (void)
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

  typedef ::Two_Objects_Test::Second STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// be/be_interface.cpp:1865

class TAO_Two_Objects_Test_Object_Factory_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /mnt/win_d/projects/ATCD/ACE/bin/ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Two_Objects_Test_Object_Factory_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Two_Objects_Test_Object_Factory_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19,  0, 19,  0, 19,  5,
      0,  5, 19, 19, 19, 19, 19, 19, 19, 19,
     19, 19, 19, 19, 19, 19,  0, 19, 19, 19,
     19, 19, 19, 19, 19, 19, 19, 19,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Two_Objects_Test_Object_Factory_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 18,
      HASH_VALUE_RANGE = 14,
      DUPLICATES = 0,
      WORDLIST_SIZE = 12
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},
      {"create_first", &POA_Two_Objects_Test::Object_Factory::create_first_skel, 0},
      {"create_second", &POA_Two_Objects_Test::Object_Factory::create_second_skel, 0},
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

static TAO_Two_Objects_Test_Object_Factory_Perfect_Hash_OpTable tao_Two_Objects_Test_Object_Factory_optable;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:90

POA_Two_Objects_Test::Object_Factory::Object_Factory (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Two_Objects_Test_Object_Factory_optable;
}

POA_Two_Objects_Test::Object_Factory::Object_Factory (const Object_Factory& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Two_Objects_Test::Object_Factory::~Object_Factory (void)
{
}

namespace POA_Two_Objects_Test
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class create_first_Object_Factory
    : public TAO::Upcall_Command
  {
  public:
    inline create_first_Object_Factory (
      POA_Two_Objects_Test::Object_Factory * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Two_Objects_Test::First>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Two_Objects_Test::First> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->create_first ();
    }
  
  private:
    POA_Two_Objects_Test::Object_Factory * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Two_Objects_Test::Object_Factory::create_first_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Two_Objects_Test::First>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Two_Objects_Test::Object_Factory * const impl =
    dynamic_cast<POA_Two_Objects_Test::Object_Factory *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  create_first_Object_Factory command (
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


namespace POA_Two_Objects_Test
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class create_second_Object_Factory
    : public TAO::Upcall_Command
  {
  public:
    inline create_second_Object_Factory (
      POA_Two_Objects_Test::Object_Factory * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Two_Objects_Test::Second>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Two_Objects_Test::Second> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->create_second ();
    }
  
  private:
    POA_Two_Objects_Test::Object_Factory * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Two_Objects_Test::Object_Factory::create_second_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Two_Objects_Test::Second>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_Two_Objects_Test::Object_Factory * const impl =
    dynamic_cast<POA_Two_Objects_Test::Object_Factory *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  create_second_Object_Factory command (
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



::CORBA::Boolean POA_Two_Objects_Test::Object_Factory::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Two_Objects_Test/Object_Factory:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Two_Objects_Test::Object_Factory::_interface_repository_id (void) const
{
  return "IDL:Two_Objects_Test/Object_Factory:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:423

void POA_Two_Objects_Test::Object_Factory::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:370

Two_Objects_Test::Object_Factory *
POA_Two_Objects_Test::Object_Factory::_this (void)
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

  typedef ::Two_Objects_Test::Object_Factory STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

#endif /* ifndef */

