/* Copyright (C) 2006-2015 Free Software Foundation, Inc.
   Written by Paul Eggert, Bruno Haible, Derek Price.
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

/*
 * ISO C 99 <inttypes.h> for platforms that lack it.
 * <http://www.opengroup.org/susv3xbd/inttypes.h.html>
 */

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

/* Include the original <inttypes.h> if it exists, and if this file
   has not been included yet or if this file includes gnulib stdint.h
   which in turn includes this file.
   The include_next requires a split double-inclusion guard.  */
#if ! defined INTTYPES_H || defined _GL_JUST_INCLUDE_SYSTEM_INTTYPES_H
# if @HAVE_INTTYPES_H@

   /* Some pre-C++11 <stdint.h> implementations need this.  */
#  if defined __cplusplus && ! defined __STDC_FORMAT_MACROS
#   define __STDC_FORMAT_MACROS 1
#  endif

#  @INCLUDE_NEXT@ @NEXT_INTTYPES_H@
# endif
#endif

#if ! defined INTTYPES_H && ! defined _GL_JUST_INCLUDE_SYSTEM_INTTYPES_H
#define INTTYPES_H

/* Include <stdint.h> or the gnulib replacement.
   But avoid namespace pollution on glibc systems.  */
#ifndef __GLIBC__
# include <stdint.h>
#endif
/* Get CHAR_BIT.  */
#include <limits.h>

#if !(INT_MIN == INT32_MIN && INT_MAX == INT32_MAX)
# error "This file assumes that 'int' has exactly 32 bits. Please report your platform and compiler to <bug-gnulib@gnu.org>."
#endif

/* The definitions of _GL_FUNCDECL_RPL etc. are copied here.  */

/* The definition of _GL_ARG_NONNULL is copied here.  */

/* The definition of _GL_WARN_ON_USE is copied here.  */

/* 7.8.1 Macros for format specifiers */

#if defined _TNS_R_TARGET
   /* Tandem NonStop R series and compatible platforms released before
      July 2005 support %Ld but not %lld.  */
# define _LONG_LONG_FORMAT_PREFIX "L"
#else
# define _LONG_LONG_FORMAT_PREFIX "ll"
#endif

#if !defined PRId8 || @PRI_MACROS_BROKEN@
# undef PRId8
# ifdef INT8_MAX
#  define PRId8 "d"
# endif
#endif
#if !defined PRIi8 || @PRI_MACROS_BROKEN@
# undef PRIi8
# ifdef INT8_MAX
#  define PRIi8 "i"
# endif
#endif
#if !defined PRIo8 || @PRI_MACROS_BROKEN@
# undef PRIo8
# ifdef UINT8_MAX
#  define PRIo8 "o"
# endif
#endif
#if !defined PRIu8 || @PRI_MACROS_BROKEN@
# undef PRIu8
# ifdef UINT8_MAX
#  define PRIu8 "u"
# endif
#endif
#if !defined PRIx8 || @PRI_MACROS_BROKEN@
# undef PRIx8
# ifdef UINT8_MAX
#  define PRIx8 "x"
# endif
#endif
#if !defined PRIX8 || @PRI_MACROS_BROKEN@
# undef PRIX8
# ifdef UINT8_MAX
#  define PRIX8 "X"
# endif
#endif
#if !defined PRId16 || @PRI_MACROS_BROKEN@
# undef PRId16
# ifdef INT16_MAX
#  define PRId16 "d"
# endif
#endif
#if !defined PRIi16 || @PRI_MACROS_BROKEN@
# undef PRIi16
# ifdef INT16_MAX
#  define PRIi16 "i"
# endif
#endif
#if !defined PRIo16 || @PRI_MACROS_BROKEN@
# undef PRIo16
# ifdef UINT16_MAX
#  define PRIo16 "o"
# endif
#endif
#if !defined PRIu16 || @PRI_MACROS_BROKEN@
# undef PRIu16
# ifdef UINT16_MAX
#  define PRIu16 "u"
# endif
#endif
#if !defined PRIx16 || @PRI_MACROS_BROKEN@
# undef PRIx16
# ifdef UINT16_MAX
#  define PRIx16 "x"
# endif
#endif
#if !defined PRIX16 || @PRI_MACROS_BROKEN@
# undef PRIX16
# ifdef UINT16_MAX
#  define PRIX16 "X"
# endif
#endif
#if !defined PRId32 || @PRI_MACROS_BROKEN@
# undef PRId32
# ifdef INT32_MAX
#  define PRId32 "d"
# endif
#endif
#if !defined PRIi32 || @PRI_MACROS_BROKEN@
# undef PRIi32
# ifdef INT32_MAX
#  define PRIi32 "i"
# endif
#endif
#if !defined PRIo32 || @PRI_MACROS_BROKEN@
# undef PRIo32
# ifdef UINT32_MAX
#  define PRIo32 "o"
# endif
#endif
#if !defined PRIu32 || @PRI_MACROS_BROKEN@
# undef PRIu32
# ifdef UINT32_MAX
#  define PRIu32 "u"
# endif
#endif
#if !defined PRIx32 || @PRI_MACROS_BROKEN@
# undef PRIx32
# ifdef UINT32_MAX
#  define PRIx32 "x"
# endif
#endif
#if !defined PRIX32 || @PRI_MACROS_BROKEN@
# undef PRIX32
# ifdef UINT32_MAX
#  define PRIX32 "X"
# endif
#endif
#ifdef INT64_MAX
# if (@APPLE_UNIVERSAL_BUILD@ ? defined _LP64 : @INT64_MAX_EQ_LONG_MAX@)
#  define _PRI64_PREFIX "l"
# elif defined _MSC_VER || defined __MINGW32__
#  define _PRI64_PREFIX "I64"
# elif @HAVE_LONG_LONG_INT@ && LONG_MAX >> 30 == 1
#  define _PRI64_PREFIX _LONG_LONG_FORMAT_PREFIX
# endif
# if !defined PRId64 || @PRI_MACROS_BROKEN@
#  undef PRId64
#  define PRId64 _PRI64_PREFIX "d"
# endif
# if !defined PRIi64 || @PRI_MACROS_BROKEN@
#  undef PRIi64
#  define PRIi64 _PRI64_PREFIX "i"
# endif
#endif
#ifdef UINT64_MAX
# if (@APPLE_UNIVERSAL_BUILD@ ? defined _LP64 : @UINT64_MAX_EQ_ULONG_MAX@)
#  define _PRIu64_PREFIX "l"
# elif defined _MSC_VER || defined __MINGW32__
#  define _PRIu64_PREFIX "I64"
# elif @HAVE_UNSIGNED_LONG_LONG_INT@ && ULONG_MAX >> 31 == 1
#  define _PRIu64_PREFIX _LONG_LONG_FORMAT_PREFIX
# endif
# if !defined PRIo64 || @PRI_MACROS_BROKEN@
#  undef PRIo64
#  define PRIo64 _PRIu64_PREFIX "o"
# endif
# if !defined PRIu64 || @PRI_MACROS_BROKEN@
#  undef PRIu64
#  define PRIu64 _PRIu64_PREFIX "u"
# endif
# if !defined PRIx64 || @PRI_MACROS_BROKEN@
#  undef PRIx64
#  define PRIx64 _PRIu64_PREFIX "x"
# endif
# if !defined PRIX64 || @PRI_MACROS_BROKEN@
#  undef PRIX64
#  define PRIX64 _PRIu64_PREFIX "X"
# endif
#endif

