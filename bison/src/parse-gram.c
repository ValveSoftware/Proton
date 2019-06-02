/* A Bison parser, made by GNU Bison 3.0.2.13-975bb-dirty.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2.13-975bb-dirty"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 27 "src/parse-gram.y" /* yacc.c:316  */

  /* On column 0 to please syntax-check.  */
#include <config.h>

#line 68 "src/parse-gram.c" /* yacc.c:316  */
/* Substitute the type names.  */
#define YYSTYPE         GRAM_STYPE
#define YYLTYPE         GRAM_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         gram_parse
#define yylex           gram_lex
#define yyerror         gram_error
#define yydebug         gram_debug
#define yynerrs         gram_nerrs


/* Copy the first part of user declarations.  */

#line 82 "src/parse-gram.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "src/parse-gram.h".  */
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
#line 21 "src/parse-gram.y" /* yacc.c:355  */

  #include "symlist.h"
  #include "symtab.h"
#line 221 "src/parse-gram.y" /* yacc.c:355  */

  typedef enum
  {
    param_none   = 0,
    param_lex    = 1 << 0,
    param_parse  = 1 << 1,
    param_both   = param_lex | param_parse
  } param_type;
#line 647 "src/parse-gram.y" /* yacc.c:355  */
#include "muscle-tab.h"

#line 136 "src/parse-gram.c" /* yacc.c:355  */

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
#line 182 "src/parse-gram.y" /* yacc.c:355  */
unsigned char character;
#line 186 "src/parse-gram.y" /* yacc.c:355  */
char *code;
#line 191 "src/parse-gram.y" /* yacc.c:355  */
uniqstr uniqstr;
#line 199 "src/parse-gram.y" /* yacc.c:355  */
int integer;
#line 203 "src/parse-gram.y" /* yacc.c:355  */
symbol *symbol;
#line 208 "src/parse-gram.y" /* yacc.c:355  */
assoc assoc;
#line 211 "src/parse-gram.y" /* yacc.c:355  */
symbol_list *list;
#line 214 "src/parse-gram.y" /* yacc.c:355  */
named_ref *named_ref;
#line 241 "src/parse-gram.y" /* yacc.c:355  */
param_type param;
#line 409 "src/parse-gram.y" /* yacc.c:355  */
code_props_type code_type;
#line 649 "src/parse-gram.y" /* yacc.c:355  */

  struct
  {
    char const *chars;
    muscle_kind kind;
  } value;

#line 235 "src/parse-gram.c" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 265 "src/parse-gram.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 33 "src/parse-gram.y" /* yacc.c:359  */

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
#line 231 "src/parse-gram.y" /* yacc.c:359  */

  /** Add a lex-param and/or a parse-param.
   *
   * \param type  where to push this formal argument.
   * \param decl  the formal argument.  Destroyed.
   * \param loc   the location in the source.
   */
  static void add_param (param_type type, char *decl, location loc);
  static param_type current_param = param_none;

#line 341 "src/parse-gram.c" /* yacc.c:359  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined GRAM_LTYPE_IS_TRIVIAL && GRAM_LTYPE_IS_TRIVIAL \
             && defined GRAM_STYPE_IS_TRIVIAL && GRAM_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if GRAM_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   264,   264,   273,   274,   278,   279,   285,   289,   294,
     295,   300,   306,   307,   308,   309,   314,   319,   320,   321,
     322,   323,   324,   324,   325,   326,   350,   351,   352,   353,
     357,   358,   367,   368,   369,   373,   385,   389,   393,   401,
     412,   413,   423,   424,   430,   442,   442,   447,   447,   452,
     463,   478,   479,   480,   481,   485,   486,   491,   493,   498,
     503,   513,   515,   520,   521,   525,   526,   530,   531,   532,
     537,   542,   547,   553,   559,   570,   571,   580,   581,   587,
     588,   589,   596,   596,   604,   605,   606,   611,   614,   616,
     618,   620,   622,   624,   626,   631,   632,   642,   643,   668,
     669,   670,   671,   683,   685,   694,   699,   700,   705,   713,
     714
};
#endif

