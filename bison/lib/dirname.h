/*  Take file names apart into directory and base names.

    Copyright (C) 1998, 2001, 2003-2006, 2009-2015 Free Software Foundation,
    Inc.

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

#ifndef DIRNAME_H_
# define DIRNAME_H_ 1

# include <stdbool.h>
# include <stddef.h>
# include "dosname.h"

# ifndef DIRECTORY_SEPARATOR
#  define DIRECTORY_SEPARATOR '/'
# endif

# ifndef DOUBLE_SLASH_IS_DISTINCT_ROOT
#  define DOUBLE_SLASH_IS_DISTINCT_ROOT 0
# endif

#ifdef __cplusplus
extern "C" {
#endif

# if GNULIB_DIRNAME
char *base_name (char const *file);
char *dir_name (char const *file);
# endif

char *mdir_name (char const *file);
size_t base_len (char const *file) _GL_ATTRIBUTE_PURE;
size_t dir_len (char const *file) _GL_ATTRIBUTE_PURE;
char *last_component (char const *file) _GL_ATTRIBUTE_PURE;

bool strip_trailing_slashes (char *file);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* not DIRNAME_H_ */
