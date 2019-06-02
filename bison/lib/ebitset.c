/* Functions to support expandable bitsets.

   Copyright (C) 2002-2006, 2009-2015 Free Software Foundation, Inc.

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

#include "ebitset.h"

#include "obstack.h"
#include <stdlib.h>
#include <string.h>

/* This file implements expandable bitsets.  These bitsets can be of
   arbitrary length and are more efficient than arrays of bits for
   large sparse sets.

   Empty elements are represented by a NULL pointer in the table of
   element pointers.  An alternative is to point to a special zero
   element.  Similarly, we could represent an all 1's element with
   another special ones element pointer.

   Bitsets are commonly empty so we need to ensure that this special
   case is fast.  A zero bitset is indicated when cdata is 0.  This is
   conservative since cdata may be non zero and the bitset may still
   be zero.

   The bitset cache can be disabled either by setting cindex to
   BITSET_WINDEX_MAX or by setting csize to 0.  Here
   we use the former approach since cindex needs to be updated whenever
   cdata is changed.
*/


/* Number of words to use for each element.  */
#define EBITSET_ELT_WORDS 2

/* Number of bits stored in each element.  */
#define EBITSET_ELT_BITS \
  ((unsigned int) (EBITSET_ELT_WORDS * BITSET_WORD_BITS))

/* Ebitset element.  We use an array of bits.  */
typedef struct ebitset_elt_struct
{
  union
  {
    bitset_word words[EBITSET_ELT_WORDS];       /* Bits that are set.  */
    struct ebitset_elt_struct *next;
  }
  u;
}
ebitset_elt;


typedef ebitset_elt *ebitset_elts;


/* Number of elements to initially allocate.  */

#ifndef EBITSET_INITIAL_SIZE
#define EBITSET_INITIAL_SIZE 2
#endif


enum ebitset_find_mode
  { EBITSET_FIND, EBITSET_CREATE, EBITSET_SUBST };

static ebitset_elt ebitset_zero_elts[1]; /* Elements of all zero bits.  */

/* Obstack to allocate bitset elements from.  */
static struct obstack ebitset_obstack;
static bool ebitset_obstack_init = false;
static ebitset_elt *ebitset_free_list;  /* Free list of bitset elements.  */

#define EBITSET_N_ELTS(N) (((N) + EBITSET_ELT_BITS - 1) / EBITSET_ELT_BITS)
#define EBITSET_ELTS(BSET) ((BSET)->e.elts)
#define EBITSET_SIZE(BSET) EBITSET_N_ELTS (BITSET_NBITS_ (BSET))
#define EBITSET_ASIZE(BSET) ((BSET)->e.size)

#define EBITSET_NEXT(ELT) ((ELT)->u.next)
#define EBITSET_WORDS(ELT) ((ELT)->u.words)

/* Disable bitset cache and mark BSET as being zero.  */
#define EBITSET_ZERO_SET(BSET) ((BSET)->b.cindex = BITSET_WINDEX_MAX, \
        (BSET)->b.cdata = 0)

#define EBITSET_CACHE_DISABLE(BSET)  ((BSET)->b.cindex = BITSET_WINDEX_MAX)

/* Disable bitset cache and mark BSET as being possibly non-zero.  */
#define EBITSET_NONZERO_SET(BSET) \
 (EBITSET_CACHE_DISABLE (BSET), (BSET)->b.cdata = (bitset_word *)~0)

/* A conservative estimate of whether the bitset is zero.
   This is non-zero only if we know for sure that the bitset is zero.  */
#define EBITSET_ZERO_P(BSET) ((BSET)->b.cdata == 0)

/* Enable cache to point to element with table index EINDEX.
   The element must exist.  */
#define EBITSET_CACHE_SET(BSET, EINDEX) \
 ((BSET)->b.cindex = (EINDEX) * EBITSET_ELT_WORDS, \
  (BSET)->b.cdata = EBITSET_WORDS (EBITSET_ELTS (BSET) [EINDEX]))

#undef min
#undef max
#define min(a, b) ((a) > (b) ? (b) : (a))
#define max(a, b) ((a) > (b) ? (a) : (b))

static bitset_bindex
ebitset_resize (bitset src, bitset_bindex n_bits)
{
  bitset_windex oldsize;
  bitset_windex newsize;

  if (n_bits == BITSET_NBITS_ (src))
    return n_bits;

  oldsize = EBITSET_SIZE (src);
  newsize = EBITSET_N_ELTS (n_bits);

  if (oldsize < newsize)
    {
      bitset_windex size;

      /* The bitset needs to grow.  If we already have enough memory
         allocated, then just zero what we need.  */
      if (newsize > EBITSET_ASIZE (src))
        {
          /* We need to allocate more memory.  When oldsize is
             non-zero this means that we are changing the size, so
             grow the bitset 25% larger than requested to reduce
             number of reallocations.  */

          if (oldsize == 0)
            size = newsize;
          else
            size = newsize + newsize / 4;

          EBITSET_ELTS (src)
            = realloc (EBITSET_ELTS (src), size * sizeof (ebitset_elt *));
          EBITSET_ASIZE (src) = size;
        }

      memset (EBITSET_ELTS (src) + oldsize, 0,
              (newsize - oldsize) * sizeof (ebitset_elt *));
    }
  else
    {
      /* The bitset needs to shrink.  There's no point deallocating
         the memory unless it is shrinking by a reasonable amount.  */
      if ((oldsize - newsize) >= oldsize / 2)
        {
          EBITSET_ELTS (src)
            = realloc (EBITSET_ELTS (src), newsize * sizeof (ebitset_elt *));
          EBITSET_ASIZE (src) = newsize;
        }

      /* Need to prune any excess bits.  FIXME.  */
    }

  BITSET_NBITS_ (src) = n_bits;
  return n_bits;
}


/* Allocate a ebitset element.  The bits are not cleared.  */
static inline ebitset_elt *
ebitset_elt_alloc (void)
{
  ebitset_elt *elt;

  if (ebitset_free_list != 0)
    {
      elt = ebitset_free_list;
      ebitset_free_list = EBITSET_NEXT (elt);
    }
  else
    {
      if (!ebitset_obstack_init)
        {
          ebitset_obstack_init = true;

          /* Let particular systems override the size of a chunk.  */

#ifndef OBSTACK_CHUNK_SIZE
#define OBSTACK_CHUNK_SIZE 0
#endif

          /* Let them override the alloc and free routines too.  */

#ifndef OBSTACK_CHUNK_ALLOC
#define OBSTACK_CHUNK_ALLOC xmalloc
#endif

#ifndef OBSTACK_CHUNK_FREE
#define OBSTACK_CHUNK_FREE free
#endif

#if ! defined __GNUC__ || __GNUC__ < 2
#define __alignof__(type) 0
#endif

          obstack_specify_allocation (&ebitset_obstack, OBSTACK_CHUNK_SIZE,
                                      __alignof__ (ebitset_elt),
                                      OBSTACK_CHUNK_ALLOC,
                                      OBSTACK_CHUNK_FREE);
        }

      /* Perhaps we should add a number of new elements to the free
         list.  */
      elt = (ebitset_elt *) obstack_alloc (&ebitset_obstack,
                                           sizeof (ebitset_elt));
    }

  return elt;
}


/* Allocate a ebitset element.  The bits are cleared.  */
static inline ebitset_elt *
ebitset_elt_calloc (void)
{
  ebitset_elt *elt;

  elt = ebitset_elt_alloc ();
  memset (EBITSET_WORDS (elt), 0, sizeof (EBITSET_WORDS (elt)));
  return elt;
}


static inline void
ebitset_elt_free (ebitset_elt *elt)
{
  EBITSET_NEXT (elt) = ebitset_free_list;
  ebitset_free_list = elt;
}


/* Remove element with index EINDEX from bitset BSET.  */
static inline void
ebitset_elt_remove (bitset bset, bitset_windex eindex)
{
  ebitset_elts *elts;
  ebitset_elt *elt;

  elts = EBITSET_ELTS (bset);

  elt = elts[eindex];

  elts[eindex] = 0;
  ebitset_elt_free (elt);
}


/* Add ELT into elts at index EINDEX of bitset BSET.  */
static inline void
ebitset_elt_add (bitset bset, ebitset_elt *elt, bitset_windex eindex)
{
  ebitset_elts *elts;

  elts = EBITSET_ELTS (bset);
  /* Assume that the elts entry not allocated.  */
  elts[eindex] = elt;
}


/* Are all bits in an element zero?  */
static inline bool
ebitset_elt_zero_p (ebitset_elt *elt)
{
  int i;

  for (i = 0; i < EBITSET_ELT_WORDS; i++)
    if (EBITSET_WORDS (elt)[i])
      return false;

  return true;
}


