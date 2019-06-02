/* basename.c -- return the last element in a file name

   Copyright (C) 1990, 1998-2001, 2003-2006, 2009-2015 Free Software
   Foundation, Inc.

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

#include "dirname.h"

#include <string.h>
#include "xalloc.h"
#include "xstrndup.h"

char *
base_name (char const *name)
{
  char const *base = last_component (name);
  size_t length;

  /* If there is no last component, then name is a file system root or the
     empty string.  */
  if (! *base)
    return xstrndup (name, base_len (name));

  /* Collapse a sequence of trailing slashes into one.  */
  length = base_len (base);
  if (ISSLASH (base[length]))
    length++;

  /* On systems with drive letters, "a/b:c" must return "./b:c" rather
     than "b:c" to avoid confusion with a drive letter.  On systems
     with pure POSIX semantics, this is not an issue.  */
  if (FILE_SYSTEM_PREFIX_LEN (base))
    {
      char *p = xmalloc (length + 3);
      p[0] = '.';
      p[1] = '/';
      memcpy (p + 2, base, length);
      p[length + 2] = '\0';
      return p;
    }

  /* Finally, copy the basename.  */
  return xstrndup (base, length);
}
