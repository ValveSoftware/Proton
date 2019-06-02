/* size_max.h -- declare SIZE_MAX through system headers
   Copyright (C) 2005-2006, 2009-2015 Free Software Foundation, Inc.
   Written by Simon Josefsson.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef GNULIB_SIZE_MAX_H
#define GNULIB_SIZE_MAX_H

/* Get SIZE_MAX declaration on systems like Solaris 7/8/9.  */
# include <limits.h>
/* Get SIZE_MAX declaration on systems like glibc 2.  */
# if HAVE_STDINT_H
#  include <stdint.h>
# endif
/* On systems where these include files don't define it, SIZE_MAX is defined
   in config.h.  */

#endif /* GNULIB_SIZE_MAX_H */
