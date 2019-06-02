# snprintf.m4 serial 6
dnl Copyright (C) 2002-2004, 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Libintl 0.17 will replace snprintf only if it does not support %1$s,
dnl but defers to any gnulib snprintf replacements.  Therefore, gnulib
dnl must guarantee that the decision for replacing snprintf is a superset
dnl of the reasons checked by libintl.
AC_DEFUN([gl_FUNC_SNPRINTF],
[
  AC_REQUIRE([gl_STDIO_H_DEFAULTS])
  gl_cv_func_snprintf_usable=no
  AC_CHECK_FUNCS([snprintf])
  if test $ac_cv_func_snprintf = yes; then
    gl_SNPRINTF_SIZE1
    case "$gl_cv_func_snprintf_size1" in
      *yes)
        gl_SNPRINTF_RETVAL_C99
        case "$gl_cv_func_snprintf_retval_c99" in
          *yes)
            gl_PRINTF_POSITIONS
            case "$gl_cv_func_printf_positions" in
              *yes)
                gl_cv_func_snprintf_usable=yes
                ;;
            esac
            ;;
        esac
        ;;
    esac
  fi
  if test $gl_cv_func_snprintf_usable = no; then
    gl_REPLACE_SNPRINTF
  fi
  AC_CHECK_DECLS_ONCE([snprintf])
  if test $ac_cv_have_decl_snprintf = no; then
    HAVE_DECL_SNPRINTF=0
  fi
])

AC_DEFUN([gl_REPLACE_SNPRINTF],
[
  AC_REQUIRE([gl_STDIO_H_DEFAULTS])
  AC_LIBOBJ([snprintf])
  if test $ac_cv_func_snprintf = yes; then
    REPLACE_SNPRINTF=1
  fi
  gl_PREREQ_SNPRINTF
])

# Prerequisites of lib/snprintf.c.
AC_DEFUN([gl_PREREQ_SNPRINTF], [:])
