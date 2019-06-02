/* Array bitsets.

   Copyright (C) 2002-2003, 2006, 2009-2015 Free Software Foundation,
   Inc.

   Contributed by Michael Hayes (m.hayes@elec.canterbury.ac.nz).

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>

#include "abitset.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/* This file implements fixed size bitsets stored as an array
   of words.  Any unused bits in the last word must be zero.  */

#define ABITSET_N_WORDS(N) (((N) + BITSET_WORD_BITS - 1) / BITSET_WORD_BITS)
#define ABITSET_WORDS(X) ((X)->a.words)


static bitset_bindex
abitset_resize (bitset src, bitset_bindex size)
{
    /* These bitsets have a fixed size.  */
    if (BITSET_SIZE_ (src) != size)
      abort ();

    return size;
}

/* Find list of up to NUM bits set in BSET starting from and including
 *NEXT and store in array LIST.  Return with actual number of bits
 found and with *NEXT indicating where search stopped.  */
static bitset_bindex
abitset_small_list (bitset src, bitset_bindex *list,
                    bitset_bindex num, bitset_bindex *next)
{
  bitset_bindex bitno;
  bitset_bindex count;
  bitset_windex size;
  bitset_word word;

  word = ABITSET_WORDS (src)[0];

  /* Short circuit common case.  */
  if (!word)
    return 0;

  size = BITSET_SIZE_ (src);
  bitno = *next;
  if (bitno >= size)
    return 0;

  word >>= bitno;

  /* If num is 1, we could speed things up with a binary search
     of the word of interest.  */

  if (num >= BITSET_WORD_BITS)
    {
      for (count = 0; word; bitno++)
        {
          if (word & 1)
            list[count++] = bitno;
          word >>= 1;
        }
    }
  else
    {
      for (count = 0; word; bitno++)
        {
          if (word & 1)
            {
              list[count++] = bitno;
              if (count >= num)
                {
                  bitno++;
                  break;
                }
            }
          word >>= 1;
        }
    }

  *next = bitno;
  return count;
}


/* Set bit BITNO in bitset DST.  */
static void
abitset_set (bitset dst ATTRIBUTE_UNUSED, bitset_bindex bitno ATTRIBUTE_UNUSED)
{
  /* This should never occur for abitsets since we should always hit
     the cache.  It is likely someone is trying to access outside the
     bounds of the bitset.  */
  abort ();
}


/* Reset bit BITNO in bitset DST.  */
static void
abitset_reset (bitset dst ATTRIBUTE_UNUSED,
               bitset_bindex bitno ATTRIBUTE_UNUSED)
{
  /* This should never occur for abitsets since we should always hit
     the cache.  It is likely someone is trying to access outside the
     bounds of the bitset.  Since the bit is zero anyway, let it pass.  */
}


/* Test bit BITNO in bitset SRC.  */
static bool
abitset_test (bitset src ATTRIBUTE_UNUSED,
              bitset_bindex bitno ATTRIBUTE_UNUSED)
{
  /* This should never occur for abitsets since we should always
     hit the cache.  */
  return false;
}


/* Find list of up to NUM bits set in BSET in reverse order, starting
   from and including NEXT and store in array LIST.  Return with
   actual number of bits found and with *NEXT indicating where search
   stopped.  */
static bitset_bindex
abitset_list_reverse (bitset src, bitset_bindex *list,
                      bitset_bindex num, bitset_bindex *next)
{
  bitset_bindex bitno;
  bitset_bindex rbitno;
  bitset_bindex count;
  bitset_windex windex;
  unsigned int bitcnt;
  bitset_bindex bitoff;
  bitset_word *srcp = ABITSET_WORDS (src);
  bitset_bindex n_bits = BITSET_SIZE_ (src);

  rbitno = *next;

  /* If num is 1, we could speed things up with a binary search
     of the word of interest.  */

  if (rbitno >= n_bits)
    return 0;

  count = 0;

  bitno = n_bits - (rbitno + 1);

  windex = bitno / BITSET_WORD_BITS;
  bitcnt = bitno % BITSET_WORD_BITS;
  bitoff = windex * BITSET_WORD_BITS;

  do
    {
      bitset_word word;

      word = srcp[windex] << (BITSET_WORD_BITS - 1 - bitcnt);
      for (; word; bitcnt--)
        {
          if (word & BITSET_MSB)
            {
              list[count++] = bitoff + bitcnt;
              if (count >= num)
                {
                  *next = n_bits - (bitoff + bitcnt);
                  return count;
                }
            }
          word <<= 1;
        }
      bitoff -= BITSET_WORD_BITS;
      bitcnt = BITSET_WORD_BITS - 1;
    }
  while (windex--);

  *next = n_bits - (bitoff + 1);
  return count;
}


