# -*- Autoconf -*-
# Checks required to run `timevar', a time tracker.
#
# Copyright (C) 2002-2003, 2009-2015 Free Software Foundation, Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

# serial 2

AC_DEFUN([BISON_PREREQ_TIMEVAR],
[AC_CHECK_HEADERS([sys/time.h sys/times.h])
 AC_CHECK_HEADERS([sys/resource.h],,,
   [$ac_includes_default
#if HAVE_SYS_TIME_H
# include <sys/time.h>
#endif
#ifdef HAVE_SYS_TIMES_H
# include <sys/times.h>
#endif
])
AC_CHECK_FUNCS([times])

AC_CHECK_DECLS([getrusage, times, clock, sysconf], [], [],
[$ac_includes_default
#if HAVE_SYS_TIME_H
# include <sys/time.h>
#endif
#if HAVE_SYS_TIMES_H
# include <sys/times.h>
#endif
#if HAVE_SYS_RESOURCE_H
# include <sys/resource.h>
#endif
])

AC_CHECK_TYPES([clock_t, struct tms], [], [],
[$ac_includes_default
#if HAVE_SYS_TIME_H
# include <sys/time.h>
#endif
#if HAVE_SYS_TIMES_H
# include <sys/times.h>
#endif
#if HAVE_SYS_RESOURCE_H
# include <sys/resource.h>
#endif
])
])
