/* Input parser for Bison

   Copyright (C) 1984, 1986, 1989, 1992, 1998, 2000-2003, 2005-2007,
   2009-2015 Free Software Foundation, Inc.

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

#include <quote.h>

#include "complain.h"
#include "conflicts.h"
#include "files.h"
#include "getargs.h"
#include "gram.h"
#include "muscle-tab.h"
#include "reader.h"
#include "symlist.h"
#include "symtab.h"
#include "scan-gram.h"
#include "scan-code.h"

static void prepare_percent_define_front_end_variables (void);
static void check_and_convert_grammar (void);

static symbol_list *grammar = NULL;
static bool start_flag = false;
merger_list *merge_functions;

/* Was %union seen?  */
bool union_seen = false;

/* Was a tag seen?  */
bool tag_seen = false;

/* Should rules have a default precedence?  */
bool default_prec = true;

/*-----------------------.
| Set the start symbol.  |
`-----------------------*/

void
grammar_start_symbol_set (symbol *sym, location loc)
{
  if (start_flag)
    complain (&loc, complaint, _("multiple %s declarations"), "%start");
  else
    {
      start_flag = true;
      startsymbol = sym;
      startsymbol_location = loc;
    }
}



/*------------------------------------------------------------------------.
| Return the merger index for a merging function named NAME.  Records the |
| function, if new, in MERGER_LIST.                                       |
`------------------------------------------------------------------------*/

static int
get_merge_function (uniqstr name)
{
  merger_list *syms;
  merger_list head;
  int n;

  if (! glr_parser)
    return 0;

  head.next = merge_functions;
  for (syms = &head, n = 1; syms->next; syms = syms->next, n += 1)
    if (UNIQSTR_EQ (name, syms->next->name))
      break;
  if (syms->next == NULL)
    {
      syms->next = xmalloc (sizeof syms->next[0]);
      syms->next->name = uniqstr_new (name);
      /* After all symbol type declarations have been parsed, packgram invokes
         record_merge_function_type to set the type.  */
      syms->next->type = NULL;
      syms->next->next = NULL;
      merge_functions = head.next;
    }
  return n;
}

/*-------------------------------------------------------------------------.
| For the existing merging function with index MERGER, record the result   |
| type as TYPE as required by the lhs of the rule whose %merge declaration |
| is at DECLARATION_LOC.                                                   |
`-------------------------------------------------------------------------*/

static void
record_merge_function_type (int merger, uniqstr type, location declaration_loc)
{
  int merger_find;
  merger_list *merge_function;

  if (merger <= 0)
    return;

  if (type == NULL)
    type = uniqstr_new ("");

  merger_find = 1;
  for (merge_function = merge_functions;
       merge_function != NULL && merger_find != merger;
       merge_function = merge_function->next)
    merger_find += 1;
  aver (merge_function != NULL && merger_find == merger);
  if (merge_function->type != NULL && !UNIQSTR_EQ (merge_function->type, type))
    {
      unsigned indent = 0;
      complain_indent (&declaration_loc, complaint, &indent,
                       _("result type clash on merge function %s: "
                         "<%s> != <%s>"),
                       quote (merge_function->name), type,
                       merge_function->type);
      indent += SUB_INDENT;
      complain_indent (&merge_function->type_declaration_location, complaint,
                       &indent,
                       _("previous declaration"));
    }
  merge_function->type = uniqstr_new (type);
  merge_function->type_declaration_location = declaration_loc;
}

/*--------------------------------------.
| Free all merge-function definitions.  |
`--------------------------------------*/

void
free_merger_functions (void)
{
  merger_list *L0 = merge_functions;
  while (L0)
    {
      merger_list *L1 = L0->next;
      free (L0);
      L0 = L1;
    }
}


/*-------------------------------------------------------------------.
| Parse the input grammar into a one symbol_list structure.  Each    |
| rule is represented by a sequence of symbols: the left hand side   |
| followed by the contents of the right hand side, followed by a     |
| null pointer instead of a symbol to terminate the rule.  The next  |
| symbol is the lhs of the following rule.                           |
|                                                                    |
| All actions are copied out, labelled by the rule number they apply |
| to.                                                                |
`-------------------------------------------------------------------*/

