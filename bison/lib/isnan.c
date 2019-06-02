/* Test for NaN that does not need libm.
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

/* Written by Bruno Haible <bruno@clisp.org>, 2007.  */

#include <config.h>

/* Specification.  */
#ifdef USE_LONG_DOUBLE
/* Specification found in math.h or isnanl-nolibm.h.  */
extern int rpl_isnanl (long double x) _GL_ATTRIBUTE_CONST;
#elif ! defined USE_FLOAT
/* Specification found in math.h or isnand-nolibm.h.  */
extern int rpl_isnand (double x);
#else /* defined USE_FLOAT */
/* Specification found in math.h or isnanf-nolibm.h.  */
extern int rpl_isnanf (float x);
#endif

#include <float.h>
#include <string.h>

#include "float+.h"

#ifdef USE_LONG_DOUBLE
# define FUNC rpl_isnanl
# define DOUBLE long double
# define MAX_EXP LDBL_MAX_EXP
# define MIN_EXP LDBL_MIN_EXP
# if defined LDBL_EXPBIT0_WORD && defined LDBL_EXPBIT0_BIT
#  define KNOWN_EXPBIT0_LOCATION
#  define EXPBIT0_WORD LDBL_EXPBIT0_WORD
#  define EXPBIT0_BIT LDBL_EXPBIT0_BIT
# endif
# define SIZE SIZEOF_LDBL
# define L_(literal) literal##L
#elif ! defined USE_FLOAT
# define FUNC rpl_isnand
# define DOUBLE double
# define MAX_EXP DBL_MAX_EXP
# define MIN_EXP DBL_MIN_EXP
# if defined DBL_EXPBIT0_WORD && defined DBL_EXPBIT0_BIT
#  define KNOWN_EXPBIT0_LOCATION
#  define EXPBIT0_WORD DBL_EXPBIT0_WORD
#  define EXPBIT0_BIT DBL_EXPBIT0_BIT
# endif
# define SIZE SIZEOF_DBL
# define L_(literal) literal
#else /* defined USE_FLOAT */
# define FUNC rpl_isnanf
# define DOUBLE float
# define MAX_EXP FLT_MAX_EXP
# define MIN_EXP FLT_MIN_EXP
# if defined FLT_EXPBIT0_WORD && defined FLT_EXPBIT0_BIT
#  define KNOWN_EXPBIT0_LOCATION
#  define EXPBIT0_WORD FLT_EXPBIT0_WORD
#  define EXPBIT0_BIT FLT_EXPBIT0_BIT
# endif
# define SIZE SIZEOF_FLT
# define L_(literal) literal##f
#endif

#define EXP_MASK ((MAX_EXP - MIN_EXP) | 7)

#define NWORDS \
  ((sizeof (DOUBLE) + sizeof (unsigned int) - 1) / sizeof (unsigned int))
typedef union { DOUBLE value; unsigned int word[NWORDS]; } memory_double;

/* Most hosts nowadays use IEEE floating point, so they use IEC 60559
   representations, have infinities and NaNs, and do not trap on
   exceptions.  Define IEEE_FLOATING_POINT if this host is one of the
   typical ones.  The C11 macro __STDC_IEC_559__ is close to what is
   wanted here, but is not quite right because this file does not require
   all the features of C11 Annex F (and does not require C11 at all,
   for that matter).  */

#define IEEE_FLOATING_POINT (FLT_RADIX == 2 && FLT_MANT_DIG == 24 \
                             && FLT_MIN_EXP == -125 && FLT_MAX_EXP == 128)

