/* Bison Grammar Parser                             -*- C -*-

   Copyright (C) 2002-2015 Free Software Foundation, Inc.

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

%code requires
{
  #include "symlist.h"
  #include "symtab.h"
}

%code top
{
  /* On column 0 to please syntax-check.  */
#include <config.h>
}

%code
{
  #include "system.h"

  #include "c-ctype.h"
  #include "complain.h"
  #include "conflicts.h"
  #include "files.h"
  #include "getargs.h"
  #include "gram.h"
  #include "named-ref.h"
  #include "quotearg.h"
  #include "reader.h"
  #include "scan-gram.h"
  #include "scan-code.h"
  #include "xmemdup0.h"

  static int current_prec = 0;
  static location current_lhs_location;
  static named_ref *current_lhs_named_ref;
  static symbol *current_lhs_symbol;
  static symbol_class current_class = unknown_sym;
  static uniqstr current_type = NULL;

  /** Set the new current left-hand side symbol, possibly common
   * to several right-hand side parts of rule.
   */
  static void current_lhs (symbol *sym, location loc, named_ref *ref);

  #define YYLLOC_DEFAULT(Current, Rhs, N)         \
    (Current) = lloc_default (Rhs, N)
  static YYLTYPE lloc_default (YYLTYPE const *, int);

  #define YY_LOCATION_PRINT(File, Loc)            \
    location_print (Loc, File)

  /* Strip initial '{' and final '}' (must be first and last characters).
     Return the result.  */
  static char *strip_braces (char *code);

  /* Convert CODE by calling code_props_plain_init if PLAIN, otherwise
     code_props_symbol_action_init.  Call
     gram_scanner_last_string_free to release the latest string from
     the scanner (should be CODE). */
  static char const *translate_code (char *code, location loc, bool plain);

  /* Convert CODE by calling code_props_plain_init after having
     stripped the first and last characters (expected to be '{', and
     '}').  Call gram_scanner_last_string_free to release the latest
     string from the scanner (should be CODE). */
  static char const *translate_code_braceless (char *code, location loc);

  static void version_check (location const *loc, char const *version);

  static void gram_error (location const *, char const *);

  /* A string that describes a char (e.g., 'a' -> "'a'").  */
  static char const *char_name (char);

  #define YYTYPE_INT16 int_fast16_t
  #define YYTYPE_INT8 int_fast8_t
  #define YYTYPE_UINT16 uint_fast16_t
  #define YYTYPE_UINT8 uint_fast8_t
}

%define api.prefix {gram_}
%define api.pure full
%define locations
%define parse.error verbose
%define parse.lac full
%define parse.trace
%defines
%expect 0
%verbose

%initial-action
{
  /* Bison's grammar can initial empty locations, hence a default
     location is needed. */
  boundary_set (&@$.start, current_file, 1, 1);
  boundary_set (&@$.end, current_file, 1, 1);
}

/* Define the tokens together with their human representation.  */
%token GRAM_EOF 0 "end of file"
%token STRING     "string"

%token PERCENT_TOKEN       "%token"
%token PERCENT_NTERM       "%nterm"

%token PERCENT_TYPE        "%type"
%token PERCENT_DESTRUCTOR  "%destructor"
%token PERCENT_PRINTER     "%printer"

%token PERCENT_LEFT        "%left"
%token PERCENT_RIGHT       "%right"
%token PERCENT_NONASSOC    "%nonassoc"
%token PERCENT_PRECEDENCE  "%precedence"

%token PERCENT_PREC          "%prec"
%token PERCENT_DPREC         "%dprec"
%token PERCENT_MERGE         "%merge"

/*----------------------.
| Global Declarations.  |
`----------------------*/

