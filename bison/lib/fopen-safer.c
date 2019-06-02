/* Invoke fopen, but avoid some glitches.

   Copyright (C) 2001, 2004-2006, 2009-2015 Free Software Foundation, Inc.

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

/* Written by Paul Eggert.  */

#include <config.h>

#include "stdio-safer.h"

#include <errno.h>
#include <unistd.h>
#include "unistd-safer.h"

/* Like fopen, but do not return stdin, stdout, or stderr.  */

FILE *
fopen_safer (char const *file, char const *mode)
{
  FILE *fp = fopen (file, mode);

  if (fp)
    {
      int fd = fileno (fp);

      if (0 <= fd && fd <= STDERR_FILENO)
        {
          int f = dup_safer (fd);

          if (f < 0)
            {
              int e = errno;
              fclose (fp);
              errno = e;
              return NULL;
            }

          if (fclose (fp) != 0
              || ! (fp = fdopen (f, mode)))
            {
              int e = errno;
              close (f);
              errno = e;
              return NULL;
            }
        }
    }

  return fp;
}
