/* Copyright (C) 2000, 2009-2015 Free Software Foundation, Inc.
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

#include <errno.h>
#include <unistd.h>

#if !_LIBC
# define __sysconf(open_max) getdtablesize ()
#endif

#if !HAVE_WORKING_POSIX_SPAWN
# include "spawn_int.h"
#endif

/* Add an action to FILE-ACTIONS which tells the implementation to call
   'dup2' for the given file descriptors during the 'spawn' call.  */
int
posix_spawn_file_actions_adddup2 (posix_spawn_file_actions_t *file_actions,
                                  int fd, int newfd)
#undef posix_spawn_file_actions_adddup2
{
  int maxfd = __sysconf (_SC_OPEN_MAX);

  /* Test for the validity of the file descriptor.  */
  if (fd < 0 || newfd < 0 || fd >= maxfd || newfd >= maxfd)
    return EBADF;

#if HAVE_WORKING_POSIX_SPAWN
  return posix_spawn_file_actions_adddup2 (file_actions, fd, newfd);
#else
  /* Allocate more memory if needed.  */
  if (file_actions->_used == file_actions->_allocated
      && __posix_spawn_file_actions_realloc (file_actions) != 0)
    /* This can only mean we ran out of memory.  */
    return ENOMEM;

  {
    struct __spawn_action *rec;

    /* Add the new value.  */
    rec = &file_actions->_actions[file_actions->_used];
    rec->tag = spawn_do_dup2;
    rec->action.dup2_action.fd = fd;
    rec->action.dup2_action.newfd = newfd;

    /* Account for the new entry.  */
    ++file_actions->_used;

    return 0;
  }
#endif
}
