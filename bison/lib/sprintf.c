/* Formatted output to strings.
   Copyright (C) 2004, 2006-2015 Free Software Foundation, Inc.

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

#if 1
# include <config.h>
#endif

/* Specification.  */
#include <stdio.h>

#include <errno.h>
#include <limits.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>

#include "vasnprintf.h"

#ifndef SIZE_MAX
# define SIZE_MAX ((size_t) -1)
#endif

/* Print formatted output to string STR.
   Return string length of formatted string.  On error, return a negative
   value.  */
int
sprintf (char *str, const char *format, ...)
{
  char *output;
  size_t len;
  size_t lenbuf;
  va_list args;

  /* vasnprintf fails with EOVERFLOW when the buffer size argument is larger
     than INT_MAX (if that fits into a 'size_t' at all).
     Also note that glibc's iconv fails with E2BIG when we pass a length that
     is so large that str + lenbuf wraps around, i.e.
     (uintptr_t) (str + lenbuf) < (uintptr_t) str.
     Therefore set lenbuf = min (SIZE_MAX, INT_MAX, - (uintptr_t) str - 1).  */
  lenbuf = (SIZE_MAX < INT_MAX ? SIZE_MAX : INT_MAX);
  if (lenbuf > ~ (uintptr_t) str)
    lenbuf = ~ (uintptr_t) str;

  va_start (args, format);
  output = vasnprintf (str, &lenbuf, format, args);
  len = lenbuf;
  va_end (args);

  if (!output)
    return -1;

  if (output != str)
    {
      /* len is near SIZE_MAX.  */
      free (output);
      errno = EOVERFLOW;
      return -1;
    }

  if (len > INT_MAX)
    {
      errno = EOVERFLOW;
      return -1;
    }

  return len;
}
