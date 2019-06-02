/* IELR main implementation.

   Copyright (C) 2009-2015 Free Software Foundation, Inc.

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

#ifndef IELR_H_
# define IELR_H_

# include <bitset.h>

# include "state.h"

/**
 * \pre
 *   - \c ::states is of size \c ::nstates and defines an LR(0) parser
 *     for the users's grammar.
 *   - \c ::ntokens is the number of tokens in the grammar.
 * \post
 *   - \c ::states is of size \c ::nstates (which might be greater than
 *     <tt>::nstates \@pre</tt>) and defines the type of parser specified by
 *     the value of the \c \%define variable \c lr.type.  Its value can be:
 *     - \c "lalr".
 *     - \c "ielr".
 *     - \c "canonical-lr".
 */
void ielr (void);

bool ielr_item_has_lookahead (state *s, symbol_number lhs, size_t item,
                              symbol_number lookahead, state ***predecessors,
                              bitset **item_lookahead_sets);

#endif /* !IELR_H_ */
