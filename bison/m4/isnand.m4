# isnand.m4 serial 11
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Check how to get or define isnand().

AC_DEFUN([gl_FUNC_ISNAND],
[
  AC_REQUIRE([gl_MATH_H_DEFAULTS])
  ISNAND_LIBM=
  gl_HAVE_ISNAND_NO_LIBM
  if test $gl_cv_func_isnand_no_libm = no; then
    gl_HAVE_ISNAND_IN_LIBM
    if test $gl_cv_func_isnand_in_libm = yes; then
      ISNAND_LIBM=-lm
    fi
  fi
  dnl The variable gl_func_isnand set here is used by isnan.m4.
  if test $gl_cv_func_isnand_no_libm = yes \
     || test $gl_cv_func_isnand_in_libm = yes; then
    gl_func_isnand=yes
  else
    gl_func_isnand=no
    HAVE_ISNAND=0
  fi
  AC_SUBST([ISNAND_LIBM])
])

dnl Check how to get or define isnand() without linking with libm.

AC_DEFUN([gl_FUNC_ISNAND_NO_LIBM],
[
  gl_HAVE_ISNAND_NO_LIBM
  gl_func_isnand_no_libm=$gl_cv_func_isnand_no_libm
  if test $gl_cv_func_isnand_no_libm = yes; then
    AC_DEFINE([HAVE_ISNAND_IN_LIBC], [1],
      [Define if the isnan(double) function is available in libc.])
  fi
])

dnl Prerequisites of replacement isnand definition. It does not need -lm.
AC_DEFUN([gl_PREREQ_ISNAND],
[
  AC_REQUIRE([gl_DOUBLE_EXPONENT_LOCATION])
])

dnl Test whether isnand() can be used with libm.

AC_DEFUN([gl_HAVE_ISNAND_IN_LIBM],
[
  AC_CACHE_CHECK([whether isnan(double) can be used with libm],
    [gl_cv_func_isnand_in_libm],
    [
      save_LIBS="$LIBS"
      LIBS="$LIBS -lm"
      AC_LINK_IFELSE(
        [AC_LANG_PROGRAM(
           [[#include <math.h>
             #if __GNUC__ >= 4
             # undef isnand
             # define isnand(x) __builtin_isnan ((double)(x))
             #elif defined isnan
             # undef isnand
             # define isnand(x) isnan ((double)(x))
             #endif
             double x;]],
           [[return isnand (x);]])],
        [gl_cv_func_isnand_in_libm=yes],
        [gl_cv_func_isnand_in_libm=no])
      LIBS="$save_LIBS"
    ])
])

AC_DEFUN([gl_HAVE_ISNAND_NO_LIBM],
[
  AC_CACHE_CHECK([whether isnan(double) can be used without linking with libm],
    [gl_cv_func_isnand_no_libm],
    [
      AC_LINK_IFELSE(
        [AC_LANG_PROGRAM(
           [[#include <math.h>
             #if __GNUC__ >= 4
             # undef isnand
             # define isnand(x) __builtin_isnan ((double)(x))
             #else
             # undef isnand
             # define isnand(x) isnan ((double)(x))
             #endif
             double x;]],
           [[return isnand (x);]])],
        [gl_cv_func_isnand_no_libm=yes],
        [gl_cv_func_isnand_no_libm=no])
    ])
])
