# waitpid.m4 serial 2
dnl Copyright (C) 2010-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_WAITPID],
[
  AC_REQUIRE([AC_CANONICAL_HOST])
  HAVE_WAITPID=1
  case $host_os in
    mingw*) HAVE_WAITPID=0 ;;
  esac
])
