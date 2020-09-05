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


#include "DistributorC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/SystemException.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "DistributorC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_exception/exception_cs.cpp:98

Stock::Invalid_Subscription::Invalid_Subscription (void)
  : ::CORBA::UserException (
        "IDL:Stock/Invalid_Subscription:1.0",
        "Invalid_Subscription"
      )
{
}

Stock::Invalid_Subscription::~Invalid_Subscription (void)
{
}

Stock::Invalid_Subscription::Invalid_Subscription (const ::Stock::Invalid_Subscription &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

Stock::Invalid_Subscription&
Stock::Invalid_Subscription::operator= (const ::Stock::Invalid_Subscription &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

void Stock::Invalid_Subscription::_tao_any_destructor (void *_tao_void_pointer)
{
  Invalid_Subscription *_tao_tmp_pointer =
    static_cast<Invalid_Subscription *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

Stock::Invalid_Subscription *
Stock::Invalid_Subscription::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<Invalid_Subscription *> (_tao_excp);
}

const Stock::Invalid_Subscription *
Stock::Invalid_Subscription::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const Invalid_Subscription *> (_tao_excp);
}

::CORBA::Exception *Stock::Invalid_Subscription::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::Stock::Invalid_Subscription, 0);
  return retval;
}

::CORBA::Exception *
Stock::Invalid_Subscription::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::Stock::Invalid_Subscription (*this),
      0
    );
  return result;
}

void Stock::Invalid_Subscription::_raise (void) const
{
  throw *this;
}

