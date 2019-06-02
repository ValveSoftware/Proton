/* A GNU-like <signal.h>.

   Copyright (C) 2006-2015 Free Software Foundation, Inc.

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

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

#if defined __need_sig_atomic_t || defined __need_sigset_t || defined _GL_ALREADY_INCLUDING_SIGNAL_H || (defined _SIGNAL_H && !defined __SIZEOF_PTHREAD_MUTEX_T)
/* Special invocation convention:
   - Inside glibc header files.
   - On glibc systems we have a sequence of nested includes
     <signal.h> -> <ucontext.h> -> <signal.h>.
     In this situation, the functions are not yet declared, therefore we cannot
     provide the C++ aliases.
   - On glibc systems with GCC 4.3 we have a sequence of nested includes
     <csignal> -> </usr/include/signal.h> -> <sys/ucontext.h> -> <signal.h>.
     In this situation, some of the functions are not yet declared, therefore
     we cannot provide the C++ aliases.  */

# @INCLUDE_NEXT@ @NEXT_SIGNAL_H@

#else
/* Normal invocation convention.  */

#ifndef _@GUARD_PREFIX@_SIGNAL_H

#define _GL_ALREADY_INCLUDING_SIGNAL_H

/* Define pid_t, uid_t.
   Also, mingw defines sigset_t not in <signal.h>, but in <sys/types.h>.
   On Solaris 10, <signal.h> includes <sys/types.h>, which eventually includes
   us; so include <sys/types.h> now, before the second inclusion guard.  */
#include <sys/types.h>

/* The include_next requires a split double-inclusion guard.  */
#@INCLUDE_NEXT@ @NEXT_SIGNAL_H@

#undef _GL_ALREADY_INCLUDING_SIGNAL_H

#ifndef _@GUARD_PREFIX@_SIGNAL_H
#define _@GUARD_PREFIX@_SIGNAL_H

/* Mac OS X 10.3, FreeBSD 6.4, OpenBSD 3.8, OSF/1 4.0, Solaris 2.6 declare
   pthread_sigmask in <pthread.h>, not in <signal.h>.
   But avoid namespace pollution on glibc systems.*/
#if (@GNULIB_PTHREAD_SIGMASK@ || defined GNULIB_POSIXCHECK) \
    && ((defined __APPLE__ && defined __MACH__) || defined __FreeBSD__ || defined __OpenBSD__ || defined __osf__ || defined __sun) \
    && ! defined __GLIBC__
# include <pthread.h>
#endif

/* The definitions of _GL_FUNCDECL_RPL etc. are copied here.  */

/* The definition of _GL_ARG_NONNULL is copied here.  */

/* The definition of _GL_WARN_ON_USE is copied here.  */

/* On AIX, sig_atomic_t already includes volatile.  C99 requires that
   'volatile sig_atomic_t' ignore the extra modifier, but C89 did not.
   Hence, redefine this to a non-volatile type as needed.  */
#if ! @HAVE_TYPE_VOLATILE_SIG_ATOMIC_T@
# if !GNULIB_defined_sig_atomic_t
typedef int rpl_sig_atomic_t;
#  undef sig_atomic_t
#  define sig_atomic_t rpl_sig_atomic_t
#  define GNULIB_defined_sig_atomic_t 1
# endif
#endif

/* A set or mask of signals.  */
#if !@HAVE_SIGSET_T@
# if !GNULIB_defined_sigset_t
typedef unsigned int sigset_t;
#  define GNULIB_defined_sigset_t 1
# endif
#endif

/* Define sighandler_t, the type of signal handlers.  A GNU extension.  */
#if !@HAVE_SIGHANDLER_T@
# ifdef __cplusplus
extern "C" {
# endif
# if !GNULIB_defined_sighandler_t
typedef void (*sighandler_t) (int);
#  define GNULIB_defined_sighandler_t 1
# endif
# ifdef __cplusplus
}
# endif
#endif


#if @GNULIB_SIGNAL_H_SIGPIPE@
# ifndef SIGPIPE
/* Define SIGPIPE to a value that does not overlap with other signals.  */
#  define SIGPIPE 13
#  define GNULIB_defined_SIGPIPE 1
/* To actually use SIGPIPE, you also need the gnulib modules 'sigprocmask',
   'write', 'stdio'.  */
# endif
#endif


/* Maximum signal number + 1.  */
#ifndef NSIG
# if defined __TANDEM
#  define NSIG 32
# endif
#endif


