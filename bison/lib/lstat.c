/* Work around a bug of lstat on some systems

   Copyright (C) 1997-2006, 2008-2015 Free Software Foundation, Inc.

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

/* written by Jim Meyering */

/* If the user's config.h happens to include <sys/stat.h>, let it include only
   the system's <sys/stat.h> here, so that orig_lstat doesn't recurse to
   rpl_lstat.  */
#define __need_system_sys_stat_h
#include <config.h>

#if !HAVE_LSTAT
/* On systems that lack symlinks, our replacement <sys/stat.h> already
   defined lstat as stat, so there is nothing further to do other than
   avoid an empty file.  */
typedef int dummy;
#else /* HAVE_LSTAT */

/* Get the original definition of lstat.  It might be defined as a macro.  */
# include <sys/types.h>
# include <sys/stat.h>
# undef __need_system_sys_stat_h

static int
orig_lstat (const char *filename, struct stat *buf)
{
  return lstat (filename, buf);
}

/* Specification.  */
/* Write "sys/stat.h" here, not <sys/stat.h>, otherwise OSF/1 5.1 DTK cc
   eliminates this include because of the preliminary #include <sys/stat.h>
   above.  */
# include "sys/stat.h"

# include <string.h>
# include <errno.h>

/* lstat works differently on Linux and Solaris systems.  POSIX (see
   "pathname resolution" in the glossary) requires that programs like
   'ls' take into consideration the fact that FILE has a trailing slash
   when FILE is a symbolic link.  On Linux and Solaris 10 systems, the
   lstat function already has the desired semantics (in treating
   'lstat ("symlink/", sbuf)' just like 'lstat ("symlink/.", sbuf)',
   but on Solaris 9 and earlier it does not.

   If FILE has a trailing slash and specifies a symbolic link,
   then use stat() to get more info on the referent of FILE.
   If the referent is a non-directory, then set errno to ENOTDIR
   and return -1.  Otherwise, return stat's result.  */

int
rpl_lstat (const char *file, struct stat *sbuf)
{
  size_t len;
  int lstat_result = orig_lstat (file, sbuf);

  if (lstat_result != 0)
    return lstat_result;

  /* This replacement file can blindly check against '/' rather than
     using the ISSLASH macro, because all platforms with '\\' either
     lack symlinks (mingw) or have working lstat (cygwin) and thus do
     not compile this file.  0 len should have already been filtered
     out above, with a failure return of ENOENT.  */
  len = strlen (file);
  if (file[len - 1] != '/' || S_ISDIR (sbuf->st_mode))
    return 0;

  /* At this point, a trailing slash is only permitted on
     symlink-to-dir; but it should have found information on the
     directory, not the symlink.  Call stat() to get info about the
     link's referent.  Our replacement stat guarantees valid results,
     even if the symlink is not pointing to a directory.  */
  if (!S_ISLNK (sbuf->st_mode))
    {
      errno = ENOTDIR;
      return -1;
    }
  return stat (file, sbuf);
}

#endif /* HAVE_LSTAT */
