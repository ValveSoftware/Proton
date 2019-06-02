/* Provide file descriptor control.

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

/* Written by Eric Blake <ebb9@byu.net>.  */

#include <config.h>

/* Specification.  */
#include <fcntl.h>

#include <errno.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

#if !HAVE_FCNTL
# define rpl_fcntl fcntl
#endif
#undef fcntl

#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
/* Get declarations of the native Windows API functions.  */
# define WIN32_LEAN_AND_MEAN
# include <windows.h>

/* Get _get_osfhandle.  */
# include "msvc-nothrow.h"

/* Upper bound on getdtablesize().  See lib/getdtablesize.c.  */
# define OPEN_MAX_MAX 0x10000

/* Duplicate OLDFD into the first available slot of at least NEWFD,
   which must be positive, with FLAGS determining whether the duplicate
   will be inheritable.  */
static int
dupfd (int oldfd, int newfd, int flags)
{
  /* Mingw has no way to create an arbitrary fd.  Iterate until all
     file descriptors less than newfd are filled up.  */
  HANDLE curr_process = GetCurrentProcess ();
  HANDLE old_handle = (HANDLE) _get_osfhandle (oldfd);
  unsigned char fds_to_close[OPEN_MAX_MAX / CHAR_BIT];
  unsigned int fds_to_close_bound = 0;
  int result;
  BOOL inherit = flags & O_CLOEXEC ? FALSE : TRUE;
  int mode;

  if (newfd < 0 || getdtablesize () <= newfd)
    {
      errno = EINVAL;
      return -1;
    }
  if (old_handle == INVALID_HANDLE_VALUE
      || (mode = setmode (oldfd, O_BINARY)) == -1)
    {
      /* oldfd is not open, or is an unassigned standard file
         descriptor.  */
      errno = EBADF;
      return -1;
    }
  setmode (oldfd, mode);
  flags |= mode;

  for (;;)
    {
      HANDLE new_handle;
      int duplicated_fd;
      unsigned int index;

      if (!DuplicateHandle (curr_process,           /* SourceProcessHandle */
                            old_handle,             /* SourceHandle */
                            curr_process,           /* TargetProcessHandle */
                            (PHANDLE) &new_handle,  /* TargetHandle */
                            (DWORD) 0,              /* DesiredAccess */
                            inherit,                /* InheritHandle */
                            DUPLICATE_SAME_ACCESS)) /* Options */
        {
          switch (GetLastError ())
            {
              case ERROR_TOO_MANY_OPEN_FILES:
                errno = EMFILE;
                break;
              case ERROR_INVALID_HANDLE:
              case ERROR_INVALID_TARGET_HANDLE:
              case ERROR_DIRECT_ACCESS_HANDLE:
                errno = EBADF;
                break;
              case ERROR_INVALID_PARAMETER:
              case ERROR_INVALID_FUNCTION:
              case ERROR_INVALID_ACCESS:
                errno = EINVAL;
                break;
              default:
                errno = EACCES;
                break;
            }
          result = -1;
          break;
        }
      duplicated_fd = _open_osfhandle ((intptr_t) new_handle, flags);
      if (duplicated_fd < 0)
        {
          CloseHandle (new_handle);
          result = -1;
          break;
        }
      if (newfd <= duplicated_fd)
        {
          result = duplicated_fd;
          break;
        }

      /* Set the bit duplicated_fd in fds_to_close[].  */
      index = (unsigned int) duplicated_fd / CHAR_BIT;
      if (fds_to_close_bound <= index)
        {
          if (sizeof fds_to_close <= index)
            /* Need to increase OPEN_MAX_MAX.  */
            abort ();
          memset (fds_to_close + fds_to_close_bound, '\0',
                  index + 1 - fds_to_close_bound);
          fds_to_close_bound = index + 1;
        }
      fds_to_close[index] |= 1 << ((unsigned int) duplicated_fd % CHAR_BIT);
    }

  /* Close the previous fds that turned out to be too small.  */
  {
    int saved_errno = errno;
    unsigned int duplicated_fd;

    for (duplicated_fd = 0;
         duplicated_fd < fds_to_close_bound * CHAR_BIT;
         duplicated_fd++)
      if ((fds_to_close[duplicated_fd / CHAR_BIT]
           >> (duplicated_fd % CHAR_BIT))
          & 1)
        close (duplicated_fd);

    errno = saved_errno;
  }

# if REPLACE_FCHDIR
  if (0 <= result)
    result = _gl_register_dup (oldfd, result);
# endif
  return result;
}
#endif /* W32 */

