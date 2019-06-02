/* Binary relations.

   Copyright (C) 2002, 2004-2005, 2009-2015 Free Software Foundation,
   Inc.

   This file is part of Bison, the GNU Compiler Compiler.

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
#include "system.h"

#include <bitsetv.h>

#include "getargs.h"
#include "relation.h"

void
relation_print (relation r, relation_node size, FILE *out)
{
  relation_node i;
  relation_node j;

  for (i = 0; i < size; ++i)
    {
      fprintf (out, "%3lu: ", (unsigned long int) i);
      if (r[i])
        for (j = 0; r[i][j] != END_NODE; ++j)
          fprintf (out, "%3lu ", (unsigned long int) r[i][j]);
      fputc ('\n', out);
    }
  fputc ('\n', out);
}


/*---------------------------------------------------------------.
| digraph & traverse.                                            |
|                                                                |
| The following variables are used as common storage between the |
| two.                                                           |
`---------------------------------------------------------------*/

static relation R;
static relation_nodes INDEX;
static relation_nodes VERTICES;
static relation_node top;
static relation_node infinity;
static bitsetv F;

static void
traverse (relation_node i)
{
  relation_node j;
  relation_node height;

  VERTICES[++top] = i;
  INDEX[i] = height = top;

  if (R[i])
    for (j = 0; R[i][j] != END_NODE; ++j)
      {
        if (INDEX[R[i][j]] == 0)
          traverse (R[i][j]);

        if (INDEX[i] > INDEX[R[i][j]])
          INDEX[i] = INDEX[R[i][j]];

        bitset_or (F[i], F[i], F[R[i][j]]);
      }

  if (INDEX[i] == height)
    for (;;)
      {
        j = VERTICES[top--];
        INDEX[j] = infinity;

        if (i == j)
          break;

        bitset_copy (F[j], F[i]);
      }
}


void
relation_digraph (relation r, relation_node size, bitsetv *function)
{
  relation_node i;

  infinity = size + 2;
  INDEX = xcalloc (size + 1, sizeof *INDEX);
  VERTICES = xnmalloc (size + 1, sizeof *VERTICES);
  top = 0;

  R = r;
  F = *function;

  for (i = 0; i < size; i++)
    if (INDEX[i] == 0 && R[i])
      traverse (i);

  free (INDEX);
  free (VERTICES);

  *function = F;
}


/*-------------------------------------------.
| Destructively transpose R_ARG, of size N.  |
`-------------------------------------------*/

void
relation_transpose (relation *R_arg, relation_node n)
{
  relation r = *R_arg;
  /* The result. */
  relation new_R = xnmalloc (n, sizeof *new_R);
  /* END_R[I] -- next entry of NEW_R[I]. */
  relation end_R = xnmalloc (n, sizeof *end_R);
  /* NEDGES[I] -- total size of NEW_R[I]. */
  size_t *nedges = xcalloc (n, sizeof *nedges);
  relation_node i;
  relation_node j;

  if (trace_flag & trace_sets)
    {
      fputs ("relation_transpose: input\n", stderr);
      relation_print (r, n, stderr);
    }

  /* Count. */
  for (i = 0; i < n; i++)
    if (r[i])
      for (j = 0; r[i][j] != END_NODE; ++j)
        ++nedges[r[i][j]];

  /* Allocate. */
  for (i = 0; i < n; i++)
    {
      relation_node *sp = NULL;
      if (nedges[i] > 0)
        {
          sp = xnmalloc (nedges[i] + 1, sizeof *sp);
          sp[nedges[i]] = END_NODE;
        }
      new_R[i] = sp;
      end_R[i] = sp;
    }

  /* Store. */
  for (i = 0; i < n; i++)
    if (r[i])
      for (j = 0; r[i][j] != END_NODE; ++j)
        *end_R[r[i][j]]++ = i;

  free (nedges);
  free (end_R);

  /* Free the input: it is replaced with the result. */
  for (i = 0; i < n; i++)
    free (r[i]);
  free (r);

  if (trace_flag & trace_sets)
    {
      fputs ("relation_transpose: output\n", stderr);
      relation_print (new_R, n, stderr);
    }

  *R_arg = new_R;
}
