// This may look like C, but it's really -*- C++ -*-
// $Id$

// ***************************************************
// Operations on the generic unbounded sequence class.
// ***************************************************

template <typename T>
ACE_INLINE
T *
TAO_Unbounded_Sequence<T>::allocbuf (CORBA::ULong size)
{
  return new T[size];
}

template <typename T>
ACE_INLINE
void
TAO_Unbounded_Sequence<T>::freebuf (T *buffer)
{
  delete [] buffer;
}

template <typename T>
ACE_INLINE
TAO_Unbounded_Sequence<T>::TAO_Unbounded_Sequence (void)
{
}

template <typename T>
ACE_INLINE
TAO_Unbounded_Sequence<T>::TAO_Unbounded_Sequence (CORBA::ULong maximum)
  : TAO_Unbounded_Base_Sequence (maximum,
                                 TAO_Unbounded_Sequence<T>::allocbuf (maximum))
{
}

template <typename T>
ACE_INLINE
TAO_Unbounded_Sequence<T>::TAO_Unbounded_Sequence (CORBA::ULong maximum,
                                                   CORBA::ULong length,
                                                   T * data,
                                                   CORBA::Boolean release)
  : TAO_Unbounded_Base_Sequence (maximum, length, data, release)
{
}

template <typename T>
ACE_INLINE
const T *
TAO_Unbounded_Sequence<T>::get_buffer (void) const
{
  return reinterpret_cast<const T * ACE_CAST_CONST> (this->buffer_);
}

// ***************************************************
// operations on the generic Bounded sequence class
// ***************************************************

template <typename T, size_t MAX>
ACE_INLINE
T *
TAO_Bounded_Sequence<T, MAX>::allocbuf (CORBA::ULong)
{
  return new T[MAX];
}

template <typename T, size_t MAX>
ACE_INLINE
void
TAO_Bounded_Sequence<T, MAX>::freebuf (T * buffer)
{
  delete [] buffer;
}

template <typename T, size_t MAX>
ACE_INLINE
TAO_Bounded_Sequence<T, MAX>::TAO_Bounded_Sequence (void)
{
  this->maximum_ = MAX;
}

template <typename T, size_t MAX>
ACE_INLINE
TAO_Bounded_Sequence<T, MAX>::TAO_Bounded_Sequence (CORBA::ULong length,
                                                    T * data,
                                                    CORBA::Boolean release)
  : TAO_Bounded_Base_Sequence (MAX, length, data, release)
{
}

template <typename T, size_t MAX>
ACE_INLINE
const T *
TAO_Bounded_Sequence<T, MAX>::get_buffer (void) const
{
  return reinterpret_cast<const T * ACE_CAST_CONST> (this->buffer_);
}

template <class T, size_t MAX>
ACE_INLINE
T &
TAO_Bounded_Sequence<T, MAX>::operator[] (CORBA::ULong i)
{
  TAO_SEQUENCE_ASSERT (i, this->maximum_);
  T * tmp = reinterpret_cast<T *> (this->buffer_);
  return tmp[i];
}

template <class T, size_t MAX>
ACE_INLINE
const T &
TAO_Bounded_Sequence<T, MAX>::operator[] (CORBA::ULong i) const
{
  TAO_SEQUENCE_ASSERT (i, this->maximum_);
  const T * tmp = reinterpret_cast<const T * ACE_CAST_CONST> (this->buffer_);
  return tmp[i];
}

// *************************************************************
// Inline operations for class TAO_Object_Manager<T>
// *************************************************************

template <typename T, typename T_var>
ACE_INLINE
TAO_Object_Manager<T,T_var>::~TAO_Object_Manager (void)
{
}

template <typename T, typename T_var>
ACE_INLINE
TAO_Object_Manager<T,T_var>::TAO_Object_Manager (
    const TAO_Object_Manager<T,T_var> & rhs
  )
  : ptr_ (rhs.ptr_),
    release_ (rhs.release_)
{
}

template <typename T, typename T_var>
ACE_INLINE
TAO_Object_Manager<T,T_var>::TAO_Object_Manager (
    T ** buffer,
    CORBA::Boolean release
  )
  : ptr_ (buffer),
    release_ (release)
{
}

template <typename T, typename T_var>
ACE_INLINE T *
TAO_Object_Manager<T,T_var>::operator-> (void) const
{
  return *this->ptr_;
}

template <typename T, typename T_var>
ACE_INLINE
TAO_Object_Manager<T,T_var>::operator const T_var () const
{
  return TAO::Objref_Traits<T>::tao_duplicate (*this->ptr_);
}

template <typename T, typename T_var>
ACE_INLINE
TAO_Object_Manager<T,T_var>::operator const T *() const
{
  return *this->ptr_;
}

