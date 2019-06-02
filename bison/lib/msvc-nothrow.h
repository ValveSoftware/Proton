/* Wrappers that don't throw invalid parameter notifications
   with MSVC runtime libraries.
   Copyright (C) 2011-2015 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef _MSVC_NOTHROW_H
#define _MSVC_NOTHROW_H

/* With MSVC runtime libraries with the "invalid parameter handler" concept,
   functions like fprintf(), dup2(), or close() crash when the caller passes
   an invalid argument.  But POSIX wants error codes (such as EINVAL or EBADF)
   instead.
   This file defines wrappers that turn such an invalid parameter notification
   into an error code.  */

#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__

/* Get original declaration of _get_osfhandle.  */
# include <io.h>

# if HAVE_MSVC_INVALID_PARAMETER_HANDLER

/* Override _get_osfhandle.  */
extern intptr_t _gl_nothrow_get_osfhandle (int fd);
#  define _get_osfhandle _gl_nothrow_get_osfhandle

# endif

#endif

#endif /* _MSVC_NOTHROW_H */
