/* Creation of subprocesses, communicating via pipes.
   Copyright (C) 2001-2004, 2006-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <haible@clisp.cons.org>, 2001.

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
#include "spawn-pipe.h"

#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#include "error.h"
#include "fatal-signal.h"
#include "unistd-safer.h"
#include "wait-process.h"
#include "gettext.h"

#define _(str) gettext (str)

#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__

/* Native Windows API.  */
# include <process.h>
# include "w32spawn.h"

#else

/* Unix API.  */
# include <spawn.h>

#endif


#ifdef EINTR

/* EINTR handling for close().
   These functions can return -1/EINTR even though we don't have any
   signal handlers set up, namely when we get interrupted via SIGSTOP.  */

static int
nonintr_close (int fd)
{
  int retval;

  do
    retval = close (fd);
  while (retval < 0 && errno == EINTR);

  return retval;
}
#define close nonintr_close

#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
static int
nonintr_open (const char *pathname, int oflag, mode_t mode)
{
  int retval;

  do
    retval = open (pathname, oflag, mode);
  while (retval < 0 && errno == EINTR);

  return retval;
}
# undef open /* avoid warning on VMS */
# define open nonintr_open
#endif

#endif


/* Open a pipe connected to a child process.
 *
 *           write       system                read
 *    parent  ->   fd[1]   ->   STDIN_FILENO    ->   child       if pipe_stdin
 *    parent  <-   fd[0]   <-   STDOUT_FILENO   <-   child       if pipe_stdout
 *           read        system                write
 *
 * At least one of pipe_stdin, pipe_stdout must be true.
 * pipe_stdin and prog_stdin together determine the child's standard input.
 * pipe_stdout and prog_stdout together determine the child's standard output.
 * If pipe_stdin is true, prog_stdin is ignored.
 * If pipe_stdout is true, prog_stdout is ignored.
 */
