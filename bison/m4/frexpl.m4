# frexpl.m4 serial 20
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_FREXPL],
[
  AC_REQUIRE([gl_MATH_H_DEFAULTS])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])

  dnl Persuade glibc <math.h> to declare frexpl().
  AC_REQUIRE([gl_USE_SYSTEM_EXTENSIONS])

  dnl Check whether it's declared.
  dnl Mac OS X 10.3 has frexpl() in libc but doesn't declare it in <math.h>.
  AC_CHECK_DECL([frexpl], , [HAVE_DECL_FREXPL=0], [[#include <math.h>]])

  FREXPL_LIBM=
  if test $HAVE_DECL_FREXPL = 1; then
    gl_CHECK_FREXPL_NO_LIBM
    if test $gl_cv_func_frexpl_no_libm = no; then
      AC_CACHE_CHECK([whether frexpl() can be used with libm],
        [gl_cv_func_frexpl_in_libm],
        [
          save_LIBS="$LIBS"
          LIBS="$LIBS -lm"
          AC_LINK_IFELSE(
            [AC_LANG_PROGRAM(
               [[#include <math.h>
                 long double x;]],
               [[int e; return frexpl (x, &e) > 0;]])],
            [gl_cv_func_frexpl_in_libm=yes],
            [gl_cv_func_frexpl_in_libm=no])
          LIBS="$save_LIBS"
        ])
      if test $gl_cv_func_frexpl_in_libm = yes; then
        FREXPL_LIBM=-lm
      fi
    fi
    if test $gl_cv_func_frexpl_no_libm = yes \
       || test $gl_cv_func_frexpl_in_libm = yes; then
      save_LIBS="$LIBS"
      LIBS="$LIBS $FREXPL_LIBM"
      gl_FUNC_FREXPL_WORKS
      LIBS="$save_LIBS"
      case "$gl_cv_func_frexpl_works" in
        *yes) gl_func_frexpl=yes ;;
        *)    gl_func_frexpl=no; REPLACE_FREXPL=1 ;;
      esac
    else
      gl_func_frexpl=no
    fi
    if test $gl_func_frexpl = yes; then
      AC_DEFINE([HAVE_FREXPL], [1],
        [Define if the frexpl() function is available.])
    fi
  fi
  if test $HAVE_DECL_FREXPL = 0 || test $gl_func_frexpl = no; then
    dnl Find libraries needed to link lib/frexpl.c.
    if test $HAVE_SAME_LONG_DOUBLE_AS_DOUBLE = 1; then
      AC_REQUIRE([gl_FUNC_FREXP])
      FREXPL_LIBM="$FREXP_LIBM"
    else
      FREXPL_LIBM=
    fi
  fi
  AC_SUBST([FREXPL_LIBM])
])

