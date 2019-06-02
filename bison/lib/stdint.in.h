/* Copyright (C) 2001-2002, 2004-2015 Free Software Foundation, Inc.
   Written by Paul Eggert, Bruno Haible, Sam Steingold, Peter Burwood.
   This file is part of gnulib.

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

/*
 * ISO C 99 <stdint.h> for platforms that lack it.
 * <http://www.opengroup.org/susv3xbd/stdint.h.html>
 */

#ifndef _@GUARD_PREFIX@_STDINT_H

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

/* When including a system file that in turn includes <inttypes.h>,
   use the system <inttypes.h>, not our substitute.  This avoids
   problems with (for example) VMS, whose <sys/bitypes.h> includes
   <inttypes.h>.  */
#define _GL_JUST_INCLUDE_SYSTEM_INTTYPES_H

/* On Android (Bionic libc), <sys/types.h> includes this file before
   having defined 'time_t'.  Therefore in this case avoid including
   other system header files; just include the system's <stdint.h>.
   Ideally we should test __BIONIC__ here, but it is only defined after
   <sys/cdefs.h> has been included; hence test __ANDROID__ instead.  */
#if defined __ANDROID__ && defined _GL_INCLUDING_SYS_TYPES_H
# @INCLUDE_NEXT@ @NEXT_STDINT_H@
#else

/* Get those types that are already defined in other system include
   files, so that we can "#define int8_t signed char" below without
   worrying about a later system include file containing a "typedef
   signed char int8_t;" that will get messed up by our macro.  Our
   macros should all be consistent with the system versions, except
   for the "fast" types and macros, which we recommend against using
   in public interfaces due to compiler differences.  */

#if @HAVE_STDINT_H@
# if defined __sgi && ! defined __c99
   /* Bypass IRIX's <stdint.h> if in C89 mode, since it merely annoys users
      with "This header file is to be used only for c99 mode compilations"
      diagnostics.  */
#  define __STDINT_H__
# endif

  /* Some pre-C++11 <stdint.h> implementations need this.  */
# ifdef __cplusplus
#  ifndef __STDC_CONSTANT_MACROS
#   define __STDC_CONSTANT_MACROS 1
#  endif
#  ifndef __STDC_LIMIT_MACROS
#   define __STDC_LIMIT_MACROS 1
#  endif
# endif

  /* Other systems may have an incomplete or buggy <stdint.h>.
     Include it before <inttypes.h>, since any "#include <stdint.h>"
     in <inttypes.h> would reinclude us, skipping our contents because
     _@GUARD_PREFIX@_STDINT_H is defined.
     The include_next requires a split double-inclusion guard.  */
# @INCLUDE_NEXT@ @NEXT_STDINT_H@
#endif

#if ! defined _@GUARD_PREFIX@_STDINT_H && ! defined _GL_JUST_INCLUDE_SYSTEM_STDINT_H
#define _@GUARD_PREFIX@_STDINT_H

/* <sys/types.h> defines some of the stdint.h types as well, on glibc,
   IRIX 6.5, and OpenBSD 3.8 (via <machine/types.h>).
   AIX 5.2 <sys/types.h> isn't needed and causes troubles.
   Mac OS X 10.4.6 <sys/types.h> includes <stdint.h> (which is us), but
   relies on the system <stdint.h> definitions, so include
   <sys/types.h> after @NEXT_STDINT_H@.  */
#if @HAVE_SYS_TYPES_H@ && ! defined _AIX
# include <sys/types.h>
#endif

/* Get SCHAR_MIN, SCHAR_MAX, UCHAR_MAX, INT_MIN, INT_MAX,
   LONG_MIN, LONG_MAX, ULONG_MAX.  */
#include <limits.h>

#if @HAVE_INTTYPES_H@
  /* In OpenBSD 3.8, <inttypes.h> includes <machine/types.h>, which defines
     int{8,16,32,64}_t, uint{8,16,32,64}_t and __BIT_TYPES_DEFINED__.
     <inttypes.h> also defines intptr_t and uintptr_t.  */
