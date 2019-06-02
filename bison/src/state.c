/* Type definitions for the finite state machine for Bison.

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

#include <hash.h>

#include "complain.h"
#include "gram.h"
#include "state.h"
#include "print-xml.h"


                        /*-------------------.
                        | Shifts and Gotos.  |
                        `-------------------*/


/*-----------------------------------------.
| Create a new array of NUM shifts/gotos.  |
`-----------------------------------------*/

static transitions *
transitions_new (int num, state **the_states)
{
  size_t states_size = num * sizeof *the_states;
  transitions *res = xmalloc (offsetof (transitions, states) + states_size);
  res->num = num;
  memcpy (res->states, the_states, states_size);
  return res;
}


/*-------------------------------------------------------.
| Return the state such that SHIFTS contain a shift/goto |
| to it on SYM.  Abort if none found.                    |
`-------------------------------------------------------*/

state *
transitions_to (transitions *shifts, symbol_number sym)
{
  int j;
  for (j = 0; ; j++)
    {
      aver (j < shifts->num);
      if (TRANSITION_SYMBOL (shifts, j) == sym)
        return shifts->states[j];
    }
}


                        /*--------------------.
                        | Error transitions.  |
                        `--------------------*/


/*---------------------------------.
| Create a new array of NUM errs.  |
`---------------------------------*/

errs *
errs_new (int num, symbol **tokens)
{
  size_t symbols_size = num * sizeof *tokens;
  errs *res = xmalloc (offsetof (errs, symbols) + symbols_size);
  res->num = num;
  memcpy (res->symbols, tokens, symbols_size);
  return res;
}




                        /*-------------.
                        | Reductions.  |
                        `-------------*/


/*---------------------------------------.
| Create a new array of NUM reductions.  |
`---------------------------------------*/

static reductions *
reductions_new (int num, rule **reds)
{
  size_t rules_size = num * sizeof *reds;
  reductions *res = xmalloc (offsetof (reductions, rules) + rules_size);
  res->num = num;
  res->lookahead_tokens = NULL;
  memcpy (res->rules, reds, rules_size);
  return res;
}



                        /*---------.
                        | States.  |
                        `---------*/


state_number nstates = 0;
/* FINAL_STATE is properly set by new_state when it recognizes its
   accessing symbol: $end.  */
state *final_state = NULL;


/*------------------------------------------------------------------.
| Create a new state with ACCESSING_SYMBOL, for those items.  Store |
| it in the state hash table.                                       |
`------------------------------------------------------------------*/

state *
state_new (symbol_number accessing_symbol,
           size_t nitems, item_number *core)
{
  state *res;
  size_t items_size = nitems * sizeof *core;

  aver (nstates < STATE_NUMBER_MAXIMUM);

  res = xmalloc (offsetof (state, items) + items_size);
  res->number = nstates++;
  res->accessing_symbol = accessing_symbol;
  res->transitions = NULL;
  res->reductions = NULL;
  res->errs = NULL;
  res->state_list = NULL;
  res->consistent = 0;
  res->solved_conflicts = NULL;
  res->solved_conflicts_xml = NULL;

  res->nitems = nitems;
  memcpy (res->items, core, items_size);

  state_hash_insert (res);

  return res;
}

state *
state_new_isocore (state const *s)
{
  state *res;
  size_t items_size = s->nitems * sizeof *s->items;

  aver (nstates < STATE_NUMBER_MAXIMUM);

  res = xmalloc (offsetof (state, items) + items_size);
  res->number = nstates++;
  res->accessing_symbol = s->accessing_symbol;
  res->transitions =
    transitions_new (s->transitions->num, s->transitions->states);
  res->reductions = reductions_new (s->reductions->num, s->reductions->rules);
  res->errs = NULL;
  res->state_list = NULL;
  res->consistent = s->consistent;
  res->solved_conflicts = NULL;
  res->solved_conflicts_xml = NULL;

  res->nitems = s->nitems;
  memcpy (res->items, s->items, items_size);

  return res;
}


/*---------.
| Free S.  |
`---------*/

static void
state_free (state *s)
{
  free (s->transitions);
  free (s->reductions);
  free (s->errs);
  free (s);
}


/*---------------------------.
| Set the transitions of S.  |
`---------------------------*/

void
state_transitions_set (state *s, int num, state **trans)
{
  aver (!s->transitions);
  s->transitions = transitions_new (num, trans);
}


/*--------------------------.
| Set the reductions of S.  |
`--------------------------*/

void
state_reductions_set (state *s, int num, rule **reds)
{
  aver (!s->reductions);
  s->reductions = reductions_new (num, reds);
}


int
state_reduction_find (state *s, rule *r)
{
  int i;
  reductions *reds = s->reductions;
  for (i = 0; i < reds->num; ++i)
    if (reds->rules[i] == r)
      return i;
  return -1;
}


/*--------------------.
| Set the errs of S.  |
`--------------------*/

void
state_errs_set (state *s, int num, symbol **tokens)
{
  aver (!s->errs);
  s->errs = errs_new (num, tokens);
}



/*--------------------------------------------------.
| Print on OUT all the lookahead tokens such that S |
| wants to reduce R.                                |
`--------------------------------------------------*/

