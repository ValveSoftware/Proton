# environ.m4 serial 6
dnl Copyright (C) 2001-2004, 2006-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN_ONCE([gl_ENVIRON],
[
  AC_REQUIRE([gl_UNISTD_H_DEFAULTS])
  dnl Persuade glibc <unistd.h> to declare environ.
  AC_REQUIRE([gl_USE_SYSTEM_EXTENSIONS])

  AC_CHECK_HEADERS_ONCE([unistd.h])
  gt_CHECK_VAR_DECL(
    [#if HAVE_UNISTD_H
     #include <unistd.h>
     #endif
     /* mingw, BeOS, Haiku declare environ in <stdlib.h>, not in <unistd.h>.  */
     #include <stdlib.h>
    ],
    [environ])
  if test $gt_cv_var_environ_declaration != yes; then
    HAVE_DECL_ENVIRON=0
  fi
])

# Check if a variable is properly declared.
# gt_CHECK_VAR_DECL(includes,variable)
AC_DEFUN([gt_CHECK_VAR_DECL],
[
  define([gt_cv_var], [gt_cv_var_]$2[_declaration])
  AC_MSG_CHECKING([if $2 is properly declared])
  AC_CACHE_VAL([gt_cv_var], [
    AC_COMPILE_IFELSE(
      [AC_LANG_PROGRAM(
         [[$1
           extern struct { int foo; } $2;]],
         [[$2.foo = 1;]])],
      [gt_cv_var=no],
      [gt_cv_var=yes])])
  AC_MSG_RESULT([$gt_cv_var])
  if test $gt_cv_var = yes; then
    AC_DEFINE([HAVE_]m4_translit($2, [a-z], [A-Z])[_DECL], 1,
              [Define if you have the declaration of $2.])
  fi
  undefine([gt_cv_var])
])
