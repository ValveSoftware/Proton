# stdint.m4 serial 43
dnl Copyright (C) 2001-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Paul Eggert and Bruno Haible.
dnl Test whether <stdint.h> is supported or must be substituted.

AC_DEFUN_ONCE([gl_STDINT_H],
[
  AC_PREREQ([2.59])dnl

  dnl Check for long long int and unsigned long long int.
  AC_REQUIRE([AC_TYPE_LONG_LONG_INT])
  if test $ac_cv_type_long_long_int = yes; then
    HAVE_LONG_LONG_INT=1
  else
    HAVE_LONG_LONG_INT=0
  fi
  AC_SUBST([HAVE_LONG_LONG_INT])
  AC_REQUIRE([AC_TYPE_UNSIGNED_LONG_LONG_INT])
  if test $ac_cv_type_unsigned_long_long_int = yes; then
    HAVE_UNSIGNED_LONG_LONG_INT=1
  else
    HAVE_UNSIGNED_LONG_LONG_INT=0
  fi
  AC_SUBST([HAVE_UNSIGNED_LONG_LONG_INT])

  dnl Check for <wchar.h>, in the same way as gl_WCHAR_H does.
  AC_CHECK_HEADERS_ONCE([wchar.h])
  if test $ac_cv_header_wchar_h = yes; then
    HAVE_WCHAR_H=1
  else
    HAVE_WCHAR_H=0
  fi
  AC_SUBST([HAVE_WCHAR_H])

  dnl Check for <inttypes.h>.
  dnl AC_INCLUDES_DEFAULT defines $ac_cv_header_inttypes_h.
  if test $ac_cv_header_inttypes_h = yes; then
    HAVE_INTTYPES_H=1
  else
    HAVE_INTTYPES_H=0
  fi
  AC_SUBST([HAVE_INTTYPES_H])

  dnl Check for <sys/types.h>.
  dnl AC_INCLUDES_DEFAULT defines $ac_cv_header_sys_types_h.
  if test $ac_cv_header_sys_types_h = yes; then
    HAVE_SYS_TYPES_H=1
  else
    HAVE_SYS_TYPES_H=0
  fi
  AC_SUBST([HAVE_SYS_TYPES_H])

  gl_CHECK_NEXT_HEADERS([stdint.h])
  if test $ac_cv_header_stdint_h = yes; then
    HAVE_STDINT_H=1
  else
    HAVE_STDINT_H=0
  fi
  AC_SUBST([HAVE_STDINT_H])

  dnl Now see whether we need a substitute <stdint.h>.
  if test $ac_cv_header_stdint_h = yes; then
    AC_CACHE_CHECK([whether stdint.h conforms to C99],
      [gl_cv_header_working_stdint_h],
      [gl_cv_header_working_stdint_h=no
       AC_COMPILE_IFELSE([
         AC_LANG_PROGRAM([[
#define _GL_JUST_INCLUDE_SYSTEM_STDINT_H 1 /* work if build isn't clean */
#include <stdint.h>
/* Dragonfly defines WCHAR_MIN, WCHAR_MAX only in <wchar.h>.  */
#if !(defined WCHAR_MIN && defined WCHAR_MAX)
#error "WCHAR_MIN, WCHAR_MAX not defined in <stdint.h>"
#endif
]
gl_STDINT_INCLUDES
[
#ifdef INT8_MAX
int8_t a1 = INT8_MAX;
int8_t a1min = INT8_MIN;
#endif
#ifdef INT16_MAX
int16_t a2 = INT16_MAX;
int16_t a2min = INT16_MIN;
#endif
#ifdef INT32_MAX
int32_t a3 = INT32_MAX;
int32_t a3min = INT32_MIN;
#endif
#ifdef INT64_MAX
int64_t a4 = INT64_MAX;
int64_t a4min = INT64_MIN;
#endif
#ifdef UINT8_MAX
uint8_t b1 = UINT8_MAX;
#else
typedef int b1[(unsigned char) -1 != 255 ? 1 : -1];
#endif
#ifdef UINT16_MAX
uint16_t b2 = UINT16_MAX;
#endif
#ifdef UINT32_MAX
uint32_t b3 = UINT32_MAX;
#endif
#ifdef UINT64_MAX
uint64_t b4 = UINT64_MAX;
#endif
int_least8_t c1 = INT8_C (0x7f);
int_least8_t c1max = INT_LEAST8_MAX;
int_least8_t c1min = INT_LEAST8_MIN;
int_least16_t c2 = INT16_C (0x7fff);
int_least16_t c2max = INT_LEAST16_MAX;
int_least16_t c2min = INT_LEAST16_MIN;
int_least32_t c3 = INT32_C (0x7fffffff);
int_least32_t c3max = INT_LEAST32_MAX;
int_least32_t c3min = INT_LEAST32_MIN;
int_least64_t c4 = INT64_C (0x7fffffffffffffff);
int_least64_t c4max = INT_LEAST64_MAX;
int_least64_t c4min = INT_LEAST64_MIN;
uint_least8_t d1 = UINT8_C (0xff);
uint_least8_t d1max = UINT_LEAST8_MAX;
uint_least16_t d2 = UINT16_C (0xffff);
uint_least16_t d2max = UINT_LEAST16_MAX;
uint_least32_t d3 = UINT32_C (0xffffffff);
uint_least32_t d3max = UINT_LEAST32_MAX;
uint_least64_t d4 = UINT64_C (0xffffffffffffffff);
uint_least64_t d4max = UINT_LEAST64_MAX;
int_fast8_t e1 = INT_FAST8_MAX;
int_fast8_t e1min = INT_FAST8_MIN;
int_fast16_t e2 = INT_FAST16_MAX;
int_fast16_t e2min = INT_FAST16_MIN;
int_fast32_t e3 = INT_FAST32_MAX;
int_fast32_t e3min = INT_FAST32_MIN;
int_fast64_t e4 = INT_FAST64_MAX;
int_fast64_t e4min = INT_FAST64_MIN;
uint_fast8_t f1 = UINT_FAST8_MAX;
uint_fast16_t f2 = UINT_FAST16_MAX;
uint_fast32_t f3 = UINT_FAST32_MAX;
uint_fast64_t f4 = UINT_FAST64_MAX;
#ifdef INTPTR_MAX
intptr_t g = INTPTR_MAX;
intptr_t gmin = INTPTR_MIN;
#endif
#ifdef UINTPTR_MAX
uintptr_t h = UINTPTR_MAX;
#endif
intmax_t i = INTMAX_MAX;
uintmax_t j = UINTMAX_MAX;

#include <limits.h> /* for CHAR_BIT */
#define TYPE_MINIMUM(t) \
  ((t) ((t) 0 < (t) -1 ? (t) 0 : ~ TYPE_MAXIMUM (t)))
#define TYPE_MAXIMUM(t) \
  ((t) ((t) 0 < (t) -1 \
        ? (t) -1 \
        : ((((t) 1 << (sizeof (t) * CHAR_BIT - 2)) - 1) * 2 + 1)))
struct s {
  int check_PTRDIFF:
      PTRDIFF_MIN == TYPE_MINIMUM (ptrdiff_t)
      && PTRDIFF_MAX == TYPE_MAXIMUM (ptrdiff_t)
      ? 1 : -1;
  /* Detect bug in FreeBSD 6.0 / ia64.  */
  int check_SIG_ATOMIC:
      SIG_ATOMIC_MIN == TYPE_MINIMUM (sig_atomic_t)
      && SIG_ATOMIC_MAX == TYPE_MAXIMUM (sig_atomic_t)
      ? 1 : -1;
  int check_SIZE: SIZE_MAX == TYPE_MAXIMUM (size_t) ? 1 : -1;
  int check_WCHAR:
      WCHAR_MIN == TYPE_MINIMUM (wchar_t)
      && WCHAR_MAX == TYPE_MAXIMUM (wchar_t)
      ? 1 : -1;
  /* Detect bug in mingw.  */
  int check_WINT:
      WINT_MIN == TYPE_MINIMUM (wint_t)
      && WINT_MAX == TYPE_MAXIMUM (wint_t)
      ? 1 : -1;

  /* Detect bugs in glibc 2.4 and Solaris 10 stdint.h, among others.  */
  int check_UINT8_C:
        (-1 < UINT8_C (0)) == (-1 < (uint_least8_t) 0) ? 1 : -1;
  int check_UINT16_C:
        (-1 < UINT16_C (0)) == (-1 < (uint_least16_t) 0) ? 1 : -1;

  /* Detect bugs in OpenBSD 3.9 stdint.h.  */
#ifdef UINT8_MAX
  int check_uint8: (uint8_t) -1 == UINT8_MAX ? 1 : -1;
#endif
#ifdef UINT16_MAX
  int check_uint16: (uint16_t) -1 == UINT16_MAX ? 1 : -1;
#endif
#ifdef UINT32_MAX
  int check_uint32: (uint32_t) -1 == UINT32_MAX ? 1 : -1;
#endif
#ifdef UINT64_MAX
  int check_uint64: (uint64_t) -1 == UINT64_MAX ? 1 : -1;
#endif
  int check_uint_least8: (uint_least8_t) -1 == UINT_LEAST8_MAX ? 1 : -1;
  int check_uint_least16: (uint_least16_t) -1 == UINT_LEAST16_MAX ? 1 : -1;
  int check_uint_least32: (uint_least32_t) -1 == UINT_LEAST32_MAX ? 1 : -1;
  int check_uint_least64: (uint_least64_t) -1 == UINT_LEAST64_MAX ? 1 : -1;
  int check_uint_fast8: (uint_fast8_t) -1 == UINT_FAST8_MAX ? 1 : -1;
  int check_uint_fast16: (uint_fast16_t) -1 == UINT_FAST16_MAX ? 1 : -1;
  int check_uint_fast32: (uint_fast32_t) -1 == UINT_FAST32_MAX ? 1 : -1;
  int check_uint_fast64: (uint_fast64_t) -1 == UINT_FAST64_MAX ? 1 : -1;
  int check_uintptr: (uintptr_t) -1 == UINTPTR_MAX ? 1 : -1;
  int check_uintmax: (uintmax_t) -1 == UINTMAX_MAX ? 1 : -1;
  int check_size: (size_t) -1 == SIZE_MAX ? 1 : -1;
};
         ]])],
         [dnl Determine whether the various *_MIN, *_MAX macros are usable
          dnl in preprocessor expression. We could do it by compiling a test
          dnl program for each of these macros. It is faster to run a program
          dnl that inspects the macro expansion.
          dnl This detects a bug on HP-UX 11.23/ia64.
          AC_RUN_IFELSE([
            AC_LANG_PROGRAM([[
#define _GL_JUST_INCLUDE_SYSTEM_STDINT_H 1 /* work if build isn't clean */
#include <stdint.h>
]
gl_STDINT_INCLUDES
[
#include <stdio.h>
#include <string.h>
#define MVAL(macro) MVAL1(macro)
#define MVAL1(expression) #expression
static const char *macro_values[] =
  {
#ifdef INT8_MAX
    MVAL (INT8_MAX),
#endif
#ifdef INT16_MAX
    MVAL (INT16_MAX),
#endif
#ifdef INT32_MAX
    MVAL (INT32_MAX),
#endif
#ifdef INT64_MAX
    MVAL (INT64_MAX),
#endif
#ifdef UINT8_MAX
    MVAL (UINT8_MAX),
#endif
#ifdef UINT16_MAX
    MVAL (UINT16_MAX),
#endif
#ifdef UINT32_MAX
    MVAL (UINT32_MAX),
#endif
#ifdef UINT64_MAX
    MVAL (UINT64_MAX),
#endif
    NULL
  };
]], [[
  const char **mv;
  for (mv = macro_values; *mv != NULL; mv++)
    {
      const char *value = *mv;
      /* Test whether it looks like a cast expression.  */
      if (strncmp (value, "((unsigned int)"/*)*/, 15) == 0
          || strncmp (value, "((unsigned short)"/*)*/, 17) == 0
          || strncmp (value, "((unsigned char)"/*)*/, 16) == 0
          || strncmp (value, "((int)"/*)*/, 6) == 0
          || strncmp (value, "((signed short)"/*)*/, 15) == 0
          || strncmp (value, "((signed char)"/*)*/, 14) == 0)
        return mv - macro_values + 1;
    }
  return 0;
]])],
              [gl_cv_header_working_stdint_h=yes],
              [],
              [dnl When cross-compiling, assume it works.
               gl_cv_header_working_stdint_h=yes
              ])
         ])
      ])
  fi
  if test "$gl_cv_header_working_stdint_h" = yes; then
    STDINT_H=
  else
    dnl Check for <sys/inttypes.h>, and for
    dnl <sys/bitypes.h> (used in Linux libc4 >= 4.6.7 and libc5).
    AC_CHECK_HEADERS([sys/inttypes.h sys/bitypes.h])
    if test $ac_cv_header_sys_inttypes_h = yes; then
      HAVE_SYS_INTTYPES_H=1
    else
      HAVE_SYS_INTTYPES_H=0
    fi
    AC_SUBST([HAVE_SYS_INTTYPES_H])
    if test $ac_cv_header_sys_bitypes_h = yes; then
      HAVE_SYS_BITYPES_H=1
    else
      HAVE_SYS_BITYPES_H=0
    fi
    AC_SUBST([HAVE_SYS_BITYPES_H])

    gl_STDINT_TYPE_PROPERTIES
    STDINT_H=stdint.h
  fi
  AC_SUBST([STDINT_H])
  AM_CONDITIONAL([GL_GENERATE_STDINT_H], [test -n "$STDINT_H"])
])

