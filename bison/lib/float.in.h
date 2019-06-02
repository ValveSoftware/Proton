/* A correct <float.h>.

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

#ifndef _@GUARD_PREFIX@_FLOAT_H

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

/* The include_next requires a split double-inclusion guard.  */
#@INCLUDE_NEXT@ @NEXT_FLOAT_H@

#ifndef _@GUARD_PREFIX@_FLOAT_H
#define _@GUARD_PREFIX@_FLOAT_H

/* 'long double' properties.  */

#if defined __i386__ && (defined __BEOS__ || defined __OpenBSD__)
/* Number of mantissa units, in base FLT_RADIX.  */
# undef LDBL_MANT_DIG
# define LDBL_MANT_DIG   64
/* Number of decimal digits that is sufficient for representing a number.  */
# undef LDBL_DIG
# define LDBL_DIG        18
/* x-1 where x is the smallest representable number > 1.  */
# undef LDBL_EPSILON
# define LDBL_EPSILON    1.0842021724855044340E-19L
/* Minimum e such that FLT_RADIX^(e-1) is a normalized number.  */
# undef LDBL_MIN_EXP
# define LDBL_MIN_EXP    (-16381)
/* Maximum e such that FLT_RADIX^(e-1) is a representable finite number.  */
# undef LDBL_MAX_EXP
# define LDBL_MAX_EXP    16384
/* Minimum positive normalized number.  */
# undef LDBL_MIN
# define LDBL_MIN        3.3621031431120935063E-4932L
/* Maximum representable finite number.  */
# undef LDBL_MAX
# define LDBL_MAX        1.1897314953572317650E+4932L
/* Minimum e such that 10^e is in the range of normalized numbers.  */
# undef LDBL_MIN_10_EXP
# define LDBL_MIN_10_EXP (-4931)
/* Maximum e such that 10^e is in the range of representable finite numbers.  */
# undef LDBL_MAX_10_EXP
# define LDBL_MAX_10_EXP 4932
#endif

/* On FreeBSD/x86 6.4, the 'long double' type really has only 53 bits of
   precision in the compiler but 64 bits of precision at runtime.  See
   <http://lists.gnu.org/archive/html/bug-gnulib/2008-07/msg00063.html>.  */
#if defined __i386__ && defined __FreeBSD__
/* Number of mantissa units, in base FLT_RADIX.  */
# undef LDBL_MANT_DIG
# define LDBL_MANT_DIG   64
/* Number of decimal digits that is sufficient for representing a number.  */
# undef LDBL_DIG
# define LDBL_DIG        18
/* x-1 where x is the smallest representable number > 1.  */
# undef LDBL_EPSILON
# define LDBL_EPSILON 1.084202172485504434007452800869941711426e-19L /* 2^-63 */
/* Minimum e such that FLT_RADIX^(e-1) is a normalized number.  */
# undef LDBL_MIN_EXP
# define LDBL_MIN_EXP    (-16381)
/* Maximum e such that FLT_RADIX^(e-1) is a representable finite number.  */
# undef LDBL_MAX_EXP
# define LDBL_MAX_EXP    16384
/* Minimum positive normalized number.  */
# undef LDBL_MIN
# define LDBL_MIN        3.3621031431120935E-4932L /* = 0x1p-16382L */
/* Maximum representable finite number.  */
# undef LDBL_MAX
/* LDBL_MAX is represented as { 0xFFFFFFFF, 0xFFFFFFFF, 32766 }.
   But the largest literal that GCC allows us to write is
   0x0.fffffffffffff8p16384L = { 0xFFFFF800, 0xFFFFFFFF, 32766 }.
   So, define it like this through a reference to an external variable

     const unsigned int LDBL_MAX[3] = { 0xFFFFFFFF, 0xFFFFFFFF, 32766 };
     extern const long double LDBL_MAX;

   Unfortunately, this is not a constant expression.  */
union gl_long_double_union
  {
    struct { unsigned int lo; unsigned int hi; unsigned int exponent; } xd;
    long double ld;
  };
extern const union gl_long_double_union gl_LDBL_MAX;
# define LDBL_MAX (gl_LDBL_MAX.ld)
/* Minimum e such that 10^e is in the range of normalized numbers.  */
# undef LDBL_MIN_10_EXP
# define LDBL_MIN_10_EXP (-4931)
/* Maximum e such that 10^e is in the range of representable finite numbers.  */
# undef LDBL_MAX_10_EXP
# define LDBL_MAX_10_EXP 4932
#endif

