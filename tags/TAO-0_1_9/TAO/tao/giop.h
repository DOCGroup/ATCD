// This may look like C, but it's really -*- C++ -*-

// ============================================================================
//
// = LIBRARY
//    TAO
//
// = FILENAME
//    giop.h
//
// = DESCRIPTION
//     GIOP data structures and support routines
//
//     Note that some symbols in this module are part of the
//     "Internet" Inter-ORB Protocol (IIOP), not the General IOP.
//     Only addressing information and certain details of connection
//     usage are specific to IIOP; all other protocol details can be
//     reused by ORB protocols that are built atop connection
//     protocols other than TCP.
//
//     THREADING NOTE: Threads should never manipulate another
//     thread's invocations.  In this implementation, all data
//     structures used to represent invocations (and parts of them)
//     are owned by the thread which created them.  Multiple threads
//     may make of course concurrent invocations safely, since the
//     GIOP code is reentrant.
//
// = AUTHOR
//     Copyright 1994-1995 by Sun Microsystems Inc.,
//     Chris Cleeland <cleeland@cs.wustl.edu>
//
// ============================================================================

#if !defined (TAO_GIOP_H)
#  define TAO_GIOP_H

// namespace TAO_IOP

// Assigned Protocol/Profile tag values.  ORB protcols may be
// uniquely identified by tags such as these.  This allows each
// ORB's own objref profiles to be interchanged using IORs.
//
// Email to tag-request@omg.org to allocate tags.
typedef CORBA::ULong TAO_IOP_Profile_ID;

enum
{
  TAO_IOP_TAG_INTERNET_IOP = 0, // IIOP
  TAO_IOP_TAG_MULTIPLE_COMPONENTS = 1, // DCE-CIOP

  // This is a subset of the list of other profile tags.
  TAO_IOP_TAG_ONC_IOP = 0x4f4e4300	// ONC IOP
};

struct TAO_IOP_Tagged_Profile
// One per protocol.
{
  TAO_IOP_Profile_ID tag;
  TAO_opaque profile_data;
};

typedef TAO_Unbounded_Sequence<TAO_IOP_Tagged_Profile> TAO_IOP_Tagged_Profile_Sequence;

struct TAO_IOP_IOR
  // = TITLE
  // InteroperableObjectReference
  //
  // = DESCRIPTION
  // ... a set of protocol-specific protocol profiles, plus a type ID.
  // Only one object is denoted by all of this information.  It's OK
  // to delete all profiles except the one for the single protocol
  // actually being used.
{
  char *type_id;
  TAO_IOP_Tagged_Profile_Sequence profiles;
};

// Some protocols can be factored into a set of optional components.
// Use of such components is defined by the protocol's specification.
//
// Email to tag-request@omg.org to allocate tags.

typedef CORBA::ULong TAO_IOP_ComponentId;

enum
  // = DESCRIPTION
  // These are all defined by DCE-CIOP in OMG TC document 95-3-10.
{
  TAO_IOP_TAG_DCE_STRING_BINDING = 100,// string binding handle
  TAO_IOP_TAG_DCE_BINDING_NAME = 101, // CDS/GDS/... name
  TAO_IOP_TAG_DCE_NO_PIPES = 102, // no component data
  TAO_IOP_TAG_OBJECT_KEY = 10,  // opaque
  TAO_IOP_TAG_ENDPOINT_ID = 11, // uuid
  TAO_IOP_TAG_LOCATION_POLICY = 12 // octet/enum
};

struct TAO_IOP_TaggedComponent
  // = DESCRIPTION
  // One way to represent multicomponent profiles, e.g. as done by the
  // DCE-CIOP protocol.  One of these gets encapsulated in
  // Tagged_Profile::profile_data.  TAG_MULTIPLE_COMPONENTS may be used
  // to represent protocol profiles structured in that way, but
  // protocol-specific tags facilitate simpler scanning of IORs since
  // you can be assured that each profile only has data used within a
  // single ORB protocol.
{
  TAO_IOP_ComponentId tag;
  TAO_opaque component_data;
};

