/* Definitions for symtab.c and callers, part of Bison.

   Copyright (C) 1984, 1989, 1992, 2000-2002, 2004-2015 Free Software
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

/**
 * \file symtab.h
 * \brief Manipulating ::symbol.
 */

#ifndef SYMTAB_H_
# define SYMTAB_H_

# include "assoc.h"
# include "location.h"
# include "scan-code.h"
# include "uniqstr.h"

/*----------.
| Symbols.  |
`----------*/

/** Symbol classes.  */
typedef enum
{
  unknown_sym,          /**< Undefined.  */
  token_sym,            /**< Terminal. */
  nterm_sym             /**< Non-terminal. */
} symbol_class;


/** Internal token numbers. */
typedef int symbol_number;
# define SYMBOL_NUMBER_MAXIMUM INT_MAX


typedef struct symbol symbol;

/* Declaration status of a symbol.

   First, it is "undeclared".  Then, if "undeclared" and used in a
   %printer/%destructor, it is "used".  If not "declared" but used in
   a rule, it is "needed".  Finally, if declared (via a rule for
   nonterminals, or %token), it is "declared".

   When status are checked at the end, "declared" symbols are fine,
   "used" symbols trigger warnings, otherwise it's an error.  */

typedef enum
  {
    /** Used in the input file for an unknown reason (error).  */
    undeclared,
    /** Used by %destructor/%printer but not defined (warning).  */
    used,
    /** Used in the gramar (rules) but not defined (error).  */
    needed,
    /** Defined with %type or %token (good).  */
    declared,
  } status;

enum code_props_type
  {
    destructor = 0,
    printer = 1,
  };
typedef enum code_props_type code_props_type;

enum { CODE_PROPS_SIZE = 2 };

/* When extending this structure, be sure to complete
   symbol_check_alias_consistency.  */
struct symbol
{
  /** The key, name of the symbol.  */
  uniqstr tag;
  /** The location of its first occurrence.  */
  location location;

  /** Its \c \%type.

      Beware that this is the type_name as was entered by the user,
      including silly things such as "]" if she entered "%token <]> t".
      Therefore, when outputting type_name to M4, be sure to escape it
      into "@}".  See quoted_output for instance.  */
  uniqstr type_name;

  /** Its \c \%type's location.  */
  location type_location;

  /** Any \c \%destructor (resp. \%printer) declared specificially for this
      symbol.

      Access this field only through <tt>symbol</tt>'s interface functions. For
      example, if <tt>symbol::destructor = NULL</tt> (resp. <tt>symbol::printer
      = NULL</tt>), a default \c \%destructor (resp. \%printer) or a per-type
      \c symbol_destructor_printer_get will compute the correct one. */
  code_props props[CODE_PROPS_SIZE];

  symbol_number number;
  location prec_location;
  int prec;
  assoc assoc;
  int user_token_number;

  /* Points to the other in the symbol-string pair for an alias.
     Special value USER_NUMBER_HAS_STRING_ALIAS in the symbol half of the
     symbol-string pair for an alias.  */
  symbol *alias;
  symbol_class class;
  status status;
};

/** Undefined user number.  */
# define USER_NUMBER_UNDEFINED -1

/* 'symbol->user_token_number == USER_NUMBER_HAS_STRING_ALIAS' means
   this symbol has a literal string alias.  For instance, '%token foo
   "foo"' has '"foo"' numbered regularly, and 'foo' numbered as
   USER_NUMBER_HAS_STRING_ALIAS.  */
# define USER_NUMBER_HAS_STRING_ALIAS -9991

/* Undefined internal token number.  */
# define NUMBER_UNDEFINED (-1)

/** Fetch (or create) the symbol associated to KEY.  */
symbol *symbol_from_uniqstr (const uniqstr key, location loc);

/** Fetch (or create) the symbol associated to KEY.  */
symbol *symbol_get (const char *key, location loc);

/** Generate a dummy nonterminal.

   Its name cannot conflict with the user's names.  */
symbol *dummy_symbol_get (location loc);


/*--------------------.
| Methods on symbol.  |
`--------------------*/

/** Print a symbol (for debugging). */
void symbol_print (symbol const *s, FILE *f);

/** Is this a dummy nonterminal?  */
bool symbol_is_dummy (const symbol *sym);

/** The name of the code_props type: "\%destructor" or "\%printer".  */
char const *code_props_type_string (code_props_type kind);

/** The name of the symbol that can be used as an identifier.
 ** Consider the alias if needed.
 ** Return 0 if there is none (e.g., the symbol is only defined as
 ** a string). */
