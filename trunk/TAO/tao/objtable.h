// This may look like C, but it's really -*- C++ -*-

// ============================================================================
//
// = LIBRARY
//    TAO
// 
// = FILENAME
//    objtable.h
//
// = AUTHOR
//    Aniruddha Gokhale
// 
// ============================================================================

#if !defined (TAO_OBJTABLE_H)
#  define TAO_OBJTABLE_H

class TAO_Object_Table
  // = TITLE
  //     Abstract class for maintaining a mapping of CORBA object keys
  //     to pointers to CORBA objects.
{
public:
  virtual int find (const CORBA::OctetSeq &key, 
		    CORBA::Object_ptr &obj) = 0;
  // Find object associated with <{key}>, setting <{obj}> to the
  // pointer and returning a non-negative integer.  If not found,
  // <{obj}> is unchanged and the value <-1> is returned.

  virtual int bind (const CORBA::OctetSeq &key, 
		    CORBA::Object_ptr obj) = 0;
  // Associated <{key}> with <{obj}>, returning 0 if object is
  // registered successfully, 1 if it's already registered, and -1 if
  // a failure occurs during registration.

  virtual ~TAO_Object_Table (void);
  // Destructor.
};

// Dynamic Hashing scheme using template specialization for char*
typedef ACE_Hash_Map_Manager<const char*, CORBA::Object_ptr, ACE_SYNCH_RW_MUTEX> OBJ_MAP_MANAGER;

class TAO_Dynamic_Hash_ObjTable : public TAO_Object_Table
{
  // =TITLE
  // Lookup strategy based on dynamic hashing. This works on the assumption
  // that the object keys are essentially strings
public:
  TAO_Dynamic_Hash_ObjTable (CORBA::ULong size = 0);
  // constructor. If size is 0, some default is used.

  ~TAO_Dynamic_Hash_ObjTable (void);
  // destructor

  virtual int bind (const CORBA::OctetSeq &key, 
		    CORBA::Object_ptr obj);
  // Registers a CORBA::Object into the object table and associates the
  // key with it.  Returns -1 on failure, 0 on success, 1 on
  // duplicate.

  virtual int find (const CORBA::OctetSeq &key, 
		    CORBA::Object_ptr &obj);
  // Looks up an object in the object table using <{key}>.  Returns
  // non-negative integer on success, or -1 on failure.

private:
  OBJ_MAP_MANAGER hash_;
  // internal hash table
};

struct TAO_Linear_ObjTable_Entry
{
  // =TITLE
  // Linear strategy table entry. This assumes that the object keys will be
  // strings encoded as an octet sequence

  CORBA::String opname_;
  // stores the object key

  CORBA::Object_ptr obj_;
  // holds the CORBA::Object pointer corresponding to the object key

  TAO_Linear_ObjTable_Entry (void);
  // constructor

  ~TAO_Linear_ObjTable_Entry (void);
  // destructor
};

class TAO_Linear_ObjTable: public TAO_Object_Table
{
public:
  TAO_Linear_ObjTable (CORBA::ULong size);

  ~TAO_Linear_ObjTable (void);

  virtual int bind (const CORBA::OctetSeq &key,
		    CORBA::Object_ptr obj);
  // Registers a CORBA::Object into the object table and associates the
  // key with it.  Returns -1 on failure, 0 on success, 1 on
  // duplicate.

  virtual int find (const CORBA::OctetSeq &key, 
		    CORBA::Object_ptr &obj);
  // Looks up an object in the object table using <{key}>.  Returns
  // non-negative integer on success, or -1 on failure.

private:
  CORBA::ULong next_;
  CORBA::ULong tablesize_;
  TAO_Linear_ObjTable_Entry *tbl_;
};

struct TAO_Active_Demux_ObjTable_Entry
{
  // =TITLE
  // Active Demux lookup table entry

  CORBA::Object_ptr obj_;
  // CORBA::Object pointer corresponding to the key

  TAO_Active_Demux_ObjTable_Entry (void);
  // constructor

  ~TAO_Active_Demux_ObjTable_Entry (void);
  // destructor
};

class TAO_Active_Demux_ObjTable : public TAO_Object_Table
{
public:
  TAO_Active_Demux_ObjTable (CORBA::ULong size);

  ~TAO_Active_Demux_ObjTable (void);

  virtual int bind (const CORBA::OctetSeq &key,
		    CORBA::Object_ptr obj);
  // Registers a CORBA::Object into the object table and associates the
  // key with it.  Returns -1 on failure, 0 on success, 1 on
  // duplicate.

  virtual int find (const CORBA::OctetSeq &key,
		    CORBA::Object_ptr &obj);
  // Looks up an object in the object table using <{key}>.  Returns
  // non-negative integer on success, or -1 on failure.

private:
  CORBA::ULong next_;
  CORBA::ULong tablesize_;
  TAO_Active_Demux_ObjTable_Entry *tbl_;
};

#endif /* TAO_OBJTABLE_H */