%token
  PERCENT_CODE            "%code"
  PERCENT_DEFAULT_PREC    "%default-prec"
  PERCENT_DEFINE          "%define"
  PERCENT_DEFINES         "%defines"
  PERCENT_ERROR_VERBOSE   "%error-verbose"
  PERCENT_EXPECT          "%expect"
  PERCENT_EXPECT_RR       "%expect-rr"
  PERCENT_FLAG            "%<flag>"
  PERCENT_FILE_PREFIX     "%file-prefix"
  PERCENT_GLR_PARSER      "%glr-parser"
  PERCENT_INITIAL_ACTION  "%initial-action"
  PERCENT_LANGUAGE        "%language"
  PERCENT_NAME_PREFIX     "%name-prefix"
  PERCENT_NO_DEFAULT_PREC "%no-default-prec"
  PERCENT_NO_LINES        "%no-lines"
  PERCENT_NONDETERMINISTIC_PARSER
                          "%nondeterministic-parser"
  PERCENT_OUTPUT          "%output"
  PERCENT_REQUIRE         "%require"
  PERCENT_SKELETON        "%skeleton"
  PERCENT_START           "%start"
  PERCENT_TOKEN_TABLE     "%token-table"
  PERCENT_VERBOSE         "%verbose"
  PERCENT_YACC            "%yacc"
;

%token BRACED_CODE     "{...}"
%token BRACED_PREDICATE "%?{...}"
%token BRACKETED_ID    "[identifier]"
%token CHAR            "char"
%token EPILOGUE        "epilogue"
%token EQUAL           "="
%token ID              "identifier"
%token ID_COLON        "identifier:"
%token PERCENT_PERCENT "%%"
%token PIPE            "|"
%token PROLOGUE        "%{...%}"
%token SEMICOLON       ";"
%token TAG             "<tag>"
%token TAG_ANY         "<*>"
%token TAG_NONE        "<>"

%union {unsigned char character;}
%type <character> CHAR
%printer { fputs (char_name ($$), yyo); } CHAR

%union {char *code;};
%type <code> "{...}" "%?{...}" "%{...%}" EPILOGUE STRING
%printer { fputs (quotearg_style (c_quoting_style, $$), yyo); } STRING
%printer { fprintf (yyo, "{\n%s\n}", $$); } <code>

%union {uniqstr uniqstr;}
%type <uniqstr> BRACKETED_ID ID ID_COLON PERCENT_FLAG TAG tag variable
%printer { fputs ($$, yyo); } <uniqstr>
%printer { fprintf (yyo, "[%s]", $$); } BRACKETED_ID
%printer { fprintf (yyo, "%s:", $$); } ID_COLON
%printer { fprintf (yyo, "%%%s", $$); } PERCENT_FLAG
%printer { fprintf (yyo, "<%s>", $$); } TAG tag

%union {int integer;};
%token <integer> INT "integer"
%printer { fprintf (yyo, "%d", $$); } <integer>

%union {symbol *symbol;}
%type <symbol> id id_colon string_as_id symbol symbol.prec
%printer { fprintf (yyo, "%s", $$->tag); } <symbol>
%printer { fprintf (yyo, "%s:", $$->tag); } id_colon

%union {assoc assoc;};
%type <assoc> precedence_declarator

%union {symbol_list *list;}
%type <list>  symbols.1 symbols.prec generic_symlist generic_symlist_item

%union {named_ref *named_ref;}
%type <named_ref> named_ref.opt

/*---------.
| %param.  |
`---------*/
%code requires
{
  typedef enum
  {
    param_none   = 0,
    param_lex    = 1 << 0,
    param_parse  = 1 << 1,
    param_both   = param_lex | param_parse
  } param_type;
};
%code
{
  /** Add a lex-param and/or a parse-param.
   *
   * \param type  where to push this formal argument.
   * \param decl  the formal argument.  Destroyed.
   * \param loc   the location in the source.
   */
  static void add_param (param_type type, char *decl, location loc);
  static param_type current_param = param_none;
};
%union {param_type param;}
%token <param> PERCENT_PARAM "%param";
%printer
{
  switch ($$)
    {
#define CASE(In, Out)                                           \
      case param_ ## In: fputs ("%" #Out, yyo); break
      CASE (lex,   lex-param);
      CASE (parse, parse-param);
      CASE (both,  param);
#undef CASE
      case param_none: aver (false); break;
    }
} <param>;


                     /*==========\
                     | Grammar.  |
                     \==========*/
%%

input:
  prologue_declarations "%%" grammar epilogue.opt
;


        /*------------------------------------.
        | Declarations: before the first %%.  |
        `------------------------------------*/

prologue_declarations:
  %empty
| prologue_declarations prologue_declaration
;

prologue_declaration:
  grammar_declaration
