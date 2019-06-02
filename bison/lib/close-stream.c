/* Close a stream, with nicer error checking than fclose's.

   Copyright (C) 1998-2002, 2004, 2006-2015 Free Software Foundation, Inc.

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

#include "close-stream.h"

#include <errno.h>
#include <stdbool.h>

#include "fpending.h"

#if USE_UNLOCKED_IO
# include "unlocked-io.h"
#endif

/* Close STREAM.  Return 0 if successful, EOF (setting errno)
   otherwise.  A failure might set errno to 0 if the error number
   cannot be determined.

   A failure with errno set to EPIPE may or may not indicate an error
   situation worth signaling to the user.  See the documentation of the
   close_stdout_set_ignore_EPIPE function for details.

   If a program writes *anything* to STREAM, that program should close
   STREAM and make sure that it succeeds before exiting.  Otherwise,
   suppose that you go to the extreme of checking the return status
   of every function that does an explicit write to STREAM.  The last
   printf can succeed in writing to the internal stream buffer, and yet
   the fclose(STREAM) could still fail (due e.g., to a disk full error)
   when it tries to write out that buffered data.  Thus, you would be
   left with an incomplete output file and the offending program would
   exit successfully.  Even calling fflush is not always sufficient,
   since some file systems (NFS and CODA) buffer written/flushed data
   until an actual close call.

   Besides, it's wasteful to check the return value from every call
   that writes to STREAM -- just let the internal stream state record
   the failure.  That's what the ferror test is checking below.  */

int
close_stream (FILE *stream)
{
  const bool some_pending = (__fpending (stream) != 0);
  const bool prev_fail = (ferror (stream) != 0);
  const bool fclose_fail = (fclose (stream) != 0);

  /* Return an error indication if there was a previous failure or if
     fclose failed, with one exception: ignore an fclose failure if
     there was no previous error, no data remains to be flushed, and
     fclose failed with EBADF.  That can happen when a program like cp
     is invoked like this 'cp a b >&-' (i.e., with standard output
     closed) and doesn't generate any output (hence no previous error
     and nothing to be flushed).  */

  if (prev_fail || (fclose_fail && (some_pending || errno != EBADF)))
    {
      if (! fclose_fail)
        errno = 0;
      return EOF;
    }

  return 0;
}
