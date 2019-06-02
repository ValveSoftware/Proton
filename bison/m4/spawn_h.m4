# spawn_h.m4 serial 16
dnl Copyright (C) 2008-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Written by Bruno Haible.

AC_DEFUN([gl_SPAWN_H],
[
  dnl Use AC_REQUIRE here, so that the default behavior below is expanded
  dnl once only, before all statements that occur in other macros.
  AC_REQUIRE([gl_SPAWN_H_DEFAULTS])

  dnl <spawn.h> is always overridden, because of GNULIB_POSIXCHECK.
  gl_CHECK_NEXT_HEADERS([spawn.h])

  if test $ac_cv_header_spawn_h = yes; then
    HAVE_SPAWN_H=1
    AC_CHECK_TYPES([posix_spawnattr_t], [], [HAVE_POSIX_SPAWNATTR_T=0], [[
#include <spawn.h>
      ]])
    AC_CHECK_TYPES([posix_spawn_file_actions_t], [],
      [HAVE_POSIX_SPAWN_FILE_ACTIONS_T=0], [[
#include <spawn.h>
      ]])
  else
    HAVE_SPAWN_H=0
    HAVE_POSIX_SPAWNATTR_T=0
    HAVE_POSIX_SPAWN_FILE_ACTIONS_T=0
  fi
  AC_SUBST([HAVE_SPAWN_H])

  dnl Ensure the type pid_t gets defined.
  AC_REQUIRE([AC_TYPE_PID_T])

  dnl Ensure the type mode_t gets defined.
  AC_REQUIRE([AC_TYPE_MODE_T])

  AC_REQUIRE([gl_HAVE_POSIX_SPAWN])

  AC_REQUIRE([AC_C_RESTRICT])

  dnl Check for declarations of anything we want to poison if the
  dnl corresponding gnulib module is not in use.
  gl_WARN_ON_USE_PREPARE([[#include <spawn.h>
    ]], [posix_spawn posix_spawnp posix_spawnattr_init posix_spawnattr_destroy
    posix_spawnattr_getsigdefault posix_spawnattr_setsigdefault
    posix_spawnattr_getsigmask posix_spawnattr_setsigmask
    posix_spawnattr_getflags posix_spawnattr_setflags
    posix_spawnattr_getpgroup posix_spawnattr_setpgroup
    posix_spawnattr_getschedpolicy posix_spawnattr_setschedpolicy
    posix_spawnattr_getschedparam posix_spawnattr_setschedparam
    posix_spawn_file_actions_init posix_spawn_file_actions_destroy
    posix_spawn_file_actions_addopen posix_spawn_file_actions_addclose
    posix_spawn_file_actions_adddup2])
])

dnl Checks whether the system has the functions posix_spawn.
dnl Sets ac_cv_func_posix_spawn and HAVE_POSIX_SPAWN.
AC_DEFUN([gl_HAVE_POSIX_SPAWN],
[
  dnl Use AC_REQUIRE here, so that the default behavior below is expanded
  dnl once only, before all statements that occur in other macros.
  AC_REQUIRE([gl_SPAWN_H_DEFAULTS])

  LIB_POSIX_SPAWN=
  AC_SUBST([LIB_POSIX_SPAWN])
  gl_saved_libs=$LIBS
    AC_SEARCH_LIBS([posix_spawn], [rt],
                   [test "$ac_cv_search_posix_spawn" = "none required" ||
                    LIB_POSIX_SPAWN=$ac_cv_search_posix_spawn])
    AC_CHECK_FUNCS([posix_spawn])
  LIBS=$gl_saved_libs

  if test $ac_cv_func_posix_spawn != yes; then
    HAVE_POSIX_SPAWN=0
  fi
])

AC_DEFUN([gl_SPAWN_MODULE_INDICATOR],
[
  dnl Use AC_REQUIRE here, so that the default settings are expanded once only.
  AC_REQUIRE([gl_SPAWN_H_DEFAULTS])
  gl_MODULE_INDICATOR_SET_VARIABLE([$1])
  dnl Define it also as a C macro, for the benefit of the unit tests.
  gl_MODULE_INDICATOR_FOR_TESTS([$1])
])

