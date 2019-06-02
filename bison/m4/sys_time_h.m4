# Configure a replacement for <sys/time.h>.
# serial 8

# Copyright (C) 2007, 2009-2015 Free Software Foundation, Inc.
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# Written by Paul Eggert and Martin Lambers.

AC_DEFUN([gl_HEADER_SYS_TIME_H],
[
  dnl Use AC_REQUIRE here, so that the REPLACE_GETTIMEOFDAY=0 statement
  dnl below is expanded once only, before all REPLACE_GETTIMEOFDAY=1
  dnl statements that occur in other macros.
  AC_REQUIRE([gl_HEADER_SYS_TIME_H_BODY])
])

AC_DEFUN([gl_HEADER_SYS_TIME_H_BODY],
[
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([gl_HEADER_SYS_TIME_H_DEFAULTS])
  AC_CHECK_HEADERS_ONCE([sys/time.h])
  gl_CHECK_NEXT_HEADERS([sys/time.h])

  if test $ac_cv_header_sys_time_h != yes; then
    HAVE_SYS_TIME_H=0
  fi

  dnl On native Windows with MSVC, 'struct timeval' is defined in <winsock2.h>
  dnl only. So include that header in the list.
  gl_PREREQ_SYS_H_WINSOCK2
  AC_CACHE_CHECK([for struct timeval], [gl_cv_sys_struct_timeval],
    [AC_COMPILE_IFELSE(
       [AC_LANG_PROGRAM(
          [[#if HAVE_SYS_TIME_H
             #include <sys/time.h>
            #endif
            #include <time.h>
            #if HAVE_WINSOCK2_H
            # include <winsock2.h>
            #endif
          ]],
          [[static struct timeval x; x.tv_sec = x.tv_usec;]])],
       [gl_cv_sys_struct_timeval=yes],
       [gl_cv_sys_struct_timeval=no])
    ])
  if test $gl_cv_sys_struct_timeval != yes; then
    HAVE_STRUCT_TIMEVAL=0
  else
    dnl On native Windows with a 64-bit 'time_t', 'struct timeval' is defined
    dnl (in <sys/time.h> and <winsock2.h> for mingw64, in <winsock2.h> only
    dnl for MSVC) with a tv_sec field of type 'long' (32-bit!), which is
    dnl smaller than the 'time_t' type mandated by POSIX.
    dnl On OpenBSD 5.1 amd64, tv_sec is 64 bits and time_t 32 bits, but
    dnl that is good enough.
    AC_CACHE_CHECK([for wide-enough struct timeval.tv_sec member],
      [gl_cv_sys_struct_timeval_tv_sec],
      [AC_COMPILE_IFELSE(
         [AC_LANG_PROGRAM(
            [[#if HAVE_SYS_TIME_H
               #include <sys/time.h>
              #endif
              #include <time.h>
              #if HAVE_WINSOCK2_H
              # include <winsock2.h>
              #endif
            ]],
            [[static struct timeval x;
              typedef int verify_tv_sec_type[
                sizeof (time_t) <= sizeof x.tv_sec ? 1 : -1
              ];
            ]])],
         [gl_cv_sys_struct_timeval_tv_sec=yes],
         [gl_cv_sys_struct_timeval_tv_sec=no])
      ])
    if test $gl_cv_sys_struct_timeval_tv_sec != yes; then
      REPLACE_STRUCT_TIMEVAL=1
    fi
  fi

  dnl Check for declarations of anything we want to poison if the
  dnl corresponding gnulib module is not in use.
  gl_WARN_ON_USE_PREPARE([[
#if HAVE_SYS_TIME_H
# include <sys/time.h>
#endif
#include <time.h>
    ]], [gettimeofday])
])

AC_DEFUN([gl_SYS_TIME_MODULE_INDICATOR],
[
  dnl Use AC_REQUIRE here, so that the default settings are expanded once only.
  AC_REQUIRE([gl_HEADER_SYS_TIME_H_DEFAULTS])
  gl_MODULE_INDICATOR_SET_VARIABLE([$1])
  dnl Define it also as a C macro, for the benefit of the unit tests.
  gl_MODULE_INDICATOR_FOR_TESTS([$1])
])

AC_DEFUN([gl_HEADER_SYS_TIME_H_DEFAULTS],
[
  GNULIB_GETTIMEOFDAY=0;     AC_SUBST([GNULIB_GETTIMEOFDAY])
  dnl Assume POSIX behavior unless another module says otherwise.
  HAVE_GETTIMEOFDAY=1;       AC_SUBST([HAVE_GETTIMEOFDAY])
  HAVE_STRUCT_TIMEVAL=1;     AC_SUBST([HAVE_STRUCT_TIMEVAL])
  HAVE_SYS_TIME_H=1;         AC_SUBST([HAVE_SYS_TIME_H])
  REPLACE_GETTIMEOFDAY=0;    AC_SUBST([REPLACE_GETTIMEOFDAY])
  REPLACE_STRUCT_TIMEVAL=0;  AC_SUBST([REPLACE_STRUCT_TIMEVAL])
])
