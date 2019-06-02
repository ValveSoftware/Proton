/* Display width functions.
   Copyright (C) 2001-2002, 2005, 2007, 2009-2015 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef _UNIWIDTH_H
#define _UNIWIDTH_H

#include "unitypes.h"

/* Get size_t.  */
#include <stddef.h>

/* Get locale_charset() declaration.  */
#include "localcharset.h"

#ifdef __cplusplus
extern "C" {
#endif


/* Display width.  */

/* These functions are locale dependent.  The encoding argument identifies
   the encoding (e.g. "ISO-8859-2" for Polish).  */

/* Determine number of column positions required for UC.  */
extern int
       uc_width (ucs4_t uc, const char *encoding)
       _UC_ATTRIBUTE_PURE;

/* Determine number of column positions required for first N units
   (or fewer if S ends before this) in S.  */
extern int
       u8_width (const uint8_t *s, size_t n, const char *encoding)
       _UC_ATTRIBUTE_PURE;
extern int
       u16_width (const uint16_t *s, size_t n, const char *encoding)
       _UC_ATTRIBUTE_PURE;
extern int
       u32_width (const uint32_t *s, size_t n, const char *encoding)
       _UC_ATTRIBUTE_PURE;

/* Determine number of column positions required for S.  */
extern int
       u8_strwidth (const uint8_t *s, const char *encoding)
       _UC_ATTRIBUTE_PURE;
extern int
       u16_strwidth (const uint16_t *s, const char *encoding)
       _UC_ATTRIBUTE_PURE;
extern int
       u32_strwidth (const uint32_t *s, const char *encoding)
       _UC_ATTRIBUTE_PURE;


#ifdef __cplusplus
}
#endif

#endif /* _UNIWIDTH_H */