static pid_t
create_pipe (const char *progname,
             const char *prog_path, char **prog_argv,
             bool pipe_stdin, bool pipe_stdout,
             const char *prog_stdin, const char *prog_stdout,
             bool null_stderr,
             bool slave_process, bool exit_on_error,
             int fd[2])
{
#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__

  /* Native Windows API.
     This uses _pipe(), dup2(), and spawnv().  It could also be implemented
     using the low-level functions CreatePipe(), DuplicateHandle(),
     CreateProcess() and _open_osfhandle(); see the GNU make and GNU clisp
     and cvs source code.  */
  int ifd[2];
  int ofd[2];
  int orig_stdin;
  int orig_stdout;
  int orig_stderr;
  int child;
  int nulloutfd;
  int stdinfd;
  int stdoutfd;
  int saved_errno;

  /* FIXME: Need to free memory allocated by prepare_spawn.  */
  prog_argv = prepare_spawn (prog_argv);

  if (pipe_stdout)
    if (pipe2_safer (ifd, O_BINARY | O_CLOEXEC) < 0)
      error (EXIT_FAILURE, errno, _("cannot create pipe"));
  if (pipe_stdin)
    if (pipe2_safer (ofd, O_BINARY | O_CLOEXEC) < 0)
      error (EXIT_FAILURE, errno, _("cannot create pipe"));
/* Data flow diagram:
 *
 *           write        system         read
 *    parent  ->   ofd[1]   ->   ofd[0]   ->   child       if pipe_stdin
 *    parent  <-   ifd[0]   <-   ifd[1]   <-   child       if pipe_stdout
 *           read         system         write
 *
 */

  /* Save standard file handles of parent process.  */
  if (pipe_stdin || prog_stdin != NULL)
    orig_stdin = dup_safer_noinherit (STDIN_FILENO);
  if (pipe_stdout || prog_stdout != NULL)
    orig_stdout = dup_safer_noinherit (STDOUT_FILENO);
  if (null_stderr)
    orig_stderr = dup_safer_noinherit (STDERR_FILENO);
  child = -1;

  /* Create standard file handles of child process.  */
  nulloutfd = -1;
  stdinfd = -1;
  stdoutfd = -1;
  if ((!pipe_stdin || dup2 (ofd[0], STDIN_FILENO) >= 0)
      && (!pipe_stdout || dup2 (ifd[1], STDOUT_FILENO) >= 0)
      && (!null_stderr
          || ((nulloutfd = open ("NUL", O_RDWR, 0)) >= 0
              && (nulloutfd == STDERR_FILENO
                  || (dup2 (nulloutfd, STDERR_FILENO) >= 0
                      && close (nulloutfd) >= 0))))
      && (pipe_stdin
          || prog_stdin == NULL
          || ((stdinfd = open (prog_stdin, O_RDONLY, 0)) >= 0
              && (stdinfd == STDIN_FILENO
                  || (dup2 (stdinfd, STDIN_FILENO) >= 0
                      && close (stdinfd) >= 0))))
      && (pipe_stdout
          || prog_stdout == NULL
          || ((stdoutfd = open (prog_stdout, O_WRONLY, 0)) >= 0
              && (stdoutfd == STDOUT_FILENO
                  || (dup2 (stdoutfd, STDOUT_FILENO) >= 0
                      && close (stdoutfd) >= 0)))))
    /* The child process doesn't inherit ifd[0], ifd[1], ofd[0], ofd[1],
       but it inherits all open()ed or dup2()ed file handles (which is what
       we want in the case of STD*_FILENO).  */
    /* Use spawnvpe and pass the environment explicitly.  This is needed if
       the program has modified the environment using putenv() or [un]setenv().
       On Windows, programs have two environments, one in the "environment
       block" of the process and managed through SetEnvironmentVariable(), and
       one inside the process, in the location retrieved by the 'environ'
       macro.  When using spawnvp() without 'e', the child process inherits a
       copy of the environment block - ignoring the effects of putenv() and
       [un]setenv().  */
    {
      child = spawnvpe (P_NOWAIT, prog_path, (const char **) prog_argv,
                        (const char **) environ);
      if (child < 0 && errno == ENOEXEC)
        {
          /* prog is not a native executable.  Try to execute it as a
             shell script.  Note that prepare_spawn() has already prepended
             a hidden element "sh.exe" to prog_argv.  */
          --prog_argv;
          child = spawnvpe (P_NOWAIT, prog_argv[0], (const char **) prog_argv,
                            (const char **) environ);
        }
    }
  if (child == -1)
    saved_errno = errno;
  if (stdinfd >= 0)
    close (stdinfd);
  if (stdoutfd >= 0)
    close (stdoutfd);
  if (nulloutfd >= 0)
    close (nulloutfd);

  /* Restore standard file handles of parent process.  */
  if (null_stderr)
    undup_safer_noinherit (orig_stderr, STDERR_FILENO);
  if (pipe_stdout || prog_stdout != NULL)
    undup_safer_noinherit (orig_stdout, STDOUT_FILENO);
  if (pipe_stdin || prog_stdin != NULL)
    undup_safer_noinherit (orig_stdin, STDIN_FILENO);

  if (pipe_stdin)
    close (ofd[0]);
  if (pipe_stdout)
    close (ifd[1]);
  if (child == -1)
    {
      if (exit_on_error || !null_stderr)
        error (exit_on_error ? EXIT_FAILURE : 0, saved_errno,
               _("%s subprocess failed"), progname);
      if (pipe_stdout)
        close (ifd[0]);
      if (pipe_stdin)
        close (ofd[1]);
      errno = saved_errno;
      return -1;
    }

  if (pipe_stdout)
    fd[0] = ifd[0];
  if (pipe_stdin)
    fd[1] = ofd[1];
  return child;

#else

  /* Unix API.  */
  int ifd[2];
  int ofd[2];
  sigset_t blocked_signals;
  posix_spawn_file_actions_t actions;
  bool actions_allocated;
  posix_spawnattr_t attrs;
  bool attrs_allocated;
  int err;
  pid_t child;

  if (pipe_stdout)
    if (pipe_safer (ifd) < 0)
      error (EXIT_FAILURE, errno, _("cannot create pipe"));
  if (pipe_stdin)
    if (pipe_safer (ofd) < 0)
      error (EXIT_FAILURE, errno, _("cannot create pipe"));
/* Data flow diagram:
 *
 *           write        system         read
 *    parent  ->   ofd[1]   ->   ofd[0]   ->   child       if pipe_stdin
 *    parent  <-   ifd[0]   <-   ifd[1]   <-   child       if pipe_stdout
 *           read         system         write
 *
 */

  if (slave_process)
    {
      sigprocmask (SIG_SETMASK, NULL, &blocked_signals);
      block_fatal_signals ();
    }
  actions_allocated = false;
  attrs_allocated = false;
  if ((err = posix_spawn_file_actions_init (&actions)) != 0
      || (actions_allocated = true,
          (pipe_stdin
           && (err = posix_spawn_file_actions_adddup2 (&actions,
                                                       ofd[0], STDIN_FILENO))
              != 0)
          || (pipe_stdout
              && (err = posix_spawn_file_actions_adddup2 (&actions,
                                                          ifd[1], STDOUT_FILENO))
                 != 0)
          || (pipe_stdin
              && (err = posix_spawn_file_actions_addclose (&actions, ofd[0]))
                 != 0)
          || (pipe_stdout
              && (err = posix_spawn_file_actions_addclose (&actions, ifd[1]))
                 != 0)
          || (pipe_stdin
              && (err = posix_spawn_file_actions_addclose (&actions, ofd[1]))
                 != 0)
          || (pipe_stdout
              && (err = posix_spawn_file_actions_addclose (&actions, ifd[0]))
                 != 0)
          || (null_stderr
              && (err = posix_spawn_file_actions_addopen (&actions,
                                                          STDERR_FILENO,
                                                          "/dev/null", O_RDWR,
                                                          0))
                 != 0)
          || (!pipe_stdin
              && prog_stdin != NULL
              && (err = posix_spawn_file_actions_addopen (&actions,
                                                          STDIN_FILENO,
                                                          prog_stdin, O_RDONLY,
                                                          0))
                 != 0)
          || (!pipe_stdout
              && prog_stdout != NULL
              && (err = posix_spawn_file_actions_addopen (&actions,
                                                          STDOUT_FILENO,
                                                          prog_stdout, O_WRONLY,
                                                          0))
                 != 0)
          || (slave_process
              && ((err = posix_spawnattr_init (&attrs)) != 0
                  || (attrs_allocated = true,
                      (err = posix_spawnattr_setsigmask (&attrs,
                                                         &blocked_signals))
                      != 0
                      || (err = posix_spawnattr_setflags (&attrs,
                                                        POSIX_SPAWN_SETSIGMASK))
                         != 0)))
          || (err = posix_spawnp (&child, prog_path, &actions,
                                  attrs_allocated ? &attrs : NULL, prog_argv,
                                  environ))
             != 0))
    {
      if (actions_allocated)
        posix_spawn_file_actions_destroy (&actions);
      if (attrs_allocated)
        posix_spawnattr_destroy (&attrs);
      if (slave_process)
        unblock_fatal_signals ();
      if (exit_on_error || !null_stderr)
        error (exit_on_error ? EXIT_FAILURE : 0, err,
               _("%s subprocess failed"), progname);
      if (pipe_stdout)
        {
          close (ifd[0]);
          close (ifd[1]);
        }
      if (pipe_stdin)
        {
          close (ofd[0]);
          close (ofd[1]);
        }
      errno = err;
      return -1;
    }
  posix_spawn_file_actions_destroy (&actions);
  if (attrs_allocated)
    posix_spawnattr_destroy (&attrs);
  if (slave_process)
    {
      register_slave_subprocess (child);
      unblock_fatal_signals ();
    }
  if (pipe_stdin)
    close (ofd[0]);
  if (pipe_stdout)
    close (ifd[1]);

  if (pipe_stdout)
    fd[0] = ifd[0];
  if (pipe_stdin)
    fd[1] = ofd[1];
  return child;

#endif
}

