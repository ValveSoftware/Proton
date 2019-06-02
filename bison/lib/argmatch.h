/* argmatch.h -- definitions and prototypes for argmatch.c

   Copyright (C) 1990, 1998-1999, 2001-2002, 2004-2005, 2009-2015 Free Software
   Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Written by David MacKenzie <djm@ai.mit.edu>
   Modified by Akim Demaille <demaille@inf.enst.fr> */

#ifndef ARGMATCH_H_
# define ARGMATCH_H_ 1

# include <stddef.h>

# include "verify.h"

#ifdef  __cplusplus
extern "C" {
#endif

# define ARRAY_CARDINALITY(Array) (sizeof (Array) / sizeof *(Array))

/* Assert there are as many real arguments as there are values
   (argument list ends with a NULL guard).  */

# define ARGMATCH_VERIFY(Arglist, Vallist) \
    verify (ARRAY_CARDINALITY (Arglist) == ARRAY_CARDINALITY (Vallist) + 1)

/* Return the index of the element of ARGLIST (NULL terminated) that
   matches with ARG.  If VALLIST is not NULL, then use it to resolve
   false ambiguities (i.e., different matches of ARG but corresponding
   to the same values in VALLIST).  */

ptrdiff_t argmatch (char const *arg, char const *const *arglist,
                    char const *vallist, size_t valsize) _GL_ATTRIBUTE_PURE;

# define ARGMATCH(Arg, Arglist, Vallist) \
  argmatch (Arg, Arglist, (char const *) (Vallist), sizeof *(Vallist))

/* xargmatch calls this function when it fails.  This function should not
   return.  By default, this is a function that calls ARGMATCH_DIE which
   in turn defaults to 'exit (exit_failure)'.  */
typedef void (*argmatch_exit_fn) (void);
extern argmatch_exit_fn argmatch_die;

/* Report on stderr why argmatch failed.  Report correct values. */

void argmatch_invalid (char const *context, char const *value,
                       ptrdiff_t problem);

/* Left for compatibility with the old name invalid_arg */

# define invalid_arg(Context, Value, Problem) \
  argmatch_invalid (Context, Value, Problem)



/* Report on stderr the list of possible arguments.  */

void argmatch_valid (char const *const *arglist,
                     char const *vallist, size_t valsize);

# define ARGMATCH_VALID(Arglist, Vallist) \
  argmatch_valid (Arglist, (char const *) (Vallist), sizeof *(Vallist))



/* Same as argmatch, but upon failure, report an explanation of the
   failure, and exit using the function EXIT_FN. */

ptrdiff_t __xargmatch_internal (char const *context,
                                char const *arg, char const *const *arglist,
                                char const *vallist, size_t valsize,
                                argmatch_exit_fn exit_fn);

/* Programmer friendly interface to __xargmatch_internal. */

# define XARGMATCH(Context, Arg, Arglist, Vallist)              \
  ((Vallist) [__xargmatch_internal (Context, Arg, Arglist,      \
                                    (char const *) (Vallist),   \
                                    sizeof *(Vallist),          \
                                    argmatch_die)])

/* Convert a value into a corresponding argument. */

char const *argmatch_to_argument (char const *value,
                                  char const *const *arglist,
                                  char const *vallist, size_t valsize)
  _GL_ATTRIBUTE_PURE;

# define ARGMATCH_TO_ARGUMENT(Value, Arglist, Vallist)                  \
  argmatch_to_argument (Value, Arglist,                                 \
                        (char const *) (Vallist), sizeof *(Vallist))

#ifdef  __cplusplus
}
#endif

#endif /* ARGMATCH_H_ */
