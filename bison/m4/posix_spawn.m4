# posix_spawn.m4 serial 11
dnl Copyright (C) 2008-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Tests whether the entire posix_spawn facility is available.
AC_DEFUN([gl_POSIX_SPAWN],
[
  AC_REQUIRE([gl_POSIX_SPAWN_BODY])
])

AC_DEFUN([gl_POSIX_SPAWN_BODY],
[
  AC_REQUIRE([gl_SPAWN_H_DEFAULTS])
  AC_REQUIRE([gl_HAVE_POSIX_SPAWN])
  dnl Assume that when the main function exists, all the others,
  dnl except posix_spawnattr_{get,set}sched*, are available as well.
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnp])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawn_file_actions_init])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawn_file_actions_addclose])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawn_file_actions_adddup2])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawn_file_actions_addopen])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawn_file_actions_destroy])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_init])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_getflags])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_setflags])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_getpgroup])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_setpgroup])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_getsigdefault])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_setsigdefault])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_getsigmask])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_setsigmask])
  dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_destroy])
  if test $ac_cv_func_posix_spawn = yes; then
    gl_POSIX_SPAWN_WORKS
    case "$gl_cv_func_posix_spawn_works" in
      *yes)
        AC_DEFINE([HAVE_WORKING_POSIX_SPAWN], [1],
          [Define if you have the posix_spawn and posix_spawnp functions and
           they work.])
        dnl Assume that these functions are available if POSIX_SPAWN_SETSCHEDULER
        dnl evaluates to nonzero.
        dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_getschedpolicy])
        dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_setschedpolicy])
        AC_CACHE_CHECK([whether posix_spawnattr_setschedpolicy is supported],
          [gl_cv_func_spawnattr_setschedpolicy],
          [AC_EGREP_CPP([POSIX scheduling supported], [
#include <spawn.h>
#if POSIX_SPAWN_SETSCHEDULER
 POSIX scheduling supported
#endif
],
             [gl_cv_func_spawnattr_setschedpolicy=yes],
             [gl_cv_func_spawnattr_setschedpolicy=no])
          ])
        dnl Assume that these functions are available if POSIX_SPAWN_SETSCHEDPARAM
        dnl evaluates to nonzero.
        dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_getschedparam])
        dnl AC_CHECK_FUNCS_ONCE([posix_spawnattr_setschedparam])
        AC_CACHE_CHECK([whether posix_spawnattr_setschedparam is supported],
          [gl_cv_func_spawnattr_setschedparam],
          [AC_EGREP_CPP([POSIX scheduling supported], [
#include <spawn.h>
#if POSIX_SPAWN_SETSCHEDPARAM
 POSIX scheduling supported
#endif
],
             [gl_cv_func_spawnattr_setschedparam=yes],
             [gl_cv_func_spawnattr_setschedparam=no])
          ])
        ;;
      *) REPLACE_POSIX_SPAWN=1 ;;
    esac
  fi
])

dnl Test whether posix_spawn actually works.
dnl posix_spawn on AIX 5.3..6.1 has two bugs:
dnl 1) When it fails to execute the program, the child process exits with
dnl    exit() rather than _exit(), which causes the stdio buffers to be
dnl    flushed. Reported by Rainer Tammer.
dnl 2) The posix_spawn_file_actions_addopen function does not support file
dnl    names that contain a '*'.
dnl posix_spawn on AIX 5.3..6.1 has also a third bug: It does not work
dnl when POSIX threads are used. But we don't test against this bug here.
AC_DEFUN([gl_POSIX_SPAWN_WORKS],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CACHE_CHECK([whether posix_spawn works], [gl_cv_func_posix_spawn_works],
    [if test $cross_compiling = no; then
       AC_LINK_IFELSE([AC_LANG_SOURCE([[
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <spawn.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

#ifndef STDIN_FILENO
# define STDIN_FILENO 0
#endif
#ifndef STDOUT_FILENO
# define STDOUT_FILENO 1
#endif
#ifndef STDERR_FILENO
# define STDERR_FILENO 2
#endif

#ifndef WTERMSIG
# define WTERMSIG(x) ((x) & 0x7f)
#endif
#ifndef WIFEXITED
# define WIFEXITED(x) (WTERMSIG (x) == 0)
#endif
#ifndef WEXITSTATUS
# define WEXITSTATUS(x) (((x) >> 8) & 0xff)
#endif

#define CHILD_PROGRAM_FILENAME "/non/exist/ent"

static int
fd_safer (int fd)
{
  if (0 <= fd && fd <= 2)
    {
      int f = fd_safer (dup (fd));
      int e = errno;
      close (fd);
      errno = e;
      fd = f;
    }

  return fd;
}

int
main ()
{
  char *argv[2] = { CHILD_PROGRAM_FILENAME, NULL };
  int ofd[2];
  sigset_t blocked_signals;
  sigset_t fatal_signal_set;
  posix_spawn_file_actions_t actions;
  bool actions_allocated;
  posix_spawnattr_t attrs;
  bool attrs_allocated;
  int err;
  pid_t child;
  int status;
  int exitstatus;

  setvbuf (stdout, NULL, _IOFBF, 0);
  puts ("This should be seen only once.");
  if (pipe (ofd) < 0 || (ofd[1] = fd_safer (ofd[1])) < 0)
    {
      perror ("cannot create pipe");
      exit (1);
    }
  sigprocmask (SIG_SETMASK, NULL, &blocked_signals);
  sigemptyset (&fatal_signal_set);
  sigaddset (&fatal_signal_set, SIGINT);
  sigaddset (&fatal_signal_set, SIGTERM);
  sigaddset (&fatal_signal_set, SIGHUP);
  sigaddset (&fatal_signal_set, SIGPIPE);
  sigprocmask (SIG_BLOCK, &fatal_signal_set, NULL);
  actions_allocated = false;
  attrs_allocated = false;
  if ((err = posix_spawn_file_actions_init (&actions)) != 0
      || (actions_allocated = true,
          (err = posix_spawn_file_actions_adddup2 (&actions, ofd[0], STDIN_FILENO)) != 0
          || (err = posix_spawn_file_actions_addclose (&actions, ofd[0])) != 0
          || (err = posix_spawn_file_actions_addclose (&actions, ofd[1])) != 0
          || (err = posix_spawnattr_init (&attrs)) != 0
          || (attrs_allocated = true,
              (err = posix_spawnattr_setsigmask (&attrs, &blocked_signals)) != 0
              || (err = posix_spawnattr_setflags (&attrs, POSIX_SPAWN_SETSIGMASK)) != 0)
          || (err = posix_spawnp (&child, CHILD_PROGRAM_FILENAME, &actions, &attrs, argv, environ)) != 0))
    {
      if (actions_allocated)
        posix_spawn_file_actions_destroy (&actions);
      if (attrs_allocated)
        posix_spawnattr_destroy (&attrs);
      sigprocmask (SIG_UNBLOCK, &fatal_signal_set, NULL);
      if (err == ENOENT)
        return 0;
      else
        {
          errno = err;
          perror ("subprocess failed");
          exit (1);
        }
    }
  posix_spawn_file_actions_destroy (&actions);
  posix_spawnattr_destroy (&attrs);
  sigprocmask (SIG_UNBLOCK, &fatal_signal_set, NULL);
  close (ofd[0]);
  close (ofd[1]);
  status = 0;
  while (waitpid (child, &status, 0) != child)
    ;
  if (!WIFEXITED (status))
    {
      fprintf (stderr, "subprocess terminated with unexpected wait status %d\n", status);
      exit (1);
    }
  exitstatus = WEXITSTATUS (status);
  if (exitstatus != 127)
    {
      fprintf (stderr, "subprocess terminated with unexpected exit status %d\n", exitstatus);
      exit (1);
    }
  return 0;
}
]])],
         [if test -s conftest$ac_exeext \
             && ./conftest$ac_exeext > conftest.out \
             && echo 'This should be seen only once.' > conftest.ok \
             && cmp conftest.out conftest.ok > /dev/null; then
            gl_cv_func_posix_spawn_works=yes
          else
            gl_cv_func_posix_spawn_works=no
          fi],
         [gl_cv_func_posix_spawn_works=no])
       if test $gl_cv_func_posix_spawn_works = yes; then
         AC_RUN_IFELSE([AC_LANG_SOURCE([[
/* Test whether posix_spawn_file_actions_addopen supports filename arguments
   that contain special characters such as '*'.  */

#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <spawn.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

#ifndef STDIN_FILENO
# define STDIN_FILENO 0
#endif
#ifndef STDOUT_FILENO
# define STDOUT_FILENO 1
#endif
#ifndef STDERR_FILENO
# define STDERR_FILENO 2
#endif

#ifndef WTERMSIG
# define WTERMSIG(x) ((x) & 0x7f)
#endif
#ifndef WIFEXITED
# define WIFEXITED(x) (WTERMSIG (x) == 0)
#endif
#ifndef WEXITSTATUS
# define WEXITSTATUS(x) (((x) >> 8) & 0xff)
#endif

#define CHILD_PROGRAM_FILENAME "conftest"
#define DATA_FILENAME "conftest%=*#?"

static int
parent_main (void)
{
  FILE *fp;
  char *argv[3] = { CHILD_PROGRAM_FILENAME, "-child", NULL };
  posix_spawn_file_actions_t actions;
  bool actions_allocated;
  int err;
  pid_t child;
  int status;
  int exitstatus;

  /* Create a data file with specific contents.  */
  fp = fopen (DATA_FILENAME, "wb");
  if (fp == NULL)
    {
      perror ("cannot create data file");
      return 1;
    }
  fwrite ("Halle Potta", 1, 11, fp);
  if (fflush (fp) || fclose (fp))
    {
      perror ("cannot prepare data file");
      return 2;
    }

  /* Avoid reading from our stdin, as it could block.  */
  freopen ("/dev/null", "rb", stdin);

  /* Test whether posix_spawn_file_actions_addopen with this file name
     actually works, but spawning a child that reads from this file.  */
  actions_allocated = false;
  if ((err = posix_spawn_file_actions_init (&actions)) != 0
      || (actions_allocated = true,
          (err = posix_spawn_file_actions_addopen (&actions, STDIN_FILENO, DATA_FILENAME, O_RDONLY, 0600)) != 0
          || (err = posix_spawn (&child, CHILD_PROGRAM_FILENAME, &actions, NULL, argv, environ)) != 0))
    {
      if (actions_allocated)
        posix_spawn_file_actions_destroy (&actions);
      errno = err;
      perror ("subprocess failed");
      return 3;
    }
  posix_spawn_file_actions_destroy (&actions);
  status = 0;
  while (waitpid (child, &status, 0) != child)
    ;
  if (!WIFEXITED (status))
    {
      fprintf (stderr, "subprocess terminated with unexpected wait status %d\n", status);
      return 4;
    }
  exitstatus = WEXITSTATUS (status);
  if (exitstatus != 0)
    {
      fprintf (stderr, "subprocess terminated with unexpected exit status %d\n", exitstatus);
      return 5;
    }
  return 0;
}

static int
child_main (void)
{
  char buf[1024];

  /* See if reading from STDIN_FILENO yields the expected contents.  */
  if (fread (buf, 1, sizeof (buf), stdin) == 11
      && memcmp (buf, "Halle Potta", 11) == 0)
    return 0;
  else
    return 8;
}

static void
cleanup_then_die (int sig)
{
  /* Clean up data file.  */
  unlink (DATA_FILENAME);

  /* Re-raise the signal and die from it.  */
  signal (sig, SIG_DFL);
  raise (sig);
}

int
main (int argc, char *argv[])
{
  int exitstatus;

  if (!(argc > 1 && strcmp (argv[1], "-child") == 0))
    {
      /* This is the parent process.  */
      signal (SIGINT, cleanup_then_die);
      signal (SIGTERM, cleanup_then_die);
      #ifdef SIGHUP
      signal (SIGHUP, cleanup_then_die);
      #endif

      exitstatus = parent_main ();
    }
  else
    {
      /* This is the child process.  */

      exitstatus = child_main ();
    }
  unlink (DATA_FILENAME);
  return exitstatus;
}
]])],
           [],
           [gl_cv_func_posix_spawn_works=no])
       fi
     else
       case "$host_os" in
         aix*) gl_cv_func_posix_spawn_works="guessing no";;
         *)    gl_cv_func_posix_spawn_works="guessing yes";;
       esac
     fi
    ])
])

