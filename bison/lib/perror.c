/* Print a message describing error code.
   Copyright (C) 2008-2015 Free Software Foundation, Inc.
   Written by Bruno Haible and Simon Josefsson.

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
#include <stdio.h>

#include <errno.h>
#include <stdlib.h>
#include <string.h>

#include "strerror-override.h"

/* Use the system functions, not the gnulib overrides in this file.  */
#undef fprintf

void
perror (const char *string)
{
  char stackbuf[STACKBUF_LEN];
  int ret;

  /* Our implementation guarantees that this will be a non-empty
     string, even if it returns EINVAL; and stackbuf should be sized
     large enough to avoid ERANGE.  */
  ret = strerror_r (errno, stackbuf, sizeof stackbuf);
  if (ret == ERANGE)
    abort ();

  if (string != NULL && *string != '\0')
    fprintf (stderr, "%s: %s\n", string, stackbuf);
  else
    fprintf (stderr, "%s\n", stackbuf);
}
