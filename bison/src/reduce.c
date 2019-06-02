/* Grammar reduction for Bison.

   Copyright (C) 1988-1989, 2000-2003, 2005-2015 Free Software
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


/* Reduce the grammar: Find and eliminate unreachable terminals,
   nonterminals, and productions.  David S. Bakin.  */

/* Don't eliminate unreachable terminals: They may be used by the
   user's parser.  */

#include <config.h>
#include "system.h"

#include <bitset.h>

#include "complain.h"
#include "files.h"
#include "getargs.h"
#include "gram.h"
#include "print-xml.h"
#include "reader.h"
#include "reduce.h"
#include "symtab.h"

/* Set of all nonterminals which are not useless.  */
static bitset N;

/* Set of all rules which have no useless nonterminals in their RHS.  */
static bitset P;

/* Set of all accessible symbols.  */
static bitset V;

/* Set of symbols used to define rule precedence (so they are
   'useless', but no warning should be issued).  */
static bitset V1;

static rule_number nuseful_productions;
rule_number nuseless_productions;
static int nuseful_nonterminals;
symbol_number nuseless_nonterminals;

/*-------------------------------------------------------------------.
| Another way to do this would be with a set for each production and |
| then do subset tests against N0, but even for the C grammar the    |
| whole reducing process takes only 2 seconds on my 8Mhz AT.         |
`-------------------------------------------------------------------*/

static bool
useful_production (rule_number r, bitset N0)
{
  item_number *rhsp;

  /* A production is useful if all of the nonterminals in its appear
     in the set of useful nonterminals.  */

  for (rhsp = rules[r].rhs; *rhsp >= 0; ++rhsp)
    if (ISVAR (*rhsp) && !bitset_test (N0, *rhsp - ntokens))
      return false;
  return true;
}


/*---------------------------------------------------------.
| Remember that rules are 1-origin, symbols are 0-origin.  |
`---------------------------------------------------------*/

static void
useless_nonterminals (void)
{
  bitset Np, Ns;
  rule_number r;

  /* N is set as built.  Np is set being built this iteration. P is
     set of all productions which have a RHS all in N.  */

  Np = bitset_create (nvars, BITSET_FIXED);


  /* The set being computed is a set of nonterminals which can derive
     the empty string or strings consisting of all terminals. At each
     iteration a nonterminal is added to the set if there is a
     production with that nonterminal as its LHS for which all the
     nonterminals in its RHS are already in the set.  Iterate until
     the set being computed remains unchanged.  Any nonterminals not
     in the set at that point are useless in that they will never be
     used in deriving a sentence of the language.

     This iteration doesn't use any special traversal over the
     productions.  A set is kept of all productions for which all the
     nonterminals in the RHS are in useful.  Only productions not in
     this set are scanned on each iteration.  At the end, this set is
     saved to be used when finding useful productions: only
     productions in this set will appear in the final grammar.  */

  while (1)
    {
      bitset_copy (Np, N);
      for (r = 0; r < nrules; r++)
        if (!bitset_test (P, r)
            && useful_production (r, N))
          {
            bitset_set (Np, rules[r].lhs->number - ntokens);
            bitset_set (P, r);
          }
      if (bitset_equal_p (N, Np))
        break;
      Ns = Np;
      Np = N;
      N = Ns;
    }
  bitset_free (N);
  N = Np;
}


