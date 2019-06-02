/* Replacement <sched.h> for platforms that lack it.
   Copyright (C) 2008-2015 Free Software Foundation, Inc.

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

#ifndef _@GUARD_PREFIX@_SCHED_H

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

/* The include_next requires a split double-inclusion guard.  */
#if @HAVE_SCHED_H@
# @INCLUDE_NEXT@ @NEXT_SCHED_H@
#endif

#ifndef _@GUARD_PREFIX@_SCHED_H
#define _@GUARD_PREFIX@_SCHED_H

/* Get pid_t.
   This is needed on glibc 2.11 (see
   glibc bug <http://sourceware.org/bugzilla/show_bug.cgi?id=13198>)
   and Mac OS X 10.5.  */
#include <sys/types.h>

#ifdef __KLIBC__

/* On OS/2 kLIBC, struct sched_param is in spawn.h */
# include <spawn.h>

#endif

#if !@HAVE_STRUCT_SCHED_PARAM@

# if !GNULIB_defined_struct_sched_param
struct sched_param
{
  int sched_priority;
};
#  define GNULIB_defined_struct_sched_param 1
# endif

#endif

#if !(defined SCHED_FIFO && defined SCHED_RR && defined SCHED_OTHER)
# define SCHED_FIFO   1
# define SCHED_RR     2
# define SCHED_OTHER  0
#endif

#endif /* _@GUARD_PREFIX@_SCHED_H */
#endif /* _@GUARD_PREFIX@_SCHED_H */
