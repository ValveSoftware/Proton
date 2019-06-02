# off_t.m4 serial 1
dnl Copyright (C) 2012-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Check whether to override the 'off_t' type.
dnl Set WINDOWS_64_BIT_OFF_T.

AC_DEFUN([gl_TYPE_OFF_T],
[
  m4_ifdef([gl_LARGEFILE], [
    AC_REQUIRE([gl_LARGEFILE])
  ], [
    WINDOWS_64_BIT_OFF_T=0
  ])
  AC_SUBST([WINDOWS_64_BIT_OFF_T])
])
