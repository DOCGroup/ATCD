// This may look like C, but it's really -*- C++ -*-

// ============================================================================
//
// = LIBRARY
//    TAO
// 
// = FILENAME
//    typecode.h
//
// = DESCRIPTION
//     
//    Header file for Win32 C/C++/COM interface to CORBA's "TypeCode" type.
//
// = AUTHOR
//     Copyright 1994-1995 by Sun Microsystems, Inc.
// 
// ============================================================================

// = Kinds of typecodes.

// Do not change these enum values, or duplicate them if you need to
// add values.  They are used to index tables, and if you change the
// values you'll need to find and update all of those tables.  The
// values are also part of the Common Data Representation, and hence
// are part of IIOP and other ORB protocols.

#if !defined (TAO_TYPECODE_H)
#  define TAO_TYPECODE_H

#  include "ace/OS.h"

enum CORBA_TCKind 
{
  tk_null		= 0,
  tk_void		= 1,
  tk_short		= 2,
  tk_long		= 3,
  tk_ushort		= 4,
  tk_ulong		= 5,
  tk_float		= 6,
  tk_double		= 7,
  tk_boolean		= 8,
  tk_char		= 9,
  tk_octet		= 10,
  tk_any		= 11,
  tk_TypeCode		= 12,
  tk_Principal		= 13,
  tk_objref		= 14,
  tk_struct		= 15,
  tk_union		= 16,
  tk_enum		= 17,
  tk_string		= 18,
  tk_sequence		= 19,
  tk_array		= 20,
  tk_alias		= 21,		// 94-11-7
  tk_except		= 22,		// 94-11-7

  // these five are OMG-IDL data type extensions
  tk_longlong		= 23,		// 94-9-32 Appendix A (+ 2)
  tk_ulonglong		= 24,		// 94-9-32 Appendix A (+ 2)
  tk_longdouble		= 25,		// 94-9-32 Appendix A (+ 2)
  tk_wchar		= 26,		// 94-9-32 Appendix A (+ 2)
  tk_wstring		= 27,		// 94-9-32 Appendix A (+ 2)

  // This symbol is not defined by CORBA 2.0.  It's used to speed up
  // dispatch based on TCKind values, and lets many important ones
  // just be table lookups.  It must always be the last enum value!!

  TC_KIND_COUNT
};

// Two "user exceptions" are defined for manipulating TypeCodes.

extern CORBA_TypeCode_ptr _tc_CORBA_Bounds;
class CORBA_Bounds : public CORBA_UserException 
{
public:
  CORBA_Bounds (void)
    : CORBA_UserException (_tc_CORBA_Bounds) {}
};

extern CORBA_TypeCode_ptr _tc_CORBA_BadKind;
class CORBA_BadKind : public CORBA_UserException 
{
public:
  CORBA_BadKind (void) 
    : CORBA_UserException (_tc_CORBA_BadKind) {}
};

// A TypeCode describes data.  This one's as thin a wrapper around CDR
// octet sequences as is practical.  There are guesses here about how
// the OMG C++ mapping and CORBA 2.0 IFR specification will interact.
//
// NOTE: Use TypeCode_ptr, except in code (e.g. output of and OMG-IDL
// compiler) that needs to create typecodes from their octet-sequence
// encodings.

void CORBA_release (CORBA_TypeCode_ptr);
CORBA_Boolean CORBA_is_nil (CORBA_TypeCode_ptr obj);

extern const IID IID_CORBA_TypeCode;

class ACE_Svc_Export CORBA_TypeCode : public IUnknown
{
public:
  CORBA_TCKind	kind (CORBA_Environment &) const;
  // For all TypeCode kinds

  CORBA_ULong param_count (CORBA_Environment &) const;
  // Deprecated, CORBA 1.2, not fully usable

  CORBA_String id (CORBA_Environment &) const;
  // For tk_{objref,struct,union,enum,alias,except}

  CORBA_Any_ptr member_label (CORBA_ULong n, CORBA_Environment&) const;
  // Other CORBA 2.0 IFR updates -- not yet implemented/needed
  //
  // String		name () raises (BadKind);
  // ULong		member_count () raises (BadKind);
  // String		member_name (...) raises (BadKind, Bounds);
  // TypeCode_ptr	member_type (...) raises (BadKind, Bounds);

  // TypeCode_ptr	discriminator_type () raises (BadKind);
  // Long		default_index () raises (BadKind);

  // Long		length () raises (BadKind);
  // TypeCode_ptr	content_type () raises (BadKind);

  CORBA_ULong ulong_param (CORBA_ULong n, 
			   CORBA_Environment &) const;
  CORBA_TypeCode_ptr typecode_param (CORBA_ULong n,
				     CORBA_Environment &) const;
  // Internal utilities, pending CORBA 2.0 IFR APIs; just enough
  // to make array and sequence typecode interpretation cheap

  // = Creation/refcounting

  // These aren't really public APIs, but an IDL compiler will need to
  // be able to create TypeCodes as part of creating stubs.

  CORBA_TypeCode (CORBA_TCKind kind);
  // This constructor is used only for built-in TypeCode constants,
  // with no parameters.

