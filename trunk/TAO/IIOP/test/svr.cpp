// @(#)svr.cpp	1.6 95/10/02
// Copyright 1994-1995 by Sun Microsystems Inc.
// All Rights Reserved
//
// TEST:	simple IIOP server for "cubit.idl" interface.
//
// Starts up, builds an objref, prints its string, listens for
// messages, responds to them.
//

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <ace/Get_Opt.h>

#include	"cubit.hh"
#include	<corba/boa.hh>


//
// XXX a general debug/trace facility would be handy
//
#include	<corba/debug.hh>

//
// XXX this stuff is ugly but needed, since this exposes features
// (IIOP forwarding) that BOA doesn't provide.
//
#include	<connmgr.hh>
#include	<roa.hh>

// extern char 	*optarg;	// missing on some platforms

extern void
print_exception (const CORBA_Exception *, const char *, FILE *f=stdout);


static void
is_a_skel (
    CORBA_ServerRequest		&req,
    CORBA_Environment		&env
)
{
    CORBA_NVList_ptr		nvlist;
    CORBA_NamedValue_ptr	nv;
    CORBA_Any			temp_value (_tc_CORBA_String);

    req.orb()->create_list (0, nvlist);
    nv = nvlist->add_value (0, temp_value, CORBA_ARG_IN, env);

    req.params (nvlist, env);
    if (env.exception () != 0) {
	dexc (env, "is_a_skel, get params");
	return;
    }

    CORBA_Boolean *retval;
    CORBA_String value = *(CORBA_String *) nv->value()->value();

    //
    // This object's type "is_a" conformant subtype of the type whose
    // ID ("Repository ID") is passed if it's (a) either the same type
    // as indicated by the ID, or (b) one of the classes from which it
    // inherits is_a subtype, or (c) the ID is for the generic CORBA
    // object.
    //
    // XXX IDs should be compared recognizing that the "IDL" and "DCE"
    // ID types have a minor version code, and that if the minor code
    // (a 16 bit unsigned integer, in ASCII form) of the ID passed is
    // not greater than one of the IDs we know, it's still compatible.
    //
    // XXX "env" should be checked to see if TypeCode::id() reported
    // an exception ...
    //
    if (ACE_OS::strcmp ((char*)value, Cubit__id) == 0
	|| ACE_OS::strcmp ((char *)value, _tc_CORBA_Object->id (env)) == 0)
	retval = new CORBA_Boolean (CORBA_B_TRUE);
    else
	retval = new CORBA_Boolean (CORBA_B_FALSE);

    CORBA_Any *any = new CORBA_Any (_tc_CORBA_Boolean, retval, CORBA_B_TRUE);

    req.result (any, env);
    dexc (env, "_is_a, result");
}


//
// Dispatch to Skeletons
//
// XXX explore packaging most of this as part of the TCP_OA !!
//
static void
tcpoa_dispatch (
    CORBA_OctetSeq		&key,
    CORBA_ServerRequest		&req,
    void			*context,
    CORBA_Environment		&env
)
{
    //
    // Verify that the target object and "this" object have the
    // same key.  Normally, this would be used to figure out
    // which object was the target, and hence which operations
    // vector to dispatch the request.
    //
    CORBA_OctetSeq		*obj_key;

    obj_key = (CORBA_OctetSeq *) context;

    if (obj_key->length != key.length
	    || ACE_OS::memcmp (obj_key->buffer, key.buffer,
			       obj_key->length) != 0) {
	env.exception (new CORBA_OBJECT_NOT_EXIST (COMPLETED_NO));
#ifdef	DEBUG
	if (debug_level)
	    dmsg_opaque ("request to nonexistent object, key = ",
		    key.buffer, key.length);
#endif
	return;
    }

    //
    // Find a "skeleton" (nyet :-) entry for this operation,
    // then call it with the right per-object state.  (Someday this
    // search will be sped up, e.g. by hashing or binary search.)
    //
    const skel_entry		*entry;
    CORBA_String		opname;

    opname = req.op_name ();

    for (entry = &Cubit_operations [0]; entry->op_descriptor; entry++) {
	if (ACE_OS::strcmp ((char *)opname, entry->op_descriptor->opname) == 0) {
	    entry->impl_skeleton (req, env);
	    return;
	}
    }

    //
    // Try one of the ORB's built-in operations.
    //
    // XXX the rest too:  _non_existent (just return false),
    // _get_interface (needs an interface repository reference for this
    // objref's type), and _get_implementation (needs an implementation
    // repository).
    //
    if (ACE_OS::strcmp ((char *)opname, "_is_a") == 0) {
	is_a_skel (req, env);
	return;
    }

    //
    // No match.  Operation not implemented; say so.
    //
    dmsg1 ("unknown operation, %s", opname);
    env.exception (new CORBA_BAD_OPERATION (COMPLETED_NO));
}

