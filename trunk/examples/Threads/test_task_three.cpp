// Exercise more tests for the ACE Tasks.  This also shows off some
// $Id$

// interesting uses of the ACE Log_Msg's ability to print to ostreams.
// BTW, make sure that you set the out_stream in *every* thread that
// you want to have write to the output file, i.e.:
//
//
//  if (out_stream)
//    {
//      ACE_LOG_MSG->set_flags (ACE_Log_Msg::OSTREAM);
//      ACE_LOG_MSG->msg_ostream (out_stream);
//    }

#include <fstream.h>
#include "ace/Reactor.h"
#include "ace/Service_Config.h"
#include "ace/Task.h"
#include "ace/Log_Msg.h"

#if defined (ACE_HAS_THREADS)

static ofstream *out_stream = 0;

static const int NUM_INVOCATIONS = 100;
static const int TASK_COUNT = 130;

class Test_Task : public ACE_Task<ACE_MT_SYNCH>
{
public:
  Test_Task (void);
  ~Test_Task (void);

  virtual int open (void *args = 0);
  virtual int close (u_long flags = 0);
  virtual int put (ACE_Message_Block *, ACE_Time_Value *tv = 0);
  virtual int svc (void);

  virtual int handle_input (ACE_HANDLE fd);

  ACE_Reactor *r_;
  int handled_;
  static int current_count_;
  static int done_cnt_;
};

int Test_Task::current_count_ = 0;
int Test_Task::done_cnt_ = 0;

static ACE_Thread_Mutex lock_;

Test_Task::Test_Task (void)
{
  ACE_GUARD (ACE_Thread_Mutex, ace_mon, lock_);

  this->handled_ = 0;
  Test_Task::current_count_++;
  ACE_DEBUG ((LM_DEBUG, 
	      "Test_Task constructed, current_count_ = %d\n", 
	      Test_Task::current_count_));
}

Test_Task::~Test_Task (void)
{
  ACE_GUARD (ACE_Thread_Mutex, ace_mon, lock_);

  ACE_DEBUG ((LM_DEBUG, "Test_Task destroyed, current_count_ = %d\n",
	      Test_Task::current_count_));
}

int 
Test_Task::open (void *args)
{
  r_ = (ACE_Reactor *) args;
  return ACE_Task<ACE_MT_SYNCH>::activate (THR_NEW_LWP);
}

int 
Test_Task::close (u_long flags)
{
  ACE_GUARD_RETURN (ACE_Thread_Mutex, ace_mon, lock_, -1);

  Test_Task::current_count_--;
  ACE_DEBUG ((LM_DEBUG, "Test_Task::close () current_count_ = %d.\n", 
	      Test_Task::current_count_));
  return 0;
}

int 
Test_Task::put (ACE_Message_Block *mb, ACE_Time_Value *tv)
{
  return 0;
}

int 
Test_Task::svc (void)
{
  // Every thread must register the same stream to write to file.
  if (out_stream)
    {
      ACE_LOG_MSG->set_flags (ACE_Log_Msg::OSTREAM);
      ACE_LOG_MSG->msg_ostream (out_stream);
    }

  for (int index = 0; index < NUM_INVOCATIONS; index++)
    {
      ACE_OS::thr_yield ();

      if (r_->notify (this, ACE_Event_Handler::READ_MASK))
	{
	  ACE_GUARD_RETURN (ACE_Thread_Mutex, ace_mon, lock_, -1);

	  ACE_DEBUG ((LM_DEBUG, "Test_Task: error notifying reactor!\n"));
	}
    }

  ACE_DEBUG ((LM_DEBUG, " (%t) returning from svc ()\n"));
  return 0;
}

int 
Test_Task::handle_input (ACE_HANDLE)
{
  this->handled_++;

  if (this->handled_ == NUM_INVOCATIONS)
    {
      ACE_GUARD_RETURN (ACE_Thread_Mutex, ace_mon, lock_, -1);
      Test_Task::done_cnt_++;
      ACE_DEBUG ((LM_DEBUG, 
		  " (%t) Test_Task: handle_input! done_cnt_ = %d.\n",
		  Test_Task::done_cnt_));
    }

  ACE_OS::thr_yield ();
  return -1;
}

void * 
dispatch (void *arg)
{
  // every thread must register the same stream to write to file
  if (out_stream)
    {
      ACE_LOG_MSG->set_flags (ACE_Log_Msg::OSTREAM);
      ACE_LOG_MSG->msg_ostream (out_stream);
    }

  ACE_DEBUG ((LM_DEBUG, " (%t) Dispatcher Thread started!\n"));
  ACE_Reactor *r = (ACE_Reactor *) arg;
  int result;

  r->owner (ACE_OS::thr_self ());

  while (1)
    {
      result = r->handle_events ();
      if (result <= 0)
	ACE_DEBUG ((LM_DEBUG, "Dispatch: handle_events (): %d", result));
    }

  return 0;
}

static void 
handler (int signum)
{
  *out_stream << flush;
  out_stream->close ();
  ACE_OS::exit (42);
}

int 
main (int argc, char **argv)
{
  if (argc > 1)
    {
      // Send output to file.
      out_stream = new ofstream ("test_task_three.out", ios::trunc|ios::out);
      ACE_LOG_MSG->set_flags (ACE_Log_Msg::OSTREAM);
      ACE_LOG_MSG->msg_ostream (out_stream);
      signal (SIGINT, ACE_SignalHandler (handler));
    }

  ACE_Reactor *reactor1 = ACE_Service_Config::reactor ();
  ACE_Reactor *reactor2 = new ACE_Reactor ();

  Test_Task t1[TASK_COUNT];
  Test_Task t2[TASK_COUNT];

  ACE_Thread::spawn (dispatch, reactor2);

  reactor1->owner (ACE_OS::thr_self ());

  for (int index = 0; index < TASK_COUNT; index++)
    {
      t1[index].open (reactor1);
      t2[index].open (reactor2);
    }

  ACE_OS::sleep (3);

  for (;;)
    {
      ACE_Time_Value timeout (2);

      if (reactor1->handle_events (timeout) <= 0)
	{
	  if (errno == ETIME)
	    {
	      ACE_DEBUG ((LM_DEBUG, "no activity within 2 seconds, shutting down\n"));
	      break;
	    }
	  else
	    ACE_ERROR ((LM_ERROR, "%p error handling events\n", "main"));
	}
    }

  return 0;
}

#else
int 
main (int, char *[])
{
  ACE_ERROR ((LM_ERROR, "threads not supported on this platform\n"));
  return 0;
}
#endif /* ACE_HAS_THREADS */
