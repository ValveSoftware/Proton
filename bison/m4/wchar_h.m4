dnl A placeholder for ISO C99 <wchar.h>, for platforms that have issues.

dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Written by Eric Blake.

# wchar_h.m4 serial 39

AC_DEFUN([gl_WCHAR_H],
[
  AC_REQUIRE([gl_WCHAR_H_DEFAULTS])
  AC_REQUIRE([gl_WCHAR_H_INLINE_OK])
  dnl Prepare for creating substitute <wchar.h>.
  dnl Check for <wchar.h> (missing in Linux uClibc when built without wide
  dnl character support).
  dnl <wchar.h> is always overridden, because of GNULIB_POSIXCHECK.
  gl_CHECK_NEXT_HEADERS([wchar.h])
  if test $ac_cv_header_wchar_h = yes; then
    HAVE_WCHAR_H=1
  else
    HAVE_WCHAR_H=0
  fi
  AC_SUBST([HAVE_WCHAR_H])

  AC_REQUIRE([gl_FEATURES_H])

  AC_REQUIRE([gt_TYPE_WINT_T])
  if test $gt_cv_c_wint_t = yes; then
    HAVE_WINT_T=1
  else
    HAVE_WINT_T=0
  fi
  AC_SUBST([HAVE_WINT_T])

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
#endif
#include <wchar.h>
    ]],
    [btowc wctob mbsinit mbrtowc mbrlen mbsrtowcs mbsnrtowcs wcrtomb
     wcsrtombs wcsnrtombs wcwidth wmemchr wmemcmp wmemcpy wmemmove wmemset
     wcslen wcsnlen wcscpy wcpcpy wcsncpy wcpncpy wcscat wcsncat wcscmp
     wcsncmp wcscasecmp wcsncasecmp wcscoll wcsxfrm wcsdup wcschr wcsrchr
     wcscspn wcsspn wcspbrk wcsstr wcstok wcswidth
    ])
])

dnl Check whether <wchar.h> is usable at all.
AC_DEFUN([gl_WCHAR_H_INLINE_OK],
[
  dnl Test whether <wchar.h> suffers due to the transition from '__inline' to
  dnl 'gnu_inline'. See <http://sourceware.org/bugzilla/show_bug.cgi?id=4022>
  dnl and <http://gcc.gnu.org/bugzilla/show_bug.cgi?id=42440>. In summary,
  dnl glibc version 2.5 or older, together with gcc version 4.3 or newer and
  dnl the option -std=c99 or -std=gnu99, leads to a broken <wchar.h>.
  AC_CACHE_CHECK([whether <wchar.h> uses 'inline' correctly],
    [gl_cv_header_wchar_h_correct_inline],
    [gl_cv_header_wchar_h_correct_inline=yes
     AC_LANG_CONFTEST([
       AC_LANG_SOURCE([[#define wcstod renamed_wcstod
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
extern int zero (void);
int main () { return zero(); }
]])])
     if AC_TRY_EVAL([ac_compile]); then
       mv conftest.$ac_objext conftest1.$ac_objext
       AC_LANG_CONFTEST([
         AC_LANG_SOURCE([[#define wcstod renamed_wcstod
/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.  */
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <wchar.h>
int zero (void) { return 0; }
]])])
       if AC_TRY_EVAL([ac_compile]); then
         mv conftest.$ac_objext conftest2.$ac_objext
         if $CC -o conftest$ac_exeext $CFLAGS $LDFLAGS conftest1.$ac_objext conftest2.$ac_objext $LIBS >&AS_MESSAGE_LOG_FD 2>&1; then
           :
         else
           gl_cv_header_wchar_h_correct_inline=no
         fi
       fi
     fi
     rm -f conftest1.$ac_objext conftest2.$ac_objext conftest$ac_exeext
    ])
  if test $gl_cv_header_wchar_h_correct_inline = no; then
    AC_MSG_ERROR([<wchar.h> cannot be used with this compiler ($CC $CFLAGS $CPPFLAGS).
This is a known interoperability problem of glibc <= 2.5 with gcc >= 4.3 in
C99 mode. You have four options:
  - Add the flag -fgnu89-inline to CC and reconfigure, or
  - Fix your include files, using parts of
    <http://sourceware.org/git/?p=glibc.git;a=commitdiff;h=b037a293a48718af30d706c2e18c929d0e69a621>, or
  - Use a gcc version older than 4.3, or
  - Don't use the flags -std=c99 or -std=gnu99.
Configuration aborted.])
  fi
])

AC_DEFUN([gl_WCHAR_MODULE_INDICATOR],
[
  dnl Use AC_REQUIRE here, so that the default settings are expanded once only.
  AC_REQUIRE([gl_WCHAR_H_DEFAULTS])
  gl_MODULE_INDICATOR_SET_VARIABLE([$1])
  dnl Define it also as a C macro, for the benefit of the unit tests.
  gl_MODULE_INDICATOR_FOR_TESTS([$1])
])

