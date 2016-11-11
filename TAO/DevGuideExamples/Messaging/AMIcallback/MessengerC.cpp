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


#include "MessengerC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Messaging/Asynch_Invocation_Adapter.h"
#include "tao/Messaging/ExceptionHolder_i.h"
#include "tao/Valuetype/ValueFactory.h"
#include "tao/Object_T.h"
#include "tao/SystemException.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "MessengerC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_exception/exception_cs.cpp:98

MessengerUnableToSendMessage::MessengerUnableToSendMessage (void)
  : ::CORBA::UserException (
        "IDL:MessengerUnableToSendMessage:1.0",
        "MessengerUnableToSendMessage"
      )
{
}

MessengerUnableToSendMessage::~MessengerUnableToSendMessage (void)
{
}

MessengerUnableToSendMessage::MessengerUnableToSendMessage (const ::MessengerUnableToSendMessage &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

MessengerUnableToSendMessage&
MessengerUnableToSendMessage::operator= (const ::MessengerUnableToSendMessage &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

void MessengerUnableToSendMessage::_tao_any_destructor (void *_tao_void_pointer)
{
  MessengerUnableToSendMessage *_tao_tmp_pointer =
    static_cast<MessengerUnableToSendMessage *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

MessengerUnableToSendMessage *
MessengerUnableToSendMessage::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<MessengerUnableToSendMessage *> (_tao_excp);
}

const MessengerUnableToSendMessage *
MessengerUnableToSendMessage::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const MessengerUnableToSendMessage *> (_tao_excp);
}

::CORBA::Exception *MessengerUnableToSendMessage::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::MessengerUnableToSendMessage, 0);
  return retval;
}

::CORBA::Exception *
MessengerUnableToSendMessage::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::MessengerUnableToSendMessage (*this),
      0
    );
  return result;
}

void MessengerUnableToSendMessage::_raise (void) const
{
  throw *this;
}

