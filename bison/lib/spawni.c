/* Guts of POSIX spawn interface.  Generic POSIX.1 version.
   Copyright (C) 2000-2006, 2008-2015 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

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

#include <config.h>

/* Specification.  */
#include <spawn.h>
#include "spawn_int.h"

#include <alloca.h>
#include <errno.h>

#include <fcntl.h>
#ifndef O_LARGEFILE
# define O_LARGEFILE 0
#endif

#if _LIBC || HAVE_PATHS_H
# include <paths.h>
#else
# define _PATH_BSHELL "/bin/sh"
#endif

#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#if _LIBC
# include <not-cancel.h>
#else
# define close_not_cancel close
# define open_not_cancel open
#endif

#if _LIBC
# include <local-setxid.h>
#else
# if !HAVE_SETEUID
#  define seteuid(id) setresuid (-1, id, -1)
# endif
# if !HAVE_SETEGID
#  define setegid(id) setresgid (-1, id, -1)
# endif
# define local_seteuid(id) seteuid (id)
# define local_setegid(id) setegid (id)
#endif

#if _LIBC
# define alloca __alloca
# define execve __execve
# define dup2 __dup2
# define fork __fork
# define getgid __getgid
# define getuid __getuid
# define sched_setparam __sched_setparam
# define sched_setscheduler __sched_setscheduler
# define setpgid __setpgid
# define sigaction __sigaction
# define sigismember __sigismember
# define sigprocmask __sigprocmask
# define strchrnul __strchrnul
# define vfork __vfork
#else
# undef internal_function
# define internal_function /* empty */
#endif


/* The Unix standard contains a long explanation of the way to signal
   an error after the fork() was successful.  Since no new wait status
   was wanted there is no way to signal an error using one of the
   available methods.  The committee chose to signal an error by a
   normal program exit with the exit code 127.  */
#define SPAWN_ERROR     127


#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__

/* Native Windows API.  */
int
__spawni (pid_t *pid, const char *file,
          const posix_spawn_file_actions_t *file_actions,
          const posix_spawnattr_t *attrp, char *const argv[],
          char *const envp[], int use_path)
{
  /* Not yet implemented.  */
  return ENOSYS;
}

#else


/* The file is accessible but it is not an executable file.  Invoke
   the shell to interpret it as a script.  */
static void
internal_function
script_execute (const char *file, char *const argv[], char *const envp[])
{
  /* Count the arguments.  */
  int argc = 0;
  while (argv[argc++])
    ;

  /* Construct an argument list for the shell.  */
  {
    char **new_argv = (char **) alloca ((argc + 1) * sizeof (char *));
    new_argv[0] = (char *) _PATH_BSHELL;
    new_argv[1] = (char *) file;
    while (argc > 1)
      {
        new_argv[argc] = argv[argc - 1];
        --argc;
      }

    /* Execute the shell.  */
    execve (new_argv[0], new_argv, envp);
  }
}


/* Spawn a new process executing PATH with the attributes describes in *ATTRP.
   Before running the process perform the actions described in FILE-ACTIONS. */
