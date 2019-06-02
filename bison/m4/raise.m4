# raise.m4 serial 3
dnl Copyright (C) 2011-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_RAISE],
[
  AC_REQUIRE([gl_SIGNAL_H_DEFAULTS])
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_REQUIRE([gl_MSVC_INVAL])
  AC_CHECK_FUNCS([raise])
  if test $ac_cv_func_raise = no; then
    HAVE_RAISE=0
  else
    if test $HAVE_MSVC_INVALID_PARAMETER_HANDLER = 1; then
      REPLACE_RAISE=1
    fi
    m4_ifdef([gl_SIGNALBLOCKING], [
      gl_SIGNALBLOCKING
      if test $HAVE_POSIX_SIGNALBLOCKING = 0; then
        m4_ifdef([gl_SIGNAL_SIGPIPE], [
          gl_SIGNAL_SIGPIPE
          if test $gl_cv_header_signal_h_SIGPIPE != yes; then
            REPLACE_RAISE=1
          fi
        ], [:])
      fi
    ])
  fi
])

# Prerequisites of lib/raise.c.
AC_DEFUN([gl_PREREQ_RAISE], [:])
