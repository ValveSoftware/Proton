# float_h.m4 serial 9
dnl Copyright (C) 2007, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FLOAT_H],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST])
  FLOAT_H=
  REPLACE_FLOAT_LDBL=0
  case "$host_os" in
    aix* | beos* | openbsd* | mirbsd* | irix*)
      FLOAT_H=float.h
      ;;
    freebsd*)
      case "$host_cpu" in
changequote(,)dnl
        i[34567]86 )
changequote([,])dnl
          FLOAT_H=float.h
          ;;
        x86_64 )
          # On x86_64 systems, the C compiler may still be generating
          # 32-bit code.
          AC_EGREP_CPP([yes],
            [#if defined __LP64__ || defined __x86_64__ || defined __amd64__
             yes
             #endif],
            [],
            [FLOAT_H=float.h])
          ;;
      esac
      ;;
    linux*)
      case "$host_cpu" in
        powerpc*)
          FLOAT_H=float.h
          ;;
      esac
      ;;
  esac
  case "$host_os" in
    aix* | freebsd* | linux*)
      if test -n "$FLOAT_H"; then
        REPLACE_FLOAT_LDBL=1
      fi
      ;;
  esac

  dnl Test against glibc-2.7 Linux/SPARC64 bug.
  REPLACE_ITOLD=0
  AC_CACHE_CHECK([whether conversion from 'int' to 'long double' works],
    [gl_cv_func_itold_works],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
int i = -1;
volatile long double ld;
int main ()
{
  ld += i * 1.0L;
  if (ld > 0)
    return 1;
  return 0;
}]])],
        [gl_cv_func_itold_works=yes],
        [gl_cv_func_itold_works=no],
        [case "$host" in
           sparc*-*-linux*)
             AC_EGREP_CPP([yes],
               [#if defined __LP64__ || defined __arch64__
                yes
                #endif],
               [gl_cv_func_itold_works="guessing no"],
               [gl_cv_func_itold_works="guessing yes"])
             ;;
           *) gl_cv_func_itold_works="guessing yes" ;;
         esac
        ])
    ])
  case "$gl_cv_func_itold_works" in
    *no)
      REPLACE_ITOLD=1
      dnl We add the workaround to <float.h> but also to <math.h>,
      dnl to increase the chances that the fix function gets pulled in.
      FLOAT_H=float.h
      ;;
  esac

  if test -n "$FLOAT_H"; then
    gl_NEXT_HEADERS([float.h])
  fi
  AC_SUBST([FLOAT_H])
  AM_CONDITIONAL([GL_GENERATE_FLOAT_H], [test -n "$FLOAT_H"])
  AC_SUBST([REPLACE_ITOLD])
])
