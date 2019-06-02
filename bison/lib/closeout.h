/* Close standard output and standard error.

   Copyright (C) 1998, 2000, 2003-2004, 2006, 2008-2015 Free Software
   Foundation, Inc.

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

#ifndef CLOSEOUT_H
# define CLOSEOUT_H 1

# include <stdbool.h>

# ifdef __cplusplus
extern "C" {
# endif

void close_stdout_set_file_name (const char *file);
void close_stdout_set_ignore_EPIPE (bool ignore);
void close_stdout (void);

# ifdef __cplusplus
}
# endif

#endif