void Stock::Invalid_Subscription::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void Stock::Invalid_Subscription::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr Stock::Invalid_Subscription::_tao_type (void) const
{
  return ::Stock::_tc_Invalid_Subscription;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const * const
    _tao_fields_Stock_Invalid_Subscription = 0;

static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_Stock_Invalid_Subscription (
  ::CORBA::tk_except,
  "IDL:Stock/Invalid_Subscription:1.0",
  "Invalid_Subscription",
  _tao_fields_Stock_Invalid_Subscription,
  0);


namespace Stock
{
  ::CORBA::TypeCode_ptr const _tc_Invalid_Subscription =
    &_tao_tc_Stock_Invalid_Subscription;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Stock::StockDistributor.

Stock::StockDistributor_ptr
TAO::Objref_Traits<Stock::StockDistributor>::duplicate (
    Stock::StockDistributor_ptr p)
{
  return Stock::StockDistributor::_duplicate (p);
}

void
TAO::Objref_Traits<Stock::StockDistributor>::release (
    Stock::StockDistributor_ptr p)
{
  ::CORBA::release (p);
}

Stock::StockDistributor_ptr
TAO::Objref_Traits<Stock::StockDistributor>::nil (void)
{
  return Stock::StockDistributor::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Stock::StockDistributor>::marshal (
    const Stock::StockDistributor_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::Stock::Cookie *
Stock::StockDistributor::subscribe_notifier (
  ::Stock::StockNameConsumer_ptr c,
  ::RTCORBA::Priority priority)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::Stock::Cookie>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Stock::StockNameConsumer>::in_arg_val _tao_c (c);
  TAO::Arg_Traits< ::CORBA::Short>::in_arg_val _tao_priority (priority);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_c,
      &_tao_priority
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "subscribe_notifier",
      18,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::Stock::StockNameConsumer_ptr
Stock::StockDistributor::unsubscribe_notifier (
  ::Stock::Cookie * ck)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::Stock::StockNameConsumer>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Stock::Cookie>::in_arg_val _tao_ck (ck);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_ck
    };

  static TAO::Exception_Data
  _tao_Stock_StockDistributor_unsubscribe_notifier_exceptiondata [] =
    {
      {
        "IDL:Stock/Invalid_Subscription:1.0",
        Stock::Invalid_Subscription::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , Stock::_tc_Invalid_Subscription
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "unsubscribe_notifier",
      20,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (
      _tao_Stock_StockDistributor_unsubscribe_notifier_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::Stock::StockQuoter_ptr
Stock::StockDistributor::provide_quoter_info (
  ::Stock::Cookie * ck)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::Stock::StockQuoter>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Stock::Cookie>::in_arg_val _tao_ck (ck);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_ck
    };

  static TAO::Exception_Data
  _tao_Stock_StockDistributor_provide_quoter_info_exceptiondata [] =
    {
      {
        "IDL:Stock/Invalid_Subscription:1.0",
        Stock::Invalid_Subscription::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , Stock::_tc_Invalid_Subscription
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "provide_quoter_info",
      19,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (
      _tao_Stock_StockDistributor_provide_quoter_info_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::CORBA::Long
Stock::StockDistributor::notification_rate (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::CORBA::Long>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "_get_notification_rate",
      22,
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
// be/be_visitor_operation/operation_cs.cpp:88

void
Stock::StockDistributor::notification_rate (
  ::CORBA::Long notification_rate)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::CORBA::Long>::in_arg_val _tao_notification_rate (notification_rate);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_notification_rate
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "_set_notification_rate",
      22,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY

    );

  _tao_call.invoke (0, 0);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

void
Stock::StockDistributor::shutdown (
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

Stock::StockDistributor::StockDistributor (void)
{
}

Stock::StockDistributor::~StockDistributor (void)
{
}

void
Stock::StockDistributor::_tao_any_destructor (void *_tao_void_pointer)
{
  StockDistributor *_tao_tmp_pointer =
    static_cast<StockDistributor *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Stock::StockDistributor_ptr
Stock::StockDistributor::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<StockDistributor>::narrow (
        _tao_objref,
        "IDL:Stock/StockDistributor:1.0");
}

Stock::StockDistributor_ptr
Stock::StockDistributor::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<StockDistributor>::unchecked_narrow (
        _tao_objref);
}

Stock::StockDistributor_ptr
Stock::StockDistributor::_nil (void)
{
  return 0;
}

Stock::StockDistributor_ptr
Stock::StockDistributor::_duplicate (StockDistributor_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Stock::StockDistributor::_tao_release (StockDistributor_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Stock::StockDistributor::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Stock/Trigger:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Stock/StockDistributor:1.0"
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

const char* Stock::StockDistributor::_interface_repository_id (void) const
{
  return "IDL:Stock/StockDistributor:1.0";
}

::CORBA::Boolean
Stock::StockDistributor::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Stock_StockDistributor (
    ::CORBA::tk_objref,
    "IDL:Stock/StockDistributor:1.0",
    "StockDistributor");


namespace Stock
{
  ::CORBA::TypeCode_ptr const _tc_StockDistributor =
    &_tao_tc_Stock_StockDistributor;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:48

// Traits specializations for Stock::StockDistributorHome.

Stock::StockDistributorHome_ptr
TAO::Objref_Traits<Stock::StockDistributorHome>::duplicate (
    Stock::StockDistributorHome_ptr p)
{
  return Stock::StockDistributorHome::_duplicate (p);
}

void
TAO::Objref_Traits<Stock::StockDistributorHome>::release (
    Stock::StockDistributorHome_ptr p)
{
  ::CORBA::release (p);
}

Stock::StockDistributorHome_ptr
TAO::Objref_Traits<Stock::StockDistributorHome>::nil (void)
{
  return Stock::StockDistributorHome::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Stock::StockDistributorHome>::marshal (
    const Stock::StockDistributorHome_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from
// be/be_visitor_operation/operation_cs.cpp:88

::Stock::StockDistributor_ptr
Stock::StockDistributorHome::create (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }

  TAO::Arg_Traits< ::Stock::StockDistributor>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "create",
      6,
      TAO::TAO_CO_NONE | TAO::TAO_CO_THRU_POA_STRATEGY,
      TAO::TAO_TWOWAY_INVOCATION
      ,
      TAO::TAO_SYNCHRONOUS_INVOCATION,
      false
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

Stock::StockDistributorHome::StockDistributorHome (void)
{
}

Stock::StockDistributorHome::~StockDistributorHome (void)
{
}

void
Stock::StockDistributorHome::_tao_any_destructor (void *_tao_void_pointer)
{
  StockDistributorHome *_tao_tmp_pointer =
    static_cast<StockDistributorHome *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

Stock::StockDistributorHome_ptr
Stock::StockDistributorHome::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<StockDistributorHome>::narrow (
        _tao_objref,
        "IDL:Stock/StockDistributorHome:1.0");
}

Stock::StockDistributorHome_ptr
Stock::StockDistributorHome::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<StockDistributorHome>::unchecked_narrow (
        _tao_objref);
}

Stock::StockDistributorHome_ptr
Stock::StockDistributorHome::_nil (void)
{
  return 0;
}

Stock::StockDistributorHome_ptr
Stock::StockDistributorHome::_duplicate (StockDistributorHome_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Stock::StockDistributorHome::_tao_release (StockDistributorHome_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Stock::StockDistributorHome::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:Stock/StockDistributorHome:1.0"
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

const char* Stock::StockDistributorHome::_interface_repository_id (void) const
{
  return "IDL:Stock/StockDistributorHome:1.0";
}

::CORBA::Boolean
Stock::StockDistributorHome::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_Stock_StockDistributorHome (
    ::CORBA::tk_objref,
    "IDL:Stock/StockDistributorHome:1.0",
    "StockDistributorHome");


namespace Stock
{
  ::CORBA::TypeCode_ptr const _tc_StockDistributorHome =
    &_tao_tc_Stock_StockDistributorHome;
}

// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_cs.cpp:38
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<Stock::Invalid_Subscription>::demarshal_value (TAO_InputCDR & cdr)
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



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Stock
{


  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::Stock::Invalid_Subscription &_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::Stock::Invalid_Subscription>::insert_copy (
        _tao_any,
        ::Stock::Invalid_Subscription::_tao_any_destructor,
        ::Stock::_tc_Invalid_Subscription,
        _tao_elem);
  }

  // Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::Stock::Invalid_Subscription *_tao_elem)
  {
    TAO::Any_Dual_Impl_T< ::Stock::Invalid_Subscription>::insert (
        _tao_any,
        ::Stock::Invalid_Subscription::_tao_any_destructor,
        ::Stock::_tc_Invalid_Subscription,
        _tao_elem);
  }

  // Extraction to non-const pointer (deprecated).
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::Stock::Invalid_Subscription *&_tao_elem)
  {
    return _tao_any >>= const_cast<
        const ::Stock::Invalid_Subscription *&> (
        _tao_elem);
  }

  // Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::Stock::Invalid_Subscription *&_tao_elem)
  {
    return
      TAO::Any_Dual_Impl_T< ::Stock::Invalid_Subscription>::extract (
          _tao_any,
          ::Stock::Invalid_Subscription::_tao_any_destructor,
          ::Stock::_tc_Invalid_Subscription,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const Stock::Invalid_Subscription &_tao_elem)
{
  TAO::Any_Dual_Impl_T<Stock::Invalid_Subscription>::insert_copy (
      _tao_any,
      Stock::Invalid_Subscription::_tao_any_destructor,
      Stock::_tc_Invalid_Subscription,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    Stock::Invalid_Subscription *_tao_elem)
{
  TAO::Any_Dual_Impl_T<Stock::Invalid_Subscription>::insert (
      _tao_any,
      Stock::Invalid_Subscription::_tao_any_destructor,
      Stock::_tc_Invalid_Subscription,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    Stock::Invalid_Subscription *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const Stock::Invalid_Subscription *&> (
      _tao_elem);
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const Stock::Invalid_Subscription *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<Stock::Invalid_Subscription>::extract (
        _tao_any,
        Stock::Invalid_Subscription::_tao_any_destructor,
        Stock::_tc_Invalid_Subscription,
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
  Any_Impl_T<Stock::StockDistributor>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Stock
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StockDistributor_ptr _tao_elem)
  {
    StockDistributor_ptr _tao_objptr =
      StockDistributor::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StockDistributor_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<StockDistributor>::insert (
        _tao_any,
        StockDistributor::_tao_any_destructor,
        _tc_StockDistributor,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      StockDistributor_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<StockDistributor>::extract (
          _tao_any,
          StockDistributor::_tao_any_destructor,
          _tc_StockDistributor,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Stock::StockDistributor_ptr _tao_elem)
{
  Stock::StockDistributor_ptr _tao_objptr =
    Stock::StockDistributor::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Stock::StockDistributor_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Stock::StockDistributor>::insert (
      _tao_any,
      Stock::StockDistributor::_tao_any_destructor,
      Stock::_tc_StockDistributor,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Stock::StockDistributor_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Stock::StockDistributor>::extract (
        _tao_any,
        Stock::StockDistributor::_tao_any_destructor,
        Stock::_tc_StockDistributor,
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
  Any_Impl_T<Stock::StockDistributorHome>::to_object (
      ::CORBA::Object_ptr &_tao_elem) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Stock
{


  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StockDistributorHome_ptr _tao_elem)
  {
    StockDistributorHome_ptr _tao_objptr =
      StockDistributorHome::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      StockDistributorHome_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<StockDistributorHome>::insert (
        _tao_any,
        StockDistributorHome::_tao_any_destructor,
        _tc_StockDistributorHome,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      StockDistributorHome_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<StockDistributorHome>::extract (
          _tao_any,
          StockDistributorHome::_tao_any_destructor,
          _tc_StockDistributorHome,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Stock::StockDistributorHome_ptr _tao_elem)
{
  Stock::StockDistributorHome_ptr _tao_objptr =
    Stock::StockDistributorHome::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    Stock::StockDistributorHome_ptr *_tao_elem)
{
  TAO::Any_Impl_T<Stock::StockDistributorHome>::insert (
      _tao_any,
      Stock::StockDistributorHome::_tao_any_destructor,
      Stock::_tc_StockDistributorHome,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    Stock::StockDistributorHome_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<Stock::StockDistributorHome>::extract (
        _tao_any,
        Stock::StockDistributorHome::_tao_any_destructor,
        Stock::_tc_StockDistributorHome,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_cs.cpp:48
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Stock::Invalid_Subscription &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    Stock::Invalid_Subscription&
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
    const Stock::StockDistributor_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Stock::StockDistributor_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Stock::StockDistributor RHS_SCOPED_NAME;

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
    const Stock::StockDistributorHome_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Stock::StockDistributorHome_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Stock::StockDistributorHome RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (obj.in ());

  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



