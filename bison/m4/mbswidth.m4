# mbswidth.m4 serial 18
dnl Copyright (C) 2000-2002, 2004, 2006-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl autoconf tests required for use of mbswidth.c
dnl From Bruno Haible.

AC_DEFUN([gl_MBSWIDTH],
[
  AC_CHECK_HEADERS_ONCE([wchar.h])
  AC_CHECK_FUNCS_ONCE([isascii mbsinit])

  dnl UnixWare 7.1.1 <wchar.h> has a declaration of a function mbswidth()
  dnl that clashes with ours.
  AC_CACHE_CHECK([whether mbswidth is declared in <wchar.h>],
    [ac_cv_have_decl_mbswidth],
    [AC_COMPILE_IFELSE(
       [AC_LANG_PROGRAM(
          [[
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be included
   before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
          ]],
          [[
  char *p = (char *) mbswidth;
  return !p;
          ]])],
       [ac_cv_have_decl_mbswidth=yes],
       [ac_cv_have_decl_mbswidth=no])])
  if test $ac_cv_have_decl_mbswidth = yes; then
    ac_val=1
  else
    ac_val=0
  fi
  AC_DEFINE_UNQUOTED([HAVE_DECL_MBSWIDTH_IN_WCHAR_H], [$ac_val],
    [Define to 1 if you have a declaration of mbswidth() in <wchar.h>, and to 0 otherwise.])

  AC_TYPE_MBSTATE_T
])
