/* Subprocesses with pipes.

   Copyright (C) 2005-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Written by Juan Manuel Guerrero <juan.guerrero@gmx.de>. */


#include <config.h>

#include "subpipe.h"

#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <process.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "xalloc.h"


#ifndef STDIN_FILENO
# define STDIN_FILENO 0
#endif
#ifndef STDOUT_FILENO
# define STDOUT_FILENO 1
#endif


#include "error.h"

#include "gettext.h"
#define _(Msgid)  gettext (Msgid)


/* Initialize this module. */


static int old_stdin;
static int old_stdout;
static char **arguments;
static char tmp_file_name[2][L_tmpnam];

#define remove_tmp_file(fd, name)                                     \
  do {                                                                \
    close ((fd));                                                     \
    if (unlink ((name)))                                              \
      error (EXIT_FAILURE, 0, _("removing of '%s' failed"), (name));  \
  } while (0)


void
init_subpipe(void)
{
  char *tmpdir;
  int fd;

  tmpdir = getenv("TMPDIR");
  if (tmpdir == NULL)
    tmpdir = getenv("TMP");
  if (tmpdir == NULL)
    tmpdir = getenv("TEMP");
  if (access(tmpdir, D_OK))
    tmpdir = ".";

  strcpy(tmp_file_name[0], tmpdir);
  strcat(tmp_file_name[0], "/bnXXXXXX");
  fd = mkstemp(tmp_file_name[0]);
  if (fd < 0)
    error(EXIT_FAILURE, 0, _("creation of a temporary file failed"));
  close (fd);

  strcpy(tmp_file_name[1], tmpdir);
  strcat(tmp_file_name[1], "/bnXXXXXX");
  fd = mkstemp(tmp_file_name[1]);
  if (fd < 0)
    error(EXIT_FAILURE, 0, _("creation of a temporary file failed"));
  close (fd);
}


/* Create a subprocess that is run as a filter.  ARGV is the
   NULL-terminated argument vector for the subprocess.  Store read and
   write file descriptors for communication with the subprocess into
   FD[0] and FD[1]: input meant for the process can be written into
   FD[0], and output from the process can be read from FD[1].  Return
   the subprocess id.

   Because DOS has neither fork nor pipe functionality to run the subprocess
   as a filter, the filter is reproduced using temporary files. First bison's
   stdout is redirected to a temporary file. After bison has produced all of
   is output, this file is closed and connected to m4's stdin. All m4's output
   is redirected from m4's stdout to a second temporary file and reopened as
   bison's stdin. */

pid_t
create_subpipe(char const *const *argv, int fd[2])
{
  int argc;
  int from_in_fd;  /* pipe from bison to m4. */
  pid_t pid;


  pid = getpid();

  /*
   *  Save original stdin and stdout
   *  for later restauration.
   */
  old_stdin = dup(STDIN_FILENO);
  if (old_stdin < 0)
    error(EXIT_FAILURE, 0, _("saving stdin failed"));

  old_stdout = dup(STDOUT_FILENO);
  if (old_stdout < 0)
    error(EXIT_FAILURE, 0, _("saving stdout failed"));

  /*
   *  Save argv for later use.
   */
  for (argc = 0; argv[argc]; argc++)
    ;
  argc++;
  arguments = xmalloc(argc * sizeof(arguments[0]));
  for (argc = 0; argv[argc]; argc++)
  {
    arguments[argc] = xmalloc((strlen(argv[argc]) + 1) * sizeof(arguments[0][0]));
    strcpy(arguments[argc], argv[argc]);
  }
  arguments[argc] = NULL;

  /*
   *  All bison's output will be gathered in this temporary file
   *  and will be redirected to m4's stdin.
   */
  from_in_fd = open(tmp_file_name[0], O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR);
  if (from_in_fd < 0)
    error(EXIT_FAILURE, 0, _("opening of tmpfile failed"));
  if (dup2(from_in_fd, STDOUT_FILENO) < 0)
  {
    remove_tmp_file(from_in_fd, tmp_file_name[0]);
    error(EXIT_FAILURE, 0, _("redirecting bison's stdout to the temporary file failed"));
  }
  close(from_in_fd);


  fd[0] = STDOUT_FILENO;
  return pid;
}


/* A signal handler that just records that a signal has happened. */
static int child_interrupted;

static void
signal_catcher(int signo)
{
  child_interrupted++;
}


