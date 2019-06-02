                                                            -*- Autoconf -*-

# Language-independent M4 Macros for Bison.

# Copyright (C) 2002, 2004-2015 Free Software Foundation, Inc.

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.


## ---------------- ##
## Identification.  ##
## ---------------- ##

# b4_copyright(TITLE, [YEARS])
# ----------------------------
# If YEARS are not defined, use b4_copyright_years.
m4_define([b4_copyright],
[b4_comment([A Bison parser, made by GNU Bison b4_version.])

b4_comment([$1

]m4_dquote(m4_text_wrap([Copyright (C)
]m4_ifval([$2], [[$2]], [m4_defn([b4_copyright_years])])[
Free Software Foundation, Inc.]))[

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.])

b4_comment([As a special exception, you may create a larger work that contains
part or all of the Bison parser skeleton and distribute that work
under terms of your choice, so long as that work isn't itself a
parser generator using the skeleton or a modified version thereof
as a parser skeleton.  Alternatively, if you modify or redistribute
the parser skeleton itself, you may (at your option) remove this
special exception, which will cause the skeleton and the resulting
Bison output files to be licensed under the GNU General Public
License without this special exception.

This special exception was added by the Free Software Foundation in
version 2.2 of Bison.])])


## -------- ##
## Output.  ##
## -------- ##

# b4_output_begin(FILE)
# ---------------------
# Enable output, i.e., send to diversion 0, expand after "#", and
# generate the tag to output into FILE.  Must be followed by EOL.
m4_define([b4_output_begin],
[m4_changecom()
m4_divert_push(0)dnl
@output(m4_unquote([$1])@)@dnl
])