#if !defined PRIdLEAST8 || @PRI_MACROS_BROKEN@
# undef PRIdLEAST8
# define PRIdLEAST8 "d"
#endif
#if !defined PRIiLEAST8 || @PRI_MACROS_BROKEN@
# undef PRIiLEAST8
# define PRIiLEAST8 "i"
#endif
#if !defined PRIoLEAST8 || @PRI_MACROS_BROKEN@
# undef PRIoLEAST8
# define PRIoLEAST8 "o"
#endif
#if !defined PRIuLEAST8 || @PRI_MACROS_BROKEN@
# undef PRIuLEAST8
# define PRIuLEAST8 "u"
#endif
#if !defined PRIxLEAST8 || @PRI_MACROS_BROKEN@
# undef PRIxLEAST8
# define PRIxLEAST8 "x"
#endif
#if !defined PRIXLEAST8 || @PRI_MACROS_BROKEN@
# undef PRIXLEAST8
# define PRIXLEAST8 "X"
#endif
#if !defined PRIdLEAST16 || @PRI_MACROS_BROKEN@
# undef PRIdLEAST16
# define PRIdLEAST16 "d"
#endif
#if !defined PRIiLEAST16 || @PRI_MACROS_BROKEN@
# undef PRIiLEAST16
# define PRIiLEAST16 "i"
#endif
#if !defined PRIoLEAST16 || @PRI_MACROS_BROKEN@
# undef PRIoLEAST16
# define PRIoLEAST16 "o"
#endif
#if !defined PRIuLEAST16 || @PRI_MACROS_BROKEN@
# undef PRIuLEAST16
# define PRIuLEAST16 "u"
#endif
#if !defined PRIxLEAST16 || @PRI_MACROS_BROKEN@
# undef PRIxLEAST16
# define PRIxLEAST16 "x"
#endif
#if !defined PRIXLEAST16 || @PRI_MACROS_BROKEN@
# undef PRIXLEAST16
# define PRIXLEAST16 "X"
#endif
#if !defined PRIdLEAST32 || @PRI_MACROS_BROKEN@
# undef PRIdLEAST32
# define PRIdLEAST32 "d"
#endif
#if !defined PRIiLEAST32 || @PRI_MACROS_BROKEN@
# undef PRIiLEAST32
# define PRIiLEAST32 "i"
#endif
#if !defined PRIoLEAST32 || @PRI_MACROS_BROKEN@
# undef PRIoLEAST32
# define PRIoLEAST32 "o"
#endif
#if !defined PRIuLEAST32 || @PRI_MACROS_BROKEN@
# undef PRIuLEAST32
# define PRIuLEAST32 "u"
#endif
#if !defined PRIxLEAST32 || @PRI_MACROS_BROKEN@
# undef PRIxLEAST32
# define PRIxLEAST32 "x"
#endif
#if !defined PRIXLEAST32 || @PRI_MACROS_BROKEN@
# undef PRIXLEAST32
# define PRIXLEAST32 "X"
#endif
#ifdef INT64_MAX
# if !defined PRIdLEAST64 || @PRI_MACROS_BROKEN@
#  undef PRIdLEAST64
#  define PRIdLEAST64 PRId64
# endif
# if !defined PRIiLEAST64 || @PRI_MACROS_BROKEN@
#  undef PRIiLEAST64
#  define PRIiLEAST64 PRIi64
# endif
#endif
#ifdef UINT64_MAX
# if !defined PRIoLEAST64 || @PRI_MACROS_BROKEN@
#  undef PRIoLEAST64
#  define PRIoLEAST64 PRIo64
# endif
# if !defined PRIuLEAST64 || @PRI_MACROS_BROKEN@
#  undef PRIuLEAST64
#  define PRIuLEAST64 PRIu64
# endif
# if !defined PRIxLEAST64 || @PRI_MACROS_BROKEN@
#  undef PRIxLEAST64
#  define PRIxLEAST64 PRIx64
# endif
# if !defined PRIXLEAST64 || @PRI_MACROS_BROKEN@
#  undef PRIXLEAST64
#  define PRIXLEAST64 PRIX64
# endif
#endif