# include <inttypes.h>
#elif @HAVE_SYS_INTTYPES_H@
  /* Solaris 7 <sys/inttypes.h> has the types except the *_fast*_t types, and
     the macros except for *_FAST*_*, INTPTR_MIN, PTRDIFF_MIN, PTRDIFF_MAX.  */
# include <sys/inttypes.h>
#endif

#if @HAVE_SYS_BITYPES_H@ && ! defined __BIT_TYPES_DEFINED__
  /* Linux libc4 >= 4.6.7 and libc5 have a <sys/bitypes.h> that defines
     int{8,16,32,64}_t and __BIT_TYPES_DEFINED__.  In libc5 >= 5.2.2 it is
     included by <sys/types.h>.  */
# include <sys/bitypes.h>
#endif

#undef _GL_JUST_INCLUDE_SYSTEM_INTTYPES_H

/* Minimum and maximum values for an integer type under the usual assumption.
   Return an unspecified value if BITS == 0, adding a check to pacify
   picky compilers.  */

#define _STDINT_MIN(signed, bits, zero) \
  ((signed) ? (- ((zero) + 1) << ((bits) ? (bits) - 1 : 0)) : (zero))

#define _STDINT_MAX(signed, bits, zero) \
  ((signed) \
   ? ~ _STDINT_MIN (signed, bits, zero) \
   : /* The expression for the unsigned case.  The subtraction of (signed) \
        is a nop in the unsigned case and avoids "signed integer overflow" \
        warnings in the signed case.  */ \
     ((((zero) + 1) << ((bits) ? (bits) - 1 - (signed) : 0)) - 1) * 2 + 1)

#if !GNULIB_defined_stdint_types

/* 7.18.1.1. Exact-width integer types */

/* Here we assume a standard architecture where the hardware integer
   types have 8, 16, 32, optionally 64 bits.  */

#undef int8_t
#undef uint8_t
typedef signed char gl_int8_t;
typedef unsigned char gl_uint8_t;
#define int8_t gl_int8_t
#define uint8_t gl_uint8_t

#undef int16_t
#undef uint16_t
typedef short int gl_int16_t;
typedef unsigned short int gl_uint16_t;
#define int16_t gl_int16_t
#define uint16_t gl_uint16_t

#undef int32_t
#undef uint32_t
typedef int gl_int32_t;
typedef unsigned int gl_uint32_t;
#define int32_t gl_int32_t
#define uint32_t gl_uint32_t

/* If the system defines INT64_MAX, assume int64_t works.  That way,
   if the underlying platform defines int64_t to be a 64-bit long long
   int, the code below won't mistakenly define it to be a 64-bit long
   int, which would mess up C++ name mangling.  We must use #ifdef
   rather than #if, to avoid an error with HP-UX 10.20 cc.  */

#ifdef INT64_MAX
# define GL_INT64_T
#else
/* Do not undefine int64_t if gnulib is not being used with 64-bit
   types, since otherwise it breaks platforms like Tandem/NSK.  */
# if LONG_MAX >> 31 >> 31 == 1
#  undef int64_t
typedef long int gl_int64_t;
#  define int64_t gl_int64_t
#  define GL_INT64_T
# elif defined _MSC_VER
#  undef int64_t
typedef __int64 gl_int64_t;
#  define int64_t gl_int64_t
#  define GL_INT64_T
# elif @HAVE_LONG_LONG_INT@
#  undef int64_t
typedef long long int gl_int64_t;
#  define int64_t gl_int64_t
#  define GL_INT64_T
# endif
#endif

#ifdef UINT64_MAX
# define GL_UINT64_T
#else
# if ULONG_MAX >> 31 >> 31 >> 1 == 1
#  undef uint64_t
typedef unsigned long int gl_uint64_t;
#  define uint64_t gl_uint64_t
#  define GL_UINT64_T
# elif defined _MSC_VER
#  undef uint64_t
typedef unsigned __int64 gl_uint64_t;
#  define uint64_t gl_uint64_t
#  define GL_UINT64_T
# elif @HAVE_UNSIGNED_LONG_LONG_INT@
#  undef uint64_t
typedef unsigned long long int gl_uint64_t;
#  define uint64_t gl_uint64_t
#  define GL_UINT64_T
# endif
#endif

