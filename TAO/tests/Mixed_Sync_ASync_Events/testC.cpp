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
#include "tao/AnyTypeCode/Enum_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
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
#include "tao/AnyTypeCode/Any_Basic_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "testC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_typecode/enum_typecode.cpp:29
static char const * const _tao_enumerators_A_RunMode[] =
  {
    "RM_SLAVE",
    "RM_MASTER"

  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_A_RunMode (
    "IDL:A/RunMode:1.0",
    "RunMode",
    _tao_enumerators_A_RunMode,
    2);


namespace A
{
  ::CORBA::TypeCode_ptr const _tc_RunMode =
    &_tao_tc_A_RunMode;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/enum_typecode.cpp:29
static char const * const _tao_enumerators_A_RequestMode[] =
  {
    "RQM_SYNCH",
    "RQM_ASYNCH"

  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_A_RequestMode (
    "IDL:A/RequestMode:1.0",
    "RequestMode",
    _tao_enumerators_A_RequestMode,
    2);


namespace A
{
  ::CORBA::TypeCode_ptr const _tc_RequestMode =
    &_tao_tc_A_RequestMode;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/enum_typecode.cpp:29
static char const * const _tao_enumerators_A_FollowUp[] =
  {
    "FU_TIMER",
    "FU_NOTIFICATION"

  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_A_FollowUp (
    "IDL:A/FollowUp:1.0",
    "FollowUp",
    _tao_enumerators_A_FollowUp,
    2);


namespace A
{
  ::CORBA::TypeCode_ptr const _tc_FollowUp =
    &_tao_tc_A_FollowUp;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for A::Test.

A::Test_ptr
TAO::Objref_Traits<A::Test>::duplicate (
    A::Test_ptr p)
{
  return A::Test::_duplicate (p);
}

void
TAO::Objref_Traits<A::Test>::release (
    A::Test_ptr p)
{
  ::CORBA::release (p);
}

A::Test_ptr
TAO::Objref_Traits<A::Test>::nil (void)
{
  return A::Test::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<A::Test>::marshal (
    const A::Test_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
A::Test::request (
  ::A::RequestMode mode,
  ::CORBA::ULong & counter,
  ::A::FollowUp_out follow_up)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::A::RequestMode>::in_arg_val _tao_mode (mode);
  TAO::Arg_Traits< ::CORBA::ULong>::inout_arg_val _tao_counter (counter);
  TAO::Arg_Traits< ::A::FollowUp>::out_arg_val _tao_follow_up (follow_up);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_mode,
      &_tao_counter,
      &_tao_follow_up
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      4,
      "request",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
A::Test::report (
  const char * msg)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_msg (msg);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_msg
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "report",
      6,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
A::Test::shutdown (
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
A::Test::sendc_request (
  ::A::AMI_TestHandler_ptr ami_handler,
  ::A::RequestMode mode,
  ::CORBA::ULong counter)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }



  TAO::Arg_Traits<void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::A::RequestMode>::in_arg_val _tao_mode (mode);
  TAO::Arg_Traits< ::CORBA::ULong>::in_arg_val _tao_counter (counter);

  TAO::Argument *_the_tao_operation_signature[] =
    {
      &_tao_retval,
      &_tao_mode,
      &_tao_counter
    };

  TAO::Asynch_Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "request",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
    );

  _tao_call.invoke (
      ami_handler,
      &A::AMI_TestHandler::request_reply_stub
    );
}

// TAO_IDL - Generated from
// be/be_visitor_operation/ami_cs.cpp:55

void
A::Test::sendc_report (
  ::A::AMI_TestHandler_ptr ami_handler,
  const char * msg)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }



  TAO::Arg_Traits<void>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_msg (msg);

  TAO::Argument *_the_tao_operation_signature[] =
    {
      &_tao_retval,
      &_tao_msg
    };

  TAO::Asynch_Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "report",
      6,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
    );

  _tao_call.invoke (
      ami_handler,
      &A::AMI_TestHandler::report_reply_stub
    );
}

A::Test::Test (void)
{
}

A::Test::~Test (void)
{
}

void
A::Test::_tao_any_destructor (void *_tao_void_pointer)
{
  Test *_tao_tmp_pointer =
    static_cast<Test *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

A::Test_ptr
A::Test::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Test>::narrow (
        _tao_objref,
        "IDL:A/Test:1.0");
}

A::Test_ptr
A::Test::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Test>::unchecked_narrow (
        _tao_objref);
}

A::Test_ptr
A::Test::_nil (void)
{
  return 0;
}

A::Test_ptr
A::Test::_duplicate (Test_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
A::Test::_tao_release (Test_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
A::Test::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:A/Test:1.0"
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

const char* A::Test::_interface_repository_id (void) const
{
  return "IDL:A/Test:1.0";
}

::CORBA::Boolean
A::Test::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_A_Test (
    ::CORBA::tk_objref,
    "IDL:A/Test:1.0",
    "Test");


namespace A
{
  ::CORBA::TypeCode_ptr const _tc_Test =
    &_tao_tc_A_Test;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for A::AMI_TestHandler.

A::AMI_TestHandler_ptr
TAO::Objref_Traits<A::AMI_TestHandler>::duplicate (
    A::AMI_TestHandler_ptr p)
{
  return A::AMI_TestHandler::_duplicate (p);
}

void
TAO::Objref_Traits<A::AMI_TestHandler>::release (
    A::AMI_TestHandler_ptr p)
{
  ::CORBA::release (p);
}

A::AMI_TestHandler_ptr
TAO::Objref_Traits<A::AMI_TestHandler>::nil (void)
{
  return A::AMI_TestHandler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<A::AMI_TestHandler>::marshal (
    const A::AMI_TestHandler_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
A::AMI_TestHandler::request (
  ::CORBA::ULong counter,
  ::A::FollowUp follow_up)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::ULong>::in_arg_val _tao_counter (counter);
  TAO::Arg_Traits< ::A::FollowUp>::in_arg_val _tao_follow_up (follow_up);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_counter,
      &_tao_follow_up
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "request",
      7,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

void
A::AMI_TestHandler::request_reply_stub (
  TAO_InputCDR &_tao_in,
  ::Messaging::ReplyHandler_ptr _tao_reply_handler,
  ::CORBA::ULong reply_status)
{
  // Retrieve Reply Handler object.
  A::AMI_TestHandler_var _tao_reply_handler_object =
    A::AMI_TestHandler::_narrow (_tao_reply_handler);

  // Exception handling
  switch (reply_status)
  {
    case TAO_AMI_REPLY_OK:
    {

      ::CORBA::ULong counter;
      ::A::FollowUp follow_up;      // Demarshall all the arguments.
      if (!(

            (_tao_in >> counter) &&
            (_tao_in >> follow_up)
         ))
        throw ::CORBA::MARSHAL ();

      // Invoke the call back method.
      _tao_reply_handler_object->request (

          counter,

          follow_up
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
A::AMI_TestHandler::request_excep (
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

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
A::AMI_TestHandler::report (
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
      "report",
      6,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);
}

void
A::AMI_TestHandler::report_reply_stub (
  TAO_InputCDR &_tao_in,
  ::Messaging::ReplyHandler_ptr _tao_reply_handler,
  ::CORBA::ULong reply_status)
{
  // Retrieve Reply Handler object.
  A::AMI_TestHandler_var _tao_reply_handler_object =
    A::AMI_TestHandler::_narrow (_tao_reply_handler);

  // Exception handling
  switch (reply_status)
  {
    case TAO_AMI_REPLY_OK:
    {
      // Demarshall all the arguments.
      // Invoke the call back method.
      _tao_reply_handler_object->report (

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
      _tao_reply_handler_object->report_excep (
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
A::AMI_TestHandler::report_excep (
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
      "report_excep",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

A::AMI_TestHandler::AMI_TestHandler (void)
{
}

A::AMI_TestHandler::~AMI_TestHandler (void)
{
}

void
A::AMI_TestHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMI_TestHandler *_tao_tmp_pointer =
    static_cast<AMI_TestHandler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

A::AMI_TestHandler_ptr
A::AMI_TestHandler::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<AMI_TestHandler>::narrow (
        _tao_objref,
        "IDL:A/AMI_TestHandler:1.0");
}

A::AMI_TestHandler_ptr
A::AMI_TestHandler::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<AMI_TestHandler>::unchecked_narrow (
        _tao_objref);
}

A::AMI_TestHandler_ptr
A::AMI_TestHandler::_nil (void)
{
  return 0;
}

A::AMI_TestHandler_ptr
A::AMI_TestHandler::_duplicate (AMI_TestHandler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
A::AMI_TestHandler::_tao_release (AMI_TestHandler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
A::AMI_TestHandler::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/Messaging/ReplyHandler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:A/AMI_TestHandler:1.0"
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

const char* A::AMI_TestHandler::_interface_repository_id (void) const
{
  return "IDL:A/AMI_TestHandler:1.0";
}

::CORBA::Boolean
A::AMI_TestHandler::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_A_AMI_TestHandler (
    ::CORBA::tk_objref,
    "IDL:A/AMI_TestHandler:1.0",
    "AMI_TestHandler");


namespace A
{
  ::CORBA::TypeCode_ptr const _tc_AMI_TestHandler =
    &_tao_tc_A_AMI_TestHandler;
}

// TAO_IDL - Generated from
// be/be_visitor_enum/any_op_cs.cpp:35

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace A
{
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::A::RunMode _tao_elem
    )
  {
    TAO::Any_Basic_Impl_T< ::A::RunMode>::insert (
        _tao_any,
        ::A::_tc_RunMode,
        _tao_elem
      );
  }

  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::A::RunMode &_tao_elem
    )
  {
    return
      TAO::Any_Basic_Impl_T< ::A::RunMode>::extract (
          _tao_any,
          ::A::_tc_RunMode,
          _tao_elem
        );
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    A::RunMode _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<A::RunMode>::insert (
      _tao_any,
      A::_tc_RunMode,
      _tao_elem
    );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    A::RunMode &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<A::RunMode>::extract (
        _tao_any,
        A::_tc_RunMode,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_enum/any_op_cs.cpp:35

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace A
{
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::A::RequestMode _tao_elem
    )
  {
    TAO::Any_Basic_Impl_T< ::A::RequestMode>::insert (
        _tao_any,
        ::A::_tc_RequestMode,
        _tao_elem
      );
  }

  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::A::RequestMode &_tao_elem
    )
  {
    return
      TAO::Any_Basic_Impl_T< ::A::RequestMode>::extract (
          _tao_any,
          ::A::_tc_RequestMode,
          _tao_elem
        );
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    A::RequestMode _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<A::RequestMode>::insert (
      _tao_any,
      A::_tc_RequestMode,
      _tao_elem
    );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    A::RequestMode &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<A::RequestMode>::extract (
        _tao_any,
        A::_tc_RequestMode,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_enum/any_op_cs.cpp:35

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace A
{
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::A::FollowUp _tao_elem
    )
  {
    TAO::Any_Basic_Impl_T< ::A::FollowUp>::insert (
        _tao_any,
        ::A::_tc_FollowUp,
        _tao_elem
      );
  }

  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::A::FollowUp &_tao_elem
    )
  {
    return
      TAO::Any_Basic_Impl_T< ::A::FollowUp>::extract (
          _tao_any,
          ::A::_tc_FollowUp,
          _tao_elem
        );
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void operator<<= (
    ::CORBA::Any &_tao_any,
    A::FollowUp _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<A::FollowUp>::insert (
      _tao_any,
      A::_tc_FollowUp,
      _tao_elem
    );
}

::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    A::FollowUp &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<A::FollowUp>::extract (
        _tao_any,
        A::_tc_FollowUp,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<A::Test>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace A
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Test_ptr _tao_elem)
  {
    Test_ptr _tao_objptr =
      Test::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Test_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<Test>::insert (
        _tao_any,
        Test::_tao_any_destructor,
        _tc_Test,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      Test_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<Test>::extract (
          _tao_any,
          Test::_tao_any_destructor,
          _tc_Test,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    A::Test_ptr _tao_elem)
{
  A::Test_ptr _tao_objptr =
    A::Test::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    A::Test_ptr *_tao_elem)
{
  TAO::Any_Impl_T<A::Test>::insert (
      _tao_any,
      A::Test::_tao_any_destructor,
      A::_tc_Test,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    A::Test_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<A::Test>::extract (
        _tao_any,
        A::Test::_tao_any_destructor,
        A::_tc_Test,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<A::AMI_TestHandler>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace A
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMI_TestHandler_ptr _tao_elem)
  {
    AMI_TestHandler_ptr _tao_objptr =
      AMI_TestHandler::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMI_TestHandler_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<AMI_TestHandler>::insert (
        _tao_any,
        AMI_TestHandler::_tao_any_destructor,
        _tc_AMI_TestHandler,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      AMI_TestHandler_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<AMI_TestHandler>::extract (
          _tao_any,
          AMI_TestHandler::_tao_any_destructor,
          _tc_AMI_TestHandler,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    A::AMI_TestHandler_ptr _tao_elem)
{
  A::AMI_TestHandler_ptr _tao_objptr =
    A::AMI_TestHandler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    A::AMI_TestHandler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<A::AMI_TestHandler>::insert (
      _tao_any,
      A::AMI_TestHandler::_tao_any_destructor,
      A::_tc_AMI_TestHandler,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    A::AMI_TestHandler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<A::AMI_TestHandler>::extract (
        _tao_any,
        A::AMI_TestHandler::_tao_any_destructor,
        A::_tc_AMI_TestHandler,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, A::RunMode _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, A::RunMode & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;

  if (_tao_success)
    {
      _tao_enumerator = static_cast<A::RunMode> (_tao_temp);
    }

  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, A::RequestMode _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, A::RequestMode & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;

  if (_tao_success)
    {
      _tao_enumerator = static_cast<A::RequestMode> (_tao_temp);
    }

  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_enum/cdr_op_cs.cpp:34


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, A::FollowUp _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, A::FollowUp & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;

  if (_tao_success)
    {
      _tao_enumerator = static_cast<A::FollowUp> (_tao_temp);
    }

  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const A::Test_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    A::Test_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::A::Test RHS_SCOPED_NAME;

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
    const A::AMI_TestHandler_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    A::AMI_TestHandler_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::A::AMI_TestHandler RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