typedef TAO_Unbounded_Sequence<TAO_IOP_TaggedComponent> TAO_IOP_MultipleComponentProfile;

// namespace TAO_GIOP

struct TAO_Version
{
  CORBA::Octet major;
  CORBA::Octet minor;
};

enum
  // = DESCRIPTION
  // GIOP protocol version 1.0 information.
{
  MY_MAJOR = 1,
  MY_MINOR = 0
};

enum TAO_GIOP_MsgType
  // = DESCRIPTION
  // All GIOP messages include a header and message type.
{
  // Not really a message type, but needed to bring that information
  // back somehow
  TAO_GIOP_EndOfFile = -1, // "discovered" by either
  TAO_GIOP_Request = 0, // sent by client
  TAO_GIOP_Reply = 1, // by server
  TAO_GIOP_CancelRequest = 2, // by client
  TAO_GIOP_LocateRequest = 3, // by client
  TAO_GIOP_LocateReply = 4, // by server
  TAO_GIOP_CloseConnection = 5, // by server
  TAO_GIOP_MessageError = 6 // by both
};

struct TAO_GIOP_MessageHeader
{
  CORBA::Char magic [4]; // "GIOP"
  TAO_Version giop_version;
  CORBA::Octet byte_order; // 0 = big, 1 = little
  CORBA::Octet message_type; // MsgType above
  CORBA::ULong message_size; // in byte_order!
};

// defined by GIOP 1.0 protocol
// @@ Is this portable? The structure above could have some padding on
// machines with absurd padding requirements (like 8 byte boundaries);
// hence the size of it may not match th size of the header on the
// wire.
#define	TAO_GIOP_HEADER_LEN sizeof (TAO_GIOP_MessageHeader)

// Support for Implicit ORB Service Context
typedef CORBA::ULong TAO_GIOP_ServiceID;

enum
  // = TITLE
  // Values for TAO_GIOP_ServiceID
{
  TAO_GIOP_TransactionService = 0

  // More service IDs may be defined by OMG.

  // This is where our RIOP service ID will be defined...
};

struct TAO_GIOP_ServiceContext
{
  TAO_GIOP_ServiceID context_id;
  TAO_opaque context_data;
};

typedef TAO_Unbounded_Sequence<TAO_GIOP_ServiceContext> TAO_GIOP_ServiceContextList;

extern CORBA::TypeCode TC_ServiceContextList;

// = Request, Reply headers

class TAO_Export TAO_GIOP_RequestHeader
  // = TITLE
  //   This class embodies the header of a GIOP request.
  //
  // = NOTES
  //   This used to be a <struct>, which is why everything is public.
{
public:
  TAO_GIOP_RequestHeader (void);
  // Constructor.

  CORBA::Boolean init (CDR &msg, CORBA::Environment& env);
  // Initialize the header from the values found in <msg>.

  //private:
  TAO_GIOP_ServiceContextList service_info;
  // The service context for the request (CORBA Reference?)

  CORBA::ULong request_id;
  // Unique identifier for a request

  CORBA::Boolean response_expected;
  // true if this request requires a response

  TAO_opaque object_key;
  // The object key of the destination object.

  CORBA::String operation;
  // Name of the operation being performed

  CORBA::Principal_ptr requesting_principal;
  // Identifies the requester
};

enum TAO_GIOP_ReplyStatusType
{
  TAO_GIOP_NO_EXCEPTION,
  // Request completed successfully

  TAO_GIOP_USER_EXCEPTION,
  // Request terminated with user exception

  TAO_GIOP_SYSTEM_EXCEPTION,
  // Request terminated with system exception

  TAO_GIOP_LOCATION_FORWARD
  // @@ More info
};

struct TAO_GIOP_ReplyHeader
{
  TAO_GIOP_ServiceContextList service_info;
  // Information

