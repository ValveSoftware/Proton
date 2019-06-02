/* Output the generated parsing program for Bison.

   Copyright (C) 1984, 1986, 1989, 1992, 2000-2006, 2009-2015 Free
   Software Foundation, Inc.

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

#include "complain.h"
#include "conflicts.h"
#include "files.h"
#include "getargs.h"
#include "gram.h"
#include "lalr.h"
#include "muscle-tab.h"
#include "reader.h"
#include "symtab.h"
#include "tables.h"

/* Several tables are indexed both by state and nonterminal numbers.
   We call such an index a 'vector'; i.e., a vector is either a state
   or a nonterminal number.

   Of course vector_number_t ought to be wide enough to contain
   state_number and symbol_number.  */
typedef int vector_number;

#if 0 /* Not currently used.  */
static inline vector_number
state_number_to_vector_number (state_number s)
{
  return s;
}
#endif

static inline vector_number
symbol_number_to_vector_number (symbol_number sym)
{
  return state_number_as_int (nstates) + sym - ntokens;
}

int nvectors;


/* FROMS and TOS are indexed by vector_number.

   If VECTOR is a nonterminal, (FROMS[VECTOR], TOS[VECTOR]) form an
   array of state numbers of the non defaulted GOTO on VECTOR.

   If VECTOR is a state, TOS[VECTOR] is the array of actions to do on
   the (array of) symbols FROMS[VECTOR].

   In both cases, TALLY[VECTOR] is the size of the arrays
   FROMS[VECTOR], TOS[VECTOR]; and WIDTH[VECTOR] =
   (FROMS[VECTOR][SIZE] - FROMS[VECTOR][0] + 1) where SIZE =
   TALLY[VECTOR].

   FROMS therefore contains symbol_number and action_number,
   TOS state_number and action_number,
   TALLY sizes,
   WIDTH differences of FROMS.

   Let base_number be the type of FROMS, TOS, and WIDTH.  */
#define BASE_MAXIMUM INT_MAX
#define BASE_MINIMUM INT_MIN

static base_number **froms;
static base_number **tos;
static unsigned int **conflict_tos;
static size_t *tally;
static base_number *width;


/* For a given state, N = ACTROW[SYMBOL]:

   If N = 0, stands for 'run the default action'.
   If N = MIN, stands for 'raise a syntax error'.
   If N > 0, stands for 'shift SYMBOL and go to n'.
   If N < 0, stands for 'reduce -N'.  */
typedef int action_number;
#define ACTION_NUMBER_MINIMUM INT_MIN

static action_number *actrow;

/* FROMS and TOS are reordered to be compressed.  ORDER[VECTOR] is the
   new vector number of VECTOR.  We skip 'empty' vectors (i.e.,
   TALLY[VECTOR] = 0), and call these 'entries'.  */
static vector_number *order;
static int nentries;

base_number *base = NULL;
/* A distinguished value of BASE, negative infinite.  During the
   computation equals to BASE_MINIMUM, later mapped to BASE_NINF to
   keep parser tables small.  */
base_number base_ninf = 0;
static base_number *pos = NULL;

static unsigned int *conflrow;
unsigned int *conflict_table;
unsigned int *conflict_list;
int conflict_list_cnt;
static int conflict_list_free;

/* TABLE_SIZE is the allocated size of both TABLE and CHECK.  We start
   with more or less the original hard-coded value (which was
   SHRT_MAX).  */
static int table_size = 32768;
base_number *table;
base_number *check;
/* The value used in TABLE to denote explicit syntax errors
   (%nonassoc), a negative infinite.  First defaults to ACTION_NUMBER_MINIMUM,
   but in order to keep small tables, renumbered as TABLE_ERROR, which
   is the smallest (non error) value minus 1.  */
base_number table_ninf = 0;
static int lowzero;
int high;

state_number *yydefgoto;
rule_number *yydefact;

