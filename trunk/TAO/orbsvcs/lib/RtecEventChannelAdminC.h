// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO ORB and the TAO IDL Compiler have been developed by Washington 
// University Computer Science's Distributed Object Computing Group.
//
// Information on TAO is available at
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#if !defined (_TAO_IDL_RTECEVENTCHANNELADMINC_H_)
#define _TAO_IDL_RTECEVENTCHANNELADMINC_H_

#include "tao/corba.h"
#include "RtecEventCommC.h"
#include "RtecSchedulerC.h"

class RtecEventChannelAdmin{
public:
  
#if !defined (_RTECEVENTCHANNELADMIN_ALREADYCONNECTED___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_ALREADYCONNECTED___PTR_CH_

  class AlreadyConnected;
  typedef AlreadyConnected *AlreadyConnected_ptr;
  
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_ALREADYCONNECTED_CH_)
#define _RTECEVENTCHANNELADMIN_ALREADYCONNECTED_CH_

  class AlreadyConnected : public virtual CORBA::UserException
  {
  public:
      AlreadyConnected (void);
  };
  
  
#endif // end #if !defined

static CORBA::TypeCode_ptr _tc_AlreadyConnected;

  
#if !defined (_RTECEVENTCHANNELADMIN_TYPEERROR___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_TYPEERROR___PTR_CH_

  class TypeError;
  typedef TypeError *TypeError_ptr;
  
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_TYPEERROR_CH_)
#define _RTECEVENTCHANNELADMIN_TYPEERROR_CH_

  class TypeError : public virtual CORBA::UserException
  {
  public:
      TypeError (void);
  };
  
  
#endif // end #if !defined

static CORBA::TypeCode_ptr _tc_TypeError;

  struct Dependency
  {
    struct Event
    {
    };

    class Event_var
    {
    public:
      Event_var (void); // default constructor
      Event_var (Event *);
      Event_var (const Event_var &); // copy constructor
      ~Event_var (void); // destructor
      
      Event_var &operator= (Event *);
      Event_var &operator= (const Event_var &);
      Event *operator-> (void);
      const Event *operator-> (void) const;
      
      operator const Event &() const;
      operator Event &();
      operator Event &() const;
      // in, inout, out, _retn 
      const Event &in (void) const;
      Event &inout (void);
      Event &out (void);
      Event _retn (void);
      Event *ptr(void) const;

    private:
      Event *ptr_;
    };

    typedef Event &Event_out;

    static CORBA::TypeCode_ptr _tc_Event;

    RtecEventComm::Event event_;

    RtecScheduler::handle_t rt_info;

  };

  class Dependency_var
  {
  public:
    Dependency_var (void); // default constructor
    Dependency_var (Dependency *);
    Dependency_var (const Dependency_var &); // copy constructor
    ~Dependency_var (void); // destructor
    
    Dependency_var &operator= (Dependency *);
    Dependency_var &operator= (const Dependency_var &);
    Dependency *operator-> (void);
    const Dependency *operator-> (void) const;
    
    operator const Dependency &() const;
    operator Dependency &();
    operator Dependency &() const;
    // in, inout, out, _retn 
    const Dependency &in (void) const;
    Dependency &inout (void);
    Dependency &out (void);
    Dependency _retn (void);
    Dependency *ptr(void) const;

  private:
    Dependency *ptr_;
  };

  typedef Dependency &Dependency_out;

  static CORBA::TypeCode_ptr _tc_Dependency;


#if !defined (_RTECEVENTCHANNELADMIN__TAO__SEQ_DEPENDENCYSET_CH_)
#define _RTECEVENTCHANNELADMIN__TAO__SEQ_DEPENDENCYSET_CH_

// *************************************************************
  // class _tao__seq_DependencySet
  // *************************************************************

  class _tao__seq_DependencySet
  {
  public:
    _tao__seq_DependencySet (void); // default constructor
    _tao__seq_DependencySet (CORBA::ULong max);
    _tao__seq_DependencySet (CORBA::ULong max, CORBA::ULong length, 
    	ACE_NESTED_CLASS (RtecEventChannelAdmin,Dependency) *value, CORBA::Boolean release=CORBA::B_FALSE);
    _tao__seq_DependencySet(const _tao__seq_DependencySet &); // copy constructor
    ~_tao__seq_DependencySet (void);
    _tao__seq_DependencySet &operator= (const _tao__seq_DependencySet &);
    CORBA::ULong maximum (void) const;
    void length (CORBA::ULong);
    CORBA::ULong length (void) const;
    ACE_NESTED_CLASS (RtecEventChannelAdmin,Dependency) &operator[] (CORBA::ULong index);
    const ACE_NESTED_CLASS (RtecEventChannelAdmin,Dependency) &operator[] (CORBA::ULong index) const;
    static ACE_NESTED_CLASS (RtecEventChannelAdmin,Dependency) *allocbuf (CORBA::ULong nelems);
    static void freebuf (ACE_NESTED_CLASS (RtecEventChannelAdmin,Dependency) *);
  private:
    CORBA::ULong maximum_;
    CORBA::ULong length_;
    ACE_NESTED_CLASS (RtecEventChannelAdmin,Dependency) *buffer_;
    CORBA::Boolean release_;
  };
  typedef _tao__seq_DependencySet* _tao__seq_DependencySet_ptr;
  static CORBA::TypeCode_ptr _tc__tao__seq_DependencySet;


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN__TAO__SEQ_DEPENDENCYSET___VAR_CH_)
#define _RTECEVENTCHANNELADMIN__TAO__SEQ_DEPENDENCYSET___VAR_CH_

