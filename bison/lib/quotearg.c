/* quotearg.c - quote arguments for output

   Copyright (C) 1998-2002, 2004-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Written by Paul Eggert <eggert@twinsun.com> */

/* Without this pragma, gcc 4.7.0 20111124 mistakenly suggests that
   the quoting_options_from_style function might be candidate for
   attribute 'pure'  */
#if (__GNUC__ == 4 && 6 <= __GNUC_MINOR__) || 4 < __GNUC__
# pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#endif

#include <config.h>

#include "quotearg.h"
#include "quote.h"

#include "xalloc.h"
#include "c-strcaseeq.h"
#include "localcharset.h"

#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>

#include "gettext.h"
#define _(msgid) gettext (msgid)
#define N_(msgid) msgid

#ifndef SIZE_MAX
# define SIZE_MAX ((size_t) -1)
#endif

#define INT_BITS (sizeof (int) * CHAR_BIT)

struct quoting_options
{
  /* Basic quoting style.  */
  enum quoting_style style;

  /* Additional flags.  Bitwise combination of enum quoting_flags.  */
  int flags;

  /* Quote the characters indicated by this bit vector even if the
     quoting style would not normally require them to be quoted.  */
  unsigned int quote_these_too[(UCHAR_MAX / INT_BITS) + 1];

  /* The left quote for custom_quoting_style.  */
  char const *left_quote;

  /* The right quote for custom_quoting_style.  */
  char const *right_quote;
};

/* Names of quoting styles.  */
char const *const quoting_style_args[] =
{
  "literal",
  "shell",
  "shell-always",
  "c",
  "c-maybe",
  "escape",
  "locale",
  "clocale",
  0
};

/* Correspondences to quoting style names.  */
enum quoting_style const quoting_style_vals[] =
{
  literal_quoting_style,
  shell_quoting_style,
  shell_always_quoting_style,
  c_quoting_style,
  c_maybe_quoting_style,
  escape_quoting_style,
  locale_quoting_style,
  clocale_quoting_style
};

/* The default quoting options.  */
static struct quoting_options default_quoting_options;

/* Allocate a new set of quoting options, with contents initially identical
   to O if O is not null, or to the default if O is null.
   It is the caller's responsibility to free the result.  */
struct quoting_options *
clone_quoting_options (struct quoting_options *o)
{
  int e = errno;
  struct quoting_options *p = xmemdup (o ? o : &default_quoting_options,
                                       sizeof *o);
  errno = e;
  return p;
}

/* Get the value of O's quoting style.  If O is null, use the default.  */
enum quoting_style
get_quoting_style (struct quoting_options *o)
{
  return (o ? o : &default_quoting_options)->style;
}

/* In O (or in the default if O is null),
   set the value of the quoting style to S.  */
void
set_quoting_style (struct quoting_options *o, enum quoting_style s)
{
  (o ? o : &default_quoting_options)->style = s;
}

/* In O (or in the default if O is null),
   set the value of the quoting options for character C to I.
   Return the old value.  Currently, the only values defined for I are
   0 (the default) and 1 (which means to quote the character even if
   it would not otherwise be quoted).  */
int
set_char_quoting (struct quoting_options *o, char c, int i)
{
  unsigned char uc = c;
  unsigned int *p =
    (o ? o : &default_quoting_options)->quote_these_too + uc / INT_BITS;
  int shift = uc % INT_BITS;
  int r = (*p >> shift) & 1;
  *p ^= ((i & 1) ^ r) << shift;
  return r;
}

/* In O (or in the default if O is null),
   set the value of the quoting options flag to I, which can be a
   bitwise combination of enum quoting_flags, or 0 for default
   behavior.  Return the old value.  */
int
set_quoting_flags (struct quoting_options *o, int i)
{
  int r;
  if (!o)
    o = &default_quoting_options;
  r = o->flags;
  o->flags = i;
  return r;
}

void
set_custom_quoting (struct quoting_options *o,
                    char const *left_quote, char const *right_quote)
{
  if (!o)
    o = &default_quoting_options;
  o->style = custom_quoting_style;
  if (!left_quote || !right_quote)
    abort ();
  o->left_quote = left_quote;
  o->right_quote = right_quote;
}

/* Return quoting options for STYLE, with no extra quoting.  */
static struct quoting_options /* NOT PURE!! */
quoting_options_from_style (enum quoting_style style)
{
  struct quoting_options o = { literal_quoting_style, 0, { 0 }, NULL, NULL };
  if (style == custom_quoting_style)
    abort ();
  o.style = style;
  return o;
}

/* MSGID approximates a quotation mark.  Return its translation if it
   has one; otherwise, return either it or "\"", depending on S.

   S is either clocale_quoting_style or locale_quoting_style.  */
static char const *
gettext_quote (char const *msgid, enum quoting_style s)
{
  char const *translation = _(msgid);
  char const *locale_code;

  if (translation != msgid)
    return translation;

  /* For UTF-8 and GB-18030, use single quotes U+2018 and U+2019.
     Here is a list of other locales that include U+2018 and U+2019:

        ISO-8859-7   0xA1                 KOI8-T       0x91
        CP869        0x8B                 CP874        0x91
        CP932        0x81 0x65            CP936        0xA1 0xAE
        CP949        0xA1 0xAE            CP950        0xA1 0xA5
        CP1250       0x91                 CP1251       0x91
        CP1252       0x91                 CP1253       0x91
        CP1254       0x91                 CP1255       0x91
        CP1256       0x91                 CP1257       0x91
        EUC-JP       0xA1 0xC6            EUC-KR       0xA1 0xAE
        EUC-TW       0xA1 0xE4            BIG5         0xA1 0xA5
        BIG5-HKSCS   0xA1 0xA5            EUC-CN       0xA1 0xAE
        GBK          0xA1 0xAE            Georgian-PS  0x91
        PT154        0x91

     None of these is still in wide use; using iconv is overkill.  */
  locale_code = locale_charset ();
  if (STRCASEEQ (locale_code, "UTF-8", 'U','T','F','-','8',0,0,0,0))
    return msgid[0] == '`' ? "\xe2\x80\x98": "\xe2\x80\x99";
  if (STRCASEEQ (locale_code, "GB18030", 'G','B','1','8','0','3','0',0,0))
    return msgid[0] == '`' ? "\xa1\ae": "\xa1\xaf";

  return (s == clocale_quoting_style ? "\"" : "'");
}

/* Place into buffer BUFFER (of size BUFFERSIZE) a quoted version of
   argument ARG (of size ARGSIZE), using QUOTING_STYLE, FLAGS, and
   QUOTE_THESE_TOO to control quoting.
   Terminate the output with a null character, and return the written
   size of the output, not counting the terminating null.
   If BUFFERSIZE is too small to store the output string, return the
   value that would have been returned had BUFFERSIZE been large enough.
   If ARGSIZE is SIZE_MAX, use the string length of the argument for ARGSIZE.

   This function acts like quotearg_buffer (BUFFER, BUFFERSIZE, ARG,
   ARGSIZE, O), except it breaks O into its component pieces and is
   not careful about errno.  */

