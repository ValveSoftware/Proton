# setenv.m4 serial 26
dnl Copyright (C) 2001-2004, 2006-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_FUNC_SETENV],
[
  AC_REQUIRE([gl_FUNC_SETENV_SEPARATE])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  if test $ac_cv_func_setenv = no; then
    HAVE_SETENV=0
  else
    AC_CACHE_CHECK([whether setenv validates arguments],
      [gl_cv_func_setenv_works],
      [AC_RUN_IFELSE([AC_LANG_PROGRAM([[
       #include <stdlib.h>
       #include <errno.h>
       #include <string.h>
      ]], [[
       int result = 0;
       {
         if (setenv ("", "", 0) != -1)
           result |= 1;
         else if (errno != EINVAL)
           result |= 2;
       }
       {
         if (setenv ("a", "=", 1) != 0)
           result |= 4;
         else if (strcmp (getenv ("a"), "=") != 0)
           result |= 8;
       }
       return result;
      ]])],
      [gl_cv_func_setenv_works=yes], [gl_cv_func_setenv_works=no],
      [case "$host_os" in
                 # Guess yes on glibc systems.
         *-gnu*) gl_cv_func_setenv_works="guessing yes" ;;
                 # If we don't know, assume the worst.
         *)      gl_cv_func_setenv_works="guessing no" ;;
       esac
      ])])
    case "$gl_cv_func_setenv_works" in
      *yes) ;;
      *)
        REPLACE_SETENV=1
        ;;
    esac
  fi
])

# Like gl_FUNC_SETENV, except prepare for separate compilation
# (no REPLACE_SETENV, no AC_LIBOBJ).
AC_DEFUN([gl_FUNC_SETENV_SEPARATE],
[
  AC_REQUIRE([gl_STDLIB_H_DEFAULTS])
  AC_CHECK_DECLS_ONCE([setenv])
  if test $ac_cv_have_decl_setenv = no; then
    HAVE_DECL_SETENV=0
  fi
  AC_CHECK_FUNCS_ONCE([setenv])
  gl_PREREQ_SETENV
])

AC_DEFUN([gl_FUNC_UNSETENV],
[
  AC_REQUIRE([gl_STDLIB_H_DEFAULTS])
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_CHECK_DECLS_ONCE([unsetenv])
  if test $ac_cv_have_decl_unsetenv = no; then
    HAVE_DECL_UNSETENV=0
  fi
  AC_CHECK_FUNCS([unsetenv])
  if test $ac_cv_func_unsetenv = no; then
    HAVE_UNSETENV=0
  else
    HAVE_UNSETENV=1
    dnl Some BSDs return void, failing to do error checking.
    AC_CACHE_CHECK([for unsetenv() return type], [gt_cv_func_unsetenv_ret],
      [AC_COMPILE_IFELSE(
         [AC_LANG_PROGRAM(
            [[
#undef _BSD
#define _BSD 1 /* unhide unsetenv declaration in OSF/1 5.1 <stdlib.h> */
#include <stdlib.h>
extern
#ifdef __cplusplus
"C"
#endif
int unsetenv (const char *name);
            ]],
            [[]])],
         [gt_cv_func_unsetenv_ret='int'],
         [gt_cv_func_unsetenv_ret='void'])])
    if test $gt_cv_func_unsetenv_ret = 'void'; then
      AC_DEFINE([VOID_UNSETENV], [1], [Define to 1 if unsetenv returns void
       instead of int.])
      REPLACE_UNSETENV=1
    fi

    dnl Solaris 10 unsetenv does not remove all copies of a name.
    dnl Haiku alpha 2 unsetenv gets confused by assignment to environ.
    dnl OpenBSD 4.7 unsetenv("") does not fail.
    AC_CACHE_CHECK([whether unsetenv obeys POSIX],
      [gl_cv_func_unsetenv_works],
      [AC_RUN_IFELSE([AC_LANG_PROGRAM([[
       #include <stdlib.h>
       #include <errno.h>
       extern char **environ;
      ]], [[
       char entry1[] = "a=1";
       char entry2[] = "b=2";
       char *env[] = { entry1, entry2, NULL };
       if (putenv ((char *) "a=1")) return 1;
       if (putenv (entry2)) return 2;
       entry2[0] = 'a';
       unsetenv ("a");
       if (getenv ("a")) return 3;
       if (!unsetenv ("") || errno != EINVAL) return 4;
       entry2[0] = 'b';
       environ = env;
       if (!getenv ("a")) return 5;
       entry2[0] = 'a';
       unsetenv ("a");
       if (getenv ("a")) return 6;
      ]])],
      [gl_cv_func_unsetenv_works=yes], [gl_cv_func_unsetenv_works=no],
      [case "$host_os" in
                 # Guess yes on glibc systems.
         *-gnu*) gl_cv_func_unsetenv_works="guessing yes" ;;
                 # If we don't know, assume the worst.
         *)      gl_cv_func_unsetenv_works="guessing no" ;;
       esac
      ])])
    case "$gl_cv_func_unsetenv_works" in
      *yes) ;;
      *)
        REPLACE_UNSETENV=1
        ;;
    esac
  fi
])

# Prerequisites of lib/setenv.c.
AC_DEFUN([gl_PREREQ_SETENV],
[
  AC_REQUIRE([AC_FUNC_ALLOCA])
  AC_REQUIRE([gl_ENVIRON])
  AC_CHECK_HEADERS_ONCE([unistd.h])
  AC_CHECK_HEADERS([search.h])
  AC_CHECK_FUNCS([tsearch])
])

# Prerequisites of lib/unsetenv.c.
AC_DEFUN([gl_PREREQ_UNSETENV],
[
  AC_REQUIRE([gl_ENVIRON])
  AC_CHECK_HEADERS_ONCE([unistd.h])
])
