/* Optimized string comparison.
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

#ifndef _GL_STREQ_H
#define _GL_STREQ_H

#include <string.h>

/* STREQ_OPT allows to optimize string comparison with a small literal string.
     STREQ_OPT (s, "EUC-KR", 'E', 'U', 'C', '-', 'K', 'R', 0, 0, 0)
   is semantically equivalent to
     strcmp (s, "EUC-KR") == 0
   just faster.  */

/* Help GCC to generate good code for string comparisons with
   immediate strings. */
#if defined (__GNUC__) && defined (__OPTIMIZE__)

static inline int
streq9 (const char *s1, const char *s2)
{
  return strcmp (s1 + 9, s2 + 9) == 0;
}

static inline int
streq8 (const char *s1, const char *s2, char s28)
{
  if (s1[8] == s28)
    {
      if (s28 == 0)
        return 1;
      else
        return streq9 (s1, s2);
    }
  else
    return 0;
}

static inline int
streq7 (const char *s1, const char *s2, char s27, char s28)
{
  if (s1[7] == s27)
    {
      if (s27 == 0)
        return 1;
      else
        return streq8 (s1, s2, s28);
    }
  else
    return 0;
}

static inline int
streq6 (const char *s1, const char *s2, char s26, char s27, char s28)
{
  if (s1[6] == s26)
    {
      if (s26 == 0)
        return 1;
      else
        return streq7 (s1, s2, s27, s28);
    }
  else
    return 0;
}

static inline int
streq5 (const char *s1, const char *s2, char s25, char s26, char s27, char s28)
{
  if (s1[5] == s25)
    {
      if (s25 == 0)
        return 1;
      else
        return streq6 (s1, s2, s26, s27, s28);
    }
  else
    return 0;
}

static inline int
streq4 (const char *s1, const char *s2, char s24, char s25, char s26, char s27, char s28)
{
  if (s1[4] == s24)
    {
      if (s24 == 0)
        return 1;
      else
        return streq5 (s1, s2, s25, s26, s27, s28);
    }
  else
    return 0;
}

static inline int
streq3 (const char *s1, const char *s2, char s23, char s24, char s25, char s26, char s27, char s28)
{
  if (s1[3] == s23)
    {
      if (s23 == 0)
        return 1;
      else
        return streq4 (s1, s2, s24, s25, s26, s27, s28);
    }
  else
    return 0;
}

static inline int
streq2 (const char *s1, const char *s2, char s22, char s23, char s24, char s25, char s26, char s27, char s28)
{
  if (s1[2] == s22)
    {
      if (s22 == 0)
        return 1;
      else
        return streq3 (s1, s2, s23, s24, s25, s26, s27, s28);
    }
  else
    return 0;
}

static inline int
streq1 (const char *s1, const char *s2, char s21, char s22, char s23, char s24, char s25, char s26, char s27, char s28)
{
  if (s1[1] == s21)
    {
      if (s21 == 0)
        return 1;
      else
        return streq2 (s1, s2, s22, s23, s24, s25, s26, s27, s28);
    }
  else
    return 0;
}

static inline int
streq0 (const char *s1, const char *s2, char s20, char s21, char s22, char s23, char s24, char s25, char s26, char s27, char s28)
{
  if (s1[0] == s20)
    {
      if (s20 == 0)
        return 1;
      else
        return streq1 (s1, s2, s21, s22, s23, s24, s25, s26, s27, s28);
    }
  else
    return 0;
}

#define STREQ_OPT(s1,s2,s20,s21,s22,s23,s24,s25,s26,s27,s28) \
  streq0 (s1, s2, s20, s21, s22, s23, s24, s25, s26, s27, s28)

#else

#define STREQ_OPT(s1,s2,s20,s21,s22,s23,s24,s25,s26,s27,s28) \
  (strcmp (s1, s2) == 0)

#endif

#endif /* _GL_STREQ_H */
