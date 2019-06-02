/* Base bitset stuff.

   Copyright (C) 2002-2004, 2006, 2009-2015 Free Software Foundation,
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

#ifndef _BBITSET_H
#define _BBITSET_H

#include "libiberty.h"

#include <stdbool.h>
#include <limits.h>
#include <stddef.h>

/* Currently we support five flavours of bitsets:
   BITSET_ARRAY:  Array of bits (fixed size, fast for dense bitsets).
                  Memory for bit array and bitset structure allocated
                  contiguously.
   BITSET_LIST:   Linked list of arrays of bits (variable size, least storage
                  for large very sparse sets).
   BITSET_TABLE:  Expandable table of pointers to arrays of bits
                  (variable size, less storage for large sparse sets).
                  Faster than BITSET_LIST for random access.
   BITSET_VARRAY: Variable array of bits (variable size, fast for
                  dense bitsets).
   BITSET_STATS:  Wrapper bitset for internal use only.  Used for gathering
                  statistics and/or better run-time checking.
*/
enum bitset_type {BITSET_ARRAY, BITSET_LIST, BITSET_TABLE, BITSET_VARRAY,
                  BITSET_TYPE_NUM, BITSET_STATS};
#define BITSET_TYPE_NAMES {"abitset", "lbitset", "ebitset", "vbitset"}

extern const char * const bitset_type_names[];

enum bitset_alloc_type {BITSET_MALLOC, BITSET_OBALLOC};

/* Data type used to store a word of bits.  */
typedef unsigned long int bitset_word;
#define BITSET_WORD_BITS ((unsigned int) (CHAR_BIT * sizeof (bitset_word)))

/* Bit index.  In theory we might need a type wider than size_t, but
   in practice we lose at most a factor of CHAR_BIT by going with
   size_t, and that is good enough.  If this type is changed to be
   wider than size_t, the code needs to be modified to check for
   overflow when converting bit counts to byte or word counts.
   The bit and word index types must be unsigned.  */
typedef size_t bitset_bindex;

/* Word index.  */
typedef size_t bitset_windex;

/* Maximum values for commonly-used unsigned types.  BITSET_SIZE_MAX
   always equals SIZE_MAX, but some older systems lack SIZE_MAX.  */
#define BITSET_BINDEX_MAX ((bitset_bindex) -1)

/* Limit max word index to the maximum value of a signed integer
   to simplify cache disabling.  */
#define BITSET_WINDEX_MAX (((bitset_windex) -1) >> 1)
#define BITSET_SIZE_MAX ((size_t) -1)

#define BITSET_MSB ((bitset_word) 1 << (BITSET_WORD_BITS - 1))

#define BITSET_LIST_SIZE 1024

enum bitset_ops {BITSET_OP_ZERO, BITSET_OP_ONES,
                 BITSET_OP_COPY, BITSET_OP_NOT,
                 BITSET_OP_EMPTY_P, BITSET_OP_EQUAL_P,
                 BITSET_OP_SUBSET_P, BITSET_OP_DISJOINT_P,
                 BITSET_OP_AND, BITSET_OP_OR, BITSET_OP_XOR, BITSET_OP_ANDN,
                 BITSET_OP_OR_AND, BITSET_OP_AND_OR, BITSET_OP_ANDN_OR};

struct bbitset_struct
{
  const struct bitset_vtable *vtable;
  bitset_windex cindex;         /* Cache word index.  */
  bitset_windex csize;          /* Cache size in words.  */
  bitset_word *cdata;           /* Cache data pointer.  */
  bitset_bindex n_bits;         /* Number of bits.  */
  /* Perhaps we could sacrifice another word to indicate
     that the bitset is known to be zero, that a bit has been set
     in the cache, and that a bit has been cleared in the cache.
     This would speed up some of the searches but slightly slow down
     bit set/reset operations of cached bits.  */
};


typedef union bitset_union *bitset;


/* Private accessor macros to bitset structure.  */
#define BITSET_VTABLE_(SRC) (SRC)->b.vtable
#define BITSET_CINDEX_(SRC) (SRC)->b.cindex
#define BITSET_CDATA_(SRC) (SRC)->b.cdata
#define BITSET_CSIZE_(SRC) (SRC)->b.csize
#define BITSET_NBITS_(SRC) (SRC)->b.n_bits


/* The contents of this structure should be considered private.  */
struct bitset_vtable
{
  void (*set) (bitset, bitset_bindex);
  void (*reset) (bitset, bitset_bindex);
  bool (*toggle) (bitset, bitset_bindex);
  bool (*test) (bitset, bitset_bindex);
  bitset_bindex (*resize) (bitset, bitset_bindex);
  bitset_bindex (*size) (bitset);
  bitset_bindex (*count) (bitset);

