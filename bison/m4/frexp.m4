# frexp.m4 serial 15
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_FREXP],
[
  AC_REQUIRE([gl_MATH_H_DEFAULTS])
  AC_REQUIRE([gl_CHECK_FREXP_NO_LIBM])
  FREXP_LIBM=
  if test $gl_cv_func_frexp_no_libm = no; then
    AC_CACHE_CHECK([whether frexp() can be used with libm],
      [gl_cv_func_frexp_in_libm],
      [
        save_LIBS="$LIBS"
        LIBS="$LIBS -lm"
        AC_LINK_IFELSE(
          [AC_LANG_PROGRAM(
             [[#include <math.h>
               double x;]],
             [[int e; return frexp (x, &e) > 0;]])],
          [gl_cv_func_frexp_in_libm=yes],
          [gl_cv_func_frexp_in_libm=no])
        LIBS="$save_LIBS"
      ])
    if test $gl_cv_func_frexp_in_libm = yes; then
      FREXP_LIBM=-lm
    fi
  fi
  if test $gl_cv_func_frexp_no_libm = yes \
     || test $gl_cv_func_frexp_in_libm = yes; then
    save_LIBS="$LIBS"
    LIBS="$LIBS $FREXP_LIBM"
    gl_FUNC_FREXP_WORKS
    LIBS="$save_LIBS"
    case "$gl_cv_func_frexp_works" in
      *yes) gl_func_frexp=yes ;;
      *)    gl_func_frexp=no; REPLACE_FREXP=1; FREXP_LIBM= ;;
    esac
  else
    gl_func_frexp=no
  fi
  if test $gl_func_frexp = yes; then
    AC_DEFINE([HAVE_FREXP], [1],
      [Define if the frexp() function is available and works.])
  fi
  AC_SUBST([FREXP_LIBM])
])

AC_DEFUN([gl_FUNC_FREXP_NO_LIBM],
[
  AC_REQUIRE([gl_MATH_H_DEFAULTS])
  AC_REQUIRE([gl_CHECK_FREXP_NO_LIBM])
  if test $gl_cv_func_frexp_no_libm = yes; then
    gl_FUNC_FREXP_WORKS
    case "$gl_cv_func_frexp_works" in
      *yes) gl_func_frexp_no_libm=yes ;;
      *)    gl_func_frexp_no_libm=no; REPLACE_FREXP=1 ;;
    esac
  else
    gl_func_frexp_no_libm=no
    dnl Set REPLACE_FREXP here because the system may have frexp in libm.
    REPLACE_FREXP=1
  fi
  if test $gl_func_frexp_no_libm = yes; then
    AC_DEFINE([HAVE_FREXP_IN_LIBC], [1],
      [Define if the frexp() function is available in libc.])
  fi
])

dnl Test whether frexp() can be used without linking with libm.
dnl Set gl_cv_func_frexp_no_libm to 'yes' or 'no' accordingly.
AC_DEFUN([gl_CHECK_FREXP_NO_LIBM],
[
  AC_CACHE_CHECK([whether frexp() can be used without linking with libm],
    [gl_cv_func_frexp_no_libm],
    [
      AC_LINK_IFELSE(
        [AC_LANG_PROGRAM(
           [[#include <math.h>
             double x;]],
           [[int e; return frexp (x, &e) > 0;]])],
        [gl_cv_func_frexp_no_libm=yes],
        [gl_cv_func_frexp_no_libm=no])
    ])
])

dnl Test whether frexp() works also on denormalized numbers (this fails e.g. on
dnl NetBSD 3.0), on infinite numbers (this fails e.g. on IRIX 6.5 and mingw),
dnl and on negative zero (this fails e.g. on NetBSD 4.99 and mingw).
AC_DEFUN([gl_FUNC_FREXP_WORKS],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CHECK_DECLS_ONCE([alarm])
  AC_CACHE_CHECK([whether frexp works], [gl_cv_func_frexp_works],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <float.h>
#include <math.h>
#include <string.h>
#if HAVE_DECL_ALARM
# include <signal.h>
# include <unistd.h>
#endif
/* HP cc on HP-UX 10.20 has a bug with the constant expression -0.0.
   ICC 10.0 has a bug when optimizing the expression -zero.
   The expression -DBL_MIN * DBL_MIN does not work when cross-compiling
   to PowerPC on Mac OS X 10.5.  */
#if defined __hpux || defined __sgi || defined __ICC
static double
compute_minus_zero (void)
{
  return -DBL_MIN * DBL_MIN;
}
# define minus_zero compute_minus_zero ()
#else
double minus_zero = -0.0;
#endif
int main()
{
  int result = 0;
  int i;
  volatile double x;
  double zero = 0.0;
#if HAVE_DECL_ALARM
  /* NeXTstep 3.3 frexp() runs into an endless loop when called on an infinite
     number.  Let the test fail in this case.  */
  signal (SIGALRM, SIG_DFL);
  alarm (5);
#endif
  /* Test on denormalized numbers.  */
  for (i = 1, x = 1.0; i >= DBL_MIN_EXP; i--, x *= 0.5)
    ;
  if (x > 0.0)
    {
      int exp;
      double y = frexp (x, &exp);
      /* On machines with IEEE754 arithmetic: x = 1.11254e-308, exp = -1022.
         On NetBSD: y = 0.75. Correct: y = 0.5.  */
      if (y != 0.5)
        result |= 1;
    }
  /* Test on infinite numbers.  */
  x = 1.0 / zero;
  {
    int exp;
    double y = frexp (x, &exp);
    if (y != x)
      result |= 2;
  }
  /* Test on negative zero.  */
  x = minus_zero;
  {
    int exp;
    double y = frexp (x, &exp);
    if (memcmp (&y, &x, sizeof x))
      result |= 4;
  }
  return result;
}]])],
        [gl_cv_func_frexp_works=yes],
        [gl_cv_func_frexp_works=no],
        [case "$host_os" in
           netbsd* | irix* | mingw*) gl_cv_func_frexp_works="guessing no";;
           *)                        gl_cv_func_frexp_works="guessing yes";;
         esac
        ])
    ])
])
