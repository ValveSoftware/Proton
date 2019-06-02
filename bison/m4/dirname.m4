#serial 10   -*- autoconf -*-
dnl Copyright (C) 2002-2006, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_DIRNAME],
[
  AC_REQUIRE([gl_DIRNAME_LGPL])
])

AC_DEFUN([gl_DIRNAME_LGPL],
[
  dnl Prerequisites of lib/dirname.h.
  AC_REQUIRE([gl_DOUBLE_SLASH_ROOT])

  dnl No prerequisites of lib/basename-lgpl.c, lib/dirname-lgpl.c,
  dnl lib/stripslash.c.
])
