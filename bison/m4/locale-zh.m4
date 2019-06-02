# locale-zh.m4 serial 12
dnl Copyright (C) 2003, 2005-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Bruno Haible.

dnl Determine the name of a chinese locale with GB18030 encoding.
AC_DEFUN([gt_LOCALE_ZH_CN],
[
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_REQUIRE([AM_LANGINFO_CODESET])
  AC_CACHE_CHECK([for a transitional chinese locale], [gt_cv_locale_zh_CN], [
    AC_LANG_CONFTEST([AC_LANG_SOURCE([
changequote(,)dnl
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#if HAVE_LANGINFO_CODESET
# include <langinfo.h>
#endif
#include <stdlib.h>
#include <string.h>
struct tm t;
char buf[16];
int main ()
{
  const char *p;
  /* Check whether the given locale name is recognized by the system.  */
#if (defined _WIN32 || defined __WIN32__) && !defined __CYGWIN__
  /* On native Windows, setlocale(category, "") looks at the system settings,
     not at the environment variables.  Also, when an encoding suffix such
     as ".65001" or ".54936" is specified, it succeeds but sets the LC_CTYPE
     category of the locale to "C".  */
  if (setlocale (LC_ALL, getenv ("LC_ALL")) == NULL
      || strcmp (setlocale (LC_CTYPE, NULL), "C") == 0)
    return 1;
#else
  if (setlocale (LC_ALL, "") == NULL) return 1;
#endif
  /* Check whether nl_langinfo(CODESET) is nonempty and not "ASCII" or "646".
     On Mac OS X 10.3.5 (Darwin 7.5) in the fr_FR locale, nl_langinfo(CODESET)
     is empty, and the behaviour of Tcl 8.4 in this locale is not useful.
     On OpenBSD 4.0, when an unsupported locale is specified, setlocale()
     succeeds but then nl_langinfo(CODESET) is "646". In this situation,
     some unit tests fail.
     On MirBSD 10, when an unsupported locale is specified, setlocale()
     succeeds but then nl_langinfo(CODESET) is "UTF-8".  */
#if HAVE_LANGINFO_CODESET
  {
    const char *cs = nl_langinfo (CODESET);
    if (cs[0] == '\0' || strcmp (cs, "ASCII") == 0 || strcmp (cs, "646") == 0
        || strcmp (cs, "UTF-8") == 0)
      return 1;
  }
#endif
#ifdef __CYGWIN__
  /* On Cygwin, avoid locale names without encoding suffix, because the
     locale_charset() function relies on the encoding suffix.  Note that
     LC_ALL is set on the command line.  */
  if (strchr (getenv ("LC_ALL"), '.') == NULL) return 1;
#endif
  /* Check whether in a month name, no byte in the range 0x80..0x9F occurs.
     This excludes the UTF-8 encoding (except on MirBSD).  */
  t.tm_year = 1975 - 1900; t.tm_mon = 2 - 1; t.tm_mday = 4;
  if (strftime (buf, sizeof (buf), "%B", &t) < 2) return 1;
  for (p = buf; *p != '\0'; p++)
    if ((unsigned char) *p >= 0x80 && (unsigned char) *p < 0xa0)
      return 1;
  /* Check whether a typical GB18030 multibyte sequence is recognized as a
     single wide character.  This excludes the GB2312 and GBK encodings.  */
  if (mblen ("\203\062\332\066", 5) != 4)
    return 1;
  return 0;
}
changequote([,])dnl
      ])])
    if AC_TRY_EVAL([ac_link]) && test -s conftest$ac_exeext; then
      case "$host_os" in
        # Handle native Windows specially, because there setlocale() interprets
        # "ar" as "Arabic" or "Arabic_Saudi Arabia.1256",
        # "fr" or "fra" as "French" or "French_France.1252",
        # "ge"(!) or "deu"(!) as "German" or "German_Germany.1252",
        # "ja" as "Japanese" or "Japanese_Japan.932",
        # and similar.
        mingw*)
          # Test for the hypothetical native Windows locale name.
          if (LC_ALL=Chinese_China.54936 LC_TIME= LC_CTYPE= ./conftest; exit) 2>/dev/null; then
            gt_cv_locale_zh_CN=Chinese_China.54936
          else
            # None found.
            gt_cv_locale_zh_CN=none
          fi
          ;;
        solaris2.8)
          # On Solaris 8, the locales zh_CN.GB18030, zh_CN.GBK, zh.GBK are
          # broken. One witness is the test case in gl_MBRTOWC_SANITYCHECK.
          # Another witness is that "LC_ALL=zh_CN.GB18030 bash -c true" dumps core.
          gt_cv_locale_zh_CN=none
          ;;
        *)
          # Setting LC_ALL is not enough. Need to set LC_TIME to empty, because
          # otherwise on Mac OS X 10.3.5 the LC_TIME=C from the beginning of the
          # configure script would override the LC_ALL setting. Likewise for
          # LC_CTYPE, which is also set at the beginning of the configure script.
          # Test for the locale name without encoding suffix.
          if (LC_ALL=zh_CN LC_TIME= LC_CTYPE= ./conftest; exit) 2>/dev/null; then
            gt_cv_locale_zh_CN=zh_CN
          else
            # Test for the locale name with explicit encoding suffix.
            if (LC_ALL=zh_CN.GB18030 LC_TIME= LC_CTYPE= ./conftest; exit) 2>/dev/null; then
              gt_cv_locale_zh_CN=zh_CN.GB18030
            else
              # None found.
              gt_cv_locale_zh_CN=none
            fi
          fi
          ;;
      esac
    else
      # If there was a link error, due to mblen(), the system is so old that
      # it certainly doesn't have a chinese locale.
      gt_cv_locale_zh_CN=none
    fi
    rm -fr conftest*
  ])
  LOCALE_ZH_CN=$gt_cv_locale_zh_CN
  AC_SUBST([LOCALE_ZH_CN])
])
