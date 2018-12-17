/* -*- C++ -*- */

//=============================================================================
/**
 *  @file    Timer_Hash.h
 *
 *  @author Darrell Brunsch <brunsch@cs.wustl.edu>
 */
//=============================================================================


#ifndef ACE_TIMER_HASH_H
#define ACE_TIMER_HASH_H
#include /**/ "ace/pre.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Event_Handler.h"
#include "ace/Event_Handler_Handle_Timeout_Upcall.h"
#include "ace/Synch_Traits.h"
#include "ace/Timer_Heap_T.h"
#include "ace/Timer_Hash_T.h"
#include "ace/Timer_List_T.h"
#include "ace/Timer_Queuefwd.h"
#include "ace/Timer_Wheel_T.h"

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

// The following typedef are here for ease of use

typedef ACE_Timer_Hash_Upcall <ACE_Timer_Queue,
                               ACE_Event_Handler,
                               ACE_Event_Handler_Handle_Timeout_Upcall>
        ACE_Hash_Upcall;

typedef ACE_Timer_List_T <ACE_Event_Handler,
                          ACE_Hash_Upcall,
                          ACE_SYNCH_NULL_MUTEX,
                          ACE_Default_Time_Policy>
        ACE_Hash_Timer_List;

typedef ACE_Timer_Heap_T <ACE_Event_Handler,
                          ACE_Hash_Upcall,
                          ACE_SYNCH_NULL_MUTEX,
                          ACE_Default_Time_Policy>
        ACE_Hash_Timer_Heap;

typedef ACE_Timer_Wheel_T <ACE_Event_Handler,
                           ACE_Hash_Upcall,
                           ACE_SYNCH_NULL_MUTEX,
                           ACE_Default_Time_Policy>
        ACE_Hash_Timer_Wheel;

typedef ACE_Timer_Hash_T<ACE_Event_Handler,
                         ACE_Event_Handler_Handle_Timeout_Upcall,
                         ACE_SYNCH_RECURSIVE_MUTEX,
                         ACE_Hash_Timer_List>
        ACE_Timer_Hash_List;

typedef ACE_Timer_Hash_List::ITERATOR_T ACE_Timer_Hash_List_Iterator;

typedef ACE_Timer_Hash_T<ACE_Event_Handler,
                         ACE_Event_Handler_Handle_Timeout_Upcall,
                         ACE_SYNCH_RECURSIVE_MUTEX,
                         ACE_Hash_Timer_Heap,
                         ACE_Default_Time_Policy>
        ACE_Timer_Hash_Heap;

typedef ACE_Timer_Hash_Heap::ITERATOR_T ACE_Timer_Hash_Heap_Iterator;

typedef ACE_Timer_Hash_T<ACE_Event_Handler,
                         ACE_Event_Handler_Handle_Timeout_Upcall,
                         ACE_SYNCH_RECURSIVE_MUTEX,
                         ACE_Hash_Timer_Wheel,
                         ACE_Default_Time_Policy>
        ACE_Timer_Hash_Wheel;

typedef ACE_Timer_Hash_Wheel::ITERATOR_T ACE_Timer_Hash_Wheel_Iterator;

typedef ACE_Timer_Hash_Heap ACE_Timer_Hash;

ACE_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"
#endif /* ACE_TIMER_HASH_H */
