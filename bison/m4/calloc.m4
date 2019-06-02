# calloc.m4 serial 15

# Copyright (C) 2004-2015 Free Software Foundation, Inc.
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# Written by Jim Meyering.

# Determine whether calloc (N, S) returns non-NULL when N*S is zero,
# and returns NULL when N*S overflows.
# If so, define HAVE_CALLOC.  Otherwise, define calloc to rpl_calloc
# and arrange to use a calloc wrapper function that does work in that case.

# _AC_FUNC_CALLOC_IF([IF-WORKS], [IF-NOT])
# -------------------------------------
# If 'calloc (0, 0)' is properly handled, run IF-WORKS, otherwise, IF-NOT.
AC_DEFUN([_AC_FUNC_CALLOC_IF],
[
  AC_REQUIRE([AC_TYPE_SIZE_T])dnl
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([for GNU libc compatible calloc],
    [ac_cv_func_calloc_0_nonnull],
    [AC_RUN_IFELSE(
       [AC_LANG_PROGRAM(
          [AC_INCLUDES_DEFAULT],
          [[int result = 0;
            if (!calloc (0, 0))
              result |= 1;
            if (calloc ((size_t) -1 / 8 + 1, 8))
              result |= 2;
            return result;
          ]])],
       [ac_cv_func_calloc_0_nonnull=yes],
       [ac_cv_func_calloc_0_nonnull=no],
       [case "$host_os" in
                  # Guess yes on glibc systems.
          *-gnu*) ac_cv_func_calloc_0_nonnull="guessing yes" ;;
                  # If we don't know, assume the worst.
          *)      ac_cv_func_calloc_0_nonnull="guessing no" ;;
        esac
       ])])
  case "$ac_cv_func_calloc_0_nonnull" in
    *yes)
      $1
      ;;
    *)
      $2
      ;;
  esac
])# AC_FUNC_CALLOC


# gl_FUNC_CALLOC_GNU
# ------------------
# Report whether 'calloc (0, 0)' is properly handled, and replace calloc if
# needed.
AC_DEFUN([gl_FUNC_CALLOC_GNU],
[
  AC_REQUIRE([gl_STDLIB_H_DEFAULTS])
  _AC_FUNC_CALLOC_IF(
    [AC_DEFINE([HAVE_CALLOC_GNU], [1],
               [Define to 1 if your system has a GNU libc compatible 'calloc'
                function, and to 0 otherwise.])],
    [AC_DEFINE([HAVE_CALLOC_GNU], [0])
     REPLACE_CALLOC=1
    ])
])# gl_FUNC_CALLOC_GNU


# gl_FUNC_CALLOC_POSIX
# --------------------
# Test whether 'calloc' is POSIX compliant (sets errno to ENOMEM when it
# fails), and replace calloc if it is not.
AC_DEFUN([gl_FUNC_CALLOC_POSIX],
[
  AC_REQUIRE([gl_STDLIB_H_DEFAULTS])
  AC_REQUIRE([gl_CHECK_MALLOC_POSIX])
  if test $gl_cv_func_malloc_posix = yes; then
    AC_DEFINE([HAVE_CALLOC_POSIX], [1],
      [Define if the 'calloc' function is POSIX compliant.])
  else
    REPLACE_CALLOC=1
  fi
])
