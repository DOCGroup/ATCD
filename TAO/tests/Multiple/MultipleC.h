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

#ifndef _TAO_IDL_MULTIPLEC_96JTY8_H_
#define _TAO_IDL_MULTIPLEC_96JTY8_H_

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
#include "tao/Objref_VarOut_T.h"
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

namespace Multiple
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_MULTIPLE_TOP__VAR_OUT_CH_)
#define _MULTIPLE_TOP__VAR_OUT_CH_

  class Top;
  typedef Top *Top_ptr;

  typedef
    TAO_Objref_Var_T<
        Top
      >
    Top_var;

  typedef
    TAO_Objref_Out_T<
        Top
      >
    Top_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Top
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Top>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Top_ptr _ptr_type;
    typedef Top_var _var_type;
    typedef Top_out _out_type;

    // The static operations.
    static Top_ptr _duplicate (Top_ptr obj);

    static void _tao_release (Top_ptr obj);

    static Top_ptr _narrow (::CORBA::Object_ptr obj);
    static Top_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Top_ptr _nil (void);

    virtual char * top_quote (
      void);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Top (void);

    // Concrete non-local interface only.
    Top (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Top (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Top (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Top (const Top &);

    void operator= (const Top &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_MULTIPLE_LEFT__VAR_OUT_CH_)
#define _MULTIPLE_LEFT__VAR_OUT_CH_

  class Left;
  typedef Left *Left_ptr;

  typedef
    TAO_Objref_Var_T<
        Left
      >
    Left_var;

  typedef
    TAO_Objref_Out_T<
        Left
      >
    Left_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Left
    : public virtual ::Multiple::Top

  {
  public:
    friend class TAO::Narrow_Utils<Left>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Left_ptr _ptr_type;
    typedef Left_var _var_type;
    typedef Left_out _out_type;

    // The static operations.
    static Left_ptr _duplicate (Left_ptr obj);

    static void _tao_release (Left_ptr obj);

    static Left_ptr _narrow (::CORBA::Object_ptr obj);
    static Left_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Left_ptr _nil (void);

    virtual char * left_quote (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Left (void);

    // Concrete non-local interface only.
    Left (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Left (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Left (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Left (const Left &);

    void operator= (const Left &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_MULTIPLE_RIGHT__VAR_OUT_CH_)
#define _MULTIPLE_RIGHT__VAR_OUT_CH_

  class Right;
  typedef Right *Right_ptr;

  typedef
    TAO_Objref_Var_T<
        Right
      >
    Right_var;

  typedef
    TAO_Objref_Out_T<
        Right
      >
    Right_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Right
    : public virtual ::Multiple::Top

  {
  public:
    friend class TAO::Narrow_Utils<Right>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Right_ptr _ptr_type;
    typedef Right_var _var_type;
    typedef Right_out _out_type;

    // The static operations.
    static Right_ptr _duplicate (Right_ptr obj);

    static void _tao_release (Right_ptr obj);

    static Right_ptr _narrow (::CORBA::Object_ptr obj);
    static Right_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Right_ptr _nil (void);

    virtual char * right_quote (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Right (void);

    // Concrete non-local interface only.
    Right (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Right (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Right (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Right (const Right &);

    void operator= (const Right &);
  };

  // TAO_IDL - Generated from
  // be/be_interface.cpp:748

#if !defined (_MULTIPLE_BOTTOM__VAR_OUT_CH_)
#define _MULTIPLE_BOTTOM__VAR_OUT_CH_

  class Bottom;
  typedef Bottom *Bottom_ptr;

  typedef
    TAO_Objref_Var_T<
        Bottom
      >
    Bottom_var;

  typedef
    TAO_Objref_Out_T<
        Bottom
      >
    Bottom_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:40

  class  Bottom
    : public virtual ::Multiple::Left,
      public virtual ::Multiple::Right

  {
  public:
    friend class TAO::Narrow_Utils<Bottom>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:304

    typedef Bottom_ptr _ptr_type;
    typedef Bottom_var _var_type;
    typedef Bottom_out _out_type;

    // The static operations.
    static Bottom_ptr _duplicate (Bottom_ptr obj);

    static void _tao_release (Bottom_ptr obj);

    static Bottom_ptr _narrow (::CORBA::Object_ptr obj);
    static Bottom_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Bottom_ptr _nil (void);

    virtual char * bottom_quote (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:137

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    // Concrete interface only.
    Bottom (void);

    // Concrete non-local interface only.
    Bottom (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);

    // Non-local interface only.
    Bottom (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Bottom (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Bottom (const Bottom &);

    void operator= (const Bottom &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:64

} // module Multiple

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:66

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_MULTIPLE_TOP__ARG_TRAITS_)
#define _MULTIPLE_TOP__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Multiple::Top>
    : public
        Object_Arg_Traits_T<
            ::Multiple::Top_ptr,
            ::Multiple::Top_var,
            ::Multiple::Top_out,
            TAO::Objref_Traits<Multiple::Top>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_MULTIPLE_LEFT__ARG_TRAITS_)
#define _MULTIPLE_LEFT__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Multiple::Left>
    : public
        Object_Arg_Traits_T<
            ::Multiple::Left_ptr,
            ::Multiple::Left_var,
            ::Multiple::Left_out,
            TAO::Objref_Traits<Multiple::Left>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_MULTIPLE_RIGHT__ARG_TRAITS_)
#define _MULTIPLE_RIGHT__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Multiple::Right>
    : public
        Object_Arg_Traits_T<
            ::Multiple::Right_ptr,
            ::Multiple::Right_var,
            ::Multiple::Right_out,
            TAO::Objref_Traits<Multiple::Right>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:145

#if !defined (_MULTIPLE_BOTTOM__ARG_TRAITS_)
#define _MULTIPLE_BOTTOM__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Multiple::Bottom>
    : public
        Object_Arg_Traits_T<
            ::Multiple::Bottom_ptr,
            ::Multiple::Bottom_var,
            ::Multiple::Bottom_out,
            TAO::Objref_Traits<Multiple::Bottom>,
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

#if !defined (_MULTIPLE_TOP__TRAITS_)
#define _MULTIPLE_TOP__TRAITS_

  template<>
  struct  Objref_Traits< ::Multiple::Top>
  {
    static ::Multiple::Top_ptr duplicate (
        ::Multiple::Top_ptr p);
    static void release (
        ::Multiple::Top_ptr p);
    static ::Multiple::Top_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Multiple::Top_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_MULTIPLE_LEFT__TRAITS_)
#define _MULTIPLE_LEFT__TRAITS_

  template<>
  struct  Objref_Traits< ::Multiple::Left>
  {
    static ::Multiple::Left_ptr duplicate (
        ::Multiple::Left_ptr p);
    static void release (
        ::Multiple::Left_ptr p);
    static ::Multiple::Left_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Multiple::Left_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_MULTIPLE_RIGHT__TRAITS_)
#define _MULTIPLE_RIGHT__TRAITS_

  template<>
  struct  Objref_Traits< ::Multiple::Right>
  {
    static ::Multiple::Right_ptr duplicate (
        ::Multiple::Right_ptr p);
    static void release (
        ::Multiple::Right_ptr p);
    static ::Multiple::Right_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Multiple::Right_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_MULTIPLE_BOTTOM__TRAITS_)
#define _MULTIPLE_BOTTOM__TRAITS_

  template<>
  struct  Objref_Traits< ::Multiple::Bottom>
  {
    static ::Multiple::Bottom_ptr duplicate (
        ::Multiple::Bottom_ptr p);
    static void release (
        ::Multiple::Bottom_ptr p);
    static ::Multiple::Bottom_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Multiple::Bottom_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Multiple::Top_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Multiple::Top_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Multiple::Left_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Multiple::Left_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Multiple::Right_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Multiple::Right_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:41

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Multiple::Bottom_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Multiple::Bottom_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1700
#if defined (__ACE_INLINE__)
#include "MultipleC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */

