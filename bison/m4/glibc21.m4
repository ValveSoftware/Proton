# glibc21.m4 serial 5
dnl Copyright (C) 2000-2002, 2004, 2008, 2010-2015 Free Software Foundation,
dnl Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# Test for the GNU C Library, version 2.1 or newer, or uClibc.
# From Bruno Haible.

AC_DEFUN([gl_GLIBC21],
  [
    AC_CACHE_CHECK([whether we are using the GNU C Library >= 2.1 or uClibc],
      [ac_cv_gnu_library_2_1],
      [AC_EGREP_CPP([Lucky],
        [
#include <features.h>
#ifdef __GNU_LIBRARY__
 #if (__GLIBC__ == 2 && __GLIBC_MINOR__ >= 1) || (__GLIBC__ > 2)
  Lucky GNU user
 #endif
#endif
#ifdef __UCLIBC__
 Lucky user
#endif
        ],
        [ac_cv_gnu_library_2_1=yes],
        [ac_cv_gnu_library_2_1=no])
      ]
    )
    AC_SUBST([GLIBC21])
    GLIBC21="$ac_cv_gnu_library_2_1"
  ]
)
