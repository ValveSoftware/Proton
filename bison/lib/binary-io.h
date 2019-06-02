/* Binary mode I/O.
   Copyright (C) 2001, 2003, 2005, 2008-2015 Free Software Foundation, Inc.

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

#ifndef _BINARY_H
#define _BINARY_H

/* For systems that distinguish between text and binary I/O.
   O_BINARY is guaranteed by the gnulib <fcntl.h>. */
#include <fcntl.h>

/* The MSVC7 <stdio.h> doesn't like to be included after '#define fileno ...',
   so we include it here first.  */
#include <stdio.h>

#ifndef _GL_INLINE_HEADER_BEGIN
 #error "Please include config.h first."
#endif
_GL_INLINE_HEADER_BEGIN
#ifndef BINARY_IO_INLINE
# define BINARY_IO_INLINE _GL_INLINE
#endif

/* set_binary_mode (fd, mode)
   sets the binary/text I/O mode of file descriptor fd to the given mode
   (must be O_BINARY or O_TEXT) and returns the previous mode.  */
#if O_BINARY
# if defined __EMX__ || defined __DJGPP__ || defined __CYGWIN__
#  include <io.h> /* declares setmode() */
#  define set_binary_mode setmode
# else
#  define set_binary_mode _setmode
#  undef fileno
#  define fileno _fileno
# endif
#else
  /* On reasonable systems, binary I/O is the only choice.  */
  /* Use a function rather than a macro, to avoid gcc warnings
     "warning: statement with no effect".  */
BINARY_IO_INLINE int
set_binary_mode (int fd, int mode)
{
  (void) fd;
  (void) mode;
  return O_BINARY;
}
#endif

/* SET_BINARY (fd);
   changes the file descriptor fd to perform binary I/O.  */
#ifdef __DJGPP__
# include <unistd.h> /* declares isatty() */
  /* Avoid putting stdin/stdout in binary mode if it is connected to
     the console, because that would make it impossible for the user
     to interrupt the program through Ctrl-C or Ctrl-Break.  */
# define SET_BINARY(fd) ((void) (!isatty (fd) ? (set_binary_mode (fd, O_BINARY), 0) : 0))
#else
# define SET_BINARY(fd) ((void) set_binary_mode (fd, O_BINARY))
#endif

_GL_INLINE_HEADER_END

#endif /* _BINARY_H */