/*-------------------------------------------------------------------.
| If TABLE, CONFLICT_TABLE, and CHECK are too small to be addressed  |
| at DESIRED, grow them.  TABLE[DESIRED] can be used, so the desired |
| size is at least DESIRED + 1.                                      |
`-------------------------------------------------------------------*/

static void
table_grow (int desired)
{
  int old_size = table_size;

  while (table_size <= desired)
    table_size *= 2;

  if (trace_flag & trace_resource)
    fprintf (stderr, "growing table and check from: %d to %d\n",
             old_size, table_size);

  table = xnrealloc (table, table_size, sizeof *table);
  conflict_table = xnrealloc (conflict_table, table_size,
                              sizeof *conflict_table);
  check = xnrealloc (check, table_size, sizeof *check);

  for (/* Nothing. */; old_size < table_size; ++old_size)
    {
      table[old_size] = 0;
      conflict_table[old_size] = 0;
      check[old_size] = -1;
    }
}




/*-------------------------------------------------------------------.
| For GLR parsers, for each conflicted token in S, as indicated      |
| by non-zero entries in CONFLROW, create a list of possible         |
| reductions that are alternatives to the shift or reduction         |
| currently recorded for that token in S.  Store the alternative     |
| reductions followed by a 0 in CONFLICT_LIST, updating              |
| CONFLICT_LIST_CNT, and storing an index to the start of the list   |
| back into CONFLROW.                                                |
`-------------------------------------------------------------------*/

static void
conflict_row (state *s)
{
  int i, j;
  reductions *reds = s->reductions;

  if (!nondeterministic_parser)
    return;

  for (j = 0; j < ntokens; j += 1)
    if (conflrow[j])
      {
        conflrow[j] = conflict_list_cnt;

        /* Find all reductions for token J, and record all that do not
           match ACTROW[J].  */
        for (i = 0; i < reds->num; i += 1)
          if (bitset_test (reds->lookahead_tokens[i], j)
              && (actrow[j]
                  != rule_number_as_item_number (reds->rules[i]->number)))
            {
              aver (0 < conflict_list_free);
              conflict_list[conflict_list_cnt] = reds->rules[i]->number + 1;
              conflict_list_cnt += 1;
              conflict_list_free -= 1;
            }

        /* Leave a 0 at the end.  */
        aver (0 < conflict_list_free);
        conflict_list[conflict_list_cnt] = 0;
        conflict_list_cnt += 1;
        conflict_list_free -= 1;
      }
}


/*------------------------------------------------------------------.
| Decide what to do for each type of token if seen as the           |
| lookahead in specified state.  The value returned is used as the  |
| default action (yydefact) for the state.  In addition, ACTROW is  |
| filled with what to do for each kind of token, index by symbol    |
| number, with zero meaning do the default action.  The value       |
| ACTION_NUMBER_MINIMUM, a very negative number, means this         |
| situation is an error.  The parser recognizes this value          |
| specially.                                                        |
|                                                                   |
| This is where conflicts are resolved.  The loop over lookahead    |
| rules considered lower-numbered rules last, and the last rule     |
| considered that likes a token gets to handle it.                  |
|                                                                   |
| For GLR parsers, also sets CONFLROW[SYM] to an index into         |
| CONFLICT_LIST iff there is an unresolved conflict (s/r or r/r)    |
| with symbol SYM. The default reduction is not used for a symbol   |
| that has any such conflicts.                                      |
`------------------------------------------------------------------*/

