/* bitrotate.h - Rotate bits in integers
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

/* Written by Simon Josefsson <simon@josefsson.org>, 2008. */

#ifndef _GL_BITROTATE_H
#define _GL_BITROTATE_H

#include <limits.h>
#include <stdint.h>
#include <sys/types.h>

#ifndef _GL_INLINE_HEADER_BEGIN
 #error "Please include config.h first."
#endif
_GL_INLINE_HEADER_BEGIN
#ifndef BITROTATE_INLINE
# define BITROTATE_INLINE _GL_INLINE
#endif

#ifdef UINT64_MAX
/* Given an unsigned 64-bit argument X, return the value corresponding
   to rotating the bits N steps to the left.  N must be between 1 and
   63 inclusive. */
BITROTATE_INLINE uint64_t
rotl64 (uint64_t x, int n)
{
  return ((x << n) | (x >> (64 - n))) & UINT64_MAX;
}

/* Given an unsigned 64-bit argument X, return the value corresponding
   to rotating the bits N steps to the right.  N must be between 1 to
   63 inclusive.*/
BITROTATE_INLINE uint64_t
rotr64 (uint64_t x, int n)
{
  return ((x >> n) | (x << (64 - n))) & UINT64_MAX;
}
#endif

/* Given an unsigned 32-bit argument X, return the value corresponding
   to rotating the bits N steps to the left.  N must be between 1 and
   31 inclusive. */
BITROTATE_INLINE uint32_t
rotl32 (uint32_t x, int n)
{
  return ((x << n) | (x >> (32 - n))) & UINT32_MAX;
}

/* Given an unsigned 32-bit argument X, return the value corresponding
   to rotating the bits N steps to the right.  N must be between 1 to
   31 inclusive.*/
BITROTATE_INLINE uint32_t
rotr32 (uint32_t x, int n)
{
  return ((x >> n) | (x << (32 - n))) & UINT32_MAX;
}

/* Given a size_t argument X, return the value corresponding
   to rotating the bits N steps to the left.  N must be between 1 and
   (CHAR_BIT * sizeof (size_t) - 1) inclusive.  */
BITROTATE_INLINE size_t
rotl_sz (size_t x, int n)
{
  return ((x << n) | (x >> ((CHAR_BIT * sizeof x) - n))) & SIZE_MAX;
}

/* Given a size_t argument X, return the value corresponding
   to rotating the bits N steps to the right.  N must be between 1 to
   (CHAR_BIT * sizeof (size_t) - 1) inclusive.  */
BITROTATE_INLINE size_t
rotr_sz (size_t x, int n)
{
  return ((x >> n) | (x << ((CHAR_BIT * sizeof x) - n))) & SIZE_MAX;
}

/* Given an unsigned 16-bit argument X, return the value corresponding
   to rotating the bits N steps to the left.  N must be between 1 to
   15 inclusive, but on most relevant targets N can also be 0 and 16
   because 'int' is at least 32 bits and the arguments must widen
   before shifting. */
BITROTATE_INLINE uint16_t
rotl16 (uint16_t x, int n)
{
  return ((x << n) | (x >> (16 - n))) & UINT16_MAX;
}

/* Given an unsigned 16-bit argument X, return the value corresponding
   to rotating the bits N steps to the right.  N must be in 1 to 15
   inclusive, but on most relevant targets N can also be 0 and 16
   because 'int' is at least 32 bits and the arguments must widen
   before shifting. */
BITROTATE_INLINE uint16_t
rotr16 (uint16_t x, int n)
{
  return ((x >> n) | (x << (16 - n))) & UINT16_MAX;
}

/* Given an unsigned 8-bit argument X, return the value corresponding
   to rotating the bits N steps to the left.  N must be between 1 to 7
   inclusive, but on most relevant targets N can also be 0 and 8
   because 'int' is at least 32 bits and the arguments must widen
   before shifting. */
BITROTATE_INLINE uint8_t
rotl8 (uint8_t x, int n)
{
  return ((x << n) | (x >> (8 - n))) & UINT8_MAX;
}

/* Given an unsigned 8-bit argument X, return the value corresponding
   to rotating the bits N steps to the right.  N must be in 1 to 7
   inclusive, but on most relevant targets N can also be 0 and 8
   because 'int' is at least 32 bits and the arguments must widen
   before shifting. */
BITROTATE_INLINE uint8_t
rotr8 (uint8_t x, int n)
{
  return ((x >> n) | (x << (8 - n))) & UINT8_MAX;
}

_GL_INLINE_HEADER_END

#endif /* _GL_BITROTATE_H */
