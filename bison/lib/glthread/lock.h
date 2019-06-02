/* Locking in multithreaded situations.
   Copyright (C) 2005-2015 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.  */

/* Written by Bruno Haible <bruno@clisp.org>, 2005.
   Based on GCC's gthr-posix.h, gthr-posix95.h, gthr-solaris.h,
   gthr-win32.h.  */

/* This file contains locking primitives for use with a given thread library.
   It does not contain primitives for creating threads or for other
   synchronization primitives.

   Normal (non-recursive) locks:
     Type:                gl_lock_t
     Declaration:         gl_lock_define(extern, name)
     Initializer:         gl_lock_define_initialized(, name)
     Initialization:      gl_lock_init (name);
     Taking the lock:     gl_lock_lock (name);
     Releasing the lock:  gl_lock_unlock (name);
     De-initialization:   gl_lock_destroy (name);
   Equivalent functions with control of error handling:
     Initialization:      err = glthread_lock_init (&name);
     Taking the lock:     err = glthread_lock_lock (&name);
     Releasing the lock:  err = glthread_lock_unlock (&name);
     De-initialization:   err = glthread_lock_destroy (&name);

   Read-Write (non-recursive) locks:
     Type:                gl_rwlock_t
     Declaration:         gl_rwlock_define(extern, name)
     Initializer:         gl_rwlock_define_initialized(, name)
     Initialization:      gl_rwlock_init (name);
     Taking the lock:     gl_rwlock_rdlock (name);
                          gl_rwlock_wrlock (name);
     Releasing the lock:  gl_rwlock_unlock (name);
     De-initialization:   gl_rwlock_destroy (name);
   Equivalent functions with control of error handling:
     Initialization:      err = glthread_rwlock_init (&name);
     Taking the lock:     err = glthread_rwlock_rdlock (&name);
                          err = glthread_rwlock_wrlock (&name);
     Releasing the lock:  err = glthread_rwlock_unlock (&name);
     De-initialization:   err = glthread_rwlock_destroy (&name);

   Recursive locks:
     Type:                gl_recursive_lock_t
     Declaration:         gl_recursive_lock_define(extern, name)
     Initializer:         gl_recursive_lock_define_initialized(, name)
     Initialization:      gl_recursive_lock_init (name);
     Taking the lock:     gl_recursive_lock_lock (name);
     Releasing the lock:  gl_recursive_lock_unlock (name);
     De-initialization:   gl_recursive_lock_destroy (name);
   Equivalent functions with control of error handling:
     Initialization:      err = glthread_recursive_lock_init (&name);
     Taking the lock:     err = glthread_recursive_lock_lock (&name);
     Releasing the lock:  err = glthread_recursive_lock_unlock (&name);
     De-initialization:   err = glthread_recursive_lock_destroy (&name);

  Once-only execution:
     Type:                gl_once_t
     Initializer:         gl_once_define(extern, name)
     Execution:           gl_once (name, initfunction);
   Equivalent functions with control of error handling:
     Execution:           err = glthread_once (&name, initfunction);
*/


#ifndef _LOCK_H
#define _LOCK_H

#include <errno.h>
#include <stdlib.h>

/* ========================================================================= */

#if USE_POSIX_THREADS

/* Use the POSIX threads library.  */

# include <pthread.h>