/* Avoid collision with Solaris 2.5.1 <pthread.h> etc.  */
#define _UINT8_T
#define _UINT32_T
#define _UINT64_T


/* 7.18.1.2. Minimum-width integer types */

/* Here we assume a standard architecture where the hardware integer
   types have 8, 16, 32, optionally 64 bits. Therefore the leastN_t types
   are the same as the corresponding N_t types.  */

#undef int_least8_t
#undef uint_least8_t
#undef int_least16_t
#undef uint_least16_t
#undef int_least32_t
#undef uint_least32_t
#undef int_least64_t
#undef uint_least64_t
#define int_least8_t int8_t
#define uint_least8_t uint8_t
#define int_least16_t int16_t
#define uint_least16_t uint16_t
#define int_least32_t int32_t
#define uint_least32_t uint32_t
#ifdef GL_INT64_T
# define int_least64_t int64_t
#endif
#ifdef GL_UINT64_T
# define uint_least64_t uint64_t
#endif

/* 7.18.1.3. Fastest minimum-width integer types */

/* Note: Other <stdint.h> substitutes may define these types differently.
   It is not recommended to use these types in public header files. */

/* Here we assume a standard architecture where the hardware integer
   types have 8, 16, 32, optionally 64 bits. Therefore the fastN_t types
   are taken from the same list of types.  The following code normally
   uses types consistent with glibc, as that lessens the chance of
   incompatibility with older GNU hosts.  */

#undef int_fast8_t
#undef uint_fast8_t
#undef int_fast16_t
#undef uint_fast16_t
#undef int_fast32_t
#undef uint_fast32_t
#undef int_fast64_t
#undef uint_fast64_t
typedef signed char gl_int_fast8_t;
typedef unsigned char gl_uint_fast8_t;

#ifdef __sun
/* Define types compatible with SunOS 5.10, so that code compiled under
   earlier SunOS versions works with code compiled under SunOS 5.10.  */
typedef int gl_int_fast32_t;
typedef unsigned int gl_uint_fast32_t;
#else
typedef long int gl_int_fast32_t;
typedef unsigned long int gl_uint_fast32_t;
#endif
typedef gl_int_fast32_t gl_int_fast16_t;
typedef gl_uint_fast32_t gl_uint_fast16_t;

#define int_fast8_t gl_int_fast8_t
#define uint_fast8_t gl_uint_fast8_t
#define int_fast16_t gl_int_fast16_t
#define uint_fast16_t gl_uint_fast16_t
#define int_fast32_t gl_int_fast32_t
#define uint_fast32_t gl_uint_fast32_t
#ifdef GL_INT64_T
# define int_fast64_t int64_t
#endif
#ifdef GL_UINT64_T
# define uint_fast64_t uint64_t
#endif

/* 7.18.1.4. Integer types capable of holding object pointers */

#undef intptr_t
#undef uintptr_t
typedef long int gl_intptr_t;
typedef unsigned long int gl_uintptr_t;
#define intptr_t gl_intptr_t
#define uintptr_t gl_uintptr_t

/* 7.18.1.5. Greatest-width integer types */

/* Note: These types are compiler dependent. It may be unwise to use them in
   public header files. */

/* If the system defines INTMAX_MAX, assume that intmax_t works, and
   similarly for UINTMAX_MAX and uintmax_t.  This avoids problems with
   assuming one type where another is used by the system.  */

#ifndef INTMAX_MAX
# undef INTMAX_C
# undef intmax_t
# if @HAVE_LONG_LONG_INT@ && LONG_MAX >> 30 == 1
typedef long long int gl_intmax_t;
#  define intmax_t gl_intmax_t
# elif defined GL_INT64_T
#  define intmax_t int64_t
# else
typedef long int gl_intmax_t;
#  define intmax_t gl_intmax_t
# endif
#endif

#ifndef UINTMAX_MAX
# undef UINTMAX_C
# undef uintmax_t
# if @HAVE_UNSIGNED_LONG_LONG_INT@ && ULONG_MAX >> 31 == 1
typedef unsigned long long int gl_uintmax_t;
#  define uintmax_t gl_uintmax_t
# elif defined GL_UINT64_T
#  define uintmax_t uint64_t
# else
typedef unsigned long int gl_uintmax_t;
#  define uintmax_t gl_uintmax_t
# endif
#endif