// *************************************************************
  // class RtecEventChannelAdmin::_tao__seq_DependencySet_var
  // *************************************************************

  class _tao__seq_DependencySet_var
  {
  public:
    _tao__seq_DependencySet_var (void); // default constructor
    _tao__seq_DependencySet_var (_tao__seq_DependencySet *);
    _tao__seq_DependencySet_var (const _tao__seq_DependencySet_var &); // copy constructor
    ~_tao__seq_DependencySet_var (void); // destructor
    
    _tao__seq_DependencySet_var &operator= (_tao__seq_DependencySet *);
    _tao__seq_DependencySet_var &operator= (const _tao__seq_DependencySet_var &);
    _tao__seq_DependencySet *operator-> (void);
    const _tao__seq_DependencySet *operator-> (void) const;
    
    operator const _tao__seq_DependencySet &() const;
    operator _tao__seq_DependencySet &();
    operator _tao__seq_DependencySet &() const;
    ACE_NESTED_CLASS (RtecEventChannelAdmin,Dependency) &operator[] (CORBA::ULong index);
    // in, inout, out, _retn 
    const _tao__seq_DependencySet &in (void) const;
    _tao__seq_DependencySet &inout (void);
    _tao__seq_DependencySet *&out (void);
    _tao__seq_DependencySet *_retn (void);
    _tao__seq_DependencySet *ptr (void) const;

  private:
    _tao__seq_DependencySet *ptr_;
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN__TAO__SEQ_DEPENDENCYSET___OUT_CH_)
#define _RTECEVENTCHANNELADMIN__TAO__SEQ_DEPENDENCYSET___OUT_CH_

  class _tao__seq_DependencySet_out
  {
  public:
    _tao__seq_DependencySet_out (_tao__seq_DependencySet *&);
    _tao__seq_DependencySet_out (_tao__seq_DependencySet_var &);
    _tao__seq_DependencySet_out (_tao__seq_DependencySet_out &);
    _tao__seq_DependencySet_out &operator= (_tao__seq_DependencySet_out &);
    _tao__seq_DependencySet_out &operator= (_tao__seq_DependencySet *);
    operator _tao__seq_DependencySet *&();
    _tao__seq_DependencySet *&ptr (void);
    _tao__seq_DependencySet *operator-> (void);
    ACE_NESTED_CLASS (RtecEventChannelAdmin,Dependency) &operator[] (CORBA::ULong index);
    
  private:
    _tao__seq_DependencySet *&ptr_;
    // assignment from T_var not allowed
    void operator= (const _tao__seq_DependencySet_var &);
  };


