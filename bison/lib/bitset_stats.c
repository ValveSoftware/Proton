/* Bitset statistics.

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

/* This file is a wrapper bitset implementation for the other bitset
   implementations.  It provides bitset compatibility checking and
   statistics gathering without having to instrument the bitset
   implementations.  When statistics gathering is enabled, the bitset
   operations get vectored through here and we then call the appropriate
   routines.  */

#include <config.h>

#include "bitset_stats.h"

#include "bbitset.h"
#include "abitset.h"
#include "ebitset.h"
#include "lbitset.h"
#include "vbitset.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "gettext.h"
#define _(Msgid)  gettext (Msgid)

/* Configuration macros.  */
#define BITSET_STATS_FILE "bitset.dat"
#define BITSET_LOG_COUNT_BINS 10
#define BITSET_LOG_SIZE_BINS  16
#define BITSET_DENSITY_BINS  20


/* Accessor macros.  */
#define BITSET_STATS_ALLOCS_INC(TYPE)                   \
    bitset_stats_info->types[(TYPE)].allocs++
#define BITSET_STATS_FREES_INC(BSET)                    \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].frees++
#define BITSET_STATS_SETS_INC(BSET)                     \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].sets++
#define BITSET_STATS_CACHE_SETS_INC(BSET)               \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].cache_sets++
#define BITSET_STATS_RESETS_INC(BSET)                   \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].resets++
#define BITSET_STATS_CACHE_RESETS_INC(BSET)             \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].cache_resets++
#define BITSET_STATS_TESTS_INC(BSET)                    \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].tests++
#define BITSET_STATS_CACHE_TESTS_INC(BSET)              \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].cache_tests++
#define BITSET_STATS_LISTS_INC(BSET)                    \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].lists++
#define BITSET_STATS_LIST_COUNTS_INC(BSET, I)           \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].list_counts[(I)]++
#define BITSET_STATS_LIST_SIZES_INC(BSET, I)            \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].list_sizes[(I)]++
#define BITSET_STATS_LIST_DENSITY_INC(BSET, I)          \
    bitset_stats_info->types[BITSET_TYPE_ (BSET)].list_density[(I)]++


struct bitset_type_info_struct
{
  unsigned int allocs;
  unsigned int frees;
  unsigned int lists;
  unsigned int sets;
  unsigned int cache_sets;
  unsigned int resets;
  unsigned int cache_resets;
  unsigned int tests;
  unsigned int cache_tests;
  unsigned int list_counts[BITSET_LOG_COUNT_BINS];
  unsigned int list_sizes[BITSET_LOG_SIZE_BINS];
  unsigned int list_density[BITSET_DENSITY_BINS];
};

struct bitset_stats_info_struct
{
  unsigned int runs;
  struct bitset_type_info_struct types[BITSET_TYPE_NUM];
};


struct bitset_stats_info_struct bitset_stats_info_data;
struct bitset_stats_info_struct *bitset_stats_info;
bool bitset_stats_enabled = false;


/* Print a percentage histogram with message MSG to FILE.  */
static void
bitset_percent_histogram_print (FILE *file, const char *name, const char *msg,
                                unsigned int n_bins, unsigned int *bins)
{
  unsigned int i;
  unsigned int total;

  total = 0;
  for (i = 0; i < n_bins; i++)
    total += bins[i];

  if (!total)
    return;

  fprintf (file, "%s %s", name, msg);
  for (i = 0; i < n_bins; i++)
    fprintf (file, "%.0f-%.0f%%\t%8u (%5.1f%%)\n",
             i * 100.0 / n_bins,
             (i + 1) * 100.0 / n_bins, bins[i],
             (100.0 * bins[i]) / total);
}