template <typename T, typename T_var>
ACE_INLINE
TAO_Object_Manager<T,T_var>::operator T *&()
{
  return *this->ptr_;
}

template <typename T, typename T_var>
ACE_INLINE
T *
TAO_Object_Manager<T,T_var>::in (void) const
{
  return *this->ptr_;
}

template <typename T, typename T_var>
ACE_INLINE
T *&
TAO_Object_Manager<T,T_var>::inout (void)
{
  return *this->ptr_;
}

// *************************************************************
// Inline operations for class TAO_Pseudo_Object_Manager<T>
// *************************************************************

template <typename T>
ACE_INLINE
TAO_Pseudo_Object_Manager<T>::~TAO_Pseudo_Object_Manager (void)
{
}

template <typename T>
ACE_INLINE
TAO_Pseudo_Object_Manager<T>::TAO_Pseudo_Object_Manager (
    const TAO_Pseudo_Object_Manager<T> & rhs
  )
  : ptr_ (rhs.ptr_),
    release_ (rhs.release_)
{
}

template <typename T>
ACE_INLINE
TAO_Pseudo_Object_Manager<T>::TAO_Pseudo_Object_Manager(
    T ** buffer,
    CORBA::Boolean release
  )
  : ptr_ (buffer),
    release_ (release)
{
}

template <typename T>
ACE_INLINE
T *
TAO_Pseudo_Object_Manager<T>::operator-> (void) const
{
  return *this->ptr_;
}

template <typename T>
ACE_INLINE
TAO_Pseudo_Object_Manager<T>::operator const T * () const
{
  return *this->ptr_;
}

template <typename T>
ACE_INLINE
TAO_Pseudo_Object_Manager<T>::operator T *& ()
{
  return *this->ptr_;
}

template <typename T>
ACE_INLINE
T *
TAO_Pseudo_Object_Manager<T>::in (void) const
{
  return *this->ptr_;
}

template <typename T>
ACE_INLINE
T *&
TAO_Pseudo_Object_Manager<T>::inout (void)
{
  return *this->ptr_;
}

template <typename T>
ACE_INLINE
T *&
TAO_Pseudo_Object_Manager<T>::out (void)
{
  CORBA::release (*this->ptr_);
  *this->ptr_ = T::_nil ();
  return *this->ptr_;
}

template <typename T>
ACE_INLINE
T *
TAO_Pseudo_Object_Manager<T>::_retn (void)
{
  T * temp = *this->ptr_;
  *this->ptr_ = T::_nil ();
  return temp;
}

// *************************************************************
// class TAO_Unbounded_Object_Sequence
// *************************************************************

template <typename T, typename T_var>
ACE_INLINE
TAO_Unbounded_Object_Sequence<T,T_var>::TAO_Unbounded_Object_Sequence (void)
{
}

template <typename T, typename T_var>
ACE_INLINE
TAO_Unbounded_Object_Sequence<T,T_var>::TAO_Unbounded_Object_Sequence (
    CORBA::ULong maximum,
    CORBA::ULong length,
    T* *value,
    CORBA::Boolean release
  )
  : TAO_Unbounded_Base_Sequence (maximum, length, value, release)
{
}

template <typename T, typename T_var>
ACE_INLINE
TAO_Object_Manager<T,T_var>
TAO_Unbounded_Object_Sequence<T,T_var>::operator[] (
    CORBA::ULong slot
  ) const
{
  TAO_SEQUENCE_ASSERT (slot, this->maximum_);
  T ** const tmp = reinterpret_cast<T ** ACE_CAST_CONST> (this->buffer_);
  return
    TAO_Object_Manager<T,T_var> (tmp + slot, this->release_);
}

// *************************************************************
// class TAO_Bounded_Object_Sequence
// *************************************************************

template <typename T, typename T_var, size_t MAX>
ACE_INLINE
TAO_Bounded_Object_Sequence<T,T_var,MAX>::~TAO_Bounded_Object_Sequence (void)
{
  this->_deallocate_buffer ();
}

template <typename T, typename T_var, size_t MAX>
ACE_INLINE
TAO_Bounded_Object_Sequence<T,T_var,MAX>::TAO_Bounded_Object_Sequence (
    CORBA::ULong length,
    T ** value,
    CORBA::Boolean release
  )
  : TAO_Bounded_Base_Sequence (MAX, length, value, release)
{
}

template <typename T, typename T_var, size_t MAX>
ACE_INLINE
TAO_Object_Manager<T,T_var>
TAO_Bounded_Object_Sequence<T, T_var,MAX>::operator[] (
    CORBA::ULong slot
  ) const
{
  TAO_SEQUENCE_ASSERT (slot, this->maximum_);
  T ** const tmp = reinterpret_cast<T ** ACE_CAST_CONST> (this->buffer_);
  return
    TAO_Object_Manager<T,T_var> (tmp + slot, this->release_ );
}

