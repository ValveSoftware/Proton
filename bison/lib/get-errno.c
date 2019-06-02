/* get-errno.c - get and set errno.

   Copyright (C) 2002, 2006, 2009-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Written by Paul Eggert.  */

#include <config.h>

#include "get-errno.h"

#include <errno.h>

/* Get and set errno.  A source file that needs to set or get errno,
   but doesn't need to test for specific errno values, can use these
   functions to avoid namespace pollution.  For example, a file that
   defines EQUAL should not include <errno.h>, since <errno.h> might
   define EQUAL; such a file can include <get-errno.h> instead.  */

int
get_errno (void)
{
  return errno;
}

void
set_errno (int e)
{
  errno = e;
}
