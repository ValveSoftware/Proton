/* Grammar reduction for Bison.

   Copyright (C) 2000-2002, 2007, 2009-2015 Free Software Foundation,
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

#ifndef REDUCE_H_
# define REDUCE_H_

void reduce_grammar (void);
void reduce_output (FILE *out);
bool reduce_token_unused_in_grammar (symbol_number i);
bool reduce_nonterminal_useless_in_grammar (symbol_number i);
void reduce_free (void);

extern symbol_number nuseless_nonterminals;
extern rule_number nuseless_productions;
#endif /* !REDUCE_H_ */
