/* Determine a canonical name for the current locale's character encoding.

   Copyright (C) 2000-2006, 2008-2015 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, see <http://www.gnu.org/licenses/>.  */

/* Written by Bruno Haible <bruno@clisp.org>.  */

#include <config.h>

/* Specification.  */
#include "localcharset.h"

#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#if defined __APPLE__ && defined __MACH__ && HAVE_LANGINFO_CODESET
# define DARWIN7 /* Darwin 7 or newer, i.e. Mac OS X 10.3 or newer */
#endif

#if defined _WIN32 || defined __WIN32__
# define WINDOWS_NATIVE
# include <locale.h>
#endif

#if defined __EMX__
/* Assume EMX program runs on OS/2, even if compiled under DOS.  */
# ifndef OS2
#  define OS2
# endif
#endif

#if !defined WINDOWS_NATIVE
# include <unistd.h>
# if HAVE_LANGINFO_CODESET
#  include <langinfo.h>
# else
#  if 0 /* see comment below */
#   include <locale.h>
#  endif
# endif
# ifdef __CYGWIN__
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
# endif
#elif defined WINDOWS_NATIVE
# define WIN32_LEAN_AND_MEAN
# include <windows.h>
#endif
#if defined OS2
# define INCL_DOS
# include <os2.h>
#endif

/* For MB_CUR_MAX_L */
#if defined DARWIN7
# include <xlocale.h>
#endif

#if ENABLE_RELOCATABLE
# include "relocatable.h"
#else
# define relocate(pathname) (pathname)
#endif

/* Get LIBDIR.  */
#ifndef LIBDIR
# include "configmake.h"
#endif

/* Define O_NOFOLLOW to 0 on platforms where it does not exist.  */
#ifndef O_NOFOLLOW
# define O_NOFOLLOW 0
#endif

#if defined _WIN32 || defined __WIN32__ || defined __CYGWIN__ || defined __EMX__ || defined __DJGPP__
  /* Native Windows, Cygwin, OS/2, DOS */
# define ISSLASH(C) ((C) == '/' || (C) == '\\')
#endif

#ifndef DIRECTORY_SEPARATOR
# define DIRECTORY_SEPARATOR '/'
#endif

#ifndef ISSLASH
# define ISSLASH(C) ((C) == DIRECTORY_SEPARATOR)
#endif

#if HAVE_DECL_GETC_UNLOCKED
# undef getc
# define getc getc_unlocked
#endif

/* The following static variable is declared 'volatile' to avoid a
   possible multithread problem in the function get_charset_aliases. If we
   are running in a threaded environment, and if two threads initialize
   'charset_aliases' simultaneously, both will produce the same value,
   and everything will be ok if the two assignments to 'charset_aliases'
   are atomic. But I don't know what will happen if the two assignments mix.  */
#if __STDC__ != 1
# define volatile /* empty */
#endif
/* Pointer to the contents of the charset.alias file, if it has already been
   read, else NULL.  Its format is:
   ALIAS_1 '\0' CANONICAL_1 '\0' ... ALIAS_n '\0' CANONICAL_n '\0' '\0'  */
static const char * volatile charset_aliases;

