# strverscmp.m4 serial 8
dnl Copyright (C) 2002, 2005-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_STRVERSCMP],
[
  dnl Persuade glibc <string.h> to declare strverscmp().
  AC_REQUIRE([AC_USE_SYSTEM_EXTENSIONS])

  AC_REQUIRE([gl_HEADER_STRING_H_DEFAULTS])
  AC_CHECK_FUNCS([strverscmp])
  if test $ac_cv_func_strverscmp = no; then
    HAVE_STRVERSCMP=0
  fi
])

# Prerequisites of lib/strverscmp.c.
AC_DEFUN([gl_PREREQ_STRVERSCMP], [
  :
])
