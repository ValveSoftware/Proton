/* Lists of symbols for Bison

   Copyright (C) 2002, 2005-2007, 2009-2015 Free Software Foundation,
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

#ifndef SYMLIST_H_
# define SYMLIST_H_

# include "location.h"
# include "scan-code.h"
# include "symtab.h"
# include "named-ref.h"

/* A list of symbols, used during the parsing to store the rules.  */
typedef struct symbol_list
{
  /**
   * Whether this node contains a symbol, a semantic type, a \c <*>, or a
   * \c <>.
   */
  enum {
    SYMLIST_SYMBOL,
    SYMLIST_TYPE
  } content_type;
  union {
    /**
     * The symbol or \c NULL iff
     * <tt>symbol_list::content_type = SYMLIST_SYMBOL</tt>.
     */
    symbol *sym;
    /**
     * The semantic type iff <tt>symbol_list::content_type = SYMLIST_TYPE</tt>.
     */
    semantic_type *sem_type;
  } content;
  location location;

  /* Named reference. */
  named_ref *named_ref;

  /* Proper location of the symbol, not all the rule */
  location sym_loc;

  /* If this symbol is the generated lhs for a midrule but this is the rule in
     whose rhs it appears, MIDRULE = a pointer to that midrule.  */
  struct symbol_list *midrule;

  /* If this symbol is the generated lhs for a midrule and this is that
     midrule, MIDRULE_PARENT_RULE = a pointer to the rule in whose rhs it
     appears, and MIDRULE_PARENT_RHS_INDEX = its rhs index (1-origin) in the
     parent rule.  */
  struct symbol_list *midrule_parent_rule;
  int midrule_parent_rhs_index;

  /* ---------------------------------------------- */
  /* Apply to the rule (attached to the LHS only).  */
  /* ---------------------------------------------- */

  /* Precedence/associativity.  */
  symbol *ruleprec;

  /* The action is attached to the LHS of a rule, but action properties for
   * each RHS are also stored here.  */
  code_props action_props;

  /* The location of the first %empty for this rule, or \a
     empty_location.  */
  location percent_empty_loc;

  int dprec;
  location dprec_location;
  int merger;
  location merger_declaration_location;

  /* The list.  */
  struct symbol_list *next;
} symbol_list;


/** Create a list containing \c sym at \c loc.  */
symbol_list *symbol_list_sym_new (symbol *sym, location loc);

/** Create a list containing \c type_name at \c loc.  */
symbol_list *symbol_list_type_new (uniqstr type_name, location loc);

/** Print this list.

  \pre For every node \c n in the list, <tt>n->content_type =
  SYMLIST_SYMBOL</tt>.  */
void symbol_list_syms_print (const symbol_list *l, FILE *f);

/** Prepend \c node to \c list.  */
symbol_list *symbol_list_prepend (symbol_list *list, symbol_list *node);

/** Append \c node to \c list.  */
symbol_list *symbol_list_append (symbol_list *list, symbol_list *node);

/** Free \c list, but not the items it contains.  */
void symbol_list_free (symbol_list *list);

/** Return the length of \c l. */
int symbol_list_length (symbol_list const *l);

/** Get item \c n in symbol list \c l.
 ** \pre  0 <= n
 ** \post res != NULL
 **/
symbol_list *symbol_list_n_get (symbol_list *l, int n);

/* Get the data type (alternative in the union) of the value for
   symbol N in rule RULE.  */
uniqstr symbol_list_n_type_name_get (symbol_list *l, int n);

/* Check whether the node is a border element of a rule. */
bool symbol_list_null (symbol_list *node);

/** Set the \c \%destructor or \c \%printer for \c node as \c cprops.  */
void symbol_list_code_props_set (symbol_list *node, code_props_type kind,
                                 code_props const *cprops);

#endif /* !SYMLIST_H_ */
