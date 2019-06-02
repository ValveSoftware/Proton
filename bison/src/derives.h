/* Match rules with nonterminals for bison,

   Copyright (C) 1984, 1989, 2000-2002, 2009-2015 Free Software
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

#ifndef DERIVES_H_
# define DERIVES_H_

# include "gram.h"

/* DERIVES[SYMBOL - NTOKENS] points to a vector of the rules that
   SYMBOL derives, terminated with NULL.  */
extern rule ***derives;

/* Compute DERIVES.  */

void derives_compute (void);
void derives_free (void);

#endif /* !DERIVES_H_ */
