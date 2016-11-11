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

#ifndef _TAO_IDL_TESTS_QJHDK7_H_
#define _TAO_IDL_TESTS_QJHDK7_H_

#include /**/ "ace/pre.h"

#include "TestC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/BD_String_SArgument_T.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
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

#if !defined (_MYSTRINGTYPE10__SARG_TRAITS_)
#define _MYSTRINGTYPE10__SARG_TRAITS_

  template<>
  class SArg_Traits<MyStringType_10>
    : public
        BD_String_SArg_Traits_T<
            CORBA::String_var,
            10,
            TAO::Any_Insert_Policy_Noop
        >
  {
  };

#endif /* end #if !defined */

#if !defined (_MYOTHERSTRINGTYPE10__SARG_TRAITS_)
#define _MYOTHERSTRINGTYPE10__SARG_TRAITS_

  template<>
  class SArg_Traits<MyOtherStringType_10>
    : public
        BD_String_SArg_Traits_T<
            CORBA::String_var,
            10,
            TAO::Any_Insert_Policy_Noop
        >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_FOO__SARG_TRAITS_)
#define _TEST_FOO__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Test::Foo>
    : public
        Object_SArg_Traits_T<
            ::Test::Foo_ptr,
            ::Test::Foo_var,
            ::Test::Foo_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

#if !defined (_MYSTRING40__SARG_TRAITS_)
#define _MYSTRING40__SARG_TRAITS_

  template<>
  class SArg_Traits<MyString_40>
    : public
        BD_String_SArg_Traits_T<
            CORBA::String_var,
            40,
            TAO::Any_Insert_Policy_Noop
        >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FOO_ONE_WHATEVER__SARG_TRAITS_)
#define _FOO_ONE_WHATEVER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Foo::One::Whatever>
    : public
        Object_SArg_Traits_T<
            ::Foo::One::Whatever_ptr,
            ::Foo::One::Whatever_var,
            ::Foo::One::Whatever_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

#if !defined (_MYSTRING100__SARG_TRAITS_)
#define _MYSTRING100__SARG_TRAITS_

  template<>
  class SArg_Traits<MyString_100>
    : public
        BD_String_SArg_Traits_T<
            CORBA::String_var,
            100,
            TAO::Any_Insert_Policy_Noop
        >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FOO_TWO_WHOCARES__SARG_TRAITS_)
#define _FOO_TWO_WHOCARES__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Foo::Two::WhoCares>
    : public
        Object_SArg_Traits_T<
            ::Foo::Two::WhoCares_ptr,
            ::Foo::Two::WhoCares_var,
            ::Foo::Two::WhoCares_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

#if !defined (_MYSTRING100__SARG_TRAITS_)
#define _MYSTRING100__SARG_TRAITS_

  template<>
  class SArg_Traits<MyString_100>
    : public
        BD_String_SArg_Traits_T<
            CORBA::String_var,
            100,
            TAO::Any_Insert_Policy_Noop
        >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_FOO_THREE_WHOCARES__SARG_TRAITS_)
