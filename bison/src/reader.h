/* Input parser for Bison

   Copyright (C) 2000-2003, 2005-2007, 2009-2015 Free Software
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

#ifndef READER_H_
# define READER_H_

# include "location.h"
# include "symlist.h"
# include "named-ref.h"

# include "parse-gram.h"

typedef struct merger_list
{
  struct merger_list* next;
  uniqstr name;
  uniqstr type;
  location type_declaration_location;
} merger_list;

/* From the parser.  */
extern int gram_debug;
int gram_parse (void);
char const *token_name (int type);


/* From reader.c. */
void grammar_start_symbol_set (symbol *sym, location loc);
void grammar_current_rule_begin (symbol *lhs, location loc,
                                 named_ref *lhs_named_ref);
void grammar_current_rule_end (location loc);
void grammar_midrule_action (void);
/* Apply %empty to the current rule.  */
void grammar_current_rule_empty_set (location loc);
void grammar_current_rule_prec_set (symbol *precsym, location loc);
void grammar_current_rule_dprec_set (int dprec, location loc);
void grammar_current_rule_merge_set (uniqstr name, location loc);
void grammar_current_rule_symbol_append (symbol *sym, location loc,
                                         named_ref *nref);
void grammar_current_rule_action_append (const char *action, location loc,
                                         named_ref *nref, bool);
void reader (void);
void free_merger_functions (void);

extern merger_list *merge_functions;

/* Was %union seen?  */
extern bool union_seen;

/* Was a tag seen?  */
extern bool tag_seen;

/* Should rules have a default precedence?  */
extern bool default_prec;

#endif /* !READER_H_ */