#endif // end #if !defined

  typedef ACE_NESTED_CLASS (RtecEventChannelAdmin,_tao__seq_DependencySet) DependencySet;
  typedef ACE_NESTED_CLASS (RtecEventChannelAdmin,_tao__seq_DependencySet_var) DependencySet_var;
  typedef ACE_NESTED_CLASS (RtecEventChannelAdmin,_tao__seq_DependencySet_out) DependencySet_out;

  static CORBA::TypeCode_ptr _tc_DependencySet;

  struct ConsumerQOS
  {
    ACE_NESTED_CLASS (RtecEventChannelAdmin,DependencySet) dependencies;

    RtecEventComm::Event forward_event;

  };

  class ConsumerQOS_var
  {
  public:
    ConsumerQOS_var (void); // default constructor
    ConsumerQOS_var (ConsumerQOS *);
    ConsumerQOS_var (const ConsumerQOS_var &); // copy constructor
    ~ConsumerQOS_var (void); // destructor
    
    ConsumerQOS_var &operator= (ConsumerQOS *);
    ConsumerQOS_var &operator= (const ConsumerQOS_var &);
    ConsumerQOS *operator-> (void);
    const ConsumerQOS *operator-> (void) const;
    
    operator const ConsumerQOS &() const;
    operator ConsumerQOS &();
    operator ConsumerQOS &() const;
    // in, inout, out, _retn 
    const ConsumerQOS &in (void) const;
    ConsumerQOS &inout (void);
    ConsumerQOS *&out (void);
    ConsumerQOS *_retn (void);
    ConsumerQOS *ptr(void) const;

  private:
    ConsumerQOS *ptr_;
  };

  class ConsumerQOS_out
  {
  public:
    ConsumerQOS_out (ConsumerQOS *&);
    ConsumerQOS_out (ConsumerQOS_var &);
    ConsumerQOS_out (ConsumerQOS_out &);
    ConsumerQOS_out &operator= (ConsumerQOS_out &);
    ConsumerQOS_out &operator= (ConsumerQOS *);
    operator ConsumerQOS *&();
    ConsumerQOS *&ptr (void);
    ConsumerQOS *operator-> (void);
    
  private:
    ConsumerQOS *&ptr_;
    // assignment from T_var not allowed
    void operator= (const ConsumerQOS_var &);
  };

  static CORBA::TypeCode_ptr _tc_ConsumerQOS;

  struct Publication
  {
    RtecEventComm::Event event_;

    struct Dependency_Info
    {
    };

    class Dependency_Info_var
    {
    public:
      Dependency_Info_var (void); // default constructor
      Dependency_Info_var (Dependency_Info *);
      Dependency_Info_var (const Dependency_Info_var &); // copy constructor
      ~Dependency_Info_var (void); // destructor
      
      Dependency_Info_var &operator= (Dependency_Info *);
      Dependency_Info_var &operator= (const Dependency_Info_var &);
      Dependency_Info *operator-> (void);
      const Dependency_Info *operator-> (void) const;
      
      operator const Dependency_Info &() const;
      operator Dependency_Info &();
      operator Dependency_Info &() const;
      // in, inout, out, _retn 
      const Dependency_Info &in (void) const;
      Dependency_Info &inout (void);
      Dependency_Info &out (void);
      Dependency_Info _retn (void);
      Dependency_Info *ptr(void) const;

    private:
      Dependency_Info *ptr_;
    };

    typedef Dependency_Info &Dependency_Info_out;

    static CORBA::TypeCode_ptr _tc_Dependency_Info;

    RtecScheduler::Dependency_Info dependency_info_;

  };

  class Publication_var
  {
  public:
    Publication_var (void); // default constructor
    Publication_var (Publication *);
    Publication_var (const Publication_var &); // copy constructor
    ~Publication_var (void); // destructor
    
    Publication_var &operator= (Publication *);
    Publication_var &operator= (const Publication_var &);
    Publication *operator-> (void);
    const Publication *operator-> (void) const;
    
    operator const Publication &() const;
    operator Publication &();
    operator Publication &() const;
    // in, inout, out, _retn 
    const Publication &in (void) const;
    Publication &inout (void);
    Publication &out (void);
    Publication _retn (void);
    Publication *ptr(void) const;

  private:
    Publication *ptr_;
  };

  typedef Publication &Publication_out;

  static CORBA::TypeCode_ptr _tc_Publication;


#if !defined (_RTECEVENTCHANNELADMIN__TAO__SEQ_PUBLICATIONSET_CH_)
#define _RTECEVENTCHANNELADMIN__TAO__SEQ_PUBLICATIONSET_CH_

// *************************************************************
  // class _tao__seq_PublicationSet
  // *************************************************************

  class _tao__seq_PublicationSet
  {
  public:
    _tao__seq_PublicationSet (void); // default constructor
    _tao__seq_PublicationSet (CORBA::ULong max);
    _tao__seq_PublicationSet (CORBA::ULong max, CORBA::ULong length, 
    	ACE_NESTED_CLASS (RtecEventChannelAdmin,Publication) *value, CORBA::Boolean release=CORBA::B_FALSE);
    _tao__seq_PublicationSet(const _tao__seq_PublicationSet &); // copy constructor
    ~_tao__seq_PublicationSet (void);
    _tao__seq_PublicationSet &operator= (const _tao__seq_PublicationSet &);
    CORBA::ULong maximum (void) const;
    void length (CORBA::ULong);
    CORBA::ULong length (void) const;
    ACE_NESTED_CLASS (RtecEventChannelAdmin,Publication) &operator[] (CORBA::ULong index);
    const ACE_NESTED_CLASS (RtecEventChannelAdmin,Publication) &operator[] (CORBA::ULong index) const;
    static ACE_NESTED_CLASS (RtecEventChannelAdmin,Publication) *allocbuf (CORBA::ULong nelems);
    static void freebuf (ACE_NESTED_CLASS (RtecEventChannelAdmin,Publication) *);
  private:
    CORBA::ULong maximum_;
    CORBA::ULong length_;
    ACE_NESTED_CLASS (RtecEventChannelAdmin,Publication) *buffer_;
    CORBA::Boolean release_;
  };
  typedef _tao__seq_PublicationSet* _tao__seq_PublicationSet_ptr;
  static CORBA::TypeCode_ptr _tc__tao__seq_PublicationSet;


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN__TAO__SEQ_PUBLICATIONSET___VAR_CH_)
#define _RTECEVENTCHANNELADMIN__TAO__SEQ_PUBLICATIONSET___VAR_CH_

