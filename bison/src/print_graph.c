/* Output a graph of the generated parser, for Bison.

   Copyright (C) 2001-2007, 2009-2015 Free Software Foundation, Inc.

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

#include "LR0.h"
#include "closure.h"
#include "complain.h"
#include "conflicts.h"
#include "files.h"
#include "getargs.h"
#include "gram.h"
#include "graphviz.h"
#include "lalr.h"
#include "print_graph.h"
#include "reader.h"
#include "state.h"
#include "symtab.h"


/*----------------------------.
| Construct the node labels.  |
`----------------------------*/

/* Print the lhs of a rule in such a manner that there is no vertical
   repetition, like in *.output files. */

static void
print_core (struct obstack *oout, state *s)
{
  item_number const *sitems = s->items;
  symbol *previous_lhs = NULL;
  size_t i;
  size_t snritems = s->nitems;

  /* Output all the items of a state, not just its kernel.  */
  if (report_flag & report_itemsets)
    {
      closure (sitems, snritems);
      sitems = itemset;
      snritems = nitemset;
    }

  obstack_printf (oout, _("State %d"), s->number);
  obstack_sgrow (oout, "\\n\\l");
  for (i = 0; i < snritems; i++)
    {
      item_number const *sp1 = ritem + sitems[i];
      item_number const *sp = sp1;
      rule *r;

      while (0 <= *sp)
        sp++;

      r = &rules[item_number_as_rule_number (*sp)];

      obstack_printf (oout, "%3d ", r->number);
      if (previous_lhs && UNIQSTR_EQ (previous_lhs->tag, r->lhs->tag))
        obstack_printf (oout, "%*s| ",
                        (int) strlen (previous_lhs->tag), "");
      else
        obstack_printf (oout, "%s: ", escape (r->lhs->tag));
      previous_lhs = r->lhs;

      for (sp = r->rhs; sp < sp1; sp++)
        obstack_printf (oout, "%s ", escape (symbols[*sp]->tag));

      obstack_1grow (oout, '.');

      if (0 <= *r->rhs)
        for (/* Nothing */; *sp >= 0; ++sp)
          obstack_printf (oout, " %s", escape (symbols[*sp]->tag));
      else
        obstack_printf (oout, " %%empty");

      /* Experimental feature: display the lookahead tokens. */
      if (report_flag & report_lookahead_tokens
          && item_number_is_rule_number (*sp1))
        {
          /* Find the reduction we are handling.  */
          reductions *reds = s->reductions;
          int redno = state_reduction_find (s, r);

          /* Print them if there are.  */
          if (reds->lookahead_tokens && redno != -1)
            {
              bitset_iterator biter;
              int k;
              char const *sep = "";
              obstack_sgrow (oout, "  [");
              BITSET_FOR_EACH (biter, reds->lookahead_tokens[redno], k, 0)
                {
                  obstack_sgrow (oout, sep);
                  obstack_sgrow (oout, escape (symbols[k]->tag));
                  sep = ", ";
                }
              obstack_1grow (oout, ']');
            }
        }
      obstack_sgrow (oout, "\\l");
    }
}


/*---------------------------------------------------------------.
| Output in graph_obstack edges specifications in incidence with |
| current node.                                                  |
`---------------------------------------------------------------*/

static void
print_actions (state const *s, FILE *fgraph)
{
  transitions const *trans = s->transitions;
  int i;

  if (!trans->num && !s->reductions)
    return;

  for (i = 0; i < trans->num; i++)
    if (!TRANSITION_IS_DISABLED (trans, i))
      {
        state *s1 = trans->states[i];
        symbol_number sym = s1->accessing_symbol;

        /* Shifts are solid, gotos are dashed, and error is dotted.  */
        char const *style =
          (TRANSITION_IS_ERROR (trans, i) ? "dotted"
           : TRANSITION_IS_SHIFT (trans, i) ? "solid"
           : "dashed");

        if (TRANSITION_IS_ERROR (trans, i)
            && STRNEQ (symbols[sym]->tag, "error"))
          abort ();
        output_edge (s->number, s1->number,
                     TRANSITION_IS_ERROR (trans, i) ? NULL : symbols[sym]->tag,
                     style, fgraph);
      }
  /* Display reductions. */
  output_red (s, s->reductions, fgraph);
}


/*-------------------------------------------------------------.
| Output in FGRAPH the current node specifications and exiting |
| edges.                                                       |
`-------------------------------------------------------------*/

static void
print_state (state *s, FILE *fgraph)
{
  struct obstack node_obstack;

  /* A node's label contains its items.  */
  obstack_init (&node_obstack);
  print_core (&node_obstack, s);
  output_node (s->number, obstack_finish0 (&node_obstack), fgraph);
  obstack_free (&node_obstack, 0);

  /* Output the edges.  */
  print_actions (s, fgraph);
}


void
print_graph (void)
{
  state_number i;
  FILE *fgraph = xfopen (spec_graph_file, "w");
  start_graph (fgraph);

  /* Output nodes and edges. */
  new_closure (nritems);
  for (i = 0; i < nstates; i++)
    print_state (states[i], fgraph);
  free_closure ();

  finish_graph (fgraph);
  xfclose (fgraph);
}