void
state_rule_lookahead_tokens_print (state *s, rule *r, FILE *out)
{
  /* Find the reduction we are handling.  */
  reductions *reds = s->reductions;
  int red = state_reduction_find (s, r);

  /* Print them if there are.  */
  if (reds->lookahead_tokens && red != -1)
    {
      bitset_iterator biter;
      int k;
      char const *sep = "";
      fprintf (out, "  [");
      BITSET_FOR_EACH (biter, reds->lookahead_tokens[red], k, 0)
        {
          fprintf (out, "%s%s", sep, symbols[k]->tag);
          sep = ", ";
        }
      fprintf (out, "]");
    }
}

void
state_rule_lookahead_tokens_print_xml (state *s, rule *r,
                                       FILE *out, int level)
{
  /* Find the reduction we are handling.  */
  reductions *reds = s->reductions;
  int red = state_reduction_find (s, r);

  /* Print them if there are.  */
  if (reds->lookahead_tokens && red != -1)
    {
      bitset_iterator biter;
      int k;
      xml_puts (out, level, "<lookaheads>");
      BITSET_FOR_EACH (biter, reds->lookahead_tokens[red], k, 0)
        {
          xml_printf (out, level + 1, "<symbol>%s</symbol>",
                      xml_escape (symbols[k]->tag));
        }
      xml_puts (out, level, "</lookaheads>");
    }
}


/*---------------------.
| A state hash table.  |
`---------------------*/

/* Initial capacity of states hash table.  */
#define HT_INITIAL_CAPACITY 257

static struct hash_table *state_table = NULL;

/* Two states are equal if they have the same core items.  */
static inline bool
state_compare (state const *s1, state const *s2)
{
  size_t i;

  if (s1->nitems != s2->nitems)
    return false;

  for (i = 0; i < s1->nitems; ++i)
    if (s1->items[i] != s2->items[i])
      return false;

  return true;
}

static bool
state_comparator (void const *s1, void const *s2)
{
  return state_compare (s1, s2);
}

static inline size_t
state_hash (state const *s, size_t tablesize)
{
  /* Add up the state's item numbers to get a hash key.  */
  size_t key = 0;
  size_t i;
  for (i = 0; i < s->nitems; ++i)
    key += s->items[i];
  return key % tablesize;
}

static size_t
state_hasher (void const *s, size_t tablesize)
{
  return state_hash (s, tablesize);
}


/*-------------------------------.
| Create the states hash table.  |
`-------------------------------*/

void
state_hash_new (void)
{
  state_table = hash_initialize (HT_INITIAL_CAPACITY,
                                 NULL,
                                 state_hasher,
                                 state_comparator,
                                 NULL);
}


/*---------------------------------------------.
| Free the states hash table, not the states.  |
`---------------------------------------------*/

void
state_hash_free (void)
{
  hash_free (state_table);
}


/*-----------------------------------.
| Insert S in the state hash table.  |
`-----------------------------------*/

void
state_hash_insert (state *s)
{
  if (!hash_insert (state_table, s))
    xalloc_die ();
}


/*------------------------------------------------------------------.
| Find the state associated to the CORE, and return it.  If it does |
| not exist yet, return NULL.                                       |
`------------------------------------------------------------------*/

state *
state_hash_lookup (size_t nitems, item_number *core)
{
  size_t items_size = nitems * sizeof *core;
  state *probe = xmalloc (offsetof (state, items) + items_size);
  state *entry;

  probe->nitems = nitems;
  memcpy (probe->items, core, items_size);
  entry = hash_lookup (state_table, probe);
  free (probe);
  return entry;
}


/*--------------------------------------------------------.
| Record S and all states reachable from S in REACHABLE.  |
`--------------------------------------------------------*/

static void
state_record_reachable_states (state *s, bitset reachable)
{
  if (bitset_test (reachable, s->number))
    return;
  bitset_set (reachable, s->number);
  {
    int i;
    for (i = 0; i < s->transitions->num; ++i)
      if (!TRANSITION_IS_DISABLED (s->transitions, i))
        state_record_reachable_states (s->transitions->states[i], reachable);
  }
}

void
state_remove_unreachable_states (state_number old_to_new[])
{
  state_number nstates_reachable = 0;
  bitset reachable = bitset_create (nstates, BITSET_FIXED);
  state_record_reachable_states (states[0], reachable);
  {
    state_number i;
    for (i = 0; i < nstates; ++i)
      {
        if (bitset_test (reachable, states[i]->number))
          {
            states[nstates_reachable] = states[i];
            states[nstates_reachable]->number = nstates_reachable;
            old_to_new[i] = nstates_reachable++;
          }
        else
          {
            state_free (states[i]);
            old_to_new[i] = nstates;
          }
      }
  }
  nstates = nstates_reachable;
  bitset_free (reachable);
}

/* All the decorated states, indexed by the state number.  */
state **states = NULL;


/*----------------------.
| Free all the states.  |
`----------------------*/

void
states_free (void)
{
  state_number i;
  for (i = 0; i < nstates; ++i)
    state_free (states[i]);
  free (states);
}
