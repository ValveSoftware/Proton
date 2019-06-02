# close.m4 serial 8
dnl Copyright (C) 2008-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_CLOSE],
[
  AC_REQUIRE([gl_UNISTD_H_DEFAULTS])
  AC_REQUIRE([gl_MSVC_INVAL])
  if test $HAVE_MSVC_INVALID_PARAMETER_HANDLER = 1; then
    REPLACE_CLOSE=1
  fi
  m4_ifdef([gl_PREREQ_SYS_H_WINSOCK2], [
    gl_PREREQ_SYS_H_WINSOCK2
    if test $UNISTD_H_HAVE_WINSOCK2_H = 1; then
      dnl Even if the 'socket' module is not used here, another part of the
      dnl application may use it and pass file descriptors that refer to
      dnl sockets to the close() function. So enable the support for sockets.
      REPLACE_CLOSE=1
    fi
  ])
  dnl Replace close() for supporting the gnulib-defined fchdir() function,
  dnl to keep fchdir's bookkeeping up-to-date.
  m4_ifdef([gl_FUNC_FCHDIR], [
    if test $REPLACE_CLOSE = 0; then
      gl_TEST_FCHDIR
      if test $HAVE_FCHDIR = 0; then
        REPLACE_CLOSE=1
      fi
    fi
  ])
])
