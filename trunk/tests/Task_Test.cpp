// $Id$

// ============================================================================
//
// = LIBRARY
//    tests
// 
// = FILENAME
//    Task_Test.cpp
//
// = DESCRIPTION
//      This test program illustrates how the ACE barrier
//      synchronization mechanisms work in conjunction with the
//      ACE_Task and the ACE_Thread_Manager.
//
// = AUTHOR
//    Prashant Jain and Doug C. Schmidt
// 
// ============================================================================


#include "ace/Service_Config.h"
#include "ace/Task.h"
#include "test_config.h"

#if defined (ACE_HAS_THREADS)

class Barrier_Task : public ACE_Task<ACE_MT_SYNCH>
{
public:
  Barrier_Task (ACE_Thread_Manager *thr_mgr,
		int n_threads, 
		int n_iterations,
		ACE_hthread_t thread_handles[]);
  
  virtual int svc (void);
  // Iterate <n_iterations> time printing off a message and "waiting"
  // for all other threads to complete this iteration.

private:
  ACE_Barrier barrier_;
  // Reference to the tester barrier.  This controls each
  // iteration of the tester function running in every thread.

  int n_iterations_;
  // Number of iterations to run.
};

Barrier_Task::Barrier_Task (ACE_Thread_Manager *thr_mgr, 
			    int n_threads, 
			    int n_iterations,
			    ACE_hthread_t thread_handles[])
  : ACE_Task<ACE_MT_SYNCH> (thr_mgr), 
    barrier_ (n_threads), 
    n_iterations_ (n_iterations) 
{
  // Create worker threads.
  if (this->activate (THR_NEW_LWP,
		      n_threads,
		      0,
		      ACE_DEFAULT_THREAD_PRIORITY,
		      -1,
		      0,
		      thread_handles) == -1)
    ACE_ERROR ((LM_ERROR, "%p\n", "activate failed"));
}
  
// Iterate <n_iterations> time printing off a message and "waiting"
// for all other threads to complete this iteration.

int 
Barrier_Task::svc (void) 
{  
  // Note that the ACE_Task::svc_run() method automatically adds us to
  // the Thread_Manager when the thread begins.
  ACE_NEW_THREAD;

  for (int iterations = 1; 
       iterations <= this->n_iterations_;
       iterations++)
    {
      ACE_DEBUG ((LM_DEBUG, "(%t) in iteration %d\n", iterations));

      // Block until all other threads have waited, then continue.
      this->barrier_.wait ();
    }

  // Note that the ACE_Task::svc_run() method automatically removes us
  // from the Thread_Manager when the thread exits.

  return 0;
}

#endif /* ACE_HAS_THREADS */

int 
main (int, char *[])
{
  ACE_START_TEST ("Task_Test");

#if defined (ACE_HAS_THREADS)
  int n_threads = ACE_MAX_THREADS;
  int n_iterations = ACE_MAX_ITERATIONS;
  ACE_hthread_t *thread_handles;

  ACE_NEW_RETURN (thread_handles, ACE_hthread_t[n_threads], -1);

  Barrier_Task barrier_task (ACE_Thread_Manager::instance (), 
			     n_threads, 
			     n_iterations,
			     thread_handles);

#if !defined (VXWORKS)
      // VxWorks doesn't support thr_join() semantics...  Someday
      // we'll fix this.
      ACE_Thread_Manager::instance ()->wait ();
#else
      // Wait for all the threads to reach their exit point and then join
      // with all the exiting threads.
      for (int i = 0;
	   i < n_threads;
	   i++)
	if (ACE_Thread::join (thread_handles[i]) == -1)
	  ACE_ERROR_RETURN ((LM_ERROR, "%p\n", "join"), -1);
#endif /* VXWORKS */     

  delete [] thread_handles;

#else
  ACE_ERROR ((LM_ERROR, "threads not supported on this platform\n"));
#endif /* ACE_HAS_THREADS */
  ACE_END_TEST;
  return 0;
}
