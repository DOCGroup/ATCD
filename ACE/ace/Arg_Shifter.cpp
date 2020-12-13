#ifndef ACE_ARG_SHIFTER_T_CPP
#define ACE_ARG_SHIFTER_T_CPP

#include "Arg_Shifter.h"
#include "OS_NS_string.h"
#include "OS_NS_strings.h"
#include "OS_Errno.h"
#include "OS_Memory.h"
#if defined (ACE_HAS_ALLOC_HOOKS)
# include "Malloc_Base.h"
#endif /* ACE_HAS_ALLOC_HOOKS */

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

template <typename CHAR_TYPE>
ACE_Arg_Shifter_T<CHAR_TYPE>::ACE_Arg_Shifter_T (int& argc,
                                                 const CHAR_TYPE** argv,
                                                 const CHAR_TYPE** temp)
  : argc_ (argc),
    total_size_ (argc),
    temp_ (temp),
    argv_ (argv),
    current_index_ (0),
    back_ (argc - 1),
    front_ (0)
{
  this->init ();
}

template <typename CHAR_TYPE>
ACE_Arg_Shifter_T<CHAR_TYPE>::ACE_Arg_Shifter_T (int& argc,
                                                 CHAR_TYPE** argv,
                                                 CHAR_TYPE** temp)
  : argc_ (argc),
    total_size_ (argc),
    temp_ ((const CHAR_TYPE **) temp),
    argv_ ((const CHAR_TYPE **) argv),
    current_index_ (0),
    back_ (argc - 1),
    front_ (0)
{
  this->init ();
}

template <typename CHAR_TYPE>
void
ACE_Arg_Shifter_T<CHAR_TYPE>::init (void)
{
  // If not provided with one, allocate a temporary array.
  if (this->temp_ == 0)
#if defined (ACE_HAS_ALLOC_HOOKS)
    this->temp_ = reinterpret_cast<const CHAR_TYPE **>
      (ACE_Allocator::instance ()->malloc (sizeof (CHAR_TYPE*) * this->total_size_));
#else
    ACE_NEW (this->temp_,
             const CHAR_TYPE *[this->total_size_]);
#endif /* ACE_HAS_ALLOC_HOOKS */
  if (this->temp_ != 0)
    {
      // Fill the temporary array.
      this->argc_ = 0;
      for (int i = 0; i < this->total_size_; i++)
        {
          this->temp_[i] = this->argv_[i];
          this->argv_[i] = 0;
        }
    }
  else
    {
      // Allocation failed, prohibit iteration.
      this->current_index_ = this->argc_;
      this->front_ = this->argc_;
    }
}

template <typename CHAR_TYPE>
ACE_Arg_Shifter_T<CHAR_TYPE>::~ACE_Arg_Shifter_T (void)
{
  // Delete the temporary vector.
#if defined (ACE_HAS_ALLOC_HOOKS)
  if (this->temp_)
    ACE_Allocator::instance ()->free (this->temp_);
#else
  delete [] temp_;
#endif /* ACE_HAS_ALLOC_HOOKS */
}

template <typename CHAR_TYPE>
const CHAR_TYPE *
ACE_Arg_Shifter_T<CHAR_TYPE>::get_current (void) const
{
  const CHAR_TYPE * retval = 0;

  if (this->is_anything_left ())
    retval =  this->temp_[current_index_];

  return retval;
}

template <typename CHAR_TYPE>
const CHAR_TYPE *
ACE_Arg_Shifter_T<CHAR_TYPE>::get_the_parameter (const CHAR_TYPE *flag)
{
  // the return 0's abound because this method
  // would otherwise be a deep if { } else { }

  // check to see if any arguments still exist
  if (!this->is_anything_left())
    return 0;

  // check to see if the flag is the argument
  int const offset = this->cur_arg_strncasecmp (flag);
  if (offset == -1)
    return 0;

  if (offset == 0)
    {
      this->consume_arg ();

      if (!this->is_parameter_next())
        {
          return 0;
        }
    }
  // the parameter is in the middle somewhere...
  return this->temp_[current_index_] + offset;
}

template <typename CHAR_TYPE>
int
ACE_Arg_Shifter_T<CHAR_TYPE>::cur_arg_strncasecmp (const CHAR_TYPE *flag)
{
  if (!this->is_anything_left ())
    return -1;

  const size_t flag_length = ACE_OS::strlen (flag);
  const CHAR_TYPE *arg = this->temp_[this->current_index_];

  if (ACE_OS::strncasecmp (arg, flag, flag_length) != 0)
    return -1;

  const size_t arg_length = ACE_OS::strlen (arg);
  size_t remaining = flag_length;
  while (remaining < arg_length && arg[remaining] == CHAR_TYPE (' '))
    ++remaining;
  return (arg_length == flag_length) ? 0 : static_cast<int> (remaining);
}

template <typename CHAR_TYPE>
int
ACE_Arg_Shifter_T<CHAR_TYPE>::consume_arg (int number)
{
  int retval = 0;

  // Stick knowns at the end of the vector (consumed).
  if (this->is_anything_left() >= number)
    {
      for (int i = 0, j = this->back_ - (number - 1);
           i < number;
           ++i, ++j, ++this->current_index_)
        this->argv_[j] = this->temp_[this->current_index_];

      this->back_ -= number;
      retval = 1;
    }

  return retval;
}

template <typename CHAR_TYPE>
int
ACE_Arg_Shifter_T<CHAR_TYPE>::ignore_arg (int number)
{
  int retval = 0;

  // Keep unknowns at the head of the vector.
  if (this->is_anything_left () >= number)
    {
      for (int i = 0;
           i < number;
           i++, this->current_index_++, this->front_++)
        this->argv_[this->front_] = this->temp_[this->current_index_];

      retval = 1;
      this->argc_ += number;
    }

  return retval;
}

template <typename CHAR_TYPE>
int
ACE_Arg_Shifter_T<CHAR_TYPE>::is_anything_left (void) const
{
  return this->total_size_ - this->current_index_;
}

template <typename CHAR_TYPE>
int
ACE_Arg_Shifter_T<CHAR_TYPE>::is_option_next (void) const
{
  return this->is_anything_left () &&
    this->temp_[this->current_index_][0] == '-';
}

template <typename CHAR_TYPE>
int
ACE_Arg_Shifter_T<CHAR_TYPE>::is_parameter_next (void) const
{
  return this->is_anything_left ()
    && this->temp_[this->current_index_][0] != '-';
}

template <typename CHAR_TYPE>
int
ACE_Arg_Shifter_T<CHAR_TYPE>::num_ignored_args (void) const
{
  return this->front_;
}

ACE_END_VERSIONED_NAMESPACE_DECL

#endif /* ACE_ATOMIC_OP_T_CPP */