#define _FOO_THREE_WHOCARES__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Foo::Three::WhoCares>
    : public
        Object_SArg_Traits_T<
            ::Foo::Three::WhoCares_ptr,
            ::Foo::Three::WhoCares_var,
            ::Foo::Three::WhoCares_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_Test
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Foo;
  typedef Foo *Foo_ptr;

  class  Foo
    : public virtual PortableServer::ServantBase
  {
  protected:
    Foo (void);
  
  public:
    /// Useful for template programming.
    typedef ::Test::Foo _stub_type;
    typedef ::Test::Foo_ptr _stub_ptr_type;
    typedef ::Test::Foo_var _stub_var_type;

    Foo (const Foo& rhs);
    virtual ~Foo (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Test::Foo *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void op1 (
      const char * s) = 0;

    static void op1_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_sh.cpp:36

    virtual void op2 (
      const char * s) = 0;

    static void op2_skel (
        TAO_ServerRequest &server_request,
        TAO::Portable_Server::Servant_Upcall *servant_upcall,
        TAO_ServantBase *servant);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Test

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_Foo
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_module/module_sh.cpp:35

  namespace One
  {
    

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_sh.cpp:73

    class Whatever;
    typedef Whatever *Whatever_ptr;

    class  Whatever
      : public virtual PortableServer::ServantBase
    {
    protected:
      Whatever (void);
    
    public:
      /// Useful for template programming.
      typedef ::Foo::One::Whatever _stub_type;
      typedef ::Foo::One::Whatever_ptr _stub_ptr_type;
      typedef ::Foo::One::Whatever_var _stub_var_type;

      Whatever (const Whatever& rhs);
      virtual ~Whatever (void);

      virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

      virtual void _dispatch (
          TAO_ServerRequest & req,
          TAO::Portable_Server::Servant_Upcall *servant_upcall);
      
      ::Foo::One::Whatever *_this (void);
      
      virtual const char* _interface_repository_id (void) const;

      // TAO_IDL - Generated from
      // be/be_visitor_operation/operation_sh.cpp:36

      virtual void someOp (
        const char * s) = 0;

      static void someOp_skel (
          TAO_ServerRequest &server_request,
          TAO::Portable_Server::Servant_Upcall *servant_upcall,
          TAO_ServantBase *servant);
    };
  
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_sh.cpp:66

  } // module Foo::One

  // TAO_IDL - Generated from
  // be/be_visitor_module/module_sh.cpp:35

  namespace Two
  {
    

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_sh.cpp:73

    class WhoCares;
    typedef WhoCares *WhoCares_ptr;

    class  WhoCares
      : public virtual PortableServer::ServantBase
    {
    protected:
      WhoCares (void);
    
    public:
      /// Useful for template programming.
      typedef ::Foo::Two::WhoCares _stub_type;
      typedef ::Foo::Two::WhoCares_ptr _stub_ptr_type;
      typedef ::Foo::Two::WhoCares_var _stub_var_type;

      WhoCares (const WhoCares& rhs);
      virtual ~WhoCares (void);

      virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

      virtual void _dispatch (
          TAO_ServerRequest & req,
          TAO::Portable_Server::Servant_Upcall *servant_upcall);
      
      ::Foo::Two::WhoCares *_this (void);
      
      virtual const char* _interface_repository_id (void) const;

      // TAO_IDL - Generated from
      // be/be_visitor_operation/operation_sh.cpp:36

      virtual void someOp (
        const char * s) = 0;

      static void someOp_skel (
          TAO_ServerRequest &server_request,
          TAO::Portable_Server::Servant_Upcall *servant_upcall,
          TAO_ServantBase *servant);
    };
  
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_sh.cpp:66

  } // module Foo::Two

  // TAO_IDL - Generated from
  // be/be_visitor_module/module_sh.cpp:35

  namespace Three
  {
    

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_sh.cpp:73

    class WhoCares;
    typedef WhoCares *WhoCares_ptr;

    class  WhoCares
      : public virtual PortableServer::ServantBase
    {
    protected:
      WhoCares (void);
    
    public:
      /// Useful for template programming.
      typedef ::Foo::Three::WhoCares _stub_type;
      typedef ::Foo::Three::WhoCares_ptr _stub_ptr_type;
      typedef ::Foo::Three::WhoCares_var _stub_var_type;

      WhoCares (const WhoCares& rhs);
      virtual ~WhoCares (void);

      virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

      virtual void _dispatch (
          TAO_ServerRequest & req,
          TAO::Portable_Server::Servant_Upcall *servant_upcall);
      
      ::Foo::Three::WhoCares *_this (void);
      
      virtual const char* _interface_repository_id (void) const;

      // TAO_IDL - Generated from
      // be/be_visitor_operation/operation_sh.cpp:36

      virtual void someOp (
        const char * s) = 0;

      static void someOp_skel (
          TAO_ServerRequest &server_request,
          TAO::Portable_Server::Servant_Upcall *servant_upcall,
          TAO_ServantBase *servant);
    };
  
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_sh.cpp:66

  } // module Foo::Three

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Foo

#include /**/ "ace/post.h"

#endif /* ifndef */

