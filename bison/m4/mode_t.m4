# mode_t.m4 serial 2
dnl Copyright (C) 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# For using mode_t, it's sufficient to use AC_TYPE_MODE_T and
# include <sys/types.h>.

# Define PROMOTED_MODE_T to the type that is the result of "default argument
# promotion" (ISO C 6.5.2.2.(6)) of the type mode_t.
AC_DEFUN([gl_PROMOTED_TYPE_MODE_T],
[
  AC_REQUIRE([AC_TYPE_MODE_T])
  AC_CACHE_CHECK([for promoted mode_t type], [gl_cv_promoted_mode_t], [
    dnl Assume mode_t promotes to 'int' if and only if it is smaller than 'int',
    dnl and to itself otherwise. This assumption is not guaranteed by the ISO C
    dnl standard, but we don't know of any real-world counterexamples.
    AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[#include <sys/types.h>]],
      [[typedef int array[2 * (sizeof (mode_t) < sizeof (int)) - 1];]])],
      [gl_cv_promoted_mode_t='int'],
      [gl_cv_promoted_mode_t='mode_t'])
  ])
  AC_DEFINE_UNQUOTED([PROMOTED_MODE_T], [$gl_cv_promoted_mode_t],
    [Define to the type that is the result of default argument promotions of type mode_t.])
])
