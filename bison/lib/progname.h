/* Program name management.
   Copyright (C) 2001-2004, 2006, 2009-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2001.

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

#ifndef _PROGNAME_H
#define _PROGNAME_H

/* Programs using this file should do the following in main():
     set_program_name (argv[0]);
 */


#ifdef __cplusplus
extern "C" {
#endif


/* String containing name the program is called with.  */
extern const char *program_name;

/* Set program_name, based on argv[0].
   argv0 must be a string allocated with indefinite extent, and must not be
   modified after this call.  */
extern void set_program_name (const char *argv0);

#if ENABLE_RELOCATABLE

/* Set program_name, based on argv[0], and original installation prefix and
   directory, for relocatability.  */
extern void set_program_name_and_installdir (const char *argv0,
                                             const char *orig_installprefix,
                                             const char *orig_installdir);
#undef set_program_name
#define set_program_name(ARG0) \
  set_program_name_and_installdir (ARG0, INSTALLPREFIX, INSTALLDIR)

/* Return the full pathname of the current executable, based on the earlier
   call to set_program_name_and_installdir.  Return NULL if unknown.  */
extern char *get_full_program_name (void);

#endif


#ifdef __cplusplus
}
#endif


#endif /* _PROGNAME_H */
