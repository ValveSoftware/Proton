/* Find and resolve or report lookahead conflicts for bison,

   Copyright (C) 1984, 1989, 1992, 2000-2015 Free Software Foundation,
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

#include <bitset.h>

#include "LR0.h"
#include "complain.h"
#include "conflicts.h"
#include "files.h"
#include "getargs.h"
#include "gram.h"
#include "lalr.h"
#include "print-xml.h"
#include "reader.h"
#include "state.h"
#include "symtab.h"

/* -1 stands for not specified. */
int expected_sr_conflicts = -1;
int expected_rr_conflicts = -1;
static char *conflicts;
static struct obstack solved_conflicts_obstack;
static struct obstack solved_conflicts_xml_obstack;

static bitset shift_set;
static bitset lookahead_set;



enum conflict_resolution
  {
    shift_resolution,
    reduce_resolution,
    left_resolution,
    right_resolution,
    nonassoc_resolution
  };


/*----------------------------------------------------------------.
| Explain how an SR conflict between TOKEN and RULE was resolved: |
| RESOLUTION.                                                     |
`----------------------------------------------------------------*/

static inline void
log_resolution (rule *r, symbol_number token,
                enum conflict_resolution resolution)
{
  if (report_flag & report_solved_conflicts)
    {
      /* The description of the resolution. */
      switch (resolution)
        {
        case shift_resolution:
        case right_resolution:
          obstack_printf (&solved_conflicts_obstack,
                          _("    Conflict between rule %d and token %s"
                            " resolved as shift"),
                          r->number,
                          symbols[token]->tag);
          break;

        case reduce_resolution:
        case left_resolution:
          obstack_printf (&solved_conflicts_obstack,
                          _("    Conflict between rule %d and token %s"
                            " resolved as reduce"),
                          r->number,
                          symbols[token]->tag);
          break;

        case nonassoc_resolution:
          obstack_printf (&solved_conflicts_obstack,
                          _("    Conflict between rule %d and token %s"
                            " resolved as an error"),
                          r->number,
                          symbols[token]->tag);
          break;
        }

      /* The reason. */
      switch (resolution)
        {
        case shift_resolution:
          obstack_printf (&solved_conflicts_obstack,
                          " (%s < %s)",
                          r->prec->tag,
                          symbols[token]->tag);
          break;

        case reduce_resolution:
          obstack_printf (&solved_conflicts_obstack,
                          " (%s < %s)",
                          symbols[token]->tag,
                          r->prec->tag);
          break;

        case left_resolution:
          obstack_printf (&solved_conflicts_obstack,
                          " (%%left %s)",
                          symbols[token]->tag);
          break;

        case right_resolution:
          obstack_printf (&solved_conflicts_obstack,
                          " (%%right %s)",
                          symbols[token]->tag);
          break;

        case nonassoc_resolution:
          obstack_printf (&solved_conflicts_obstack,
                          " (%%nonassoc %s)",
                          symbols[token]->tag);
          break;
        }

      obstack_sgrow (&solved_conflicts_obstack, ".\n");
    }

  /* XML report */
  if (xml_flag)
    {
      /* The description of the resolution. */
      switch (resolution)
        {
        case shift_resolution:
        case right_resolution:
          obstack_printf (&solved_conflicts_xml_obstack,
                          "        <resolution rule=\"%d\" symbol=\"%s\""
                          " type=\"shift\">",
                          r->number,
                          xml_escape (symbols[token]->tag));
          break;

        case reduce_resolution:
        case left_resolution:
          obstack_printf (&solved_conflicts_xml_obstack,
                          "        <resolution rule=\"%d\" symbol=\"%s\""
                          " type=\"reduce\">",
                          r->number,
                          xml_escape (symbols[token]->tag));
          break;

        case nonassoc_resolution:
          obstack_printf (&solved_conflicts_xml_obstack,
                          "        <resolution rule=\"%d\" symbol=\"%s\""
                          " type=\"error\">",
                          r->number,
                          xml_escape (symbols[token]->tag));
          break;
        }

      /* The reason. */
      switch (resolution)
        {
        case shift_resolution:
          obstack_printf (&solved_conflicts_xml_obstack,
                          "%s &lt; %s",
                          xml_escape_n (0, r->prec->tag),
                          xml_escape_n (1, symbols[token]->tag));
          break;

        case reduce_resolution:
          obstack_printf (&solved_conflicts_xml_obstack,
                          "%s &lt; %s",
                          xml_escape_n (0, symbols[token]->tag),
                          xml_escape_n (1, r->prec->tag));
          break;

        case left_resolution:
          obstack_printf (&solved_conflicts_xml_obstack,
                          "%%left %s",
                          xml_escape (symbols[token]->tag));
          break;

        case right_resolution:
          obstack_printf (&solved_conflicts_xml_obstack,
                          "%%right %s",
                          xml_escape (symbols[token]->tag));
          break;

        case nonassoc_resolution:
          obstack_printf (&solved_conflicts_xml_obstack,
                          "%%nonassoc %s",
                          xml_escape (symbols[token]->tag));
      break;
        }

      obstack_sgrow (&solved_conflicts_xml_obstack, "</resolution>\n");
    }
}