static rule *
action_row (state *s)
{
  int i;
  rule *default_reduction = NULL;
  reductions *reds = s->reductions;
  transitions *trans = s->transitions;
  errs *errp = s->errs;
  /* Set to nonzero to inhibit having any default reduction.  */
  bool nodefault = false;
  bool conflicted = false;

  for (i = 0; i < ntokens; i++)
    actrow[i] = conflrow[i] = 0;

  if (reds->lookahead_tokens)
    {
      int j;
      bitset_iterator biter;
      /* loop over all the rules available here which require
         lookahead (in reverse order to give precedence to the first
         rule) */
      for (i = reds->num - 1; i >= 0; --i)
        /* and find each token which the rule finds acceptable
           to come next */
        BITSET_FOR_EACH (biter, reds->lookahead_tokens[i], j, 0)
        {
          /* and record this rule as the rule to use if that
             token follows.  */
          if (actrow[j] != 0)
            {
              conflicted = true;
              conflrow[j] = 1;
            }
          actrow[j] = rule_number_as_item_number (reds->rules[i]->number);
        }
    }

  /* Now see which tokens are allowed for shifts in this state.  For
     them, record the shift as the thing to do.  So shift is preferred
     to reduce.  */
  FOR_EACH_SHIFT (trans, i)
    {
      symbol_number sym = TRANSITION_SYMBOL (trans, i);
      state *shift_state = trans->states[i];

      if (actrow[sym] != 0)
        {
          conflicted = true;
          conflrow[sym] = 1;
        }
      actrow[sym] = state_number_as_int (shift_state->number);

      /* Do not use any default reduction if there is a shift for
         error */
      if (sym == errtoken->number)
        nodefault = true;
    }

  /* See which tokens are an explicit error in this state (due to
     %nonassoc).  For them, record ACTION_NUMBER_MINIMUM as the
     action.  */
  for (i = 0; i < errp->num; i++)
    {
      symbol *sym = errp->symbols[i];
      actrow[sym->number] = ACTION_NUMBER_MINIMUM;
    }

  /* Turn off default reductions where requested by the user.  See
     state_lookahead_tokens_count in lalr.c to understand when states are
     labeled as consistent.  */
  {
    char *default_reductions =
      muscle_percent_define_get ("lr.default-reduction");
    if (STRNEQ (default_reductions, "most") && !s->consistent)
      nodefault = true;
    free (default_reductions);
  }

  /* Now find the most common reduction and make it the default action
     for this state.  */

  if (reds->num >= 1 && !nodefault)
    {
      if (s->consistent)
        default_reduction = reds->rules[0];
      else
        {
          int max = 0;
          for (i = 0; i < reds->num; i++)
            {
              int count = 0;
              rule *r = reds->rules[i];
              symbol_number j;

              for (j = 0; j < ntokens; j++)
                if (actrow[j] == rule_number_as_item_number (r->number))
                  count++;

              if (count > max)
                {
                  max = count;
                  default_reduction = r;
                }
            }

          /* GLR parsers need space for conflict lists, so we can't
             default conflicted entries.  For non-conflicted entries
             or as long as we are not building a GLR parser,
             actions that match the default are replaced with zero,
             which means "use the default". */

          if (max > 0)
            {
              int j;
              for (j = 0; j < ntokens; j++)
                if (actrow[j]
                    == rule_number_as_item_number (default_reduction->number)
                    && ! (nondeterministic_parser && conflrow[j]))
                  actrow[j] = 0;
            }
        }
    }

  /* If have no default reduction, the default is an error.
     So replace any action which says "error" with "use default".  */

  if (!default_reduction)
    for (i = 0; i < ntokens; i++)
      if (actrow[i] == ACTION_NUMBER_MINIMUM)
        actrow[i] = 0;

  if (conflicted)
    conflict_row (s);

  return default_reduction;
}


/*----------------------------------------.
| Set FROMS, TOS, TALLY and WIDTH for S.  |
`----------------------------------------*/

static void
save_row (state_number s)
{
  symbol_number i;

  /* Number of non default actions in S.  */
  size_t count = 0;
  for (i = 0; i < ntokens; i++)
    if (actrow[i] != 0)
      count++;

  if (count)
    {
      /* Allocate non defaulted actions.  */
      base_number *sp1 = froms[s] = xnmalloc (count, sizeof *sp1);
      base_number *sp2 = tos[s] = xnmalloc (count, sizeof *sp2);
      unsigned int *sp3 = conflict_tos[s] =
        nondeterministic_parser ? xnmalloc (count, sizeof *sp3) : NULL;

      /* Store non defaulted actions.  */
      for (i = 0; i < ntokens; i++)
        if (actrow[i] != 0)
          {
            *sp1++ = i;
            *sp2++ = actrow[i];
            if (nondeterministic_parser)
              *sp3++ = conflrow[i];
          }

      tally[s] = count;
      width[s] = sp1[-1] - froms[s][0] + 1;
    }
}