static size_t
quotearg_buffer_restyled (char *buffer, size_t buffersize,
                          char const *arg, size_t argsize,
                          enum quoting_style quoting_style, int flags,
                          unsigned int const *quote_these_too,
                          char const *left_quote,
                          char const *right_quote)
{
  size_t i;
  size_t len = 0;
  char const *quote_string = 0;
  size_t quote_string_len = 0;
  bool backslash_escapes = false;
  bool unibyte_locale = MB_CUR_MAX == 1;
  bool elide_outer_quotes = (flags & QA_ELIDE_OUTER_QUOTES) != 0;

#define STORE(c) \
    do \
      { \
        if (len < buffersize) \
          buffer[len] = (c); \
        len++; \
      } \
    while (0)

  switch (quoting_style)
    {
    case c_maybe_quoting_style:
      quoting_style = c_quoting_style;
      elide_outer_quotes = true;
      /* Fall through.  */
    case c_quoting_style:
      if (!elide_outer_quotes)
        STORE ('"');
      backslash_escapes = true;
      quote_string = "\"";
      quote_string_len = 1;
      break;

    case escape_quoting_style:
      backslash_escapes = true;
      elide_outer_quotes = false;
      break;

    case locale_quoting_style:
    case clocale_quoting_style:
    case custom_quoting_style:
      {
        if (quoting_style != custom_quoting_style)
          {
            /* TRANSLATORS:
               Get translations for open and closing quotation marks.
               The message catalog should translate "`" to a left
               quotation mark suitable for the locale, and similarly for
               "'".  For example, a French Unicode local should translate
               these to U+00AB (LEFT-POINTING DOUBLE ANGLE
               QUOTATION MARK), and U+00BB (RIGHT-POINTING DOUBLE ANGLE
               QUOTATION MARK), respectively.

               If the catalog has no translation, we will try to
               use Unicode U+2018 (LEFT SINGLE QUOTATION MARK) and
               Unicode U+2019 (RIGHT SINGLE QUOTATION MARK).  If the
               current locale is not Unicode, locale_quoting_style
               will quote 'like this', and clocale_quoting_style will
               quote "like this".  You should always include translations
               for "`" and "'" even if U+2018 and U+2019 are appropriate
               for your locale.

               If you don't know what to put here, please see
               <http://en.wikipedia.org/wiki/Quotation_marks_in_other_languages>
               and use glyphs suitable for your language.  */
            left_quote = gettext_quote (N_("`"), quoting_style);
            right_quote = gettext_quote (N_("'"), quoting_style);
          }
        if (!elide_outer_quotes)
          for (quote_string = left_quote; *quote_string; quote_string++)
            STORE (*quote_string);
        backslash_escapes = true;
        quote_string = right_quote;
        quote_string_len = strlen (quote_string);
      }
      break;

    case shell_quoting_style:
      quoting_style = shell_always_quoting_style;
      elide_outer_quotes = true;
      /* Fall through.  */
    case shell_always_quoting_style:
      if (!elide_outer_quotes)
        STORE ('\'');
      quote_string = "'";
      quote_string_len = 1;
      break;

    case literal_quoting_style:
      elide_outer_quotes = false;
      break;

    default:
      abort ();
    }

  for (i = 0;  ! (argsize == SIZE_MAX ? arg[i] == '\0' : i == argsize);  i++)
    {
      unsigned char c;
      unsigned char esc;
      bool is_right_quote = false;

      if (backslash_escapes
          && quote_string_len
          && (i + quote_string_len
              <= (argsize == SIZE_MAX && 1 < quote_string_len
                  /* Use strlen only if we must: when argsize is SIZE_MAX,
                     and when the quote string is more than 1 byte long.
                     If we do call strlen, save the result.  */
                  ? (argsize = strlen (arg)) : argsize))
          && memcmp (arg + i, quote_string, quote_string_len) == 0)
        {
          if (elide_outer_quotes)
            goto force_outer_quoting_style;
          is_right_quote = true;
        }

      c = arg[i];
      switch (c)
        {
        case '\0':
          if (backslash_escapes)
            {
              if (elide_outer_quotes)
                goto force_outer_quoting_style;
              STORE ('\\');
              /* If quote_string were to begin with digits, we'd need to
                 test for the end of the arg as well.  However, it's
                 hard to imagine any locale that would use digits in
                 quotes, and set_custom_quoting is documented not to
                 accept them.  */
              if (i + 1 < argsize && '0' <= arg[i + 1] && arg[i + 1] <= '9')
                {
                  STORE ('0');
                  STORE ('0');
                }
              c = '0';
              /* We don't have to worry that this last '0' will be
                 backslash-escaped because, again, quote_string should
                 not start with it and because quote_these_too is
                 documented as not accepting it.  */
            }
          else if (flags & QA_ELIDE_NULL_BYTES)
            continue;
          break;

        case '?':
          switch (quoting_style)
            {
            case shell_always_quoting_style:
              if (elide_outer_quotes)
                goto force_outer_quoting_style;
              break;

            case c_quoting_style:
              if ((flags & QA_SPLIT_TRIGRAPHS)
                  && i + 2 < argsize && arg[i + 1] == '?')
                switch (arg[i + 2])
                  {
                  case '!': case '\'':
                  case '(': case ')': case '-': case '/':
                  case '<': case '=': case '>':
                    /* Escape the second '?' in what would otherwise be
                       a trigraph.  */
                    if (elide_outer_quotes)
                      goto force_outer_quoting_style;
                    c = arg[i + 2];
                    i += 2;
                    STORE ('?');
                    STORE ('"');
                    STORE ('"');
                    STORE ('?');
                    break;

                  default:
                    break;
                  }
              break;

            default:
              break;
            }
          break;

        case '\a': esc = 'a'; goto c_escape;
        case '\b': esc = 'b'; goto c_escape;
        case '\f': esc = 'f'; goto c_escape;
        case '\n': esc = 'n'; goto c_and_shell_escape;
        case '\r': esc = 'r'; goto c_and_shell_escape;
        case '\t': esc = 't'; goto c_and_shell_escape;
        case '\v': esc = 'v'; goto c_escape;
        case '\\': esc = c;
          /* No need to escape the escape if we are trying to elide
             outer quotes and nothing else is problematic.  */
          if (backslash_escapes && elide_outer_quotes && quote_string_len)
            goto store_c;

        c_and_shell_escape:
          if (quoting_style == shell_always_quoting_style
              && elide_outer_quotes)
            goto force_outer_quoting_style;
          /* Fall through.  */
        c_escape:
          if (backslash_escapes)
            {
              c = esc;
              goto store_escape;
            }
          break;

        case '{': case '}': /* sometimes special if isolated */
          if (! (argsize == SIZE_MAX ? arg[1] == '\0' : argsize == 1))
            break;
          /* Fall through.  */
        case '#': case '~':
          if (i != 0)
            break;
          /* Fall through.  */
        case ' ':
        case '!': /* special in bash */
        case '"': case '$': case '&':
        case '(': case ')': case '*': case ';':
        case '<':
        case '=': /* sometimes special in 0th or (with "set -k") later args */
        case '>': case '[':
        case '^': /* special in old /bin/sh, e.g. SunOS 4.1.4 */
        case '`': case '|':
          /* A shell special character.  In theory, '$' and '`' could
             be the first bytes of multibyte characters, which means
             we should check them with mbrtowc, but in practice this
             doesn't happen so it's not worth worrying about.  */
          if (quoting_style == shell_always_quoting_style
              && elide_outer_quotes)
            goto force_outer_quoting_style;
          break;

        case '\'':
          if (quoting_style == shell_always_quoting_style)
            {
              if (elide_outer_quotes)
                goto force_outer_quoting_style;
              STORE ('\'');
              STORE ('\\');
              STORE ('\'');
            }
          break;

        case '%': case '+': case ',': case '-': case '.': case '/':
        case '0': case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9': case ':':
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
        case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
        case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
        case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
        case 'Y': case 'Z': case ']': case '_': case 'a': case 'b':
        case 'c': case 'd': case 'e': case 'f': case 'g': case 'h':
        case 'i': case 'j': case 'k': case 'l': case 'm': case 'n':
        case 'o': case 'p': case 'q': case 'r': case 's': case 't':
        case 'u': case 'v': case 'w': case 'x': case 'y': case 'z':
          /* These characters don't cause problems, no matter what the
             quoting style is.  They cannot start multibyte sequences.
             A digit or a special letter would cause trouble if it
             appeared at the beginning of quote_string because we'd then
             escape by prepending a backslash.  However, it's hard to
             imagine any locale that would use digits or letters as
             quotes, and set_custom_quoting is documented not to accept
             them.  Also, a digit or a special letter would cause
             trouble if it appeared in quote_these_too, but that's also
             documented as not accepting them.  */
          break;

        default:
          /* If we have a multibyte sequence, copy it until we reach
             its end, find an error, or come back to the initial shift
             state.  For C-like styles, if the sequence has
             unprintable characters, escape the whole sequence, since
             we can't easily escape single characters within it.  */
          {
            /* Length of multibyte sequence found so far.  */
            size_t m;

            bool printable;

            if (unibyte_locale)
              {
                m = 1;
                printable = isprint (c) != 0;
              }
            else
              {
                mbstate_t mbstate;
                memset (&mbstate, 0, sizeof mbstate);

                m = 0;
                printable = true;
                if (argsize == SIZE_MAX)
                  argsize = strlen (arg);

                do
                  {
                    wchar_t w;
                    size_t bytes = mbrtowc (&w, &arg[i + m],
                                            argsize - (i + m), &mbstate);
                    if (bytes == 0)
                      break;
                    else if (bytes == (size_t) -1)
                      {
                        printable = false;
                        break;
                      }
                    else if (bytes == (size_t) -2)
                      {
                        printable = false;
                        while (i + m < argsize && arg[i + m])
                          m++;
                        break;
                      }
                    else
                      {
                        /* Work around a bug with older shells that "see" a '\'
                           that is really the 2nd byte of a multibyte character.
                           In practice the problem is limited to ASCII
                           chars >= '@' that are shell special chars.  */
                        if ('[' == 0x5b && elide_outer_quotes
                            && quoting_style == shell_always_quoting_style)
                          {
                            size_t j;
                            for (j = 1; j < bytes; j++)
                              switch (arg[i + m + j])
                                {
                                case '[': case '\\': case '^':
                                case '`': case '|':
                                  goto force_outer_quoting_style;

                                default:
                                  break;
                                }
                          }

                        if (! iswprint (w))
                          printable = false;
                        m += bytes;
                      }
                  }
                while (! mbsinit (&mbstate));
              }

            if (1 < m || (backslash_escapes && ! printable))
              {
                /* Output a multibyte sequence, or an escaped
                   unprintable unibyte character.  */
                size_t ilim = i + m;

                for (;;)
                  {
                    if (backslash_escapes && ! printable)
                      {
                        if (elide_outer_quotes)
                          goto force_outer_quoting_style;
                        STORE ('\\');
                        STORE ('0' + (c >> 6));
                        STORE ('0' + ((c >> 3) & 7));
                        c = '0' + (c & 7);
                      }
                    else if (is_right_quote)
                      {
                        STORE ('\\');
                        is_right_quote = false;
                      }
                    if (ilim <= i + 1)
                      break;
                    STORE (c);
                    c = arg[++i];
                  }

                goto store_c;
              }
          }
        }

      if (! ((backslash_escapes || elide_outer_quotes)
             && quote_these_too
             && quote_these_too[c / INT_BITS] >> (c % INT_BITS) & 1)
          && !is_right_quote)
        goto store_c;

    store_escape:
      if (elide_outer_quotes)
        goto force_outer_quoting_style;
      STORE ('\\');

    store_c:
      STORE (c);
    }

  if (len == 0 && quoting_style == shell_always_quoting_style
      && elide_outer_quotes)
    goto force_outer_quoting_style;

  if (quote_string && !elide_outer_quotes)
    for (; *quote_string; quote_string++)
      STORE (*quote_string);

  if (len < buffersize)
    buffer[len] = '\0';
  return len;

 force_outer_quoting_style:
  /* Don't reuse quote_these_too, since the addition of outer quotes
     sufficiently quotes the specified characters.  */
  return quotearg_buffer_restyled (buffer, buffersize, arg, argsize,
                                   quoting_style,
                                   flags & ~QA_ELIDE_OUTER_QUOTES, NULL,
                                   left_quote, right_quote);
}