#if @GNULIB_PTHREAD_SIGMASK@
# if @REPLACE_PTHREAD_SIGMASK@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef pthread_sigmask
#   define pthread_sigmask rpl_pthread_sigmask
#  endif
_GL_FUNCDECL_RPL (pthread_sigmask, int,
                  (int how, const sigset_t *new_mask, sigset_t *old_mask));
_GL_CXXALIAS_RPL (pthread_sigmask, int,
                  (int how, const sigset_t *new_mask, sigset_t *old_mask));
# else
#  if !@HAVE_PTHREAD_SIGMASK@
_GL_FUNCDECL_SYS (pthread_sigmask, int,
                  (int how, const sigset_t *new_mask, sigset_t *old_mask));
#  endif
_GL_CXXALIAS_SYS (pthread_sigmask, int,
                  (int how, const sigset_t *new_mask, sigset_t *old_mask));
# endif
_GL_CXXALIASWARN (pthread_sigmask);
#elif defined GNULIB_POSIXCHECK
# undef pthread_sigmask
# if HAVE_RAW_DECL_PTHREAD_SIGMASK
_GL_WARN_ON_USE (pthread_sigmask, "pthread_sigmask is not portable - "
                 "use gnulib module pthread_sigmask for portability");
# endif
#endif


#if @GNULIB_RAISE@
# if @REPLACE_RAISE@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef raise
#   define raise rpl_raise
#  endif
_GL_FUNCDECL_RPL (raise, int, (int sig));
_GL_CXXALIAS_RPL (raise, int, (int sig));
# else
#  if !@HAVE_RAISE@
_GL_FUNCDECL_SYS (raise, int, (int sig));
#  endif
_GL_CXXALIAS_SYS (raise, int, (int sig));
# endif
_GL_CXXALIASWARN (raise);
#elif defined GNULIB_POSIXCHECK
# undef raise
/* Assume raise is always declared.  */
_GL_WARN_ON_USE (raise, "raise can crash on native Windows - "
                 "use gnulib module raise for portability");
#endif


#if @GNULIB_SIGPROCMASK@
# if !@HAVE_POSIX_SIGNALBLOCKING@

#  ifndef GNULIB_defined_signal_blocking
#   define GNULIB_defined_signal_blocking 1
#  endif

/* Maximum signal number + 1.  */
#  ifndef NSIG
#   define NSIG 32
#  endif

/* This code supports only 32 signals.  */
#  if !GNULIB_defined_verify_NSIG_constraint
typedef int verify_NSIG_constraint[NSIG <= 32 ? 1 : -1];
#   define GNULIB_defined_verify_NSIG_constraint 1
#  endif

# endif

/* When also using extern inline, suppress the use of static inline in
   standard headers of problematic Apple configurations, as Libc at
   least through Libc-825.26 (2013-04-09) mishandles it; see, e.g.,
   <http://lists.gnu.org/archive/html/bug-gnulib/2012-12/msg00023.html>.
   Perhaps Apple will fix this some day.  */
#if (defined _GL_EXTERN_INLINE_IN_USE && defined __APPLE__ \
     && (defined __i386__ || defined __x86_64__))
# undef sigaddset
# undef sigdelset
# undef sigemptyset
# undef sigfillset
# undef sigismember
#endif

/* Test whether a given signal is contained in a signal set.  */
# if @HAVE_POSIX_SIGNALBLOCKING@
/* This function is defined as a macro on Mac OS X.  */
#  if defined __cplusplus && defined GNULIB_NAMESPACE
#   undef sigismember
#  endif
# else
_GL_FUNCDECL_SYS (sigismember, int, (const sigset_t *set, int sig)
                                    _GL_ARG_NONNULL ((1)));
# endif
_GL_CXXALIAS_SYS (sigismember, int, (const sigset_t *set, int sig));
_GL_CXXALIASWARN (sigismember);

/* Initialize a signal set to the empty set.  */
# if @HAVE_POSIX_SIGNALBLOCKING@
/* This function is defined as a macro on Mac OS X.  */
#  if defined __cplusplus && defined GNULIB_NAMESPACE
#   undef sigemptyset
#  endif
# else
_GL_FUNCDECL_SYS (sigemptyset, int, (sigset_t *set) _GL_ARG_NONNULL ((1)));
# endif
_GL_CXXALIAS_SYS (sigemptyset, int, (sigset_t *set));
_GL_CXXALIASWARN (sigemptyset);