/* Print a log histogram with message MSG to FILE.  */
static void
bitset_log_histogram_print (FILE *file, const char *name, const char *msg,
                            unsigned int n_bins, unsigned int *bins)
{
  unsigned int i;
  unsigned int total;
  unsigned int max_width;

  total = 0;
  for (i = 0; i < n_bins; i++)
    total += bins[i];

  if (!total)
    return;

  /* Determine number of useful bins.  */
  for (i = n_bins; i > 3 && ! bins[i - 1]; i--)
     continue;
  n_bins = i;

  /* 2 * ceil (log10 (2) * (N - 1)) + 1.  */
  max_width = 2 * (unsigned int) (0.30103 * (n_bins - 1) + 0.9999) + 1;

  fprintf (file, "%s %s", name, msg);
  for (i = 0; i < 2; i++)
    fprintf (file, "%*d\t%8u (%5.1f%%)\n",
             max_width, i, bins[i], 100.0 * bins[i] / total);

  for (; i < n_bins; i++)
    fprintf (file, "%*lu-%lu\t%8u (%5.1f%%)\n",
             max_width - ((unsigned int) (0.30103 * (i) + 0.9999) + 1),
             1UL << (i - 1),
             (1UL << i) - 1,
             bins[i],
             (100.0 * bins[i]) / total);
}


/* Print bitset statistics to FILE.  */
static void
bitset_stats_print_1 (FILE *file, const char *name,
                      struct bitset_type_info_struct *stats)
{
  if (!stats)
    return;

  fprintf (file, "%s:\n", name);
  fprintf (file, _("%u bitset_allocs, %u freed (%.2f%%).\n"),
           stats->allocs, stats->frees,
           stats->allocs ? 100.0 * stats->frees / stats->allocs : 0);
  fprintf (file, _("%u bitset_sets, %u cached (%.2f%%)\n"),
           stats->sets, stats->cache_sets,
           stats->sets ? 100.0 * stats->cache_sets / stats->sets : 0);
  fprintf (file, _("%u bitset_resets, %u cached (%.2f%%)\n"),
           stats->resets, stats->cache_resets,
           stats->resets ? 100.0 * stats->cache_resets / stats->resets : 0);
  fprintf (file, _("%u bitset_tests, %u cached (%.2f%%)\n"),
           stats->tests, stats->cache_tests,
           stats->tests ? 100.0 * stats->cache_tests / stats->tests : 0);

  fprintf (file, _("%u bitset_lists\n"), stats->lists);

  bitset_log_histogram_print (file, name, _("count log histogram\n"),
                              BITSET_LOG_COUNT_BINS, stats->list_counts);

  bitset_log_histogram_print (file, name, _("size log histogram\n"),
                              BITSET_LOG_SIZE_BINS, stats->list_sizes);

  bitset_percent_histogram_print (file, name, _("density histogram\n"),
                                  BITSET_DENSITY_BINS, stats->list_density);
}


/* Print all bitset statistics to FILE.  */
static void
bitset_stats_print (FILE *file, bool verbose ATTRIBUTE_UNUSED)
{
  int i;

  if (!bitset_stats_info)
    return;

  fprintf (file, _("Bitset statistics:\n\n"));

  if (bitset_stats_info->runs > 1)
    fprintf (file, _("Accumulated runs = %u\n"), bitset_stats_info->runs);

  for (i = 0; i < BITSET_TYPE_NUM; i++)
    bitset_stats_print_1 (file, bitset_type_names[i],
                          &bitset_stats_info->types[i]);
}


/* Initialise bitset statistics logging.  */
void
bitset_stats_enable (void)
{
  if (!bitset_stats_info)
    bitset_stats_info = &bitset_stats_info_data;
  bitset_stats_enabled = true;
}


void
bitset_stats_disable (void)
{
  bitset_stats_enabled = false;
}


/* Read bitset statistics file.  */
void
bitset_stats_read (const char *file_name)
{
  FILE *file;

  if (!bitset_stats_info)
    return;

  if (!file_name)
    file_name = BITSET_STATS_FILE;

  file = fopen (file_name, "r");
  if (file)
    {
      if (fread (&bitset_stats_info_data, sizeof (bitset_stats_info_data),
                 1, file) != 1)
        {
          if (ferror (file))
            perror (_("cannot read stats file"));
          else
            fprintf (stderr, _("bad stats file size\n"));
        }
      if (fclose (file) != 0)
        perror (_("cannot read stats file"));
    }
  bitset_stats_info_data.runs++;
}


/* Write bitset statistics file.  */
void
bitset_stats_write (const char *file_name)
{
  FILE *file;

  if (!bitset_stats_info)
    return;

  if (!file_name)
    file_name = BITSET_STATS_FILE;

  file = fopen (file_name, "w");
  if (file)
    {
      if (fwrite (&bitset_stats_info_data, sizeof (bitset_stats_info_data),
                  1, file) != 1)
        perror (_("cannot write stats file"));
      if (fclose (file) != 0)
        perror (_("cannot write stats file"));
    }
  else
    perror (_("cannot open stats file for writing"));
}


