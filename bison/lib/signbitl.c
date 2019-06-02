/* signbit() macro: Determine the sign bit of a floating-point number.
   Copyright (C) 2007, 2009-2015 Free Software Foundation, Inc.

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

#include <config.h>

/* Specification.  */
#include <math.h>

#include <string.h>
#include "isnanl-nolibm.h"
#include "float+.h"

#ifdef gl_signbitl_OPTIMIZED_MACRO
# undef gl_signbitl
#endif

int
gl_signbitl (long double arg)
{
#if defined LDBL_SIGNBIT_WORD && defined LDBL_SIGNBIT_BIT
  /* The use of a union to extract the bits of the representation of a
     'long double' is safe in practice, despite of the "aliasing rules" of
     C99, because the GCC docs say
       "Even with '-fstrict-aliasing', type-punning is allowed, provided the
        memory is accessed through the union type."
     and similarly for other compilers.  */
# define NWORDS \
    ((sizeof (long double) + sizeof (unsigned int) - 1) / sizeof (unsigned int))
  union { long double value; unsigned int word[NWORDS]; } m;
  m.value = arg;
  return (m.word[LDBL_SIGNBIT_WORD] >> LDBL_SIGNBIT_BIT) & 1;
#elif HAVE_COPYSIGNL_IN_LIBC
  return copysignl (1.0L, arg) < 0;
#else
  /* This does not do the right thing for NaN, but this is irrelevant for
     most use cases.  */
  if (isnanl (arg))
    return 0;
  if (arg < 0.0L)
    return 1;
  else if (arg == 0.0L)
    {
      /* Distinguish 0.0L and -0.0L.  */
      static long double plus_zero = 0.0L;
      long double arg_mem = arg;
      return (memcmp (&plus_zero, &arg_mem, SIZEOF_LDBL) != 0);
    }
  else
    return 0;
#endif
}
