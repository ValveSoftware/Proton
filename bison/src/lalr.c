/* Compute lookahead criteria for Bison.

   Copyright (C) 1984, 1986, 1989, 2000-2015 Free Software Foundation,
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


/* Find which rules need lookahead in each state, and which lookahead
   tokens they accept.  */

#include <config.h>
#include "system.h"

#include <bitset.h>
#include <bitsetv.h>

#include "LR0.h"
#include "complain.h"
#include "derives.h"
#include "getargs.h"
#include "gram.h"
#include "lalr.h"
#include "muscle-tab.h"
#include "nullable.h"
#include "reader.h"
#include "relation.h"
#include "symtab.h"

goto_number *goto_map;
goto_number ngotos;
state_number *from_state;
state_number *to_state;
bitsetv goto_follows = NULL;

/* Linked list of goto numbers.  */
typedef struct goto_list
{
  struct goto_list *next;
  goto_number value;
} goto_list;


/* LA is an NLA by NTOKENS matrix of bits.  LA[l, i] is 1 if the rule
   LArule[l] is applicable in the appropriate state when the next
   token is symbol i.  If LA[l, i] and LA[l, j] are both 1 for i != j,
   it is a conflict.  */

static bitsetv LA = NULL;
size_t nLA;


static goto_number **includes;
static goto_list **lookback;


void
set_goto_map (void)
{
  state_number s;
  goto_number *temp_map = xnmalloc (nvars + 1, sizeof *temp_map);

  goto_map = xcalloc (nvars + 1, sizeof *goto_map);
  ngotos = 0;
  for (s = 0; s < nstates; ++s)
    {
      transitions *sp = states[s]->transitions;
      int i;
      for (i = sp->num - 1; i >= 0 && TRANSITION_IS_GOTO (sp, i); --i)
        {
          ngotos++;

          /* Abort if (ngotos + 1) would overflow.  */
          aver (ngotos != GOTO_NUMBER_MAXIMUM);

          goto_map[TRANSITION_SYMBOL (sp, i) - ntokens]++;
        }
    }

  {
    goto_number k = 0;
    int i;
    for (i = ntokens; i < nsyms; i++)
      {
        temp_map[i - ntokens] = k;
        k += goto_map[i - ntokens];
      }

    for (i = ntokens; i < nsyms; i++)
      goto_map[i - ntokens] = temp_map[i - ntokens];

    goto_map[nsyms - ntokens] = ngotos;
    temp_map[nsyms - ntokens] = ngotos;
  }

  from_state = xcalloc (ngotos, sizeof *from_state);
  to_state = xcalloc (ngotos, sizeof *to_state);

  for (s = 0; s < nstates; ++s)
    {
      transitions *sp = states[s]->transitions;
      int i;
      for (i = sp->num - 1; i >= 0 && TRANSITION_IS_GOTO (sp, i); --i)
        {
          goto_number k = temp_map[TRANSITION_SYMBOL (sp, i) - ntokens]++;
          from_state[k] = s;
          to_state[k] = sp->states[i]->number;
        }
    }

  free (temp_map);
}


goto_number
map_goto (state_number s0, symbol_number sym)
{
  goto_number low = goto_map[sym - ntokens];
  goto_number high = goto_map[sym - ntokens + 1] - 1;

  for (;;)
    {
      goto_number middle;
      state_number s;
      aver (low <= high);
      middle = (low + high) / 2;
      s = from_state[middle];
      if (s == s0)
        return middle;
      else if (s < s0)
        low = middle + 1;
      else
        high = middle - 1;
    }
}


static void
initialize_F (void)
{
  goto_number **reads = xnmalloc (ngotos, sizeof *reads);
  goto_number *edge = xnmalloc (ngotos + 1, sizeof *edge);
  goto_number nedges = 0;

  goto_number i;

  goto_follows = bitsetv_create (ngotos, ntokens, BITSET_FIXED);

  for (i = 0; i < ngotos; i++)
    {
      state_number stateno = to_state[i];
      transitions *sp = states[stateno]->transitions;

      int j;
      FOR_EACH_SHIFT (sp, j)
        bitset_set (goto_follows[i], TRANSITION_SYMBOL (sp, j));

      for (; j < sp->num; j++)
        {
          symbol_number sym = TRANSITION_SYMBOL (sp, j);
          if (nullable[sym - ntokens])
            edge[nedges++] = map_goto (stateno, sym);
        }

      if (nedges == 0)
        reads[i] = NULL;
      else
        {
          reads[i] = xnmalloc (nedges + 1, sizeof reads[i][0]);
          memcpy (reads[i], edge, nedges * sizeof edge[0]);
          reads[i][nedges] = END_NODE;
          nedges = 0;
        }
    }

  relation_digraph (reads, ngotos, &goto_follows);

  for (i = 0; i < ngotos; i++)
    free (reads[i]);

  free (reads);
  free (edge);
}


