/* Bitset vectors.

   Copyright (C) 2001-2002, 2004-2006, 2009-2015 Free Software
   Foundation, Inc.

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

#include "bitsetv.h"

#include <stdlib.h>


/* Create a vector of N_VECS bitsets, each of N_BITS, and of
   type TYPE.  */
bitset *
bitsetv_alloc (bitset_bindex n_vecs, bitset_bindex n_bits,
               enum bitset_type type)
{
  size_t vector_bytes;
  size_t bytes;
  bitset *bsetv;
  bitset_bindex i;

  /* Determine number of bytes for each set.  */
  bytes = bitset_bytes (type, n_bits);

  /* If size calculation overflows, memory is exhausted.  */
  if (BITSET_SIZE_MAX / (sizeof (bitset) + bytes) <= n_vecs)
    xalloc_die ();

  /* Allocate vector table at head of bitset array.  */
  vector_bytes = (n_vecs + 1) * sizeof (bitset) + bytes - 1;
  vector_bytes -= vector_bytes % bytes;
  bsetv = xcalloc (1, vector_bytes + bytes * n_vecs);

  for (i = 0; i < n_vecs; i++)
    {
      bsetv[i] = (bitset) (void *) ((char *) bsetv + vector_bytes + i * bytes);

      bitset_init (bsetv[i], n_bits, type);
    }

  /* Null terminate table.  */
  bsetv[i] = 0;
  return bsetv;
}


/* Create a vector of N_VECS bitsets, each of N_BITS, and with
   attribute hints specified by ATTR.  */
bitset *
bitsetv_create (bitset_bindex n_vecs, bitset_bindex n_bits, unsigned int attr)
{
  enum bitset_type type;

  type = bitset_type_choose (n_bits, attr);
  return bitsetv_alloc (n_vecs, n_bits, type);
}


/* Free bitset vector BSETV.  */
void
bitsetv_free (bitsetv bsetv)
{
  bitset_bindex i;

  for (i = 0; bsetv[i]; i++)
      BITSET_FREE_ (bsetv[i]);
  free (bsetv);
}


/* Zero a vector of bitsets.  */
void
bitsetv_zero (bitsetv bsetv)
{
  bitset_bindex i;

  for (i = 0; bsetv[i]; i++)
    bitset_zero (bsetv[i]);
}


/* Set a vector of bitsets to ones.  */
void
bitsetv_ones (bitsetv bsetv)
{
  bitset_bindex i;

  for (i = 0; bsetv[i]; i++)
    bitset_ones (bsetv[i]);
}


/* Given a vector BSETV of N bitsets of size N, modify its contents to
   be the transitive closure of what was given.  */
void
bitsetv_transitive_closure (bitsetv bsetv)
{
  bitset_bindex i;
  bitset_bindex j;

  for (i = 0; bsetv[i]; i++)
    for (j = 0; bsetv[j]; j++)
      if (bitset_test (bsetv[j], i))
        bitset_or (bsetv[j], bsetv[j], bsetv[i]);
}


/* Given a vector BSETV of N bitsets of size N, modify its contents to
   be the reflexive transitive closure of what was given.  This is
   the same as transitive closure but with all bits on the diagonal
   of the bit matrix set.  */
void
bitsetv_reflexive_transitive_closure (bitsetv bsetv)
{
  bitset_bindex i;

  bitsetv_transitive_closure (bsetv);
  for (i = 0; bsetv[i]; i++)
    bitset_set (bsetv[i], i);
}


/* Dump the contents of a bitset vector BSETV with N_VECS elements to
   FILE.  */
void
bitsetv_dump (FILE *file, char const *title, char const *subtitle,
              bitsetv bsetv)
{
  bitset_windex i;

  fprintf (file, "%s\n", title);
  for (i = 0; bsetv[i]; i++)
    {
      fprintf (file, "%s %lu\n", subtitle, (unsigned long int) i);
      bitset_dump (file, bsetv[i]);
    }

  fprintf (file, "\n");
}


void
debug_bitsetv (bitsetv bsetv)
{
  bitset_windex i;

  for (i = 0; bsetv[i]; i++)
    {
      fprintf (stderr, "%lu: ", (unsigned long int) i);
      debug_bitset (bsetv[i]);
    }

  fprintf (stderr, "\n");
}
