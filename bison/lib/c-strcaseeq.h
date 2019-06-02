/* Optimized case-insensitive string comparison in C locale.
   Copyright (C) 2001-2002, 2007, 2009-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Written by Bruno Haible <bruno@clisp.org>.  */

#include "c-strcase.h"
#include "c-ctype.h"

/* STRCASEEQ allows to optimize string comparison with a small literal string.
     STRCASEEQ (s, "UTF-8", 'U','T','F','-','8',0,0,0,0)
   is semantically equivalent to
     c_strcasecmp (s, "UTF-8") == 0
   just faster.  */

/* Help GCC to generate good code for string comparisons with
   immediate strings. */
#if defined (__GNUC__) && defined (__OPTIMIZE__)

/* Case insensitive comparison of ASCII characters.  */
# if C_CTYPE_ASCII
#  define CASEEQ(other,upper) \
     (c_isupper (upper) ? ((other) & ~0x20) == (upper) : (other) == (upper))
# elif C_CTYPE_CONSECUTIVE_UPPERCASE && C_CTYPE_CONSECUTIVE_LOWERCASE
#  define CASEEQ(other,upper) \
     (c_isupper (upper) ? (other) == (upper) || (other) == (upper) - 'A' + 'a' : (other) == (upper))
# else
#  define CASEEQ(other,upper) \
     (c_toupper (other) == (upper))
# endif

static inline int
strcaseeq9 (const char *s1, const char *s2)
{
  return c_strcasecmp (s1 + 9, s2 + 9) == 0;
}

static inline int
strcaseeq8 (const char *s1, const char *s2, char s28)
{
  if (CASEEQ (s1[8], s28))
    {
      if (s28 == 0)
        return 1;
      else
        return strcaseeq9 (s1, s2);
    }
  else
    return 0;
}

static inline int
strcaseeq7 (const char *s1, const char *s2, char s27, char s28)
{
  if (CASEEQ (s1[7], s27))
    {
      if (s27 == 0)
        return 1;
      else
        return strcaseeq8 (s1, s2, s28);
    }
  else
    return 0;
}

static inline int
strcaseeq6 (const char *s1, const char *s2, char s26, char s27, char s28)
{
  if (CASEEQ (s1[6], s26))
    {
      if (s26 == 0)
        return 1;
      else
        return strcaseeq7 (s1, s2, s27, s28);
    }
  else
    return 0;
}

static inline int
strcaseeq5 (const char *s1, const char *s2, char s25, char s26, char s27, char s28)
{
  if (CASEEQ (s1[5], s25))
    {
      if (s25 == 0)
        return 1;
      else
        return strcaseeq6 (s1, s2, s26, s27, s28);
    }
  else
    return 0;
}

static inline int
strcaseeq4 (const char *s1, const char *s2, char s24, char s25, char s26, char s27, char s28)
{
  if (CASEEQ (s1[4], s24))
    {
      if (s24 == 0)
        return 1;
      else
        return strcaseeq5 (s1, s2, s25, s26, s27, s28);
    }
  else
    return 0;
}

static inline int
strcaseeq3 (const char *s1, const char *s2, char s23, char s24, char s25, char s26, char s27, char s28)
{
  if (CASEEQ (s1[3], s23))
    {
      if (s23 == 0)
        return 1;
      else
        return strcaseeq4 (s1, s2, s24, s25, s26, s27, s28);
    }
  else
    return 0;
}

static inline int
strcaseeq2 (const char *s1, const char *s2, char s22, char s23, char s24, char s25, char s26, char s27, char s28)
{
  if (CASEEQ (s1[2], s22))
    {
      if (s22 == 0)
        return 1;
      else
        return strcaseeq3 (s1, s2, s23, s24, s25, s26, s27, s28);
    }
  else
    return 0;
}

static inline int
strcaseeq1 (const char *s1, const char *s2, char s21, char s22, char s23, char s24, char s25, char s26, char s27, char s28)
{
  if (CASEEQ (s1[1], s21))
    {
      if (s21 == 0)
        return 1;
      else
        return strcaseeq2 (s1, s2, s22, s23, s24, s25, s26, s27, s28);
    }
  else
    return 0;
}

static inline int
strcaseeq0 (const char *s1, const char *s2, char s20, char s21, char s22, char s23, char s24, char s25, char s26, char s27, char s28)
{
  if (CASEEQ (s1[0], s20))
    {
      if (s20 == 0)
        return 1;
      else
        return strcaseeq1 (s1, s2, s21, s22, s23, s24, s25, s26, s27, s28);
    }
  else
    return 0;
}

#define STRCASEEQ(s1,s2,s20,s21,s22,s23,s24,s25,s26,s27,s28) \
  strcaseeq0 (s1, s2, s20, s21, s22, s23, s24, s25, s26, s27, s28)

#else

#define STRCASEEQ(s1,s2,s20,s21,s22,s23,s24,s25,s26,s27,s28) \
  (c_strcasecmp (s1, s2) == 0)

#endif
