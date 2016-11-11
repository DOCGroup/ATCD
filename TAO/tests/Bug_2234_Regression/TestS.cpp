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

#ifndef _TAO_IDL_TESTS_IUKWOZ_CPP_
#define _TAO_IDL_TESTS_IUKWOZ_CPP_


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

class TAO_Test_Foo_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: /mnt/win_d/projects/ATCD/ACE/bin/ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_Test_Foo_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_Test_Foo_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
     36, 36, 36,  0,  0, 36, 36, 36, 36, 36,
     36, 36, 36, 36, 36, 15, 36, 15, 36, 36,
      0,  5, 36, 10, 36, 36, 36, 36, 36, 36,
      0, 36, 36, 36,  0, 36,  0, 36, 36, 36,
     36,  0, 36, 36, 36, 36, 36, 36,
    };
  return len + asso_values[static_cast<int>(str[len - 1])] + asso_values[static_cast<int>(str[0])];
}

const TAO_operation_db_entry *
TAO_Test_Foo_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 16,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 16,
      MIN_HASH_VALUE = 7,
      MAX_HASH_VALUE = 35,
      HASH_VALUE_RANGE = 29,
      DUPLICATES = 0,
      WORDLIST_SIZE = 23
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"TestAny", &POA_Test::Foo::TestAny_skel, 0},
      {"",0,0},
      {"TestArray", &POA_Test::Foo::TestArray_skel, 0},
      {"TestObject", &POA_Test::Foo::TestObject_skel, 0},
      {"",0,0},
      {"TestVarUnion", &POA_Test::Foo::TestVarUnion_skel, 0},
      {"TestVarStruct", &POA_Test::Foo::TestVarStruct_skel, 0},
      {"ShutdownServer", &POA_Test::Foo::ShutdownServer_skel, 0},
      {"TestNonVarUnion", &POA_Test::Foo::TestNonVarUnion_skel, 0},
      {"TestNonVarStruct", &POA_Test::Foo::TestNonVarStruct_skel, 0},
      {"",0,0},
      {"TestLong", &POA_Test::Foo::TestLong_skel, 0},
      {"",0,0},
      {"TestString", &POA_Test::Foo::TestString_skel, 0},
      {"",0,0},{"",0,0},
      {"TestSeqOfLong", &POA_Test::Foo::TestSeqOfLong_skel, 0},
      {"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
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

static TAO_Test_Foo_Perfect_Hash_OpTable tao_Test_Foo_optable;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:90

POA_Test::Foo::Foo (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_Test_Foo_optable;
}

POA_Test::Foo::Foo (const Foo& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_Test::Foo::~Foo (void)
{
}

namespace POA_Test
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_operation/upcall_command_ss.cpp:80

  class TestLong_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline TestLong_Foo (
      POA_Test::Foo * servant,
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
        
      TAO::SArg_Traits< ::CORBA::Long>::out_arg_type arg_2 =
        TAO::Portable_Server::get_out_arg< ::CORBA::Long> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< ::CORBA::Long>::inout_arg_type arg_3 =
        TAO::Portable_Server::get_inout_arg< ::CORBA::Long> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->TestLong (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Test::Foo * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::TestLong_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Long>::ret_val retval;
  TAO::SArg_Traits< ::CORBA::Long>::in_arg_val _tao_a;
  TAO::SArg_Traits< ::CORBA::Long>::out_arg_val _tao_b;
  TAO::SArg_Traits< ::CORBA::Long>::inout_arg_val _tao_c;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_a,
      &_tao_b,
      &_tao_c
    };
  
  static size_t const nargs = 4;

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  TestLong_Foo command (
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

  class TestString_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline TestString_Foo (
      POA_Test::Foo * servant,
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
      
      TAO::SArg_Traits< char *>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< char *> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< char *>::out_arg_type arg_2 =
        TAO::Portable_Server::get_out_arg< char *> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< char *>::inout_arg_type arg_3 =
        TAO::Portable_Server::get_inout_arg< char *> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->TestString (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Test::Foo * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::TestString_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< char *>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_a;
  TAO::SArg_Traits< char *>::out_arg_val _tao_b;
  TAO::SArg_Traits< char *>::inout_arg_val _tao_c;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_a,
      &_tao_b,
      &_tao_c
    };
  
  static size_t const nargs = 4;

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  TestString_Foo command (
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

  class TestNonVarStruct_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline TestNonVarStruct_Foo (
      POA_Test::Foo * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Test::MyNonVarStruct>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Test::MyNonVarStruct> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::Test::MyNonVarStruct>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Test::MyNonVarStruct> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::Test::MyNonVarStruct>::out_arg_type arg_2 =
        TAO::Portable_Server::get_out_arg< ::Test::MyNonVarStruct> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< ::Test::MyNonVarStruct>::inout_arg_type arg_3 =
        TAO::Portable_Server::get_inout_arg< ::Test::MyNonVarStruct> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->TestNonVarStruct (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Test::Foo * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::TestNonVarStruct_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Test::MyNonVarStruct>::ret_val retval;
  TAO::SArg_Traits< ::Test::MyNonVarStruct>::in_arg_val _tao_a;
  TAO::SArg_Traits< ::Test::MyNonVarStruct>::out_arg_val _tao_b;
  TAO::SArg_Traits< ::Test::MyNonVarStruct>::inout_arg_val _tao_c;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_a,
      &_tao_b,
      &_tao_c
    };
  
  static size_t const nargs = 4;

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  TestNonVarStruct_Foo command (
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

  class TestVarStruct_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline TestVarStruct_Foo (
      POA_Test::Foo * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Test::MyVarStruct>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Test::MyVarStruct> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::Test::MyVarStruct>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Test::MyVarStruct> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::Test::MyVarStruct>::out_arg_type arg_2 =
        TAO::Portable_Server::get_out_arg< ::Test::MyVarStruct> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< ::Test::MyVarStruct>::inout_arg_type arg_3 =
        TAO::Portable_Server::get_inout_arg< ::Test::MyVarStruct> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->TestVarStruct (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Test::Foo * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::TestVarStruct_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Test::MyVarStruct>::ret_val retval;
  TAO::SArg_Traits< ::Test::MyVarStruct>::in_arg_val _tao_a;
  TAO::SArg_Traits< ::Test::MyVarStruct>::out_arg_val _tao_b;
  TAO::SArg_Traits< ::Test::MyVarStruct>::inout_arg_val _tao_c;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_a,
      &_tao_b,
      &_tao_c
    };
  
  static size_t const nargs = 4;

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  TestVarStruct_Foo command (
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

  class TestNonVarUnion_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline TestNonVarUnion_Foo (
      POA_Test::Foo * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Test::MyNonVarUnion>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Test::MyNonVarUnion> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::Test::MyNonVarUnion>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Test::MyNonVarUnion> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::Test::MyNonVarUnion>::out_arg_type arg_2 =
        TAO::Portable_Server::get_out_arg< ::Test::MyNonVarUnion> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< ::Test::MyNonVarUnion>::inout_arg_type arg_3 =
        TAO::Portable_Server::get_inout_arg< ::Test::MyNonVarUnion> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->TestNonVarUnion (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Test::Foo * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::TestNonVarUnion_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Test::MyNonVarUnion>::ret_val retval;
  TAO::SArg_Traits< ::Test::MyNonVarUnion>::in_arg_val _tao_a;
  TAO::SArg_Traits< ::Test::MyNonVarUnion>::out_arg_val _tao_b;
  TAO::SArg_Traits< ::Test::MyNonVarUnion>::inout_arg_val _tao_c;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_a,
      &_tao_b,
      &_tao_c
    };
  
  static size_t const nargs = 4;

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  TestNonVarUnion_Foo command (
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

  class TestVarUnion_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline TestVarUnion_Foo (
      POA_Test::Foo * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Test::MyVarUnion>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Test::MyVarUnion> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::Test::MyVarUnion>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Test::MyVarUnion> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::Test::MyVarUnion>::out_arg_type arg_2 =
        TAO::Portable_Server::get_out_arg< ::Test::MyVarUnion> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< ::Test::MyVarUnion>::inout_arg_type arg_3 =
        TAO::Portable_Server::get_inout_arg< ::Test::MyVarUnion> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->TestVarUnion (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Test::Foo * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::TestVarUnion_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Test::MyVarUnion>::ret_val retval;
  TAO::SArg_Traits< ::Test::MyVarUnion>::in_arg_val _tao_a;
  TAO::SArg_Traits< ::Test::MyVarUnion>::out_arg_val _tao_b;
  TAO::SArg_Traits< ::Test::MyVarUnion>::inout_arg_val _tao_c;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_a,
      &_tao_b,
      &_tao_c
    };
  
  static size_t const nargs = 4;

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  TestVarUnion_Foo command (
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

  class TestSeqOfLong_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline TestSeqOfLong_Foo (
      POA_Test::Foo * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Test::MySeqOfLong>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Test::MySeqOfLong> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::Test::MySeqOfLong>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Test::MySeqOfLong> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::Test::MySeqOfLong>::out_arg_type arg_2 =
        TAO::Portable_Server::get_out_arg< ::Test::MySeqOfLong> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< ::Test::MySeqOfLong>::inout_arg_type arg_3 =
        TAO::Portable_Server::get_inout_arg< ::Test::MySeqOfLong> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->TestSeqOfLong (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Test::Foo * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::TestSeqOfLong_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Test::MySeqOfLong>::ret_val retval;
  TAO::SArg_Traits< ::Test::MySeqOfLong>::in_arg_val _tao_a;
  TAO::SArg_Traits< ::Test::MySeqOfLong>::out_arg_val _tao_b;
  TAO::SArg_Traits< ::Test::MySeqOfLong>::inout_arg_val _tao_c;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_a,
      &_tao_b,
      &_tao_c
    };
  
  static size_t const nargs = 4;

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  TestSeqOfLong_Foo command (
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

  class TestAny_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline TestAny_Foo (
      POA_Test::Foo * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CORBA::Any>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::Any> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::CORBA::Any>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::CORBA::Any> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::CORBA::Any>::out_arg_type arg_2 =
        TAO::Portable_Server::get_out_arg< ::CORBA::Any> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< ::CORBA::Any>::inout_arg_type arg_3 =
        TAO::Portable_Server::get_inout_arg< ::CORBA::Any> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->TestAny (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Test::Foo * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::TestAny_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Any>::ret_val retval;
  TAO::SArg_Traits< ::CORBA::Any>::in_arg_val _tao_a;
  TAO::SArg_Traits< ::CORBA::Any>::out_arg_val _tao_b;
  TAO::SArg_Traits< ::CORBA::Any>::inout_arg_val _tao_c;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_a,
      &_tao_b,
      &_tao_c
    };
  
  static size_t const nargs = 4;

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  TestAny_Foo command (
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

  class TestArray_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline TestArray_Foo (
      POA_Test::Foo * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::Test::MyArray_tag>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::Test::MyArray_tag> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< ::Test::MyArray_tag>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::Test::MyArray_tag> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::Test::MyArray_tag>::out_arg_type arg_2 =
        TAO::Portable_Server::get_out_arg< ::Test::MyArray_tag> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< ::Test::MyArray_tag>::inout_arg_type arg_3 =
        TAO::Portable_Server::get_inout_arg< ::Test::MyArray_tag> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->TestArray (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Test::Foo * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::TestArray_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::Test::MyArray_tag>::ret_val retval;
  TAO::SArg_Traits< ::Test::MyArray_tag>::in_arg_val _tao_a;
  TAO::SArg_Traits< ::Test::MyArray_tag>::out_arg_val _tao_b;
  TAO::SArg_Traits< ::Test::MyArray_tag>::inout_arg_val _tao_c;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_a,
      &_tao_b,
      &_tao_c
    };
  
  static size_t const nargs = 4;

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  TestArray_Foo command (
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

  class TestObject_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline TestObject_Foo (
      POA_Test::Foo * servant,
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
      
      TAO::SArg_Traits< ::CORBA::Object>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::CORBA::Object> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::CORBA::Object>::out_arg_type arg_2 =
        TAO::Portable_Server::get_out_arg< ::CORBA::Object> (
          this->operation_details_,
          this->args_,
          2);
        
      TAO::SArg_Traits< ::CORBA::Object>::inout_arg_type arg_3 =
        TAO::Portable_Server::get_inout_arg< ::CORBA::Object> (
          this->operation_details_,
          this->args_,
          3);
        
      retval =
        this->servant_->TestObject (
          arg_1
          , arg_2
          , arg_3);
    }
  
  private:
    POA_Test::Foo * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::TestObject_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Object>::ret_val retval;
  TAO::SArg_Traits< ::CORBA::Object>::in_arg_val _tao_a;
  TAO::SArg_Traits< ::CORBA::Object>::out_arg_val _tao_b;
  TAO::SArg_Traits< ::CORBA::Object>::inout_arg_val _tao_c;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_a,
      &_tao_b,
      &_tao_c
    };
  
  static size_t const nargs = 4;

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  TestObject_Foo command (
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

  class ShutdownServer_Foo
    : public TAO::Upcall_Command
  {
  public:
    inline ShutdownServer_Foo (
      POA_Test::Foo * servant)
      : servant_ (servant)
    {
    }

    virtual void execute (void)
    {
      this->servant_->ShutdownServer ();
    }
  
  private:
    POA_Test::Foo * const servant_;
  };
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_ss.cpp:168

void POA_Test::Foo::ShutdownServer_skel (
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

  POA_Test::Foo * const impl =
    dynamic_cast<POA_Test::Foo *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  ShutdownServer_Foo command (
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



::CORBA::Boolean POA_Test::Foo::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Foo:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_Test::Foo::_interface_repository_id (void) const
{
  return "IDL:Test/Foo:1.0";
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:423

void POA_Test::Foo::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ss.cpp:370

Test::Foo *
POA_Test::Foo::_this (void)
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

  typedef ::Test::Foo STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

#endif /* ifndef */

