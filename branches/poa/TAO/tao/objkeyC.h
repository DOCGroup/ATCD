// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO ORB and the TAO IDL Compiler have been developed by Washington 
// University Computer Science's Distributed Object Computing Group.
//
// Information on TAO is available at
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#if !defined (_TAO_IDL_OBJKEYC_H_)
#define _TAO_IDL_OBJKEYC_H_

class TAO{
public:

#if !defined (_TAO__TAO__SEQ_OBJECTKEY_CH_)
#define _TAO__TAO__SEQ_OBJECTKEY_CH_

  // *************************************************************
  // class _tao__seq_ObjectKey
  // *************************************************************
  
  class _tao__seq_ObjectKey
  {
  public:
    _tao__seq_ObjectKey (void); // default constructor
    _tao__seq_ObjectKey (CORBA::ULong max);
    _tao__seq_ObjectKey (CORBA::ULong max, CORBA::ULong length, 
    	CORBA::Octet *value, CORBA::Boolean release=CORBA::B_FALSE);
    _tao__seq_ObjectKey(const _tao__seq_ObjectKey &); // copy constructor
    ~_tao__seq_ObjectKey (void);
    _tao__seq_ObjectKey &operator= (const _tao__seq_ObjectKey &);
    CORBA::ULong maximum (void) const;
    void length (CORBA::ULong);
    CORBA::ULong length (void) const;
    CORBA::Octet &operator[] (CORBA::ULong index);
    const CORBA::Octet &operator[] (CORBA::ULong index) const;
    static CORBA::Octet *allocbuf (CORBA::ULong nelems);
    static void freebuf (CORBA::Octet *);
  private:
    CORBA::ULong maximum_;
    CORBA::ULong length_;
    CORBA::Octet *buffer_;
    CORBA::Boolean release_;
  };
  typedef _tao__seq_ObjectKey* _tao__seq_ObjectKey_ptr;
  static CORBA::TypeCode_ptr _tc__tao__seq_ObjectKey;


#endif // end #if !defined


#if !defined (_TAO__TAO__SEQ_OBJECTKEY___VAR_CH_)
#define _TAO__TAO__SEQ_OBJECTKEY___VAR_CH_

// *************************************************************
  // class TAO::_tao__seq_ObjectKey_var
  // *************************************************************

  class _tao__seq_ObjectKey_var
  {
  public:
    _tao__seq_ObjectKey_var (void); // default constructor
    _tao__seq_ObjectKey_var (_tao__seq_ObjectKey *);
    _tao__seq_ObjectKey_var (const _tao__seq_ObjectKey_var &); // copy constructor
    ~_tao__seq_ObjectKey_var (void); // destructor
    
    _tao__seq_ObjectKey_var &operator= (_tao__seq_ObjectKey *);
    _tao__seq_ObjectKey_var &operator= (const _tao__seq_ObjectKey_var &);
    _tao__seq_ObjectKey *operator-> (void);
    const _tao__seq_ObjectKey *operator-> (void) const;
    
    operator const _tao__seq_ObjectKey &() const;
    operator _tao__seq_ObjectKey &();
    operator _tao__seq_ObjectKey &() const;
    CORBA::Octet &operator[] (CORBA::ULong index);
    // in, inout, out, _retn 
    const _tao__seq_ObjectKey &in (void) const;
    _tao__seq_ObjectKey &inout (void);
    _tao__seq_ObjectKey *&out (void);
    _tao__seq_ObjectKey *_retn (void);
    _tao__seq_ObjectKey *ptr (void) const;

  private:
    _tao__seq_ObjectKey *ptr_;
  };


#endif // end #if !defined


#if !defined (_TAO__TAO__SEQ_OBJECTKEY___OUT_CH_)
#define _TAO__TAO__SEQ_OBJECTKEY___OUT_CH_

  class _tao__seq_ObjectKey_out
  {
  public:
    _tao__seq_ObjectKey_out (_tao__seq_ObjectKey *&);
    _tao__seq_ObjectKey_out (_tao__seq_ObjectKey_var &);
    _tao__seq_ObjectKey_out (_tao__seq_ObjectKey_out &);
    _tao__seq_ObjectKey_out &operator= (_tao__seq_ObjectKey_out &);
    _tao__seq_ObjectKey_out &operator= (_tao__seq_ObjectKey *);
    operator _tao__seq_ObjectKey *&();
    _tao__seq_ObjectKey *&ptr (void);
    _tao__seq_ObjectKey *operator-> (void);
    CORBA::Octet &operator[] (CORBA::ULong index);
    
  private:
    _tao__seq_ObjectKey *&ptr_;
    // assignment from T_var not allowed
    void operator= (const _tao__seq_ObjectKey_var &);
  };


#endif // end #if !defined

  typedef ACE_NESTED_CLASS (TAO,_tao__seq_ObjectKey) ObjectKey;
  typedef ACE_NESTED_CLASS (TAO,_tao__seq_ObjectKey_var) ObjectKey_var;
  typedef ACE_NESTED_CLASS (TAO,_tao__seq_ObjectKey_out) ObjectKey_out;

  static CORBA::TypeCode_ptr _tc_ObjectKey;

};


#endif // if !defined