# Prerequisites of lib/spawni.c.
AC_DEFUN([gl_PREREQ_POSIX_SPAWN_INTERNAL],
[
  AC_CHECK_HEADERS([paths.h])
  AC_CHECK_FUNCS([confstr sched_setparam sched_setscheduler setegid seteuid vfork])
])

AC_DEFUN([gl_FUNC_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE],
[
  AC_REQUIRE([gl_SPAWN_H_DEFAULTS])
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  gl_POSIX_SPAWN
  if test $REPLACE_POSIX_SPAWN = 1; then
    REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE=1
  else
    dnl On Solaris 11 2011-11, posix_spawn_file_actions_addclose succeeds even
    dnl if the fd argument is out of range.
    AC_CACHE_CHECK([whether posix_spawn_file_actions_addclose works],
      [gl_cv_func_posix_spawn_file_actions_addclose_works],
      [AC_RUN_IFELSE(
         [AC_LANG_SOURCE([[
#include <spawn.h>
int main ()
{
  posix_spawn_file_actions_t actions;
  if (posix_spawn_file_actions_init (&actions) != 0)
    return 1;
  if (posix_spawn_file_actions_addclose (&actions, 10000000) == 0)
    return 2;
  return 0;
}]])],
         [gl_cv_func_posix_spawn_file_actions_addclose_works=yes],
         [gl_cv_func_posix_spawn_file_actions_addclose_works=no],
         [# Guess no on Solaris, yes otherwise.
          case "$host_os" in
            solaris*) gl_cv_func_posix_spawn_file_actions_addclose_works="guessing no";;
            *)        gl_cv_func_posix_spawn_file_actions_addclose_works="guessing yes";;
          esac
         ])
      ])
    case "$gl_cv_func_posix_spawn_file_actions_addclose_works" in
      *yes) ;;
      *) REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE=1 ;;
    esac
  fi
])

