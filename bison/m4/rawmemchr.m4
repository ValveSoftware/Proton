# rawmemchr.m4 serial 2
dnl Copyright (C) 2003, 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_RAWMEMCHR],
[
  dnl Persuade glibc <string.h> to declare rawmemchr().
  AC_REQUIRE([AC_USE_SYSTEM_EXTENSIONS])

  AC_REQUIRE([gl_HEADER_STRING_H_DEFAULTS])
  AC_CHECK_FUNCS([rawmemchr])
  if test $ac_cv_func_rawmemchr = no; then
    HAVE_RAWMEMCHR=0
  fi
])

# Prerequisites of lib/strchrnul.c.
AC_DEFUN([gl_PREREQ_RAWMEMCHR], [:])