/*------------------------------------------------------------------.
| Turn off the shift recorded for the specified token in the        |
| specified state.  Used when we resolve a shift-reduce conflict in |
| favor of the reduction or as an error (%nonassoc).                |
`------------------------------------------------------------------*/

static void
flush_shift (state *s, int token)
{
  transitions *trans = s->transitions;
  int i;

  bitset_reset (lookahead_set, token);
  for (i = 0; i < trans->num; i++)
    if (!TRANSITION_IS_DISABLED (trans, i)
        && TRANSITION_SYMBOL (trans, i) == token)
      TRANSITION_DISABLE (trans, i);
}


/*--------------------------------------------------------------------.
| Turn off the reduce recorded for the specified token in the         |
| specified lookahead set.  Used when we resolve a shift-reduce       |
| conflict in favor of the shift or as an error (%nonassoc).          |
`--------------------------------------------------------------------*/

static void
flush_reduce (bitset lookahead_tokens, int token)
{
  bitset_reset (lookahead_tokens, token);
}


/*------------------------------------------------------------------.
| Attempt to resolve shift-reduce conflict for one rule by means of |
| precedence declarations.  It has already been checked that the    |
| rule has a precedence.  A conflict is resolved by modifying the   |
| shift or reduce tables so that there is no longer a conflict.     |
|                                                                   |
| RULENO is the number of the lookahead bitset to consider.         |
|                                                                   |
| ERRORS and NERRS can be used to store discovered explicit         |
| errors.                                                           |
`------------------------------------------------------------------*/

static void
resolve_sr_conflict (state *s, int ruleno, symbol **errors, int *nerrs)
{
  symbol_number i;
  reductions *reds = s->reductions;
  /* Find the rule to reduce by to get precedence of reduction.  */
  rule *redrule = reds->rules[ruleno];
  int redprec = redrule->prec->prec;
  bitset lookahead_tokens = reds->lookahead_tokens[ruleno];

  for (i = 0; i < ntokens; i++)
    if (bitset_test (lookahead_tokens, i)
        && bitset_test (lookahead_set, i)
        && symbols[i]->prec)
      {
        /* Shift-reduce conflict occurs for token number i
           and it has a precedence.
           The precedence of shifting is that of token i.  */
        if (symbols[i]->prec < redprec)
          {
            register_precedence (redrule->prec->number, i);
            log_resolution (redrule, i, reduce_resolution);
            flush_shift (s, i);
          }
        else if (symbols[i]->prec > redprec)
          {
            register_precedence (i, redrule->prec->number);
            log_resolution (redrule, i, shift_resolution);
            flush_reduce (lookahead_tokens, i);
          }
        else
          /* Matching precedence levels.
             For non-defined associativity, keep both: unexpected
             associativity conflict.
             For left associativity, keep only the reduction.
             For right associativity, keep only the shift.
             For nonassociativity, keep neither.  */

          switch (symbols[i]->assoc)
            {
            case undef_assoc:
              abort ();

            case precedence_assoc:
              break;

            case right_assoc:
              register_assoc (i, redrule->prec->number);
              log_resolution (redrule, i, right_resolution);
              flush_reduce (lookahead_tokens, i);
              break;

            case left_assoc:
              register_assoc (i, redrule->prec->number);
              log_resolution (redrule, i, left_resolution);
              flush_shift (s, i);
              break;

            case non_assoc:
              register_assoc (i, redrule->prec->number);
              log_resolution (redrule, i, nonassoc_resolution);
              flush_shift (s, i);
              flush_reduce (lookahead_tokens, i);
              /* Record an explicit error for this token.  */
              errors[(*nerrs)++] = symbols[i];
              break;
            }
      }
}


