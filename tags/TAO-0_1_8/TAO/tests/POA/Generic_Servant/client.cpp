// $Id$

//===============================================================================
//
//
// = FILENAME
//     client.cpp
//
// = DESCRIPTION
//     This is a simple foo client implementation.
//
// = AUTHOR
//     Irfan Pyarali
//
//==================================================================================

#include "ace/streams.h"
#include "ace/Get_Opt.h"
#include "ace/Profile_Timer.h"
#include "FooC.h"

static char *IOR = 0;
static int iterations = 1;

static int
parse_args (int argc, char **argv)
{
  ACE_Get_Opt get_opts (argc, argv, "k:i:");
  int c;

  while ((c = get_opts ()) != -1)
    switch (c)
      {
      case 'k':
        IOR = get_opts.optarg;
        break;
      case 'i':
        iterations = ::atoi (get_opts.optarg);
        break;
      case '?':
      default:
        ACE_ERROR_RETURN ((LM_ERROR,
                           "usage:  %s"
                           "-k IOR"
                           "\n",
                           argv [0]),
                          -1);
      }

  if (IOR == 0)
    ACE_ERROR_RETURN ((LM_ERROR,
                       "Please specify the IOR for the servant"), -1);

  // Indicates successful parsing of command line.
  return 0;
}

void
print_stats (ACE_Profile_Timer::ACE_Elapsed_Time &elapsed_time,
             int iterations)
{
  if (iterations > 0)
    {
      elapsed_time.real_time *= ACE_ONE_SECOND_IN_MSECS;
      elapsed_time.user_time *= ACE_ONE_SECOND_IN_MSECS;
      elapsed_time.system_time *= ACE_ONE_SECOND_IN_MSECS;

      elapsed_time.real_time /= iterations;
      elapsed_time.user_time /= iterations;
      elapsed_time.system_time /= iterations;

      double tmp = 1000 / elapsed_time.real_time;

      ACE_DEBUG ((LM_DEBUG,
		  "\treal_time\t = %0.06f ms, \n"
		  "\tuser_time\t = %0.06f ms, \n"
		  "\tsystem_time\t = %0.06f ms, \n"
		  "\t%0.00f calls/second\n",
		  elapsed_time.real_time   < 0.0 ? 0.0 : elapsed_time.real_time,
		  elapsed_time.user_time   < 0.0 ? 0.0 : elapsed_time.user_time,
		  elapsed_time.system_time < 0.0 ? 0.0 : elapsed_time.system_time,
		  tmp < 0.0 ? 0.0 : tmp));
    }
  else
    ACE_ERROR ((LM_ERROR,
		"\tNo time stats printed.  Zero iterations or error ocurred.\n"));
}

int
main (int argc, char **argv)
{
  CORBA::Environment env;

  // Initialize the ORB
  CORBA::ORB_var orb = CORBA::ORB_init (argc, argv, 0, env);
  if (env.exception () != 0)
    {
      env.print_exception ("CORBA::ORB_init");
      return -1;
    }

  // Initialize options based on command-line arguments.
  parse_args (argc, argv);

  // Get an object reference from the argument string.
  CORBA::Object_var object = orb->string_to_object (IOR, env);

  if (env.exception () != 0)
    {
      env.print_exception ("CORBA::ORB::string_to_object");
      return -1;
    }

  // Try to narrow the object reference to a Foo reference.
  Foo_var foo = Foo::_narrow (object.in (), env);

  if (env.exception () != 0)
    {
      env.print_exception ("Foo::_narrow");
      return -1;
    }

  ACE_Profile_Timer timer;
  ACE_Profile_Timer::ACE_Elapsed_Time elapsed_time;

  // We start an ACE_Profile_Timer here...
  timer.start ();

  CORBA::Long result = 0;
  int i = 0;
  for (i = 0; i < iterations; i++ && env.exception () == 0)
    {
      // Invoke the doit() method of the foo reference.
      result = foo->doit (env);
    }
     
  // stop the timer.
  timer.stop ();
  timer.elapsed_time (elapsed_time);

  // compute average time.
  print_stats (elapsed_time, i);

  if (env.exception () != 0)
    {
      env.print_exception ("Foo::doit");
      return -1;
    }
  
  // Print the result of doit () method of the foo reference.
  cout << result << endl;

  return 0;
}