#if GRAM_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"string\"", "\"%token\"",
  "\"%nterm\"", "\"%type\"", "\"%destructor\"", "\"%printer\"",
  "\"%left\"", "\"%right\"", "\"%nonassoc\"", "\"%precedence\"",
  "\"%prec\"", "\"%dprec\"", "\"%merge\"", "\"%code\"",
  "\"%default-prec\"", "\"%define\"", "\"%defines\"", "\"%error-verbose\"",
  "\"%expect\"", "\"%expect-rr\"", "\"%<flag>\"", "\"%file-prefix\"",
  "\"%glr-parser\"", "\"%initial-action\"", "\"%language\"",
  "\"%name-prefix\"", "\"%no-default-prec\"", "\"%no-lines\"",
  "\"%nondeterministic-parser\"", "\"%output\"", "\"%require\"",
  "\"%skeleton\"", "\"%start\"", "\"%token-table\"", "\"%verbose\"",
  "\"%yacc\"", "\"{...}\"", "\"%?{...}\"", "\"[identifier]\"", "\"char\"",
  "\"epilogue\"", "\"=\"", "\"identifier\"", "\"identifier:\"", "\"%%\"",
  "\"|\"", "\"%{...%}\"", "\";\"", "\"<tag>\"", "\"<*>\"", "\"<>\"",
  "\"integer\"", "\"%param\"", "\"%union\"", "\"%empty\"", "$accept",
  "input", "prologue_declarations", "prologue_declaration", "$@1",
  "params", "grammar_declaration", "code_props_type", "union_name",
  "symbol_declaration", "$@2", "$@3", "precedence_declaration",
  "precedence_declarator", "tag.opt", "symbols.prec", "symbol.prec",
  "symbols.1", "generic_symlist", "generic_symlist_item", "tag",
  "symbol_def", "symbol_defs.1", "grammar", "rules_or_grammar_declaration",
  "rules", "$@4", "rhses.1", "rhs", "named_ref.opt", "variable", "value",
  "id", "id_colon", "symbol", "string_as_id", "epilogue.opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -113

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-113)))

#define YYTABLE_NINF -110

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
    -113,    16,   108,  -113,  -113,  -113,   -27,  -113,  -113,  -113,
    -113,  -113,  -113,   -24,  -113,    23,    24,  -113,   -21,   -15,
    -113,    29,  -113,     3,    38,    42,  -113,  -113,  -113,    44,
      47,    71,    31,  -113,  -113,  -113,    55,  -113,  -113,  -113,
      30,  -113,  -113,    39,  -113,  -113,    26,   -22,   -22,    31,
    -113,    48,  -113,  -113,     1,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,    45,  -113,    50,     2,  -113,  -113,    57,    49,  -113,
      52,    41,  -113,    31,  -113,  -113,   -22,    -2,   -22,    31,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,    46,  -113,
    -113,  -113,  -113,  -113,    63,  -113,  -113,  -113,  -113,    41,
    -113,  -113,  -113,    31,  -113,    51,  -113,   100,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,   -20,    40,  -113,
    -113,    31,    53,    58,    57,  -113,  -113,    57,    40,  -113,
    -113,  -113,  -113,  -113
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,    47,    45,     0,    40,    41,    51,
      52,    53,    54,     0,    36,     0,     9,    11,     0,     0,
       7,     0,    15,     0,     0,     0,    37,    19,    20,     0,
       0,     0,     0,    26,    27,    28,     0,     6,    29,    22,
      42,     4,     5,     0,    33,    32,    55,     0,     0,     0,
      38,     0,    98,    97,    99,    10,    12,    13,    14,    16,
      17,    18,    21,    24,    25,   108,   104,   103,   106,    34,
     107,     0,   105,     0,     0,    77,    79,    95,     0,    43,
       0,     0,    56,     0,    70,    75,    48,    71,    46,    49,
      61,    39,   101,   102,   100,     8,    81,    80,     0,    78,
       2,    96,    82,    31,    23,    44,    67,    68,    69,    35,
      63,    66,    65,    50,    57,    59,    76,    72,    73,    62,
     110,    87,    30,    64,    58,    60,    74,    83,    84,    87,
      86,     0,     0,     0,    95,    90,    91,    95,    85,    92,
      93,    94,    89,    88
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -113,  -113,  -113,  -113,  -113,  -113,   102,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,     8,  -113,  -113,    13,
    -113,   -50,    75,  -113,    73,  -113,  -113,  -113,    19,  -112,
    -113,  -113,    22,  -113,   -32,   -82,  -113
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    41,    78,   104,    73,    43,    80,    44,
      48,    47,    45,    46,    83,   113,   114,    89,   109,   110,
     111,    85,    86,    74,    75,    76,   121,   127,   128,   102,
      54,    95,    68,    77,   112,    70,   100
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    65,  -109,    71,    92,   118,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    50,     3,    90,    13,    14,
      66,    51,   142,    67,    49,   143,    52,    55,   129,    84,
     130,    26,    58,    56,    65,   126,   116,    32,   116,    57,
      93,    60,    59,    65,    65,    61,    94,    62,    72,    98,
      63,   115,   117,   131,   132,   133,    71,   119,    40,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    53,    87,
      87,    13,    14,    66,    64,    79,    67,    82,    81,   134,
     135,   115,    66,    66,    26,    67,    67,    91,   103,   120,
      32,   105,   106,   107,   108,    96,   137,   136,   101,   139,
      97,    72,   122,    65,    42,   125,   137,   140,    87,   141,
      87,    40,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   124,   123,    88,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    99,   138,     0,
       0,     0,     0,     0,     0,    36,     0,    37,    38,     0,
       0,     0,     0,    39,    40
};