// *************************************************************
  // class RtecEventChannelAdmin::_tao__seq_PublicationSet_var
  // *************************************************************

  class _tao__seq_PublicationSet_var
  {
  public:
    _tao__seq_PublicationSet_var (void); // default constructor
    _tao__seq_PublicationSet_var (_tao__seq_PublicationSet *);
    _tao__seq_PublicationSet_var (const _tao__seq_PublicationSet_var &); // copy constructor
    ~_tao__seq_PublicationSet_var (void); // destructor
    
    _tao__seq_PublicationSet_var &operator= (_tao__seq_PublicationSet *);
    _tao__seq_PublicationSet_var &operator= (const _tao__seq_PublicationSet_var &);
    _tao__seq_PublicationSet *operator-> (void);
    const _tao__seq_PublicationSet *operator-> (void) const;
    
    operator const _tao__seq_PublicationSet &() const;
    operator _tao__seq_PublicationSet &();
    operator _tao__seq_PublicationSet &() const;
    ACE_NESTED_CLASS (RtecEventChannelAdmin,Publication) &operator[] (CORBA::ULong index);
    // in, inout, out, _retn 
    const _tao__seq_PublicationSet &in (void) const;
    _tao__seq_PublicationSet &inout (void);
    _tao__seq_PublicationSet *&out (void);
    _tao__seq_PublicationSet *_retn (void);
    _tao__seq_PublicationSet *ptr (void) const;

  private:
    _tao__seq_PublicationSet *ptr_;
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN__TAO__SEQ_PUBLICATIONSET___OUT_CH_)
#define _RTECEVENTCHANNELADMIN__TAO__SEQ_PUBLICATIONSET___OUT_CH_

  class _tao__seq_PublicationSet_out
  {
  public:
    _tao__seq_PublicationSet_out (_tao__seq_PublicationSet *&);
    _tao__seq_PublicationSet_out (_tao__seq_PublicationSet_var &);
    _tao__seq_PublicationSet_out (_tao__seq_PublicationSet_out &);
    _tao__seq_PublicationSet_out &operator= (_tao__seq_PublicationSet_out &);
    _tao__seq_PublicationSet_out &operator= (_tao__seq_PublicationSet *);
    operator _tao__seq_PublicationSet *&();
    _tao__seq_PublicationSet *&ptr (void);
    _tao__seq_PublicationSet *operator-> (void);
    ACE_NESTED_CLASS (RtecEventChannelAdmin,Publication) &operator[] (CORBA::ULong index);
    
  private:
    _tao__seq_PublicationSet *&ptr_;
    // assignment from T_var not allowed
    void operator= (const _tao__seq_PublicationSet_var &);
  };


#endif // end #if !defined

  typedef ACE_NESTED_CLASS (RtecEventChannelAdmin,_tao__seq_PublicationSet) PublicationSet;
  typedef ACE_NESTED_CLASS (RtecEventChannelAdmin,_tao__seq_PublicationSet_var) PublicationSet_var;
  typedef ACE_NESTED_CLASS (RtecEventChannelAdmin,_tao__seq_PublicationSet_out) PublicationSet_out;

  static CORBA::TypeCode_ptr _tc_PublicationSet;

  struct SupplierQOS
  {
    ACE_NESTED_CLASS (RtecEventChannelAdmin,PublicationSet) publications_;

  };

  class SupplierQOS_var
  {
  public:
    SupplierQOS_var (void); // default constructor
    SupplierQOS_var (SupplierQOS *);
    SupplierQOS_var (const SupplierQOS_var &); // copy constructor
    ~SupplierQOS_var (void); // destructor
    
    SupplierQOS_var &operator= (SupplierQOS *);
    SupplierQOS_var &operator= (const SupplierQOS_var &);
    SupplierQOS *operator-> (void);
    const SupplierQOS *operator-> (void) const;
    
    operator const SupplierQOS &() const;
    operator SupplierQOS &();
    operator SupplierQOS &() const;
    // in, inout, out, _retn 
    const SupplierQOS &in (void) const;
    SupplierQOS &inout (void);
    SupplierQOS *&out (void);
    SupplierQOS *_retn (void);
    SupplierQOS *ptr(void) const;

  private:
    SupplierQOS *ptr_;
  };

  class SupplierQOS_out
  {
  public:
    SupplierQOS_out (SupplierQOS *&);
    SupplierQOS_out (SupplierQOS_var &);
    SupplierQOS_out (SupplierQOS_out &);
    SupplierQOS_out &operator= (SupplierQOS_out &);
    SupplierQOS_out &operator= (SupplierQOS *);
    operator SupplierQOS *&();
    SupplierQOS *&ptr (void);
    SupplierQOS *operator-> (void);
    
  private:
    SupplierQOS *&ptr_;
    // assignment from T_var not allowed
    void operator= (const SupplierQOS_var &);
  };

  static CORBA::TypeCode_ptr _tc_SupplierQOS;

  
#if !defined (_RTECEVENTCHANNELADMIN_PROXYPUSHCONSUMER___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_PROXYPUSHCONSUMER___PTR_CH_

class ProxyPushConsumer;
  typedef ProxyPushConsumer *ProxyPushConsumer_ptr;
  
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_PROXYPUSHCONSUMER_CH_)
#define _RTECEVENTCHANNELADMIN_PROXYPUSHCONSUMER_CH_