uniqstr symbol_id_get (symbol const *sym);

/**
 * Make \c str the literal string alias of \c sym.  Copy token number,
 * symbol number, and type from \c sym to \c str.
 */
void symbol_make_alias (symbol *sym, symbol *str, location loc);

/** Set the \c type_name associated with \c sym.

    Do nothing if passed 0 as \c type_name.  */
void symbol_type_set (symbol *sym, uniqstr type_name, location loc);

/** Set the \c \%destructor or \c \%printer associated with \c sym.  */
void symbol_code_props_set (symbol *sym, code_props_type kind,
                            code_props const *destructor);

/** Get the computed \c \%destructor or \c %printer for \c sym, which was
    initialized with \c code_props_none_init if there's no \c \%destructor or
    \c %printer.  */
code_props *symbol_code_props_get (symbol *sym, code_props_type kind);

/** Set the \c precedence associated with \c sym.

    Ensure that \a symbol is a terminal.
    Do nothing if invoked with \c undef_assoc as \c assoc.  */
void symbol_precedence_set (symbol *sym, int prec, assoc a, location loc);

/** Set the \c class associated with \c sym.  */
void symbol_class_set (symbol *sym, symbol_class class, location loc,
                       bool declaring);

/** Set the \c user_token_number associated with \c sym.  */
void symbol_user_token_number_set (symbol *sym, int user_number, location loc);



/*------------------.
| Special symbols.  |
`------------------*/

/** The error token. */
extern symbol *errtoken;
/** The token for unknown tokens.  */
extern symbol *undeftoken;
/** The end of input token.  */
extern symbol *endtoken;
/** The genuine start symbol.

   $accept: start-symbol $end */
extern symbol *accept;

/** The user start symbol. */
extern symbol *startsymbol;
/** The location of the \c \%start declaration.  */
extern location startsymbol_location;



/*-------------------.
| Symbol Relations.  |
`-------------------*/

/* The symbol relations are represented by a directed graph. */

/* The id of a node */
typedef int graphid;

typedef struct symgraphlink symgraphlink;

struct symgraphlink
{
  /** The second \c symbol or group of a precedence relation.
   * See \c symgraph. */
  graphid id;

  symgraphlink *next;
};

/* Symbol precedence graph, to store the used precedence relations between
 * symbols. */

typedef struct symgraph symgraph;

struct symgraph
{
  /** Identifier for the node: equal to the number of the symbol. */
  graphid id;

  /** The list of related symbols that have a smaller precedence. */
  symgraphlink *succ;

  /** The list of related symbols that have a greater precedence. */
  symgraphlink *pred;
};

/** Register a new precedence relation as used. */

void register_precedence (graphid first, graphid snd);

/** Print a warning for each symbol whose precedence and/or associativity
 * is useless. */

void print_precedence_warnings (void);

/*----------------------.
| Symbol associativity  |
`----------------------*/

void register_assoc (graphid i, graphid j);

/*-----------------.
| Semantic types.  |
`-----------------*/

/** A semantic type and its associated \c \%destructor and \c \%printer.

   Access the fields of this struct only through the interface functions in
   this file.  \sa symbol::destructor  */
typedef struct {
  /** The key, name of the semantic type.  */
  uniqstr tag;

  /** The location of its first occurence.  */
  location location;

  /** Its status : "undeclared", "used" or "declared".
      It cannot be "needed".  */
  status status;

  /** Any \c %destructor and %printer declared for this
      semantic type.  */
  code_props props[CODE_PROPS_SIZE];

} semantic_type;

/** Fetch (or create) the semantic type associated to KEY.  */
semantic_type *semantic_type_from_uniqstr (const uniqstr key,
                                           const location *loc);

/** Fetch (or create) the semantic type associated to KEY.  */
semantic_type *semantic_type_get (const char *key, const location *loc);

/** Set the \c destructor or \c printer associated with \c type.  */
void semantic_type_code_props_set (semantic_type *type,
                                   code_props_type kind,
                                   code_props const *code);

/*----------------------------------.
| Symbol and semantic type tables.  |
`----------------------------------*/

/** Create the symbol and semantic type tables.  */
void symbols_new (void);

/** Free all the memory allocated for symbols and semantic types.  */
void symbols_free (void);

/** Check that all the symbols are defined.

    Report any undefined symbols and consider them nonterminals.  */
void symbols_check_defined (void);

/** Sanity checks and #token_translations construction.

   Perform various sanity checks, assign symbol numbers, and set up
   #token_translations.  */
void symbols_pack (void);

#endif /* !SYMTAB_H_ */
