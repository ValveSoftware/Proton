/* Create a pipe, with specific opening flags.
   Copyright (C) 2009-2015 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include <unistd.h>

#include <errno.h>
#include <fcntl.h>

#include "binary-io.h"
#include "verify.h"

#if GNULIB_defined_O_NONBLOCK
# include "nonblocking.h"
#endif

#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
/* Native Windows API.  */

# include <io.h>

#endif

int
pipe2 (int fd[2], int flags)
{
  /* Mingw _pipe() corrupts fd on failure; also, if we succeed at
     creating the pipe but later fail at changing fcntl, we want
     to leave fd unchanged: http://austingroupbugs.net/view.php?id=467  */
  int tmp[2];
  tmp[0] = fd[0];
  tmp[1] = fd[1];

#if HAVE_PIPE2
# undef pipe2
  /* Try the system call first, if it exists.  (We may be running with a glibc
     that has the function but with an older kernel that lacks it.)  */
  {
    /* Cache the information whether the system call really exists.  */
    static int have_pipe2_really; /* 0 = unknown, 1 = yes, -1 = no */
    if (have_pipe2_really >= 0)
      {
        int result = pipe2 (fd, flags);
        if (!(result < 0 && errno == ENOSYS))
          {
            have_pipe2_really = 1;
            return result;
          }
        have_pipe2_really = -1;
      }
  }
#endif

  /* Check the supported flags.  */
  if ((flags & ~(O_CLOEXEC | O_NONBLOCK | O_BINARY | O_TEXT)) != 0)
    {
      errno = EINVAL;
      return -1;
    }

#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
/* Native Windows API.  */

  if (_pipe (fd, 4096, flags & ~O_NONBLOCK) < 0)
    {
      fd[0] = tmp[0];
      fd[1] = tmp[1];
      return -1;
    }

  /* O_NONBLOCK handling.
     On native Windows platforms, O_NONBLOCK is defined by gnulib.  Use the
     functions defined by the gnulib module 'nonblocking'.  */
# if GNULIB_defined_O_NONBLOCK
  if (flags & O_NONBLOCK)
    {
      if (set_nonblocking_flag (fd[0], true) != 0
          || set_nonblocking_flag (fd[1], true) != 0)
        goto fail;
    }
# else
  {
    verify (O_NONBLOCK == 0);
  }
# endif

  return 0;

#else
/* Unix API.  */

  if (pipe (fd) < 0)
    return -1;

  /* POSIX <http://www.opengroup.org/onlinepubs/9699919799/functions/pipe.html>
     says that initially, the O_NONBLOCK and FD_CLOEXEC flags are cleared on
     both fd[0] and fd[1].  */

  /* O_NONBLOCK handling.
     On Unix platforms, O_NONBLOCK is defined by the system.  Use fcntl().  */
  if (flags & O_NONBLOCK)
    {
      int fcntl_flags;

      if ((fcntl_flags = fcntl (fd[1], F_GETFL, 0)) < 0
          || fcntl (fd[1], F_SETFL, fcntl_flags | O_NONBLOCK) == -1
          || (fcntl_flags = fcntl (fd[0], F_GETFL, 0)) < 0
          || fcntl (fd[0], F_SETFL, fcntl_flags | O_NONBLOCK) == -1)
        goto fail;
    }

  if (flags & O_CLOEXEC)
    {
      int fcntl_flags;

      if ((fcntl_flags = fcntl (fd[1], F_GETFD, 0)) < 0
          || fcntl (fd[1], F_SETFD, fcntl_flags | FD_CLOEXEC) == -1
          || (fcntl_flags = fcntl (fd[0], F_GETFD, 0)) < 0
          || fcntl (fd[0], F_SETFD, fcntl_flags | FD_CLOEXEC) == -1)
        goto fail;
    }

# if O_BINARY
  if (flags & O_BINARY)
    {
      set_binary_mode (fd[1], O_BINARY);
      set_binary_mode (fd[0], O_BINARY);
    }
  else if (flags & O_TEXT)
    {
      set_binary_mode (fd[1], O_TEXT);
      set_binary_mode (fd[0], O_TEXT);
    }
# endif

  return 0;

#endif

#if GNULIB_defined_O_NONBLOCK || \
  !((defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__)
 fail:
  {
    int saved_errno = errno;
    close (fd[0]);
    close (fd[1]);
    fd[0] = tmp[0];
    fd[1] = tmp[1];
    errno = saved_errno;
    return -1;
  }
#endif
}