int
FUNC (DOUBLE x)
{
#if defined KNOWN_EXPBIT0_LOCATION && IEEE_FLOATING_POINT
# if defined USE_LONG_DOUBLE && ((defined __ia64 && LDBL_MANT_DIG == 64) || (defined __x86_64__ || defined __amd64__) || (defined __i386 || defined __i386__ || defined _I386 || defined _M_IX86 || defined _X86_)) && !HAVE_SAME_LONG_DOUBLE_AS_DOUBLE
  /* Special CPU dependent code is needed to treat bit patterns outside the
     IEEE 754 specification (such as Pseudo-NaNs, Pseudo-Infinities,
     Pseudo-Zeroes, Unnormalized Numbers, and Pseudo-Denormals) as NaNs.
     These bit patterns are:
       - exponent = 0x0001..0x7FFF, mantissa bit 63 = 0,
       - exponent = 0x0000, mantissa bit 63 = 1.
     The NaN bit pattern is:
       - exponent = 0x7FFF, mantissa >= 0x8000000000000001.  */
  memory_double m;
  unsigned int exponent;

  m.value = x;
  exponent = (m.word[EXPBIT0_WORD] >> EXPBIT0_BIT) & EXP_MASK;
#  ifdef WORDS_BIGENDIAN
  /* Big endian: EXPBIT0_WORD = 0, EXPBIT0_BIT = 16.  */
  if (exponent == 0)
    return 1 & (m.word[0] >> 15);
  else if (exponent == EXP_MASK)
    return (((m.word[0] ^ 0x8000U) << 16) | m.word[1] | (m.word[2] >> 16)) != 0;
  else
    return 1 & ~(m.word[0] >> 15);
#  else
  /* Little endian: EXPBIT0_WORD = 2, EXPBIT0_BIT = 0.  */
  if (exponent == 0)
    return (m.word[1] >> 31);
  else if (exponent == EXP_MASK)
    return ((m.word[1] ^ 0x80000000U) | m.word[0]) != 0;
  else
    return (m.word[1] >> 31) ^ 1;
#  endif
# else
  /* Be careful to not do any floating-point operation on x, such as x == x,
     because x may be a signaling NaN.  */
#  if defined __SUNPRO_C || defined __ICC || defined _MSC_VER \
      || defined __DECC || defined __TINYC__ \
      || (defined __sgi && !defined __GNUC__)
  /* The Sun C 5.0, Intel ICC 10.0, Microsoft Visual C/C++ 9.0, Compaq (ex-DEC)
     6.4, and TinyCC compilers don't recognize the initializers as constant
     expressions.  The Compaq compiler also fails when constant-folding
     0.0 / 0.0 even when constant-folding is not required.  The Microsoft
     Visual C/C++ compiler also fails when constant-folding 1.0 / 0.0 even
     when constant-folding is not required. The SGI MIPSpro C compiler
     complains about "floating-point operation result is out of range".  */
  static DOUBLE zero = L_(0.0);
  memory_double nan;
  DOUBLE plus_inf = L_(1.0) / zero;
  DOUBLE minus_inf = -L_(1.0) / zero;
  nan.value = zero / zero;
#  else
  static memory_double nan = { L_(0.0) / L_(0.0) };
  static DOUBLE plus_inf = L_(1.0) / L_(0.0);
  static DOUBLE minus_inf = -L_(1.0) / L_(0.0);
#  endif
  {
    memory_double m;

    /* A NaN can be recognized through its exponent.  But exclude +Infinity and
       -Infinity, which have the same exponent.  */
    m.value = x;
    if (((m.word[EXPBIT0_WORD] ^ nan.word[EXPBIT0_WORD])
         & (EXP_MASK << EXPBIT0_BIT))
        == 0)
      return (memcmp (&m.value, &plus_inf, SIZE) != 0
              && memcmp (&m.value, &minus_inf, SIZE) != 0);
    else
      return 0;
  }
# endif
#else
  /* The configuration did not find sufficient information, or does
     not use IEEE floating point.  Give up about the signaling NaNs;
     handle only the quiet NaNs.  */
  if (x == x)
    {
# if defined USE_LONG_DOUBLE && ((defined __ia64 && LDBL_MANT_DIG == 64) || (defined __x86_64__ || defined __amd64__) || (defined __i386 || defined __i386__ || defined _I386 || defined _M_IX86 || defined _X86_)) && !HAVE_SAME_LONG_DOUBLE_AS_DOUBLE
      /* Detect any special bit patterns that pass ==; see comment above.  */
      memory_double m1;
      memory_double m2;

      memset (&m1.value, 0, SIZE);
      memset (&m2.value, 0, SIZE);
      m1.value = x;
      m2.value = x + (x ? 0.0L : -0.0L);
      if (memcmp (&m1.value, &m2.value, SIZE) != 0)
        return 1;
# endif
      return 0;
    }
  else
    return 1;
#endif
}
