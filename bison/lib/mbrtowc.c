/* Convert multibyte character to wide character.
   Copyright (C) 1999-2002, 2005-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2008.

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

#include <config.h>

/* Specification.  */
#include <wchar.h>

#if GNULIB_defined_mbstate_t
/* Implement mbrtowc() on top of mbtowc().  */

# include <errno.h>
# include <stdlib.h>

# include "localcharset.h"
# include "streq.h"
# include "verify.h"


verify (sizeof (mbstate_t) >= 4);

static char internal_state[4];

size_t
mbrtowc (wchar_t *pwc, const char *s, size_t n, mbstate_t *ps)
{
  char *pstate = (char *)ps;

  if (s == NULL)
    {
      pwc = NULL;
      s = "";
      n = 1;
    }

  if (n == 0)
    return (size_t)(-2);

  /* Here n > 0.  */

  if (pstate == NULL)
    pstate = internal_state;

  {
    size_t nstate = pstate[0];
    char buf[4];
    const char *p;
    size_t m;

    switch (nstate)
      {
      case 0:
        p = s;
        m = n;
        break;
      case 3:
        buf[2] = pstate[3];
        /*FALLTHROUGH*/
      case 2:
        buf[1] = pstate[2];
        /*FALLTHROUGH*/
      case 1:
        buf[0] = pstate[1];
        p = buf;
        m = nstate;
        buf[m++] = s[0];
        if (n >= 2 && m < 4)
          {
            buf[m++] = s[1];
            if (n >= 3 && m < 4)
              buf[m++] = s[2];
          }
        break;
      default:
        errno = EINVAL;
        return (size_t)(-1);
      }

    /* Here m > 0.  */

# if __GLIBC__ || defined __UCLIBC__
    /* Work around bug <http://sourceware.org/bugzilla/show_bug.cgi?id=9674> */
    mbtowc (NULL, NULL, 0);
# endif
    {
      int res = mbtowc (pwc, p, m);

      if (res >= 0)
        {
          if (pwc != NULL && ((*pwc == 0) != (res == 0)))
            abort ();
          if (nstate >= (res > 0 ? res : 1))
            abort ();
          res -= nstate;
          pstate[0] = 0;
          return res;
        }

      /* mbtowc does not distinguish between invalid and incomplete multibyte
         sequences.  But mbrtowc needs to make this distinction.
         There are two possible approaches:
           - Use iconv() and its return value.
           - Use built-in knowledge about the possible encodings.
         Given the low quality of implementation of iconv() on the systems that
         lack mbrtowc(), we use the second approach.
         The possible encodings are:
           - 8-bit encodings,
           - EUC-JP, EUC-KR, GB2312, EUC-TW, BIG5, GB18030, SJIS,
           - UTF-8.
         Use specialized code for each.  */
      if (m >= 4 || m >= MB_CUR_MAX)
        goto invalid;
      /* Here MB_CUR_MAX > 1 and 0 < m < 4.  */
      {
        const char *encoding = locale_charset ();

        if (STREQ_OPT (encoding, "UTF-8", 'U', 'T', 'F', '-', '8', 0, 0, 0, 0))
          {
            /* Cf. unistr/u8-mblen.c.  */
            unsigned char c = (unsigned char) p[0];

            if (c >= 0xc2)
              {
                if (c < 0xe0)
                  {
                    if (m == 1)
                      goto incomplete;
                  }
                else if (c < 0xf0)
                  {
                    if (m == 1)
                      goto incomplete;
                    if (m == 2)
                      {
                        unsigned char c2 = (unsigned char) p[1];

                        if ((c2 ^ 0x80) < 0x40
                            && (c >= 0xe1 || c2 >= 0xa0)
                            && (c != 0xed || c2 < 0xa0))
                          goto incomplete;
                      }
                  }
                else if (c <= 0xf4)
                  {
                    if (m == 1)
                      goto incomplete;
                    else /* m == 2 || m == 3 */
                      {
                        unsigned char c2 = (unsigned char) p[1];

                        if ((c2 ^ 0x80) < 0x40
                            && (c >= 0xf1 || c2 >= 0x90)
                            && (c < 0xf4 || (c == 0xf4 && c2 < 0x90)))
                          {
                            if (m == 2)
                              goto incomplete;
                            else /* m == 3 */
                              {
                                unsigned char c3 = (unsigned char) p[2];

                                if ((c3 ^ 0x80) < 0x40)
                                  goto incomplete;
                              }
                          }
                      }
                  }
              }
            goto invalid;
          }

        /* As a reference for this code, you can use the GNU libiconv
           implementation.  Look for uses of the RET_TOOFEW macro.  */

        if (STREQ_OPT (encoding,
                       "EUC-JP", 'E', 'U', 'C', '-', 'J', 'P', 0, 0, 0))
          {
            if (m == 1)
              {
                unsigned char c = (unsigned char) p[0];

                if ((c >= 0xa1 && c < 0xff) || c == 0x8e || c == 0x8f)
                  goto incomplete;
              }
            if (m == 2)
              {
                unsigned char c = (unsigned char) p[0];

                if (c == 0x8f)
                  {
                    unsigned char c2 = (unsigned char) p[1];

                    if (c2 >= 0xa1 && c2 < 0xff)
                      goto incomplete;
                  }
              }
            goto invalid;
          }
        if (STREQ_OPT (encoding,
                       "EUC-KR", 'E', 'U', 'C', '-', 'K', 'R', 0, 0, 0)
            || STREQ_OPT (encoding,
                          "GB2312", 'G', 'B', '2', '3', '1', '2', 0, 0, 0)
            || STREQ_OPT (encoding,
                          "BIG5", 'B', 'I', 'G', '5', 0, 0, 0, 0, 0))
          {
            if (m == 1)
              {
                unsigned char c = (unsigned char) p[0];

                if (c >= 0xa1 && c < 0xff)
                  goto incomplete;
              }
            goto invalid;
          }
        if (STREQ_OPT (encoding,
                       "EUC-TW", 'E', 'U', 'C', '-', 'T', 'W', 0, 0, 0))
          {
            if (m == 1)
              {
                unsigned char c = (unsigned char) p[0];

                if ((c >= 0xa1 && c < 0xff) || c == 0x8e)
                  goto incomplete;
              }
            else /* m == 2 || m == 3 */
              {
                unsigned char c = (unsigned char) p[0];

                if (c == 0x8e)
                  goto incomplete;
              }
            goto invalid;
          }
        if (STREQ_OPT (encoding,
                       "GB18030", 'G', 'B', '1', '8', '0', '3', '0', 0, 0))
          {
            if (m == 1)
              {
                unsigned char c = (unsigned char) p[0];

                if ((c >= 0x90 && c <= 0xe3) || (c >= 0xf8 && c <= 0xfe))
                  goto incomplete;
              }
            else /* m == 2 || m == 3 */
              {
                unsigned char c = (unsigned char) p[0];

                if (c >= 0x90 && c <= 0xe3)
                  {
                    unsigned char c2 = (unsigned char) p[1];

                    if (c2 >= 0x30 && c2 <= 0x39)
                      {
                        if (m == 2)
                          goto incomplete;
                        else /* m == 3 */
                          {
                            unsigned char c3 = (unsigned char) p[2];

                            if (c3 >= 0x81 && c3 <= 0xfe)
                              goto incomplete;
                          }
                      }
                  }
              }
            goto invalid;
          }
        if (STREQ_OPT (encoding, "SJIS", 'S', 'J', 'I', 'S', 0, 0, 0, 0, 0))
          {
            if (m == 1)
              {
                unsigned char c = (unsigned char) p[0];

                if ((c >= 0x81 && c <= 0x9f) || (c >= 0xe0 && c <= 0xea)
                    || (c >= 0xf0 && c <= 0xf9))
                  goto incomplete;
              }
            goto invalid;
          }

        /* An unknown multibyte encoding.  */
        goto incomplete;
      }

     incomplete:
      {
        size_t k = nstate;
        /* Here 0 <= k < m < 4.  */
        pstate[++k] = s[0];
        if (k < m)
          {
            pstate[++k] = s[1];
            if (k < m)
              pstate[++k] = s[2];
          }
        if (k != m)
          abort ();
      }
      pstate[0] = m;
      return (size_t)(-2);

     invalid:
      errno = EILSEQ;
      /* The conversion state is undefined, says POSIX.  */
      return (size_t)(-1);
    }
  }
}

