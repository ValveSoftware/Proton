/* Split a 'long double' into fraction and mantissa, for hexadecimal printf.
   Copyright (C) 2007, 2009-2015 Free Software Foundation, Inc.

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

/* Write a finite, positive number x as
     x = mantissa * 2^exp
   where exp >= LDBL_MIN_EXP - 1,
         mantissa < 2.0,
         if x is not a denormalized number then mantissa >= 1.0.
   Store exp in *EXPPTR and return mantissa.  */
extern long double printf_frexpl (long double x, int *expptr);