static ebitset_elt *
ebitset_elt_find (bitset bset, bitset_bindex bindex,
                  enum ebitset_find_mode mode)
{
  ebitset_elt *elt;
  bitset_windex size;
  bitset_windex eindex;
  ebitset_elts *elts;

  eindex = bindex / EBITSET_ELT_BITS;

  elts = EBITSET_ELTS (bset);
  size = EBITSET_SIZE (bset);

  if (eindex < size)
    {
      if ((elt = elts[eindex]))
        {
          if (EBITSET_WORDS (elt) == bset->b.cdata)
            return elt;

          EBITSET_CACHE_SET (bset, eindex);
          return elt;
        }
    }

  /* The element could not be found.  */

  switch (mode)
    {
    default:
      abort ();

    case EBITSET_FIND:
      return 0;

    case EBITSET_CREATE:
      if (eindex >= size)
        ebitset_resize (bset, bindex);

      /* Create a new element.  */
      elt = ebitset_elt_calloc ();
      ebitset_elt_add (bset, elt, eindex);
      EBITSET_CACHE_SET (bset, eindex);
      return elt;

    case EBITSET_SUBST:
      return &ebitset_zero_elts[0];
    }
}


/* Weed out the zero elements from the elts.  */
static inline bitset_windex
ebitset_weed (bitset bset)
{
  ebitset_elts *elts;
  bitset_windex j;
  bitset_windex count;

  if (EBITSET_ZERO_P (bset))
    return 0;

  elts = EBITSET_ELTS (bset);
  count = 0;
  for (j = 0; j < EBITSET_SIZE (bset); j++)
    {
      ebitset_elt *elt = elts[j];

      if (elt)
        {
          if (ebitset_elt_zero_p (elt))
            {
              ebitset_elt_remove (bset, j);
              count++;
            }
        }
      else
        count++;
    }

  count = j - count;
  if (!count)
    {
      /* All the bits are zero.  We could shrink the elts.
         For now just mark BSET as known to be zero.  */
      EBITSET_ZERO_SET (bset);
    }
  else
    EBITSET_NONZERO_SET (bset);

  return count;
}


/* Set all bits in the bitset to zero.  */
static inline void
ebitset_zero (bitset bset)
{
  ebitset_elts *elts;
  bitset_windex j;

  if (EBITSET_ZERO_P (bset))
    return;

  elts = EBITSET_ELTS (bset);
  for (j = 0; j < EBITSET_SIZE (bset); j++)
    {
      ebitset_elt *elt = elts[j];

      if (elt)
        ebitset_elt_remove (bset, j);
    }

  /* All the bits are zero.  We could shrink the elts.
     For now just mark BSET as known to be zero.  */
  EBITSET_ZERO_SET (bset);
}


static inline bool
ebitset_equal_p (bitset dst, bitset src)
{
  ebitset_elts *selts;
  ebitset_elts *delts;
  bitset_windex j;

  if (src == dst)
    return true;

  ebitset_weed (dst);
  ebitset_weed (src);

  if (EBITSET_SIZE (src) != EBITSET_SIZE (dst))
    return false;

  selts = EBITSET_ELTS (src);
  delts = EBITSET_ELTS (dst);

  for (j = 0; j < EBITSET_SIZE (src); j++)
    {
      unsigned int i;
      ebitset_elt *selt = selts[j];
      ebitset_elt *delt = delts[j];

      if (!selt && !delt)
        continue;
      if ((selt && !delt) || (!selt && delt))
        return false;

      for (i = 0; i < EBITSET_ELT_WORDS; i++)
        if (EBITSET_WORDS (selt)[i] != EBITSET_WORDS (delt)[i])
          return false;
    }
  return true;
}


/* Copy bits from bitset SRC to bitset DST.  */
static inline void
ebitset_copy_ (bitset dst, bitset src)
{
  ebitset_elts *selts;
  ebitset_elts *delts;
  bitset_windex j;

  if (src == dst)
    return;

  ebitset_zero (dst);

  if (BITSET_NBITS_ (dst) != BITSET_NBITS_ (src))
    ebitset_resize (dst, BITSET_NBITS_ (src));

  selts = EBITSET_ELTS (src);
  delts = EBITSET_ELTS (dst);
  for (j = 0; j < EBITSET_SIZE (src); j++)
    {
      ebitset_elt *selt = selts[j];

      if (selt)
        {
          ebitset_elt *tmp;

          tmp = ebitset_elt_alloc ();
          delts[j] = tmp;
          memcpy (EBITSET_WORDS (tmp), EBITSET_WORDS (selt),
                  sizeof (EBITSET_WORDS (selt)));
        }
    }
  EBITSET_NONZERO_SET (dst);
}


