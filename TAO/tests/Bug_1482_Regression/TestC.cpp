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


#include "TestC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Messaging/Asynch_Invocation_Adapter.h"
#include "tao/Messaging/ExceptionHolder_i.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "ace/OS_NS_string.h"
#include "ace/Auto_Ptr.h"

#if !defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::Hello.

Test::Hello_ptr
TAO::Objref_Traits<Test::Hello>::duplicate (
    Test::Hello_ptr p)
{
  return Test::Hello::_duplicate (p);
}

void
TAO::Objref_Traits<Test::Hello>::release (
    Test::Hello_ptr p)
{
  ::CORBA::release (p);
}

Test::Hello_ptr
TAO::Objref_Traits<Test::Hello>::nil (void)
{
  return Test::Hello::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::Hello>::marshal (
    const Test::Hello_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::ULong
Test::Hello::next_prime (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::ULong>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "next_prime",
      10,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/ami_cs.cpp:55

void
Test::Hello::sendc_next_prime (
  ::Test::AMI_HelloHandler_ptr ami_handler)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }



  TAO::Argument ** _the_tao_operation_signature = 0;

  TAO::Asynch_Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      0,
      "next_prime",
      10,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY
    );

  _tao_call.invoke (
      ami_handler,
      &Test::AMI_HelloHandler::next_prime_reply_stub
    );
}

Test::Hello::Hello (void)
{
}

Test::Hello::~Hello (void)
{
}

void
Test::Hello::_tao_any_destructor (void *_tao_void_pointer)
{
  Hello *_tao_tmp_pointer =
    static_cast<Hello *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Test::Hello_ptr
Test::Hello::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Hello>::narrow (
        _tao_objref,
        "IDL:Test/Hello:1.0");
}

Test::Hello_ptr
Test::Hello::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Hello>::unchecked_narrow (
        _tao_objref);
}

Test::Hello_ptr
Test::Hello::_nil (void)
{
  return 0;
}