#if !defined PRIdFAST8 || @PRI_MACROS_BROKEN@
# undef PRIdFAST8
# if INT_FAST8_MAX > INT32_MAX
#  define PRIdFAST8 PRId64
# else
#  define PRIdFAST8 "d"
# endif
#endif
#if !defined PRIiFAST8 || @PRI_MACROS_BROKEN@
# undef PRIiFAST8
# if INT_FAST8_MAX > INT32_MAX
#  define PRIiFAST8 PRIi64
# else
#  define PRIiFAST8 "i"
# endif
#endif
#if !defined PRIoFAST8 || @PRI_MACROS_BROKEN@
# undef PRIoFAST8
# if UINT_FAST8_MAX > UINT32_MAX
#  define PRIoFAST8 PRIo64
# else
#  define PRIoFAST8 "o"
# endif
#endif
#if !defined PRIuFAST8 || @PRI_MACROS_BROKEN@
# undef PRIuFAST8
# if UINT_FAST8_MAX > UINT32_MAX
#  define PRIuFAST8 PRIu64
# else
#  define PRIuFAST8 "u"
# endif
#endif
#if !defined PRIxFAST8 || @PRI_MACROS_BROKEN@
# undef PRIxFAST8
# if UINT_FAST8_MAX > UINT32_MAX
#  define PRIxFAST8 PRIx64
# else
#  define PRIxFAST8 "x"
# endif
#endif
#if !defined PRIXFAST8 || @PRI_MACROS_BROKEN@
# undef PRIXFAST8
# if UINT_FAST8_MAX > UINT32_MAX
#  define PRIXFAST8 PRIX64
# else
#  define PRIXFAST8 "X"
# endif
#endif
#if !defined PRIdFAST16 || @PRI_MACROS_BROKEN@
# undef PRIdFAST16
# if INT_FAST16_MAX > INT32_MAX
#  define PRIdFAST16 PRId64
# else
#  define PRIdFAST16 "d"
# endif
#endif
#if !defined PRIiFAST16 || @PRI_MACROS_BROKEN@
# undef PRIiFAST16
# if INT_FAST16_MAX > INT32_MAX
#  define PRIiFAST16 PRIi64
# else
#  define PRIiFAST16 "i"
# endif
#endif
#if !defined PRIoFAST16 || @PRI_MACROS_BROKEN@
# undef PRIoFAST16
# if UINT_FAST16_MAX > UINT32_MAX
#  define PRIoFAST16 PRIo64
# else
#  define PRIoFAST16 "o"
# endif
#endif
#if !defined PRIuFAST16 || @PRI_MACROS_BROKEN@
# undef PRIuFAST16
# if UINT_FAST16_MAX > UINT32_MAX
#  define PRIuFAST16 PRIu64
# else
#  define PRIuFAST16 "u"
# endif
#endif
#if !defined PRIxFAST16 || @PRI_MACROS_BROKEN@
# undef PRIxFAST16
# if UINT_FAST16_MAX > UINT32_MAX
#  define PRIxFAST16 PRIx64
# else
#  define PRIxFAST16 "x"
# endif
#endif
#if !defined PRIXFAST16 || @PRI_MACROS_BROKEN@
# undef PRIXFAST16
# if UINT_FAST16_MAX > UINT32_MAX
#  define PRIXFAST16 PRIX64
# else
#  define PRIXFAST16 "X"
# endif
#endif
#if !defined PRIdFAST32 || @PRI_MACROS_BROKEN@
# undef PRIdFAST32
# if INT_FAST32_MAX > INT32_MAX
#  define PRIdFAST32 PRId64
# else
#  define PRIdFAST32 "d"
# endif
#endif
#if !defined PRIiFAST32 || @PRI_MACROS_BROKEN@
# undef PRIiFAST32
# if INT_FAST32_MAX > INT32_MAX
#  define PRIiFAST32 PRIi64
# else
#  define PRIiFAST32 "i"
# endif
#endif
#if !defined PRIoFAST32 || @PRI_MACROS_BROKEN@
# undef PRIoFAST32
# if UINT_FAST32_MAX > UINT32_MAX
#  define PRIoFAST32 PRIo64
# else
#  define PRIoFAST32 "o"
# endif
#endif
#if !defined PRIuFAST32 || @PRI_MACROS_BROKEN@
# undef PRIuFAST32
# if UINT_FAST32_MAX > UINT32_MAX
#  define PRIuFAST32 PRIu64
# else
#  define PRIuFAST32 "u"
# endif
#endif
#if !defined PRIxFAST32 || @PRI_MACROS_BROKEN@
# undef PRIxFAST32
# if UINT_FAST32_MAX > UINT32_MAX
#  define PRIxFAST32 PRIx64
# else
#  define PRIxFAST32 "x"
# endif
#endif
#if !defined PRIXFAST32 || @PRI_MACROS_BROKEN@
# undef PRIXFAST32
# if UINT_FAST32_MAX > UINT32_MAX
#  define PRIXFAST32 PRIX64
# else
#  define PRIXFAST32 "X"
# endif
#endif
#ifdef INT64_MAX
# if !defined PRIdFAST64 || @PRI_MACROS_BROKEN@
#  undef PRIdFAST64
#  define PRIdFAST64 PRId64
# endif
# if !defined PRIiFAST64 || @PRI_MACROS_BROKEN@
#  undef PRIiFAST64
#  define PRIiFAST64 PRIi64
# endif
#endif
#ifdef UINT64_MAX
# if !defined PRIoFAST64 || @PRI_MACROS_BROKEN@
#  undef PRIoFAST64
#  define PRIoFAST64 PRIo64
# endif
# if !defined PRIuFAST64 || @PRI_MACROS_BROKEN@
#  undef PRIuFAST64
#  define PRIuFAST64 PRIu64
# endif
# if !defined PRIxFAST64 || @PRI_MACROS_BROKEN@
#  undef PRIxFAST64
#  define PRIxFAST64 PRIx64
# endif
# if !defined PRIXFAST64 || @PRI_MACROS_BROKEN@
#  undef PRIXFAST64
#  define PRIXFAST64 PRIX64
# endif
#endif

