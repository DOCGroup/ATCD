// $Id$

#define  ACE_BUILD_SVC_DLL
#include "ace/Synch.h"
#include "Options.h"
#include "Benchmark.h"

#if defined (ACE_HAS_THREADS)

class ACE_Svc_Export Recursive_Lock_Test : public Benchmark
{
public:
  virtual int svc (void);

private:
  static ACE_Recursive_Thread_Mutex mutex;
};

ACE_Recursive_Thread_Mutex Recursive_Lock_Test::mutex;

int
Recursive_Lock_Test::svc (void)
{
  int ni = this->thr_id ();
  synch_count = 2;

  while (!this->done ())
    {
      this->mutex.acquire ();
      options.thr_work_count[ni]++;
      buffer++;
      this->mutex.release ();
    }
  /* NOTREACHED */
  return 0;
}

ACE_SVC_FACTORY_DECLARE (Recursive_Lock_Test)
ACE_SVC_FACTORY_DEFINE  (Recursive_Lock_Test)

// ACE_Service_Object_Type rlt (&recursive_lock_test, "Recursive_Lock_Test");
#endif /* ACE_HAS_THREADS */