/* Place into buffer BUFFER (of size BUFFERSIZE) a quoted version of
   argument ARG (of size ARGSIZE), using O to control quoting.
   If O is null, use the default.
   Terminate the output with a null character, and return the written
   size of the output, not counting the terminating null.
   If BUFFERSIZE is too small to store the output string, return the
   value that would have been returned had BUFFERSIZE been large enough.
   If ARGSIZE is SIZE_MAX, use the string length of the argument for
   ARGSIZE.  */
size_t
quotearg_buffer (char *buffer, size_t buffersize,
                 char const *arg, size_t argsize,
                 struct quoting_options const *o)
{
  struct quoting_options const *p = o ? o : &default_quoting_options;
  int e = errno;
  size_t r = quotearg_buffer_restyled (buffer, buffersize, arg, argsize,
                                       p->style, p->flags, p->quote_these_too,
                                       p->left_quote, p->right_quote);
  errno = e;
  return r;
}

/* Equivalent to quotearg_alloc (ARG, ARGSIZE, NULL, O).  */
char *
quotearg_alloc (char const *arg, size_t argsize,
                struct quoting_options const *o)
{
  return quotearg_alloc_mem (arg, argsize, NULL, o);
}

/* Like quotearg_buffer (..., ARG, ARGSIZE, O), except return newly
   allocated storage containing the quoted string, and store the
   resulting size into *SIZE, if non-NULL.  The result can contain
   embedded null bytes only if ARGSIZE is not SIZE_MAX, SIZE is not
   NULL, and set_quoting_flags has not set the null byte elision
   flag.  */
