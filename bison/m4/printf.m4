# printf.m4 serial 51
dnl Copyright (C) 2003, 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Test whether the *printf family of functions supports the 'j', 'z', 't',
dnl 'L' size specifiers. (ISO C99, POSIX:2001)
dnl Result is gl_cv_func_printf_sizes_c99.

AC_DEFUN([gl_PRINTF_SIZES_C99],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([gl_AC_HEADER_STDINT_H])
  AC_REQUIRE([gl_AC_HEADER_INTTYPES_H])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports size specifiers as in C99],
    [gl_cv_func_printf_sizes_c99],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#if HAVE_STDINT_H_WITH_UINTMAX
# include <stdint.h>
#endif
#if HAVE_INTTYPES_H_WITH_UINTMAX
# include <inttypes.h>
#endif
static char buf[100];
int main ()
{
  int result = 0;
#if HAVE_STDINT_H_WITH_UINTMAX || HAVE_INTTYPES_H_WITH_UINTMAX
  buf[0] = '\0';
  if (sprintf (buf, "%ju %d", (uintmax_t) 12345671, 33, 44, 55) < 0
      || strcmp (buf, "12345671 33") != 0)
    result |= 1;
#endif
  buf[0] = '\0';
  if (sprintf (buf, "%zu %d", (size_t) 12345672, 33, 44, 55) < 0
      || strcmp (buf, "12345672 33") != 0)
    result |= 2;
  buf[0] = '\0';
  if (sprintf (buf, "%tu %d", (ptrdiff_t) 12345673, 33, 44, 55) < 0
      || strcmp (buf, "12345673 33") != 0)
    result |= 4;
  buf[0] = '\0';
  if (sprintf (buf, "%Lg %d", (long double) 1.5, 33, 44, 55) < 0
      || strcmp (buf, "1.5 33") != 0)
    result |= 8;
  return result;
}]])],
        [gl_cv_func_printf_sizes_c99=yes],
        [gl_cv_func_printf_sizes_c99=no],
        [
changequote(,)dnl
         case "$host_os" in
                                 # Guess yes on glibc systems.
           *-gnu*)               gl_cv_func_printf_sizes_c99="guessing yes";;
                                 # Guess yes on FreeBSD >= 5.
           freebsd[1-4].*)       gl_cv_func_printf_sizes_c99="guessing no";;
           freebsd* | kfreebsd*) gl_cv_func_printf_sizes_c99="guessing yes";;
                                 # Guess yes on Mac OS X >= 10.3.
           darwin[1-6].*)        gl_cv_func_printf_sizes_c99="guessing no";;
           darwin*)              gl_cv_func_printf_sizes_c99="guessing yes";;
                                 # Guess yes on OpenBSD >= 3.9.
           openbsd[1-2].* | openbsd3.[0-8] | openbsd3.[0-8].*)
                                 gl_cv_func_printf_sizes_c99="guessing no";;
           openbsd*)             gl_cv_func_printf_sizes_c99="guessing yes";;
                                 # Guess yes on Solaris >= 2.10.
           solaris2.[1-9][0-9]*) gl_cv_func_printf_sizes_c99="guessing yes";;
           solaris*)             gl_cv_func_printf_sizes_c99="guessing no";;
                                 # Guess yes on NetBSD >= 3.
           netbsd[1-2]* | netbsdelf[1-2]* | netbsdaout[1-2]* | netbsdcoff[1-2]*)
                                 gl_cv_func_printf_sizes_c99="guessing no";;
           netbsd*)              gl_cv_func_printf_sizes_c99="guessing yes";;
                                 # If we don't know, assume the worst.
           *)                    gl_cv_func_printf_sizes_c99="guessing no";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions supports 'long double'
dnl arguments together with the 'L' size specifier. (ISO C99, POSIX:2001)
dnl Result is gl_cv_func_printf_long_double.

AC_DEFUN([gl_PRINTF_LONG_DOUBLE],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports 'long double' arguments],
    [gl_cv_func_printf_long_double],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
static char buf[10000];
int main ()
{
  int result = 0;
  buf[0] = '\0';
  if (sprintf (buf, "%Lf %d", 1.75L, 33, 44, 55) < 0
      || strcmp (buf, "1.750000 33") != 0)
    result |= 1;
  buf[0] = '\0';
  if (sprintf (buf, "%Le %d", 1.75L, 33, 44, 55) < 0
      || strcmp (buf, "1.750000e+00 33") != 0)
    result |= 2;
  buf[0] = '\0';
  if (sprintf (buf, "%Lg %d", 1.75L, 33, 44, 55) < 0
      || strcmp (buf, "1.75 33") != 0)
    result |= 4;
  return result;
}]])],
        [gl_cv_func_printf_long_double=yes],
        [gl_cv_func_printf_long_double=no],
        [
changequote(,)dnl
         case "$host_os" in
           beos*)        gl_cv_func_printf_long_double="guessing no";;
           mingw* | pw*) gl_cv_func_printf_long_double="guessing no";;
           *)            gl_cv_func_printf_long_double="guessing yes";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions supports infinite and NaN
dnl 'double' arguments and negative zero arguments in the %f, %e, %g
dnl directives. (ISO C99, POSIX:2001)
dnl Result is gl_cv_func_printf_infinite.

AC_DEFUN([gl_PRINTF_INFINITE],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports infinite 'double' arguments],
    [gl_cv_func_printf_infinite],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
static int
strisnan (const char *string, size_t start_index, size_t end_index)
{
  if (start_index < end_index)
    {
      if (string[start_index] == '-')
        start_index++;
      if (start_index + 3 <= end_index
          && memcmp (string + start_index, "nan", 3) == 0)
        {
          start_index += 3;
          if (start_index == end_index
              || (string[start_index] == '(' && string[end_index - 1] == ')'))
            return 1;
        }
    }
  return 0;
}
static int
have_minus_zero ()
{
  static double plus_zero = 0.0;
  double minus_zero = - plus_zero;
  return memcmp (&plus_zero, &minus_zero, sizeof (double)) != 0;
}
static char buf[10000];
static double zero = 0.0;
int main ()
{
  int result = 0;
  if (sprintf (buf, "%f", 1.0 / zero) < 0
      || (strcmp (buf, "inf") != 0 && strcmp (buf, "infinity") != 0))
    result |= 1;
  if (sprintf (buf, "%f", -1.0 / zero) < 0
      || (strcmp (buf, "-inf") != 0 && strcmp (buf, "-infinity") != 0))
    result |= 1;
  if (sprintf (buf, "%f", zero / zero) < 0
      || !strisnan (buf, 0, strlen (buf)))
    result |= 2;
  if (sprintf (buf, "%e", 1.0 / zero) < 0
      || (strcmp (buf, "inf") != 0 && strcmp (buf, "infinity") != 0))
    result |= 4;
  if (sprintf (buf, "%e", -1.0 / zero) < 0
      || (strcmp (buf, "-inf") != 0 && strcmp (buf, "-infinity") != 0))
    result |= 4;
  if (sprintf (buf, "%e", zero / zero) < 0
      || !strisnan (buf, 0, strlen (buf)))
    result |= 8;
  if (sprintf (buf, "%g", 1.0 / zero) < 0
      || (strcmp (buf, "inf") != 0 && strcmp (buf, "infinity") != 0))
    result |= 16;
  if (sprintf (buf, "%g", -1.0 / zero) < 0
      || (strcmp (buf, "-inf") != 0 && strcmp (buf, "-infinity") != 0))
    result |= 16;
  if (sprintf (buf, "%g", zero / zero) < 0
      || !strisnan (buf, 0, strlen (buf)))
    result |= 32;
  /* This test fails on HP-UX 10.20.  */
  if (have_minus_zero ())
    if (sprintf (buf, "%g", - zero) < 0
        || strcmp (buf, "-0") != 0)
    result |= 64;
  return result;
}]])],
        [gl_cv_func_printf_infinite=yes],
        [gl_cv_func_printf_infinite=no],
        [
changequote(,)dnl
         case "$host_os" in
                                 # Guess yes on glibc systems.
           *-gnu*)               gl_cv_func_printf_infinite="guessing yes";;
                                 # Guess yes on FreeBSD >= 6.
           freebsd[1-5].*)       gl_cv_func_printf_infinite="guessing no";;
           freebsd* | kfreebsd*) gl_cv_func_printf_infinite="guessing yes";;
                                 # Guess yes on Mac OS X >= 10.3.
           darwin[1-6].*)        gl_cv_func_printf_infinite="guessing no";;
           darwin*)              gl_cv_func_printf_infinite="guessing yes";;
                                 # Guess yes on HP-UX >= 11.
           hpux[7-9]* | hpux10*) gl_cv_func_printf_infinite="guessing no";;
           hpux*)                gl_cv_func_printf_infinite="guessing yes";;
                                 # Guess yes on NetBSD >= 3.
           netbsd[1-2]* | netbsdelf[1-2]* | netbsdaout[1-2]* | netbsdcoff[1-2]*)
                                 gl_cv_func_printf_infinite="guessing no";;
           netbsd*)              gl_cv_func_printf_infinite="guessing yes";;
                                 # Guess yes on BeOS.
           beos*)                gl_cv_func_printf_infinite="guessing yes";;
                                 # If we don't know, assume the worst.
           *)                    gl_cv_func_printf_infinite="guessing no";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions supports infinite and NaN
dnl 'long double' arguments in the %f, %e, %g directives. (ISO C99, POSIX:2001)
dnl Result is gl_cv_func_printf_infinite_long_double.

AC_DEFUN([gl_PRINTF_INFINITE_LONG_DOUBLE],
[
  AC_REQUIRE([gl_PRINTF_LONG_DOUBLE])
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([gl_BIGENDIAN])
  AC_REQUIRE([gl_LONG_DOUBLE_VS_DOUBLE])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  dnl The user can set or unset the variable gl_printf_safe to indicate
  dnl that he wishes a safe handling of non-IEEE-754 'long double' values.
  if test -n "$gl_printf_safe"; then
    AC_DEFINE([CHECK_PRINTF_SAFE], [1],
      [Define if you wish *printf() functions that have a safe handling of
       non-IEEE-754 'long double' values.])
  fi
  case "$gl_cv_func_printf_long_double" in
    *yes)
      AC_CACHE_CHECK([whether printf supports infinite 'long double' arguments],
        [gl_cv_func_printf_infinite_long_double],
        [
          AC_RUN_IFELSE(
            [AC_LANG_SOURCE([[
]GL_NOCRASH[
#include <float.h>
#include <stdio.h>
#include <string.h>
static int
strisnan (const char *string, size_t start_index, size_t end_index)
{
  if (start_index < end_index)
    {
      if (string[start_index] == '-')
        start_index++;
      if (start_index + 3 <= end_index
          && memcmp (string + start_index, "nan", 3) == 0)
        {
          start_index += 3;
          if (start_index == end_index
              || (string[start_index] == '(' && string[end_index - 1] == ')'))
            return 1;
        }
    }
  return 0;
}
static char buf[10000];
static long double zeroL = 0.0L;
int main ()
{
  int result = 0;
  nocrash_init();
  if (sprintf (buf, "%Lf", 1.0L / zeroL) < 0
      || (strcmp (buf, "inf") != 0 && strcmp (buf, "infinity") != 0))
    result |= 1;
  if (sprintf (buf, "%Lf", -1.0L / zeroL) < 0
      || (strcmp (buf, "-inf") != 0 && strcmp (buf, "-infinity") != 0))
    result |= 1;
  if (sprintf (buf, "%Lf", zeroL / zeroL) < 0
      || !strisnan (buf, 0, strlen (buf)))
    result |= 1;
  if (sprintf (buf, "%Le", 1.0L / zeroL) < 0
      || (strcmp (buf, "inf") != 0 && strcmp (buf, "infinity") != 0))
    result |= 1;
  if (sprintf (buf, "%Le", -1.0L / zeroL) < 0
      || (strcmp (buf, "-inf") != 0 && strcmp (buf, "-infinity") != 0))
    result |= 1;
  if (sprintf (buf, "%Le", zeroL / zeroL) < 0
      || !strisnan (buf, 0, strlen (buf)))
    result |= 1;
  if (sprintf (buf, "%Lg", 1.0L / zeroL) < 0
      || (strcmp (buf, "inf") != 0 && strcmp (buf, "infinity") != 0))
    result |= 1;
  if (sprintf (buf, "%Lg", -1.0L / zeroL) < 0
      || (strcmp (buf, "-inf") != 0 && strcmp (buf, "-infinity") != 0))
    result |= 1;
  if (sprintf (buf, "%Lg", zeroL / zeroL) < 0
      || !strisnan (buf, 0, strlen (buf)))
    result |= 1;
#if CHECK_PRINTF_SAFE && ((defined __ia64 && LDBL_MANT_DIG == 64) || (defined __x86_64__ || defined __amd64__) || (defined __i386 || defined __i386__ || defined _I386 || defined _M_IX86 || defined _X86_)) && !HAVE_SAME_LONG_DOUBLE_AS_DOUBLE
/* Representation of an 80-bit 'long double' as an initializer for a sequence
   of 'unsigned int' words.  */
# ifdef WORDS_BIGENDIAN
#  define LDBL80_WORDS(exponent,manthi,mantlo) \
     { ((unsigned int) (exponent) << 16) | ((unsigned int) (manthi) >> 16), \
       ((unsigned int) (manthi) << 16) | ((unsigned int) (mantlo) >> 16),   \
       (unsigned int) (mantlo) << 16                                        \
     }
# else
#  define LDBL80_WORDS(exponent,manthi,mantlo) \
     { mantlo, manthi, exponent }
# endif
  { /* Quiet NaN.  */
    static union { unsigned int word[4]; long double value; } x =
      { LDBL80_WORDS (0xFFFF, 0xC3333333, 0x00000000) };
    if (sprintf (buf, "%Lf", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 2;
    if (sprintf (buf, "%Le", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 2;
    if (sprintf (buf, "%Lg", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 2;
  }
  {
    /* Signalling NaN.  */
    static union { unsigned int word[4]; long double value; } x =
      { LDBL80_WORDS (0xFFFF, 0x83333333, 0x00000000) };
    if (sprintf (buf, "%Lf", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 2;
    if (sprintf (buf, "%Le", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 2;
    if (sprintf (buf, "%Lg", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 2;
  }
  { /* Pseudo-NaN.  */
    static union { unsigned int word[4]; long double value; } x =
      { LDBL80_WORDS (0xFFFF, 0x40000001, 0x00000000) };
    if (sprintf (buf, "%Lf", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 4;
    if (sprintf (buf, "%Le", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 4;
    if (sprintf (buf, "%Lg", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 4;
  }
  { /* Pseudo-Infinity.  */
    static union { unsigned int word[4]; long double value; } x =
      { LDBL80_WORDS (0xFFFF, 0x00000000, 0x00000000) };
    if (sprintf (buf, "%Lf", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 8;
    if (sprintf (buf, "%Le", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 8;
    if (sprintf (buf, "%Lg", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 8;
  }
  { /* Pseudo-Zero.  */
    static union { unsigned int word[4]; long double value; } x =
      { LDBL80_WORDS (0x4004, 0x00000000, 0x00000000) };
    if (sprintf (buf, "%Lf", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 16;
    if (sprintf (buf, "%Le", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 16;
    if (sprintf (buf, "%Lg", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 16;
  }
  { /* Unnormalized number.  */
    static union { unsigned int word[4]; long double value; } x =
      { LDBL80_WORDS (0x4000, 0x63333333, 0x00000000) };
    if (sprintf (buf, "%Lf", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 32;
    if (sprintf (buf, "%Le", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 32;
    if (sprintf (buf, "%Lg", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 32;
  }
  { /* Pseudo-Denormal.  */
    static union { unsigned int word[4]; long double value; } x =
      { LDBL80_WORDS (0x0000, 0x83333333, 0x00000000) };
    if (sprintf (buf, "%Lf", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 64;
    if (sprintf (buf, "%Le", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 64;
    if (sprintf (buf, "%Lg", x.value) < 0
        || !strisnan (buf, 0, strlen (buf)))
      result |= 64;
  }
#endif
  return result;
}]])],
            [gl_cv_func_printf_infinite_long_double=yes],
            [gl_cv_func_printf_infinite_long_double=no],
            [
changequote(,)dnl
             case "$host_cpu" in
                                     # Guess no on ia64, x86_64, i386.
               ia64 | x86_64 | i*86) gl_cv_func_printf_infinite_long_double="guessing no";;
               *)
                 case "$host_os" in
                                         # Guess yes on glibc systems.
                   *-gnu*)               gl_cv_func_printf_infinite_long_double="guessing yes";;
                                         # Guess yes on FreeBSD >= 6.
                   freebsd[1-5].*)       gl_cv_func_printf_infinite_long_double="guessing no";;
                   freebsd* | kfreebsd*) gl_cv_func_printf_infinite_long_double="guessing yes";;
                                         # Guess yes on HP-UX >= 11.
                   hpux[7-9]* | hpux10*) gl_cv_func_printf_infinite_long_double="guessing no";;
                   hpux*)                gl_cv_func_printf_infinite_long_double="guessing yes";;
                                         # If we don't know, assume the worst.
                   *)                    gl_cv_func_printf_infinite_long_double="guessing no";;
                 esac
                 ;;
             esac
changequote([,])dnl
            ])
        ])
      ;;
    *)
      gl_cv_func_printf_infinite_long_double="irrelevant"
      ;;
  esac
])

dnl Test whether the *printf family of functions supports the 'a' and 'A'
dnl conversion specifier for hexadecimal output of floating-point numbers.
dnl (ISO C99, POSIX:2001)
dnl Result is gl_cv_func_printf_directive_a.

AC_DEFUN([gl_PRINTF_DIRECTIVE_A],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports the 'a' and 'A' directives],
    [gl_cv_func_printf_directive_a],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
static char buf[100];
static double zero = 0.0;
int main ()
{
  int result = 0;
  if (sprintf (buf, "%a %d", 3.1416015625, 33, 44, 55) < 0
      || (strcmp (buf, "0x1.922p+1 33") != 0
          && strcmp (buf, "0x3.244p+0 33") != 0
          && strcmp (buf, "0x6.488p-1 33") != 0
          && strcmp (buf, "0xc.91p-2 33") != 0))
    result |= 1;
  if (sprintf (buf, "%A %d", -3.1416015625, 33, 44, 55) < 0
      || (strcmp (buf, "-0X1.922P+1 33") != 0
          && strcmp (buf, "-0X3.244P+0 33") != 0
          && strcmp (buf, "-0X6.488P-1 33") != 0
          && strcmp (buf, "-0XC.91P-2 33") != 0))
    result |= 2;
  /* This catches a FreeBSD 6.1 bug: it doesn't round.  */
  if (sprintf (buf, "%.2a %d", 1.51, 33, 44, 55) < 0
      || (strcmp (buf, "0x1.83p+0 33") != 0
          && strcmp (buf, "0x3.05p-1 33") != 0
          && strcmp (buf, "0x6.0ap-2 33") != 0
          && strcmp (buf, "0xc.14p-3 33") != 0))
    result |= 4;
  /* This catches a FreeBSD 6.1 bug.  See
     <http://lists.gnu.org/archive/html/bug-gnulib/2007-04/msg00107.html> */
  if (sprintf (buf, "%010a %d", 1.0 / zero, 33, 44, 55) < 0
      || buf[0] == '0')
    result |= 8;
  /* This catches a Mac OS X 10.3.9 (Darwin 7.9) bug.  */
  if (sprintf (buf, "%.1a", 1.999) < 0
      || (strcmp (buf, "0x1.0p+1") != 0
          && strcmp (buf, "0x2.0p+0") != 0
          && strcmp (buf, "0x4.0p-1") != 0
          && strcmp (buf, "0x8.0p-2") != 0))
    result |= 16;
  /* This catches the same Mac OS X 10.3.9 (Darwin 7.9) bug and also a
     glibc 2.4 bug <http://sourceware.org/bugzilla/show_bug.cgi?id=2908>.  */
  if (sprintf (buf, "%.1La", 1.999L) < 0
      || (strcmp (buf, "0x1.0p+1") != 0
          && strcmp (buf, "0x2.0p+0") != 0
          && strcmp (buf, "0x4.0p-1") != 0
          && strcmp (buf, "0x8.0p-2") != 0))
    result |= 32;
  return result;
}]])],
        [gl_cv_func_printf_directive_a=yes],
        [gl_cv_func_printf_directive_a=no],
        [
         case "$host_os" in
                                 # Guess yes on glibc >= 2.5 systems.
           *-gnu*)
             AC_EGREP_CPP([BZ2908], [
               #include <features.h>
               #ifdef __GNU_LIBRARY__
                #if ((__GLIBC__ == 2 && __GLIBC_MINOR__ >= 5) || (__GLIBC__ > 2)) && !defined __UCLIBC__
                 BZ2908
                #endif
               #endif
               ],
               [gl_cv_func_printf_directive_a="guessing yes"],
               [gl_cv_func_printf_directive_a="guessing no"])
             ;;
                                 # If we don't know, assume the worst.
           *)                    gl_cv_func_printf_directive_a="guessing no";;
         esac
        ])
    ])
])

dnl Test whether the *printf family of functions supports the %F format
dnl directive. (ISO C99, POSIX:2001)
dnl Result is gl_cv_func_printf_directive_f.

AC_DEFUN([gl_PRINTF_DIRECTIVE_F],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports the 'F' directive],
    [gl_cv_func_printf_directive_f],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
static char buf[100];
static double zero = 0.0;
int main ()
{
  int result = 0;
  if (sprintf (buf, "%F %d", 1234567.0, 33, 44, 55) < 0
      || strcmp (buf, "1234567.000000 33") != 0)
    result |= 1;
  if (sprintf (buf, "%F", 1.0 / zero) < 0
      || (strcmp (buf, "INF") != 0 && strcmp (buf, "INFINITY") != 0))
    result |= 2;
  /* This catches a Cygwin 1.5.x bug.  */
  if (sprintf (buf, "%.F", 1234.0) < 0
      || strcmp (buf, "1234") != 0)
    result |= 4;
  return result;
}]])],
        [gl_cv_func_printf_directive_f=yes],
        [gl_cv_func_printf_directive_f=no],
        [
changequote(,)dnl
         case "$host_os" in
                                 # Guess yes on glibc systems.
           *-gnu*)               gl_cv_func_printf_directive_f="guessing yes";;
                                 # Guess yes on FreeBSD >= 6.
           freebsd[1-5].*)       gl_cv_func_printf_directive_f="guessing no";;
           freebsd* | kfreebsd*) gl_cv_func_printf_directive_f="guessing yes";;
                                 # Guess yes on Mac OS X >= 10.3.
           darwin[1-6].*)        gl_cv_func_printf_directive_f="guessing no";;
           darwin*)              gl_cv_func_printf_directive_f="guessing yes";;
                                 # Guess yes on Solaris >= 2.10.
           solaris2.[1-9][0-9]*) gl_cv_func_printf_sizes_c99="guessing yes";;
           solaris*)             gl_cv_func_printf_sizes_c99="guessing no";;
                                 # If we don't know, assume the worst.
           *)                    gl_cv_func_printf_directive_f="guessing no";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions supports the %n format
dnl directive. (ISO C99, POSIX:2001)
dnl Result is gl_cv_func_printf_directive_n.

AC_DEFUN([gl_PRINTF_DIRECTIVE_N],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports the 'n' directive],
    [gl_cv_func_printf_directive_n],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _MSC_VER
/* See page about "Parameter Validation" on msdn.microsoft.com.  */
static void cdecl
invalid_parameter_handler (const wchar_t *expression,
                           const wchar_t *function,
                           const wchar_t *file, unsigned int line,
                           uintptr_t dummy)
{
  exit (1);
}
#endif
static char fmtstring[10];
static char buf[100];
int main ()
{
  int count = -1;
#ifdef _MSC_VER
  _set_invalid_parameter_handler (invalid_parameter_handler);
#endif
  /* Copy the format string.  Some systems (glibc with _FORTIFY_SOURCE=2)
     support %n in format strings in read-only memory but not in writable
     memory.  */
  strcpy (fmtstring, "%d %n");
  if (sprintf (buf, fmtstring, 123, &count, 33, 44, 55) < 0
      || strcmp (buf, "123 ") != 0
      || count != 4)
    return 1;
  return 0;
}]])],
        [gl_cv_func_printf_directive_n=yes],
        [gl_cv_func_printf_directive_n=no],
        [
changequote(,)dnl
         case "$host_os" in
           mingw*) gl_cv_func_printf_directive_n="guessing no";;
           *)      gl_cv_func_printf_directive_n="guessing yes";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions supports the %ls format
dnl directive and in particular, when a precision is specified, whether
dnl the functions stop converting the wide string argument when the number
dnl of bytes that have been produced by this conversion equals or exceeds
dnl the precision.
dnl Result is gl_cv_func_printf_directive_ls.

AC_DEFUN([gl_PRINTF_DIRECTIVE_LS],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports the 'ls' directive],
    [gl_cv_func_printf_directive_ls],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
#include <string.h>
int main ()
{
  int result = 0;
  char buf[100];
  /* Test whether %ls works at all.
     This test fails on OpenBSD 4.0, IRIX 6.5, Solaris 2.6, Haiku, but not on
     Cygwin 1.5.  */
  {
    static const wchar_t wstring[] = { 'a', 'b', 'c', 0 };
    buf[0] = '\0';
    if (sprintf (buf, "%ls", wstring) < 0
        || strcmp (buf, "abc") != 0)
      result |= 1;
  }
  /* This test fails on IRIX 6.5, Solaris 2.6, Cygwin 1.5, Haiku (with an
     assertion failure inside libc), but not on OpenBSD 4.0.  */
  {
    static const wchar_t wstring[] = { 'a', 0 };
    buf[0] = '\0';
    if (sprintf (buf, "%ls", wstring) < 0
        || strcmp (buf, "a") != 0)
      result |= 2;
  }
  /* Test whether precisions in %ls are supported as specified in ISO C 99
     section 7.19.6.1:
       "If a precision is specified, no more than that many bytes are written
        (including shift sequences, if any), and the array shall contain a
        null wide character if, to equal the multibyte character sequence
        length given by the precision, the function would need to access a
        wide character one past the end of the array."
     This test fails on Solaris 10.  */
  {
    static const wchar_t wstring[] = { 'a', 'b', (wchar_t) 0xfdfdfdfd, 0 };
    buf[0] = '\0';
    if (sprintf (buf, "%.2ls", wstring) < 0
        || strcmp (buf, "ab") != 0)
      result |= 8;
  }
  return result;
}]])],
        [gl_cv_func_printf_directive_ls=yes],
        [gl_cv_func_printf_directive_ls=no],
        [
changequote(,)dnl
         case "$host_os" in
           openbsd*)        gl_cv_func_printf_directive_ls="guessing no";;
           irix*)           gl_cv_func_printf_directive_ls="guessing no";;
           solaris*)        gl_cv_func_printf_directive_ls="guessing no";;
           cygwin*)         gl_cv_func_printf_directive_ls="guessing no";;
           beos* | haiku*)  gl_cv_func_printf_directive_ls="guessing no";;
           *)               gl_cv_func_printf_directive_ls="guessing yes";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions supports POSIX/XSI format
dnl strings with positions. (POSIX:2001)
dnl Result is gl_cv_func_printf_positions.

AC_DEFUN([gl_PRINTF_POSITIONS],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports POSIX/XSI format strings with positions],
    [gl_cv_func_printf_positions],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
/* The string "%2$d %1$d", with dollar characters protected from the shell's
   dollar expansion (possibly an autoconf bug).  */
static char format[] = { '%', '2', '$', 'd', ' ', '%', '1', '$', 'd', '\0' };
static char buf[100];
int main ()
{
  sprintf (buf, format, 33, 55);
  return (strcmp (buf, "55 33") != 0);
}]])],
        [gl_cv_func_printf_positions=yes],
        [gl_cv_func_printf_positions=no],
        [
changequote(,)dnl
         case "$host_os" in
           netbsd[1-3]* | netbsdelf[1-3]* | netbsdaout[1-3]* | netbsdcoff[1-3]*)
                         gl_cv_func_printf_positions="guessing no";;
           beos*)        gl_cv_func_printf_positions="guessing no";;
           mingw* | pw*) gl_cv_func_printf_positions="guessing no";;
           *)            gl_cv_func_printf_positions="guessing yes";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions supports POSIX/XSI format
dnl strings with the ' flag for grouping of decimal digits. (POSIX:2001)
dnl Result is gl_cv_func_printf_flag_grouping.

AC_DEFUN([gl_PRINTF_FLAG_GROUPING],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports the grouping flag],
    [gl_cv_func_printf_flag_grouping],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
static char buf[100];
int main ()
{
  if (sprintf (buf, "%'d %d", 1234567, 99) < 0
      || buf[strlen (buf) - 1] != '9')
    return 1;
  return 0;
}]])],
        [gl_cv_func_printf_flag_grouping=yes],
        [gl_cv_func_printf_flag_grouping=no],
        [
changequote(,)dnl
         case "$host_os" in
           cygwin*)      gl_cv_func_printf_flag_grouping="guessing no";;
           netbsd*)      gl_cv_func_printf_flag_grouping="guessing no";;
           mingw* | pw*) gl_cv_func_printf_flag_grouping="guessing no";;
           *)            gl_cv_func_printf_flag_grouping="guessing yes";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions supports the - flag correctly.
dnl (ISO C99.) See
dnl <http://lists.gnu.org/archive/html/bug-coreutils/2008-02/msg00035.html>
dnl Result is gl_cv_func_printf_flag_leftadjust.

AC_DEFUN([gl_PRINTF_FLAG_LEFTADJUST],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports the left-adjust flag correctly],
    [gl_cv_func_printf_flag_leftadjust],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
static char buf[100];
int main ()
{
  /* Check that a '-' flag is not annihilated by a negative width.  */
  if (sprintf (buf, "a%-*sc", -3, "b") < 0
      || strcmp (buf, "ab  c") != 0)
    return 1;
  return 0;
}]])],
        [gl_cv_func_printf_flag_leftadjust=yes],
        [gl_cv_func_printf_flag_leftadjust=no],
        [
changequote(,)dnl
         case "$host_os" in
                    # Guess yes on HP-UX 11.
           hpux11*) gl_cv_func_printf_flag_leftadjust="guessing yes";;
                    # Guess no on HP-UX 10 and older.
           hpux*)   gl_cv_func_printf_flag_leftadjust="guessing no";;
                    # Guess yes otherwise.
           *)       gl_cv_func_printf_flag_leftadjust="guessing yes";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions supports padding of non-finite
dnl values with the 0 flag correctly. (ISO C99 + TC1 + TC2.) See
dnl <http://lists.gnu.org/archive/html/bug-gnulib/2007-04/msg00107.html>
dnl Result is gl_cv_func_printf_flag_zero.

AC_DEFUN([gl_PRINTF_FLAG_ZERO],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports the zero flag correctly],
    [gl_cv_func_printf_flag_zero],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
static char buf[100];
static double zero = 0.0;
int main ()
{
  if (sprintf (buf, "%010f", 1.0 / zero, 33, 44, 55) < 0
      || (strcmp (buf, "       inf") != 0
          && strcmp (buf, "  infinity") != 0))
    return 1;
  return 0;
}]])],
        [gl_cv_func_printf_flag_zero=yes],
        [gl_cv_func_printf_flag_zero=no],
        [
changequote(,)dnl
         case "$host_os" in
                   # Guess yes on glibc systems.
           *-gnu*) gl_cv_func_printf_flag_zero="guessing yes";;
                   # Guess yes on BeOS.
           beos*)  gl_cv_func_printf_flag_zero="guessing yes";;
                   # If we don't know, assume the worst.
           *)      gl_cv_func_printf_flag_zero="guessing no";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions supports large precisions.
dnl On mingw, precisions larger than 512 are treated like 512, in integer,
dnl floating-point or pointer output. On Solaris 10/x86, precisions larger
dnl than 510 in floating-point output crash the program. On Solaris 10/SPARC,
dnl precisions larger than 510 in floating-point output yield wrong results.
dnl On AIX 7.1, precisions larger than 998 in floating-point output yield
dnl wrong results. On BeOS, precisions larger than 1044 crash the program.
dnl Result is gl_cv_func_printf_precision.

AC_DEFUN([gl_PRINTF_PRECISION],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf supports large precisions],
    [gl_cv_func_printf_precision],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
static char buf[5000];
int main ()
{
  int result = 0;
#ifdef __BEOS__
  /* On BeOS, this would crash and show a dialog box.  Avoid the crash.  */
  return 1;
#endif
  if (sprintf (buf, "%.4000d %d", 1, 33, 44) < 4000 + 3)
    result |= 1;
  if (sprintf (buf, "%.4000f %d", 1.0, 33, 44) < 4000 + 5)
    result |= 2;
  if (sprintf (buf, "%.511f %d", 1.0, 33, 44) < 511 + 5
      || buf[0] != '1')
    result |= 4;
  if (sprintf (buf, "%.999f %d", 1.0, 33, 44) < 999 + 5
      || buf[0] != '1')
    result |= 4;
  return result;
}]])],
        [gl_cv_func_printf_precision=yes],
        [gl_cv_func_printf_precision=no],
        [
changequote(,)dnl
         case "$host_os" in
           # Guess no only on Solaris, native Windows, and BeOS systems.
           solaris*)     gl_cv_func_printf_precision="guessing no" ;;
           mingw* | pw*) gl_cv_func_printf_precision="guessing no" ;;
           beos*)        gl_cv_func_printf_precision="guessing no" ;;
           *)            gl_cv_func_printf_precision="guessing yes" ;;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the *printf family of functions recovers gracefully in case
dnl of an out-of-memory condition, or whether it crashes the entire program.
dnl Result is gl_cv_func_printf_enomem.

AC_DEFUN([gl_PRINTF_ENOMEM],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([gl_MULTIARCH])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether printf survives out-of-memory conditions],
    [gl_cv_func_printf_enomem],
    [
      gl_cv_func_printf_enomem="guessing no"
      if test "$cross_compiling" = no; then
        if test $APPLE_UNIVERSAL_BUILD = 0; then
          AC_LANG_CONFTEST([AC_LANG_SOURCE([
]GL_NOCRASH[
changequote(,)dnl
#include <stdio.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <errno.h>
int main()
{
  struct rlimit limit;
  int ret;
  nocrash_init ();
  /* Some printf implementations allocate temporary space with malloc.  */
  /* On BSD systems, malloc() is limited by RLIMIT_DATA.  */
#ifdef RLIMIT_DATA
  if (getrlimit (RLIMIT_DATA, &limit) < 0)
    return 77;
  if (limit.rlim_max == RLIM_INFINITY || limit.rlim_max > 5000000)
    limit.rlim_max = 5000000;
  limit.rlim_cur = limit.rlim_max;
  if (setrlimit (RLIMIT_DATA, &limit) < 0)
    return 77;
#endif
  /* On Linux systems, malloc() is limited by RLIMIT_AS.  */
#ifdef RLIMIT_AS
  if (getrlimit (RLIMIT_AS, &limit) < 0)
    return 77;
  if (limit.rlim_max == RLIM_INFINITY || limit.rlim_max > 5000000)
    limit.rlim_max = 5000000;
  limit.rlim_cur = limit.rlim_max;
  if (setrlimit (RLIMIT_AS, &limit) < 0)
    return 77;
#endif
  /* Some printf implementations allocate temporary space on the stack.  */
#ifdef RLIMIT_STACK
  if (getrlimit (RLIMIT_STACK, &limit) < 0)
    return 77;
  if (limit.rlim_max == RLIM_INFINITY || limit.rlim_max > 5000000)
    limit.rlim_max = 5000000;
  limit.rlim_cur = limit.rlim_max;
  if (setrlimit (RLIMIT_STACK, &limit) < 0)
    return 77;
#endif
  ret = printf ("%.5000000f", 1.0);
  return !(ret == 5000002 || (ret < 0 && errno == ENOMEM));
}
changequote([,])dnl
          ])])
          if AC_TRY_EVAL([ac_link]) && test -s conftest$ac_exeext; then
            (./conftest 2>&AS_MESSAGE_LOG_FD
             result=$?
             _AS_ECHO_LOG([\$? = $result])
             if test $result != 0 && test $result != 77; then result=1; fi
             exit $result
            ) >/dev/null 2>/dev/null
            case $? in
              0) gl_cv_func_printf_enomem="yes" ;;
              77) gl_cv_func_printf_enomem="guessing no" ;;
              *) gl_cv_func_printf_enomem="no" ;;
            esac
          else
            gl_cv_func_printf_enomem="guessing no"
          fi
          rm -fr conftest*
        else
          dnl A universal build on Apple Mac OS X platforms.
          dnl The result would be 'no' in 32-bit mode and 'yes' in 64-bit mode.
          dnl But we need a configuration result that is valid in both modes.
          gl_cv_func_printf_enomem="guessing no"
        fi
      fi
      if test "$gl_cv_func_printf_enomem" = "guessing no"; then
changequote(,)dnl
        case "$host_os" in
                    # Guess yes on glibc systems.
          *-gnu*)   gl_cv_func_printf_enomem="guessing yes";;
                    # Guess yes on Solaris.
          solaris*) gl_cv_func_printf_enomem="guessing yes";;
                    # Guess yes on AIX.
          aix*)     gl_cv_func_printf_enomem="guessing yes";;
                    # Guess yes on HP-UX/hppa.
          hpux*)    case "$host_cpu" in
                      hppa*) gl_cv_func_printf_enomem="guessing yes";;
                      *)     gl_cv_func_printf_enomem="guessing no";;
                    esac
                    ;;
                    # Guess yes on IRIX.
          irix*)    gl_cv_func_printf_enomem="guessing yes";;
                    # Guess yes on OSF/1.
          osf*)     gl_cv_func_printf_enomem="guessing yes";;
                    # Guess yes on BeOS.
          beos*)    gl_cv_func_printf_enomem="guessing yes";;
                    # Guess yes on Haiku.
          haiku*)   gl_cv_func_printf_enomem="guessing yes";;
                    # If we don't know, assume the worst.
          *)        gl_cv_func_printf_enomem="guessing no";;
        esac
changequote([,])dnl
      fi
    ])
])

dnl Test whether the snprintf function exists. (ISO C99, POSIX:2001)
dnl Result is ac_cv_func_snprintf.

AC_DEFUN([gl_SNPRINTF_PRESENCE],
[
  AC_CHECK_FUNCS_ONCE([snprintf])
])

dnl Test whether the string produced by the snprintf function is always NUL
dnl terminated. (ISO C99, POSIX:2001)
dnl Result is gl_cv_func_snprintf_truncation_c99.

AC_DEFUN([gl_SNPRINTF_TRUNCATION_C99],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_REQUIRE([gl_SNPRINTF_PRESENCE])
  AC_CACHE_CHECK([whether snprintf truncates the result as in C99],
    [gl_cv_func_snprintf_truncation_c99],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
#if HAVE_SNPRINTF
# define my_snprintf snprintf
#else
# include <stdarg.h>
static int my_snprintf (char *buf, int size, const char *format, ...)
{
  va_list args;
  int ret;
  va_start (args, format);
  ret = vsnprintf (buf, size, format, args);
  va_end (args);
  return ret;
}
#endif
static char buf[100];
int main ()
{
  strcpy (buf, "ABCDEF");
  my_snprintf (buf, 3, "%d %d", 4567, 89);
  if (memcmp (buf, "45\0DEF", 6) != 0)
    return 1;
  return 0;
}]])],
        [gl_cv_func_snprintf_truncation_c99=yes],
        [gl_cv_func_snprintf_truncation_c99=no],
        [
changequote(,)dnl
         case "$host_os" in
                                 # Guess yes on glibc systems.
           *-gnu*)               gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # Guess yes on FreeBSD >= 5.
           freebsd[1-4].*)       gl_cv_func_snprintf_truncation_c99="guessing no";;
           freebsd* | kfreebsd*) gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # Guess yes on Mac OS X >= 10.3.
           darwin[1-6].*)        gl_cv_func_snprintf_truncation_c99="guessing no";;
           darwin*)              gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # Guess yes on OpenBSD >= 3.9.
           openbsd[1-2].* | openbsd3.[0-8] | openbsd3.[0-8].*)
                                 gl_cv_func_snprintf_truncation_c99="guessing no";;
           openbsd*)             gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # Guess yes on Solaris >= 2.6.
           solaris2.[0-5] | solaris2.[0-5].*)
                                 gl_cv_func_snprintf_truncation_c99="guessing no";;
           solaris*)             gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # Guess yes on AIX >= 4.
           aix[1-3]*)            gl_cv_func_snprintf_truncation_c99="guessing no";;
           aix*)                 gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # Guess yes on HP-UX >= 11.
           hpux[7-9]* | hpux10*) gl_cv_func_snprintf_truncation_c99="guessing no";;
           hpux*)                gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # Guess yes on IRIX >= 6.5.
           irix6.5)              gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # Guess yes on OSF/1 >= 5.
           osf[3-4]*)            gl_cv_func_snprintf_truncation_c99="guessing no";;
           osf*)                 gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # Guess yes on NetBSD >= 3.
           netbsd[1-2]* | netbsdelf[1-2]* | netbsdaout[1-2]* | netbsdcoff[1-2]*)
                                 gl_cv_func_snprintf_truncation_c99="guessing no";;
           netbsd*)              gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # Guess yes on BeOS.
           beos*)                gl_cv_func_snprintf_truncation_c99="guessing yes";;
                                 # If we don't know, assume the worst.
           *)                    gl_cv_func_snprintf_truncation_c99="guessing no";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the return value of the snprintf function is the number
dnl of bytes (excluding the terminating NUL) that would have been produced
dnl if the buffer had been large enough. (ISO C99, POSIX:2001)
dnl For example, this test program fails on IRIX 6.5:
dnl     ---------------------------------------------------------------------
dnl     #include <stdio.h>
dnl     int main()
dnl     {
dnl       static char buf[8];
dnl       int retval = snprintf (buf, 3, "%d", 12345);
dnl       return retval >= 0 && retval < 3;
dnl     }
dnl     ---------------------------------------------------------------------
dnl Result is gl_cv_func_snprintf_retval_c99.

AC_DEFUN_ONCE([gl_SNPRINTF_RETVAL_C99],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_REQUIRE([gl_SNPRINTF_PRESENCE])
  AC_CACHE_CHECK([whether snprintf returns a byte count as in C99],
    [gl_cv_func_snprintf_retval_c99],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
#if HAVE_SNPRINTF
# define my_snprintf snprintf
#else
# include <stdarg.h>
static int my_snprintf (char *buf, int size, const char *format, ...)
{
  va_list args;
  int ret;
  va_start (args, format);
  ret = vsnprintf (buf, size, format, args);
  va_end (args);
  return ret;
}
#endif
static char buf[100];
int main ()
{
  strcpy (buf, "ABCDEF");
  if (my_snprintf (buf, 3, "%d %d", 4567, 89) != 7)
    return 1;
  if (my_snprintf (buf, 0, "%d %d", 4567, 89) != 7)
    return 2;
  if (my_snprintf (NULL, 0, "%d %d", 4567, 89) != 7)
    return 3;
  return 0;
}]])],
        [gl_cv_func_snprintf_retval_c99=yes],
        [gl_cv_func_snprintf_retval_c99=no],
        [
changequote(,)dnl
         case "$host_os" in
                                 # Guess yes on glibc systems.
           *-gnu*)               gl_cv_func_snprintf_retval_c99="guessing yes";;
                                 # Guess yes on FreeBSD >= 5.
           freebsd[1-4].*)       gl_cv_func_snprintf_retval_c99="guessing no";;
           freebsd* | kfreebsd*) gl_cv_func_snprintf_retval_c99="guessing yes";;
                                 # Guess yes on Mac OS X >= 10.3.
           darwin[1-6].*)        gl_cv_func_snprintf_retval_c99="guessing no";;
           darwin*)              gl_cv_func_snprintf_retval_c99="guessing yes";;
                                 # Guess yes on OpenBSD >= 3.9.
           openbsd[1-2].* | openbsd3.[0-8] | openbsd3.[0-8].*)
                                 gl_cv_func_snprintf_retval_c99="guessing no";;
           openbsd*)             gl_cv_func_snprintf_retval_c99="guessing yes";;
                                 # Guess yes on Solaris >= 2.10.
           solaris2.[1-9][0-9]*) gl_cv_func_printf_sizes_c99="guessing yes";;
           solaris*)             gl_cv_func_printf_sizes_c99="guessing no";;
                                 # Guess yes on AIX >= 4.
           aix[1-3]*)            gl_cv_func_snprintf_retval_c99="guessing no";;
           aix*)                 gl_cv_func_snprintf_retval_c99="guessing yes";;
                                 # Guess yes on NetBSD >= 3.
           netbsd[1-2]* | netbsdelf[1-2]* | netbsdaout[1-2]* | netbsdcoff[1-2]*)
                                 gl_cv_func_snprintf_retval_c99="guessing no";;
           netbsd*)              gl_cv_func_snprintf_retval_c99="guessing yes";;
                                 # Guess yes on BeOS.
           beos*)                gl_cv_func_snprintf_retval_c99="guessing yes";;
                                 # If we don't know, assume the worst.
           *)                    gl_cv_func_snprintf_retval_c99="guessing no";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the snprintf function supports the %n format directive
dnl also in truncated portions of the format string. (ISO C99, POSIX:2001)
dnl Result is gl_cv_func_snprintf_directive_n.

