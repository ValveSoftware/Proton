# fopen.m4 serial 9
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_FOPEN],
[
  AC_REQUIRE([gl_STDIO_H_DEFAULTS])
  AC_REQUIRE([AC_CANONICAL_HOST])
  case "$host_os" in
    mingw* | pw*)
      dnl Replace fopen, for handling of "/dev/null".
      REPLACE_FOPEN=1
      dnl fopen on mingw also has the trailing slash bug.
      gl_cv_func_fopen_slash="guessing no"
      ;;
    *)
      dnl fopen("foo/", "w") should not create a file when the file name has a
      dnl trailing slash.
      AC_CACHE_CHECK([whether fopen recognizes a trailing slash],
        [gl_cv_func_fopen_slash],
        [
          AC_RUN_IFELSE(
            [AC_LANG_SOURCE([[
#include <stddef.h>
#include <stdio.h>
int main ()
{
  return fopen ("conftest.sl/", "w") != NULL;
}]])],
            [gl_cv_func_fopen_slash=yes],
            [gl_cv_func_fopen_slash=no],
            [
changequote(,)dnl
             case "$host_os" in
               aix* | hpux* | solaris2.[0-9] | solaris2.[0-9].*)
                 gl_cv_func_fopen_slash="guessing no" ;;
               *)
                 gl_cv_func_fopen_slash="guessing yes" ;;
             esac
changequote([,])dnl
            ])
          rm -f conftest.sl
        ])
      ;;
  esac
  case "$gl_cv_func_fopen_slash" in
    *no)
      AC_DEFINE([FOPEN_TRAILING_SLASH_BUG], [1],
        [Define to 1 if fopen() fails to recognize a trailing slash.])
      REPLACE_FOPEN=1
      ;;
  esac
])

# Prerequisites of lib/fopen.c.
AC_DEFUN([gl_PREREQ_FOPEN], [:])
