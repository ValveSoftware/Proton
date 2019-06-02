/* Emulation for ldexpl.
   Contributed by Paolo Bonzini

   Copyright 2002-2003, 2007-2015 Free Software Foundation, Inc.

   This file is part of gnulib.

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

#if HAVE_SAME_LONG_DOUBLE_AS_DOUBLE

long double
ldexpl (long double x, int exp)
{
  return ldexp (x, exp);
}

#else

# include <float.h>
# include "fpucw.h"

long double
ldexpl (long double x, int exp)
{
  long double factor;
  int bit;
  DECL_LONG_DOUBLE_ROUNDING

  BEGIN_LONG_DOUBLE_ROUNDING ();

  /* Check for zero, nan and infinity. */
  if (!(isnanl (x) || x + x == x))
    {
      if (exp < 0)
        {
          exp = -exp;
          factor = 0.5L;
        }
      else
        factor = 2.0L;

      if (exp > 0)
        for (bit = 1;;)
          {
            /* Invariant: Here bit = 2^i, factor = 2^-2^i or = 2^2^i,
               and bit <= exp.  */
            if (exp & bit)
              x *= factor;
            bit <<= 1;
            if (bit > exp)
              break;
            factor = factor * factor;
          }
    }

  END_LONG_DOUBLE_ROUNDING ();

  return x;
}

#endif

#if 0
int
main (void)
{
  long double x;
  int y;
  for (y = 0; y < 29; y++)
    printf ("%5d %.16Lg %.16Lg\n", y, ldexpl (0.8L, y), ldexpl (0.8L, -y) * ldexpl (0.8L, y));
}
#endif