/* Verify that intmax_t and uintmax_t have the same size.  Too much code
   breaks if this is not the case.  If this check fails, the reason is likely
   to be found in the autoconf macros.  */
typedef int _verify_intmax_size[sizeof (intmax_t) == sizeof (uintmax_t)
                                ? 1 : -1];

#define GNULIB_defined_stdint_types 1
#endif /* !GNULIB_defined_stdint_types */

/* 7.18.2. Limits of specified-width integer types */

/* 7.18.2.1. Limits of exact-width integer types */

/* Here we assume a standard architecture where the hardware integer
   types have 8, 16, 32, optionally 64 bits.  */

#undef INT8_MIN
#undef INT8_MAX
#undef UINT8_MAX
#define INT8_MIN  (~ INT8_MAX)
#define INT8_MAX  127
#define UINT8_MAX  255

#undef INT16_MIN
#undef INT16_MAX
#undef UINT16_MAX
#define INT16_MIN  (~ INT16_MAX)
#define INT16_MAX  32767
#define UINT16_MAX  65535

#undef INT32_MIN
#undef INT32_MAX
#undef UINT32_MAX
#define INT32_MIN  (~ INT32_MAX)
#define INT32_MAX  2147483647
#define UINT32_MAX  4294967295U

#if defined GL_INT64_T && ! defined INT64_MAX
/* Prefer (- INTMAX_C (1) << 63) over (~ INT64_MAX) because SunPRO C 5.0
   evaluates the latter incorrectly in preprocessor expressions.  */
# define INT64_MIN  (- INTMAX_C (1) << 63)
# define INT64_MAX  INTMAX_C (9223372036854775807)
#endif

#if defined GL_UINT64_T && ! defined UINT64_MAX
# define UINT64_MAX  UINTMAX_C (18446744073709551615)
#endif

/* 7.18.2.2. Limits of minimum-width integer types */

/* Here we assume a standard architecture where the hardware integer
   types have 8, 16, 32, optionally 64 bits. Therefore the leastN_t types
   are the same as the corresponding N_t types.  */

#undef INT_LEAST8_MIN
#undef INT_LEAST8_MAX
#undef UINT_LEAST8_MAX
#define INT_LEAST8_MIN  INT8_MIN
#define INT_LEAST8_MAX  INT8_MAX
#define UINT_LEAST8_MAX  UINT8_MAX

#undef INT_LEAST16_MIN
#undef INT_LEAST16_MAX
#undef UINT_LEAST16_MAX
#define INT_LEAST16_MIN  INT16_MIN
#define INT_LEAST16_MAX  INT16_MAX
#define UINT_LEAST16_MAX  UINT16_MAX

#undef INT_LEAST32_MIN
#undef INT_LEAST32_MAX
#undef UINT_LEAST32_MAX
#define INT_LEAST32_MIN  INT32_MIN
#define INT_LEAST32_MAX  INT32_MAX
#define UINT_LEAST32_MAX  UINT32_MAX

#undef INT_LEAST64_MIN
#undef INT_LEAST64_MAX
#ifdef GL_INT64_T
# define INT_LEAST64_MIN  INT64_MIN
# define INT_LEAST64_MAX  INT64_MAX
#endif

#undef UINT_LEAST64_MAX
#ifdef GL_UINT64_T
# define UINT_LEAST64_MAX  UINT64_MAX
#endif

/* 7.18.2.3. Limits of fastest minimum-width integer types */

/* Here we assume a standard architecture where the hardware integer
   types have 8, 16, 32, optionally 64 bits. Therefore the fastN_t types
   are taken from the same list of types.  */

#undef INT_FAST8_MIN
#undef INT_FAST8_MAX
#undef UINT_FAST8_MAX
#define INT_FAST8_MIN  SCHAR_MIN
#define INT_FAST8_MAX  SCHAR_MAX
#define UINT_FAST8_MAX  UCHAR_MAX