#else
/* Override the system's mbrtowc() function.  */

# undef mbrtowc

size_t
rpl_mbrtowc (wchar_t *pwc, const char *s, size_t n, mbstate_t *ps)
{
# if MBRTOWC_NULL_ARG2_BUG || MBRTOWC_RETVAL_BUG || MBRTOWC_EMPTY_INPUT_BUG
  if (s == NULL)
    {
      pwc = NULL;
      s = "";
      n = 1;
    }
# endif

# if MBRTOWC_EMPTY_INPUT_BUG
  if (n == 0)
    return (size_t) -2;
# endif

# if MBRTOWC_RETVAL_BUG
  {
    static mbstate_t internal_state;

    /* Override mbrtowc's internal state.  We cannot call mbsinit() on the
       hidden internal state, but we can call it on our variable.  */
    if (ps == NULL)
      ps = &internal_state;

    if (!mbsinit (ps))
      {
        /* Parse the rest of the multibyte character byte for byte.  */
        size_t count = 0;
        for (; n > 0; s++, n--)
          {
            wchar_t wc;
            size_t ret = mbrtowc (&wc, s, 1, ps);

            if (ret == (size_t)(-1))
              return (size_t)(-1);
            count++;
            if (ret != (size_t)(-2))
              {
                /* The multibyte character has been completed.  */
                if (pwc != NULL)
                  *pwc = wc;
                return (wc == 0 ? 0 : count);
              }
          }
        return (size_t)(-2);
      }
  }
# endif

# if MBRTOWC_NUL_RETVAL_BUG
  {
    wchar_t wc;
    size_t ret = mbrtowc (&wc, s, n, ps);

    if (ret != (size_t)(-1) && ret != (size_t)(-2))
      {
        if (pwc != NULL)
          *pwc = wc;
        if (wc == 0)
          ret = 0;
      }
    return ret;
  }
# else
  {
#   if MBRTOWC_NULL_ARG1_BUG
    wchar_t dummy;

    if (pwc == NULL)
      pwc = &dummy;
#   endif

    return mbrtowc (pwc, s, n, ps);
  }
# endif
}

#endif
