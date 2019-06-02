/* Symbol table manager for Bison.

   Copyright (C) 1984, 1989, 2000-2002, 2004-2015 Free Software
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

#include <hash.h>

#include "complain.h"
#include "gram.h"
#include "symtab.h"

/*-------------------------------------------------------------------.
| Symbols sorted by tag.  Allocated by the first invocation of       |
| symbols_do, after which no more symbols should be created.         |
`-------------------------------------------------------------------*/

static symbol **symbols_sorted = NULL;
static symbol **semantic_types_sorted = NULL;

/*------------------------.
| Distinguished symbols.  |
`------------------------*/

symbol *errtoken = NULL;
symbol *undeftoken = NULL;
symbol *endtoken = NULL;
symbol *accept = NULL;
symbol *startsymbol = NULL;
location startsymbol_location;

/*---------------------------.
| Precedence relation graph. |
`---------------------------*/

static symgraph **prec_nodes;

/*-----------------------------------.
| Store which associativity is used. |
`-----------------------------------*/

bool *used_assoc = NULL;

/*---------------------------------.
| Create a new symbol, named TAG.  |
`---------------------------------*/

static symbol *
symbol_new (uniqstr tag, location loc)
{
  symbol *res = xmalloc (sizeof *res);
  uniqstr_assert (tag);

  /* If the tag is not a string (starts with a double quote), check
     that it is valid for Yacc. */
  if (tag[0] != '\"' && tag[0] != '\'' && strchr (tag, '-'))
    complain (&loc, Wyacc,
              _("POSIX Yacc forbids dashes in symbol names: %s"), tag);

  res->tag = tag;
  res->location = loc;

  res->type_name = NULL;
  {
    int i;
    for (i = 0; i < CODE_PROPS_SIZE; ++i)
      code_props_none_init (&res->props[i]);
  }

  res->number = NUMBER_UNDEFINED;
  res->prec = 0;
  res->assoc = undef_assoc;
  res->user_token_number = USER_NUMBER_UNDEFINED;

  res->alias = NULL;
  res->class = unknown_sym;
  res->status = undeclared;

  if (nsyms == SYMBOL_NUMBER_MAXIMUM)
    complain (NULL, fatal, _("too many symbols in input grammar (limit is %d)"),
              SYMBOL_NUMBER_MAXIMUM);
  nsyms++;
  return res;
}

/* If needed, swap first and second so that first has the earliest
   location (according to location_cmp).

   Many symbol features (e.g., user token numbers) are not assigned
   during the parsing, but in a second step, via a traversal of the
   symbol table sorted on tag.

   However, error messages make more sense if we keep the first
   declaration first.
*/

static
void symbols_sort (symbol **first, symbol **second)
{
  if (0 < location_cmp ((*first)->location, (*second)->location))
    {
      symbol* tmp = *first;
      *first = *second;
      *second = tmp;
    }
}

/* Likewise, for locations.  */

static
void locations_sort (location *first, location *second)
{
  if (0 < location_cmp (*first, *second))
    {
      location tmp = *first;
      *first = *second;
      *second = tmp;
    }
}

char const *
code_props_type_string (code_props_type kind)
{
  switch (kind)
    {
    case destructor:
      return "%destructor";
    case printer:
      return "%printer";
    }
  abort ();
}

/*----------------------------------------.
| Create a new semantic type, named TAG.  |
`----------------------------------------*/

static semantic_type *
semantic_type_new (uniqstr tag, const location *loc)
{
  semantic_type *res = xmalloc (sizeof *res);

  uniqstr_assert (tag);
  res->tag = tag;
  res->location = loc ? *loc : empty_location;
  res->status = undeclared;
  {
    int i;
    for (i = 0; i < CODE_PROPS_SIZE; ++i)
      code_props_none_init (&res->props[i]);
  }

  return res;
}


/*-----------------.
| Print a symbol.  |
`-----------------*/

