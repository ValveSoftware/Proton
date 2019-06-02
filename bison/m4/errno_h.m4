# errno_h.m4 serial 12
dnl Copyright (C) 2004, 2006, 2008-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN_ONCE([gl_HEADER_ERRNO_H],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_CACHE_CHECK([for complete errno.h], [gl_cv_header_errno_h_complete], [
    AC_EGREP_CPP([booboo],[
#include <errno.h>
#if !defined ETXTBSY
booboo
#endif
#if !defined ENOMSG
booboo
#endif
#if !defined EIDRM
booboo
#endif
#if !defined ENOLINK
booboo
#endif
#if !defined EPROTO
booboo
#endif
#if !defined EMULTIHOP
booboo
#endif
#if !defined EBADMSG
booboo
#endif
#if !defined EOVERFLOW
booboo
#endif
#if !defined ENOTSUP
booboo
#endif
#if !defined ENETRESET
booboo
#endif
#if !defined ECONNABORTED
booboo
#endif
#if !defined ESTALE
booboo
#endif
#if !defined EDQUOT
booboo
#endif
#if !defined ECANCELED
booboo
#endif
#if !defined EOWNERDEAD
booboo
#endif
#if !defined ENOTRECOVERABLE
booboo
#endif
#if !defined EILSEQ
booboo
#endif
      ],
      [gl_cv_header_errno_h_complete=no],
      [gl_cv_header_errno_h_complete=yes])
  ])
  if test $gl_cv_header_errno_h_complete = yes; then
    ERRNO_H=''
  else
    gl_NEXT_HEADERS([errno.h])
    ERRNO_H='errno.h'
  fi
  AC_SUBST([ERRNO_H])
  AM_CONDITIONAL([GL_GENERATE_ERRNO_H], [test -n "$ERRNO_H"])
  gl_REPLACE_ERRNO_VALUE([EMULTIHOP])
  gl_REPLACE_ERRNO_VALUE([ENOLINK])
  gl_REPLACE_ERRNO_VALUE([EOVERFLOW])
])

# Assuming $1 = EOVERFLOW.
# The EOVERFLOW errno value ought to be defined in <errno.h>, according to
# POSIX.  But some systems (like OpenBSD 4.0 or AIX 3) don't define it, and
# some systems (like OSF/1) define it when _XOPEN_SOURCE_EXTENDED is defined.
# Check for the value of EOVERFLOW.
# Set the variables EOVERFLOW_HIDDEN and EOVERFLOW_VALUE.
AC_DEFUN([gl_REPLACE_ERRNO_VALUE],
[
  if test -n "$ERRNO_H"; then
    AC_CACHE_CHECK([for ]$1[ value], [gl_cv_header_errno_h_]$1, [
      AC_EGREP_CPP([yes],[
#include <errno.h>
#ifdef ]$1[
yes
#endif
      ],
      [gl_cv_header_errno_h_]$1[=yes],
      [gl_cv_header_errno_h_]$1[=no])
      if test $gl_cv_header_errno_h_]$1[ = no; then
        AC_EGREP_CPP([yes],[
#define _XOPEN_SOURCE_EXTENDED 1
#include <errno.h>
#ifdef ]$1[
yes
#endif
          ], [gl_cv_header_errno_h_]$1[=hidden])
        if test $gl_cv_header_errno_h_]$1[ = hidden; then
          dnl The macro exists but is hidden.
          dnl Define it to the same value.
          AC_COMPUTE_INT([gl_cv_header_errno_h_]$1, $1, [
#define _XOPEN_SOURCE_EXTENDED 1
#include <errno.h>
/* The following two lines are a workaround against an autoconf-2.52 bug.  */
#include <stdio.h>
#include <stdlib.h>
])
        fi
      fi
    ])
    case $gl_cv_header_errno_h_]$1[ in
      yes | no)
        ]$1[_HIDDEN=0; ]$1[_VALUE=
        ;;
      *)
        ]$1[_HIDDEN=1; ]$1[_VALUE="$gl_cv_header_errno_h_]$1["
        ;;
    esac
    AC_SUBST($1[_HIDDEN])
    AC_SUBST($1[_VALUE])
  fi
])

dnl Autoconf >= 2.61 has AC_COMPUTE_INT built-in.
dnl Remove this when we can assume autoconf >= 2.61.
m4_ifdef([AC_COMPUTE_INT], [], [
  AC_DEFUN([AC_COMPUTE_INT], [_AC_COMPUTE_INT([$2],[$1],[$3],[$4])])
])
