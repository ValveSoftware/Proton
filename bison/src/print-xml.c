/* Print an xml on generated parser, for Bison,

   Copyright (C) 2007, 2009-2015 Free Software Foundation, Inc.

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

#include <stdarg.h>

#include <bitset.h>

#include "LR0.h"
#include "closure.h"
#include "conflicts.h"
#include "files.h"
#include "getargs.h"
#include "gram.h"
#include "lalr.h"
#include "print.h"
#include "print-xml.h"
#include "reader.h"
#include "reduce.h"
#include "state.h"
#include "symtab.h"
#include "tables.h"

static bitset no_reduce_set;
struct escape_buf
{
  char *ptr;
  size_t size;
};
enum { num_escape_bufs = 3 };
static struct escape_buf escape_bufs[num_escape_bufs];


/*--------------------------------.
| Report information on a state.  |
`--------------------------------*/

static void
print_core (FILE *out, int level, state *s)
{
  size_t i;
  item_number *sitems = s->items;
  size_t snritems = s->nitems;

  /* Output all the items of a state, not only its kernel.  */
  closure (sitems, snritems);
  sitems = itemset;
  snritems = nitemset;

  if (!snritems)
    {
      xml_puts (out, level, "<itemset/>");
      return;
    }

  xml_puts (out, level, "<itemset>");

  for (i = 0; i < snritems; i++)
    {
      bool printed = false;
      item_number *sp1 = ritem + sitems[i];
      item_number *sp = sp1;
      rule *r;

      while (0 <= *sp)
        sp++;

      r = &rules[item_number_as_rule_number (*sp)];
      sp = r->rhs;

      /* Display the lookahead tokens?  */
      if (item_number_is_rule_number (*sp1))
        {
          reductions *reds = s->reductions;
          int red = state_reduction_find (s, r);
          /* Print item with lookaheads if there are. */
          if (reds->lookahead_tokens && red != -1)
            {
              xml_printf (out, level + 1,
                          "<item rule-number=\"%d\" point=\"%d\">",
                          r->number, sp1 - sp);
              state_rule_lookahead_tokens_print_xml (s, r,
                                                     out, level + 2);
              xml_puts (out, level + 1, "</item>");
              printed = true;
            }
        }

      if (!printed)
        xml_printf (out, level + 1,
                    "<item rule-number=\"%d\" point=\"%d\"/>",
                    r->number,
                    sp1 - sp);
    }
  xml_puts (out, level, "</itemset>");
}


/*-----------------------------------------------------------.
| Report the shifts if DISPLAY_SHIFTS_P or the gotos of S on |
| OUT.                                                       |
`-----------------------------------------------------------*/

static void
print_transitions (state *s, FILE *out, int level)
{
  transitions *trans = s->transitions;
  int n = 0;
  int i;

  for (i = 0; i < trans->num; i++)
    if (!TRANSITION_IS_DISABLED (trans, i))
      {
        n++;
      }

  /* Nothing to report. */
  if (!n)
    {
      xml_puts (out, level, "<transitions/>");
      return;
    }

  /* Report lookahead tokens and shifts.  */
  xml_puts (out, level, "<transitions>");

  for (i = 0; i < trans->num; i++)
    if (!TRANSITION_IS_DISABLED (trans, i)
        && TRANSITION_IS_SHIFT (trans, i))
      {
        symbol *sym = symbols[TRANSITION_SYMBOL (trans, i)];
        char const *tag = sym->tag;
        state *s1 = trans->states[i];

        xml_printf (out, level + 1,
                    "<transition type=\"shift\" symbol=\"%s\" state=\"%d\"/>",
                    xml_escape (tag), s1->number);
      }

  for (i = 0; i < trans->num; i++)
    if (!TRANSITION_IS_DISABLED (trans, i)
        && !TRANSITION_IS_SHIFT (trans, i))
      {
        symbol *sym = symbols[TRANSITION_SYMBOL (trans, i)];
        char const *tag = sym->tag;
        state *s1 = trans->states[i];

        xml_printf (out, level + 1,
                    "<transition type=\"goto\" symbol=\"%s\" state=\"%d\"/>",
                    xml_escape (tag), s1->number);
      }

  xml_puts (out, level, "</transitions>");
}


/*--------------------------------------------------------.
| Report the explicit errors of S raised from %nonassoc.  |
`--------------------------------------------------------*/

static void
print_errs (FILE *out, int level, state *s)
{
  errs *errp = s->errs;
  bool count = false;
  int i;

  for (i = 0; i < errp->num; ++i)
    if (errp->symbols[i])
      count = true;

  /* Nothing to report. */
  if (!count)
    {
      xml_puts (out, level, "<errors/>");
      return;
    }

  /* Report lookahead tokens and errors.  */
  xml_puts (out, level, "<errors>");
  for (i = 0; i < errp->num; ++i)
    if (errp->symbols[i])
      {
        char const *tag = errp->symbols[i]->tag;
        xml_printf (out, level + 1,
                    "<error symbol=\"%s\">nonassociative</error>",
                    xml_escape (tag));
      }
  xml_puts (out, level, "</errors>");
}


