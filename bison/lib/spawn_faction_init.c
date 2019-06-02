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
#include <stdlib.h>
#include <string.h>

#include "spawn_int.h"


/* Function used to increase the size of the allocated array.  This
   function is called from the 'add'-functions.  */
int
__posix_spawn_file_actions_realloc (posix_spawn_file_actions_t *file_actions)
{
  int newalloc = file_actions->_allocated + 8;
  void *newmem = realloc (file_actions->_actions,
                          newalloc * sizeof (struct __spawn_action));

  if (newmem == NULL)
    /* Not enough memory.  */
    return ENOMEM;

  file_actions->_actions = (struct __spawn_action *) newmem;
  file_actions->_allocated = newalloc;

  return 0;
}


/* Initialize data structure for file attribute for 'spawn' call.  */
int
posix_spawn_file_actions_init (posix_spawn_file_actions_t *file_actions)
{
  /* Simply clear all the elements.  */
  memset (file_actions, '\0', sizeof (*file_actions));
  return 0;
}
