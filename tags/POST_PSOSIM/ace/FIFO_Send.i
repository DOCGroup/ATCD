/* -*- C++ -*- */
// $Id$

// FIFO_Send.i

inline ssize_t
ACE_FIFO_Send::send (const void *buf, size_t len)
{
  ACE_TRACE ("ACE_FIFO_Send::send");
  return ACE_OS::write (this->get_handle (), (const char *) buf, len);	
}

inline ssize_t
ACE_FIFO_Send::send_n (const void *buf, size_t n)
{
  ACE_TRACE ("ACE_FIFO_Send::send_n");
  return ACE::send_n (this->get_handle (), buf, n);
}
