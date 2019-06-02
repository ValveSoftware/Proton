# fcntl.m4 serial 5
dnl Copyright (C) 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# For now, this module ensures that fcntl()
# - supports F_DUPFD correctly
# - supports or emulates F_DUPFD_CLOEXEC
# - supports F_GETFD
# Still to be ported to mingw:
# - F_SETFD
# - F_GETFL, F_SETFL
# - F_GETOWN, F_SETOWN
# - F_GETLK, F_SETLK, F_SETLKW
AC_DEFUN([gl_FUNC_FCNTL],
[
  dnl Persuade glibc to expose F_DUPFD_CLOEXEC.
  AC_REQUIRE([gl_USE_SYSTEM_EXTENSIONS])
  AC_REQUIRE([gl_FCNTL_H_DEFAULTS])
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_CHECK_FUNCS_ONCE([fcntl getdtablesize])
  if test $ac_cv_func_fcntl = no; then
    gl_REPLACE_FCNTL
  else
    dnl cygwin 1.5.x F_DUPFD has wrong errno, and allows negative target
    dnl haiku alpha 2 F_DUPFD has wrong errno
    AC_CACHE_CHECK([whether fcntl handles F_DUPFD correctly],
      [gl_cv_func_fcntl_f_dupfd_works],
      [AC_RUN_IFELSE([AC_LANG_PROGRAM([[
#ifdef HAVE_GETDTABLESIZE
# include <unistd.h>
#endif
#include <fcntl.h>
#include <errno.h>
]], [[int result = 0;
#ifdef HAVE_GETDTABLESIZE
      int bad_fd = getdtablesize ();
#else
      int bad_fd = 1000000;
#endif
      if (fcntl (0, F_DUPFD, -1) != -1) result |= 1;
      if (errno != EINVAL) result |= 2;
      if (fcntl (0, F_DUPFD, bad_fd) != -1) result |= 4;
      if (errno != EINVAL) result |= 8;
      return result;
         ]])],
         [gl_cv_func_fcntl_f_dupfd_works=yes],
         [gl_cv_func_fcntl_f_dupfd_works=no],
         [# Guess that it works on glibc systems
          case $host_os in #((
            *-gnu*) gl_cv_func_fcntl_f_dupfd_works="guessing yes";;
            *)      gl_cv_func_fcntl_f_dupfd_works="guessing no";;
          esac])])
    case $gl_cv_func_fcntl_f_dupfd_works in
      *yes) ;;
      *) gl_REPLACE_FCNTL
        AC_DEFINE([FCNTL_DUPFD_BUGGY], [1], [Define this to 1 if F_DUPFD
          behavior does not match POSIX]) ;;
    esac

    dnl Many systems lack F_DUPFD_CLOEXEC
    AC_CACHE_CHECK([whether fcntl understands F_DUPFD_CLOEXEC],
      [gl_cv_func_fcntl_f_dupfd_cloexec],
      [AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[
#include <fcntl.h>
#ifndef F_DUPFD_CLOEXEC
choke me
#endif
         ]])],
         [AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[
#ifdef __linux__
/* The Linux kernel only added F_DUPFD_CLOEXEC in 2.6.24, so we always replace
   it to support the semantics on older kernels that failed with EINVAL.  */
choke me
#endif
           ]])],
           [gl_cv_func_fcntl_f_dupfd_cloexec=yes],
           [gl_cv_func_fcntl_f_dupfd_cloexec="needs runtime check"])],
         [gl_cv_func_fcntl_f_dupfd_cloexec=no])])
    if test "$gl_cv_func_fcntl_f_dupfd_cloexec" != yes; then
      gl_REPLACE_FCNTL
      dnl No witness macro needed for this bug.
    fi
  fi
  dnl Replace fcntl() for supporting the gnulib-defined fchdir() function,
  dnl to keep fchdir's bookkeeping up-to-date.
  m4_ifdef([gl_FUNC_FCHDIR], [
    gl_TEST_FCHDIR
    if test $HAVE_FCHDIR = 0; then
      gl_REPLACE_FCNTL
    fi
  ])
])

AC_DEFUN([gl_REPLACE_FCNTL],
[
  AC_REQUIRE([gl_FCNTL_H_DEFAULTS])
  AC_CHECK_FUNCS_ONCE([fcntl])
  if test $ac_cv_func_fcntl = no; then
    HAVE_FCNTL=0
  else
    REPLACE_FCNTL=1
  fi
])