/* On AIX 7.1 with gcc 4.2, the values of LDBL_MIN_EXP, LDBL_MIN, LDBL_MAX are
   wrong.
   On Linux/PowerPC with gcc 4.4, the value of LDBL_MAX is wrong.  */
#if (defined _ARCH_PPC || defined _POWER) && defined _AIX && (LDBL_MANT_DIG == 106) && defined __GNUC__
# undef LDBL_MIN_EXP
# define LDBL_MIN_EXP DBL_MIN_EXP
# undef LDBL_MIN_10_EXP
# define LDBL_MIN_10_EXP DBL_MIN_10_EXP
# undef LDBL_MIN
# define LDBL_MIN 2.22507385850720138309023271733240406422e-308L /* DBL_MIN = 2^-1022 */
#endif
#if (defined _ARCH_PPC || defined _POWER) && (defined _AIX || defined __linux__) && (LDBL_MANT_DIG == 106) && defined __GNUC__
# undef LDBL_MAX
/* LDBL_MAX is represented as { 0x7FEFFFFF, 0xFFFFFFFF, 0x7C8FFFFF, 0xFFFFFFFF }.
   It is not easy to define:
     #define LDBL_MAX 1.79769313486231580793728971405302307166e308L
   is too small, whereas
     #define LDBL_MAX 1.79769313486231580793728971405302307167e308L
   is too large.  Apparently a bug in GCC decimal-to-binary conversion.
   Also, I can't get values larger than
     #define LDBL63 ((long double) (1ULL << 63))
     #define LDBL882 (LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63)
     #define LDBL945 (LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63)
     #define LDBL1008 (LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63 * LDBL63)
     #define LDBL_MAX (LDBL1008 * 65535.0L + LDBL945 * (long double) 9223372036821221375ULL + LDBL882 * (long double) 4611686018427387904ULL)
   which is represented as { 0x7FEFFFFF, 0xFFFFFFFF, 0x7C8FFFFF, 0xF8000000 }.
   So, define it like this through a reference to an external variable

     const double LDBL_MAX[2] = { DBL_MAX, DBL_MAX / (double)134217728UL / (double)134217728UL };
     extern const long double LDBL_MAX;

   or through a pointer cast

     #define LDBL_MAX \
       (*(const long double *) (double[]) { DBL_MAX, DBL_MAX / (double)134217728UL / (double)134217728UL })

   Unfortunately, this is not a constant expression, and the latter expression
   does not work well when GCC is optimizing..  */
union gl_long_double_union
  {
    struct { double hi; double lo; } dd;
    long double ld;
  };
extern const union gl_long_double_union gl_LDBL_MAX;
# define LDBL_MAX (gl_LDBL_MAX.ld)
#endif

/* On IRIX 6.5, with cc, the value of LDBL_MANT_DIG is wrong.
   On IRIX 6.5, with gcc 4.2, the values of LDBL_MIN_EXP, LDBL_MIN, LDBL_EPSILON
   are wrong.  */
#if defined __sgi && (LDBL_MANT_DIG >= 106)
# undef LDBL_MANT_DIG
# define LDBL_MANT_DIG 106
# if defined __GNUC__
#  undef LDBL_MIN_EXP
#  define LDBL_MIN_EXP DBL_MIN_EXP
#  undef LDBL_MIN_10_EXP
#  define LDBL_MIN_10_EXP DBL_MIN_10_EXP
#  undef LDBL_MIN
#  define LDBL_MIN 2.22507385850720138309023271733240406422e-308L /* DBL_MIN = 2^-1022 */
#  undef LDBL_EPSILON
#  define LDBL_EPSILON 2.46519032881566189191165176650870696773e-32L /* 2^-105 */
# endif
#endif

#if @REPLACE_ITOLD@
/* Pull in a function that fixes the 'int' to 'long double' conversion
   of glibc 2.7.  */
extern
# ifdef __cplusplus
"C"
# endif
void _Qp_itoq (long double *, int);
static void (*_gl_float_fix_itold) (long double *, int) = _Qp_itoq;
#endif

#endif /* _@GUARD_PREFIX@_FLOAT_H */
#endif /* _@GUARD_PREFIX@_FLOAT_H */
