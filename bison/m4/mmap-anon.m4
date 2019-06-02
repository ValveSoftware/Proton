# mmap-anon.m4 serial 10
dnl Copyright (C) 2005, 2007, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# Detect how mmap can be used to create anonymous (not file-backed) memory
# mappings.
# - On Linux, AIX, OSF/1, Solaris, Cygwin, Interix, Haiku, both MAP_ANONYMOUS
#   and MAP_ANON exist and have the same value.
# - On HP-UX, only MAP_ANONYMOUS exists.
# - On Mac OS X, FreeBSD, NetBSD, OpenBSD, only MAP_ANON exists.
# - On IRIX, neither exists, and a file descriptor opened to /dev/zero must be
#   used.

AC_DEFUN([gl_FUNC_MMAP_ANON],
[
  dnl Persuade glibc <sys/mman.h> to define MAP_ANONYMOUS.
  AC_REQUIRE([gl_USE_SYSTEM_EXTENSIONS])

  # Check for mmap(). Don't use AC_FUNC_MMAP, because it checks too much: it
  # fails on HP-UX 11, because MAP_FIXED mappings do not work. But this is
  # irrelevant for anonymous mappings.
  AC_CHECK_FUNC([mmap], [gl_have_mmap=yes], [gl_have_mmap=no])

  # Try to allow MAP_ANONYMOUS.
  gl_have_mmap_anonymous=no
  if test $gl_have_mmap = yes; then
    AC_MSG_CHECKING([for MAP_ANONYMOUS])
    AC_EGREP_CPP([I cannot identify this map], [
#include <sys/mman.h>
#ifdef MAP_ANONYMOUS
    I cannot identify this map
#endif
],
      [gl_have_mmap_anonymous=yes])
    if test $gl_have_mmap_anonymous != yes; then
      AC_EGREP_CPP([I cannot identify this map], [
#include <sys/mman.h>
#ifdef MAP_ANON
    I cannot identify this map
#endif
],
        [AC_DEFINE([MAP_ANONYMOUS], [MAP_ANON],
          [Define to a substitute value for mmap()'s MAP_ANONYMOUS flag.])
         gl_have_mmap_anonymous=yes])
    fi
    AC_MSG_RESULT([$gl_have_mmap_anonymous])
    if test $gl_have_mmap_anonymous = yes; then
      AC_DEFINE([HAVE_MAP_ANONYMOUS], [1],
        [Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
         config.h and <sys/mman.h>.])
    fi
  fi
])
