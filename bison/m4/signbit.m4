# signbit.m4 serial 13
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_SIGNBIT],
[
  AC_REQUIRE([gl_MATH_H_DEFAULTS])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([for signbit macro], [gl_cv_func_signbit],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <math.h>
/* If signbit is defined as a function, don't use it, since calling it for
   'float' or 'long double' arguments would involve conversions.
   If signbit is not declared at all but exists as a library function, don't
   use it, since the prototype may not match.
   If signbit is not declared at all but exists as a compiler built-in, don't
   use it, since it's preferable to use __builtin_signbit* (no warnings,
   no conversions).  */
#ifndef signbit
# error "signbit should be a macro"
#endif
#include <string.h>
]gl_SIGNBIT_TEST_PROGRAM
])],
        [gl_cv_func_signbit=yes],
        [gl_cv_func_signbit=no],
        [case "$host_os" in
                   # Guess yes on glibc systems.
           *-gnu*) gl_cv_func_signbit="guessing yes" ;;
                   # If we don't know, assume the worst.
           *)      gl_cv_func_signbit="guessing no" ;;
         esac
        ])
    ])
  dnl GCC 4.0 and newer provides three built-ins for signbit.
  dnl They can be used without warnings, also in C++, regardless of <math.h>.
  dnl But they may expand to calls to functions, which may or may not be in
  dnl libc.
  AC_CACHE_CHECK([for signbit compiler built-ins], [gl_cv_func_signbit_gcc],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#if __GNUC__ >= 4
# define signbit(x) \
   (sizeof (x) == sizeof (long double) ? __builtin_signbitl (x) : \
    sizeof (x) == sizeof (double) ? __builtin_signbit (x) : \
    __builtin_signbitf (x))
#else
# error "signbit should be three compiler built-ins"
#endif
#include <string.h>
]gl_SIGNBIT_TEST_PROGRAM
])],
        [gl_cv_func_signbit_gcc=yes],
        [gl_cv_func_signbit_gcc=no],
        [case "$host_os" in
                   # Guess yes on glibc systems.
           *-gnu*) gl_cv_func_signbit_gcc="guessing yes" ;;
                   # If we don't know, assume the worst.
           *)      gl_cv_func_signbit_gcc="guessing no" ;;
         esac
        ])
    ])
  dnl Use the compiler built-ins whenever possible, because they are more
  dnl efficient than the system library functions (if they exist).
  case "$gl_cv_func_signbit_gcc" in
    *yes)
      REPLACE_SIGNBIT_USING_GCC=1
      ;;
    *)
      case "$gl_cv_func_signbit" in
        *yes) ;;
        *)
          dnl REPLACE_SIGNBIT=1 makes sure the signbit[fdl] functions get built.
          REPLACE_SIGNBIT=1
          gl_FLOAT_SIGN_LOCATION
          gl_DOUBLE_SIGN_LOCATION
          gl_LONG_DOUBLE_SIGN_LOCATION
          if test "$gl_cv_cc_float_signbit" = unknown; then
            dnl Test whether copysignf() is declared.
            AC_CHECK_DECLS([copysignf], , , [[#include <math.h>]])
            if test "$ac_cv_have_decl_copysignf" = yes; then
              dnl Test whether copysignf() can be used without libm.
              AC_CACHE_CHECK([whether copysignf can be used without linking with libm],
                [gl_cv_func_copysignf_no_libm],
                [
                  AC_LINK_IFELSE(
                    [AC_LANG_PROGRAM(
                       [[#include <math.h>
                         float x, y;]],
                       [[return copysignf (x, y) < 0;]])],
                    [gl_cv_func_copysignf_no_libm=yes],
                    [gl_cv_func_copysignf_no_libm=no])
                ])
              if test $gl_cv_func_copysignf_no_libm = yes; then
                AC_DEFINE([HAVE_COPYSIGNF_IN_LIBC], [1],
                  [Define if the copysignf function is declared in <math.h> and available in libc.])
              fi
            fi
          fi
          if test "$gl_cv_cc_double_signbit" = unknown; then
            dnl Test whether copysign() is declared.
            AC_CHECK_DECLS([copysign], , , [[#include <math.h>]])
            if test "$ac_cv_have_decl_copysign" = yes; then
              dnl Test whether copysign() can be used without libm.
              AC_CACHE_CHECK([whether copysign can be used without linking with libm],
                [gl_cv_func_copysign_no_libm],
                [
                  AC_LINK_IFELSE(
                    [AC_LANG_PROGRAM(
                       [[#include <math.h>
                         double x, y;]],
                       [[return copysign (x, y) < 0;]])],
                    [gl_cv_func_copysign_no_libm=yes],
                    [gl_cv_func_copysign_no_libm=no])
                ])
              if test $gl_cv_func_copysign_no_libm = yes; then
                AC_DEFINE([HAVE_COPYSIGN_IN_LIBC], [1],
                  [Define if the copysign function is declared in <math.h> and available in libc.])
              fi
            fi
          fi
          if test "$gl_cv_cc_long_double_signbit" = unknown; then
            dnl Test whether copysignl() is declared.
            AC_CHECK_DECLS([copysignl], , , [[#include <math.h>]])
            if test "$ac_cv_have_decl_copysignl" = yes; then
              dnl Test whether copysignl() can be used without libm.
              AC_CACHE_CHECK([whether copysignl can be used without linking with libm],
                [gl_cv_func_copysignl_no_libm],
                [
                  AC_LINK_IFELSE(
                    [AC_LANG_PROGRAM(
                       [[#include <math.h>
                         long double x, y;]],
                       [[return copysignl (x, y) < 0;]])],
                    [gl_cv_func_copysignl_no_libm=yes],
                    [gl_cv_func_copysignl_no_libm=no])
                ])
              if test $gl_cv_func_copysignl_no_libm = yes; then
                AC_DEFINE([HAVE_COPYSIGNL_IN_LIBC], [1],
                  [Define if the copysignl function is declared in <math.h> and available in libc.])
              fi
            fi
          fi
          ;;
      esac
      ;;
  esac
])

AC_DEFUN([gl_SIGNBIT_TEST_PROGRAM], [[
/* Global variables.
   Needed because GCC 4 constant-folds __builtin_signbitl (literal)
   but cannot constant-fold            __builtin_signbitl (variable).  */
float vf;
double vd;
long double vl;
int main ()
{
/* HP cc on HP-UX 10.20 has a bug with the constant expression -0.0.
   So we use -p0f and -p0d instead.  */
float p0f = 0.0f;
float m0f = -p0f;
double p0d = 0.0;
double m0d = -p0d;
/* On HP-UX 10.20, negating 0.0L does not yield -0.0L.
   So we use another constant expression instead.
   But that expression does not work on other platforms, such as when
   cross-compiling to PowerPC on Mac OS X 10.5.  */
long double p0l = 0.0L;
#if defined __hpux || defined __sgi
long double m0l = -LDBL_MIN * LDBL_MIN;
#else
long double m0l = -p0l;
#endif
  int result = 0;
  if (signbit (vf)) /* link check */
    vf++;
  {
    float plus_inf = 1.0f / p0f;
    float minus_inf = -1.0f / p0f;
    if (!(!signbit (255.0f)
          && signbit (-255.0f)
          && !signbit (p0f)
          && (memcmp (&m0f, &p0f, sizeof (float)) == 0 || signbit (m0f))
          && !signbit (plus_inf)
          && signbit (minus_inf)))
      result |= 1;
  }
  if (signbit (vd)) /* link check */
    vd++;
  {
    double plus_inf = 1.0 / p0d;
    double minus_inf = -1.0 / p0d;
    if (!(!signbit (255.0)
          && signbit (-255.0)
          && !signbit (p0d)
          && (memcmp (&m0d, &p0d, sizeof (double)) == 0 || signbit (m0d))
          && !signbit (plus_inf)
          && signbit (minus_inf)))
      result |= 2;
  }
  if (signbit (vl)) /* link check */
    vl++;
  {
    long double plus_inf = 1.0L / p0l;
    long double minus_inf = -1.0L / p0l;
    if (signbit (255.0L))
      result |= 4;
    if (!signbit (-255.0L))
      result |= 4;
    if (signbit (p0l))
      result |= 8;
    if (!(memcmp (&m0l, &p0l, sizeof (long double)) == 0 || signbit (m0l)))
      result |= 16;
    if (signbit (plus_inf))
      result |= 32;
    if (!signbit (minus_inf))
      result |= 64;
  }
  return result;
}
]])

AC_DEFUN([gl_FLOAT_SIGN_LOCATION],
[
  gl_FLOATTYPE_SIGN_LOCATION([float], [gl_cv_cc_float_signbit], [f], [FLT])
])

AC_DEFUN([gl_DOUBLE_SIGN_LOCATION],
[
  gl_FLOATTYPE_SIGN_LOCATION([double], [gl_cv_cc_double_signbit], [], [DBL])
])

AC_DEFUN([gl_LONG_DOUBLE_SIGN_LOCATION],
[
  gl_FLOATTYPE_SIGN_LOCATION([long double], [gl_cv_cc_long_double_signbit], [L], [LDBL])
])

AC_DEFUN([gl_FLOATTYPE_SIGN_LOCATION],
[
  AC_CACHE_CHECK([where to find the sign bit in a '$1'],
    [$2],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stddef.h>
#include <stdio.h>
#define NWORDS \
  ((sizeof ($1) + sizeof (unsigned int) - 1) / sizeof (unsigned int))
typedef union { $1 value; unsigned int word[NWORDS]; }
        memory_float;
static memory_float plus = { 1.0$3 };
static memory_float minus = { -1.0$3 };
int main ()
{
  size_t j, k, i;
  unsigned int m;
  FILE *fp = fopen ("conftest.out", "w");
  if (fp == NULL)
    return 1;
  /* Find the different bit.  */
  k = 0; m = 0;
  for (j = 0; j < NWORDS; j++)
    {
      unsigned int x = plus.word[j] ^ minus.word[j];
      if ((x & (x - 1)) || (x && m))
        {
          /* More than one bit difference.  */
          fprintf (fp, "unknown");
          return 2;
        }
      if (x)
        {
          k = j;
          m = x;
        }
    }
  if (m == 0)
    {
      /* No difference.  */
      fprintf (fp, "unknown");
      return 3;
    }
  /* Now m = plus.word[k] ^ ~minus.word[k].  */
  if (plus.word[k] & ~minus.word[k])
    {
      /* Oh? The sign bit is set in the positive and cleared in the negative
         numbers?  */
      fprintf (fp, "unknown");
      return 4;
    }
  for (i = 0; ; i++)
    if ((m >> i) & 1)
      break;
  fprintf (fp, "word %d bit %d", (int) k, (int) i);
  if (fclose (fp) != 0)
    return 5;
  return 0;
}
        ]])],
        [$2=`cat conftest.out`],
        [$2="unknown"],
        [
          dnl When cross-compiling, we don't know. It depends on the
          dnl ABI and compiler version. There are too many cases.
          $2="unknown"
        ])
      rm -f conftest.out
    ])
  case "$]$2[" in
    word*bit*)
      word=`echo "$]$2[" | sed -e 's/word //' -e 's/ bit.*//'`
      bit=`echo "$]$2[" | sed -e 's/word.*bit //'`
      AC_DEFINE_UNQUOTED([$4][_SIGNBIT_WORD], [$word],
        [Define as the word index where to find the sign of '$1'.])
      AC_DEFINE_UNQUOTED([$4][_SIGNBIT_BIT], [$bit],
        [Define as the bit index in the word where to find the sign of '$1'.])
      ;;
  esac
])