| "%{...%}"
    {
      muscle_code_grow (union_seen ? "post_prologue" : "pre_prologue",
                        translate_code ($1, @1, true), @1);
      code_scanner_last_string_free ();
    }
| "%<flag>"
    {
      muscle_percent_define_ensure ($1, @1, true);
    }
| "%define" variable value
    {
      muscle_percent_define_insert ($2, @2, $3.kind, $3.chars,
                                    MUSCLE_PERCENT_DEFINE_GRAMMAR_FILE);
    }
| "%defines"                       { defines_flag = true; }
| "%defines" STRING
    {
      defines_flag = true;
      spec_defines_file = xstrdup ($2);
    }
| "%error-verbose"
    {
      muscle_percent_define_insert ("parse.error", @1, muscle_keyword,
                                    "verbose",
                                    MUSCLE_PERCENT_DEFINE_GRAMMAR_FILE);
    }
| "%expect" INT                    { expected_sr_conflicts = $2; }
| "%expect-rr" INT                 { expected_rr_conflicts = $2; }
| "%file-prefix" STRING            { spec_file_prefix = $2; }
| "%glr-parser"
    {
      nondeterministic_parser = true;
      glr_parser = true;
    }
| "%initial-action" "{...}"
    {
      muscle_code_grow ("initial_action", translate_code ($2, @2, false), @2);
      code_scanner_last_string_free ();
    }
| "%language" STRING            { language_argmatch ($2, grammar_prio, @1); }
| "%name-prefix" STRING         { spec_name_prefix = $2; }
| "%no-lines"                   { no_lines_flag = true; }
| "%nondeterministic-parser"    { nondeterministic_parser = true; }
| "%output" STRING              { spec_outfile = $2; }
| "%param" { current_param = $1; } params { current_param = param_none; }
| "%require" STRING             { version_check (&@2, $2); }
| "%skeleton" STRING
    {
      char const *skeleton_user = $2;
      if (strchr (skeleton_user, '/'))
        {
          size_t dir_length = strlen (current_file);
          char *skeleton_build;
          while (dir_length && current_file[dir_length - 1] != '/')
            --dir_length;
          while (dir_length && current_file[dir_length - 1] == '/')
            --dir_length;
          skeleton_build =
            xmalloc (dir_length + 1 + strlen (skeleton_user) + 1);
          if (dir_length > 0)
            {
              memcpy (skeleton_build, current_file, dir_length);
              skeleton_build[dir_length++] = '/';
            }
          strcpy (skeleton_build + dir_length, skeleton_user);
          skeleton_user = uniqstr_new (skeleton_build);
          free (skeleton_build);
        }
      skeleton_arg (skeleton_user, grammar_prio, @1);
    }
| "%token-table"                { token_table_flag = true; }
| "%verbose"                    { report_flag |= report_states; }
| "%yacc"                       { yacc_flag = true; }
| /*FIXME: Err?  What is this horror doing here? */ ";"
;

params:
   params "{...}"  { add_param (current_param, $2, @2); }
| "{...}"          { add_param (current_param, $1, @1); }
;


/*----------------------.
| grammar_declaration.  |
`----------------------*/

grammar_declaration:
  precedence_declaration
| symbol_declaration
| "%start" symbol
    {
      grammar_start_symbol_set ($2, @2);
    }
| code_props_type "{...}" generic_symlist
    {
      code_props code;
      code_props_symbol_action_init (&code, $2, @2);
      code_props_translate_code (&code);
      {
        symbol_list *list;
        for (list = $3; list; list = list->next)
          symbol_list_code_props_set (list, $1, &code);
        symbol_list_free ($3);
      }
    }
| "%default-prec"
    {
      default_prec = true;
    }
| "%no-default-prec"
    {
      default_prec = false;
    }
| "%code" "{...}"
    {
      /* Do not invoke muscle_percent_code_grow here since it invokes
         muscle_user_name_list_grow.  */
      muscle_code_grow ("percent_code()",
                        translate_code_braceless ($2, @2), @2);
      code_scanner_last_string_free ();
    }
| "%code" ID "{...}"
    {
      muscle_percent_code_grow ($2, @2, translate_code_braceless ($3, @3), @3);
      code_scanner_last_string_free ();
    }
