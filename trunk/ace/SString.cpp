// SString.cpp
// $Id$

#define ACE_BUILD_DLL
#include "ace/Malloc.h"
#include "ace/Service_Config.h"
#include "ace/SString.h"

#include "ace/streams.h"

#if !defined (__ACE_INLINE__)
#include "ace/SString.i"
#endif /* __ACE_INLINE__ */

ACE_ALLOC_HOOK_DEFINE(ACE_CString)

char ACE_CString::NULL_CString_ = '\0';
const int ACE_CString::npos = -1;
const int ACE_SString::npos = -1;
const int ACE_WString::npos = -1;

ostream &
operator<< (ostream &os, const ACE_CString &cs)
{
  os << cs.fast_rep ();
  return os;
}

ostream &
operator<< (ostream &os, const ACE_SString &ss)
{
  os << ss.fast_rep ();
  return os;
}

ACE_WString 
operator+ (const ACE_WString &s, const ACE_WString &t)
{
  ACE_WString temp (s);
  temp += t;
  return temp;
}

ACE_CString
operator+ (const ACE_CString &s, const ACE_CString &t)
{
  ACE_CString temp (s);
  temp += t;
  return temp;
}

// Copy constructor.

ACE_CString::ACE_CString (const ACE_CString &s)
  : allocator_ (s.allocator_),
    len_ (s.len_)
{
  ACE_TRACE ("ACE_CString::ACE_CString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  if (s.fast_rep ()[0] == '\0')
    {
      this->rep_ = &ACE_CString::NULL_CString_;
    }
  else
    {
      this->rep_ = (char *) this->allocator_->malloc (s.len_ + 1);
      ACE_OS::memcpy ((void *) this->rep_, (const void *) s.rep_, this->len_);
      this->rep_[this->len_] = '\0';
    }
}

void
ACE_CString::dump (void) const
{
  ACE_TRACE ("ACE_CString::dump");
}

ACE_CString::~ACE_CString (void)
{
  ACE_TRACE ("ACE_CString::~ACE_CString");

  if (this->rep_ != &ACE_CString::NULL_CString_)
    {
      this->allocator_->free (this->rep_);
    }
}

// Default constructor.

ACE_CString::ACE_CString (ACE_Allocator *alloc)
  : allocator_ (alloc),
    len_ (0), 
    rep_ (&ACE_CString::NULL_CString_)
{
  ACE_TRACE ("ACE_CString::ACE_CString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();
}

// Constructor that actually copies memory.

ACE_CString::ACE_CString (const char *s, ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_CString::ACE_CString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  if (s == 0 || s[0] == 0')
    {
      this->len_ = 0;
      this->rep_ = &ACE_CString::NULL_CString_;
    }
  else
    {
      this->len_ = ACE_OS::strlen (s);
      this->rep_ = (char *) this->allocator_->malloc (this->len_ + 1);
      ACE_OS::memcpy (this->rep_, s, this->len_);
      this->rep_[this->len_] = '\0';
    }
}

ACE_CString::ACE_CString (char c, ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_CString::ACE_CString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  this->len_ = 1;
  this->rep_ = (char *) this->allocator_->malloc (this->len_ + 1);
  this->rep_[0] = c;
  this->rep_[this->len_] = '\0';
}

// Constructor that copies <s> into dynamically allocated memory.
// Probable loss of data. Please use with care.

ACE_CString::ACE_CString (const ACE_USHORT16 *s, ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_CString::ACE_CString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  if (s == 0 || s[0] == (ACE_USHORT16) '\0')
    {
      this->len_ = 0;
      this->rep_ = &ACE_CString::NULL_CString_;
    }
  else
    {
      this->len_ = ACE_WString::wstrlen (s);
      this->rep_ = (char *) this->allocator_->malloc (this->len_ + 1);

      // Copy the ACE_USHORT16 * string byte-by-byte into the char *
      // string.
      for (size_t i = 0; i < this->len_; i++)
	this->rep_[i] = char (s[i]);
      this->rep_[this->len_] = '\0';
    }
}

// Constructor that actually copies memory.

ACE_CString::ACE_CString (const char *s, 
			  size_t len, 
			  ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_CString::ACE_CString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  if (s == 0 || s[0] == '\0')
    {
      this->len_ = 0;
      this->rep_ = &ACE_CString::NULL_CString_;
    }
  else
    {
      this->len_ = len;
      this->rep_ = (char *) this->allocator_->malloc (this->len_ + 1);
      ACE_OS::memcpy (this->rep_, s, len);
      this->rep_[len] = '\0'; // Make sure to NUL terminate this!
    }
}

// Assignment operator (does copy memory).

ACE_CString & 
ACE_CString::operator= (const ACE_CString &s)
{
  ACE_TRACE ("ACE_CString::operator=");
  // Check for identify.

  if (this != &s)
    {
      // Only reallocate if we don't have enough space...
      if (this->len_ < s.len_)
	{
          if (this->rep_ != &ACE_CString::NULL_CString_)
	    this->allocator_->free (this->rep_);

          // s.len_ is greather than 0, so must allocate space for it.
	  this->rep_ = (char *) this->allocator_->malloc (s.len_ + 1);
	}

      this->len_ = s.len_;

      if (s[0] == '\0')
	this->rep_ = &ACE_CString::NULL_CString_;
      else
	ACE_OS::strcpy (this->rep_, s.rep_);
    }

  return *this;
}

// Return substring.
ACE_CString 
ACE_CString::substring (size_t offset,
			ssize_t length) const
{
  ACE_CString nil;
  size_t count = len_;

  // case 1. empty string
  if (len_ == 0)
    return nil;

  // case 2. start pos l
  if (offset >= len_)
    return nil;

  // get all remaining bytes
  if (length == -1)
    count = len_ - offset;

  return ACE_CString (&rep_[offset], count, this->allocator_);
}

// Concat operator (does copy memory).

ACE_CString &
ACE_CString::operator+= (const ACE_CString &s)
{
  ACE_TRACE ("ACE_CString::operator+=");

  if (s.len_ > 0)
    {
      size_t oldlen = this->len_;
      size_t newlen = oldlen + s.len_ + 1;
      this->len_ += s.len_;
      char *t = 0;

      if (oldlen < newlen)
	{
	  // Allocate memory for the new string.
	  ACE_ALLOCATOR_RETURN (t,
                                (char *) this->allocator_->malloc (newlen),
                                *this);
	  // Copy memory from old string into new string.
	  ACE_OS::memcpy (t, this->rep_, oldlen);
	}

      ACE_OS::memcpy (t + oldlen, s.rep_, s.len_);
      t[this->len_] = '\0';

      if (this->rep_ != &ACE_CString::NULL_CString_)
	this->allocator_->free (this->rep_);
      this->rep_ = t;
    }

  return *this;
}

ACE_ALLOC_HOOK_DEFINE(ACE_SString)

void
ACE_SString::dump (void) const
{
  ACE_TRACE ("ACE_SString::dump");
}

// Copy constructor.

ACE_SString::ACE_SString (const ACE_SString &s)
  : allocator_ (s.allocator_),
    len_ (s.len_)
{
  ACE_TRACE ("ACE_SString::ACE_SString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  this->rep_ = (char *) this->allocator_->malloc (s.len_ + 1);
  ACE_OS::memcpy ((void *) this->rep_, (const void *) s.rep_, this->len_);
  this->rep_[this->len_] = '\0';
}

// Default constructor.

ACE_SString::ACE_SString (ACE_Allocator *alloc)
  : allocator_ (alloc),
    len_ (0), 
    rep_ (0)
    
{
  ACE_TRACE ("ACE_SString::ACE_SString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  this->len_ = 0;
  this->rep_ = (char *) this->allocator_->malloc (this->len_ + 1);
  this->rep_[this->len_] = '\0';  
}

// Set the underlying pointer (does not copy memory).

void 
ACE_SString::rep (char *s)
{
  ACE_TRACE ("ACE_SString::rep");

  this->rep_ = s;

  if (s == 0)
    this->len_ = 0;
  else
    this->len_ = ACE_OS::strlen (s);
}

// Constructor that actually copies memory.

ACE_SString::ACE_SString (const char *s, 
			  ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_SString::ACE_SString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  if (s == 0)
    {
      this->len_ = 0;
      this->rep_ = (char *) this->allocator_->malloc (this->len_ + 1);
      this->rep_[this->len_] = '\0';  
    }
  else
    {
      this->len_ = ACE_OS::strlen (s);
      this->rep_ = (char *) this->allocator_->malloc (this->len_ + 1);
      ACE_OS::strcpy (this->rep_, s);
    }
}

ACE_SString::ACE_SString (char c, 
			  ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_SString::ACE_SString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  this->len_ = 1;
  this->rep_ = (char *) this->allocator_->malloc (this->len_ + 1);
  this->rep_[0] = c;
  this->rep_[this->len_] = '\0';
}

// Constructor that actually copies memory.

ACE_SString::ACE_SString (const char *s, 
			    size_t len, 
			    ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_SString::ACE_SString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  if (s == 0)
    {
      this->len_ = 0;
      this->rep_ = (char *) this->allocator_->malloc (this->len_ + 1);
      this->rep_[this->len_] = '\0';  
    }
  else
    {
      this->len_ = len;
      this->rep_ = (char *) this->allocator_->malloc (this->len_ + 1);
      ACE_OS::memcpy (this->rep_, s, len);
      this->rep_[len] = '\0'; // Make sure to NUL terminate this!
    }
}

// Assignment operator (does copy memory).

ACE_SString &
ACE_SString::operator= (const ACE_SString &s)
{
  ACE_TRACE ("ACE_SString::operator=");
  // Check for identify.

  if (this != &s)
    {
      // Only reallocate if we don't have enough space...
      if (this->len_ < s.len_)
	{
	  this->allocator_->free (this->rep_);
	  this->rep_ = (char *) this->allocator_->malloc (s.len_ + 1);
	}
      this->len_ = s.len_;
      ACE_OS::strcpy (this->rep_, s.rep_);
    }
  
  return *this;
}

// Return substring.
ACE_SString 
ACE_SString::substring (size_t offset,
			ssize_t length) const
{
  ACE_SString nil;
  size_t count = len_;

  // case 1. empty string
  if (len_ == 0)
    return nil;

  // case 2. start pos l
  if (offset >= len_)
    return nil;

  // get all remaining bytes
  if (length == -1)
    count = len_ - offset;

  return ACE_SString (&rep_[offset], count, this->allocator_);
}

ACE_ALLOC_HOOK_DEFINE(ACE_WString)

void
ACE_WString::dump (void) const
{
  ACE_TRACE ("ACE_WString::dump");
}

// Default constructor.

ACE_WString::ACE_WString (ACE_Allocator *alloc)
  : allocator_ (alloc),
    len_ (0),
    rep_ (0)
{
  ACE_TRACE ("ACE_WString::ACE_WString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  this->len_ = 0;
  this->rep_ = (ACE_USHORT16 *)  this->allocator_->malloc ((this->len_ + 1) * sizeof (ACE_USHORT16));
  this->rep_[this->len_] = 0;  

}

/* static */
size_t
ACE_WString::wstrlen (const ACE_USHORT16 *s)
{
  ACE_TRACE ("ACE_WString::wstrlen");
  int i;

  for (i = 0; s[i] != 0; i++)
    continue;
  
  return i;
}

// Get the underlying pointer as an ASCII char.

char *
ACE_WString::char_rep (void) const
{
  ACE_TRACE ("ACE_WString::char_rep");
  if (this->len_ <= 0)
    return 0;
  else
    {
      char *t;
      
      ACE_NEW_RETURN (t, char[this->len_ + 1], 0);

      for (size_t i = 0; i < this->len_; i++)
	// Note that this cast may lose data if wide chars are
	// actually used!
	t[i] = char (this->rep_[i]);

      t[this->len_] = '\0';
      return t;
    }
}

// Constructor that actually copies memory.

ACE_WString::ACE_WString (const char *s, 
			  ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_WString::ACE_WString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  if (s == 0)
    {
      this->len_ = 0;
      this->rep_ = (ACE_USHORT16 *)  this->allocator_->malloc ((this->len_ + 1) * sizeof (ACE_USHORT16));
      this->rep_[this->len_] = 0;  
    }
  else
    {
      this->len_ = ACE_OS::strlen (s);
      this->rep_ = (ACE_USHORT16 *) this->allocator_->malloc ((this->len_ + 1) * sizeof (ACE_USHORT16));

      // Copy the char * string byte-by-byte into the ACE_USHORT16 *
      // string. 
      for (size_t i = 0; i < this->len_; i++)
	this->rep_[i] = s[i];

      // null terminate 
      this->rep_[this->len_] = 0;
    }
}

// Constructor that actually copies memory.

ACE_WString::ACE_WString (const ACE_USHORT16 *s, 
			  ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_WString::ACE_WString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  if (s == 0)
    {
      this->len_ = 0;
      this->rep_ = (ACE_USHORT16 *)  this->allocator_->malloc ((this->len_ + 1) * sizeof (ACE_USHORT16));
      this->rep_[this->len_] = 0;  
    }
  else
    {
      this->len_ = this->wstrlen (s);
      this->rep_ = (ACE_USHORT16 *) this->allocator_->malloc ((this->len_ + 1) * sizeof (ACE_USHORT16));

      ACE_OS::memcpy (this->rep_, s, this->len_ * sizeof (ACE_USHORT16));

      // null terminate 
      this->rep_[this->len_] = 0;
    }
}

ACE_WString::ACE_WString (ACE_USHORT16 c, 
			  ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_WString::ACE_WString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  this->len_ = 1;
  this->rep_ = (ACE_USHORT16 *) this->allocator_->malloc ((this->len_ + 1) * sizeof (ACE_USHORT16));  
  this->rep_[0] = c;
  this->rep_[this->len_] = 0;
}

// Constructor that actually copies memory.

ACE_WString::ACE_WString (const ACE_USHORT16 *s, 
			  size_t len, 
			  ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_WString::ACE_WString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  if (s == 0)
    {
      this->len_ = 0;
      this->rep_ = (ACE_USHORT16 *) this->allocator_->malloc ((this->len_ + 1) * sizeof (ACE_USHORT16));
      this->rep_[this->len_] = 0;  
    }
  else
    {
      this->len_ = len;
      this->rep_ = (ACE_USHORT16 *) this->allocator_->malloc ((this->len_ + 1) * sizeof (ACE_USHORT16));

      ACE_OS::memcpy (this->rep_, s, len * sizeof (ACE_USHORT16));

      // null terminate 
      this->rep_[this->len_] = 0;
    }
}

// Constructor that allocates empty memory

ACE_WString::ACE_WString (size_t len, 
			  ACE_Allocator *alloc)
  : allocator_ (alloc)
{
  ACE_TRACE ("ACE_WString::ACE_WString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  this->len_ = len;
  this->rep_ = (ACE_USHORT16 *) this->allocator_->malloc ((this->len_ + 1) * sizeof (ACE_USHORT16));

  ACE_OS::memset (this->rep_, 0, len * sizeof (ACE_USHORT16));

  // null terminate 
  this->rep_[this->len_] = 0;
}

// Copy constructor.

ACE_WString::ACE_WString (const ACE_WString &s)
  : allocator_ (s.allocator_),
    len_ (s.len_)
{
  ACE_TRACE ("ACE_WString::ACE_WString");

  if (this->allocator_ == 0)
    this->allocator_ = ACE_Allocator::instance ();

  this->rep_ = (ACE_USHORT16 *) this->allocator_->malloc ((s.len_ + 1) * sizeof (ACE_USHORT16));
  ACE_OS::memcpy ((void *) this->rep_, (const void *) s.rep_,
		  this->len_ * sizeof (ACE_USHORT16));
  this->rep_[this->len_] = 0;
}

// Assignment operator (does copy memory).

ACE_WString & 
ACE_WString::operator= (const ACE_WString &s)
{
  ACE_TRACE ("ACE_WString::operator=");
  // Check for identify.

  if (this != &s)
    {
      // Only reallocate if we don't have enough space...
      if (this->len_ < s.len_)
	{
	  this->allocator_->free (this->rep_);
	  this->rep_ = (ACE_USHORT16 *) this->allocator_->malloc ((s.len_ + 1) * sizeof (ACE_USHORT16));
	}

      this->len_ = s.len_;
      ACE_OS::memcpy ((void *) this->rep_, (const void *) s.rep_,
		      this->len_ * sizeof (ACE_USHORT16));
      // null terminate 
      this->rep_[s.len_] = 0;
    }
  
  return *this;
}

// return substring
ACE_WString 
ACE_WString::substring (size_t offset,
			ssize_t length) const
{
  ACE_WString nil;
  size_t count = len_;

  // case 1. empty string
  if (len_ == 0)
    return nil;

  // case 2. start pos l
  if (offset >= len_)
    return nil;

  // get all remaining bytes
  if (length == -1)
    count = len_ - offset;

  return ACE_WString (&rep_[offset], count, this->allocator_);
}

void 
ACE_WString::resize (size_t len)
{
  ACE_TRACE ("ACE_WString::resize");

  // Only reallocate if we don't have enough space...
  if (this->len_ < len)
    {
      this->allocator_->free (this->rep_);
      this->rep_ = (ACE_USHORT16 *) this->allocator_->malloc ((len + 1) * sizeof (ACE_USHORT16));
    }

  this->len_ = len;
  ACE_OS::memset (this->rep_, 0, this->len_ * sizeof (ACE_USHORT16));
  this->rep_[this->len_] = 0;
}

// Concat operator (does copy memory).

ACE_WString &
ACE_WString::operator+= (const ACE_WString &s)
{
  ACE_TRACE ("ACE_WString::operator+=");
  ACE_USHORT16 *t = (ACE_USHORT16 *) this->allocator_->malloc ((this->len_ + s.len_ + 1) * sizeof (ACE_USHORT16));
  
  ACE_OS::memcpy ((void *) t, (const void *) this->rep_, this->len_ * sizeof (ACE_USHORT16));
  ACE_OS::memcpy ((void *) (t + this->len_), 
		  (const void *) s.rep_, s.len_ * sizeof (ACE_USHORT16));
  this->len_ += s.len_;

  // null terminate 
  t[this->len_] = 0;

  this->allocator_->free (this->rep_);
  this->rep_ = t;

  return *this;
}

ACE_WString::~ACE_WString (void)
{
  ACE_TRACE ("ACE_WString::~ACE_WString");
  this->allocator_->free (this->rep_);
}

/* static */
const ACE_USHORT16 *
ACE_WString::strstr (const ACE_USHORT16 *s1, const ACE_USHORT16 *s2)
{
  ACE_TRACE ("ACE_WString::strstr");

  size_t len1 = ACE_WString::wstrlen (s1);
  size_t len2 = ACE_WString::wstrlen (s2);

  size_t len = len1 - len2;
  
  for (size_t i = 0; i < len; i++)
    {
      size_t j;
      
      for (j = 0; j < len2; j++)
        if (s1[i + j] != s2[j])
          break;
      
      if (j == len2)
        // Found a match!  Return the index.
        return &s1[i];
    }
  
  return NULL;
}