/* The (currently) last symbol of GRAMMAR. */
static symbol_list *grammar_end = NULL;

/* Append SYM to the grammar.  */
static symbol_list *
grammar_symbol_append (symbol *sym, location loc)
{
  symbol_list *p = symbol_list_sym_new (sym, loc);

  if (grammar_end)
    grammar_end->next = p;
  else
    grammar = p;

  grammar_end = p;

  /* A null SYM stands for an end of rule; it is not an actual
     part of it.  */
  if (sym)
    ++nritems;

  return p;
}

static void
assign_named_ref (symbol_list *p, named_ref *name)
{
  symbol *sym = p->content.sym;

  if (name->id == sym->tag)
    {
      complain (&name->loc, Wother,
                _("duplicated symbol name for %s ignored"),
                quote (sym->tag));
      named_ref_free (name);
    }
  else
    p->named_ref = name;
}


/* The rule currently being defined, and the previous rule.
   CURRENT_RULE points to the first LHS of the current rule, while
   PREVIOUS_RULE_END points to the *end* of the previous rule (NULL).  */
static symbol_list *current_rule = NULL;
static symbol_list *previous_rule_end = NULL;


/*----------------------------------------------.
| Create a new rule for LHS in to the GRAMMAR.  |
`----------------------------------------------*/

void
grammar_current_rule_begin (symbol *lhs, location loc,
                            named_ref *lhs_name)
{
  symbol_list* p;

  /* Start a new rule and record its lhs.  */
  ++nrules;
  previous_rule_end = grammar_end;

  p = grammar_symbol_append (lhs, loc);
  if (lhs_name)
    assign_named_ref (p, named_ref_copy (lhs_name));

  current_rule = grammar_end;

  /* Mark the rule's lhs as a nonterminal if not already so.  */
  if (lhs->class == unknown_sym)
    {
      lhs->class = nterm_sym;
      lhs->number = nvars;
      ++nvars;
    }
  else if (lhs->class == token_sym)
    complain (&loc, complaint, _("rule given for %s, which is a token"),
              lhs->tag);
}


/*----------------------------------------------------------------------.
| A symbol should be used if either:                                    |
|   1. It has a destructor.                                             |
|   2. The symbol is a mid-rule symbol (i.e., the generated LHS         |
|      replacing a mid-rule action) that was assigned to or used, as in |
|      "exp: { $$ = 1; } { $$ = $1; }".                                 |
`----------------------------------------------------------------------*/

static bool
symbol_should_be_used (symbol_list const *s, bool *midrule_warning)
{
  if (symbol_code_props_get (s->content.sym, destructor)->code)
    return true;
  if ((s->midrule && s->midrule->action_props.is_value_used)
      || (s->midrule_parent_rule
          && (symbol_list_n_get (s->midrule_parent_rule,
                                 s->midrule_parent_rhs_index)
              ->action_props.is_value_used)))
    {
      *midrule_warning = true;
      return true;
    }
  return false;
}

/*----------------------------------------------------------------.
| Check that the rule R is properly defined.  For instance, there |
| should be no type clash on the default action.                  |
`----------------------------------------------------------------*/