// *************************************************************
// class TAO_Unbounded_Pseudo_Sequence
// *************************************************************

template <typename T>
ACE_INLINE
TAO_Unbounded_Pseudo_Sequence<T>::TAO_Unbounded_Pseudo_Sequence (void)
{
}

template <typename T>
ACE_INLINE
TAO_Unbounded_Pseudo_Sequence<T>::TAO_Unbounded_Pseudo_Sequence (
    CORBA::ULong maximum,
    CORBA::ULong length,
    T ** value,
    CORBA::Boolean release
  )
  : TAO_Unbounded_Base_Sequence (maximum, length, value, release)
{
}

template <typename T>
ACE_INLINE
TAO_Pseudo_Object_Manager<T>
TAO_Unbounded_Pseudo_Sequence<T>::operator[] (CORBA::ULong slot) const
{
  TAO_SEQUENCE_ASSERT (slot, this->maximum_);
  T ** const tmp = reinterpret_cast<T ** ACE_CAST_CONST> (this->buffer_);
  return TAO_Pseudo_Object_Manager<T> (tmp + slot, this->release_);
}

// *************************************************************
// class TAO_Bounded_Pseudo_Sequence
// *************************************************************

template <typename T, size_t MAX>
ACE_INLINE
TAO_Bounded_Pseudo_Sequence<T,MAX>::~TAO_Bounded_Pseudo_Sequence (void)
{
  this->_deallocate_buffer ();
}

template <typename T, size_t MAX>
ACE_INLINE
TAO_Bounded_Pseudo_Sequence<T,MAX>::TAO_Bounded_Pseudo_Sequence (
    CORBA::ULong length,
    T ** value,
    CORBA::Boolean release
  )
  : TAO_Bounded_Base_Sequence (MAX, length, value, release)
{
}

template <typename T, size_t MAX>
ACE_INLINE
TAO_Pseudo_Object_Manager<T>
TAO_Bounded_Pseudo_Sequence<T,MAX>::operator[] (CORBA::ULong slot) const
{
  TAO_SEQUENCE_ASSERT (slot, this->maximum_);
  T ** const tmp = reinterpret_cast<T ** ACE_CAST_CONST> (this->buffer_);
  return TAO_Pseudo_Object_Manager<T> (tmp + slot,
                                       this->release_);
}

// *************************************************************
// class TAO_Unbounded_Array_Sequence
// *************************************************************

template <typename T, typename T_slice, typename TAG>
ACE_INLINE
void
TAO_Unbounded_Array_Sequence<T,T_slice,TAG>::freebuf (T * buffer)
{
  if (buffer == 0)
    {
        return;
    }

  delete [] buffer;
}

template <typename T, typename T_slice, typename TAG>
ACE_INLINE
TAO_Unbounded_Array_Sequence<T,T_slice,TAG>::TAO_Unbounded_Array_Sequence (
    void
  )
{
}

template <typename T, typename T_slice, typename TAG>
ACE_INLINE
TAO_Unbounded_Array_Sequence<T,T_slice,TAG>::
TAO_Unbounded_Array_Sequence (CORBA::ULong maximum)
  : TAO_Unbounded_Base_Sequence (
        maximum,
        TAO_Unbounded_Array_Sequence<T,T_slice,TAG>::allocbuf (maximum)
      )
{
}

template <typename T, typename T_slice, typename TAG>
ACE_INLINE
TAO_Unbounded_Array_Sequence<T,T_slice,TAG>::
TAO_Unbounded_Array_Sequence (CORBA::ULong maximum,
                              CORBA::ULong length,
                              T * value,
                              CORBA::Boolean release)
  : TAO_Unbounded_Base_Sequence (maximum, length, value, release)
{
}

template <typename T, typename T_slice, typename TAG>
ACE_INLINE
T &
TAO_Unbounded_Array_Sequence<T,T_slice,TAG>::operator[] (CORBA::ULong i)
{
  TAO_SEQUENCE_ASSERT (i, this->maximum_);

#if defined (__SUNPRO_CC) && (__SUNPRO_CC < 0x500)
  return ((T *) this->buffer_)[i];
#else /* (__SUNPRO_CC) && (__SUNPRO_CC < 0x500) */
  return (reinterpret_cast<T *> (this->buffer_))[i];
#endif /* (__SUNPRO_CC) && (__SUNPRO_CC < 0x500) */
}

