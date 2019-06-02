/* xmemdup0.c -- copy a block of arbitrary bytes, plus a trailing NUL

   Copyright (C) 2008-2015 Free Software Foundation, Inc.

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

#include "xmemdup0.h"
#include "xalloc.h"

#include <string.h>

/* Clone an arbitrary block of bytes P of size S, with error checking,
   and include a terminating NUL byte.  P is of type 'void const *',
   to make it easier to use this with other mem* functions that return
   'void *', but since appending a NUL byte only makes sense on bytes,
   the return type is 'char *'.

   The terminating NUL makes it safe to use strlen or rawmemchr to
   check for embedded NUL; it also speeds up algorithms such as escape
   sequence processing on arbitrary memory, by making it always safe
   to read the byte after the escape character rather than having to
   check if each escape character is the last byte in the object.  */

char *
xmemdup0 (void const *p, size_t s)
{
  char *result = xcharalloc (s + 1);
  memcpy (result, p, s);
  result[s] = 0;
  return result;
}
