/* Split a double into fraction and mantissa.
   Copyright (C) 2007-2015 Free Software Foundation, Inc.

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

/* Written by Paolo Bonzini <bonzini@gnu.org>, 2003, and
   Bruno Haible <bruno@clisp.org>, 2007.  */

#if ! defined USE_LONG_DOUBLE
# include <config.h>
#endif

/* Specification.  */
#include <math.h>

#include <float.h>
#ifdef USE_LONG_DOUBLE
# include "isnanl-nolibm.h"
# include "fpucw.h"
#else
# include "isnand-nolibm.h"
#endif

/* This file assumes FLT_RADIX = 2.  If FLT_RADIX is a power of 2 greater
   than 2, or not even a power of 2, some rounding errors can occur, so that
   then the returned mantissa is only guaranteed to be <= 1.0, not < 1.0.  */

#ifdef USE_LONG_DOUBLE
# define FUNC frexpl
# define DOUBLE long double
# define ISNAN isnanl
# define DECL_ROUNDING DECL_LONG_DOUBLE_ROUNDING
# define BEGIN_ROUNDING() BEGIN_LONG_DOUBLE_ROUNDING ()
# define END_ROUNDING() END_LONG_DOUBLE_ROUNDING ()
# define L_(literal) literal##L
#else
# define FUNC frexp
# define DOUBLE double
# define ISNAN isnand
# define DECL_ROUNDING
# define BEGIN_ROUNDING()
# define END_ROUNDING()
# define L_(literal) literal
#endif

DOUBLE
FUNC (DOUBLE x, int *expptr)
{
  int sign;
  int exponent;
  DECL_ROUNDING

  /* Test for NaN, infinity, and zero.  */
  if (ISNAN (x) || x + x == x)
    {
      *expptr = 0;
      return x;
    }

  sign = 0;
  if (x < 0)
    {
      x = - x;
      sign = -1;
    }

  BEGIN_ROUNDING ();

  {
    /* Since the exponent is an 'int', it fits in 64 bits.  Therefore the
       loops are executed no more than 64 times.  */
    DOUBLE pow2[64]; /* pow2[i] = 2^2^i */
    DOUBLE powh[64]; /* powh[i] = 2^-2^i */
    int i;

    exponent = 0;
    if (x >= L_(1.0))
      {
        /* A positive exponent.  */
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
        /* Avoid making x too small, as it could become a denormalized
           number and thus lose precision.  */
        while (i > 0 && x < pow2[i - 1])
          {
            i--;
            powh_i = powh[i];
          }
        exponent += (1 << i);
        x *= powh_i;
        /* Here 2^-2^i <= x < 1.0.  */
      }
    else
      {
        /* A negative or zero exponent.  */
        DOUBLE pow2_i; /* = pow2[i] */
        DOUBLE powh_i; /* = powh[i] */

        /* Invariants: pow2_i = 2^2^i, powh_i = 2^-2^i,
           x * 2^exponent = argument, x < 1.0.  */
        for (i = 0, pow2_i = L_(2.0), powh_i = L_(0.5);
             ;
             i++, pow2_i = pow2_i * pow2_i, powh_i = powh_i * powh_i)
          {
            if (x < powh_i)
              {
                exponent -= (1 << i);
                x *= pow2_i;
              }
            else
              break;

            pow2[i] = pow2_i;
            powh[i] = powh_i;
          }
        /* Here 2^-2^i <= x < 1.0.  */
      }

    /* Invariants: x * 2^exponent = argument, and 2^-2^i <= x < 1.0.  */
    while (i > 0)
      {
        i--;
        if (x < powh[i])
          {
            exponent -= (1 << i);
            x *= pow2[i];
          }
      }
    /* Here 0.5 <= x < 1.0.  */
  }

  if (sign < 0)
    x = - x;

  END_ROUNDING ();

  *expptr = exponent;
  return x;
}
