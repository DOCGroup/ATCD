// -*- C++ -*-
// $Id$

// ============================================================================
//
// = LIBRARY
//   jaws
// 
// = FILENAME
//    HTTP_Server.h
//
// = AUTHOR
//    James Hu
// 
// ============================================================================

#if !defined (HTTP_SERVER_H)
#define HTTP_SERVER_H

#include "ace/Service_Object.h"
#include "ace/Thread_Manager.h"
#include "ace/Acceptor.h"
#include "ace/SOCK_Acceptor.h"
#include "ace/Task.h"
#include "ace/Asynch_IO.h"
#include "HTTP_Handler.h"

// Include the templates here.
#include "HTTP_Server_T.h"

// Forward declaration.
class ACE_Proactor;

#if defined (ACE_HAS_THREAD_SAFE_ACCEPT)
typedef LOCK_SOCK_Acceptor<ACE_Null_Mutex> HTTP_SOCK_Acceptor;
#else
typedef LOCK_SOCK_Acceptor<ACE_SYNCH_MUTEX> HTTP_SOCK_Acceptor;
#endif /* ACE_HAS_THREAD_SAFE_ACCEPT */

typedef HTTP_SOCK_Acceptor HTTP_Acceptor;

class HTTP_Server : public ACE_Service_Object
  // = TITLE
  //     This server is used to create HTTP Handlers for the Web
  //     server
  // 
  // = DESCRIPTION
{
public:
  virtual int init (int argc, char *argv[]);
  // Initialization

  virtual int fini (void);
  // Exit hooks

protected:
  virtual int thread_per_request (void);
  // Thread Per Request implementation

  virtual int asynch_thread_pool (void);
  // Asynch Thread Pool implementation
  
  virtual int synch_thread_pool (void);
  // Synch Thread Pool implementation
  
  void setup_signal_handler (void);

private:
  void parse_args (int argc, char **argv);
  int port_;
  int threads_;
  int strategy_;
  int backlog_;
  int throttle_;
  ACE_Thread_Manager tm_;
  HTTP_Acceptor acceptor_;
};

class Synch_Thread_Pool_Task : public ACE_Task<ACE_NULL_SYNCH>
  // = TITLE
  //     Used to implement Synch Thread Pool
  // 
  // = DESCRIPTION
{
public:
  Synch_Thread_Pool_Task (HTTP_Acceptor &acceptor, ACE_Thread_Manager &tm);
  virtual int open (void *args = 0);
  virtual int svc (void);

private:
  HTTP_Acceptor &acceptor_;
};

class Thread_Per_Request_Task : public ACE_Task<ACE_NULL_SYNCH>
  // = TITLE
  //     Used to implement Thread Per Request
  // 
  // = DESCRIPTION
{
public:
  Thread_Per_Request_Task (ACE_HANDLE handle, ACE_Thread_Manager &tm);
  virtual int open (void *args = 0);
  virtual int close (u_long);
  virtual int svc (void);

  static void * DEBUG_TPR (void *task);
  static void * REAPER (void *task);

private:
  ACE_HANDLE handle_;
};

// This only works on Win32
#if defined (ACE_WIN32)
class Asynch_Thread_Pool_Task : public ACE_Task<ACE_NULL_SYNCH>
  // = TITLE
  //     Used to implement Asynch Thread Pool
  // 
  // = DESCRIPTION
{
public:
  Asynch_Thread_Pool_Task (ACE_Proactor &proactor, ACE_Thread_Manager &tm);
  virtual int open (void *args = 0);
  virtual int svc (void);

private:
  ACE_Proactor &proactor_;
};
#endif /* ACE_WIN32 */

ACE_STATIC_SVC_DECLARE (HTTP_Server)

#endif /* HTTP_SERVER_H */


