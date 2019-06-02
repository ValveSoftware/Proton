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
#include "isnanf-nolibm.h"
#include "float+.h"

#ifdef gl_signbitf_OPTIMIZED_MACRO
# undef gl_signbitf
#endif

int
gl_signbitf (float arg)
{
#if defined FLT_SIGNBIT_WORD && defined FLT_SIGNBIT_BIT
  /* The use of a union to extract the bits of the representation of a
     'long double' is safe in practice, despite of the "aliasing rules" of
     C99, because the GCC docs say
       "Even with '-fstrict-aliasing', type-punning is allowed, provided the
        memory is accessed through the union type."
     and similarly for other compilers.  */
# define NWORDS \
    ((sizeof (float) + sizeof (unsigned int) - 1) / sizeof (unsigned int))
  union { float value; unsigned int word[NWORDS]; } m;
  m.value = arg;
  return (m.word[FLT_SIGNBIT_WORD] >> FLT_SIGNBIT_BIT) & 1;
#elif HAVE_COPYSIGNF_IN_LIBC
  return copysignf (1.0f, arg) < 0;
#else
  /* This does not do the right thing for NaN, but this is irrelevant for
     most use cases.  */
  if (isnanf (arg))
    return 0;
  if (arg < 0.0f)
    return 1;
  else if (arg == 0.0f)
    {
      /* Distinguish 0.0f and -0.0f.  */
      static float plus_zero = 0.0f;
      float arg_mem = arg;
      return (memcmp (&plus_zero, &arg_mem, SIZEOF_FLT) != 0);
    }
  else
    return 0;
#endif
}
