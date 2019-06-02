#serial 7

# Copyright (C) 1998-1999, 2001, 2004, 2008-2015 Free Software Foundation, Inc.
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

dnl based on code from Eleftherios Gkioulekas
dnl Autoconf 2.60 provides AC_HEADER_ASSERT for the same purpose, but
dnl it has broken semantics for --enable-assert until 2.64.
AC_DEFUN([gl_ASSERT],
[
  AC_MSG_CHECKING([whether to enable assertions])
  AC_ARG_ENABLE([assert],
    [AS_HELP_STRING([--disable-assert], [turn off assertions])],
    [AS_IF([test "x$enableval" = xno],
      [AC_DEFINE([NDEBUG], [1],
        [Define to 1 if assertions should be disabled.])],
      [test "x$enableval" != xyes],
      [AC_MSG_WARN([invalid argument supplied to --enable-assert])
      enable_assert=yes])],
    [enable_assert=yes])
  AC_MSG_RESULT([$enable_assert])
])
