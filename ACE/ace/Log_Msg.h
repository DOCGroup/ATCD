// -*- C++ -*-

//=============================================================================
/**
 *  @file    Log_Msg.h
 *
 *  @author Douglas C. Schmidt <d.schmidt@vanderbilt.edu>
 */
//=============================================================================

#ifndef ACE_LOG_MSG_H
#define ACE_LOG_MSG_H
#include /**/ "ace/pre.h"

// This stuff must come first to avoid problems with circular
// headers...
// ... but ACE_NDEBUG and ACE_NLOGGING can come from the config.h file, so
// pull that one early.
#include /**/ "ace/config-all.h"
#include /**/ "ace/ACE_export.h"
#include "ace/Global_Macros.h"
#include "ace/Default_Constants.h"
#include "ace/Log_Priority.h"
#include "ace/os_include/os_limits.h"
#include "ace/Synch_Traits.h"
#include "ace/Basic_Types.h"

// The ACE_ASSERT macro used to be defined here, include ace/Assert.h
// for backwards compatibility.
#include "ace/Assert.h"

#if defined (ACE_NLOGGING)
#if !defined (ACE_HEX_DUMP)
# define ACE_HEX_DUMP(X) do {} while (0)
#endif
#if !defined (ACE_RETURN)
# define ACE_RETURN(Y) do { return (Y); } while (0)
#endif
#if !defined (ACE_ERROR_RETURN)
# define ACE_ERROR_RETURN(X, Y) return (Y)
#endif
#if !defined (ACE_ERROR_BREAK)
# define ACE_ERROR_BREAK(X) { break; }
#endif
#if !defined (ACE_ERROR)
# define ACE_ERROR(X) do {} while (0)
#endif
#if !defined (ACE_DEBUG)
# define ACE_DEBUG(X) do {} while (0)
#endif
#if !defined (ACE_ERROR_INIT)
# define ACE_ERROR_INIT(VALUE, FLAGS)
#endif
#else
#if !defined (ACE_HEX_DUMP)
#define ACE_HEX_DUMP(X) \
  do { \
    int const __ace_error = ACE_Log_Msg::last_error_adapter (); \
    ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
    ace___->conditional_set (__FILE__, __LINE__, 0, __ace_error); \
    ace___->log_hexdump X; \
  } while (0)
#endif
#if !defined (ACE_RETURN)
#define ACE_RETURN(Y) \
  do { \
    int const __ace_error = ACE_Log_Msg::last_error_adapter (); \
    ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
    ace___->set (__FILE__, __LINE__, Y, __ace_error, ace___->restart (), \
                 ace___->msg_ostream (), ace___->msg_callback ()); \
    return Y; \
  } while (0)
#endif
#if !defined (ACE_ERROR_RETURN)
# ifdef ACE_LACKS_VA_FUNCTIONS
#  define ACE_ERROR_RETURN(X, Y) \
  do { \
    int const __ace_error = ACE_Log_Msg::last_error_adapter (); \
    ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
    ace___->conditional_set (__FILE__, __LINE__, Y, __ace_error); \
    ace___->log (X);                                              \
    return Y; \
  } while (0)
# else /* ACE_LACKS_VA_FUNCTIONS */
#  define ACE_ERROR_RETURN(X, Y) \
  do { \
    int const __ace_error = ACE_Log_Msg::last_error_adapter (); \
    ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
    ace___->conditional_set (__FILE__, __LINE__, Y, __ace_error); \
    ace___->log X;                                              \
    return Y; \
  } while (0)
# endif /* ACE_LACKS_VA_FUNCTIONS */
#endif
#if !defined (ACE_ERROR)
# ifdef ACE_LACKS_VA_FUNCTIONS
#  define ACE_ERROR(X) \
  do { \
    int const __ace_error = ACE_Log_Msg::last_error_adapter (); \
    ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
    ace___->conditional_set (__FILE__, __LINE__, -1, __ace_error); \
    ace___->log (X);                                               \
  } while (0)
# else /* ACE_LACKS_VA_FUNCTIONS */
#  define ACE_ERROR(X) \
  do { \
    int const __ace_error = ACE_Log_Msg::last_error_adapter (); \
    ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
    ace___->conditional_set (__FILE__, __LINE__, -1, __ace_error); \
    ace___->log X; \
  } while (0)
