/* Bison Grammar Scanner

   Copyright (C) 2006-2007, 2009-2015 Free Software Foundation, Inc.

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

#ifndef SCAN_GRAM_H_
# define SCAN_GRAM_H_

/* From the scanner.  */
extern FILE *gram_in;
extern int gram__flex_debug;
void gram_scanner_initialize (void);
void gram_scanner_free (void);
void gram_scanner_last_string_free (void);

/* These are declared by the scanner, but not used.  We put them here
   to pacify "make syntax-check".  */
extern FILE *gram_out;
extern int gram_lineno;

# define GRAM_LEX_DECL int gram_lex (GRAM_STYPE *val, location *loc)
GRAM_LEX_DECL;

#endif /* !SCAN_GRAM_H_ */
