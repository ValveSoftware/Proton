/* POSIX compatible signal blocking.
   Copyright (C) 2006-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2006.

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
#include <signal.h>

#include <errno.h>
#include <stdint.h>
#include <stdlib.h>

#if HAVE_MSVC_INVALID_PARAMETER_HANDLER
# include "msvc-inval.h"
#endif

/* We assume that a platform without POSIX signal blocking functions
   also does not have the POSIX sigaction() function, only the
   signal() function.  We also assume signal() has SysV semantics,
   where any handler is uninstalled prior to being invoked.  This is
   true for native Windows platforms.  */

/* We use raw signal(), but also provide a wrapper rpl_signal() so
   that applications can query or change a blocked signal.  */
#undef signal

/* Provide invalid signal numbers as fallbacks if the uncatchable
   signals are not defined.  */
#ifndef SIGKILL
# define SIGKILL (-1)
#endif
#ifndef SIGSTOP
# define SIGSTOP (-1)
#endif

/* On native Windows, as of 2008, the signal SIGABRT_COMPAT is an alias
   for the signal SIGABRT.  Only one signal handler is stored for both
   SIGABRT and SIGABRT_COMPAT.  SIGABRT_COMPAT is not a signal of its own.  */
#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
# undef SIGABRT_COMPAT
# define SIGABRT_COMPAT 6
#endif
#ifdef SIGABRT_COMPAT
# define SIGABRT_COMPAT_MASK (1U << SIGABRT_COMPAT)
#else
# define SIGABRT_COMPAT_MASK 0
#endif

typedef void (*handler_t) (int);

#if HAVE_MSVC_INVALID_PARAMETER_HANDLER
static handler_t
signal_nothrow (int sig, handler_t handler)
{
  handler_t result;

  TRY_MSVC_INVAL
    {
      result = signal (sig, handler);
    }
  CATCH_MSVC_INVAL
    {
      result = SIG_ERR;
      errno = EINVAL;
    }
  DONE_MSVC_INVAL;

  return result;
}
# define signal signal_nothrow
#endif

/* Handling of gnulib defined signals.  */

#if GNULIB_defined_SIGPIPE
static handler_t SIGPIPE_handler = SIG_DFL;
#endif

#if GNULIB_defined_SIGPIPE
static handler_t
ext_signal (int sig, handler_t handler)
{
  switch (sig)
    {
    case SIGPIPE:
      {
        handler_t old_handler = SIGPIPE_handler;
        SIGPIPE_handler = handler;
        return old_handler;
      }
    default: /* System defined signal */
      return signal (sig, handler);
    }
}
# undef signal
# define signal ext_signal
#endif

int
sigismember (const sigset_t *set, int sig)
{
  if (sig >= 0 && sig < NSIG)
    {
      #ifdef SIGABRT_COMPAT
      if (sig == SIGABRT_COMPAT)
        sig = SIGABRT;
      #endif

      return (*set >> sig) & 1;
    }
  else
    return 0;
}

int
sigemptyset (sigset_t *set)
{
  *set = 0;
  return 0;
}

int
sigaddset (sigset_t *set, int sig)
{
  if (sig >= 0 && sig < NSIG)
    {
      #ifdef SIGABRT_COMPAT
      if (sig == SIGABRT_COMPAT)
        sig = SIGABRT;
      #endif

      *set |= 1U << sig;
      return 0;
    }
  else
    {
      errno = EINVAL;
      return -1;
    }
}

int
sigdelset (sigset_t *set, int sig)
{
  if (sig >= 0 && sig < NSIG)
    {
      #ifdef SIGABRT_COMPAT
      if (sig == SIGABRT_COMPAT)
        sig = SIGABRT;
      #endif

      *set &= ~(1U << sig);
      return 0;
    }
  else
    {
      errno = EINVAL;
      return -1;
    }
}


int
sigfillset (sigset_t *set)
{
  *set = ((2U << (NSIG - 1)) - 1) & ~ SIGABRT_COMPAT_MASK;
  return 0;
}

/* Set of currently blocked signals.  */
static volatile sigset_t blocked_set /* = 0 */;

/* Set of currently blocked and pending signals.  */
static volatile sig_atomic_t pending_array[NSIG] /* = { 0 } */;

