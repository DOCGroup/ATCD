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

#ifndef _TAO_IDL____MIF_SCHEDULINGC_9JLJJR_H_
#define _TAO_IDL____MIF_SCHEDULINGC_9JLJJR_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
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
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:35

namespace MIF_Scheduling
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_MIF_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__VAR_OUT_CH_)
#define _MIF_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__VAR_OUT_CH_

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

  class  SegmentSchedulingParameterPolicy
    : public virtual ::CORBA::Policy
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef SegmentSchedulingParameterPolicy_ptr _ptr_type;
    typedef SegmentSchedulingParameterPolicy_var _var_type;
    typedef SegmentSchedulingParameterPolicy_out _out_type;

    // The static operations.
    static SegmentSchedulingParameterPolicy_ptr _duplicate (SegmentSchedulingParameterPolicy_ptr obj);

    static void _tao_release (SegmentSchedulingParameterPolicy_ptr obj);

    static SegmentSchedulingParameterPolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static SegmentSchedulingParameterPolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static SegmentSchedulingParameterPolicy_ptr _nil (void);

    virtual ::CORBA::Short importance (
      void) = 0;

    virtual void importance (
      ::CORBA::Short importance) = 0;

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
  // be/be_interface.cpp:748

#if !defined (_MIF_SCHEDULING_MIF_SCHEDULER__VAR_OUT_CH_)
#define _MIF_SCHEDULING_MIF_SCHEDULER__VAR_OUT_CH_

  class MIF_Scheduler;
  typedef MIF_Scheduler *MIF_Scheduler_ptr;

  typedef
    TAO_Objref_Var_T<
        MIF_Scheduler
      >
    MIF_Scheduler_var;
  
  typedef
    TAO_Objref_Out_T<
        MIF_Scheduler
      >
    MIF_Scheduler_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  MIF_Scheduler
    : public virtual ::RTScheduling::Scheduler
  
  {
  public:

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef MIF_Scheduler_ptr _ptr_type;
    typedef MIF_Scheduler_var _var_type;
    typedef MIF_Scheduler_out _out_type;

    // The static operations.
    static MIF_Scheduler_ptr _duplicate (MIF_Scheduler_ptr obj);

    static void _tao_release (MIF_Scheduler_ptr obj);

    static MIF_Scheduler_ptr _narrow (::CORBA::Object_ptr obj);
    static MIF_Scheduler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static MIF_Scheduler_ptr _nil (void);

    virtual ::MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr create_segment_scheduling_parameter (
      ::CORBA::Short segment_importance) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    MIF_Scheduler (void);

    

    virtual ~MIF_Scheduler (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    MIF_Scheduler (const MIF_Scheduler &);

    void operator= (const MIF_Scheduler &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module MIF_Scheduling

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:60

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_MIF_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__TRAITS_)
#define _MIF_SCHEDULING_SEGMENTSCHEDULINGPARAMETERPOLICY__TRAITS_

  template<>
  struct  Objref_Traits< ::MIF_Scheduling::SegmentSchedulingParameterPolicy>
  {
    static ::MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr duplicate (
        ::MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr p);
    static void release (
        ::MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr p);
    static ::MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::MIF_Scheduling::SegmentSchedulingParameterPolicy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_MIF_SCHEDULING_MIF_SCHEDULER__TRAITS_)
#define _MIF_SCHEDULING_MIF_SCHEDULER__TRAITS_

  template<>
  struct  Objref_Traits< ::MIF_Scheduling::MIF_Scheduler>
  {
    static ::MIF_Scheduling::MIF_Scheduler_ptr duplicate (
        ::MIF_Scheduling::MIF_Scheduler_ptr p);
    static void release (
        ::MIF_Scheduling::MIF_Scheduler_ptr p);
    static ::MIF_Scheduling::MIF_Scheduler_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::MIF_Scheduling::MIF_Scheduler_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "MIF_SchedulingC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