static void
grammar_rule_check (const symbol_list *r)
{
  /* Type check.

     If there is an action, then there is nothing we can do: the user
     is allowed to shoot herself in the foot.

     Don't worry about the default action if $$ is untyped, since $$'s
     value can't be used.  */
  if (!r->action_props.code && r->content.sym->type_name)
    {
      symbol *first_rhs = r->next->content.sym;
      /* If $$ is being set in default way, report if any type mismatch.  */
      if (first_rhs)
        {
          char const *lhs_type = r->content.sym->type_name;
          const char *rhs_type =
            first_rhs->type_name ? first_rhs->type_name : "";
          if (!UNIQSTR_EQ (lhs_type, rhs_type))
            complain (&r->location, Wother,
                      _("type clash on default action: <%s> != <%s>"),
                      lhs_type, rhs_type);
        }
      /* Warn if there is no default for $$ but we need one.  */
      else
        complain (&r->location, Wother,
                  _("empty rule for typed nonterminal, and no action"));
    }

  /* Check that symbol values that should be used are in fact used.  */
  {
    symbol_list const *l = r;
    int n = 0;
    for (; l && l->content.sym; l = l->next, ++n)
      {
        bool midrule_warning = false;
        if (!l->action_props.is_value_used
            && symbol_should_be_used (l, &midrule_warning)
            /* The default action, $$ = $1, 'uses' both.  */
            && (r->action_props.code || (n != 0 && n != 1)))
          {
            warnings warn_flag = midrule_warning ? Wmidrule_values : Wother;
            if (n)
              complain (&l->location, warn_flag, _("unused value: $%d"), n);
            else
              complain (&l->location, warn_flag, _("unset value: $$"));
          }
      }
  }

  /* Check that %empty => empty rule.  */
  if (r->percent_empty_loc.start.file
      && r->next && r->next->content.sym)
    complain (&r->percent_empty_loc, complaint,
              _("%%empty on non-empty rule"));

  /* Check that empty rule => %empty.  */
  if (!(r->next && r->next->content.sym)
      && !r->midrule_parent_rule
      && !r->percent_empty_loc.start.file)
    complain (&r->location, Wempty_rule, _("empty rule without %%empty"));

  /* See comments in grammar_current_rule_prec_set for how POSIX
     mandates this complaint.  It's only for identifiers, so skip
     it for char literals and strings, which are always tokens.  */
  if (r->ruleprec
      && r->ruleprec->tag[0] != '\'' && r->ruleprec->tag[0] != '"'
      && r->ruleprec->status != declared && !r->ruleprec->prec)
    complain (&r->location, Wother,
              _("token for %%prec is not defined: %s"), r->ruleprec->tag);
}


/*-------------------------------------.
| End the currently being grown rule.  |
`-------------------------------------*/

void
grammar_current_rule_end (location loc)
{
  /* Put an empty link in the list to mark the end of this rule  */
  grammar_symbol_append (NULL, grammar_end->location);
  current_rule->location = loc;
}


/*-------------------------------------------------------------------.
| The previous action turns out the be a mid-rule action.  Attach it |
| to the current rule, i.e., create a dummy symbol, attach it this   |
| mid-rule action, and append this dummy nonterminal to the current  |
| rule.                                                              |
`-------------------------------------------------------------------*/

void
grammar_midrule_action (void)
{
  /* Since the action was written out with this rule's number, we must
     give the new rule this number by inserting the new rule before
     it.  */

  /* Make a DUMMY nonterminal, whose location is that of the midrule
     action.  Create the MIDRULE.  */
  location dummy_location = current_rule->action_props.location;
  symbol *dummy = dummy_symbol_get (dummy_location);
  symbol_list *midrule = symbol_list_sym_new (dummy, dummy_location);

  /* Remember named_ref of previous action. */
  named_ref *action_name = current_rule->action_props.named_ref;

  /* Make a new rule, whose body is empty, before the current one, so
     that the action just read can belong to it.  */
  ++nrules;
  ++nritems;
  /* Attach its location and actions to that of the DUMMY.  */
  midrule->location = dummy_location;
  code_props_rule_action_init (&midrule->action_props,
                               current_rule->action_props.code,
                               current_rule->action_props.location,
                               midrule, 0,
                               current_rule->action_props.is_predicate);
  code_props_none_init (&current_rule->action_props);

  if (previous_rule_end)
    previous_rule_end->next = midrule;
  else
    grammar = midrule;

  /* End the dummy's rule.  */
  midrule->next = symbol_list_sym_new (NULL, dummy_location);
  midrule->next->next = current_rule;

  previous_rule_end = midrule->next;

  /* Insert the dummy nonterminal replacing the midrule action into
     the current rule.  Bind it to its dedicated rule.  */
  grammar_current_rule_symbol_append (dummy, dummy_location,
                                      action_name);
  grammar_end->midrule = midrule;
  midrule->midrule_parent_rule = current_rule;
  midrule->midrule_parent_rhs_index = symbol_list_length (current_rule->next);
}

