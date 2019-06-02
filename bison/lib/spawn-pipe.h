/* Creation of subprocesses, communicating via pipes.
   Copyright (C) 2001-2003, 2006, 2008-2015 Free Software Foundation, Inc.
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

#ifndef _SPAWN_PIPE_H
#define _SPAWN_PIPE_H

/* Get pid_t.  */
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#include <stdbool.h>


#ifdef __cplusplus
extern "C" {
#endif


/* All these functions create a subprocess and don't wait for its termination.
   They return the process id of the subprocess.  They also return in fd[]
   one or two file descriptors for communication with the subprocess.
   If the subprocess creation fails: if exit_on_error is true, the main
   process exits with an error message; otherwise, an error message is given
   if null_stderr is false, then -1 is returned, with errno set, and fd[]
   remain uninitialized.

   After finishing communication, the caller should call wait_subprocess()
   to get rid of the subprocess in the process table.

   If slave_process is true, the child process will be terminated when its
   creator receives a catchable fatal signal or exits normally.  If
   slave_process is false, the child process will continue running in this
   case, until it is lucky enough to attempt to communicate with its creator
   and thus get a SIGPIPE signal.

   If exit_on_error is false, a child process id of -1 should be treated the
   same way as a subprocess which accepts no input, produces no output and
   terminates with exit code 127.  Why?  Some errors during posix_spawnp()
   cause the function posix_spawnp() to return an error code; some other
   errors cause the subprocess to exit with return code 127.  It is
   implementation dependent which error is reported which way.  The caller
   must treat both cases as equivalent.

   It is recommended that no signal is blocked or ignored (i.e. have a
   signal handler with value SIG_IGN) while any of these functions is called.
   The reason is that child processes inherit the mask of blocked signals
   from their parent (both through posix_spawn() and fork()/exec());
   likewise, signals ignored in the parent are also ignored in the child
   (except possibly for SIGCHLD).  And POSIX:2001 says [in the description
   of exec()]:
       "it should be noted that many existing applications wrongly
        assume that they start with certain signals set to the default
        action and/or unblocked. In particular, applications written
        with a simpler signal model that does not include blocking of
        signals, such as the one in the ISO C standard, may not behave
        properly if invoked with some signals blocked. Therefore, it is
        best not to block or ignore signals across execs without explicit
        reason to do so, and especially not to block signals across execs
        of arbitrary (not closely co-operating) programs."  */

/* Open a pipe for output to a child process.
 * The child's stdout goes to a file.
 *
 *           write       system                read
 *    parent  ->   fd[0]   ->   STDIN_FILENO    ->   child
 *
 * Note: When writing to a child process, it is useful to ignore the SIGPIPE
 * signal and the EPIPE error code.
 */
extern pid_t create_pipe_out (const char *progname,
                              const char *prog_path, char **prog_argv,
                              const char *prog_stdout, bool null_stderr,
                              bool slave_process, bool exit_on_error,
                              int fd[1]);

/* Open a pipe for input from a child process.
 * The child's stdin comes from a file.
 *
 *           read        system                write
 *    parent  <-   fd[0]   <-   STDOUT_FILENO   <-   child
 *
 */
extern pid_t create_pipe_in (const char *progname,
                             const char *prog_path, char **prog_argv,
                             const char *prog_stdin, bool null_stderr,
                             bool slave_process, bool exit_on_error,
                             int fd[1]);

/* Open a bidirectional pipe.
 *
 *           write       system                read
 *    parent  ->   fd[1]   ->   STDIN_FILENO    ->   child
 *    parent  <-   fd[0]   <-   STDOUT_FILENO   <-   child
 *           read        system                write
 *
 * Note: When writing to a child process, it is useful to ignore the SIGPIPE
 * signal and the EPIPE error code.
 *
 * Note: The parent process must be careful to avoid deadlock.
 * 1) If you write more than PIPE_MAX bytes or, more generally, if you write
 *    more bytes than the subprocess can handle at once, the subprocess
 *    may write its data and wait on you to read it, but you are currently
 *    busy writing.
 * 2) When you don't know ahead of time how many bytes the subprocess
 *    will produce, the usual technique of calling read (fd, buf, BUFSIZ)
 *    with a fixed BUFSIZ will, on Linux 2.2.17 and on BSD systems, cause
 *    the read() call to block until *all* of the buffer has been filled.
 *    But the subprocess cannot produce more data until you gave it more
 *    input.  But you are currently busy reading from it.
 */
extern pid_t create_pipe_bidi (const char *progname,
                               const char *prog_path, char **prog_argv,
                               bool null_stderr,
                               bool slave_process, bool exit_on_error,
                               int fd[2]);

/* The name of the "always silent" device.  */
#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
/* Native Windows API.  */
# define DEV_NULL "NUL"
#else
/* Unix API.  */
# define DEV_NULL "/dev/null"
#endif


#ifdef __cplusplus
}
#endif


#endif /* _SPAWN_PIPE_H */