class ProxyPushConsumer: public virtual RtecEventComm::PushConsumer
  {
  public:
    // the static operations
    static ProxyPushConsumer_ptr _duplicate (ProxyPushConsumer_ptr obj);
    static ProxyPushConsumer_ptr _narrow (CORBA::Object_ptr obj, CORBA::Environment &env);
    static ProxyPushConsumer_ptr _nil (void);
    static ProxyPushConsumer_ptr _bind (const char *host, CORBA::UShort port, const char *key, CORBA::Environment &env);

    virtual void connect_push_supplier (RtecEventComm::PushSupplier_ptr  push_supplier, const ACE_NESTED_CLASS (RtecEventChannelAdmin,SupplierQOS) & qos, CORBA::Environment &env);
  protected:
    ProxyPushConsumer (void); // default constructor
    ProxyPushConsumer (STUB_Object *objref);
    virtual ~ProxyPushConsumer (void);
  private:
    ProxyPushConsumer (const ProxyPushConsumer&);
    void operator= (const ProxyPushConsumer&);
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_PROXYPUSHCONSUMER___VAR_CH_)
#define _RTECEVENTCHANNELADMIN_PROXYPUSHCONSUMER___VAR_CH_

  class ProxyPushConsumer_var
  {
  public:
    ProxyPushConsumer_var (void); // default constructor
    ProxyPushConsumer_var (ProxyPushConsumer_ptr);
    ProxyPushConsumer_var (const ProxyPushConsumer_var &); // copy constructor
    ~ProxyPushConsumer_var (void); // destructor
    
    ProxyPushConsumer_var &operator= (ProxyPushConsumer_ptr);
    ProxyPushConsumer_var &operator= (const ProxyPushConsumer_var &);
    ProxyPushConsumer_ptr operator-> (void) const;
    
    operator const ProxyPushConsumer_ptr &() const;
    operator ProxyPushConsumer_ptr &();
    // in, inout, out, _retn 
    ProxyPushConsumer_ptr in (void) const;
    ProxyPushConsumer_ptr &inout (void);
    ProxyPushConsumer_ptr &out (void);
    ProxyPushConsumer_ptr _retn (void);
    ProxyPushConsumer_ptr ptr (void) const;

  private:
    ProxyPushConsumer_ptr ptr_;
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_PROXYPUSHCONSUMER___OUT_CH_)
#define _RTECEVENTCHANNELADMIN_PROXYPUSHCONSUMER___OUT_CH_

  class ProxyPushConsumer_out
  {
  public:
    ProxyPushConsumer_out (ProxyPushConsumer_ptr &);
    ProxyPushConsumer_out (ProxyPushConsumer_var &);
    ProxyPushConsumer_out (ProxyPushConsumer_out &);
    ProxyPushConsumer_out &operator= (ProxyPushConsumer_out &);
    ProxyPushConsumer_out &operator= (const ProxyPushConsumer_var &);
    ProxyPushConsumer_out &operator= (ProxyPushConsumer_ptr);
    operator ProxyPushConsumer_ptr &();
    ProxyPushConsumer_ptr &ptr (void);
    ProxyPushConsumer_ptr operator-> (void);
    
  private:
    ProxyPushConsumer_ptr &ptr_;
  };


#endif // end #if !defined

  static CORBA::TypeCode_ptr _tc_ProxyPushConsumer;

  
#if !defined (_RTECEVENTCHANNELADMIN_PROXYPUSHSUPPLIER___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_PROXYPUSHSUPPLIER___PTR_CH_

class ProxyPushSupplier;
  typedef ProxyPushSupplier *ProxyPushSupplier_ptr;
  
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_PROXYPUSHSUPPLIER_CH_)
#define _RTECEVENTCHANNELADMIN_PROXYPUSHSUPPLIER_CH_