dnl gl_STDINT_BITSIZEOF(TYPES, INCLUDES)
dnl Determine the size of each of the given types in bits.
AC_DEFUN([gl_STDINT_BITSIZEOF],
[
  dnl Use a shell loop, to avoid bloating configure, and
  dnl - extra AH_TEMPLATE calls, so that autoheader knows what to put into
  dnl   config.h.in,
  dnl - extra AC_SUBST calls, so that the right substitutions are made.
  m4_foreach_w([gltype], [$1],
    [AH_TEMPLATE([BITSIZEOF_]m4_translit(gltype,[abcdefghijklmnopqrstuvwxyz ],[ABCDEFGHIJKLMNOPQRSTUVWXYZ_]),
       [Define to the number of bits in type ']gltype['.])])
  for gltype in $1 ; do
    AC_CACHE_CHECK([for bit size of $gltype], [gl_cv_bitsizeof_${gltype}],
      [AC_COMPUTE_INT([result], [sizeof ($gltype) * CHAR_BIT],
         [$2
#include <limits.h>], [result=unknown])
       eval gl_cv_bitsizeof_${gltype}=\$result
      ])
    eval result=\$gl_cv_bitsizeof_${gltype}
    if test $result = unknown; then
      dnl Use a nonempty default, because some compilers, such as IRIX 5 cc,
      dnl do a syntax check even on unused #if conditions and give an error
      dnl on valid C code like this:
      dnl   #if 0
      dnl   # if  > 32
      dnl   # endif
      dnl   #endif
      result=0
    fi
    GLTYPE=`echo "$gltype" | tr 'abcdefghijklmnopqrstuvwxyz ' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ_'`
    AC_DEFINE_UNQUOTED([BITSIZEOF_${GLTYPE}], [$result])
    eval BITSIZEOF_${GLTYPE}=\$result
  done
  m4_foreach_w([gltype], [$1],
    [AC_SUBST([BITSIZEOF_]m4_translit(gltype,[abcdefghijklmnopqrstuvwxyz ],[ABCDEFGHIJKLMNOPQRSTUVWXYZ_]))])
])

dnl gl_CHECK_TYPES_SIGNED(TYPES, INCLUDES)
dnl Determine the signedness of each of the given types.
dnl Define HAVE_SIGNED_TYPE if type is signed.
AC_DEFUN([gl_CHECK_TYPES_SIGNED],
[
  dnl Use a shell loop, to avoid bloating configure, and
  dnl - extra AH_TEMPLATE calls, so that autoheader knows what to put into
  dnl   config.h.in,
  dnl - extra AC_SUBST calls, so that the right substitutions are made.
  m4_foreach_w([gltype], [$1],
    [AH_TEMPLATE([HAVE_SIGNED_]m4_translit(gltype,[abcdefghijklmnopqrstuvwxyz ],[ABCDEFGHIJKLMNOPQRSTUVWXYZ_]),
       [Define to 1 if ']gltype[' is a signed integer type.])])
  for gltype in $1 ; do
    AC_CACHE_CHECK([whether $gltype is signed], [gl_cv_type_${gltype}_signed],
      [AC_COMPILE_IFELSE(
         [AC_LANG_PROGRAM([$2[
            int verify[2 * (($gltype) -1 < ($gltype) 0) - 1];]])],
         result=yes, result=no)
       eval gl_cv_type_${gltype}_signed=\$result
      ])
    eval result=\$gl_cv_type_${gltype}_signed
    GLTYPE=`echo $gltype | tr 'abcdefghijklmnopqrstuvwxyz ' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ_'`
    if test "$result" = yes; then
      AC_DEFINE_UNQUOTED([HAVE_SIGNED_${GLTYPE}], [1])
      eval HAVE_SIGNED_${GLTYPE}=1
    else
      eval HAVE_SIGNED_${GLTYPE}=0
    fi
  done
  m4_foreach_w([gltype], [$1],
    [AC_SUBST([HAVE_SIGNED_]m4_translit(gltype,[abcdefghijklmnopqrstuvwxyz ],[ABCDEFGHIJKLMNOPQRSTUVWXYZ_]))])
])

dnl gl_INTEGER_TYPE_SUFFIX(TYPES, INCLUDES)
dnl Determine the suffix to use for integer constants of the given types.
dnl Define t_SUFFIX for each such type.
AC_DEFUN([gl_INTEGER_TYPE_SUFFIX],
[
  dnl Use a shell loop, to avoid bloating configure, and
  dnl - extra AH_TEMPLATE calls, so that autoheader knows what to put into
  dnl   config.h.in,
  dnl - extra AC_SUBST calls, so that the right substitutions are made.
  m4_foreach_w([gltype], [$1],
    [AH_TEMPLATE(m4_translit(gltype,[abcdefghijklmnopqrstuvwxyz ],[ABCDEFGHIJKLMNOPQRSTUVWXYZ_])[_SUFFIX],
       [Define to l, ll, u, ul, ull, etc., as suitable for
        constants of type ']gltype['.])])
  for gltype in $1 ; do
    AC_CACHE_CHECK([for $gltype integer literal suffix],
      [gl_cv_type_${gltype}_suffix],
      [eval gl_cv_type_${gltype}_suffix=no
       eval result=\$gl_cv_type_${gltype}_signed
       if test "$result" = yes; then
         glsufu=
       else
         glsufu=u
       fi
       for glsuf in "$glsufu" ${glsufu}l ${glsufu}ll ${glsufu}i64; do
         case $glsuf in
           '')  gltype1='int';;
           l)   gltype1='long int';;
           ll)  gltype1='long long int';;
           i64) gltype1='__int64';;
           u)   gltype1='unsigned int';;
           ul)  gltype1='unsigned long int';;
           ull) gltype1='unsigned long long int';;
           ui64)gltype1='unsigned __int64';;
         esac
         AC_COMPILE_IFELSE(
           [AC_LANG_PROGRAM([$2[
              extern $gltype foo;
              extern $gltype1 foo;]])],
           [eval gl_cv_type_${gltype}_suffix=\$glsuf])
         eval result=\$gl_cv_type_${gltype}_suffix
         test "$result" != no && break
       done])
    GLTYPE=`echo $gltype | tr 'abcdefghijklmnopqrstuvwxyz ' 'ABCDEFGHIJKLMNOPQRSTUVWXYZ_'`
    eval result=\$gl_cv_type_${gltype}_suffix
    test "$result" = no && result=
    eval ${GLTYPE}_SUFFIX=\$result
    AC_DEFINE_UNQUOTED([${GLTYPE}_SUFFIX], [$result])
  done
  m4_foreach_w([gltype], [$1],
    [AC_SUBST(m4_translit(gltype,[abcdefghijklmnopqrstuvwxyz ],[ABCDEFGHIJKLMNOPQRSTUVWXYZ_])[_SUFFIX])])
])