/* Dump bitset statistics to FILE.  */
void
bitset_stats_dump (FILE *file)
{
  bitset_stats_print (file, false);
}


/* Function to be called from debugger to print bitset stats.  */
void
debug_bitset_stats (void)
{
  bitset_stats_print (stderr, true);
}


static void
bitset_stats_set (bitset dst, bitset_bindex bitno)
{
  bitset bset = dst->s.bset;
  bitset_windex wordno = bitno / BITSET_WORD_BITS;
  bitset_windex offset = wordno - bset->b.cindex;

  BITSET_STATS_SETS_INC (bset);

  if (offset < bset->b.csize)
    {
      bset->b.cdata[offset] |= (bitset_word) 1 << (bitno % BITSET_WORD_BITS);
      BITSET_STATS_CACHE_SETS_INC (bset);
    }
  else
    BITSET_SET_ (bset, bitno);
}


static void
bitset_stats_reset (bitset dst, bitset_bindex bitno)
{
  bitset bset = dst->s.bset;
  bitset_windex wordno = bitno / BITSET_WORD_BITS;
  bitset_windex offset = wordno - bset->b.cindex;

  BITSET_STATS_RESETS_INC (bset);

  if (offset < bset->b.csize)
    {
      bset->b.cdata[offset] &=
        ~((bitset_word) 1 << (bitno % BITSET_WORD_BITS));
      BITSET_STATS_CACHE_RESETS_INC (bset);
    }
  else
    BITSET_RESET_ (bset, bitno);
}


static bool
bitset_stats_toggle (bitset src, bitset_bindex bitno)
{
    return BITSET_TOGGLE_ (src->s.bset, bitno);
}


static bool
bitset_stats_test (bitset src, bitset_bindex bitno)
{
  bitset bset = src->s.bset;
  bitset_windex wordno = bitno / BITSET_WORD_BITS;
  bitset_windex offset = wordno - bset->b.cindex;

  BITSET_STATS_TESTS_INC (bset);

  if (offset < bset->b.csize)
    {
      BITSET_STATS_CACHE_TESTS_INC (bset);
      return (bset->b.cdata[offset] >> (bitno % BITSET_WORD_BITS)) & 1;
    }
  else
    return BITSET_TEST_ (bset, bitno);
}


static bitset_bindex
bitset_stats_resize (bitset src, bitset_bindex size)
{
    return BITSET_RESIZE_ (src->s.bset, size);
}


static bitset_bindex
bitset_stats_size (bitset src)
{
  return BITSET_SIZE_ (src->s.bset);
}


static bitset_bindex
bitset_stats_count (bitset src)
{
  return BITSET_COUNT_ (src->s.bset);
}


static bool
bitset_stats_empty_p (bitset dst)
{
  return BITSET_EMPTY_P_ (dst->s.bset);
}


static void
bitset_stats_ones (bitset dst)
{
  BITSET_ONES_ (dst->s.bset);
}


static void
bitset_stats_zero (bitset dst)
{
  BITSET_ZERO_ (dst->s.bset);
}


static void
bitset_stats_copy (bitset dst, bitset src)
{
  BITSET_CHECK2_ (dst, src);
  BITSET_COPY_ (dst->s.bset, src->s.bset);
}


static bool
bitset_stats_disjoint_p (bitset dst, bitset src)
{
  BITSET_CHECK2_ (dst, src);
  return BITSET_DISJOINT_P_ (dst->s.bset, src->s.bset);
}


static bool
bitset_stats_equal_p (bitset dst, bitset src)
{
  BITSET_CHECK2_ (dst, src);
  return BITSET_EQUAL_P_ (dst->s.bset, src->s.bset);
}


static void
bitset_stats_not (bitset dst, bitset src)
{
  BITSET_CHECK2_ (dst, src);
  BITSET_NOT_ (dst->s.bset, src->s.bset);
}


static bool
bitset_stats_subset_p (bitset dst, bitset src)
{
  BITSET_CHECK2_ (dst, src);
  return BITSET_SUBSET_P_ (dst->s.bset, src->s.bset);
}