/* Add a signal to a signal set.  */
# if @HAVE_POSIX_SIGNALBLOCKING@
/* This function is defined as a macro on Mac OS X.  */
#  if defined __cplusplus && defined GNULIB_NAMESPACE
#   undef sigaddset
#  endif
# else
_GL_FUNCDECL_SYS (sigaddset, int, (sigset_t *set, int sig)
                                  _GL_ARG_NONNULL ((1)));
# endif
_GL_CXXALIAS_SYS (sigaddset, int, (sigset_t *set, int sig));
_GL_CXXALIASWARN (sigaddset);

/* Remove a signal from a signal set.  */
# if @HAVE_POSIX_SIGNALBLOCKING@
/* This function is defined as a macro on Mac OS X.  */
#  if defined __cplusplus && defined GNULIB_NAMESPACE
#   undef sigdelset
#  endif
# else
_GL_FUNCDECL_SYS (sigdelset, int, (sigset_t *set, int sig)
                                  _GL_ARG_NONNULL ((1)));
# endif
_GL_CXXALIAS_SYS (sigdelset, int, (sigset_t *set, int sig));
_GL_CXXALIASWARN (sigdelset);

/* Fill a signal set with all possible signals.  */
# if @HAVE_POSIX_SIGNALBLOCKING@
/* This function is defined as a macro on Mac OS X.  */
#  if defined __cplusplus && defined GNULIB_NAMESPACE
#   undef sigfillset
#  endif
# else
_GL_FUNCDECL_SYS (sigfillset, int, (sigset_t *set) _GL_ARG_NONNULL ((1)));
# endif
_GL_CXXALIAS_SYS (sigfillset, int, (sigset_t *set));
_GL_CXXALIASWARN (sigfillset);

/* Return the set of those blocked signals that are pending.  */
# if !@HAVE_POSIX_SIGNALBLOCKING@
_GL_FUNCDECL_SYS (sigpending, int, (sigset_t *set) _GL_ARG_NONNULL ((1)));
# endif
_GL_CXXALIAS_SYS (sigpending, int, (sigset_t *set));
_GL_CXXALIASWARN (sigpending);

/* If OLD_SET is not NULL, put the current set of blocked signals in *OLD_SET.
   Then, if SET is not NULL, affect the current set of blocked signals by
   combining it with *SET as indicated in OPERATION.
   In this implementation, you are not allowed to change a signal handler
   while the signal is blocked.  */
# if !@HAVE_POSIX_SIGNALBLOCKING@
#  define SIG_BLOCK   0  /* blocked_set = blocked_set | *set; */
#  define SIG_SETMASK 1  /* blocked_set = *set; */
#  define SIG_UNBLOCK 2  /* blocked_set = blocked_set & ~*set; */
_GL_FUNCDECL_SYS (sigprocmask, int,
                  (int operation, const sigset_t *set, sigset_t *old_set));
# endif
_GL_CXXALIAS_SYS (sigprocmask, int,
                  (int operation, const sigset_t *set, sigset_t *old_set));
_GL_CXXALIASWARN (sigprocmask);

/* Install the handler FUNC for signal SIG, and return the previous
   handler.  */
# ifdef __cplusplus
extern "C" {
# endif
# if !GNULIB_defined_function_taking_int_returning_void_t
typedef void (*_gl_function_taking_int_returning_void_t) (int);
#  define GNULIB_defined_function_taking_int_returning_void_t 1
# endif
# ifdef __cplusplus
}
# endif
# if !@HAVE_POSIX_SIGNALBLOCKING@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   define signal rpl_signal
#  endif
_GL_FUNCDECL_RPL (signal, _gl_function_taking_int_returning_void_t,
                  (int sig, _gl_function_taking_int_returning_void_t func));
_GL_CXXALIAS_RPL (signal, _gl_function_taking_int_returning_void_t,
                  (int sig, _gl_function_taking_int_returning_void_t func));
# else
_GL_CXXALIAS_SYS (signal, _gl_function_taking_int_returning_void_t,
                  (int sig, _gl_function_taking_int_returning_void_t func));
# endif
_GL_CXXALIASWARN (signal);

# if !@HAVE_POSIX_SIGNALBLOCKING@ && GNULIB_defined_SIGPIPE
/* Raise signal SIGPIPE.  */
_GL_EXTERN_C int _gl_raise_SIGPIPE (void);
# endif

#elif defined GNULIB_POSIXCHECK
# undef sigaddset
# if HAVE_RAW_DECL_SIGADDSET
_GL_WARN_ON_USE (sigaddset, "sigaddset is unportable - "
                 "use the gnulib module sigprocmask for portability");