# Expands to code that defines a function signbitf(float).
# It extracts the sign bit of a non-NaN value.
AC_DEFUN([gl_FLOAT_SIGNBIT_CODE],
[
  gl_FLOATTYPE_SIGNBIT_CODE([float], [f], [f])
])

# Expands to code that defines a function signbitd(double).
# It extracts the sign bit of a non-NaN value.
AC_DEFUN([gl_DOUBLE_SIGNBIT_CODE],
[
  gl_FLOATTYPE_SIGNBIT_CODE([double], [d], [])
])

# Expands to code that defines a function signbitl(long double).
# It extracts the sign bit of a non-NaN value.
AC_DEFUN([gl_LONG_DOUBLE_SIGNBIT_CODE],
[
  gl_FLOATTYPE_SIGNBIT_CODE([long double], [l], [L])
])

AC_DEFUN([gl_FLOATTYPE_SIGNBIT_CODE],
[[
static int
signbit$2 ($1 value)
{
  typedef union { $1 f; unsigned char b[sizeof ($1)]; } float_union;
  static float_union plus_one = { 1.0$3 };   /* unused bits are zero here */
  static float_union minus_one = { -1.0$3 }; /* unused bits are zero here */
  /* Compute the sign bit mask as the XOR of plus_one and minus_one.  */
  float_union u;
  unsigned int i;
  u.f = value;
  for (i = 0; i < sizeof ($1); i++)
    if (u.b[i] & (plus_one.b[i] ^ minus_one.b[i]))
      return 1;
  return 0;
}
]])