/* Return a pointer to the contents of the charset.alias file.  */
static const char *
get_charset_aliases (void)
{
  const char *cp;

  cp = charset_aliases;
  if (cp == NULL)
    {
#if !(defined DARWIN7 || defined VMS || defined WINDOWS_NATIVE || defined __CYGWIN__ || defined OS2)
      const char *dir;
      const char *base = "charset.alias";
      char *file_name;

      /* Make it possible to override the charset.alias location.  This is
         necessary for running the testsuite before "make install".  */
      dir = getenv ("CHARSETALIASDIR");
      if (dir == NULL || dir[0] == '\0')
        dir = relocate (LIBDIR);

      /* Concatenate dir and base into freshly allocated file_name.  */
      {
        size_t dir_len = strlen (dir);
        size_t base_len = strlen (base);
        int add_slash = (dir_len > 0 && !ISSLASH (dir[dir_len - 1]));
        file_name = (char *) malloc (dir_len + add_slash + base_len + 1);
        if (file_name != NULL)
          {
            memcpy (file_name, dir, dir_len);
            if (add_slash)
              file_name[dir_len] = DIRECTORY_SEPARATOR;
            memcpy (file_name + dir_len + add_slash, base, base_len + 1);
          }
      }

      if (file_name == NULL)
        /* Out of memory.  Treat the file as empty.  */
        cp = "";
      else
        {
          int fd;

          /* Open the file.  Reject symbolic links on platforms that support
             O_NOFOLLOW.  This is a security feature.  Without it, an attacker
             could retrieve parts of the contents (namely, the tail of the
             first line that starts with "* ") of an arbitrary file by placing
             a symbolic link to that file under the name "charset.alias" in
             some writable directory and defining the environment variable
             CHARSETALIASDIR to point to that directory.  */
          fd = open (file_name,
                     O_RDONLY | (HAVE_WORKING_O_NOFOLLOW ? O_NOFOLLOW : 0));
          if (fd < 0)
            /* File not found.  Treat it as empty.  */
            cp = "";
          else
            {
              FILE *fp;

              fp = fdopen (fd, "r");
              if (fp == NULL)
                {
                  /* Out of memory.  Treat the file as empty.  */
                  close (fd);
                  cp = "";
                }
              else
                {
                  /* Parse the file's contents.  */
                  char *res_ptr = NULL;
                  size_t res_size = 0;

                  for (;;)
                    {
                      int c;
                      char buf1[50+1];
                      char buf2[50+1];
                      size_t l1, l2;
                      char *old_res_ptr;

                      c = getc (fp);
                      if (c == EOF)
                        break;
                      if (c == '\n' || c == ' ' || c == '\t')
                        continue;
                      if (c == '#')
                        {
                          /* Skip comment, to end of line.  */
                          do
                            c = getc (fp);
                          while (!(c == EOF || c == '\n'));
                          if (c == EOF)
                            break;
                          continue;
                        }
                      ungetc (c, fp);
                      if (fscanf (fp, "%50s %50s", buf1, buf2) < 2)
                        break;
                      l1 = strlen (buf1);
                      l2 = strlen (buf2);
                      old_res_ptr = res_ptr;
                      if (res_size == 0)
                        {
                          res_size = l1 + 1 + l2 + 1;
                          res_ptr = (char *) malloc (res_size + 1);
                        }
                      else
                        {
                          res_size += l1 + 1 + l2 + 1;
                          res_ptr = (char *) realloc (res_ptr, res_size + 1);
                        }
                      if (res_ptr == NULL)
                        {
                          /* Out of memory. */
                          res_size = 0;
                          free (old_res_ptr);
                          break;
                        }
                      strcpy (res_ptr + res_size - (l2 + 1) - (l1 + 1), buf1);
                      strcpy (res_ptr + res_size - (l2 + 1), buf2);
                    }
                  fclose (fp);
                  if (res_size == 0)
                    cp = "";
                  else
                    {
                      *(res_ptr + res_size) = '\0';
                      cp = res_ptr;
                    }
                }
            }

          free (file_name);
        }

#else

# if defined DARWIN7
      /* To avoid the trouble of installing a file that is shared by many
         GNU packages -- many packaging systems have problems with this --,
         simply inline the aliases here.  */
      cp = "ISO8859-1" "\0" "ISO-8859-1" "\0"
           "ISO8859-2" "\0" "ISO-8859-2" "\0"
           "ISO8859-4" "\0" "ISO-8859-4" "\0"
           "ISO8859-5" "\0" "ISO-8859-5" "\0"
           "ISO8859-7" "\0" "ISO-8859-7" "\0"
           "ISO8859-9" "\0" "ISO-8859-9" "\0"
           "ISO8859-13" "\0" "ISO-8859-13" "\0"
           "ISO8859-15" "\0" "ISO-8859-15" "\0"
           "KOI8-R" "\0" "KOI8-R" "\0"
           "KOI8-U" "\0" "KOI8-U" "\0"
           "CP866" "\0" "CP866" "\0"
           "CP949" "\0" "CP949" "\0"
           "CP1131" "\0" "CP1131" "\0"
           "CP1251" "\0" "CP1251" "\0"
           "eucCN" "\0" "GB2312" "\0"
           "GB2312" "\0" "GB2312" "\0"
           "eucJP" "\0" "EUC-JP" "\0"
           "eucKR" "\0" "EUC-KR" "\0"
           "Big5" "\0" "BIG5" "\0"
           "Big5HKSCS" "\0" "BIG5-HKSCS" "\0"
           "GBK" "\0" "GBK" "\0"
           "GB18030" "\0" "GB18030" "\0"
           "SJIS" "\0" "SHIFT_JIS" "\0"
           "ARMSCII-8" "\0" "ARMSCII-8" "\0"
           "PT154" "\0" "PT154" "\0"
         /*"ISCII-DEV" "\0" "?" "\0"*/
           "*" "\0" "UTF-8" "\0";
# endif

# if defined VMS
      /* To avoid the troubles of an extra file charset.alias_vms in the
         sources of many GNU packages, simply inline the aliases here.  */
      /* The list of encodings is taken from the OpenVMS 7.3-1 documentation
         "Compaq C Run-Time Library Reference Manual for OpenVMS systems"
         section 10.7 "Handling Different Character Sets".  */
      cp = "ISO8859-1" "\0" "ISO-8859-1" "\0"
           "ISO8859-2" "\0" "ISO-8859-2" "\0"
           "ISO8859-5" "\0" "ISO-8859-5" "\0"
           "ISO8859-7" "\0" "ISO-8859-7" "\0"
           "ISO8859-8" "\0" "ISO-8859-8" "\0"
           "ISO8859-9" "\0" "ISO-8859-9" "\0"
           /* Japanese */
           "eucJP" "\0" "EUC-JP" "\0"
           "SJIS" "\0" "SHIFT_JIS" "\0"
           "DECKANJI" "\0" "DEC-KANJI" "\0"
           "SDECKANJI" "\0" "EUC-JP" "\0"
           /* Chinese */
           "eucTW" "\0" "EUC-TW" "\0"
           "DECHANYU" "\0" "DEC-HANYU" "\0"
           "DECHANZI" "\0" "GB2312" "\0"
           /* Korean */
           "DECKOREAN" "\0" "EUC-KR" "\0";
# endif

# if defined WINDOWS_NATIVE || defined __CYGWIN__
      /* To avoid the troubles of installing a separate file in the same
         directory as the DLL and of retrieving the DLL's directory at
         runtime, simply inline the aliases here.  */

      cp = "CP936" "\0" "GBK" "\0"
           "CP1361" "\0" "JOHAB" "\0"
           "CP20127" "\0" "ASCII" "\0"
           "CP20866" "\0" "KOI8-R" "\0"
           "CP20936" "\0" "GB2312" "\0"
           "CP21866" "\0" "KOI8-RU" "\0"
           "CP28591" "\0" "ISO-8859-1" "\0"
           "CP28592" "\0" "ISO-8859-2" "\0"
           "CP28593" "\0" "ISO-8859-3" "\0"
           "CP28594" "\0" "ISO-8859-4" "\0"
           "CP28595" "\0" "ISO-8859-5" "\0"
           "CP28596" "\0" "ISO-8859-6" "\0"
           "CP28597" "\0" "ISO-8859-7" "\0"
           "CP28598" "\0" "ISO-8859-8" "\0"
           "CP28599" "\0" "ISO-8859-9" "\0"
           "CP28605" "\0" "ISO-8859-15" "\0"
           "CP38598" "\0" "ISO-8859-8" "\0"
           "CP51932" "\0" "EUC-JP" "\0"
           "CP51936" "\0" "GB2312" "\0"
           "CP51949" "\0" "EUC-KR" "\0"
           "CP51950" "\0" "EUC-TW" "\0"
           "CP54936" "\0" "GB18030" "\0"
           "CP65001" "\0" "UTF-8" "\0";
# endif
# if defined OS2
      /* To avoid the troubles of installing a separate file in the same
         directory as the DLL and of retrieving the DLL's directory at
         runtime, simply inline the aliases here.  */

      /* The list of encodings is taken from "List of OS/2 Codepages"
         by Alex Taylor:
         <http://altsan.org/os2/toolkits/uls/index.html#codepages>.
         See also "IBM Globalization - Code page identifiers":
         <http://www-01.ibm.com/software/globalization/cp/cp_cpgid.html>.  */
      cp = "CP813" "\0" "ISO-8859-7" "\0"
           "CP878" "\0" "KOI8-R" "\0"
           "CP819" "\0" "ISO-8859-1" "\0"
           "CP912" "\0" "ISO-8859-2" "\0"
           "CP913" "\0" "ISO-8859-3" "\0"
           "CP914" "\0" "ISO-8859-4" "\0"
           "CP915" "\0" "ISO-8859-5" "\0"
           "CP916" "\0" "ISO-8859-8" "\0"
           "CP920" "\0" "ISO-8859-9" "\0"
           "CP921" "\0" "ISO-8859-13" "\0"
           "CP923" "\0" "ISO-8859-15" "\0"
           "CP954" "\0" "EUC-JP" "\0"
           "CP964" "\0" "EUC-TW" "\0"
           "CP970" "\0" "EUC-KR" "\0"
           "CP1089" "\0" "ISO-8859-6" "\0"
           "CP1208" "\0" "UTF-8" "\0"
           "CP1381" "\0" "GB2312" "\0"
           "CP1386" "\0" "GBK" "\0"
           "CP3372" "\0" "EUC-JP" "\0";
# endif
#endif

      charset_aliases = cp;
    }

  return cp;
}

