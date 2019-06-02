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

#include <errno.h>
#include <stdlib.h>
#include <string.h>

#include "filename.h"

/* Concatenate a directory filename, a relative filename and an optional
   suffix.  The directory may end with the directory separator.  The second
   argument may not start with the directory separator (it is relative).
   Return a freshly allocated filename.  Return NULL and set errno
   upon memory allocation failure.  */
char *
concatenated_filename (const char *directory, const char *filename,
                       const char *suffix)
{
  char *result;
  char *p;

  if (strcmp (directory, ".") == 0)
    {
      /* No need to prepend the directory.  */
      result = (char *) malloc (strlen (filename)
                                + (suffix != NULL ? strlen (suffix) : 0)
                                + 1);
      if (result == NULL)
        return NULL; /* errno is set here */
      p = result;
    }
  else
    {
      size_t directory_len = strlen (directory);
      int need_slash =
        (directory_len > FILE_SYSTEM_PREFIX_LEN (directory)
         && !ISSLASH (directory[directory_len - 1]));
      result = (char *) malloc (directory_len + need_slash
                                + strlen (filename)
                                + (suffix != NULL ? strlen (suffix) : 0)
                                + 1);
      if (result == NULL)
        return NULL; /* errno is set here */
      memcpy (result, directory, directory_len);
      p = result + directory_len;
      if (need_slash)
        *p++ = '/';
    }
  p = stpcpy (p, filename);
  if (suffix != NULL)
    stpcpy (p, suffix);
  return result;
}
