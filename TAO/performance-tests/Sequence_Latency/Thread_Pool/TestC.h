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

#ifndef _TAO_IDL_TESTC_D0YBZD_H_
#define _TAO_IDL_TESTC_D0YBZD_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
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
  // be/be_visitor_typedef/typedef_ch.cpp:370

  typedef ::CORBA::ULongLong Timestamp;
  typedef ::CORBA::ULongLong_out Timestamp_out;

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Timestamp;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_OCTET_LOAD_CH_)
#define _TEST_OCTET_LOAD_CH_

  class octet_load;

  typedef
    ::TAO_FixedSeq_Var_T<
        octet_load
      >
    octet_load_var;

  typedef
    ::TAO_Seq_Out_T<
        octet_load
      >
    octet_load_out;

  class  octet_load
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Octet
          >
  {
  public:
    octet_load (void);
    octet_load ( ::CORBA::ULong max);
    octet_load (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Octet* buffer,
      ::CORBA::Boolean release = false);
    octet_load (const octet_load &);
    virtual ~octet_load (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef octet_load_var _var_type;
    typedef octet_load_out _out_type;

    static void _tao_any_destructor (void *);



#if (TAO_NO_COPY_OCTET_SEQUENCES == 1)
    octet_load (
        ::CORBA::ULong length,
        const ACE_Message_Block* mb
      )
      : ::TAO::unbounded_value_sequence< ::CORBA::Octet> (length, mb) {}
#endif /* TAO_NO_COPY_OCTET_SEQUENCE == 1 */
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_octet_load;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_LONG_LOAD_CH_)
#define _TEST_LONG_LOAD_CH_

  class long_load;

  typedef
    ::TAO_FixedSeq_Var_T<
        long_load
      >
    long_load_var;

  typedef
    ::TAO_Seq_Out_T<
        long_load
      >
    long_load_out;

  class  long_load
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Long
          >
  {
  public:
    long_load (void);
    long_load ( ::CORBA::ULong max);
    long_load (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Long* buffer,
      ::CORBA::Boolean release = false);
    long_load (const long_load &);
    virtual ~long_load (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef long_load_var _var_type;
    typedef long_load_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_long_load;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_CHAR_LOAD_CH_)
#define _TEST_CHAR_LOAD_CH_

  class char_load;

  typedef
    ::TAO_FixedSeq_Var_T<
        char_load
      >
    char_load_var;

  typedef
    ::TAO_Seq_Out_T<
        char_load
      >
    char_load_out;

  class  char_load
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Char
          >
  {
  public:
    char_load (void);
    char_load ( ::CORBA::ULong max);
    char_load (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Char* buffer,
      ::CORBA::Boolean release = false);
    char_load (const char_load &);
    virtual ~char_load (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef char_load_var _var_type;
    typedef char_load_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_char_load;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_SHORT_LOAD_CH_)
#define _TEST_SHORT_LOAD_CH_

  class short_load;

  typedef
    ::TAO_FixedSeq_Var_T<
        short_load
      >
    short_load_var;

  typedef
    ::TAO_Seq_Out_T<
        short_load
      >
    short_load_out;

  class  short_load
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Short
          >
  {
  public:
    short_load (void);
    short_load ( ::CORBA::ULong max);
    short_load (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Short* buffer,
      ::CORBA::Boolean release = false);
    short_load (const short_load &);
    virtual ~short_load (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef short_load_var _var_type;
    typedef short_load_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_short_load;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_LONGLONG_LOAD_CH_)
#define _TEST_LONGLONG_LOAD_CH_

  class longlong_load;

  typedef
    ::TAO_FixedSeq_Var_T<
        longlong_load
      >
    longlong_load_var;

  typedef
    ::TAO_Seq_Out_T<
        longlong_load
      >
    longlong_load_out;

  class  longlong_load
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::LongLong
          >
  {
  public:
    longlong_load (void);
    longlong_load ( ::CORBA::ULong max);
    longlong_load (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::LongLong* buffer,
      ::CORBA::Boolean release = false);
    longlong_load (const longlong_load &);
    virtual ~longlong_load (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef longlong_load_var _var_type;
    typedef longlong_load_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_longlong_load;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_DOUBLE_LOAD_CH_)
#define _TEST_DOUBLE_LOAD_CH_

  class double_load;

  typedef
    ::TAO_FixedSeq_Var_T<
        double_load
      >
    double_load_var;

  typedef
    ::TAO_Seq_Out_T<
        double_load
      >
    double_load_out;

  class  double_load
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Double
          >
  {
  public:
    double_load (void);
    double_load ( ::CORBA::ULong max);
    double_load (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Double* buffer,
      ::CORBA::Boolean release = false);
    double_load (const double_load &);
    virtual ~double_load (void);


    // TAO_IDL - Generated from
    // be/be_type.cpp:304


    typedef double_load_var _var_type;
    typedef double_load_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_double_load;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_ROUNDTRIP__VAR_OUT_CH_)
#define _TEST_ROUNDTRIP__VAR_OUT_CH_

  class Roundtrip;
  typedef Roundtrip *Roundtrip_ptr;

  typedef
    TAO_Objref_Var_T<
        Roundtrip
      >
    Roundtrip_var;

  typedef
    TAO_Objref_Out_T<
        Roundtrip
      >
    Roundtrip_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Roundtrip
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Roundtrip>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Roundtrip_ptr _ptr_type;
    typedef Roundtrip_var _var_type;
    typedef Roundtrip_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Roundtrip_ptr _duplicate (Roundtrip_ptr obj);

    static void _tao_release (Roundtrip_ptr obj);

    static Roundtrip_ptr _narrow (::CORBA::Object_ptr obj);
    static Roundtrip_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Roundtrip_ptr _nil (void);

    virtual ::Test::Timestamp test_octet_method (
      const ::Test::octet_load & ol,
      ::Test::Timestamp send_time);

    virtual ::Test::Timestamp test_long_method (
      const ::Test::long_load & ol,
      ::Test::Timestamp send_time);

    virtual ::Test::Timestamp test_short_method (
      const ::Test::short_load & ol,
      ::Test::Timestamp send_time);

    virtual ::Test::Timestamp test_char_method (
      const ::Test::char_load & ol,
      ::Test::Timestamp send_time);

    virtual ::Test::Timestamp test_longlong_method (
      const ::Test::longlong_load & ol,
      ::Test::Timestamp send_time);

    virtual ::Test::Timestamp test_double_method (
      const ::Test::double_load & ol,
      ::Test::Timestamp send_time);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Roundtrip (void);

    // Concrete non-local interface only.
    Roundtrip (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Roundtrip (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Roundtrip (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Roundtrip (const Roundtrip &);

    void operator= (const Roundtrip &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_Roundtrip;

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
  class Arg_Traits< ::Test::octet_load>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::octet_load,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::long_load>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::long_load,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::char_load>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::char_load,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::short_load>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::short_load,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::longlong_load>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::longlong_load,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::double_load>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::double_load,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_ROUNDTRIP__ARG_TRAITS_)
#define _TEST_ROUNDTRIP__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Roundtrip>
    : public
        Object_Arg_Traits_T<
            ::Test::Roundtrip_ptr,
            ::Test::Roundtrip_var,
            ::Test::Roundtrip_out,
            TAO::Objref_Traits<Test::Roundtrip>,
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

#if !defined (_TEST_ROUNDTRIP__TRAITS_)
#define _TEST_ROUNDTRIP__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Roundtrip>
  {
    static ::Test::Roundtrip_ptr duplicate (
        ::Test::Roundtrip_ptr p);
    static void release (
        ::Test::Roundtrip_ptr p);
    static ::Test::Roundtrip_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Roundtrip_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, const ::Test::octet_load &); // copying version
   void operator<<= ( ::CORBA::Any &, ::Test::octet_load*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::octet_load *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::octet_load *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const Test::octet_load &); // copying version
 void operator<<= ( ::CORBA::Any &, Test::octet_load*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::octet_load *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::octet_load *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, const ::Test::long_load &); // copying version
   void operator<<= ( ::CORBA::Any &, ::Test::long_load*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::long_load *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::long_load *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const Test::long_load &); // copying version
 void operator<<= ( ::CORBA::Any &, Test::long_load*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::long_load *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::long_load *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, const ::Test::char_load &); // copying version
   void operator<<= ( ::CORBA::Any &, ::Test::char_load*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::char_load *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::char_load *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const Test::char_load &); // copying version
 void operator<<= ( ::CORBA::Any &, Test::char_load*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::char_load *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::char_load *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, const ::Test::short_load &); // copying version
   void operator<<= ( ::CORBA::Any &, ::Test::short_load*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::short_load *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::short_load *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const Test::short_load &); // copying version
 void operator<<= ( ::CORBA::Any &, Test::short_load*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::short_load *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::short_load *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, const ::Test::longlong_load &); // copying version
   void operator<<= ( ::CORBA::Any &, ::Test::longlong_load*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::longlong_load *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::longlong_load *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const Test::longlong_load &); // copying version
 void operator<<= ( ::CORBA::Any &, Test::longlong_load*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::longlong_load *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::longlong_load *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, const ::Test::double_load &); // copying version
   void operator<<= ( ::CORBA::Any &, ::Test::double_load*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Test::double_load *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Test::double_load *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const Test::double_load &); // copying version
 void operator<<= ( ::CORBA::Any &, Test::double_load*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::double_load *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Test::double_load *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
   void operator<<= ( ::CORBA::Any &, Roundtrip_ptr); // copying
   void operator<<= ( ::CORBA::Any &, Roundtrip_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Roundtrip_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Test::Roundtrip_ptr); // copying
 void operator<<= (::CORBA::Any &, Test::Roundtrip_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Test::Roundtrip_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_octet_load_H_
#define _TAO_CDR_OP_Test_octet_load_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::octet_load &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::octet_load &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_octet_load_H_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_long_load_H_
#define _TAO_CDR_OP_Test_long_load_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::long_load &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::long_load &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_long_load_H_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_char_load_H_
#define _TAO_CDR_OP_Test_char_load_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::char_load &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::char_load &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_char_load_H_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_short_load_H_
#define _TAO_CDR_OP_Test_short_load_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::short_load &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::short_load &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_short_load_H_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_longlong_load_H_
#define _TAO_CDR_OP_Test_longlong_load_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::longlong_load &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::longlong_load &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_longlong_load_H_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_double_load_H_
#define _TAO_CDR_OP_Test_double_load_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::double_load &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::double_load &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_double_load_H_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Roundtrip_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Roundtrip_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