AC_DEFUN([gl_SNPRINTF_DIRECTIVE_N],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_REQUIRE([gl_SNPRINTF_PRESENCE])
  AC_CACHE_CHECK([whether snprintf fully supports the 'n' directive],
    [gl_cv_func_snprintf_directive_n],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#include <string.h>
#if HAVE_SNPRINTF
# define my_snprintf snprintf
#else
# include <stdarg.h>
static int my_snprintf (char *buf, int size, const char *format, ...)
{
  va_list args;
  int ret;
  va_start (args, format);
  ret = vsnprintf (buf, size, format, args);
  va_end (args);
  return ret;
}
#endif
static char fmtstring[10];
static char buf[100];
int main ()
{
  int count = -1;
  /* Copy the format string.  Some systems (glibc with _FORTIFY_SOURCE=2)
     support %n in format strings in read-only memory but not in writable
     memory.  */
  strcpy (fmtstring, "%d %n");
  my_snprintf (buf, 4, fmtstring, 12345, &count, 33, 44, 55);
  if (count != 6)
    return 1;
  return 0;
}]])],
        [gl_cv_func_snprintf_directive_n=yes],
        [gl_cv_func_snprintf_directive_n=no],
        [
changequote(,)dnl
         case "$host_os" in
                                 # Guess yes on glibc systems.
           *-gnu*)               gl_cv_func_snprintf_directive_n="guessing yes";;
                                 # Guess yes on FreeBSD >= 5.
           freebsd[1-4].*)       gl_cv_func_snprintf_directive_n="guessing no";;
           freebsd* | kfreebsd*) gl_cv_func_snprintf_directive_n="guessing yes";;
                                 # Guess yes on Mac OS X >= 10.3.
           darwin[1-6].*)        gl_cv_func_snprintf_directive_n="guessing no";;
           darwin*)              gl_cv_func_snprintf_directive_n="guessing yes";;
                                 # Guess yes on Solaris >= 2.6.
           solaris2.[0-5] | solaris2.[0-5].*)
                                 gl_cv_func_snprintf_directive_n="guessing no";;
           solaris*)             gl_cv_func_snprintf_directive_n="guessing yes";;
                                 # Guess yes on AIX >= 4.
           aix[1-3]*)            gl_cv_func_snprintf_directive_n="guessing no";;
           aix*)                 gl_cv_func_snprintf_directive_n="guessing yes";;
                                 # Guess yes on IRIX >= 6.5.
           irix6.5)              gl_cv_func_snprintf_directive_n="guessing yes";;
                                 # Guess yes on OSF/1 >= 5.
           osf[3-4]*)            gl_cv_func_snprintf_directive_n="guessing no";;
           osf*)                 gl_cv_func_snprintf_directive_n="guessing yes";;
                                 # Guess yes on NetBSD >= 3.
           netbsd[1-2]* | netbsdelf[1-2]* | netbsdaout[1-2]* | netbsdcoff[1-2]*)
                                 gl_cv_func_snprintf_directive_n="guessing no";;
           netbsd*)              gl_cv_func_snprintf_directive_n="guessing yes";;
                                 # Guess yes on BeOS.
           beos*)                gl_cv_func_snprintf_directive_n="guessing yes";;
                                 # If we don't know, assume the worst.
           *)                    gl_cv_func_snprintf_directive_n="guessing no";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl Test whether the snprintf function, when passed a size = 1, writes any
dnl output without bounds in this case, behaving like sprintf. This is the
dnl case on Linux libc5.
dnl Result is gl_cv_func_snprintf_size1.

AC_DEFUN([gl_SNPRINTF_SIZE1],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([gl_SNPRINTF_PRESENCE])
  AC_CACHE_CHECK([whether snprintf respects a size of 1],
    [gl_cv_func_snprintf_size1],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdio.h>
#if HAVE_SNPRINTF
# define my_snprintf snprintf
#else
# include <stdarg.h>
static int my_snprintf (char *buf, int size, const char *format, ...)
{
  va_list args;
  int ret;
  va_start (args, format);
  ret = vsnprintf (buf, size, format, args);
  va_end (args);
  return ret;
}
#endif
int main()
{
  static char buf[8] = { 'D', 'E', 'A', 'D', 'B', 'E', 'E', 'F' };
  my_snprintf (buf, 1, "%d", 12345);
  return buf[1] != 'E';
}]])],
        [gl_cv_func_snprintf_size1=yes],
        [gl_cv_func_snprintf_size1=no],
        [gl_cv_func_snprintf_size1="guessing yes"])
    ])
])

dnl Test whether the vsnprintf function, when passed a zero size, produces no
dnl output. (ISO C99, POSIX:2001)
dnl For example, snprintf nevertheless writes a NUL byte in this case
dnl on OSF/1 5.1:
dnl     ---------------------------------------------------------------------
dnl     #include <stdio.h>
dnl     int main()
dnl     {
dnl       static char buf[8] = { 'D', 'E', 'A', 'D', 'B', 'E', 'E', 'F' };
dnl       snprintf (buf, 0, "%d", 12345);
dnl       return buf[0] != 'D';
dnl     }
dnl     ---------------------------------------------------------------------
dnl And vsnprintf writes any output without bounds in this case, behaving like
dnl vsprintf, on HP-UX 11 and OSF/1 5.1:
dnl     ---------------------------------------------------------------------
dnl     #include <stdarg.h>
dnl     #include <stdio.h>
dnl     static int my_snprintf (char *buf, int size, const char *format, ...)
dnl     {
dnl       va_list args;
dnl       int ret;
dnl       va_start (args, format);
dnl       ret = vsnprintf (buf, size, format, args);
dnl       va_end (args);
dnl       return ret;
dnl     }
dnl     int main()
dnl     {
dnl       static char buf[8] = { 'D', 'E', 'A', 'D', 'B', 'E', 'E', 'F' };
dnl       my_snprintf (buf, 0, "%d", 12345);
dnl       return buf[0] != 'D';
dnl     }
dnl     ---------------------------------------------------------------------
dnl Result is gl_cv_func_vsnprintf_zerosize_c99.

AC_DEFUN([gl_VSNPRINTF_ZEROSIZE_C99],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether vsnprintf respects a zero size as in C99],
    [gl_cv_func_vsnprintf_zerosize_c99],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <stdarg.h>
#include <stdio.h>
static int my_snprintf (char *buf, int size, const char *format, ...)
{
  va_list args;
  int ret;
  va_start (args, format);
  ret = vsnprintf (buf, size, format, args);
  va_end (args);
  return ret;
}
int main()
{
  static char buf[8] = { 'D', 'E', 'A', 'D', 'B', 'E', 'E', 'F' };
  my_snprintf (buf, 0, "%d", 12345);
  return buf[0] != 'D';
}]])],
        [gl_cv_func_vsnprintf_zerosize_c99=yes],
        [gl_cv_func_vsnprintf_zerosize_c99=no],
        [
changequote(,)dnl
         case "$host_os" in
                                 # Guess yes on glibc systems.
           *-gnu*)               gl_cv_func_vsnprintf_zerosize_c99="guessing yes";;
                                 # Guess yes on FreeBSD >= 5.
           freebsd[1-4].*)       gl_cv_func_vsnprintf_zerosize_c99="guessing no";;
           freebsd* | kfreebsd*) gl_cv_func_vsnprintf_zerosize_c99="guessing yes";;
                                 # Guess yes on Mac OS X >= 10.3.
           darwin[1-6].*)        gl_cv_func_vsnprintf_zerosize_c99="guessing no";;
           darwin*)              gl_cv_func_vsnprintf_zerosize_c99="guessing yes";;
                                 # Guess yes on Cygwin.
           cygwin*)              gl_cv_func_vsnprintf_zerosize_c99="guessing yes";;
                                 # Guess yes on Solaris >= 2.6.
           solaris2.[0-5] | solaris2.[0-5].*)
                                 gl_cv_func_vsnprintf_zerosize_c99="guessing no";;
           solaris*)             gl_cv_func_vsnprintf_zerosize_c99="guessing yes";;
                                 # Guess yes on AIX >= 4.
           aix[1-3]*)            gl_cv_func_vsnprintf_zerosize_c99="guessing no";;
           aix*)                 gl_cv_func_vsnprintf_zerosize_c99="guessing yes";;
                                 # Guess yes on IRIX >= 6.5.
           irix6.5)              gl_cv_func_vsnprintf_zerosize_c99="guessing yes";;
                                 # Guess yes on NetBSD >= 3.
           netbsd[1-2]* | netbsdelf[1-2]* | netbsdaout[1-2]* | netbsdcoff[1-2]*)
                                 gl_cv_func_vsnprintf_zerosize_c99="guessing no";;
           netbsd*)              gl_cv_func_vsnprintf_zerosize_c99="guessing yes";;
                                 # Guess yes on BeOS.
           beos*)                gl_cv_func_vsnprintf_zerosize_c99="guessing yes";;
                                 # Guess yes on mingw.
           mingw* | pw*)         gl_cv_func_vsnprintf_zerosize_c99="guessing yes";;
                                 # If we don't know, assume the worst.
           *)                    gl_cv_func_vsnprintf_zerosize_c99="guessing no";;
         esac