#if !defined PRIdMAX || @PRI_MACROS_BROKEN@
# undef PRIdMAX
# if @INT32_MAX_LT_INTMAX_MAX@
#  define PRIdMAX PRId64
# else
#  define PRIdMAX "ld"
# endif
#endif
#if !defined PRIiMAX || @PRI_MACROS_BROKEN@
# undef PRIiMAX
# if @INT32_MAX_LT_INTMAX_MAX@
#  define PRIiMAX PRIi64
# else
#  define PRIiMAX "li"
# endif
#endif
#if !defined PRIoMAX || @PRI_MACROS_BROKEN@
# undef PRIoMAX
# if @UINT32_MAX_LT_UINTMAX_MAX@
#  define PRIoMAX PRIo64
# else
#  define PRIoMAX "lo"
# endif
#endif
#if !defined PRIuMAX || @PRI_MACROS_BROKEN@
# undef PRIuMAX
# if @UINT32_MAX_LT_UINTMAX_MAX@
#  define PRIuMAX PRIu64
# else
#  define PRIuMAX "lu"
# endif
#endif
#if !defined PRIxMAX || @PRI_MACROS_BROKEN@
# undef PRIxMAX
# if @UINT32_MAX_LT_UINTMAX_MAX@
#  define PRIxMAX PRIx64
# else
#  define PRIxMAX "lx"
# endif
#endif
#if !defined PRIXMAX || @PRI_MACROS_BROKEN@
# undef PRIXMAX
# if @UINT32_MAX_LT_UINTMAX_MAX@
#  define PRIXMAX PRIX64
# else
#  define PRIXMAX "lX"
# endif
#endif

#if !defined PRIdPTR || @PRI_MACROS_BROKEN@
# undef PRIdPTR
# ifdef INTPTR_MAX
#  define PRIdPTR @PRIPTR_PREFIX@ "d"
# endif
#endif
#if !defined PRIiPTR || @PRI_MACROS_BROKEN@
# undef PRIiPTR
# ifdef INTPTR_MAX
#  define PRIiPTR @PRIPTR_PREFIX@ "i"
# endif
#endif
#if !defined PRIoPTR || @PRI_MACROS_BROKEN@
# undef PRIoPTR
# ifdef UINTPTR_MAX
#  define PRIoPTR @PRIPTR_PREFIX@ "o"
# endif
#endif
#if !defined PRIuPTR || @PRI_MACROS_BROKEN@
# undef PRIuPTR
# ifdef UINTPTR_MAX
#  define PRIuPTR @PRIPTR_PREFIX@ "u"
# endif
#endif
#if !defined PRIxPTR || @PRI_MACROS_BROKEN@
# undef PRIxPTR
# ifdef UINTPTR_MAX
#  define PRIxPTR @PRIPTR_PREFIX@ "x"
# endif
#endif
#if !defined PRIXPTR || @PRI_MACROS_BROKEN@
# undef PRIXPTR
# ifdef UINTPTR_MAX
#  define PRIXPTR @PRIPTR_PREFIX@ "X"
# endif
#endif

