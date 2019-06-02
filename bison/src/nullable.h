/* Part of the bison parser generator,

   Copyright (C) 2000, 2002, 2009-2015 Free Software Foundation, Inc.

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

#ifndef NULLABLE_H_
# define NULLABLE_H_

/* A vector saying which nonterminals can expand into the null string.
   NULLABLE[I - NTOKENS] is nonzero if symbol I can do so.  */
extern bool *nullable;

/* Set up NULLABLE. */
extern void nullable_compute (void);

/* Free NULLABLE. */
extern void nullable_free (void);
#endif /* !NULLABLE_H_ */