/* Signal handler that is installed for blocked signals.  */
static void
blocked_handler (int sig)
{
  /* Reinstall the handler, in case the signal occurs multiple times
     while blocked.  There is an inherent race where an asynchronous
     signal in between when the kernel uninstalled the handler and
     when we reinstall it will trigger the default handler; oh
     well.  */
  signal (sig, blocked_handler);
  if (sig >= 0 && sig < NSIG)
    pending_array[sig] = 1;
}

int
sigpending (sigset_t *set)
{
  sigset_t pending = 0;
  int sig;

  for (sig = 0; sig < NSIG; sig++)
    if (pending_array[sig])
      pending |= 1U << sig;
  *set = pending;
  return 0;
}

/* The previous signal handlers.
   Only the array elements corresponding to blocked signals are relevant.  */
static volatile handler_t old_handlers[NSIG];

int
sigprocmask (int operation, const sigset_t *set, sigset_t *old_set)
{
  if (old_set != NULL)
    *old_set = blocked_set;

  if (set != NULL)
    {
      sigset_t new_blocked_set;
      sigset_t to_unblock;
      sigset_t to_block;

      switch (operation)
        {
        case SIG_BLOCK:
          new_blocked_set = blocked_set | *set;
          break;
        case SIG_SETMASK:
          new_blocked_set = *set;
          break;
        case SIG_UNBLOCK:
          new_blocked_set = blocked_set & ~*set;
          break;
        default:
          errno = EINVAL;
          return -1;
        }
      to_unblock = blocked_set & ~new_blocked_set;
      to_block = new_blocked_set & ~blocked_set;

      if (to_block != 0)
        {
          int sig;

          for (sig = 0; sig < NSIG; sig++)
            if ((to_block >> sig) & 1)
              {
                pending_array[sig] = 0;
                if ((old_handlers[sig] = signal (sig, blocked_handler)) != SIG_ERR)
                  blocked_set |= 1U << sig;
              }
        }

      if (to_unblock != 0)
        {
          sig_atomic_t received[NSIG];
          int sig;

          for (sig = 0; sig < NSIG; sig++)
            if ((to_unblock >> sig) & 1)
              {
                if (signal (sig, old_handlers[sig]) != blocked_handler)
                  /* The application changed a signal handler while the signal
                     was blocked, bypassing our rpl_signal replacement.
                     We don't support this.  */
                  abort ();
                received[sig] = pending_array[sig];
                blocked_set &= ~(1U << sig);
                pending_array[sig] = 0;
              }
            else
              received[sig] = 0;

          for (sig = 0; sig < NSIG; sig++)
            if (received[sig])
              raise (sig);
        }
    }
  return 0;
}

/* Install the handler FUNC for signal SIG, and return the previous
   handler.  */
handler_t
rpl_signal (int sig, handler_t handler)
{
  /* We must provide a wrapper, so that a user can query what handler
     they installed even if that signal is currently blocked.  */
  if (sig >= 0 && sig < NSIG && sig != SIGKILL && sig != SIGSTOP
      && handler != SIG_ERR)
    {
      #ifdef SIGABRT_COMPAT
      if (sig == SIGABRT_COMPAT)
        sig = SIGABRT;
      #endif

      if (blocked_set & (1U << sig))
        {
          /* POSIX states that sigprocmask and signal are both
             async-signal-safe.  This is not true of our
             implementation - there is a slight data race where an
             asynchronous interrupt on signal A can occur after we
             install blocked_handler but before we have updated
             old_handlers for signal B, such that handler A can see
             stale information if it calls signal(B).  Oh well -
             signal handlers really shouldn't try to manipulate the
             installed handlers of unrelated signals.  */
          handler_t result = old_handlers[sig];
          old_handlers[sig] = handler;
          return result;
        }
      else
        return signal (sig, handler);
    }
  else
    {
      errno = EINVAL;
      return SIG_ERR;
    }
}

#if GNULIB_defined_SIGPIPE
/* Raise the signal SIGPIPE.  */
int
_gl_raise_SIGPIPE (void)
{
  if (blocked_set & (1U << SIGPIPE))
    pending_array[SIGPIPE] = 1;
  else
    {
      handler_t handler = SIGPIPE_handler;
      if (handler == SIG_DFL)
        exit (128 + SIGPIPE);
      else if (handler != SIG_IGN)
        (*handler) (SIGPIPE);
    }
  return 0;
}
#endif
