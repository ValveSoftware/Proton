/* Allocate input grammar variables for Bison.

   Copyright (C) 1984, 1986, 1989, 2001-2003, 2005-2015 Free Software
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

#include <config.h>
#include "system.h"

#include "complain.h"
#include "getargs.h"
#include "gram.h"
#include "print-xml.h"
#include "reader.h"
#include "reduce.h"
#include "symtab.h"

/* Comments for these variables are in gram.h.  */

item_number *ritem = NULL;
unsigned int nritems = 0;

rule *rules = NULL;
rule_number nrules = 0;

symbol **symbols = NULL;
int nsyms = 0;
int ntokens = 1;
int nvars = 0;

symbol_number *token_translations = NULL;

int max_user_token_number = 256;

bool
rule_useful_in_grammar_p (rule const *r)
{
  return r->number < nrules;
}

bool
rule_useless_in_grammar_p (rule const *r)
{
  return !rule_useful_in_grammar_p (r);
}

bool
rule_useless_in_parser_p (rule const *r)
{
  return !r->useful && rule_useful_in_grammar_p (r);
}

void
rule_lhs_print (rule const *r, symbol const *previous_lhs, FILE *out)
{
  fprintf (out, "  %3d ", r->number);
  if (previous_lhs != r->lhs)
    fprintf (out, "%s:", r->lhs->tag);
  else
    fprintf (out, "%*s|", (int) strlen (previous_lhs->tag), "");
}

void
rule_lhs_print_xml (rule const *r, FILE *out, int level)
{
  xml_printf (out, level, "<lhs>%s</lhs>", r->lhs->tag);
}

size_t
rule_rhs_length (rule const *r)
{
  size_t res = 0;
  item_number *rhsp;
  for (rhsp = r->rhs; *rhsp >= 0; ++rhsp)
    ++res;
  return res;
}

void
rule_rhs_print (rule const *r, FILE *out)
{
  if (0 <= *r->rhs)
    {
      item_number *rp;
      for (rp = r->rhs; *rp >= 0; rp++)
        fprintf (out, " %s", symbols[*rp]->tag);
    }
  else
    fputs (" %empty", out);
}

static void
rule_rhs_print_xml (rule const *r, FILE *out, int level)
{
  if (*r->rhs >= 0)
    {
      item_number *rp;
      xml_puts (out, level, "<rhs>");
      for (rp = r->rhs; *rp >= 0; rp++)
        xml_printf (out, level + 1, "<symbol>%s</symbol>",
                    xml_escape (symbols[*rp]->tag));
      xml_puts (out, level, "</rhs>");
    }
  else
    {
      xml_puts (out, level, "<rhs>");
      xml_puts (out, level + 1, "<empty/>");
      xml_puts (out, level, "</rhs>");
    }
}

void
ritem_print (FILE *out)
{
  unsigned int i;
  fputs ("RITEM\n", out);
  for (i = 0; i < nritems; ++i)
    if (ritem[i] >= 0)
      fprintf (out, "  %s", symbols[ritem[i]]->tag);
    else
      fprintf (out, "  (rule %d)\n", item_number_as_rule_number (ritem[i]));
  fputs ("\n\n", out);
}

size_t
ritem_longest_rhs (void)
{
  int max = 0;
  rule_number r;

  for (r = 0; r < nrules; ++r)
    {
      int length = rule_rhs_length (&rules[r]);
      if (length > max)
        max = length;
    }

  return max;
}

void
grammar_rules_partial_print (FILE *out, const char *title,
                             rule_filter filter)
{
  rule_number r;
  bool first = true;
  symbol *previous_lhs = NULL;

  /* rule # : LHS -> RHS */
  for (r = 0; r < nrules + nuseless_productions; r++)
    {
      if (filter && !filter (&rules[r]))
        continue;
      if (first)
        fprintf (out, "%s\n\n", title);
      else if (previous_lhs && previous_lhs != rules[r].lhs)
        fputc ('\n', out);
      first = false;
      rule_lhs_print (&rules[r], previous_lhs, out);
      rule_rhs_print (&rules[r], out);
      fprintf (out, "\n");
      previous_lhs = rules[r].lhs;
    }
  if (!first)
    fputs ("\n\n", out);
}

