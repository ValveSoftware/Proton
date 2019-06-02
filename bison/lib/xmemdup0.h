/* xmemdup0.h -- copy a block of arbitrary bytes, plus a trailing NUL

   Copyright (C) 2008-2015 Free Software Foundation, Inc.

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

#ifndef XMEMDUP_H_
# define XMEMDUP_H_

# include <stddef.h>


# ifdef __cplusplus
extern "C" {
# endif

/* This function is always triggered when memory is exhausted.
   It must be defined by the application, either explicitly
   or by using gnulib's xalloc-die module.  This is the
   function to call when one wants the program to die because of a
   memory allocation failure.  */
extern _Noreturn void xalloc_die (void);

char *xmemdup0 (void const *p, size_t s);

# ifdef __cplusplus
}
# endif

#endif /* !XMEMDUP0_H_ */