template <typename T, typename T_slice, typename TAG>
ACE_INLINE
const T &
TAO_Unbounded_Array_Sequence<T,T_slice,TAG>::operator[] (CORBA::ULong i) const
{
  TAO_SEQUENCE_ASSERT (i, this->maximum_);

#if defined (__SUNPRO_CC) && (__SUNPRO_CC < 0x500)
  return ((const T * ACE_CAST_CONST) this->buffer_)[i];
#else /* (__SUNPRO_CC) && (__SUNPRO_CC < 0x500) */
  return (reinterpret_cast<const T * ACE_CAST_CONST> (this->buffer_))[i];
#endif /* (__SUNPRO_CC) && (__SUNPRO_CC < 0x500) */
}

template <typename T, typename T_slice, typename TAG>
ACE_INLINE
const T *
TAO_Unbounded_Array_Sequence<T,T_slice,TAG>::get_buffer (void) const
{
  return reinterpret_cast<const T * ACE_CAST_CONST> (this->buffer_);
}

// *************************************************************
// class TAO_Bounded_Array_Sequence
// *************************************************************

template <typename T, typename T_slice, typename TAG, size_t MAX>
ACE_INLINE
TAO_Bounded_Array_Sequence<T,T_slice,TAG,MAX>::
TAO_Bounded_Array_Sequence (void)
  : TAO_Bounded_Base_Sequence (MAX, 0, allocbuf (MAX), 1)
{
}

template <typename T, typename T_slice, typename TAG, size_t MAX>
ACE_INLINE
TAO_Bounded_Array_Sequence<T,T_slice,TAG,MAX>::
TAO_Bounded_Array_Sequence (CORBA::ULong length,
                            T * data,
                            CORBA::Boolean release)
  : TAO_Bounded_Base_Sequence (MAX, length, data, release)
{
}

template <typename T, typename T_slice, typename TAG, size_t MAX>
ACE_INLINE
T &
TAO_Bounded_Array_Sequence<T,T_slice,TAG,MAX>::operator[] (CORBA::ULong i)
{
  TAO_SEQUENCE_ASSERT (i, this->maximum_);

#if defined (__SUNPRO_CC) && (__SUNPRO_CC < 0x500)
  return ((T *) this->buffer_)[i];
#else /* (__SUNPRO_CC) && (__SUNPRO_CC < 0x500) */
  return (reinterpret_cast<T *> (this->buffer_))[i];
#endif /* (__SUNPRO_CC) && (__SUNPRO_CC < 0x500) */
}

template <typename T, typename T_slice, typename TAG, size_t MAX>
ACE_INLINE
const T &
TAO_Bounded_Array_Sequence<T,T_slice,TAG,MAX>::operator[] (
    CORBA::ULong i
  ) const
{
  TAO_SEQUENCE_ASSERT (i, this->maximum_);

#if defined (__SUNPRO_CC) && (__SUNPRO_CC < 0x500)
  return ((const T * ACE_CAST_CONST) this->buffer_)[i];
#else /* (__SUNPRO_CC) && (__SUNPRO_CC < 0x500) */
  return (reinterpret_cast<const T * ACE_CAST_CONST> (this->buffer_))[i];
#endif /* (__SUNPRO_CC) && (__SUNPRO_CC < 0x500) */
}

template <typename T, typename T_slice, typename TAG, size_t MAX>
ACE_INLINE
const T *
TAO_Bounded_Array_Sequence<T,T_slice,TAG,MAX>::get_buffer (void) const
{
  return reinterpret_cast<const T * ACE_CAST_CONST> (this->buffer_);
}

// *************************************************************
// class TAO_Bounded_String_Sequence
// *************************************************************

template<size_t MAX>
ACE_INLINE
TAO_Bounded_String_Sequence<MAX>::~TAO_Bounded_String_Sequence (void)
{
  this->_deallocate_buffer ();
}

template<size_t MAX>
ACE_INLINE
TAO_Bounded_String_Sequence<MAX>::
TAO_Bounded_String_Sequence (CORBA::ULong length,
                             char ** value,
                             CORBA::Boolean release)
  : TAO_Bounded_Base_Sequence (MAX, length, value, release)
{
}

// *************************************************************
// class TAO_Bounded_WString_Sequence
// *************************************************************

template<size_t MAX>
ACE_INLINE
TAO_Bounded_WString_Sequence<MAX>::~TAO_Bounded_WString_Sequence (void)
{
  this->_deallocate_buffer ();
}

template<size_t MAX>
ACE_INLINE
TAO_Bounded_WString_Sequence<MAX>::
TAO_Bounded_WString_Sequence (CORBA::ULong length,
                              CORBA::WChar ** value,
                              CORBA::Boolean release)
  : TAO_Bounded_Base_Sequence (MAX, length, value, release)
{
}