# b4_output_end()
# ---------------
# Output nothing, restore # as comment character (no expansions after #).
m4_define([b4_output_end],
[m4_divert_pop(0)
m4_changecom([#])
])


# b4_divert_kill(CODE)
# --------------------
# Expand CODE for its side effects, discard its output.
m4_define([b4_divert_kill],
[m4_divert_text([KILL], [$1])])


# b4_define_silent(MACRO, CODE)
# -----------------------------
# Same as m4_define, but throw away the expansion of CODE.
m4_define([b4_define_silent],
[m4_define([$1], [b4_divert_kill([$2])])])


## ---------------- ##
## Error handling.  ##
## ---------------- ##

# The following error handling macros print error directives that should not
# become arguments of other macro invocations since they would likely then be
# mangled.  Thus, they print to stdout directly.

# b4_cat(TEXT)
# ------------
# Write TEXT to stdout.  Precede the final newline with an @ so that it's
# escaped.  For example:
#
#   b4_cat([[@complain(invalid input@)]])
m4_define([b4_cat],
[m4_syscmd([cat <<'_m4eof'
]m4_bpatsubst(m4_dquote($1), [_m4eof], [_m4@`eof])[@
_m4eof
])dnl
m4_if(m4_sysval, [0], [], [m4_fatal([$0: cannot write to stdout])])])

# b4_error(KIND, START, END, FORMAT, [ARG1], [ARG2], ...)
# -------------------------------------------------------
# Write @KIND(START@,END@,FORMAT@,ARG1@,ARG2@,...@) to stdout.
#
# For example:
#
#   b4_error([[complain]], [[input.y:2.3]], [[input.y:5.4]],
#            [[invalid %s]], [[foo]])
m4_define([b4_error],
[b4_cat([[@complain][(]$1[@,]$2[@,]$3[@,]$4[]]dnl
[m4_if([$#], [4], [],
       [m4_foreach([b4_arg],
                   m4_dquote(m4_shift(m4_shift(m4_shift(m4_shift($@))))),
                   [[@,]b4_arg])])[@)]])])

# b4_warn(FORMAT, [ARG1], [ARG2], ...)
# ------------------------------------
# Write @warn(FORMAT@,ARG1@,ARG2@,...@) to stdout.
#
# For example:
#
#   b4_warn([[invalid value for '%s': %s]], [[foo]], [[3]])
#
# As a simple test suite, this:
#
#   m4_divert(-1)
#   m4_define([asdf], [ASDF])
#   m4_define([fsa], [FSA])
#   m4_define([fdsa], [FDSA])
#   b4_warn_at([[[asdf), asdf]]], [[[fsa), fsa]]], [[[fdsa), fdsa]]])
#   b4_warn_at([[asdf), asdf]], [[fsa), fsa]], [[fdsa), fdsa]])
#   b4_warn_at()
#   b4_warn_at(1)
#   b4_warn_at(1, 2)
#
# Should produce this without newlines:
#
#   @warn_at([asdf), asdf]@,@,@,[fsa), fsa]@,[fdsa), fdsa]@)
#   @warn(asdf), asdf@,@,@,fsa), fsa@,fdsa), fdsa@)
#   @warn(@)
#   @warn(1@)
#   @warn(1@,2@)
m4_define([b4_warn],
[b4_error([[warn]], [], [], $@)])

# b4_warn_at(START, END, FORMAT, [ARG1], [ARG2], ...)
# ---------------------------------------------------
# Write @warn(START@,END@,FORMAT@,ARG1@,ARG2@,...@) to stdout.
#
# For example:
#
#   b4_warn_at([[input.y:2.3]], [[input.y:5.4]], [[invalid %s]], [[foo]])
m4_define([b4_warn_at],
[b4_error([[warn]], $@)])

# b4_complain(FORMAT, [ARG1], [ARG2], ...)
# ----------------------------------------
# Bounce to b4_complain_at.
#
# See b4_warn example.
m4_define([b4_complain],
[b4_error([[complain]], [], [], $@)])

# b4_complain_at(START, END, FORMAT, [ARG1], [ARG2], ...)
# -------------------------------------------------------
# Write @complain(START@,END@,FORMAT@,ARG1@,ARG2@,...@) to stdout.
#
# See b4_warn_at example.
m4_define([b4_complain_at],
[b4_error([[complain]], $@)])

# b4_fatal(FORMAT, [ARG1], [ARG2], ...)
# -------------------------------------
# Bounce to b4_fatal_at.
#
# See b4_warn example.
m4_define([b4_fatal],
[b4_error([[fatal]], [], [], $@)dnl
m4_exit(1)])

# b4_fatal_at(START, END, FORMAT, [ARG1], [ARG2], ...)
# ----------------------------------------------------
# Write @fatal(START@,END@,FORMAT@,ARG1@,ARG2@,...@) to stdout and exit.
#
# See b4_warn_at example.
m4_define([b4_fatal_at],
[b4_error([[fatal]], $@)dnl
m4_exit(1)])


## ------------ ##
## Data Types.  ##
## ------------ ##

# b4_ints_in(INT1, INT2, LOW, HIGH)
# ---------------------------------
# Return 1 iff both INT1 and INT2 are in [LOW, HIGH], 0 otherwise.
m4_define([b4_ints_in],
[m4_eval([$3 <= $1 && $1 <= $4 && $3 <= $2 && $2 <= $4])])


# b4_subtract(LHS, RHS)
# ---------------------
# Evaluate LHS - RHS if they are integer literals, otherwise expand
# to (LHS) - (RHS).
m4_define([b4_subtract],
[m4_bmatch([$1$2], [^[0123456789]*$],
           [m4_eval([$1 - $2])],
           [($1) - ($2)])])

# b4_join(ARG1, ...)
# _b4_join(ARG1, ...)
# -------------------
# Join with comma, skipping empty arguments.
# b4_join calls itself recursively until it sees the first non-empty
# argument, then calls _b4_join which prepends each non-empty argument
# with a comma.
m4_define([b4_join],
[m4_if([$#$1],
       [1], [],
       [m4_ifval([$1],
                 [$1[]_$0(m4_shift($@))],
                 [$0(m4_shift($@))])])])

# _b4_join(ARGS1, ...)
# --------------------
m4_define([_b4_join],
[m4_if([$#$1],
       [1], [],
       [m4_ifval([$1], [, $1])[]$0(m4_shift($@))])])




# b4_integral_parser_tables_map(MACRO)
# -------------------------------------
# Map MACRO on all the integral tables.  MACRO is expected to have
# the signature MACRO(TABLE-NAME, CONTENT, COMMENT).
m4_define([b4_integral_parser_tables_map],
[$1([pact], [b4_pact],
    [[YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
STATE-NUM.]])

$1([defact], [b4_defact],
   [[YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
Performed when YYTABLE does not specify something else to do.  Zero
means the default is an error.]])

$1([pgoto], [b4_pgoto], [[YYPGOTO[NTERM-NUM].]])

$1([defgoto], [b4_defgoto], [[YYDEFGOTO[NTERM-NUM].]])

$1([table], [b4_table],
   [[YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
positive, shift that token.  If negative, reduce the rule whose
number is the opposite.  If YYTABLE_NINF, syntax error.]])

$1([check], [b4_check])

$1([stos], [b4_stos],
   [[YYSTOS[STATE-NUM] -- The (internal number of the) accessing
symbol of state STATE-NUM.]])

$1([r1], [b4_r1],
   [[YYR1[YYN] -- Symbol number of symbol that rule YYN derives.]])

$1([r2], [b4_r2],
   [[YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.]])
])


# b4_parser_tables_declare
# b4_parser_tables_define
# ------------------------
# Define/declare the (deterministic) parser tables.
m4_define([b4_parser_tables_declare],
[b4_integral_parser_tables_map([b4_integral_parser_table_declare])])

m4_define([b4_parser_tables_define],
[b4_integral_parser_tables_map([b4_integral_parser_table_define])])



## ------------------ ##
## Decoding options.  ##
## ------------------ ##

# b4_flag_if(FLAG, IF-TRUE, IF-FALSE)
# -----------------------------------
# Run IF-TRUE if b4_FLAG_flag is 1, IF-FALSE if FLAG is 0, otherwise fail.
m4_define([b4_flag_if],
[m4_case(b4_$1_flag,
         [0], [$3],
         [1], [$2],
         [m4_fatal([invalid $1 value: ]b4_$1_flag)])])


# b4_define_flag_if(FLAG)
# -----------------------
# Define "b4_FLAG_if(IF-TRUE, IF-FALSE)" that depends on the
# value of the Boolean FLAG.
m4_define([b4_define_flag_if],
[_b4_define_flag_if($[1], $[2], [$1])])

# _b4_define_flag_if($1, $2, FLAG)
# --------------------------------
# Work around the impossibility to define macros inside macros,
# because issuing '[$1]' is not possible in M4.  GNU M4 should provide
# $$1 a la M5/TeX.
m4_define([_b4_define_flag_if],
[m4_if([$1$2], $[1]$[2], [],
       [m4_fatal([$0: Invalid arguments: $@])])dnl
m4_define([b4_$3_if],
          [b4_flag_if([$3], [$1], [$2])])])


# b4_FLAG_if(IF-TRUE, IF-FALSE)
# -----------------------------
# Expand IF-TRUE, if FLAG is true, IF-FALSE otherwise.
b4_define_flag_if([defines])            # Whether headers are requested.
b4_define_flag_if([glr])                # Whether a GLR parser is requested.
b4_define_flag_if([nondeterministic])   # Whether conflicts should be handled.
b4_define_flag_if([token_table])        # Whether yytoken_table is demanded.
b4_define_flag_if([yacc])               # Whether POSIX Yacc is emulated.


## --------- ##
## Symbols.  ##
## --------- ##

# In order to unify the handling of the various aspects of symbols
# (tag, type_name, whether terminal, etc.), bison.exe defines one
# macro per (token, field), where field can has_id, id, etc.: see
# src/output.c:prepare_symbols_definitions().
#
# The various FIELDS are:
#
# - has_id: 0 or 1.
#   Whether the symbol has an id.
# - id: string
#   If has_id, the id.  Guaranteed to be usable as a C identifier.
#   Prefixed by api.token.prefix if defined.
# - tag: string.
#   A representat of the symbol.  Can be 'foo', 'foo.id', '"foo"' etc.
# - user_number: integer
#   The assigned (external) number as used by yylex.
# - is_token: 0 or 1
#   Whether this is a terminal symbol.
# - number: integer
#   The internalized number (used after yytranslate).
# - has_type: 0, 1
#   Whether has a semantic value.
# - type_tag: string
#   When api.value.type=union, the generated name for the union member.
#   yytype_INT etc. for symbols that has_id, otherwise yytype_1 etc.
# - type
#   If it has a semantic value, its type tag, or, if variant are used,
#   its type.
#   In the case of api.value.type=union, type is the real type (e.g. int).
# - has_printer: 0, 1
# - printer: string
# - printer_file: string
# - printer_line: integer
#   If the symbol has a printer, everything about it.
# - has_destructor, destructor, destructor_file, destructor_line
#   Likewise.
#
# The following macros provide access to these values.

# b4_symbol_(NUM, FIELD)
# ----------------------
# Recover a FIELD about symbol #NUM.  Thanks to m4_indir, fails if
# undefined.
m4_define([b4_symbol_],
[m4_indir([b4_symbol($1, $2)])])


# b4_symbol(NUM, FIELD)
# ---------------------
# Recover a FIELD about symbol #NUM.  Thanks to m4_indir, fails if
# undefined.  If FIELD = id, prepend the token prefix.
m4_define([b4_symbol],
[m4_case([$2],
         [id],    [m4_do([b4_percent_define_get([api.token.prefix])],
                         [b4_symbol_([$1], [id])])],
         [b4_symbol_($@)])])


# b4_symbol_if(NUM, FIELD, IF-TRUE, IF-FALSE)
# -------------------------------------------
# If FIELD about symbol #NUM is 1 expand IF-TRUE, if is 0, expand IF-FALSE.
# Otherwise an error.
m4_define([b4_symbol_if],
[m4_case(b4_symbol([$1], [$2]),
         [1], [$3],
         [0], [$4],
         [m4_fatal([$0: field $2 of $1 is not a Boolean:] b4_symbol([$1], [$2]))])])


# b4_symbol_tag_comment(SYMBOL-NUM)
# ---------------------------------
# Issue a comment giving the tag of symbol NUM.
m4_define([b4_symbol_tag_comment],
[b4_comment([b4_symbol([$1], [tag])])
])


# b4_symbol_action_location(SYMBOL-NUM, KIND)
# -------------------------------------------
# Report the location of the KIND action as FILE:LINE.
m4_define([b4_symbol_action_location],
[b4_symbol([$1], [$2_file]):b4_syncline([b4_symbol([$1], [$2_line])])])


# b4_symbol_action(SYMBOL-NUM, KIND)
# ----------------------------------
# Run the action KIND (destructor or printer) for SYMBOL-NUM.
m4_define([b4_symbol_action],
[b4_symbol_if([$1], [has_$2],
[b4_dollar_pushdef([(*yyvaluep)],
                   b4_symbol_if([$1], [has_type],
                                [m4_dquote(b4_symbol([$1], [type]))]),
                   [(*yylocationp)])dnl
    b4_symbol_case_([$1])[]dnl
b4_syncline([b4_symbol([$1], [$2_line])], ["b4_symbol([$1], [$2_file])"])
      b4_symbol([$1], [$2])
b4_syncline([@oline@], [@ofile@])
        break;

b4_dollar_popdef[]dnl
])])


# b4_symbol_destructor(SYMBOL-NUM)
# b4_symbol_printer(SYMBOL-NUM)
# --------------------------------
m4_define([b4_symbol_destructor], [b4_symbol_action([$1], [destructor])])
m4_define([b4_symbol_printer],    [b4_symbol_action([$1], [printer])])


# b4_symbol_actions(KIND, [TYPE = yytype])
# ----------------------------------------
# Emit the symbol actions for KIND ("printer" or "destructor").
# Dispatch on TYPE.
m4_define([b4_symbol_actions],
[m4_pushdef([b4_actions_], m4_expand([b4_symbol_foreach([b4_symbol_$1])]))dnl
m4_ifval(m4_defn([b4_actions_]),
[switch (m4_default([$2], [yytype]))
    {
      m4_defn([b4_actions_])
      default:
        break;
    }dnl
],
[YYUSE (m4_default([$2], [yytype]));])dnl
m4_popdef([b4_actions_])dnl
])

# b4_symbol_case_(SYMBOL-NUM)
# ---------------------------
# Issue a "case NUM" for SYMBOL-NUM.
m4_define([b4_symbol_case_],
[case b4_symbol([$1], [number]): b4_symbol_tag_comment([$1])])
])


# b4_symbol_foreach(MACRO)
# ------------------------
# Invoke MACRO(SYMBOL-NUM) for each SYMBOL-NUM.
m4_define([b4_symbol_foreach],
          [m4_map([$1], m4_defn([b4_symbol_numbers]))])

# b4_symbol_map(MACRO)
# --------------------
# Return a list (possibly empty elements) of MACRO invoked for each
# SYMBOL-NUM.
m4_define([b4_symbol_map],
[m4_map_args_sep([$1(], [)], [,], b4_symbol_numbers)])


# b4_token_visible_if(NUM, IF-TRUE, IF-FALSE)
# -------------------------------------------
# Whether NUM denotes a token that has an exported definition (i.e.,
# shows in enum yytokentype).
m4_define([b4_token_visible_if],
[b4_symbol_if([$1], [is_token],
              [b4_symbol_if([$1], [has_id], [$2], [$3])],
              [$3])])

# b4_token_has_definition(NUM)
# ----------------------------
# 1 if NUM is visible, nothing otherwise.
m4_define([b4_token_has_definition],
[b4_token_visible_if([$1], [1])])

# b4_any_token_visible_if([IF-TRUE], [IF-FALSE])
# ----------------------------------------------
# Whether there is a token that needs to be defined.
m4_define([b4_any_token_visible_if],
[m4_ifval(b4_symbol_foreach([b4_token_has_definition]),
          [$1], [$2])])


# b4_token_format(FORMAT, NUM)
# ----------------------------
m4_define([b4_token_format],
[b4_token_visible_if([$2],
[m4_quote(m4_format([$1],
                     [b4_symbol([$2], [id])],
                     [b4_symbol([$2], [user_number])]))])])


## ------- ##
## Types.  ##
## ------- ##

# b4_type_action_(NUMS)
# ---------------------
# Run actions for the symbol NUMS that all have the same type-name.
# Skip NUMS that have no type-name.
#
# To specify the action to run, define b4_dollar_dollar(NUMBER,
# TAG, TYPE).
m4_define([b4_type_action_],
[b4_symbol_if([$1], [has_type],
[m4_map([      b4_symbol_case_], [$@])[]dnl
        b4_dollar_dollar([b4_symbol([$1], [number])],
                         [b4_symbol([$1], [tag])],
                         [b4_symbol([$1], [type])]);
        break;

])])

# b4_type_foreach(MACRO)
# ----------------------
# Invoke MACRO(SYMBOL-NUMS) for each set of SYMBOL-NUMS for each type set.
m4_define([b4_type_foreach],
          [m4_map([$1], m4_defn([b4_type_names]))])



## ----------- ##
## Synclines.  ##
## ----------- ##

# b4_basename(NAME)
# -----------------
# Similar to POSIX basename; the differences don't matter here.
# Beware that NAME is not evaluated.
m4_define([b4_basename],
[m4_bpatsubst([$1], [^.*/\([^/]+\)/*$], [\1])])


# b4_syncline(LINE, FILE)
# -----------------------
m4_define([b4_syncline],
[b4_flag_if([synclines],
[b4_sync_start([$1], [$2]) b4_sync_end([__line__],
                                       [b4_basename(m4_quote(__file__))])[]dnl
])])

# b4_sync_start(LINE, FILE)
# -----------------------
# Syncline for the new place.  Typically a directive for the compiler.
m4_define([b4_sync_start], [b4_comment([$2:$1])])

# b4_sync_end(LINE, FILE)
# -----------------------
# Syncline for the current place, which ends.  Typically a comment
# left for the reader.
m4_define([b4_sync_end],   [b4_comment([$2:$1])])


# b4_user_code(USER-CODE)
# -----------------------
# Emit code from the user, ending it with synclines.
m4_define([b4_user_code],
[$1
b4_syncline([@oline@], [@ofile@])])


# b4_define_user_code(MACRO)
# --------------------------
# From b4_MACRO, build b4_user_MACRO that includes the synclines.
m4_define([b4_define_user_code],
[m4_define([b4_user_$1],
[b4_user_code([b4_$1])])])


# b4_user_actions
# b4_user_initial_action
# b4_user_post_prologue
# b4_user_pre_prologue
# b4_user_union_members
# ----------------------
# Macros that issue user code, ending with synclines.
b4_define_user_code([actions])
b4_define_user_code([initial_action])
b4_define_user_code([post_prologue])
b4_define_user_code([pre_prologue])
b4_define_user_code([union_members])


# b4_check_user_names(WHAT, USER-LIST, BISON-NAMESPACE)
# -----------------------------------------------------
# Complain if any name of type WHAT is used by the user (as recorded in
# USER-LIST) but is not used by Bison (as recorded by macros in the
# namespace BISON-NAMESPACE).
#
# USER-LIST must expand to a list specifying all user occurrences of all names
# of type WHAT.   Each item in the list must be a triplet specifying one
# occurrence: name, start boundary, and end boundary.  Empty string names are
# fine.  An empty list is fine.
#
# For example, to define b4_foo_user_names to be used for USER-LIST with three
# name occurrences and with correct quoting:
#
#   m4_define([b4_foo_user_names],
#             [[[[[[bar]], [[parser.y:1.7]], [[parser.y:1.16]]]],
#               [[[[bar]], [[parser.y:5.7]], [[parser.y:5.16]]]],
#               [[[[baz]], [[parser.y:8.7]], [[parser.y:8.16]]]]]])
#
# The macro BISON-NAMESPACE(bar) must be defined iff the name bar of type WHAT
# is used by Bison (in the front-end or in the skeleton).  Empty string names
# are fine, but it would be ugly for Bison to actually use one.
#
# For example, to use b4_foo_bison_names for BISON-NAMESPACE and define that
# the names bar and baz are used by Bison:
#
#   m4_define([b4_foo_bison_names(bar)])
#   m4_define([b4_foo_bison_names(baz)])
#
# To invoke b4_check_user_names with TYPE foo, with USER-LIST
# b4_foo_user_names, with BISON-NAMESPACE b4_foo_bison_names, and with correct
# quoting:
#
#   b4_check_user_names([[foo]], [b4_foo_user_names],
#                       [[b4_foo_bison_names]])
m4_define([b4_check_user_names],
[m4_foreach([b4_occurrence], $2,
[m4_pushdef([b4_occurrence], b4_occurrence)dnl
m4_pushdef([b4_user_name], m4_car(b4_occurrence))dnl
m4_pushdef([b4_start], m4_car(m4_shift(b4_occurrence)))dnl
m4_pushdef([b4_end], m4_shift(m4_shift(b4_occurrence)))dnl
m4_ifndef($3[(]m4_quote(b4_user_name)[)],
          [b4_complain_at([b4_start], [b4_end],
                          [[%s '%s' is not used]],
                          [$1], [b4_user_name])])[]dnl
m4_popdef([b4_occurrence])dnl
m4_popdef([b4_user_name])dnl
m4_popdef([b4_start])dnl
m4_popdef([b4_end])dnl
])])



## --------------------- ##
## b4_percent_define_*.  ##
## --------------------- ##


# b4_percent_define_use(VARIABLE)
# -------------------------------
# Declare that VARIABLE was used.
m4_define([b4_percent_define_use],
[m4_define([b4_percent_define_bison_variables(]$1[)])dnl
])

# b4_percent_define_get(VARIABLE, [DEFAULT])
# ------------------------------------------
# Mimic muscle_percent_define_get in ../src/muscle-tab.h.  That is, if
# the %define variable VARIABLE is defined, emit its value.  Contrary
# to its C counterpart, return DEFAULT otherwise.  Also, record
# Bison's usage of VARIABLE by defining
# b4_percent_define_bison_variables(VARIABLE).
#
# For example:
#
#   b4_percent_define_get([[foo]])
m4_define([b4_percent_define_get],
[b4_percent_define_use([$1])dnl
b4_percent_define_ifdef_([$1],
                         [m4_indir([b4_percent_define(]$1[)])],
                         [$2])])

# b4_percent_define_get_loc(VARIABLE)
# -----------------------------------
# Mimic muscle_percent_define_get_loc in ../src/muscle-tab.h exactly.  That is,
# if the %define variable VARIABLE is undefined, complain fatally since that's
# a Bison or skeleton error.  Otherwise, return its definition location in a
# form approriate for the first two arguments of b4_warn_at, b4_complain_at, or
# b4_fatal_at.  Don't record this as a Bison usage of VARIABLE as there's no
# reason to suspect that the user-supplied value has yet influenced the output.
#
# For example:
#
#   b4_complain_at(b4_percent_define_get_loc([[foo]]), [[invalid foo]])
m4_define([b4_percent_define_get_loc],
[m4_ifdef([b4_percent_define_loc(]$1[)],
          [m4_pushdef([b4_loc], m4_indir([b4_percent_define_loc(]$1[)]))dnl
b4_loc[]dnl
m4_popdef([b4_loc])],
          [b4_fatal([[$0: undefined %%define variable '%s']], [$1])])])

# b4_percent_define_get_kind(VARIABLE)
# ------------------------------------
# Get the kind (code, keyword, string) of VARIABLE, i.e., how its
# value was defined (braces, not delimiters, quotes).
#
# If the %define variable VARIABLE is undefined, complain fatally
# since that's a Bison or skeleton error.  Don't record this as a
# Bison usage of VARIABLE as there's no reason to suspect that the
# user-supplied value has yet influenced the output.
m4_define([b4_percent_define_get_kind],
[m4_ifdef([b4_percent_define_kind(]$1[)],
          [m4_indir([b4_percent_define_kind(]$1[)])],
          [b4_fatal([[$0: undefined %%define variable '%s']], [$1])])])

# b4_percent_define_get_syncline(VARIABLE)
# ----------------------------------------
# Mimic muscle_percent_define_get_syncline in ../src/muscle-tab.h exactly.
# That is, if the %define variable VARIABLE is undefined, complain fatally
# since that's a Bison or skeleton error.  Otherwise, return its definition
# location as a b4_syncline invocation.  Don't record this as a Bison usage of
# VARIABLE as there's no reason to suspect that the user-supplied value has yet
# influenced the output.
#
# For example:
#
#   b4_percent_define_get_syncline([[foo]])
m4_define([b4_percent_define_get_syncline],
[m4_ifdef([b4_percent_define_syncline(]$1[)],
          [m4_indir([b4_percent_define_syncline(]$1[)])],
          [b4_fatal([[$0: undefined %%define variable '%s']], [$1])])])

# b4_percent_define_ifdef_(VARIABLE, IF-TRUE, [IF-FALSE])
# ------------------------------------------------------
# If the %define variable VARIABLE is defined, expand IF-TRUE, else expand
# IF-FALSE.  Don't record usage of VARIABLE.
#
# For example:
#
#   b4_percent_define_ifdef_([[foo]], [[it's defined]], [[it's undefined]])
m4_define([b4_percent_define_ifdef_],
[m4_ifdef([b4_percent_define(]$1[)],
          [$2],
          [$3])])

# b4_percent_define_ifdef(VARIABLE, IF-TRUE, [IF-FALSE])
# ------------------------------------------------------
# Mimic muscle_percent_define_ifdef in ../src/muscle-tab.h exactly.  That is,
# if the %define variable VARIABLE is defined, expand IF-TRUE, else expand
# IF-FALSE.  Also, record Bison's usage of VARIABLE by defining
# b4_percent_define_bison_variables(VARIABLE).
#
# For example:
#
#   b4_percent_define_ifdef([[foo]], [[it's defined]], [[it's undefined]])
m4_define([b4_percent_define_ifdef],
[b4_percent_define_ifdef_([$1],
                         [b4_percent_define_use([$1])$2],
                         [$3])])


## --------- ##
## Options.  ##
## --------- ##


# b4_percent_define_flag_if(VARIABLE, IF-TRUE, [IF-FALSE])
# --------------------------------------------------------
# Mimic muscle_percent_define_flag_if in ../src/muscle-tab.h exactly.  That is,
# if the %define variable VARIABLE is defined to "" or "true", expand IF-TRUE.
# If it is defined to "false", expand IF-FALSE.  Complain if it is undefined
# (a Bison or skeleton error since the default value should have been set
# already) or defined to any other value (possibly a user error).  Also, record
# Bison's usage of VARIABLE by defining
# b4_percent_define_bison_variables(VARIABLE).
#
# For example:
#
#   b4_percent_define_flag_if([[foo]], [[it's true]], [[it's false]])
m4_define([b4_percent_define_flag_if],
[b4_percent_define_ifdef([$1],
  [m4_case(b4_percent_define_get([$1]),
           [], [$2], [true], [$2], [false], [$3],
           [m4_expand_once([b4_complain_at(b4_percent_define_get_loc([$1]),
                                           [[invalid value for %%define Boolean variable '%s']],
                                           [$1])],
                           [[b4_percent_define_flag_if($1)]])])],
  [b4_fatal([[$0: undefined %%define variable '%s']], [$1])])])


# b4_percent_define_default(VARIABLE, DEFAULT, [KIND = keyword])
# --------------------------------------------------------------
# Mimic muscle_percent_define_default in ../src/muscle-tab.h exactly.  That is,
# if the %define variable VARIABLE is undefined, set its value to DEFAULT.
# Don't record this as a Bison usage of VARIABLE as there's no reason to
# suspect that the value has yet influenced the output.
#
# For example:
#
#   b4_percent_define_default([[foo]], [[default value]])
m4_define([b4_percent_define_default],
[b4_percent_define_ifdef_([$1], [],
           [m4_define([b4_percent_define(]$1[)], [$2])dnl
            m4_define([b4_percent_define_kind(]$1[)],
                      [m4_default([$3], [keyword])])dnl
            m4_define([b4_percent_define_loc(]$1[)],
                      [[[[<skeleton default value>:-1.-1]],
                        [[<skeleton default value>:-1.-1]]]])dnl
            m4_define([b4_percent_define_syncline(]$1[)], [[]])])])


# b4_percent_define_if_define(NAME, [VARIABLE = NAME])
# ----------------------------------------------------
# Define b4_NAME_if that executes its $1 or $2 depending whether
# VARIABLE was %defined.  The characters '.' and `-' in VARIABLE are mapped
# to '_'.
m4_define([b4_percent_define_if_define_],
[m4_define(m4_bpatsubst([b4_$1_if], [[-.]], [_]),
           [b4_percent_define_flag_if(m4_default([$2], [$1]),
                                      [$3], [$4])])])
m4_define([b4_percent_define_if_define],
[b4_percent_define_default([m4_default([$2], [$1])], [[false]])
b4_percent_define_if_define_([$1], [$2], $[1], $[2])])


# b4_percent_define_check_kind(VARIABLE, KIND, [DIAGNOSTIC = complain])
# ---------------------------------------------------------------------
m4_define([b4_percent_define_check_kind],
[b4_percent_define_ifdef_([$1],
  [m4_if(b4_percent_define_get_kind([$1]), [$2], [],
    [b4_error([m4_default([$3], [complain])],
              b4_percent_define_get_loc([$1]),
              [m4_case([$2],
                 [code], [[%%define variable '%s' requires '{...}' values]],
                 [keyword], [[%%define variable '%s' requires keyword values]],
                 [string], [[%%define variable '%s' requires '"..."' values]])],
              [$1])])])dnl
])


# b4_percent_define_check_values(VALUES)
# --------------------------------------
# Mimic muscle_percent_define_check_values in ../src/muscle-tab.h exactly
# except that the VALUES structure is more appropriate for M4.  That is, VALUES
# is a list of sublists of strings.  For each sublist, the first string is the
# name of a %define variable, and all remaining strings in that sublist are the
# valid values for that variable.  Complain if such a variable is undefined (a
# Bison error since the default value should have been set already) or defined
# to any other value (possibly a user error).  Don't record this as a Bison
# usage of the variable as there's no reason to suspect that the value has yet
# influenced the output.
#
# For example:
#
#   b4_percent_define_check_values([[[[foo]], [[foo-value1]], [[foo-value2]]]],
#                                  [[[[bar]], [[bar-value1]]]])
m4_define([b4_percent_define_check_values],
[m4_foreach([b4_sublist], m4_quote($@),
            [_b4_percent_define_check_values(b4_sublist)])])

m4_define([_b4_percent_define_check_values],
[b4_percent_define_ifdef_([$1],
  [b4_percent_define_check_kind(]$1[, [keyword], [deprecated])dnl
   m4_pushdef([b4_good_value], [0])dnl
   m4_if($#, 1, [],
         [m4_foreach([b4_value], m4_dquote(m4_shift($@)),
                     [m4_if(m4_indir([b4_percent_define(]$1[)]), b4_value,
                            [m4_define([b4_good_value], [1])])])])dnl
   m4_if(b4_good_value, [0],
         [b4_complain_at(b4_percent_define_get_loc([$1]),
                         [[invalid value for %%define variable '%s': '%s']],
                         [$1],
                         m4_dquote(m4_indir([b4_percent_define(]$1[)])))
          m4_foreach([b4_value], m4_dquote(m4_shift($@)),
                     [b4_error([[note]], b4_percent_define_get_loc([$1]), []
                                     [[accepted value: '%s']],
                                     m4_dquote(b4_value))])])dnl
   m4_popdef([b4_good_value])],
  [b4_fatal([[$0: undefined %%define variable '%s']], [$1])])])

# b4_percent_code_get([QUALIFIER])
# --------------------------------
# If any %code blocks for QUALIFIER are defined, emit them beginning with a
# comment and ending with synclines and a newline.  If QUALIFIER is not
# specified or empty, do this for the unqualified %code blocks.  Also, record
# Bison's usage of QUALIFIER (if specified) by defining
# b4_percent_code_bison_qualifiers(QUALIFIER).
#
# For example, to emit any unqualified %code blocks followed by any %code
# blocks for the qualifier foo:
#
#   b4_percent_code_get
#   b4_percent_code_get([[foo]])
m4_define([b4_percent_code_get],
[m4_pushdef([b4_macro_name], [[b4_percent_code(]$1[)]])dnl
m4_ifval([$1], [m4_define([b4_percent_code_bison_qualifiers(]$1[)])])dnl
m4_ifdef(b4_macro_name,
[b4_comment([m4_if([$#], [0], [[Unqualified %code]],
                   [["%code ]$1["]])[ blocks.]])
b4_user_code([m4_indir(b4_macro_name)])
])dnl
m4_popdef([b4_macro_name])])

# b4_percent_code_ifdef(QUALIFIER, IF-TRUE, [IF-FALSE])
# -----------------------------------------------------
# If any %code blocks for QUALIFIER (or unqualified %code blocks if
# QUALIFIER is empty) are defined, expand IF-TRUE, else expand IF-FALSE.
# Also, record Bison's usage of QUALIFIER (if specified) by defining
# b4_percent_code_bison_qualifiers(QUALIFIER).
m4_define([b4_percent_code_ifdef],
[m4_ifdef([b4_percent_code(]$1[)],
          [m4_ifval([$1], [m4_define([b4_percent_code_bison_qualifiers(]$1[)])])$2],
          [$3])])


## ------------------ ##
## Common variables.  ##
## ------------------ ##


# b4_parse_assert_if([IF-ASSERTIONS-ARE-USED], [IF-NOT])
# b4_parse_trace_if([IF-DEBUG-TRACES-ARE-ENABLED], [IF-NOT])
# b4_token_ctor_if([IF-YYLEX-RETURNS-A-TOKEN], [IF-NOT])
# ----------------------------------------------
b4_percent_define_if_define([token_ctor], [api.token.constructor])
b4_percent_define_if_define([locations])     # Whether locations are tracked.
b4_percent_define_if_define([parse.assert])
b4_percent_define_if_define([parse.trace])


# b4_bison_locations_if([IF-TRUE])
# --------------------------------
# Expand IF-TRUE if using locations, and using the default location
# type.
m4_define([b4_bison_locations_if],
[b4_locations_if([b4_percent_define_ifdef([[api.location.type]], [], [$1])])])


# b4_error_verbose_if([IF-ERRORS-ARE-VERBOSE], [IF-NOT])
# ------------------------------------------------------
# Map %define parse.error "(simple|verbose)" to b4_error_verbose_if and
# b4_error_verbose_flag.
b4_percent_define_default([[parse.error]], [[simple]])
b4_percent_define_check_values([[[[parse.error]],
                                 [[simple]], [[verbose]]]])
m4_define([b4_error_verbose_flag],
          [m4_case(b4_percent_define_get([[parse.error]]),
                   [simple],  [[0]],
                   [verbose], [[1]])])
b4_define_flag_if([error_verbose])

# yytoken_table is needed to support verbose errors.
b4_error_verbose_if([m4_define([b4_token_table_flag], [1])])


# b4_variant_if([IF-VARIANT-ARE-USED], [IF-NOT])
# ----------------------------------------------
b4_percent_define_if_define([variant])
m4_define([b4_variant_flag], [[0]])
b4_percent_define_ifdef([[api.value.type]],
   [m4_case(b4_percent_define_get_kind([[api.value.type]]), [keyword],
            [m4_case(b4_percent_define_get([[api.value.type]]), [variant],
                    [m4_define([b4_variant_flag], [[1]])])])])
b4_define_flag_if([variant])


## ----------------------------------------------------------- ##
## After processing the skeletons, check that all the user's   ##
## %define variables and %code qualifiers were used by Bison.  ##
## ----------------------------------------------------------- ##

m4_define([b4_check_user_names_wrap],
[m4_ifdef([b4_percent_]$1[_user_]$2[s],
          [b4_check_user_names([[%]$1 $2],
                               [b4_percent_]$1[_user_]$2[s],
                               [[b4_percent_]$1[_bison_]$2[s]])])])

m4_wrap_lifo([
b4_check_user_names_wrap([[define]], [[variable]])
b4_check_user_names_wrap([[code]], [[qualifier]])
])


## ---------------- ##
## Default values.  ##
## ---------------- ##

# m4_define_default([b4_lex_param], [])   dnl breaks other skeletons
m4_define_default([b4_pre_prologue], [])
m4_define_default([b4_post_prologue], [])
m4_define_default([b4_epilogue], [])
m4_define_default([b4_parse_param], [])

# The initial column and line.
m4_define_default([b4_location_initial_column], [1])
m4_define_default([b4_location_initial_line],   [1])


## --------------- ##
## Sanity checks.  ##
## --------------- ##

# api.location.prefix={...} (Java and C++).
b4_percent_define_check_kind([api.location.type], [code], [deprecated])

# api.position.prefix={...} (Java).
b4_percent_define_check_kind([api.position.type], [code], [deprecated])

# api.prefix >< %name-prefix.
b4_percent_define_check_kind([api.prefix], [code], [deprecated])
b4_percent_define_ifdef([api.prefix],
[m4_ifdef([b4_prefix],
[b4_complain_at(b4_percent_define_get_loc([api.prefix]),
                [['%s' and '%s' cannot be used together]],
                [%name-prefix],
                [%define api.prefix])])])

# api.token.prefix={...}
# Make it a warning for those who used betas of Bison 3.0.
b4_percent_define_check_kind([api.token.prefix], [code], [deprecated])

# api.value.type >< %union.
b4_percent_define_ifdef([api.value.type],
[m4_ifdef([b4_union_members],
[b4_complain_at(b4_percent_define_get_loc([api.value.type]),
                [['%s' and '%s' cannot be used together]],
                [%union],
                [%define api.value.type])])])

# api.value.type=union >< %yacc.
b4_percent_define_ifdef([api.value.type],
[m4_if(b4_percent_define_get([api.value.type]), [union],
[b4_yacc_if(dnl
[b4_complain_at(b4_percent_define_get_loc([api.value.type]),
                [['%s' and '%s' cannot be used together]],
                [%yacc],
                [%define api.value.type "union"])])])])

# api.value.union.name.
b4_percent_define_check_kind([api.value.union.name], [keyword])
