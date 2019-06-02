/* Construct a full filename from a directory and a relative filename.
   Copyright (C) 2001-2004, 2007-2015 Free Software Foundation, Inc.

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

#ifndef _CONCAT_FILENAME_H
#define _CONCAT_FILENAME_H

#ifdef __cplusplus
extern "C" {
#endif


/* Concatenate a directory filename, a relative filename and an optional
   suffix.  Return a freshly allocated filename.  Return NULL and set errno
   upon memory allocation failure.  */
extern char *concatenated_filename (const char *directory,
                                    const char *filename, const char *suffix);

/* Concatenate a directory filename, a relative filename and an optional
   suffix.  Return a freshly allocated filename.  */
extern char *xconcatenated_filename (const char *directory,
                                     const char *filename, const char *suffix);


#ifdef __cplusplus
}
#endif

#endif /* _CONCAT_FILENAME_H */
