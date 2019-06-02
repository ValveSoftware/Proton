# strchrnul.m4 serial 9
dnl Copyright (C) 2003, 2007, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_STRCHRNUL],
[
  dnl Persuade glibc <string.h> to declare strchrnul().
  AC_REQUIRE([AC_USE_SYSTEM_EXTENSIONS])

  AC_REQUIRE([gl_HEADER_STRING_H_DEFAULTS])
  AC_CHECK_FUNCS([strchrnul])
  if test $ac_cv_func_strchrnul = no; then
    HAVE_STRCHRNUL=0
  else
    AC_CACHE_CHECK([whether strchrnul works],
      [gl_cv_func_strchrnul_works],
      [AC_RUN_IFELSE([AC_LANG_PROGRAM([[
#include <string.h> /* for strchrnul */
]], [[const char *buf = "a";
      return strchrnul (buf, 'b') != buf + 1;
    ]])],
        [gl_cv_func_strchrnul_works=yes],
        [gl_cv_func_strchrnul_works=no],
        [dnl Cygwin 1.7.9 introduced strchrnul, but it was broken until 1.7.10
         AC_EGREP_CPP([Lucky user],
           [
#if defined __CYGWIN__
 #include <cygwin/version.h>
 #if CYGWIN_VERSION_DLL_COMBINED > CYGWIN_VERSION_DLL_MAKE_COMBINED (1007, 9)
  Lucky user
 #endif
#else
  Lucky user
#endif
           ],
           [gl_cv_func_strchrnul_works="guessing yes"],
           [gl_cv_func_strchrnul_works="guessing no"])
        ])
      ])
    case "$gl_cv_func_strchrnul_works" in
      *yes) ;;
      *) REPLACE_STRCHRNUL=1 ;;
    esac
  fi
])

# Prerequisites of lib/strchrnul.c.
AC_DEFUN([gl_PREREQ_STRCHRNUL], [:])