static void
inaccessable_symbols (void)
{
  bitset Vp, Vs, Pp;

  /* Find out which productions are reachable and which symbols are
     used.  Starting with an empty set of productions and a set of
     symbols which only has the start symbol in it, iterate over all
     productions until the set of productions remains unchanged for an
     iteration.  For each production which has a LHS in the set of
     reachable symbols, add the production to the set of reachable
     productions, and add all of the nonterminals in the RHS of the
     production to the set of reachable symbols.

     Consider only the (partially) reduced grammar which has only
     nonterminals in N and productions in P.

     The result is the set P of productions in the reduced grammar,
     and the set V of symbols in the reduced grammar.

     Although this algorithm also computes the set of terminals which
     are reachable, no terminal will be deleted from the grammar. Some
     terminals might not be in the grammar but might be generated by
     semantic routines, and so the user might want them available with
     specified numbers.  (Is this true?)  However, the nonreachable
     terminals are printed (if running in verbose mode) so that the
     user can know.  */

  Vp = bitset_create (nsyms, BITSET_FIXED);
  Pp = bitset_create (nrules, BITSET_FIXED);

  /* If the start symbol isn't useful, then nothing will be useful. */
  if (bitset_test (N, accept->number - ntokens))
    {
      bitset_set (V, accept->number);

      while (1)
        {
          rule_number r;
          bitset_copy (Vp, V);
          for (r = 0; r < nrules; r++)
            {
              if (!bitset_test (Pp, r)
                  && bitset_test (P, r)
                  && bitset_test (V, rules[r].lhs->number))
                {
                  item_number *rhsp;
                  for (rhsp = rules[r].rhs; *rhsp >= 0; rhsp++)
                    if (ISTOKEN (*rhsp) || bitset_test (N, *rhsp - ntokens))
                      bitset_set (Vp, *rhsp);
                  bitset_set (Pp, r);
                }
            }
          if (bitset_equal_p (V, Vp))
            break;
          Vs = Vp;
          Vp = V;
          V = Vs;
        }
    }

  bitset_free (V);
  V = Vp;

  /* Tokens 0, 1, and 2 are internal to Bison.  Consider them useful. */
  bitset_set (V, endtoken->number);             /* end-of-input token */
  bitset_set (V, errtoken->number);             /* error token */
  bitset_set (V, undeftoken->number);           /* some undefined token */

  bitset_free (P);
  P = Pp;

  nuseful_productions = bitset_count (P);
  nuseless_productions = nrules - nuseful_productions;

  nuseful_nonterminals = 0;
  {
    symbol_number i;
    for (i = ntokens; i < nsyms; i++)
      if (bitset_test (V, i))
        nuseful_nonterminals++;
  }
  nuseless_nonterminals = nvars - nuseful_nonterminals;

  /* A token that was used in %prec should not be warned about.  */
  {
    rule_number r;
    for (r = 0; r < nrules; ++r)
      if (rules[r].precsym != 0)
        bitset_set (V1, rules[r].precsym->number);
  }
}


/*-------------------------------------------------------------------.
| Put the useless productions at the end of RULES, and adjust NRULES |
| accordingly.                                                       |
`-------------------------------------------------------------------*/

static void
reduce_grammar_tables (void)
{
  /* Report and flag useless productions.  */
  {
    rule_number r;
    for (r = 0; r < nrules; r++)
      rules[r].useful = bitset_test (P, r);
    grammar_rules_useless_report (_("rule useless in grammar"));
  }

  /* Map the nonterminals to their new index: useful first, useless
     afterwards.  Kept for later report.  */
  {
    int useful = 0;
    int useless = nrules - nuseless_productions;
    rule *rules_sorted = xnmalloc (nrules, sizeof *rules_sorted);
    rule_number r;
    for (r = 0; r < nrules; ++r)
      rules_sorted[rules[r].useful ? useful++ : useless++] = rules[r];
    free (rules);
    rules = rules_sorted;

    /* Renumber the rules markers in RITEMS.  */
    for (r = 0; r < nrules; ++r)
      {
        item_number *rhsp = rules[r].rhs;
        for (/* Nothing. */; *rhsp >= 0; ++rhsp)
          /* Nothing. */;
        *rhsp = rule_number_as_item_number (r);
        rules[r].number = r;
      }
    nrules -= nuseless_productions;
  }

  /* Adjust NRITEMS.  */
  {
    rule_number r;
    int length;
    for (r = nrules; r < nrules + nuseless_productions; ++r)
      {
        length = rule_rhs_length (&rules[r]);
        nritems -= length + 1;
      }
  }
}


/*------------------------------.
| Remove useless nonterminals.  |
`------------------------------*/

static void
nonterminals_reduce (void)
{
  /* Map the nonterminals to their new index: useful first, useless
     afterwards.  Kept for later report.  */

  symbol_number *nontermmap = xnmalloc (nvars, sizeof *nontermmap);
  symbol_number n = ntokens;
  symbol_number i;
  for (i = ntokens; i < nsyms; i++)
    if (bitset_test (V, i))
      nontermmap[i - ntokens] = n++;
  for (i = ntokens; i < nsyms; i++)
    if (!bitset_test (V, i))
      {
        nontermmap[i - ntokens] = n++;
        if (symbols[i]->status != used)
          complain (&symbols[i]->location, Wother,
                    _("nonterminal useless in grammar: %s"),
                    symbols[i]->tag);
      }


  /* Shuffle elements of tables indexed by symbol number.  */
  {
    symbol **symbols_sorted = xnmalloc (nvars, sizeof *symbols_sorted);

    for (i = ntokens; i < nsyms; i++)
      symbols[i]->number = nontermmap[i - ntokens];
    for (i = ntokens; i < nsyms; i++)
      symbols_sorted[nontermmap[i - ntokens] - ntokens] = symbols[i];
    for (i = ntokens; i < nsyms; i++)
      symbols[i] = symbols_sorted[i - ntokens];
    free (symbols_sorted);
  }

  {
    rule_number r;
    for (r = 0; r < nrules; ++r)
      {
        item_number *rhsp;
        for (rhsp = rules[r].rhs; *rhsp >= 0; ++rhsp)
          if (ISVAR (*rhsp))
            *rhsp =  symbol_number_as_item_number (nontermmap[*rhsp
                                                              - ntokens]);
      }
    accept->number = nontermmap[accept->number - ntokens];
  }

  nsyms -= nuseless_nonterminals;
  nvars -= nuseless_nonterminals;

  free (nontermmap);
}


