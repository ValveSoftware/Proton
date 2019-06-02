# ldexpl.m4 serial 16
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_LDEXPL],
[
  AC_REQUIRE([gl_MATH_H_DEFAULTS])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_REQUIRE([gl_FUNC_ISNANL]) dnl for ISNANL_LIBM

  dnl Persuade glibc <math.h> to declare ldexpl().
  AC_REQUIRE([gl_USE_SYSTEM_EXTENSIONS])

  dnl Check whether it's declared.
  dnl Mac OS X 10.3 has ldexpl() in libc but doesn't declare it in <math.h>.
  AC_CHECK_DECL([ldexpl], , [HAVE_DECL_LDEXPL=0], [[#include <math.h>]])

  LDEXPL_LIBM=
  if test $HAVE_DECL_LDEXPL = 1; then
    gl_CHECK_LDEXPL_NO_LIBM
    if test $gl_cv_func_ldexpl_no_libm = no; then
      AC_CACHE_CHECK([whether ldexpl() can be used with libm],
        [gl_cv_func_ldexpl_in_libm],
        [
          save_LIBS="$LIBS"
          LIBS="$LIBS -lm"
          AC_LINK_IFELSE(
            [AC_LANG_PROGRAM(
               [[#include <math.h>
                 long double x;]],
               [[return ldexpl (x, -1) > 0;]])],
            [gl_cv_func_ldexpl_in_libm=yes],
            [gl_cv_func_ldexpl_in_libm=no])
          LIBS="$save_LIBS"
        ])
      if test $gl_cv_func_ldexpl_in_libm = yes; then
        LDEXPL_LIBM=-lm
      fi
    fi
    if test $gl_cv_func_ldexpl_no_libm = yes \
       || test $gl_cv_func_ldexpl_in_libm = yes; then
      save_LIBS="$LIBS"
      LIBS="$LIBS $LDEXPL_LIBM"
      gl_FUNC_LDEXPL_WORKS
      LIBS="$save_LIBS"
      case "$gl_cv_func_ldexpl_works" in
        *yes) gl_func_ldexpl=yes ;;
        *)    gl_func_ldexpl=no; REPLACE_LDEXPL=1 ;;
      esac
    else
      gl_func_ldexpl=no
    fi
    if test $gl_func_ldexpl = yes; then
      AC_DEFINE([HAVE_LDEXPL], [1],
        [Define if the ldexpl() function is available.])
    fi
  fi
  if test $HAVE_DECL_LDEXPL = 0 || test $gl_func_ldexpl = no; then
    dnl Find libraries needed to link lib/ldexpl.c.
    if test $HAVE_SAME_LONG_DOUBLE_AS_DOUBLE = 1; then
      AC_REQUIRE([gl_FUNC_LDEXP])
      LDEXPL_LIBM="$LDEXP_LIBM"
    else
      LDEXPL_LIBM="$ISNANL_LIBM"
    fi
  fi
  AC_SUBST([LDEXPL_LIBM])
])

dnl Test whether ldexpl() can be used without linking with libm.
dnl Set gl_cv_func_ldexpl_no_libm to 'yes' or 'no' accordingly.
AC_DEFUN([gl_CHECK_LDEXPL_NO_LIBM],
[
  AC_CACHE_CHECK([whether ldexpl() can be used without linking with libm],
    [gl_cv_func_ldexpl_no_libm],
    [
      AC_LINK_IFELSE(
        [AC_LANG_PROGRAM(
           [[#include <math.h>
             long double x;]],
           [[return ldexpl (x, -1) > 0;]])],
        [gl_cv_func_ldexpl_no_libm=yes],
        [gl_cv_func_ldexpl_no_libm=no])
    ])
])

dnl Test whether ldexpl() works on finite numbers (this fails on AIX 5.1
dnl and Mac OS X 10.4/PowerPC).
AC_DEFUN([gl_FUNC_LDEXPL_WORKS],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether ldexpl works], [gl_cv_func_ldexpl_works],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <math.h>
extern
#ifdef __cplusplus
"C"
#endif
long double ldexpl (long double, int);
int main()
{
  int result = 0;
  {
    volatile long double x = 1.0;
    volatile long double y = ldexpl (x, -1);
    if (y != 0.5L)
      result |= 1;
  }
  {
    volatile long double x = 1.73205L;
    volatile long double y = ldexpl (x, 0);
    if (y != x)
      result |= 2;
  }
  return result;
}]])],
        [gl_cv_func_ldexpl_works=yes],
        [gl_cv_func_ldexpl_works=no],
        [
changequote(,)dnl
         case "$host_os" in
           aix | aix[3-6]*) gl_cv_func_ldexpl_works="guessing no";;
           *)               gl_cv_func_ldexpl_works="guessing yes";;
         esac
changequote([,])dnl
        ])
    ])
])