static void
bitset_stats_and (bitset dst, bitset src1, bitset src2)
{
  BITSET_CHECK3_ (dst, src1, src2);
  BITSET_AND_ (dst->s.bset, src1->s.bset, src2->s.bset);
}


static bool
bitset_stats_and_cmp (bitset dst, bitset src1, bitset src2)
{
  BITSET_CHECK3_ (dst, src1, src2);
  return BITSET_AND_CMP_ (dst->s.bset, src1->s.bset, src2->s.bset);
}


static void
bitset_stats_andn (bitset dst, bitset src1, bitset src2)
{
  BITSET_CHECK3_ (dst, src1, src2);
  BITSET_ANDN_ (dst->s.bset, src1->s.bset, src2->s.bset);
}


static bool
bitset_stats_andn_cmp (bitset dst, bitset src1, bitset src2)
{
  BITSET_CHECK3_ (dst, src1, src2);
  return BITSET_ANDN_CMP_ (dst->s.bset, src1->s.bset, src2->s.bset);
}


static void
bitset_stats_or (bitset dst, bitset src1, bitset src2)
{
  BITSET_CHECK3_ (dst, src1, src2);
  BITSET_OR_ (dst->s.bset, src1->s.bset, src2->s.bset);
}


static bool
bitset_stats_or_cmp (bitset dst, bitset src1, bitset src2)
{
  BITSET_CHECK3_ (dst, src1, src2);
  return BITSET_OR_CMP_ (dst->s.bset, src1->s.bset, src2->s.bset);
}


static void
bitset_stats_xor (bitset dst, bitset src1, bitset src2)
{
  BITSET_CHECK3_ (dst, src1, src2);
  BITSET_XOR_ (dst->s.bset, src1->s.bset, src2->s.bset);
}


static bool
bitset_stats_xor_cmp (bitset dst, bitset src1, bitset src2)
{
  BITSET_CHECK3_ (dst, src1, src2);
  return BITSET_XOR_CMP_ (dst->s.bset, src1->s.bset, src2->s.bset);
}


static void
bitset_stats_and_or (bitset dst, bitset src1, bitset src2, bitset src3)
{
  BITSET_CHECK4_ (dst, src1, src2, src3);
  BITSET_AND_OR_ (dst->s.bset, src1->s.bset, src2->s.bset, src3->s.bset);
}


static bool
bitset_stats_and_or_cmp (bitset dst, bitset src1, bitset src2, bitset src3)
{
  BITSET_CHECK4_ (dst, src1, src2, src3);
  return BITSET_AND_OR_CMP_ (dst->s.bset, src1->s.bset, src2->s.bset, src3->s.bset);
}


static void
bitset_stats_andn_or (bitset dst, bitset src1, bitset src2, bitset src3)
{
  BITSET_CHECK4_ (dst, src1, src2, src3);
  BITSET_ANDN_OR_ (dst->s.bset, src1->s.bset, src2->s.bset, src3->s.bset);
}


static bool
bitset_stats_andn_or_cmp (bitset dst, bitset src1, bitset src2, bitset src3)
{
  BITSET_CHECK4_ (dst, src1, src2, src3);
  return BITSET_ANDN_OR_CMP_ (dst->s.bset, src1->s.bset, src2->s.bset, src3->s.bset);
}


static void
bitset_stats_or_and (bitset dst, bitset src1, bitset src2, bitset src3)
{
  BITSET_CHECK4_ (dst, src1, src2, src3);
  BITSET_OR_AND_ (dst->s.bset, src1->s.bset, src2->s.bset, src3->s.bset);
}


static bool
bitset_stats_or_and_cmp (bitset dst, bitset src1, bitset src2, bitset src3)
{
  BITSET_CHECK4_ (dst, src1, src2, src3);
  return BITSET_OR_AND_CMP_ (dst->s.bset, src1->s.bset, src2->s.bset, src3->s.bset);
}