void
grammar_rules_print (FILE *out)
{
  grammar_rules_partial_print (out, _("Grammar"), rule_useful_in_grammar_p);
}

void
grammar_rules_print_xml (FILE *out, int level)
{
  rule_number r;
  bool first = true;

  for (r = 0; r < nrules + nuseless_productions; r++)
    {
      if (first)
        xml_puts (out, level + 1, "<rules>");
      first = false;
      {
        char const *usefulness;
        if (rule_useless_in_grammar_p (&rules[r]))
          usefulness = "useless-in-grammar";
        else if (rule_useless_in_parser_p (&rules[r]))
          usefulness = "useless-in-parser";
        else
          usefulness = "useful";
        xml_indent (out, level + 2);
        fprintf (out, "<rule number=\"%d\" usefulness=\"%s\"",
                 rules[r].number, usefulness);
        if (rules[r].precsym)
          fprintf (out, " percent_prec=\"%s\"",
                   xml_escape (rules[r].precsym->tag));
        fputs (">\n", out);
      }
      rule_lhs_print_xml (&rules[r], out, level + 3);
      rule_rhs_print_xml (&rules[r], out, level + 3);
      xml_puts (out, level + 2, "</rule>");
    }
  if (!first)
    xml_puts (out, level + 1, "</rules>");
  else
   xml_puts (out, level + 1, "<rules/>");
}

void
grammar_dump (FILE *out, const char *title)
{
  fprintf (out, "%s\n\n", title);
  fprintf (out,
           "ntokens = %d, nvars = %d, nsyms = %d, nrules = %d, nritems = %d\n\n",
           ntokens, nvars, nsyms, nrules, nritems);


  fprintf (out, "Variables\n---------\n\n");
  {
    symbol_number i;
    fprintf (out, "Value  Sprec  Sassoc  Tag\n");

    for (i = ntokens; i < nsyms; i++)
      fprintf (out, "%5d  %5d   %5d  %s\n",
               i,
               symbols[i]->prec, symbols[i]->assoc,
               symbols[i]->tag);
    fprintf (out, "\n\n");
  }

  fprintf (out, "Rules\n-----\n\n");
  {
    rule_number i;
    fprintf (out,
             "Num (Prec, Assoc, Useful, Ritem Range) Lhs"
             " -> Rhs (Ritem range) [Num]\n");
    for (i = 0; i < nrules + nuseless_productions; i++)
      {
        rule const *rule_i = &rules[i];
        item_number *rp = NULL;
        unsigned int rhs_itemno = rule_i->rhs - ritem;
        unsigned int rhs_count = 0;
        /* Find the last RHS index in ritems. */
        for (rp = rule_i->rhs; *rp >= 0; ++rp)
          ++rhs_count;
        fprintf (out, "%3d (%2d, %2d, %2d, %2u-%2u)   %2d ->",
                 i,
                 rule_i->prec ? rule_i->prec->prec : 0,
                 rule_i->prec ? rule_i->prec->assoc : 0,
                 rule_i->useful,
                 rhs_itemno,
                 rhs_itemno + rhs_count - 1,
                 rule_i->lhs->number);
        /* Dumped the RHS. */
        for (rp = rule_i->rhs; *rp >= 0; rp++)
          fprintf (out, " %3d", *rp);
        fprintf (out, "  [%d]\n", item_number_as_rule_number (*rp));
      }
  }
  fprintf (out, "\n\n");

  fprintf (out, "Rules interpreted\n-----------------\n\n");
  {
    rule_number r;
    for (r = 0; r < nrules + nuseless_productions; r++)
      {
        fprintf (out, "%-5d  %s:", r, rules[r].lhs->tag);
        rule_rhs_print (&rules[r], out);
        fprintf (out, "\n");
      }
  }
  fprintf (out, "\n\n");
}

void
grammar_rules_useless_report (const char *message)
{
  rule_number r;
  for (r = 0; r < nrules ; ++r)
    if (!rules[r].useful)
      complain (&rules[r].location, Wother, "%s", message);
}

void
grammar_free (void)
{
  if (ritem)
    free (ritem - 1);
  free (rules);
  free (token_translations);
  /* Free the symbol table data structure.  */
  symbols_free ();
  free_merger_functions ();
}