AC_DEFUN([gl_FUNC_FREXPL_NO_LIBM],
[
  AC_REQUIRE([gl_MATH_H_DEFAULTS])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  dnl Check whether it's declared.
  dnl Mac OS X 10.3 has frexpl() in libc but doesn't declare it in <math.h>.
  AC_CHECK_DECL([frexpl], , [HAVE_DECL_FREXPL=0], [[#include <math.h>]])
  if test $HAVE_DECL_FREXPL = 1; then
    gl_CHECK_FREXPL_NO_LIBM
    if test $gl_cv_func_frexpl_no_libm = yes; then
      gl_FUNC_FREXPL_WORKS
      case "$gl_cv_func_frexpl_works" in
        *yes) gl_func_frexpl_no_libm=yes ;;
        *)    gl_func_frexpl_no_libm=no; REPLACE_FREXPL=1 ;;
      esac
    else
      gl_func_frexpl_no_libm=no
      dnl Set REPLACE_FREXPL here because the system may have frexpl in libm.
      REPLACE_FREXPL=1
    fi
    if test $gl_func_frexpl_no_libm = yes; then
      AC_DEFINE([HAVE_FREXPL_IN_LIBC], [1],
        [Define if the frexpl() function is available in libc.])
    fi
  fi
])

dnl Test whether frexpl() can be used without linking with libm.
dnl Set gl_cv_func_frexpl_no_libm to 'yes' or 'no' accordingly.
AC_DEFUN([gl_CHECK_FREXPL_NO_LIBM],
[
  AC_CACHE_CHECK([whether frexpl() can be used without linking with libm],
    [gl_cv_func_frexpl_no_libm],
    [
      AC_LINK_IFELSE(
        [AC_LANG_PROGRAM(
           [[#include <math.h>
             long double x;]],
           [[int e; return frexpl (x, &e) > 0;]])],
        [gl_cv_func_frexpl_no_libm=yes],
        [gl_cv_func_frexpl_no_libm=no])
    ])
])

dnl Test whether frexpl() works on finite numbers (this fails on
dnl Mac OS X 10.4/PowerPC, on AIX 5.1, and on BeOS), on denormalized numbers
dnl (this fails on Mac OS X 10.5/i386), and also on infinite numbers (this
dnl fails e.g. on IRIX 6.5 and mingw).
AC_DEFUN([gl_FUNC_FREXPL_WORKS],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether frexpl works], [gl_cv_func_frexpl_works],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <float.h>
#include <math.h>
/* Override the values of <float.h>, like done in float.in.h.  */
#if defined __i386__ && (defined __BEOS__ || defined __OpenBSD__)
# undef LDBL_MIN_EXP
# define LDBL_MIN_EXP    (-16381)
#endif
#if defined __i386__ && defined __FreeBSD__
# undef LDBL_MIN_EXP
# define LDBL_MIN_EXP    (-16381)
#endif
#if (defined _ARCH_PPC || defined _POWER) && defined _AIX && (LDBL_MANT_DIG == 106) && defined __GNUC__
# undef LDBL_MIN_EXP
# define LDBL_MIN_EXP DBL_MIN_EXP
#endif
#if defined __sgi && (LDBL_MANT_DIG >= 106)
# if defined __GNUC__
#  undef LDBL_MIN_EXP
#  define LDBL_MIN_EXP DBL_MIN_EXP
# endif
#endif
extern
#ifdef __cplusplus
"C"
#endif
long double frexpl (long double, int *);
int main()
{
  int result = 0;
  volatile long double x;
  /* Test on finite numbers that fails on AIX 5.1.  */
  x = 16.0L;
  {
    int exp = -9999;
    frexpl (x, &exp);
    if (exp != 5)
      result |= 1;
  }
  /* Test on finite numbers that fails on Mac OS X 10.4, because its frexpl
     function returns an invalid (incorrectly normalized) value: it returns
               y = { 0x3fe028f5, 0xc28f5c28, 0x3c9eb851, 0xeb851eb8 }
     but the correct result is
          0.505L = { 0x3fe028f5, 0xc28f5c29, 0xbc547ae1, 0x47ae1480 }  */
  x = 1.01L;
  {
    int exp = -9999;
    long double y = frexpl (x, &exp);
    if (!(exp == 1 && y == 0.505L))
      result |= 2;
  }
  /* Test on large finite numbers.  This fails on BeOS at i = 16322, while
     LDBL_MAX_EXP = 16384.
     In the loop end test, we test x against Infinity, rather than comparing
     i with LDBL_MAX_EXP, because BeOS <float.h> has a wrong LDBL_MAX_EXP.  */
  {
    int i;
    for (i = 1, x = 1.0L; x != x + x; i++, x *= 2.0L)
      {
        int exp = -9999;
        frexpl (x, &exp);
        if (exp != i)
          {
            result |= 4;
            break;
          }
      }
  }
  /* Test on denormalized numbers.  */
  {
    int i;
    for (i = 1, x = 1.0L; i >= LDBL_MIN_EXP; i--, x *= 0.5L)
      ;
    if (x > 0.0L)
      {
        int exp;
        long double y = frexpl (x, &exp);
        /* On machines with IEEE854 arithmetic: x = 1.68105e-4932,
           exp = -16382, y = 0.5.  On Mac OS X 10.5: exp = -16384, y = 0.5.  */
        if (exp != LDBL_MIN_EXP - 1)
          result |= 8;
      }
  }
  /* Test on infinite numbers.  */
  x = 1.0L / 0.0L;
  {
    int exp;
    long double y = frexpl (x, &exp);
    if (y != x)
      result |= 16;
  }
  return result;
}]])],
        [gl_cv_func_frexpl_works=yes],
        [gl_cv_func_frexpl_works=no],
        [
changequote(,)dnl
         case "$host_os" in
           aix | aix[3-6]* | beos* | darwin* | irix* | mingw* | pw*)
              gl_cv_func_frexpl_works="guessing no";;
           *) gl_cv_func_frexpl_works="guessing yes";;
         esac
changequote([,])dnl
        ])
    ])
])
