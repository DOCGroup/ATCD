// $Id$
// ============================================================================
//
// = LIBRARY
//    orbsvcs/Naming_Service/Naming_Service
//
// = FILENAME
//    Naming_Service.h
//
// = DESCRIPTION
//      This class implements the functionality of a Naming_Service.
//
// = AUTHORS
//    Nagarajan Surendran (naga@cs.wustl.edu)
//
// ============================================================================

#if !defined (_NAMING_SERVICE_H)
#define _NAMING_SERVICE_H

#include "ace/streams.h"
#include "tao/tao_util.h"
#include "orbsvcs/Naming/Naming_Utils.h"

class Naming_Service:public TAO_ORB_Manager
{
  // =TITLE
  //   Defines a class that encapsulates the implementation of a
  //   naming service.
  // =DESCRIPTION
  //   This class makes use of the TAO_Naming_Server and
  //   TAO_ORB_Manager class to implement the Naming_Service.

public:
  Naming_Service (void);
  // Default Constructor.

  Naming_Service (int argc,
		  char** argv);
  // Constructor taking the command-line arguments.


  int
  init (int argc,
	char** argv);
  // Initialize the Naming Service with the arguments.

  int
  run (CORBA_Environment& env);
  // Run the Naming_Service

  ~Naming_Service (void);
  // Destructor.
	
private:
  TAO_Naming_Server my_naming_server_;
  // Naming Server instance.
};

#endif /* _NAMING_SERVICE_H */
