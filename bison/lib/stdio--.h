/* Like stdio.h, but redefine some names to avoid glitches.

   Copyright (C) 2005-2006, 2009-2015 Free Software Foundation, Inc.

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

/* Written by Paul Eggert.  */

#include <stdio.h>
#include "stdio-safer.h"

#if GNULIB_FOPEN_SAFER
# undef fopen
# define fopen fopen_safer
#endif

#if GNULIB_FREOPEN_SAFER
# undef freopen
# define freopen freopen_safer
#endif

#if GNULIB_TMPFILE_SAFER
# undef tmpfile
# define tmpfile tmpfile_safer
#endif

#if GNULIB_POPEN_SAFER
# undef popen
# define popen popen_safer
#endif
