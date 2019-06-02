# lock.m4 serial 13 (gettext-0.18.2)
dnl Copyright (C) 2005-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Bruno Haible.

AC_DEFUN([gl_LOCK],
[
  AC_REQUIRE([gl_THREADLIB])
  if test "$gl_threads_api" = posix; then
    # OSF/1 4.0 and Mac OS X 10.1 lack the pthread_rwlock_t type and the
    # pthread_rwlock_* functions.
    AC_CHECK_TYPE([pthread_rwlock_t],
      [AC_DEFINE([HAVE_PTHREAD_RWLOCK], [1],
         [Define if the POSIX multithreading library has read/write locks.])],
      [],
      [#include <pthread.h>])
    # glibc defines PTHREAD_MUTEX_RECURSIVE as enum, not as a macro.
    AC_COMPILE_IFELSE([
      AC_LANG_PROGRAM(
        [[#include <pthread.h>]],
        [[
#if __FreeBSD__ == 4
error "No, in FreeBSD 4.0 recursive mutexes actually don't work."
#elif (defined __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ \
       && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < 1070)
error "No, in Mac OS X < 10.7 recursive mutexes actually don't work."
#else
int x = (int)PTHREAD_MUTEX_RECURSIVE;
return !x;
#endif
        ]])],
      [AC_DEFINE([HAVE_PTHREAD_MUTEX_RECURSIVE], [1],
         [Define if the <pthread.h> defines PTHREAD_MUTEX_RECURSIVE.])])
  fi
  gl_PREREQ_LOCK
])

# Prerequisites of lib/glthread/lock.c.
AC_DEFUN([gl_PREREQ_LOCK], [:])