/* Set the precedence symbol of the current rule to PRECSYM. */

void
grammar_current_rule_prec_set (symbol *precsym, location loc)
{
  /* POSIX says that any identifier is a nonterminal if it does not
     appear on the LHS of a grammar rule and is not defined by %token
     or by one of the directives that assigns precedence to a token.  We
     ignore this here because the only kind of identifier that POSIX
     allows to follow a %prec is a token and because assuming it's a
     token now can produce more logical error messages.  Nevertheless,
     grammar_rule_check does obey what we believe is the real intent of
     POSIX here: that an error be reported for any identifier that
     appears after %prec but that is not defined separately as a
     token.  */
  symbol_class_set (precsym, token_sym, loc, false);
  if (current_rule->ruleprec)
    duplicate_directive ("%prec",
                         current_rule->ruleprec->location, loc);
  else
    current_rule->ruleprec = precsym;
}

/* Set %empty for the current rule. */

void
grammar_current_rule_empty_set (location loc)
{
  /* If %empty is used and -Wno-empty-rule is not, then enable
     -Wempty-rule.  */
  if (warning_is_unset (Wempty_rule))
    warning_argmatch ("empty-rule", 0, 0);
  if (current_rule->percent_empty_loc.start.file)
    duplicate_directive ("%empty",
                         current_rule->percent_empty_loc, loc);
  else
    current_rule->percent_empty_loc = loc;
}

/* Attach dynamic precedence DPREC to the current rule. */

void
grammar_current_rule_dprec_set (int dprec, location loc)
{
  if (! glr_parser)
    complain (&loc, Wother, _("%s affects only GLR parsers"),
              "%dprec");
  if (dprec <= 0)
    complain (&loc, complaint, _("%s must be followed by positive number"),
              "%dprec");
  else if (current_rule->dprec != 0)
    duplicate_directive ("%dprec",
                         current_rule->dprec_location, loc);
  else
    {
      current_rule->dprec = dprec;
      current_rule->dprec_location = loc;
    }
}

/* Attach a merge function NAME with argument type TYPE to current
   rule. */

void
grammar_current_rule_merge_set (uniqstr name, location loc)
{
  if (! glr_parser)
    complain (&loc, Wother, _("%s affects only GLR parsers"),
              "%merge");
  if (current_rule->merger != 0)
    duplicate_directive ("%merge",
                         current_rule->merger_declaration_location, loc);
  else
    {
      current_rule->merger = get_merge_function (name);
      current_rule->merger_declaration_location = loc;
    }
}

/* Attach SYM to the current rule.  If needed, move the previous
   action as a mid-rule action.  */

void
grammar_current_rule_symbol_append (symbol *sym, location loc,
                                    named_ref *name)
{
  symbol_list *p;
  if (current_rule->action_props.code)
    grammar_midrule_action ();
  p = grammar_symbol_append (sym, loc);
  if (name)
    assign_named_ref (p, name);
  if (sym->status == undeclared || sym->status == used)
    sym->status = needed;
}

/* Attach an ACTION to the current rule.  */

void
grammar_current_rule_action_append (const char *action, location loc,
                                    named_ref *name, bool is_predicate)
{
  if (current_rule->action_props.code)
    grammar_midrule_action ();
  /* After all symbol declarations have been parsed, packgram invokes
     code_props_translate_code.  */
  code_props_rule_action_init (&current_rule->action_props, action, loc,
                               current_rule, name, is_predicate);
}


/*---------------------------------------------------------------.
| Convert the rules into the representation using RRHS, RLHS and |
| RITEM.                                                         |
`---------------------------------------------------------------*/