/* Copy bits from bitset SRC to bitset DST.  Return true if
   bitsets different.  */
static inline bool
ebitset_copy_cmp (bitset dst, bitset src)
{
  if (src == dst)
    return false;

  if (EBITSET_ZERO_P (dst))
    {
      ebitset_copy_ (dst, src);
      return !EBITSET_ZERO_P (src);
    }

  if (ebitset_equal_p (dst, src))
    return false;

  ebitset_copy_ (dst, src);
  return true;
}


/* Set bit BITNO in bitset DST.  */
static void
ebitset_set (bitset dst, bitset_bindex bitno)
{
  bitset_windex windex = bitno / BITSET_WORD_BITS;

  ebitset_elt_find (dst, bitno, EBITSET_CREATE);

  dst->b.cdata[windex - dst->b.cindex] |=
    (bitset_word) 1 << (bitno % BITSET_WORD_BITS);
}


/* Reset bit BITNO in bitset DST.  */
static void
ebitset_reset (bitset dst, bitset_bindex bitno)
{
  bitset_windex windex = bitno / BITSET_WORD_BITS;

  if (!ebitset_elt_find (dst, bitno, EBITSET_FIND))
    return;

  dst->b.cdata[windex - dst->b.cindex] &=
    ~((bitset_word) 1 << (bitno % BITSET_WORD_BITS));

  /* If all the data is zero, perhaps we should remove it now...
     However, there is a good chance that the element will be needed
     again soon.  */
}


/* Test bit BITNO in bitset SRC.  */
static bool
ebitset_test (bitset src, bitset_bindex bitno)
{
  bitset_windex windex = bitno / BITSET_WORD_BITS;

  return (ebitset_elt_find (src, bitno, EBITSET_FIND)
          && ((src->b.cdata[windex - src->b.cindex]
               >> (bitno % BITSET_WORD_BITS))
              & 1));
}


static void
ebitset_free (bitset bset)
{
  ebitset_zero (bset);
  free (EBITSET_ELTS (bset));
}


/* Find list of up to NUM bits set in BSET starting from and including
 *NEXT and store in array LIST.  Return with actual number of bits
 found and with *NEXT indicating where search stopped.  */
static bitset_bindex
ebitset_list_reverse (bitset bset, bitset_bindex *list,
                      bitset_bindex num, bitset_bindex *next)
{
  bitset_bindex n_bits;
  bitset_bindex bitno;
  bitset_bindex rbitno;
  unsigned int bcount;
  bitset_bindex boffset;
  bitset_windex windex;
  bitset_windex eindex;
  bitset_windex woffset;
  bitset_bindex count;
  bitset_windex size;
  ebitset_elts *elts;

  if (EBITSET_ZERO_P (bset))
    return 0;

  size = EBITSET_SIZE (bset);
  n_bits = size * EBITSET_ELT_BITS;
  rbitno = *next;

  if (rbitno >= n_bits)
    return 0;

  elts = EBITSET_ELTS (bset);

  bitno = n_bits - (rbitno + 1);

  windex = bitno / BITSET_WORD_BITS;
  eindex = bitno / EBITSET_ELT_BITS;
  woffset = windex - eindex * EBITSET_ELT_WORDS;

  /* If num is 1, we could speed things up with a binary search
     of the word of interest.  */

  count = 0;
  bcount = bitno % BITSET_WORD_BITS;
  boffset = windex * BITSET_WORD_BITS;

  do
    {
      ebitset_elt *elt;
      bitset_word *srcp;

      elt = elts[eindex];
      if (elt)
        {
          srcp = EBITSET_WORDS (elt);

          do
            {
              bitset_word word;

              word = srcp[woffset] << (BITSET_WORD_BITS - 1 - bcount);

              for (; word; bcount--)
                {
                  if (word & BITSET_MSB)
                    {
                      list[count++] = boffset + bcount;
                      if (count >= num)
                        {
                          *next = n_bits - (boffset + bcount);
                          return count;
                        }
                    }
                  word <<= 1;
                }
              boffset -= BITSET_WORD_BITS;
              bcount = BITSET_WORD_BITS - 1;
            }
          while (woffset--);
        }

      woffset = EBITSET_ELT_WORDS - 1;
      boffset = eindex * EBITSET_ELT_BITS - BITSET_WORD_BITS;
    }
  while (eindex--);

  *next = n_bits - (boffset + 1);
  return count;
}


