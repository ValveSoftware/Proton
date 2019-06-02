# wctype_h.m4 serial 18

dnl A placeholder for ISO C99 <wctype.h>, for platforms that lack it.

dnl Copyright (C) 2006-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Written by Paul Eggert.

AC_DEFUN([gl_WCTYPE_H],
[
  AC_REQUIRE([gl_WCTYPE_H_DEFAULTS])
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_CHECK_FUNCS_ONCE([iswcntrl])
  if test $ac_cv_func_iswcntrl = yes; then
    HAVE_ISWCNTRL=1
  else
    HAVE_ISWCNTRL=0
  fi
  AC_SUBST([HAVE_ISWCNTRL])

  AC_REQUIRE([gt_TYPE_WINT_T])
  if test $gt_cv_c_wint_t = yes; then
    HAVE_WINT_T=1
  else
    HAVE_WINT_T=0
  fi
  AC_SUBST([HAVE_WINT_T])

  gl_CHECK_NEXT_HEADERS([wctype.h])
  if test $ac_cv_header_wctype_h = yes; then
    if test $ac_cv_func_iswcntrl = yes; then
      dnl Linux libc5 has an iswprint function that returns 0 for all arguments.
      dnl The other functions are likely broken in the same way.
      AC_CACHE_CHECK([whether iswcntrl works], [gl_cv_func_iswcntrl_works],
        [
          AC_RUN_IFELSE(
            [AC_LANG_SOURCE([[
               /* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be
                  included before <wchar.h>.
                  BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h>
                  must be included before <wchar.h>.  */
               #include <stddef.h>
               #include <stdio.h>
               #include <time.h>
               #include <wchar.h>
               #include <wctype.h>
               int main () { return iswprint ('x') == 0; }
            ]])],
            [gl_cv_func_iswcntrl_works=yes], [gl_cv_func_iswcntrl_works=no],
            [AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[#include <stdlib.h>
                          #if __GNU_LIBRARY__ == 1
                          Linux libc5 i18n is broken.
                          #endif]], [])],
              [gl_cv_func_iswcntrl_works="guessing yes"],
              [gl_cv_func_iswcntrl_works="guessing no"])
            ])
        ])
    fi
    HAVE_WCTYPE_H=1
  else
    HAVE_WCTYPE_H=0
  fi
  AC_SUBST([HAVE_WCTYPE_H])

  case "$gl_cv_func_iswcntrl_works" in
    *yes) REPLACE_ISWCNTRL=0 ;;
    *)    REPLACE_ISWCNTRL=1 ;;
  esac
  AC_SUBST([REPLACE_ISWCNTRL])

  if test $HAVE_ISWCNTRL = 0 || test $REPLACE_ISWCNTRL = 1; then
    dnl Redefine all of iswcntrl, ..., iswxdigit in <wctype.h>.
    :
  fi

  if test $REPLACE_ISWCNTRL = 1; then
    REPLACE_TOWLOWER=1
  else
    AC_CHECK_FUNCS([towlower])
    if test $ac_cv_func_towlower = yes; then
      REPLACE_TOWLOWER=0
    else
      AC_CHECK_DECLS([towlower],,,
        [[/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be
             included before <wchar.h>.
             BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h>
             must be included before <wchar.h>.  */
          #include <stddef.h>
          #include <stdio.h>
          #include <time.h>
          #include <wchar.h>
          #if HAVE_WCTYPE_H
          # include <wctype.h>
          #endif
        ]])
      if test $ac_cv_have_decl_towlower = yes; then
        dnl On Minix 3.1.8, the system's <wctype.h> declares towlower() and
        dnl towupper() although it does not have the functions. Avoid a
        dnl collision with gnulib's replacement.
        REPLACE_TOWLOWER=1
      else
        REPLACE_TOWLOWER=0
      fi
    fi
  fi
  AC_SUBST([REPLACE_TOWLOWER])

  if test $HAVE_ISWCNTRL = 0 || test $REPLACE_TOWLOWER = 1; then
    dnl Redefine towlower, towupper in <wctype.h>.
    :
  fi

  dnl We assume that the wctype() and iswctype() functions exist if and only
  dnl if the type wctype_t is defined in <wchar.h> or in <wctype.h> if that
  dnl exists.
  dnl HP-UX 11.00 declares all these in <wchar.h> and lacks <wctype.h>.
  AC_CACHE_CHECK([for wctype_t], [gl_cv_type_wctype_t],
    [AC_COMPILE_IFELSE(
       [AC_LANG_PROGRAM(
          [[/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be
               included before <wchar.h>.
               BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h>
               must be included before <wchar.h>.  */
            #include <stddef.h>
            #include <stdio.h>
            #include <time.h>
            #include <wchar.h>
            #if HAVE_WCTYPE_H
            # include <wctype.h>
            #endif
            wctype_t a;
          ]],
          [[]])],
       [gl_cv_type_wctype_t=yes],
       [gl_cv_type_wctype_t=no])
    ])
  if test $gl_cv_type_wctype_t = no; then
    HAVE_WCTYPE_T=0
  fi

  dnl We assume that the wctrans() and towctrans() functions exist if and only
  dnl if the type wctrans_t is defined in <wctype.h>.
  AC_CACHE_CHECK([for wctrans_t], [gl_cv_type_wctrans_t],
    [AC_COMPILE_IFELSE(
       [AC_LANG_PROGRAM(
          [[/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be
               included before <wchar.h>.
               BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h>
               must be included before <wchar.h>.  */
            #include <stddef.h>
            #include <stdio.h>
            #include <time.h>
            #include <wchar.h>
            #include <wctype.h>
            wctrans_t a;
          ]],
          [[]])],
       [gl_cv_type_wctrans_t=yes],
       [gl_cv_type_wctrans_t=no])
    ])
  if test $gl_cv_type_wctrans_t = no; then
    HAVE_WCTRANS_T=0
  fi

  dnl Check for declarations of anything we want to poison if the
  dnl corresponding gnulib module is not in use.
  gl_WARN_ON_USE_PREPARE([[
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#if !(defined __GLIBC__ && !defined __UCLIBC__)
# include <stddef.h>
# include <stdio.h>
# include <time.h>
# include <wchar.h>
#endif
#include <wctype.h>
    ]],
    [wctype iswctype wctrans towctrans
    ])
])

AC_DEFUN([gl_WCTYPE_MODULE_INDICATOR],
[
  dnl Use AC_REQUIRE here, so that the default settings are expanded once only.
  AC_REQUIRE([gl_WCTYPE_H_DEFAULTS])
  gl_MODULE_INDICATOR_SET_VARIABLE([$1])
  dnl Define it also as a C macro, for the benefit of the unit tests.
  gl_MODULE_INDICATOR_FOR_TESTS([$1])
])

AC_DEFUN([gl_WCTYPE_H_DEFAULTS],
[
  GNULIB_ISWBLANK=0;    AC_SUBST([GNULIB_ISWBLANK])
  GNULIB_WCTYPE=0;      AC_SUBST([GNULIB_WCTYPE])
  GNULIB_ISWCTYPE=0;    AC_SUBST([GNULIB_ISWCTYPE])
  GNULIB_WCTRANS=0;     AC_SUBST([GNULIB_WCTRANS])
  GNULIB_TOWCTRANS=0;   AC_SUBST([GNULIB_TOWCTRANS])
  dnl Assume proper GNU behavior unless another module says otherwise.
  HAVE_ISWBLANK=1;      AC_SUBST([HAVE_ISWBLANK])
  HAVE_WCTYPE_T=1;      AC_SUBST([HAVE_WCTYPE_T])
  HAVE_WCTRANS_T=1;     AC_SUBST([HAVE_WCTRANS_T])
  REPLACE_ISWBLANK=0;   AC_SUBST([REPLACE_ISWBLANK])
])