class ProxyPushSupplier: public virtual RtecEventComm::PushSupplier
  {
  public:
    // the static operations
    static ProxyPushSupplier_ptr _duplicate (ProxyPushSupplier_ptr obj);
    static ProxyPushSupplier_ptr _narrow (CORBA::Object_ptr obj, CORBA::Environment &env);
    static ProxyPushSupplier_ptr _nil (void);
    static ProxyPushSupplier_ptr _bind (const char *host, CORBA::UShort port, const char *key, CORBA::Environment &env);

    virtual void connect_push_consumer (RtecEventComm::PushConsumer_ptr  push_consumer, const ACE_NESTED_CLASS (RtecEventChannelAdmin,ConsumerQOS) & qos, CORBA::Environment &env);
  protected:
    ProxyPushSupplier (void); // default constructor
    ProxyPushSupplier (STUB_Object *objref);
    virtual ~ProxyPushSupplier (void);
  private:
    ProxyPushSupplier (const ProxyPushSupplier&);
    void operator= (const ProxyPushSupplier&);
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_PROXYPUSHSUPPLIER___VAR_CH_)
#define _RTECEVENTCHANNELADMIN_PROXYPUSHSUPPLIER___VAR_CH_

  class ProxyPushSupplier_var
  {
  public:
    ProxyPushSupplier_var (void); // default constructor
    ProxyPushSupplier_var (ProxyPushSupplier_ptr);
    ProxyPushSupplier_var (const ProxyPushSupplier_var &); // copy constructor
    ~ProxyPushSupplier_var (void); // destructor
    
    ProxyPushSupplier_var &operator= (ProxyPushSupplier_ptr);
    ProxyPushSupplier_var &operator= (const ProxyPushSupplier_var &);
    ProxyPushSupplier_ptr operator-> (void) const;
    
    operator const ProxyPushSupplier_ptr &() const;
    operator ProxyPushSupplier_ptr &();
    // in, inout, out, _retn 
    ProxyPushSupplier_ptr in (void) const;
    ProxyPushSupplier_ptr &inout (void);
    ProxyPushSupplier_ptr &out (void);
    ProxyPushSupplier_ptr _retn (void);
    ProxyPushSupplier_ptr ptr (void) const;

  private:
    ProxyPushSupplier_ptr ptr_;
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_PROXYPUSHSUPPLIER___OUT_CH_)
#define _RTECEVENTCHANNELADMIN_PROXYPUSHSUPPLIER___OUT_CH_

  class ProxyPushSupplier_out
  {
  public:
    ProxyPushSupplier_out (ProxyPushSupplier_ptr &);
    ProxyPushSupplier_out (ProxyPushSupplier_var &);
    ProxyPushSupplier_out (ProxyPushSupplier_out &);
    ProxyPushSupplier_out &operator= (ProxyPushSupplier_out &);
    ProxyPushSupplier_out &operator= (const ProxyPushSupplier_var &);
    ProxyPushSupplier_out &operator= (ProxyPushSupplier_ptr);
    operator ProxyPushSupplier_ptr &();
    ProxyPushSupplier_ptr &ptr (void);
    ProxyPushSupplier_ptr operator-> (void);
    
  private:
    ProxyPushSupplier_ptr &ptr_;
  };


#endif // end #if !defined

  static CORBA::TypeCode_ptr _tc_ProxyPushSupplier;

  
#if !defined (_RTECEVENTCHANNELADMIN_CONSUMERADMIN___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_CONSUMERADMIN___PTR_CH_

class ConsumerAdmin;
  typedef ConsumerAdmin *ConsumerAdmin_ptr;
  
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_CONSUMERADMIN_CH_)
#define _RTECEVENTCHANNELADMIN_CONSUMERADMIN_CH_

class ConsumerAdmin: public virtual ACE_CORBA_1 (Object)
  {
  public:
    // the static operations
    static ConsumerAdmin_ptr _duplicate (ConsumerAdmin_ptr obj);
    static ConsumerAdmin_ptr _narrow (CORBA::Object_ptr obj, CORBA::Environment &env);
    static ConsumerAdmin_ptr _nil (void);
    static ConsumerAdmin_ptr _bind (const char *host, CORBA::UShort port, const char *key, CORBA::Environment &env);

    virtual ACE_NESTED_CLASS (RtecEventChannelAdmin,ProxyPushSupplier_ptr)  obtain_push_supplier (CORBA::Environment &env);
  protected:
    ConsumerAdmin (void); // default constructor
    ConsumerAdmin (STUB_Object *objref);
    virtual ~ConsumerAdmin (void);
  private:
    ConsumerAdmin (const ConsumerAdmin&);
    void operator= (const ConsumerAdmin&);
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_CONSUMERADMIN___VAR_CH_)
#define _RTECEVENTCHANNELADMIN_CONSUMERADMIN___VAR_CH_

  class ConsumerAdmin_var
  {
  public:
    ConsumerAdmin_var (void); // default constructor
    ConsumerAdmin_var (ConsumerAdmin_ptr);
    ConsumerAdmin_var (const ConsumerAdmin_var &); // copy constructor
    ~ConsumerAdmin_var (void); // destructor
    
    ConsumerAdmin_var &operator= (ConsumerAdmin_ptr);
    ConsumerAdmin_var &operator= (const ConsumerAdmin_var &);
    ConsumerAdmin_ptr operator-> (void) const;
    
    operator const ConsumerAdmin_ptr &() const;
    operator ConsumerAdmin_ptr &();
    // in, inout, out, _retn 
    ConsumerAdmin_ptr in (void) const;
    ConsumerAdmin_ptr &inout (void);
    ConsumerAdmin_ptr &out (void);
    ConsumerAdmin_ptr _retn (void);
    ConsumerAdmin_ptr ptr (void) const;

  private:
    ConsumerAdmin_ptr ptr_;
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_CONSUMERADMIN___OUT_CH_)
#define _RTECEVENTCHANNELADMIN_CONSUMERADMIN___OUT_CH_

  class ConsumerAdmin_out
  {
  public:
    ConsumerAdmin_out (ConsumerAdmin_ptr &);
    ConsumerAdmin_out (ConsumerAdmin_var &);
    ConsumerAdmin_out (ConsumerAdmin_out &);
    ConsumerAdmin_out &operator= (ConsumerAdmin_out &);
    ConsumerAdmin_out &operator= (const ConsumerAdmin_var &);
    ConsumerAdmin_out &operator= (ConsumerAdmin_ptr);
    operator ConsumerAdmin_ptr &();
    ConsumerAdmin_ptr &ptr (void);
    ConsumerAdmin_ptr operator-> (void);
    
  private:
    ConsumerAdmin_ptr &ptr_;
  };