changequote([,])dnl
        ])
    ])
])

dnl The results of these tests on various platforms are:
dnl
dnl 1 = gl_PRINTF_SIZES_C99
dnl 2 = gl_PRINTF_LONG_DOUBLE
dnl 3 = gl_PRINTF_INFINITE
dnl 4 = gl_PRINTF_INFINITE_LONG_DOUBLE
dnl 5 = gl_PRINTF_DIRECTIVE_A
dnl 6 = gl_PRINTF_DIRECTIVE_F
dnl 7 = gl_PRINTF_DIRECTIVE_N
dnl 8 = gl_PRINTF_DIRECTIVE_LS
dnl 9 = gl_PRINTF_POSITIONS
dnl 10 = gl_PRINTF_FLAG_GROUPING
dnl 11 = gl_PRINTF_FLAG_LEFTADJUST
dnl 12 = gl_PRINTF_FLAG_ZERO
dnl 13 = gl_PRINTF_PRECISION
dnl 14 = gl_PRINTF_ENOMEM
dnl 15 = gl_SNPRINTF_PRESENCE
dnl 16 = gl_SNPRINTF_TRUNCATION_C99
dnl 17 = gl_SNPRINTF_RETVAL_C99
dnl 18 = gl_SNPRINTF_DIRECTIVE_N
dnl 19 = gl_SNPRINTF_SIZE1
dnl 20 = gl_VSNPRINTF_ZEROSIZE_C99
dnl
dnl 1 = checking whether printf supports size specifiers as in C99...
dnl 2 = checking whether printf supports 'long double' arguments...
dnl 3 = checking whether printf supports infinite 'double' arguments...
dnl 4 = checking whether printf supports infinite 'long double' arguments...
dnl 5 = checking whether printf supports the 'a' and 'A' directives...
dnl 6 = checking whether printf supports the 'F' directive...
dnl 7 = checking whether printf supports the 'n' directive...
dnl 8 = checking whether printf supports the 'ls' directive...
dnl 9 = checking whether printf supports POSIX/XSI format strings with positions...
dnl 10 = checking whether printf supports the grouping flag...
dnl 11 = checking whether printf supports the left-adjust flag correctly...
dnl 12 = checking whether printf supports the zero flag correctly...
dnl 13 = checking whether printf supports large precisions...
dnl 14 = checking whether printf survives out-of-memory conditions...
dnl 15 = checking for snprintf...
dnl 16 = checking whether snprintf truncates the result as in C99...
dnl 17 = checking whether snprintf returns a byte count as in C99...
dnl 18 = checking whether snprintf fully supports the 'n' directive...
dnl 19 = checking whether snprintf respects a size of 1...
dnl 20 = checking whether vsnprintf respects a zero size as in C99...
dnl
dnl . = yes, # = no.
dnl
dnl                                  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20
dnl   glibc 2.5                      .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
dnl   glibc 2.3.6                    .  .  .  .  #  .  .  .  .  .  .  .  .  .  .  .  .  .  .  .
dnl   FreeBSD 5.4, 6.1               .  .  .  .  #  .  .  .  .  .  .  #  .  #  .  .  .  .  .  .
dnl   Mac OS X 10.5.8                .  .  .  #  #  .  .  .  .  .  .  #  .  .  .  .  .  .  .  .
dnl   Mac OS X 10.3.9                .  .  .  .  #  .  .  .  .  .  .  #  .  #  .  .  .  .  .  .
dnl   OpenBSD 3.9, 4.0               .  .  #  #  #  #  .  #  .  #  .  #  .  #  .  .  .  .  .  .
dnl   Cygwin 1.7.0 (2009)            .  .  .  #  .  .  .  ?  .  .  .  .  .  ?  .  .  .  .  .  .
dnl   Cygwin 1.5.25 (2008)           .  .  .  #  #  .  .  #  .  .  .  .  .  #  .  .  .  .  .  .
dnl   Cygwin 1.5.19 (2006)           #  .  .  #  #  #  .  #  .  #  .  #  #  #  .  .  .  .  .  .
dnl   Solaris 11 2011-11             .  .  #  #  #  .  .  #  .  .  .  #  .  .  .  .  .  .  .  .
dnl   Solaris 10                     .  .  #  #  #  .  .  #  .  .  .  #  #  .  .  .  .  .  .  .
dnl   Solaris 2.6 ... 9              #  .  #  #  #  #  .  #  .  .  .  #  #  .  .  .  #  .  .  .
dnl   Solaris 2.5.1                  #  .  #  #  #  #  .  #  .  .  .  #  .  .  #  #  #  #  #  #
dnl   AIX 7.1                        .  .  #  #  #  .  .  .  .  .  .  #  #  .  .  .  .  .  .  .
dnl   AIX 5.2                        .  .  #  #  #  .  .  .  .  .  .  #  .  .  .  .  .  .  .  .
dnl   AIX 4.3.2, 5.1                 #  .  #  #  #  #  .  .  .  .  .  #  .  .  .  .  #  .  .  .
dnl   HP-UX 11.31                    .  .  .  .  #  .  .  .  .  .  .  #  .  .  .  .  #  #  .  .
dnl   HP-UX 11.{00,11,23}            #  .  .  .  #  #  .  .  .  .  .  #  .  .  .  .  #  #  .  #
dnl   HP-UX 10.20                    #  .  #  .  #  #  .  ?  .  .  #  #  .  .  .  .  #  #  ?  #
dnl   IRIX 6.5                       #  .  #  #  #  #  .  #  .  .  .  #  .  .  .  .  #  .  .  .
dnl   OSF/1 5.1                      #  .  #  #  #  #  .  .  .  .  .  #  .  .  .  .  #  .  .  #
dnl   OSF/1 4.0d                     #  .  #  #  #  #  .  .  .  .  .  #  .  .  #  #  #  #  #  #
dnl   NetBSD 5.0                     .  .  .  #  #  .  .  .  .  .  .  #  .  #  .  .  .  .  .  .
dnl   NetBSD 4.0                     .  ?  ?  ?  ?  ?  .  ?  .  ?  ?  ?  ?  ?  .  .  .  ?  ?  ?
dnl   NetBSD 3.0                     .  .  .  .  #  #  .  ?  #  #  ?  #  .  #  .  .  .  .  .  .
dnl   Haiku                          .  .  .  #  #  #  .  #  .  .  .  .  .  ?  .  .  ?  .  .  .
dnl   BeOS                           #  #  .  #  #  #  .  ?  #  .  ?  .  #  ?  .  .  ?  .  .  .
dnl   old mingw / msvcrt             #  #  #  #  #  #  .  .  #  #  .  #  #  ?  .  #  #  #  .  .
dnl   MSVC 9                         #  #  #  #  #  #  #  .  #  #  .  #  #  ?  #  #  #  #  .  .
dnl   mingw 2009-2011                .  #  .  #  .  .  .  .  #  #  .  .  .  ?  .  .  .  .  .  .
dnl   mingw-w64 2011                 #  #  #  #  #  #  .  .  #  #  .  #  #  ?  .  #  #  #  .  .
