// $Id$

#include "ace/OS.h"

/* BSD socket client */

int
main (int argc, char *argv[])
{
  // Initialize WinSock DLL on Win32...
  ACE_OS::socket_init (ACE_WSOCK_VERSION);

  struct sockaddr_in saddr;                                          
  struct hostent *hp;                                           
  const char *host = argc > 1 ? argv[1] : ACE_DEFAULT_SERVER_HOST;
  u_short port_num = 
    htons (argc > 2 ? atoi (argv[2]) : ACE_DEFAULT_SERVER_PORT);
  int sockbufsize = argc > 3 ? ACE_OS::atoi (argv[3]) : 0;
  char buf[BUFSIZ];
  ACE_HANDLE s_handle;
  int w_bytes;
  int r_bytes;
  int n;

  // Create a local endpoint of communication.
  if ((s_handle = ACE_OS::socket (PF_INET, SOCK_STREAM, 0)) == ACE_INVALID_HANDLE)
    ACE_OS::perror ("socket"), ACE_OS::exit (1);

  // If a sockbufsize was specified, set it for both send and receive.
  if (sockbufsize > 0)
    {
      if (ACE_OS::setsockopt (s_handle, SOL_SOCKET, SO_SNDBUF,
                              (const char *) &sockbufsize,
                              sizeof (sockbufsize)) != 0)
        ACE_OS::perror ("SO_SNDBUF"), ACE_OS::exit (1);
      if (ACE_OS::setsockopt (s_handle, SOL_SOCKET, SO_RCVBUF,
                              (const char *) &sockbufsize,
                              sizeof (sockbufsize)) != 0)
        ACE_OS::perror ("SO_RCVBUF"), ACE_OS::exit (1);
    }

  // Determine IP address of the server.
  if ((hp = ACE_OS::gethostbyname (host)) == 0)
    ACE_OS::perror ("gethostbyname"), ACE_OS::exit (1);

  // Set up the address information to contact the server.
  ACE_OS::memset ((void *) &saddr, 0, sizeof saddr);
  saddr.sin_family = AF_INET;
  saddr.sin_port = port_num;
  ACE_OS::memcpy (&saddr.sin_addr, hp->h_addr, hp->h_length);

  // Establish connection with remote server.
  if (ACE_OS::connect (s_handle, (struct sockaddr *) &saddr,
                       sizeof saddr) == -1)
    ACE_OS::perror ("connect"), ACE_OS::exit (1);

  // Send data to server (correctly handles "incomplete writes" due to
  // flow control).

  while ((r_bytes = ACE_OS::read (ACE_STDIN, buf, sizeof buf)) > 0)
    for (w_bytes = 0; w_bytes < r_bytes; w_bytes += n)
      if ((n = ACE_OS::send (s_handle, buf + w_bytes,
                      r_bytes - w_bytes)) < 0)
        ACE_OS::perror ("write"), ACE_OS::exit (1);

  if (ACE_OS::recv (s_handle, buf, 1) == 1)
    ACE_OS::write (ACE_STDOUT, buf, 1);

  // Explicitly close the connection.
  if (ACE_OS::closesocket (s_handle) == -1)
    ACE_OS::perror ("close"), ACE_OS::exit (1);

  return 0;
}
