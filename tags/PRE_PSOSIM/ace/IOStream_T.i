/* -*- C++ -*- */

template <class STREAM> ssize_t
ACE_Streambuf_T<STREAM>::send (char *buf, ssize_t len)
{
  return peer_->send_n (buf,len);
}

template <class STREAM> ssize_t
ACE_Streambuf_T<STREAM>::recv (char *buf,
                               ssize_t len,
                               ACE_Time_Value *tv)
{
  return this->recv (buf, len, 0, tv);
}

template <class STREAM> ssize_t
ACE_Streambuf_T<STREAM>::recv (char *buf,
                               ssize_t len,
                               int flags,
                               ACE_Time_Value * tv)
{
  ssize_t rval = peer_->recv (buf, len, flags, tv);
  return rval;
}

template <class STREAM> ssize_t
ACE_Streambuf_T<STREAM>::recv_n (char *buf,
                                 ssize_t len,
                                 int flags,
                                 ACE_Time_Value *tv)
{
  ssize_t rval =  peer_->recv_n (buf, len, flags, tv);
  return rval;
}

template <class STREAM> ACE_HANDLE
ACE_Streambuf_T<STREAM>::get_handle (void)
{
  return peer_ ? peer_->get_handle () : 0;
}

template <class STREAM> ACE_INLINE
ACE_IOStream<STREAM>::eof (void) const
{
  char c;
  return ACE_OS::recv (this->get_handle (),
                       &c,
                       sizeof c, 
                       MSG_PEEK) <= 0;
}



template <class STREAM> ACE_INLINE
ACE_SOCK_Dgram_SC<STREAM>::ACE_SOCK_Dgram_SC (void)
{
}

template <class STREAM> ACE_INLINE
ACE_SOCK_Dgram_SC<STREAM>::ACE_SOCK_Dgram_SC (STREAM &source,
                                              ACE_INET_Addr &dest)
  : STREAM (source),
    peer_ (dest)
{
}

template <class STREAM> ACE_INLINE ssize_t
ACE_SOCK_Dgram_SC<STREAM>::send_n (char *buf,
                                   ssize_t len)
{
  return STREAM::send (buf, len, peer_);
}

template <class STREAM> ACE_INLINE ssize_t
ACE_SOCK_Dgram_SC<STREAM>::recv (char *buf,
                                 ssize_t len,
                                 ACE_Time_Value *tv)
{
  return recv (buf, len, 0, tv);
}

template <class STREAM> ACE_INLINE ssize_t
ACE_SOCK_Dgram_SC<STREAM>::recv (char *buf,
                                 ssize_t len,
                                 int flags,
                                 ACE_Time_Value *tv)
{
  if (tv != 0)
    {
      ACE_HANDLE handle = this->get_handle ();
      ACE_Handle_Set handle_set;

      handle_set.set_bit (handle);

      switch (ACE_OS::select (int (handle) + 1,
                              (fd_set *) handle_set, // read_fds.
                              (fd_set *) 0,          // write_fds.
                              (fd_set *) 0,          // exception_fds.
                              tv))
        {
        case 0:
          errno = ETIME;
        case -1:
          return -1;
        default:
          ;     // Do the 'recv' below
        }
    }

  int rval = STREAM::recv (buf, len, peer_, flags);
#if defined (ACE_WIN32)
  if (rval == SOCKET_ERROR)
    if (::WSAGetLastError () == WSAEMSGSIZE)
      if (ACE_BIT_ENABLED (flags, MSG_PEEK))
        rval = len;
#endif /* ACE_WIN32 */
  return rval < len ? rval : len;
}

template <class STREAM> ACE_INLINE ssize_t
ACE_SOCK_Dgram_SC<STREAM>::recv_n (char *buf,
                                   ssize_t len,
                                   int flags,
                                   ACE_Time_Value *tv)
{
  int rval = this->recv (buf, len, flags, tv);
  return rval;
}

template <class STREAM> ACE_INLINE int
ACE_SOCK_Dgram_SC<STREAM>::get_remote_addr (ACE_INET_Addr &addr) const
{
  addr = peer_;
  return 0;
}