;

%type <code_type> code_props_type;
%union {code_props_type code_type;};
%printer { fprintf (yyo, "%s", code_props_type_string ($$)); } <code_type>;
code_props_type:
  "%destructor"  { $$ = destructor; }
| "%printer"     { $$ = printer; }
;

/*---------.
| %union.  |
`---------*/

%token PERCENT_UNION "%union";

union_name:
  %empty {}
| ID     { muscle_percent_define_insert ("api.value.union.name",
                                         @1, muscle_keyword, $1,
                                         MUSCLE_PERCENT_DEFINE_GRAMMAR_FILE); }
;

grammar_declaration:
  "%union" union_name "{...}"
    {
      union_seen = true;
      muscle_code_grow ("union_members", translate_code_braceless ($3, @3), @3);
      code_scanner_last_string_free ();
    }
;




symbol_declaration:
  "%nterm" { current_class = nterm_sym; } symbol_defs.1
    {
      current_class = unknown_sym;
      current_type = NULL;
    }
| "%token" { current_class = token_sym; } symbol_defs.1
    {
      current_class = unknown_sym;
      current_type = NULL;
    }
| "%type" TAG symbols.1
    {
      symbol_list *list;
      tag_seen = true;
      for (list = $3; list; list = list->next)
        symbol_type_set (list->content.sym, $2, @2);
      symbol_list_free ($3);
    }
;

precedence_declaration:
  precedence_declarator tag.opt symbols.prec
    {
      symbol_list *list;
      ++current_prec;
      for (list = $3; list; list = list->next)
        {
          symbol_type_set (list->content.sym, current_type, @2);
          symbol_precedence_set (list->content.sym, current_prec, $1, @1);
        }
      symbol_list_free ($3);
      current_type = NULL;
    }
;

precedence_declarator:
  "%left"       { $$ = left_assoc; }
| "%right"      { $$ = right_assoc; }
| "%nonassoc"   { $$ = non_assoc; }
| "%precedence" { $$ = precedence_assoc; }
;

tag.opt:
  %empty { current_type = NULL; }
| TAG    { current_type = $1; tag_seen = true; }
;

/* Just like symbols.1 but accept INT for the sake of POSIX.  */
symbols.prec:
  symbol.prec
    { $$ = symbol_list_sym_new ($1, @1); }
| symbols.prec symbol.prec
    { $$ = symbol_list_append ($1, symbol_list_sym_new ($2, @2)); }
;

symbol.prec:
  symbol
    {
      $$ = $1;
      symbol_class_set ($1, token_sym, @1, false);
    }
| symbol INT
    {
      $$ = $1;
      symbol_user_token_number_set ($1, $2, @2);
      symbol_class_set ($1, token_sym, @1, false);
    }
;

/* One or more symbols to be %typed. */
symbols.1:
  symbol
    { $$ = symbol_list_sym_new ($1, @1); }
| symbols.1 symbol
    { $$ = symbol_list_append ($1, symbol_list_sym_new ($2, @2)); }
;

generic_symlist:
  generic_symlist_item { $$ = $1; }
| generic_symlist generic_symlist_item { $$ = symbol_list_append ($1, $2); }
;

generic_symlist_item:
  symbol    { $$ = symbol_list_sym_new ($1, @1); }
| tag       { $$ = symbol_list_type_new ($1, @1); }
;

tag:
  TAG
| "<*>" { $$ = uniqstr_new ("*"); }
| "<>"  { $$ = uniqstr_new (""); }
;

/* One token definition.  */
symbol_def:
  TAG
    {
      current_type = $1;
      tag_seen = true;
    }
| id
    {
      symbol_class_set ($1, current_class, @1, true);
      symbol_type_set ($1, current_type, @1);
    }
| id INT
    {
      symbol_class_set ($1, current_class, @1, true);
      symbol_type_set ($1, current_type, @1);
      symbol_user_token_number_set ($1, $2, @2);
    }
| id string_as_id
    {
      symbol_class_set ($1, current_class, @1, true);
      symbol_type_set ($1, current_type, @1);
      symbol_make_alias ($1, $2, @$);
    }