/* Find list of up to NUM bits set in BSET starting from and including
 *NEXT and store in array LIST.  Return with actual number of bits
 found and with *NEXT indicating where search stopped.  */
static bitset_bindex
abitset_list (bitset src, bitset_bindex *list,
              bitset_bindex num, bitset_bindex *next)
{
  bitset_bindex bitno;
  bitset_bindex count;
  bitset_windex windex;
  bitset_bindex bitoff;
  bitset_windex size = src->b.csize;
  bitset_word *srcp = ABITSET_WORDS (src);
  bitset_word word;

  bitno = *next;

  count = 0;
  if (!bitno)
    {
      /* Many bitsets are zero, so make this common case fast.  */
      for (windex = 0; windex < size && !srcp[windex]; windex++)
        continue;
      if (windex >= size)
        return 0;

      /* If num is 1, we could speed things up with a binary search
         of the current word.  */

      bitoff = windex * BITSET_WORD_BITS;
    }
  else
    {
      if (bitno >= BITSET_SIZE_ (src))
        return 0;

      windex = bitno / BITSET_WORD_BITS;
      bitno = bitno % BITSET_WORD_BITS;

      if (bitno)
        {
          /* Handle the case where we start within a word.
             Most often, this is executed with large bitsets
             with many set bits where we filled the array
             on the previous call to this function.  */

          bitoff = windex * BITSET_WORD_BITS;
          word = srcp[windex] >> bitno;
          for (bitno = bitoff + bitno; word; bitno++)
            {
              if (word & 1)
                {
                  list[count++] = bitno;
                  if (count >= num)
                    {
                      *next = bitno + 1;
                      return count;
                    }
                }
              word >>= 1;
            }
          windex++;
        }
      bitoff = windex * BITSET_WORD_BITS;
    }

  for (; windex < size; windex++, bitoff += BITSET_WORD_BITS)
    {
      if (!(word = srcp[windex]))
        continue;

      if ((count + BITSET_WORD_BITS) < num)
        {
          for (bitno = bitoff; word; bitno++)
            {
              if (word & 1)
                list[count++] = bitno;
              word >>= 1;
            }
        }
      else
        {
          for (bitno = bitoff; word; bitno++)
            {
              if (word & 1)
                {
                  list[count++] = bitno;
                  if (count >= num)
                    {
                      *next = bitno + 1;
                      return count;
                    }
                }
              word >>= 1;
            }
        }
    }

  *next = bitoff;
  return count;
}


/* Ensure that any unused bits within the last word are clear.  */
static inline void
abitset_unused_clear (bitset dst)
{
  unsigned int last_bit;

  last_bit = BITSET_SIZE_ (dst) % BITSET_WORD_BITS;
  if (last_bit)
    ABITSET_WORDS (dst)[dst->b.csize - 1] &=
      ((bitset_word) 1 << last_bit) - 1;
}


static void
abitset_ones (bitset dst)
{
  bitset_word *dstp = ABITSET_WORDS (dst);
  size_t bytes;

  bytes = sizeof (bitset_word) * dst->b.csize;

  memset (dstp, -1, bytes);
  abitset_unused_clear (dst);
}


static void
abitset_zero (bitset dst)
{
  bitset_word *dstp = ABITSET_WORDS (dst);
  size_t bytes;

  bytes = sizeof (bitset_word) * dst->b.csize;

  memset (dstp, 0, bytes);
}


static bool
abitset_empty_p (bitset dst)
{
  bitset_windex i;
  bitset_word *dstp = ABITSET_WORDS (dst);

  for (i = 0; i < dst->b.csize; i++)
    if (dstp[i])
      return false;

  return true;
}


static void
abitset_copy1 (bitset dst, bitset src)
{
  bitset_word *srcp = ABITSET_WORDS (src);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  if (srcp == dstp)
      return;
  memcpy (dstp, srcp, sizeof (bitset_word) * size);
}


static void
abitset_not (bitset dst, bitset src)
{
  bitset_windex i;
  bitset_word *srcp = ABITSET_WORDS (src);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++)
      *dstp++ = ~(*srcp++);
  abitset_unused_clear (dst);
}


