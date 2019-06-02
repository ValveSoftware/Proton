# sys_stat_h.m4 serial 28   -*- Autoconf -*-
dnl Copyright (C) 2006-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Eric Blake.
dnl Provide a GNU-like <sys/stat.h>.

AC_DEFUN([gl_HEADER_SYS_STAT_H],
[
  AC_REQUIRE([gl_SYS_STAT_H_DEFAULTS])

  dnl Check for broken stat macros.
  AC_REQUIRE([AC_HEADER_STAT])

  gl_CHECK_NEXT_HEADERS([sys/stat.h])

  dnl Ensure the type mode_t gets defined.
  AC_REQUIRE([AC_TYPE_MODE_T])

  dnl Whether to override 'struct stat'.
  m4_ifdef([gl_LARGEFILE], [
    AC_REQUIRE([gl_LARGEFILE])
  ], [
    WINDOWS_64_BIT_ST_SIZE=0
  ])
  AC_SUBST([WINDOWS_64_BIT_ST_SIZE])
  if test $WINDOWS_64_BIT_ST_SIZE = 1; then
    AC_DEFINE([_GL_WINDOWS_64_BIT_ST_SIZE], [1],
      [Define to 1 if Gnulib overrides 'struct stat' on Windows so that
       struct stat.st_size becomes 64-bit.])
  fi

  dnl Define types that are supposed to be defined in <sys/types.h> or
  dnl <sys/stat.h>.
  AC_CHECK_TYPE([nlink_t], [],
    [AC_DEFINE([nlink_t], [int],
       [Define to the type of st_nlink in struct stat, or a supertype.])],
    [#include <sys/types.h>
     #include <sys/stat.h>])

  dnl Check for declarations of anything we want to poison if the
  dnl corresponding gnulib module is not in use.
  gl_WARN_ON_USE_PREPARE([[#include <sys/stat.h>
    ]], [fchmodat fstat fstatat futimens lchmod lstat mkdirat mkfifo mkfifoat
    mknod mknodat stat utimensat])
]) # gl_HEADER_SYS_STAT_H

AC_DEFUN([gl_SYS_STAT_MODULE_INDICATOR],
[
  dnl Use AC_REQUIRE here, so that the default settings are expanded once only.
  AC_REQUIRE([gl_SYS_STAT_H_DEFAULTS])
  gl_MODULE_INDICATOR_SET_VARIABLE([$1])
  dnl Define it also as a C macro, for the benefit of the unit tests.
  gl_MODULE_INDICATOR_FOR_TESTS([$1])
])

AC_DEFUN([gl_SYS_STAT_H_DEFAULTS],
[
  AC_REQUIRE([gl_UNISTD_H_DEFAULTS]) dnl for REPLACE_FCHDIR
  GNULIB_FCHMODAT=0;    AC_SUBST([GNULIB_FCHMODAT])
  GNULIB_FSTAT=0;       AC_SUBST([GNULIB_FSTAT])
  GNULIB_FSTATAT=0;     AC_SUBST([GNULIB_FSTATAT])
  GNULIB_FUTIMENS=0;    AC_SUBST([GNULIB_FUTIMENS])
  GNULIB_LCHMOD=0;      AC_SUBST([GNULIB_LCHMOD])
  GNULIB_LSTAT=0;       AC_SUBST([GNULIB_LSTAT])
  GNULIB_MKDIRAT=0;     AC_SUBST([GNULIB_MKDIRAT])
  GNULIB_MKFIFO=0;      AC_SUBST([GNULIB_MKFIFO])
  GNULIB_MKFIFOAT=0;    AC_SUBST([GNULIB_MKFIFOAT])
  GNULIB_MKNOD=0;       AC_SUBST([GNULIB_MKNOD])
  GNULIB_MKNODAT=0;     AC_SUBST([GNULIB_MKNODAT])
  GNULIB_STAT=0;        AC_SUBST([GNULIB_STAT])
  GNULIB_UTIMENSAT=0;   AC_SUBST([GNULIB_UTIMENSAT])
  dnl Assume proper GNU behavior unless another module says otherwise.
  HAVE_FCHMODAT=1;      AC_SUBST([HAVE_FCHMODAT])
  HAVE_FSTATAT=1;       AC_SUBST([HAVE_FSTATAT])
  HAVE_FUTIMENS=1;      AC_SUBST([HAVE_FUTIMENS])
  HAVE_LCHMOD=1;        AC_SUBST([HAVE_LCHMOD])
  HAVE_LSTAT=1;         AC_SUBST([HAVE_LSTAT])
  HAVE_MKDIRAT=1;       AC_SUBST([HAVE_MKDIRAT])
  HAVE_MKFIFO=1;        AC_SUBST([HAVE_MKFIFO])
  HAVE_MKFIFOAT=1;      AC_SUBST([HAVE_MKFIFOAT])
  HAVE_MKNOD=1;         AC_SUBST([HAVE_MKNOD])
  HAVE_MKNODAT=1;       AC_SUBST([HAVE_MKNODAT])
  HAVE_UTIMENSAT=1;     AC_SUBST([HAVE_UTIMENSAT])
  REPLACE_FSTAT=0;      AC_SUBST([REPLACE_FSTAT])
  REPLACE_FSTATAT=0;    AC_SUBST([REPLACE_FSTATAT])
  REPLACE_FUTIMENS=0;   AC_SUBST([REPLACE_FUTIMENS])
  REPLACE_LSTAT=0;      AC_SUBST([REPLACE_LSTAT])
  REPLACE_MKDIR=0;      AC_SUBST([REPLACE_MKDIR])
  REPLACE_MKFIFO=0;     AC_SUBST([REPLACE_MKFIFO])
  REPLACE_MKNOD=0;      AC_SUBST([REPLACE_MKNOD])
  REPLACE_STAT=0;       AC_SUBST([REPLACE_STAT])
  REPLACE_UTIMENSAT=0;  AC_SUBST([REPLACE_UTIMENSAT])
])
