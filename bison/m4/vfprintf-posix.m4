# vfprintf-posix.m4 serial 14
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_VFPRINTF_POSIX],
[
  AC_REQUIRE([gl_PRINTF_SIZES_C99])
  AC_REQUIRE([gl_PRINTF_LONG_DOUBLE])
  AC_REQUIRE([gl_PRINTF_INFINITE])
  AC_REQUIRE([gl_PRINTF_INFINITE_LONG_DOUBLE])
  AC_REQUIRE([gl_PRINTF_DIRECTIVE_A])
  AC_REQUIRE([gl_PRINTF_DIRECTIVE_F])
  AC_REQUIRE([gl_PRINTF_DIRECTIVE_N])
  AC_REQUIRE([gl_PRINTF_DIRECTIVE_LS])
  AC_REQUIRE([gl_PRINTF_POSITIONS])
  AC_REQUIRE([gl_PRINTF_FLAG_GROUPING])
  AC_REQUIRE([gl_PRINTF_FLAG_LEFTADJUST])
  AC_REQUIRE([gl_PRINTF_FLAG_ZERO])
  AC_REQUIRE([gl_PRINTF_PRECISION])
  AC_REQUIRE([gl_PRINTF_ENOMEM])
  gl_cv_func_vfprintf_posix=no
  case "$gl_cv_func_printf_sizes_c99" in
    *yes)
      case "$gl_cv_func_printf_long_double" in
        *yes)
          case "$gl_cv_func_printf_infinite" in
            *yes)
              case "$gl_cv_func_printf_infinite_long_double" in
                *yes)
                  case "$gl_cv_func_printf_directive_a" in
                    *yes)
                      case "$gl_cv_func_printf_directive_f" in
                        *yes)
                          case "$gl_cv_func_printf_directive_n" in
                            *yes)
                              case "$gl_cv_func_printf_directive_ls" in
                                *yes)
                                  case "$gl_cv_func_printf_positions" in
                                    *yes)
                                      case "$gl_cv_func_printf_flag_grouping" in
                                        *yes)
                                          case "$gl_cv_func_printf_flag_leftadjust" in
                                            *yes)
                                              case "$gl_cv_func_printf_flag_zero" in
                                                *yes)
                                                  case "$gl_cv_func_printf_precision" in
                                                    *yes)
                                                      case "$gl_cv_func_printf_enomem" in
                                                        *yes)
                                                          # vfprintf exists and is
                                                          # already POSIX compliant.
                                                          gl_cv_func_vfprintf_posix=yes
                                                          ;;
                                                      esac
                                                      ;;
                                                  esac
                                                  ;;
                                              esac
                                              ;;
                                          esac
                                          ;;
                                      esac
                                      ;;
                                  esac
                                  ;;
                              esac
                              ;;
                          esac
                          ;;
                      esac
                      ;;
                  esac
                  ;;
              esac
              ;;
          esac
          ;;
      esac
      ;;
  esac
  if test $gl_cv_func_vfprintf_posix = no; then
    gl_PREREQ_VASNPRINTF_LONG_DOUBLE
    gl_PREREQ_VASNPRINTF_INFINITE_DOUBLE
    gl_PREREQ_VASNPRINTF_INFINITE_LONG_DOUBLE
    gl_PREREQ_VASNPRINTF_DIRECTIVE_A
    gl_PREREQ_VASNPRINTF_DIRECTIVE_F
    gl_PREREQ_VASNPRINTF_DIRECTIVE_LS
    gl_PREREQ_VASNPRINTF_FLAG_GROUPING
    gl_PREREQ_VASNPRINTF_FLAG_LEFTADJUST
    gl_PREREQ_VASNPRINTF_FLAG_ZERO
    gl_PREREQ_VASNPRINTF_PRECISION
    gl_PREREQ_VASNPRINTF_ENOMEM
    gl_REPLACE_VASNPRINTF
    gl_REPLACE_VFPRINTF
  fi
])

AC_DEFUN([gl_REPLACE_VFPRINTF],
[
  AC_REQUIRE([gl_STDIO_H_DEFAULTS])
  AC_LIBOBJ([vfprintf])
  REPLACE_VFPRINTF=1
  AC_DEFINE([REPLACE_VFPRINTF_POSIX], [1],
    [Define if vfprintf is overridden by a POSIX compliant gnulib implementation.])
  gl_PREREQ_VFPRINTF
])

AC_DEFUN([gl_PREREQ_VFPRINTF], [:])
