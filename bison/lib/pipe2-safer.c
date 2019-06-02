/* Invoke pipe2, but avoid some glitches.
   Copyright (C) 2005-2006, 2009-2015 Free Software Foundation, Inc.

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

/* Written by Eric Blake.  */

#include <config.h>

/* Specification.  */
#include "unistd-safer.h"

#include <unistd.h>
#include <errno.h>

/* Like pipe2, but ensure that neither of the file descriptors is
   STDIN_FILENO, STDOUT_FILENO, or STDERR_FILENO.  */

int
pipe2_safer (int fd[2], int flags)
{
  /* This is a generalization of the pipe_safer implementation.  */
  if (pipe2 (fd, flags) == 0)
    {
      int i;
      for (i = 0; i < 2; i++)
        {
          fd[i] = fd_safer_flag (fd[i], flags);
          if (fd[i] < 0)
            {
              int e = errno;
              close (fd[1 - i]);
              errno = e;
              return -1;
            }
        }

      return 0;
    }
  return -1;
}
