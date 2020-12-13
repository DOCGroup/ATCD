#include "orbsvcs/Log_Macros.h"
#include "UIPMC_Factory.h"
#include "UIPMC_Acceptor.h"
#include "UIPMC_Connector.h"
#include "tao/ORB_Constants.h"
#include "tao/params.h" // TAO_ORB_Parameters::check_preferred_interfaces_string ()
#include "ace/OS_NS_strings.h"
#include "ace/UUID.h"
#include "ace/Arg_Shifter.h"

static const char the_prefix[] = "uipmc";

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_UIPMC_Protocol_Factory::TAO_UIPMC_Protocol_Factory ()
  :  TAO_Protocol_Factory (IOP::TAG_UIPMC),
     // major_ (TAO_DEF_GIOP_MAJOR),
     // minor_ (TAO_DEF_GIOP_MINOR),
     listen_on_all_ (false),
     listener_interfaces_ ()
{
}

TAO_UIPMC_Protocol_Factory::~TAO_UIPMC_Protocol_Factory ()
{
}

int
TAO_UIPMC_Protocol_Factory::match_prefix (const ACE_CString &prefix)
{
  // Check for the proper prefix for this protocol.
  return (ACE_OS::strcasecmp (prefix.c_str (), ::the_prefix) == 0);
}

const char *
TAO_UIPMC_Protocol_Factory::prefix () const
{
  return ::the_prefix;
}

char
TAO_UIPMC_Protocol_Factory::options_delimiter () const
{
  return '/';
}

TAO_Acceptor *
TAO_UIPMC_Protocol_Factory::make_acceptor ()
{
  TAO_Acceptor *acceptor = 0;
  ACE_NEW_RETURN (acceptor,
                  TAO_UIPMC_Acceptor (
                    this->listen_on_all_,
                    this->listener_interfaces_.c_str ()),
                  0);

  return acceptor;
}

int
TAO_UIPMC_Protocol_Factory::init (int argc,
                                  ACE_TCHAR* argv [])
{
  ACE_Arg_Shifter arg_shifter (argc, argv);

  while (arg_shifter.is_anything_left ())
    {
      const ACE_TCHAR *current_arg = 0;

      // This option lets you override the default
      if (0 != (current_arg = arg_shifter.get_the_parameter
                (ACE_TEXT("-ORBListenOnAll"))))
        {
          this->listen_on_all_ = !!ACE_OS::atoi (current_arg);
          arg_shifter.consume_arg ();
        }
      else if (0 != (current_arg = arg_shifter.get_the_parameter
                (ACE_TEXT("-ORBListenerInterfaces"))) ||
               0 != (current_arg = arg_shifter.get_the_parameter
                (ACE_TEXT("-ORBListenerInterface"))) ||
               0 != (current_arg = arg_shifter.get_the_parameter
                (ACE_TEXT("-ORBListenInterfaces"))) ||
               0 != (current_arg = arg_shifter.get_the_parameter
                (ACE_TEXT("-ORBListenInterface"))) )
        {
          if (0 == ACE_OS::strcasecmp (current_arg, ACE_TEXT ("CopyPreferredInterfaces")) ||
              0 == ACE_OS::strcasecmp (current_arg, ACE_TEXT ("CopyPreferredInterface"))    )
            {
              // Add a special token (see TAO_UIPMC_Acceptor) which will be
              // subsituted (when we have access to the orb->params).
              if (this->listener_interfaces_.length ())
                this->listener_interfaces_+= ',';
              this->listener_interfaces_+= CopyPreferredInterfaceToken;
            }
          else
            {
              const char *const always_char = ACE_TEXT_ALWAYS_CHAR (current_arg);
              if (TAO_ORB_Parameters::check_preferred_interfaces_string (always_char))
                {
                  // Append any valid string to those already specified
                  // (by other -ORBListenerInterfaces options that have been
                  // seen previously)
                  if (this->listener_interfaces_.length ())
                    this->listener_interfaces_+= ',';
                  this->listener_interfaces_+= always_char;
                }
              else
                ORBSVCS_DEBUG ((LM_DEBUG,
                                ACE_TEXT ("TAO_UIPMC_Protocol_Factory::init - ")
                                ACE_TEXT ("ignoring invalid -ORBListenerInterfaces %C\n"),
                                always_char));
            }

          arg_shifter.consume_arg ();
        }
      else
        {
          ORBSVCS_DEBUG ((LM_DEBUG,
                      ACE_TEXT ("TAO_UIPMC_Protocol_Factory::init - ")
                      ACE_TEXT ("ignoring unknown option <%s>\n"),
                      arg_shifter.get_current ()));
          arg_shifter.ignore_arg ();
        }
    }

  return 0;
}

TAO_Connector *
TAO_UIPMC_Protocol_Factory::make_connector ()
{
  // This is done only once when the library is loaded and
  // only on the client side.
  ACE_Utils::UUID_GENERATOR::instance ()->init ();

  TAO_Connector *connector = 0;
  ACE_NEW_RETURN (connector,
                  TAO_UIPMC_Connector,
                  0);
  return connector;
}

int
TAO_UIPMC_Protocol_Factory::requires_explicit_endpoint () const
{
  // A multicast endpoint can't be picked automatically in the
  // pluggable protocol framework.  It must be determined from
  // the UIPMC profile that has the group reference.  This information
  // is either specified by the user or generated by the
  // multicast group manager or other UIPMC profile generation
  // interface.
  return 1;
}

TAO_END_VERSIONED_NAMESPACE_DECL

ACE_STATIC_SVC_DEFINE (TAO_UIPMC_Protocol_Factory,
                       ACE_TEXT ("UIPMC_Factory"),
                       ACE_SVC_OBJ_T,
                       &ACE_SVC_NAME (TAO_UIPMC_Protocol_Factory),
                       ACE_Service_Type::DELETE_THIS |
                       ACE_Service_Type::DELETE_OBJ,
                       0)

ACE_FACTORY_DEFINE (TAO_PortableGroup, TAO_UIPMC_Protocol_Factory)