  CORBA::ULong request_id;
  // Unique identifier of the request for which this is a reply

  TAO_GIOP_ReplyStatusType reply_status;
  // Status of the reply (see above enum)
};

struct TAO_GIOP_CancelRequestHeader
  // = DESCRIPTION
  //   Cancellation -- applies both to Requests and LocateRequests.
{
  CORBA::ULong request_id;
  // Unique identifier of the request being cancelled
};

struct TAO_GIOP_LocateRequestHeader
  // = DESCRIPTION
  //   Location service support
{
  TAO_GIOP_LocateRequestHeader (void);
  // Constructor

  CORBA::Boolean init (CDR &msg, CORBA::Environment& env);
  // Initialize the header from the values found in <msg>.

  CORBA::ULong request_id;
  TAO_opaque object_key;
};

enum TAO_GIOP_LocateStatusType
{
  TAO_GIOP_UNKNOWN_OBJECT,
  TAO_GIOP_OBJECT_HERE,
  TAO_GIOP_OBJECT_FORWARD
};

struct TAO_GIOP_LocateReplyHeader
{
  CORBA::ULong request_id;
  TAO_GIOP_LocateStatusType locate_status;
};

class TAO_Export TAO_GIOP_Invocation
  // = TITLE
  //   Invocation: Sends a Request, optionally reads associated Reply.
  //   Uses transport info passed in, doesn't locate anything.
  //
  // = NOTES
  //   This should maybe be moved into its own file (invoke.h?)
{
public:
  TAO_GIOP_Invocation (IIOP_Object *data,
                       const char *operation,
                       CORBA::Boolean is_roundtrip);

  ~TAO_GIOP_Invocation (void);

  void start (CORBA::Environment &env);
  // <start> goes beyond initialising data structures, and makes
  // calls that may fail -- and thus throw exceptions.

  void put_param (CORBA::TypeCode_ptr tc,
                  void *value,
                  CORBA::Environment &env);

  TAO_GIOP_ReplyStatusType invoke (CORBA::ExceptionList &exceptions,
                                   CORBA::Environment &env);

  void get_value (CORBA::TypeCode_ptr tc,
                  void *value,
                  CORBA::Environment &env);
  // No CORBA::Context support (deprecated).

  CDR &stream (void);
  // return the underlying stream

private:
  IIOP_Object *data_;
  // The object on which this invocation is going.

  const char *opname_;
  // Name of the operation being invoked.

  CORBA::Boolean do_rsvp_;
  // Set to TRUE if this request a twoway.

  CORBA::ULong my_request_id_;
  // Request ID of this operation.

  char buffer [CDR::DEFAULT_BUFSIZE];
  // Buffer used for CDR stream.

  CDR stream_;
  // Stream into which the request is placed.

  TAO_Client_Connection_Handler *handler_;
  // The handler for the client's connection.
};

class TAO_Export TAO_GIOP
  // = TITLE
  //   A namespace for GIOP-related operations.
  //
  // = DESCRIPTION
  //   Only put static methods within this scope.
{
  ACE_CLASS_IS_NAMESPACE (TAO_GIOP);

public:
  // = Close a connection, first sending GIOP::CloseConnection
  static void close_connection (TAO_Client_Connection_Handler *&handle,
                                void *ctx);

  static CORBA::Boolean start_message (TAO_GIOP_MsgType t,
                                       CDR &msg);
  // Build the header for a message of type <t> into stream <msg>.

  static CORBA::Boolean send_request (TAO_SVC_HANDLER *handler,
                                      CDR &stream);
  // Send message, returns TRUE if success, else FALSE.

  static TAO_GIOP_MsgType recv_request (TAO_SVC_HANDLER *&handler,
                                        CDR &msg,
                                        CORBA::Environment &env);
  // Reads message, returns message type from header.

  static void make_error (CDR &msg, ...);
  // Construct a message containing an error so that it can be sent as
  // a response to a request.
};

#endif /* TAO_GIOP_H */
