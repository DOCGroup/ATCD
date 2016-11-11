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

#ifndef _TAO_IDL_TESTC_THBNJR_H_
#define _TAO_IDL_TESTC_THBNJR_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
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
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_OCTETSEQ_CH_)
#define _TEST_OCTETSEQ_CH_

  class OctetSeq;

  typedef
    ::TAO_FixedSeq_Var_T<
        OctetSeq
      >
    OctetSeq_var;

  typedef
    ::TAO_Seq_Out_T<
        OctetSeq
      >
    OctetSeq_out;

  class  OctetSeq
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Octet
          >
  {
  public:
    OctetSeq (void);
    OctetSeq ( ::CORBA::ULong max);
    OctetSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Octet* buffer,
      ::CORBA::Boolean release = false);
    OctetSeq (const OctetSeq &);
    virtual ~OctetSeq (void);
    

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef OctetSeq_var _var_type;
    typedef OctetSeq_out _out_type;

    

#if (TAO_NO_COPY_OCTET_SEQUENCES == 1)
    OctetSeq (
        ::CORBA::ULong length,
        const ACE_Message_Block* mb
      )
      : ::TAO::unbounded_value_sequence< ::CORBA::Octet> (length, mb) {}
#endif /* TAO_NO_COPY_OCTET_SEQUENCE == 1 */
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_TEST_CHARSEQ_CH_)
#define _TEST_CHARSEQ_CH_

  class CharSeq;

  typedef
    ::TAO_FixedSeq_Var_T<
        CharSeq
      >
    CharSeq_var;

  typedef
    ::TAO_Seq_Out_T<
        CharSeq
      >
    CharSeq_out;

  class  CharSeq
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::Char
          >
  {
  public:
    CharSeq (void);
    CharSeq ( ::CORBA::ULong max);
    CharSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::Char* buffer,
      ::CORBA::Boolean release = false);
    CharSeq (const CharSeq &);
    virtual ~CharSeq (void);
    

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef CharSeq_var _var_type;
    typedef CharSeq_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:370

  typedef ::CORBA::UShort Index;
  typedef ::CORBA::UShort_out Index_out;

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  OutOfRange : public ::CORBA::UserException
  {
  public:
    Test::Index min_index;
    Test::Index max_index;

    OutOfRange (void);
    OutOfRange (const OutOfRange &);
    ~OutOfRange (void);

    OutOfRange &operator= (const OutOfRange &);

    static OutOfRange *_downcast ( ::CORBA::Exception *);
    static const OutOfRange *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ctor.cpp:51

    OutOfRange (
        Test::Index _tao_min_index,
        Test::Index _tao_max_index);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_TEST_DATABASE__VAR_OUT_CH_)
#define _TEST_DATABASE__VAR_OUT_CH_

  class Database;
  typedef Database *Database_ptr;

  typedef
    TAO_Objref_Var_T<
        Database
      >
    Database_var;
  
  typedef
    TAO_Objref_Out_T<
        Database
      >
    Database_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Database
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Database>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Database_ptr _ptr_type;
    typedef Database_var _var_type;
    typedef Database_out _out_type;

    // The static operations.
    static Database_ptr _duplicate (Database_ptr obj);

    static void _tao_release (Database_ptr obj);

    static Database_ptr _narrow (::CORBA::Object_ptr obj);
    static Database_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Database_ptr _nil (void);

    virtual void set (
      ::Test::Index i,
      const ::Test::OctetSeq & value,
      ::CORBA::Double verification_token,
      ::CORBA::Double_out returned_token);

    virtual ::Test::OctetSeq * get (
      ::Test::Index i);

    virtual ::CORBA::ULong get_crc (
      ::Test::Index i);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Database (void);

    // Concrete non-local interface only.
    Database (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Database (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Database (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Database (const Database &);

    void operator= (const Database &);
  };

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
  class Arg_Traits< ::Test::OctetSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::OctetSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Test::CharSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::Test::CharSeq,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_TEST_DATABASE__ARG_TRAITS_)
#define _TEST_DATABASE__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Database>
    : public
        Object_Arg_Traits_T<
            ::Test::Database_ptr,
            ::Test::Database_var,
            ::Test::Database_out,
            TAO::Objref_Traits<Test::Database>,
            TAO::Any_Insert_Policy_Noop
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

#if !defined (_TEST_DATABASE__TRAITS_)
#define _TEST_DATABASE__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Database>
  {
    static ::Test::Database_ptr duplicate (
        ::Test::Database_ptr p);
    static void release (
        ::Test::Database_ptr p);
    static ::Test::Database_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Database_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_OctetSeq_H_
#define _TAO_CDR_OP_Test_OctetSeq_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::OctetSeq &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::OctetSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_OctetSeq_H_ */

// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Test_CharSeq_H_
#define _TAO_CDR_OP_Test_CharSeq_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::CharSeq &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::CharSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Test_CharSeq_H_ */

// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::OutOfRange &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::OutOfRange &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Database_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Database_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