#if !defined SCNd8 || @PRI_MACROS_BROKEN@
# undef SCNd8
# ifdef INT8_MAX
#  define SCNd8 "hhd"
# endif
#endif
#if !defined SCNi8 || @PRI_MACROS_BROKEN@
# undef SCNi8
# ifdef INT8_MAX
#  define SCNi8 "hhi"
# endif
#endif
#if !defined SCNo8 || @PRI_MACROS_BROKEN@
# undef SCNo8
# ifdef UINT8_MAX
#  define SCNo8 "hho"
# endif
#endif
#if !defined SCNu8 || @PRI_MACROS_BROKEN@
# undef SCNu8
# ifdef UINT8_MAX
#  define SCNu8 "hhu"
# endif
#endif
#if !defined SCNx8 || @PRI_MACROS_BROKEN@
# undef SCNx8
# ifdef UINT8_MAX
#  define SCNx8 "hhx"
# endif
#endif
#if !defined SCNd16 || @PRI_MACROS_BROKEN@
# undef SCNd16
# ifdef INT16_MAX
#  define SCNd16 "hd"
# endif
#endif
#if !defined SCNi16 || @PRI_MACROS_BROKEN@
# undef SCNi16
# ifdef INT16_MAX
#  define SCNi16 "hi"
# endif
#endif
#if !defined SCNo16 || @PRI_MACROS_BROKEN@
# undef SCNo16
# ifdef UINT16_MAX
#  define SCNo16 "ho"
# endif
#endif
#if !defined SCNu16 || @PRI_MACROS_BROKEN@
# undef SCNu16
# ifdef UINT16_MAX
#  define SCNu16 "hu"
# endif
#endif
#if !defined SCNx16 || @PRI_MACROS_BROKEN@
# undef SCNx16
# ifdef UINT16_MAX
#  define SCNx16 "hx"
# endif
#endif
#if !defined SCNd32 || @PRI_MACROS_BROKEN@
# undef SCNd32
# ifdef INT32_MAX
#  define SCNd32 "d"
# endif
#endif
#if !defined SCNi32 || @PRI_MACROS_BROKEN@
# undef SCNi32
# ifdef INT32_MAX
#  define SCNi32 "i"
# endif
#endif
#if !defined SCNo32 || @PRI_MACROS_BROKEN@
# undef SCNo32
# ifdef UINT32_MAX
#  define SCNo32 "o"
# endif
#endif
#if !defined SCNu32 || @PRI_MACROS_BROKEN@
# undef SCNu32
# ifdef UINT32_MAX
#  define SCNu32 "u"
# endif
#endif
#if !defined SCNx32 || @PRI_MACROS_BROKEN@
# undef SCNx32
# ifdef UINT32_MAX
#  define SCNx32 "x"
# endif
#endif
#ifdef INT64_MAX
# if (@APPLE_UNIVERSAL_BUILD@ ? defined _LP64 : @INT64_MAX_EQ_LONG_MAX@)
#  define _SCN64_PREFIX "l"
# elif defined _MSC_VER || defined __MINGW32__
#  define _SCN64_PREFIX "I64"
# elif @HAVE_LONG_LONG_INT@ && LONG_MAX >> 30 == 1
#  define _SCN64_PREFIX _LONG_LONG_FORMAT_PREFIX
# endif
# if !defined SCNd64 || @PRI_MACROS_BROKEN@
#  undef SCNd64
#  define SCNd64 _SCN64_PREFIX "d"
# endif
# if !defined SCNi64 || @PRI_MACROS_BROKEN@
#  undef SCNi64
#  define SCNi64 _SCN64_PREFIX "i"
# endif
#endif
#ifdef UINT64_MAX
# if (@APPLE_UNIVERSAL_BUILD@ ? defined _LP64 : @UINT64_MAX_EQ_ULONG_MAX@)
#  define _SCNu64_PREFIX "l"
# elif defined _MSC_VER || defined __MINGW32__
#  define _SCNu64_PREFIX "I64"
# elif @HAVE_UNSIGNED_LONG_LONG_INT@ && ULONG_MAX >> 31 == 1
#  define _SCNu64_PREFIX _LONG_LONG_FORMAT_PREFIX
# endif
# if !defined SCNo64 || @PRI_MACROS_BROKEN@
#  undef SCNo64
#  define SCNo64 _SCNu64_PREFIX "o"
# endif
# if !defined SCNu64 || @PRI_MACROS_BROKEN@
#  undef SCNu64
#  define SCNu64 _SCNu64_PREFIX "u"
# endif
# if !defined SCNx64 || @PRI_MACROS_BROKEN@
#  undef SCNx64
#  define SCNx64 _SCNu64_PREFIX "x"
# endif
#endif

