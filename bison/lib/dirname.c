/* dirname.c -- return all but the last element in a file name

   Copyright (C) 1990, 1998, 2000-2001, 2003-2006, 2009-2015 Free Software
   Foundation, Inc.

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

#include <stdlib.h>
#include <string.h>
#include "xalloc.h"

/* Just like mdir_name (dirname-lgpl.c), except, rather than
   returning NULL upon malloc failure, here, we report the
   "memory exhausted" condition and exit.  */

char *
dir_name (char const *file)
{
  char *result = mdir_name (file);
  if (!result)
    xalloc_die ();
  return result;
}