static void
add_lookback_edge (state *s, rule *r, goto_number gotono)
{
  int ri = state_reduction_find (s, r);
  goto_list *sp = xmalloc (sizeof *sp);
  sp->next = lookback[(s->reductions->lookahead_tokens - LA) + ri];
  sp->value = gotono;
  lookback[(s->reductions->lookahead_tokens - LA) + ri] = sp;
}



static void
build_relations (void)
{
  goto_number *edge = xnmalloc (ngotos + 1, sizeof *edge);
  state_number *states1 = xnmalloc (ritem_longest_rhs () + 1, sizeof *states1);
  goto_number i;

  includes = xnmalloc (ngotos, sizeof *includes);

  for (i = 0; i < ngotos; i++)
    {
      int nedges = 0;
      symbol_number symbol1 = states[to_state[i]]->accessing_symbol;
      rule **rulep;

      for (rulep = derives[symbol1 - ntokens]; *rulep; rulep++)
        {
          bool done;
          int length = 1;
          item_number const *rp;
          state *s = states[from_state[i]];
          states1[0] = s->number;

          for (rp = (*rulep)->rhs; ! item_number_is_rule_number (*rp); rp++)
            {
              s = transitions_to (s->transitions,
                                  item_number_as_symbol_number (*rp));
              states1[length++] = s->number;
            }

          if (!s->consistent)
            add_lookback_edge (s, *rulep, i);

          length--;
          done = false;
          while (!done)
            {
              done = true;
              /* Each rhs ends in a rule number, and there is a
                 sentinel (ritem[-1]=0) before the first rhs, so it is safe to
                 decrement RP here.  */
              rp--;
              if (ISVAR (*rp))
                {
                  /* Downcasting from item_number to symbol_number.  */
                  edge[nedges++] = map_goto (states1[--length],
                                             item_number_as_symbol_number (*rp));
                  if (nullable[*rp - ntokens])
                    done = false;
                }
            }
        }

      if (nedges == 0)
        includes[i] = NULL;
      else
        {
          int j;
          includes[i] = xnmalloc (nedges + 1, sizeof includes[i][0]);
          for (j = 0; j < nedges; j++)
            includes[i][j] = edge[j];
          includes[i][nedges] = END_NODE;
        }
    }

  free (edge);
  free (states1);

  relation_transpose (&includes, ngotos);
}



static void
compute_FOLLOWS (void)
{
  goto_number i;

  relation_digraph (includes, ngotos, &goto_follows);

  for (i = 0; i < ngotos; i++)
    free (includes[i]);

  free (includes);
}


static void
compute_lookahead_tokens (void)
{
  size_t i;
  goto_list *sp;

  for (i = 0; i < nLA; i++)
    for (sp = lookback[i]; sp; sp = sp->next)
      bitset_or (LA[i], LA[i], goto_follows[sp->value]);

  /* Free LOOKBACK. */
  for (i = 0; i < nLA; i++)
    LIST_FREE (goto_list, lookback[i]);

  free (lookback);
}


/*----------------------------------------------------.
| Count the number of lookahead tokens required for S |
| (N_LOOKAHEAD_TOKENS member).                        |
`----------------------------------------------------*/

static int
state_lookahead_tokens_count (state *s, bool default_reduction_only_for_accept)
{
  int n_lookahead_tokens = 0;
  reductions *rp = s->reductions;
  transitions *sp = s->transitions;

  /* Transitions are only disabled during conflict resolution, and that
     hasn't happened yet, so there should be no need to check that
     transition 0 hasn't been disabled before checking if it is a shift.
     However, this check was performed at one time, so we leave it as an
     aver.  */
  aver (sp->num == 0 || !TRANSITION_IS_DISABLED (sp, 0));

  /* We need a lookahead either to distinguish different reductions
     (i.e., there are two or more), or to distinguish a reduction from a
     shift.  Otherwise, it is straightforward, and the state is
     'consistent'.  However, do not treat a state with any reductions as
     consistent unless it is the accepting state (because there is never
     a lookahead token that makes sense there, and so no lookahead token
     should be read) if the user has otherwise disabled default
     reductions.  */
  if (rp->num > 1
      || (rp->num == 1 && sp->num && TRANSITION_IS_SHIFT (sp, 0))
      || (rp->num == 1 && rp->rules[0]->number != 0
          && default_reduction_only_for_accept))
    n_lookahead_tokens += rp->num;
  else
    s->consistent = 1;

  return n_lookahead_tokens;
}


