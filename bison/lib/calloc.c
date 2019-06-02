/* calloc() function that is glibc compatible.
   This wrapper function is required at least on Tru64 UNIX 5.1 and mingw.
   Copyright (C) 2004-2007, 2009-2015 Free Software Foundation, Inc.

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

/* written by Jim Meyering and Bruno Haible */

#include <config.h>
/* Only the AC_FUNC_CALLOC macro defines 'calloc' already in config.h.  */
#ifdef calloc
# define NEED_CALLOC_GNU 1
# undef calloc
/* Whereas the gnulib module 'calloc-gnu' defines HAVE_CALLOC_GNU.  */
#elif GNULIB_CALLOC_GNU && !HAVE_CALLOC_GNU
# define NEED_CALLOC_GNU 1
#endif

/* Specification.  */
#include <stdlib.h>

#include <errno.h>

/* Call the system's calloc below.  */
#undef calloc

/* Allocate and zero-fill an NxS-byte block of memory from the heap.
   If N or S is zero, allocate and zero-fill a 1-byte block.  */

void *
rpl_calloc (size_t n, size_t s)
{
  void *result;

#if NEED_CALLOC_GNU
  if (n == 0 || s == 0)
    {
      n = 1;
      s = 1;
    }
  else
    {
      /* Defend against buggy calloc implementations that mishandle
         size_t overflow.  */
      size_t bytes = n * s;
      if (bytes / s != n)
        {
          errno = ENOMEM;
          return NULL;
        }
    }
#endif

  result = calloc (n, s);

#if !HAVE_CALLOC_POSIX
  if (result == NULL)
    errno = ENOMEM;
#endif

  return result;
}