#endif // end #if !defined

  static CORBA::TypeCode_ptr _tc_ConsumerAdmin;

  
#if !defined (_RTECEVENTCHANNELADMIN_SUPPLIERADMIN___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_SUPPLIERADMIN___PTR_CH_

class SupplierAdmin;
  typedef SupplierAdmin *SupplierAdmin_ptr;
  
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_SUPPLIERADMIN_CH_)
#define _RTECEVENTCHANNELADMIN_SUPPLIERADMIN_CH_

class SupplierAdmin: public virtual ACE_CORBA_1 (Object)
  {
  public:
    // the static operations
    static SupplierAdmin_ptr _duplicate (SupplierAdmin_ptr obj);
    static SupplierAdmin_ptr _narrow (CORBA::Object_ptr obj, CORBA::Environment &env);
    static SupplierAdmin_ptr _nil (void);
    static SupplierAdmin_ptr _bind (const char *host, CORBA::UShort port, const char *key, CORBA::Environment &env);

    virtual ACE_NESTED_CLASS (RtecEventChannelAdmin,ProxyPushConsumer_ptr)  obtain_push_consumer (CORBA::Environment &env);
  protected:
    SupplierAdmin (void); // default constructor
    SupplierAdmin (STUB_Object *objref);
    virtual ~SupplierAdmin (void);
  private:
    SupplierAdmin (const SupplierAdmin&);
    void operator= (const SupplierAdmin&);
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_SUPPLIERADMIN___VAR_CH_)
#define _RTECEVENTCHANNELADMIN_SUPPLIERADMIN___VAR_CH_

  class SupplierAdmin_var
  {
  public:
    SupplierAdmin_var (void); // default constructor
    SupplierAdmin_var (SupplierAdmin_ptr);
    SupplierAdmin_var (const SupplierAdmin_var &); // copy constructor
    ~SupplierAdmin_var (void); // destructor
    
    SupplierAdmin_var &operator= (SupplierAdmin_ptr);
    SupplierAdmin_var &operator= (const SupplierAdmin_var &);
    SupplierAdmin_ptr operator-> (void) const;
    
    operator const SupplierAdmin_ptr &() const;
    operator SupplierAdmin_ptr &();
    // in, inout, out, _retn 
    SupplierAdmin_ptr in (void) const;
    SupplierAdmin_ptr &inout (void);
    SupplierAdmin_ptr &out (void);
    SupplierAdmin_ptr _retn (void);
    SupplierAdmin_ptr ptr (void) const;

  private:
    SupplierAdmin_ptr ptr_;
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_SUPPLIERADMIN___OUT_CH_)
#define _RTECEVENTCHANNELADMIN_SUPPLIERADMIN___OUT_CH_

  class SupplierAdmin_out
  {
  public:
    SupplierAdmin_out (SupplierAdmin_ptr &);
    SupplierAdmin_out (SupplierAdmin_var &);
    SupplierAdmin_out (SupplierAdmin_out &);
    SupplierAdmin_out &operator= (SupplierAdmin_out &);
    SupplierAdmin_out &operator= (const SupplierAdmin_var &);
    SupplierAdmin_out &operator= (SupplierAdmin_ptr);
    operator SupplierAdmin_ptr &();
    SupplierAdmin_ptr &ptr (void);
    SupplierAdmin_ptr operator-> (void);
    
  private:
    SupplierAdmin_ptr &ptr_;
  };


#endif // end #if !defined

  static CORBA::TypeCode_ptr _tc_SupplierAdmin;

  
#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL___PTR_CH_

class EventChannel;
  typedef EventChannel *EventChannel_ptr;
  
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_CH_

