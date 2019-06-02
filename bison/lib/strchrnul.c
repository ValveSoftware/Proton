/* Searching in a string.
   Copyright (C) 2003, 2007-2015 Free Software Foundation, Inc.

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
#include <string.h>

/* Find the first occurrence of C in S or the final NUL byte.  */
char *
strchrnul (const char *s, int c_in)
{
  /* On 32-bit hardware, choosing longword to be a 32-bit unsigned
     long instead of a 64-bit uintmax_t tends to give better
     performance.  On 64-bit hardware, unsigned long is generally 64
     bits already.  Change this typedef to experiment with
     performance.  */
  typedef unsigned long int longword;

  const unsigned char *char_ptr;
  const longword *longword_ptr;
  longword repeated_one;
  longword repeated_c;
  unsigned char c;

  c = (unsigned char) c_in;
  if (!c)
    return rawmemchr (s, 0);

  /* Handle the first few bytes by reading one byte at a time.
     Do this until CHAR_PTR is aligned on a longword boundary.  */
  for (char_ptr = (const unsigned char *) s;
       (size_t) char_ptr % sizeof (longword) != 0;
       ++char_ptr)
    if (!*char_ptr || *char_ptr == c)
      return (char *) char_ptr;

  longword_ptr = (const longword *) char_ptr;

  /* All these elucidatory comments refer to 4-byte longwords,
     but the theory applies equally well to any size longwords.  */

  /* Compute auxiliary longword values:
     repeated_one is a value which has a 1 in every byte.
     repeated_c has c in every byte.  */
  repeated_one = 0x01010101;
  repeated_c = c | (c << 8);
  repeated_c |= repeated_c << 16;
  if (0xffffffffU < (longword) -1)
    {
      repeated_one |= repeated_one << 31 << 1;
      repeated_c |= repeated_c << 31 << 1;
      if (8 < sizeof (longword))
        {
          size_t i;

          for (i = 64; i < sizeof (longword) * 8; i *= 2)
            {
              repeated_one |= repeated_one << i;
              repeated_c |= repeated_c << i;
            }
        }
    }

  /* Instead of the traditional loop which tests each byte, we will
     test a longword at a time.  The tricky part is testing if *any of
     the four* bytes in the longword in question are equal to NUL or
     c.  We first use an xor with repeated_c.  This reduces the task
     to testing whether *any of the four* bytes in longword1 or
     longword2 is zero.

     Let's consider longword1.  We compute tmp =
       ((longword1 - repeated_one) & ~longword1) & (repeated_one << 7).
     That is, we perform the following operations:
       1. Subtract repeated_one.
       2. & ~longword1.
       3. & a mask consisting of 0x80 in every byte.
     Consider what happens in each byte:
       - If a byte of longword1 is zero, step 1 and 2 transform it into 0xff,
         and step 3 transforms it into 0x80.  A carry can also be propagated
         to more significant bytes.
       - If a byte of longword1 is nonzero, let its lowest 1 bit be at
         position k (0 <= k <= 7); so the lowest k bits are 0.  After step 1,
         the byte ends in a single bit of value 0 and k bits of value 1.
         After step 2, the result is just k bits of value 1: 2^k - 1.  After
         step 3, the result is 0.  And no carry is produced.
     So, if longword1 has only non-zero bytes, tmp is zero.
     Whereas if longword1 has a zero byte, call j the position of the least
     significant zero byte.  Then the result has a zero at positions 0, ...,
     j-1 and a 0x80 at position j.  We cannot predict the result at the more
     significant bytes (positions j+1..3), but it does not matter since we
     already have a non-zero bit at position 8*j+7.

     The test whether any byte in longword1 or longword2 is zero is equivalent
     to testing whether tmp1 is nonzero or tmp2 is nonzero.  We can combine
     this into a single test, whether (tmp1 | tmp2) is nonzero.

     This test can read more than one byte beyond the end of a string,
     depending on where the terminating NUL is encountered.  However,
     this is considered safe since the initialization phase ensured
     that the read will be aligned, therefore, the read will not cross
     page boundaries and will not cause a fault.  */

  while (1)
    {
      longword longword1 = *longword_ptr ^ repeated_c;
      longword longword2 = *longword_ptr;

      if (((((longword1 - repeated_one) & ~longword1)
            | ((longword2 - repeated_one) & ~longword2))
           & (repeated_one << 7)) != 0)
        break;
      longword_ptr++;
    }

  char_ptr = (const unsigned char *) longword_ptr;

  /* At this point, we know that one of the sizeof (longword) bytes
     starting at char_ptr is == 0 or == c.  On little-endian machines,
     we could determine the first such byte without any further memory
     accesses, just by looking at the tmp result from the last loop
     iteration.  But this does not work on big-endian machines.
     Choose code that works in both cases.  */

  char_ptr = (unsigned char *) longword_ptr;
  while (*char_ptr && (*char_ptr != c))
    char_ptr++;
  return (char *) char_ptr;
}