| id INT string_as_id
    {
      symbol_class_set ($1, current_class, @1, true);
      symbol_type_set ($1, current_type, @1);
      symbol_user_token_number_set ($1, $2, @2);
      symbol_make_alias ($1, $3, @$);
    }
;

/* One or more symbol definitions. */
symbol_defs.1:
  symbol_def
| symbol_defs.1 symbol_def
;


        /*------------------------------------------.
        | The grammar section: between the two %%.  |
        `------------------------------------------*/

grammar:
  rules_or_grammar_declaration
| grammar rules_or_grammar_declaration
;

/* As a Bison extension, one can use the grammar declarations in the
   body of the grammar.  */
rules_or_grammar_declaration:
  rules
| grammar_declaration ";"
| error ";"
    {
      yyerrok;
    }
;

rules:
  id_colon named_ref.opt { current_lhs ($1, @1, $2); } rhses.1
  {
    /* Free the current lhs. */
    current_lhs (0, @1, 0);
  }
;

rhses.1:
  rhs                { grammar_current_rule_end (@1); }
| rhses.1 "|" rhs    { grammar_current_rule_end (@3); }
| rhses.1 ";"
;

%token PERCENT_EMPTY "%empty";
rhs:
  %empty
    { grammar_current_rule_begin (current_lhs_symbol, current_lhs_location,
                                  current_lhs_named_ref); }
| rhs symbol named_ref.opt
    { grammar_current_rule_symbol_append ($2, @2, $3); }
| rhs "{...}" named_ref.opt
    { grammar_current_rule_action_append ($2, @2, $3, false); }
| rhs "%?{...}"
    { grammar_current_rule_action_append ($2, @2, NULL, true); }
| rhs "%empty"
    { grammar_current_rule_empty_set (@2); }
| rhs "%prec" symbol
    { grammar_current_rule_prec_set ($3, @3); }
| rhs "%dprec" INT
    { grammar_current_rule_dprec_set ($3, @3); }
| rhs "%merge" TAG
    { grammar_current_rule_merge_set ($3, @3); }
;

named_ref.opt:
  %empty         { $$ = 0; }
| BRACKETED_ID   { $$ = named_ref_new ($1, @1); }
;

/*---------------------.
| variable and value.  |
`---------------------*/

/* The STRING form of variable is deprecated and is not M4-friendly.
   For example, M4 fails for '%define "[" "value"'.  */
variable:
  ID
| STRING { $$ = uniqstr_new ($1); }
;