AC_DEFUN([gl_WCHAR_H_DEFAULTS],
[
  GNULIB_BTOWC=0;       AC_SUBST([GNULIB_BTOWC])
  GNULIB_WCTOB=0;       AC_SUBST([GNULIB_WCTOB])
  GNULIB_MBSINIT=0;     AC_SUBST([GNULIB_MBSINIT])
  GNULIB_MBRTOWC=0;     AC_SUBST([GNULIB_MBRTOWC])
  GNULIB_MBRLEN=0;      AC_SUBST([GNULIB_MBRLEN])
  GNULIB_MBSRTOWCS=0;   AC_SUBST([GNULIB_MBSRTOWCS])
  GNULIB_MBSNRTOWCS=0;  AC_SUBST([GNULIB_MBSNRTOWCS])
  GNULIB_WCRTOMB=0;     AC_SUBST([GNULIB_WCRTOMB])
  GNULIB_WCSRTOMBS=0;   AC_SUBST([GNULIB_WCSRTOMBS])
  GNULIB_WCSNRTOMBS=0;  AC_SUBST([GNULIB_WCSNRTOMBS])
  GNULIB_WCWIDTH=0;     AC_SUBST([GNULIB_WCWIDTH])
  GNULIB_WMEMCHR=0;     AC_SUBST([GNULIB_WMEMCHR])
  GNULIB_WMEMCMP=0;     AC_SUBST([GNULIB_WMEMCMP])
  GNULIB_WMEMCPY=0;     AC_SUBST([GNULIB_WMEMCPY])
  GNULIB_WMEMMOVE=0;    AC_SUBST([GNULIB_WMEMMOVE])
  GNULIB_WMEMSET=0;     AC_SUBST([GNULIB_WMEMSET])
  GNULIB_WCSLEN=0;      AC_SUBST([GNULIB_WCSLEN])
  GNULIB_WCSNLEN=0;     AC_SUBST([GNULIB_WCSNLEN])
  GNULIB_WCSCPY=0;      AC_SUBST([GNULIB_WCSCPY])
  GNULIB_WCPCPY=0;      AC_SUBST([GNULIB_WCPCPY])
  GNULIB_WCSNCPY=0;     AC_SUBST([GNULIB_WCSNCPY])
  GNULIB_WCPNCPY=0;     AC_SUBST([GNULIB_WCPNCPY])
  GNULIB_WCSCAT=0;      AC_SUBST([GNULIB_WCSCAT])
  GNULIB_WCSNCAT=0;     AC_SUBST([GNULIB_WCSNCAT])
  GNULIB_WCSCMP=0;      AC_SUBST([GNULIB_WCSCMP])
  GNULIB_WCSNCMP=0;     AC_SUBST([GNULIB_WCSNCMP])
  GNULIB_WCSCASECMP=0;  AC_SUBST([GNULIB_WCSCASECMP])
  GNULIB_WCSNCASECMP=0; AC_SUBST([GNULIB_WCSNCASECMP])
  GNULIB_WCSCOLL=0;     AC_SUBST([GNULIB_WCSCOLL])
  GNULIB_WCSXFRM=0;     AC_SUBST([GNULIB_WCSXFRM])
  GNULIB_WCSDUP=0;      AC_SUBST([GNULIB_WCSDUP])
  GNULIB_WCSCHR=0;      AC_SUBST([GNULIB_WCSCHR])
  GNULIB_WCSRCHR=0;     AC_SUBST([GNULIB_WCSRCHR])
  GNULIB_WCSCSPN=0;     AC_SUBST([GNULIB_WCSCSPN])
  GNULIB_WCSSPN=0;      AC_SUBST([GNULIB_WCSSPN])
  GNULIB_WCSPBRK=0;     AC_SUBST([GNULIB_WCSPBRK])
  GNULIB_WCSSTR=0;      AC_SUBST([GNULIB_WCSSTR])
  GNULIB_WCSTOK=0;      AC_SUBST([GNULIB_WCSTOK])
  GNULIB_WCSWIDTH=0;    AC_SUBST([GNULIB_WCSWIDTH])
  dnl Assume proper GNU behavior unless another module says otherwise.
  HAVE_BTOWC=1;         AC_SUBST([HAVE_BTOWC])
  HAVE_MBSINIT=1;       AC_SUBST([HAVE_MBSINIT])
  HAVE_MBRTOWC=1;       AC_SUBST([HAVE_MBRTOWC])
  HAVE_MBRLEN=1;        AC_SUBST([HAVE_MBRLEN])
  HAVE_MBSRTOWCS=1;     AC_SUBST([HAVE_MBSRTOWCS])
  HAVE_MBSNRTOWCS=1;    AC_SUBST([HAVE_MBSNRTOWCS])
  HAVE_WCRTOMB=1;       AC_SUBST([HAVE_WCRTOMB])
  HAVE_WCSRTOMBS=1;     AC_SUBST([HAVE_WCSRTOMBS])
  HAVE_WCSNRTOMBS=1;    AC_SUBST([HAVE_WCSNRTOMBS])
  HAVE_WMEMCHR=1;       AC_SUBST([HAVE_WMEMCHR])
  HAVE_WMEMCMP=1;       AC_SUBST([HAVE_WMEMCMP])
  HAVE_WMEMCPY=1;       AC_SUBST([HAVE_WMEMCPY])
  HAVE_WMEMMOVE=1;      AC_SUBST([HAVE_WMEMMOVE])
  HAVE_WMEMSET=1;       AC_SUBST([HAVE_WMEMSET])
  HAVE_WCSLEN=1;        AC_SUBST([HAVE_WCSLEN])
  HAVE_WCSNLEN=1;       AC_SUBST([HAVE_WCSNLEN])
  HAVE_WCSCPY=1;        AC_SUBST([HAVE_WCSCPY])
  HAVE_WCPCPY=1;        AC_SUBST([HAVE_WCPCPY])
  HAVE_WCSNCPY=1;       AC_SUBST([HAVE_WCSNCPY])
  HAVE_WCPNCPY=1;       AC_SUBST([HAVE_WCPNCPY])
  HAVE_WCSCAT=1;        AC_SUBST([HAVE_WCSCAT])
  HAVE_WCSNCAT=1;       AC_SUBST([HAVE_WCSNCAT])
  HAVE_WCSCMP=1;        AC_SUBST([HAVE_WCSCMP])
  HAVE_WCSNCMP=1;       AC_SUBST([HAVE_WCSNCMP])
  HAVE_WCSCASECMP=1;    AC_SUBST([HAVE_WCSCASECMP])
  HAVE_WCSNCASECMP=1;   AC_SUBST([HAVE_WCSNCASECMP])
  HAVE_WCSCOLL=1;       AC_SUBST([HAVE_WCSCOLL])
  HAVE_WCSXFRM=1;       AC_SUBST([HAVE_WCSXFRM])
  HAVE_WCSDUP=1;        AC_SUBST([HAVE_WCSDUP])
  HAVE_WCSCHR=1;        AC_SUBST([HAVE_WCSCHR])
  HAVE_WCSRCHR=1;       AC_SUBST([HAVE_WCSRCHR])
  HAVE_WCSCSPN=1;       AC_SUBST([HAVE_WCSCSPN])
  HAVE_WCSSPN=1;        AC_SUBST([HAVE_WCSSPN])
  HAVE_WCSPBRK=1;       AC_SUBST([HAVE_WCSPBRK])
  HAVE_WCSSTR=1;        AC_SUBST([HAVE_WCSSTR])
  HAVE_WCSTOK=1;        AC_SUBST([HAVE_WCSTOK])
  HAVE_WCSWIDTH=1;      AC_SUBST([HAVE_WCSWIDTH])
  HAVE_DECL_WCTOB=1;    AC_SUBST([HAVE_DECL_WCTOB])
  HAVE_DECL_WCWIDTH=1;  AC_SUBST([HAVE_DECL_WCWIDTH])
  REPLACE_MBSTATE_T=0;  AC_SUBST([REPLACE_MBSTATE_T])
  REPLACE_BTOWC=0;      AC_SUBST([REPLACE_BTOWC])
  REPLACE_WCTOB=0;      AC_SUBST([REPLACE_WCTOB])
  REPLACE_MBSINIT=0;    AC_SUBST([REPLACE_MBSINIT])
  REPLACE_MBRTOWC=0;    AC_SUBST([REPLACE_MBRTOWC])
  REPLACE_MBRLEN=0;     AC_SUBST([REPLACE_MBRLEN])
  REPLACE_MBSRTOWCS=0;  AC_SUBST([REPLACE_MBSRTOWCS])
  REPLACE_MBSNRTOWCS=0; AC_SUBST([REPLACE_MBSNRTOWCS])
  REPLACE_WCRTOMB=0;    AC_SUBST([REPLACE_WCRTOMB])
  REPLACE_WCSRTOMBS=0;  AC_SUBST([REPLACE_WCSRTOMBS])
  REPLACE_WCSNRTOMBS=0; AC_SUBST([REPLACE_WCSNRTOMBS])
  REPLACE_WCWIDTH=0;    AC_SUBST([REPLACE_WCWIDTH])
  REPLACE_WCSWIDTH=0;   AC_SUBST([REPLACE_WCSWIDTH])
])