#if !defined SCNdLEAST8 || @PRI_MACROS_BROKEN@
# undef SCNdLEAST8
# define SCNdLEAST8 "hhd"
#endif
#if !defined SCNiLEAST8 || @PRI_MACROS_BROKEN@
# undef SCNiLEAST8
# define SCNiLEAST8 "hhi"
#endif
#if !defined SCNoLEAST8 || @PRI_MACROS_BROKEN@
# undef SCNoLEAST8
# define SCNoLEAST8 "hho"
#endif
#if !defined SCNuLEAST8 || @PRI_MACROS_BROKEN@
# undef SCNuLEAST8
# define SCNuLEAST8 "hhu"
#endif
#if !defined SCNxLEAST8 || @PRI_MACROS_BROKEN@
# undef SCNxLEAST8
# define SCNxLEAST8 "hhx"
#endif
#if !defined SCNdLEAST16 || @PRI_MACROS_BROKEN@
# undef SCNdLEAST16
# define SCNdLEAST16 "hd"
#endif
#if !defined SCNiLEAST16 || @PRI_MACROS_BROKEN@
# undef SCNiLEAST16
# define SCNiLEAST16 "hi"
#endif
#if !defined SCNoLEAST16 || @PRI_MACROS_BROKEN@
# undef SCNoLEAST16
# define SCNoLEAST16 "ho"
#endif
#if !defined SCNuLEAST16 || @PRI_MACROS_BROKEN@
# undef SCNuLEAST16
# define SCNuLEAST16 "hu"
#endif
#if !defined SCNxLEAST16 || @PRI_MACROS_BROKEN@
# undef SCNxLEAST16
# define SCNxLEAST16 "hx"
#endif
#if !defined SCNdLEAST32 || @PRI_MACROS_BROKEN@
# undef SCNdLEAST32
# define SCNdLEAST32 "d"
#endif
#if !defined SCNiLEAST32 || @PRI_MACROS_BROKEN@
# undef SCNiLEAST32
# define SCNiLEAST32 "i"
#endif
#if !defined SCNoLEAST32 || @PRI_MACROS_BROKEN@
# undef SCNoLEAST32
# define SCNoLEAST32 "o"
#endif
#if !defined SCNuLEAST32 || @PRI_MACROS_BROKEN@
# undef SCNuLEAST32
# define SCNuLEAST32 "u"
#endif
#if !defined SCNxLEAST32 || @PRI_MACROS_BROKEN@
# undef SCNxLEAST32
# define SCNxLEAST32 "x"
#endif
#ifdef INT64_MAX
# if !defined SCNdLEAST64 || @PRI_MACROS_BROKEN@
#  undef SCNdLEAST64
#  define SCNdLEAST64 SCNd64
# endif
# if !defined SCNiLEAST64 || @PRI_MACROS_BROKEN@
#  undef SCNiLEAST64
#  define SCNiLEAST64 SCNi64
# endif
#endif
#ifdef UINT64_MAX
# if !defined SCNoLEAST64 || @PRI_MACROS_BROKEN@
#  undef SCNoLEAST64
#  define SCNoLEAST64 SCNo64
# endif
# if !defined SCNuLEAST64 || @PRI_MACROS_BROKEN@
#  undef SCNuLEAST64
#  define SCNuLEAST64 SCNu64
# endif
# if !defined SCNxLEAST64 || @PRI_MACROS_BROKEN@
#  undef SCNxLEAST64
#  define SCNxLEAST64 SCNx64
# endif
#endif

#if !defined SCNdFAST8 || @PRI_MACROS_BROKEN@
# undef SCNdFAST8
# if INT_FAST8_MAX > INT32_MAX
#  define SCNdFAST8 SCNd64
# elif INT_FAST8_MAX == 0x7fff
#  define SCNdFAST8 "hd"
# elif INT_FAST8_MAX == 0x7f
#  define SCNdFAST8 "hhd"
# else
#  define SCNdFAST8 "d"
# endif
#endif
#if !defined SCNiFAST8 || @PRI_MACROS_BROKEN@
# undef SCNiFAST8
# if INT_FAST8_MAX > INT32_MAX
#  define SCNiFAST8 SCNi64
# elif INT_FAST8_MAX == 0x7fff
#  define SCNiFAST8 "hi"
# elif INT_FAST8_MAX == 0x7f
#  define SCNiFAST8 "hhi"
# else
#  define SCNiFAST8 "i"
# endif
#endif
#if !defined SCNoFAST8 || @PRI_MACROS_BROKEN@
# undef SCNoFAST8
# if UINT_FAST8_MAX > UINT32_MAX
#  define SCNoFAST8 SCNo64
# elif UINT_FAST8_MAX == 0xffff
#  define SCNoFAST8 "ho"
# elif UINT_FAST8_MAX == 0xff
#  define SCNoFAST8 "hho"
# else
#  define SCNoFAST8 "o"
# endif
#endif
#if !defined SCNuFAST8 || @PRI_MACROS_BROKEN@
# undef SCNuFAST8
# if UINT_FAST8_MAX > UINT32_MAX
#  define SCNuFAST8 SCNu64
# elif UINT_FAST8_MAX == 0xffff
#  define SCNuFAST8 "hu"
# elif UINT_FAST8_MAX == 0xff
#  define SCNuFAST8 "hhu"
# else
#  define SCNuFAST8 "u"
# endif
#endif
#if !defined SCNxFAST8 || @PRI_MACROS_BROKEN@
# undef SCNxFAST8
# if UINT_FAST8_MAX > UINT32_MAX
#  define SCNxFAST8 SCNx64
# elif UINT_FAST8_MAX == 0xffff
#  define SCNxFAST8 "hx"
# elif UINT_FAST8_MAX == 0xff
#  define SCNxFAST8 "hhx"
# else
#  define SCNxFAST8 "x"
# endif
#endif
#if !defined SCNdFAST16 || @PRI_MACROS_BROKEN@
# undef SCNdFAST16
# if INT_FAST16_MAX > INT32_MAX
#  define SCNdFAST16 SCNd64
# elif INT_FAST16_MAX == 0x7fff
#  define SCNdFAST16 "hd"
# else
#  define SCNdFAST16 "d"
# endif
#endif
#if !defined SCNiFAST16 || @PRI_MACROS_BROKEN@
# undef SCNiFAST16
# if INT_FAST16_MAX > INT32_MAX
#  define SCNiFAST16 SCNi64
# elif INT_FAST16_MAX == 0x7fff
#  define SCNiFAST16 "hi"
# else
#  define SCNiFAST16 "i"
# endif
#endif
#if !defined SCNoFAST16 || @PRI_MACROS_BROKEN@
# undef SCNoFAST16
# if UINT_FAST16_MAX > UINT32_MAX
#  define SCNoFAST16 SCNo64
# elif UINT_FAST16_MAX == 0xffff
#  define SCNoFAST16 "ho"
# else
#  define SCNoFAST16 "o"
# endif
#endif
#if !defined SCNuFAST16 || @PRI_MACROS_BROKEN@
# undef SCNuFAST16
# if UINT_FAST16_MAX > UINT32_MAX
#  define SCNuFAST16 SCNu64
# elif UINT_FAST16_MAX == 0xffff
#  define SCNuFAST16 "hu"
# else
#  define SCNuFAST16 "u"
# endif
#endif
#if !defined SCNxFAST16 || @PRI_MACROS_BROKEN@
# undef SCNxFAST16
# if UINT_FAST16_MAX > UINT32_MAX
#  define SCNxFAST16 SCNx64
# elif UINT_FAST16_MAX == 0xffff
#  define SCNxFAST16 "hx"
# else
#  define SCNxFAST16 "x"
# endif
#endif
#if !defined SCNdFAST32 || @PRI_MACROS_BROKEN@
# undef SCNdFAST32
# if INT_FAST32_MAX > INT32_MAX
#  define SCNdFAST32 SCNd64
# else
#  define SCNdFAST32 "d"
# endif
#endif
#if !defined SCNiFAST32 || @PRI_MACROS_BROKEN@
# undef SCNiFAST32
# if INT_FAST32_MAX > INT32_MAX
#  define SCNiFAST32 SCNi64
# else
#  define SCNiFAST32 "i"
# endif
#endif
#if !defined SCNoFAST32 || @PRI_MACROS_BROKEN@
# undef SCNoFAST32
# if UINT_FAST32_MAX > UINT32_MAX
#  define SCNoFAST32 SCNo64
# else
#  define SCNoFAST32 "o"
# endif
#endif
#if !defined SCNuFAST32 || @PRI_MACROS_BROKEN@
# undef SCNuFAST32
# if UINT_FAST32_MAX > UINT32_MAX
#  define SCNuFAST32 SCNu64
# else
#  define SCNuFAST32 "u"
# endif
#endif
#if !defined SCNxFAST32 || @PRI_MACROS_BROKEN@
# undef SCNxFAST32
# if UINT_FAST32_MAX > UINT32_MAX
#  define SCNxFAST32 SCNx64
# else
#  define SCNxFAST32 "x"
# endif
#endif
#ifdef INT64_MAX
# if !defined SCNdFAST64 || @PRI_MACROS_BROKEN@
#  undef SCNdFAST64
#  define SCNdFAST64 SCNd64
# endif
# if !defined SCNiFAST64 || @PRI_MACROS_BROKEN@
#  undef SCNiFAST64
#  define SCNiFAST64 SCNi64
# endif
#endif
#ifdef UINT64_MAX
# if !defined SCNoFAST64 || @PRI_MACROS_BROKEN@
#  undef SCNoFAST64
#  define SCNoFAST64 SCNo64
# endif
# if !defined SCNuFAST64 || @PRI_MACROS_BROKEN@
#  undef SCNuFAST64
#  define SCNuFAST64 SCNu64
# endif
# if !defined SCNxFAST64 || @PRI_MACROS_BROKEN@
#  undef SCNxFAST64
#  define SCNxFAST64 SCNx64
# endif
#endif

#if !defined SCNdMAX || @PRI_MACROS_BROKEN@
# undef SCNdMAX
# if @INT32_MAX_LT_INTMAX_MAX@
#  define SCNdMAX SCNd64
# else
#  define SCNdMAX "ld"
# endif
#endif
#if !defined SCNiMAX || @PRI_MACROS_BROKEN@
# undef SCNiMAX
# if @INT32_MAX_LT_INTMAX_MAX@
#  define SCNiMAX SCNi64
# else
#  define SCNiMAX "li"
# endif
#endif
#if !defined SCNoMAX || @PRI_MACROS_BROKEN@
# undef SCNoMAX
# if @UINT32_MAX_LT_UINTMAX_MAX@
#  define SCNoMAX SCNo64
# else
#  define SCNoMAX "lo"
# endif
#endif
#if !defined SCNuMAX || @PRI_MACROS_BROKEN@
# undef SCNuMAX
# if @UINT32_MAX_LT_UINTMAX_MAX@
#  define SCNuMAX SCNu64
# else
#  define SCNuMAX "lu"
# endif
#endif
#if !defined SCNxMAX || @PRI_MACROS_BROKEN@
# undef SCNxMAX
# if @UINT32_MAX_LT_UINTMAX_MAX@
#  define SCNxMAX SCNx64
# else
#  define SCNxMAX "lx"
# endif
#endif

