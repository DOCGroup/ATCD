// HTTP_Server.cpp

#include "HTTP_Server.h"

#include "ace/Get_Opt.h"

template <class LOCK> int
LOCK_SOCK_Acceptor<LOCK>::accept (ACE_SOCK_Stream &ns,
                                  ACE_Addr *ra,
                                  ACE_Time_Value *to,
                                  int r) const
{
  ACE_Guard<LOCK> m((LOCK &)this->lock_);

  return ACE_SOCK_Acceptor::accept(ns, ra, to, r);
}

int
HTTP_Server::init (int argc, char *argv[])
{
  int c;
  char *prog = argc > 0 ? argv[0] : "Sock_Server";

  // Set some defaults
  this->port_ = 0;
  this->threads_ = 0;

  ACE_Get_Opt get_opt(argc, argv, "p:n:s:");
  while ((c = get_opt()) != -1)
    switch (c) {
    case 'p':
      this->port_ = ACE_OS::atoi(get_opt.optarg);
      break;
    case 'n':
      this->threads_ = ACE_OS::atoi(get_opt.optarg);
      break;
    case 's':
      this->strategy_ = ACE_OS::atoi(get_opt.optarg);
      // 0 -> single threaded concurrent synchronous (not implemented)
      // 1 -> thread per request
      // 2 -> thread pool
      break;
    default:
      break;
    }

  if (this->port_ == 0) this->port_ = 5432;
  if (this->threads_ == 0) this->threads_ = 5;
        
  ACE_DEBUG ((LM_DEBUG, "in HTTP_Server::init, %s %d %d\n",
              prog, this->port_, this->threads_));


  this->acceptor_.open(ACE_INET_Addr(this->port_));

  switch(this->strategy_) {
  case 1: // thread per request
    for (;;) {
      this->acceptor_.accept(new HTTP_Handler(1));
    }
    
    break;

  case 0: // single threaded concurrent (not implemented)
  default:

    for (int i = 0; i < this->threads_; i++) {
      HTTP_Task *t = new HTTP_Task(this->acceptor_, this->tm_);
      if (t->open(0) != 0) {
        ACE_DEBUG ((LM_DEBUG, "in HTTP_Server::init, open failed\n"));
      }
    }

    this->tm_.wait();
  }


  return 0;
}

int
HTTP_Server::fini (void)
{
  this->tm_.close();
  return 0;
}


int
HTTP_Task::open (void *args)
{
  switch (this->activate(THR_BOUND)) {
  case -1: /* failed to make object active */
    ACE_ERROR_RETURN((LM_ERROR, "%p\n", "HTTP_Task::open"), -1);
    break;
  case 1: /* already active */
    ACE_ERROR_RETURN((LM_ERROR, "%p\n", "HTTP_Task::open"), 1);
    break;
  default: /* okie dokie */
    break;
  }

  return 0;
}

int
HTTP_Task::close (u_long flags)
{
  return 0;
}

int
HTTP_Task::svc (void)
{
  for (;;) {
    HTTP_Task::acceptor_.accept(new HTTP_Handler);
    //    ACE_DEBUG ((LM_DEBUG, "in HTTP_Task::svc, recycling %d\n",
    //                ACE_Thread::self()));
  }

  return 0;
}


// Define the factory function.
ACE_SVC_FACTORY_DEFINE (HTTP_Server)
 
// Define the object that describes the service.
ACE_STATIC_SVC_DEFINE (HTTP_Server, "HTTP_Server", ACE_SVC_OBJ_T,
                       &ACE_SVC_NAME (HTTP_Server),
                       ACE_Service_Type::DELETE_THIS
                       | ACE_Service_Type::DELETE_OBJ, 0)

// This is necessary for gcc to work with templates
#if defined (ACE_TEMPLATES_REQUIRE_SPECIALIZATION)
template class LOCK_SOCK_Acceptor<ACE_Thread_Mutex>;
template class ACE_Oneshot_Acceptor<HTTP_Handler, ONESHOT_SOCK_ACCEPTOR>;
#endif /* ACE_TEMPLATES_REQUIRE_SPECIALIZATION */