/*------------------------------------------------------------------.
| Figure out the actions for the specified state, indexed by        |
| lookahead token type.                                             |
|                                                                   |
| The YYDEFACT table is output now.  The detailed info is saved for |
| putting into YYTABLE later.                                       |
`------------------------------------------------------------------*/

static void
token_actions (void)
{
  int nconflict = nondeterministic_parser ? conflicts_total_count () : 0;

  yydefact = xnmalloc (nstates, sizeof *yydefact);

  actrow = xnmalloc (ntokens, sizeof *actrow);
  conflrow = xnmalloc (ntokens, sizeof *conflrow);

  conflict_list = xnmalloc (1 + 2 * nconflict, sizeof *conflict_list);
  conflict_list_free = 2 * nconflict;
  conflict_list_cnt = 1;

  /* Find the rules which are reduced.  */
  if (!nondeterministic_parser)
    {
      rule_number r;
      for (r = 0; r < nrules; ++r)
        rules[r].useful = false;
    }

  {
    state_number i;
    for (i = 0; i < nstates; ++i)
      {
        rule *default_reduction = action_row (states[i]);
        yydefact[i] = default_reduction ? default_reduction->number + 1 : 0;
        save_row (i);

        /* Now that the parser was computed, we can find which rules are
           really reduced, and which are not because of SR or RR
           conflicts.  */
        if (!nondeterministic_parser)
          {
            symbol_number j;
            for (j = 0; j < ntokens; ++j)
              if (actrow[j] < 0 && actrow[j] != ACTION_NUMBER_MINIMUM)
                rules[item_number_as_rule_number (actrow[j])].useful = true;
            if (yydefact[i])
              rules[yydefact[i] - 1].useful = true;
          }
      }
  }
  free (actrow);
  free (conflrow);
}


/*------------------------------------------------------------------.
| Compute FROMS[VECTOR], TOS[VECTOR], TALLY[VECTOR], WIDTH[VECTOR], |
| i.e., the information related to non defaulted GOTO on the nterm  |
| SYM.                                                              |
|                                                                   |
| DEFAULT_STATE is the principal destination on SYM, i.e., the      |
| default GOTO destination on SYM.                                  |
`------------------------------------------------------------------*/

static void
save_column (symbol_number sym, state_number default_state)
{
  goto_number i;
  goto_number begin = goto_map[sym - ntokens];
  goto_number end = goto_map[sym - ntokens + 1];

  /* Number of non default GOTO.  */
  size_t count = 0;
  for (i = begin; i < end; i++)
    if (to_state[i] != default_state)
      count++;

  if (count)
    {
      /* Allocate room for non defaulted gotos.  */
      vector_number symno = symbol_number_to_vector_number (sym);
      base_number *sp1 = froms[symno] = xnmalloc (count, sizeof *sp1);
      base_number *sp2 = tos[symno] = xnmalloc (count, sizeof *sp2);

      /* Store the state numbers of the non defaulted gotos.  */
      for (i = begin; i < end; i++)
        if (to_state[i] != default_state)
          {
            *sp1++ = from_state[i];
            *sp2++ = to_state[i];
          }

      tally[symno] = count;
      width[symno] = sp1[-1] - froms[symno][0] + 1;
    }
}


/*----------------------------------------------------------------.
| The default state for SYM: the state which is 'the' most common |
| GOTO destination on SYM (an nterm).                             |
`----------------------------------------------------------------*/

static state_number
default_goto (symbol_number sym, size_t state_count[])
{
  goto_number begin = goto_map[sym - ntokens];
  goto_number end = goto_map[sym - ntokens + 1];
  state_number res = -1;

  if (begin != end)
    {
      size_t max = 0;
      goto_number i;
      state_number s;

      for (s = 0; s < nstates; s++)
        state_count[s] = 0;

      for (i = begin; i < end; i++)
        state_count[to_state[i]]++;

      for (s = 0; s < nstates; s++)
        if (max < state_count[s])
          {
            max = state_count[s];
            res = s;
          }
    }
  return res;
}