AC_DEFUN([gl_FUNC_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2],
[
  AC_REQUIRE([gl_SPAWN_H_DEFAULTS])
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  gl_POSIX_SPAWN
  if test $REPLACE_POSIX_SPAWN = 1; then
    REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2=1
  else
    dnl On Solaris 11 2011-11, posix_spawn_file_actions_adddup2 succeeds even
    dnl if the fd argument is out of range.
    AC_CACHE_CHECK([whether posix_spawn_file_actions_adddup2 works],
      [gl_cv_func_posix_spawn_file_actions_adddup2_works],
      [AC_RUN_IFELSE(
         [AC_LANG_SOURCE([[
#include <spawn.h>
int main ()
{
  posix_spawn_file_actions_t actions;
  if (posix_spawn_file_actions_init (&actions) != 0)
    return 1;
  if (posix_spawn_file_actions_adddup2 (&actions, 10000000, 2) == 0)
    return 2;
  return 0;
}]])],
         [gl_cv_func_posix_spawn_file_actions_adddup2_works=yes],
         [gl_cv_func_posix_spawn_file_actions_adddup2_works=no],
         [# Guess no on Solaris, yes otherwise.
          case "$host_os" in
            solaris*) gl_cv_func_posix_spawn_file_actions_adddup2_works="guessing no";;
            *)        gl_cv_func_posix_spawn_file_actions_adddup2_works="guessing yes";;
          esac
         ])
      ])
    case "$gl_cv_func_posix_spawn_file_actions_adddup2_works" in
      *yes) ;;
      *) REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2=1 ;;
    esac
  fi
])

AC_DEFUN([gl_FUNC_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN],
[
  AC_REQUIRE([gl_SPAWN_H_DEFAULTS])
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  gl_POSIX_SPAWN
  if test $REPLACE_POSIX_SPAWN = 1; then
    REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN=1
  else
    dnl On Solaris 11 2011-11, posix_spawn_file_actions_addopen succeeds even
    dnl if the fd argument is out of range.
    AC_CACHE_CHECK([whether posix_spawn_file_actions_addopen works],
      [gl_cv_func_posix_spawn_file_actions_addopen_works],
      [AC_RUN_IFELSE(
         [AC_LANG_SOURCE([[
#include <spawn.h>
#include <fcntl.h>
int main ()
{
  posix_spawn_file_actions_t actions;
  if (posix_spawn_file_actions_init (&actions) != 0)
    return 1;
  if (posix_spawn_file_actions_addopen (&actions, 10000000, "foo", 0, O_RDONLY)
      == 0)
    return 2;
  return 0;
}]])],
         [gl_cv_func_posix_spawn_file_actions_addopen_works=yes],
         [gl_cv_func_posix_spawn_file_actions_addopen_works=no],
         [# Guess no on Solaris, yes otherwise.
          case "$host_os" in
            solaris*) gl_cv_func_posix_spawn_file_actions_addopen_works="guessing no";;
            *)        gl_cv_func_posix_spawn_file_actions_addopen_works="guessing yes";;
          esac
         ])
      ])
    case "$gl_cv_func_posix_spawn_file_actions_addopen_works" in
      *yes) ;;
      *) REPLACE_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN=1 ;;
    esac
  fi
])