# endif /* ACE_LACKS_VA_FUNCTIONS */
#endif
#if !defined (ACE_DEBUG)
# ifdef ACE_LACKS_VA_FUNCTIONS
#  define ACE_DEBUG(X) \
  do { \
    int const __ace_error = ACE_Log_Msg::last_error_adapter (); \
    ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
    ace___->conditional_set (__FILE__, __LINE__, 0, __ace_error); \
    ace___->log (X);                                              \
  } while (0)
# else /* ACE_LACKS_VA_FUNCTIONS */
#  define ACE_DEBUG(X) \
  do { \
    int const __ace_error = ACE_Log_Msg::last_error_adapter (); \
    ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
    ace___->conditional_set (__FILE__, __LINE__, 0, __ace_error); \
    ace___->log X; \
  } while (0)
# endif /* ACE_LACKS_VA_FUNCTIONS */
#endif
#if !defined (ACE_ERROR_INIT)
#define ACE_ERROR_INIT(VALUE, FLAGS) \
  do { \
    ACE_Log_Msg *ace___ = ACE_Log_Msg::instance (); \
    ace___->set_flags (FLAGS); \
    ace___->op_status (VALUE); \
  } while (0)
#endif
#if !defined (ACE_ERROR_BREAK)
#define ACE_ERROR_BREAK(X) { ACE_ERROR (X); break; }
#endif
#endif /* ACE_NLOGGING */

#include "ace/OS_Log_Msg_Attributes.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

// These workarounds are necessary for nasty libraries or platforms
// that #define STDERR or THREAD (e.g. LynxOS). We simply #undef
// these macros as there is no way to save the macro definition using
// the pre-processor. See Bugzilla Bug #299 for more info.
#if defined (STDERR)
# undef STDERR
#endif /* STDERR */

#if defined (THREAD)
# undef THREAD
#endif /* THREAD */

#ifndef ACE_DEFAULT_LOG_FLAGS
#  ifdef ACE_ANDROID
#    define ACE_DEFAULT_LOG_FLAGS ACE_Log_Msg::STDERR | ACE_Log_Msg::SYSLOG
#  else
#    define ACE_DEFAULT_LOG_FLAGS ACE_Log_Msg::STDERR
#  endif
#endif

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

class ACE_Log_Msg_Callback;
class ACE_Log_Msg_Backend;

// ****************************************************************

#define ACE_LOG_MSG ACE_Log_Msg::instance ()

// Forward declaration
class ACE_Thread_Descriptor;
class ACE_Log_Record;
class ACE_Log_Category_TSS;
template<typename M, typename T> class ACE_Atomic_Op;
class ACE_Log_Formatter;

/**
 * @class ACE_Log_Msg
 *
 * @brief Provides a variable length argument message logging
 * abstraction.
 *
 * This class is very flexible since it allows formatted error
 * messages to be printed in a thread-safe manner to various
 * locations, such as stderr, cerr, a distributed logger, etc.  The
 * current message is also kept in a thread-specific storage location
 * (threads spawned using ACE_Thread_Manager automatically get an
 * ACE_Log_Msg object that inherits the spawning thread's settings),
 * which can be used to communicate errors between framework methods
 * and callers.  A message is logged by the log() method, only if the
 * message priority is currently enabled.  Moreover, only the current
 * log message is stored here -- it will be overwritten by the
 * subsequent call to log().
 *
 * The ACE_Log_Msg class uses two priority masks to control its
 * logging behavior.  The @c priority_mask_ object attribute is
 * thread- specific and specifies the priority levels logged by the
 * thread.  The @c process_priority_mask_ class attribute is not
 * thread-specific and specifies the priority levels that will be
 * logged by all threads in the process.  By default, all levels are
 * disabled for @c priority_mask_ and all levels are enabled for @c
 * process_priority_mask_ (i.e. the process-wide mask controls the
 * settings, and each instance can expand on it if desired).  Both
 * priority masks can be modified using the priority_mask() method of
 * this class.
 */
