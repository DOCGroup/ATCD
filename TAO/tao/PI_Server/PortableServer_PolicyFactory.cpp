
#include "PortableServer_PolicyFactory.h"

#include "tao/PortableServer/ThreadPolicy.h"
#include "tao/PortableServer/LifespanPolicy.h"
#include "tao/PortableServer/IdAssignmentPolicy.h"
#include "tao/PortableServer/IdUniquenessPolicy.h"
#include "tao/PortableServer/ImplicitActivationPolicy.h"
#include "tao/PortableServer/RequestProcessingPolicy.h"
#include "tao/PortableServer/ServantRetentionPolicy.h"
#include "tao/PortableServer/PortableServer.h"
#include "Policy_Creator_T.h"

ACE_RCSID (PortableServer,
           PortableServer_PolicyFactory,
           "$Id$")

CORBA::Policy_ptr
TAO_PortableServer_PolicyFactory::create_policy (
    CORBA::PolicyType type,
    const CORBA::Any &value
    ACE_ENV_ARG_DECL)
  ACE_THROW_SPEC ((CORBA::SystemException,
                   CORBA::PolicyError))
{
#if (TAO_HAS_MINIMUM_POA == 0)


  if (type == ::PortableServer::THREAD_POLICY_ID)
    {
      TAO::Portable_Server::ThreadPolicy *thread_policy = 0;
      PortableServer::ThreadPolicyValue thr_value;

      TAO::Portable_Server::create_policy (thread_policy, thr_value, value ACE_ENV_ARG_PARAMETER);
      ACE_CHECK_RETURN (CORBA::Policy::_nil ());

      return thread_policy;
    }

#endif /* TAO_HAS_MINIMUM_POA == 0 */
  if (type == PortableServer::LIFESPAN_POLICY_ID)
    {
      TAO::Portable_Server::LifespanPolicy *lifespan_policy = 0;
      PortableServer::LifespanPolicyValue lifespan_value;

      TAO::Portable_Server::create_policy (lifespan_policy, lifespan_value, value ACE_ENV_ARG_PARAMETER);
      ACE_CHECK_RETURN (CORBA::Policy::_nil ());

      return lifespan_policy;
    }

  if (type == PortableServer::ID_UNIQUENESS_POLICY_ID)
    {
      TAO::Portable_Server::IdUniquenessPolicy *id_uniqueness_policy = 0;
      PortableServer::IdUniquenessPolicyValue id_uniqueness_value;

      TAO::Portable_Server::create_policy (id_uniqueness_policy, id_uniqueness_value, value ACE_ENV_ARG_PARAMETER);
      ACE_CHECK_RETURN (CORBA::Policy::_nil ());

      return id_uniqueness_policy;
    }

  if (type == PortableServer::ID_ASSIGNMENT_POLICY_ID)
    {
      TAO::Portable_Server::IdAssignmentPolicy *id_assignment_policy = 0;
      PortableServer::IdAssignmentPolicyValue id_assignment_value;

      TAO::Portable_Server::create_policy (id_assignment_policy, id_assignment_value, value ACE_ENV_ARG_PARAMETER);
      ACE_CHECK_RETURN (CORBA::Policy::_nil ());

      return id_assignment_policy;
    }

#if (TAO_HAS_MINIMUM_POA == 0)

  if (type == PortableServer::IMPLICIT_ACTIVATION_POLICY_ID)
    {
      TAO::Portable_Server::ImplicitActivationPolicy *implicit_activatation_policy = 0;
      PortableServer::ImplicitActivationPolicyValue implicit_activation_value;

      TAO::Portable_Server::create_policy (implicit_activatation_policy, implicit_activation_value, value ACE_ENV_ARG_PARAMETER);
      ACE_CHECK_RETURN (CORBA::Policy::_nil ());

      return implicit_activatation_policy;
    }

  if (type == PortableServer::SERVANT_RETENTION_POLICY_ID)
    {
      TAO::Portable_Server::ServantRetentionPolicy *servant_retention_policy = 0;
      PortableServer::ServantRetentionPolicyValue servant_retention_value;

      TAO::Portable_Server::create_policy (servant_retention_policy, servant_retention_value, value ACE_ENV_ARG_PARAMETER);
      ACE_CHECK_RETURN (CORBA::Policy::_nil ());

      return servant_retention_policy;
    }

  if (type == PortableServer::REQUEST_PROCESSING_POLICY_ID)
    {
      TAO::Portable_Server::RequestProcessingPolicy *request_processing_policy = 0;
      PortableServer::RequestProcessingPolicyValue request_processing_value;

      TAO::Portable_Server::create_policy (request_processing_policy, request_processing_value, value ACE_ENV_ARG_PARAMETER);
      ACE_CHECK_RETURN (CORBA::Policy::_nil ());

      return request_processing_policy;
    }

#endif /* TAO_HAS_MINIMUM_POA == 0 */

  ACE_THROW_RETURN (CORBA::PolicyError (CORBA::BAD_POLICY_TYPE),
                    CORBA::Policy::_nil ());
}
