/* stripslash.c -- remove redundant trailing slashes from a file name

   Copyright (C) 1990, 2001, 2003-2006, 2009-2015 Free Software Foundation,
   Inc.

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

#include <config.h>

#include "dirname.h"

/* Remove trailing slashes from FILE.  Return true if a trailing slash
   was removed.  This is useful when using file name completion from a
   shell that adds a "/" after directory names (such as tcsh and
   bash), because on symlinks to directories, several system calls
   have different semantics according to whether a trailing slash is
   present.  */

bool
strip_trailing_slashes (char *file)
{
  char *base = last_component (file);
  char *base_lim;
  bool had_slash;

  /* last_component returns "" for file system roots, but we need to turn
     "///" into "/".  */
  if (! *base)
    base = file;
  base_lim = base + base_len (base);
  had_slash = (*base_lim != '\0');
  *base_lim = '\0';
  return had_slash;
}