static bool
abitset_equal_p (bitset dst, bitset src)
{
  bitset_windex i;
  bitset_word *srcp = ABITSET_WORDS (src);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++)
      if (*srcp++ != *dstp++)
          return false;
  return true;
}


static bool
abitset_subset_p (bitset dst, bitset src)
{
  bitset_windex i;
  bitset_word *srcp = ABITSET_WORDS (src);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++, dstp++, srcp++)
      if (*dstp != (*srcp | *dstp))
          return false;
  return true;
}


static bool
abitset_disjoint_p (bitset dst, bitset src)
{
  bitset_windex i;
  bitset_word *srcp = ABITSET_WORDS (src);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++)
      if (*srcp++ & *dstp++)
          return false;

  return true;
}


static void
abitset_and (bitset dst, bitset src1, bitset src2)
{
  bitset_windex i;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++)
      *dstp++ = *src1p++ & *src2p++;
}


static bool
abitset_and_cmp (bitset dst, bitset src1, bitset src2)
{
  bitset_windex i;
  bool changed = false;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++, dstp++)
    {
      bitset_word tmp = *src1p++ & *src2p++;

      if (*dstp != tmp)
        {
          changed = true;
          *dstp = tmp;
        }
    }
  return changed;
}


static void
abitset_andn (bitset dst, bitset src1, bitset src2)
{
  bitset_windex i;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++)
      *dstp++ = *src1p++ & ~(*src2p++);
}


static bool
abitset_andn_cmp (bitset dst, bitset src1, bitset src2)
{
  bitset_windex i;
  bool changed = false;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++, dstp++)
    {
      bitset_word tmp = *src1p++ & ~(*src2p++);

      if (*dstp != tmp)
        {
          changed = true;
          *dstp = tmp;
        }
    }
  return changed;
}


static void
abitset_or (bitset dst, bitset src1, bitset src2)
{
  bitset_windex i;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++)
      *dstp++ = *src1p++ | *src2p++;
}


static bool
abitset_or_cmp (bitset dst, bitset src1, bitset src2)
{
  bitset_windex i;
  bool changed = false;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++, dstp++)
    {
      bitset_word tmp = *src1p++ | *src2p++;

      if (*dstp != tmp)
        {
          changed = true;
          *dstp = tmp;
        }
    }
  return changed;
}


static void
abitset_xor (bitset dst, bitset src1, bitset src2)
{
  bitset_windex i;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++)
      *dstp++ = *src1p++ ^ *src2p++;
}


static bool
abitset_xor_cmp (bitset dst, bitset src1, bitset src2)
{
  bitset_windex i;
  bool changed = false;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++, dstp++)
    {
      bitset_word tmp = *src1p++ ^ *src2p++;

      if (*dstp != tmp)
        {
          changed = true;
          *dstp = tmp;
        }
    }
  return changed;
}


static void
abitset_and_or (bitset dst, bitset src1, bitset src2, bitset src3)
{
  bitset_windex i;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *src3p = ABITSET_WORDS (src3);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++)
      *dstp++ = (*src1p++ & *src2p++) | *src3p++;
}


static bool
abitset_and_or_cmp (bitset dst, bitset src1, bitset src2, bitset src3)
{
  bitset_windex i;
  bool changed = false;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *src3p = ABITSET_WORDS (src3);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++, dstp++)
    {
      bitset_word tmp = (*src1p++ & *src2p++) | *src3p++;

      if (*dstp != tmp)
        {
          changed = true;
          *dstp = tmp;
        }
    }
  return changed;
}


static void
abitset_andn_or (bitset dst, bitset src1, bitset src2, bitset src3)
{
  bitset_windex i;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *src3p = ABITSET_WORDS (src3);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++)
      *dstp++ = (*src1p++ & ~(*src2p++)) | *src3p++;
}


static bool
abitset_andn_or_cmp (bitset dst, bitset src1, bitset src2, bitset src3)
{
  bitset_windex i;
  bool changed = false;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *src3p = ABITSET_WORDS (src3);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++, dstp++)
    {
      bitset_word tmp = (*src1p++ & ~(*src2p++)) | *src3p++;

      if (*dstp != tmp)
        {
          changed = true;
          *dstp = tmp;
        }
    }
  return changed;
}


