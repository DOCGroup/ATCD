/* -*- C++ -*- */
// $Id$

// SOCK_Dgram_Bcast.i

// Broadcast an N byte datagram to ADDR (note that addr must be
// preassigned to the broadcast address of the subnet...)

inline ssize_t
ACE_SOCK_Dgram_Bcast::send (const void *buf, 
			    size_t n, 
			    const ACE_Addr &addr, 
			    int flags) const
{
  ACE_TRACE ("ACE_SOCK_Dgram_Bcast::send");

  sockaddr *saddr = (sockaddr *) addr.get_addr ();
  size_t len = addr.get_size ();
  return ACE_OS::sendto (this->get_handle (), (const char *) buf, n, flags, 
			 (struct sockaddr *) saddr, len);
}


