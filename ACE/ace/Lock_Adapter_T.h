// -*- C++ -*-

//==========================================================================
/**
 *  @file    Lock_Adapter_T.h
 *
 *   Moved from Synch.h.
 *
 *  @author Douglas C. Schmidt <d.schmidt@vanderbilt.edu>
 */
//==========================================================================

#ifndef ACE_LOCK_ADAPTER_T_H
#define ACE_LOCK_ADAPTER_T_H
#include /**/ "pre.h"

#include "Lock.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

/**
 * @class ACE_Lock_Adapter
 *
 * @brief This is an adapter that allows applications to transparently
 * combine the ACE_Lock abstract base class (which contains
 * pure virtual methods) with any of the other concrete ACE
 * synchronization classes (e.g., ACE_Mutex, ACE_Semaphore,
 * ACE_RW_Mutex, etc.).
 *
 * This class uses a form of the Adapter pattern.
 */
template <class ACE_LOCKING_MECHANISM>
class ACE_Lock_Adapter : public ACE_Lock
{
public:
  typedef ACE_LOCKING_MECHANISM ACE_LOCK;

  // = Initialization/Finalization methods.

  /// Constructor. All locking requests will be forwarded to @a lock.
  ACE_Lock_Adapter (ACE_LOCKING_MECHANISM &lock);

  /// Constructor. Since no lock is provided by the user, one will be
  /// created internally.
  ACE_Lock_Adapter ();

  /// Destructor. If @c lock_ was not passed in by the user, it will be
  /// deleted.
  virtual ~ACE_Lock_Adapter ();

  // = Lock accessors.
  /// Block the thread until the lock is acquired.
  virtual int acquire ();

  /// Conditionally acquire the lock (i.e., won't block).
  virtual int tryacquire ();

  /// Release the lock.
  virtual int release ();

  /**
   * Block until the thread acquires a read lock.  If the locking
   * mechanism doesn't support read locks then this just calls
   * acquire().
   */
  virtual int acquire_read ();

  /**
   * Block until the thread acquires a write lock.  If the locking
   * mechanism doesn't support read locks then this just calls
   * acquire().
   */
  virtual int acquire_write ();

  /// Conditionally acquire a read lock.  If the locking mechanism
  /// doesn't support read locks then this just calls acquire().
  virtual int tryacquire_read ();

  /// Conditionally acquire a write lock.  If the locking mechanism
  /// doesn't support read locks then this just calls acquire().
  virtual int tryacquire_write ();

  /**
   * Conditionally try to upgrade a lock held for read to a write lock.
   * If the locking mechanism doesn't support read locks then this just
   * calls acquire(). Returns 0 on success, -1 on failure.
   */
  virtual int tryacquire_write_upgrade ();

  /// Explicitly destroy the lock.
  virtual int remove ();

private:
  /// The concrete locking mechanism that all the methods delegate to.
  ACE_LOCKING_MECHANISM *lock_;

  /// This flag keep track of whether we are responsible for deleting
  /// the lock
  bool delete_lock_;
};

ACE_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "Lock_Adapter_T.inl"
#endif /* __ACE_INLINE__ */

#if defined (ACE_TEMPLATES_REQUIRE_SOURCE)
#include "Lock_Adapter_T.cpp"
#endif /* ACE_TEMPLATES_REQUIRE_SOURCE */

#if defined (ACE_TEMPLATES_REQUIRE_PRAGMA)
#pragma implementation ("Lock_Adapter_T.cpp")
#endif /* ACE_TEMPLATES_REQUIRE_PRAGMA */

#include /**/ "post.h"
#endif /* ACE_LOCK_ADAPTER_T_H */
