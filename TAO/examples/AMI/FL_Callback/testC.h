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

#ifndef _TAO_IDL_TESTC_QEIICV_H_
#define _TAO_IDL_TESTC_QEIICV_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/Valuetype/ValueBase.h"
#include "tao/Valuetype/Valuetype_Adapter_Factory_Impl.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Messaging/Messaging.h"
#include "tao/Sequence_T.h"
#include "tao/Valuetype/Value_VarOut_T.h"
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
// be/be_interface.cpp:748

#if !defined (_PEER__VAR_OUT_CH_)
#define _PEER__VAR_OUT_CH_

class AMI_PeerHandler;
typedef AMI_PeerHandler *AMI_PeerHandler_ptr;

class Peer;
typedef Peer *Peer_ptr;

typedef
  TAO_Objref_Var_T<
      Peer
    >
  Peer_var;

typedef
  TAO_Objref_Out_T<
      Peer
    >
  Peer_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_ch.cpp:99

#if !defined (_PEERSET_CH_)
#define _PEERSET_CH_

class PeerSet;

typedef
  ::TAO_VarSeq_Var_T<
      PeerSet
    >
  PeerSet_var;

typedef
  ::TAO_Seq_Out_T<
      PeerSet
    >
  PeerSet_out;

class  PeerSet
  : public
      ::TAO::unbounded_object_reference_sequence<
          Peer,
          Peer_var
        >
{
public:
  PeerSet (void);
  PeerSet ( ::CORBA::ULong max);
  PeerSet (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Peer_ptr* buffer,
    ::CORBA::Boolean release = false);
  PeerSet (const PeerSet &);
  virtual ~PeerSet (void);
  

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  
  typedef PeerSet_var _var_type;
  typedef PeerSet_out _out_type;

  static void _tao_any_destructor (void *);
};

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_PeerSet;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  Peer
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Peer>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Peer_ptr _ptr_type;
  typedef Peer_var _var_type;
  typedef Peer_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static Peer_ptr _duplicate (Peer_ptr obj);

  static void _tao_release (Peer_ptr obj);

  static Peer_ptr _narrow (::CORBA::Object_ptr obj);
  static Peer_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Peer_ptr _nil (void);

  virtual ::CORBA::Long request (
    ::CORBA::Long id);

  virtual void start (
    const ::PeerSet & the_peers,
    ::CORBA::Long iterations);

  virtual void shutdown (
    void);

  virtual void sendc_request (
    ::AMI_PeerHandler_ptr ami_handler,
    ::CORBA::Long id);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Peer (void);

  // Concrete non-local interface only.
  Peer (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  Peer (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Peer (void);

private:
  // Private and unimplemented for concrete interfaces.
  Peer (const Peer &);

  void operator= (const Peer &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_Peer;

// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_AMI_PEERHANDLER__VAR_OUT_CH_)
#define _AMI_PEERHANDLER__VAR_OUT_CH_

class AMI_PeerHandler;
typedef AMI_PeerHandler *AMI_PeerHandler_ptr;

typedef
  TAO_Objref_Var_T<
      AMI_PeerHandler
    >
  AMI_PeerHandler_var;

typedef
  TAO_Objref_Out_T<
      AMI_PeerHandler
    >
  AMI_PeerHandler_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  AMI_PeerHandler
  : public virtual ::Messaging::ReplyHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_PeerHandler>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef AMI_PeerHandler_ptr _ptr_type;
  typedef AMI_PeerHandler_var _var_type;
  typedef AMI_PeerHandler_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_PeerHandler_ptr _duplicate (AMI_PeerHandler_ptr obj);

  static void _tao_release (AMI_PeerHandler_ptr obj);

  static AMI_PeerHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_PeerHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_PeerHandler_ptr _nil (void);

  virtual void request (
    ::CORBA::Long ami_return_val);

  static void
  request_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void request_excep (
    ::Messaging::ExceptionHolder * excep_holder);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  AMI_PeerHandler (void);

  // Concrete non-local interface only.
  AMI_PeerHandler (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_PeerHandler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~AMI_PeerHandler (void);

private:
  // Private and unimplemented for concrete interfaces.
  AMI_PeerHandler (const AMI_PeerHandler &);

  void operator= (const AMI_PeerHandler &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_AMI_PeerHandler;

// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_PROGRESS__VAR_OUT_CH_)
#define _PROGRESS__VAR_OUT_CH_

class AMI_ProgressHandler;
typedef AMI_ProgressHandler *AMI_ProgressHandler_ptr;

class Progress;
typedef Progress *Progress_ptr;

typedef
  TAO_Objref_Var_T<
      Progress
    >
  Progress_var;

typedef
  TAO_Objref_Out_T<
      Progress
    >
  Progress_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  Progress
  : public virtual ::CORBA::Object
{
public:
  friend class TAO::Narrow_Utils<Progress>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef Progress_ptr _ptr_type;
  typedef Progress_var _var_type;
  typedef Progress_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static Progress_ptr _duplicate (Progress_ptr obj);

  static void _tao_release (Progress_ptr obj);

  static Progress_ptr _narrow (::CORBA::Object_ptr obj);
  static Progress_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static Progress_ptr _nil (void);

  virtual void sent_request (
    ::CORBA::Long id);

  virtual void recv_reply (
    ::CORBA::Long id);

  virtual ::CORBA::Long bind (
    ::Peer_ptr a_peer);

  virtual void sendc_bind (
    ::AMI_ProgressHandler_ptr ami_handler,
    ::Peer_ptr a_peer);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  Progress (void);

  // Concrete non-local interface only.
  Progress (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  Progress (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~Progress (void);

private:
  // Private and unimplemented for concrete interfaces.
  Progress (const Progress &);

  void operator= (const Progress &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_Progress;

// TAO_IDL - Generated from
// be/be_interface.cpp:748

#if !defined (_AMI_PROGRESSHANDLER__VAR_OUT_CH_)
#define _AMI_PROGRESSHANDLER__VAR_OUT_CH_

class AMI_ProgressHandler;
typedef AMI_ProgressHandler *AMI_ProgressHandler_ptr;

typedef
  TAO_Objref_Var_T<
      AMI_ProgressHandler
    >
  AMI_ProgressHandler_var;

typedef
  TAO_Objref_Out_T<
      AMI_ProgressHandler
    >
  AMI_ProgressHandler_out;

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ch.cpp:40

class  AMI_ProgressHandler
  : public virtual ::Messaging::ReplyHandler

{
public:
  friend class TAO::Narrow_Utils<AMI_ProgressHandler>;

  // TAO_IDL - Generated from
  // be/be_type.cpp:304

  typedef AMI_ProgressHandler_ptr _ptr_type;
  typedef AMI_ProgressHandler_var _var_type;
  typedef AMI_ProgressHandler_out _out_type;

  static void _tao_any_destructor (void *);

  // The static operations.
  static AMI_ProgressHandler_ptr _duplicate (AMI_ProgressHandler_ptr obj);

  static void _tao_release (AMI_ProgressHandler_ptr obj);

  static AMI_ProgressHandler_ptr _narrow (::CORBA::Object_ptr obj);
  static AMI_ProgressHandler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
  static AMI_ProgressHandler_ptr _nil (void);

  virtual void bind (
    ::CORBA::Long ami_return_val);

  static void
  bind_reply_stub (
    TAO_InputCDR &_tao_reply_cdr,
    ::Messaging::ReplyHandler_ptr _tao_reply_handler,
    ::CORBA::ULong reply_status);

  virtual void bind_excep (
    ::Messaging::ExceptionHolder * excep_holder);

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:137

  virtual ::CORBA::Boolean _is_a (const char *type_id);
  virtual const char* _interface_repository_id (void) const;
  virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

protected:
  // Concrete interface only.
  AMI_ProgressHandler (void);

  // Concrete non-local interface only.
  AMI_ProgressHandler (
      ::IOP::IOR *ior,
      TAO_ORB_Core *orb_core);
  
  // Non-local interface only.
  AMI_ProgressHandler (
      TAO_Stub *objref,
      ::CORBA::Boolean _tao_collocated = false,
      TAO_Abstract_ServantBase *servant = 0,
      TAO_ORB_Core *orb_core = 0);

  virtual ~AMI_ProgressHandler (void);

private:
  // Private and unimplemented for concrete interfaces.
  AMI_ProgressHandler (const AMI_ProgressHandler &);

  void operator= (const AMI_ProgressHandler &);
};

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_decl.cpp:34

extern  ::CORBA::TypeCode_ptr const _tc_AMI_ProgressHandler;

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:306

#if !defined (_MESSAGING_EXCEPTIONHOLDER__ARG_TRAITS_)
#define _MESSAGING_EXCEPTIONHOLDER__ARG_TRAITS_

  template<>
  class Arg_Traits< ::Messaging::ExceptionHolder>
    : public
        Object_Arg_Traits_T<
            ::Messaging::ExceptionHolder *,
            ::Messaging::ExceptionHolder_var,
            ::Messaging::ExceptionHolder_out,
            TAO::Value_Traits<Messaging::ExceptionHolder>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_PEER__ARG_TRAITS_)
#define _PEER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Peer>
    : public
        Object_Arg_Traits_T<
            ::Peer_ptr,
            ::Peer_var,
            ::Peer_out,
            TAO::Objref_Traits<Peer>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:683

  template<>
  class Arg_Traits< ::PeerSet>
    : public
        Var_Size_Arg_Traits_T<
            ::PeerSet,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_AMI_PEERHANDLER__ARG_TRAITS_)
#define _AMI_PEERHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::AMI_PeerHandler>
    : public
        Object_Arg_Traits_T<
            ::AMI_PeerHandler_ptr,
            ::AMI_PeerHandler_var,
            ::AMI_PeerHandler_out,
            TAO::Objref_Traits<AMI_PeerHandler>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_PROGRESS__ARG_TRAITS_)
#define _PROGRESS__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Progress>
    : public
        Object_Arg_Traits_T<
            ::Progress_ptr,
            ::Progress_var,
            ::Progress_out,
            TAO::Objref_Traits<Progress>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_AMI_PROGRESSHANDLER__ARG_TRAITS_)
#define _AMI_PROGRESSHANDLER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::AMI_ProgressHandler>
    : public
        Object_Arg_Traits_T<
            ::AMI_ProgressHandler_ptr,
            ::AMI_ProgressHandler_var,
            ::AMI_ProgressHandler_out,
            TAO::Objref_Traits<AMI_ProgressHandler>,
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

#if !defined (_PEER__TRAITS_)
#define _PEER__TRAITS_

  template<>
  struct  Objref_Traits< ::Peer>
  {
    static ::Peer_ptr duplicate (
        ::Peer_ptr p);
    static void release (
        ::Peer_ptr p);
    static ::Peer_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Peer_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMI_PEERHANDLER__TRAITS_)
#define _AMI_PEERHANDLER__TRAITS_

  template<>
  struct  Objref_Traits< ::AMI_PeerHandler>
  {
    static ::AMI_PeerHandler_ptr duplicate (
        ::AMI_PeerHandler_ptr p);
    static void release (
        ::AMI_PeerHandler_ptr p);
    static ::AMI_PeerHandler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::AMI_PeerHandler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_PROGRESS__TRAITS_)
#define _PROGRESS__TRAITS_

  template<>
  struct  Objref_Traits< ::Progress>
  {
    static ::Progress_ptr duplicate (
        ::Progress_ptr p);
    static void release (
        ::Progress_ptr p);
    static ::Progress_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Progress_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_AMI_PROGRESSHANDLER__TRAITS_)
#define _AMI_PROGRESSHANDLER__TRAITS_

  template<>
  struct  Objref_Traits< ::AMI_ProgressHandler>
  {
    static ::AMI_ProgressHandler_ptr duplicate (
        ::AMI_ProgressHandler_ptr p);
    static void release (
        ::AMI_ProgressHandler_ptr p);
    static ::AMI_ProgressHandler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::AMI_ProgressHandler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_ch.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= ( ::CORBA::Any &, const PeerSet &); // copying version
 void operator<<= ( ::CORBA::Any &, PeerSet*); // noncopying version
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, PeerSet *&); // deprecated
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const PeerSet *&);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Peer_ptr); // copying
 void operator<<= (::CORBA::Any &, Peer_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Peer_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, AMI_PeerHandler_ptr); // copying
 void operator<<= (::CORBA::Any &, AMI_PeerHandler_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_PeerHandler_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, Progress_ptr); // copying
 void operator<<= (::CORBA::Any &, Progress_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Progress_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, AMI_ProgressHandler_ptr); // copying
 void operator<<= (::CORBA::Any &, AMI_ProgressHandler_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, AMI_ProgressHandler_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_ch.cpp:65

#if !defined _TAO_CDR_OP_PeerSet_H_
#define _TAO_CDR_OP_PeerSet_H_
TAO_BEGIN_VERSIONED_NAMESPACE_DECL


 ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const PeerSet &_tao_sequence);
 ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    PeerSet &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* _TAO_CDR_OP_PeerSet_H_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Peer_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Peer_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMI_PeerHandler_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, AMI_PeerHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Progress_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Progress_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const AMI_ProgressHandler_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, AMI_ProgressHandler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