AC_DEFUN([gl_SPAWN_H_DEFAULTS],
[
  GNULIB_POSIX_SPAWN=0;                       AC_SUBST([GNULIB_POSIX_SPAWN])
  GNULIB_POSIX_SPAWNP=0;                      AC_SUBST([GNULIB_POSIX_SPAWNP])
  GNULIB_POSIX_SPAWN_FILE_ACTIONS_INIT=0;     AC_SUBST([GNULIB_POSIX_SPAWN_FILE_ACTIONS_INIT])
  GNULIB_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE=0; AC_SUBST([GNULIB_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE])
  GNULIB_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2=0;  AC_SUBST([GNULIB_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2])
  GNULIB_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN=0;  AC_SUBST([GNULIB_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN])
  GNULIB_POSIX_SPAWN_FILE_ACTIONS_DESTROY=0;  AC_SUBST([GNULIB_POSIX_SPAWN_FILE_ACTIONS_DESTROY])
  GNULIB_POSIX_SPAWNATTR_INIT=0;              AC_SUBST([GNULIB_POSIX_SPAWNATTR_INIT])
  GNULIB_POSIX_SPAWNATTR_GETFLAGS=0;          AC_SUBST([GNULIB_POSIX_SPAWNATTR_GETFLAGS])
  GNULIB_POSIX_SPAWNATTR_SETFLAGS=0;          AC_SUBST([GNULIB_POSIX_SPAWNATTR_SETFLAGS])
  GNULIB_POSIX_SPAWNATTR_GETPGROUP=0;         AC_SUBST([GNULIB_POSIX_SPAWNATTR_GETPGROUP])
  GNULIB_POSIX_SPAWNATTR_SETPGROUP=0;         AC_SUBST([GNULIB_POSIX_SPAWNATTR_SETPGROUP])
  GNULIB_POSIX_SPAWNATTR_GETSCHEDPARAM=0;     AC_SUBST([GNULIB_POSIX_SPAWNATTR_GETSCHEDPARAM])
  GNULIB_POSIX_SPAWNATTR_SETSCHEDPARAM=0;     AC_SUBST([GNULIB_POSIX_SPAWNATTR_SETSCHEDPARAM])
  GNULIB_POSIX_SPAWNATTR_GETSCHEDPOLICY=0;    AC_SUBST([GNULIB_POSIX_SPAWNATTR_GETSCHEDPOLICY])
  GNULIB_POSIX_SPAWNATTR_SETSCHEDPOLICY=0;    AC_SUBST([GNULIB_POSIX_SPAWNATTR_SETSCHEDPOLICY])
  GNULIB_POSIX_SPAWNATTR_GETSIGDEFAULT=0;     AC_SUBST([GNULIB_POSIX_SPAWNATTR_GETSIGDEFAULT])
  GNULIB_POSIX_SPAWNATTR_SETSIGDEFAULT=0;     AC_SUBST([GNULIB_POSIX_SPAWNATTR_SETSIGDEFAULT])
  GNULIB_POSIX_SPAWNATTR_GETSIGMASK=0;        AC_SUBST([GNULIB_POSIX_SPAWNATTR_GETSIGMASK])
  GNULIB_POSIX_SPAWNATTR_SETSIGMASK=0;        AC_SUBST([GNULIB_POSIX_SPAWNATTR_SETSIGMASK])
  GNULIB_POSIX_SPAWNATTR_DESTROY=0;           AC_SUBST([GNULIB_POSIX_SPAWNATTR_DESTROY])
  dnl Assume proper GNU behavior unless another module says otherwise.
  HAVE_POSIX_SPAWN=1;        AC_SUBST([HAVE_POSIX_SPAWN])
  HAVE_POSIX_SPAWNATTR_T=1;  AC_SUBST([HAVE_POSIX_SPAWNATTR_T])
  HAVE_POSIX_SPAWN_FILE_ACTIONS_T=1;
                             AC_SUBST([HAVE_POSIX_SPAWN_FILE_ACTIONS_T])
  REPLACE_POSIX_SPAWN=0;     AC_SUBST([REPLACE_POSIX_SPAWN])
  REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE=0;
                             AC_SUBST([REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE])
  REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2=0;
                             AC_SUBST([REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2])
  REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN=0;
                             AC_SUBST([REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN])
])