/*-------------------------------------------------------------------------.
| Report a reduction of RULE on LOOKAHEAD_TOKEN (which can be 'default').  |
| If not ENABLED, the rule is masked by a shift or a reduce (S/R and       |
| R/R conflicts).                                                          |
`-------------------------------------------------------------------------*/

static void
print_reduction (FILE *out, int level, char const *lookahead_token,
                 rule *r, bool enabled)
{
  if (r->number)
    xml_printf (out, level,
                "<reduction symbol=\"%s\" rule=\"%d\" enabled=\"%s\"/>",
                xml_escape (lookahead_token),
                r->number,
                enabled ? "true" : "false");
  else
    xml_printf (out, level,
                "<reduction symbol=\"%s\" rule=\"accept\" enabled=\"%s\"/>",
                xml_escape (lookahead_token),
                enabled ? "true" : "false");
}


/*-------------------------------------------.
| Report on OUT the reduction actions of S.  |
`-------------------------------------------*/

static void
print_reductions (FILE *out, int level, state *s)
{
  transitions *trans = s->transitions;
  reductions *reds = s->reductions;
  rule *default_reduction = NULL;
  int report = false;
  int i, j;

  if (reds->num == 0)
    {
      xml_puts (out, level, "<reductions/>");
      return;
    }

  if (yydefact[s->number] != 0)
    default_reduction = &rules[yydefact[s->number] - 1];

  bitset_zero (no_reduce_set);
  FOR_EACH_SHIFT (trans, i)
    bitset_set (no_reduce_set, TRANSITION_SYMBOL (trans, i));
  for (i = 0; i < s->errs->num; ++i)
    if (s->errs->symbols[i])
      bitset_set (no_reduce_set, s->errs->symbols[i]->number);

  if (default_reduction)
    report = true;

  if (reds->lookahead_tokens)
    for (i = 0; i < ntokens; i++)
      {
        bool count = bitset_test (no_reduce_set, i);

        for (j = 0; j < reds->num; ++j)
          if (bitset_test (reds->lookahead_tokens[j], i))
            {
              if (! count)
                {
                  if (reds->rules[j] != default_reduction)
                    report = true;
                  count = true;
                }
              else
                {
                  report = true;
                }
            }
      }

  /* Nothing to report. */
  if (!report)
    {
      xml_puts (out, level, "<reductions/>");
      return;
    }

  xml_puts (out, level, "<reductions>");

  /* Report lookahead tokens (or $default) and reductions.  */
  if (reds->lookahead_tokens)
    for (i = 0; i < ntokens; i++)
      {
        bool defaulted = false;
        bool count = bitset_test (no_reduce_set, i);

        for (j = 0; j < reds->num; ++j)
          if (bitset_test (reds->lookahead_tokens[j], i))
            {
              if (! count)
                {
                  if (reds->rules[j] != default_reduction)
                    print_reduction (out, level + 1, symbols[i]->tag,
                                     reds->rules[j], true);
                  else
                    defaulted = true;
                  count = true;
                }
              else
                {
                  if (defaulted)
                    print_reduction (out, level + 1, symbols[i]->tag,
                                     default_reduction, true);
                  defaulted = false;
                  print_reduction (out, level + 1, symbols[i]->tag,
                                   reds->rules[j], false);
                }
            }
      }

  if (default_reduction)
    print_reduction (out, level + 1,
                     "$default", default_reduction, true);

  xml_puts (out, level, "</reductions>");
}


/*--------------------------------------------------------------.
| Report on OUT all the actions (shifts, gotos, reductions, and |
| explicit erros from %nonassoc) of S.                          |
`--------------------------------------------------------------*/

static void
print_actions (FILE *out, int level, state *s)
{
  xml_puts (out, level, "<actions>");
  print_transitions (s, out, level + 1);
  print_errs (out, level + 1, s);
  print_reductions (out, level + 1, s);
  xml_puts (out, level, "</actions>");
}


/*----------------------------------.
| Report all the data on S on OUT.  |
`----------------------------------*/

static void
print_state (FILE *out, int level, state *s)
{
  fputc ('\n', out);
  xml_printf (out, level, "<state number=\"%d\">", s->number);
  print_core (out, level + 1, s);
  print_actions (out, level + 1, s);
  if (s->solved_conflicts_xml)
    {
      xml_puts (out, level + 1, "<solved-conflicts>");
      fputs (s->solved_conflicts_xml, out);
      xml_puts (out, level + 1, "</solved-conflicts>");
    }
  else
    xml_puts (out, level + 1, "<solved-conflicts/>");
  xml_puts (out, level, "</state>");
}