char *
quotearg_alloc_mem (char const *arg, size_t argsize, size_t *size,
                    struct quoting_options const *o)
{
  struct quoting_options const *p = o ? o : &default_quoting_options;
  int e = errno;
  /* Elide embedded null bytes if we can't return a size.  */
  int flags = p->flags | (size ? 0 : QA_ELIDE_NULL_BYTES);
  size_t bufsize = quotearg_buffer_restyled (0, 0, arg, argsize, p->style,
                                             flags, p->quote_these_too,
                                             p->left_quote,
                                             p->right_quote) + 1;
  char *buf = xcharalloc (bufsize);
  quotearg_buffer_restyled (buf, bufsize, arg, argsize, p->style, flags,
                            p->quote_these_too,
                            p->left_quote, p->right_quote);
  errno = e;
  if (size)
    *size = bufsize - 1;
  return buf;
}

/* A storage slot with size and pointer to a value.  */
struct slotvec
{
  size_t size;
  char *val;
};

/* Preallocate a slot 0 buffer, so that the caller can always quote
   one small component of a "memory exhausted" message in slot 0.  */
static char slot0[256];
static unsigned int nslots = 1;
static struct slotvec slotvec0 = {sizeof slot0, slot0};
static struct slotvec *slotvec = &slotvec0;

