# perror.m4 serial 6
dnl Copyright (C) 2008-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_PERROR],
[
  AC_REQUIRE([gl_STDIO_H_DEFAULTS])
  AC_REQUIRE([gl_HEADER_ERRNO_H])
  AC_REQUIRE([gl_FUNC_STRERROR_R])
  AC_REQUIRE([gl_FUNC_STRERROR_0])
  dnl We intentionally do not check for the broader REPLACE_STRERROR_R,
  dnl since on glibc systems, strerror_r is replaced only for signature
  dnl issues, and perror is just fine.  Rather, we only want to
  dnl replace perror if strerror_r was replaced for a content fix.
  if test "$ERRNO_H:$REPLACE_STRERROR_0" != :0; then
    dnl The system's perror() cannot know about the new errno values we add
    dnl to <errno.h>, or any fix for strerror(0). Replace it.
    REPLACE_PERROR=1
  fi
  case ${gl_cv_func_strerror_r_works-unset} in
    unset|*yes)
      AC_CACHE_CHECK([whether perror matches strerror],
        [gl_cv_func_perror_works],
        [AC_RUN_IFELSE(
           [AC_LANG_PROGRAM(
              [[#include <errno.h>
                #include <stdio.h>
                #include <stdlib.h>
                #include <string.h>
              ]],
              [[char *str = strerror (-1);
                if (!getenv("CONFTEST_OUTPUT")) return 0;
                if (!str) str = "";
                puts (str);
                errno = -1;
                perror ("");
                return 0;
              ]])],
           [if CONFTEST_OUTPUT=1 ./conftest$EXEEXT >conftest.txt1 2>conftest.txt2 \
               && cmp conftest.txt1 conftest.txt2 >/dev/null; then
              gl_cv_func_perror_works=yes
            else
              gl_cv_func_perror_works=no
            fi
            rm -rf conftest.txt1 conftest.txt2],
           [gl_cv_func_perror_works=no],
           [dnl Guess no when cross-compiling.
            gl_cv_func_perror_works="guessing no"
           ])
        ])
      if test "$gl_cv_func_perror_works" != yes; then
        REPLACE_PERROR=1
      fi
      ;;
    *)
      dnl The system's perror() probably inherits the bugs in the
      dnl system's strerror_r(). Replace it.
      REPLACE_PERROR=1
      ;;
  esac
])