/*------------------------------------------------------------------.
| Output the detailed results of the reductions.  For FILE.output.  |
`------------------------------------------------------------------*/

void
reduce_output (FILE *out)
{
  if (nuseless_nonterminals > 0)
    {
      int i;
      fprintf (out, "%s\n\n", _("Nonterminals useless in grammar"));
      for (i = 0; i < nuseless_nonterminals; ++i)
        fprintf (out, "   %s\n", symbols[nsyms + i]->tag);
      fputs ("\n\n", out);
    }

  {
    bool b = false;
    int i;
    for (i = 0; i < ntokens; i++)
      if (reduce_token_unused_in_grammar (i))
        {
          if (!b)
            fprintf (out, "%s\n\n", _("Terminals unused in grammar"));
          b = true;
          fprintf (out, "   %s\n", symbols[i]->tag);
        }
    if (b)
      fputs ("\n\n", out);
  }

  if (nuseless_productions > 0)
    grammar_rules_partial_print (out, _("Rules useless in grammar"),
                                 rule_useless_in_grammar_p);
}


/*-------------------------------.
| Report the results to STDERR.  |
`-------------------------------*/

static void
reduce_print (void)
{
  if (nuseless_nonterminals > 0)
    complain (NULL, Wother, ngettext ("%d nonterminal useless in grammar",
                                      "%d nonterminals useless in grammar",
                                      nuseless_nonterminals),
              nuseless_nonterminals);
  if (nuseless_productions > 0)
    complain (NULL, Wother, ngettext ("%d rule useless in grammar",
                                      "%d rules useless in grammar",
                                      nuseless_productions),
              nuseless_productions);
}

void
reduce_grammar (void)
{
  bool reduced;

  /* Allocate the global sets used to compute the reduced grammar */

  N = bitset_create (nvars, BITSET_FIXED);
  P =  bitset_create (nrules, BITSET_FIXED);
  V = bitset_create (nsyms, BITSET_FIXED);
  V1 = bitset_create (nsyms, BITSET_FIXED);

  useless_nonterminals ();
  inaccessable_symbols ();

  reduced = (nuseless_nonterminals + nuseless_productions > 0);
  if (!reduced)
    return;

  reduce_print ();

  if (!bitset_test (N, accept->number - ntokens))
    complain (&startsymbol_location, fatal,
              _("start symbol %s does not derive any sentence"),
              startsymbol->tag);

  /* First reduce the nonterminals, as they renumber themselves in the
     whole grammar.  If you change the order, nonterms would be
     renumbered only in the reduced grammar.  */
  if (nuseless_nonterminals > 0)
    nonterminals_reduce ();
  if (nuseless_productions > 0)
    reduce_grammar_tables ();

  if (trace_flag & trace_grammar)
    {
      grammar_dump (stderr, "Reduced Grammar");

      fprintf (stderr, "reduced %s defines %d terminals, %d nonterminals"
               ", and %d productions.\n",
               grammar_file, ntokens, nvars, nrules);
    }
}

bool
reduce_token_unused_in_grammar (symbol_number i)
{
  aver (i < ntokens);
  return !bitset_test (V, i) && !bitset_test (V1, i);
}

bool
reduce_nonterminal_useless_in_grammar (symbol_number i)
{
  aver (ntokens <= i && i < nsyms + nuseless_nonterminals);
  return nsyms <= i;
}

/*-----------------------------------------------------------.
| Free the global sets used to compute the reduced grammar.  |
`-----------------------------------------------------------*/

void
reduce_free (void)
{
  bitset_free (N);
  bitset_free (V);
  bitset_free (V1);
  bitset_free (P);
}
