# strnlen.m4 serial 13
dnl Copyright (C) 2002-2003, 2005-2007, 2009-2015 Free Software Foundation,
dnl Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_STRNLEN],
[
  AC_REQUIRE([gl_HEADER_STRING_H_DEFAULTS])

  dnl Persuade glibc <string.h> to declare strnlen().
  AC_REQUIRE([AC_USE_SYSTEM_EXTENSIONS])

  AC_CHECK_DECLS_ONCE([strnlen])
  if test $ac_cv_have_decl_strnlen = no; then
    HAVE_DECL_STRNLEN=0
  else
    m4_pushdef([AC_LIBOBJ], [:])
    dnl Note: AC_FUNC_STRNLEN does AC_LIBOBJ([strnlen]).
    AC_FUNC_STRNLEN
    m4_popdef([AC_LIBOBJ])
    if test $ac_cv_func_strnlen_working = no; then
      REPLACE_STRNLEN=1
    fi
  fi
])

# Prerequisites of lib/strnlen.c.
AC_DEFUN([gl_PREREQ_STRNLEN], [:])