class ACE_Export ACE_Log_Msg
{
public:
  // Logger Flags.
  enum
  {
    /// Write messages to stderr.
    STDERR = 1,
    /// Write messages to the local client logger daemon.
    LOGGER = 2,
    /// Write messages to the ostream * stored in thread-specific
    /// storage.
    OSTREAM = 4,
    /// Write messages to the callback object.
    MSG_CALLBACK = 8,
    /// Display messages in a verbose manner.
    VERBOSE = 16,
    /// Display messages in a less verbose manner (i.e., only print
    /// information that can change between calls).
    VERBOSE_LITE = 32,
    /// Do not print messages at all (just leave in thread-specific
    /// storage for later inspection).
    SILENT = 64,
    /// Write messages to the system's event log.
    SYSLOG = 128,
    /// Write messages to the user provided backend
    CUSTOM = 256
  };

  /// Returns a pointer to the Singleton.
  static ACE_Log_Msg *instance ();

  /// Returns last error.
  static int last_error_adapter ();

  /// Returns non-null if an ACE_Log_Msg exists for the calling thread.
  static int exists ();

  /// Returns the current program name used for logging.
  static const ACE_TCHAR * program_name ();

  /// Clears the flag from the default priority mask used to
  /// initialize ACE_Log_Msg instances.
  static void disable_debug_messages (ACE_Log_Priority priority = LM_DEBUG);

  /// Sets the flag in the default priority mask used to initialize
  /// ACE_Log_Msg instances.
  static void enable_debug_messages (ACE_Log_Priority priority = LM_DEBUG);

  /// Initialize logger.
  ACE_Log_Msg ();

  /// cleanup logger.
  ~ACE_Log_Msg ();

  /// Initialize the ACE logging facility.
  /**
   * Initialize the ACE logging facility. Supplies the program name
   * that is available to each logging message call. Default arguments
   * set up logging to STDERR only.
   *
   * @param prog_name      The name of the calling program.
   * @param options_flags  A bitwise-or of options flags used to set the
   *                       initial behavior and logging sink(s). (see the
   *                       enum above for the valid values).
   * @param logger_key     The name of ACE_FIFO rendezvous point where the
   *                       local client logger daemon is listening for logging
   *                       messages if the LOGGER bit is set in the @a flags
   *                       argument. If the SYSLOG bit is set in @a flags,
   *                       @a logger_key is the source/program name specified
   *                       in the syslog facility (UNIX/Linux) or the Windows
   *                       event log (Windows). In the SYSLOG case, if
   *                       @a logger_key is 0, @a prog_name is used.
   */
  int open (const ACE_TCHAR *prog_name,
            u_long options_flags = ACE_DEFAULT_LOG_FLAGS,
            const ACE_TCHAR *logger_key = 0);

  // = Set/get the options flags.

  /**
   * Enable the bits in the logger's options flags.
   */
  void set_flags (u_long f);

  /**
   * Disable the bits in the logger's options flags.
   */
  void clr_flags (u_long f);

  /**
   * Return the bits in the logger's options flags.
   */
  u_long flags ();

  /** @name Allow apps to acquire and release internal synchronization
   *        lock
   *
   * This lock is used internally by the ACE_Log_Msg
   * implementation. By exporting the lock, applications can hold the
   * lock atomically over a number of calls to ACE_Log_Msg.
   */
  //@{

  /// Acquire the internal lock.
  int acquire ();

  /// Release the internal lock.
  int release ();
  //@}

  /// Call after doing a @c fork() to resynchronize the process id and
  /// @c program_name_ variables.
  void sync (const ACE_TCHAR *program_name);

  // = Set/get methods.  Note that these are non-static and thus will
  // be thread-specific.

  /// Set the result of the operation status (by convention, -1 means
  /// error).
  void op_status (int status);

  /// Get the result of the operation status (by convention, -1 means
  /// error).
  int op_status () const;

  /// Set the value of the errnum (by convention this corresponds to
  /// errno).
  void errnum (int);

  /// Get the value of the errnum (by convention this corresponds to
  /// errno).
  int errnum () const;

  /// Set the line number where an error occurred.
  void linenum (int);

  /// Get the line number where an error occurred.
  int linenum () const;

  /// Set the file name where an error occurred.
  void file (const char *);

  /// Get the file name where an error occurred.
  const char *file ();

  /// Set the message that describes what type of error occurred.
  void msg (const ACE_TCHAR *);

  /// Get the message that describes what type of error occurred.
  const ACE_TCHAR *msg ();

