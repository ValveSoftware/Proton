/* Split a double into fraction and mantissa, for hexadecimal printf.
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

#if ! defined USE_LONG_DOUBLE
# include <config.h>
#endif

/* Specification.  */
#ifdef USE_LONG_DOUBLE
# include "printf-frexpl.h"
#else
# include "printf-frexp.h"
#endif

#include <float.h>
#include <math.h>
#ifdef USE_LONG_DOUBLE
# include "fpucw.h"
#endif

/* This file assumes FLT_RADIX = 2.  If FLT_RADIX is a power of 2 greater
   than 2, or not even a power of 2, some rounding errors can occur, so that
   then the returned mantissa is only guaranteed to be <= 2.0, not < 2.0.  */

#ifdef USE_LONG_DOUBLE
# define FUNC printf_frexpl
# define DOUBLE long double
# define MIN_EXP LDBL_MIN_EXP
# if HAVE_FREXPL_IN_LIBC && HAVE_LDEXPL_IN_LIBC
#  define USE_FREXP_LDEXP
#  define FREXP frexpl
#  define LDEXP ldexpl
# endif
# define DECL_ROUNDING DECL_LONG_DOUBLE_ROUNDING
# define BEGIN_ROUNDING() BEGIN_LONG_DOUBLE_ROUNDING ()
# define END_ROUNDING() END_LONG_DOUBLE_ROUNDING ()
# define L_(literal) literal##L
#else
# define FUNC printf_frexp
# define DOUBLE double
# define MIN_EXP DBL_MIN_EXP
# if HAVE_FREXP_IN_LIBC && HAVE_LDEXP_IN_LIBC
#  define USE_FREXP_LDEXP
#  define FREXP frexp
#  define LDEXP ldexp
# endif
# define DECL_ROUNDING
# define BEGIN_ROUNDING()
# define END_ROUNDING()
# define L_(literal) literal
#endif

DOUBLE
FUNC (DOUBLE x, int *expptr)
{
  int exponent;
  DECL_ROUNDING

  BEGIN_ROUNDING ();

#ifdef USE_FREXP_LDEXP
  /* frexp and ldexp are usually faster than the loop below.  */
  x = FREXP (x, &exponent);

  x = x + x;
  exponent -= 1;

  if (exponent < MIN_EXP - 1)
    {
      x = LDEXP (x, exponent - (MIN_EXP - 1));
      exponent = MIN_EXP - 1;
    }
#else
  {
    /* Since the exponent is an 'int', it fits in 64 bits.  Therefore the
       loops are executed no more than 64 times.  */
    DOUBLE pow2[64]; /* pow2[i] = 2^2^i */
    DOUBLE powh[64]; /* powh[i] = 2^-2^i */
    int i;

    exponent = 0;
    if (x >= L_(1.0))
      {
        /* A nonnegative exponent.  */
        {
          DOUBLE pow2_i; /* = pow2[i] */
          DOUBLE powh_i; /* = powh[i] */

          /* Invariants: pow2_i = 2^2^i, powh_i = 2^-2^i,
             x * 2^exponent = argument, x >= 1.0.  */
          for (i = 0, pow2_i = L_(2.0), powh_i = L_(0.5);
               ;
               i++, pow2_i = pow2_i * pow2_i, powh_i = powh_i * powh_i)
            {
              if (x >= pow2_i)
                {
                  exponent += (1 << i);
                  x *= powh_i;
                }
              else
                break;

              pow2[i] = pow2_i;
              powh[i] = powh_i;
            }
        }
        /* Here 1.0 <= x < 2^2^i.  */
      }
    else
      {
        /* A negative exponent.  */
        {
          DOUBLE pow2_i; /* = pow2[i] */
          DOUBLE powh_i; /* = powh[i] */

          /* Invariants: pow2_i = 2^2^i, powh_i = 2^-2^i,
             x * 2^exponent = argument, x < 1.0, exponent >= MIN_EXP - 1.  */
          for (i = 0, pow2_i = L_(2.0), powh_i = L_(0.5);
               ;
               i++, pow2_i = pow2_i * pow2_i, powh_i = powh_i * powh_i)
            {
              if (exponent - (1 << i) < MIN_EXP - 1)
                break;

              exponent -= (1 << i);
              x *= pow2_i;
              if (x >= L_(1.0))
                break;

              pow2[i] = pow2_i;
              powh[i] = powh_i;
            }
        }
        /* Here either x < 1.0 and exponent - 2^i < MIN_EXP - 1 <= exponent,
           or 1.0 <= x < 2^2^i and exponent >= MIN_EXP - 1.  */

        if (x < L_(1.0))
          /* Invariants: x * 2^exponent = argument, x < 1.0 and
             exponent - 2^i < MIN_EXP - 1 <= exponent.  */
          while (i > 0)
            {
              i--;
              if (exponent - (1 << i) >= MIN_EXP - 1)
                {
                  exponent -= (1 << i);
                  x *= pow2[i];
                  if (x >= L_(1.0))
                    break;
                }
            }

        /* Here either x < 1.0 and exponent = MIN_EXP - 1,
           or 1.0 <= x < 2^2^i and exponent >= MIN_EXP - 1.  */
      }

    /* Invariants: x * 2^exponent = argument, and
       either x < 1.0 and exponent = MIN_EXP - 1,
       or 1.0 <= x < 2^2^i and exponent >= MIN_EXP - 1.  */
    while (i > 0)
      {
        i--;
        if (x >= pow2[i])
          {
            exponent += (1 << i);
            x *= powh[i];
          }
      }
    /* Here either x < 1.0 and exponent = MIN_EXP - 1,
       or 1.0 <= x < 2.0 and exponent >= MIN_EXP - 1.  */
  }
#endif

  END_ROUNDING ();

  *expptr = exponent;
  return x;
}
