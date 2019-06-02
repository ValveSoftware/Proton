/* Hook for making making file descriptor functions close(), ioctl() extensible.
   Copyright (C) 2009-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2009.

   This program is free software: you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include "fd-hook.h"

#include <stdlib.h>

/* Currently, this entire code is only needed for the handling of sockets
   on native Windows platforms.  */
#if WINDOWS_SOCKETS

/* The first and last link in the doubly linked list.
   Initially the list is empty.  */
static struct fd_hook anchor = { &anchor, &anchor, NULL, NULL };

int
execute_close_hooks (const struct fd_hook *remaining_list, gl_close_fn primary,
                     int fd)
{
  if (remaining_list == &anchor)
    /* End of list reached.  */
    return primary (fd);
  else
    return remaining_list->private_close_fn (remaining_list->private_next,
                                             primary, fd);
}

int
execute_all_close_hooks (gl_close_fn primary, int fd)
{
  return execute_close_hooks (anchor.private_next, primary, fd);
}

int
execute_ioctl_hooks (const struct fd_hook *remaining_list, gl_ioctl_fn primary,
                     int fd, int request, void *arg)
{
  if (remaining_list == &anchor)
    /* End of list reached.  */
    return primary (fd, request, arg);
  else
    return remaining_list->private_ioctl_fn (remaining_list->private_next,
                                             primary, fd, request, arg);
}

int
execute_all_ioctl_hooks (gl_ioctl_fn primary,
                         int fd, int request, void *arg)
{
  return execute_ioctl_hooks (anchor.private_next, primary, fd, request, arg);
}

void
register_fd_hook (close_hook_fn close_hook, ioctl_hook_fn ioctl_hook, struct fd_hook *link)
{
  if (close_hook == NULL)
    close_hook = execute_close_hooks;
  if (ioctl_hook == NULL)
    ioctl_hook = execute_ioctl_hooks;

  if (link->private_next == NULL && link->private_prev == NULL)
    {
      /* Add the link to the doubly linked list.  */
      link->private_next = anchor.private_next;
      link->private_prev = &anchor;
      link->private_close_fn = close_hook;
      link->private_ioctl_fn = ioctl_hook;
      anchor.private_next->private_prev = link;
      anchor.private_next = link;
    }
  else
    {
      /* The link is already in use.  */
      if (link->private_close_fn != close_hook
          || link->private_ioctl_fn != ioctl_hook)
        abort ();
    }
}

void
unregister_fd_hook (struct fd_hook *link)
{
  struct fd_hook *next = link->private_next;
  struct fd_hook *prev = link->private_prev;

  if (next != NULL && prev != NULL)
    {
      /* The link is in use.  Remove it from the doubly linked list.  */
      prev->private_next = next;
      next->private_prev = prev;
      /* Clear the link, to mark it unused.  */
      link->private_next = NULL;
      link->private_prev = NULL;
      link->private_close_fn = NULL;
      link->private_ioctl_fn = NULL;
    }
}

#endif