void
end_of_output_subpipe(pid_t pid, int fd[2])
{
  char *program;
  int from_out_fd = open(tmp_file_name[0], O_RDONLY, S_IRUSR);                   /* pipe from bison to m4. */
  int to_in_fd = open(tmp_file_name[1], O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR);  /* pipe from m4 to bison. */
  int status;
  void (*previous_handler)(int);


  program = strrchr(arguments[0], '/');
  if (program)
    program++;
  else
    program = arguments[0];

  /*
   *  Redirect bison's output to m4's stdin.
   */
  if (from_out_fd < 0)
    error(EXIT_FAILURE, 0, _("opening of tmpfile failed"));
  if (dup2(from_out_fd, STDIN_FILENO) < 0)
  {
    remove_tmp_file(from_out_fd, tmp_file_name[0]);
    error(EXIT_FAILURE, 0, _("redirecting m4's stdin from the temporary file failed"));
  }
  close(from_out_fd);

  /*
   *  All m4's output will be gathered in this temporary file
   *  and will be redirected to bison's stdin.
   */
  if (to_in_fd < 0)
  {
    remove_tmp_file(STDIN_FILENO, tmp_file_name[0]);
    error(EXIT_FAILURE, 0, _("opening of a temporary file failed"));
  }
  if (dup2(to_in_fd, STDOUT_FILENO) < 0)
  {
    remove_tmp_file(STDIN_FILENO, tmp_file_name[0]);
    remove_tmp_file(to_in_fd, tmp_file_name[1]);
    error(EXIT_FAILURE, 0, _("redirecting m4's stdout to a temporary file failed"));
  }
  close(to_in_fd);

  /*
   *  Run m4.
   */
  child_interrupted = 0;
  errno = 0;
  previous_handler = signal(SIGINT, signal_catcher);
  status = spawnvp(P_WAIT, program, arguments);
  signal(SIGINT, previous_handler);
  if (child_interrupted)
  {
    remove_tmp_file(STDIN_FILENO, tmp_file_name[0]);
    remove_tmp_file(STDOUT_FILENO, tmp_file_name[1]);
    error(EXIT_FAILURE, 0, _("subsidiary program '%s' interrupted"), program);
  }
  if (status)
  {
    remove_tmp_file(STDIN_FILENO, tmp_file_name[0]);
    remove_tmp_file(STDOUT_FILENO, tmp_file_name[1]);
    error(EXIT_FAILURE, 0, _(errno == ENOENT
			     ? "subsidiary program '%s' not found"
			     : status < 1
			     ? "subsidiary program '%s' failed"
			     : "subsidiary program '%s' failed (status=%i, errno=%i)"), program, status, errno);
  }


  /*
   *  Redirect m4's output to bison's stdin.
   */
  if (dup2(old_stdout, STDOUT_FILENO) < 0)
    error(EXIT_FAILURE, 0, "restore of bison's stdout failed");
  close(old_stdout);
  to_in_fd = open(tmp_file_name[1], O_RDONLY, S_IRUSR);  /* pipe from m4 to bison. */
  if (to_in_fd < 0)
  {
    remove_tmp_file(STDIN_FILENO, tmp_file_name[0]);
    error(EXIT_FAILURE, 0, _("opening of tmpfile failed"));
  }
  if (dup2(to_in_fd, STDIN_FILENO) < 0)
  {
    remove_tmp_file(STDIN_FILENO, tmp_file_name[0]);
    remove_tmp_file(to_in_fd, tmp_file_name[1]);
    error(EXIT_FAILURE, -1, "dup2");
    error(EXIT_FAILURE, 0, _("redirecting bison's stdin from the temporary file failed"));
  }
  close(to_in_fd);


  fd[1] = STDIN_FILENO;
}


/* Free resources, unlink temporary files and restore stdin and stdout. */

void
reap_subpipe(pid_t pid, char const *program)
{
  int argc;

  for (argc = 0; arguments[argc]; argc++)
    free(arguments[argc]);
  free(arguments);

  if (unlink(tmp_file_name[0]))
    error(EXIT_FAILURE, 0, _("removing of '%s' failed"), tmp_file_name[0]);
  if (unlink(tmp_file_name[1]))
    error(EXIT_FAILURE, 0, _("removing of '%s' failed"), tmp_file_name[1]);

  if (dup2(old_stdin, STDIN_FILENO) < 0)
    error(EXIT_FAILURE, 0, "restore of bison's stdin failed");
  close(old_stdin);
}
