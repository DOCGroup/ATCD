#include "ace/Log_Msg.h"
// @(#)consumer_read.cpp	1.1	10/18/96

#include "ace/SPIPE_Addr.h"
#include "ace/SPIPE_Acceptor.h"
#include "ace/Time_Value.h"
#include "shared.h"

#if defined (ACE_HAS_STREAM_PIPES)

int
main (int argc, char *argv[])
{
  ACE_SPIPE_Acceptor peer_acceptor;
  ACE_SPIPE_Stream	 new_stream;
  char buf[BUFSIZ];
  int  n;

  // Wait up to ACE_DEFAULT_TIMEOUT seconds to accept connection.
  ACE_Time_Value timeout (ACE_DEFAULT_TIMEOUT);

  if (argc > 1)
    rendezvous = argv[1];

  ACE_OS::unlink (rendezvous);
  ACE_OS::fdetach (rendezvous);

  if (peer_acceptor.open (ACE_SPIPE_Addr (rendezvous)) == -1)
    ACE_ERROR_RETURN ((LM_ERROR, "%p\n", "open"), 1);

  ACE_DEBUG ((LM_DEBUG, "waiting for connection\n"));

  if (peer_acceptor.accept (new_stream, 0, &timeout) == -1)
    ACE_ERROR_RETURN ((LM_ERROR, "%p\n", "accept"), 1);

  ACE_DEBUG ((LM_DEBUG, "accepted\n"));

  while ((n = new_stream.recv (buf, sizeof buf)) > 0)
    ACE_OS::write (ACE_STDOUT, buf, n);

  return 0;
}
#else
#include <stdio.h>
int main (void)
{
  ACE_OS::fprintf (stderr, "This feature is not supported\n");
  return 0;
}
#endif /* ACE_HAS_STREAM_PIPES */