  /// Set the field that indicates whether interrupted calls should be
  /// restarted.
  void restart (bool r);

  /// Get the field that indicates whether interrupted calls should be
  /// restarted.
  bool restart () const;

  // = Notice that the following two function is equivalent to
  //   "void msg_ostream (HANDLE)" and "HANDLE msg_ostream (void)"
  //   on Windows CE.  There is no <iostream.h> support on CE.

  /// Update the ostream without overwriting the delete_ostream_ flag.
  void msg_ostream (ACE_OSTREAM_TYPE *);

  /**
   * delete_stream == true, forces Log_Msg.h to delete the stream in
   * its own ~dtor (assumes control of the stream)
   * use only with proper ostream (eg: fstream), not (cout, cerr)
   */
  void msg_ostream (ACE_OSTREAM_TYPE *, bool delete_ostream);

  /// Get the ostream that is used to print error messages.
  ACE_OSTREAM_TYPE *msg_ostream () const;

  /**
   * Set a new callback object and return the existing callback to
   * allow "chaining".  Note that ACE_Log_Msg_Callback objects are not
   * inherited when spawning a new thread, so you'll need to reset
   * them in each thread.
   */
  ACE_Log_Msg_Callback *msg_callback (ACE_Log_Msg_Callback *c);
  ACE_Log_Msg_Callback *msg_callback () const;

  /**
   * Set a new backend object and return the existing backend to
   * allow "chaining". Note that as opposed to ACE_Log_Msg_Callback,
   * ACE_Log_Msg_Backend is a per-process entity.
   *
   * @note Be aware that because of the current architecture there is
   * no guarantee that open (), reset () and close () will be called
   * on a backend object.
   */
  static ACE_Log_Msg_Backend *msg_backend (ACE_Log_Msg_Backend *b);
  static ACE_Log_Msg_Backend *msg_backend ();

  /// Nesting depth increment.
  int inc ();

  /// Nesting depth decrement.
  int dec ();

  /// Get trace depth.
  int trace_depth () const;

  /// Set trace depth.
  void trace_depth (int);

  /// Get trace active status.
  bool trace_active () const;

  /// Set  trace active status.
  void trace_active (bool value);

  /// Get the TSS thread descriptor.
  ACE_Thread_Descriptor *thr_desc () const;

  /**
   * Set the TSS thread descriptor.  This method will call
   * td->acquire_release to block execution until this call
   * return.
   */
  void thr_desc (ACE_Thread_Descriptor *td);

  /// Stop tracing status on a per-thread basis...
  void stop_tracing ();

  /// Start tracing status on a per-thread basis...
  void start_tracing ();

  /// Query tracing status on a per-thread basis...
  bool tracing_enabled () const;

  typedef enum
  {
    PROCESS = 0,
    THREAD = 1
  } MASK_TYPE;

  // = Get/set the priority mask.
  /// Get the current ACE_Log_Priority mask.
  u_long priority_mask (MASK_TYPE = THREAD);

  /// Set the ACE_Log_Priority mask, returns original mask.
  u_long priority_mask (u_long, MASK_TYPE = THREAD);

  /// Return true if the requested priority is enabled.
  int log_priority_enabled (ACE_Log_Priority log_priority);

#ifndef ACE_LACKS_VA_FUNCTIONS
  /// Return true if the requested priority is enabled.
  int log_priority_enabled (ACE_Log_Priority log_priority,
                            const char *,
                            ...);
#endif

#if defined (ACE_USES_WCHAR) && !defined ACE_LACKS_VA_FUNCTIONS
  // We are not using ACE_TCHAR for this since ACE_HEX_DUMP
  // doesn't take in a ACE_TCHAR.  log_hexdump takes in a char
  // string, so this must be able to take in a char string even
  // when using ACE_USES_WCHAR.
  /// Return true if the requested priority is enabled.
  int log_priority_enabled (ACE_Log_Priority log_priority,
                            const wchar_t *,
                            ...);
#endif /* ACE_USES_WCHAR */

  /// Optimize reading of the pid (avoids a system call if the value is
  /// cached...).
  pid_t getpid () const;

  /// Get the name of the local host.
  const ACE_TCHAR *local_host () const;

  /// Set the name of the local host.
  void local_host (const ACE_TCHAR *);