#undef INT_FAST16_MIN
#undef INT_FAST16_MAX
#undef UINT_FAST16_MAX
#define INT_FAST16_MIN  INT_FAST32_MIN
#define INT_FAST16_MAX  INT_FAST32_MAX
#define UINT_FAST16_MAX  UINT_FAST32_MAX

#undef INT_FAST32_MIN
#undef INT_FAST32_MAX
#undef UINT_FAST32_MAX
#ifdef __sun
# define INT_FAST32_MIN  INT_MIN
# define INT_FAST32_MAX  INT_MAX
# define UINT_FAST32_MAX  UINT_MAX
#else
# define INT_FAST32_MIN  LONG_MIN
# define INT_FAST32_MAX  LONG_MAX
# define UINT_FAST32_MAX  ULONG_MAX
#endif

#undef INT_FAST64_MIN
#undef INT_FAST64_MAX
#ifdef GL_INT64_T
# define INT_FAST64_MIN  INT64_MIN
# define INT_FAST64_MAX  INT64_MAX
#endif

#undef UINT_FAST64_MAX
#ifdef GL_UINT64_T
# define UINT_FAST64_MAX  UINT64_MAX
#endif

/* 7.18.2.4. Limits of integer types capable of holding object pointers */

#undef INTPTR_MIN
#undef INTPTR_MAX
#undef UINTPTR_MAX
#define INTPTR_MIN  LONG_MIN
#define INTPTR_MAX  LONG_MAX
#define UINTPTR_MAX  ULONG_MAX

/* 7.18.2.5. Limits of greatest-width integer types */

#ifndef INTMAX_MAX
# undef INTMAX_MIN
# ifdef INT64_MAX
#  define INTMAX_MIN  INT64_MIN
#  define INTMAX_MAX  INT64_MAX
# else
#  define INTMAX_MIN  INT32_MIN
#  define INTMAX_MAX  INT32_MAX
# endif
#endif

#ifndef UINTMAX_MAX
# ifdef UINT64_MAX
#  define UINTMAX_MAX  UINT64_MAX
# else
#  define UINTMAX_MAX  UINT32_MAX
# endif
#endif

/* 7.18.3. Limits of other integer types */

/* ptrdiff_t limits */
#undef PTRDIFF_MIN
#undef PTRDIFF_MAX
#if @APPLE_UNIVERSAL_BUILD@
# ifdef _LP64
#  define PTRDIFF_MIN  _STDINT_MIN (1, 64, 0l)
#  define PTRDIFF_MAX  _STDINT_MAX (1, 64, 0l)
# else
#  define PTRDIFF_MIN  _STDINT_MIN (1, 32, 0)
#  define PTRDIFF_MAX  _STDINT_MAX (1, 32, 0)
# endif
#else
# define PTRDIFF_MIN  \
    _STDINT_MIN (1, @BITSIZEOF_PTRDIFF_T@, 0@PTRDIFF_T_SUFFIX@)
# define PTRDIFF_MAX  \
    _STDINT_MAX (1, @BITSIZEOF_PTRDIFF_T@, 0@PTRDIFF_T_SUFFIX@)
#endif

/* sig_atomic_t limits */
#undef SIG_ATOMIC_MIN
#undef SIG_ATOMIC_MAX
#define SIG_ATOMIC_MIN  \
   _STDINT_MIN (@HAVE_SIGNED_SIG_ATOMIC_T@, @BITSIZEOF_SIG_ATOMIC_T@, \
                0@SIG_ATOMIC_T_SUFFIX@)
#define SIG_ATOMIC_MAX  \
   _STDINT_MAX (@HAVE_SIGNED_SIG_ATOMIC_T@, @BITSIZEOF_SIG_ATOMIC_T@, \
                0@SIG_ATOMIC_T_SUFFIX@)


/* size_t limit */
#undef SIZE_MAX
#if @APPLE_UNIVERSAL_BUILD@
# ifdef _LP64
#  define SIZE_MAX  _STDINT_MAX (0, 64, 0ul)
# else
#  define SIZE_MAX  _STDINT_MAX (0, 32, 0ul)
# endif
#else
# define SIZE_MAX  _STDINT_MAX (0, @BITSIZEOF_SIZE_T@, 0@SIZE_T_SUFFIX@)
#endif

