/* Open a stream to a file.
   Copyright (C) 2007-2015 Free Software Foundation, Inc.

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

/* Written by Bruno Haible <bruno@clisp.org>, 2007.  */

/* If the user's config.h happens to include <stdio.h>, let it include only
   the system's <stdio.h> here, so that orig_fopen doesn't recurse to
   rpl_fopen.  */
#define __need_FILE
#include <config.h>

/* Get the original definition of fopen.  It might be defined as a macro.  */
#include <stdio.h>
#undef __need_FILE

static FILE *
orig_fopen (const char *filename, const char *mode)
{
  return fopen (filename, mode);
}

/* Specification.  */
/* Write "stdio.h" here, not <stdio.h>, otherwise OSF/1 5.1 DTK cc eliminates
   this include because of the preliminary #include <stdio.h> above.  */
#include "stdio.h"

#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

FILE *
rpl_fopen (const char *filename, const char *mode)
{
#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
  if (strcmp (filename, "/dev/null") == 0)
    filename = "NUL";
#endif

#if FOPEN_TRAILING_SLASH_BUG
  /* If the filename ends in a slash and a mode that requires write access is
     specified, then fail.
     Rationale: POSIX <http://www.opengroup.org/susv3/basedefs/xbd_chap04.html>
     says that
       "A pathname that contains at least one non-slash character and that
        ends with one or more trailing slashes shall be resolved as if a
        single dot character ( '.' ) were appended to the pathname."
     and
       "The special filename dot shall refer to the directory specified by
        its predecessor."
     If the named file already exists as a directory, then if a mode that
     requires write access is specified, fopen() must fail because POSIX
     <http://www.opengroup.org/susv3/functions/fopen.html> says that it
     fails with errno = EISDIR in this case.
     If the named file does not exist or does not name a directory, then
     fopen() must fail since the file does not contain a '.' directory.  */
  {
    size_t len = strlen (filename);
    if (len > 0 && filename[len - 1] == '/')
      {
        int fd;
        struct stat statbuf;
        FILE *fp;

        if (mode[0] == 'w' || mode[0] == 'a')
          {
            errno = EISDIR;
            return NULL;
          }

        fd = open (filename, O_RDONLY);
        if (fd < 0)
          return NULL;

        if (fstat (fd, &statbuf) >= 0 && !S_ISDIR (statbuf.st_mode))
          {
            close (fd);
            errno = ENOTDIR;
            return NULL;
          }

        fp = fdopen (fd, mode);
        if (fp == NULL)
          {
            int saved_errno = errno;
            close (fd);
            errno = saved_errno;
          }
        return fp;
      }
  }
# endif

  return orig_fopen (filename, mode);
}
