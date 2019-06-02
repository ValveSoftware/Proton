/* Work around unlink bugs.

   Copyright (C) 2009-2015 Free Software Foundation, Inc.

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

#include <unistd.h>

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "dosname.h"

#undef unlink

/* Remove file NAME.
   Return 0 if successful, -1 if not.  */

int
rpl_unlink (char const *name)
{
  /* Work around Solaris 9 bug where unlink("file/") succeeds.  */
  size_t len = strlen (name);
  int result = 0;
  if (len && ISSLASH (name[len - 1]))
    {
      /* We can't unlink(2) something if it doesn't exist.  If it does
         exist, then it resolved to a directory, due to the trailing
         slash, and POSIX requires that the unlink attempt to remove
         that directory (which would leave the symlink dangling).
         Unfortunately, Solaris 9 is one of the platforms where the
         root user can unlink directories, and we don't want to
         cripple this behavior on real directories, even if it is
         seldom needed (at any rate, it's nicer to let coreutils'
         unlink(1) give the correct errno for non-root users).  But we
         don't know whether name was an actual directory, or a symlink
         to a directory; and due to the bug of ignoring trailing
         slash, Solaris 9 would end up successfully unlinking the
         symlink instead of the directory.  Technically, we could use
         realpath to find the canonical directory name to attempt
         deletion on.  But that is a lot of work for a corner case; so
         we instead just use an lstat on the shortened name, and
         reject symlinks with trailing slashes.  The root user of
         unlink(1) will just have to live with the rule that they
         can't delete a directory via a symlink.  */
      struct stat st;
      result = lstat (name, &st);
      if (result == 0)
        {
          /* Trailing NUL will overwrite the trailing slash.  */
          char *short_name = malloc (len);
          if (!short_name)
            {
              errno = EPERM;
              return -1;
            }
          memcpy (short_name, name, len);
          while (len && ISSLASH (short_name[len - 1]))
            short_name[--len] = '\0';
          if (len && (lstat (short_name, &st) || S_ISLNK (st.st_mode)))
            {
              free (short_name);
              errno = EPERM;
              return -1;
            }
          free (short_name);
        }
    }
  if (!result)
    {
#if UNLINK_PARENT_BUG
      if (len >= 2 && name[len - 1] == '.' && name[len - 2] == '.'
          && (len == 2 || ISSLASH (name[len - 3])))
        {
          errno = EISDIR; /* could also use EPERM */
          return -1;
        }
#endif
      result = unlink (name);
    }
  return result;
}
