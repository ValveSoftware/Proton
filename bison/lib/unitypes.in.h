/* Elementary types and macros for the GNU UniString library.
   Copyright (C) 2002, 2005-2006, 2009-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef _UNITYPES_H
#define _UNITYPES_H

/* Get uint8_t, uint16_t, uint32_t.  */
#include <stdint.h>

/* Type representing a Unicode character.  */
typedef uint32_t ucs4_t;

/* Attribute of a function whose result depends only on the arguments
   (not pointers!) and which has no side effects.  */
#ifndef _UC_ATTRIBUTE_CONST
# if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
#  define _UC_ATTRIBUTE_CONST __attribute__ ((__const__))
# else
#  define _UC_ATTRIBUTE_CONST
# endif
#endif

/* Attribute of a function whose result depends only on the arguments
   (possibly pointers) and global memory, and which has no side effects.  */
#ifndef _UC_ATTRIBUTE_PURE
# if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
#  define _UC_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define _UC_ATTRIBUTE_PURE
# endif
#endif

#endif /* _UNITYPES_H */