  /**
   * Set the line number, file name, operational status, error number,
   * restart flag, ostream, and the callback object.  This combines
   * all the other set methods into a single method.
   */
  void set (const char *file,
            int line,
            int op_status = -1,
            int errnum = 0,
            bool restart = true,
            ACE_OSTREAM_TYPE *os = 0,
            ACE_Log_Msg_Callback *c = 0);

  /// These values are only actually set if the requested priority is
  /// enabled.
  void conditional_set (const char *file,
                        int line,
                        int op_status,
                        int errnum);

#ifndef ACE_LACKS_VA_FUNCTIONS
  /**
   * Format a message to the thread-safe ACE logging mechanism.  Valid
   * options (prefixed by '%', as in printf format strings) include:
   *  - 'A': print an ACE_timer_t value (which could be either double
   *         or ACE_UINT32.)
   *  - 'a': abort the program at this point abruptly.
   *  - 'b': print a ssize_t value
   *  - 'B': print a size_t value
   *  - 'c': print a character
   *  - 'C': print a char* character string (also see s and W)
   *  - 'i', 'd': print a decimal number
   *  - 'I': indent according to nesting depth (obtained from
   *         ACE_Trace::get_nesting_indent()).
   *  - 'e', 'E', 'f', 'F', 'g', 'G': print a double
   *  - 'l': print line number where an error occurred.
   *  - 'M': print the name of the priority of the message.
   *  - 'm': return the message corresponding to errno value, e.g., as
   *         done by strerror()
   *  - 'N': print file name where the error occurred.
   *  - 'n': print the name of the program (or "<unknown>" if not set)
   *  - 'o': print as an octal number
   *  - 'P': print out the current process id
   *  - 'p': print out the appropriate errno message from sys_errlist,
   *         e.g., as done by perror()
   *  - 'Q': print out the uint64 number
   *  - 'q': print out the int64 number
   *  - '@': print a void* pointer (in hexadecimal)
   *  - 'r': call the function pointed to by the corresponding argument
   *  - 'R': print return status
   *  - 'S': print out the appropriate signal message corresponding
   *         to var-argument, e.g., as done by strsignal()
   *  - 's': prints a ACE_TCHAR* character string (also see C and W)
   *  - 'T': print timestamp in hour:minute:sec:usec format (plain option,
   *         i.e. without any flags, prints system supplied timestamp;
   *         with '#' flag added expects ACE_Time_Value* in argument list)
   *  - 'D': print timestamp as Weekday Month day year hour:minute:sec.usec
   *         (plain option, i.e. without any flags, prints system supplied
   *         timestamp; with '#' flag added expects ACE_Time_Value* in
   *         argument list)
   *  - 't': print thread id (1 if single-threaded)
   *  - 'u': print as unsigned int
   *  - 'w': prints a wide character
   *  - 'W': prints a wchar_t* character string (also see C and s)
   *  - 'x': print as a hex number
   *  - 'X': print as a hex number
   *  - 'z': print an ACE_OS::WChar character
   *  - 'Z': print an ACE_OS::WChar character string
   *  - ':': print a time_t value as an integral number
   *  - '%': print out a single percent sign, '%'
   *  - '?': print out stack trace (see Stack_Trace.h header comments)
   */
  ssize_t log (ACE_Log_Priority priority, const ACE_TCHAR *format, ...);

#if defined (ACE_HAS_WCHAR)
  ssize_t log (ACE_Log_Priority priority, const ACE_ANTI_TCHAR *format, ...);
#endif /* ACE_HAS_WCHAR */

#else /* ACE_LACKS_VA_FUNCTIONS */
  friend class ACE_Log_Formatter;

  ssize_t log (const ACE_Log_Formatter &formatter);

#endif /* ACE_LACKS_VA_FUNCTIONS */

  /**
   * An alternative logging mechanism that makes it possible to
   * integrate variable argument lists from other logging mechanisms
   * into the ACE mechanism.
   */
  ssize_t log (const ACE_TCHAR *format,
               ACE_Log_Priority priority,
               va_list argp,
               ACE_Log_Category_TSS* category=0);

  /// Log a custom built log record to the currently enabled logging
  /// sinks.
  ssize_t log (ACE_Log_Record &log_record,
               int suppress_stderr = 0);

