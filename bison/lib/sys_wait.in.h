/* A POSIX-like <sys/wait.h>.
   Copyright (C) 2001-2003, 2005-2015 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.  */


#ifndef _@GUARD_PREFIX@_SYS_WAIT_H

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

/* The include_next requires a split double-inclusion guard.  */
#if !((defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__)
# @INCLUDE_NEXT@ @NEXT_SYS_WAIT_H@
#endif

#ifndef _@GUARD_PREFIX@_SYS_WAIT_H
#define _@GUARD_PREFIX@_SYS_WAIT_H

/* Get pid_t.  */
#include <sys/types.h>


/* The definitions of _GL_FUNCDECL_RPL etc. are copied here.  */

/* The definition of _GL_WARN_ON_USE is copied here.  */


#if !((defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__)
/* Unix API.  */

/* The following macros apply to an argument x, that is a status of a process,
   as returned by waitpid().
   On nearly all systems, including Linux/x86, WEXITSTATUS are bits 15..8 and
   WTERMSIG are bits 7..0, while BeOS uses the opposite.  Therefore programs
   have to use the abstract macros.  */

/* For valid x, exactly one of WIFSIGNALED(x), WIFEXITED(x), WIFSTOPPED(x)
   is true.  */
# ifndef WIFSIGNALED
#  define WIFSIGNALED(x) (WTERMSIG (x) != 0 && WTERMSIG(x) != 0x7f)
# endif
# ifndef WIFEXITED
#  define WIFEXITED(x) (WTERMSIG (x) == 0)
# endif
# ifndef WIFSTOPPED
#  define WIFSTOPPED(x) (WTERMSIG (x) == 0x7f)
# endif

/* The termination signal. Only to be accessed if WIFSIGNALED(x) is true.  */
# ifndef WTERMSIG
#  define WTERMSIG(x) ((x) & 0x7f)
# endif

/* The exit status. Only to be accessed if WIFEXITED(x) is true.  */
# ifndef WEXITSTATUS
#  define WEXITSTATUS(x) (((x) >> 8) & 0xff)
# endif

/* The stopping signal. Only to be accessed if WIFSTOPPED(x) is true.  */
# ifndef WSTOPSIG
#  define WSTOPSIG(x) (((x) >> 8) & 0x7f)
# endif

/* True if the process dumped core.  Not standardized by POSIX.  */
# ifndef WCOREDUMP
#  define WCOREDUMP(x) ((x) & 0x80)
# endif

#else
/* Native Windows API.  */

# include <signal.h> /* for SIGTERM */

/* The following macros apply to an argument x, that is a status of a process,
   as returned by waitpid() or, equivalently, _cwait() or GetExitCodeProcess().
   This value is simply an 'int', not composed of bit fields.  */

/* When an unhandled fatal signal terminates a process, the exit code is 3.  */
# define WIFSIGNALED(x) ((x) == 3)
# define WIFEXITED(x) ((x) != 3)
# define WIFSTOPPED(x) 0

/* The signal that terminated a process is not known posthum.  */
# define WTERMSIG(x) SIGTERM

# define WEXITSTATUS(x) (x)

/* There are no stopping signals.  */
# define WSTOPSIG(x) 0

/* There are no core dumps.  */
# define WCOREDUMP(x) 0

#endif


/* Declarations of functions.  */

#if @GNULIB_WAITPID@
# if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
_GL_FUNCDECL_SYS (waitpid, pid_t, (pid_t pid, int *statusp, int options));
# endif
_GL_CXXALIAS_SYS (waitpid, pid_t, (pid_t pid, int *statusp, int options));
_GL_CXXALIASWARN (waitpid);
#elif defined GNULIB_POSIXCHECK
# undef waitpid
# if HAVE_RAW_DECL_WAITPID
_GL_WARN_ON_USE (waitpid, "waitpid is unportable - "
                 "use gnulib module sys_wait for portability");
# endif
#endif


#endif /* _@GUARD_PREFIX@_SYS_WAIT_H */
#endif /* _@GUARD_PREFIX@_SYS_WAIT_H */
