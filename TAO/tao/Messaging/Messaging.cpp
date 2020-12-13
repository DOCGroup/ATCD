// -*- C++ -*-
#include "Messaging.h"
#include "Messaging_Loader.h"

#include "tao/debug.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

int
TAO_Messaging_Initializer::init ()
{
  return ACE_Service_Config::process_directive (ace_svc_desc_TAO_Messaging_Loader);
}

TAO_END_VERSIONED_NAMESPACE_DECL
