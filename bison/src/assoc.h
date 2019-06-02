/* Associativity information.

   Copyright (C) 2002, 2006, 2008-2015 Free Software Foundation, Inc.

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

#ifndef ASSOC_H_
# define ASSOC_H_

/* Associativity values for tokens and rules.  */
typedef enum
{
  undef_assoc,     /** Not defined. */
  right_assoc,     /** %right */
  left_assoc,      /** %left */
  non_assoc,       /** %nonassoc */
  precedence_assoc /** %precedence */
} assoc;

char const *assoc_to_string (assoc a);

#endif /* !ASSOC_H_ */