//
// forwarding support
//
static CORBA_Object_ptr	fwd_ref;

static void
tcpoa_forwarder (
    CORBA_OctetSeq	&key,
    CORBA_Object_ptr	&the_ref,
    void		*context,
    CORBA_Environment	&env
)
{
  CORBA_OctetSeq		*obj_key;

  obj_key = (CORBA_OctetSeq *) context;

  if (obj_key->length == key.length
      && ACE_OS::memcmp (obj_key->buffer, key.buffer, key.length) == 0) {
    the_ref = fwd_ref->_duplicate (fwd_ref);
  } else
    env.exception (new CORBA_OBJECT_NOT_EXIST (COMPLETED_NO));
}


//
// Socket-based passive OA entry point
//

void
usage(char* command)
{
  ACE_OS::fprintf (stderr, "usage:  %s"
		   " -e endpoint=hostname:portnum"
		   " [-d]"
		   " [-f]"
		   " [-i idle_seconds]"
		   " [-k]"
		   " [-k object_key=key0]"
		   " [-o orb_name=internet]"
		   " [-t]"
		   "\n", command);
}

//
// Standard command line parsing utilities used.
//
int
main (
    int    argc,
    char   *argv[]
)
{
  CORBA_Environment	env;
  CORBA_ORB_ptr	orb_ptr;
  ROA_ptr		oa_ptr;
  CORBA_Boolean	do_fork = CORBA_B_FALSE;
  CORBA_Boolean	do_threads = CORBA_B_FALSE;
  CORBA_String	key = (CORBA_String) "key0";
  ACE_INET_Addr svraddr;
  ROA_Parameters* params = ROA_Parameters::instance();
  char		*orb_name = "internet";
  int			idle = -1;

#if defined (VXWORKS)

  char          *oa_name = "mv2604d:1000";
  int           dummy = 1;
  debug_level = 1;

  orb_ptr = CORBA_ORB_init (dummy, (char **)0, orb_name, env);

#else

  char		*oa_name = 0;
  //
  // Parse the command line, get options
  //
  ACE_Get_Opt opts (argc, argv, "di:fk:o:e:t");
  int			c;

  while ((c = opts()) != -1)
    switch (c) {
    case 'd':			// more debug noise
      debug_level++;
      continue;

    case 'i':			// idle seconds b4 exit
      idle = ACE_OS::atoi (opts.optarg);
      continue;

    case 'f':			// fork child server
      do_fork = CORBA_B_TRUE;
      continue;

    case 'k':			// key (str)
      key = (CORBA_String) opts.optarg;
      continue;

    case 'o':			// orb name
      orb_name = opts.optarg;
      continue;

    case 'e':			// portnum
      oa_name = opts.optarg;
      continue;
	
    case 't':			// create thread-per-connection
      params->using_threads(1);
      continue;

      // XXX set debug filters ...

      //
      // XXX ignore OMG-specified options ... hope nobody ever tries
      // to use that "-ORB* param" and "-OA* param" syntax, it flies
      // in the face of standard command parsing algorithms which
      // require single-character option specifiers.
      //

    case '?':
    default:
      usage(argv[0]);
      return 1;
    }

  orb_ptr = CORBA_ORB_init (argc, argv, orb_name, env);

#endif

  if (env.exception () != 0) {
    print_exception (env.exception (), "ORB init");
    return 1;
  }

  if (oa_name == 0)
    {
      usage(argv[0]);
      return 1;
    }
  else
    {
      svraddr.set(oa_name);
    }

  oa_ptr = ROA::init (orb_ptr, svraddr, env);
  if (env.exception () != 0) {
    print_exception (env.exception (), "OA init");
    return 1;
  }
  // Register the OA with ACE_ROA
  params->oa(oa_ptr);		// Should this be done in TCP_OA's CTOR?

  //
  // Create the object we'll be implementing.
  //
  CORBA_OctetSeq	obj_key;
  CORBA_Object_ptr	obj;

  obj_key.buffer = (CORBA_Octet *) key;
  obj_key.length = obj_key.maximum = ACE_OS::strlen ((char *)key);

  env.clear();
  obj = oa_ptr->create (obj_key, (CORBA_String) "", env);
  if (env.exception () != 0) {
    print_exception (env.exception (), "TCP_OA::create");
    return 1;
  }

  //
  // Stringify the objref we'll be implementing, and
  // print it to stdout.  Someone will take that string
  // and give it to some client.  Then release the object.
  //
  CORBA_String	str;

  str = orb_ptr->object_to_string (obj, env);
  if (env.exception () != 0) {
    print_exception (env.exception (), "object2string");
    return 1;
  }
  ACE_OS::puts ((char *)str);
  ACE_OS::fflush (stdout);
  dmsg1 ("listening as object '%s'", str);
  CORBA_release (obj);
  obj = 0;

  //
  // If we're forking a child server, do so -- read the objref
  // it'll use, and prepare to forward all requests to it.  That
  // objref has a dynamically assigned port. 
  //
  if (do_fork) {
#if	defined (HAVE_POPEN)
    FILE		*f = popen ("exec ./svr -i120 -kbaskerville", "r");
    char		buffer [BUFSIZ];

    if (ACE_OS::fgets (buffer, sizeof buffer, f) != buffer) {
      ACE_OS::fprintf (stderr, "error: can't read from child\n");
      return 1;
    }
    fwd_ref = orb_ptr->string_to_object ((CORBA_String) buffer, env);
    if (env.exception () != 0) {
      print_exception (env.exception (), "string2object");
      return 1;
    }

    //
    // NOTE:  don't fclose("f") since some systems make that the
    // same as pclose("f").  Pclose waits for the child to exit,
    // causing a deadlock since the child won't exit until it's
    // told to do so by a client, but no client can be redirected 
    // to the child until the pclose returns ...
    //
#else
    ACE_OS::fprintf (stderr, "error:  no popen(), can't create child\n");
    env.exception (new CORBA_IMP_LIMIT(COMPLETED_NO));
    return 1;
#endif	// !defined (HAVE_POPEN)
  }

  //
  // Handle requests for this object until we're killed, or one of
  // the methods asks us to exit.
  //
  // NOTE:  for multithreaded environments (e.g. POSIX threads) also
  // want to use threads.  The current notion is to dedicate a thread
  // to a "read" on each client file descriptor, and then when that
  // successfully gets a Request message, to start another thread
  // reading that descriptor while the first one creates the Reply.
  //
  // This will accentuate the need for server-side policies to address
  // resource management, such as shutting down connections that have
  // no requests in progress after they've been idle for some time
  // period (e.g. 10 minutes), and reclaiming the thread used by that
  // connection. 
  //
  int terminationStatus = 0;

  // Set the callbacks for our implementation (cheesy!!!)
  params->upcall(tcpoa_dispatch);
  params->forwarder(fwd_ref ? tcpoa_forwarder : 0);
  params->context(&obj_key);

#if !defined(USE_HOMEBREW_EVENT_LOOP)
  ACE_Service_Config::run_reactor_event_loop();
#else
  while (1)
    {
      int result = params->reactor()->handle_events ();

      if (result == -1)
	{
	  terminationStatus = -1;
	  break;
	}
    }
#endif

  //
  // Shut down the OA -- recycles all underlying resources (e.g. file
  // descriptors, etc).
  //
  oa_ptr->clean_shutdown (env);
  return terminationStatus;
}
