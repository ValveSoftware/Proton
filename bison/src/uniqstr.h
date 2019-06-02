/* Keeping a unique copy of strings.

   Copyright (C) 2002-2003, 2008-2015 Free Software Foundation, Inc.

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

#ifndef UNIQSTR_H_
# define UNIQSTR_H_

# include <stdio.h>

/*-----------------------------------------.
| Pointers to unique copies of C strings.  |
`-----------------------------------------*/

typedef char const *uniqstr;

/* Return the uniqstr for STR.  */
uniqstr uniqstr_new (char const *str);

/* Return a uniqstr built by vsprintf.  In order to simply concatenate
   strings, use UNIQSTR_CONCAT, which is a convenient wrapper around
   this function.  */
uniqstr uniqstr_vsprintf (char const *format, ...)
  _GL_ATTRIBUTE_FORMAT_PRINTF (1, 2);

/* Two uniqstr values have the same value iff they are the same.  */
# define UNIQSTR_EQ(Ustr1, Ustr2) (!!((Ustr1) == (Ustr2)))

/* Compare two uniqstr a la strcmp: negative for <, nul for =, and
   positive for >.  Undefined order, relies on addresses.  */
int uniqstr_cmp (uniqstr u1, uniqstr u2);

/* Die if STR is not a uniqstr.  */
void uniqstr_assert (char const *str);

/*----------------.
| Concatenation.  |
`----------------*/

/* Concatenate at most 20 strings and return a uniqstr.  The goal of
   this macro is to make the caller's code a little more succinct
   without a trivial uniqstr_vsprintf format string to maintain
   (for example, "%s%s%s") while still benefitting from gcc's type
   checking.  Unfortunately, because of the missing format string in the
   macro invocation, the argument number reported by gcc for a bad
   argument type is 1 too large.  */
# define UNIQSTR_CONCAT(...)                                            \
  uniqstr_vsprintf (UNIQSTR_GEN_FORMAT (__VA_ARGS__,                    \
                                        "%s", "%s", "%s", "%s", "%s",   \
                                        "%s", "%s", "%s", "%s", "%s",   \
                                        "%s", "%s", "%s", "%s", "%s",   \
                                        "%s", "%s", "%s", "%s", "%s"),  \
                    __VA_ARGS__)

# define UNIQSTR_GEN_FORMAT(F1,  F2,  F3,  F4,  F5,     \
                           F6,  F7,  F8,  F9,  F10,     \
                           F11, F12, F13, F14, F15,     \
                           F16, F17, F18, F19, F20,     \
                           ...)                         \
  UNIQSTR_GEN_FORMAT_ (__VA_ARGS__,                     \
                       "", "", "", "", "",              \
                       "", "", "", "", "",              \
                       "", "", "", "", "",              \
                       "", "", "", "", "")

# define UNIQSTR_GEN_FORMAT_(F1,  F2,  F3,  F4,  F5,            \
                            F6,  F7,  F8,  F9,  F10,            \
                            F11, F12, F13, F14, F15,            \
                            F16, F17, F18, F19, F20, ...)       \
  F1  F2  F3  F4  F5  F6  F7  F8  F9  F10                       \
  F11 F12 F13 F14 F15 F16 F17 F18 F19 F20

/*--------------------.
| Table of uniqstrs.  |
`--------------------*/

/* Create the string table.  */
void uniqstrs_new (void);

/* Free all the memory allocated for symbols.  */
void uniqstrs_free (void);

/* Report them all.  */
void uniqstrs_print (void);

#endif /* ! defined UNIQSTR_H_ */