static void
abitset_or_and (bitset dst, bitset src1, bitset src2, bitset src3)
{
  bitset_windex i;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *src3p = ABITSET_WORDS (src3);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++)
      *dstp++ = (*src1p++ | *src2p++) & *src3p++;
}


static bool
abitset_or_and_cmp (bitset dst, bitset src1, bitset src2, bitset src3)
{
  bitset_windex i;
  bool changed = false;
  bitset_word *src1p = ABITSET_WORDS (src1);
  bitset_word *src2p = ABITSET_WORDS (src2);
  bitset_word *src3p = ABITSET_WORDS (src3);
  bitset_word *dstp = ABITSET_WORDS (dst);
  bitset_windex size = dst->b.csize;

  for (i = 0; i < size; i++, dstp++)
    {
      bitset_word tmp = (*src1p++ | *src2p++) & *src3p++;

      if (*dstp != tmp)
        {
          changed = true;
          *dstp = tmp;
        }
    }
  return changed;
}


static void
abitset_copy (bitset dst, bitset src)
{
  if (BITSET_COMPATIBLE_ (dst, src))
      abitset_copy1 (dst, src);
  else
      bitset_copy_ (dst, src);
}


/* Vector of operations for single word bitsets.  */
struct bitset_vtable abitset_small_vtable = {
  abitset_set,
  abitset_reset,
  bitset_toggle_,
  abitset_test,
  abitset_resize,
  bitset_size_,
  bitset_count_,
  abitset_empty_p,
  abitset_ones,
  abitset_zero,
  abitset_copy,
  abitset_disjoint_p,
  abitset_equal_p,
  abitset_not,
  abitset_subset_p,
  abitset_and,
  abitset_and_cmp,
  abitset_andn,
  abitset_andn_cmp,
  abitset_or,
  abitset_or_cmp,
  abitset_xor,
  abitset_xor_cmp,
  abitset_and_or,
  abitset_and_or_cmp,
  abitset_andn_or,
  abitset_andn_or_cmp,
  abitset_or_and,
  abitset_or_and_cmp,
  abitset_small_list,
  abitset_list_reverse,
  NULL,
  BITSET_ARRAY
};


/* Vector of operations for multiple word bitsets.  */
struct bitset_vtable abitset_vtable = {
  abitset_set,
  abitset_reset,
  bitset_toggle_,
  abitset_test,
  abitset_resize,
  bitset_size_,
  bitset_count_,
  abitset_empty_p,
  abitset_ones,
  abitset_zero,
  abitset_copy,
  abitset_disjoint_p,
  abitset_equal_p,
  abitset_not,
  abitset_subset_p,
  abitset_and,
  abitset_and_cmp,
  abitset_andn,
  abitset_andn_cmp,
  abitset_or,
  abitset_or_cmp,
  abitset_xor,
  abitset_xor_cmp,
  abitset_and_or,
  abitset_and_or_cmp,
  abitset_andn_or,
  abitset_andn_or_cmp,
  abitset_or_and,
  abitset_or_and_cmp,
  abitset_list,
  abitset_list_reverse,
  NULL,
  BITSET_ARRAY
};


size_t
abitset_bytes (bitset_bindex n_bits)
{
  bitset_windex size;
  size_t bytes;
  size_t header_size = offsetof (union bitset_union, a.words);
  struct bitset_align_struct { char a; union bitset_union b; };
  size_t bitset_alignment = offsetof (struct bitset_align_struct, b);

  size = ABITSET_N_WORDS (n_bits);
  bytes = header_size + size * sizeof (bitset_word);

  /* Align the size properly for a vector of abitset objects.  */
  if (header_size % bitset_alignment != 0
      || sizeof (bitset_word) % bitset_alignment != 0)
    {
      bytes += bitset_alignment - 1;
      bytes -= bytes % bitset_alignment;
    }

  return bytes;
}


bitset
abitset_init (bitset bset, bitset_bindex n_bits)
{
  bitset_windex size;

  size = ABITSET_N_WORDS (n_bits);
  BITSET_NBITS_ (bset) = n_bits;

  /* Use optimized routines if bitset fits within a single word.
     There is probably little merit if using caching since
     the small bitset will always fit in the cache.  */
  if (size == 1)
    bset->b.vtable = &abitset_small_vtable;
  else
    bset->b.vtable = &abitset_vtable;

  bset->b.cindex = 0;
  bset->b.csize = size;
  bset->b.cdata = ABITSET_WORDS (bset);
  return bset;
}