  bool (*empty_p) (bitset);
  void (*ones) (bitset);
  void (*zero) (bitset);

  void (*copy) (bitset, bitset);
  bool (*disjoint_p) (bitset, bitset);
  bool (*equal_p) (bitset, bitset);
  void (*not_) (bitset, bitset);
  bool (*subset_p) (bitset, bitset);

  void (*and_) (bitset, bitset, bitset);
  bool (*and_cmp) (bitset, bitset, bitset);
  void (*andn) (bitset, bitset, bitset);
  bool (*andn_cmp) (bitset, bitset, bitset);
  void (*or_) (bitset, bitset, bitset);
  bool (*or_cmp) (bitset, bitset, bitset);
  void (*xor_) (bitset, bitset, bitset);
  bool (*xor_cmp) (bitset, bitset, bitset);

  void (*and_or) (bitset, bitset, bitset, bitset);
  bool (*and_or_cmp) (bitset, bitset, bitset, bitset);
  void (*andn_or) (bitset, bitset, bitset, bitset);
  bool (*andn_or_cmp) (bitset, bitset, bitset, bitset);
  void (*or_and) (bitset, bitset, bitset, bitset);
  bool (*or_and_cmp) (bitset, bitset, bitset, bitset);

  bitset_bindex (*list) (bitset, bitset_bindex *, bitset_bindex,
                         bitset_bindex *);
  bitset_bindex (*list_reverse) (bitset, bitset_bindex *, bitset_bindex,
                                 bitset_bindex *);
  void (*free) (bitset);
  enum bitset_type type;
};

#define BITSET_COMPATIBLE_(BSET1, BSET2) \
((BSET1)->b.vtable == (BSET2)->b.vtable)

#define BITSET_CHECK2_(DST, SRC) \
if (!BITSET_COMPATIBLE_ (DST, SRC)) abort ();

#define BITSET_CHECK3_(DST, SRC1, SRC2) \
if (!BITSET_COMPATIBLE_ (DST, SRC1) \
    || !BITSET_COMPATIBLE_ (DST, SRC2)) abort ();

#define BITSET_CHECK4_(DST, SRC1, SRC2, SRC3) \
if (!BITSET_COMPATIBLE_ (DST, SRC1) || !BITSET_COMPATIBLE_ (DST, SRC2) \
    || !BITSET_COMPATIBLE_ (DST, SRC3)) abort ();


/* Redefine number of bits in bitset DST.  */
#define BITSET_RESIZE_(DST, SIZE) (DST)->b.vtable->resize (DST, SIZE)

/* Return size in bits of bitset SRC.  */
#define BITSET_SIZE_(SRC) (SRC)->b.vtable->size (SRC)

/* Return number of bits set in bitset SRC.  */
#define BITSET_COUNT_(SRC) (SRC)->b.vtable->count (SRC)

/* Return type of bitset SRC.  */
#define BITSET_TYPE_(DST) (DST)->b.vtable->type

/* Set bit BITNO in bitset DST.  */
#define BITSET_SET_(DST, BITNO) (DST)->b.vtable->set (DST, BITNO)

/* Reset bit BITNO in bitset DST.  */
#define BITSET_RESET_(DST, BITNO) (DST)->b.vtable->reset (DST, BITNO)

/* Toggle bit BITNO in bitset DST.  */
#define BITSET_TOGGLE_(DST, BITNO) (DST)->b.vtable->toggle (DST, BITNO)

/* Return non-zero if bit BITNO in bitset SRC is set.  */
#define BITSET_TEST_(SRC, BITNO) (SRC)->b.vtable->test (SRC, BITNO)

/* Free bitset SRC.  */
#define BITSET_FREE_(SRC)\
 ((SRC)->b.vtable->free ? (SRC)->b.vtable->free (SRC) :(void)0)


/* Return SRC == 0.  */
#define BITSET_EMPTY_P_(SRC) (SRC)->b.vtable->empty_p (SRC)

/* DST = ~0.  */
#define BITSET_ONES_(DST) (DST)->b.vtable->ones (DST)

/* DST = 0.  */
#define BITSET_ZERO_(DST) (DST)->b.vtable->zero (DST)



/* DST = SRC.  */
#define BITSET_COPY_(DST, SRC) (SRC)->b.vtable->copy (DST, SRC)

/* Return DST & SRC == 0.  */
#define BITSET_DISJOINT_P_(DST, SRC) (SRC)->b.vtable->disjoint_p (DST, SRC)