class EventChannel: public virtual ACE_CORBA_1 (Object)
  {
  public:
    // the static operations
    static EventChannel_ptr _duplicate (EventChannel_ptr obj);
    static EventChannel_ptr _narrow (CORBA::Object_ptr obj, CORBA::Environment &env);
    static EventChannel_ptr _nil (void);
    static EventChannel_ptr _bind (const char *host, CORBA::UShort port, const char *key, CORBA::Environment &env);

    
#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_SYNCHRONIZATION_ERROR___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_SYNCHRONIZATION_ERROR___PTR_CH_

    class SYNCHRONIZATION_ERROR;
    typedef SYNCHRONIZATION_ERROR *SYNCHRONIZATION_ERROR_ptr;
    
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_SYNCHRONIZATION_ERROR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_SYNCHRONIZATION_ERROR_CH_

    class SYNCHRONIZATION_ERROR : public virtual CORBA::UserException
    {
    public:
          SYNCHRONIZATION_ERROR (void);
    };
    
    
#endif // end #if !defined

static CORBA::TypeCode_ptr _tc_SYNCHRONIZATION_ERROR;

    
#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_QOS_ERROR___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_QOS_ERROR___PTR_CH_

    class QOS_ERROR;
    typedef QOS_ERROR *QOS_ERROR_ptr;
    
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_QOS_ERROR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_QOS_ERROR_CH_

    class QOS_ERROR : public virtual CORBA::UserException
    {
    public:
          QOS_ERROR (void);
    };
    
    
#endif // end #if !defined

static CORBA::TypeCode_ptr _tc_QOS_ERROR;

    
#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_SUBSCRIPTION_ERROR___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_SUBSCRIPTION_ERROR___PTR_CH_

    class SUBSCRIPTION_ERROR;
    typedef SUBSCRIPTION_ERROR *SUBSCRIPTION_ERROR_ptr;
    
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_SUBSCRIPTION_ERROR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_SUBSCRIPTION_ERROR_CH_

    class SUBSCRIPTION_ERROR : public virtual CORBA::UserException
    {
    public:
          SUBSCRIPTION_ERROR (void);
    };
    
    
#endif // end #if !defined

static CORBA::TypeCode_ptr _tc_SUBSCRIPTION_ERROR;

    
#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_CORRELATION_ERROR___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_CORRELATION_ERROR___PTR_CH_

    class CORRELATION_ERROR;
    typedef CORRELATION_ERROR *CORRELATION_ERROR_ptr;
    
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_CORRELATION_ERROR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_CORRELATION_ERROR_CH_

    class CORRELATION_ERROR : public virtual CORBA::UserException
    {
    public:
          CORRELATION_ERROR (void);
    };
    
    
#endif // end #if !defined

static CORBA::TypeCode_ptr _tc_CORRELATION_ERROR;

    
#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_DISPATCH_ERROR___PTR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_DISPATCH_ERROR___PTR_CH_

    class DISPATCH_ERROR;
    typedef DISPATCH_ERROR *DISPATCH_ERROR_ptr;
    
#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL_DISPATCH_ERROR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL_DISPATCH_ERROR_CH_

    class DISPATCH_ERROR : public virtual CORBA::UserException
    {
    public:
          DISPATCH_ERROR (void);
    };
    
    
#endif // end #if !defined

static CORBA::TypeCode_ptr _tc_DISPATCH_ERROR;

    virtual ACE_NESTED_CLASS (RtecEventChannelAdmin,ConsumerAdmin_ptr)  for_consumers (CORBA::Environment &env);
    virtual ACE_NESTED_CLASS (RtecEventChannelAdmin,SupplierAdmin_ptr)  for_suppliers (CORBA::Environment &env);
    virtual void destroy (CORBA::Environment &env);
  protected:
    EventChannel (void); // default constructor
    EventChannel (STUB_Object *objref);
    virtual ~EventChannel (void);
  private:
    EventChannel (const EventChannel&);
    void operator= (const EventChannel&);
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL___VAR_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL___VAR_CH_

  class EventChannel_var
  {
  public:
    EventChannel_var (void); // default constructor
    EventChannel_var (EventChannel_ptr);
    EventChannel_var (const EventChannel_var &); // copy constructor
    ~EventChannel_var (void); // destructor
    
    EventChannel_var &operator= (EventChannel_ptr);
    EventChannel_var &operator= (const EventChannel_var &);
    EventChannel_ptr operator-> (void) const;
    
    operator const EventChannel_ptr &() const;
    operator EventChannel_ptr &();
    // in, inout, out, _retn 
    EventChannel_ptr in (void) const;
    EventChannel_ptr &inout (void);
    EventChannel_ptr &out (void);
    EventChannel_ptr _retn (void);
    EventChannel_ptr ptr (void) const;

  private:
    EventChannel_ptr ptr_;
  };


#endif // end #if !defined


#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL___OUT_CH_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL___OUT_CH_

  class EventChannel_out
  {
  public:
    EventChannel_out (EventChannel_ptr &);
    EventChannel_out (EventChannel_var &);
    EventChannel_out (EventChannel_out &);
    EventChannel_out &operator= (EventChannel_out &);
    EventChannel_out &operator= (const EventChannel_var &);
    EventChannel_out &operator= (EventChannel_ptr);
    operator EventChannel_ptr &();
    EventChannel_ptr &ptr (void);
    EventChannel_ptr operator-> (void);
    
  private:
    EventChannel_ptr &ptr_;
  };


#endif // end #if !defined

  static CORBA::TypeCode_ptr _tc_EventChannel;

};


#if defined (__ACE_INLINE__)
#include "RtecEventChannelAdminC.i"
#endif // defined INLINE


#endif // if !defined
