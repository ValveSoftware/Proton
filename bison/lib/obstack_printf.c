/* Formatted output to obstacks.
   Copyright (C) 2008-2015 Free Software Foundation, Inc.

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

#include <config.h>

/* Specification.  */
#include <stdio.h>

#include "obstack.h"
#include "vasnprintf.h"

#include <errno.h>
#include <stdarg.h>
#include <stdlib.h>

/* Grow an obstack with formatted output.  Return the number of bytes
   added to OBS.  No trailing nul byte is added, and the object should
   be closed with obstack_finish before use.

   Upon memory allocation error, call obstack_alloc_failed_handler.
   Upon other error, return -1.  */
int
obstack_printf (struct obstack *obs, const char *format, ...)
{
  va_list args;
  int result;

  va_start (args, format);
  result = obstack_vprintf (obs, format, args);
  va_end (args);
  return result;
}

/* Grow an obstack with formatted output.  Return the number of bytes
   added to OBS.  No trailing nul byte is added, and the object should
   be closed with obstack_finish before use.

   Upon memory allocation error, call obstack_alloc_failed_handler.
   Upon other error, return -1.  */
int
obstack_vprintf (struct obstack *obs, const char *format, va_list args)
{
  /* If we are close to the end of the current obstack chunk, use a
     stack-allocated buffer and copy, to reduce the likelihood of a
     small-size malloc.  Otherwise, print directly into the
     obstack.  */
  enum { CUTOFF = 1024 };
  char buf[CUTOFF];
  char *base = obstack_next_free (obs);
  size_t len = obstack_room (obs);
  char *str;

  if (len < CUTOFF)
    {
      base = buf;
      len = CUTOFF;
    }
  str = vasnprintf (base, &len, format, args);
  if (!str)
    {
      if (errno == ENOMEM)
        obstack_alloc_failed_handler ();
      return -1;
    }
  if (str == base && str != buf)
    /* The output was already computed in place, but we need to
       account for its size.  */
    obstack_blank_fast (obs, len);
  else
    {
      /* The output exceeded available obstack space or we used buf;
         copy the resulting string.  */
      obstack_grow (obs, str, len);
      if (str != buf)
        free (str);
    }
  return len;
}