/* Some content or empty by default. */
%code requires {#include "muscle-tab.h"};
%union
{
  struct
  {
    char const *chars;
    muscle_kind kind;
  } value;
};
%type <value> value;
%printer
{
  switch ($$.kind)
    {
    case muscle_code:    fprintf (yyo,  "{%s}",  $$.chars); break;
    case muscle_keyword: fprintf (yyo,   "%s",   $$.chars); break;
    case muscle_string:  fprintf (yyo, "\"%s\"", $$.chars); break;
    }
} <value>;

value:
  %empty  { $$.kind = muscle_keyword; $$.chars = ""; }
| ID      { $$.kind = muscle_keyword; $$.chars = $1; }
| STRING  { $$.kind = muscle_string;  $$.chars = $1; }
| "{...}" { $$.kind = muscle_code;    $$.chars = strip_braces ($1); }
;


/*--------------.
| Identifiers.  |
`--------------*/

/* Identifiers are returned as uniqstr values by the scanner.
   Depending on their use, we may need to make them genuine symbols.  */

id:
  ID
    { $$ = symbol_from_uniqstr ($1, @1); }
| CHAR
    {
      $$ = symbol_get (char_name ($1), @1);
      symbol_class_set ($$, token_sym, @1, false);
      symbol_user_token_number_set ($$, $1, @1);
    }
;

id_colon:
  ID_COLON { $$ = symbol_from_uniqstr ($1, @1); }
;


symbol:
  id
| string_as_id
;

/* A string used as an ID: quote it.  */
string_as_id:
  STRING
    {
      $$ = symbol_get (quotearg_style (c_quoting_style, $1), @1);
      symbol_class_set ($$, token_sym, @1, false);
    }
;

epilogue.opt:
  %empty
| "%%" EPILOGUE
    {
      muscle_code_grow ("epilogue", translate_code ($2, @2, true), @2);
      code_scanner_last_string_free ();
    }
;

%%

/* Return the location of the left-hand side of a rule whose
   right-hand side is RHS[1] ... RHS[N].  Ignore empty nonterminals in
   the right-hand side, and return an empty location equal to the end
   boundary of RHS[0] if the right-hand side is empty.  */

static YYLTYPE
lloc_default (YYLTYPE const *rhs, int n)
{
  int i;
  YYLTYPE loc;

  /* SGI MIPSpro 7.4.1m miscompiles "loc.start = loc.end = rhs[n].end;".
     The bug is fixed in 7.4.2m, but play it safe for now.  */
  loc.start = rhs[n].end;
  loc.end = rhs[n].end;

  /* Ignore empty nonterminals the start of the right-hand side.
     Do not bother to ignore them at the end of the right-hand side,
     since empty nonterminals have the same end as their predecessors.  */
  for (i = 1; i <= n; i++)
    if (! equal_boundaries (rhs[i].start, rhs[i].end))
      {
        loc.start = rhs[i].start;
        break;
      }

  return loc;
}

static
char *strip_braces (char *code)
{
  code[strlen (code) - 1] = 0;
  return code + 1;
}

static
char const *
translate_code (char *code, location loc, bool plain)
{
  code_props plain_code;
  if (plain)
    code_props_plain_init (&plain_code, code, loc);
  else
    code_props_symbol_action_init (&plain_code, code, loc);
  code_props_translate_code (&plain_code);
  gram_scanner_last_string_free ();
  return plain_code.code;
}

static
char const *
translate_code_braceless (char *code, location loc)
{
  return translate_code (strip_braces (code), loc, true);
}

static void
add_param (param_type type, char *decl, location loc)
{
  static char const alphanum[26 + 26 + 1 + 10] =
    "abcdefghijklmnopqrstuvwxyz"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "_"
    "0123456789";

  char const *name_start = NULL;
  {
    char *p;
    /* Stop on last actual character.  */
    for (p = decl; p[1]; p++)
      if ((p == decl
           || ! memchr (alphanum, p[-1], sizeof alphanum))
          && memchr (alphanum, p[0], sizeof alphanum - 10))
        name_start = p;

    /* Strip the surrounding '{' and '}', and any blanks just inside
       the braces.  */
    --p;
  while (c_isspace ((unsigned char) *p))
      --p;
    p[1] = '\0';
    ++decl;
  while (c_isspace ((unsigned char) *decl))
      ++decl;
  }

  if (! name_start)
    complain (&loc, complaint, _("missing identifier in parameter declaration"));
  else
    {
      char *name = xmemdup0 (name_start, strspn (name_start, alphanum));
      if (type & param_lex)
        muscle_pair_list_grow ("lex_param", decl, name);
      if (type & param_parse)
        muscle_pair_list_grow ("parse_param", decl, name);
      free (name);
    }

  gram_scanner_last_string_free ();
}


static void
version_check (location const *loc, char const *version)
{
  if (strverscmp (version, PACKAGE_VERSION) > 0)
    {
      complain (loc, complaint, "require bison %s, but have %s",
                version, PACKAGE_VERSION);
      exit (EX_MISMATCH);
    }
}

static void
gram_error (location const *loc, char const *msg)
{
  complain (loc, complaint, "%s", msg);
}

char const *
token_name (int type)
{
  return yytname[YYTRANSLATE (type)];
}

static char const *
char_name (char c)
{
  if (c == '\'')
    return "'\\''";
  else
    {
      char buf[4];
      buf[0] = '\''; buf[1] = c; buf[2] = '\''; buf[3] = '\0';
      return quotearg_style (escape_quoting_style, buf);
    }
}

static
void
current_lhs (symbol *sym, location loc, named_ref *ref)
{
  current_lhs_symbol = sym;
  current_lhs_location = loc;
  /* In order to simplify memory management, named references for lhs
     are always assigned by deep copy into the current symbol_list
     node.  This is because a single named-ref in the grammar may
     result in several uses when the user factors lhs between several
     rules using "|".  Therefore free the parser's original copy.  */
  free (current_lhs_named_ref);
  current_lhs_named_ref = ref;
}
