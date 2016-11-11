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
// be/be_codegen.cpp:373


#include "testC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Messaging/Asynch_Invocation_Adapter.h"
#include "tao/Messaging/ExceptionHolder_i.h"
#include "tao/Valuetype/ValueFactory.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_sequence/sequence_cs.cpp:70

#if !defined (_PEERSET_CS_)
#define _PEERSET_CS_

PeerSet::PeerSet (void)
{}

PeerSet::PeerSet (
    ::CORBA::ULong max)
  : ::TAO::unbounded_object_reference_sequence<
        Peer,
        Peer_var
      > (max)
{}

PeerSet::PeerSet (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    Peer_ptr * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_object_reference_sequence<
        Peer,
        Peer_var
      >
    (max, length, buffer, release)
{}

PeerSet::PeerSet (
    const PeerSet &seq)
  : ::TAO::unbounded_object_reference_sequence<
        Peer,
        Peer_var
      > (seq)
{}

PeerSet::~PeerSet (void)
{}

void PeerSet::_tao_any_destructor (
    void * _tao_void_pointer)
{
  PeerSet * _tao_tmp_pointer =
    static_cast<PeerSet *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_typecode/alias_typecode.cpp:49



// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:461


#ifndef _TAO_TYPECODE_PeerSet_GUARD
#define _TAO_TYPECODE_PeerSet_GUARD

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        PeerSet_0 (
          ::CORBA::tk_sequence,
          &_tc_Peer,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_PeerSet_0 =
        &PeerSet_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_TYPECODE_PeerSet_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_PeerSet (
    ::CORBA::tk_alias,
    "IDL:PeerSet:1.0",
    "PeerSet",
    &TAO::TypeCode::tc_PeerSet_0);
  
::CORBA::TypeCode_ptr const _tc_PeerSet =
  &_tao_tc_PeerSet;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Peer.

Peer_ptr
TAO::Objref_Traits<Peer>::duplicate (
    Peer_ptr p)
{
  return Peer::_duplicate (p);
}

void
TAO::Objref_Traits<Peer>::release (
    Peer_ptr p)
{
  ::CORBA::release (p);
}

Peer_ptr
TAO::Objref_Traits<Peer>::nil (void)
{
  return Peer::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Peer>::marshal (
    const Peer_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
Peer::request (
  ::CORBA::Long id)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_id (id);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_id
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "request",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Peer::start (
  const ::PeerSet & the_peers,
  ::CORBA::Long iterations)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::PeerSet>::in_arg_val _tao_the_peers (the_peers);
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_iterations (iterations);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_the_peers,
      &_tao_iterations
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "start",
      5,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION
      
    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Peer::shutdown (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "shutdown",
      8,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/ami_cs.cpp:55

void
Peer::sendc_request (
  ::AMI_PeerHandler_ptr ami_handler,
  ::CORBA::Long id)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  
  
  TAO::Arg_Traits<void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_id (id);

  TAO::Argument *_the_tao_operation_signature[] =
    {
      &_tao_retval,
      &_tao_id
    };

  TAO::Asynch_Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "request",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
    );

  _tao_call.invoke (
      ami_handler,
      &AMI_PeerHandler::request_reply_stub
    );
}

Peer::Peer (void)
{
}

Peer::~Peer (void)
{
}

void
Peer::_tao_any_destructor (void *_tao_void_pointer)
{
  Peer *_tao_tmp_pointer =
    static_cast<Peer *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Peer_ptr
Peer::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Peer>::narrow (
        _tao_objref,
        "IDL:Peer:1.0");
}

Peer_ptr
Peer::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Peer>::unchecked_narrow (
        _tao_objref);
}

Peer_ptr
Peer::_nil (void)
{
  return 0;
}

Peer_ptr
Peer::_duplicate (Peer_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Peer::_tao_release (Peer_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Peer::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Peer:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* Peer::_interface_repository_id (void) const
{
  return "IDL:Peer:1.0";
}

::CORBA::Boolean
Peer::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Peer (
    ::CORBA::tk_objref,
    "IDL:Peer:1.0",
    "Peer");
  
::CORBA::TypeCode_ptr const _tc_Peer =
  &_tao_tc_Peer;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for AMI_PeerHandler.

AMI_PeerHandler_ptr
TAO::Objref_Traits<AMI_PeerHandler>::duplicate (
    AMI_PeerHandler_ptr p)
{
  return AMI_PeerHandler::_duplicate (p);
}

void
TAO::Objref_Traits<AMI_PeerHandler>::release (
    AMI_PeerHandler_ptr p)
{
  ::CORBA::release (p);
}

AMI_PeerHandler_ptr
TAO::Objref_Traits<AMI_PeerHandler>::nil (void)
{
  return AMI_PeerHandler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<AMI_PeerHandler>::marshal (
    const AMI_PeerHandler_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
AMI_PeerHandler::request (
  ::CORBA::Long ami_return_val)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_ami_return_val (ami_return_val);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_ami_return_val
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "request",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);
}

void
AMI_PeerHandler::request_reply_stub (
  TAO_InputCDR &_tao_in,
  ::Messaging::ReplyHandler_ptr _tao_reply_handler,
  ::CORBA::ULong reply_status)
{
  // Retrieve Reply Handler object.
  AMI_PeerHandler_var _tao_reply_handler_object =
    AMI_PeerHandler::_narrow (_tao_reply_handler);

  // Exception handling
  switch (reply_status)
  {
    case TAO_AMI_REPLY_OK:
    {

      ::CORBA::Long ami_return_val;      // Demarshall all the arguments.
      if (!(

            (_tao_in >> ami_return_val)
         ))
        throw ::CORBA::MARSHAL ();
      
      // Invoke the call back method.
      _tao_reply_handler_object->request (
          
          ami_return_val
        );
      break;
    }
    case TAO_AMI_REPLY_USER_EXCEPTION:
    case TAO_AMI_REPLY_SYSTEM_EXCEPTION:
    {
      const ACE_Message_Block* cdr = _tao_in.start ();
      ::CORBA::OctetSeq _tao_marshaled_exception (
          static_cast <CORBA::ULong> (cdr->length ()),
          static_cast <CORBA::ULong> (cdr->length ()),
          reinterpret_cast <unsigned char*> (cdr->rd_ptr ()),
          0
        );
      ::Messaging::ExceptionHolder* exception_holder_ptr = 0;
      ACE_NEW (
          exception_holder_ptr,
          ::TAO::ExceptionHolder (
            (reply_status == TAO_AMI_REPLY_SYSTEM_EXCEPTION),
            _tao_in.byte_order (),
            _tao_marshaled_exception,
            0,
            0,
            _tao_in.char_translator (),
            _tao_in.wchar_translator ())
          );
        
      ::Messaging::ExceptionHolder_var exception_holder_var = exception_holder_ptr;
      _tao_reply_handler_object->request_excep (
          exception_holder_var
        );
      break;
    }
    case TAO_AMI_REPLY_NOT_OK:
      // @@ Michael: Not even the spec mentions this case.
      //             We have to think about this case.
      break;
  }
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
AMI_PeerHandler::request_excep (
  ::Messaging::ExceptionHolder * excep_holder)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Messaging::ExceptionHolder>::in_arg_val _tao_excep_holder (excep_holder);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_excep_holder
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "request_excep",
      13,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);
}

AMI_PeerHandler::AMI_PeerHandler (void)
{
}

AMI_PeerHandler::~AMI_PeerHandler (void)
{
}

void
AMI_PeerHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMI_PeerHandler *_tao_tmp_pointer =
    static_cast<AMI_PeerHandler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

AMI_PeerHandler_ptr
AMI_PeerHandler::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<AMI_PeerHandler>::narrow (
        _tao_objref,
        "IDL:AMI_PeerHandler:1.0");
}

AMI_PeerHandler_ptr
AMI_PeerHandler::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<AMI_PeerHandler>::unchecked_narrow (
        _tao_objref);
}

AMI_PeerHandler_ptr
AMI_PeerHandler::_nil (void)
{
  return 0;
}

AMI_PeerHandler_ptr
AMI_PeerHandler::_duplicate (AMI_PeerHandler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
AMI_PeerHandler::_tao_release (AMI_PeerHandler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
AMI_PeerHandler::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/Messaging/ReplyHandler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:AMI_PeerHandler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* AMI_PeerHandler::_interface_repository_id (void) const
{
  return "IDL:AMI_PeerHandler:1.0";
}

::CORBA::Boolean
AMI_PeerHandler::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_AMI_PeerHandler (
    ::CORBA::tk_objref,
    "IDL:AMI_PeerHandler:1.0",
    "AMI_PeerHandler");
  
::CORBA::TypeCode_ptr const _tc_AMI_PeerHandler =
  &_tao_tc_AMI_PeerHandler;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Progress.

Progress_ptr
TAO::Objref_Traits<Progress>::duplicate (
    Progress_ptr p)
{
  return Progress::_duplicate (p);
}

void
TAO::Objref_Traits<Progress>::release (
    Progress_ptr p)
{
  ::CORBA::release (p);
}

Progress_ptr
TAO::Objref_Traits<Progress>::nil (void)
{
  return Progress::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Progress>::marshal (
    const Progress_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Progress::sent_request (
  ::CORBA::Long id)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_id (id);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_id
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "sent_request",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION
      
    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Progress::recv_reply (
  ::CORBA::Long id)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_id (id);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_id
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "recv_reply",
      10,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_ONEWAY_INVOCATION
      
    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
Progress::bind (
  ::Peer_ptr a_peer)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Peer>::in_arg_val _tao_a_peer (a_peer);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_a_peer
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "bind",
      4,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/ami_cs.cpp:55

void
Progress::sendc_bind (
  ::AMI_ProgressHandler_ptr ami_handler,
  ::Peer_ptr a_peer)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  
  
  TAO::Arg_Traits<void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Peer>::in_arg_val _tao_a_peer (a_peer);

  TAO::Argument *_the_tao_operation_signature[] =
    {
      &_tao_retval,
      &_tao_a_peer
    };

  TAO::Asynch_Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "bind",
      4,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
    );

  _tao_call.invoke (
      ami_handler,
      &AMI_ProgressHandler::bind_reply_stub
    );
}

Progress::Progress (void)
{
}

Progress::~Progress (void)
{
}

void
Progress::_tao_any_destructor (void *_tao_void_pointer)
{
  Progress *_tao_tmp_pointer =
    static_cast<Progress *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Progress_ptr
Progress::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Progress>::narrow (
        _tao_objref,
        "IDL:Progress:1.0");
}

Progress_ptr
Progress::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Progress>::unchecked_narrow (
        _tao_objref);
}

Progress_ptr
Progress::_nil (void)
{
  return 0;
}

Progress_ptr
Progress::_duplicate (Progress_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Progress::_tao_release (Progress_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Progress::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Progress:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* Progress::_interface_repository_id (void) const
{
  return "IDL:Progress:1.0";
}

::CORBA::Boolean
Progress::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Progress (
    ::CORBA::tk_objref,
    "IDL:Progress:1.0",
    "Progress");
  
::CORBA::TypeCode_ptr const _tc_Progress =
  &_tao_tc_Progress;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for AMI_ProgressHandler.

AMI_ProgressHandler_ptr
TAO::Objref_Traits<AMI_ProgressHandler>::duplicate (
    AMI_ProgressHandler_ptr p)
{
  return AMI_ProgressHandler::_duplicate (p);
}

void
TAO::Objref_Traits<AMI_ProgressHandler>::release (
    AMI_ProgressHandler_ptr p)
{
  ::CORBA::release (p);
}

AMI_ProgressHandler_ptr
TAO::Objref_Traits<AMI_ProgressHandler>::nil (void)
{
  return AMI_ProgressHandler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<AMI_ProgressHandler>::marshal (
    const AMI_ProgressHandler_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
AMI_ProgressHandler::bind (
  ::CORBA::Long ami_return_val)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_ami_return_val (ami_return_val);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_ami_return_val
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "bind",
      4,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);
}

void
AMI_ProgressHandler::bind_reply_stub (
  TAO_InputCDR &_tao_in,
  ::Messaging::ReplyHandler_ptr _tao_reply_handler,
  ::CORBA::ULong reply_status)
{
  // Retrieve Reply Handler object.
  AMI_ProgressHandler_var _tao_reply_handler_object =
    AMI_ProgressHandler::_narrow (_tao_reply_handler);

  // Exception handling
  switch (reply_status)
  {
    case TAO_AMI_REPLY_OK:
    {

      ::CORBA::Long ami_return_val;      // Demarshall all the arguments.
      if (!(

            (_tao_in >> ami_return_val)
         ))
        throw ::CORBA::MARSHAL ();
      
      // Invoke the call back method.
      _tao_reply_handler_object->bind (
          
          ami_return_val
        );
      break;
    }
    case TAO_AMI_REPLY_USER_EXCEPTION:
    case TAO_AMI_REPLY_SYSTEM_EXCEPTION:
    {
      const ACE_Message_Block* cdr = _tao_in.start ();
      ::CORBA::OctetSeq _tao_marshaled_exception (
          static_cast <CORBA::ULong> (cdr->length ()),
          static_cast <CORBA::ULong> (cdr->length ()),
          reinterpret_cast <unsigned char*> (cdr->rd_ptr ()),
          0
        );
      ::Messaging::ExceptionHolder* exception_holder_ptr = 0;
      ACE_NEW (
          exception_holder_ptr,
          ::TAO::ExceptionHolder (
            (reply_status == TAO_AMI_REPLY_SYSTEM_EXCEPTION),
            _tao_in.byte_order (),
            _tao_marshaled_exception,
            0,
            0,
            _tao_in.char_translator (),
            _tao_in.wchar_translator ())
          );
        
      ::Messaging::ExceptionHolder_var exception_holder_var = exception_holder_ptr;
      _tao_reply_handler_object->bind_excep (
          exception_holder_var
        );
      break;
    }
    case TAO_AMI_REPLY_NOT_OK:
      // @@ Michael: Not even the spec mentions this case.
      //             We have to think about this case.
      break;
  }
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
AMI_ProgressHandler::bind_excep (
  ::Messaging::ExceptionHolder * excep_holder)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Messaging::ExceptionHolder>::in_arg_val _tao_excep_holder (excep_holder);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_excep_holder
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "bind_excep",
      10,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (0, 0);
}

AMI_ProgressHandler::AMI_ProgressHandler (void)
{
}

AMI_ProgressHandler::~AMI_ProgressHandler (void)
{
}

void
AMI_ProgressHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMI_ProgressHandler *_tao_tmp_pointer =
    static_cast<AMI_ProgressHandler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

AMI_ProgressHandler_ptr
AMI_ProgressHandler::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<AMI_ProgressHandler>::narrow (
        _tao_objref,
        "IDL:AMI_ProgressHandler:1.0");
}

AMI_ProgressHandler_ptr
AMI_ProgressHandler::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<AMI_ProgressHandler>::unchecked_narrow (
        _tao_objref);
}

AMI_ProgressHandler_ptr
AMI_ProgressHandler::_nil (void)
{
  return 0;
}

AMI_ProgressHandler_ptr
AMI_ProgressHandler::_duplicate (AMI_ProgressHandler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
AMI_ProgressHandler::_tao_release (AMI_ProgressHandler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
AMI_ProgressHandler::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/Messaging/ReplyHandler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:AMI_ProgressHandler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* AMI_ProgressHandler::_interface_repository_id (void) const
{
  return "IDL:AMI_ProgressHandler:1.0";
}

::CORBA::Boolean
AMI_ProgressHandler::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_AMI_ProgressHandler (
    ::CORBA::tk_objref,
    "IDL:AMI_ProgressHandler:1.0",
    "AMI_ProgressHandler");
  
::CORBA::TypeCode_ptr const _tc_AMI_ProgressHandler =
  &_tao_tc_AMI_ProgressHandler;

// TAO_IDL - Generated from
// be/be_visitor_sequence/any_op_cs.cpp:45


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const PeerSet &_tao_elem)
{
  TAO::Any_Dual_Impl_T<PeerSet>::insert_copy (
      _tao_any,
      PeerSet::_tao_any_destructor,
      _tc_PeerSet,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    PeerSet *_tao_elem)
{
  TAO::Any_Dual_Impl_T<PeerSet>::insert (
      _tao_any,
      PeerSet::_tao_any_destructor,
      _tc_PeerSet,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    PeerSet *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const PeerSet *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const PeerSet *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<PeerSet>::extract (
        _tao_any,
        PeerSet::_tao_any_destructor,
        _tc_PeerSet,
        _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Peer>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Peer_ptr _tao_elem)
{
  Peer_ptr _tao_objptr =
    Peer::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Peer_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Peer>::insert (
      _tao_any,
      Peer::_tao_any_destructor,
      _tc_Peer,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Peer_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Peer>::extract (
        _tao_any,
        Peer::_tao_any_destructor,
        _tc_Peer,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<AMI_PeerHandler>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    AMI_PeerHandler_ptr _tao_elem)
{
  AMI_PeerHandler_ptr _tao_objptr =
    AMI_PeerHandler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    AMI_PeerHandler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<AMI_PeerHandler>::insert (
      _tao_any,
      AMI_PeerHandler::_tao_any_destructor,
      _tc_AMI_PeerHandler,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    AMI_PeerHandler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<AMI_PeerHandler>::extract (
        _tao_any,
        AMI_PeerHandler::_tao_any_destructor,
        _tc_AMI_PeerHandler,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Progress>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Progress_ptr _tao_elem)
{
  Progress_ptr _tao_objptr =
    Progress::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Progress_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Progress>::insert (
      _tao_any,
      Progress::_tao_any_destructor,
      _tc_Progress,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Progress_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Progress>::extract (
        _tao_any,
        Progress::_tao_any_destructor,
        _tc_Progress,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<AMI_ProgressHandler>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    AMI_ProgressHandler_ptr _tao_elem)
{
  AMI_ProgressHandler_ptr _tao_objptr =
    AMI_ProgressHandler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    AMI_ProgressHandler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<AMI_ProgressHandler>::insert (
      _tao_any,
      AMI_ProgressHandler::_tao_any_destructor,
      _tc_AMI_ProgressHandler,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    AMI_ProgressHandler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<AMI_ProgressHandler>::extract (
        _tao_any,
        AMI_ProgressHandler::_tao_any_destructor,
        _tc_AMI_ProgressHandler,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_sequence/cdr_op_cs.cpp:93
#if !defined _TAO_CDR_OP_PeerSet_CPP_
#define _TAO_CDR_OP_PeerSet_CPP_

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const PeerSet &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    PeerSet &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* _TAO_CDR_OP_PeerSet_CPP_ */

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Peer_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Peer_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Peer RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const AMI_PeerHandler_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    AMI_PeerHandler_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::AMI_PeerHandler RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Progress_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Progress_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Progress RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const AMI_ProgressHandler_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    AMI_ProgressHandler_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::AMI_ProgressHandler RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