int
__spawni (pid_t *pid, const char *file,
          const posix_spawn_file_actions_t *file_actions,
          const posix_spawnattr_t *attrp, char *const argv[],
          char *const envp[], int use_path)
{
  pid_t new_pid;
  char *path, *p, *name;
  size_t len;
  size_t pathlen;

  /* Do this once.  */
  short int flags = attrp == NULL ? 0 : attrp->_flags;

  /* Avoid gcc warning
       "variable 'flags' might be clobbered by 'longjmp' or 'vfork'"  */
  (void) &flags;

  /* Generate the new process.  */
#if HAVE_VFORK
  if ((flags & POSIX_SPAWN_USEVFORK) != 0
      /* If no major work is done, allow using vfork.  Note that we
         might perform the path searching.  But this would be done by
         a call to execvp(), too, and such a call must be OK according
         to POSIX.  */
      || ((flags & (POSIX_SPAWN_SETSIGMASK | POSIX_SPAWN_SETSIGDEF
                    | POSIX_SPAWN_SETSCHEDPARAM | POSIX_SPAWN_SETSCHEDULER
                    | POSIX_SPAWN_SETPGROUP | POSIX_SPAWN_RESETIDS)) == 0
          && file_actions == NULL))
    new_pid = vfork ();
  else
#endif
    new_pid = fork ();

  if (new_pid != 0)
    {
      if (new_pid < 0)
        return errno;

      /* The call was successful.  Store the PID if necessary.  */
      if (pid != NULL)
        *pid = new_pid;

      return 0;
    }

  /* Set signal mask.  */
  if ((flags & POSIX_SPAWN_SETSIGMASK) != 0
      && sigprocmask (SIG_SETMASK, &attrp->_ss, NULL) != 0)
    _exit (SPAWN_ERROR);

  /* Set signal default action.  */
  if ((flags & POSIX_SPAWN_SETSIGDEF) != 0)
    {
      /* We have to iterate over all signals.  This could possibly be
         done better but it requires system specific solutions since
         the sigset_t data type can be very different on different
         architectures.  */
      int sig;
      struct sigaction sa;

      memset (&sa, '\0', sizeof (sa));
      sa.sa_handler = SIG_DFL;

      for (sig = 1; sig <= NSIG; ++sig)
        if (sigismember (&attrp->_sd, sig) != 0
            && sigaction (sig, &sa, NULL) != 0)
          _exit (SPAWN_ERROR);

    }

#if (_LIBC ? defined _POSIX_PRIORITY_SCHEDULING : HAVE_SCHED_SETPARAM && HAVE_SCHED_SETSCHEDULER)
  /* Set the scheduling algorithm and parameters.  */
  if ((flags & (POSIX_SPAWN_SETSCHEDPARAM | POSIX_SPAWN_SETSCHEDULER))
      == POSIX_SPAWN_SETSCHEDPARAM)
    {
      if (sched_setparam (0, &attrp->_sp) == -1)
        _exit (SPAWN_ERROR);
    }
  else if ((flags & POSIX_SPAWN_SETSCHEDULER) != 0)
    {
      if (sched_setscheduler (0, attrp->_policy,
                              (flags & POSIX_SPAWN_SETSCHEDPARAM) != 0
                              ? &attrp->_sp : NULL) == -1)
        _exit (SPAWN_ERROR);
    }
#endif

  /* Set the process group ID.  */
  if ((flags & POSIX_SPAWN_SETPGROUP) != 0
      && setpgid (0, attrp->_pgrp) != 0)
    _exit (SPAWN_ERROR);

  /* Set the effective user and group IDs.  */
  if ((flags & POSIX_SPAWN_RESETIDS) != 0
      && (local_seteuid (getuid ()) != 0
          || local_setegid (getgid ()) != 0))
    _exit (SPAWN_ERROR);

  /* Execute the file actions.  */
  if (file_actions != NULL)
    {
      int cnt;

      for (cnt = 0; cnt < file_actions->_used; ++cnt)
        {
          struct __spawn_action *action = &file_actions->_actions[cnt];

          switch (action->tag)
            {
            case spawn_do_close:
              if (close_not_cancel (action->action.close_action.fd) != 0)
                /* Signal the error.  */
                _exit (SPAWN_ERROR);
              break;

            case spawn_do_open:
              {
                int new_fd = open_not_cancel (action->action.open_action.path,
                                              action->action.open_action.oflag
                                              | O_LARGEFILE,
                                              action->action.open_action.mode);

                if (new_fd == -1)
                  /* The 'open' call failed.  */
                  _exit (SPAWN_ERROR);

                /* Make sure the desired file descriptor is used.  */
                if (new_fd != action->action.open_action.fd)
                  {
                    if (dup2 (new_fd, action->action.open_action.fd)
                        != action->action.open_action.fd)
                      /* The 'dup2' call failed.  */
                      _exit (SPAWN_ERROR);

                    if (close_not_cancel (new_fd) != 0)
                      /* The 'close' call failed.  */
                      _exit (SPAWN_ERROR);
                  }
              }
              break;

            case spawn_do_dup2:
              if (dup2 (action->action.dup2_action.fd,
                        action->action.dup2_action.newfd)
                  != action->action.dup2_action.newfd)
                /* The 'dup2' call failed.  */
                _exit (SPAWN_ERROR);
              break;
            }
        }
    }

  if (! use_path || strchr (file, '/') != NULL)
    {
      /* The FILE parameter is actually a path.  */
      execve (file, argv, envp);

      if (errno == ENOEXEC)
        script_execute (file, argv, envp);

      /* Oh, oh.  'execve' returns.  This is bad.  */
      _exit (SPAWN_ERROR);
    }

  /* We have to search for FILE on the path.  */
  path = getenv ("PATH");
  if (path == NULL)
    {
#if HAVE_CONFSTR
      /* There is no 'PATH' in the environment.
         The default search path is the current directory
         followed by the path 'confstr' returns for '_CS_PATH'.  */
      len = confstr (_CS_PATH, (char *) NULL, 0);
      path = (char *) alloca (1 + len);
      path[0] = ':';
      (void) confstr (_CS_PATH, path + 1, len);
#else
      /* Pretend that the PATH contains only the current directory.  */
      path = "";
#endif
    }

  len = strlen (file) + 1;
  pathlen = strlen (path);
  name = alloca (pathlen + len + 1);
  /* Copy the file name at the top.  */
  name = (char *) memcpy (name + pathlen + 1, file, len);
  /* And add the slash.  */
  *--name = '/';

  p = path;
  do
    {
      char *startp;

      path = p;
      p = strchrnul (path, ':');

      if (p == path)
        /* Two adjacent colons, or a colon at the beginning or the end
           of 'PATH' means to search the current directory.  */
        startp = name + 1;
      else
        startp = (char *) memcpy (name - (p - path), path, p - path);

      /* Try to execute this name.  If it works, execv will not return.  */
      execve (startp, argv, envp);

      if (errno == ENOEXEC)
        script_execute (startp, argv, envp);

      switch (errno)
        {
        case EACCES:
        case ENOENT:
        case ESTALE:
        case ENOTDIR:
          /* Those errors indicate the file is missing or not executable
             by us, in which case we want to just try the next path
             directory.  */
          break;

        default:
          /* Some other error means we found an executable file, but
             something went wrong executing it; return the error to our
             caller.  */
          _exit (SPAWN_ERROR);
        }
    }
  while (*p++ != '\0');

  /* Return with an error.  */
  _exit (SPAWN_ERROR);
}

#endif