  /**
   * Method to log hex dump.  This is useful for debugging.  Calls
   * log() to do the actual print, but formats first to make the chars
   * printable.
   */
  int log_hexdump (ACE_Log_Priority log_priority,
                   const char *buffer,
                   size_t size,
                   const ACE_TCHAR *text = 0,
                   ACE_Log_Category_TSS* category=0);

  /**
   * Init hook, create a Log_Msg_Attribute object, initialize its
   * attributes from the TSS Log_Msg and save the object in the
   * @a attributes argument
   */
  static void init_hook (ACE_OS_Log_Msg_Attributes &attributes
# if defined (ACE_HAS_WIN32_STRUCTURED_EXCEPTIONS)
                         , ACE_SEH_EXCEPT_HANDLER selector = 0
                         , ACE_SEH_EXCEPT_HANDLER handler = 0
# endif /* ACE_HAS_WIN32_STRUCTURED_EXCEPTIONS */
                         );

  /**
   * Inherit hook, the @a attributes field is a ACE_OS_Log_Msg_Attributes
   * object, invoke the inherit_log_msg() method on it, then destroy
   * it and set the @a attribute argument to 0.
   */
  static void inherit_hook (ACE_OS_Thread_Descriptor *thr_desc,
                            ACE_OS_Log_Msg_Attributes &attributes);

  /// Dump the state of an object.
  void dump () const;

  /// Declare the dynamic allocation hooks.
  ACE_ALLOC_HOOK_DECLARE;

private:
  void cleanup_ostream ();

  /// Status of operation (-1 means failure, >= 0 means success).
  int status_;

  /// Type of error that occurred (see <sys/errno.h>).
  int errnum_;

  /// Line number where the error occurred.
  int linenum_;

  /// File where the error occurred.
  char file_[MAXPATHLEN + 1];

  /// The log message, which resides in thread-specific storage.  Note
  /// that only the current log message is stored here -- it will be
  /// overwritten by the subsequent call to log().
  ACE_TCHAR* msg_; // Add one for NUL-terminator.

  /// Indicates whether we should restart system calls that are
  /// interrupted.
  bool restart_;

  /// The ostream where logging messages can be written.
  ACE_OSTREAM_TYPE *ostream_;

  /// This pointer is 0 if we are not reference counting (the user has not
  /// passed "true" for the delete_ostream argument to msg_ostream).
  /// If we are reference counting, this points to a shared count that will
  /// be deleted when it reaches zero.  Since we want optional but shared
  /// ownership neither std::auto_ptr nor ACE_Strong_Bound_Ptr have the right
  /// semantics.  *Bound_Ptr also doesn't take advantage of Atomic_Op.
  typedef ACE_Atomic_Op<ACE_SYNCH_MUTEX, unsigned long> Atomic_ULong;
  Atomic_ULong *ostream_refcount_;

  /// The callback object.
  ACE_Log_Msg_Callback *msg_callback_;

  /// Depth of the nesting for printing traces.
  int trace_depth_;

  /// Are we already within an ACE_Trace constructor call?
  bool trace_active_;

  /// Are we allowing tracing in this thread?
  bool tracing_enabled_;

  /**
   * If we're running in the context of an ACE_Thread_Manager this
   * will point to the thread descriptor adapter which holds the
   * thread descriptor of the thread.  This can be used to rapidly
   * access all thread data kept in ACE_Thread_Descriptor.
   */
  ACE_Thread_Descriptor *thr_desc_;

  /**
   * Keeps track of all the per-thread ACE_Log_Priority values that
   * are currently enabled.  Default is for all logging priorities to
   * be disabled.
   */
  u_long priority_mask_;

  /// Always timestamp?
  int timestamp_;

  // = The following fields are *not* kept in thread-specific storage.

  // We only want one instance for the entire process!

  /**
   * Keeps track of all the per-process ACE_Log_Priority values that
   * are currently enabled.  Default is for all logging priorities to
   * be enabled.
   */
  static u_long process_priority_mask_;

  /// Records the program name.
  static const ACE_TCHAR *program_name_;

  /// Name of the local host (used when printing messages).
  static const ACE_TCHAR *local_host_;

  /// Options flags used to hold the logger flag options, e.g.,
  /// STDERR, LOGGER, OSTREAM, MSG_CALLBACK, etc.
  static u_long flags_;