/*-------------------------------------------------------------------.
| Figure out what to do after reducing with each rule, depending on  |
| the saved state from before the beginning of parsing the data that |
| matched this rule.                                                 |
|                                                                    |
| The YYDEFGOTO table is output now.  The detailed info is saved for |
| putting into YYTABLE later.                                        |
`-------------------------------------------------------------------*/

static void
goto_actions (void)
{
  symbol_number i;
  size_t *state_count = xnmalloc (nstates, sizeof *state_count);
  yydefgoto = xnmalloc (nvars, sizeof *yydefgoto);

  /* For a given nterm I, STATE_COUNT[S] is the number of times there
     is a GOTO to S on I.  */
  for (i = ntokens; i < nsyms; ++i)
    {
      state_number default_state = default_goto (i, state_count);
      save_column (i, default_state);
      yydefgoto[i - ntokens] = default_state;
    }
  free (state_count);
}


/*------------------------------------------------------------------.
| Compute ORDER, a reordering of vectors, in order to decide how to |
| pack the actions and gotos information into yytable.              |
`------------------------------------------------------------------*/

static void
sort_actions (void)
{
  int i;

  nentries = 0;

  for (i = 0; i < nvectors; i++)
    if (0 < tally[i])
      {
        int k;
        size_t t = tally[i];
        int w = width[i];
        int j = nentries - 1;

        while (0 <= j && width[order[j]] < w)
          j--;

        while (0 <= j && width[order[j]] == w && tally[order[j]] < t)
          j--;

        for (k = nentries - 1; k > j; k--)
          order[k + 1] = order[k];

        order[j + 1] = i;
        nentries++;
      }
}


/* If VECTOR is a state whose actions (reflected by FROMS, TOS, TALLY
   and WIDTH of VECTOR) are common to a previous state, return this
   state number.

   In any other case, return -1.  */

static state_number
matching_state (vector_number vector)
{
  vector_number i = order[vector];
  /* If VECTOR is a nterm, return -1.  */
  if (i < nstates)
    {
      size_t t = tally[i];
      int w = width[i];
      int prev;

      /* If VECTOR has GLR conflicts, return -1 */
      if (conflict_tos[i] != NULL)
        {
          int j;
          for (j = 0; j < t; j += 1)
            if (conflict_tos[i][j] != 0)
              return -1;
        }

      for (prev = vector - 1; 0 <= prev; prev--)
        {
          vector_number j = order[prev];
          /* Given how ORDER was computed, if the WIDTH or TALLY is
             different, there cannot be a matching state.  */
          if (width[j] != w || tally[j] != t)
            return -1;
          else
            {
              bool match = true;
              int k;
              for (k = 0; match && k < t; k++)
                if (tos[j][k] != tos[i][k]
                    || froms[j][k] != froms[i][k]
                    || (conflict_tos[j] != NULL && conflict_tos[j][k] != 0))
                  match = false;
              if (match)
                return j;
            }
        }
    }
  return -1;
}


static base_number
pack_vector (vector_number vector)
{
  base_number res;
  vector_number i = order[vector];
  size_t t = tally[i];
  base_number *from = froms[i];
  base_number *to = tos[i];
  unsigned int *conflict_to = conflict_tos[i];

  aver (t != 0);

  for (res = lowzero - from[0]; ; res++)
    {
      bool ok = true;
      aver (res < table_size);
      {
        int k;
        for (k = 0; ok && k < t; k++)
          {
            int loc = res + state_number_as_int (from[k]);
            if (table_size <= loc)
              table_grow (loc);

            if (table[loc] != 0)
              ok = false;
          }

        if (ok)
          for (k = 0; k < vector; k++)
            if (pos[k] == res)
              ok = false;
      }

      if (ok)
        {
          int loc PACIFY_CC (= -1);
          int k;
          for (k = 0; k < t; k++)
            {
              loc = res + state_number_as_int (from[k]);
              table[loc] = to[k];
              if (nondeterministic_parser && conflict_to != NULL)
                conflict_table[loc] = conflict_to[k];
              check[loc] = from[k];
            }

          while (table[lowzero] != 0)
            lowzero++;

          if (high < loc)
            high = loc;

          aver (BASE_MINIMUM <= res && res <= BASE_MAXIMUM);
          return res;
        }
    }
}


