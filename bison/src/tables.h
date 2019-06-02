/* Prepare the LALR and GLR parser tables.

   Copyright (C) 2002, 2004, 2009-2015 Free Software Foundation, Inc.

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

#ifndef TABLES_H_
# define TABLES_H_

# include "state.h"

/* The parser tables consist of these tables.

   YYTRANSLATE = vector mapping yylex's token numbers into bison's
   token numbers.

   YYTNAME = vector of string-names indexed by bison token number.

   YYTOKNUM = vector of yylex token numbers corresponding to entries
   in YYTNAME.

   YYRLINE = vector of line-numbers of all rules.  For yydebug
   printouts.

   YYRHS = vector of items of all rules.  This is exactly what RITEMS
   contains.  For yydebug and for semantic parser.

   YYPRHS[R] = index in YYRHS of first item for rule R.

   YYR1[R] = symbol number of symbol that rule R derives.

   YYR2[R] = number of symbols composing right hand side of rule R.

   YYSTOS[S] = the symbol number of the symbol that leads to state S.

   YYFINAL = the state number of the termination state.

   YYTABLE = a vector filled with portions for different uses, found
   via YYPACT and YYPGOTO, described below.

   YYLAST ( = high) the number of the last element of YYTABLE, i.e.,
   sizeof (YYTABLE) - 1.

   YYCHECK = a vector indexed in parallel with YYTABLE.  It indicates,
   in a roundabout way, the bounds of the portion you are trying to
   examine.

   Suppose that the portion of YYTABLE starts at index P and the index
   to be examined within the portion is I.  Then if YYCHECK[P+I] != I,
   I is outside the bounds of what is actually allocated, and the
   default (from YYDEFACT or YYDEFGOTO) should be used.  Otherwise,
   YYTABLE[P+I] should be used.

   YYDEFACT[S] = default reduction number in state s.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the default
   is an error.

   YYDEFGOTO[I] = default state to go to after a reduction of a rule
   that generates variable NTOKENS + I, except when YYTABLE specifies
   something else to do.

   YYPACT[S] = index in YYTABLE of the portion describing state S.
   The lookahead token's number, I, is used to index that portion of
   YYTABLE to find out what action to perform.

   If YYPACT[S] == YYPACT_NINF, if YYPACT[S] + I is outside the bounds
   of YYTABLE (from 0 to YYLAST), or I is outside the bounds for portion
   S (that is, YYCHECK[YYPACT[S] + I] != I), then the default action
   (that is, YYDEFACT[S]) should be used instead of YYTABLE.  Otherwise,
   the value YYTABLE[YYPACT[S] + I] should be used even if
   YYPACT[S] < 0.

   If the value in YYTABLE is positive, we shift the token and go to
   that state.

   If the value is negative, it is minus a rule number to reduce by.

   If the value is YYTABLE_NINF, it's a syntax error.

   YYPGOTO[I] = the index in YYTABLE of the portion describing what to
   do after reducing a rule that derives variable I + NTOKENS.  This
   portion is indexed by the parser state number, S, as of before the
   text for this nonterminal was read.

   If YYPGOTO[I] + S is outside the bounds of YYTABLE (from 0 to YYLAST)
   or if S is outside the bounds of the portion for I (that is,
   YYCHECK[YYPGOTO[I] + S] != S), then the default state (that is,
   YYDEFGOTO[I]) should be used instead of YYTABLE.  Otherwise,
   YYTABLE[YYPGOTO[I] + S] is the state to go to even if YYPGOTO[I] < 0.

   When the above YYPACT, YYPGOTO, and YYCHECK tests determine that a
   value from YYTABLE should be used, that value is never zero, so it is
   useless to check for zero.  When those tests indicate that the value
   from YYDEFACT or YYDEFGOTO should be used instead, the value from
   YYTABLE *might* be zero, which, as a consequence of the way in which
   the tables are constructed, also happens to indicate that YYDEFACT or
   YYDEFGOTO should be used.  However, the YYTABLE value cannot be
   trusted when the YYDEFACT or YYDEFGOTO value should be used.  In
   summary, forget about zero values in YYTABLE.
*/

extern int nvectors;

typedef int base_number;
extern base_number *base;
/* A distinguished value of BASE, negative infinite.  During the
   computation equals to BASE_MINIMUM, later mapped to BASE_NINF to
   keep parser tables small.  */
extern base_number base_ninf;

extern unsigned int *conflict_table;
extern unsigned int *conflict_list;
extern int conflict_list_cnt;

extern base_number *table;
extern base_number *check;
/* The value used in TABLE to denote explicit syntax errors
   (%nonassoc), a negative infinite.  */
extern base_number table_ninf;

extern state_number *yydefgoto;
extern rule_number *yydefact;
extern int high;

void tables_generate (void);
void tables_free (void);

#endif /* !TABLES_H_ */