static void
packgram (void)
{
  unsigned int itemno = 0;
  rule_number ruleno = 0;
  symbol_list *p;

  ritem = xnmalloc (nritems + 1, sizeof *ritem);

  /* This sentinel is used by build_relations in gram.c.  */
  *ritem++ = 0;

  rules = xnmalloc (nrules, sizeof *rules);

  for (p = grammar; p; p = p->next)
    {
      symbol *ruleprec = p->ruleprec;
      record_merge_function_type (p->merger, p->content.sym->type_name,
                                  p->merger_declaration_location);
      rules[ruleno].user_number = ruleno;
      rules[ruleno].number = ruleno;
      rules[ruleno].lhs = p->content.sym;
      rules[ruleno].rhs = ritem + itemno;
      rules[ruleno].prec = NULL;
      rules[ruleno].dprec = p->dprec;
      rules[ruleno].merger = p->merger;
      rules[ruleno].precsym = NULL;
      rules[ruleno].location = p->location;
      rules[ruleno].useful = true;
      rules[ruleno].action = p->action_props.code;
      rules[ruleno].action_location = p->action_props.location;
      rules[ruleno].is_predicate = p->action_props.is_predicate;

      /* If the midrule's $$ is set or its $n is used, remove the '$' from the
         symbol name so that it's a user-defined symbol so that the default
         %destructor and %printer apply.  */
      if (p->midrule_parent_rule
          && (p->action_props.is_value_used
              || (symbol_list_n_get (p->midrule_parent_rule,
                                     p->midrule_parent_rhs_index)
                  ->action_props.is_value_used)))
        p->content.sym->tag += 1;

      /* Don't check the generated rule 0.  It has no action, so some rhs
         symbols may appear unused, but the parsing algorithm ensures that
         %destructor's are invoked appropriately.  */
      if (p != grammar)
        grammar_rule_check (p);

      {
        size_t rule_length = 0;
        for (p = p->next; p->content.sym; p = p->next)
          {
            ++rule_length;

            /* Don't allow rule_length == INT_MAX, since that might
               cause confusion with strtol if INT_MAX == LONG_MAX.  */
            if (rule_length == INT_MAX)
              complain (&rules[ruleno].location, fatal, _("rule is too long"));

            /* item_number = symbol_number.
               But the former needs to contain more: negative rule numbers. */
            ritem[itemno++] =
              symbol_number_as_item_number (p->content.sym->number);
            /* A rule gets by default the precedence and associativity
               of its last token.  */
            if (p->content.sym->class == token_sym && default_prec)
              rules[ruleno].prec = p->content.sym;
          }
      }

      /* If this rule has a %prec,
         the specified symbol's precedence replaces the default.  */
      if (ruleprec)
        {
          rules[ruleno].precsym = ruleprec;
          rules[ruleno].prec = ruleprec;
        }
      /* An item ends by the rule number (negated).  */
      ritem[itemno++] = rule_number_as_item_number (ruleno);
      aver (itemno < ITEM_NUMBER_MAX);
      ++ruleno;
      aver (ruleno < RULE_NUMBER_MAX);
    }

  aver (itemno == nritems);

  if (trace_flag & trace_sets)
    ritem_print (stderr);
}

/*------------------------------------------------------------------.
| Read in the grammar specification and record it in the format     |
| described in gram.h.  All actions are copied into ACTION_OBSTACK, |
| in each case forming the body of a C function (YYACTION) which    |
| contains a switch statement to decide which action to execute.    |
`------------------------------------------------------------------*/

void
reader (void)
{
  /* Initialize the symbol table.  */
  symbols_new ();

  /* Construct the accept symbol. */
  accept = symbol_get ("$accept", empty_location);
  accept->class = nterm_sym;
  accept->number = nvars++;

  /* Construct the error token */
  errtoken = symbol_get ("error", empty_location);
  errtoken->class = token_sym;
  errtoken->number = ntokens++;

  /* Construct a token that represents all undefined literal tokens.
     It is always token number 2.  */
  undeftoken = symbol_get ("$undefined", empty_location);
  undeftoken->class = token_sym;
  undeftoken->number = ntokens++;

  gram_in = xfopen (grammar_file, "r");

  gram__flex_debug = trace_flag & trace_scan;
  gram_debug = trace_flag & trace_parse;
  gram_scanner_initialize ();
  gram_parse ();
  prepare_percent_define_front_end_variables ();

  if (complaint_status  < status_complaint)
    check_and_convert_grammar ();

  xfclose (gram_in);
}

