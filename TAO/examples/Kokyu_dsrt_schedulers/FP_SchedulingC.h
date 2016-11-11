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

#ifndef _TAO_IDL_FP_SCHEDULINGC_IFDCDU_H_
#define _TAO_IDL_FP_SCHEDULINGC_IFDCDU_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "Kokyu_dsrt_schedulers_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/String_Manager_T.h"
#include "tao/RTScheduling/RTScheduler_includeA.h"
#include "tao/RTCORBA/RTCORBA_includeA.h"
#include "tao/Objref_VarOut_T.h"
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

#include "tao/RTScheduling/RTScheduler_includeC.h"
#include "tao/RTCORBA/RTCORBA_includeC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 4 || TAO_MICRO_VERSION != 1
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO Kokyu_DSRT_Schedulers_Export

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:35

namespace FP_Scheduling
{

  // TAO_IDL - Generated from
  // be/be_type.cpp:258

  struct SegmentSchedulingParameter;

  typedef
    ::TAO_Fixed_Var_T<
        SegmentSchedulingParameter
      >
    SegmentSchedulingParameter_var;

  typedef
    SegmentSchedulingParameter &
    SegmentSchedulingParameter_out;

  // TAO_IDL - Generated from
  // be/be_visitor_structure/structure_ch.cpp:48

  struct Kokyu_DSRT_Schedulers_Export SegmentSchedulingParameter
  {

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    
    typedef SegmentSchedulingParameter_var _var_type;
    typedef SegmentSchedulingParameter_out _out_type;

    static void _tao_any_destructor (void *);
    
    RTCORBA::Priority base_priority;
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern Kokyu_DSRT_Schedulers_Export ::CORBA::TypeCode_ptr const _tc_SegmentSchedulingParameter;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_FP_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__VAR_OUT_CH_)
#define _FP_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__VAR_OUT_CH_

  class SegmentSchedulingParameterPolicy;
  typedef SegmentSchedulingParameterPolicy *SegmentSchedulingParameterPolicy_ptr;

  typedef
    TAO_Objref_Var_T<
        SegmentSchedulingParameterPolicy
      >
    SegmentSchedulingParameterPolicy_var;
  
  typedef
    TAO_Objref_Out_T<
        SegmentSchedulingParameterPolicy
      >
    SegmentSchedulingParameterPolicy_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class Kokyu_DSRT_Schedulers_Export SegmentSchedulingParameterPolicy
    : public virtual ::CORBA::Policy
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef SegmentSchedulingParameterPolicy_ptr _ptr_type;
    typedef SegmentSchedulingParameterPolicy_var _var_type;
    typedef SegmentSchedulingParameterPolicy_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static SegmentSchedulingParameterPolicy_ptr _duplicate (SegmentSchedulingParameterPolicy_ptr obj);

    static void _tao_release (SegmentSchedulingParameterPolicy_ptr obj);

    static SegmentSchedulingParameterPolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static SegmentSchedulingParameterPolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static SegmentSchedulingParameterPolicy_ptr _nil (void);

    virtual ::FP_Scheduling::SegmentSchedulingParameter value (
      void) = 0;

    virtual void value (
      const ::FP_Scheduling::SegmentSchedulingParameter & value) = 0;

    virtual ::CORBA::Policy_ptr copy (
      void) = 0;

    virtual void destroy (
      void) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    SegmentSchedulingParameterPolicy (void);

    

    virtual ~SegmentSchedulingParameterPolicy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    SegmentSchedulingParameterPolicy (const SegmentSchedulingParameterPolicy &);

    void operator= (const SegmentSchedulingParameterPolicy &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern Kokyu_DSRT_Schedulers_Export ::CORBA::TypeCode_ptr const _tc_SegmentSchedulingParameterPolicy;

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_FP_SCHEDULING_FP_SCHEDULER__VAR_OUT_CH_)
#define _FP_SCHEDULING_FP_SCHEDULER__VAR_OUT_CH_

  class FP_Scheduler;
  typedef FP_Scheduler *FP_Scheduler_ptr;

  typedef
    TAO_Objref_Var_T<
        FP_Scheduler
      >
    FP_Scheduler_var;
  
  typedef
    TAO_Objref_Out_T<
        FP_Scheduler
      >
    FP_Scheduler_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class Kokyu_DSRT_Schedulers_Export FP_Scheduler
    : public virtual ::RTScheduling::Scheduler
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef FP_Scheduler_ptr _ptr_type;
    typedef FP_Scheduler_var _var_type;
    typedef FP_Scheduler_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static FP_Scheduler_ptr _duplicate (FP_Scheduler_ptr obj);

    static void _tao_release (FP_Scheduler_ptr obj);

    static FP_Scheduler_ptr _narrow (::CORBA::Object_ptr obj);
    static FP_Scheduler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static FP_Scheduler_ptr _nil (void);

    virtual ::FP_Scheduling::SegmentSchedulingParameterPolicy_ptr create_segment_scheduling_parameter (
      const ::FP_Scheduling::SegmentSchedulingParameter & value) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    FP_Scheduler (void);

    