/*-------------------------------------------------------------------.
| Solve the S/R conflicts of state S using the                       |
| precedence/associativity, and flag it inconsistent if it still has |
| conflicts.  ERRORS can be used as storage to compute the list of   |
| lookahead tokens on which S raises a syntax error (%nonassoc).     |
`-------------------------------------------------------------------*/

static void
set_conflicts (state *s, symbol **errors)
{
  int i;
  transitions *trans = s->transitions;
  reductions *reds = s->reductions;
  int nerrs = 0;

  if (s->consistent)
    return;

  bitset_zero (lookahead_set);

  FOR_EACH_SHIFT (trans, i)
    bitset_set (lookahead_set, TRANSITION_SYMBOL (trans, i));

  /* Loop over all rules which require lookahead in this state.  First
     check for shift-reduce conflict, and try to resolve using
     precedence.  */
  for (i = 0; i < reds->num; ++i)
    if (reds->rules[i]->prec && reds->rules[i]->prec->prec
        && !bitset_disjoint_p (reds->lookahead_tokens[i], lookahead_set))
      resolve_sr_conflict (s, i, errors, &nerrs);

  if (nerrs)
    {
      /* Some tokens have been explicitly made errors.  Allocate a
         permanent errs structure for this state, to record them.  */
      state_errs_set (s, nerrs, errors);
    }
  if (obstack_object_size (&solved_conflicts_obstack))
    s->solved_conflicts = obstack_finish0 (&solved_conflicts_obstack);
  if (obstack_object_size (&solved_conflicts_xml_obstack))
    s->solved_conflicts_xml = obstack_finish0 (&solved_conflicts_xml_obstack);

  /* Loop over all rules which require lookahead in this state.  Check
     for conflicts not resolved above.  */
  for (i = 0; i < reds->num; ++i)
    {
      if (!bitset_disjoint_p (reds->lookahead_tokens[i], lookahead_set))
        conflicts[s->number] = 1;
      bitset_or (lookahead_set, lookahead_set, reds->lookahead_tokens[i]);
    }
}


/*----------------------------------------------------------------.
| Solve all the S/R conflicts using the precedence/associativity, |
| and flag as inconsistent the states that still have conflicts.  |
`----------------------------------------------------------------*/

void
conflicts_solve (void)
{
  state_number i;
  /* List of lookahead tokens on which we explicitly raise a syntax error.  */
  symbol **errors = xnmalloc (ntokens + 1, sizeof *errors);

  conflicts = xcalloc (nstates, sizeof *conflicts);
  shift_set = bitset_create (ntokens, BITSET_FIXED);
  lookahead_set = bitset_create (ntokens, BITSET_FIXED);
  obstack_init (&solved_conflicts_obstack);
  obstack_init (&solved_conflicts_xml_obstack);

  for (i = 0; i < nstates; i++)
    {
      set_conflicts (states[i], errors);

      /* For uniformity of the code, make sure all the states have a valid
         'errs' member.  */
      if (!states[i]->errs)
        states[i]->errs = errs_new (0, 0);
    }

  free (errors);
}


void
conflicts_update_state_numbers (state_number old_to_new[],
                                state_number nstates_old)
{
  state_number i;
  for (i = 0; i < nstates_old; ++i)
    if (old_to_new[i] != nstates_old)
      conflicts[old_to_new[i]] = conflicts[i];
}


/*---------------------------------------------.
| Count the number of shift/reduce conflicts.  |
`---------------------------------------------*/

static size_t
count_state_sr_conflicts (state *s)
{
  int i;
  transitions *trans = s->transitions;
  reductions *reds = s->reductions;

  if (!trans)
    return 0;

  bitset_zero (lookahead_set);
  bitset_zero (shift_set);

  FOR_EACH_SHIFT (trans, i)
    bitset_set (shift_set, TRANSITION_SYMBOL (trans, i));

  for (i = 0; i < reds->num; ++i)
    bitset_or (lookahead_set, lookahead_set, reds->lookahead_tokens[i]);

  bitset_and (lookahead_set, lookahead_set, shift_set);

  return bitset_count (lookahead_set);
}

/*---------------------------------------------.
| The total number of shift/reduce conflicts.  |
`---------------------------------------------*/

static size_t
count_sr_conflicts (void)
{
  size_t res = 0;
  state_number i;

  /* Conflicts by state.  */
  for (i = 0; i < nstates; i++)
    if (conflicts[i])
      res += count_state_sr_conflicts (states[i]);
  return res;
}



