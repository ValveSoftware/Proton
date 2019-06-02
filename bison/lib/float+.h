/* Supplemental information about the floating-point formats.
   Copyright (C) 2007, 2009-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2007.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef _FLOATPLUS_H
#define _FLOATPLUS_H

#include <float.h>
#include <limits.h>

/* Number of bits in the mantissa of a floating-point number, including the
   "hidden bit".  */
#if FLT_RADIX == 2
# define FLT_MANT_BIT FLT_MANT_DIG
# define DBL_MANT_BIT DBL_MANT_DIG
# define LDBL_MANT_BIT LDBL_MANT_DIG
#elif FLT_RADIX == 4
# define FLT_MANT_BIT (FLT_MANT_DIG * 2)
# define DBL_MANT_BIT (DBL_MANT_DIG * 2)
# define LDBL_MANT_BIT (LDBL_MANT_DIG * 2)
#elif FLT_RADIX == 16
# define FLT_MANT_BIT (FLT_MANT_DIG * 4)
# define DBL_MANT_BIT (DBL_MANT_DIG * 4)
# define LDBL_MANT_BIT (LDBL_MANT_DIG * 4)
#endif

/* Bit mask that can be used to mask the exponent, as an unsigned number.  */
#define FLT_EXP_MASK ((FLT_MAX_EXP - FLT_MIN_EXP) | 7)
#define DBL_EXP_MASK ((DBL_MAX_EXP - DBL_MIN_EXP) | 7)
#define LDBL_EXP_MASK ((LDBL_MAX_EXP - LDBL_MIN_EXP) | 7)

/* Number of bits used for the exponent of a floating-point number, including
   the exponent's sign.  */
#define FLT_EXP_BIT \
  (FLT_EXP_MASK < 0x100 ? 8 : \
   FLT_EXP_MASK < 0x200 ? 9 : \
   FLT_EXP_MASK < 0x400 ? 10 : \
   FLT_EXP_MASK < 0x800 ? 11 : \
   FLT_EXP_MASK < 0x1000 ? 12 : \
   FLT_EXP_MASK < 0x2000 ? 13 : \
   FLT_EXP_MASK < 0x4000 ? 14 : \
   FLT_EXP_MASK < 0x8000 ? 15 : \
   FLT_EXP_MASK < 0x10000 ? 16 : \
   FLT_EXP_MASK < 0x20000 ? 17 : \
   FLT_EXP_MASK < 0x40000 ? 18 : \
   FLT_EXP_MASK < 0x80000 ? 19 : \
   FLT_EXP_MASK < 0x100000 ? 20 : \
   FLT_EXP_MASK < 0x200000 ? 21 : \
   FLT_EXP_MASK < 0x400000 ? 22 : \
   FLT_EXP_MASK < 0x800000 ? 23 : \
   FLT_EXP_MASK < 0x1000000 ? 24 : \
   FLT_EXP_MASK < 0x2000000 ? 25 : \
   FLT_EXP_MASK < 0x4000000 ? 26 : \
   FLT_EXP_MASK < 0x8000000 ? 27 : \
   FLT_EXP_MASK < 0x10000000 ? 28 : \
   FLT_EXP_MASK < 0x20000000 ? 29 : \
   FLT_EXP_MASK < 0x40000000 ? 30 : \
   FLT_EXP_MASK <= 0x7fffffff ? 31 : \
   32)
#define DBL_EXP_BIT \
  (DBL_EXP_MASK < 0x100 ? 8 : \
   DBL_EXP_MASK < 0x200 ? 9 : \
   DBL_EXP_MASK < 0x400 ? 10 : \
   DBL_EXP_MASK < 0x800 ? 11 : \
   DBL_EXP_MASK < 0x1000 ? 12 : \
   DBL_EXP_MASK < 0x2000 ? 13 : \
   DBL_EXP_MASK < 0x4000 ? 14 : \
   DBL_EXP_MASK < 0x8000 ? 15 : \
   DBL_EXP_MASK < 0x10000 ? 16 : \
   DBL_EXP_MASK < 0x20000 ? 17 : \
   DBL_EXP_MASK < 0x40000 ? 18 : \
   DBL_EXP_MASK < 0x80000 ? 19 : \
   DBL_EXP_MASK < 0x100000 ? 20 : \
   DBL_EXP_MASK < 0x200000 ? 21 : \
   DBL_EXP_MASK < 0x400000 ? 22 : \
   DBL_EXP_MASK < 0x800000 ? 23 : \
   DBL_EXP_MASK < 0x1000000 ? 24 : \
   DBL_EXP_MASK < 0x2000000 ? 25 : \
   DBL_EXP_MASK < 0x4000000 ? 26 : \
   DBL_EXP_MASK < 0x8000000 ? 27 : \
   DBL_EXP_MASK < 0x10000000 ? 28 : \
   DBL_EXP_MASK < 0x20000000 ? 29 : \
   DBL_EXP_MASK < 0x40000000 ? 30 : \
   DBL_EXP_MASK <= 0x7fffffff ? 31 : \
   32)
