# pathmax.m4 serial 10
dnl Copyright (C) 2002-2003, 2005-2006, 2009-2015 Free Software Foundation,
dnl Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_PATHMAX],
[
  dnl Prerequisites of lib/pathmax.h.
  AC_CHECK_HEADERS_ONCE([sys/param.h])
])

# Expands to a piece of C program that defines PATH_MAX in the same way as
# "pathmax.h" will do.
AC_DEFUN([gl_PATHMAX_SNIPPET], [[
/* Arrange to define PATH_MAX, like "pathmax.h" does. */
#if HAVE_UNISTD_H
# include <unistd.h>
#endif
#include <limits.h>
#if defined HAVE_SYS_PARAM_H && !defined PATH_MAX && !defined MAXPATHLEN
# include <sys/param.h>
#endif
#if !defined PATH_MAX && defined MAXPATHLEN
# define PATH_MAX MAXPATHLEN
#endif
#ifdef __hpux
# undef PATH_MAX
# define PATH_MAX 1024
#endif
#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
# undef PATH_MAX
# define PATH_MAX 260
#endif
]])

# Prerequisites of gl_PATHMAX_SNIPPET.
AC_DEFUN([gl_PATHMAX_SNIPPET_PREREQ],
[
  AC_CHECK_HEADERS_ONCE([unistd.h sys/param.h])
])