/* Open a bidirectional pipe.
 *
 *           write       system                read
 *    parent  ->   fd[1]   ->   STDIN_FILENO    ->   child
 *    parent  <-   fd[0]   <-   STDOUT_FILENO   <-   child
 *           read        system                write
 *
 */
pid_t
create_pipe_bidi (const char *progname,
                  const char *prog_path, char **prog_argv,
                  bool null_stderr,
                  bool slave_process, bool exit_on_error,
                  int fd[2])
{
  pid_t result = create_pipe (progname, prog_path, prog_argv,
                              true, true, NULL, NULL,
                              null_stderr, slave_process, exit_on_error,
                              fd);
  return result;
}

/* Open a pipe for input from a child process.
 * The child's stdin comes from a file.
 *
 *           read        system                write
 *    parent  <-   fd[0]   <-   STDOUT_FILENO   <-   child
 *
 */
pid_t
create_pipe_in (const char *progname,
                const char *prog_path, char **prog_argv,
                const char *prog_stdin, bool null_stderr,
                bool slave_process, bool exit_on_error,
                int fd[1])
{
  int iofd[2];
  pid_t result = create_pipe (progname, prog_path, prog_argv,
                              false, true, prog_stdin, NULL,
                              null_stderr, slave_process, exit_on_error,
                              iofd);
  if (result != -1)
    fd[0] = iofd[0];
  return result;
}

/* Open a pipe for output to a child process.
 * The child's stdout goes to a file.
 *
 *           write       system                read
 *    parent  ->   fd[0]   ->   STDIN_FILENO    ->   child
 *
 */
pid_t
create_pipe_out (const char *progname,
                 const char *prog_path, char **prog_argv,
                 const char *prog_stdout, bool null_stderr,
                 bool slave_process, bool exit_on_error,
                 int fd[1])
{
  int iofd[2];
  pid_t result = create_pipe (progname, prog_path, prog_argv,
                              true, false, NULL, prog_stdout,
                              null_stderr, slave_process, exit_on_error,
                              iofd);
  if (result != -1)
    fd[0] = iofd[1];
  return result;
}