/*-----------------------------------------.
| Print information on the whole grammar.  |
`-----------------------------------------*/

static void
print_grammar (FILE *out, int level)
{
  symbol_number i;

  fputc ('\n', out);
  xml_puts (out, level, "<grammar>");
  grammar_rules_print_xml (out, level);

  /* Terminals */
  xml_puts (out, level + 1, "<terminals>");
  for (i = 0; i < max_user_token_number + 1; i++)
    if (token_translations[i] != undeftoken->number)
      {
        char const *tag = symbols[token_translations[i]]->tag;
        int precedence = symbols[token_translations[i]]->prec;
        assoc associativity = symbols[token_translations[i]]->assoc;
        xml_indent (out, level + 2);
        fprintf (out,
                 "<terminal symbol-number=\"%d\" token-number=\"%d\""
                 " name=\"%s\" usefulness=\"%s\"",
                 token_translations[i], i, xml_escape (tag),
                 reduce_token_unused_in_grammar (token_translations[i])
                   ? "unused-in-grammar" : "useful");
        if (precedence)
          fprintf (out, " prec=\"%d\"", precedence);
        if (associativity != undef_assoc)
          fprintf (out, " assoc=\"%s\"", assoc_to_string (associativity) + 1);
        fputs ("/>\n", out);
      }
  xml_puts (out, level + 1, "</terminals>");

  /* Nonterminals */
  xml_puts (out, level + 1, "<nonterminals>");
  for (i = ntokens; i < nsyms + nuseless_nonterminals; i++)
    {
      char const *tag = symbols[i]->tag;
      xml_printf (out, level + 2,
                  "<nonterminal symbol-number=\"%d\" name=\"%s\""
                  " usefulness=\"%s\"/>",
                  i, xml_escape (tag),
                  reduce_nonterminal_useless_in_grammar (i)
                    ? "useless-in-grammar" : "useful");
    }
  xml_puts (out, level + 1, "</nonterminals>");
  xml_puts (out, level, "</grammar>");
}

void
xml_indent (FILE *out, int level)
{
  int i;
  for (i = 0; i < level; i++)
    fputs ("  ", out);
}

void
xml_puts (FILE *out, int level, char const *s)
{
  xml_indent (out, level);
  fputs (s, out);
  fputc ('\n', out);
}

void
xml_printf (FILE *out, int level, char const *fmt, ...)
{
  va_list arglist;

  xml_indent (out, level);

  va_start (arglist, fmt);
  vfprintf (out, fmt, arglist);
  va_end (arglist);

  fputc ('\n', out);
}

static char const *
xml_escape_string (struct escape_buf *buf, char const *str)
{
  size_t len = strlen (str);
  size_t max_expansion = sizeof "&quot;" - 1;
  char *p;

  if (buf->size <= max_expansion * len)
    {
      buf->size = max_expansion * len + 1;
      buf->ptr = x2realloc (buf->ptr, &buf->size);
    }
  p = buf->ptr;

  for (; *str; str++)
    switch (*str)
      {
      default: *p++ = *str; break;
      case '&': p = stpcpy (p, "&amp;" ); break;
      case '<': p = stpcpy (p, "&lt;"  ); break;
      case '>': p = stpcpy (p, "&gt;"  ); break;
      case '"': p = stpcpy (p, "&quot;"); break;
      }

  *p = '\0';
  return buf->ptr;
}

char const *
xml_escape_n (int n, char const *str)
{
  return xml_escape_string (escape_bufs + n, str);
}

char const *
xml_escape (char const *str)
{
  return xml_escape_n (0, str);
}

void
print_xml (void)
{
  int level = 0;

  FILE *out = xfopen (spec_xml_file, "w");

  fputs ("<?xml version=\"1.0\"?>\n\n", out);
  xml_printf (out, level,
              "<bison-xml-report version=\"%s\" bug-report=\"%s\""
              " url=\"%s\">",
              xml_escape_n (0, VERSION),
              xml_escape_n (1, PACKAGE_BUGREPORT),
              xml_escape_n (2, PACKAGE_URL));

  fputc ('\n', out);
  xml_printf (out, level + 1, "<filename>%s</filename>",
              xml_escape (grammar_file));

  /* print grammar */
  print_grammar (out, level + 1);

  new_closure (nritems);
  no_reduce_set =  bitset_create (ntokens, BITSET_FIXED);

  /* print automaton */
  fputc ('\n', out);
  xml_puts (out, level + 1, "<automaton>");
  {
    state_number i;
    for (i = 0; i < nstates; i++)
      print_state (out, level + 2, states[i]);
  }
  xml_puts (out, level + 1, "</automaton>");

  bitset_free (no_reduce_set);
  free_closure ();

  xml_puts (out, 0, "</bison-xml-report>");

  {
    int i;
    for (i = 0; i < num_escape_bufs; ++i)
      free (escape_bufs[i].ptr);
  }

  xfclose (out);
}
