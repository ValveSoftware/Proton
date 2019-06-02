/* Construct a full filename from a directory and a relative filename.
   Copyright (C) 2001-2004, 2006-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 3 of the License, or any
   later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Written by Bruno Haible <haible@clisp.cons.org>.  */

#include <config.h>

/* Specification.  */
#include "concat-filename.h"

#include "xalloc.h"

/* Concatenate a directory filename, a relative filename and an optional
   suffix.  The directory may end with the directory separator.  The second
   argument may not start with the directory separator (it is relative).
   Return a freshly allocated filename.  */
char *
xconcatenated_filename (const char *directory, const char *filename,
                        const char *suffix)
{
  char *result;

  result = concatenated_filename (directory, filename, suffix);
  if (result == NULL)
    xalloc_die ();

  return result;
}
