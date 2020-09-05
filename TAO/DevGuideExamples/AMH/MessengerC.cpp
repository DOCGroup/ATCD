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

#include "amh_pch.h"
#include "MessengerC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Value_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Value_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "ace/OS_NS_string.h"
#include "ace/Auto_Ptr.h"

#if !defined (__ACE_INLINE__)
#include "MessengerC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for DevGuide::Messenger.

DevGuide::Messenger_ptr
TAO::Objref_Traits<DevGuide::Messenger>::duplicate (
    DevGuide::Messenger_ptr p)
{
  return DevGuide::Messenger::_duplicate (p);
}

void
TAO::Objref_Traits<DevGuide::Messenger>::release (
    DevGuide::Messenger_ptr p)
{
  ::CORBA::release (p);
}

DevGuide::Messenger_ptr
TAO::Objref_Traits<DevGuide::Messenger>::nil (void)
{
  return DevGuide::Messenger::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<DevGuide::Messenger>::marshal (
    const DevGuide::Messenger_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Boolean
DevGuide::Messenger::send_message (
  const char * user_name,
  const char * subject,
  char *& message)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::ACE_InputCDR::to_boolean>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_user_name (user_name);
  TAO::Arg_Traits< char *>::in_arg_val _tao_subject (subject);
  TAO::Arg_Traits< char *>::inout_arg_val _tao_message (message);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_user_name,
      &_tao_subject,
      &_tao_message
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      4,
      "send_message",
      12,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

DevGuide::Messenger::Messenger (void)
{
}

DevGuide::Messenger::~Messenger (void)
{
}

void
DevGuide::Messenger::_tao_any_destructor (void *_tao_void_pointer)
{
  Messenger *_tao_tmp_pointer =
    static_cast<Messenger *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

DevGuide::Messenger_ptr
DevGuide::Messenger::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Messenger>::narrow (
        _tao_objref,
        "IDL:DevGuide/Messenger:1.0");
}

DevGuide::Messenger_ptr
DevGuide::Messenger::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<Messenger>::unchecked_narrow (
        _tao_objref);
}

DevGuide::Messenger_ptr
DevGuide::Messenger::_nil (void)
{
  return 0;
}

DevGuide::Messenger_ptr
DevGuide::Messenger::_duplicate (Messenger_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
DevGuide::Messenger::_tao_release (Messenger_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
DevGuide::Messenger::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DevGuide/Messenger:1.0"
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

const char* DevGuide::Messenger::_interface_repository_id (void) const
{
  return "IDL:DevGuide/Messenger:1.0";
}

::CORBA::Boolean
DevGuide::Messenger::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_DevGuide_Messenger (
    ::CORBA::tk_objref,
    "IDL:DevGuide/Messenger:1.0",
    "Messenger");


namespace DevGuide
{
  ::CORBA::TypeCode_ptr const _tc_Messenger =
    &_tao_tc_DevGuide_Messenger;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/value_typecode.cpp:65

static TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const * const _tao_fields_DevGuide_AMH_MessengerExceptionHolder = 0;
static TAO::TypeCode::Value<char const *,
                     ::CORBA::TypeCode_ptr const *,
                     TAO::TypeCode::Value_Field<char const *, ::CORBA::TypeCode_ptr const *> const *,
                     TAO::Null_RefCount_Policy>
  _tao_tc_DevGuide_AMH_MessengerExceptionHolder (
    ::CORBA::tk_value,
    "IDL:DevGuide/AMH_MessengerExceptionHolder:1.0",
    "AMH_MessengerExceptionHolder",
    ::CORBA::VM_NONE,
    &::CORBA::_tc_null,
    _tao_fields_DevGuide_AMH_MessengerExceptionHolder,
    0);


namespace DevGuide
{
  ::CORBA::TypeCode_ptr const _tc_AMH_MessengerExceptionHolder =
    &_tao_tc_DevGuide_AMH_MessengerExceptionHolder;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_cs.cpp:53

void
TAO::Value_Traits<DevGuide::AMH_MessengerExceptionHolder>::add_ref (
    DevGuide::AMH_MessengerExceptionHolder * p)
{
  ::CORBA::add_ref (p);
}

void
TAO::Value_Traits<DevGuide::AMH_MessengerExceptionHolder>::remove_ref (
    DevGuide::AMH_MessengerExceptionHolder * p)
{
  ::CORBA::remove_ref (p);
}

void
TAO::Value_Traits<DevGuide::AMH_MessengerExceptionHolder>::release (
    DevGuide::AMH_MessengerExceptionHolder * p)
{
  ::CORBA::remove_ref (p);
}

DevGuide::AMH_MessengerExceptionHolder *
DevGuide::AMH_MessengerExceptionHolder::_downcast ( ::CORBA::ValueBase *v)
{
  return dynamic_cast< ::DevGuide::AMH_MessengerExceptionHolder * > (v);
}

const char *
DevGuide::AMH_MessengerExceptionHolder::_tao_obv_repository_id (void) const
{
  return this->_tao_obv_static_repository_id ();
}

void
DevGuide::AMH_MessengerExceptionHolder::_tao_obv_truncatable_repo_ids (Repository_Id_List& ids) const
{
  ids.push_back (this->_tao_obv_static_repository_id ());
}

void
DevGuide::AMH_MessengerExceptionHolder::_tao_any_destructor (void *_tao_void_pointer)
{
  AMH_MessengerExceptionHolder *_tao_tmp_pointer =
    static_cast<AMH_MessengerExceptionHolder *> (_tao_void_pointer);
  ::CORBA::remove_ref (_tao_tmp_pointer);
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr DevGuide::AMH_MessengerExceptionHolder::_tao_type (void) const
{
  return ::DevGuide::_tc_AMH_MessengerExceptionHolder;
}

DevGuide::AMH_MessengerExceptionHolder::~AMH_MessengerExceptionHolder (void)
{}

::CORBA::ValueBase *
DevGuide::AMH_MessengerExceptionHolder::_copy_value (void)
{
  ::CORBA::ValueBase *ret_val = 0;
  ACE_NEW_THROW_EX (
    ret_val,
    AMH_MessengerExceptionHolder (),
    ::CORBA::NO_MEMORY ()
  );
  return ret_val;
}

::CORBA::Boolean
DevGuide::AMH_MessengerExceptionHolder::_tao_marshal_v (TAO_OutputCDR &) const
{
  return true;
}

::CORBA::Boolean
DevGuide::AMH_MessengerExceptionHolder::_tao_unmarshal_v (TAO_InputCDR &)
{
  return true;
}

::CORBA::Boolean
DevGuide::AMH_MessengerExceptionHolder::_tao_match_formal_type (ptrdiff_t ) const
{
  return false;
}

::CORBA::Boolean
DevGuide::AMH_MessengerExceptionHolder::_tao_marshal__DevGuide_AMH_MessengerExceptionHolder (TAO_OutputCDR &, TAO_ChunkInfo&) const
{
  return true;
}

::CORBA::Boolean
DevGuide::AMH_MessengerExceptionHolder::_tao_unmarshal__DevGuide_AMH_MessengerExceptionHolder (TAO_InputCDR &, TAO_ChunkInfo&)
{
  return true;
}

::CORBA::Boolean
DevGuide::AMH_MessengerExceptionHolder::_tao_unmarshal (
    TAO_InputCDR &strm,
    AMH_MessengerExceptionHolder *&new_object
  )
{
  ::CORBA::ValueBase *base = 0;
  ::CORBA::Boolean is_indirected = false;
  ::CORBA::Boolean is_null_object = false;
  ::CORBA::Boolean const retval =
    ::CORBA::ValueBase::_tao_unmarshal_pre (
        strm,
        base,
        AMH_MessengerExceptionHolder::_tao_obv_static_repository_id (),
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
  new_object = AMH_MessengerExceptionHolder::_downcast (base);
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
DevGuide::AMH_MessengerExceptionHolder::raise_send_message (void)
{
auto_ptr< ::CORBA::Exception> safety (this->exception);
this->exception->_raise ();
}


// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for DevGuide::AMH_MessengerResponseHandler.

DevGuide::AMH_MessengerResponseHandler_ptr
TAO::Objref_Traits<DevGuide::AMH_MessengerResponseHandler>::duplicate (
    DevGuide::AMH_MessengerResponseHandler_ptr p)
{
  return DevGuide::AMH_MessengerResponseHandler::_duplicate (p);
}

void
TAO::Objref_Traits<DevGuide::AMH_MessengerResponseHandler>::release (
    DevGuide::AMH_MessengerResponseHandler_ptr p)
{
  ::CORBA::release (p);
}

DevGuide::AMH_MessengerResponseHandler_ptr
TAO::Objref_Traits<DevGuide::AMH_MessengerResponseHandler>::nil (void)
{
  return DevGuide::AMH_MessengerResponseHandler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<DevGuide::AMH_MessengerResponseHandler>::marshal (
    const DevGuide::AMH_MessengerResponseHandler_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

DevGuide::AMH_MessengerResponseHandler::AMH_MessengerResponseHandler (void)
{}

DevGuide::AMH_MessengerResponseHandler::~AMH_MessengerResponseHandler (void)
{
}

void
DevGuide::AMH_MessengerResponseHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  AMH_MessengerResponseHandler *_tao_tmp_pointer =
    static_cast<AMH_MessengerResponseHandler *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

DevGuide::AMH_MessengerResponseHandler_ptr
DevGuide::AMH_MessengerResponseHandler::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AMH_MessengerResponseHandler::_duplicate (
      dynamic_cast<AMH_MessengerResponseHandler_ptr> (_tao_objref)
    );
}

DevGuide::AMH_MessengerResponseHandler_ptr
DevGuide::AMH_MessengerResponseHandler::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return AMH_MessengerResponseHandler::_duplicate (
      dynamic_cast<AMH_MessengerResponseHandler_ptr> (_tao_objref)
    );
}

DevGuide::AMH_MessengerResponseHandler_ptr
DevGuide::AMH_MessengerResponseHandler::_nil (void)
{
  return 0;
}

DevGuide::AMH_MessengerResponseHandler_ptr
DevGuide::AMH_MessengerResponseHandler::_duplicate (AMH_MessengerResponseHandler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
DevGuide::AMH_MessengerResponseHandler::_tao_release (AMH_MessengerResponseHandler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
DevGuide::AMH_MessengerResponseHandler::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DevGuide/AMH_MessengerResponseHandler:1.0"
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

const char* DevGuide::AMH_MessengerResponseHandler::_interface_repository_id (void) const
{
  return "IDL:DevGuide/AMH_MessengerResponseHandler:1.0";
}

::CORBA::Boolean
DevGuide::AMH_MessengerResponseHandler::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_DevGuide_AMH_MessengerResponseHandler (
    ::CORBA::tk_local_interface,
    "IDL:DevGuide/AMH_MessengerResponseHandler:1.0",
    "AMH_MessengerResponseHandler");


namespace DevGuide
{
  ::CORBA::TypeCode_ptr const _tc_AMH_MessengerResponseHandler =
    &_tao_tc_DevGuide_AMH_MessengerResponseHandler;
}

// TAO_IDL - Generated from
// be/be_visitor_valuetype/valuetype_obv_cs.cpp:44

OBV_DevGuide::AMH_MessengerExceptionHolder::AMH_MessengerExceptionHolder (void)
: require_truncation_ (false)
{}

OBV_DevGuide::AMH_MessengerExceptionHolder::~AMH_MessengerExceptionHolder (void)
{}

::CORBA::Boolean
OBV_DevGuide::AMH_MessengerExceptionHolder::_tao_marshal__DevGuide_AMH_MessengerExceptionHolder (TAO_OutputCDR &strm, TAO_ChunkInfo& ci) const
{
  return _tao_marshal_state (strm, ci);
}

::CORBA::Boolean
OBV_DevGuide::AMH_MessengerExceptionHolder::_tao_unmarshal__DevGuide_AMH_MessengerExceptionHolder (TAO_InputCDR &strm, TAO_ChunkInfo& ci)
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
  Any_Impl_T<DevGuide::Messenger>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DevGuide
{


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
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    DevGuide::Messenger_ptr _tao_elem)
{
  DevGuide::Messenger_ptr _tao_objptr =
    DevGuide::Messenger::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    DevGuide::Messenger_ptr *_tao_elem)
{
  TAO::Any_Impl_T<DevGuide::Messenger>::insert (
      _tao_any,
      DevGuide::Messenger::_tao_any_destructor,
      DevGuide::_tc_Messenger,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    DevGuide::Messenger_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<DevGuide::Messenger>::extract (
        _tao_any,
        DevGuide::Messenger::_tao_any_destructor,
        DevGuide::_tc_Messenger,
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
  Any_Impl_T<DevGuide::AMH_MessengerExceptionHolder>::to_value (
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

namespace DevGuide
{
  // Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMH_MessengerExceptionHolder *_tao_elem
    )
  {
    #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
      AMH_MessengerExceptionHolder *_tao_copy =
        _tao_elem ?
          AMH_MessengerExceptionHolder::_downcast (_tao_elem->_copy_value ())
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
      AMH_MessengerExceptionHolder **_tao_elem
    )
  {
    TAO::Any_Impl_T<AMH_MessengerExceptionHolder>::insert (
        _tao_any,
        AMH_MessengerExceptionHolder::_tao_any_destructor,
        _tc_AMH_MessengerExceptionHolder,
        *_tao_elem
      );
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      AMH_MessengerExceptionHolder *&_tao_elem
    )
  {
    return
      TAO::Any_Impl_T<AMH_MessengerExceptionHolder>::extract (
          _tao_any,
          AMH_MessengerExceptionHolder::_tao_any_destructor,
          _tc_AMH_MessengerExceptionHolder,
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
    DevGuide::AMH_MessengerExceptionHolder *_tao_elem
  )
{
  #ifdef TAO_VALUETYPE_COPYING_ANY_INSERTION_USES_COPY_VALUE
    DevGuide::AMH_MessengerExceptionHolder *_tao_copy =
      _tao_elem ?
        DevGuide::AMH_MessengerExceptionHolder::_downcast (_tao_elem->_copy_value ())
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
    DevGuide::AMH_MessengerExceptionHolder **_tao_elem
  )
{
  TAO::Any_Impl_T<DevGuide::AMH_MessengerExceptionHolder>::insert (
      _tao_any,
      DevGuide::AMH_MessengerExceptionHolder::_tao_any_destructor,
      DevGuide::_tc_AMH_MessengerExceptionHolder,
      *_tao_elem
    );
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    DevGuide::AMH_MessengerExceptionHolder *&_tao_elem
  )
{
  return
    TAO::Any_Impl_T<DevGuide::AMH_MessengerExceptionHolder>::extract (
        _tao_any,
        DevGuide::AMH_MessengerExceptionHolder::_tao_any_destructor,
        DevGuide::_tc_AMH_MessengerExceptionHolder,
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
  Any_Impl_T<DevGuide::AMH_MessengerResponseHandler>::to_object (
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
  Any_Impl_T<DevGuide::AMH_MessengerResponseHandler>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<DevGuide::AMH_MessengerResponseHandler>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DevGuide
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMH_MessengerResponseHandler_ptr _tao_elem)
  {
    AMH_MessengerResponseHandler_ptr _tao_objptr =
      AMH_MessengerResponseHandler::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      AMH_MessengerResponseHandler_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<AMH_MessengerResponseHandler>::insert (
        _tao_any,
        AMH_MessengerResponseHandler::_tao_any_destructor,
        _tc_AMH_MessengerResponseHandler,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      AMH_MessengerResponseHandler_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<AMH_MessengerResponseHandler>::extract (
          _tao_any,
          AMH_MessengerResponseHandler::_tao_any_destructor,
          _tc_AMH_MessengerResponseHandler,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    DevGuide::AMH_MessengerResponseHandler_ptr _tao_elem)
{
  DevGuide::AMH_MessengerResponseHandler_ptr _tao_objptr =
    DevGuide::AMH_MessengerResponseHandler::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    DevGuide::AMH_MessengerResponseHandler_ptr *_tao_elem)
{
  TAO::Any_Impl_T<DevGuide::AMH_MessengerResponseHandler>::insert (
      _tao_any,
      DevGuide::AMH_MessengerResponseHandler::_tao_any_destructor,
      DevGuide::_tc_AMH_MessengerResponseHandler,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    DevGuide::AMH_MessengerResponseHandler_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<DevGuide::AMH_MessengerResponseHandler>::extract (
        _tao_any,
        DevGuide::AMH_MessengerResponseHandler::_tao_any_destructor,
        DevGuide::_tc_AMH_MessengerResponseHandler,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_cs.cpp:51

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const DevGuide::Messenger_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    DevGuide::Messenger_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::DevGuide::Messenger RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_valuetype.cpp:512

void
CORBA::add_ref (DevGuide::AMH_MessengerExceptionHolder * vt)
{
  if (vt != 0)
    {
      vt->_add_ref ();
    }
}

void
CORBA::remove_ref (DevGuide::AMH_MessengerExceptionHolder * vt)
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
    const DevGuide::AMH_MessengerExceptionHolder *_tao_valuetype
  )
{
  return
    ::CORBA::ValueBase::_tao_marshal (
        strm,
        _tao_valuetype,
        reinterpret_cast<ptrdiff_t> (&DevGuide::AMH_MessengerExceptionHolder::_downcast)
      );
}

::CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    DevGuide::AMH_MessengerExceptionHolder *&_tao_valuetype
  )
{
  return DevGuide::AMH_MessengerExceptionHolder::_tao_unmarshal (strm, _tao_valuetype);
}


TAO_END_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be/be_visitor_valuetype/marshal_cs.cpp:33

::CORBA::Boolean
OBV_DevGuide::AMH_MessengerExceptionHolder::_tao_marshal_state (TAO_OutputCDR &, TAO_ChunkInfo&) const
{
  return true;
}

::CORBA::Boolean
OBV_DevGuide::AMH_MessengerExceptionHolder::_tao_unmarshal_state (TAO_InputCDR &, TAO_ChunkInfo&)
{
  return true;
}

void
OBV_DevGuide::AMH_MessengerExceptionHolder::truncation_hook (void)
{
  this->require_truncation_ = true;
}