  /// Offset of msg_[].
  static ptrdiff_t msg_off_;

  /**
   * Number of existing ACE_Log_Msg instances; when 0, delete program/host
   * names
   */
  static int instance_count_;

  /**
   * Priority mask to use for each new instance
   */
  static u_long default_priority_mask_;

  /// Anonymous struct since there will only be one instance.  This
  /// struct keeps information stored away in case we actually end up
  /// calling log() if the log priority is correct.
  struct
  {
    bool is_set_;
    const char *file_;
    int line_;
    int op_status_;
    int errnum_;
  } conditional_values_;

#if defined (ACE_MT_SAFE) && (ACE_MT_SAFE != 0)
  static bool key_created_;
#endif /* ACE_MT_SAFE */

  /// For cleanup, at program termination.
  static void close ();

  /// Decouple the OS layer from the ACE_Log_Msg layer.
  static void sync_hook (const ACE_TCHAR *prg_name);

  /// Return the TSS singleton thread descriptor
  static ACE_OS_Thread_Descriptor *thr_desc_hook ();

  //friend void ACE_OS::cleanup_tss (const u_int);

  // = Disallow these operations.
  ACE_Log_Msg &operator= (const ACE_Log_Msg &);
  ACE_Log_Msg (const ACE_Log_Msg &);
};

#ifdef ACE_LACKS_VA_FUNCTIONS
class ACE_Time_Value;
/// Alternative to varargs for formatting log messages.
/// When this implementation is enabled, the logging macros (ACE_DEBUG, etc.)
/// are modified to change from logger->log(LM_FOO, "fmt_str", arg1, arg2) to
/// logger->log((LM_FOO, "fmt_str", arg1, arg2)).  Due to the extra set of
/// parens, the various overloaded comma operators below take the place of the
/// varargs function.  The first operator called is the non-member
/// operator,(ACE_Log_Priority, const char*) which returns an ACE_Log_Formatter
/// object.  The subsequent comma operators (for the actual variable args) are
/// members of the ACE_Log_Formatter class.
class ACE_Export ACE_Log_Formatter
{
public:
  ACE_Log_Formatter (ACE_Log_Priority prio, const char *fmt);

  // Notes:
  // - ACE_OS::snprintf() is assumed to work.  The fallback to ACE_OS::sprintf()
  ///  is not implemented.
  // - Other than special cases (listed below), the names of the parameters
  //   indicate which formatters they are used for (pct_c => %c).
  // - size_t (%B), ssize_t (%b), and time_t (%:) will use one of the
  //   other overloads (int, INT64, UINT64) depending on the platform.
  // - %*s (etc) uses the int or uint overloads for the size argument.
  // - No support for ACE_USES_WCHAR has been attempted.
  // - Not all platform-specific features from the varargs implementation have
  //   been ported over to this implementation.

  ACE_Log_Formatter &operator, (int pct_adiRS);

  ACE_Log_Formatter &operator, (unsigned int pct_ouxX);

  ACE_Log_Formatter &operator, (double pct_AeEfFgG);

  ACE_Log_Formatter &operator, (long double pct_AeEfFgG);

  ACE_Log_Formatter &operator, (char pct_c);

  ACE_Log_Formatter &operator, (const char *pct_Cps);

  ACE_Log_Formatter &operator, (ACE_INT64 pct_q);

  ACE_Log_Formatter &operator, (ACE_UINT64 pct_Q);

  ACE_Log_Formatter &operator, (void (*pct_r) ());

  ACE_Log_Formatter &operator, (ACE_WCHAR_T pct_wz);

  ACE_Log_Formatter &operator, (const ACE_WCHAR_T *pct_WZ);

  ACE_Log_Formatter &operator, (const void *pct_at);

  ACE_Log_Formatter &operator, (const ACE_Time_Value *pct_DT);

#if ACE_SIZEOF_LONG == 4
  ACE_Log_Formatter &operator, (long pct_Lmodifier);

  ACE_Log_Formatter &operator, (unsigned long pct_Lmodifier);
#endif

  bool abort () const { return this->abort_; }

  int saved_errno () const { return this->saved_errno_; }

  bool to_record (ACE_Log_Record &record);

