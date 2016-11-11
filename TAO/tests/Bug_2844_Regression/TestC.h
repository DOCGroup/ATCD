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

#ifndef _TAO_IDL_TESTC_S4X3BB_H_
#define _TAO_IDL_TESTC_S4X3BB_H_

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
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/OctetSeqA.h"
#include "tao/AnyTypeCode/StringSeqA.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/AnyTypeCode/Any_Arg_Traits.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/OctetSeqC.h"
#include "tao/StringSeqC.h"

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

  class  Recursive_Type_In_Any_Test_Failed : public ::CORBA::UserException
  {
  public:

    Recursive_Type_In_Any_Test_Failed (void);
    Recursive_Type_In_Any_Test_Failed (const Recursive_Type_In_Any_Test_Failed &);
    ~Recursive_Type_In_Any_Test_Failed (void);

    Recursive_Type_In_Any_Test_Failed &operator= (const Recursive_Type_In_Any_Test_Failed &);

    static void _tao_any_destructor (void *);

    static Recursive_Type_In_Any_Test_Failed *_downcast ( ::CORBA::Exception *);
    static const Recursive_Type_In_Any_Test_Failed *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Recursive_Type_In_Any_Test_Failed;

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  Demarshaling_From_Any_Failed : public ::CORBA::UserException
  {
  public:

    Demarshaling_From_Any_Failed (void);
    Demarshaling_From_Any_Failed (const Demarshaling_From_Any_Failed &);
    ~Demarshaling_From_Any_Failed (void);

    Demarshaling_From_Any_Failed &operator= (const Demarshaling_From_Any_Failed &);

    static void _tao_any_destructor (void *);

    static Demarshaling_From_Any_Failed *_downcast ( ::CORBA::Exception *);
    static const Demarshaling_From_Any_Failed *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Demarshaling_From_Any_Failed;

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct NestedRecursiveStruct5;

  typedef
    ::TAO_Var_Var_T<
        NestedRecursiveStruct5
      >
    NestedRecursiveStruct5_var;

  typedef
    ::TAO_Out_T<
        NestedRecursiveStruct5
      >
    NestedRecursiveStruct5_out;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_NESTEDRECURSIVESTRUCTSEQ5_CH_)
#define _TEST_NESTEDRECURSIVESTRUCTSEQ5_CH_

  class NestedRecursiveStructSeq5;

  typedef
    ::TAO_VarSeq_Var_T<
        NestedRecursiveStructSeq5
      >
    NestedRecursiveStructSeq5_var;

  typedef
    ::TAO_Seq_Out_T<
        NestedRecursiveStructSeq5
      >
    NestedRecursiveStructSeq5_out;

  class  NestedRecursiveStructSeq5
    : public
        ::TAO::unbounded_value_sequence<
            NestedRecursiveStruct5
          >
  {
  public:
    NestedRecursiveStructSeq5 (void);
    NestedRecursiveStructSeq5 ( ::CORBA::ULong max);
    NestedRecursiveStructSeq5 (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      NestedRecursiveStruct5* buffer,
      ::CORBA::Boolean release = false);
    NestedRecursiveStructSeq5 (const NestedRecursiveStructSeq5 &);
    virtual ~NestedRecursiveStructSeq5 (void);
    

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef NestedRecursiveStructSeq5_var _var_type;
    typedef NestedRecursiveStructSeq5_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_NestedRecursiveStructSeq5;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  NestedRecursiveStruct5
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef NestedRecursiveStruct5_var _var_type;
    typedef NestedRecursiveStruct5_out _out_type;

    static void _tao_any_destructor (void *);
    
    ::CORBA::Long i;
    

    // TAO_IDL - Generated from
    // be/be_type.cpp:258

    class MyUnion5;

    typedef
      ::TAO_Var_Var_T<
          MyUnion5
        >
      MyUnion5_var;

    typedef
      ::TAO_Out_T<
          MyUnion5
        >
      MyUnion5_out;

    class  MyUnion5
    {
    public:
      MyUnion5 (void);
      MyUnion5 (const MyUnion5 &);
      ~MyUnion5 (void);

      MyUnion5 &operator= (const MyUnion5 &);

      // TAO_IDL - Generated from
      // be/be_visitor_union/discriminant_ch.cpp:100

      void _d ( ::CORBA::Short);
      ::CORBA::Short _d (void) const;

      // TAO_IDL - Generated from
      // be/be_type.cpp:304

      
      typedef MyUnion5_var _var_type;
      typedef MyUnion5_out _out_type;

      static void _tao_any_destructor (void *);

      // TAO_IDL - Generated from
      // be/be_type.cpp:258

      struct InnerStruct5;

      typedef
        ::TAO_Var_Var_T<
            InnerStruct5
          >
        InnerStruct5_var;

      typedef
        ::TAO_Out_T<
            InnerStruct5
          >
        InnerStruct5_out;

      // TAO_IDL - Generated from
      // be/be_visitor_structure/structure_ch.cpp:48

      struct  InnerStruct5
      {

        // TAO_IDL - Generated from
        // be/be_type.cpp:304

        
        typedef InnerStruct5_var _var_type;
        typedef InnerStruct5_out _out_type;

        static void _tao_any_destructor (void *);
        
        

        // TAO_IDL - Generated from
        // be/be_type.cpp:258

        class Intern5;

        typedef
          ::TAO_Var_Var_T<
              Intern5
            >
          Intern5_var;

        typedef
          ::TAO_Out_T<
              Intern5
            >
          Intern5_out;

        class  Intern5
        {
        public:
          Intern5 (void);
          Intern5 (const Intern5 &);
          ~Intern5 (void);

          Intern5 &operator= (const Intern5 &);

          // TAO_IDL - Generated from
          // be/be_visitor_union/discriminant_ch.cpp:100

          void _d ( ::CORBA::Short);
          ::CORBA::Short _d (void) const;

          // TAO_IDL - Generated from
          // be/be_type.cpp:304

          
          typedef Intern5_var _var_type;
          typedef Intern5_out _out_type;

          static void _tao_any_destructor (void *);

          // TAO_IDL - Generated from
          // be/be_visitor_union_branch/public_ch.cpp:548

          void recursive_structs5 (const Test::NestedRecursiveStructSeq5 &);
          const Test::NestedRecursiveStructSeq5 &recursive_structs5 (void) const;
          Test::NestedRecursiveStructSeq5 &recursive_structs5 (void);

          // TAO_IDL - Generated from
          // be/be_visitor_union/union_ch.cpp:121

          void _default (void);
        private:
          ::CORBA::Short disc_;

          union
          {
            // TAO_IDL - Generated from
            // be/be_visitor_union_branch/private_ch.cpp:444
            Test::NestedRecursiveStructSeq5 *recursive_structs5_;
          } u_;

          /// TAO extension - frees any allocated storage.
          void _reset (void);
        };

        // TAO_IDL - Generated from
        // be/be_visitor_typecode/typecode_decl.cpp:34

        static ::CORBA::TypeCode_ptr const _tc_Intern5;

        Intern5 intbb5;
      };

      // TAO_IDL - Generated from
      // be/be_visitor_typecode/typecode_decl.cpp:34

      static ::CORBA::TypeCode_ptr const _tc_InnerStruct5;

      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/public_ch.cpp:656

      void ins65 (const InnerStruct5 &);
      const InnerStruct5 &ins65 (void) const;
      InnerStruct5 &ins65 (void);

      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/public_ch.cpp:449

      void i ( ::CORBA::Long);
      ::CORBA::Long i (void) const;
    private:
      ::CORBA::Short disc_;

      union
      {
        // TAO_IDL - Generated from
        // be/be_visitor_union_branch/private_ch.cpp:519
        InnerStruct5 *ins65_;
        // TAO_IDL - Generated from
        // be/be_visitor_union_branch/private_ch.cpp:377
        ::CORBA::Long i_;
      } u_;

      /// TAO extension - frees any allocated storage.
      void _reset (void);
    };

    // TAO_IDL - Generated from
    // be/be_visitor_typecode/typecode_decl.cpp:34

    static ::CORBA::TypeCode_ptr const _tc_MyUnion5;

    Test::NestedRecursiveStruct5::MyUnion5 in5;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_NestedRecursiveStruct5;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_HELLO__VAR_OUT_CH_)
#define _TEST_HELLO__VAR_OUT_CH_

  class Hello;
  typedef Hello *Hello_ptr;

  typedef
    TAO_Objref_Var_T<
        Hello
      >
    Hello_var;
  
  typedef
    TAO_Objref_Out_T<
        Hello
      >
    Hello_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Hello
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Hello>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Hello_ptr _ptr_type;
    typedef Hello_var _var_type;
    typedef Hello_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Hello_ptr _duplicate (Hello_ptr obj);

    static void _tao_release (Hello_ptr obj);

    static Hello_ptr _narrow (::CORBA::Object_ptr obj);
    static Hello_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Hello_ptr _nil (void);

    virtual ::CORBA::Any * get_any (
      const ::CORBA::Any & the_any);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Hello (void);

    // Concrete non-local interface only.
    Hello (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Hello (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Hello (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Hello (const Hello &);

    void operator= (const Hello &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Hello;

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
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::NestedRecursiveStructSeq5>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::NestedRecursiveStructSeq5,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Test::NestedRecursiveStruct5>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::NestedRecursiveStruct5,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class Arg_Traits< ::Test::NestedRecursiveStruct5::MyUnion5>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::NestedRecursiveStruct5::MyUnion5,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class Arg_Traits< ::Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_HELLO__ARG_TRAITS_)
#define _TEST_HELLO__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Hello>
    : public
        Object_Arg_Traits_T<
            ::Test::Hello_ptr,
            ::Test::Hello_var,
            ::Test::Hello_out,
            TAO::Objref_Traits<Test::Hello>,
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

#if !defined (_TEST_HELLO__TRAITS_)
#define _TEST_HELLO__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Hello>
  {
    static ::Test::Hello_ptr duplicate (
        ::Test::Hello_ptr p);
    static void release (
        ::Test::Hello_ptr p);
    static ::Test::Hello_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Hello_ptr p,
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
  

   void operator<<= (::CORBA::Any &, const ::Test::Recursive_Type_In_Any_Test_Failed &); // copying version
   void operator<<= (::CORBA::Any &, ::Test::Recursive_Type_In_Any_Test_Failed*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::Recursive_Type_In_Any_Test_Failed *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::Recursive_Type_In_Any_Test_Failed *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 void operator<<= (::CORBA::Any &, const Test::Recursive_Type_In_Any_Test_Failed &); // copying version
 void operator<<= (::CORBA::Any &, Test::Recursive_Type_In_Any_Test_Failed*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Recursive_Type_In_Any_Test_Failed *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::Recursive_Type_In_Any_Test_Failed *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_ch.cpp:38

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
  

   void operator<<= (::CORBA::Any &, const ::Test::Demarshaling_From_Any_Failed &); // copying version
   void operator<<= (::CORBA::Any &, ::Test::Demarshaling_From_Any_Failed*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::Demarshaling_From_Any_Failed *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::Demarshaling_From_Any_Failed *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 void operator<<= (::CORBA::Any &, const Test::Demarshaling_From_Any_Failed &); // copying version
 void operator<<= (::CORBA::Any &, Test::Demarshaling_From_Any_Failed*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Demarshaling_From_Any_Failed *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::Demarshaling_From_Any_Failed *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, const ::Test::NestedRecursiveStructSeq5 &); // copying version
   void operator<<= ( ::CORBA::Any &, ::Test::NestedRecursiveStructSeq5*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::NestedRecursiveStructSeq5 *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::NestedRecursiveStructSeq5 *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const Test::NestedRecursiveStructSeq5 &); // copying version
 void operator<<= ( ::CORBA::Any &, Test::NestedRecursiveStructSeq5*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::NestedRecursiveStructSeq5 *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::NestedRecursiveStructSeq5 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= (::CORBA::Any &, const ::Test::NestedRecursiveStruct5 &); // copying version
   void operator<<= (::CORBA::Any &, ::Test::NestedRecursiveStruct5*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::NestedRecursiveStruct5 *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::NestedRecursiveStruct5 *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Test::NestedRecursiveStruct5 &); // copying version
 void operator<<= (::CORBA::Any &, Test::NestedRecursiveStruct5*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::NestedRecursiveStruct5 *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::NestedRecursiveStruct5 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_union/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Test::NestedRecursiveStruct5::MyUnion5 &); // copying version
 void operator<<= (::CORBA::Any &, Test::NestedRecursiveStruct5::MyUnion5*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::NestedRecursiveStruct5::MyUnion5 *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::NestedRecursiveStruct5::MyUnion5 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= (::CORBA::Any &, const ::Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 &); // copying version
   void operator<<= (::CORBA::Any &, ::Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 &); // copying version
 void operator<<= (::CORBA::Any &, Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_union/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5 &); // copying version
 void operator<<= (::CORBA::Any &, Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5 *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5 *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, Hello_ptr); // copying
   void operator<<= ( ::CORBA::Any &, Hello_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Hello_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Test::Hello_ptr); // copying
 void operator<<= (::CORBA::Any &, Test::Hello_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Hello_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Recursive_Type_In_Any_Test_Failed &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Recursive_Type_In_Any_Test_Failed &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Demarshaling_From_Any_Failed &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Demarshaling_From_Any_Failed &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_NestedRecursiveStructSeq5_H_
#define _TAO_CDR_OP_Test_NestedRecursiveStructSeq5_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::NestedRecursiveStructSeq5 &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::NestedRecursiveStructSeq5 &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_NestedRecursiveStructSeq5_H_ */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::NestedRecursiveStruct5 &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::NestedRecursiveStruct5 &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_ch.cpp:38


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::NestedRecursiveStruct5::MyUnion5 &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::NestedRecursiveStruct5::MyUnion5 &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5 &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_ch.cpp:38


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5 &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::NestedRecursiveStruct5::MyUnion5::InnerStruct5::Intern5 &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Hello_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Hello_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