#define LDBL_EXP_BIT \
  (LDBL_EXP_MASK < 0x100 ? 8 : \
   LDBL_EXP_MASK < 0x200 ? 9 : \
   LDBL_EXP_MASK < 0x400 ? 10 : \
   LDBL_EXP_MASK < 0x800 ? 11 : \
   LDBL_EXP_MASK < 0x1000 ? 12 : \
   LDBL_EXP_MASK < 0x2000 ? 13 : \
   LDBL_EXP_MASK < 0x4000 ? 14 : \
   LDBL_EXP_MASK < 0x8000 ? 15 : \
   LDBL_EXP_MASK < 0x10000 ? 16 : \
   LDBL_EXP_MASK < 0x20000 ? 17 : \
   LDBL_EXP_MASK < 0x40000 ? 18 : \
   LDBL_EXP_MASK < 0x80000 ? 19 : \
   LDBL_EXP_MASK < 0x100000 ? 20 : \
   LDBL_EXP_MASK < 0x200000 ? 21 : \
   LDBL_EXP_MASK < 0x400000 ? 22 : \
   LDBL_EXP_MASK < 0x800000 ? 23 : \
   LDBL_EXP_MASK < 0x1000000 ? 24 : \
   LDBL_EXP_MASK < 0x2000000 ? 25 : \
   LDBL_EXP_MASK < 0x4000000 ? 26 : \
   LDBL_EXP_MASK < 0x8000000 ? 27 : \
   LDBL_EXP_MASK < 0x10000000 ? 28 : \
   LDBL_EXP_MASK < 0x20000000 ? 29 : \
   LDBL_EXP_MASK < 0x40000000 ? 30 : \
   LDBL_EXP_MASK <= 0x7fffffff ? 31 : \
   32)

/* Number of bits used for a floating-point number: the mantissa (not
   counting the "hidden bit", since it may or may not be explicit), the
   exponent, and the sign.  */
#define FLT_TOTAL_BIT ((FLT_MANT_BIT - 1) + FLT_EXP_BIT + 1)
#define DBL_TOTAL_BIT ((DBL_MANT_BIT - 1) + DBL_EXP_BIT + 1)
#define LDBL_TOTAL_BIT ((LDBL_MANT_BIT - 1) + LDBL_EXP_BIT + 1)

/* Number of bytes used for a floating-point number.
   This can be smaller than the 'sizeof'.  For example, on i386 systems,
   'long double' most often have LDBL_MANT_BIT = 64, LDBL_EXP_BIT = 16, hence
   LDBL_TOTAL_BIT = 80 bits, i.e. 10 bytes of consecutive memory, but
   sizeof (long double) = 12 or = 16.  */
#define SIZEOF_FLT ((FLT_TOTAL_BIT + CHAR_BIT - 1) / CHAR_BIT)
#define SIZEOF_DBL ((DBL_TOTAL_BIT + CHAR_BIT - 1) / CHAR_BIT)
#define SIZEOF_LDBL ((LDBL_TOTAL_BIT + CHAR_BIT - 1) / CHAR_BIT)

/* Verify that SIZEOF_FLT <= sizeof (float) etc.  */
typedef int verify_sizeof_flt[SIZEOF_FLT <= sizeof (float) ? 1 : -1];
typedef int verify_sizeof_dbl[SIZEOF_DBL <= sizeof (double) ? 1 : - 1];
typedef int verify_sizeof_ldbl[SIZEOF_LDBL <= sizeof (long double) ? 1 : - 1];

#endif /* _FLOATPLUS_H */
