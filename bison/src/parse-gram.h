/* A Bison parser, made by GNU Bison 3.0.2.13-975bb-dirty.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_GRAM_SRC_PARSE_GRAM_H_INCLUDED
# define YY_GRAM_SRC_PARSE_GRAM_H_INCLUDED
/* Debug traces.  */
#ifndef GRAM_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define GRAM_DEBUG 1
#  else
#   define GRAM_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define GRAM_DEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined GRAM_DEBUG */
#if GRAM_DEBUG
extern int gram_debug;
#endif
/* "%code requires" blocks.  */
#line 21 "src/parse-gram.y" /* yacc.c:1909  */

  #include "symlist.h"
  #include "symtab.h"
#line 221 "src/parse-gram.y" /* yacc.c:1909  */

  typedef enum
  {
    param_none   = 0,
    param_lex    = 1 << 0,
    param_parse  = 1 << 1,
    param_both   = param_lex | param_parse
  } param_type;
#line 647 "src/parse-gram.y" /* yacc.c:1909  */
#include "muscle-tab.h"

#line 68 "src/parse-gram.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef GRAM_TOKENTYPE
# define GRAM_TOKENTYPE
  enum gram_tokentype
  {
    GRAM_EOF = 0,
    STRING = 258,
    PERCENT_TOKEN = 259,
    PERCENT_NTERM = 260,
    PERCENT_TYPE = 261,
    PERCENT_DESTRUCTOR = 262,
    PERCENT_PRINTER = 263,
    PERCENT_LEFT = 264,
    PERCENT_RIGHT = 265,
    PERCENT_NONASSOC = 266,
    PERCENT_PRECEDENCE = 267,
    PERCENT_PREC = 268,
    PERCENT_DPREC = 269,
    PERCENT_MERGE = 270,
    PERCENT_CODE = 271,
    PERCENT_DEFAULT_PREC = 272,
    PERCENT_DEFINE = 273,
    PERCENT_DEFINES = 274,
    PERCENT_ERROR_VERBOSE = 275,
    PERCENT_EXPECT = 276,
    PERCENT_EXPECT_RR = 277,
    PERCENT_FLAG = 278,
    PERCENT_FILE_PREFIX = 279,
    PERCENT_GLR_PARSER = 280,
    PERCENT_INITIAL_ACTION = 281,
    PERCENT_LANGUAGE = 282,
    PERCENT_NAME_PREFIX = 283,
    PERCENT_NO_DEFAULT_PREC = 284,
    PERCENT_NO_LINES = 285,
    PERCENT_NONDETERMINISTIC_PARSER = 286,
    PERCENT_OUTPUT = 287,
    PERCENT_REQUIRE = 288,
    PERCENT_SKELETON = 289,
    PERCENT_START = 290,
    PERCENT_TOKEN_TABLE = 291,
    PERCENT_VERBOSE = 292,
    PERCENT_YACC = 293,
    BRACED_CODE = 294,
    BRACED_PREDICATE = 295,
    BRACKETED_ID = 296,
    CHAR = 297,
    EPILOGUE = 298,
    EQUAL = 299,
    ID = 300,
    ID_COLON = 301,
    PERCENT_PERCENT = 302,
    PIPE = 303,
    PROLOGUE = 304,
    SEMICOLON = 305,
    TAG = 306,
    TAG_ANY = 307,
    TAG_NONE = 308,
    INT = 309,
    PERCENT_PARAM = 310,
    PERCENT_UNION = 311,
    PERCENT_EMPTY = 312
  };
#endif

/* Value type.  */
#if ! defined GRAM_STYPE && ! defined GRAM_STYPE_IS_DECLARED

union GRAM_STYPE
{
#line 182 "src/parse-gram.y" /* yacc.c:1909  */
unsigned char character;
#line 186 "src/parse-gram.y" /* yacc.c:1909  */
char *code;
#line 191 "src/parse-gram.y" /* yacc.c:1909  */
uniqstr uniqstr;
#line 199 "src/parse-gram.y" /* yacc.c:1909  */
int integer;
#line 203 "src/parse-gram.y" /* yacc.c:1909  */
symbol *symbol;
#line 208 "src/parse-gram.y" /* yacc.c:1909  */
assoc assoc;
#line 211 "src/parse-gram.y" /* yacc.c:1909  */
symbol_list *list;
#line 214 "src/parse-gram.y" /* yacc.c:1909  */
named_ref *named_ref;
#line 241 "src/parse-gram.y" /* yacc.c:1909  */
param_type param;
#line 409 "src/parse-gram.y" /* yacc.c:1909  */
code_props_type code_type;
#line 649 "src/parse-gram.y" /* yacc.c:1909  */

  struct
  {
    char const *chars;
    muscle_kind kind;
  } value;

#line 167 "src/parse-gram.h" /* yacc.c:1909  */
};

typedef union GRAM_STYPE GRAM_STYPE;
# define GRAM_STYPE_IS_TRIVIAL 1
# define GRAM_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined GRAM_LTYPE && ! defined GRAM_LTYPE_IS_DECLARED
typedef struct GRAM_LTYPE GRAM_LTYPE;
struct GRAM_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define GRAM_LTYPE_IS_DECLARED 1
# define GRAM_LTYPE_IS_TRIVIAL 1
#endif



int gram_parse (void);

#endif /* !YY_GRAM_SRC_PARSE_GRAM_H_INCLUDED  */