/* Perform the specified ACTION on the file descriptor FD, possibly
   using the argument ARG further described below.  This replacement
   handles the following actions, and forwards all others on to the
   native fcntl.  An unrecognized ACTION returns -1 with errno set to
   EINVAL.

   F_DUPFD - duplicate FD, with int ARG being the minimum target fd.
   If successful, return the duplicate, which will be inheritable;
   otherwise return -1 and set errno.

   F_DUPFD_CLOEXEC - duplicate FD, with int ARG being the minimum
   target fd.  If successful, return the duplicate, which will not be
   inheritable; otherwise return -1 and set errno.

   F_GETFD - ARG need not be present.  If successful, return a
   non-negative value containing the descriptor flags of FD (only
   FD_CLOEXEC is portable, but other flags may be present); otherwise
   return -1 and set errno.  */

int
rpl_fcntl (int fd, int action, /* arg */...)
{
  va_list arg;
  int result = -1;
  va_start (arg, action);
  switch (action)
    {

#if !HAVE_FCNTL
    case F_DUPFD:
      {
        int target = va_arg (arg, int);
        result = dupfd (fd, target, 0);
        break;
      }
#elif FCNTL_DUPFD_BUGGY || REPLACE_FCHDIR
    case F_DUPFD:
      {
        int target = va_arg (arg, int);
        /* Detect invalid target; needed for cygwin 1.5.x.  */
        if (target < 0 || getdtablesize () <= target)
          errno = EINVAL;
        else
          {
            /* Haiku alpha 2 loses fd flags on original.  */
            int flags = fcntl (fd, F_GETFD);
            if (flags < 0)
              {
                result = -1;
                break;
              }
            result = fcntl (fd, action, target);
            if (0 <= result && fcntl (fd, F_SETFD, flags) == -1)
              {
                int saved_errno = errno;
                close (result);
                result = -1;
                errno = saved_errno;
              }
# if REPLACE_FCHDIR
            if (0 <= result)
              result = _gl_register_dup (fd, result);
# endif
          }
        break;
      } /* F_DUPFD */
#endif /* FCNTL_DUPFD_BUGGY || REPLACE_FCHDIR */

    case F_DUPFD_CLOEXEC:
      {
        int target = va_arg (arg, int);

#if !HAVE_FCNTL
        result = dupfd (fd, target, O_CLOEXEC);
        break;
#else /* HAVE_FCNTL */
        /* Try the system call first, if the headers claim it exists
           (that is, if GNULIB_defined_F_DUPFD_CLOEXEC is 0), since we
           may be running with a glibc that has the macro but with an
           older kernel that does not support it.  Cache the
           information on whether the system call really works, but
           avoid caching failure if the corresponding F_DUPFD fails
           for any reason.  0 = unknown, 1 = yes, -1 = no.  */
        static int have_dupfd_cloexec = GNULIB_defined_F_DUPFD_CLOEXEC ? -1 : 0;
        if (0 <= have_dupfd_cloexec)
          {
            result = fcntl (fd, action, target);
            if (0 <= result || errno != EINVAL)
              {
                have_dupfd_cloexec = 1;
# if REPLACE_FCHDIR
                if (0 <= result)
                  result = _gl_register_dup (fd, result);
# endif
              }
            else
              {
                result = rpl_fcntl (fd, F_DUPFD, target);
                if (result < 0)
                  break;
                have_dupfd_cloexec = -1;
              }
          }
        else
          result = rpl_fcntl (fd, F_DUPFD, target);
        if (0 <= result && have_dupfd_cloexec == -1)
          {
            int flags = fcntl (result, F_GETFD);
            if (flags < 0 || fcntl (result, F_SETFD, flags | FD_CLOEXEC) == -1)
              {
                int saved_errno = errno;
                close (result);
                errno = saved_errno;
                result = -1;
              }
          }
        break;
#endif /* HAVE_FCNTL */
      } /* F_DUPFD_CLOEXEC */

#if !HAVE_FCNTL
    case F_GETFD:
      {
# if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
        HANDLE handle = (HANDLE) _get_osfhandle (fd);
        DWORD flags;
        if (handle == INVALID_HANDLE_VALUE
            || GetHandleInformation (handle, &flags) == 0)
          errno = EBADF;
        else
          result = (flags & HANDLE_FLAG_INHERIT) ? 0 : FD_CLOEXEC;
# else /* !W32 */
        /* Use dup2 to reject invalid file descriptors.  No way to
           access this information, so punt.  */
        if (0 <= dup2 (fd, fd))
          result = 0;
# endif /* !W32 */
        break;
      } /* F_GETFD */
#endif /* !HAVE_FCNTL */

      /* Implementing F_SETFD on mingw is not trivial - there is no
         API for changing the O_NOINHERIT bit on an fd, and merely
         changing the HANDLE_FLAG_INHERIT bit on the underlying handle
         can lead to odd state.  It may be possible by duplicating the
         handle, using _open_osfhandle with the right flags, then
         using dup2 to move the duplicate onto the original, but that
         is not supported for now.  */

    default:
      {
#if HAVE_FCNTL
        void *p = va_arg (arg, void *);
        result = fcntl (fd, action, p);
#else
        errno = EINVAL;
#endif
        break;
      }
    }
  va_end (arg);
  return result;
}
