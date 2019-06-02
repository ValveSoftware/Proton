/* dirname.c -- return all but the last element in a file name

   Copyright (C) 1990, 1998, 2000-2001, 2003-2006, 2009-2015 Free Software
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

#include <stdlib.h>
#include <string.h>

/* Return the length of the prefix of FILE that will be used by
   dir_name.  If FILE is in the working directory, this returns zero
   even though 'dir_name (FILE)' will return ".".  Works properly even
   if there are trailing slashes (by effectively ignoring them).  */

size_t
dir_len (char const *file)
{
  size_t prefix_length = FILE_SYSTEM_PREFIX_LEN (file);
  size_t length;

  /* Advance prefix_length beyond important leading slashes.  */
  prefix_length += (prefix_length != 0
                    ? (FILE_SYSTEM_DRIVE_PREFIX_CAN_BE_RELATIVE
                       && ISSLASH (file[prefix_length]))
                    : (ISSLASH (file[0])
                       ? ((DOUBLE_SLASH_IS_DISTINCT_ROOT
                           && ISSLASH (file[1]) && ! ISSLASH (file[2])
                           ? 2 : 1))
                       : 0));

  /* Strip the basename and any redundant slashes before it.  */
  for (length = last_component (file) - file;
       prefix_length < length; length--)
    if (! ISSLASH (file[length - 1]))
      break;
  return length;
}


/* In general, we can't use the builtin 'dirname' function if available,
   since it has different meanings in different environments.
   In some environments the builtin 'dirname' modifies its argument.

   Return the leading directories part of FILE, allocated with malloc.
   Works properly even if there are trailing slashes (by effectively
   ignoring them).  Return NULL on failure.

   If lstat (FILE) would succeed, then { chdir (dir_name (FILE));
   lstat (base_name (FILE)); } will access the same file.  Likewise,
   if the sequence { chdir (dir_name (FILE));
   rename (base_name (FILE), "foo"); } succeeds, you have renamed FILE
   to "foo" in the same directory FILE was in.  */

char *
mdir_name (char const *file)
{
  size_t length = dir_len (file);
  bool append_dot = (length == 0
                     || (FILE_SYSTEM_DRIVE_PREFIX_CAN_BE_RELATIVE
                         && length == FILE_SYSTEM_PREFIX_LEN (file)
                         && file[2] != '\0' && ! ISSLASH (file[2])));
  char *dir = malloc (length + append_dot + 1);
  if (!dir)
    return NULL;
  memcpy (dir, file, length);
  if (append_dot)
    dir[length++] = '.';
  dir[length] = '\0';
  return dir;
}
