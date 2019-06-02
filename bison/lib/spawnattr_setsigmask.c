/* Copyright (C) 2000, 2009-2015 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

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

/* Specification.  */
#include <spawn.h>

#include <string.h>

/* Set signal mask for the new process in ATTR to SIGMASK.  */
int
posix_spawnattr_setsigmask (posix_spawnattr_t *attr,
                            const sigset_t *sigmask)
{
  /* Copy the sigset_t data to the user buffer.  */
  memcpy (&attr->_ss, sigmask, sizeof (sigset_t));

  return 0;
}