#if !defined SCNdPTR || @PRI_MACROS_BROKEN@
# undef SCNdPTR
# ifdef INTPTR_MAX
#  define SCNdPTR @PRIPTR_PREFIX@ "d"
# endif
#endif
#if !defined SCNiPTR || @PRI_MACROS_BROKEN@
# undef SCNiPTR
# ifdef INTPTR_MAX
#  define SCNiPTR @PRIPTR_PREFIX@ "i"
# endif
#endif
#if !defined SCNoPTR || @PRI_MACROS_BROKEN@
# undef SCNoPTR
# ifdef UINTPTR_MAX
#  define SCNoPTR @PRIPTR_PREFIX@ "o"
# endif
#endif
#if !defined SCNuPTR || @PRI_MACROS_BROKEN@
# undef SCNuPTR
# ifdef UINTPTR_MAX
#  define SCNuPTR @PRIPTR_PREFIX@ "u"
# endif
#endif
#if !defined SCNxPTR || @PRI_MACROS_BROKEN@
# undef SCNxPTR
# ifdef UINTPTR_MAX
#  define SCNxPTR @PRIPTR_PREFIX@ "x"
# endif
#endif

/* 7.8.2 Functions for greatest-width integer types */

#ifdef __cplusplus
extern "C" {
#endif

#if @GNULIB_IMAXABS@
# if !@HAVE_DECL_IMAXABS@
extern intmax_t imaxabs (intmax_t);
# endif
#elif defined GNULIB_POSIXCHECK
# undef imaxabs
# if HAVE_RAW_DECL_IMAXABS
_GL_WARN_ON_USE (imaxabs, "imaxabs is unportable - "
                 "use gnulib module imaxabs for portability");
# endif
#endif

#if @GNULIB_IMAXDIV@
# if !@HAVE_DECL_IMAXDIV@
#  if !GNULIB_defined_imaxdiv_t
typedef struct { intmax_t quot; intmax_t rem; } imaxdiv_t;
#   define GNULIB_defined_imaxdiv_t 1
#  endif
extern imaxdiv_t imaxdiv (intmax_t, intmax_t);
# endif
#elif defined GNULIB_POSIXCHECK
# undef imaxdiv
# if HAVE_RAW_DECL_IMAXDIV
_GL_WARN_ON_USE (imaxdiv, "imaxdiv is unportable - "
                 "use gnulib module imaxdiv for portability");
# endif
#endif

#if @GNULIB_STRTOIMAX@
# if @REPLACE_STRTOIMAX@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef strtoimax
#   define strtoimax rpl_strtoimax
#  endif
_GL_FUNCDECL_RPL (strtoimax, intmax_t,
                  (const char *, char **, int) _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (strtoimax, intmax_t, (const char *, char **, int));
# else
#  if !@HAVE_DECL_STRTOIMAX@
#   undef strtoimax
_GL_FUNCDECL_SYS (strtoimax, intmax_t,
                  (const char *, char **, int) _GL_ARG_NONNULL ((1)));
#  endif
_GL_CXXALIAS_SYS (strtoimax, intmax_t, (const char *, char **, int));
# endif
_GL_CXXALIASWARN (strtoimax);
#elif defined GNULIB_POSIXCHECK
# undef strtoimax
# if HAVE_RAW_DECL_STRTOIMAX
_GL_WARN_ON_USE (strtoimax, "strtoimax is unportable - "
                 "use gnulib module strtoimax for portability");
# endif
#endif

#if @GNULIB_STRTOUMAX@
# if @REPLACE_STRTOUMAX@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef strtoumax
#   define strtoumax rpl_strtoumax
#  endif
_GL_FUNCDECL_RPL (strtoumax, uintmax_t,
                  (const char *, char **, int) _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (strtoumax, uintmax_t, (const char *, char **, int));
# else
#  if !@HAVE_DECL_STRTOUMAX@
#   undef strtoumax
_GL_FUNCDECL_SYS (strtoumax, uintmax_t,
                  (const char *, char **, int) _GL_ARG_NONNULL ((1)));
#  endif
_GL_CXXALIAS_SYS (strtoumax, uintmax_t, (const char *, char **, int));
# endif
_GL_CXXALIASWARN (strtoumax);
#elif defined GNULIB_POSIXCHECK
# undef strtoumax
# if HAVE_RAW_DECL_STRTOUMAX
_GL_WARN_ON_USE (strtoumax, "strtoumax is unportable - "
                 "use gnulib module strtoumax for portability");
# endif
#endif

/* Don't bother defining or declaring wcstoimax and wcstoumax, since
   wide-character functions like this are hardly ever useful.  */

#ifdef __cplusplus
}
#endif

#endif /* !defined INTTYPES_H && !defined _GL_JUST_INCLUDE_SYSTEM_INTTYPES_H */
