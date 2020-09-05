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

#ifndef _TAO_IDL_TESTC_JDPHY6_H_
#define _TAO_IDL_TESTC_JDPHY6_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
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
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
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
// be/be_visitor_module/module_ch.cpp:35

namespace Test
{

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  Invalid_Stock_Symbol : public ::CORBA::UserException
  {
  public:

    Invalid_Stock_Symbol (void);
    Invalid_Stock_Symbol (const Invalid_Stock_Symbol &);
    ~Invalid_Stock_Symbol (void);

    Invalid_Stock_Symbol &operator= (const Invalid_Stock_Symbol &);

    static void _tao_any_destructor (void *);

    static Invalid_Stock_Symbol *_downcast ( ::CORBA::Exception *);
    static const Invalid_Stock_Symbol *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Invalid_Stock_Symbol;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_STOCK__VAR_OUT_CH_)
#define _TEST_STOCK__VAR_OUT_CH_

  class Stock;
  typedef Stock *Stock_ptr;

  typedef
    TAO_Objref_Var_T<
        Stock
      >
    Stock_var;

  typedef
    TAO_Objref_Out_T<
        Stock
      >
    Stock_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_STOCKFACTORY__VAR_OUT_CH_)
#define _TEST_STOCKFACTORY__VAR_OUT_CH_

  class StockFactory;
  typedef StockFactory *StockFactory_ptr;

  typedef
    TAO_Objref_Var_T<
        StockFactory
      >
    StockFactory_var;

  typedef
    TAO_Objref_Out_T<
        StockFactory
      >
    StockFactory_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  StockFactory
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<StockFactory>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef StockFactory_ptr _ptr_type;
    typedef StockFactory_var _var_type;
    typedef StockFactory_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static StockFactory_ptr _duplicate (StockFactory_ptr obj);

    static void _tao_release (StockFactory_ptr obj);

    static StockFactory_ptr _narrow (::CORBA::Object_ptr obj);
    static StockFactory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static StockFactory_ptr _nil (void);

    virtual ::Test::Stock_ptr get_stock (
      const char * stock_symbol);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    StockFactory (void);

    // Concrete non-local interface only.
    StockFactory (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    StockFactory (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~StockFactory (void);

  private:
    // Private and unimplemented for concrete interfaces.
    StockFactory (const StockFactory &);

    void operator= (const StockFactory &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_StockFactory;

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Stock
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Stock>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Stock_ptr _ptr_type;
    typedef Stock_var _var_type;
    typedef Stock_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Stock_ptr _duplicate (Stock_ptr obj);

    static void _tao_release (Stock_ptr obj);

    static Stock_ptr _narrow (::CORBA::Object_ptr obj);
    static Stock_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Stock_ptr _nil (void);

    virtual char * symbol (
      void);

    virtual char * full_name (
      void);

    virtual ::CORBA::Double price (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Stock (void);

    // Concrete non-local interface only.
    Stock (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Stock (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Stock (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Stock (const Stock &);

    void operator= (const Stock &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Stock;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Test

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_STOCK__ARG_TRAITS_)
#define _TEST_STOCK__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Stock>
    : public
        Object_Arg_Traits_T<
            ::Test::Stock_ptr,
            ::Test::Stock_var,
            ::Test::Stock_out,
            TAO::Objref_Traits<Test::Stock>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_STOCKFACTORY__ARG_TRAITS_)
#define _TEST_STOCKFACTORY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::StockFactory>
    : public
        Object_Arg_Traits_T<
            ::Test::StockFactory_ptr,
            ::Test::StockFactory_var,
            ::Test::StockFactory_out,
            TAO::Objref_Traits<Test::StockFactory>,
            TAO::Any_Insert_Policy_Stream
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

#if !defined (_TEST_STOCKFACTORY__TRAITS_)
#define _TEST_STOCKFACTORY__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::StockFactory>
  {
    static ::Test::StockFactory_ptr duplicate (
        ::Test::StockFactory_ptr p);
    static void release (
        ::Test::StockFactory_ptr p);
    static ::Test::StockFactory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::StockFactory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_TEST_STOCK__TRAITS_)
#define _TEST_STOCK__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Stock>
  {
    static ::Test::Stock_ptr duplicate (
        ::Test::Stock_ptr p);
    static void release (
        ::Test::Stock_ptr p);
    static ::Test::Stock_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Stock_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_ch.cpp:38

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{


   void operator<<= (::CORBA::Any &, const ::Test::Invalid_Stock_Symbol &); // copying version
   void operator<<= (::CORBA::Any &, ::Test::Invalid_Stock_Symbol*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::Invalid_Stock_Symbol *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::Invalid_Stock_Symbol *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 void operator<<= (::CORBA::Any &, const Test::Invalid_Stock_Symbol &); // copying version
 void operator<<= (::CORBA::Any &, Test::Invalid_Stock_Symbol*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Invalid_Stock_Symbol *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::Invalid_Stock_Symbol *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, StockFactory_ptr); // copying
   void operator<<= ( ::CORBA::Any &, StockFactory_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, StockFactory_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Test::StockFactory_ptr); // copying
 void operator<<= (::CORBA::Any &, Test::StockFactory_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::StockFactory_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, Stock_ptr); // copying
   void operator<<= ( ::CORBA::Any &, Stock_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Stock_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Test::Stock_ptr); // copying
 void operator<<= (::CORBA::Any &, Test::Stock_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Stock_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Invalid_Stock_Symbol &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Invalid_Stock_Symbol &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::StockFactory_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::StockFactory_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Stock_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Stock_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

