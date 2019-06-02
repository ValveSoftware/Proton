/* Hook for making making file descriptor functions close(), ioctl() extensible.
   Copyright (C) 2009-2015 Free Software Foundation, Inc.

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


#ifndef FD_HOOK_H
#define FD_HOOK_H

#ifdef __cplusplus
extern "C" {
#endif


/* Currently, this entire code is only needed for the handling of sockets
   on native Windows platforms.  */
#if WINDOWS_SOCKETS


/* Type of function that closes FD.  */
typedef int (*gl_close_fn) (int fd);

/* Type of function that applies a control request to FD.  */
typedef int (*gl_ioctl_fn) (int fd, int request, void *arg);

/* An element of the list of file descriptor hooks.
   In CLOS (Common Lisp Object System) speak, it consists of an "around"
   method for the close() function and an "around" method for the ioctl()
   function.
   The fields of this structure are considered private.  */
struct fd_hook
{
  /* Doubly linked list.  */
  struct fd_hook *private_next;
  struct fd_hook *private_prev;
  /* Function that treats the types of FD that it knows about and calls
     execute_close_hooks (REMAINING_LIST, PRIMARY, FD) as a fallback.  */
  int (*private_close_fn) (const struct fd_hook *remaining_list,
                           gl_close_fn primary,
                           int fd);
  /* Function that treats the types of FD that it knows about and calls
     execute_ioctl_hooks (REMAINING_LIST, PRIMARY, FD, REQUEST, ARG) as a
     fallback.  */
  int (*private_ioctl_fn) (const struct fd_hook *remaining_list,
                           gl_ioctl_fn primary,
                           int fd, int request, void *arg);
};

/* This type of function closes FD, applying special knowledge for the FD
   types it knows about, and calls
   execute_close_hooks (REMAINING_LIST, PRIMARY, FD)
   for the other FD types.
   In CLOS speak, REMAINING_LIST is the remaining list of "around" methods,
   and PRIMARY is the "primary" method for close().  */
typedef int (*close_hook_fn) (const struct fd_hook *remaining_list,
                              gl_close_fn primary,
                              int fd);

/* Execute the close hooks in REMAINING_LIST, with PRIMARY as "primary" method.
   Return 0 or -1, like close() would do.  */
extern int execute_close_hooks (const struct fd_hook *remaining_list,
                                gl_close_fn primary,
                                int fd);

/* Execute all close hooks, with PRIMARY as "primary" method.
   Return 0 or -1, like close() would do.  */
extern int execute_all_close_hooks (gl_close_fn primary, int fd);

/* This type of function applies a control request to FD, applying special
   knowledge for the FD types it knows about, and calls
   execute_ioctl_hooks (REMAINING_LIST, PRIMARY, FD, REQUEST, ARG)
   for the other FD types.
   In CLOS speak, REMAINING_LIST is the remaining list of "around" methods,
   and PRIMARY is the "primary" method for ioctl().  */
typedef int (*ioctl_hook_fn) (const struct fd_hook *remaining_list,
                              gl_ioctl_fn primary,
                              int fd, int request, void *arg);

/* Execute the ioctl hooks in REMAINING_LIST, with PRIMARY as "primary" method.
   Return 0 or -1, like ioctl() would do.  */
extern int execute_ioctl_hooks (const struct fd_hook *remaining_list,
                                gl_ioctl_fn primary,
                                int fd, int request, void *arg);

/* Execute all ioctl hooks, with PRIMARY as "primary" method.
   Return 0 or -1, like ioctl() would do.  */
extern int execute_all_ioctl_hooks (gl_ioctl_fn primary,
                                    int fd, int request, void *arg);

/* Add a function pair to the list of file descriptor hooks.
   CLOSE_HOOK and IOCTL_HOOK may be NULL, indicating no change.
   The LINK variable points to a piece of memory which is guaranteed to be
   accessible until the corresponding call to unregister_fd_hook.  */
extern void register_fd_hook (close_hook_fn close_hook, ioctl_hook_fn ioctl_hook,
                              struct fd_hook *link);

/* Removes a hook from the list of file descriptor hooks.  */
extern void unregister_fd_hook (struct fd_hook *link);


#endif


#ifdef __cplusplus
}
#endif

#endif /* FD_HOOK_H */