static const yytype_int16 yycheck[] =
{
      32,     3,     0,     1,     3,    87,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    39,     0,    49,    16,    17,
      42,    45,   134,    45,    51,   137,     3,     3,    48,    51,
      50,    29,     3,    54,     3,   117,    86,    35,    88,    54,
      39,     3,    39,     3,     3,     3,    45,     3,    46,    47,
       3,    83,    54,    13,    14,    15,     1,    89,    56,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    45,    47,
      48,    16,    17,    42,     3,    45,    45,    51,    39,    39,
      40,   113,    42,    42,    29,    45,    45,    39,    39,    43,
      35,    39,    51,    52,    53,    50,   128,    57,    41,   131,
      50,    46,    39,     3,     2,    54,   138,    54,    86,    51,
      88,    56,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   113,   109,    48,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    74,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    49,    50,    -1,
      -1,    -1,    -1,    55,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,    60,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    47,    49,    50,    55,
      56,    61,    64,    65,    67,    70,    71,    69,    68,    51,
      39,    45,     3,    45,    88,     3,    54,    54,     3,    39,
       3,     3,     3,     3,     3,     3,    42,    45,    90,    92,
      93,     1,    46,    64,    81,    82,    83,    91,    62,    45,
      66,    39,    51,    72,    51,    79,    80,    90,    80,    75,
      92,    39,     3,    39,    45,    89,    50,    50,    47,    82,
      94,    41,    87,    39,    63,    39,    51,    52,    53,    76,
      77,    78,    92,    73,    74,    92,    79,    54,    93,    92,
      43,    84,    39,    77,    74,    54,    93,    85,    86,    48,
      50,    13,    14,    15,    39,    40,    57,    92,    86,    92,
      54,    51,    87,    87
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    61,    61,    61,    61,    61,    61,    61,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      65,    65,    66,    66,    64,    68,    67,    69,    67,    67,
      70,    71,    71,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      79,    79,    79,    79,    79,    80,    80,    81,    81,    82,
      82,    82,    84,    83,    85,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    88,    88,    89,
      89,    89,    89,    90,    90,    91,    92,    92,    93,    94,
      94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     1,     1,     1,     3,     1,
       2,     1,     2,     2,     2,     1,     2,     2,     2,     1,
       1,     2,     0,     3,     2,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     3,     1,     1,     2,     3,
       1,     1,     0,     1,     3,     0,     3,     0,     3,     3,
       3,     1,     1,     1,     1,     0,     1,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     1,     2,     1,     2,     1,
       2,     2,     0,     4,     1,     3,     2,     0,     3,     3,
       2,     2,     3,     3,     3,     0,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      YY_LAC_DISCARD ("YYBACKUP");                              \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if GRAM_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined GRAM_LTYPE_IS_TRIVIAL && GRAM_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
          case 3: /* "string"  */
#line 188 "src/parse-gram.y" /* yacc.c:684  */
      { fputs (quotearg_style (c_quoting_style, ((*yyvaluep).code)), yyo); }
#line 1008 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 23: /* "%<flag>"  */
#line 196 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "%%%s", ((*yyvaluep).uniqstr)); }
#line 1014 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 39: /* "{...}"  */
#line 189 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "{\n%s\n}", ((*yyvaluep).code)); }
#line 1020 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 40: /* "%?{...}"  */
#line 189 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "{\n%s\n}", ((*yyvaluep).code)); }
#line 1026 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 41: /* "[identifier]"  */
#line 194 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "[%s]", ((*yyvaluep).uniqstr)); }
#line 1032 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 42: /* "char"  */
#line 184 "src/parse-gram.y" /* yacc.c:684  */
      { fputs (char_name (((*yyvaluep).character)), yyo); }
#line 1038 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 43: /* "epilogue"  */
#line 189 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "{\n%s\n}", ((*yyvaluep).code)); }
#line 1044 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 45: /* "identifier"  */
#line 193 "src/parse-gram.y" /* yacc.c:684  */
      { fputs (((*yyvaluep).uniqstr), yyo); }
#line 1050 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 46: /* "identifier:"  */
#line 195 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "%s:", ((*yyvaluep).uniqstr)); }
#line 1056 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 49: /* "%{...%}"  */
#line 189 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "{\n%s\n}", ((*yyvaluep).code)); }
#line 1062 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 51: /* "<tag>"  */
#line 197 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "<%s>", ((*yyvaluep).uniqstr)); }
#line 1068 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 54: /* "integer"  */
#line 201 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "%d", ((*yyvaluep).integer)); }
#line 1074 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 55: /* "%param"  */
#line 244 "src/parse-gram.y" /* yacc.c:684  */
      {
  switch (((*yyvaluep).param))
    {
#define CASE(In, Out)                                           \
      case param_ ## In: fputs ("%" #Out, yyo); break
      CASE (lex,   lex-param);
      CASE (parse, parse-param);
      CASE (both,  param);
#undef CASE
      case param_none: aver (false); break;
    }
}
#line 1091 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 65: /* code_props_type  */
#line 410 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "%s", code_props_type_string (((*yyvaluep).code_type))); }
#line 1097 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 74: /* symbol.prec  */
#line 205 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "%s", ((*yyvaluep).symbol)->tag); }
#line 1103 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 78: /* tag  */
#line 197 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "<%s>", ((*yyvaluep).uniqstr)); }
#line 1109 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 88: /* variable  */
#line 193 "src/parse-gram.y" /* yacc.c:684  */
      { fputs (((*yyvaluep).uniqstr), yyo); }
#line 1115 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 89: /* value  */
#line 658 "src/parse-gram.y" /* yacc.c:684  */
      {
  switch (((*yyvaluep).value).kind)
    {
    case muscle_code:    fprintf (yyo,  "{%s}",  ((*yyvaluep).value).chars); break;
    case muscle_keyword: fprintf (yyo,   "%s",   ((*yyvaluep).value).chars); break;
    case muscle_string:  fprintf (yyo, "\"%s\"", ((*yyvaluep).value).chars); break;
    }
}
#line 1128 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 90: /* id  */
#line 205 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "%s", ((*yyvaluep).symbol)->tag); }
#line 1134 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 91: /* id_colon  */
#line 206 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "%s:", ((*yyvaluep).symbol)->tag); }
#line 1140 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 92: /* symbol  */
#line 205 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "%s", ((*yyvaluep).symbol)->tag); }
#line 1146 "src/parse-gram.c" /* yacc.c:684  */
        break;

    case 93: /* string_as_id  */
#line 205 "src/parse-gram.y" /* yacc.c:684  */
      { fprintf (yyo, "%s", ((*yyvaluep).symbol)->tag); }
#line 1152 "src/parse-gram.c" /* yacc.c:684  */
        break;


      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !GRAM_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !GRAM_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if GRAM_DEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if GRAM_DEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if GRAM_DEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
# if GRAM_DEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined GRAM_LTYPE_IS_TRIVIAL && GRAM_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 108 "src/parse-gram.y" /* yacc.c:1429  */
{
  /* Bison's grammar can initial empty locations, hence a default
     location is needed. */
  boundary_set (&yylloc.start, current_file, 1, 1);
  boundary_set (&yylloc.end, current_file, 1, 1);
}

#line 1854 "src/parse-gram.c" /* yacc.c:1429  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 6:
#line 280 "src/parse-gram.y" /* yacc.c:1646  */
    {
      muscle_code_grow (union_seen ? "post_prologue" : "pre_prologue",
                        translate_code ((yyvsp[0].code), (yylsp[0]), true), (yylsp[0]));
      code_scanner_last_string_free ();
    }
#line 2054 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 7:
#line 286 "src/parse-gram.y" /* yacc.c:1646  */
    {
      muscle_percent_define_ensure ((yyvsp[0].uniqstr), (yylsp[0]), true);
    }
#line 2062 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 8:
#line 290 "src/parse-gram.y" /* yacc.c:1646  */
    {
      muscle_percent_define_insert ((yyvsp[-1].uniqstr), (yylsp[-1]), (yyvsp[0].value).kind, (yyvsp[0].value).chars,
                                    MUSCLE_PERCENT_DEFINE_GRAMMAR_FILE);
    }
#line 2071 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 9:
#line 294 "src/parse-gram.y" /* yacc.c:1646  */
    { defines_flag = true; }
#line 2077 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 10:
#line 296 "src/parse-gram.y" /* yacc.c:1646  */
    {
      defines_flag = true;
      spec_defines_file = xstrdup ((yyvsp[0].code));
    }
#line 2086 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 11:
#line 301 "src/parse-gram.y" /* yacc.c:1646  */
    {
      muscle_percent_define_insert ("parse.error", (yylsp[0]), muscle_keyword,
                                    "verbose",
                                    MUSCLE_PERCENT_DEFINE_GRAMMAR_FILE);
    }
#line 2096 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 12:
#line 306 "src/parse-gram.y" /* yacc.c:1646  */
    { expected_sr_conflicts = (yyvsp[0].integer); }
#line 2102 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 13:
#line 307 "src/parse-gram.y" /* yacc.c:1646  */
    { expected_rr_conflicts = (yyvsp[0].integer); }
#line 2108 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 14:
#line 308 "src/parse-gram.y" /* yacc.c:1646  */
    { spec_file_prefix = (yyvsp[0].code); }
#line 2114 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 15:
#line 310 "src/parse-gram.y" /* yacc.c:1646  */
    {
      nondeterministic_parser = true;
      glr_parser = true;
    }
#line 2123 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 16:
#line 315 "src/parse-gram.y" /* yacc.c:1646  */
    {
      muscle_code_grow ("initial_action", translate_code ((yyvsp[0].code), (yylsp[0]), false), (yylsp[0]));
      code_scanner_last_string_free ();
    }
#line 2132 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 17:
#line 319 "src/parse-gram.y" /* yacc.c:1646  */
    { language_argmatch ((yyvsp[0].code), grammar_prio, (yylsp[-1])); }
#line 2138 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 18:
#line 320 "src/parse-gram.y" /* yacc.c:1646  */
    { spec_name_prefix = (yyvsp[0].code); }
#line 2144 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 19:
#line 321 "src/parse-gram.y" /* yacc.c:1646  */
    { no_lines_flag = true; }
#line 2150 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 20:
#line 322 "src/parse-gram.y" /* yacc.c:1646  */
    { nondeterministic_parser = true; }
#line 2156 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 21:
#line 323 "src/parse-gram.y" /* yacc.c:1646  */
    { spec_outfile = (yyvsp[0].code); }
#line 2162 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 22:
#line 324 "src/parse-gram.y" /* yacc.c:1646  */
    { current_param = (yyvsp[0].param); }
#line 2168 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 23:
#line 324 "src/parse-gram.y" /* yacc.c:1646  */
    { current_param = param_none; }
#line 2174 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 24:
#line 325 "src/parse-gram.y" /* yacc.c:1646  */
    { version_check (&(yylsp[0]), (yyvsp[0].code)); }
#line 2180 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 25:
#line 327 "src/parse-gram.y" /* yacc.c:1646  */
    {
      char const *skeleton_user = (yyvsp[0].code);
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
      skeleton_arg (skeleton_user, grammar_prio, (yylsp[-1]));
    }
#line 2208 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 26:
#line 350 "src/parse-gram.y" /* yacc.c:1646  */
    { token_table_flag = true; }
#line 2214 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 27:
#line 351 "src/parse-gram.y" /* yacc.c:1646  */
    { report_flag |= report_states; }
#line 2220 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 28:
#line 352 "src/parse-gram.y" /* yacc.c:1646  */
    { yacc_flag = true; }
#line 2226 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 30:
#line 357 "src/parse-gram.y" /* yacc.c:1646  */
    { add_param (current_param, (yyvsp[0].code), (yylsp[0])); }
#line 2232 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 31:
#line 358 "src/parse-gram.y" /* yacc.c:1646  */
    { add_param (current_param, (yyvsp[0].code), (yylsp[0])); }
#line 2238 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 34:
#line 370 "src/parse-gram.y" /* yacc.c:1646  */
    {
      grammar_start_symbol_set ((yyvsp[0].symbol), (yylsp[0]));
    }
#line 2246 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 35:
#line 374 "src/parse-gram.y" /* yacc.c:1646  */
    {
      code_props code;
      code_props_symbol_action_init (&code, (yyvsp[-1].code), (yylsp[-1]));
      code_props_translate_code (&code);
      {
        symbol_list *list;
        for (list = (yyvsp[0].list); list; list = list->next)
          symbol_list_code_props_set (list, (yyvsp[-2].code_type), &code);
        symbol_list_free ((yyvsp[0].list));
      }
    }
#line 2262 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 36:
#line 386 "src/parse-gram.y" /* yacc.c:1646  */
    {
      default_prec = true;
    }
#line 2270 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 37:
#line 390 "src/parse-gram.y" /* yacc.c:1646  */
    {
      default_prec = false;
    }
#line 2278 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 38:
#line 394 "src/parse-gram.y" /* yacc.c:1646  */
    {
      /* Do not invoke muscle_percent_code_grow here since it invokes
         muscle_user_name_list_grow.  */
      muscle_code_grow ("percent_code()",
                        translate_code_braceless ((yyvsp[0].code), (yylsp[0])), (yylsp[0]));
      code_scanner_last_string_free ();
    }
#line 2290 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 39:
#line 402 "src/parse-gram.y" /* yacc.c:1646  */
    {
      muscle_percent_code_grow ((yyvsp[-1].uniqstr), (yylsp[-1]), translate_code_braceless ((yyvsp[0].code), (yylsp[0])), (yylsp[0]));
      code_scanner_last_string_free ();
    }
#line 2299 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 40:
#line 412 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.code_type) = destructor; }
#line 2305 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 41:
#line 413 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.code_type) = printer; }
#line 2311 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 42:
#line 423 "src/parse-gram.y" /* yacc.c:1646  */
    {}
#line 2317 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 43:
#line 424 "src/parse-gram.y" /* yacc.c:1646  */
    { muscle_percent_define_insert ("api.value.union.name",
                                         (yylsp[0]), muscle_keyword, (yyvsp[0].uniqstr),
                                         MUSCLE_PERCENT_DEFINE_GRAMMAR_FILE); }
#line 2325 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 44:
#line 431 "src/parse-gram.y" /* yacc.c:1646  */
    {
      union_seen = true;
      muscle_code_grow ("union_members", translate_code_braceless ((yyvsp[0].code), (yylsp[0])), (yylsp[0]));
      code_scanner_last_string_free ();
    }
#line 2335 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 45:
#line 442 "src/parse-gram.y" /* yacc.c:1646  */
    { current_class = nterm_sym; }
#line 2341 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 46:
#line 443 "src/parse-gram.y" /* yacc.c:1646  */
    {
      current_class = unknown_sym;
      current_type = NULL;
    }
#line 2350 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 47:
#line 447 "src/parse-gram.y" /* yacc.c:1646  */
    { current_class = token_sym; }
#line 2356 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 48:
#line 448 "src/parse-gram.y" /* yacc.c:1646  */
    {
      current_class = unknown_sym;
      current_type = NULL;
    }
#line 2365 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 49:
#line 453 "src/parse-gram.y" /* yacc.c:1646  */
    {
      symbol_list *list;
      tag_seen = true;
      for (list = (yyvsp[0].list); list; list = list->next)
        symbol_type_set (list->content.sym, (yyvsp[-1].uniqstr), (yylsp[-1]));
      symbol_list_free ((yyvsp[0].list));
    }
#line 2377 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 50:
#line 464 "src/parse-gram.y" /* yacc.c:1646  */
    {
      symbol_list *list;
      ++current_prec;
      for (list = (yyvsp[0].list); list; list = list->next)
        {
          symbol_type_set (list->content.sym, current_type, (yylsp[-1]));
          symbol_precedence_set (list->content.sym, current_prec, (yyvsp[-2].assoc), (yylsp[-2]));
        }
      symbol_list_free ((yyvsp[0].list));
      current_type = NULL;
    }
#line 2393 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 51:
#line 478 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.assoc) = left_assoc; }
#line 2399 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 52:
#line 479 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.assoc) = right_assoc; }
#line 2405 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 53:
#line 480 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.assoc) = non_assoc; }
#line 2411 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 54:
#line 481 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.assoc) = precedence_assoc; }
#line 2417 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 55:
#line 485 "src/parse-gram.y" /* yacc.c:1646  */
    { current_type = NULL; }
#line 2423 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 56:
#line 486 "src/parse-gram.y" /* yacc.c:1646  */
    { current_type = (yyvsp[0].uniqstr); tag_seen = true; }
#line 2429 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 57:
#line 492 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.list) = symbol_list_sym_new ((yyvsp[0].symbol), (yylsp[0])); }
#line 2435 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 58:
#line 494 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.list) = symbol_list_append ((yyvsp[-1].list), symbol_list_sym_new ((yyvsp[0].symbol), (yylsp[0]))); }
#line 2441 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 59:
#line 499 "src/parse-gram.y" /* yacc.c:1646  */
    {
      (yyval.symbol) = (yyvsp[0].symbol);
      symbol_class_set ((yyvsp[0].symbol), token_sym, (yylsp[0]), false);
    }
#line 2450 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 60:
#line 504 "src/parse-gram.y" /* yacc.c:1646  */
    {
      (yyval.symbol) = (yyvsp[-1].symbol);
      symbol_user_token_number_set ((yyvsp[-1].symbol), (yyvsp[0].integer), (yylsp[0]));
      symbol_class_set ((yyvsp[-1].symbol), token_sym, (yylsp[-1]), false);
    }
#line 2460 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 61:
#line 514 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.list) = symbol_list_sym_new ((yyvsp[0].symbol), (yylsp[0])); }
#line 2466 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 62:
#line 516 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.list) = symbol_list_append ((yyvsp[-1].list), symbol_list_sym_new ((yyvsp[0].symbol), (yylsp[0]))); }
#line 2472 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 63:
#line 520 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.list) = (yyvsp[0].list); }
#line 2478 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 64:
#line 521 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.list) = symbol_list_append ((yyvsp[-1].list), (yyvsp[0].list)); }
#line 2484 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 65:
#line 525 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.list) = symbol_list_sym_new ((yyvsp[0].symbol), (yylsp[0])); }
#line 2490 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 66:
#line 526 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.list) = symbol_list_type_new ((yyvsp[0].uniqstr), (yylsp[0])); }
#line 2496 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 68:
#line 531 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.uniqstr) = uniqstr_new ("*"); }
#line 2502 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 69:
#line 532 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.uniqstr) = uniqstr_new (""); }
#line 2508 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 70:
#line 538 "src/parse-gram.y" /* yacc.c:1646  */
    {
      current_type = (yyvsp[0].uniqstr);
      tag_seen = true;
    }
#line 2517 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 71:
#line 543 "src/parse-gram.y" /* yacc.c:1646  */
    {
      symbol_class_set ((yyvsp[0].symbol), current_class, (yylsp[0]), true);
      symbol_type_set ((yyvsp[0].symbol), current_type, (yylsp[0]));
    }
#line 2526 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 72:
#line 548 "src/parse-gram.y" /* yacc.c:1646  */
    {
      symbol_class_set ((yyvsp[-1].symbol), current_class, (yylsp[-1]), true);
      symbol_type_set ((yyvsp[-1].symbol), current_type, (yylsp[-1]));
      symbol_user_token_number_set ((yyvsp[-1].symbol), (yyvsp[0].integer), (yylsp[0]));
    }
#line 2536 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 73:
#line 554 "src/parse-gram.y" /* yacc.c:1646  */
    {
      symbol_class_set ((yyvsp[-1].symbol), current_class, (yylsp[-1]), true);
      symbol_type_set ((yyvsp[-1].symbol), current_type, (yylsp[-1]));
      symbol_make_alias ((yyvsp[-1].symbol), (yyvsp[0].symbol), (yyloc));
    }
#line 2546 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 74:
#line 560 "src/parse-gram.y" /* yacc.c:1646  */
    {
      symbol_class_set ((yyvsp[-2].symbol), current_class, (yylsp[-2]), true);
      symbol_type_set ((yyvsp[-2].symbol), current_type, (yylsp[-2]));
      symbol_user_token_number_set ((yyvsp[-2].symbol), (yyvsp[-1].integer), (yylsp[-1]));
      symbol_make_alias ((yyvsp[-2].symbol), (yyvsp[0].symbol), (yyloc));
    }
#line 2557 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 81:
#line 590 "src/parse-gram.y" /* yacc.c:1646  */
    {
      yyerrok;
    }
#line 2565 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 82:
#line 596 "src/parse-gram.y" /* yacc.c:1646  */
    { current_lhs ((yyvsp[-1].symbol), (yylsp[-1]), (yyvsp[0].named_ref)); }
#line 2571 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 83:
#line 597 "src/parse-gram.y" /* yacc.c:1646  */
    {
    /* Free the current lhs. */
    current_lhs (0, (yylsp[-3]), 0);
  }
#line 2580 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 84:
#line 604 "src/parse-gram.y" /* yacc.c:1646  */
    { grammar_current_rule_end ((yylsp[0])); }
#line 2586 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 85:
#line 605 "src/parse-gram.y" /* yacc.c:1646  */
    { grammar_current_rule_end ((yylsp[0])); }
#line 2592 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 87:
#line 612 "src/parse-gram.y" /* yacc.c:1646  */
    { grammar_current_rule_begin (current_lhs_symbol, current_lhs_location,
                                  current_lhs_named_ref); }
#line 2599 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 88:
#line 615 "src/parse-gram.y" /* yacc.c:1646  */
    { grammar_current_rule_symbol_append ((yyvsp[-1].symbol), (yylsp[-1]), (yyvsp[0].named_ref)); }
#line 2605 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 89:
#line 617 "src/parse-gram.y" /* yacc.c:1646  */
    { grammar_current_rule_action_append ((yyvsp[-1].code), (yylsp[-1]), (yyvsp[0].named_ref), false); }
#line 2611 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 90:
#line 619 "src/parse-gram.y" /* yacc.c:1646  */
    { grammar_current_rule_action_append ((yyvsp[0].code), (yylsp[0]), NULL, true); }
#line 2617 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 91:
#line 621 "src/parse-gram.y" /* yacc.c:1646  */
    { grammar_current_rule_empty_set ((yylsp[0])); }
#line 2623 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 92:
#line 623 "src/parse-gram.y" /* yacc.c:1646  */
    { grammar_current_rule_prec_set ((yyvsp[0].symbol), (yylsp[0])); }
#line 2629 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 93:
#line 625 "src/parse-gram.y" /* yacc.c:1646  */
    { grammar_current_rule_dprec_set ((yyvsp[0].integer), (yylsp[0])); }
#line 2635 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 94:
#line 627 "src/parse-gram.y" /* yacc.c:1646  */
    { grammar_current_rule_merge_set ((yyvsp[0].uniqstr), (yylsp[0])); }
#line 2641 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 95:
#line 631 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.named_ref) = 0; }
#line 2647 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 96:
#line 632 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.named_ref) = named_ref_new ((yyvsp[0].uniqstr), (yylsp[0])); }
#line 2653 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 98:
#line 643 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.uniqstr) = uniqstr_new ((yyvsp[0].code)); }
#line 2659 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 99:
#line 668 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.value).kind = muscle_keyword; (yyval.value).chars = ""; }
#line 2665 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 100:
#line 669 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.value).kind = muscle_keyword; (yyval.value).chars = (yyvsp[0].uniqstr); }
#line 2671 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 101:
#line 670 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.value).kind = muscle_string;  (yyval.value).chars = (yyvsp[0].code); }
#line 2677 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 102:
#line 671 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.value).kind = muscle_code;    (yyval.value).chars = strip_braces ((yyvsp[0].code)); }
#line 2683 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 103:
#line 684 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.symbol) = symbol_from_uniqstr ((yyvsp[0].uniqstr), (yylsp[0])); }
#line 2689 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 104:
#line 686 "src/parse-gram.y" /* yacc.c:1646  */
    {
      (yyval.symbol) = symbol_get (char_name ((yyvsp[0].character)), (yylsp[0]));
      symbol_class_set ((yyval.symbol), token_sym, (yylsp[0]), false);
      symbol_user_token_number_set ((yyval.symbol), (yyvsp[0].character), (yylsp[0]));
    }
#line 2699 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 105:
#line 694 "src/parse-gram.y" /* yacc.c:1646  */
    { (yyval.symbol) = symbol_from_uniqstr ((yyvsp[0].uniqstr), (yylsp[0])); }
#line 2705 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 108:
#line 706 "src/parse-gram.y" /* yacc.c:1646  */
    {
      (yyval.symbol) = symbol_get (quotearg_style (c_quoting_style, (yyvsp[0].code)), (yylsp[0]));
      symbol_class_set ((yyval.symbol), token_sym, (yylsp[0]), false);
    }
#line 2714 "src/parse-gram.c" /* yacc.c:1646  */
    break;

  case 110:
#line 715 "src/parse-gram.y" /* yacc.c:1646  */
    {
      muscle_code_grow ("epilogue", translate_code ((yyvsp[0].code), (yylsp[0]), true), (yylsp[0]));
      code_scanner_last_string_free ();
    }
#line 2723 "src/parse-gram.c" /* yacc.c:1646  */
    break;


#line 2727 "src/parse-gram.c" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 721 "src/parse-gram.y" /* yacc.c:1906  */


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
