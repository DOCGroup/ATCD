// $Id:

// ============================================================================
//
// = LIBRARY
//    TAO/tests/Param_Test
//
// = FILENAME
//    results.cpp
//
// = DESCRIPTION
//    Printing the results
//
// = AUTHORS
//    Aniruddha Gokhale
//
// ============================================================================

#include "results.h"

Results::Results (void)
{
}

Results::~Results (void)
{
  delete [] this->elapsed_time_;
}

void
Results::print_stats (const char *call_name)
{
  double
    avg_real_time = 0,
    avg_user_time = 0,
    avg_system_time = 0,
    cps; // calls per sec

  CORBA::ULong i;

  ACE_DEBUG ((LM_DEBUG,
	      "********** %s *********\n",
	      call_name));

  if (this->error_count_ == 0)
    {
      ACE_DEBUG ((LM_DEBUG,
                  "Iteration\tReal time (msec)\tUser time (msec)"
                  "\tSystem time (msec)\n\n"));
      for (i = 0; i < this->call_count_; i++)
        {
          this->elapsed_time_[i].real_time *= ACE_ONE_SECOND_IN_MSECS;
          this->elapsed_time_[i].user_time *= ACE_ONE_SECOND_IN_MSECS;
          this->elapsed_time_[i].system_time *= ACE_ONE_SECOND_IN_MSECS;
          avg_real_time += this->elapsed_time_[i].real_time;
          avg_user_time += this->elapsed_time_[i].user_time;
          avg_system_time += this->elapsed_time_[i].system_time;

          ACE_DEBUG ((LM_DEBUG,
                      "%u\t\t%0.06f\t\t%0.06f\t\t%0.06f\n",
                      i,
                      (this->elapsed_time_[i].real_time < 0.0?
                       0.0:this->elapsed_time_[i].real_time),
                      (this->elapsed_time_[i].user_time < 0.0?
                       0.0:this->elapsed_time_[i].user_time),
                      (this->elapsed_time_[i].system_time < 0.0?
                       0.0:this->elapsed_time_[i].system_time)));
        } // end of for loop

      // compute average
      avg_real_time /= this->call_count_;
      avg_user_time /= this->call_count_;
      avg_system_time /= this->call_count_;
      cps = 1000 / avg_real_time;

      ACE_DEBUG ((LM_DEBUG,
                  "\n*=*=*=*=*= Average *=*=*=*=*=*=\n"
                  "\treal_time\t= %0.06f ms, \n"
                  "\tuser_time\t= %0.06f ms, \n"
                  "\tsystem_time\t= %0.06f ms\n"
                  "\t%0.00f calls/second\n"
                  "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n",
                  (avg_real_time < 0.0? 0.0:avg_real_time),
                  (avg_user_time < 0.0? 0.0:avg_user_time),
                  (avg_system_time < 0.0? 0.0:avg_system_time),
                  (cps < 0.0? 0.0 : cps)));

    }
  else
    {
      ACE_ERROR ((LM_ERROR,
                  "\tNo time stats printed.  Call count zero or error ocurred.\n"));

    }

  ACE_DEBUG ((LM_DEBUG,
              "\t%d calls, %d errors\n"
              "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n",
              this->call_count_,
              this->error_count_));
}

void
Results::print_exception (const char *call_name,
                          CORBA::Environment &env)
{
  env.print_exception (call_name);
}

void
Results::start_timer (void)
{
  this->timer_.start ();
}

void
Results::stop_timer (void)
{
  this->timer_.stop ();
  this->timer_.elapsed_time (this->elapsed_time_[this->call_count_-1]);
}

CORBA::ULong
Results::call_count (void)
{
  return this->call_count_;
}

void
Results::call_count (CORBA::ULong c)
{
  this->call_count_ = c;
}

CORBA::ULong
Results::error_count (void)
{
  return this->error_count_;
}

void
Results::error_count (CORBA::ULong c)
{
  this->error_count_ = c;
}

void
Results::iterations (CORBA::ULong iters)
{
  this->elapsed_time_ = new ACE_Profile_Timer::ACE_Elapsed_Time [iters];
}