static void
prepare_percent_define_front_end_variables (void)
{
  /* Set %define front-end variable defaults.  */
  muscle_percent_define_default ("lr.keep-unreachable-state", "false");
  {
    char *lr_type;
    /* IELR would be a better default, but LALR is historically the
       default.  */
    muscle_percent_define_default ("lr.type", "lalr");
    lr_type = muscle_percent_define_get ("lr.type");
    if (STRNEQ (lr_type, "canonical-lr"))
      muscle_percent_define_default ("lr.default-reduction", "most");
    else
      muscle_percent_define_default ("lr.default-reduction", "accepting");
    free (lr_type);
  }

  /* Check %define front-end variables.  */
  {
    static char const * const values[] = {
      "lr.type", "lalr", "ielr", "canonical-lr", NULL,
      "lr.default-reduction", "most", "consistent", "accepting", NULL,
      NULL
    };
    muscle_percent_define_check_values (values);
  }
}


/*-------------------------------------------------------------.
| Check the grammar that has just been read, and convert it to |
| internal form.                                               |
`-------------------------------------------------------------*/

static void
check_and_convert_grammar (void)
{
  /* Grammar has been read.  Do some checking.  */
  if (nrules == 0)
    complain (NULL, fatal, _("no rules in the input grammar"));

  /* If the user did not define her ENDTOKEN, do it now. */
  if (!endtoken)
    {
      endtoken = symbol_get ("$end", empty_location);
      endtoken->class = token_sym;
      endtoken->number = 0;
      /* Value specified by POSIX.  */
      endtoken->user_token_number = 0;
    }

  /* Report any undefined symbols and consider them nonterminals.  */
  symbols_check_defined ();

  /* Find the start symbol if no %start.  */
  if (!start_flag)
    {
      symbol_list *node;
      for (node = grammar;
           node != NULL && symbol_is_dummy (node->content.sym);
           node = node->next)
        {
          for (node = node->next;
               node != NULL && node->content.sym != NULL;
               node = node->next)
            ;
        }
      aver (node != NULL);
      grammar_start_symbol_set (node->content.sym,
                                node->content.sym->location);
    }

  /* Insert the initial rule, whose line is that of the first rule
     (not that of the start symbol):

     $accept: %start $end.  */
  {
    symbol_list *p = symbol_list_sym_new (accept, empty_location);
    p->location = grammar->location;
    p->next = symbol_list_sym_new (startsymbol, empty_location);
    p->next->next = symbol_list_sym_new (endtoken, empty_location);
    p->next->next->next = symbol_list_sym_new (NULL, empty_location);
    p->next->next->next->next = grammar;
    nrules += 1;
    nritems += 3;
    grammar = p;
  }

  aver (nsyms <= SYMBOL_NUMBER_MAXIMUM);
  aver (nsyms == ntokens + nvars);

  /* Assign the symbols their symbol numbers.  Write #defines for the
     token symbols into FDEFINES if requested.  */
  symbols_pack ();

  /* Scan rule actions after invoking symbol_check_alias_consistency (in
     symbols_pack above) so that token types are set correctly before the rule
     action type checking.

     Before invoking grammar_rule_check (in packgram below) on any rule, make
     sure all actions have already been scanned in order to set 'used' flags.
     Otherwise, checking that a midrule's $$ should be set will not always work
     properly because the check must forward-reference the midrule's parent
     rule.  For the same reason, all the 'used' flags must be set before
     checking whether to remove '$' from any midrule symbol name (also in
     packgram).  */
  {
    symbol_list *sym;
    for (sym = grammar; sym; sym = sym->next)
      code_props_translate_code (&sym->action_props);
  }

  /* Convert the grammar into the format described in gram.h.  */
  packgram ();

  /* The grammar as a symbol_list is no longer needed. */
  symbol_list_free (grammar);
}
