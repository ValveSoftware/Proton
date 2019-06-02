/* Set the error indicator of a stream.
   Copyright (C) 2007, 2009-2015 Free Software Foundation, Inc.

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

#ifndef _FSETERR_H
#define _FSETERR_H

#include <stdio.h>

/* Set the error indicator of the stream FP.
   The "error indicator" is set when an I/O operation on the stream fails, and
   is cleared (together with the "end-of-file" indicator) by clearerr (FP).  */

#if HAVE___FSETERR /* musl libc */

# include <stdio_ext.h>
# define fseterr(fp) __fseterr (fp)

#else

# ifdef __cplusplus
extern "C" {
# endif

extern void fseterr (FILE *fp);

# ifdef __cplusplus
}
# endif

#endif

#endif /* _FSETERR_H */
