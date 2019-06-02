# isnanf.m4 serial 14
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Check how to get or define isnanf().

AC_DEFUN([gl_FUNC_ISNANF],
[
  AC_REQUIRE([gl_MATH_H_DEFAULTS])
  ISNANF_LIBM=
  gl_HAVE_ISNANF_NO_LIBM
  if test $gl_cv_func_isnanf_no_libm = no; then
    gl_HAVE_ISNANF_IN_LIBM
    if test $gl_cv_func_isnanf_in_libm = yes; then
      ISNANF_LIBM=-lm
    fi
  fi
  dnl The variable gl_func_isnanf set here is used by isnan.m4.
  if test $gl_cv_func_isnanf_no_libm = yes \
     || test $gl_cv_func_isnanf_in_libm = yes; then
    save_LIBS="$LIBS"
    LIBS="$LIBS $ISNANF_LIBM"
    gl_ISNANF_WORKS
    LIBS="$save_LIBS"
    case "$gl_cv_func_isnanf_works" in
      *yes) gl_func_isnanf=yes ;;
      *)    gl_func_isnanf=no; ISNANF_LIBM= ;;
    esac
  else
    gl_func_isnanf=no
  fi
  if test $gl_func_isnanf != yes; then
    HAVE_ISNANF=0
  fi
  AC_SUBST([ISNANF_LIBM])
])

dnl Check how to get or define isnanf() without linking with libm.

AC_DEFUN([gl_FUNC_ISNANF_NO_LIBM],
[
  gl_HAVE_ISNANF_NO_LIBM
  if test $gl_cv_func_isnanf_no_libm = yes; then
    gl_ISNANF_WORKS
  fi
  if test $gl_cv_func_isnanf_no_libm = yes \
     && { case "$gl_cv_func_isnanf_works" in
            *yes) true;;
            *) false;;
          esac
        }; then
    gl_func_isnanf_no_libm=yes
    AC_DEFINE([HAVE_ISNANF_IN_LIBC], [1],
      [Define if the isnan(float) function is available in libc.])
  else
    gl_func_isnanf_no_libm=no
  fi
])

dnl Prerequisites of replacement isnanf definition. It does not need -lm.
AC_DEFUN([gl_PREREQ_ISNANF],
[
  gl_FLOAT_EXPONENT_LOCATION
])

dnl Test whether isnanf() can be used without libm.
AC_DEFUN([gl_HAVE_ISNANF_NO_LIBM],
[
  AC_CACHE_CHECK([whether isnan(float) can be used without linking with libm],
    [gl_cv_func_isnanf_no_libm],
    [
      AC_LINK_IFELSE(
        [AC_LANG_PROGRAM(
           [[#include <math.h>
             #if __GNUC__ >= 4
             # undef isnanf
             # define isnanf(x) __builtin_isnanf ((float)(x))
             #elif defined isnan
             # undef isnanf
             # define isnanf(x) isnan ((float)(x))
             #endif
             float x;]],
           [[return isnanf (x);]])],
        [gl_cv_func_isnanf_no_libm=yes],
        [gl_cv_func_isnanf_no_libm=no])
    ])
])

dnl Test whether isnanf() can be used with libm.
AC_DEFUN([gl_HAVE_ISNANF_IN_LIBM],
[
  AC_CACHE_CHECK([whether isnan(float) can be used with libm],
    [gl_cv_func_isnanf_in_libm],
    [
      save_LIBS="$LIBS"
      LIBS="$LIBS -lm"
      AC_LINK_IFELSE(
        [AC_LANG_PROGRAM(
           [[#include <math.h>
             #if __GNUC__ >= 4
             # undef isnanf
             # define isnanf(x) __builtin_isnanf ((float)(x))
             #elif defined isnan
             # undef isnanf
             # define isnanf(x) isnan ((float)(x))
             #endif
             float x;]],
           [[return isnanf (x);]])],
        [gl_cv_func_isnanf_in_libm=yes],
        [gl_cv_func_isnanf_in_libm=no])
      LIBS="$save_LIBS"
    ])
])

dnl Test whether isnanf() rejects Infinity (this fails on Solaris 2.5.1),
dnl recognizes a NaN (this fails on IRIX 6.5 with cc), and recognizes a NaN
dnl with in-memory representation 0x7fbfffff (this fails on IRIX 6.5).
AC_DEFUN([gl_ISNANF_WORKS],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_REQUIRE([gl_FLOAT_EXPONENT_LOCATION])
  AC_CACHE_CHECK([whether isnan(float) works], [gl_cv_func_isnanf_works],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <math.h>
#if __GNUC__ >= 4
# undef isnanf
# define isnanf(x) __builtin_isnanf ((float)(x))
#elif defined isnan
# undef isnanf
# define isnanf(x) isnan ((float)(x))
#endif
/* The Compaq (ex-DEC) C 6.4 compiler chokes on the expression 0.0 / 0.0.  */
#ifdef __DECC
static float
NaN ()
{
  static float zero = 0.0f;
  return zero / zero;
}
#else
# define NaN() (0.0f / 0.0f)
#endif
#define NWORDS \
  ((sizeof (float) + sizeof (unsigned int) - 1) / sizeof (unsigned int))
typedef union { unsigned int word[NWORDS]; float value; } memory_float;
int main()
{
  int result = 0;

  if (isnanf (1.0f / 0.0f))
    result |= 1;

  if (!isnanf (NaN ()))
    result |= 2;

#if defined FLT_EXPBIT0_WORD && defined FLT_EXPBIT0_BIT
  /* The isnanf function should be immune against changes in the sign bit and
     in the mantissa bits.  The xor operation twiddles a bit that can only be
     a sign bit or a mantissa bit.  */
  if (FLT_EXPBIT0_WORD == 0 && FLT_EXPBIT0_BIT > 0)
    {
      memory_float m;

      m.value = NaN ();
      /* Set the bits below the exponent to 01111...111.  */
      m.word[0] &= -1U << FLT_EXPBIT0_BIT;
      m.word[0] |= 1U << (FLT_EXPBIT0_BIT - 1) - 1;
      if (!isnanf (m.value))
        result |= 4;
    }
#endif

  return result;
}]])],
        [gl_cv_func_isnanf_works=yes],
        [gl_cv_func_isnanf_works=no],
        [case "$host_os" in
           irix* | solaris*) gl_cv_func_isnanf_works="guessing no";;
           *)                gl_cv_func_isnanf_works="guessing yes";;
         esac
        ])
    ])
])
