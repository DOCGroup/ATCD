// $Id$

#include "tao/corba.h"
#include "cubit_i.h"

Cubit_i::Cubit_i (void)
{
}

Cubit_i::~Cubit_i (void)
{
}

CORBA::Octet
Cubit_i::cube_octet (CORBA::Octet o,
                     CORBA::Environment &)
{
  return (CORBA::Octet) (o * o * o);
}

CORBA::Short
Cubit_i::cube_short (CORBA::Short s,
                     CORBA::Environment &)
{
  return (CORBA::Short) (s * s * s);
}

CORBA::Long
Cubit_i::cube_long (CORBA::Long l,
                    CORBA::Environment &)
{
  return (CORBA::Long) (l * l * l);
}

Cubit::Many 
Cubit_i::cube_struct (const Cubit::Many &values,
                      CORBA::Environment &)
{
  Cubit::Many out_values;
  out_values.o  = values.o * values.o * values.o;
  out_values.s  = values.s * values.s * values.s;
  out_values.l  = values.l * values.l * values.l;

  return out_values;
}

void Cubit_i::please_exit (CORBA::Environment &)
{
}

// Constructor

Cubit_Factory_i::Cubit_Factory_i (CORBA::String * cubits, u_int num_of_objs)
  : num_of_objs_ (num_of_objs)
{
  my_cubit_ = new CORBA::String [num_of_objs_];
  for (u_int i = 0; i < num_of_objs_; ++i)
      my_cubit_[i] = ACE_OS::strdup (cubits[i]);
}

// Destructor

Cubit_Factory_i::~Cubit_Factory_i (void)
{
}

CORBA::String 
Cubit_Factory_i::create_cubit (CORBA::UShort orb_index, 
			       CORBA::Environment &env)
{
  ACE_DEBUG ((LM_DEBUG, 
	      "(%P|%t) ior returned is [%d]:<%s>\n", 
	      orb_index, 
	      my_cubit_[orb_index]));
  return ACE_OS::strdup (my_cubit_[orb_index]);
}

