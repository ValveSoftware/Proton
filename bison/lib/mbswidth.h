/* Determine the number of screen columns needed for a string.
   Copyright (C) 2000-2004, 2007, 2009-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <stddef.h>

/* Avoid a clash of our mbswidth() with a function of the same name defined
   in UnixWare 7.1.1 <wchar.h>.  We need this #include before the #define
   below.
   However, we don't want to #include <wchar.h> on all platforms because
   - Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
     <wchar.h>.
   - BSD/OS 4.1 has a bug: <stdio.h> and <time.h> must be included before
     <wchar.h>.  */
#if HAVE_DECL_MBSWIDTH_IN_WCHAR_H
# include <wchar.h>
#endif


#ifdef __cplusplus
extern "C" {
#endif


/* Optional flags to influence mbswidth/mbsnwidth behavior.  */

/* If this bit is set, return -1 upon finding an invalid or incomplete
   character.  Otherwise, assume invalid characters have width 1.  */
#define MBSW_REJECT_INVALID 1

/* If this bit is set, return -1 upon finding a non-printable character.
   Otherwise, assume unprintable characters have width 0 if they are
   control characters and 1 otherwise.  */
#define MBSW_REJECT_UNPRINTABLE 2


/* Returns the number of screen columns needed for STRING.  */
#define mbswidth gnu_mbswidth  /* avoid clash with UnixWare 7.1.1 function */
extern int mbswidth (const char *string, int flags);

/* Returns the number of screen columns needed for the NBYTES bytes
   starting at BUF.  */
extern int mbsnwidth (const char *buf, size_t nbytes, int flags);


#ifdef __cplusplus
}
#endif