static bitset_bindex
bitset_stats_list (bitset bset, bitset_bindex *list,
                   bitset_bindex num, bitset_bindex *next)
{
  bitset_bindex count;
  bitset_bindex tmp;
  bitset_bindex size;
  bitset_bindex i;

  count = BITSET_LIST_ (bset->s.bset, list, num, next);

  BITSET_STATS_LISTS_INC (bset->s.bset);

  /* Log histogram of number of set bits.  */
  for (i = 0, tmp = count; tmp; tmp >>= 1, i++)
     continue;
  if (i >= BITSET_LOG_COUNT_BINS)
     i = BITSET_LOG_COUNT_BINS - 1;
  BITSET_STATS_LIST_COUNTS_INC (bset->s.bset, i);

  /* Log histogram of number of bits in set.  */
  size = BITSET_SIZE_ (bset->s.bset);
  for (i = 0, tmp = size; tmp; tmp >>= 1, i++)
     continue;
  if (i >= BITSET_LOG_SIZE_BINS)
     i = BITSET_LOG_SIZE_BINS - 1;
  BITSET_STATS_LIST_SIZES_INC (bset->s.bset, i);

  /* Histogram of fraction of bits set.  */
  i = size ? (count * BITSET_DENSITY_BINS) / size : 0;
  if (i >= BITSET_DENSITY_BINS)
     i = BITSET_DENSITY_BINS - 1;
  BITSET_STATS_LIST_DENSITY_INC (bset->s.bset, i);
  return count;
}


static bitset_bindex
bitset_stats_list_reverse (bitset bset, bitset_bindex *list,
                           bitset_bindex num, bitset_bindex *next)
{
  return BITSET_LIST_REVERSE_ (bset->s.bset, list, num, next);
}


static void
bitset_stats_free (bitset bset)
{
  BITSET_STATS_FREES_INC (bset->s.bset);
  BITSET_FREE_ (bset->s.bset);
}


struct bitset_vtable bitset_stats_vtable = {
  bitset_stats_set,
  bitset_stats_reset,
  bitset_stats_toggle,
  bitset_stats_test,
  bitset_stats_resize,
  bitset_stats_size,
  bitset_stats_count,
  bitset_stats_empty_p,
  bitset_stats_ones,
  bitset_stats_zero,
  bitset_stats_copy,
  bitset_stats_disjoint_p,
  bitset_stats_equal_p,
  bitset_stats_not,
  bitset_stats_subset_p,
  bitset_stats_and,
  bitset_stats_and_cmp,
  bitset_stats_andn,
  bitset_stats_andn_cmp,
  bitset_stats_or,
  bitset_stats_or_cmp,
  bitset_stats_xor,
  bitset_stats_xor_cmp,
  bitset_stats_and_or,
  bitset_stats_and_or_cmp,
  bitset_stats_andn_or,
  bitset_stats_andn_or_cmp,
  bitset_stats_or_and,
  bitset_stats_or_and_cmp,
  bitset_stats_list,
  bitset_stats_list_reverse,
  bitset_stats_free,
  BITSET_STATS
};


/* Return enclosed bitset type.  */
enum bitset_type
bitset_stats_type_get (bitset bset)
{
   return BITSET_TYPE_ (bset->s.bset);
}


size_t
bitset_stats_bytes (void)
{
  return sizeof (struct bitset_stats_struct);
}


bitset
bitset_stats_init (bitset bset, bitset_bindex n_bits, enum bitset_type type)
{
  size_t bytes;
  bitset sbset;

  bset->b.vtable = &bitset_stats_vtable;

  /* Disable cache.  */
  bset->b.cindex = 0;
  bset->b.csize = 0;
  bset->b.cdata = 0;

  BITSET_NBITS_ (bset) = n_bits;

  /* Set up the actual bitset implementation that
     we are a wrapper over.  */
  switch (type)
    {
    default:
      abort ();

    case BITSET_ARRAY:
      bytes = abitset_bytes (n_bits);
      sbset = xcalloc (1, bytes);
      abitset_init (sbset, n_bits);
      break;

    case BITSET_LIST:
      bytes = lbitset_bytes (n_bits);
      sbset = xcalloc (1, bytes);
      lbitset_init (sbset, n_bits);
      break;

    case BITSET_TABLE:
      bytes = ebitset_bytes (n_bits);
      sbset = xcalloc (1, bytes);
      ebitset_init (sbset, n_bits);
      break;

    case BITSET_VARRAY:
      bytes = vbitset_bytes (n_bits);
      sbset = xcalloc (1, bytes);
      vbitset_init (sbset, n_bits);
      break;
    }

  bset->s.bset = sbset;

  BITSET_STATS_ALLOCS_INC (type);

  return bset;
}
