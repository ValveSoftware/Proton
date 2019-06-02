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

#include <config.h>

/* Specification.  */
#include "msvc-inval.h"

#if HAVE_MSVC_INVALID_PARAMETER_HANDLER \
    && !(MSVC_INVALID_PARAMETER_HANDLING == SANE_LIBRARY_HANDLING)

/* Get _invalid_parameter_handler type and _set_invalid_parameter_handler
   declaration.  */
# include <stdlib.h>

# if MSVC_INVALID_PARAMETER_HANDLING == DEFAULT_HANDLING

static void __cdecl
gl_msvc_invalid_parameter_handler (const wchar_t *expression,
                                   const wchar_t *function,
                                   const wchar_t *file,
                                   unsigned int line,
                                   uintptr_t dummy)
{
}

# else

/* Get declarations of the native Windows API functions.  */
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>

#  if defined _MSC_VER

static void __cdecl
gl_msvc_invalid_parameter_handler (const wchar_t *expression,
                                   const wchar_t *function,
                                   const wchar_t *file,
                                   unsigned int line,
                                   uintptr_t dummy)
{
  RaiseException (STATUS_GNULIB_INVALID_PARAMETER, 0, 0, NULL);
}

#  else

/* An index to thread-local storage.  */
static DWORD tls_index;
static int tls_initialized /* = 0 */;

/* Used as a fallback only.  */
static struct gl_msvc_inval_per_thread not_per_thread;

struct gl_msvc_inval_per_thread *
gl_msvc_inval_current (void)
{
  if (!tls_initialized)
    {
      tls_index = TlsAlloc ();
      tls_initialized = 1;
    }
  if (tls_index == TLS_OUT_OF_INDEXES)
    /* TlsAlloc had failed.  */
    return &not_per_thread;
  else
    {
      struct gl_msvc_inval_per_thread *pointer =
        (struct gl_msvc_inval_per_thread *) TlsGetValue (tls_index);
      if (pointer == NULL)
        {
          /* First call.  Allocate a new 'struct gl_msvc_inval_per_thread'.  */
          pointer =
            (struct gl_msvc_inval_per_thread *)
            malloc (sizeof (struct gl_msvc_inval_per_thread));
          if (pointer == NULL)
            /* Could not allocate memory.  Use the global storage.  */
            pointer = &not_per_thread;
          TlsSetValue (tls_index, pointer);
        }
      return pointer;
    }
}

static void __cdecl
gl_msvc_invalid_parameter_handler (const wchar_t *expression,
                                   const wchar_t *function,
                                   const wchar_t *file,
                                   unsigned int line,
                                   uintptr_t dummy)
{
  struct gl_msvc_inval_per_thread *current = gl_msvc_inval_current ();
  if (current->restart_valid)
    longjmp (current->restart, 1);
  else
    /* An invalid parameter notification from outside the gnulib code.
       Give the caller a chance to intervene.  */
    RaiseException (STATUS_GNULIB_INVALID_PARAMETER, 0, 0, NULL);
}

#  endif

# endif

static int gl_msvc_inval_initialized /* = 0 */;

void
gl_msvc_inval_ensure_handler (void)
{
  if (gl_msvc_inval_initialized == 0)
    {
      _set_invalid_parameter_handler (gl_msvc_invalid_parameter_handler);
      gl_msvc_inval_initialized = 1;
    }
}

#endif
