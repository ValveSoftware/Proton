# realloc.m4 serial 13
dnl Copyright (C) 2007, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

m4_version_prereq([2.70], [] ,[

# This is taken from the following Autoconf patch:
# http://git.savannah.gnu.org/gitweb/?p=autoconf.git;a=commitdiff;h=7fbb553727ed7e0e689a17594b58559ecf3ea6e9
AC_DEFUN([_AC_FUNC_REALLOC_IF],
[
  AC_REQUIRE([AC_HEADER_STDC])dnl
  AC_REQUIRE([AC_CANONICAL_HOST])dnl for cross-compiles
  AC_CHECK_HEADERS([stdlib.h])
  AC_CACHE_CHECK([for GNU libc compatible realloc],
    [ac_cv_func_realloc_0_nonnull],
    [AC_RUN_IFELSE(
       [AC_LANG_PROGRAM(
          [[#if defined STDC_HEADERS || defined HAVE_STDLIB_H
            # include <stdlib.h>
            #else
            char *realloc ();
            #endif
          ]],
          [[return ! realloc (0, 0);]])
       ],
       [ac_cv_func_realloc_0_nonnull=yes],
       [ac_cv_func_realloc_0_nonnull=no],
       [case "$host_os" in
          # Guess yes on platforms where we know the result.
          *-gnu* | freebsd* | netbsd* | openbsd* \
          | hpux* | solaris* | cygwin* | mingw*)
            ac_cv_func_realloc_0_nonnull=yes ;;
          # If we don't know, assume the worst.
          *) ac_cv_func_realloc_0_nonnull=no ;;
        esac
       ])
    ])
  AS_IF([test $ac_cv_func_realloc_0_nonnull = yes], [$1], [$2])
])# AC_FUNC_REALLOC

])

# gl_FUNC_REALLOC_GNU
# -------------------
# Test whether 'realloc (0, 0)' is handled like in GNU libc, and replace
# realloc if it is not.
AC_DEFUN([gl_FUNC_REALLOC_GNU],
[
  AC_REQUIRE([gl_STDLIB_H_DEFAULTS])
  dnl _AC_FUNC_REALLOC_IF is defined in Autoconf.
  _AC_FUNC_REALLOC_IF(
    [AC_DEFINE([HAVE_REALLOC_GNU], [1],
               [Define to 1 if your system has a GNU libc compatible 'realloc'
                function, and to 0 otherwise.])],
    [AC_DEFINE([HAVE_REALLOC_GNU], [0])
     REPLACE_REALLOC=1
    ])
])# gl_FUNC_REALLOC_GNU

# gl_FUNC_REALLOC_POSIX
# ---------------------
# Test whether 'realloc' is POSIX compliant (sets errno to ENOMEM when it
# fails), and replace realloc if it is not.
AC_DEFUN([gl_FUNC_REALLOC_POSIX],
[
  AC_REQUIRE([gl_STDLIB_H_DEFAULTS])
  AC_REQUIRE([gl_CHECK_MALLOC_POSIX])
  if test $gl_cv_func_malloc_posix = yes; then
    AC_DEFINE([HAVE_REALLOC_POSIX], [1],
      [Define if the 'realloc' function is POSIX compliant.])
  else
    REPLACE_REALLOC=1
  fi
])