/* wchar_t limits */
/* Get WCHAR_MIN, WCHAR_MAX.
   This include is not on the top, above, because on OSF/1 4.0 we have a
   sequence of nested includes
   <wchar.h> -> <stdio.h> -> <getopt.h> -> <stdlib.h>, and the latter includes
   <stdint.h> and assumes its types are already defined.  */
#if @HAVE_WCHAR_H@ && ! (defined WCHAR_MIN && defined WCHAR_MAX)
  /* BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
     included before <wchar.h>.  */
# include <stddef.h>
# include <stdio.h>
# include <time.h>
# define _GL_JUST_INCLUDE_SYSTEM_WCHAR_H
# include <wchar.h>
# undef _GL_JUST_INCLUDE_SYSTEM_WCHAR_H
#endif
#undef WCHAR_MIN
#undef WCHAR_MAX
#define WCHAR_MIN  \
   _STDINT_MIN (@HAVE_SIGNED_WCHAR_T@, @BITSIZEOF_WCHAR_T@, 0@WCHAR_T_SUFFIX@)
#define WCHAR_MAX  \
   _STDINT_MAX (@HAVE_SIGNED_WCHAR_T@, @BITSIZEOF_WCHAR_T@, 0@WCHAR_T_SUFFIX@)

/* wint_t limits */
#undef WINT_MIN
#undef WINT_MAX
#define WINT_MIN  \
   _STDINT_MIN (@HAVE_SIGNED_WINT_T@, @BITSIZEOF_WINT_T@, 0@WINT_T_SUFFIX@)
#define WINT_MAX  \
   _STDINT_MAX (@HAVE_SIGNED_WINT_T@, @BITSIZEOF_WINT_T@, 0@WINT_T_SUFFIX@)

/* 7.18.4. Macros for integer constants */

/* 7.18.4.1. Macros for minimum-width integer constants */
/* According to ISO C 99 Technical Corrigendum 1 */

/* Here we assume a standard architecture where the hardware integer
   types have 8, 16, 32, optionally 64 bits, and int is 32 bits.  */

#undef INT8_C
#undef UINT8_C
#define INT8_C(x) x
#define UINT8_C(x) x

#undef INT16_C
#undef UINT16_C
#define INT16_C(x) x
#define UINT16_C(x) x

#undef INT32_C
#undef UINT32_C
#define INT32_C(x) x
#define UINT32_C(x) x ## U

#undef INT64_C
#undef UINT64_C
#if LONG_MAX >> 31 >> 31 == 1
# define INT64_C(x) x##L
#elif defined _MSC_VER
# define INT64_C(x) x##i64
#elif @HAVE_LONG_LONG_INT@
# define INT64_C(x) x##LL
#endif
#if ULONG_MAX >> 31 >> 31 >> 1 == 1
# define UINT64_C(x) x##UL
#elif defined _MSC_VER
# define UINT64_C(x) x##ui64
#elif @HAVE_UNSIGNED_LONG_LONG_INT@
# define UINT64_C(x) x##ULL
#endif

/* 7.18.4.2. Macros for greatest-width integer constants */

#ifndef INTMAX_C
# if @HAVE_LONG_LONG_INT@ && LONG_MAX >> 30 == 1
#  define INTMAX_C(x)   x##LL
# elif defined GL_INT64_T
#  define INTMAX_C(x)   INT64_C(x)
# else
#  define INTMAX_C(x)   x##L
# endif
#endif

#ifndef UINTMAX_C
# if @HAVE_UNSIGNED_LONG_LONG_INT@ && ULONG_MAX >> 31 == 1
#  define UINTMAX_C(x)  x##ULL
# elif defined GL_UINT64_T
#  define UINTMAX_C(x)  UINT64_C(x)
# else
#  define UINTMAX_C(x)  x##UL
# endif
#endif

#endif /* _@GUARD_PREFIX@_STDINT_H */
#endif /* !(defined __ANDROID__ && ...) */
#endif /* !defined _@GUARD_PREFIX@_STDINT_H && !defined _GL_JUST_INCLUDE_SYSTEM_STDINT_H */
