// Test out the ACE Token class.
// $Id$

#include "ace/Token.h"
#include "ace/Task.h"

#if defined (ACE_HAS_THREADS)

class My_Task : public ACE_Task<ACE_MT_SYNCH>
{
public:
  My_Task (int n);
  virtual int svc (void);

  static void sleep_hook (void *);

private:
  ACE_Token token_;
};

My_Task::My_Task (int n)
{
  // Make this Task into an Active Object.
  this->activate (THR_BOUND | THR_DETACHED, n);

  // Wait for all the threads to exit.
  this->thr_mgr ()->wait ();
}

void 
My_Task::sleep_hook (void *)
{
  cerr << '(' << ACE_Thread::self () << ')'
       << " blocking, My_Task::sleep_hook () called" << endl;
}

// Test out the behavior of the ACE_Token class.

int 
My_Task::svc (void)
{
  for (int i = 0; i < 100; i++)
    {
      // Wait for up to 1 millisecond past the current time to get the token.
      ACE_Time_Value timeout (ACE_OS::time (0), 1000);

      if (this->token_.acquire (&My_Task::sleep_hook, 0, &timeout) == 1)
	{
	  this->token_.acquire ();
	  this->token_.renew ();
	  this->token_.release ();
	  this->token_.release ();
	}
      else
	ACE_Thread::yield ();
    }
  return 0;
}

int 
main (int argc, char *argv[])
{
  My_Task tasks (argc > 1 ? atoi (argv[1]) : 4);

  return 0;
}
#else
int 
main (void)
{
  ACE_ERROR_RETURN ((LM_ERROR, "your platform doesn't support threads\n"), -1);
}
#endif /* */
