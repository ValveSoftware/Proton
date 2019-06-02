# inttypes.m4 serial 26
dnl Copyright (C) 2006-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Derek Price, Bruno Haible.
dnl Test whether <inttypes.h> is supported or must be substituted.

AC_DEFUN([gl_INTTYPES_H],
[
  AC_REQUIRE([gl_INTTYPES_INCOMPLETE])
  gl_INTTYPES_PRI_SCN
])

AC_DEFUN_ONCE([gl_INTTYPES_INCOMPLETE],
[
  AC_REQUIRE([gl_STDINT_H])
  AC_CHECK_HEADERS_ONCE([inttypes.h])

  dnl Override <inttypes.h> always, so that the portability warnings work.
  AC_REQUIRE([gl_INTTYPES_H_DEFAULTS])
  gl_CHECK_NEXT_HEADERS([inttypes.h])

  AC_REQUIRE([gl_MULTIARCH])

  dnl Check for declarations of anything we want to poison if the
  dnl corresponding gnulib module is not in use.
  gl_WARN_ON_USE_PREPARE([[#include <inttypes.h>
    ]], [imaxabs imaxdiv strtoimax strtoumax])
])

# Ensure that the PRI* and SCN* macros are defined appropriately.
AC_DEFUN([gl_INTTYPES_PRI_SCN],
[
  AC_REQUIRE([gt_INTTYPES_PRI])

  PRIPTR_PREFIX=
  if test -n "$STDINT_H"; then
    dnl Using the gnulib <stdint.h>. It always defines intptr_t to 'long'.
    PRIPTR_PREFIX='"l"'
  else
    dnl Using the system's <stdint.h>.
    for glpfx in '' l ll I64; do
      case $glpfx in
        '')  gltype1='int';;
        l)   gltype1='long int';;
        ll)  gltype1='long long int';;
        I64) gltype1='__int64';;
      esac
      AC_COMPILE_IFELSE(
        [AC_LANG_PROGRAM([[#include <stdint.h>
           extern intptr_t foo;
           extern $gltype1 foo;]])],
        [PRIPTR_PREFIX='"'$glpfx'"'])
      test -n "$PRIPTR_PREFIX" && break
    done
  fi
  AC_SUBST([PRIPTR_PREFIX])

  gl_INTTYPES_CHECK_LONG_LONG_INT_CONDITION(
    [INT32_MAX_LT_INTMAX_MAX],
    [defined INT32_MAX && defined INTMAX_MAX],
    [INT32_MAX < INTMAX_MAX],
    [sizeof (int) < sizeof (long long int)])
  if test $APPLE_UNIVERSAL_BUILD = 0; then
    gl_INTTYPES_CHECK_LONG_LONG_INT_CONDITION(
      [INT64_MAX_EQ_LONG_MAX],
      [defined INT64_MAX],
      [INT64_MAX == LONG_MAX],
      [sizeof (long long int) == sizeof (long int)])
  else
    INT64_MAX_EQ_LONG_MAX=-1
  fi
  gl_INTTYPES_CHECK_LONG_LONG_INT_CONDITION(
    [UINT32_MAX_LT_UINTMAX_MAX],
    [defined UINT32_MAX && defined UINTMAX_MAX],
    [UINT32_MAX < UINTMAX_MAX],
    [sizeof (unsigned int) < sizeof (unsigned long long int)])
  if test $APPLE_UNIVERSAL_BUILD = 0; then
    gl_INTTYPES_CHECK_LONG_LONG_INT_CONDITION(
      [UINT64_MAX_EQ_ULONG_MAX],
      [defined UINT64_MAX],
      [UINT64_MAX == ULONG_MAX],
      [sizeof (unsigned long long int) == sizeof (unsigned long int)])
  else
    UINT64_MAX_EQ_ULONG_MAX=-1
  fi
])

# Define the symbol $1 to be 1 if the condition is true, 0 otherwise.
# If $2 is true, the condition is $3; otherwise if long long int is supported
# approximate the condition with $4; otherwise, assume the condition is false.
# The condition should work on all C99 platforms; the approximations should be
# good enough to work on all practical pre-C99 platforms.
# $2 is evaluated by the C preprocessor, $3 and $4 as compile-time constants.
AC_DEFUN([gl_INTTYPES_CHECK_LONG_LONG_INT_CONDITION],
[
  AC_CACHE_CHECK([whether $3],
    [gl_cv_test_$1],
    [AC_COMPILE_IFELSE(
       [AC_LANG_PROGRAM(
          [[/* Work also in C++ mode.  */
            #define __STDC_LIMIT_MACROS 1

            /* Work if build is not clean.  */
            #define _GL_JUST_INCLUDE_SYSTEM_STDINT_H

            #include <limits.h>
            #if HAVE_STDINT_H
             #include <stdint.h>
            #endif

            #if $2
             #define CONDITION ($3)
            #elif HAVE_LONG_LONG_INT
             #define CONDITION ($4)
            #else
             #define CONDITION 0
            #endif
            int test[CONDITION ? 1 : -1];]])],
       [gl_cv_test_$1=yes],
       [gl_cv_test_$1=no])])
  if test $gl_cv_test_$1 = yes; then
    $1=1;
  else
    $1=0;
  fi
  AC_SUBST([$1])
])

AC_DEFUN([gl_INTTYPES_MODULE_INDICATOR],
[
  dnl Use AC_REQUIRE here, so that the default settings are expanded once only.
  AC_REQUIRE([gl_INTTYPES_H_DEFAULTS])
  gl_MODULE_INDICATOR_SET_VARIABLE([$1])
])

AC_DEFUN([gl_INTTYPES_H_DEFAULTS],
[
  GNULIB_IMAXABS=0;      AC_SUBST([GNULIB_IMAXABS])
  GNULIB_IMAXDIV=0;      AC_SUBST([GNULIB_IMAXDIV])
  GNULIB_STRTOIMAX=0;    AC_SUBST([GNULIB_STRTOIMAX])
  GNULIB_STRTOUMAX=0;    AC_SUBST([GNULIB_STRTOUMAX])
  dnl Assume proper GNU behavior unless another module says otherwise.
  HAVE_DECL_IMAXABS=1;   AC_SUBST([HAVE_DECL_IMAXABS])
  HAVE_DECL_IMAXDIV=1;   AC_SUBST([HAVE_DECL_IMAXDIV])
  HAVE_DECL_STRTOIMAX=1; AC_SUBST([HAVE_DECL_STRTOIMAX])
  HAVE_DECL_STRTOUMAX=1; AC_SUBST([HAVE_DECL_STRTOUMAX])
  REPLACE_STRTOIMAX=0;   AC_SUBST([REPLACE_STRTOIMAX])
  REPLACE_STRTOUMAX=0;   AC_SUBST([REPLACE_STRTOUMAX])
  INT32_MAX_LT_INTMAX_MAX=1;  AC_SUBST([INT32_MAX_LT_INTMAX_MAX])
  INT64_MAX_EQ_LONG_MAX='defined _LP64';  AC_SUBST([INT64_MAX_EQ_LONG_MAX])
  PRI_MACROS_BROKEN=0;   AC_SUBST([PRI_MACROS_BROKEN])
  PRIPTR_PREFIX=__PRIPTR_PREFIX;  AC_SUBST([PRIPTR_PREFIX])
  UINT32_MAX_LT_UINTMAX_MAX=1;  AC_SUBST([UINT32_MAX_LT_UINTMAX_MAX])
  UINT64_MAX_EQ_ULONG_MAX='defined _LP64';  AC_SUBST([UINT64_MAX_EQ_ULONG_MAX])
])
