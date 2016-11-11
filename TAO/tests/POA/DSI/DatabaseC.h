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

#ifndef _TAO_IDL_DATABASEC_RW8CHO_H_
#define _TAO_IDL_DATABASEC_RW8CHO_H_

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
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/String_Manager_T.h"
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

namespace Database
{

  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:370

  typedef ::CORBA::ULong Flags;
  typedef ::CORBA::ULong_out Flags_out;

  // TAO_IDL - Generated from
  // be/be_visitor_typedef/typedef_ch.cpp:404

  typedef char * Identifier;
  typedef ::CORBA::String_var Identifier_var;
  typedef ::CORBA::String_out Identifier_out;

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  Unknown_Type : public ::CORBA::UserException
  {
  public:
    ::TAO::String_Manager type;

    Unknown_Type (void);
    Unknown_Type (const Unknown_Type &);
    ~Unknown_Type (void);

    Unknown_Type &operator= (const Unknown_Type &);

    static Unknown_Type *_downcast ( ::CORBA::Exception *);
    static const Unknown_Type *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ctor.cpp:51

    Unknown_Type (
        const char * _tao_type);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  Unknown_Key : public ::CORBA::UserException
  {
  public:
    ::TAO::String_Manager key;

    Unknown_Key (void);
    Unknown_Key (const Unknown_Key &);
    ~Unknown_Key (void);

    Unknown_Key &operator= (const Unknown_Key &);

    static Unknown_Key *_downcast ( ::CORBA::Exception *);
    static const Unknown_Key *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ctor.cpp:51

    Unknown_Key (
        const char * _tao_key);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  Duplicate_Key : public ::CORBA::UserException
  {
  public:
    ::TAO::String_Manager key;

    Duplicate_Key (void);
    Duplicate_Key (const Duplicate_Key &);
    ~Duplicate_Key (void);

    Duplicate_Key &operator= (const Duplicate_Key &);

    static Duplicate_Key *_downcast ( ::CORBA::Exception *);
    static const Duplicate_Key *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ctor.cpp:51

    Duplicate_Key (
        const char * _tao_key);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:41

  class  Not_Found : public ::CORBA::UserException
  {
  public:
    ::TAO::String_Manager key;

    Not_Found (void);
    Not_Found (const Not_Found &);
    ~Not_Found (void);

    Not_Found &operator= (const Not_Found &);

    static Not_Found *_downcast ( ::CORBA::Exception *);
    static const Not_Found *_downcast ( ::CORBA::Exception const *);

    static ::CORBA::Exception *_alloc (void);

    virtual ::CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const;
    virtual void _tao_decode (TAO_InputCDR &cdr);

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ctor.cpp:51

    Not_Found (
        const char * _tao_key);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_DATABASE_ENTRY__VAR_OUT_CH_)
#define _DATABASE_ENTRY__VAR_OUT_CH_

  class Entry;
  typedef Entry *Entry_ptr;

  typedef
    TAO_Objref_Var_T<
        Entry
      >
    Entry_var;
  
  typedef
    TAO_Objref_Out_T<
        Entry
      >
    Entry_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Entry
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Entry>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Entry_ptr _ptr_type;
    typedef Entry_var _var_type;
    typedef Entry_out _out_type;

    // The static operations.
    static Entry_ptr _duplicate (Entry_ptr obj);

    static void _tao_release (Entry_ptr obj);

    static Entry_ptr _narrow (::CORBA::Object_ptr obj);
    static Entry_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Entry_ptr _nil (void);

    virtual char * name (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Entry (void);

    // Concrete non-local interface only.
    Entry (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Entry (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Entry (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Entry (const Entry &);

    void operator= (const Entry &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_DATABASE_EMPLOYEE__VAR_OUT_CH_)
#define _DATABASE_EMPLOYEE__VAR_OUT_CH_

  class Employee;
  typedef Employee *Employee_ptr;

  typedef
    TAO_Objref_Var_T<
        Employee
      >
    Employee_var;
  
  typedef
    TAO_Objref_Out_T<
        Employee
      >
    Employee_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Employee
    : public virtual ::Database::Entry
  
  {
  public:
    friend class TAO::Narrow_Utils<Employee>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Employee_ptr _ptr_type;
    typedef Employee_var _var_type;
    typedef Employee_out _out_type;

    // The static operations.
    static Employee_ptr _duplicate (Employee_ptr obj);

    static void _tao_release (Employee_ptr obj);

    static Employee_ptr _narrow (::CORBA::Object_ptr obj);
    static Employee_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Employee_ptr _nil (void);

    virtual ::CORBA::Long id (
      void);

    virtual void id (
      ::CORBA::Long id);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Employee (void);

    // Concrete non-local interface only.
    Employee (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Employee (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Employee (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Employee (const Employee &);

    void operator= (const Employee &);
  };

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct NamedValue;

  typedef
    ::TAO_Var_Var_T<
        NamedValue
      >
    NamedValue_var;

  typedef
    ::TAO_Out_T<
        NamedValue
      >
    NamedValue_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct  NamedValue
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef NamedValue_var _var_type;
    typedef NamedValue_out _out_type;
    
    ::TAO::String_Manager name;
    ::CORBA::Any value;
    Database::Flags options;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_DATABASE_NVPAIRSEQUENCE_CH_)
#define _DATABASE_NVPAIRSEQUENCE_CH_

  class NVPairSequence;

  typedef
    ::TAO_VarSeq_Var_T<
        NVPairSequence
      >
    NVPairSequence_var;

  typedef
    ::TAO_Seq_Out_T<
        NVPairSequence
      >
    NVPairSequence_out;

  class  NVPairSequence
    : public
        ::TAO::unbounded_value_sequence<
            NamedValue
          >
  {
  public:
    NVPairSequence (void);
    NVPairSequence ( ::CORBA::ULong max);
    NVPairSequence (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      NamedValue* buffer,
      ::CORBA::Boolean release = false);
    NVPairSequence (const NVPairSequence &);
    virtual ~NVPairSequence (void);
    

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef NVPairSequence_var _var_type;
    typedef NVPairSequence_out _out_type;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_DATABASE_AGENT__VAR_OUT_CH_)
#define _DATABASE_AGENT__VAR_OUT_CH_

  class Agent;
  typedef Agent *Agent_ptr;

  typedef
    TAO_Objref_Var_T<
        Agent
      >
    Agent_var;
  
  typedef
    TAO_Objref_Out_T<
        Agent
      >
    Agent_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Agent
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Agent>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Agent_ptr _ptr_type;
    typedef Agent_var _var_type;
    typedef Agent_out _out_type;

    // The static operations.
    static Agent_ptr _duplicate (Agent_ptr obj);

    static void _tao_release (Agent_ptr obj);

    static Agent_ptr _narrow (::CORBA::Object_ptr obj);
    static Agent_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Agent_ptr _nil (void);

    virtual ::Database::Entry_ptr create_entry (
      const char * key,
      const char * entry_type,
      const ::Database::NVPairSequence & initial_attributes);

    virtual ::Database::Entry_ptr find_entry (
      const char * key,
      const char * entry_type);

    virtual void destroy_entry (
      const char * key,
      const char * entry_type);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Agent (void);

    // Concrete non-local interface only.
    Agent (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Agent (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Agent (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Agent (const Agent &);

    void operator= (const Agent &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Database

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_DATABASE_ENTRY__ARG_TRAITS_)
#define _DATABASE_ENTRY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Database::Entry>
    : public
        Object_Arg_Traits_T<
            ::Database::Entry_ptr,
            ::Database::Entry_var,
            ::Database::Entry_out,
            TAO::Objref_Traits<Database::Entry>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_DATABASE_EMPLOYEE__ARG_TRAITS_)
#define _DATABASE_EMPLOYEE__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Database::Employee>
    : public
        Object_Arg_Traits_T<
            ::Database::Employee_ptr,
            ::Database::Employee_var,
            ::Database::Employee_out,
            TAO::Objref_Traits<Database::Employee>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::Database::NamedValue>
    : public
        Var_Size_Arg_Traits_T<
            ::Database::NamedValue,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::Database::NVPairSequence>
    : public
        Var_Size_Arg_Traits_T<
            ::Database::NVPairSequence,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_DATABASE_AGENT__ARG_TRAITS_)
#define _DATABASE_AGENT__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Database::Agent>
    : public
        Object_Arg_Traits_T<
            ::Database::Agent_ptr,
            ::Database::Agent_var,
            ::Database::Agent_out,
            TAO::Objref_Traits<Database::Agent>,
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

#if !defined (_DATABASE_ENTRY__TRAITS_)
#define _DATABASE_ENTRY__TRAITS_

  template<>
  struct  Objref_Traits< ::Database::Entry>
  {
    static ::Database::Entry_ptr duplicate (
        ::Database::Entry_ptr p);
    static void release (
        ::Database::Entry_ptr p);
    static ::Database::Entry_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Database::Entry_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_DATABASE_EMPLOYEE__TRAITS_)
#define _DATABASE_EMPLOYEE__TRAITS_

  template<>
  struct  Objref_Traits< ::Database::Employee>
  {
    static ::Database::Employee_ptr duplicate (
        ::Database::Employee_ptr p);
    static void release (
        ::Database::Employee_ptr p);
    static ::Database::Employee_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Database::Employee_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_DATABASE_AGENT__TRAITS_)
#define _DATABASE_AGENT__TRAITS_

  template<>
  struct  Objref_Traits< ::Database::Agent>
  {
    static ::Database::Agent_ptr duplicate (
        ::Database::Agent_ptr p);
    static void release (
        ::Database::Agent_ptr p);
    static ::Database::Agent_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Database::Agent_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Database::Unknown_Type &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Database::Unknown_Type &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Database::Unknown_Key &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Database::Unknown_Key &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Database::Duplicate_Key &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Database::Duplicate_Key &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:37
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Database::Not_Found &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Database::Not_Found &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Database::Entry_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Database::Entry_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Database::Employee_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Database::Employee_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Database::NamedValue &);
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Database::NamedValue &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_Database_NVPairSequence_H_
#define _TAO_CDR_OP_Database_NVPairSequence_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Database::NVPairSequence &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Database::NVPairSequence &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_Database_NVPairSequence_H_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Database::Agent_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Database::Agent_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "DatabaseC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