/*----------------------------------------------------.
| Compute LA, NLA, and the lookahead_tokens members.  |
`----------------------------------------------------*/

void
initialize_LA (void)
{
  state_number i;
  bitsetv pLA;
  bool default_reduction_only_for_accept;
  {
    char *default_reductions =
      muscle_percent_define_get ("lr.default-reduction");
    default_reduction_only_for_accept = STREQ (default_reductions, "accepting");
    free (default_reductions);
  }

  /* Compute the total number of reductions requiring a lookahead.  */
  nLA = 0;
  for (i = 0; i < nstates; i++)
    nLA +=
      state_lookahead_tokens_count (states[i],
                                    default_reduction_only_for_accept);
  /* Avoid having to special case 0.  */
  if (!nLA)
    nLA = 1;

  pLA = LA = bitsetv_create (nLA, ntokens, BITSET_FIXED);

  /* Initialize the members LOOKAHEAD_TOKENS for each state whose reductions
     require lookahead tokens.  */
  for (i = 0; i < nstates; i++)
    {
      int count =
        state_lookahead_tokens_count (states[i],
                                      default_reduction_only_for_accept);
      if (count)
        {
          states[i]->reductions->lookahead_tokens = pLA;
          pLA += count;
        }
    }
}


/*---------------------------------------------.
| Output the lookahead tokens for each state.  |
`---------------------------------------------*/

static void
lookahead_tokens_print (FILE *out)
{
  state_number i;
  fprintf (out, "Lookahead tokens: BEGIN\n");
  for (i = 0; i < nstates; ++i)
    {
      reductions *reds = states[i]->reductions;
      bitset_iterator iter;
      int n_lookahead_tokens = 0;

      if (reds->lookahead_tokens)
        {
          int j;
          for (j = 0; j < reds->num; ++j)
            if (reds->lookahead_tokens[j])
              ++n_lookahead_tokens;
        }

      fprintf (out, "State %d: %d lookahead tokens\n",
               i, n_lookahead_tokens);

      if (reds->lookahead_tokens)
        {
          int j, k;
          for (j = 0; j < reds->num; ++j)
            BITSET_FOR_EACH (iter, reds->lookahead_tokens[j], k, 0)
              fprintf (out, "   on %d (%s) -> rule %d\n",
                       k, symbols[k]->tag,
                       reds->rules[j]->number);
        }
    }
  fprintf (out, "Lookahead tokens: END\n");
}

void
lalr (void)
{
  initialize_LA ();
  set_goto_map ();
  initialize_F ();
  lookback = xcalloc (nLA, sizeof *lookback);
  build_relations ();
  compute_FOLLOWS ();
  compute_lookahead_tokens ();

  if (trace_flag & trace_sets)
    lookahead_tokens_print (stderr);
}


void
lalr_update_state_numbers (state_number old_to_new[], state_number nstates_old)
{
  goto_number ngotos_reachable = 0;
  symbol_number nonterminal = 0;
  aver (nsyms == nvars + ntokens);
  {
    goto_number i;
    for (i = 0; i < ngotos; ++i)
      {
        while (i == goto_map[nonterminal])
          goto_map[nonterminal++] = ngotos_reachable;
        /* If old_to_new[from_state[i]] = nstates_old, remove this goto
           entry.  */
        if (old_to_new[from_state[i]] != nstates_old)
          {
            /* from_state[i] is not removed, so it and thus to_state[i] are
               reachable, so to_state[i] != nstates_old.  */
            aver (old_to_new[to_state[i]] != nstates_old);
            from_state[ngotos_reachable] = old_to_new[from_state[i]];
            to_state[ngotos_reachable] = old_to_new[to_state[i]];
            ++ngotos_reachable;
          }
      }
  }
  while (nonterminal <= nvars)
    {
      aver (ngotos == goto_map[nonterminal]);
      goto_map[nonterminal++] = ngotos_reachable;
    }
  ngotos = ngotos_reachable;
}


void
lalr_free (void)
{
  state_number s;
  for (s = 0; s < nstates; ++s)
    states[s]->reductions->lookahead_tokens = NULL;
  bitsetv_free (LA);
}