    virtual ~FP_Scheduler (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    FP_Scheduler (const FP_Scheduler &);

    void operator= (const FP_Scheduler &);
  };

  // TAO_IDL - Generated from
  // be/be_visitor_typecode/typecode_decl.cpp:34

  extern Kokyu_DSRT_Schedulers_Export ::CORBA::TypeCode_ptr const _tc_FP_Scheduler;

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module FP_Scheduling

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:945

  template<>
  class Arg_Traits< ::FP_Scheduling::SegmentSchedulingParameter>
    : public
        Fixed_Size_Arg_Traits_T<
            ::FP_Scheduling::SegmentSchedulingParameter,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_FP_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__TRAITS_)
#define _FP_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__TRAITS_

  template<>
  struct Kokyu_DSRT_Schedulers_Export Objref_Traits< ::FP_Scheduling::SegmentSchedulingParameterPolicy>
  {
    static ::FP_Scheduling::SegmentSchedulingParameterPolicy_ptr duplicate (
        ::FP_Scheduling::SegmentSchedulingParameterPolicy_ptr p);
    static void release (
        ::FP_Scheduling::SegmentSchedulingParameterPolicy_ptr p);
    static ::FP_Scheduling::SegmentSchedulingParameterPolicy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::FP_Scheduling::SegmentSchedulingParameterPolicy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_FP_SCHEDULING_FP_SCHEDULER__TRAITS_)
#define _FP_SCHEDULING_FP_SCHEDULER__TRAITS_

  template<>
  struct Kokyu_DSRT_Schedulers_Export Objref_Traits< ::FP_Scheduling::FP_Scheduler>
  {
    static ::FP_Scheduling::FP_Scheduler_ptr duplicate (
        ::FP_Scheduling::FP_Scheduler_ptr p);
    static void release (
        ::FP_Scheduling::FP_Scheduler_ptr p);
    static ::FP_Scheduling::FP_Scheduler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::FP_Scheduling::FP_Scheduler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:42



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FP_Scheduling
{
  Kokyu_DSRT_Schedulers_Export void operator<<= (::CORBA::Any &, const ::FP_Scheduling::SegmentSchedulingParameter &); // copying version
  Kokyu_DSRT_Schedulers_Export void operator<<= (::CORBA::Any &, ::FP_Scheduling::SegmentSchedulingParameter*); // noncopying version
  Kokyu_DSRT_Schedulers_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::FP_Scheduling::SegmentSchedulingParameter *&); // deprecated
Kokyu_DSRT_Schedulers_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::FP_Scheduling::SegmentSchedulingParameter *&);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

Kokyu_DSRT_Schedulers_Export void operator<<= (::CORBA::Any &, const FP_Scheduling::SegmentSchedulingParameter &); // copying version
Kokyu_DSRT_Schedulers_Export void operator<<= (::CORBA::Any &, FP_Scheduling::SegmentSchedulingParameter*); // noncopying version
Kokyu_DSRT_Schedulers_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FP_Scheduling::SegmentSchedulingParameter *&); // deprecated
Kokyu_DSRT_Schedulers_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const FP_Scheduling::SegmentSchedulingParameter *&);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FP_Scheduling
{
  Kokyu_DSRT_Schedulers_Export void operator<<= ( ::CORBA::Any &, SegmentSchedulingParameterPolicy_ptr); // copying
  Kokyu_DSRT_Schedulers_Export void operator<<= ( ::CORBA::Any &, SegmentSchedulingParameterPolicy_ptr *); // non-copying
  Kokyu_DSRT_Schedulers_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, SegmentSchedulingParameterPolicy_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

Kokyu_DSRT_Schedulers_Export void operator<<= (::CORBA::Any &, FP_Scheduling::SegmentSchedulingParameterPolicy_ptr); // copying
Kokyu_DSRT_Schedulers_Export void operator<<= (::CORBA::Any &, FP_Scheduling::SegmentSchedulingParameterPolicy_ptr *); // non-copying
Kokyu_DSRT_Schedulers_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FP_Scheduling::SegmentSchedulingParameterPolicy_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:41



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FP_Scheduling
{
  Kokyu_DSRT_Schedulers_Export void operator<<= ( ::CORBA::Any &, FP_Scheduler_ptr); // copying
  Kokyu_DSRT_Schedulers_Export void operator<<= ( ::CORBA::Any &, FP_Scheduler_ptr *); // non-copying
  Kokyu_DSRT_Schedulers_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FP_Scheduler_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

Kokyu_DSRT_Schedulers_Export void operator<<= (::CORBA::Any &, FP_Scheduling::FP_Scheduler_ptr); // copying
Kokyu_DSRT_Schedulers_Export void operator<<= (::CORBA::Any &, FP_Scheduling::FP_Scheduler_ptr *); // non-copying
Kokyu_DSRT_Schedulers_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FP_Scheduling::FP_Scheduler_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ch.cpp:43


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

Kokyu_DSRT_Schedulers_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const FP_Scheduling::SegmentSchedulingParameter &);
Kokyu_DSRT_Schedulers_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, FP_Scheduling::SegmentSchedulingParameter &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "FP_SchedulingC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