Test::Hello_ptr
Test::Hello::_duplicate (Hello_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::Hello::_tao_release (Hello_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::Hello::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/Hello:1.0"
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

const char* Test::Hello::_interface_repository_id (void) const
{
  return "IDL:Test/Hello:1.0";
}

::CORBA::Boolean
Test::Hello::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Test_Hello (
    ::CORBA::tk_objref,
    "IDL:Test/Hello:1.0",
    "Hello");


namespace Test
{
  ::CORBA::TypeCode_ptr const _tc_Hello =
    &_tao_tc_Test_Hello;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/value_typecode.cpp:65

static TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_fields_Test_AMH_HelloExceptionHolder = 0;
static TAO::TypeCode::Value<char const *,
                     ::CORBA::TypeCode_ptr const *,
                     TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const *,
                     TAO::Null_RefCount_Policy>
  _tao_tc_Test_AMH_HelloExceptionHolder (
    ::CORBA::tk_value,
    "IDL:Test/AMH_HelloExceptionHolder:1.0",
    "AMH_HelloExceptionHolder",
    ::CORBA::VM_NONE,
    &::CORBA::_tc_null,
    _tao_fields_Test_AMH_HelloExceptionHolder,
    0);


namespace Test
{
  ::CORBA::TypeCode_ptr const _tc_AMH_HelloExceptionHolder =
    &_tao_tc_Test_AMH_HelloExceptionHolder;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_cs.cpp:53

void
TAO::Value_Traits<Test::AMH_HelloExceptionHolder>::add_ref (
    Test::AMH_HelloExceptionHolder * p)
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<Test::AMH_HelloExceptionHolder>::remove_ref (
    Test::AMH_HelloExceptionHolder * p)
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<Test::AMH_HelloExceptionHolder>::release (
    Test::AMH_HelloExceptionHolder * p)
{
  ::CORBA::remove_ref (p);
}

Test::AMH_HelloExceptionHolder *
Test::AMH_HelloExceptionHolder::_downcast ( ::CORBA::ValueBase *v)
{
  return dynamic_cast< ::Test::AMH_HelloExceptionHolder * > (v);
}

const char *
Test::AMH_HelloExceptionHolder::_tao_obv_repository_id (void) const
{
  return this->_tao_obv_static_repository_id ();
}

void
Test::AMH_HelloExceptionHolder::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

void
Test::AMH_HelloExceptionHolder::_tao_any_destructor (void *_tao_void_pointer)
{
  AMH_HelloExceptionHolder *_tao_tmp_pointer =
    static_cast<AMH_HelloExceptionHolder *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr Test::AMH_HelloExceptionHolder::_tao_type (void) const
{
  return ::Test::_tc_AMH_HelloExceptionHolder;
}

Test::AMH_HelloExceptionHolder::~AMH_HelloExceptionHolder (void)
{}

::CORBA::ValueBase *
Test::AMH_HelloExceptionHolder::_copy_value (void)
{
  ::CORBA::ValueBase *ret_val = 0;
  ACE_NEW_THROW_EX (
    ret_val,
    AMH_HelloExceptionHolder (),
    ::CORBA::NO_MEMORY ()
  );
  return ret_val;
}

::CORBA::Boolean
Test::AMH_HelloExceptionHolder::_tao_marshal_v (TAO_OutputCDR &) const
{
  return true;
}

::CORBA::Boolean
Test::AMH_HelloExceptionHolder::_tao_unmarshal_v (TAO_InputCDR &)
{
  return true;
}

::CORBA::Boolean
Test::AMH_HelloExceptionHolder::_tao_match_formal_type (ptrdiff_t ) const
{
  return false;
}

::CORBA::Boolean
Test::AMH_HelloExceptionHolder::_tao_marshal__Test_AMH_HelloExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo&) const
{
  return true;
}

::CORBA::Boolean
Test::AMH_HelloExceptionHolder::_tao_unmarshal__Test_AMH_HelloExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo&)
{
  return true;
}

::CORBA::Boolean
Test::AMH_HelloExceptionHolder::_tao_unmarshal (
    TAO_InputCDR &strm,
    AMH_HelloExceptionHolder *&new_object
  )
{
  ::CORBA::ValueBase *base = 0;
  ::CORBA::Boolean is_indirected = false;
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean const retval =
    ::CORBA::ValueBase::_tao_unmarshal_pre (
        strm,
        base,
        AMH_HelloExceptionHolder::_tao_obv_static_repository_id (),
        is_null_object,
        is_indirected
      );

  ::CORBA::ValueBase_var owner (base);

  if (!retval)
    return false;

  if (is_null_object)
    return true;

  if (!is_indirected && !base->_tao_unmarshal_v (strm))
    return false;

  // Now base must point to the unmarshaled object.
  // Align the pointer to the right subobject.
  new_object = AMH_HelloExceptionHolder::_downcast (base);
  if (0 == new_object)
    return false;

  if (is_indirected)
    new_object->_add_ref ();

  owner._retn ();
  return true;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_cs.cpp:421

void
Test::AMH_HelloExceptionHolder::raise_next_prime (void)
{
auto_ptr< ::CORBA::Exception> safety (this->exception);
this->exception->_raise ();
}


// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_cs.cpp:421

void
Test::AMH_HelloExceptionHolder::raise_sendc_next_prime (void)
{
auto_ptr< ::CORBA::Exception> safety (this->exception);
this->exception->_raise ();
}


// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::AMH_HelloResponseHandler.

Test::AMH_HelloResponseHandler_ptr
TAO::Objref_Traits<Test::AMH_HelloResponseHandler>::duplicate (
    Test::AMH_HelloResponseHandler_ptr p)
{
  return Test::AMH_HelloResponseHandler::_duplicate (p);
}

void
TAO::Objref_Traits<Test::AMH_HelloResponseHandler>::release (
    Test::AMH_HelloResponseHandler_ptr p)
{
  ::CORBA::release (p);
}

Test::AMH_HelloResponseHandler_ptr
TAO::Objref_Traits<Test::AMH_HelloResponseHandler>::nil (void)
{
  return Test::AMH_HelloResponseHandler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::AMH_HelloResponseHandler>::marshal (
    const Test::AMH_HelloResponseHandler_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

Test::AMH_HelloResponseHandler::AMH_HelloResponseHandler (void)
{}

Test::AMH_HelloResponseHandler::~AMH_HelloResponseHandler (void)
{
}

void
Test::AMH_HelloResponseHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMH_HelloResponseHandler *_tao_tmp_pointer =
    static_cast<AMH_HelloResponseHandler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Test::AMH_HelloResponseHandler_ptr
Test::AMH_HelloResponseHandler::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AMH_HelloResponseHandler::_duplicate (
      dynamic_cast<AMH_HelloResponseHandler_ptr> (_tao_objref)
    );
}

Test::AMH_HelloResponseHandler_ptr
Test::AMH_HelloResponseHandler::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AMH_HelloResponseHandler::_duplicate (
      dynamic_cast<AMH_HelloResponseHandler_ptr> (_tao_objref)
    );
}

Test::AMH_HelloResponseHandler_ptr
Test::AMH_HelloResponseHandler::_nil (void)
{
  return 0;
}

Test::AMH_HelloResponseHandler_ptr
Test::AMH_HelloResponseHandler::_duplicate (AMH_HelloResponseHandler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::AMH_HelloResponseHandler::_tao_release (AMH_HelloResponseHandler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::AMH_HelloResponseHandler::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Test/AMH_HelloResponseHandler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
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
      return false;
    }
}

const char* Test::AMH_HelloResponseHandler::_interface_repository_id (void) const
{
  return "IDL:Test/AMH_HelloResponseHandler:1.0";
}

::CORBA::Boolean
Test::AMH_HelloResponseHandler::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Test_AMH_HelloResponseHandler (
    ::CORBA::tk_local_interface,
    "IDL:Test/AMH_HelloResponseHandler:1.0",
    "AMH_HelloResponseHandler");


namespace Test
{
  ::CORBA::TypeCode_ptr const _tc_AMH_HelloResponseHandler =
    &_tao_tc_Test_AMH_HelloResponseHandler;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Test::AMI_HelloHandler.

Test::AMI_HelloHandler_ptr
TAO::Objref_Traits<Test::AMI_HelloHandler>::duplicate (
    Test::AMI_HelloHandler_ptr p)
{
  return Test::AMI_HelloHandler::_duplicate (p);
}

void
TAO::Objref_Traits<Test::AMI_HelloHandler>::release (
    Test::AMI_HelloHandler_ptr p)
{
  ::CORBA::release (p);
}

Test::AMI_HelloHandler_ptr
TAO::Objref_Traits<Test::AMI_HelloHandler>::nil (void)
{
  return Test::AMI_HelloHandler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Test::AMI_HelloHandler>::marshal (
    const Test::AMI_HelloHandler_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Test::AMI_HelloHandler::next_prime (
  ::CORBA::ULong ami_return_val)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::ULong>::in_arg_val _tao_ami_return_val (ami_return_val);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_ami_return_val
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "next_prime",
      10,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

void
Test::AMI_HelloHandler::next_prime_reply_stub (
  TAO_InputCDR &_tao_in,
  ::Messaging::ReplyHandler_ptr _tao_reply_handler,
  ::CORBA::ULong reply_status)
{
  // Retrieve Reply Handler object.
  Test::AMI_HelloHandler_var _tao_reply_handler_object =
    Test::AMI_HelloHandler::_narrow (_tao_reply_handler);

  // Exception handling
  switch (reply_status)
  {
    case TAO_AMI_REPLY_OK:
    {

      ::CORBA::ULong ami_return_val;      // Demarshall all the arguments.
      if (!(

            (_tao_in >> ami_return_val)
         ))
        throw ::CORBA::MARSHAL ();

      // Invoke the call back method.
      _tao_reply_handler_object->next_prime (

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
      _tao_reply_handler_object->next_prime_excep (
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
Test::AMI_HelloHandler::next_prime_excep (
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
      "next_prime_excep",
      16,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

Test::AMI_HelloHandler::AMI_HelloHandler (void)
{
}

Test::AMI_HelloHandler::~AMI_HelloHandler (void)
{
}

void
Test::AMI_HelloHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMI_HelloHandler *_tao_tmp_pointer =
    static_cast<AMI_HelloHandler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Test::AMI_HelloHandler_ptr
Test::AMI_HelloHandler::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<AMI_HelloHandler>::narrow (
        _tao_objref,
        "IDL:Test/AMI_HelloHandler:1.0");
}

Test::AMI_HelloHandler_ptr
Test::AMI_HelloHandler::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<AMI_HelloHandler>::unchecked_narrow (
        _tao_objref);
}

Test::AMI_HelloHandler_ptr
Test::AMI_HelloHandler::_nil (void)
{
  return 0;
}

Test::AMI_HelloHandler_ptr
Test::AMI_HelloHandler::_duplicate (AMI_HelloHandler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Test::AMI_HelloHandler::_tao_release (AMI_HelloHandler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Test::AMI_HelloHandler::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/Messaging/ReplyHandler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Test/AMI_HelloHandler:1.0"
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

const char* Test::AMI_HelloHandler::_interface_repository_id (void) const
{
  return "IDL:Test/AMI_HelloHandler:1.0";
}

::CORBA::Boolean
Test::AMI_HelloHandler::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Test_AMI_HelloHandler (
    ::CORBA::tk_objref,
    "IDL:Test/AMI_HelloHandler:1.0",
    "AMI_HelloHandler");


namespace Test
{
  ::CORBA::TypeCode_ptr const _tc_AMI_HelloHandler =
    &_tao_tc_Test_AMI_HelloHandler;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_obv_cs.cpp:44

OBV_Test::AMH_HelloExceptionHolder::AMH_HelloExceptionHolder (void)
: require_truncation_ (false)
{}

OBV_Test::AMH_HelloExceptionHolder::~AMH_HelloExceptionHolder (void)
{}

::CORBA::Boolean
OBV_Test::AMH_HelloExceptionHolder::_tao_marshal__Test_AMH_HelloExceptionHolder (TAO_OutputCDR &strm, TAO_ChunkInfo& ci) const
{
  return _tao_marshal_state (strm, ci);
}

::CORBA::Boolean
OBV_Test::AMH_HelloExceptionHolder::_tao_unmarshal__Test_AMH_HelloExceptionHolder (TAO_InputCDR &strm, TAO_ChunkInfo& ci)
{
  return _tao_unmarshal_state (strm, ci);
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Test::Hello>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Hello_ptr _tao_elem)
  {
    Hello_ptr _tao_objptr =
      Hello::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Hello_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<Hello>::insert (
        _tao_any,
        Hello::_tao_any_destructor,
        _tc_Hello,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      Hello_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<Hello>::extract (
          _tao_any,
          Hello::_tao_any_destructor,
          _tc_Hello,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test::Hello_ptr _tao_elem)
{
  Test::Hello_ptr _tao_objptr =
    Test::Hello::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test::Hello_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Test::Hello>::insert (
      _tao_any,
      Test::Hello::_tao_any_destructor,
      Test::_tc_Hello,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Test::Hello_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Test::Hello>::extract (
        _tao_any,
        Test::Hello::_tao_any_destructor,
        Test::_tc_Hello,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_valuetype/any_op_cs.cpp:45
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Test::AMH_HelloExceptionHolder>::to_value (
      ::CORBA::ValueBase *&_tao_elem
    ) const
  {
    ::CORBA::add_ref (this->value_);
    _tao_elem = this->value_;
    return true;
  }
}


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{
  // Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMH_HelloExceptionHolder *_tao_elem
    )
  {
    #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
      AMH_HelloExceptionHolder *_tao_copy =
        _tao_elem ?
          AMH_HelloExceptionHolder::_downcast (_tao_elem->_copy_value ())
          : 0;
      _tao_any <<= &_tao_copy;
    #else
      ::CORBA::add_ref (_tao_elem);
      _tao_any <<= &_tao_elem;
    #endif
  }

  // Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMH_HelloExceptionHolder **_tao_elem
    )
  {
    TAO::Any_Impl_T<AMH_HelloExceptionHolder>::insert (
        _tao_any,
        AMH_HelloExceptionHolder::_tao_any_destructor,
        _tc_AMH_HelloExceptionHolder,
        *_tao_elem
      );
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      AMH_HelloExceptionHolder *&_tao_elem
    )
  {
    return
      TAO::Any_Impl_T<AMH_HelloExceptionHolder>::extract (
          _tao_any,
          AMH_HelloExceptionHolder::_tao_any_destructor,
          _tc_AMH_HelloExceptionHolder,
          _tao_elem
        );
  }


}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test::AMH_HelloExceptionHolder *_tao_elem
  )
{
  #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
    Test::AMH_HelloExceptionHolder *_tao_copy =
      _tao_elem ?
        Test::AMH_HelloExceptionHolder::_downcast (_tao_elem->_copy_value ())
        : 0;
    _tao_any <<= &_tao_copy;
  #else
    ::CORBA::add_ref (_tao_elem);
    _tao_any <<= &_tao_elem;
  #endif
}

// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test::AMH_HelloExceptionHolder **_tao_elem
  )
{
  TAO::Any_Impl_T<Test::AMH_HelloExceptionHolder>::insert (
      _tao_any,
      Test::AMH_HelloExceptionHolder::_tao_any_destructor,
      Test::_tc_AMH_HelloExceptionHolder,
      *_tao_elem
    );
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Test::AMH_HelloExceptionHolder *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<Test::AMH_HelloExceptionHolder>::extract (
        _tao_any,
        Test::AMH_HelloExceptionHolder::_tao_any_destructor,
        Test::_tc_AMH_HelloExceptionHolder,
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
  Any_Impl_T<Test::AMH_HelloResponseHandler>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<Test::AMH_HelloResponseHandler>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<Test::AMH_HelloResponseHandler>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMH_HelloResponseHandler_ptr _tao_elem)
  {
    AMH_HelloResponseHandler_ptr _tao_objptr =
      AMH_HelloResponseHandler::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMH_HelloResponseHandler_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<AMH_HelloResponseHandler>::insert (
        _tao_any,
        AMH_HelloResponseHandler::_tao_any_destructor,
        _tc_AMH_HelloResponseHandler,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      AMH_HelloResponseHandler_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<AMH_HelloResponseHandler>::extract (
          _tao_any,
          AMH_HelloResponseHandler::_tao_any_destructor,
          _tc_AMH_HelloResponseHandler,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test::AMH_HelloResponseHandler_ptr _tao_elem)
{
  Test::AMH_HelloResponseHandler_ptr _tao_objptr =
    Test::AMH_HelloResponseHandler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test::AMH_HelloResponseHandler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Test::AMH_HelloResponseHandler>::insert (
      _tao_any,
      Test::AMH_HelloResponseHandler::_tao_any_destructor,
      Test::_tc_AMH_HelloResponseHandler,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Test::AMH_HelloResponseHandler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Test::AMH_HelloResponseHandler>::extract (
        _tao_any,
        Test::AMH_HelloResponseHandler::_tao_any_destructor,
        Test::_tc_AMH_HelloResponseHandler,
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
  Any_Impl_T<Test::AMI_HelloHandler>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Test
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMI_HelloHandler_ptr _tao_elem)
  {
    AMI_HelloHandler_ptr _tao_objptr =
      AMI_HelloHandler::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMI_HelloHandler_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<AMI_HelloHandler>::insert (
        _tao_any,
        AMI_HelloHandler::_tao_any_destructor,
        _tc_AMI_HelloHandler,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      AMI_HelloHandler_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<AMI_HelloHandler>::extract (
          _tao_any,
          AMI_HelloHandler::_tao_any_destructor,
          _tc_AMI_HelloHandler,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test::AMI_HelloHandler_ptr _tao_elem)
{
  Test::AMI_HelloHandler_ptr _tao_objptr =
    Test::AMI_HelloHandler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Test::AMI_HelloHandler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Test::AMI_HelloHandler>::insert (
      _tao_any,
      Test::AMI_HelloHandler::_tao_any_destructor,
      Test::_tc_AMI_HelloHandler,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Test::AMI_HelloHandler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Test::AMI_HelloHandler>::extract (
        _tao_any,
        Test::AMI_HelloHandler::_tao_any_destructor,
        Test::_tc_AMI_HelloHandler,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::Hello_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::Hello_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test::Hello RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_valuetype.cpp:512

void
CORBA::add_ref (Test::AMH_HelloExceptionHolder * vt)
{
  if (vt != 0)
    {
      vt->_add_ref ();
    }
}

void
CORBA::remove_ref (Test::AMH_HelloExceptionHolder * vt)
{
  if (vt != 0)
    {
      vt->_remove_ref ();
    }
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/cdr_op_cs.cpp:60


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean
operator<< (
    TAO_OutputCDR &strm,
    const Test::AMH_HelloExceptionHolder *_tao_valuetype
  )
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuetype,
        reinterpret_cast<ptrdiff_t> (&Test::AMH_HelloExceptionHolder::_downcast)
      );
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    Test::AMH_HelloExceptionHolder *&_tao_valuetype
  )
{
  return Test::AMH_HelloExceptionHolder::_tao_unmarshal (strm, _tao_valuetype);
}


TAO_END_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be/be_visitor_valuetype/marshal_cs.cpp:33

::CORBA::Boolean
OBV_Test::AMH_HelloExceptionHolder::_tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo&) const
{
  return true;
}

::CORBA::Boolean
OBV_Test::AMH_HelloExceptionHolder::_tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo&)
{
  return true;
}

void
OBV_Test::AMH_HelloExceptionHolder::truncation_hook (void)
{
  this->require_truncation_ = true;
}



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Test::AMI_HelloHandler_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Test::AMI_HelloHandler_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Test::AMI_HelloHandler RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



