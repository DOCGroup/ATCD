/* -*- C++ -*- */

// = LIBRARY
//     TAO
// = FILENAME
//     params.h
// = AUTHOR
//     Chris Cleeland
// = VERSION
//     $Id$

#if !defined(TAO_PARAMS_H)
#  define TAO_PARAMS_H

#  if defined(__IIOP_BUILD)
#    include "boa.h"
#  else
#    include <corba/boa.h>
#  endif

#  include "ace/Singleton.h"

class ROA;
class ROA_Handler;
typedef ROA* ROA_ptr;

class ORB_Parameters
// = TITLE
//    Parameters that are specific to the ORB.  These parameters can be
//    for the client, the server, or for both.
//
{
public:
  // = SERVER-SIDE
};

class OA_Parameters
// = TITLE
//    Parameters specific to an Object Adapter.  By definition, this
//    is only on the server side, since a client does not have an object
//    adapter.
//
// = NOTES
//    This can be subclassed in order to have OA-specific parameters, e.g.,
//    the Realtime Object Adapter might subclass this and add its own
//    parameters.
{
public:
  enum DEMUX_STRATEGY{
    TAO_LINEAR,
    TAO_DYNAMIC_HASH,
    TAO_ACTIVE_DEMUX,
    TAO_USER_DEFINED
  };

  typedef CORBA_BOA::dsi_handler UpcallFunc;
  typedef void (*ForwardFunc)(CORBA_OctetSeq&, CORBA_Object_ptr&, void*, CORBA_Environment&);

  ROA_Parameters();

  // = THREAD-RELATED THINGS
  // 
  // Need to add a member function to return a
  // pointer to the concurrency strategy (ala
  // ACE_Concurrency_Strategy).
  int using_threads();
				// Returns non-zero if the ORB should use
				// threading.
  void using_threads(int i);
				// Sets the threading flag to <i>.
  unsigned int thread_flags();
				// Returns flags to be passed to <ACE_OS::thr_create()>
				// on thread creation.
  void thread_flags(unsigned int f);
				// Set flags to be passed to <ACE_OS::thr_create()>
				// on thread creation.

  void* context();
  void context(void* p);

  // = HOOK BACK TO APPLICATION
  UpcallFunc upcall();
				// Pointer to the function which is
				// the upcall from the Object Adapter
				// into the application code.  At some
				// point this should go away and be
				// replaced with an argument to a
				// method like
				// <ROA::register_object()>, or
				// something.
  void upcall(UpcallFunc f);
				// Set the upcall function (see
				// <upcall()>).

  ForwardFunc forwarder();
				// Haven't figured out what the forwarder
				// really does...don't really care right now.
  void forwarder(ForwardFunc f);
				// Haven't figured out what the forwarder
				// really does...don't really care right now.

  CORBA_BOA_ptr oa();
				// Return the handle to the One True Object Adapter.
				// The code from which <{TAO}> is derived makes a vast
				// assumption that there will only be one Object Adapter
				// in process.
  void oa(CORBA_BOA_ptr anOA);
				// Set the handle to the One True Object Adapter.
  void addr(ACE_INET_Addr &addr);
  ACE_INET_Addr addr();
  void demux_strategy(char *strategy);
  ROA_Parameters::DEMUX_STRATEGY demux_strategy();
  void tablesize(CORBA_ULong tablesize);
  CORBA_ULong tablesize();
private:
  int using_threads_;		// If non-zero, threads are used for processing requests
  unsigned int thread_flags_;	// Flags passed to <thr_create> when threads created
  void* context_p_;
  UpcallFunc upcall_;		// Function pointer to application upcall
  ForwardFunc forwarder_;	// 
  CORBA_BOA_ptr oa_;			// Pointer to One True Object Adapter
  ROA_Parameters::DEMUX_STRATEGY demux_;  // demux strategy
  ACE_INET_Addr addr_;          // host + port number we are listening on
  CORBA_ULong tablesize_;       // size of object lookup table
};

// Create a type for the singleton
typedef ACE_Singleton<OA_Parameters, ACE_Thread_Mutex> OA_PARAMS;

#  if defined(__ACE_INLINE__)
#    include "params.i"
#  endif

#endif
