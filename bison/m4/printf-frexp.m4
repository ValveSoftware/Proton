# printf-frexp.m4 serial 5
dnl Copyright (C) 2007, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Check how to define printf_frexp() without linking with libm.

AC_DEFUN([gl_FUNC_PRINTF_FREXP],
[
  AC_REQUIRE([gl_CHECK_FREXP_NO_LIBM])
  if test $gl_cv_func_frexp_no_libm = yes; then
    gl_FUNC_FREXP_WORKS
    case "$gl_cv_func_frexp_works" in
      *yes)
        AC_DEFINE([HAVE_FREXP_IN_LIBC], [1],
          [Define if the frexp function is available in libc.])
        ;;
    esac
  fi

  AC_CACHE_CHECK([whether ldexp can be used without linking with libm],
    [gl_cv_func_ldexp_no_libm],
    [
      AC_LINK_IFELSE(
        [AC_LANG_PROGRAM(
           [[#include <math.h>
             double x;
             int y;]],
           [[return ldexp (x, y) < 1;]])],
        [gl_cv_func_ldexp_no_libm=yes],
        [gl_cv_func_ldexp_no_libm=no])
    ])
  if test $gl_cv_func_ldexp_no_libm = yes; then
    AC_DEFINE([HAVE_LDEXP_IN_LIBC], [1],
      [Define if the ldexp function is available in libc.])
  fi
])
