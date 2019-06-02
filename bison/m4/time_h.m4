# Configure a more-standard replacement for <time.h>.

# Copyright (C) 2000-2001, 2003-2007, 2009-2015 Free Software Foundation, Inc.

# serial 9

# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# Written by Paul Eggert and Jim Meyering.

AC_DEFUN([gl_HEADER_TIME_H],
[
  dnl Use AC_REQUIRE here, so that the default behavior below is expanded
  dnl once only, before all statements that occur in other macros.
  AC_REQUIRE([gl_HEADER_TIME_H_BODY])
])

AC_DEFUN([gl_HEADER_TIME_H_BODY],
[
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([gl_HEADER_TIME_H_DEFAULTS])
  gl_NEXT_HEADERS([time.h])
  AC_REQUIRE([gl_CHECK_TYPE_STRUCT_TIMESPEC])
])

dnl Check whether 'struct timespec' is declared
dnl in time.h, sys/time.h, pthread.h, or unistd.h.

AC_DEFUN([gl_CHECK_TYPE_STRUCT_TIMESPEC],
[
  AC_CHECK_HEADERS_ONCE([sys/time.h])
  AC_CACHE_CHECK([for struct timespec in <time.h>],
    [gl_cv_sys_struct_timespec_in_time_h],
    [AC_COMPILE_IFELSE(
       [AC_LANG_PROGRAM(
          [[#include <time.h>
          ]],
          [[static struct timespec x; x.tv_sec = x.tv_nsec;]])],
       [gl_cv_sys_struct_timespec_in_time_h=yes],
       [gl_cv_sys_struct_timespec_in_time_h=no])])

  TIME_H_DEFINES_STRUCT_TIMESPEC=0
  SYS_TIME_H_DEFINES_STRUCT_TIMESPEC=0
  PTHREAD_H_DEFINES_STRUCT_TIMESPEC=0
  UNISTD_H_DEFINES_STRUCT_TIMESPEC=0
  if test $gl_cv_sys_struct_timespec_in_time_h = yes; then
    TIME_H_DEFINES_STRUCT_TIMESPEC=1
  else
    AC_CACHE_CHECK([for struct timespec in <sys/time.h>],
      [gl_cv_sys_struct_timespec_in_sys_time_h],
      [AC_COMPILE_IFELSE(
         [AC_LANG_PROGRAM(
            [[#include <sys/time.h>
            ]],
            [[static struct timespec x; x.tv_sec = x.tv_nsec;]])],
         [gl_cv_sys_struct_timespec_in_sys_time_h=yes],
         [gl_cv_sys_struct_timespec_in_sys_time_h=no])])
    if test $gl_cv_sys_struct_timespec_in_sys_time_h = yes; then
      SYS_TIME_H_DEFINES_STRUCT_TIMESPEC=1
    else
      AC_CACHE_CHECK([for struct timespec in <pthread.h>],
        [gl_cv_sys_struct_timespec_in_pthread_h],
        [AC_COMPILE_IFELSE(
           [AC_LANG_PROGRAM(
              [[#include <pthread.h>
              ]],
              [[static struct timespec x; x.tv_sec = x.tv_nsec;]])],
           [gl_cv_sys_struct_timespec_in_pthread_h=yes],
           [gl_cv_sys_struct_timespec_in_pthread_h=no])])
      if test $gl_cv_sys_struct_timespec_in_pthread_h = yes; then
        PTHREAD_H_DEFINES_STRUCT_TIMESPEC=1
      else
        AC_CACHE_CHECK([for struct timespec in <unistd.h>],
          [gl_cv_sys_struct_timespec_in_unistd_h],
          [AC_COMPILE_IFELSE(
             [AC_LANG_PROGRAM(
                [[#include <unistd.h>
                ]],
                [[static struct timespec x; x.tv_sec = x.tv_nsec;]])],
             [gl_cv_sys_struct_timespec_in_unistd_h=yes],
             [gl_cv_sys_struct_timespec_in_unistd_h=no])])
        if test $gl_cv_sys_struct_timespec_in_unistd_h = yes; then
          UNISTD_H_DEFINES_STRUCT_TIMESPEC=1
        fi
      fi
    fi
  fi
  AC_SUBST([TIME_H_DEFINES_STRUCT_TIMESPEC])
  AC_SUBST([SYS_TIME_H_DEFINES_STRUCT_TIMESPEC])
  AC_SUBST([PTHREAD_H_DEFINES_STRUCT_TIMESPEC])
  AC_SUBST([UNISTD_H_DEFINES_STRUCT_TIMESPEC])
])

AC_DEFUN([gl_TIME_MODULE_INDICATOR],
[
  dnl Use AC_REQUIRE here, so that the default settings are expanded once only.
  AC_REQUIRE([gl_HEADER_TIME_H_DEFAULTS])
  gl_MODULE_INDICATOR_SET_VARIABLE([$1])
  dnl Define it also as a C macro, for the benefit of the unit tests.
  gl_MODULE_INDICATOR_FOR_TESTS([$1])
])

AC_DEFUN([gl_HEADER_TIME_H_DEFAULTS],
[
  GNULIB_MKTIME=0;                       AC_SUBST([GNULIB_MKTIME])
  GNULIB_NANOSLEEP=0;                    AC_SUBST([GNULIB_NANOSLEEP])
  GNULIB_STRPTIME=0;                     AC_SUBST([GNULIB_STRPTIME])
  GNULIB_TIMEGM=0;                       AC_SUBST([GNULIB_TIMEGM])
  GNULIB_TIME_R=0;                       AC_SUBST([GNULIB_TIME_R])
  dnl Assume proper GNU behavior unless another module says otherwise.
  HAVE_DECL_LOCALTIME_R=1;               AC_SUBST([HAVE_DECL_LOCALTIME_R])
  HAVE_NANOSLEEP=1;                      AC_SUBST([HAVE_NANOSLEEP])
  HAVE_STRPTIME=1;                       AC_SUBST([HAVE_STRPTIME])
  HAVE_TIMEGM=1;                         AC_SUBST([HAVE_TIMEGM])
  dnl If another module says to replace or to not replace, do that.
  dnl Otherwise, replace only if someone compiles with -DGNULIB_PORTCHECK;
  dnl this lets maintainers check for portability.
  REPLACE_LOCALTIME_R=GNULIB_PORTCHECK;  AC_SUBST([REPLACE_LOCALTIME_R])
  REPLACE_MKTIME=GNULIB_PORTCHECK;       AC_SUBST([REPLACE_MKTIME])
  REPLACE_NANOSLEEP=GNULIB_PORTCHECK;    AC_SUBST([REPLACE_NANOSLEEP])
  REPLACE_TIMEGM=GNULIB_PORTCHECK;       AC_SUBST([REPLACE_TIMEGM])

  dnl Hack so that the time module doesn't depend on the sys_time module.
  dnl First, default GNULIB_GETTIMEOFDAY to 0 if sys_time is absent.
  : ${GNULIB_GETTIMEOFDAY=0};            AC_SUBST([GNULIB_GETTIMEOFDAY])
  dnl Second, it's OK to not use GNULIB_PORTCHECK for REPLACE_GMTIME
  dnl and REPLACE_LOCALTIME, as portability to Solaris 2.6 and earlier
  dnl is no longer a big deal.
  REPLACE_GMTIME=0;                      AC_SUBST([REPLACE_GMTIME])
  REPLACE_LOCALTIME=0;                   AC_SUBST([REPLACE_LOCALTIME])
])