void
quotearg_free (void)
{
  struct slotvec *sv = slotvec;
  unsigned int i;
  for (i = 1; i < nslots; i++)
    free (sv[i].val);
  if (sv[0].val != slot0)
    {
      free (sv[0].val);
      slotvec0.size = sizeof slot0;
      slotvec0.val = slot0;
    }
  if (sv != &slotvec0)
    {
      free (sv);
      slotvec = &slotvec0;
    }
  nslots = 1;
}

/* Use storage slot N to return a quoted version of argument ARG.
   ARG is of size ARGSIZE, but if that is SIZE_MAX, ARG is a
   null-terminated string.
   OPTIONS specifies the quoting options.
   The returned value points to static storage that can be
   reused by the next call to this function with the same value of N.
   N must be nonnegative.  N is deliberately declared with type "int"
   to allow for future extensions (using negative values).  */
static char *
quotearg_n_options (int n, char const *arg, size_t argsize,
                    struct quoting_options const *options)
{
  int e = errno;

  unsigned int n0 = n;
  struct slotvec *sv = slotvec;

  if (n < 0)
    abort ();

  if (nslots <= n0)
    {
      /* FIXME: technically, the type of n1 should be 'unsigned int',
         but that evokes an unsuppressible warning from gcc-4.0.1 and
         older.  If gcc ever provides an option to suppress that warning,
         revert to the original type, so that the test in xalloc_oversized
         is once again performed only at compile time.  */
      size_t n1 = n0 + 1;
      bool preallocated = (sv == &slotvec0);

      if (xalloc_oversized (n1, sizeof *sv))
        xalloc_die ();

      slotvec = sv = xrealloc (preallocated ? NULL : sv, n1 * sizeof *sv);
      if (preallocated)
        *sv = slotvec0;
      memset (sv + nslots, 0, (n1 - nslots) * sizeof *sv);
      nslots = n1;
    }

