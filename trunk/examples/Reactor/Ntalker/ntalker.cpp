// Server.C
// $Id$

// 
// listens to multicast address.  after first message received, will
// listen for 5 more seconds.  prints Mbits/sec received from client

#include "ace/INET_Addr.h"
#include "ace/SOCK_Dgram_Mcast.h"
#include "ace/Reactor.h"
#include "ace/Get_Opt.h"
#include "ace/Thread_Manager.h"

#if defined (ACE_HAS_IP_MULTICAST)
// network interface to subscribe to
//   this is hardware specific.
//   use netstat(1M) to find whether your interface
//   is le0 or ie0

static const char *INTERFACE = 0;
static const char *MCAST_ADDR = ACE_DEFAULT_MULTICAST_ADDR;
static const u_short UDP_PORT = ACE_DEFAULT_MULTICAST_PORT;

// Handle both multicast and stdin events.

class Handler : public ACE_Event_Handler
{
public:
  Handler (u_short udp_port, 
	   const char *ip_addr,
	   const char *interface,
	   ACE_Reactor &);
  ~Handler (void);

  virtual int handle_input (ACE_HANDLE);
  virtual int handle_close (ACE_HANDLE, ACE_Reactor_Mask);

  //private:
  ACE_SOCK_Dgram_Mcast mcast_;
  ACE_Handle_Set handle_set_;
};

int
Handler::handle_input (ACE_HANDLE h)
{
  char buf[BUFSIZ];

  if (h == ACE_STDIN)
    {
      int result = ACE_OS::read (h, buf, BUFSIZ);
      if (result > 0)
	{
	  if (this->mcast_.send (buf, result) != result)
	    {
	      ACE_OS::perror ("send error");
	      return -1;
	    }
	  return 0;
	}
      else if (result == -1)
	::perror ("can't read from STDIN");

      return -1;
    }
  else
    {
      ACE_INET_Addr remote_addr;

      // receive message from multicast group
      int result = this->mcast_.recv (buf, sizeof buf, remote_addr);
      if (result != -1)
	{
	  cout << "received datagram from host " << remote_addr.get_host_name () 
	       << " on port " << remote_addr.get_port_number () 
	       << " bytes = " << result << endl;
	  ACE_OS::write (ACE_STDOUT, buf, result);
	  cout << endl;
	  return 0;
	}

      ACE_OS::perror ("Something amiss.");
      return -1;
    }
}

int
Handler::handle_close (ACE_HANDLE h, ACE_Reactor_Mask)
{
  if (h == ACE_STDIN)
    cout << "STDIN_Events handle removed from reactor." << endl << flush;
  else
    cout << "Mcast_Events handle removed from reactor." << endl << flush;
  return 0;
}

Handler::~Handler (void)
{
  // ACE_OS::exit on error (bogus)...

  if (this->mcast_.unsubscribe () == -1)
    ACE_OS::perror ("unsubscribe fails"), ACE_OS::exit (1);
}

Handler::Handler (u_short udp_port, 
		  const char *ip_addr,
		  const char *interface,
		  ACE_Reactor &reactor)
{
  // Create multicast address to listen on.

  ACE_INET_Addr sockmc_addr (udp_port, ip_addr);
  
  // subscribe to multicast group.

  if (this->mcast_.subscribe (sockmc_addr, 1, interface) == -1) 
    ACE_OS::perror ("can't subscribe to multicast group"), ACE_OS::exit (1);

  // Disable loopbacks.
  // if (this->mcast_.set_option (IP_MULTICAST_LOOP, 0) == -1 )
  //   ACE_OS::perror (" can't disable loopbacks " ), ACE_OS::exit (1);

  this->handle_set_.set_bit (ACE_STDIN);
  this->handle_set_.set_bit (this->mcast_.get_handle ());

  // Register callbacks with the ACE_Reactor.
  if (reactor.register_handler (this->handle_set_,
				this,
				ACE_Event_Handler::READ_MASK) == -1)
    ACE_OS::perror ("can't register events"), ACE_OS::exit (1);
}

static void
parse_args (int argc, char *argv[])
{
  ACE_Get_Opt get_opt (argc, argv, "i:u");

  int c;

  while ((c = get_opt ()) != -1)
    switch (c)
      {
      case 'i':
	INTERFACE = get_opt.optarg;
	break;
      case 'u':
	// Usage fallthrough.
      default:
        ACE_DEBUG ((LM_DEBUG, "%s -i interface\n", argv[0]));
	ACE_OS::exit (1);
      }
}

static sig_atomic_t done = 0;
static ACE_Thread_Manager manager;

// Signal handler.

extern "C" void
signal_handler (int)
{
  done = 1;
}

void *
handle_stdin (void *data)
{
  ACE_Thread_Control tc (&manager);
  Handler *handler = (Handler *) data;
  while (1)
    handler->handle_input (ACE_STDIN);
  return 0;
}

void *
handle_mcast (void *data)
{
  ACE_Thread_Control tc (&manager);
  Handler *handler = (Handler *) data;
  while (1)
    handler->handle_input (handler->mcast_.get_handle ());
  return 0;
}

int 
main (int argc, char *argv[])
{
  parse_args (argc, argv);

  ACE_Reactor reactor;
  Handler handler (UDP_PORT, MCAST_ADDR, INTERFACE, reactor);

  // main loop
#if !defined (MULTI_THREADED) && !defined (ACE_WIN32) 
  ACE_Sig_Action sa ((ACE_SignalHandler) signal_handler, SIGINT);
  ACE_UNUSED_ARG (sa);

  while (!done)
    reactor.handle_events ();
#else
  manager.spawn (handle_stdin, &handler);
  manager.spawn (handle_mcast, &handler);
  manager.wait ();
#endif
  cout << "\ntalker Done.\n";
  return 0;
}
#else
int 
main (int argc, char *argv[])
{
  ACE_ERROR ((LM_ERROR, "error: %s must be run on a platform that support IP multicast\n",
	    argv[0]));
  return 0;
}
#endif /* ACE_HAS_IP_MULTICAST */
