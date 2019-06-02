/* Duplicate an open file descriptor to a specified file descriptor.

   Copyright (C) 1999, 2004-2007, 2009-2015 Free Software Foundation, Inc.

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

/* written by Paul Eggert */

#include <config.h>

/* Specification.  */
#include <unistd.h>

#include <errno.h>
#include <fcntl.h>

#if HAVE_DUP2

# undef dup2

# if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__

/* Get declarations of the native Windows API functions.  */
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>

#  include "msvc-inval.h"

/* Get _get_osfhandle.  */
#  include "msvc-nothrow.h"

static int
ms_windows_dup2 (int fd, int desired_fd)
{
  int result;

  /* If fd is closed, mingw hangs on dup2 (fd, fd).  If fd is open,
     dup2 (fd, fd) returns 0, but all further attempts to use fd in
     future dup2 calls will hang.  */
  if (fd == desired_fd)
    {
      if ((HANDLE) _get_osfhandle (fd) == INVALID_HANDLE_VALUE)
        {
          errno = EBADF;
          return -1;
        }
      return fd;
    }

  /* Wine 1.0.1 return 0 when desired_fd is negative but not -1:
     http://bugs.winehq.org/show_bug.cgi?id=21289 */
  if (desired_fd < 0)
    {
      errno = EBADF;
      return -1;
    }

  TRY_MSVC_INVAL
    {
      result = dup2 (fd, desired_fd);
    }
  CATCH_MSVC_INVAL
    {
      errno = EBADF;
      result = -1;
    }
  DONE_MSVC_INVAL;

  if (result == 0)
    result = desired_fd;

  return result;
}

#  define dup2 ms_windows_dup2

# endif

int
rpl_dup2 (int fd, int desired_fd)
{
  int result;

# ifdef F_GETFL
  /* On Linux kernels 2.6.26-2.6.29, dup2 (fd, fd) returns -EBADF.
     On Cygwin 1.5.x, dup2 (1, 1) returns 0.
     On Cygwin 1.7.17, dup2 (1, -1) dumps core.
     On Cygwin 1.7.25, dup2 (1, 256) can dump core.
     On Haiku, dup2 (fd, fd) mistakenly clears FD_CLOEXEC.  */
#  if HAVE_SETDTABLESIZE
  setdtablesize (desired_fd + 1);
#  endif
  if (desired_fd < 0)
    fd = desired_fd;
  if (fd == desired_fd)
    return fcntl (fd, F_GETFL) == -1 ? -1 : fd;
# endif

  result = dup2 (fd, desired_fd);

  /* Correct an errno value on FreeBSD 6.1 and Cygwin 1.5.x.  */
  if (result == -1 && errno == EMFILE)
    errno = EBADF;
# if REPLACE_FCHDIR
  if (fd != desired_fd && result != -1)
    result = _gl_register_dup (fd, result);
# endif
  return result;
}

#else /* !HAVE_DUP2 */

/* On older platforms, dup2 did not exist.  */

# ifndef F_DUPFD
static int
dupfd (int fd, int desired_fd)
{
  int duplicated_fd = dup (fd);
  if (duplicated_fd < 0 || duplicated_fd == desired_fd)
    return duplicated_fd;
  else
    {
      int r = dupfd (fd, desired_fd);
      int e = errno;
      close (duplicated_fd);
      errno = e;
      return r;
    }
}
# endif

int
dup2 (int fd, int desired_fd)
{
  int result = fcntl (fd, F_GETFL) < 0 ? -1 : fd;
  if (result == -1 || fd == desired_fd)
    return result;
  close (desired_fd);
# ifdef F_DUPFD
  result = fcntl (fd, F_DUPFD, desired_fd);
#  if REPLACE_FCHDIR
  if (0 <= result)
    result = _gl_register_dup (fd, result);
#  endif
# else
  result = dupfd (fd, desired_fd);
# endif
  if (result == -1 && (errno == EMFILE || errno == EINVAL))
    errno = EBADF;
  return result;
}
#endif /* !HAVE_DUP2 */
