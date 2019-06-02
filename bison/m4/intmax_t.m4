# intmax_t.m4 serial 8
dnl Copyright (C) 1997-2004, 2006-2007, 2009-2015 Free Software Foundation,
dnl Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Paul Eggert.

AC_PREREQ([2.53])

# Define intmax_t to 'long' or 'long long'
# if it is not already defined in <stdint.h> or <inttypes.h>.

AC_DEFUN([gl_AC_TYPE_INTMAX_T],
[
  dnl For simplicity, we assume that a header file defines 'intmax_t' if and
  dnl only if it defines 'uintmax_t'.
  AC_REQUIRE([gl_AC_HEADER_INTTYPES_H])
  AC_REQUIRE([gl_AC_HEADER_STDINT_H])
  if test $gl_cv_header_inttypes_h = no && test $gl_cv_header_stdint_h = no; then
    AC_REQUIRE([AC_TYPE_LONG_LONG_INT])
    test $ac_cv_type_long_long_int = yes \
      && ac_type='long long' \
      || ac_type='long'
    AC_DEFINE_UNQUOTED([intmax_t], [$ac_type],
     [Define to long or long long if <inttypes.h> and <stdint.h> don't define.])
  else
    AC_DEFINE([HAVE_INTMAX_T], [1],
      [Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>.])
  fi
])

dnl An alternative would be to explicitly test for 'intmax_t'.

AC_DEFUN([gt_AC_TYPE_INTMAX_T],
[
  AC_REQUIRE([gl_AC_HEADER_INTTYPES_H])
  AC_REQUIRE([gl_AC_HEADER_STDINT_H])
  AC_CACHE_CHECK([for intmax_t], [gt_cv_c_intmax_t],
    [AC_COMPILE_IFELSE(
       [AC_LANG_PROGRAM(
          [[
#include <stddef.h>
#include <stdlib.h>
#if HAVE_STDINT_H_WITH_UINTMAX
#include <stdint.h>
#endif
#if HAVE_INTTYPES_H_WITH_UINTMAX
#include <inttypes.h>
#endif
          ]],
          [[intmax_t x = -1; return !x;]])],
       [gt_cv_c_intmax_t=yes],
       [gt_cv_c_intmax_t=no])])
  if test $gt_cv_c_intmax_t = yes; then
    AC_DEFINE([HAVE_INTMAX_T], [1],
      [Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>.])
  else
    AC_REQUIRE([AC_TYPE_LONG_LONG_INT])
    test $ac_cv_type_long_long_int = yes \
      && ac_type='long long' \
      || ac_type='long'
    AC_DEFINE_UNQUOTED([intmax_t], [$ac_type],
     [Define to long or long long if <stdint.h> and <inttypes.h> don't define.])
  fi
])
