/* Invalid parameter handler for MSVC runtime libraries.
   Copyright (C) 2011-2015 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef _MSVC_INVAL_H
#define _MSVC_INVAL_H

/* With MSVC runtime libraries with the "invalid parameter handler" concept,
   functions like fprintf(), dup2(), or close() crash when the caller passes
   an invalid argument.  But POSIX wants error codes (such as EINVAL or EBADF)
   instead.
   This file defines macros that turn such an invalid parameter notification
   into a non-local exit.  An error code can then be produced at the target
   of this exit.  You can thus write code like

     TRY_MSVC_INVAL
       {
         <Code that can trigger an invalid parameter notification
          but does not do 'return', 'break', 'continue', nor 'goto'.>
       }
     CATCH_MSVC_INVAL
       {
         <Code that handles an invalid parameter notification
          but does not do 'return', 'break', 'continue', nor 'goto'.>
       }
     DONE_MSVC_INVAL;

   This entire block expands to a single statement.

   The handling of invalid parameters can be done in three ways:

     * The default way, which is reasonable for programs (not libraries):
       AC_DEFINE([MSVC_INVALID_PARAMETER_HANDLING], [DEFAULT_HANDLING])

     * The way for libraries that make "hairy" calls (like close(-1), or
       fclose(fp) where fileno(fp) is closed, or simply getdtablesize()):
       AC_DEFINE([MSVC_INVALID_PARAMETER_HANDLING], [HAIRY_LIBRARY_HANDLING])

     * The way for libraries that make no "hairy" calls:
       AC_DEFINE([MSVC_INVALID_PARAMETER_HANDLING], [SANE_LIBRARY_HANDLING])
 */

#define DEFAULT_HANDLING       0
#define HAIRY_LIBRARY_HANDLING 1
#define SANE_LIBRARY_HANDLING  2

#if HAVE_MSVC_INVALID_PARAMETER_HANDLER \
    && !(MSVC_INVALID_PARAMETER_HANDLING == SANE_LIBRARY_HANDLING)
/* A native Windows platform with the "invalid parameter handler" concept,
   and either DEFAULT_HANDLING or HAIRY_LIBRARY_HANDLING.  */

# if MSVC_INVALID_PARAMETER_HANDLING == DEFAULT_HANDLING
/* Default handling.  */

#  ifdef __cplusplus
extern "C" {
#  endif

/* Ensure that the invalid parameter handler in installed that just returns.
   Because we assume no other part of the program installs a different
   invalid parameter handler, this solution is multithread-safe.  */
extern void gl_msvc_inval_ensure_handler (void);

#  ifdef __cplusplus
}
#  endif

#  define TRY_MSVC_INVAL \
     do                                                                        \
       {                                                                       \
         gl_msvc_inval_ensure_handler ();                                      \
         if (1)
#  define CATCH_MSVC_INVAL \
         else
#  define DONE_MSVC_INVAL \
       }                                                                       \
     while (0)

# else
/* Handling for hairy libraries.  */

#  include <excpt.h>

/* Gnulib can define its own status codes, as described in the page
   "Raising Software Exceptions" on microsoft.com
   <http://msdn.microsoft.com/en-us/library/het71c37.aspx>.
   Our status codes are composed of
     - 0xE0000000, mandatory for all user-defined status codes,
     - 0x474E550, a API identifier ("GNU"),
     - 0, 1, 2, ..., used to distinguish different status codes from the
       same API.  */
#  define STATUS_GNULIB_INVALID_PARAMETER (0xE0000000 + 0x474E550 + 0)

#  if defined _MSC_VER
/* A compiler that supports __try/__except, as described in the page
   "try-except statement" on microsoft.com
   <http://msdn.microsoft.com/en-us/library/s58ftw19.aspx>.
   With __try/__except, we can use the multithread-safe exception handling.  */

#   ifdef __cplusplus
extern "C" {
#   endif

/* Ensure that the invalid parameter handler in installed that raises a
   software exception with code STATUS_GNULIB_INVALID_PARAMETER.
   Because we assume no other part of the program installs a different
   invalid parameter handler, this solution is multithread-safe.  */
extern void gl_msvc_inval_ensure_handler (void);

#   ifdef __cplusplus
}
#   endif

#   define TRY_MSVC_INVAL \
      do                                                                       \
        {                                                                      \
          gl_msvc_inval_ensure_handler ();                                     \
          __try
#   define CATCH_MSVC_INVAL \
          __except (GetExceptionCode () == STATUS_GNULIB_INVALID_PARAMETER     \
                    ? EXCEPTION_EXECUTE_HANDLER                                \
                    : EXCEPTION_CONTINUE_SEARCH)
#   define DONE_MSVC_INVAL \
        }                                                                      \
      while (0)

#  else
/* Any compiler.
   We can only use setjmp/longjmp.  */

#   include <setjmp.h>

#   ifdef __cplusplus
extern "C" {
#   endif

struct gl_msvc_inval_per_thread
{
  /* The restart that will resume execution at the code between
     CATCH_MSVC_INVAL and DONE_MSVC_INVAL.  It is enabled only between
     TRY_MSVC_INVAL and CATCH_MSVC_INVAL.  */
  jmp_buf restart;

  /* Tells whether the contents of restart is valid.  */
  int restart_valid;
};

/* Ensure that the invalid parameter handler in installed that passes
   control to the gl_msvc_inval_restart if it is valid, or raises a
   software exception with code STATUS_GNULIB_INVALID_PARAMETER otherwise.
   Because we assume no other part of the program installs a different
   invalid parameter handler, this solution is multithread-safe.  */
extern void gl_msvc_inval_ensure_handler (void);

/* Return a pointer to the per-thread data for the current thread.  */
extern struct gl_msvc_inval_per_thread *gl_msvc_inval_current (void);

#   ifdef __cplusplus
}
#   endif

#   define TRY_MSVC_INVAL \
      do                                                                       \
        {                                                                      \
          struct gl_msvc_inval_per_thread *msvc_inval_current;                 \
          gl_msvc_inval_ensure_handler ();                                     \
          msvc_inval_current = gl_msvc_inval_current ();                       \
          /* First, initialize gl_msvc_inval_restart.  */                      \
          if (setjmp (msvc_inval_current->restart) == 0)                       \
            {                                                                  \
              /* Then, mark it as valid.  */                                   \
              msvc_inval_current->restart_valid = 1;
#   define CATCH_MSVC_INVAL \
              /* Execution completed.                                          \
                 Mark gl_msvc_inval_restart as invalid.  */                    \
              msvc_inval_current->restart_valid = 0;                           \
            }                                                                  \
          else                                                                 \
            {                                                                  \
              /* Execution triggered an invalid parameter notification.        \
                 Mark gl_msvc_inval_restart as invalid.  */                    \
              msvc_inval_current->restart_valid = 0;
#   define DONE_MSVC_INVAL \
            }                                                                  \
        }                                                                      \
      while (0)

#  endif

# endif

#else
/* A platform that does not need to the invalid parameter handler,
   or when SANE_LIBRARY_HANDLING is desired.  */

/* The braces here avoid GCC warnings like
   "warning: suggest explicit braces to avoid ambiguous 'else'".  */
# define TRY_MSVC_INVAL \
    do                                                                         \
      {                                                                        \
        if (1)
# define CATCH_MSVC_INVAL \
        else
# define DONE_MSVC_INVAL \
      }                                                                        \
    while (0)

#endif

#endif /* _MSVC_INVAL_H */
