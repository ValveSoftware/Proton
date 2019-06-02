# getdtablesize.m4 serial 5
dnl Copyright (C) 2008-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_GETDTABLESIZE],
[
  AC_REQUIRE([gl_UNISTD_H_DEFAULTS])
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_CHECK_FUNCS_ONCE([getdtablesize])
  if test $ac_cv_func_getdtablesize = yes; then
    # Cygwin 1.7.25 automatically increases the RLIMIT_NOFILE soft limit
    # up to an unchangeable hard limit; all other platforms correctly
    # require setrlimit before getdtablesize() can report a larger value.
    AC_CACHE_CHECK([whether getdtablesize works],
      [gl_cv_func_getdtablesize_works],
      [AC_RUN_IFELSE([
        AC_LANG_PROGRAM([[#include <unistd.h>]],
          [int size = getdtablesize();
           if (dup2 (0, getdtablesize()) != -1)
             return 1;
           if (size != getdtablesize())
             return 2;
          ])],
        [gl_cv_func_getdtablesize_works=yes],
        [gl_cv_func_getdtablesize_works=no],
        [case "$host_os" in
          cygwin*) # on cygwin 1.5.25, getdtablesize() automatically grows
            gl_cv_func_getdtablesize_works="guessing no" ;;
          *) gl_cv_func_getdtablesize_works="guessing yes" ;;
         esac])
      ])
    case "$gl_cv_func_getdtablesize_works" in
      *yes) ;;
      *) REPLACE_GETDTABLESIZE=1 ;;
    esac
  else
    HAVE_GETDTABLESIZE=0
  fi
])

# Prerequisites of lib/getdtablesize.c.
AC_DEFUN([gl_PREREQ_GETDTABLESIZE], [:])
