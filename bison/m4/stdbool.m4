# Check for stdbool.h that conforms to C99.

dnl Copyright (C) 2002-2006, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

#serial 5

# Prepare for substituting <stdbool.h> if it is not supported.

AC_DEFUN([AM_STDBOOL_H],
[
  AC_REQUIRE([AC_CHECK_HEADER_STDBOOL])

  # Define two additional variables used in the Makefile substitution.

  if test "$ac_cv_header_stdbool_h" = yes; then
    STDBOOL_H=''
  else
    STDBOOL_H='stdbool.h'
  fi
  AC_SUBST([STDBOOL_H])
  AM_CONDITIONAL([GL_GENERATE_STDBOOL_H], [test -n "$STDBOOL_H"])

  if test "$ac_cv_type__Bool" = yes; then
    HAVE__BOOL=1
  else
    HAVE__BOOL=0
  fi
  AC_SUBST([HAVE__BOOL])
])

# AM_STDBOOL_H will be renamed to gl_STDBOOL_H in the future.
AC_DEFUN([gl_STDBOOL_H], [AM_STDBOOL_H])

# This version of the macro is needed in autoconf <= 2.68.

AC_DEFUN([AC_CHECK_HEADER_STDBOOL],
  [AC_CACHE_CHECK([for stdbool.h that conforms to C99],
     [ac_cv_header_stdbool_h],
     [AC_COMPILE_IFELSE(
        [AC_LANG_PROGRAM(
           [[
             #include <stdbool.h>
             #ifndef bool
              "error: bool is not defined"
             #endif
             #ifndef false
              "error: false is not defined"
             #endif
             #if false
              "error: false is not 0"
             #endif
             #ifndef true
              "error: true is not defined"
             #endif
             #if true != 1
              "error: true is not 1"
             #endif
             #ifndef __bool_true_false_are_defined
              "error: __bool_true_false_are_defined is not defined"
             #endif

             struct s { _Bool s: 1; _Bool t; } s;

             char a[true == 1 ? 1 : -1];
             char b[false == 0 ? 1 : -1];
             char c[__bool_true_false_are_defined == 1 ? 1 : -1];
             char d[(bool) 0.5 == true ? 1 : -1];
             /* See body of main program for 'e'.  */
             char f[(_Bool) 0.0 == false ? 1 : -1];
             char g[true];
             char h[sizeof (_Bool)];
             char i[sizeof s.t];
             enum { j = false, k = true, l = false * true, m = true * 256 };
             /* The following fails for
                HP aC++/ANSI C B3910B A.05.55 [Dec 04 2003]. */
             _Bool n[m];
             char o[sizeof n == m * sizeof n[0] ? 1 : -1];
             char p[-1 - (_Bool) 0 < 0 && -1 - (bool) 0 < 0 ? 1 : -1];
             /* Catch a bug in an HP-UX C compiler.  See
                http://gcc.gnu.org/ml/gcc-patches/2003-12/msg02303.html
                http://lists.gnu.org/archive/html/bug-coreutils/2005-11/msg00161.html
              */
             _Bool q = true;
             _Bool *pq = &q;
           ]],
           [[
             bool e = &s;
             *pq |= q;
             *pq |= ! q;
             /* Refer to every declared value, to avoid compiler optimizations.  */
             return (!a + !b + !c + !d + !e + !f + !g + !h + !i + !!j + !k + !!l
                     + !m + !n + !o + !p + !q + !pq);
           ]])],
        [ac_cv_header_stdbool_h=yes],
        [ac_cv_header_stdbool_h=no])])
   AC_CHECK_TYPES([_Bool])
])
