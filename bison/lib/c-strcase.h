/* Case-insensitive string comparison functions in C locale.
   Copyright (C) 1995-1996, 2001, 2003, 2005, 2009-2015 Free Software
   Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef C_STRCASE_H
#define C_STRCASE_H

#include <stddef.h>


/* The functions defined in this file assume the "C" locale and a character
   set without diacritics (ASCII-US or EBCDIC-US or something like that).
   Even if the "C" locale on a particular system is an extension of the ASCII
   character set (like on BeOS, where it is UTF-8, or on AmigaOS, where it
   is ISO-8859-1), the functions in this file recognize only the ASCII
   characters.  More precisely, one of the string arguments must be an ASCII
   string; the other one can also contain non-ASCII characters (but then
   the comparison result will be nonzero).  */


#ifdef __cplusplus
extern "C" {
#endif


/* Compare strings S1 and S2, ignoring case, returning less than, equal to or
   greater than zero if S1 is lexicographically less than, equal to or greater
   than S2.  */
extern int c_strcasecmp (const char *s1, const char *s2) _GL_ATTRIBUTE_PURE;

/* Compare no more than N characters of strings S1 and S2, ignoring case,
   returning less than, equal to or greater than zero if S1 is
   lexicographically less than, equal to or greater than S2.  */
extern int c_strncasecmp (const char *s1, const char *s2, size_t n)
  _GL_ATTRIBUTE_PURE;


#ifdef __cplusplus
}
#endif


#endif /* C_STRCASE_H */