# endif
# undef sigdelset
# if HAVE_RAW_DECL_SIGDELSET
_GL_WARN_ON_USE (sigdelset, "sigdelset is unportable - "
                 "use the gnulib module sigprocmask for portability");
# endif
# undef sigemptyset
# if HAVE_RAW_DECL_SIGEMPTYSET
_GL_WARN_ON_USE (sigemptyset, "sigemptyset is unportable - "
                 "use the gnulib module sigprocmask for portability");
# endif
# undef sigfillset
# if HAVE_RAW_DECL_SIGFILLSET
_GL_WARN_ON_USE (sigfillset, "sigfillset is unportable - "
                 "use the gnulib module sigprocmask for portability");
# endif
# undef sigismember
# if HAVE_RAW_DECL_SIGISMEMBER
_GL_WARN_ON_USE (sigismember, "sigismember is unportable - "
                 "use the gnulib module sigprocmask for portability");
# endif
# undef sigpending
# if HAVE_RAW_DECL_SIGPENDING
_GL_WARN_ON_USE (sigpending, "sigpending is unportable - "
                 "use the gnulib module sigprocmask for portability");
# endif
# undef sigprocmask
# if HAVE_RAW_DECL_SIGPROCMASK
_GL_WARN_ON_USE (sigprocmask, "sigprocmask is unportable - "
                 "use the gnulib module sigprocmask for portability");
# endif
#endif /* @GNULIB_SIGPROCMASK@ */


#if @GNULIB_SIGACTION@
# if !@HAVE_SIGACTION@

#  if !@HAVE_SIGINFO_T@

#   if !GNULIB_defined_siginfo_types

/* Present to allow compilation, but unsupported by gnulib.  */
union sigval
{
  int sival_int;
  void *sival_ptr;
};

/* Present to allow compilation, but unsupported by gnulib.  */
struct siginfo_t
{
  int si_signo;
  int si_code;
  int si_errno;
  pid_t si_pid;
  uid_t si_uid;
  void *si_addr;
  int si_status;
  long si_band;
  union sigval si_value;
};
typedef struct siginfo_t siginfo_t;

#    define GNULIB_defined_siginfo_types 1
#   endif

#  endif /* !@HAVE_SIGINFO_T@ */

/* We assume that platforms which lack the sigaction() function also lack
   the 'struct sigaction' type, and vice versa.  */

#  if !GNULIB_defined_struct_sigaction

struct sigaction
{
  union
  {
    void (*_sa_handler) (int);
    /* Present to allow compilation, but unsupported by gnulib.  POSIX
       says that implementations may, but not must, make sa_sigaction
       overlap with sa_handler, but we know of no implementation where
       they do not overlap.  */
    void (*_sa_sigaction) (int, siginfo_t *, void *);
  } _sa_func;
  sigset_t sa_mask;
  /* Not all POSIX flags are supported.  */
  int sa_flags;
};
#   define sa_handler _sa_func._sa_handler
#   define sa_sigaction _sa_func._sa_sigaction
/* Unsupported flags are not present.  */
#   define SA_RESETHAND 1
#   define SA_NODEFER 2
#   define SA_RESTART 4

#   define GNULIB_defined_struct_sigaction 1
#  endif

_GL_FUNCDECL_SYS (sigaction, int, (int, const struct sigaction *restrict,
                                   struct sigaction *restrict));

# elif !@HAVE_STRUCT_SIGACTION_SA_SIGACTION@

#  define sa_sigaction sa_handler

# endif /* !@HAVE_SIGACTION@, !@HAVE_STRUCT_SIGACTION_SA_SIGACTION@ */

_GL_CXXALIAS_SYS (sigaction, int, (int, const struct sigaction *restrict,
                                   struct sigaction *restrict));
_GL_CXXALIASWARN (sigaction);

#elif defined GNULIB_POSIXCHECK
# undef sigaction
# if HAVE_RAW_DECL_SIGACTION
_GL_WARN_ON_USE (sigaction, "sigaction is unportable - "
                 "use the gnulib module sigaction for portability");
# endif
#endif

/* Some systems don't have SA_NODEFER.  */
#ifndef SA_NODEFER
# define SA_NODEFER 0
#endif


#endif /* _@GUARD_PREFIX@_SIGNAL_H */
#endif /* _@GUARD_PREFIX@_SIGNAL_H */
#endif
