/* Auxiliary functions for the creation of subprocesses.  Native Windows API.
   Copyright (C) 2001, 2003-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2003.

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

/* Get declarations of the native Windows API functions.  */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

/* Get _open_osfhandle().  */
#include <io.h>

#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

/* Get _get_osfhandle().  */
#include "msvc-nothrow.h"

#include "cloexec.h"
#include "xalloc.h"

/* Duplicates a file handle, making the copy uninheritable.
   Returns -1 for a file handle that is equivalent to closed.  */
static int
dup_noinherit (int fd)
{
  fd = dup_cloexec (fd);
  if (fd < 0 && errno == EMFILE)
    error (EXIT_FAILURE, errno, _("_open_osfhandle failed"));

  return fd;
}

/* Returns a file descriptor equivalent to FD, except that the resulting file
   descriptor is none of STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO.
   FD must be open and non-inheritable.  The result will be non-inheritable as
   well.
   If FD < 0, FD itself is returned.  */
static int
fd_safer_noinherit (int fd)
{
  if (STDIN_FILENO <= fd && fd <= STDERR_FILENO)
    {
      /* The recursion depth is at most 3.  */
      int nfd = fd_safer_noinherit (dup_noinherit (fd));
      int saved_errno = errno;
      close (fd);
      errno = saved_errno;
      return nfd;
    }
  return fd;
}

/* Duplicates a file handle, making the copy uninheritable and ensuring the
   result is none of STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO.
   Returns -1 for a file handle that is equivalent to closed.  */
static int
dup_safer_noinherit (int fd)
{
  return fd_safer_noinherit (dup_noinherit (fd));
}

/* Undoes the effect of TEMPFD = dup_safer_noinherit (ORIGFD);  */
static void
undup_safer_noinherit (int tempfd, int origfd)
{
  if (tempfd >= 0)
    {
      if (dup2 (tempfd, origfd) < 0)
        error (EXIT_FAILURE, errno, _("cannot restore fd %d: dup2 failed"),
               origfd);
      close (tempfd);
    }
  else
    {
      /* origfd was closed or open to no handle at all.  Set it to a closed
         state.  This is (nearly) equivalent to the original state.  */
      close (origfd);
    }
}

/* Prepares an argument vector before calling spawn().
   Note that spawn() does not by itself call the command interpreter
     (getenv ("COMSPEC") != NULL ? getenv ("COMSPEC") :
      ({ OSVERSIONINFO v; v.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
         GetVersionEx(&v);
         v.dwPlatformId == VER_PLATFORM_WIN32_NT;
      }) ? "cmd.exe" : "command.com").
   Instead it simply concatenates the arguments, separated by ' ', and calls
   CreateProcess().  We must quote the arguments since Windows CreateProcess()
   interprets characters like ' ', '\t', '\\', '"' (but not '<' and '>') in a
   special way:
   - Space and tab are interpreted as delimiters. They are not treated as
     delimiters if they are surrounded by double quotes: "...".
   - Unescaped double quotes are removed from the input. Their only effect is
     that within double quotes, space and tab are treated like normal
     characters.
   - Backslashes not followed by double quotes are not special.
   - But 2*n+1 backslashes followed by a double quote become
     n backslashes followed by a double quote (n >= 0):
       \" -> "
       \\\" -> \"
       \\\\\" -> \\"
   - '*', '?' characters may get expanded through wildcard expansion in the
     callee: By default, in the callee, the initialization code before main()
     takes the result of GetCommandLine(), wildcard-expands it, and passes it
     to main(). The exceptions to this rule are:
       - programs that inspect GetCommandLine() and ignore argv,
       - mingw programs that have a global variable 'int _CRT_glob = 0;',
       - Cygwin programs, when invoked from a Cygwin program.
 */
#define SHELL_SPECIAL_CHARS "\"\\ \001\002\003\004\005\006\007\010\011\012\013\014\015\016\017\020\021\022\023\024\025\026\027\030\031\032\033\034\035\036\037*?"
#define SHELL_SPACE_CHARS " \001\002\003\004\005\006\007\010\011\012\013\014\015\016\017\020\021\022\023\024\025\026\027\030\031\032\033\034\035\036\037"
static char **
prepare_spawn (char **argv)
{
  size_t argc;
  char **new_argv;
  size_t i;

  /* Count number of arguments.  */
  for (argc = 0; argv[argc] != NULL; argc++)
    ;

  /* Allocate new argument vector.  */
  new_argv = XNMALLOC (1 + argc + 1, char *);

  /* Add an element upfront that can be used when argv[0] turns out to be a
     script, not a program.
     On Unix, this would be "/bin/sh". On native Windows, "sh" is actually
     "sh.exe".  We have to omit the directory part and rely on the search in
     PATH, because the mingw "mount points" are not visible inside Windows
     CreateProcess().  */
  *new_argv++ = "sh.exe";

  /* Put quoted arguments into the new argument vector.  */
  for (i = 0; i < argc; i++)
    {
      const char *string = argv[i];

      if (string[0] == '\0')
        new_argv[i] = xstrdup ("\"\"");
      else if (strpbrk (string, SHELL_SPECIAL_CHARS) != NULL)
        {
          bool quote_around = (strpbrk (string, SHELL_SPACE_CHARS) != NULL);
          size_t length;
          unsigned int backslashes;
          const char *s;
          char *quoted_string;
          char *p;

          length = 0;
          backslashes = 0;
          if (quote_around)
            length++;
          for (s = string; *s != '\0'; s++)
            {
              char c = *s;
              if (c == '"')
                length += backslashes + 1;
              length++;
              if (c == '\\')
                backslashes++;
              else
                backslashes = 0;
            }
          if (quote_around)
            length += backslashes + 1;

          quoted_string = (char *) xmalloc (length + 1);

          p = quoted_string;
          backslashes = 0;
          if (quote_around)
            *p++ = '"';
          for (s = string; *s != '\0'; s++)
            {
              char c = *s;
              if (c == '"')
                {
                  unsigned int j;
                  for (j = backslashes + 1; j > 0; j--)
                    *p++ = '\\';
                }
              *p++ = c;
              if (c == '\\')
                backslashes++;
              else
                backslashes = 0;
            }
          if (quote_around)
            {
              unsigned int j;
              for (j = backslashes; j > 0; j--)
                *p++ = '\\';
              *p++ = '"';
            }
          *p = '\0';

          new_argv[i] = quoted_string;
        }
      else
        new_argv[i] = (char *) string;
    }
  new_argv[argc] = NULL;

  return new_argv;
}