  ACE_Log_Priority priority () const { return this->priority_; }

private:
  /// Parse the format_ string up to the point where an argument is needed.
  /// Set up fmt_out_ as a format string that goes out to snprintf.
  void prepare_format ();

  /// Helper function for prepare_format.  Processes as much of one conversion
  /// specification as possible.  Returns true if prepare_format can continue
  /// parsing, false if prepare_format needs to return to get more input.
  bool process_conversion ();

  /// Copy up to 'limit' characters of 'str' to the resulting buffer (bp_).
  /// Returns the number of characters copied.
  int copy_trunc (const char *str, int limit);

  /// Insert one argument into the formatted buffer.
  /// arg is not a pointer (pointers use the overload below).
  /// If allow_star is true, the argument can be the length for a conversion
  /// that uses the '*' for width or precision.
  template <typename ArgT>
  void insert_arg (ArgT arg, bool allow_star = false);

  /// Insert one pointer-typed argument into the formatted buffer.
  /// These could be strings (so ArgT is const char or const wchar_t) or void*.
  template <typename ArgT>
  void insert_arg (ArgT *arg);

  /// Core functionality common to both insert_arg overloads.
  template <typename ArgT>
  void insert_arg_i (ArgT arg);

  /// Insert the %S (signal name) conversion specification into the buffer.
  void insert_pct_S (int sig);

  /// Save errno at the start of the log formatting so it can be restored later.
  const int saved_errno_;

  /// Priority of this message.
  const ACE_Log_Priority priority_;

  /// Remaining format string (from user) that's left to process.
  const char *format_;

  /// The ACE_Log_Msg object that this formatter works with.
  ACE_Log_Msg *const logger_;

  /// Saved state of the %a (abort) processing.
  enum { ABRT_NONE, ABRT_AFTER_FORMAT, ABRT_NEED_ARG } abort_;

  /// The current log priority is enabled on the logger object.
  bool enabled_;

  /// Which specifier is currently being processed (' ' for none).
  char in_prog_;

  /// The value last read in from the "varargs" for '*' in width or precision.
  int last_star_;

  /// Buffer pointer into ACE_Log_Msg's resulting buffer.
  char *bp_;

  /// Buffer space available for bp_ to advance.
  size_t bspace_;

  /// Local buffer for outgoing (given to snprintf) format strings.
  char fmt_out_[128];

  /// Format pointer: current position in fmt_out_.
  char *fp_;

  /// Saved value of ACE_Log_Msg::msg_off_ in case of reentrant logging (%r).
  ptrdiff_t offset_;
};

ACE_Export
ACE_Log_Formatter operator, (ACE_Log_Priority prio, const char *fmt);

#endif /* ACE_LACKS_VA_FUNCTIONS */

ACE_END_VERSIONED_NAMESPACE_DECL

#if defined (ACE_MT_SAFE) && (ACE_MT_SAFE != 0)
# if defined (ACE_HAS_THREAD_SPECIFIC_STORAGE) || \
     defined (ACE_HAS_TSS_EMULATION)
/* static */
#  if defined (ACE_HAS_THR_C_DEST)
#   define LOCAL_EXTERN_PREFIX extern "C"
#  else
#   define LOCAL_EXTERN_PREFIX
#  endif /* ACE_HAS_THR_C_DEST */

#if (defined (ACE_HAS_VERSIONED_NAMESPACE) && ACE_HAS_VERSIONED_NAMESPACE == 1)
# define ACE_TSS_CLEANUP_NAME ACE_PREPROC_CONCATENATE(ACE_,ACE_PREPROC_CONCATENATE(ACE_VERSIONED_NAMESPACE_NAME, _TSS_cleanup))
#else
# define ACE_TSS_CLEANUP_NAME ACE_TSS_cleanup
#endif  /* ACE_HAS_VERSIONED_NAMESPACE == 1 */

LOCAL_EXTERN_PREFIX
void
ACE_TSS_CLEANUP_NAME (void *ptr);
# endif /* ACE_HAS_THREAD_SPECIFIC_STORAGE || ACE_HAS_TSS_EMULATION */
#endif /* ACE_MT_SAFE */

#if defined (__ACE_INLINE__)
#include "ace/Log_Msg.inl"
#endif /* __ACE_INLINE__ */

#include /**/ "ace/post.h"
#endif /* ACE_LOG_MSG_H */
