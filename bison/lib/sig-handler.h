/* Convenience declarations when working with <signal.h>.

   Copyright (C) 2008-2015 Free Software Foundation, Inc.

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

#ifndef _GL_SIG_HANDLER_H
#define _GL_SIG_HANDLER_H

#include <signal.h>

#ifndef _GL_INLINE_HEADER_BEGIN
 #error "Please include config.h first."
#endif
_GL_INLINE_HEADER_BEGIN
#ifndef SIG_HANDLER_INLINE
# define SIG_HANDLER_INLINE _GL_INLINE
#endif

/* Convenience type when working with signal handlers.  */
typedef void (*sa_handler_t) (int);

/* Return the handler of a signal, as a sa_handler_t value regardless
   of its true type.  The resulting function can be compared to
   special values like SIG_IGN but it is not portable to call it.  */
SIG_HANDLER_INLINE sa_handler_t _GL_ATTRIBUTE_PURE
get_handler (struct sigaction const *a)
{
#ifdef SA_SIGINFO
  /* POSIX says that special values like SIG_IGN can only occur when
     action.sa_flags does not contain SA_SIGINFO.  But in Linux 2.4,
     for example, sa_sigaction and sa_handler are aliases and a signal
     is ignored if sa_sigaction (after casting) equals SIG_IGN.  So
     use (and cast) sa_sigaction in that case.  */
  if (a->sa_flags & SA_SIGINFO)
    return (sa_handler_t) a->sa_sigaction;
#endif
  return a->sa_handler;
}

_GL_INLINE_HEADER_END

#endif /* _GL_SIG_HANDLER_H */
