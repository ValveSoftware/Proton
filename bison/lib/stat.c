/* Work around platform bugs in stat.
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

/* written by Eric Blake */

/* If the user's config.h happens to include <sys/stat.h>, let it include only
   the system's <sys/stat.h> here, so that orig_stat doesn't recurse to
   rpl_stat.  */
#define __need_system_sys_stat_h
#include <config.h>

/* Get the original definition of stat.  It might be defined as a macro.  */
#include <sys/types.h>
#include <sys/stat.h>
#undef __need_system_sys_stat_h

#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
# if _GL_WINDOWS_64_BIT_ST_SIZE
#  undef stat /* avoid warning on mingw64 with _FILE_OFFSET_BITS=64 */
#  define stat _stati64
#  define REPLACE_FUNC_STAT_DIR 1
#  undef REPLACE_FUNC_STAT_FILE
# elif REPLACE_FUNC_STAT_FILE
/* mingw64 has a broken stat() function, based on _stat(), in libmingwex.a.
   Bypass it.  */
#  define stat _stat
#  define REPLACE_FUNC_STAT_DIR 1
#  undef REPLACE_FUNC_STAT_FILE
# endif
#endif

static int
orig_stat (const char *filename, struct stat *buf)
{
  return stat (filename, buf);
}

/* Specification.  */
/* Write "sys/stat.h" here, not <sys/stat.h>, otherwise OSF/1 5.1 DTK cc
   eliminates this include because of the preliminary #include <sys/stat.h>
   above.  */
#include "sys/stat.h"

#include <errno.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#include "dosname.h"
#include "verify.h"

#if REPLACE_FUNC_STAT_DIR
# include "pathmax.h"
  /* The only known systems where REPLACE_FUNC_STAT_DIR is needed also
     have a constant PATH_MAX.  */
# ifndef PATH_MAX
#  error "Please port this replacement to your platform"
# endif
#endif

/* Store information about NAME into ST.  Work around bugs with
   trailing slashes.  Mingw has other bugs (such as st_ino always
   being 0 on success) which this wrapper does not work around.  But
   at least this implementation provides the ability to emulate fchdir
   correctly.  */

int
rpl_stat (char const *name, struct stat *st)
{
  int result = orig_stat (name, st);
#if REPLACE_FUNC_STAT_FILE
  /* Solaris 9 mistakenly succeeds when given a non-directory with a
     trailing slash.  */
  if (result == 0 && !S_ISDIR (st->st_mode))
    {
      size_t len = strlen (name);
      if (ISSLASH (name[len - 1]))
        {
          errno = ENOTDIR;
          return -1;
        }
    }
#endif /* REPLACE_FUNC_STAT_FILE */
#if REPLACE_FUNC_STAT_DIR

  if (result == -1 && errno == ENOENT)
    {
      /* Due to mingw's oddities, there are some directories (like
         c:\) where stat() only succeeds with a trailing slash, and
         other directories (like c:\windows) where stat() only
         succeeds without a trailing slash.  But we want the two to be
         synonymous, since chdir() manages either style.  Likewise, Mingw also
         reports ENOENT for names longer than PATH_MAX, when we want
         ENAMETOOLONG, and for stat("file/"), when we want ENOTDIR.
         Fortunately, mingw PATH_MAX is small enough for stack
         allocation.  */
      char fixed_name[PATH_MAX + 1] = {0};
      size_t len = strlen (name);
      bool check_dir = false;
      verify (PATH_MAX <= 4096);
      if (PATH_MAX <= len)
        errno = ENAMETOOLONG;
      else if (len)
        {
          strcpy (fixed_name, name);
          if (ISSLASH (fixed_name[len - 1]))
            {
              check_dir = true;
              while (len && ISSLASH (fixed_name[len - 1]))
                fixed_name[--len] = '\0';
              if (!len)
                fixed_name[0] = '/';
            }
          else
            fixed_name[len++] = '/';
          result = orig_stat (fixed_name, st);
          if (result == 0 && check_dir && !S_ISDIR (st->st_mode))
            {
              result = -1;
              errno = ENOTDIR;
            }
        }
    }
#endif /* REPLACE_FUNC_STAT_DIR */
  return result;
}
