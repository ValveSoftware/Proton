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

#include <config.h>
#include "system.h"

#include "symlist.h"

/*--------------------------------------.
| Create a list containing SYM at LOC.  |
`--------------------------------------*/

symbol_list *
symbol_list_sym_new (symbol *sym, location loc)
{
  symbol_list *res = xmalloc (sizeof *res);

  res->content_type = SYMLIST_SYMBOL;
  res->content.sym = sym;
  res->location = res->sym_loc = loc;
  res->named_ref = NULL;

  res->midrule = NULL;
  res->midrule_parent_rule = NULL;
  res->midrule_parent_rhs_index = 0;

  /* Members used for LHS only.  */
  res->ruleprec = NULL;
  res->percent_empty_loc = empty_location;
  code_props_none_init (&res->action_props);
  res->dprec = 0;
  res->dprec_location = empty_location;
  res->merger = 0;
  res->merger_declaration_location = empty_location;

  res->next = NULL;

  return res;
}


/*--------------------------------------------.
| Create a list containing TYPE_NAME at LOC.  |
`--------------------------------------------*/

symbol_list *
symbol_list_type_new (uniqstr type_name, location loc)
{
  symbol_list *res = xmalloc (sizeof *res);

  res->content_type = SYMLIST_TYPE;
  res->content.sem_type = xmalloc (sizeof (semantic_type));
  res->content.sem_type->tag = type_name;
  res->content.sem_type->location = loc;
  res->content.sem_type->status = undeclared;

  res->location = res->sym_loc = loc;
  res->named_ref = NULL;
  res->next = NULL;

  return res;
}


/*-----------------------------------------------------------------------.
| Print this list, for which every content_type must be SYMLIST_SYMBOL.  |
`-----------------------------------------------------------------------*/

void
symbol_list_syms_print (const symbol_list *l, FILE *f)
{
  char const *sep = "";
  for (/* Nothing. */; l && l->content.sym; l = l->next)
    {
      fputs (sep, f);
      fputs (l->content_type == SYMLIST_SYMBOL ? "symbol: "
             : l->content_type == SYMLIST_TYPE ? "type: "
             : "invalid content_type: ",
             f);
      symbol_print (l->content.sym, f);
      fputs (l->action_props.is_value_used ? " used" : " unused", f);
      sep = ", ";
    }
}


/*---------------------------.
| Prepend NODE to the LIST.  |
`---------------------------*/

symbol_list *
symbol_list_prepend (symbol_list *list, symbol_list *node)
{
  node->next = list;
  return node;
}


/*-------------------------.
| Append NODE to the LIST. |
`-------------------------*/

symbol_list *
symbol_list_append (symbol_list *list, symbol_list *node)
{
  if (!list)
    return node;
  symbol_list *next = list;
  while (next->next)
    next = next->next;
  next->next = node;
  return list;
}


/*-----------------------------------------------.
| Free the LIST, but not the items it contains.  |
`-----------------------------------------------*/

void
symbol_list_free (symbol_list *list)
{
  symbol_list *node, *next;
  for (node = list; node; node = next)
    {
      next = node->next;
      named_ref_free (node->named_ref);
      if (node->content_type == SYMLIST_TYPE)
        free (node->content.sem_type);
      free (node);
    }
}


/*--------------------.
| Return its length.  |
`--------------------*/

int
symbol_list_length (symbol_list const *l)
{
  int res = 0;
  for (/* Nothing. */;
       l && !(l->content_type == SYMLIST_SYMBOL && l->content.sym == NULL);
       l = l->next)
    ++res;
  return res;
}


/*------------------------------.
| Get item N in symbol list L.  |
`------------------------------*/

symbol_list *
symbol_list_n_get (symbol_list *l, int n)
{
  int i;
  aver (0 <= n);
  for (i = 0; i < n; ++i)
    {
      l = l->next;
      aver (l);
    }
  aver (l->content_type == SYMLIST_SYMBOL);
  aver (l->content.sym);
  return l;
}

/*--------------------------------------------------------------.
| Get the data type (alternative in the union) of the value for |
| symbol N in symbol list L.                                    |
`--------------------------------------------------------------*/

uniqstr
symbol_list_n_type_name_get (symbol_list *l, int n)
{
  return symbol_list_n_get (l, n)->content.sym->type_name;
}

bool
symbol_list_null (symbol_list *node)
{
  return (!node
          || (node->content_type == SYMLIST_SYMBOL && !node->content.sym));
}

void
symbol_list_code_props_set (symbol_list *node, code_props_type kind,
                            code_props const *cprops)
{
  switch (node->content_type)
    {
    case SYMLIST_SYMBOL:
      symbol_code_props_set (node->content.sym, kind, cprops);
      if (node->content.sym->status == undeclared)
        node->content.sym->status = used;
      break;
    case SYMLIST_TYPE:
      semantic_type_code_props_set
        (semantic_type_get (node->content.sem_type->tag,
                            &node->content.sem_type->location),
         kind, cprops);
      if (node->content.sem_type->status == undeclared)
        node->content.sem_type->status = used;
      break;
    }
}
