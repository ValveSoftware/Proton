# strerror_r.m4 serial 15
dnl Copyright (C) 2002, 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_STRERROR_R],
[
  AC_REQUIRE([gl_HEADER_STRING_H_DEFAULTS])
  AC_REQUIRE([gl_FUNC_STRERROR_R_WORKS])

  dnl Persuade Solaris <string.h> to declare strerror_r().
  AC_REQUIRE([gl_USE_SYSTEM_EXTENSIONS])

  dnl Some systems don't declare strerror_r() if _THREAD_SAFE and _REENTRANT
  dnl are not defined.
  AC_CHECK_DECLS_ONCE([strerror_r])
  if test $ac_cv_have_decl_strerror_r = no; then
    HAVE_DECL_STRERROR_R=0
  fi

  if test $ac_cv_func_strerror_r = yes; then
    if test "$ERRNO_H:$REPLACE_STRERROR_0" = :0; then
      if test $gl_cv_func_strerror_r_posix_signature = yes; then
        case "$gl_cv_func_strerror_r_works" in
          dnl The system's strerror_r has bugs.  Replace it.
          *no) REPLACE_STRERROR_R=1 ;;
        esac
      else
        dnl The system's strerror_r() has a wrong signature. Replace it.
        REPLACE_STRERROR_R=1
      fi
    else
      dnl The system's strerror_r() cannot know about the new errno values we
      dnl add to <errno.h>, or any fix for strerror(0). Replace it.
      REPLACE_STRERROR_R=1
    fi
  fi
])

# Prerequisites of lib/strerror_r.c.
AC_DEFUN([gl_PREREQ_STRERROR_R], [
  dnl glibc >= 2.3.4 and cygwin 1.7.9 have a function __xpg_strerror_r.
  AC_CHECK_FUNCS_ONCE([__xpg_strerror_r])
  AC_CHECK_FUNCS_ONCE([catgets])
  AC_CHECK_FUNCS_ONCE([snprintf])
])

# Detect if strerror_r works, but without affecting whether a replacement
# strerror_r will be used.
AC_DEFUN([gl_FUNC_STRERROR_R_WORKS],
[
  AC_REQUIRE([gl_HEADER_ERRNO_H])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_REQUIRE([gl_FUNC_STRERROR_0])

  AC_CHECK_FUNCS_ONCE([strerror_r])
  if test $ac_cv_func_strerror_r = yes; then
    if test "$ERRNO_H:$REPLACE_STRERROR_0" = :0; then
      dnl The POSIX prototype is:  int strerror_r (int, char *, size_t);
      dnl glibc, Cygwin:           char *strerror_r (int, char *, size_t);
      dnl AIX 5.1, OSF/1 5.1:      int strerror_r (int, char *, int);
      AC_CACHE_CHECK([for strerror_r with POSIX signature],
        [gl_cv_func_strerror_r_posix_signature],
        [AC_COMPILE_IFELSE(
           [AC_LANG_PROGRAM(
              [[#include <string.h>
                int strerror_r (int, char *, size_t);
              ]],
              [])],
           [gl_cv_func_strerror_r_posix_signature=yes],
           [gl_cv_func_strerror_r_posix_signature=no])
        ])
      if test $gl_cv_func_strerror_r_posix_signature = yes; then
        dnl AIX 6.1 strerror_r fails by returning -1, not an error number.
        dnl HP-UX 11.31 strerror_r always fails when the buffer length argument
        dnl is less than 80.
        dnl FreeBSD 8.s strerror_r claims failure on 0
        dnl Mac OS X 10.5 strerror_r treats 0 like -1
        dnl Solaris 10 strerror_r corrupts errno on failure
        AC_CACHE_CHECK([whether strerror_r works],
          [gl_cv_func_strerror_r_works],
          [AC_RUN_IFELSE(
             [AC_LANG_PROGRAM(
                [[#include <errno.h>
                  #include <string.h>
                ]],
                [[int result = 0;
                  char buf[79];
                  if (strerror_r (EACCES, buf, 0) < 0)
                    result |= 1;
                  errno = 0;
                  if (strerror_r (EACCES, buf, sizeof buf) != 0)
                    result |= 2;
                  strcpy (buf, "Unknown");
                  if (strerror_r (0, buf, sizeof buf) != 0)
                    result |= 4;
                  if (errno)
                    result |= 8;
                  if (strstr (buf, "nknown") || strstr (buf, "ndefined"))
                    result |= 0x10;
                  errno = 0;
                  *buf = 0;
                  if (strerror_r (-3, buf, sizeof buf) < 0)
                    result |= 0x20;
                  if (errno)
                    result |= 0x40;
                  if (!*buf)
                    result |= 0x80;
                  return result;
                ]])],
             [gl_cv_func_strerror_r_works=yes],
             [gl_cv_func_strerror_r_works=no],
             [
changequote(,)dnl
              case "$host_os" in
                       # Guess no on AIX.
                aix*)  gl_cv_func_strerror_r_works="guessing no";;
                       # Guess no on HP-UX.
                hpux*) gl_cv_func_strerror_r_works="guessing no";;
                       # Guess no on BSD variants.
                *bsd*)  gl_cv_func_strerror_r_works="guessing no";;
                       # Guess yes otherwise.
                *)     gl_cv_func_strerror_r_works="guessing yes";;
              esac
changequote([,])dnl
             ])
          ])
      else
        dnl The system's strerror() has a wrong signature.
        dnl glibc >= 2.3.4 and cygwin 1.7.9 have a function __xpg_strerror_r.
        AC_CHECK_FUNCS_ONCE([__xpg_strerror_r])
        dnl In glibc < 2.14, __xpg_strerror_r does not populate buf on failure.
        dnl In cygwin < 1.7.10, __xpg_strerror_r clobbers strerror's buffer.
        if test $ac_cv_func___xpg_strerror_r = yes; then
          AC_CACHE_CHECK([whether __xpg_strerror_r works],
            [gl_cv_func_strerror_r_works],
            [AC_RUN_IFELSE(
               [AC_LANG_PROGRAM(
                  [[#include <errno.h>
                    #include <string.h>
                    extern
                    #ifdef __cplusplus
                    "C"
                    #endif
                    int __xpg_strerror_r(int, char *, size_t);
                  ]],
                  [[int result = 0;
                    char buf[256] = "^";
                    char copy[256];
                    char *str = strerror (-1);
                    strcpy (copy, str);
                    if (__xpg_strerror_r (-2, buf, 1) == 0)
                      result |= 1;
                    if (*buf)
                      result |= 2;
                    __xpg_strerror_r (-2, buf, 256);
                    if (strcmp (str, copy))
                      result |= 4;
                    return result;
                  ]])],
               [gl_cv_func_strerror_r_works=yes],
               [gl_cv_func_strerror_r_works=no],
               [dnl Guess no on all platforms that have __xpg_strerror_r,
                dnl at least until fixed glibc and cygwin are more common.
                gl_cv_func_strerror_r_works="guessing no"
               ])
            ])
        fi
      fi
    fi
  fi
])
