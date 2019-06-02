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

#include "spawn_int.h"

/* Spawn a new process executing FILE with the attributes describes in *ATTRP.
   Before running the process perform the actions described in FILE-ACTIONS. */
int
posix_spawnp (pid_t *pid, const char *file,
              const posix_spawn_file_actions_t *file_actions,
              const posix_spawnattr_t *attrp, char *const argv[],
              char *const envp[])
{
  return __spawni (pid, file, file_actions, attrp, argv, envp, 1);
}
