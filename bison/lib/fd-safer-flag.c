/* Adjust a file descriptor result so that it avoids clobbering
   STD{IN,OUT,ERR}_FILENO, with specific flags.

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

/* Written by Paul Eggert and Eric Blake.  */

#include <config.h>

/* Specification.  */
#include "unistd-safer.h"

#include <errno.h>
#include <unistd.h>

/* Return FD, unless FD would be a copy of standard input, output, or
   error; in that case, return a duplicate of FD, closing FD.  If FLAG
   contains O_CLOEXEC, the returned FD will have close-on-exec
   semantics.  On failure to duplicate, close FD, set errno, and
   return -1.  Preserve errno if FD is negative, so that the caller
   can always inspect errno when the returned value is negative.

   This function is usefully wrapped around functions that return file
   descriptors, e.g., fd_safer_flag (open ("file", O_RDONLY | flag), flag).  */

int
fd_safer_flag (int fd, int flag)
{
  if (STDIN_FILENO <= fd && fd <= STDERR_FILENO)
    {
      int f = dup_safer_flag (fd, flag);
      int e = errno;
      close (fd);
      errno = e;
      fd = f;
    }

  return fd;
}
