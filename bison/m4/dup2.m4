#serial 20
dnl Copyright (C) 2002, 2005, 2007, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_DUP2],
[
  AC_REQUIRE([gl_UNISTD_H_DEFAULTS])
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_CHECK_FUNCS_ONCE([getdtablesize])
  m4_ifdef([gl_FUNC_DUP2_OBSOLETE], [
    AC_CHECK_FUNCS_ONCE([dup2])
    if test $ac_cv_func_dup2 = no; then
      HAVE_DUP2=0
    fi
  ], [
    AC_DEFINE([HAVE_DUP2], [1], [Define to 1 if you have the 'dup2' function.])
  ])
  if test $HAVE_DUP2 = 1; then
    AC_CACHE_CHECK([whether dup2 works], [gl_cv_func_dup2_works],
      [AC_RUN_IFELSE([
         AC_LANG_PROGRAM([[#include <unistd.h>
#include <fcntl.h>
#include <errno.h>]],
           [int result = 0;
#ifdef HAVE_GETDTABLESIZE
            int bad_fd = getdtablesize ();
#else
            int bad_fd = 1000000;
#endif
#ifdef FD_CLOEXEC
            if (fcntl (1, F_SETFD, FD_CLOEXEC) == -1)
              result |= 1;
#endif
            if (dup2 (1, 1) == 0)
              result |= 2;
#ifdef FD_CLOEXEC
            if (fcntl (1, F_GETFD) != FD_CLOEXEC)
              result |= 4;
#endif
            close (0);
            if (dup2 (0, 0) != -1)
              result |= 8;
            /* Many gnulib modules require POSIX conformance of EBADF.  */
            if (dup2 (2, bad_fd) == -1 && errno != EBADF)
              result |= 16;
            /* Flush out some cygwin core dumps.  */
            if (dup2 (2, -1) != -1 || errno != EBADF)
              result |= 32;
            dup2 (2, 255);
            dup2 (2, 256);
            return result;
           ])
        ],
        [gl_cv_func_dup2_works=yes], [gl_cv_func_dup2_works=no],
        [case "$host_os" in
           mingw*) # on this platform, dup2 always returns 0 for success
             gl_cv_func_dup2_works="guessing no" ;;
           cygwin*) # on cygwin 1.5.x, dup2(1,1) returns 0
             gl_cv_func_dup2_works="guessing no" ;;
           linux*) # On linux between 2008-07-27 and 2009-05-11, dup2 of a
                   # closed fd may yield -EBADF instead of -1 / errno=EBADF.
             gl_cv_func_dup2_works="guessing no" ;;
           aix* | freebsd*)
                   # on AIX 7.1 and FreeBSD 6.1, dup2 (1,toobig) gives EMFILE,
                   # not EBADF.
             gl_cv_func_dup2_works="guessing no" ;;
           haiku*) # on Haiku alpha 2, dup2(1, 1) resets FD_CLOEXEC.
             gl_cv_func_dup2_works="guessing no" ;;
           *) gl_cv_func_dup2_works="guessing yes" ;;
         esac])
      ])
    case "$gl_cv_func_dup2_works" in
      *yes) ;;
      *)
        REPLACE_DUP2=1
        AC_CHECK_FUNCS([setdtablesize])
        ;;
    esac
  fi
  dnl Replace dup2() for supporting the gnulib-defined fchdir() function,
  dnl to keep fchdir's bookkeeping up-to-date.
  m4_ifdef([gl_FUNC_FCHDIR], [
    gl_TEST_FCHDIR
    if test $HAVE_FCHDIR = 0; then
      if test $HAVE_DUP2 = 1; then
        REPLACE_DUP2=1
      fi
    fi
  ])
])

# Prerequisites of lib/dup2.c.
AC_DEFUN([gl_PREREQ_DUP2], [])