dnl gl_STDINT_INCLUDES
AC_DEFUN([gl_STDINT_INCLUDES],
[[
  /* BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
     included before <wchar.h>.  */
  #include <stddef.h>
  #include <signal.h>
  #if HAVE_WCHAR_H
  # include <stdio.h>
  # include <time.h>
  # include <wchar.h>
  #endif
]])

dnl gl_STDINT_TYPE_PROPERTIES
dnl Compute HAVE_SIGNED_t, BITSIZEOF_t and t_SUFFIX, for all the types t
dnl of interest to stdint.in.h.
AC_DEFUN([gl_STDINT_TYPE_PROPERTIES],
[
  AC_REQUIRE([gl_MULTIARCH])
  if test $APPLE_UNIVERSAL_BUILD = 0; then
    gl_STDINT_BITSIZEOF([ptrdiff_t size_t],
      [gl_STDINT_INCLUDES])
  fi
  gl_STDINT_BITSIZEOF([sig_atomic_t wchar_t wint_t],
    [gl_STDINT_INCLUDES])
  gl_CHECK_TYPES_SIGNED([sig_atomic_t wchar_t wint_t],
    [gl_STDINT_INCLUDES])
  gl_cv_type_ptrdiff_t_signed=yes
  gl_cv_type_size_t_signed=no
  if test $APPLE_UNIVERSAL_BUILD = 0; then
    gl_INTEGER_TYPE_SUFFIX([ptrdiff_t size_t],
      [gl_STDINT_INCLUDES])
  fi
  gl_INTEGER_TYPE_SUFFIX([sig_atomic_t wchar_t wint_t],
    [gl_STDINT_INCLUDES])

  dnl If wint_t is smaller than 'int', it cannot satisfy the ISO C 99
  dnl requirement that wint_t is "unchanged by default argument promotions".
  dnl In this case gnulib's <wchar.h> and <wctype.h> override wint_t.
  dnl Set the variable BITSIZEOF_WINT_T accordingly.
  if test $BITSIZEOF_WINT_T -lt 32; then
    BITSIZEOF_WINT_T=32
  fi
])

dnl Autoconf >= 2.61 has AC_COMPUTE_INT built-in.
dnl Remove this when we can assume autoconf >= 2.61.
m4_ifdef([AC_COMPUTE_INT], [], [
  AC_DEFUN([AC_COMPUTE_INT], [_AC_COMPUTE_INT([$2],[$1],[$3],[$4])])
])

# Hey Emacs!
# Local Variables:
# indent-tabs-mode: nil
# End:
