# mbrtowc.m4 serial 26
dnl Copyright (C) 2001-2002, 2004-2005, 2008-2015 Free Software Foundation,
dnl Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_MBRTOWC],
[
  AC_REQUIRE([gl_WCHAR_H_DEFAULTS])

  AC_REQUIRE([AC_TYPE_MBSTATE_T])
  gl_MBSTATE_T_BROKEN

  AC_CHECK_FUNCS_ONCE([mbrtowc])
  if test $ac_cv_func_mbrtowc = no; then
    HAVE_MBRTOWC=0
    AC_CHECK_DECLS([mbrtowc],,, [[
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
]])
    if test $ac_cv_have_decl_mbrtowc = yes; then
      dnl On Minix 3.1.8, the system's <wchar.h> declares mbrtowc() although
      dnl it does not have the function. Avoid a collision with gnulib's
      dnl replacement.
      REPLACE_MBRTOWC=1
    fi
  else
    if test $REPLACE_MBSTATE_T = 1; then
      REPLACE_MBRTOWC=1
    else
      gl_MBRTOWC_NULL_ARG1
      gl_MBRTOWC_NULL_ARG2
      gl_MBRTOWC_RETVAL
      gl_MBRTOWC_NUL_RETVAL
      gl_MBRTOWC_EMPTY_INPUT
      case "$gl_cv_func_mbrtowc_null_arg1" in
        *yes) ;;
        *) AC_DEFINE([MBRTOWC_NULL_ARG1_BUG], [1],
             [Define if the mbrtowc function has the NULL pwc argument bug.])
           REPLACE_MBRTOWC=1
           ;;
      esac
      case "$gl_cv_func_mbrtowc_null_arg2" in
        *yes) ;;
        *) AC_DEFINE([MBRTOWC_NULL_ARG2_BUG], [1],
             [Define if the mbrtowc function has the NULL string argument bug.])
           REPLACE_MBRTOWC=1
           ;;
      esac
      case "$gl_cv_func_mbrtowc_retval" in
        *yes) ;;
        *) AC_DEFINE([MBRTOWC_RETVAL_BUG], [1],
             [Define if the mbrtowc function returns a wrong return value.])
           REPLACE_MBRTOWC=1
           ;;
      esac
      case "$gl_cv_func_mbrtowc_nul_retval" in
        *yes) ;;
        *) AC_DEFINE([MBRTOWC_NUL_RETVAL_BUG], [1],
             [Define if the mbrtowc function does not return 0 for a NUL character.])
           REPLACE_MBRTOWC=1
           ;;
      esac
      case "$gl_cv_func_mbrtowc_empty_input" in
        *yes) ;;
        *) AC_DEFINE([MBRTOWC_EMPTY_INPUT_BUG], [1],
             [Define if the mbrtowc function does not return (size_t) -2
              for empty input.])
           REPLACE_MBRTOWC=1
           ;;
      esac
    fi
  fi
])

dnl Test whether mbsinit() and mbrtowc() need to be overridden in a way that
dnl redefines the semantics of the given mbstate_t type.
dnl Result is REPLACE_MBSTATE_T.
dnl When this is set to 1, we replace both mbsinit() and mbrtowc(), in order to
dnl avoid inconsistencies.

AC_DEFUN([gl_MBSTATE_T_BROKEN],
[
  AC_REQUIRE([gl_WCHAR_H_DEFAULTS])

  AC_REQUIRE([AC_TYPE_MBSTATE_T])
  AC_CHECK_FUNCS_ONCE([mbsinit])
  AC_CHECK_FUNCS_ONCE([mbrtowc])
  if test $ac_cv_func_mbsinit = yes && test $ac_cv_func_mbrtowc = yes; then
    gl_MBRTOWC_INCOMPLETE_STATE
    gl_MBRTOWC_SANITYCHECK
    REPLACE_MBSTATE_T=0
    case "$gl_cv_func_mbrtowc_incomplete_state" in
      *yes) ;;
      *) REPLACE_MBSTATE_T=1 ;;
    esac
    case "$gl_cv_func_mbrtowc_sanitycheck" in
      *yes) ;;
      *) REPLACE_MBSTATE_T=1 ;;
    esac
  else
    REPLACE_MBSTATE_T=1
  fi
])

dnl Test whether mbrtowc puts the state into non-initial state when parsing an
dnl incomplete multibyte character.
dnl Result is gl_cv_func_mbrtowc_incomplete_state.

AC_DEFUN([gl_MBRTOWC_INCOMPLETE_STATE],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([gt_LOCALE_JA])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether mbrtowc handles incomplete characters],
    [gl_cv_func_mbrtowc_incomplete_state],
    [
      dnl Initial guess, used when cross-compiling or when no suitable locale
      dnl is present.
changequote(,)dnl
      case "$host_os" in
                     # Guess no on AIX and OSF/1.
        aix* | osf*) gl_cv_func_mbrtowc_incomplete_state="guessing no" ;;
                     # Guess yes otherwise.
        *)           gl_cv_func_mbrtowc_incomplete_state="guessing yes" ;;
      esac
changequote([,])dnl
      if test $LOCALE_JA != none; then
        AC_RUN_IFELSE(
          [AC_LANG_SOURCE([[
#include <locale.h>
#include <string.h>
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
int main ()
{
  if (setlocale (LC_ALL, "$LOCALE_JA") != NULL)
    {
      const char input[] = "B\217\253\344\217\251\316er"; /* "Büßer" */
      mbstate_t state;
      wchar_t wc;

      memset (&state, '\0', sizeof (mbstate_t));
      if (mbrtowc (&wc, input + 1, 1, &state) == (size_t)(-2))
        if (mbsinit (&state))
          return 1;
    }
  return 0;
}]])],
          [gl_cv_func_mbrtowc_incomplete_state=yes],
          [gl_cv_func_mbrtowc_incomplete_state=no],
          [:])
      fi
    ])
])

dnl Test whether mbrtowc works not worse than mbtowc.
dnl Result is gl_cv_func_mbrtowc_sanitycheck.

AC_DEFUN([gl_MBRTOWC_SANITYCHECK],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([gt_LOCALE_ZH_CN])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether mbrtowc works as well as mbtowc],
    [gl_cv_func_mbrtowc_sanitycheck],
    [
      dnl Initial guess, used when cross-compiling or when no suitable locale
      dnl is present.
changequote(,)dnl
      case "$host_os" in
                    # Guess no on Solaris 8.
        solaris2.8) gl_cv_func_mbrtowc_sanitycheck="guessing no" ;;
                    # Guess yes otherwise.
        *)          gl_cv_func_mbrtowc_sanitycheck="guessing yes" ;;
      esac
changequote([,])dnl
      if test $LOCALE_ZH_CN != none; then
        AC_RUN_IFELSE(
          [AC_LANG_SOURCE([[
#include <locale.h>
#include <stdlib.h>
#include <string.h>
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
int main ()
{
  /* This fails on Solaris 8:
     mbrtowc returns 2, and sets wc to 0x00F0.
     mbtowc returns 4 (correct) and sets wc to 0x5EDC.  */
  if (setlocale (LC_ALL, "$LOCALE_ZH_CN") != NULL)
    {
      char input[] = "B\250\271\201\060\211\070er"; /* "Büßer" */
      mbstate_t state;
      wchar_t wc;

      memset (&state, '\0', sizeof (mbstate_t));
      if (mbrtowc (&wc, input + 3, 6, &state) != 4
          && mbtowc (&wc, input + 3, 6) == 4)
        return 1;
    }
  return 0;
}]])],
          [gl_cv_func_mbrtowc_sanitycheck=yes],
          [gl_cv_func_mbrtowc_sanitycheck=no],
          [:])
      fi
    ])
])

dnl Test whether mbrtowc supports a NULL pwc argument correctly.
dnl Result is gl_cv_func_mbrtowc_null_arg1.

AC_DEFUN([gl_MBRTOWC_NULL_ARG1],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([gt_LOCALE_FR_UTF8])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether mbrtowc handles a NULL pwc argument],
    [gl_cv_func_mbrtowc_null_arg1],
    [
      dnl Initial guess, used when cross-compiling or when no suitable locale
      dnl is present.
changequote(,)dnl
      case "$host_os" in
                  # Guess no on Solaris.
        solaris*) gl_cv_func_mbrtowc_null_arg1="guessing no" ;;
                  # Guess yes otherwise.
        *)        gl_cv_func_mbrtowc_null_arg1="guessing yes" ;;
      esac
changequote([,])dnl
      if test $LOCALE_FR_UTF8 != none; then
        AC_RUN_IFELSE(
          [AC_LANG_SOURCE([[
#include <locale.h>
#include <stdlib.h>
#include <string.h>
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
int main ()
{
  int result = 0;

  if (setlocale (LC_ALL, "$LOCALE_FR_UTF8") != NULL)
    {
      char input[] = "\303\237er";
      mbstate_t state;
      wchar_t wc;
      size_t ret;

      memset (&state, '\0', sizeof (mbstate_t));
      wc = (wchar_t) 0xBADFACE;
      ret = mbrtowc (&wc, input, 5, &state);
      if (ret != 2)
        result |= 1;
      if (!mbsinit (&state))
        result |= 2;

      memset (&state, '\0', sizeof (mbstate_t));
      ret = mbrtowc (NULL, input, 5, &state);
      if (ret != 2) /* Solaris 7 fails here: ret is -1.  */
        result |= 4;
      if (!mbsinit (&state))
        result |= 8;
    }
  return result;
}]])],
          [gl_cv_func_mbrtowc_null_arg1=yes],
          [gl_cv_func_mbrtowc_null_arg1=no],
          [:])
      fi
    ])
])

dnl Test whether mbrtowc supports a NULL string argument correctly.
dnl Result is gl_cv_func_mbrtowc_null_arg2.

AC_DEFUN([gl_MBRTOWC_NULL_ARG2],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([gt_LOCALE_FR_UTF8])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether mbrtowc handles a NULL string argument],
    [gl_cv_func_mbrtowc_null_arg2],
    [
      dnl Initial guess, used when cross-compiling or when no suitable locale
      dnl is present.
changequote(,)dnl
      case "$host_os" in
              # Guess no on OSF/1.
        osf*) gl_cv_func_mbrtowc_null_arg2="guessing no" ;;
              # Guess yes otherwise.
        *)    gl_cv_func_mbrtowc_null_arg2="guessing yes" ;;
      esac
changequote([,])dnl
      if test $LOCALE_FR_UTF8 != none; then
        AC_RUN_IFELSE(
          [AC_LANG_SOURCE([[
#include <locale.h>
#include <string.h>
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
int main ()
{
  if (setlocale (LC_ALL, "$LOCALE_FR_UTF8") != NULL)
    {
      mbstate_t state;
      wchar_t wc;
      int ret;

      memset (&state, '\0', sizeof (mbstate_t));
      wc = (wchar_t) 0xBADFACE;
      mbrtowc (&wc, NULL, 5, &state);
      /* Check that wc was not modified.  */
      if (wc != (wchar_t) 0xBADFACE)
        return 1;
    }
  return 0;
}]])],
          [gl_cv_func_mbrtowc_null_arg2=yes],
          [gl_cv_func_mbrtowc_null_arg2=no],
          [:])
      fi
    ])
])

dnl Test whether mbrtowc, when parsing the end of a multibyte character,
dnl correctly returns the number of bytes that were needed to complete the
dnl character (not the total number of bytes of the multibyte character).
dnl Result is gl_cv_func_mbrtowc_retval.

AC_DEFUN([gl_MBRTOWC_RETVAL],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([gt_LOCALE_FR_UTF8])
  AC_REQUIRE([gt_LOCALE_JA])
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_CACHE_CHECK([whether mbrtowc has a correct return value],
    [gl_cv_func_mbrtowc_retval],
    [
      dnl Initial guess, used when cross-compiling or when no suitable locale
      dnl is present.
changequote(,)dnl
      case "$host_os" in
                                   # Guess no on HP-UX, Solaris, native Windows.
        hpux* | solaris* | mingw*) gl_cv_func_mbrtowc_retval="guessing no" ;;
                                   # Guess yes otherwise.
        *)                         gl_cv_func_mbrtowc_retval="guessing yes" ;;
      esac
changequote([,])dnl
      if test $LOCALE_FR_UTF8 != none || test $LOCALE_JA != none \
         || { case "$host_os" in mingw*) true;; *) false;; esac; }; then
        AC_RUN_IFELSE(
          [AC_LANG_SOURCE([[
#include <locale.h>
#include <string.h>
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
int main ()
{
  int result = 0;
  int found_some_locale = 0;
  /* This fails on Solaris.  */
  if (setlocale (LC_ALL, "$LOCALE_FR_UTF8") != NULL)
    {
      char input[] = "B\303\274\303\237er"; /* "Büßer" */
      mbstate_t state;
      wchar_t wc;

      memset (&state, '\0', sizeof (mbstate_t));
      if (mbrtowc (&wc, input + 1, 1, &state) == (size_t)(-2))
        {
          input[1] = '\0';
          if (mbrtowc (&wc, input + 2, 5, &state) != 1)
            result |= 1;
        }
      found_some_locale = 1;
    }
  /* This fails on HP-UX 11.11.  */
  if (setlocale (LC_ALL, "$LOCALE_JA") != NULL)
    {
      char input[] = "B\217\253\344\217\251\316er"; /* "Büßer" */
      mbstate_t state;
      wchar_t wc;

      memset (&state, '\0', sizeof (mbstate_t));
      if (mbrtowc (&wc, input + 1, 1, &state) == (size_t)(-2))
        {
          input[1] = '\0';
          if (mbrtowc (&wc, input + 2, 5, &state) != 2)
            result |= 2;
        }
      found_some_locale = 1;
    }
  /* This fails on native Windows.  */
  if (setlocale (LC_ALL, "Japanese_Japan.932") != NULL)
    {
      char input[] = "<\223\372\226\173\214\352>"; /* "<日本語>" */
      mbstate_t state;
      wchar_t wc;

      memset (&state, '\0', sizeof (mbstate_t));
      if (mbrtowc (&wc, input + 3, 1, &state) == (size_t)(-2))
        {
          input[3] = '\0';
          if (mbrtowc (&wc, input + 4, 4, &state) != 1)
            result |= 4;
        }
      found_some_locale = 1;
    }
  if (setlocale (LC_ALL, "Chinese_Taiwan.950") != NULL)
    {
      char input[] = "<\244\351\245\273\273\171>"; /* "<日本語>" */
      mbstate_t state;
      wchar_t wc;

      memset (&state, '\0', sizeof (mbstate_t));
      if (mbrtowc (&wc, input + 3, 1, &state) == (size_t)(-2))
        {
          input[3] = '\0';
          if (mbrtowc (&wc, input + 4, 4, &state) != 1)
            result |= 8;
        }
      found_some_locale = 1;
    }
  if (setlocale (LC_ALL, "Chinese_China.936") != NULL)
    {
      char input[] = "<\310\325\261\276\325\132>"; /* "<日本語>" */
      mbstate_t state;
      wchar_t wc;

      memset (&state, '\0', sizeof (mbstate_t));
      if (mbrtowc (&wc, input + 3, 1, &state) == (size_t)(-2))
        {
          input[3] = '\0';
          if (mbrtowc (&wc, input + 4, 4, &state) != 1)
            result |= 16;
        }
      found_some_locale = 1;
    }
  return (found_some_locale ? result : 77);
}]])],
          [gl_cv_func_mbrtowc_retval=yes],
          [if test $? != 77; then
             gl_cv_func_mbrtowc_retval=no
           fi
          ],
          [:])
      fi
    ])
])

dnl Test whether mbrtowc, when parsing a NUL character, correctly returns 0.
dnl Result is gl_cv_func_mbrtowc_nul_retval.

AC_DEFUN([gl_MBRTOWC_NUL_RETVAL],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([gt_LOCALE_ZH_CN])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether mbrtowc returns 0 when parsing a NUL character],
    [gl_cv_func_mbrtowc_nul_retval],
    [
      dnl Initial guess, used when cross-compiling or when no suitable locale
      dnl is present.
changequote(,)dnl
      case "$host_os" in
                       # Guess no on Solaris 8 and 9.
        solaris2.[89]) gl_cv_func_mbrtowc_nul_retval="guessing no" ;;
                       # Guess yes otherwise.
        *)             gl_cv_func_mbrtowc_nul_retval="guessing yes" ;;
      esac
changequote([,])dnl
      if test $LOCALE_ZH_CN != none; then
        AC_RUN_IFELSE(
          [AC_LANG_SOURCE([[
#include <locale.h>
#include <string.h>
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
int main ()
{
  /* This fails on Solaris 8 and 9.  */
  if (setlocale (LC_ALL, "$LOCALE_ZH_CN") != NULL)
    {
      mbstate_t state;
      wchar_t wc;

      memset (&state, '\0', sizeof (mbstate_t));
      if (mbrtowc (&wc, "", 1, &state) != 0)
        return 1;
    }
  return 0;
}]])],
          [gl_cv_func_mbrtowc_nul_retval=yes],
          [gl_cv_func_mbrtowc_nul_retval=no],
          [:])
      fi
    ])
])

dnl Test whether mbrtowc returns the correct value on empty input.

AC_DEFUN([gl_MBRTOWC_EMPTY_INPUT],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether mbrtowc works on empty input],
    [gl_cv_func_mbrtowc_empty_input],
    [
      dnl Initial guess, used when cross-compiling or when no suitable locale
      dnl is present.
changequote(,)dnl
      case "$host_os" in
                     # Guess no on AIX and glibc systems.
        aix* | *-gnu*)
                    gl_cv_func_mbrtowc_empty_input="guessing no" ;;
        *)          gl_cv_func_mbrtowc_empty_input="guessing yes" ;;
      esac
changequote([,])dnl
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
           #include <wchar.h>
           static wchar_t wc;
           static mbstate_t mbs;
           int
           main (void)
           {
             return mbrtowc (&wc, "", 0, &mbs) == (size_t) -2;
           }]])],
        [gl_cv_func_mbrtowc_empty_input=no],
        [gl_cv_func_mbrtowc_empty_input=yes],
        [:])
    ])
])

# Prerequisites of lib/mbrtowc.c.
AC_DEFUN([gl_PREREQ_MBRTOWC], [
  :
])


dnl From Paul Eggert

dnl This is an override of an autoconf macro.

AC_DEFUN([AC_FUNC_MBRTOWC],
[
  dnl Same as AC_FUNC_MBRTOWC in autoconf-2.60.
  AC_CACHE_CHECK([whether mbrtowc and mbstate_t are properly declared],
    gl_cv_func_mbrtowc,
    [AC_LINK_IFELSE(
       [AC_LANG_PROGRAM(
            [[/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be
                 included before <wchar.h>.
                 BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h>
                 must be included before <wchar.h>.  */
              #include <stddef.h>
              #include <stdio.h>
              #include <time.h>
              #include <wchar.h>]],
            [[wchar_t wc;
              char const s[] = "";
              size_t n = 1;
              mbstate_t state;
              return ! (sizeof state && (mbrtowc) (&wc, s, n, &state));]])],
       gl_cv_func_mbrtowc=yes,
       gl_cv_func_mbrtowc=no)])
  if test $gl_cv_func_mbrtowc = yes; then
    AC_DEFINE([HAVE_MBRTOWC], [1],
      [Define to 1 if mbrtowc and mbstate_t are properly declared.])
  fi
])
