# See if we need to provide obstacks.

dnl Copyright 1996-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl This replaces Autoconf's AC_FUNC_OBSTACK.
dnl The Autoconf version should be marked obsolete at some point.

AC_DEFUN([AC_FUNC_OBSTACK],
  [AC_LIBSOURCES([obstack.h, obstack.c])dnl
   AC_CACHE_CHECK([for obstacks that work with any size object],
     [ac_cv_func_obstack],
     [AC_LINK_IFELSE(
        [AC_LANG_PROGRAM(
           [[#include "obstack.h"
             void *obstack_chunk_alloc (size_t n) { return 0; }
             void obstack_chunk_free (void *p) { }
             /* Check that an internal function returns size_t, not int.  */
             size_t _obstack_memory_used (struct obstack *);
            ]],
           [[struct obstack mem;
             obstack_init (&mem);
             obstack_free (&mem, 0);
           ]])],
        [ac_cv_func_obstack=yes],
        [ac_cv_func_obstack=no])])
   if test "$ac_cv_func_obstack" = yes; then
     AC_DEFINE([HAVE_OBSTACK], 1,
       [Define to 1 if the system has obstacks that work with any size object.])
   else
     AC_LIBOBJ([obstack])
   fi
])
