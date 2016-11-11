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

#ifndef _TAO_IDL_INTEROP_WCHARC_ZZVCSH_H_
#define _TAO_IDL_INTEROP_WCHARC_ZZVCSH_H_

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
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
#include "tao/Array_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Basic_Argument_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"
#include "tao/Fixed_Array_Argument_T.h"
#include "tao/Var_Array_Argument_T.h"
#include "tao/AnyTypeCode/Any_Arg_Traits.h"
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

namespace interop
{

  // TAO_IDL - Generated from
  // be/be_visitor_array/array_ch.cpp:52

  typedef ::CORBA::WChar warray[10];
  typedef ::CORBA::WChar warray_slice;
  struct warray_tag {};
  

  typedef
    TAO_FixedArray_Var_T<
        warray,
        warray_slice,
        warray_tag
      >
    warray_var;

  typedef
    warray
    warray_out;

  typedef
    TAO_Array_Forany_T<
        warray,
        warray_slice,
        warray_tag
      >
    warray_forany;

  TAO_NAMESPACE_STORAGE_CLASS warray_slice *
  warray_alloc (void);

  TAO_NAMESPACE_STORAGE_CLASS void
  warray_free (
      warray_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS warray_slice *
  warray_dup (
      const warray_slice *_tao_slice);
  
  TAO_NAMESPACE_STORAGE_CLASS void
  warray_copy (
      warray_slice *_tao_to,
      const warray_slice *_tao_from);

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_warray;

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct wstruct;

  typedef
    ::TAO_Var_Var_T<
        wstruct
      >
    wstruct_var;

  typedef
    ::TAO_Out_T<
        wstruct
      >
    wstruct_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  wstruct
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef wstruct_var _var_type;
    typedef wstruct_out _out_type;

    static void _tao_any_destructor (void *);
    
    ::CORBA::WChar st_char;
    ::TAO::WString_Manager st_string;
    interop::warray st_array;
    ::CORBA::Any st_any;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_wstruct;

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_INTEROP_WSTRUCTSEQ_CH_)
#define _INTEROP_WSTRUCTSEQ_CH_

  class wstructseq;

  typedef
    ::TAO_VarSeq_Var_T<
        wstructseq
      >
    wstructseq_var;

  typedef
    ::TAO_Seq_Out_T<
        wstructseq
      >
    wstructseq_out;

  class  wstructseq
    : public
        ::TAO::unbounded_value_sequence<
            wstruct
          >
  {
  public:
    wstructseq (void);
    wstructseq ( ::CORBA::ULong max);
    wstructseq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      wstruct* buffer,
      ::CORBA::Boolean release = false);
    wstructseq (const wstructseq &);
    virtual ~wstructseq (void);
    

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef wstructseq_var _var_type;
    typedef wstructseq_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_wstructseq;

  // TAO_IDL - Generated from
  // be/be_visitor_enum/enum_ch.cpp:44

  enum wchar_types
  {
    is_wchar,
    is_wstring,
    is_warray
  };

  typedef wchar_types &wchar_types_out;

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_wchar_types;

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  class wunion;

  typedef
    ::TAO_Var_Var_T<
        wunion
      >
    wunion_var;

  typedef
    ::TAO_Out_T<
        wunion
      >
    wunion_out;

  class  wunion
  {
  public:
    wunion (void);
    wunion (const wunion &);
    ~wunion (void);

    wunion &operator= (const wunion &);

    // TAO_IDL - Generated from
    // be/be_visitor_union/discriminant_ch.cpp:67

    void _d (interop::wchar_types);
    interop::wchar_types _d (void) const;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef wunion_var _var_type;
    typedef wunion_out _out_type;

    static void _tao_any_destructor (void *);

    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/public_ch.cpp:449