#define SYMBOL_ATTR_PRINT(Attr)                         \
  if (s->Attr)                                          \
    fprintf (f, " %s { %s }", #Attr, s->Attr)

#define SYMBOL_CODE_PRINT(Attr)                                         \
  if (s->props[Attr].code)                                              \
    fprintf (f, " %s { %s }", #Attr, s->props[Attr].code)

void
symbol_print (symbol const *s, FILE *f)
{
  if (s)
    {
      fputs (s->tag, f);
      SYMBOL_ATTR_PRINT (type_name);
      SYMBOL_CODE_PRINT (destructor);
      SYMBOL_CODE_PRINT (printer);
    }
  else
    fputs ("<NULL>", f);
}

#undef SYMBOL_ATTR_PRINT
#undef SYMBOL_CODE_PRINT


/*----------------------------------.
| Whether S is a valid identifier.  |
`----------------------------------*/

static bool
is_identifier (uniqstr s)
{
  static char const alphanum[26 + 26 + 1 + 10] =
    "abcdefghijklmnopqrstuvwxyz"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "_"
    "0123456789";
  if (!s || ! memchr (alphanum, *s, sizeof alphanum - 10))
    return false;
  for (++s; *s; ++s)
    if (! memchr (alphanum, *s, sizeof alphanum))
      return false;
  return true;
}


/*-----------------------------------------------.
| Get the identifier associated to this symbol.  |
`-----------------------------------------------*/
uniqstr
symbol_id_get (symbol const *sym)
{
  aver (sym->user_token_number != USER_NUMBER_HAS_STRING_ALIAS);
  if (sym->alias)
    sym = sym->alias;
  return is_identifier (sym->tag) ? sym->tag : 0;
}


/*------------------------------------------------------------------.
| Complain that S's WHAT is redeclared at SECOND, and was first set |
| at FIRST.                                                         |
`------------------------------------------------------------------*/

static void
symbol_redeclaration (symbol *s, const char *what, location first,
                      location second)
{
  unsigned i = 0;
  locations_sort (&first, &second);
  complain_indent (&second, complaint, &i,
                   _("%s redeclaration for %s"), what, s->tag);
  i += SUB_INDENT;
  complain_indent (&first, complaint, &i,
                   _("previous declaration"));
}

static void
semantic_type_redeclaration (semantic_type *s, const char *what, location first,
                             location second)
{
  unsigned i = 0;
  locations_sort (&first, &second);
  complain_indent (&second, complaint, &i,
                   _("%s redeclaration for <%s>"), what, s->tag);
  i += SUB_INDENT;
  complain_indent (&first, complaint, &i,
                   _("previous declaration"));
}



/*-----------------------------------------------------------------.
| Set the TYPE_NAME associated with SYM.  Does nothing if passed 0 |
| as TYPE_NAME.                                                    |
`-----------------------------------------------------------------*/

void
symbol_type_set (symbol *sym, uniqstr type_name, location loc)
{
  if (type_name)
    {
      if (sym->type_name)
        symbol_redeclaration (sym, "%type", sym->type_location, loc);
      else
        {
          uniqstr_assert (type_name);
          sym->type_name = type_name;
          sym->type_location = loc;
        }
    }
}

/*--------------------------------------------------------.
| Set the DESTRUCTOR or PRINTER associated with the SYM.  |
`--------------------------------------------------------*/

void
symbol_code_props_set (symbol *sym, code_props_type kind,
                       code_props const *code)
{
  if (sym->props[kind].code)
    symbol_redeclaration (sym, code_props_type_string (kind),
                          sym->props[kind].location,
                          code->location);
  else
    sym->props[kind] = *code;
}

/*-----------------------------------------------------.
| Set the DESTRUCTOR or PRINTER associated with TYPE.  |
`-----------------------------------------------------*/

void
semantic_type_code_props_set (semantic_type *type,
                              code_props_type kind,
                              code_props const *code)
{
  if (type->props[kind].code)
    semantic_type_redeclaration (type, code_props_type_string (kind),
                                 type->props[kind].location,
                                 code->location);
  else
    type->props[kind] = *code;
}

/*---------------------------------------------------.
| Get the computed %destructor or %printer for SYM.  |
`---------------------------------------------------*/

code_props *
symbol_code_props_get (symbol *sym, code_props_type kind)
{
  /* Per-symbol code props.  */
  if (sym->props[kind].code)
    return &sym->props[kind];

  /* Per-type code props.  */
  if (sym->type_name)
    {
      code_props *code =
        &semantic_type_get (sym->type_name, NULL)->props[kind];
      if (code->code)
        return code;
    }

  /* Apply default code props's only to user-defined symbols.  */
  if (sym->tag[0] != '$' && sym != errtoken)
    {
      code_props *code =
        &semantic_type_get (sym->type_name ? "*" : "", NULL)->props[kind];
      if (code->code)
        return code;
    }
  return &code_props_none;
}

/*-----------------------------------------------------------------.
| Set the PRECEDENCE associated with SYM.  Does nothing if invoked |
| with UNDEF_ASSOC as ASSOC.                                       |
`-----------------------------------------------------------------*/

void
symbol_precedence_set (symbol *sym, int prec, assoc a, location loc)
{
  if (a != undef_assoc)
    {
      if (sym->prec)
        symbol_redeclaration (sym, assoc_to_string (a), sym->prec_location,
                              loc);
      else
        {
          sym->prec = prec;
          sym->assoc = a;
          sym->prec_location = loc;
        }
    }

  /* Only terminals have a precedence. */
  symbol_class_set (sym, token_sym, loc, false);
}


/*------------------------------------.
| Set the CLASS associated with SYM.  |
`------------------------------------*/

void
symbol_class_set (symbol *sym, symbol_class class, location loc, bool declaring)
{
  bool warned = false;
  if (sym->class != unknown_sym && sym->class != class)
    {
      complain (&loc, complaint, _("symbol %s redefined"), sym->tag);
      /* Don't report both "redefined" and "redeclared".  */
      warned = true;
    }

  if (class == nterm_sym && sym->class != nterm_sym)
    sym->number = nvars++;
  else if (class == token_sym && sym->number == NUMBER_UNDEFINED)
    sym->number = ntokens++;

  sym->class = class;

  if (declaring)
    {
      if (sym->status == declared && !warned)
        complain (&loc, Wother, _("symbol %s redeclared"), sym->tag);
      else
        sym->status = declared;
    }
}


/*------------------------------------------------.
| Set the USER_TOKEN_NUMBER associated with SYM.  |
`------------------------------------------------*/

void
symbol_user_token_number_set (symbol *sym, int user_token_number, location loc)
{
  int *user_token_numberp;

  if (sym->user_token_number != USER_NUMBER_HAS_STRING_ALIAS)
    user_token_numberp = &sym->user_token_number;
  else
    user_token_numberp = &sym->alias->user_token_number;
  if (*user_token_numberp != USER_NUMBER_UNDEFINED
      && *user_token_numberp != user_token_number)
    complain (&loc, complaint, _("redefining user token number of %s"),
              sym->tag);

  *user_token_numberp = user_token_number;
  /* User defined $end token? */
  if (user_token_number == 0)
    {
      endtoken = sym;
      /* It is always mapped to 0, so it was already counted in
         NTOKENS.  */
      if (endtoken->number != NUMBER_UNDEFINED)
        --ntokens;
      endtoken->number = 0;
    }
}


/*----------------------------------------------------------.
| If SYM is not defined, report an error, and consider it a |
| nonterminal.                                              |
`----------------------------------------------------------*/

static inline bool
symbol_check_defined (symbol *sym)
{
  if (sym->class == unknown_sym)
    {
      assert (sym->status != declared);
      complain (&sym->location,
                sym->status == needed ? complaint : Wother,
                _("symbol %s is used, but is not defined as a token"
                  " and has no rules"),
                  sym->tag);
      sym->class = nterm_sym;
      sym->number = nvars++;
    }

  {
    int i;
    for (i = 0; i < 2; ++i)
      symbol_code_props_get (sym, i)->is_used = true;
  }

  /* Set the semantic type status associated to the current symbol to
     'declared' so that we could check semantic types unnecessary uses. */
  if (sym->type_name)
    {
      semantic_type *sem_type = semantic_type_get (sym->type_name, NULL);
      if (sem_type)
        sem_type->status = declared;
    }

  return true;
}

static inline bool
semantic_type_check_defined (semantic_type *sem_type)
{
  /* <*> and <> do not have to be "declared".  */
  if (sem_type->status == declared
      || !*sem_type->tag
      || STREQ (sem_type->tag, "*"))
    {
      int i;
      for (i = 0; i < 2; ++i)
        if (sem_type->props[i].kind != CODE_PROPS_NONE
            && ! sem_type->props[i].is_used)
          complain (&sem_type->location, Wother,
                    _("useless %s for type <%s>"),
                    code_props_type_string (i), sem_type->tag);
    }
  else
    complain (&sem_type->location, Wother,
              _("type <%s> is used, but is not associated to any symbol"),
              sem_type->tag);

  return true;
}

static bool
symbol_check_defined_processor (void *sym, void *null ATTRIBUTE_UNUSED)
{
  return symbol_check_defined (sym);
}

static bool
semantic_type_check_defined_processor (void *sem_type,
                                       void *null ATTRIBUTE_UNUSED)
{
  return semantic_type_check_defined (sem_type);
}


void
symbol_make_alias (symbol *sym, symbol *str, location loc)
{
  if (str->alias)
    complain (&loc, Wother,
              _("symbol %s used more than once as a literal string"), str->tag);
  else if (sym->alias)
    complain (&loc, Wother,
              _("symbol %s given more than one literal string"), sym->tag);
  else
    {
      str->class = token_sym;
      str->user_token_number = sym->user_token_number;
      sym->user_token_number = USER_NUMBER_HAS_STRING_ALIAS;
      str->alias = sym;
      sym->alias = str;
      str->number = sym->number;
      symbol_type_set (str, sym->type_name, loc);
    }
}


/*---------------------------------------------------------.
| Check that THIS, and its alias, have same precedence and |
| associativity.                                           |
`---------------------------------------------------------*/

static inline void
symbol_check_alias_consistency (symbol *this)
{
  symbol *sym = this;
  symbol *str = this->alias;

  /* Check only the symbol in the symbol-string pair.  */
  if (!(this->alias
        && this->user_token_number == USER_NUMBER_HAS_STRING_ALIAS))
    return;

  if (str->type_name != sym->type_name)
    {
      if (str->type_name)
        symbol_type_set (sym, str->type_name, str->type_location);
      else
        symbol_type_set (str, sym->type_name, sym->type_location);
    }


  {
    int i;
    for (i = 0; i < CODE_PROPS_SIZE; ++i)
      if (str->props[i].code)
        symbol_code_props_set (sym, i, &str->props[i]);
      else if (sym->props[i].code)
        symbol_code_props_set (str, i, &sym->props[i]);
  }

  if (sym->prec || str->prec)
    {
      if (str->prec)
        symbol_precedence_set (sym, str->prec, str->assoc,
                               str->prec_location);
      else
        symbol_precedence_set (str, sym->prec, sym->assoc,
                               sym->prec_location);
    }
}

static bool
symbol_check_alias_consistency_processor (void *this,
                                          void *null ATTRIBUTE_UNUSED)
{
  symbol_check_alias_consistency (this);
  return true;
}


/*-------------------------------------------------------------------.
| Assign a symbol number, and write the definition of the token name |
| into FDEFINES.  Put in SYMBOLS.                                    |
`-------------------------------------------------------------------*/

static inline bool
symbol_pack (symbol *this)
{
  aver (this->number != NUMBER_UNDEFINED);
  if (this->class == nterm_sym)
    this->number += ntokens;
  else if (this->user_token_number == USER_NUMBER_HAS_STRING_ALIAS)
    return true;

  symbols[this->number] = this;
  return true;
}

static bool
symbol_pack_processor (void *this, void *null ATTRIBUTE_UNUSED)
{
  return symbol_pack (this);
}


static void
user_token_number_redeclaration (int num, symbol *first, symbol *second)
{
  unsigned i = 0;
  symbols_sort (&first, &second);
  complain_indent (&second->location, complaint, &i,
                   _("user token number %d redeclaration for %s"),
                   num, second->tag);
  i += SUB_INDENT;
  complain_indent (&first->location, complaint, &i,
                   _("previous declaration for %s"),
                   first->tag);
}

/*--------------------------------------------------.
| Put THIS in TOKEN_TRANSLATIONS if it is a token.  |
`--------------------------------------------------*/

static inline bool
symbol_translation (symbol *this)
{
  /* Non-terminal? */
  if (this->class == token_sym
      && this->user_token_number != USER_NUMBER_HAS_STRING_ALIAS)
    {
      /* A token which translation has already been set? */
      if (token_translations[this->user_token_number] != undeftoken->number)
        user_token_number_redeclaration
          (this->user_token_number,
           symbols[token_translations[this->user_token_number]],
           this);
      else
        token_translations[this->user_token_number] = this->number;
    }

  return true;
}

static bool
symbol_translation_processor (void *this, void *null ATTRIBUTE_UNUSED)
{
  return symbol_translation (this);
}


/*---------------------------------------.
| Symbol and semantic type hash tables.  |
`---------------------------------------*/

/* Initial capacity of symbol and semantic type hash table.  */
#define HT_INITIAL_CAPACITY 257

static struct hash_table *symbol_table = NULL;
static struct hash_table *semantic_type_table = NULL;

static inline bool
hash_compare_symbol (const symbol *m1, const symbol *m2)
{
  /* Since tags are unique, we can compare the pointers themselves.  */
  return UNIQSTR_EQ (m1->tag, m2->tag);
}

static inline bool
hash_compare_semantic_type (const semantic_type *m1, const semantic_type *m2)
{
  /* Since names are unique, we can compare the pointers themselves.  */
  return UNIQSTR_EQ (m1->tag, m2->tag);
}

static bool
hash_symbol_comparator (void const *m1, void const *m2)
{
  return hash_compare_symbol (m1, m2);
}

static bool
hash_semantic_type_comparator (void const *m1, void const *m2)
{
  return hash_compare_semantic_type (m1, m2);
}

static inline size_t
hash_symbol (const symbol *m, size_t tablesize)
{
  /* Since tags are unique, we can hash the pointer itself.  */
  return ((uintptr_t) m->tag) % tablesize;
}

static inline size_t
hash_semantic_type (const semantic_type *m, size_t tablesize)
{
  /* Since names are unique, we can hash the pointer itself.  */
  return ((uintptr_t) m->tag) % tablesize;
}

static size_t
hash_symbol_hasher (void const *m, size_t tablesize)
{
  return hash_symbol (m, tablesize);
}

static size_t
hash_semantic_type_hasher (void const *m, size_t tablesize)
{
  return hash_semantic_type (m, tablesize);
}

/*-------------------------------.
| Create the symbol hash table.  |
`-------------------------------*/

void
symbols_new (void)
{
  symbol_table = hash_initialize (HT_INITIAL_CAPACITY,
                                  NULL,
                                  hash_symbol_hasher,
                                  hash_symbol_comparator,
                                  free);
  semantic_type_table = hash_initialize (HT_INITIAL_CAPACITY,
                                         NULL,
                                         hash_semantic_type_hasher,
                                         hash_semantic_type_comparator,
                                         free);
}


/*----------------------------------------------------------------.
| Find the symbol named KEY, and return it.  If it does not exist |
| yet, create it.                                                 |
`----------------------------------------------------------------*/

symbol *
symbol_from_uniqstr (const uniqstr key, location loc)
{
  symbol probe;
  symbol *entry;

  probe.tag = key;
  entry = hash_lookup (symbol_table, &probe);

  if (!entry)
    {
      /* First insertion in the hash. */
      aver (!symbols_sorted);
      entry = symbol_new (key, loc);
      if (!hash_insert (symbol_table, entry))
        xalloc_die ();
    }
  return entry;
}


/*-----------------------------------------------------------------------.
| Find the semantic type named KEY, and return it.  If it does not exist |
| yet, create it.                                                        |
`-----------------------------------------------------------------------*/

semantic_type *
semantic_type_from_uniqstr (const uniqstr key, const location *loc)
{
  semantic_type probe;
  semantic_type *entry;

  probe.tag = key;
  entry = hash_lookup (semantic_type_table, &probe);

  if (!entry)
    {
      /* First insertion in the hash. */
      entry = semantic_type_new (key, loc);
      if (!hash_insert (semantic_type_table, entry))
        xalloc_die ();
    }
  return entry;
}


/*----------------------------------------------------------------.
| Find the symbol named KEY, and return it.  If it does not exist |
| yet, create it.                                                 |
`----------------------------------------------------------------*/

symbol *
symbol_get (const char *key, location loc)
{
  return symbol_from_uniqstr (uniqstr_new (key), loc);
}


/*-----------------------------------------------------------------------.
| Find the semantic type named KEY, and return it.  If it does not exist |
| yet, create it.                                                        |
`-----------------------------------------------------------------------*/

semantic_type *
semantic_type_get (const char *key, const location *loc)
{
  return semantic_type_from_uniqstr (uniqstr_new (key), loc);
}


/*------------------------------------------------------------------.
| Generate a dummy nonterminal, whose name cannot conflict with the |
| user's names.                                                     |
`------------------------------------------------------------------*/

symbol *
dummy_symbol_get (location loc)
{
  /* Incremented for each generated symbol.  */
  static int dummy_count = 0;
  static char buf[256];

  symbol *sym;

  sprintf (buf, "$@%d", ++dummy_count);
  sym = symbol_get (buf, loc);
  sym->class = nterm_sym;
  sym->number = nvars++;
  return sym;
}

bool
symbol_is_dummy (const symbol *sym)
{
  return sym->tag[0] == '@' || (sym->tag[0] == '$' && sym->tag[1] == '@');
}

/*-------------------.
| Free the symbols.  |
`-------------------*/

void
symbols_free (void)
{
  hash_free (symbol_table);
  hash_free (semantic_type_table);
  free (symbols);
  free (symbols_sorted);
  free (semantic_types_sorted);
}


/*---------------------------------------------------------------.
| Look for undefined symbols, report an error, and consider them |
| terminals.                                                     |
`---------------------------------------------------------------*/

static int
symbols_cmp (symbol const *a, symbol const *b)
{
  return strcmp (a->tag, b->tag);
}

static int
symbols_cmp_qsort (void const *a, void const *b)
{
  return symbols_cmp (*(symbol * const *)a, *(symbol * const *)b);
}

static void
symbols_do (Hash_processor processor, void *processor_data,
            struct hash_table *table, symbol ***sorted)
{
  size_t count = hash_get_n_entries (table);
  if (!*sorted)
    {
      *sorted = xnmalloc (count, sizeof **sorted);
      hash_get_entries (table, (void**)*sorted, count);
      qsort (*sorted, count, sizeof **sorted, symbols_cmp_qsort);
    }
  {
    size_t i;
    for (i = 0; i < count; ++i)
      processor ((*sorted)[i], processor_data);
  }
}

/*--------------------------------------------------------------.
| Check that all the symbols are defined.  Report any undefined |
| symbols and consider them nonterminals.                       |
`--------------------------------------------------------------*/

void
symbols_check_defined (void)
{
  symbols_do (symbol_check_defined_processor, NULL,
              symbol_table, &symbols_sorted);
  symbols_do (semantic_type_check_defined_processor, NULL,
              semantic_type_table, &semantic_types_sorted);
}

/*------------------------------------------------------------------.
| Set TOKEN_TRANSLATIONS.  Check that no two symbols share the same |
| number.                                                           |
`------------------------------------------------------------------*/

static void
symbols_token_translations_init (void)
{
  bool num_256_available_p = true;
  int i;

  /* Find the highest user token number, and whether 256, the POSIX
     preferred user token number for the error token, is used.  */
  max_user_token_number = 0;
  for (i = 0; i < ntokens; ++i)
    {
      symbol *this = symbols[i];
      if (this->user_token_number != USER_NUMBER_UNDEFINED)
        {
          if (this->user_token_number > max_user_token_number)
            max_user_token_number = this->user_token_number;
          if (this->user_token_number == 256)
            num_256_available_p = false;
        }
    }

  /* If 256 is not used, assign it to error, to follow POSIX.  */
  if (num_256_available_p
      && errtoken->user_token_number == USER_NUMBER_UNDEFINED)
    errtoken->user_token_number = 256;

  /* Set the missing user numbers. */
  if (max_user_token_number < 256)
    max_user_token_number = 256;

  for (i = 0; i < ntokens; ++i)
    {
      symbol *this = symbols[i];
      if (this->user_token_number == USER_NUMBER_UNDEFINED)
        this->user_token_number = ++max_user_token_number;
      if (this->user_token_number > max_user_token_number)
        max_user_token_number = this->user_token_number;
    }

  token_translations = xnmalloc (max_user_token_number + 1,
                                 sizeof *token_translations);

  /* Initialize all entries for literal tokens to the internal token
     number for $undefined, which represents all invalid inputs.  */
  for (i = 0; i < max_user_token_number + 1; i++)
    token_translations[i] = undeftoken->number;
  symbols_do (symbol_translation_processor, NULL,
              symbol_table, &symbols_sorted);
}


/*----------------------------------------------------------------.
| Assign symbol numbers, and write definition of token names into |
| FDEFINES.  Set up vectors SYMBOL_TABLE, TAGS of symbols.        |
`----------------------------------------------------------------*/

void
symbols_pack (void)
{
  symbols_do (symbol_check_alias_consistency_processor, NULL,
              symbol_table, &symbols_sorted);

  symbols = xcalloc (nsyms, sizeof *symbols);
  symbols_do (symbol_pack_processor, NULL, symbol_table, &symbols_sorted);

  /* Aliases leave empty slots in symbols, so remove them.  */
  {
    int writei;
    int readi;
    int nsyms_old = nsyms;
    for (writei = 0, readi = 0; readi < nsyms_old; readi += 1)
      {
        if (symbols[readi] == NULL)
          {
            nsyms -= 1;
            ntokens -= 1;
          }
        else
          {
            symbols[writei] = symbols[readi];
            symbols[writei]->number = writei;
            if (symbols[writei]->alias)
              symbols[writei]->alias->number = writei;
            writei += 1;
          }
      }
  }
  symbols = xnrealloc (symbols, nsyms, sizeof *symbols);

  symbols_token_translations_init ();

  if (startsymbol->class == unknown_sym)
    complain (&startsymbol_location, fatal,
              _("the start symbol %s is undefined"),
              startsymbol->tag);
  else if (startsymbol->class == token_sym)
    complain (&startsymbol_location, fatal,
              _("the start symbol %s is a token"),
              startsymbol->tag);
}

/*---------------------------------.
| Initialize relation graph nodes. |
`---------------------------------*/

static void
init_prec_nodes (void)
{
  int i;
  prec_nodes = xcalloc (nsyms, sizeof *prec_nodes);
  for (i = 0; i < nsyms; ++i)
    {
      prec_nodes[i] = xmalloc (sizeof *prec_nodes[i]);
      symgraph *s = prec_nodes[i];
      s->id = i;
      s->succ = 0;
      s->pred = 0;
    }
}

/*----------------.
| Create a link.  |
`----------------*/

static symgraphlink *
symgraphlink_new (graphid id, symgraphlink *next)
{
  symgraphlink *l = xmalloc (sizeof *l);
  l->id = id;
  l->next = next;
  return l;
}


/*------------------------------------------------------------------.
| Register the second symbol of the precedence relation, and return |
| whether this relation is new.  Use only in register_precedence.   |
`------------------------------------------------------------------*/

static bool
register_precedence_second_symbol (symgraphlink **first, graphid sym)
{
  if (!*first || sym < (*first)->id)
    *first = symgraphlink_new (sym, *first);
  else
    {
      symgraphlink *slist = *first;

      while (slist->next && slist->next->id <= sym)
        slist = slist->next;

      if (slist->id == sym)
        /* Relation already present. */
        return false;

      slist->next = symgraphlink_new (sym, slist->next);
    }
  return true;
}

/*------------------------------------------------------------------.
| Register a new relation between symbols as used. The first symbol |
| has a greater precedence than the second one.                     |
`------------------------------------------------------------------*/

void
register_precedence (graphid first, graphid snd)
{
  if (!prec_nodes)
    init_prec_nodes ();
  register_precedence_second_symbol (&(prec_nodes[first]->succ), snd);
  register_precedence_second_symbol (&(prec_nodes[snd]->pred), first);
}


/*---------------------------------------.
| Deep clear a linked / adjacency list). |
`---------------------------------------*/

static void
linkedlist_free (symgraphlink *node)
{
  if (node)
    {
      while (node->next)
        {
          symgraphlink *tmp = node->next;
          free (node);
          node = tmp;
        }
      free (node);
    }
}

/*----------------------------------------------.
| Clear and destroy association tracking table. |
`----------------------------------------------*/

static void
assoc_free (void)
{
  int i;
  for (i = 0; i < nsyms; ++i)
    {
      linkedlist_free (prec_nodes[i]->pred);
      linkedlist_free (prec_nodes[i]->succ);
      free (prec_nodes[i]);
    }
  free (prec_nodes);
}

/*---------------------------------------.
| Initialize association tracking table. |
`---------------------------------------*/

static void
init_assoc (void)
{
  graphid i;
  used_assoc = xcalloc (nsyms, sizeof *used_assoc);
  for (i = 0; i < nsyms; ++i)
    used_assoc[i] = false;
}

/*------------------------------------------------------------------.
| Test if the associativity for the symbols is defined and useless. |
`------------------------------------------------------------------*/

static inline bool
is_assoc_useless (symbol *s)
{
  return s
      && s->assoc != undef_assoc
      && s->assoc != precedence_assoc
      && !used_assoc[s->number];
}

/*-------------------------------.
| Register a used associativity. |
`-------------------------------*/

void
register_assoc (graphid i, graphid j)
{
  if (!used_assoc)
    init_assoc ();
  used_assoc[i] = true;
  used_assoc[j] = true;
}

/*--------------------------------------------------.
| Print a warning for unused precedence relations.  |
`--------------------------------------------------*/

void
print_precedence_warnings (void)
{
  int i;
  if (!prec_nodes)
    init_prec_nodes ();
  if (!used_assoc)
    init_assoc ();
  for (i = 0; i < nsyms; ++i)
    {
      symbol *s = symbols[i];
      if (s
          && s->prec != 0
          && !prec_nodes[i]->pred
          && !prec_nodes[i]->succ)
        {
          if (is_assoc_useless (s))
            complain (&s->prec_location, Wprecedence,
                      _("useless precedence and associativity for %s"), s->tag);
          else if (s->assoc == precedence_assoc)
            complain (&s->prec_location, Wprecedence,
                      _("useless precedence for %s"), s->tag);
        }
      else if (is_assoc_useless (s))
        complain (&s->prec_location, Wprecedence,
                  _("useless associativity for %s, use %%precedence"), s->tag);
    }
  free (used_assoc);
  assoc_free ();
}
