/* Close standard output and standard error, exiting with a diagnostic on error.

   Copyright (C) 1998-2002, 2004, 2006, 2008-2015 Free Software Foundation,
   Inc.

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

#include "closeout.h"

#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

#include "gettext.h"
#define _(msgid) gettext (msgid)

#include "close-stream.h"
#include "error.h"
#include "exitfail.h"
#include "quotearg.h"

static const char *file_name;

/* Set the file name to be reported in the event an error is detected
   by close_stdout.  */
void
close_stdout_set_file_name (const char *file)
{
  file_name = file;
}

static bool ignore_EPIPE /* = false */;

/* Specify the reaction to an EPIPE error during the closing of stdout:
     - If ignore = true, it shall be ignored.
     - If ignore = false, it shall evoke a diagnostic, along with a nonzero
       exit status.
   The default is ignore = false.

   This setting matters only if the SIGPIPE signal is ignored (i.e. its
   handler set to SIG_IGN) or blocked.  Only particular programs need to
   temporarily ignore SIGPIPE.  If SIGPIPE is ignored or blocked because
   it was ignored or blocked in the parent process when it created the
   child process, it usually is a bug in the parent process: It is bad
   practice to have SIGPIPE ignored or blocked while creating a child
   process.

   EPIPE occurs when writing to a pipe or socket that has no readers now,
   when SIGPIPE is ignored or blocked.

   The ignore = false setting is suitable for a scenario where it is normally
   guaranteed that the pipe writer terminates before the pipe reader.  In
   this case, an EPIPE is an indication of a premature termination of the
   pipe reader and should lead to a diagnostic and a nonzero exit status.

   The ignore = true setting is suitable for a scenario where you don't know
   ahead of time whether the pipe writer or the pipe reader will terminate
   first.  In this case, an EPIPE is an indication that the pipe writer can
   stop doing useless write() calls; this is what close_stdout does anyway.
   EPIPE is part of the normal pipe/socket shutdown protocol in this case,
   and should not lead to a diagnostic message.  */

void
close_stdout_set_ignore_EPIPE (bool ignore)
{
  ignore_EPIPE = ignore;
}

/* Close standard output.  On error, issue a diagnostic and _exit
   with status 'exit_failure'.

   Also close standard error.  On error, _exit with status 'exit_failure'.

   Since close_stdout is commonly registered via 'atexit', POSIX
   and the C standard both say that it should not call 'exit',
   because the behavior is undefined if 'exit' is called more than
   once.  So it calls '_exit' instead of 'exit'.  If close_stdout
   is registered via atexit before other functions are registered,
   the other functions can act before this _exit is invoked.

   Applications that use close_stdout should flush any streams
   other than stdout and stderr before exiting, since the call to
   _exit will bypass other buffer flushing.  Applications should
   be flushing and closing other streams anyway, to check for I/O
   errors.  Also, applications should not use tmpfile, since _exit
   can bypass the removal of these files.

   It's important to detect such failures and exit nonzero because many
   tools (most notably 'make' and other build-management systems) depend
   on being able to detect failure in other tools via their exit status.  */

void
close_stdout (void)
{
  if (close_stream (stdout) != 0
      && !(ignore_EPIPE && errno == EPIPE))
    {
      char const *write_error = _("write error");
      if (file_name)
        error (0, errno, "%s: %s", quotearg_colon (file_name),
               write_error);
      else
        error (0, errno, "%s", write_error);

      _exit (exit_failure);
    }

   if (close_stream (stderr) != 0)
     _exit (exit_failure);
}
