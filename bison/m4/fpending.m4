# serial 21

# Copyright (C) 2000-2001, 2004-2015 Free Software Foundation, Inc.
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

dnl From Jim Meyering
dnl Using code from emacs, based on suggestions from Paul Eggert
dnl and Ulrich Drepper.

dnl Find out how to determine the number of pending output bytes on a stream.
dnl glibc (2.1.93 and newer) and Solaris provide __fpending.  On other systems,
dnl we have to grub around in the FILE struct.

AC_DEFUN([gl_FUNC_FPENDING],
[
  AC_CHECK_HEADERS_ONCE([stdio_ext.h])
  fp_headers='
    #include <stdio.h>
    #if HAVE_STDIO_EXT_H
    # include <stdio_ext.h>
    #endif
  '
  AC_CACHE_CHECK([for __fpending], [gl_cv_func___fpending],
    [
      AC_LINK_IFELSE(
        [AC_LANG_PROGRAM([$fp_headers],
           [[return ! __fpending (stdin);]])],
        [gl_cv_func___fpending=yes],
        [gl_cv_func___fpending=no])
    ])
  if test $gl_cv_func___fpending = yes; then
    AC_CHECK_DECLS([__fpending], [], [], [$fp_headers])
  fi
])

AC_DEFUN([gl_PREREQ_FPENDING],
[
  AC_CACHE_CHECK(
              [how to determine the number of pending output bytes on a stream],
                 ac_cv_sys_pending_output_n_bytes,
    [
      for ac_expr in                                                    \
                                                                        \
          '# glibc2'                                                    \
          'fp->_IO_write_ptr - fp->_IO_write_base'                      \
                                                                        \
          '# traditional Unix'                                          \
          'fp->_ptr - fp->_base'                                        \
                                                                        \
          '# BSD'                                                       \
          'fp->_p - fp->_bf._base'                                      \
                                                                        \
          '# SCO, Unixware'                                             \
          '(fp->__ptr ? fp->__ptr - fp->__base : 0)'                    \
                                                                        \
          '# QNX'                                                       \
          '(fp->_Mode & 0x2000 /*_MWRITE*/ ? fp->_Next - fp->_Buf : 0)' \
                                                                        \
          '# old glibc?'                                                \
          'fp->__bufp - fp->__buffer'                                   \
                                                                        \
          '# old glibc iostream?'                                       \
          'fp->_pptr - fp->_pbase'                                      \
                                                                        \
          '# emx+gcc'                                                   \
          'fp->_ptr - fp->_buffer'                                      \
                                                                        \
          '# Minix'                                                     \
          'fp->_ptr - fp->_buf'                                         \
                                                                        \
          '# Plan9'                                                     \
          'fp->wp - fp->buf'                                            \
                                                                        \
          '# VMS'                                                       \
          '(*fp)->_ptr - (*fp)->_base'                                  \
                                                                        \
          '# e.g., DGUX R4.11; the info is not available'               \
          1                                                             \
          ; do

        # Skip each embedded comment.
        case "$ac_expr" in '#'*) continue;; esac

        AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[#include <stdio.h>]],
          [[FILE *fp = stdin; (void) ($ac_expr);]])],
          [fp_done=yes]
        )
        test "$fp_done" = yes && break
      done

      ac_cv_sys_pending_output_n_bytes=$ac_expr
    ]
  )
  AC_DEFINE_UNQUOTED([PENDING_OUTPUT_N_BYTES],
    $ac_cv_sys_pending_output_n_bytes,
    [the number of pending output bytes on stream 'fp'])
])
