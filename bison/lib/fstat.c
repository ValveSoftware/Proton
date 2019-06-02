/* fstat() replacement.
   Copyright (C) 2011-2015 Free Software Foundation, Inc.

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

/* If the user's config.h happens to include <sys/stat.h>, let it include only
   the system's <sys/stat.h> here, so that orig_fstat doesn't recurse to
   rpl_fstat.  */
#define __need_system_sys_stat_h
#include <config.h>

/* Get the original definition of fstat.  It might be defined as a macro.  */
#include <sys/types.h>
#include <sys/stat.h>
#if _GL_WINDOWS_64_BIT_ST_SIZE
# undef stat /* avoid warning on mingw64 with _FILE_OFFSET_BITS=64 */
# define stat _stati64
# undef fstat /* avoid warning on mingw64 with _FILE_OFFSET_BITS=64 */
# define fstat _fstati64
#endif
#undef __need_system_sys_stat_h

static int
orig_fstat (int fd, struct stat *buf)
{
  return fstat (fd, buf);
}

/* Specification.  */
/* Write "sys/stat.h" here, not <sys/stat.h>, otherwise OSF/1 5.1 DTK cc
   eliminates this include because of the preliminary #include <sys/stat.h>
   above.  */
#include "sys/stat.h"

#include <errno.h>
#include <unistd.h>

#if HAVE_MSVC_INVALID_PARAMETER_HANDLER
# include "msvc-inval.h"
#endif

#if HAVE_MSVC_INVALID_PARAMETER_HANDLER
static int
fstat_nothrow (int fd, struct stat *buf)
{
  int result;

  TRY_MSVC_INVAL
    {
      result = orig_fstat (fd, buf);
    }
  CATCH_MSVC_INVAL
    {
      result = -1;
      errno = EBADF;
    }
  DONE_MSVC_INVAL;

  return result;
}
#else
# define fstat_nothrow orig_fstat
#endif

int
rpl_fstat (int fd, struct stat *buf)
{
#if REPLACE_FCHDIR && REPLACE_OPEN_DIRECTORY
  /* Handle the case when rpl_open() used a dummy file descriptor to work
     around an open() that can't normally visit directories.  */
  const char *name = _gl_directory_name (fd);
  if (name != NULL)
    return stat (name, buf);
#endif

  return fstat_nothrow (fd, buf);
}