    void u_char ( ::CORBA::WChar);
    ::CORBA::WChar u_char (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/public_ch.cpp:580

    void u_string ( ::CORBA::WChar *);
    void u_string (const ::CORBA::WChar *);
    void u_string (const ::CORBA::WString_var&);
    const ::CORBA::WChar *u_string (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_union_branch/public_ch.cpp:126

    void u_array (interop::warray);
    interop::warray_slice * u_array (void) const;

    // TAO_IDL - Generated from
    // be/be_visitor_union/union_ch.cpp:121

    void _default (void);
  private:
    interop::wchar_types disc_;

    union
    {
      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/private_ch.cpp:377
      ::CORBA::WChar u_char_;
      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/private_ch.cpp:474
      ::CORBA::WChar *u_string_;
      // TAO_IDL - Generated from
      // be/be_visitor_union_branch/private_ch.cpp:90
      interop::warray_slice *u_array_;
    } u_;

    /// TAO extension - frees any allocated storage.
    void _reset (void);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_wunion;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_INTEROP_WCHAR_PASSER__VAR_OUT_CH_)
#define _INTEROP_WCHAR_PASSER__VAR_OUT_CH_

  class WChar_Passer;
  typedef WChar_Passer *WChar_Passer_ptr;

  typedef
    TAO_Objref_Var_T<
        WChar_Passer
      >
    WChar_Passer_var;
  
  typedef
    TAO_Objref_Out_T<
        WChar_Passer
      >
    WChar_Passer_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  WChar_Passer
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<WChar_Passer>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef WChar_Passer_ptr _ptr_type;
    typedef WChar_Passer_var _var_type;
    typedef WChar_Passer_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static WChar_Passer_ptr _duplicate (WChar_Passer_ptr obj);

    static void _tao_release (WChar_Passer_ptr obj);

    static WChar_Passer_ptr _narrow (::CORBA::Object_ptr obj);
    static WChar_Passer_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static WChar_Passer_ptr _nil (void);

    virtual char * orb_name (
      void);

    virtual ::CORBA::Boolean wchar_to_server (
      ::CORBA::WChar test,
      ::CORBA::Short key);

    virtual ::CORBA::WChar wchar_from_server (
      ::CORBA::Short key);

    virtual ::CORBA::Boolean wstring_to_server (
      const ::CORBA::WChar * test,
      ::CORBA::Short key);

    virtual ::CORBA::WChar * wstring_from_server (
      ::CORBA::Short key);

    virtual ::CORBA::Boolean warray_to_server (
      const ::interop::warray test,
      ::CORBA::Short key);

    virtual ::interop::warray_slice * warray_from_server (
      ::CORBA::Short key);

    virtual ::CORBA::Boolean wstruct_to_server (
      const ::interop::wstruct & test,
      ::CORBA::Short key);

    virtual ::interop::wstruct * wstruct_from_server (
      ::CORBA::Short key);

    virtual ::CORBA::Boolean wstructseq_to_server (
      const ::interop::wstructseq & test,
      ::CORBA::Short key);

    virtual ::interop::wstructseq * wstructseq_from_server (
      ::CORBA::Short key);

    virtual ::CORBA::Boolean wunion_to_server (
      const ::interop::wunion & test,
      ::CORBA::Short key);

    virtual ::interop::wunion * wunion_from_server (
      ::CORBA::Short key,
      ::interop::wchar_types type);

    virtual ::CORBA::Boolean any_to_server (
      const ::CORBA::Any & test,
      ::CORBA::Short key);

    virtual ::CORBA::Any * any_from_server (
      ::CORBA::Short key,
      ::interop::wchar_types type);

    virtual ::CORBA::Any * any_echo (
      const ::CORBA::Any & test);

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:41

    class  WStringException : public ::CORBA::UserException
    {
    public:
      ::TAO::WString_Manager why;
      ::CORBA::WChar whynot;

      WStringException (void);
      WStringException (const WStringException &);
      ~WStringException (void);

      WStringException &operator= (const WStringException &);

      static void _tao_any_destructor (void *);

      static WStringException *_downcast ( ::CORBA::Exception *);
      static const WStringException *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);

      // TAO_IDL - Generated from
      // be/be_visitor_exception/exception_ctor.cpp:51

      WStringException (
          const ::CORBA::WChar * _tao_why,
          ::CORBA::WChar _tao_whynot);

      virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
    };

    // TAO_IDL - Generated from
    // be/be_visitor_typecode/typecode_decl.cpp:34

    static ::CORBA::TypeCode_ptr const _tc_WStringException;

    virtual void exception_test (
      ::CORBA::Short key);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    WChar_Passer (void);

