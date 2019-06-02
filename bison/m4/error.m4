#serial 14

# Copyright (C) 1996-1998, 2001-2004, 2009-2015 Free Software Foundation, Inc.
#
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_ERROR],
[
  dnl We don't use AC_FUNC_ERROR_AT_LINE any more, because it is no longer
  dnl maintained in Autoconf and because it invokes AC_LIBOBJ.
  AC_CACHE_CHECK([for error_at_line], [ac_cv_lib_error_at_line],
    [AC_LINK_IFELSE(
       [AC_LANG_PROGRAM(
          [[#include <error.h>]],
          [[error_at_line (0, 0, "", 0, "an error occurred");]])],
       [ac_cv_lib_error_at_line=yes],
       [ac_cv_lib_error_at_line=no])])
])

# Prerequisites of lib/error.c.
AC_DEFUN([gl_PREREQ_ERROR],
[
  AC_REQUIRE([AC_FUNC_STRERROR_R])
  :
])
