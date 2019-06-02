# serial 15
# Configure fcntl.h.
dnl Copyright (C) 2006-2007, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Written by Paul Eggert.

AC_DEFUN([gl_FCNTL_H],
[
  AC_REQUIRE([gl_FCNTL_H_DEFAULTS])
  AC_REQUIRE([gl_FCNTL_O_FLAGS])
  gl_NEXT_HEADERS([fcntl.h])

  dnl Ensure the type pid_t gets defined.
  AC_REQUIRE([AC_TYPE_PID_T])

  dnl Ensure the type mode_t gets defined.
  AC_REQUIRE([AC_TYPE_MODE_T])

  dnl Check for declarations of anything we want to poison if the
  dnl corresponding gnulib module is not in use, if it is not common
  dnl enough to be declared everywhere.
  gl_WARN_ON_USE_PREPARE([[#include <fcntl.h>
    ]], [fcntl openat])
])

AC_DEFUN([gl_FCNTL_MODULE_INDICATOR],
[
  dnl Use AC_REQUIRE here, so that the default settings are expanded once only.
  AC_REQUIRE([gl_FCNTL_H_DEFAULTS])
  gl_MODULE_INDICATOR_SET_VARIABLE([$1])
  dnl Define it also as a C macro, for the benefit of the unit tests.
  gl_MODULE_INDICATOR_FOR_TESTS([$1])
])

AC_DEFUN([gl_FCNTL_H_DEFAULTS],
[
  GNULIB_FCNTL=0;        AC_SUBST([GNULIB_FCNTL])
  GNULIB_NONBLOCKING=0;  AC_SUBST([GNULIB_NONBLOCKING])
  GNULIB_OPEN=0;         AC_SUBST([GNULIB_OPEN])
  GNULIB_OPENAT=0;       AC_SUBST([GNULIB_OPENAT])
  dnl Assume proper GNU behavior unless another module says otherwise.
  HAVE_FCNTL=1;          AC_SUBST([HAVE_FCNTL])
  HAVE_OPENAT=1;         AC_SUBST([HAVE_OPENAT])
  REPLACE_FCNTL=0;       AC_SUBST([REPLACE_FCNTL])
  REPLACE_OPEN=0;        AC_SUBST([REPLACE_OPEN])
  REPLACE_OPENAT=0;      AC_SUBST([REPLACE_OPENAT])
])
