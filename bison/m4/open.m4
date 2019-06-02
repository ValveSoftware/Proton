# open.m4 serial 14
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_OPEN],
[
  AC_REQUIRE([AC_CANONICAL_HOST])
  case "$host_os" in
    mingw* | pw*)
      REPLACE_OPEN=1
      ;;
    *)
      dnl open("foo/") should not create a file when the file name has a
      dnl trailing slash.  FreeBSD only has the problem on symlinks.
      AC_CHECK_FUNCS_ONCE([lstat])
      AC_CACHE_CHECK([whether open recognizes a trailing slash],
        [gl_cv_func_open_slash],
        [# Assume that if we have lstat, we can also check symlinks.
          if test $ac_cv_func_lstat = yes; then
            touch conftest.tmp
            ln -s conftest.tmp conftest.lnk
          fi
          AC_RUN_IFELSE(
            [AC_LANG_SOURCE([[
#include <fcntl.h>
#if HAVE_UNISTD_H
# include <unistd.h>
#endif
int main ()
{
  int result = 0;
#if HAVE_LSTAT
  if (open ("conftest.lnk/", O_RDONLY) != -1)
    result |= 1;
#endif
  if (open ("conftest.sl/", O_CREAT, 0600) >= 0)
    result |= 2;
  return result;
}]])],
            [gl_cv_func_open_slash=yes],
            [gl_cv_func_open_slash=no],
            [
changequote(,)dnl
             case "$host_os" in
               freebsd* | aix* | hpux* | solaris2.[0-9] | solaris2.[0-9].*)
                 gl_cv_func_open_slash="guessing no" ;;
               *)
                 gl_cv_func_open_slash="guessing yes" ;;
             esac
changequote([,])dnl
            ])
          rm -f conftest.sl conftest.tmp conftest.lnk
        ])
      case "$gl_cv_func_open_slash" in
        *no)
          AC_DEFINE([OPEN_TRAILING_SLASH_BUG], [1],
            [Define to 1 if open() fails to recognize a trailing slash.])
          REPLACE_OPEN=1
          ;;
      esac
      ;;
  esac
  dnl Replace open() for supporting the gnulib-defined fchdir() function,
  dnl to keep fchdir's bookkeeping up-to-date.
  m4_ifdef([gl_FUNC_FCHDIR], [
    if test $REPLACE_OPEN = 0; then
      gl_TEST_FCHDIR
      if test $HAVE_FCHDIR = 0; then
        REPLACE_OPEN=1
      fi
    fi
  ])
  dnl Replace open() for supporting the gnulib-defined O_NONBLOCK flag.
  m4_ifdef([gl_NONBLOCKING_IO], [
    if test $REPLACE_OPEN = 0; then
      gl_NONBLOCKING_IO
      if test $gl_cv_have_open_O_NONBLOCK != yes; then
        REPLACE_OPEN=1
      fi
    fi
  ])
])

# Prerequisites of lib/open.c.
AC_DEFUN([gl_PREREQ_OPEN],
[
  AC_REQUIRE([gl_PROMOTED_TYPE_MODE_T])
  :
])