void MessengerUnableToSendMessage::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void MessengerUnableToSendMessage::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr MessengerUnableToSendMessage::_tao_type (void) const
{
  return ::_tc_MessengerUnableToSendMessage;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const * const 
    _tao_fields_MessengerUnableToSendMessage = 0;
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_MessengerUnableToSendMessage (
  ::CORBA::tk_except,
  "IDL:MessengerUnableToSendMessage:1.0",
  "MessengerUnableToSendMessage",
  _tao_fields_MessengerUnableToSendMessage,
  0);

::CORBA::TypeCode_ptr const _tc_MessengerUnableToSendMessage =
  &_tao_tc_MessengerUnableToSendMessage;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Messenger.

Messenger_ptr
TAO::Objref_Traits<Messenger>::duplicate (
    Messenger_ptr p)
{
  return Messenger::_duplicate (p);
}

void
TAO::Objref_Traits<Messenger>::release (
    Messenger_ptr p)
{
  ::CORBA::release (p);
}

Messenger_ptr
TAO::Objref_Traits<Messenger>::nil (void)
{
  return Messenger::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Messenger>::marshal (
    const Messenger_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Boolean
Messenger::send_message (
  const char * user_name,
  const char * subject,
  char *& message,
  ::CORBA::Long_out time_sent)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< ::ACE_InputCDR::to_boolean>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_user_name (user_name);
  TAO::Arg_Traits< char *>::in_arg_val _tao_subject (subject);
  TAO::Arg_Traits< char *>::inout_arg_val _tao_message (message);
  TAO::Arg_Traits< ::CORBA::Long>::out_arg_val _tao_time_sent (time_sent);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_user_name,
      &_tao_subject,
      &_tao_message,
      &_tao_time_sent
    };

  static TAO::Exception_Data
  _tao_Messenger_send_message_exceptiondata [] = 
    {
      {
        "IDL:MessengerUnableToSendMessage:1.0",
        MessengerUnableToSendMessage::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , _tc_MessengerUnableToSendMessage
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      5,
      "send_message",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_Messenger_send_message_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/ami_cs.cpp:55

void
Messenger::sendc_send_message (
  ::AMI_MessengerHandler_ptr ami_handler,
  const char * user_name,
  const char * subject,
  const char * message)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  
  
  TAO::Arg_Traits<void>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_user_name (user_name);
  TAO::Arg_Traits< char *>::in_arg_val _tao_subject (subject);
  TAO::Arg_Traits< char *>::in_arg_val _tao_message (message);

  TAO::Argument *_the_tao_operation_signature[] =
    {
      &_tao_retval,
      &_tao_user_name,
      &_tao_subject,
      &_tao_message
    };

  TAO::Asynch_Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      4,
      "send_message",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
    );

  _tao_call.invoke (
      ami_handler,
      &AMI_MessengerHandler::send_message_reply_stub
    );
}

Messenger::Messenger (void)
{
}

Messenger::~Messenger (void)
{
}

void
Messenger::_tao_any_destructor (void *_tao_void_pointer)
{
  Messenger *_tao_tmp_pointer =
    static_cast<Messenger *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Messenger_ptr
Messenger::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Messenger>::narrow (
        _tao_objref,
        "IDL:Messenger:1.0");
}

Messenger_ptr
Messenger::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Messenger>::unchecked_narrow (
        _tao_objref);
}

Messenger_ptr
Messenger::_nil (void)
{
  return 0;
}

Messenger_ptr
Messenger::_duplicate (Messenger_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Messenger::_tao_release (Messenger_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Messenger::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Messenger:1.0"
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

const char* Messenger::_interface_repository_id (void) const
{
  return "IDL:Messenger:1.0";
}

::CORBA::Boolean
Messenger::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Messenger (
    ::CORBA::tk_objref,
    "IDL:Messenger:1.0",
    "Messenger");
  
::CORBA::TypeCode_ptr const _tc_Messenger =
  &_tao_tc_Messenger;

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for AMI_MessengerHandler.

AMI_MessengerHandler_ptr
TAO::Objref_Traits<AMI_MessengerHandler>::duplicate (
    AMI_MessengerHandler_ptr p)
{
  return AMI_MessengerHandler::_duplicate (p);
}

void
TAO::Objref_Traits<AMI_MessengerHandler>::release (
    AMI_MessengerHandler_ptr p)
{
  ::CORBA::release (p);
}

AMI_MessengerHandler_ptr
TAO::Objref_Traits<AMI_MessengerHandler>::nil (void)
{
  return AMI_MessengerHandler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<AMI_MessengerHandler>::marshal (
    const AMI_MessengerHandler_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
AMI_MessengerHandler::send_message (
  ::CORBA::Boolean ami_return_val,
  const char * message,
  ::CORBA::Long time_sent)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::ACE_InputCDR::to_boolean>::in_arg_val _tao_ami_return_val (ami_return_val);
  TAO::Arg_Traits< char *>::in_arg_val _tao_message (message);
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_time_sent (time_sent);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_ami_return_val,
      &_tao_message,
      &_tao_time_sent
    };

  static TAO::Exception_Data
  _tao_AMI_MessengerHandler_send_message_exceptiondata [] = 
    {
      {
        "IDL:MessengerUnableToSendMessage:1.0",
        MessengerUnableToSendMessage::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , _tc_MessengerUnableToSendMessage
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      4,
      "send_message",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_AMI_MessengerHandler_send_message_exceptiondata,
      1
    );
}

void
AMI_MessengerHandler::send_message_reply_stub (
  TAO_InputCDR &_tao_in,
  ::Messaging::ReplyHandler_ptr _tao_reply_handler,
  ::CORBA::ULong reply_status)
{
  // Retrieve Reply Handler object.
  AMI_MessengerHandler_var _tao_reply_handler_object =
    AMI_MessengerHandler::_narrow (_tao_reply_handler);

  // Exception handling
  switch (reply_status)
  {
    case TAO_AMI_REPLY_OK:
    {

      ::CORBA::Boolean ami_return_val;
      ::CORBA::String_var message;
      ::CORBA::Long time_sent;      // Demarshall all the arguments.
      if (!(

            (_tao_in >> ::ACE_InputCDR::to_boolean (ami_return_val)) &&
            (_tao_in >> message.out ()) &&
            (_tao_in >> time_sent)
         ))
        throw ::CORBA::MARSHAL ();
      
      // Invoke the call back method.
      _tao_reply_handler_object->send_message (
          
          ami_return_val,
          
          message.in (),
          
          time_sent
        );
      break;
    }
    case TAO_AMI_REPLY_USER_EXCEPTION:
    case TAO_AMI_REPLY_SYSTEM_EXCEPTION:
    {
      const ACE_Message_Block* cdr = _tao_in.start ();
      
      static TAO::Exception_Data exceptions_data [] =
      {
        {
          "IDL:MessengerUnableToSendMessage:1.0",
          MessengerUnableToSendMessage::_alloc
#if TAO_HAS_INTERCEPTORS == 1
          , _tc_MessengerUnableToSendMessage
#endif /* TAO_HAS_INTERCEPTORS */
        }
      };

      ::CORBA::ULong const exceptions_count = 1;

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
            exceptions_data,
            exceptions_count,
            _tao_in.char_translator (),
            _tao_in.wchar_translator ())
          );
        
      ::Messaging::ExceptionHolder_var exception_holder_var = exception_holder_ptr;
      _tao_reply_handler_object->send_message_excep (
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
AMI_MessengerHandler::send_message_excep (
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

  static TAO::Exception_Data
  _tao_AMI_MessengerHandler_send_message_excep_exceptiondata [] = 
    {
      {
        "IDL:MessengerUnableToSendMessage:1.0",
        MessengerUnableToSendMessage::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , _tc_MessengerUnableToSendMessage
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "send_message_excep",
      18,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
      
    );

  _tao_call.invoke (
      _tao_AMI_MessengerHandler_send_message_excep_exceptiondata,
      1
    );
}

AMI_MessengerHandler::AMI_MessengerHandler (void)
{
}

AMI_MessengerHandler::~AMI_MessengerHandler (void)
{
}

void
AMI_MessengerHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMI_MessengerHandler *_tao_tmp_pointer =
    static_cast<AMI_MessengerHandler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

AMI_MessengerHandler_ptr
AMI_MessengerHandler::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<AMI_MessengerHandler>::narrow (
        _tao_objref,
        "IDL:AMI_MessengerHandler:1.0");
}

AMI_MessengerHandler_ptr
AMI_MessengerHandler::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<AMI_MessengerHandler>::unchecked_narrow (
        _tao_objref);
}

AMI_MessengerHandler_ptr
AMI_MessengerHandler::_nil (void)
{
  return 0;
}

AMI_MessengerHandler_ptr
AMI_MessengerHandler::_duplicate (AMI_MessengerHandler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
AMI_MessengerHandler::_tao_release (AMI_MessengerHandler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
AMI_MessengerHandler::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/Messaging/ReplyHandler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:AMI_MessengerHandler:1.0"
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

const char* AMI_MessengerHandler::_interface_repository_id (void) const
{
  return "IDL:AMI_MessengerHandler:1.0";
}

::CORBA::Boolean
AMI_MessengerHandler::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_AMI_MessengerHandler (
    ::CORBA::tk_objref,
    "IDL:AMI_MessengerHandler:1.0",
    "AMI_MessengerHandler");
  
::CORBA::TypeCode_ptr const _tc_AMI_MessengerHandler =
  &_tao_tc_AMI_MessengerHandler;

// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<MessengerUnableToSendMessage>::demarshal_value (TAO_InputCDR & cdr)
  {
    ::CORBA::String_var id;

    if (!(cdr >> id.out ()))
      {
        return false;
      }
    
    try
      {
        this->value_->_tao_decode (cdr);
      }
    catch (const ::CORBA::Exception &)
      {
        return false;
      }

    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const MessengerUnableToSendMessage &_tao_elem)
{
  TAO::Any_Dual_Impl_T<MessengerUnableToSendMessage>::insert_copy (
      _tao_any,
      MessengerUnableToSendMessage::_tao_any_destructor,
      _tc_MessengerUnableToSendMessage,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    MessengerUnableToSendMessage *_tao_elem)
{
  TAO::Any_Dual_Impl_T<MessengerUnableToSendMessage>::insert (
      _tao_any,
      MessengerUnableToSendMessage::_tao_any_destructor,
      _tc_MessengerUnableToSendMessage,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    MessengerUnableToSendMessage *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const MessengerUnableToSendMessage *&> (
      _tao_elem);
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const MessengerUnableToSendMessage *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<MessengerUnableToSendMessage>::extract (
        _tao_any,
        MessengerUnableToSendMessage::_tao_any_destructor,
        _tc_MessengerUnableToSendMessage,
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
  Any_Impl_T<Messenger>::to_object (
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
    Messenger_ptr _tao_elem)
{
  Messenger_ptr _tao_objptr =
    Messenger::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Messenger_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Messenger>::insert (
      _tao_any,
      Messenger::_tao_any_destructor,
      _tc_Messenger,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Messenger_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Messenger>::extract (
        _tao_any,
        Messenger::_tao_any_destructor,
        _tc_Messenger,
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
  Any_Impl_T<AMI_MessengerHandler>::to_object (
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
    AMI_MessengerHandler_ptr _tao_elem)
{
  AMI_MessengerHandler_ptr _tao_objptr =
    AMI_MessengerHandler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    AMI_MessengerHandler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<AMI_MessengerHandler>::insert (
      _tao_any,
      AMI_MessengerHandler::_tao_any_destructor,
      _tc_AMI_MessengerHandler,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    AMI_MessengerHandler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<AMI_MessengerHandler>::extract (
        _tao_any,
        AMI_MessengerHandler::_tao_any_destructor,
        _tc_AMI_MessengerHandler,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const MessengerUnableToSendMessage &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    MessengerUnableToSendMessage&
  )
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messenger_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messenger_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::Messenger RHS_SCOPED_NAME;

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
    const AMI_MessengerHandler_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    AMI_MessengerHandler_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::AMI_MessengerHandler RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