/* Find list of up to NUM bits set in BSET starting from and including
 *NEXT and store in array LIST.  Return with actual number of bits
 found and with *NEXT indicating where search stopped.  */
static bitset_bindex
ebitset_list (bitset bset, bitset_bindex *list,
              bitset_bindex num, bitset_bindex *next)
{
  bitset_bindex bitno;
  bitset_windex windex;
  bitset_windex eindex;
  bitset_bindex count;
  bitset_windex size;
  ebitset_elt *elt;
  bitset_word word;
  ebitset_elts *elts;

  if (EBITSET_ZERO_P (bset))
    return 0;

  bitno = *next;
  count = 0;

  elts = EBITSET_ELTS (bset);
  size = EBITSET_SIZE (bset);
  eindex = bitno / EBITSET_ELT_BITS;

  if (bitno % EBITSET_ELT_BITS)
    {
      /* We need to start within an element.  This is not very common.  */

      elt = elts[eindex];
      if (elt)
        {
          bitset_windex woffset;
          bitset_word *srcp = EBITSET_WORDS (elt);

          windex = bitno / BITSET_WORD_BITS;
          woffset = eindex * EBITSET_ELT_WORDS;

          for (; (windex - woffset) < EBITSET_ELT_WORDS; windex++)
            {
              word = srcp[windex - woffset] >> (bitno % BITSET_WORD_BITS);

              for (; word; bitno++)
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
              bitno = (windex + 1) * BITSET_WORD_BITS;
            }
        }

      /* Skip to next element.  */
      eindex++;
    }

  /* If num is 1, we could speed things up with a binary search
     of the word of interest.  */

  for (; eindex < size; eindex++)
    {
      int i;
      bitset_word *srcp;

      elt = elts[eindex];
      if (!elt)
        continue;

      srcp = EBITSET_WORDS (elt);
      windex = eindex * EBITSET_ELT_WORDS;

      if ((count + EBITSET_ELT_BITS) < num)
        {
          /* The coast is clear, plant boot!  */

#if EBITSET_ELT_WORDS == 2
          word = srcp[0];
          if (word)
            {
              if (!(word & 0xffff))
                {
                  word >>= 16;
                  bitno += 16;
                }
              if (!(word & 0xff))
                {
                  word >>= 8;
                  bitno += 8;
                }
              for (; word; bitno++)
                {
                  if (word & 1)
                    list[count++] = bitno;
                  word >>= 1;
                }
            }
          windex++;
          bitno = windex * BITSET_WORD_BITS;

          word = srcp[1];
          if (word)
            {
              if (!(word & 0xffff))
                {
                  word >>= 16;
                  bitno += 16;
                }
              for (; word; bitno++)
                {
                  if (word & 1)
                    list[count++] = bitno;
                  word >>= 1;
                }
            }
          windex++;
          bitno = windex * BITSET_WORD_BITS;
#else
          for (i = 0; i < EBITSET_ELT_WORDS; i++, windex++)
            {
              bitno = windex * BITSET_WORD_BITS;

              word = srcp[i];
              if (word)
                {
                  if (!(word & 0xffff))
                    {
                      word >>= 16;
                      bitno += 16;
                    }
                  if (!(word & 0xff))
                    {
                      word >>= 8;
                      bitno += 8;
                    }
                  for (; word; bitno++)
                    {
                      if (word & 1)
                        list[count++] = bitno;
                      word >>= 1;
                    }
                }
            }
#endif
        }
      else
        {
          /* Tread more carefully since we need to check
             if array overflows.  */

          for (i = 0; i < EBITSET_ELT_WORDS; i++, windex++)
            {
              bitno = windex * BITSET_WORD_BITS;

              for (word = srcp[i]; word; bitno++)
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
    }

  *next = bitno;
  return count;
}


/* Ensure that any unused bits within the last element are clear.  */
static inline void
ebitset_unused_clear (bitset dst)
{
  unsigned int last_bit;
  bitset_bindex n_bits;

  n_bits = BITSET_NBITS_ (dst);
  last_bit = n_bits % EBITSET_ELT_BITS;

  if (last_bit)
    {
      bitset_windex eindex;
      ebitset_elts *elts;
      ebitset_elt *elt;

      elts = EBITSET_ELTS (dst);

      eindex = n_bits / EBITSET_ELT_BITS;

      elt = elts[eindex];
      if (elt)
        {
          bitset_windex windex;
          bitset_windex woffset;
          bitset_word *srcp = EBITSET_WORDS (elt);

          windex = n_bits / BITSET_WORD_BITS;
          woffset = eindex * EBITSET_ELT_WORDS;

          srcp[windex - woffset] &= ((bitset_word) 1 << last_bit) - 1;
          windex++;
          for (; (windex - woffset) < EBITSET_ELT_WORDS; windex++)
            srcp[windex - woffset] = 0;
        }
    }
}


static void
ebitset_ones (bitset dst)
{
  bitset_windex j;
  ebitset_elt *elt;

  for (j = 0; j < EBITSET_SIZE (dst); j++)
    {
      /* Create new elements if they cannot be found.  Perhaps
         we should just add pointers to a ones element?  */
      elt =
        ebitset_elt_find (dst, j * EBITSET_ELT_BITS, EBITSET_CREATE);
      memset (EBITSET_WORDS (elt), -1, sizeof (EBITSET_WORDS (elt)));
    }
  EBITSET_NONZERO_SET (dst);
  ebitset_unused_clear (dst);
}


static bool
ebitset_empty_p (bitset dst)
{
  ebitset_elts *elts;
  bitset_windex j;

  if (EBITSET_ZERO_P (dst))
    return 1;

  elts = EBITSET_ELTS (dst);
  for (j = 0; j < EBITSET_SIZE (dst); j++)
    {
      ebitset_elt *elt = elts[j];

      if (elt)
        {
          if (!ebitset_elt_zero_p (elt))
            return 0;
          /* Do some weeding as we go.  */
          ebitset_elt_remove (dst, j);
        }
    }

  /* All the bits are zero.  We could shrink the elts.
     For now just mark DST as known to be zero.  */
  EBITSET_ZERO_SET (dst);
  return 1;
}


static void
ebitset_not (bitset dst, bitset src)
{
  unsigned int i;
  ebitset_elt *selt;
  ebitset_elt *delt;
  bitset_windex j;

  ebitset_resize (dst, BITSET_NBITS_ (src));

  for (j = 0; j < EBITSET_SIZE (src); j++)
    {
      /* Create new elements for dst if they cannot be found
         or substitute zero elements if src elements not found.  */
      selt =
        ebitset_elt_find (dst, j * EBITSET_ELT_BITS, EBITSET_SUBST);
      delt =
        ebitset_elt_find (dst, j * EBITSET_ELT_BITS, EBITSET_CREATE);

      for (i = 0; i < EBITSET_ELT_WORDS; i++)
        EBITSET_WORDS (delt)[i] = ~EBITSET_WORDS (selt)[i];
    }
  EBITSET_NONZERO_SET (dst);
  ebitset_unused_clear (dst);
}


/* Is DST == DST | SRC?  */
static bool
ebitset_subset_p (bitset dst, bitset src)
{
  bitset_windex j;
  ebitset_elts *selts;
  ebitset_elts *delts;
  bitset_windex ssize;
  bitset_windex dsize;

  selts = EBITSET_ELTS (src);
  delts = EBITSET_ELTS (dst);

  ssize = EBITSET_SIZE (src);
  dsize = EBITSET_SIZE (dst);

  for (j = 0; j < ssize; j++)
    {
      unsigned int i;
      ebitset_elt *selt;
      ebitset_elt *delt;

      selt = j < ssize ? selts[j] : 0;
      delt = j < dsize ? delts[j] : 0;

      if (!selt && !delt)
        continue;

      if (!selt)
        selt = &ebitset_zero_elts[0];
      if (!delt)
        delt = &ebitset_zero_elts[0];

      for (i = 0; i < EBITSET_ELT_WORDS; i++)
        if (EBITSET_WORDS (delt)[i]
            != (EBITSET_WORDS (selt)[i] | EBITSET_WORDS (delt)[i]))
          return false;
    }
  return true;
}


/* Is DST & SRC == 0?  */
static bool
ebitset_disjoint_p (bitset dst, bitset src)
{
  bitset_windex j;
  ebitset_elts *selts;
  ebitset_elts *delts;
  bitset_windex ssize;
  bitset_windex dsize;

  selts = EBITSET_ELTS (src);
  delts = EBITSET_ELTS (dst);

  ssize = EBITSET_SIZE (src);
  dsize = EBITSET_SIZE (dst);

  for (j = 0; j < ssize; j++)
    {
      unsigned int i;
      ebitset_elt *selt;
      ebitset_elt *delt;

      selt = j < ssize ? selts[j] : 0;
      delt = j < dsize ? delts[j] : 0;

      if (!selt || !delt)
        continue;

      for (i = 0; i < EBITSET_ELT_WORDS; i++)
        if ((EBITSET_WORDS (selt)[i] & EBITSET_WORDS (delt)[i]))
          return false;
    }
  return true;
}



static bool
ebitset_op3_cmp (bitset dst, bitset src1, bitset src2, enum bitset_ops op)
{
  bitset_windex ssize1;
  bitset_windex ssize2;
  bitset_windex dsize;
  bitset_windex size;
  ebitset_elts *selts1;
  ebitset_elts *selts2;
  ebitset_elts *delts;
  bitset_word *srcp1;
  bitset_word *srcp2;
  bitset_word *dstp;
  bool changed = false;
  unsigned int i;
  bitset_windex j;

  ebitset_resize (dst, max (BITSET_NBITS_ (src1), BITSET_NBITS_ (src2)));

  ssize1 = EBITSET_SIZE (src1);
  ssize2 = EBITSET_SIZE (src2);
  dsize = EBITSET_SIZE (dst);
  size = ssize1;
  if (size < ssize2)
    size = ssize2;

  selts1 = EBITSET_ELTS (src1);
  selts2 = EBITSET_ELTS (src2);
  delts = EBITSET_ELTS (dst);

  for (j = 0; j < size; j++)
    {
      ebitset_elt *selt1;
      ebitset_elt *selt2;
      ebitset_elt *delt;

      selt1 = j < ssize1 ? selts1[j] : 0;
      selt2 = j < ssize2 ? selts2[j] : 0;
      delt = j < dsize ? delts[j] : 0;

      if (!selt1 && !selt2)
        {
          if (delt)
            {
              changed = true;
              ebitset_elt_remove (dst, j);
            }
          continue;
        }

      if (!selt1)
        selt1 = &ebitset_zero_elts[0];
      if (!selt2)
        selt2 = &ebitset_zero_elts[0];
      if (!delt)
        delt = ebitset_elt_calloc ();
      else
        delts[j] = 0;

      srcp1 = EBITSET_WORDS (selt1);
      srcp2 = EBITSET_WORDS (selt2);
      dstp = EBITSET_WORDS (delt);
      switch (op)
        {
        default:
          abort ();

        case BITSET_OP_OR:
          for (i = 0; i < EBITSET_ELT_WORDS; i++, dstp++)
            {
              bitset_word tmp = *srcp1++ | *srcp2++;

              if (*dstp != tmp)
                {
                  changed = true;
                  *dstp = tmp;
                }
            }
          break;

        case BITSET_OP_AND:
          for (i = 0; i < EBITSET_ELT_WORDS; i++, dstp++)
            {
              bitset_word tmp = *srcp1++ & *srcp2++;

              if (*dstp != tmp)
                {
                  changed = true;
                  *dstp = tmp;
                }
            }
          break;

        case BITSET_OP_XOR:
          for (i = 0; i < EBITSET_ELT_WORDS; i++, dstp++)
            {
              bitset_word tmp = *srcp1++ ^ *srcp2++;

              if (*dstp != tmp)
                {
                  changed = true;
                  *dstp = tmp;
                }
            }
          break;

        case BITSET_OP_ANDN:
          for (i = 0; i < EBITSET_ELT_WORDS; i++, dstp++)
            {
              bitset_word tmp = *srcp1++ & ~(*srcp2++);

              if (*dstp != tmp)
                {
                  changed = true;
                  *dstp = tmp;
                }
            }
          break;
        }

      if (!ebitset_elt_zero_p (delt))
        {
          ebitset_elt_add (dst, delt, j);
        }
      else
        {
          ebitset_elt_free (delt);
        }
    }

  /* If we have elements of DST left over, free them all.  */
  for (; j < dsize; j++)
    {
      ebitset_elt *delt;

      changed = true;

      delt = delts[j];

      if (delt)
        ebitset_elt_remove (dst, j);
    }

  EBITSET_NONZERO_SET (dst);
  return changed;
}


static bool
ebitset_and_cmp (bitset dst, bitset src1, bitset src2)
{
  bool changed;

  if (EBITSET_ZERO_P (src2))
    {
      ebitset_weed (dst);
      changed = EBITSET_ZERO_P (dst);
      ebitset_zero (dst);
      return changed;
    }
  else if (EBITSET_ZERO_P (src1))
    {
      ebitset_weed (dst);
      changed = EBITSET_ZERO_P (dst);
      ebitset_zero (dst);
      return changed;
    }
  return ebitset_op3_cmp (dst, src1, src2, BITSET_OP_AND);
}


static void
ebitset_and (bitset dst, bitset src1, bitset src2)
{
  ebitset_and_cmp (dst, src1, src2);
}


static bool
ebitset_andn_cmp (bitset dst, bitset src1, bitset src2)
{
  bool changed;

  if (EBITSET_ZERO_P (src2))
    {
      return ebitset_copy_cmp (dst, src1);
    }
  else if (EBITSET_ZERO_P (src1))
    {
      ebitset_weed (dst);
      changed = EBITSET_ZERO_P (dst);
      ebitset_zero (dst);
      return changed;
    }
  return ebitset_op3_cmp (dst, src1, src2, BITSET_OP_ANDN);
}


static void
ebitset_andn (bitset dst, bitset src1, bitset src2)
{
  ebitset_andn_cmp (dst, src1, src2);
}


static bool
ebitset_or_cmp (bitset dst, bitset src1, bitset src2)
{
  if (EBITSET_ZERO_P (src2))
    {
      return ebitset_copy_cmp (dst, src1);
    }
  else if (EBITSET_ZERO_P (src1))
    {
      return ebitset_copy_cmp (dst, src2);
    }
  return ebitset_op3_cmp (dst, src1, src2, BITSET_OP_OR);
}


static void
ebitset_or (bitset dst, bitset src1, bitset src2)
{
  ebitset_or_cmp (dst, src1, src2);
}


static bool
ebitset_xor_cmp (bitset dst, bitset src1, bitset src2)
{
  if (EBITSET_ZERO_P (src2))
    {
      return ebitset_copy_cmp (dst, src1);
    }
  else if (EBITSET_ZERO_P (src1))
    {
      return ebitset_copy_cmp (dst, src2);
    }
  return ebitset_op3_cmp (dst, src1, src2, BITSET_OP_XOR);
}


static void
ebitset_xor (bitset dst, bitset src1, bitset src2)
{
  ebitset_xor_cmp (dst, src1, src2);
}


static void
ebitset_copy (bitset dst, bitset src)
{
  if (BITSET_COMPATIBLE_ (dst, src))
      ebitset_copy_ (dst, src);
  else
      bitset_copy_ (dst, src);
}


/* Vector of operations for linked-list bitsets.  */
struct bitset_vtable ebitset_vtable = {
  ebitset_set,
  ebitset_reset,
  bitset_toggle_,
  ebitset_test,
  ebitset_resize,
  bitset_size_,
  bitset_count_,
  ebitset_empty_p,
  ebitset_ones,
  ebitset_zero,
  ebitset_copy,
  ebitset_disjoint_p,
  ebitset_equal_p,
  ebitset_not,
  ebitset_subset_p,
  ebitset_and,
  ebitset_and_cmp,
  ebitset_andn,
  ebitset_andn_cmp,
  ebitset_or,
  ebitset_or_cmp,
  ebitset_xor,
  ebitset_xor_cmp,
  bitset_and_or_,
  bitset_and_or_cmp_,
  bitset_andn_or_,
  bitset_andn_or_cmp_,
  bitset_or_and_,
  bitset_or_and_cmp_,
  ebitset_list,
  ebitset_list_reverse,
  ebitset_free,
  BITSET_TABLE
};


/* Return size of initial structure.  */
size_t
ebitset_bytes (bitset_bindex n_bits ATTRIBUTE_UNUSED)
{
  return sizeof (struct ebitset_struct);
}


/* Initialize a bitset.  */

bitset
ebitset_init (bitset bset, bitset_bindex n_bits)
{
  bset->b.vtable = &ebitset_vtable;

  bset->b.csize = EBITSET_ELT_WORDS;

  EBITSET_ZERO_SET (bset);

  EBITSET_ASIZE (bset) = 0;
  EBITSET_ELTS (bset) = 0;
  ebitset_resize (bset, n_bits);

  return bset;
}


void
ebitset_release_memory (void)
{
  ebitset_free_list = 0;
  if (ebitset_obstack_init)
    {
      ebitset_obstack_init = false;
      obstack_free (&ebitset_obstack, NULL);
    }
}
