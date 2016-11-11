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

#ifndef _TAO_IDL_INHERITEDOPS_FVMWBE_H_
#define _TAO_IDL_INHERITEDOPS_FVMWBE_H_

#include /**/ "ace/pre.h"

#include "InheritedOpC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
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

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_OUTER_INNER_BASE__SARG_TRAITS_)
#define _OUTER_INNER_BASE__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Outer::Inner::Base>
    : public
        Object_SArg_Traits_T<
            ::Outer::Inner::Base_ptr,
            ::Outer::Inner::Base_var,
            ::Outer::Inner::Base_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_OUTER_DERIVED__SARG_TRAITS_)
#define _OUTER_DERIVED__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::Outer::Derived>
    : public
        Object_SArg_Traits_T<
            ::Outer::Derived_ptr,
            ::Outer::Derived_var,
            ::Outer::Derived_out,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_Outer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_module/module_sh.cpp:35

  namespace Inner
  {
    

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_sh.cpp:73

    class Base;
    typedef Base *Base_ptr;

    class  Base
      : public virtual PortableServer::ServantBase
    {
    protected:
      Base (void);
    
    public:
      /// Useful for template programming.
      typedef ::Outer::Inner::Base _stub_type;
      typedef ::Outer::Inner::Base_ptr _stub_ptr_type;
      typedef ::Outer::Inner::Base_var _stub_var_type;

      Base (const Base& rhs);
      virtual ~Base (void);

      virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

      virtual void _dispatch (
          TAO_ServerRequest & req,
          TAO::Portable_Server::Servant_Upcall *servant_upcall);
      
      ::Outer::Inner::Base *_this (void);
      
      virtual const char* _interface_repository_id (void) const;

      // TAO_IDL - Generated from
      // be/be_visitor_operation/operation_sh.cpp:36

      virtual void BaseOp (
        void) = 0;

      static void BaseOp_skel (
          TAO_ServerRequest &server_request,
          TAO::Portable_Server::Servant_Upcall *servant_upcall,
          TAO_ServantBase *servant);
    };
  
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_sh.cpp:66

  } // module Outer::Inner

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Outer

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_Outer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_module/module_sh.cpp:35

  namespace Inner
  {
    
  
  // TAO_IDL - Generated from
  // be/be_visitor_module/module_sh.cpp:66

  } // module Outer::Inner

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:66

} // module Outer

// TAO_IDL - Generated from
// be/be_visitor_module/module_sh.cpp:35

namespace POA_Outer
{
  

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_sh.cpp:73

  class Derived;
  typedef Derived *Derived_ptr;

  class  Derived
    : public virtual POA_Outer::Inner::Base
  {
  protected:
    Derived (void);
  
  public:
    /// Useful for template programming.
    typedef ::Outer::Derived _stub_type;
    typedef ::Outer::Derived_ptr _stub_ptr_type;
    typedef ::Outer::Derived_var _stub_var_type;

    Derived (const Derived& rhs);
    virtual ~Derived (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    virtual void _dispatch (
        TAO_ServerRequest & req,
        TAO::Portable_Server::Servant_Upcall *servant_upcall);
    
    ::Outer::Derived *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

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

} // module Outer

#include /**/ "ace/post.h"

#endif /* ifndef */

