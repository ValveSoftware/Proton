/* Test for NaN that does not need libm.
   Copyright (C) 2007-2015 Free Software Foundation, Inc.

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

#if HAVE_ISNANF_IN_LIBC
/* Get declaration of isnan macro or (older) isnanf function.  */
# include <math.h>
# if __GNUC__ >= 4
   /* GCC 4.0 and newer provides three built-ins for isnan.  */
#  undef isnanf
#  define isnanf(x) __builtin_isnanf ((float)(x))
# elif defined isnan
#  undef isnanf
#  define isnanf(x) isnan ((float)(x))
# else
   /* Get declaration of isnanf(), if not declared in <math.h>.  */
#  if defined __sgi
   /* We can't include <ieeefp.h>, because it conflicts with our definition of
      isnand.  Therefore declare isnanf separately.  */
extern int isnanf (float x);
#  endif
# endif
#else
/* Test whether X is a NaN.  */
# undef isnanf
# define isnanf rpl_isnanf
extern int isnanf (float x);
#endif