/* Determine the current locale's character encoding, and canonicalize it
   into one of the canonical names listed in config.charset.
   The result must not be freed; it is statically allocated.
   If the canonical name cannot be determined, the result is a non-canonical
   name.  */

#ifdef STATIC
STATIC
#endif
const char *
locale_charset (void)
{
  const char *codeset;
  const char *aliases;

#if !(defined WINDOWS_NATIVE || defined OS2)

# if HAVE_LANGINFO_CODESET

  /* Most systems support nl_langinfo (CODESET) nowadays.  */
  codeset = nl_langinfo (CODESET);

#  ifdef __CYGWIN__
  /* Cygwin < 1.7 does not have locales.  nl_langinfo (CODESET) always
     returns "US-ASCII".  Return the suffix of the locale name from the
     environment variables (if present) or the codepage as a number.  */
  if (codeset != NULL && strcmp (codeset, "US-ASCII") == 0)
    {
      const char *locale;
      static char buf[2 + 10 + 1];

      locale = getenv ("LC_ALL");
      if (locale == NULL || locale[0] == '\0')
        {
          locale = getenv ("LC_CTYPE");
          if (locale == NULL || locale[0] == '\0')
            locale = getenv ("LANG");
        }
      if (locale != NULL && locale[0] != '\0')
        {
          /* If the locale name contains an encoding after the dot, return
             it.  */
          const char *dot = strchr (locale, '.');

          if (dot != NULL)
            {
              const char *modifier;

              dot++;
              /* Look for the possible @... trailer and remove it, if any.  */
              modifier = strchr (dot, '@');
              if (modifier == NULL)
                return dot;
              if (modifier - dot < sizeof (buf))
                {
                  memcpy (buf, dot, modifier - dot);
                  buf [modifier - dot] = '\0';
                  return buf;
                }
            }
        }

      /* The Windows API has a function returning the locale's codepage as a
         number: GetACP().  This encoding is used by Cygwin, unless the user
         has set the environment variable CYGWIN=codepage:oem (which very few
         people do).
         Output directed to console windows needs to be converted (to
         GetOEMCP() if the console is using a raster font, or to
         GetConsoleOutputCP() if it is using a TrueType font).  Cygwin does
         this conversion transparently (see winsup/cygwin/fhandler_console.cc),
         converting to GetConsoleOutputCP().  This leads to correct results,
         except when SetConsoleOutputCP has been called and a raster font is
         in use.  */
      sprintf (buf, "CP%u", GetACP ());
      codeset = buf;
    }
#  endif

# else

  /* On old systems which lack it, use setlocale or getenv.  */
  const char *locale = NULL;

  /* But most old systems don't have a complete set of locales.  Some
     (like SunOS 4 or DJGPP) have only the C locale.  Therefore we don't
     use setlocale here; it would return "C" when it doesn't support the
     locale name the user has set.  */
#  if 0
  locale = setlocale (LC_CTYPE, NULL);
#  endif
  if (locale == NULL || locale[0] == '\0')
    {
      locale = getenv ("LC_ALL");
      if (locale == NULL || locale[0] == '\0')
        {
          locale = getenv ("LC_CTYPE");
          if (locale == NULL || locale[0] == '\0')
            locale = getenv ("LANG");
        }
    }

  /* On some old systems, one used to set locale = "iso8859_1". On others,
     you set it to "language_COUNTRY.charset". In any case, we resolve it
     through the charset.alias file.  */
  codeset = locale;

# endif

#elif defined WINDOWS_NATIVE

  static char buf[2 + 10 + 1];

  /* The Windows API has a function returning the locale's codepage as
     a number, but the value doesn't change according to what the
     'setlocale' call specified.  So we use it as a last resort, in
     case the string returned by 'setlocale' doesn't specify the
     codepage.  */
  char *current_locale = setlocale (LC_ALL, NULL);
  char *pdot;

  /* If they set different locales for different categories,
     'setlocale' will return a semi-colon separated list of locale
     values.  To make sure we use the correct one, we choose LC_CTYPE.  */
  if (strchr (current_locale, ';'))
    current_locale = setlocale (LC_CTYPE, NULL);

  pdot = strrchr (current_locale, '.');
  if (pdot)
    sprintf (buf, "CP%s", pdot + 1);
  else
    {
      /* The Windows API has a function returning the locale's codepage as a
        number: GetACP().
        When the output goes to a console window, it needs to be provided in
        GetOEMCP() encoding if the console is using a raster font, or in
        GetConsoleOutputCP() encoding if it is using a TrueType font.
        But in GUI programs and for output sent to files and pipes, GetACP()
        encoding is the best bet.  */
      sprintf (buf, "CP%u", GetACP ());
    }
  codeset = buf;

#elif defined OS2

  const char *locale;
  static char buf[2 + 10 + 1];
  ULONG cp[3];
  ULONG cplen;

  codeset = NULL;

  /* Allow user to override the codeset, as set in the operating system,
     with standard language environment variables.  */
  locale = getenv ("LC_ALL");
  if (locale == NULL || locale[0] == '\0')
    {
      locale = getenv ("LC_CTYPE");
      if (locale == NULL || locale[0] == '\0')
        locale = getenv ("LANG");
    }
  if (locale != NULL && locale[0] != '\0')
    {
      /* If the locale name contains an encoding after the dot, return it.  */
      const char *dot = strchr (locale, '.');

      if (dot != NULL)
        {
          const char *modifier;

          dot++;
          /* Look for the possible @... trailer and remove it, if any.  */
          modifier = strchr (dot, '@');
          if (modifier == NULL)
            return dot;
          if (modifier - dot < sizeof (buf))
            {
              memcpy (buf, dot, modifier - dot);
              buf [modifier - dot] = '\0';
              return buf;
            }
        }

      /* For the POSIX locale, don't use the system's codepage.  */
      if (strcmp (locale, "C") == 0 || strcmp (locale, "POSIX") == 0)
        codeset = "";
    }

  if (codeset == NULL)
    {
      /* OS/2 has a function returning the locale's codepage as a number.  */
      if (DosQueryCp (sizeof (cp), cp, &cplen))
        codeset = "";
      else
        {
          sprintf (buf, "CP%u", cp[0]);
          codeset = buf;
        }
    }

#endif

  if (codeset == NULL)
    /* The canonical name cannot be determined.  */
    codeset = "";

  /* Resolve alias. */
  for (aliases = get_charset_aliases ();
       *aliases != '\0';
       aliases += strlen (aliases) + 1, aliases += strlen (aliases) + 1)
    if (strcmp (codeset, aliases) == 0
        || (aliases[0] == '*' && aliases[1] == '\0'))
      {
        codeset = aliases + strlen (aliases) + 1;
        break;
      }

  /* Don't return an empty string.  GNU libc and GNU libiconv interpret
     the empty string as denoting "the locale's character encoding",
     thus GNU libiconv would call this function a second time.  */
  if (codeset[0] == '\0')
    codeset = "ASCII";

#ifdef DARWIN7
  /* Mac OS X sets MB_CUR_MAX to 1 when LC_ALL=C, and "UTF-8"
     (the default codeset) does not work when MB_CUR_MAX is 1.  */
  if (strcmp (codeset, "UTF-8") == 0 && MB_CUR_MAX_L (uselocale (NULL)) <= 1)
    codeset = "ASCII";
#endif

  return codeset;
}