# ifdef __cplusplus
extern "C" {
# endif

# if PTHREAD_IN_USE_DETECTION_HARD

/* The pthread_in_use() detection needs to be done at runtime.  */
#  define pthread_in_use() \
     glthread_in_use ()
extern int glthread_in_use (void);

# endif

# if USE_POSIX_THREADS_WEAK

/* Use weak references to the POSIX threads library.  */

/* Weak references avoid dragging in external libraries if the other parts
   of the program don't use them.  Here we use them, because we don't want
   every program that uses libintl to depend on libpthread.  This assumes
   that libpthread would not be loaded after libintl; i.e. if libintl is
   loaded first, by an executable that does not depend on libpthread, and
   then a module is dynamically loaded that depends on libpthread, libintl
   will not be multithread-safe.  */

/* The way to test at runtime whether libpthread is present is to test
   whether a function pointer's value, such as &pthread_mutex_init, is
   non-NULL.  However, some versions of GCC have a bug through which, in
   PIC mode, &foo != NULL always evaluates to true if there is a direct
   call to foo(...) in the same function.  To avoid this, we test the
   address of a function in libpthread that we don't use.  */

#  pragma weak pthread_mutex_init
#  pragma weak pthread_mutex_lock
#  pragma weak pthread_mutex_unlock
#  pragma weak pthread_mutex_destroy
#  pragma weak pthread_rwlock_init
#  pragma weak pthread_rwlock_rdlock
#  pragma weak pthread_rwlock_wrlock
#  pragma weak pthread_rwlock_unlock
#  pragma weak pthread_rwlock_destroy
#  pragma weak pthread_once
#  pragma weak pthread_cond_init
#  pragma weak pthread_cond_wait
#  pragma weak pthread_cond_signal
#  pragma weak pthread_cond_broadcast
#  pragma weak pthread_cond_destroy
#  pragma weak pthread_mutexattr_init
#  pragma weak pthread_mutexattr_settype
#  pragma weak pthread_mutexattr_destroy
#  ifndef pthread_self
#   pragma weak pthread_self
#  endif

#  if !PTHREAD_IN_USE_DETECTION_HARD
#   pragma weak pthread_cancel
#   define pthread_in_use() (pthread_cancel != NULL)
#  endif

# else

#  if !PTHREAD_IN_USE_DETECTION_HARD
#   define pthread_in_use() 1
#  endif

# endif

/* -------------------------- gl_lock_t datatype -------------------------- */

typedef pthread_mutex_t gl_lock_t;
# define gl_lock_define(STORAGECLASS, NAME) \
    STORAGECLASS pthread_mutex_t NAME;
# define gl_lock_define_initialized(STORAGECLASS, NAME) \
    STORAGECLASS pthread_mutex_t NAME = gl_lock_initializer;
# define gl_lock_initializer \
    PTHREAD_MUTEX_INITIALIZER
# define glthread_lock_init(LOCK) \
    (pthread_in_use () ? pthread_mutex_init (LOCK, NULL) : 0)
# define glthread_lock_lock(LOCK) \
    (pthread_in_use () ? pthread_mutex_lock (LOCK) : 0)
# define glthread_lock_unlock(LOCK) \
    (pthread_in_use () ? pthread_mutex_unlock (LOCK) : 0)
# define glthread_lock_destroy(LOCK) \
    (pthread_in_use () ? pthread_mutex_destroy (LOCK) : 0)

/* ------------------------- gl_rwlock_t datatype ------------------------- */

# if HAVE_PTHREAD_RWLOCK

#  ifdef PTHREAD_RWLOCK_INITIALIZER

typedef pthread_rwlock_t gl_rwlock_t;
#   define gl_rwlock_define(STORAGECLASS, NAME) \
      STORAGECLASS pthread_rwlock_t NAME;
#   define gl_rwlock_define_initialized(STORAGECLASS, NAME) \
      STORAGECLASS pthread_rwlock_t NAME = gl_rwlock_initializer;
#   define gl_rwlock_initializer \
      PTHREAD_RWLOCK_INITIALIZER
#   define glthread_rwlock_init(LOCK) \
      (pthread_in_use () ? pthread_rwlock_init (LOCK, NULL) : 0)
#   define glthread_rwlock_rdlock(LOCK) \
      (pthread_in_use () ? pthread_rwlock_rdlock (LOCK) : 0)
#   define glthread_rwlock_wrlock(LOCK) \
      (pthread_in_use () ? pthread_rwlock_wrlock (LOCK) : 0)
#   define glthread_rwlock_unlock(LOCK) \
      (pthread_in_use () ? pthread_rwlock_unlock (LOCK) : 0)
#   define glthread_rwlock_destroy(LOCK) \
      (pthread_in_use () ? pthread_rwlock_destroy (LOCK) : 0)

#  else

typedef struct
        {
          int initialized;
          pthread_mutex_t guard;   /* protects the initialization */
          pthread_rwlock_t rwlock; /* read-write lock */
        }
        gl_rwlock_t;
#   define gl_rwlock_define(STORAGECLASS, NAME) \
      STORAGECLASS gl_rwlock_t NAME;
#   define gl_rwlock_define_initialized(STORAGECLASS, NAME) \
      STORAGECLASS gl_rwlock_t NAME = gl_rwlock_initializer;
#   define gl_rwlock_initializer \
      { 0, PTHREAD_MUTEX_INITIALIZER }
#   define glthread_rwlock_init(LOCK) \
      (pthread_in_use () ? glthread_rwlock_init_multithreaded (LOCK) : 0)
#   define glthread_rwlock_rdlock(LOCK) \
      (pthread_in_use () ? glthread_rwlock_rdlock_multithreaded (LOCK) : 0)
#   define glthread_rwlock_wrlock(LOCK) \
      (pthread_in_use () ? glthread_rwlock_wrlock_multithreaded (LOCK) : 0)
#   define glthread_rwlock_unlock(LOCK) \
      (pthread_in_use () ? glthread_rwlock_unlock_multithreaded (LOCK) : 0)
#   define glthread_rwlock_destroy(LOCK) \
      (pthread_in_use () ? glthread_rwlock_destroy_multithreaded (LOCK) : 0)
extern int glthread_rwlock_init_multithreaded (gl_rwlock_t *lock);
extern int glthread_rwlock_rdlock_multithreaded (gl_rwlock_t *lock);
extern int glthread_rwlock_wrlock_multithreaded (gl_rwlock_t *lock);
extern int glthread_rwlock_unlock_multithreaded (gl_rwlock_t *lock);
extern int glthread_rwlock_destroy_multithreaded (gl_rwlock_t *lock);

#  endif

# else

typedef struct
        {
          pthread_mutex_t lock; /* protects the remaining fields */
          pthread_cond_t waiting_readers; /* waiting readers */
          pthread_cond_t waiting_writers; /* waiting writers */
          unsigned int waiting_writers_count; /* number of waiting writers */
          int runcount; /* number of readers running, or -1 when a writer runs */
        }
        gl_rwlock_t;
# define gl_rwlock_define(STORAGECLASS, NAME) \
    STORAGECLASS gl_rwlock_t NAME;
# define gl_rwlock_define_initialized(STORAGECLASS, NAME) \
    STORAGECLASS gl_rwlock_t NAME = gl_rwlock_initializer;
# define gl_rwlock_initializer \
    { PTHREAD_MUTEX_INITIALIZER, PTHREAD_COND_INITIALIZER, PTHREAD_COND_INITIALIZER, 0, 0 }
# define glthread_rwlock_init(LOCK) \
    (pthread_in_use () ? glthread_rwlock_init_multithreaded (LOCK) : 0)
# define glthread_rwlock_rdlock(LOCK) \
    (pthread_in_use () ? glthread_rwlock_rdlock_multithreaded (LOCK) : 0)
# define glthread_rwlock_wrlock(LOCK) \
    (pthread_in_use () ? glthread_rwlock_wrlock_multithreaded (LOCK) : 0)
# define glthread_rwlock_unlock(LOCK) \
    (pthread_in_use () ? glthread_rwlock_unlock_multithreaded (LOCK) : 0)
# define glthread_rwlock_destroy(LOCK) \
    (pthread_in_use () ? glthread_rwlock_destroy_multithreaded (LOCK) : 0)
extern int glthread_rwlock_init_multithreaded (gl_rwlock_t *lock);
extern int glthread_rwlock_rdlock_multithreaded (gl_rwlock_t *lock);
extern int glthread_rwlock_wrlock_multithreaded (gl_rwlock_t *lock);
extern int glthread_rwlock_unlock_multithreaded (gl_rwlock_t *lock);
extern int glthread_rwlock_destroy_multithreaded (gl_rwlock_t *lock);

# endif

/* --------------------- gl_recursive_lock_t datatype --------------------- */

# if HAVE_PTHREAD_MUTEX_RECURSIVE

#  if defined PTHREAD_RECURSIVE_MUTEX_INITIALIZER || defined PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP

typedef pthread_mutex_t gl_recursive_lock_t;
#   define gl_recursive_lock_define(STORAGECLASS, NAME) \
      STORAGECLASS pthread_mutex_t NAME;
#   define gl_recursive_lock_define_initialized(STORAGECLASS, NAME) \
      STORAGECLASS pthread_mutex_t NAME = gl_recursive_lock_initializer;
#   ifdef PTHREAD_RECURSIVE_MUTEX_INITIALIZER
#    define gl_recursive_lock_initializer \
       PTHREAD_RECURSIVE_MUTEX_INITIALIZER
#   else
#    define gl_recursive_lock_initializer \
       PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP
#   endif
#   define glthread_recursive_lock_init(LOCK) \
      (pthread_in_use () ? glthread_recursive_lock_init_multithreaded (LOCK) : 0)
#   define glthread_recursive_lock_lock(LOCK) \
      (pthread_in_use () ? pthread_mutex_lock (LOCK) : 0)
#   define glthread_recursive_lock_unlock(LOCK) \
      (pthread_in_use () ? pthread_mutex_unlock (LOCK) : 0)
#   define glthread_recursive_lock_destroy(LOCK) \
      (pthread_in_use () ? pthread_mutex_destroy (LOCK) : 0)
extern int glthread_recursive_lock_init_multithreaded (gl_recursive_lock_t *lock);

#  else

typedef struct
        {
          pthread_mutex_t recmutex; /* recursive mutex */
          pthread_mutex_t guard;    /* protects the initialization */
          int initialized;
        }
        gl_recursive_lock_t;
#   define gl_recursive_lock_define(STORAGECLASS, NAME) \
      STORAGECLASS gl_recursive_lock_t NAME;
#   define gl_recursive_lock_define_initialized(STORAGECLASS, NAME) \
      STORAGECLASS gl_recursive_lock_t NAME = gl_recursive_lock_initializer;
#   define gl_recursive_lock_initializer \
      { PTHREAD_MUTEX_INITIALIZER, PTHREAD_MUTEX_INITIALIZER, 0 }
#   define glthread_recursive_lock_init(LOCK) \
      (pthread_in_use () ? glthread_recursive_lock_init_multithreaded (LOCK) : 0)
#   define glthread_recursive_lock_lock(LOCK) \
      (pthread_in_use () ? glthread_recursive_lock_lock_multithreaded (LOCK) : 0)
#   define glthread_recursive_lock_unlock(LOCK) \
      (pthread_in_use () ? glthread_recursive_lock_unlock_multithreaded (LOCK) : 0)
#   define glthread_recursive_lock_destroy(LOCK) \
      (pthread_in_use () ? glthread_recursive_lock_destroy_multithreaded (LOCK) : 0)
extern int glthread_recursive_lock_init_multithreaded (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_lock_multithreaded (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_unlock_multithreaded (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_destroy_multithreaded (gl_recursive_lock_t *lock);

#  endif

# else

/* Old versions of POSIX threads on Solaris did not have recursive locks.
   We have to implement them ourselves.  */

typedef struct
        {
          pthread_mutex_t mutex;
          pthread_t owner;
          unsigned long depth;
        }
        gl_recursive_lock_t;
#  define gl_recursive_lock_define(STORAGECLASS, NAME) \
     STORAGECLASS gl_recursive_lock_t NAME;
#  define gl_recursive_lock_define_initialized(STORAGECLASS, NAME) \
     STORAGECLASS gl_recursive_lock_t NAME = gl_recursive_lock_initializer;
#  define gl_recursive_lock_initializer \
     { PTHREAD_MUTEX_INITIALIZER, (pthread_t) 0, 0 }
#  define glthread_recursive_lock_init(LOCK) \
     (pthread_in_use () ? glthread_recursive_lock_init_multithreaded (LOCK) : 0)
#  define glthread_recursive_lock_lock(LOCK) \
     (pthread_in_use () ? glthread_recursive_lock_lock_multithreaded (LOCK) : 0)
#  define glthread_recursive_lock_unlock(LOCK) \
     (pthread_in_use () ? glthread_recursive_lock_unlock_multithreaded (LOCK) : 0)
#  define glthread_recursive_lock_destroy(LOCK) \
     (pthread_in_use () ? glthread_recursive_lock_destroy_multithreaded (LOCK) : 0)
extern int glthread_recursive_lock_init_multithreaded (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_lock_multithreaded (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_unlock_multithreaded (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_destroy_multithreaded (gl_recursive_lock_t *lock);

# endif

/* -------------------------- gl_once_t datatype -------------------------- */

typedef pthread_once_t gl_once_t;
# define gl_once_define(STORAGECLASS, NAME) \
    STORAGECLASS pthread_once_t NAME = PTHREAD_ONCE_INIT;
# define glthread_once(ONCE_CONTROL, INITFUNCTION) \
    (pthread_in_use ()                                                         \
     ? pthread_once (ONCE_CONTROL, INITFUNCTION)                               \
     : (glthread_once_singlethreaded (ONCE_CONTROL) ? (INITFUNCTION (), 0) : 0))
extern int glthread_once_singlethreaded (pthread_once_t *once_control);

# ifdef __cplusplus
}
# endif

#endif

/* ========================================================================= */

#if USE_PTH_THREADS

/* Use the GNU Pth threads library.  */

# include <pth.h>

# ifdef __cplusplus
extern "C" {
# endif

# if USE_PTH_THREADS_WEAK

/* Use weak references to the GNU Pth threads library.  */

#  pragma weak pth_mutex_init
#  pragma weak pth_mutex_acquire
#  pragma weak pth_mutex_release
#  pragma weak pth_rwlock_init
#  pragma weak pth_rwlock_acquire
#  pragma weak pth_rwlock_release
#  pragma weak pth_once

#  pragma weak pth_cancel
#  define pth_in_use() (pth_cancel != NULL)

# else

#  define pth_in_use() 1

# endif

/* -------------------------- gl_lock_t datatype -------------------------- */

typedef pth_mutex_t gl_lock_t;
# define gl_lock_define(STORAGECLASS, NAME) \
    STORAGECLASS pth_mutex_t NAME;
# define gl_lock_define_initialized(STORAGECLASS, NAME) \
    STORAGECLASS pth_mutex_t NAME = gl_lock_initializer;
# define gl_lock_initializer \
    PTH_MUTEX_INIT
# define glthread_lock_init(LOCK) \
    (pth_in_use () && !pth_mutex_init (LOCK) ? errno : 0)
# define glthread_lock_lock(LOCK) \
    (pth_in_use () && !pth_mutex_acquire (LOCK, 0, NULL) ? errno : 0)
# define glthread_lock_unlock(LOCK) \
    (pth_in_use () && !pth_mutex_release (LOCK) ? errno : 0)
# define glthread_lock_destroy(LOCK) \
    ((void)(LOCK), 0)

/* ------------------------- gl_rwlock_t datatype ------------------------- */

typedef pth_rwlock_t gl_rwlock_t;
#  define gl_rwlock_define(STORAGECLASS, NAME) \
     STORAGECLASS pth_rwlock_t NAME;
#  define gl_rwlock_define_initialized(STORAGECLASS, NAME) \
     STORAGECLASS pth_rwlock_t NAME = gl_rwlock_initializer;
#  define gl_rwlock_initializer \
     PTH_RWLOCK_INIT
#  define glthread_rwlock_init(LOCK) \
     (pth_in_use () && !pth_rwlock_init (LOCK) ? errno : 0)
#  define glthread_rwlock_rdlock(LOCK) \
     (pth_in_use () && !pth_rwlock_acquire (LOCK, PTH_RWLOCK_RD, 0, NULL) ? errno : 0)
#  define glthread_rwlock_wrlock(LOCK) \
     (pth_in_use () && !pth_rwlock_acquire (LOCK, PTH_RWLOCK_RW, 0, NULL) ? errno : 0)
#  define glthread_rwlock_unlock(LOCK) \
     (pth_in_use () && !pth_rwlock_release (LOCK) ? errno : 0)
#  define glthread_rwlock_destroy(LOCK) \
     ((void)(LOCK), 0)

/* --------------------- gl_recursive_lock_t datatype --------------------- */

/* In Pth, mutexes are recursive by default.  */
typedef pth_mutex_t gl_recursive_lock_t;
#  define gl_recursive_lock_define(STORAGECLASS, NAME) \
     STORAGECLASS pth_mutex_t NAME;
#  define gl_recursive_lock_define_initialized(STORAGECLASS, NAME) \
     STORAGECLASS pth_mutex_t NAME = gl_recursive_lock_initializer;
#  define gl_recursive_lock_initializer \
     PTH_MUTEX_INIT
#  define glthread_recursive_lock_init(LOCK) \
     (pth_in_use () && !pth_mutex_init (LOCK) ? errno : 0)
#  define glthread_recursive_lock_lock(LOCK) \
     (pth_in_use () && !pth_mutex_acquire (LOCK, 0, NULL) ? errno : 0)
#  define glthread_recursive_lock_unlock(LOCK) \
     (pth_in_use () && !pth_mutex_release (LOCK) ? errno : 0)
#  define glthread_recursive_lock_destroy(LOCK) \
     ((void)(LOCK), 0)

/* -------------------------- gl_once_t datatype -------------------------- */

typedef pth_once_t gl_once_t;
# define gl_once_define(STORAGECLASS, NAME) \
    STORAGECLASS pth_once_t NAME = PTH_ONCE_INIT;
# define glthread_once(ONCE_CONTROL, INITFUNCTION) \
    (pth_in_use ()                                                             \
     ? glthread_once_multithreaded (ONCE_CONTROL, INITFUNCTION)                \
     : (glthread_once_singlethreaded (ONCE_CONTROL) ? (INITFUNCTION (), 0) : 0))
extern int glthread_once_multithreaded (pth_once_t *once_control, void (*initfunction) (void));
extern int glthread_once_singlethreaded (pth_once_t *once_control);

# ifdef __cplusplus
}
# endif

#endif

/* ========================================================================= */

#if USE_SOLARIS_THREADS

/* Use the old Solaris threads library.  */

# include <thread.h>
# include <synch.h>

# ifdef __cplusplus
extern "C" {
# endif

# if USE_SOLARIS_THREADS_WEAK

/* Use weak references to the old Solaris threads library.  */

#  pragma weak mutex_init
#  pragma weak mutex_lock
#  pragma weak mutex_unlock
#  pragma weak mutex_destroy
#  pragma weak rwlock_init
#  pragma weak rw_rdlock
#  pragma weak rw_wrlock
#  pragma weak rw_unlock
#  pragma weak rwlock_destroy
#  pragma weak thr_self

#  pragma weak thr_suspend
#  define thread_in_use() (thr_suspend != NULL)

# else

#  define thread_in_use() 1

# endif

/* -------------------------- gl_lock_t datatype -------------------------- */

typedef mutex_t gl_lock_t;
# define gl_lock_define(STORAGECLASS, NAME) \
    STORAGECLASS mutex_t NAME;
# define gl_lock_define_initialized(STORAGECLASS, NAME) \
    STORAGECLASS mutex_t NAME = gl_lock_initializer;
# define gl_lock_initializer \
    DEFAULTMUTEX
# define glthread_lock_init(LOCK) \
    (thread_in_use () ? mutex_init (LOCK, USYNC_THREAD, NULL) : 0)
# define glthread_lock_lock(LOCK) \
    (thread_in_use () ? mutex_lock (LOCK) : 0)
# define glthread_lock_unlock(LOCK) \
    (thread_in_use () ? mutex_unlock (LOCK) : 0)
# define glthread_lock_destroy(LOCK) \
    (thread_in_use () ? mutex_destroy (LOCK) : 0)

/* ------------------------- gl_rwlock_t datatype ------------------------- */

typedef rwlock_t gl_rwlock_t;
# define gl_rwlock_define(STORAGECLASS, NAME) \
    STORAGECLASS rwlock_t NAME;
# define gl_rwlock_define_initialized(STORAGECLASS, NAME) \
    STORAGECLASS rwlock_t NAME = gl_rwlock_initializer;
# define gl_rwlock_initializer \
    DEFAULTRWLOCK
# define glthread_rwlock_init(LOCK) \
    (thread_in_use () ? rwlock_init (LOCK, USYNC_THREAD, NULL) : 0)
# define glthread_rwlock_rdlock(LOCK) \
    (thread_in_use () ? rw_rdlock (LOCK) : 0)
# define glthread_rwlock_wrlock(LOCK) \
    (thread_in_use () ? rw_wrlock (LOCK) : 0)
# define glthread_rwlock_unlock(LOCK) \
    (thread_in_use () ? rw_unlock (LOCK) : 0)
# define glthread_rwlock_destroy(LOCK) \
    (thread_in_use () ? rwlock_destroy (LOCK) : 0)

/* --------------------- gl_recursive_lock_t datatype --------------------- */

/* Old Solaris threads did not have recursive locks.
   We have to implement them ourselves.  */

typedef struct
        {
          mutex_t mutex;
          thread_t owner;
          unsigned long depth;
        }
        gl_recursive_lock_t;
# define gl_recursive_lock_define(STORAGECLASS, NAME) \
    STORAGECLASS gl_recursive_lock_t NAME;
# define gl_recursive_lock_define_initialized(STORAGECLASS, NAME) \
    STORAGECLASS gl_recursive_lock_t NAME = gl_recursive_lock_initializer;
# define gl_recursive_lock_initializer \
    { DEFAULTMUTEX, (thread_t) 0, 0 }
# define glthread_recursive_lock_init(LOCK) \
    (thread_in_use () ? glthread_recursive_lock_init_multithreaded (LOCK) : 0)
# define glthread_recursive_lock_lock(LOCK) \
    (thread_in_use () ? glthread_recursive_lock_lock_multithreaded (LOCK) : 0)
# define glthread_recursive_lock_unlock(LOCK) \
    (thread_in_use () ? glthread_recursive_lock_unlock_multithreaded (LOCK) : 0)
# define glthread_recursive_lock_destroy(LOCK) \
    (thread_in_use () ? glthread_recursive_lock_destroy_multithreaded (LOCK) : 0)
extern int glthread_recursive_lock_init_multithreaded (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_lock_multithreaded (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_unlock_multithreaded (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_destroy_multithreaded (gl_recursive_lock_t *lock);

/* -------------------------- gl_once_t datatype -------------------------- */

typedef struct
        {
          volatile int inited;
          mutex_t mutex;
        }
        gl_once_t;
# define gl_once_define(STORAGECLASS, NAME) \
    STORAGECLASS gl_once_t NAME = { 0, DEFAULTMUTEX };
# define glthread_once(ONCE_CONTROL, INITFUNCTION) \
    (thread_in_use ()                                                          \
     ? glthread_once_multithreaded (ONCE_CONTROL, INITFUNCTION)                \
     : (glthread_once_singlethreaded (ONCE_CONTROL) ? (INITFUNCTION (), 0) : 0))
extern int glthread_once_multithreaded (gl_once_t *once_control, void (*initfunction) (void));
extern int glthread_once_singlethreaded (gl_once_t *once_control);

# ifdef __cplusplus
}
# endif

#endif

/* ========================================================================= */

#if USE_WINDOWS_THREADS

# define WIN32_LEAN_AND_MEAN  /* avoid including junk */
# include <windows.h>

# ifdef __cplusplus
extern "C" {
# endif

/* We can use CRITICAL_SECTION directly, rather than the native Windows Event,
   Mutex, Semaphore types, because
     - we need only to synchronize inside a single process (address space),
       not inter-process locking,
     - we don't need to support trylock operations.  (TryEnterCriticalSection
       does not work on Windows 95/98/ME.  Packages that need trylock usually
       define their own mutex type.)  */

/* There is no way to statically initialize a CRITICAL_SECTION.  It needs
   to be done lazily, once only.  For this we need spinlocks.  */

typedef struct { volatile int done; volatile long started; } gl_spinlock_t;

/* -------------------------- gl_lock_t datatype -------------------------- */

typedef struct
        {
          gl_spinlock_t guard; /* protects the initialization */
          CRITICAL_SECTION lock;
        }
        gl_lock_t;
# define gl_lock_define(STORAGECLASS, NAME) \
    STORAGECLASS gl_lock_t NAME;
# define gl_lock_define_initialized(STORAGECLASS, NAME) \
    STORAGECLASS gl_lock_t NAME = gl_lock_initializer;
# define gl_lock_initializer \
    { { 0, -1 } }
# define glthread_lock_init(LOCK) \
    (glthread_lock_init_func (LOCK), 0)
# define glthread_lock_lock(LOCK) \
    glthread_lock_lock_func (LOCK)
# define glthread_lock_unlock(LOCK) \
    glthread_lock_unlock_func (LOCK)
# define glthread_lock_destroy(LOCK) \
    glthread_lock_destroy_func (LOCK)
extern void glthread_lock_init_func (gl_lock_t *lock);
extern int glthread_lock_lock_func (gl_lock_t *lock);
extern int glthread_lock_unlock_func (gl_lock_t *lock);
extern int glthread_lock_destroy_func (gl_lock_t *lock);

/* ------------------------- gl_rwlock_t datatype ------------------------- */

/* It is impossible to implement read-write locks using plain locks, without
   introducing an extra thread dedicated to managing read-write locks.
   Therefore here we need to use the low-level Event type.  */

typedef struct
        {
          HANDLE *array; /* array of waiting threads, each represented by an event */
          unsigned int count; /* number of waiting threads */
          unsigned int alloc; /* length of allocated array */
          unsigned int offset; /* index of first waiting thread in array */
        }
        gl_carray_waitqueue_t;
typedef struct
        {
          gl_spinlock_t guard; /* protects the initialization */
          CRITICAL_SECTION lock; /* protects the remaining fields */
          gl_carray_waitqueue_t waiting_readers; /* waiting readers */
          gl_carray_waitqueue_t waiting_writers; /* waiting writers */
          int runcount; /* number of readers running, or -1 when a writer runs */
        }
        gl_rwlock_t;
# define gl_rwlock_define(STORAGECLASS, NAME) \
    STORAGECLASS gl_rwlock_t NAME;
# define gl_rwlock_define_initialized(STORAGECLASS, NAME) \
    STORAGECLASS gl_rwlock_t NAME = gl_rwlock_initializer;
# define gl_rwlock_initializer \
    { { 0, -1 } }
# define glthread_rwlock_init(LOCK) \
    (glthread_rwlock_init_func (LOCK), 0)
# define glthread_rwlock_rdlock(LOCK) \
    glthread_rwlock_rdlock_func (LOCK)
# define glthread_rwlock_wrlock(LOCK) \
    glthread_rwlock_wrlock_func (LOCK)
# define glthread_rwlock_unlock(LOCK) \
    glthread_rwlock_unlock_func (LOCK)
# define glthread_rwlock_destroy(LOCK) \
    glthread_rwlock_destroy_func (LOCK)
extern void glthread_rwlock_init_func (gl_rwlock_t *lock);
extern int glthread_rwlock_rdlock_func (gl_rwlock_t *lock);
extern int glthread_rwlock_wrlock_func (gl_rwlock_t *lock);
extern int glthread_rwlock_unlock_func (gl_rwlock_t *lock);
extern int glthread_rwlock_destroy_func (gl_rwlock_t *lock);

/* --------------------- gl_recursive_lock_t datatype --------------------- */

/* The native Windows documentation says that CRITICAL_SECTION already
   implements a recursive lock.  But we need not rely on it: It's easy to
   implement a recursive lock without this assumption.  */

typedef struct
        {
          gl_spinlock_t guard; /* protects the initialization */
          DWORD owner;
          unsigned long depth;
          CRITICAL_SECTION lock;
        }
        gl_recursive_lock_t;
# define gl_recursive_lock_define(STORAGECLASS, NAME) \
    STORAGECLASS gl_recursive_lock_t NAME;
# define gl_recursive_lock_define_initialized(STORAGECLASS, NAME) \
    STORAGECLASS gl_recursive_lock_t NAME = gl_recursive_lock_initializer;
# define gl_recursive_lock_initializer \
    { { 0, -1 }, 0, 0 }
# define glthread_recursive_lock_init(LOCK) \
    (glthread_recursive_lock_init_func (LOCK), 0)
# define glthread_recursive_lock_lock(LOCK) \
    glthread_recursive_lock_lock_func (LOCK)
# define glthread_recursive_lock_unlock(LOCK) \
    glthread_recursive_lock_unlock_func (LOCK)
# define glthread_recursive_lock_destroy(LOCK) \
    glthread_recursive_lock_destroy_func (LOCK)
extern void glthread_recursive_lock_init_func (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_lock_func (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_unlock_func (gl_recursive_lock_t *lock);
extern int glthread_recursive_lock_destroy_func (gl_recursive_lock_t *lock);

/* -------------------------- gl_once_t datatype -------------------------- */

typedef struct
        {
          volatile int inited;
          volatile long started;
          CRITICAL_SECTION lock;
        }
        gl_once_t;
# define gl_once_define(STORAGECLASS, NAME) \
    STORAGECLASS gl_once_t NAME = { -1, -1 };
# define glthread_once(ONCE_CONTROL, INITFUNCTION) \
    (glthread_once_func (ONCE_CONTROL, INITFUNCTION), 0)
extern void glthread_once_func (gl_once_t *once_control, void (*initfunction) (void));

# ifdef __cplusplus
}
# endif

#endif

/* ========================================================================= */

#if !(USE_POSIX_THREADS || USE_PTH_THREADS || USE_SOLARIS_THREADS || USE_WINDOWS_THREADS)

/* Provide dummy implementation if threads are not supported.  */

/* -------------------------- gl_lock_t datatype -------------------------- */

typedef int gl_lock_t;
# define gl_lock_define(STORAGECLASS, NAME)
# define gl_lock_define_initialized(STORAGECLASS, NAME)
# define glthread_lock_init(NAME) 0
# define glthread_lock_lock(NAME) 0
# define glthread_lock_unlock(NAME) 0
# define glthread_lock_destroy(NAME) 0

/* ------------------------- gl_rwlock_t datatype ------------------------- */

typedef int gl_rwlock_t;
# define gl_rwlock_define(STORAGECLASS, NAME)
# define gl_rwlock_define_initialized(STORAGECLASS, NAME)
# define glthread_rwlock_init(NAME) 0
# define glthread_rwlock_rdlock(NAME) 0
# define glthread_rwlock_wrlock(NAME) 0
# define glthread_rwlock_unlock(NAME) 0
# define glthread_rwlock_destroy(NAME) 0

/* --------------------- gl_recursive_lock_t datatype --------------------- */

typedef int gl_recursive_lock_t;
# define gl_recursive_lock_define(STORAGECLASS, NAME)
# define gl_recursive_lock_define_initialized(STORAGECLASS, NAME)
# define glthread_recursive_lock_init(NAME) 0
# define glthread_recursive_lock_lock(NAME) 0
# define glthread_recursive_lock_unlock(NAME) 0
# define glthread_recursive_lock_destroy(NAME) 0

/* -------------------------- gl_once_t datatype -------------------------- */

typedef int gl_once_t;
# define gl_once_define(STORAGECLASS, NAME) \
    STORAGECLASS gl_once_t NAME = 0;
# define glthread_once(ONCE_CONTROL, INITFUNCTION) \
    (*(ONCE_CONTROL) == 0 ? (*(ONCE_CONTROL) = ~ 0, INITFUNCTION (), 0) : 0)

#endif

/* ========================================================================= */

/* Macros with built-in error handling.  */

/* -------------------------- gl_lock_t datatype -------------------------- */

#define gl_lock_init(NAME) \
   do                                  \
     {                                 \
       if (glthread_lock_init (&NAME)) \
         abort ();                     \
     }                                 \
   while (0)
#define gl_lock_lock(NAME) \
   do                                  \
     {                                 \
       if (glthread_lock_lock (&NAME)) \
         abort ();                     \
     }                                 \
   while (0)
#define gl_lock_unlock(NAME) \
   do                                    \
     {                                   \
       if (glthread_lock_unlock (&NAME)) \
         abort ();                       \
     }                                   \
   while (0)
#define gl_lock_destroy(NAME) \
   do                                     \
     {                                    \
       if (glthread_lock_destroy (&NAME)) \
         abort ();                        \
     }                                    \
   while (0)

/* ------------------------- gl_rwlock_t datatype ------------------------- */

#define gl_rwlock_init(NAME) \
   do                                    \
     {                                   \
       if (glthread_rwlock_init (&NAME)) \
         abort ();                       \
     }                                   \
   while (0)
#define gl_rwlock_rdlock(NAME) \
   do                                      \
     {                                     \
       if (glthread_rwlock_rdlock (&NAME)) \
         abort ();                         \
     }                                     \
   while (0)
#define gl_rwlock_wrlock(NAME) \
   do                                      \
     {                                     \
       if (glthread_rwlock_wrlock (&NAME)) \
         abort ();                         \
     }                                     \
   while (0)
#define gl_rwlock_unlock(NAME) \
   do                                      \
     {                                     \
       if (glthread_rwlock_unlock (&NAME)) \
         abort ();                         \
     }                                     \
   while (0)
#define gl_rwlock_destroy(NAME) \
   do                                       \
     {                                      \
       if (glthread_rwlock_destroy (&NAME)) \
         abort ();                          \
     }                                      \
   while (0)

/* --------------------- gl_recursive_lock_t datatype --------------------- */

#define gl_recursive_lock_init(NAME) \
   do                                            \
     {                                           \
       if (glthread_recursive_lock_init (&NAME)) \
         abort ();                               \
     }                                           \
   while (0)
#define gl_recursive_lock_lock(NAME) \
   do                                            \
     {                                           \
       if (glthread_recursive_lock_lock (&NAME)) \
         abort ();                               \
     }                                           \
   while (0)
#define gl_recursive_lock_unlock(NAME) \
   do                                              \
     {                                             \
       if (glthread_recursive_lock_unlock (&NAME)) \
         abort ();                                 \
     }                                             \
   while (0)
#define gl_recursive_lock_destroy(NAME) \
   do                                               \
     {                                              \
       if (glthread_recursive_lock_destroy (&NAME)) \
         abort ();                                  \
     }                                              \
   while (0)

/* -------------------------- gl_once_t datatype -------------------------- */

#define gl_once(NAME, INITFUNCTION) \
   do                                           \
     {                                          \
       if (glthread_once (&NAME, INITFUNCTION)) \
         abort ();                              \
     }                                          \
   while (0)

/* ========================================================================= */

#endif /* _LOCK_H */
