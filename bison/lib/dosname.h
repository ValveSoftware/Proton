/* File names on MS-DOS/Windows systems.

   Copyright (C) 2000-2001, 2004-2006, 2009-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.

   From Paul Eggert and Jim Meyering.  */

#ifndef _DOSNAME_H
#define _DOSNAME_H

#if (defined _WIN32 || defined __WIN32__ ||     \
     defined __MSDOS__ || defined __CYGWIN__ || \
     defined __EMX__ || defined __DJGPP__)
   /* This internal macro assumes ASCII, but all hosts that support drive
      letters use ASCII.  */
# define _IS_DRIVE_LETTER(C) (((unsigned int) (C) | ('a' - 'A')) - 'a'  \
                              <= 'z' - 'a')
# define FILE_SYSTEM_PREFIX_LEN(Filename) \
          (_IS_DRIVE_LETTER ((Filename)[0]) && (Filename)[1] == ':' ? 2 : 0)
# ifndef __CYGWIN__
#  define FILE_SYSTEM_DRIVE_PREFIX_CAN_BE_RELATIVE 1
# endif
# define ISSLASH(C) ((C) == '/' || (C) == '\\')
#else
# define FILE_SYSTEM_PREFIX_LEN(Filename) 0
# define ISSLASH(C) ((C) == '/')
#endif

#ifndef FILE_SYSTEM_DRIVE_PREFIX_CAN_BE_RELATIVE
# define FILE_SYSTEM_DRIVE_PREFIX_CAN_BE_RELATIVE 0
#endif

#if FILE_SYSTEM_DRIVE_PREFIX_CAN_BE_RELATIVE
#  define IS_ABSOLUTE_FILE_NAME(F) ISSLASH ((F)[FILE_SYSTEM_PREFIX_LEN (F)])
# else
#  define IS_ABSOLUTE_FILE_NAME(F)                              \
     (ISSLASH ((F)[0]) || FILE_SYSTEM_PREFIX_LEN (F) != 0)
#endif
#define IS_RELATIVE_FILE_NAME(F) (! IS_ABSOLUTE_FILE_NAME (F))

#endif /* DOSNAME_H_ */
