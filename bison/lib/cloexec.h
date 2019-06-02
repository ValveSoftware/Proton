/* closexec.c - set or clear the close-on-exec descriptor flag

   Copyright (C) 2004, 2009-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <stdbool.h>

/* Set the 'FD_CLOEXEC' flag of DESC if VALUE is true,
   or clear the flag if VALUE is false.
   Return 0 on success, or -1 on error with 'errno' set.

   Note that on MingW, this function does NOT protect DESC from being
   inherited into spawned children.  Instead, either use dup_cloexec
   followed by closing the original DESC, or use interfaces such as
   open or pipe2 that accept flags like O_CLOEXEC to create DESC
   non-inheritable in the first place.  */

int set_cloexec_flag (int desc, bool value);

/* Duplicates a file handle FD, while marking the copy to be closed
   prior to exec or spawn.  Returns -1 and sets errno if FD could not
   be duplicated.  */

int dup_cloexec (int fd);