/*-------------------------------------------------------------.
| Remap the negative infinite in TAB from NINF to the greatest |
| possible smallest value.  Return it.                         |
|                                                              |
| In most case this allows us to use shorts instead of ints in |
| parsers.                                                     |
`-------------------------------------------------------------*/

static base_number
table_ninf_remap (base_number tab[], int size, base_number ninf)
{
  base_number res = 0;
  int i;

  for (i = 0; i < size; i++)
    if (tab[i] < res && tab[i] != ninf)
      res = tab[i];

  --res;

  for (i = 0; i < size; i++)
    if (tab[i] == ninf)
      tab[i] = res;

  return res;
}

static void
pack_table (void)
{
  int i;

  base = xnmalloc (nvectors, sizeof *base);
  pos = xnmalloc (nentries, sizeof *pos);
  table = xcalloc (table_size, sizeof *table);
  conflict_table = xcalloc (table_size, sizeof *conflict_table);
  check = xnmalloc (table_size, sizeof *check);

  lowzero = 0;
  high = 0;

  for (i = 0; i < nvectors; i++)
    base[i] = BASE_MINIMUM;

  for (i = 0; i < table_size; i++)
    check[i] = -1;

  for (i = 0; i < nentries; i++)
    {
      state_number s = matching_state (i);
      base_number place;

      if (s < 0)
        /* A new set of state actions, or a nonterminal.  */
        place = pack_vector (i);
      else
        /* Action of I were already coded for S.  */
        place = base[s];

      pos[i] = place;
      base[order[i]] = place;
    }

  /* Use the greatest possible negative infinites.  */
  base_ninf = table_ninf_remap (base, nvectors, BASE_MINIMUM);
  table_ninf = table_ninf_remap (table, high + 1, ACTION_NUMBER_MINIMUM);

  free (pos);
}



/*-----------------------------------------------------------------.
| Compute and output yydefact, yydefgoto, yypact, yypgoto, yytable |
| and yycheck.                                                     |
`-----------------------------------------------------------------*/

void
tables_generate (void)
{
  int i;

  /* This is a poor way to make sure the sizes are properly
     correlated.  In particular the signedness is not taken into
     account.  But it's not useless.  */
  verify (sizeof nstates <= sizeof nvectors
          && sizeof nvars <= sizeof nvectors);

  nvectors = state_number_as_int (nstates) + nvars;

  froms = xcalloc (nvectors, sizeof *froms);
  tos = xcalloc (nvectors, sizeof *tos);
  conflict_tos = xcalloc (nvectors, sizeof *conflict_tos);
  tally = xcalloc (nvectors, sizeof *tally);
  width = xnmalloc (nvectors, sizeof *width);

  token_actions ();

  goto_actions ();
  free (goto_map);
  free (from_state);
  free (to_state);

  order = xcalloc (nvectors, sizeof *order);
  sort_actions ();
  pack_table ();
  free (order);

  free (tally);
  free (width);

  for (i = 0; i < nvectors; i++)
    {
      free (froms[i]);
      free (tos[i]);
      free (conflict_tos[i]);
    }

  free (froms);
  free (tos);
  free (conflict_tos);
}


/*-------------------------.
| Free the parser tables.  |
`-------------------------*/

void
tables_free (void)
{
  free (base);
  free (conflict_table);
  free (conflict_list);
  free (table);
  free (check);
  free (yydefgoto);
  free (yydefact);
}
