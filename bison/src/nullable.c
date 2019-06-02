/* Calculate which nonterminals can expand into the null string for Bison.

   Copyright (C) 1984, 1989, 2000-2006, 2009-2015 Free Software
   Foundation, Inc.

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


/* Set up NULLABLE, a vector saying which nonterminals can expand into
   the null string.  NULLABLE[I - NTOKENS] is nonzero if symbol I can
   do so.  */

#include <config.h>
#include "system.h"

#include "getargs.h"
#include "gram.h"
#include "nullable.h"
#include "reduce.h"
#include "symtab.h"

/* Linked list of rules.  */
typedef struct rule_list
{
  struct rule_list *next;
  rule *value;
} rule_list;

bool *nullable = NULL;

static void
nullable_print (FILE *out)
{
  int i;
  fputs ("NULLABLE\n", out);
  for (i = ntokens; i < nsyms; i++)
    fprintf (out, "  %s: %s\n", symbols[i]->tag,
             nullable[i - ntokens] ? "yes" : "no");
  fputs ("\n\n", out);
}

void
nullable_compute (void)
{
  rule_number ruleno;
  symbol_number *s1;
  symbol_number *s2;
  rule_list *p;

  symbol_number *squeue = xnmalloc (nvars, sizeof *squeue);
  size_t *rcount = xcalloc (nrules, sizeof *rcount);
  /* RITEM contains all the rules, including useless productions.
     Hence we must allocate room for useless nonterminals too.  */
  rule_list **rsets = xcalloc (nvars, sizeof *rsets);
  /* This is said to be more elements than we actually use.
     Supposedly NRITEMS - NRULES is enough.  But why take the risk?  */
  rule_list *relts = xnmalloc (nritems + nvars + 1, sizeof *relts);

  nullable = xcalloc (nvars, sizeof *nullable);

  s1 = s2 = squeue;
  p = relts;

  for (ruleno = 0; ruleno < nrules; ++ruleno)
    if (rules[ruleno].useful)
      {
        rule *rules_ruleno = &rules[ruleno];
        if (rules_ruleno->rhs[0] >= 0)
          {
            /* This rule has a non empty RHS. */
            item_number *rp = NULL;
            bool any_tokens = false;
            for (rp = rules_ruleno->rhs; *rp >= 0; ++rp)
              if (ISTOKEN (*rp))
                any_tokens = true;

            /* This rule has only nonterminals: schedule it for the second
               pass.  */
            if (!any_tokens)
              for (rp = rules_ruleno->rhs; *rp >= 0; ++rp)
                {
                  rcount[ruleno]++;
                  p->next = rsets[*rp - ntokens];
                  p->value = rules_ruleno;
                  rsets[*rp - ntokens] = p;
                  p++;
                }
          }
        else
          {
            /* This rule has an empty RHS. */
            aver (item_number_as_rule_number (rules_ruleno->rhs[0])
                  == ruleno);
            if (rules_ruleno->useful
                && ! nullable[rules_ruleno->lhs->number - ntokens])
              {
                nullable[rules_ruleno->lhs->number - ntokens] = true;
                *s2++ = rules_ruleno->lhs->number;
              }
          }
      }

  while (s1 < s2)
    for (p = rsets[*s1++ - ntokens]; p; p = p->next)
      {
        rule *r = p->value;
        if (--rcount[r->number] == 0)
          if (r->useful && ! nullable[r->lhs->number - ntokens])
            {
              nullable[r->lhs->number - ntokens] = true;
              *s2++ = r->lhs->number;
            }
      }

  free (squeue);
  free (rcount);
  free (rsets);
  free (relts);

  if (trace_flag & trace_sets)
    nullable_print (stderr);
}


void
nullable_free (void)
{
  free (nullable);
}