/*----------------------------------------------------------------.
| Count the number of reduce/reduce conflicts.  If ONE_PER_TOKEN, |
| count one conflict for each token that has any reduce/reduce    |
| conflicts.  Otherwise, count one conflict for each pair of      |
| conflicting reductions.                                         |
`----------------------------------------------------------------*/

static size_t
count_state_rr_conflicts (state *s, bool one_per_token)
{
  int i;
  reductions *reds = s->reductions;
  size_t res = 0;

  for (i = 0; i < ntokens; i++)
    {
      int count = 0;
      int j;
      for (j = 0; j < reds->num; ++j)
        count += bitset_test (reds->lookahead_tokens[j], i);
      if (count >= 2)
        res += one_per_token ? 1 : count-1;
    }

  return res;
}

static size_t
count_rr_conflicts (bool one_per_token)
{
  size_t res = 0;
  state_number i;

  /* Conflicts by state.  */
  for (i = 0; i < nstates; i++)
    if (conflicts[i])
      res += count_state_rr_conflicts (states[i], one_per_token);
  return res;
}


/*-----------------------------------------------------------.
| Output the detailed description of states with conflicts.  |
`-----------------------------------------------------------*/

void
conflicts_output (FILE *out)
{
  bool printed_sth = false;
  state_number i;
  for (i = 0; i < nstates; i++)
    {
      state *s = states[i];
      if (conflicts[i])
        {
          int src = count_state_sr_conflicts (s);
          int rrc = count_state_rr_conflicts (s, true);
          fprintf (out, _("State %d "), i);
          if (src && rrc)
            fprintf (out,
                     _("conflicts: %d shift/reduce, %d reduce/reduce\n"),
                     src, rrc);
          else if (src)
            fprintf (out, _("conflicts: %d shift/reduce\n"), src);
          else if (rrc)
            fprintf (out, _("conflicts: %d reduce/reduce\n"), rrc);
          printed_sth = true;
        }
    }
  if (printed_sth)
    fputs ("\n\n", out);
}

/*--------------------------------------------------------.
| Total the number of S/R and R/R conflicts.  Unlike the  |
| code in conflicts_output, however, count EACH pair of   |
| reductions for the same state and lookahead as one      |
| conflict.                                               |
`--------------------------------------------------------*/

int
conflicts_total_count (void)
{
  return count_sr_conflicts () + count_rr_conflicts (false);
}


/*------------------------------------------.
| Reporting the total number of conflicts.  |
`------------------------------------------*/

void
conflicts_print (void)
{
  if (! glr_parser && expected_rr_conflicts != -1)
    {
      complain (NULL, Wother, _("%%expect-rr applies only to GLR parsers"));
      expected_rr_conflicts = -1;
    }

  /* Screams for factoring, but almost useless because of the
     different strings to translate.  */
  {
    int total = count_sr_conflicts ();
    /* If %expect is not used, but %expect-rr is, then expect 0 sr.  */
    int expected =
      (expected_sr_conflicts == -1 && expected_rr_conflicts != -1)
      ? 0
      : expected_sr_conflicts;
    if (expected != -1)
      {
        if (expected != total)
          complain (NULL, complaint,
                    _("shift/reduce conflicts: %d found, %d expected"),
                    total, expected);
      }
    else if (total)
      complain (NULL, Wconflicts_sr,
                ngettext ("%d shift/reduce conflict",
                          "%d shift/reduce conflicts",
                          total),
                total);
  }

  {
    int total = count_rr_conflicts (true);
    /* If %expect-rr is not used, but %expect is, then expect 0 rr.  */
    int expected =
      (expected_rr_conflicts == -1 && expected_sr_conflicts != -1)
      ? 0
      : expected_rr_conflicts;
    if (expected != -1)
      {
        if (expected != total)
          complain (NULL, complaint,
                    _("reduce/reduce conflicts: %d found, %d expected"),
                    total, expected);
      }
    else if (total)
      complain (NULL, Wconflicts_rr,
                ngettext ("%d reduce/reduce conflict",
                          "%d reduce/reduce conflicts",
                          total),
                total);
  }
}


void
conflicts_free (void)
{
  free (conflicts);
  bitset_free (shift_set);
  bitset_free (lookahead_set);
  obstack_free (&solved_conflicts_obstack, NULL);
  obstack_free (&solved_conflicts_xml_obstack, NULL);
}
