# ldexp.m4 serial 1
dnl Copyright (C) 2010-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_LDEXP],
[
  AC_REQUIRE([gl_CHECK_LDEXP_NO_LIBM])
  LDEXP_LIBM=
  if test $gl_cv_func_ldexp_no_libm = no; then
    AC_CACHE_CHECK([whether ldexp() can be used with libm],
      [gl_cv_func_ldexp_in_libm],
      [
        save_LIBS="$LIBS"
        LIBS="$LIBS -lm"
        AC_LINK_IFELSE(
          [AC_LANG_PROGRAM([[#ifndef __NO_MATH_INLINES
                             # define __NO_MATH_INLINES 1 /* for glibc */
                             #endif
                             #include <math.h>
                             double (*funcptr) (double, int) = ldexp;
                             double x;]],
                           [[return ldexp (x, -1) > 0;]])],
          [gl_cv_func_ldexp_in_libm=yes],
          [gl_cv_func_ldexp_in_libm=no])
        LIBS="$save_LIBS"
      ])
    if test $gl_cv_func_ldexp_in_libm = yes; then
      LDEXP_LIBM=-lm
    fi
  fi
  AC_SUBST([LDEXP_LIBM])
])

dnl Test whether ldexp() can be used without linking with libm.
dnl Set gl_cv_func_ldexp_no_libm to 'yes' or 'no' accordingly.
AC_DEFUN([gl_CHECK_LDEXP_NO_LIBM],
[
  AC_CACHE_CHECK([whether ldexp() can be used without linking with libm],
    [gl_cv_func_ldexp_no_libm],
    [
      AC_LINK_IFELSE(
        [AC_LANG_PROGRAM([[#ifndef __NO_MATH_INLINES
                           # define __NO_MATH_INLINES 1 /* for glibc */
                           #endif
                           #include <math.h>
                           double (*funcptr) (double, int) = ldexp;
                           double x;]],
                         [[return ldexp (x, -1) > 0;]])],
        [gl_cv_func_ldexp_no_libm=yes],
        [gl_cv_func_ldexp_no_libm=no])
    ])
])