  {
    size_t size = sv[n].size;
    char *val = sv[n].val;
    /* Elide embedded null bytes since we don't return a size.  */
    int flags = options->flags | QA_ELIDE_NULL_BYTES;
    size_t qsize = quotearg_buffer_restyled (val, size, arg, argsize,
                                             options->style, flags,
                                             options->quote_these_too,
                                             options->left_quote,
                                             options->right_quote);

    if (size <= qsize)
      {
        sv[n].size = size = qsize + 1;
        if (val != slot0)
          free (val);
        sv[n].val = val = xcharalloc (size);
        quotearg_buffer_restyled (val, size, arg, argsize, options->style,
                                  flags, options->quote_these_too,
                                  options->left_quote,
                                  options->right_quote);
      }

    errno = e;
    return val;
  }
}

char *
quotearg_n (int n, char const *arg)
{
  return quotearg_n_options (n, arg, SIZE_MAX, &default_quoting_options);
}

char *
quotearg_n_mem (int n, char const *arg, size_t argsize)
{
  return quotearg_n_options (n, arg, argsize, &default_quoting_options);
}

char *
quotearg (char const *arg)
{
  return quotearg_n (0, arg);
}

char *
quotearg_mem (char const *arg, size_t argsize)
{
  return quotearg_n_mem (0, arg, argsize);
}

char *
quotearg_n_style (int n, enum quoting_style s, char const *arg)
{
  struct quoting_options const o = quoting_options_from_style (s);
  return quotearg_n_options (n, arg, SIZE_MAX, &o);
}

char *
quotearg_n_style_mem (int n, enum quoting_style s,
                      char const *arg, size_t argsize)
{
  struct quoting_options const o = quoting_options_from_style (s);
  return quotearg_n_options (n, arg, argsize, &o);
}

char *
quotearg_style (enum quoting_style s, char const *arg)
{
  return quotearg_n_style (0, s, arg);
}

char *
quotearg_style_mem (enum quoting_style s, char const *arg, size_t argsize)
{
  return quotearg_n_style_mem (0, s, arg, argsize);
}

char *
quotearg_char_mem (char const *arg, size_t argsize, char ch)
{
  struct quoting_options options;
  options = default_quoting_options;
  set_char_quoting (&options, ch, 1);
  return quotearg_n_options (0, arg, argsize, &options);
}

char *
quotearg_char (char const *arg, char ch)
{
  return quotearg_char_mem (arg, SIZE_MAX, ch);
}

char *
quotearg_colon (char const *arg)
{
  return quotearg_char (arg, ':');
}

char *
quotearg_colon_mem (char const *arg, size_t argsize)
{
  return quotearg_char_mem (arg, argsize, ':');
}

char *
quotearg_n_custom (int n, char const *left_quote,
                   char const *right_quote, char const *arg)
{
  return quotearg_n_custom_mem (n, left_quote, right_quote, arg,
                                SIZE_MAX);
}

char *
quotearg_n_custom_mem (int n, char const *left_quote,
                       char const *right_quote,
                       char const *arg, size_t argsize)
{
  struct quoting_options o = default_quoting_options;
  set_custom_quoting (&o, left_quote, right_quote);
  return quotearg_n_options (n, arg, argsize, &o);
}

char *
quotearg_custom (char const *left_quote, char const *right_quote,
                 char const *arg)
{
  return quotearg_n_custom (0, left_quote, right_quote, arg);
}

char *
quotearg_custom_mem (char const *left_quote, char const *right_quote,
                     char const *arg, size_t argsize)
{
  return quotearg_n_custom_mem (0, left_quote, right_quote, arg,
                                argsize);
}


/* The quoting option used by the functions of quote.h.  */
struct quoting_options quote_quoting_options =
  {
    locale_quoting_style,
    0,
    { 0 },
    NULL, NULL
  };

char const *
quote_n_mem (int n, char const *arg, size_t argsize)
{
  return quotearg_n_options (n, arg, argsize, &quote_quoting_options);
}

char const *
quote_mem (char const *arg, size_t argsize)
{
  return quote_n_mem (0, arg, argsize);
}

char const *
quote_n (int n, char const *arg)
{
  return quote_n_mem (n, arg, SIZE_MAX);
}

char const *
quote (char const *arg)
{
  return quote_n (0, arg);
}
