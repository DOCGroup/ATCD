// This may look like C, but it's really -*- C++ -*-

// ============================================================================
//
// = LIBRARY
//     TAO
// 
// = FILENAME
//     client_factory.h
//
// = AUTHOR
//     Chris Cleeland
//
// = VERSION
//     $Id$
// ============================================================================

#if !defined(TAO_CLIENT_FACTORY_H)
#  define TAO_CLIENT_FACTORY_H

#  include "ace/SOCK_Acceptor.h"
#  include "ace/SOCK_Connector.h"
#  include "ace/Svc_Handler.h"
#  include "ace/Strategies_T.h"
#  include "ace/Connector.h"
#  include "ace/Synch.h"

#  include "tao/params.h"

class TAO_Client_Connection_Handler : public ACE_Svc_Handler<ACE_SOCK_STREAM, ACE_NULL_SYNCH>
// = TITLE
//      <Svc_Handler> used on the client side and returned
//      by the <TAO_Client_Factory::CONNECTOR>.
// @@ Should this be in here or in the default_client.*?
{
public:
  // = Intialization method.
  TAO_Client_Connection_Handler (ACE_Thread_Manager* = 0);
  // Do-nothing constructor

  // = <Connector> hook.
  virtual int open (void*);
  // Initialization hook

  void in_use (CORBA_Boolean);
  // Set the in-use flag.

  CORBA_Boolean in_use (void);
  // Return state of the in-use flag.

private:
  CORBA_Boolean in_use_;
  // True value indicates that something is using this handler.
};


class TAO_Client_Strategy_Factory : public ACE_Service_Object
  // = TITLE
  //    Abstract factory used by the client to turn out various
  //    strategies used on the client side.
{
public:
  // = Intialization and termination methods.
  TAO_Client_Strategy_Factory (void);
  // Constructor
  
  virtual ~TAO_Client_Strategy_Factory (void);
  // Destructor
  
  // = Client-side strategy types.
  typedef ACE_Strategy_Connector<TAO_Client_Connection_Handler, ACE_SOCK_CONNECTOR> 
          CONNECTOR;
  typedef ACE_NOOP_Creation_Strategy<TAO_Client_Connection_Handler> 
          NULL_CREATION_STRATEGY;

  // = Factory methods for ORB strategies.

#if defined (TAO_HAS_CLIENT_CONCURRENCY)
  virtual CONCURRENCY_STRATEGY *concurrency_strategy (void);
#endif
  
  virtual CONNECTOR *connector (void);
  // Return a pointer to a connector using appropriate strategies.

};

#endif /* TAO_CLIENT_FACTORY_H */