    // Concrete non-local interface only.
    WChar_Passer (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    WChar_Passer (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~WChar_Passer (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    WChar_Passer (const WChar_Passer &);

    void operator= (const WChar_Passer &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern  ::CORBA::TypeCode_ptr const _tc_WChar_Passer;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module interop

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  template<>
  class Arg_Traits< ::interop::warray_tag>
    : public
        Fixed_Array_Arg_Traits_T<
            ::interop::warray_var,
            ::interop::warray_forany,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::interop::wstruct>
    : public
        Var_Size_Arg_Traits_T<
            ::interop::wstruct,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::interop::wstructseq>
    : public
        Var_Size_Arg_Traits_T<
            ::interop::wstructseq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:902

  template<>
  class Arg_Traits< ::interop::wchar_types>
    : public
        Basic_Arg_Traits_T<
            ::interop::wchar_types,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:1056

  template<>
  class Arg_Traits< ::interop::wunion>
    : public
        Var_Size_Arg_Traits_T<
            ::interop::wunion,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_INTEROP_WCHAR_PASSER__ARG_TRAITS_)
#define _INTEROP_WCHAR_PASSER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::interop::WChar_Passer>
    : public
        Object_Arg_Traits_T<
            ::interop::WChar_Passer_ptr,
            ::interop::WChar_Passer_var,
            ::interop::WChar_Passer_out,
            TAO::Objref_Traits<interop::WChar_Passer>,
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
  template<>
  struct  Array_Traits<
      interop::warray_forany
    >
  {
    static void free (
        interop::warray_slice * _tao_slice);
    static interop::warray_slice * dup (
        const interop::warray_slice * _tao_slice);
    static void copy (
        interop::warray_slice * _tao_to,
        const interop::warray_slice * _tao_from);
    static interop::warray_slice * alloc (void);
    static void zero (
        interop::warray_slice * _tao_slice);
  };

#if !defined (_INTEROP_WCHAR_PASSER__TRAITS_)
#define _INTEROP_WCHAR_PASSER__TRAITS_

  template<>
  struct  Objref_Traits< ::interop::WChar_Passer>
  {
    static ::interop::WChar_Passer_ptr duplicate (
        ::interop::WChar_Passer_ptr p);
    static void release (
        ::interop::WChar_Passer_ptr p);
    static ::interop::WChar_Passer_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::interop::WChar_Passer_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_array/any_op_ch.cpp:37


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const interop::warray_forany &);
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, interop::warray_forany &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace interop
{
   void operator<<= (::CORBA::Any &, const ::interop::wstruct &); // copying version
   void operator<<= (::CORBA::Any &, ::interop::wstruct*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::interop::wstruct *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::interop::wstruct *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const interop::wstruct &); // copying version
 void operator<<= (::CORBA::Any &, interop::wstruct*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, interop::wstruct *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const interop::wstruct *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace interop
{
   void operator<<= ( ::CORBA::Any &, const ::interop::wstructseq &); // copying version
   void operator<<= ( ::CORBA::Any &, ::interop::wstructseq*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::interop::wstructseq *&); // deprecated
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::interop::wstructseq *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const interop::wstructseq &); // copying version
 void operator<<= ( ::CORBA::Any &, interop::wstructseq*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, interop::wstructseq *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const interop::wstructseq *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_enum/any_op_ch.cpp:36

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace interop
{
  

   void operator<<= (::CORBA::Any &, ::interop::wchar_types);
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::interop::wchar_types &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 void operator<<= (::CORBA::Any &, interop::wchar_types);
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, interop::wchar_types &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_union/any_op_ch.cpp:37



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace interop
{
   void operator<<= (::CORBA::Any &, const ::interop::wunion &); // copying version
   void operator<<= (::CORBA::Any &, ::interop::wunion*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::interop::wunion *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::interop::wunion *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, const interop::wunion &); // copying version
 void operator<<= (::CORBA::Any &, interop::wunion*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, interop::wunion *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const interop::wunion *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace interop
{
   void operator<<= ( ::CORBA::Any &, WChar_Passer_ptr); // copying
   void operator<<= ( ::CORBA::Any &, WChar_Passer_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, WChar_Passer_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, interop::WChar_Passer_ptr); // copying
 void operator<<= (::CORBA::Any &, interop::WChar_Passer_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, interop::WChar_Passer_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_ch.cpp:38

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace interop
{
  

   void operator<<= (::CORBA::Any &, const ::interop::WChar_Passer::WStringException &); // copying version
   void operator<<= (::CORBA::Any &, ::interop::WChar_Passer::WStringException*); // noncopying version
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::interop::WChar_Passer::WStringException *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::interop::WChar_Passer::WStringException *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 void operator<<= (::CORBA::Any &, const interop::WChar_Passer::WStringException &); // copying version
 void operator<<= (::CORBA::Any &, interop::WChar_Passer::WStringException*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, interop::WChar_Passer::WStringException *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const interop::WChar_Passer::WStringException *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_array/cdr_op_ch.cpp:99


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 CORBA::Boolean operator<< (TAO_OutputCDR &strm, const interop::warray_forany &_tao_array);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, interop::warray_forany &_tao_array);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const interop::wstruct &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, interop::wstruct &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_interop_wstructseq_H_
#define _TAO_CDR_OP_interop_wstructseq_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const interop::wstructseq &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    interop::wstructseq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_interop_wstructseq_H_ */

// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_ch.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &strm, interop::wchar_types _tao_enumerator);
 ::CORBA::Boolean operator>> (TAO_InputCDR &strm, interop::wchar_types &_tao_enumerator);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_union/cdr_op_ch.cpp:38


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const interop::wunion &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, interop::wunion &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const interop::WChar_Passer_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, interop::WChar_Passer_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const interop::WChar_Passer::WStringException &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, interop::WChar_Passer::WStringException &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "interop_wcharC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