  // This constructor is used both for typecode constants and for
  // heap-allocated TypeCodes.  The two are distinguished by the
  // orb_owns_tc flag passed in by the creator.
  //
  // For simple param lists with a single numeric parameter, only
  // 'length' matters.
  //
  // For complex param lists, or simple param lists for which the
  // parameter is a string or typecode, length _and_ buffer matter.

  CORBA_TypeCode (CORBA_TCKind kind,
		  CORBA_ULong length,
		  CORBA_Octet *buffer,
		  CORBA_Boolean	orb_owns_tc);

  void *operator new (size_t, void *p)
  { return p; }

  void *operator new (size_t s)
  { return ::operator new(s); }

  virtual ~CORBA_TypeCode (void);

  enum traverse_status { TRAVERSE_STOP, TRAVERSE_CONTINUE };

  typedef traverse_status (_FAR * VisitRoutine) (CORBA_TypeCode_ptr tc,
						 const void *value1,
						 const void *value2,
						 void *context,
						 CORBA_Environment &env);

  traverse_status traverse (const void *value1,
			    const void *value2,
				  VisitRoutine	visit,
				  void *context,
				  CORBA_Environment &env
				  );
  // This routine calls visit() on each component of one (or two)
  // structurally equivalent data values.  "Components" are either
  // primitive (long, string, ...) or constructed (struct, ...)  data
  // elements.
  //
  // It will NOT descend into those nodes if they're constructed; it's
  // the job of the visit() routine to do that as needed.
  //
  // "Context" can be used to hold state used by the visit() routine.
  // To terminate traversal "early", visit() returns TRAVERSE_STOP.
  //
  // The "value1" and "value2" parameters are pointers to data values
  // of the structure described by the TypeCode.  Using the normal
  // size, alignment, and padding rules used by the compilers on a
  // given platform, the visit() routine is called with pointers to
  // subsidiary elements.
  //
  // As all this routine does is appropriate pointer adjustments, it
  // any value at all can be passed in as "value1" or "value2".  You
  // could ignore one value and examine a data structure; copy from
  // one to the other; compare one to the other; and more.
  //
  // Normal usage is to have application code call its visit() routine
  // directly, and have that decide whether to use the typecode
  // interpereter's knowledge of data structure layout through mutual
  // recursion.
    
  size_t size (CORBA_Environment &env);
  size_t alignment (CORBA_Environment &env);

  static CORBA_TypeCode_ptr _nil (void);

  // Stuff required for COM IUnknown support

  ULONG __stdcall AddRef (void);
  ULONG __stdcall Release (void);
  HRESULT __stdcall QueryInterface (REFIID riid,
				    void **ppv);
  // private:
  //
  // = The guts of the typecode implementation class 

  // This is implemented as a counted set of bytes, in marshaled CDR
  // format.

  CORBA_ULong _length;
  CORBA_Octet *_buffer;
  CORBA_TCKind _kind;

  CORBA_TypeCode_ptr _parent;
  // Indirected typecodes share "buffer" with a parent, and hold a
  // reference to that parent to ensure its memory is not freed
  // inappropriately.

private:
  ACE_Thread_Mutex lock_;
  u_int _refcount;

  CORBA_Boolean	_orb_owns;
  // If "orb_owns" is false, the value is a constant typecode with
  // both the typecode and the buffer statically allocated; the
  // typecode is never freed.  Otherwise the typecode and the buffer
  // are freed when the refcount goes to zero.
  //
  // "orb owns" is always set, except for TypeCode constants.

  // = No copy constructor or assignment operator supported;

  // Use TypeCode_ptr values, duplicate(), release().
  CORBA_TypeCode (const CORBA_TypeCode &src);
  CORBA_TypeCode &operator = (const CORBA_TypeCode &src);
};

// TypeCode constants, which are always accessible in all ORB runtimes.

extern const CORBA_TypeCode_ptr _tc_CORBA_Null;
extern const CORBA_TypeCode_ptr _tc_CORBA_Void;
extern const CORBA_TypeCode_ptr _tc_CORBA_Short;
extern const CORBA_TypeCode_ptr _tc_CORBA_Long;
extern const CORBA_TypeCode_ptr _tc_CORBA_LongLong;
extern const CORBA_TypeCode_ptr _tc_CORBA_UShort;
extern const CORBA_TypeCode_ptr _tc_CORBA_ULong;
extern const CORBA_TypeCode_ptr _tc_CORBA_ULongLong;

extern const CORBA_TypeCode_ptr _tc_CORBA_Float;
extern const CORBA_TypeCode_ptr _tc_CORBA_Double;
extern const CORBA_TypeCode_ptr _tc_CORBA_LongDouble;

extern const CORBA_TypeCode_ptr _tc_CORBA_Boolean;
extern const CORBA_TypeCode_ptr _tc_CORBA_Octet;

extern const CORBA_TypeCode_ptr _tc_CORBA_Char;
extern const CORBA_TypeCode_ptr _tc_CORBA_String;
extern const CORBA_TypeCode_ptr _tc_CORBA_WChar;
extern const CORBA_TypeCode_ptr _tc_CORBA_WString;

extern const CORBA_TypeCode_ptr _tc_CORBA_Any;
extern const CORBA_TypeCode_ptr _tc_CORBA_TypeCode;
extern const CORBA_TypeCode_ptr _tc_CORBA_Principal;

extern const CORBA_TypeCode_ptr _tc_CORBA_Object;

#endif /* TAO_TYPECODE_H */