/* Return DST == SRC.  */
#define BITSET_EQUAL_P_(DST, SRC) (SRC)->b.vtable->equal_p (DST, SRC)

/* DST = ~SRC.  */
#define BITSET_NOT_(DST, SRC) (SRC)->b.vtable->not_ (DST, SRC)

/* Return DST == DST | SRC.  */
#define BITSET_SUBSET_P_(DST, SRC) (SRC)->b.vtable->subset_p (DST, SRC)


/* DST = SRC1 & SRC2.  */
#define BITSET_AND_(DST, SRC1, SRC2) (SRC1)->b.vtable->and_ (DST, SRC1, SRC2)
#define BITSET_AND_CMP_(DST, SRC1, SRC2) (SRC1)->b.vtable->and_cmp (DST, SRC1, SRC2)

/* DST = SRC1 & ~SRC2.  */
#define BITSET_ANDN_(DST, SRC1, SRC2) (SRC1)->b.vtable->andn (DST, SRC1, SRC2)
#define BITSET_ANDN_CMP_(DST, SRC1, SRC2) (SRC1)->b.vtable->andn_cmp (DST, SRC1, SRC2)

/* DST = SRC1 | SRC2.  */
#define BITSET_OR_(DST, SRC1, SRC2) (SRC1)->b.vtable->or_ (DST, SRC1, SRC2)
#define BITSET_OR_CMP_(DST, SRC1, SRC2) (SRC1)->b.vtable->or_cmp (DST, SRC1, SRC2)

/* DST = SRC1 ^ SRC2.  */
#define BITSET_XOR_(DST, SRC1, SRC2) (SRC1)->b.vtable->xor_ (DST, SRC1, SRC2)
#define BITSET_XOR_CMP_(DST, SRC1, SRC2) (SRC1)->b.vtable->xor_cmp (DST, SRC1, SRC2)



/* DST = (SRC1 & SRC2) | SRC3.  Return non-zero if
   DST != (SRC1 & SRC2) | SRC3.  */
#define BITSET_AND_OR_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->and_or (DST, SRC1, SRC2, SRC3)
#define BITSET_AND_OR_CMP_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->and_or_cmp (DST, SRC1, SRC2, SRC3)

/* DST = (SRC1 & ~SRC2) | SRC3.  Return non-zero if
   DST != (SRC1 & ~SRC2) | SRC3.  */
#define BITSET_ANDN_OR_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->andn_or (DST, SRC1, SRC2, SRC3)
#define BITSET_ANDN_OR_CMP_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->andn_or_cmp (DST, SRC1, SRC2, SRC3)

/* DST = (SRC1 | SRC2) & SRC3.  Return non-zero if
   DST != (SRC1 | SRC2) & SRC3.  */
#define BITSET_OR_AND_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->or_and (DST, SRC1, SRC2, SRC3)
#define BITSET_OR_AND_CMP_(DST, SRC1, SRC2, SRC3) \
 (SRC1)->b.vtable->or_and_cmp (DST, SRC1, SRC2, SRC3)


/* Find list of up to NUM bits set in BSET starting from and including
   *NEXT.  Return with actual number of bits found and with *NEXT
   indicating where search stopped.  */
#define BITSET_LIST_(BSET, LIST, NUM, NEXT) \
 (BSET)->b.vtable->list (BSET, LIST, NUM, NEXT)

/* Find reverse list of up to NUM bits set in BSET starting from and
   including NEXT.  Return with actual number of bits found and with
   *NEXT indicating where search stopped.  */
#define BITSET_LIST_REVERSE_(BSET, LIST, NUM, NEXT) \
 (BSET)->b.vtable->list_reverse (BSET, LIST, NUM, NEXT)


/* Private functions for bitset implementations.  */

extern bool bitset_toggle_ (bitset, bitset_bindex);

extern bitset_bindex bitset_count_ (bitset);

extern bitset_bindex bitset_size_ (bitset);

extern bool bitset_copy_ (bitset, bitset);

extern void bitset_and_or_ (bitset, bitset, bitset, bitset);

extern bool bitset_and_or_cmp_ (bitset, bitset, bitset, bitset);

extern void bitset_andn_or_ (bitset, bitset, bitset, bitset);

extern bool bitset_andn_or_cmp_ (bitset, bitset, bitset, bitset);

extern void bitset_or_and_ (bitset, bitset, bitset, bitset);

extern bool bitset_or_and_cmp_ (bitset, bitset, bitset, bitset);

#endif /* _BBITSET_H  */
