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

#include <config.h>

#include "glthread/lock.h"

/* ========================================================================= */

#if USE_POSIX_THREADS

/* -------------------------- gl_lock_t datatype -------------------------- */

/* ------------------------- gl_rwlock_t datatype ------------------------- */

# if HAVE_PTHREAD_RWLOCK

#  if !defined PTHREAD_RWLOCK_INITIALIZER

int
glthread_rwlock_init_multithreaded (gl_rwlock_t *lock)
{
  int err;

  err = pthread_rwlock_init (&lock->rwlock, NULL);
  if (err != 0)
    return err;
  lock->initialized = 1;
  return 0;
}

int
glthread_rwlock_rdlock_multithreaded (gl_rwlock_t *lock)
{
  if (!lock->initialized)
    {
      int err;

      err = pthread_mutex_lock (&lock->guard);
      if (err != 0)
        return err;
      if (!lock->initialized)
        {
          err = glthread_rwlock_init_multithreaded (lock);
          if (err != 0)
            {
              pthread_mutex_unlock (&lock->guard);
              return err;
            }
        }
      err = pthread_mutex_unlock (&lock->guard);
      if (err != 0)
        return err;
    }
  return pthread_rwlock_rdlock (&lock->rwlock);
}

int
glthread_rwlock_wrlock_multithreaded (gl_rwlock_t *lock)
{
  if (!lock->initialized)
    {
      int err;

      err = pthread_mutex_lock (&lock->guard);
      if (err != 0)
        return err;
      if (!lock->initialized)
        {
          err = glthread_rwlock_init_multithreaded (lock);
          if (err != 0)
            {
              pthread_mutex_unlock (&lock->guard);
              return err;
            }
        }
      err = pthread_mutex_unlock (&lock->guard);
      if (err != 0)
        return err;
    }
  return pthread_rwlock_wrlock (&lock->rwlock);
}

int
glthread_rwlock_unlock_multithreaded (gl_rwlock_t *lock)
{
  if (!lock->initialized)
    return EINVAL;
  return pthread_rwlock_unlock (&lock->rwlock);
}

int
glthread_rwlock_destroy_multithreaded (gl_rwlock_t *lock)
{
  int err;

  if (!lock->initialized)
    return EINVAL;
  err = pthread_rwlock_destroy (&lock->rwlock);
  if (err != 0)
    return err;
  lock->initialized = 0;
  return 0;
}

#  endif

# else

int
glthread_rwlock_init_multithreaded (gl_rwlock_t *lock)
{
  int err;

  err = pthread_mutex_init (&lock->lock, NULL);
  if (err != 0)
    return err;
  err = pthread_cond_init (&lock->waiting_readers, NULL);
  if (err != 0)
    return err;
  err = pthread_cond_init (&lock->waiting_writers, NULL);
  if (err != 0)
    return err;
  lock->waiting_writers_count = 0;
  lock->runcount = 0;
  return 0;
}

int
glthread_rwlock_rdlock_multithreaded (gl_rwlock_t *lock)
{
  int err;

  err = pthread_mutex_lock (&lock->lock);
  if (err != 0)
    return err;
  /* Test whether only readers are currently running, and whether the runcount
     field will not overflow.  */
  /* POSIX says: "It is implementation-defined whether the calling thread
     acquires the lock when a writer does not hold the lock and there are
     writers blocked on the lock."  Let's say, no: give the writers a higher
     priority.  */
  while (!(lock->runcount + 1 > 0 && lock->waiting_writers_count == 0))
    {
      /* This thread has to wait for a while.  Enqueue it among the
         waiting_readers.  */
      err = pthread_cond_wait (&lock->waiting_readers, &lock->lock);
      if (err != 0)
        {
          pthread_mutex_unlock (&lock->lock);
          return err;
        }
    }
  lock->runcount++;
  return pthread_mutex_unlock (&lock->lock);
}

int
glthread_rwlock_wrlock_multithreaded (gl_rwlock_t *lock)
{
  int err;

  err = pthread_mutex_lock (&lock->lock);
  if (err != 0)
    return err;
  /* Test whether no readers or writers are currently running.  */
  while (!(lock->runcount == 0))
    {
      /* This thread has to wait for a while.  Enqueue it among the
         waiting_writers.  */
      lock->waiting_writers_count++;
      err = pthread_cond_wait (&lock->waiting_writers, &lock->lock);
      if (err != 0)
        {
          lock->waiting_writers_count--;
          pthread_mutex_unlock (&lock->lock);
          return err;
        }
      lock->waiting_writers_count--;
    }
  lock->runcount--; /* runcount becomes -1 */
  return pthread_mutex_unlock (&lock->lock);
}

int
glthread_rwlock_unlock_multithreaded (gl_rwlock_t *lock)
{
  int err;

  err = pthread_mutex_lock (&lock->lock);
  if (err != 0)
    return err;
  if (lock->runcount < 0)
    {
      /* Drop a writer lock.  */
      if (!(lock->runcount == -1))
        {
          pthread_mutex_unlock (&lock->lock);
          return EINVAL;
        }
      lock->runcount = 0;
    }
  else
    {
      /* Drop a reader lock.  */
      if (!(lock->runcount > 0))
        {
          pthread_mutex_unlock (&lock->lock);
          return EINVAL;
        }
      lock->runcount--;
    }
  if (lock->runcount == 0)
    {
      /* POSIX recommends that "write locks shall take precedence over read
         locks", to avoid "writer starvation".  */
      if (lock->waiting_writers_count > 0)
        {
          /* Wake up one of the waiting writers.  */
          err = pthread_cond_signal (&lock->waiting_writers);
          if (err != 0)
            {
              pthread_mutex_unlock (&lock->lock);
              return err;
            }
        }
      else
        {
          /* Wake up all waiting readers.  */
          err = pthread_cond_broadcast (&lock->waiting_readers);
          if (err != 0)
            {
              pthread_mutex_unlock (&lock->lock);
              return err;
            }
        }
    }
  return pthread_mutex_unlock (&lock->lock);
}

int
glthread_rwlock_destroy_multithreaded (gl_rwlock_t *lock)
{
  int err;

  err = pthread_mutex_destroy (&lock->lock);
  if (err != 0)
    return err;
  err = pthread_cond_destroy (&lock->waiting_readers);
  if (err != 0)
    return err;
  err = pthread_cond_destroy (&lock->waiting_writers);
  if (err != 0)
    return err;
  return 0;
}

# endif

/* --------------------- gl_recursive_lock_t datatype --------------------- */

# if HAVE_PTHREAD_MUTEX_RECURSIVE

#  if defined PTHREAD_RECURSIVE_MUTEX_INITIALIZER || defined PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP

int
glthread_recursive_lock_init_multithreaded (gl_recursive_lock_t *lock)
{
  pthread_mutexattr_t attributes;
  int err;

  err = pthread_mutexattr_init (&attributes);
  if (err != 0)
    return err;
  err = pthread_mutexattr_settype (&attributes, PTHREAD_MUTEX_RECURSIVE);
  if (err != 0)
    {
      pthread_mutexattr_destroy (&attributes);
      return err;
    }
  err = pthread_mutex_init (lock, &attributes);
  if (err != 0)
    {
      pthread_mutexattr_destroy (&attributes);
      return err;
    }
  err = pthread_mutexattr_destroy (&attributes);
  if (err != 0)
    return err;
  return 0;
}

#  else

int
glthread_recursive_lock_init_multithreaded (gl_recursive_lock_t *lock)
{
  pthread_mutexattr_t attributes;
  int err;

  err = pthread_mutexattr_init (&attributes);
  if (err != 0)
    return err;
  err = pthread_mutexattr_settype (&attributes, PTHREAD_MUTEX_RECURSIVE);
  if (err != 0)
    {
      pthread_mutexattr_destroy (&attributes);
      return err;
    }
  err = pthread_mutex_init (&lock->recmutex, &attributes);
  if (err != 0)
    {
      pthread_mutexattr_destroy (&attributes);
      return err;
    }
  err = pthread_mutexattr_destroy (&attributes);
  if (err != 0)
    return err;
  lock->initialized = 1;
  return 0;
}

int
glthread_recursive_lock_lock_multithreaded (gl_recursive_lock_t *lock)
{
  if (!lock->initialized)
    {
      int err;

      err = pthread_mutex_lock (&lock->guard);
      if (err != 0)
        return err;
      if (!lock->initialized)
        {
          err = glthread_recursive_lock_init_multithreaded (lock);
          if (err != 0)
            {
              pthread_mutex_unlock (&lock->guard);
              return err;
            }
        }
      err = pthread_mutex_unlock (&lock->guard);
      if (err != 0)
        return err;
    }
  return pthread_mutex_lock (&lock->recmutex);
}

int
glthread_recursive_lock_unlock_multithreaded (gl_recursive_lock_t *lock)
{
  if (!lock->initialized)
    return EINVAL;
  return pthread_mutex_unlock (&lock->recmutex);
}

int
glthread_recursive_lock_destroy_multithreaded (gl_recursive_lock_t *lock)
{
  int err;

  if (!lock->initialized)
    return EINVAL;
  err = pthread_mutex_destroy (&lock->recmutex);
  if (err != 0)
    return err;
  lock->initialized = 0;
  return 0;
}

#  endif

# else

int
glthread_recursive_lock_init_multithreaded (gl_recursive_lock_t *lock)
{
  int err;

  err = pthread_mutex_init (&lock->mutex, NULL);
  if (err != 0)
    return err;
  lock->owner = (pthread_t) 0;
  lock->depth = 0;
  return 0;
}

int
glthread_recursive_lock_lock_multithreaded (gl_recursive_lock_t *lock)
{
  pthread_t self = pthread_self ();
  if (lock->owner != self)
    {
      int err;

      err = pthread_mutex_lock (&lock->mutex);
      if (err != 0)
        return err;
      lock->owner = self;
    }
  if (++(lock->depth) == 0) /* wraparound? */
    {
      lock->depth--;
      return EAGAIN;
    }
  return 0;
}

int
glthread_recursive_lock_unlock_multithreaded (gl_recursive_lock_t *lock)
{
  if (lock->owner != pthread_self ())
    return EPERM;
  if (lock->depth == 0)
    return EINVAL;
  if (--(lock->depth) == 0)
    {
      lock->owner = (pthread_t) 0;
      return pthread_mutex_unlock (&lock->mutex);
    }
  else
    return 0;
}

int
glthread_recursive_lock_destroy_multithreaded (gl_recursive_lock_t *lock)
{
  if (lock->owner != (pthread_t) 0)
    return EBUSY;
  return pthread_mutex_destroy (&lock->mutex);
}

# endif

/* -------------------------- gl_once_t datatype -------------------------- */

static const pthread_once_t fresh_once = PTHREAD_ONCE_INIT;

int
glthread_once_singlethreaded (pthread_once_t *once_control)
{
  /* We don't know whether pthread_once_t is an integer type, a floating-point
     type, a pointer type, or a structure type.  */
  char *firstbyte = (char *)once_control;
  if (*firstbyte == *(const char *)&fresh_once)
    {
      /* First time use of once_control.  Invert the first byte.  */
      *firstbyte = ~ *(const char *)&fresh_once;
      return 1;
    }
  else
    return 0;
}

#endif

/* ========================================================================= */

#if USE_PTH_THREADS

/* Use the GNU Pth threads library.  */

/* -------------------------- gl_lock_t datatype -------------------------- */

/* ------------------------- gl_rwlock_t datatype ------------------------- */

/* --------------------- gl_recursive_lock_t datatype --------------------- */

/* -------------------------- gl_once_t datatype -------------------------- */

static void
glthread_once_call (void *arg)
{
  void (**gl_once_temp_addr) (void) = (void (**) (void)) arg;
  void (*initfunction) (void) = *gl_once_temp_addr;
  initfunction ();
}

int
glthread_once_multithreaded (pth_once_t *once_control, void (*initfunction) (void))
{
  void (*temp) (void) = initfunction;
  return (!pth_once (once_control, glthread_once_call, &temp) ? errno : 0);
}

int
glthread_once_singlethreaded (pth_once_t *once_control)
{
  /* We know that pth_once_t is an integer type.  */
  if (*once_control == PTH_ONCE_INIT)
    {
      /* First time use of once_control.  Invert the marker.  */
      *once_control = ~ PTH_ONCE_INIT;
      return 1;
    }
  else
    return 0;
}

#endif

/* ========================================================================= */

#if USE_SOLARIS_THREADS

/* Use the old Solaris threads library.  */

/* -------------------------- gl_lock_t datatype -------------------------- */

/* ------------------------- gl_rwlock_t datatype ------------------------- */

/* --------------------- gl_recursive_lock_t datatype --------------------- */

int
glthread_recursive_lock_init_multithreaded (gl_recursive_lock_t *lock)
{
  int err;

  err = mutex_init (&lock->mutex, USYNC_THREAD, NULL);
  if (err != 0)
    return err;
  lock->owner = (thread_t) 0;
  lock->depth = 0;
  return 0;
}

int
glthread_recursive_lock_lock_multithreaded (gl_recursive_lock_t *lock)
{
  thread_t self = thr_self ();
  if (lock->owner != self)
    {
      int err;

      err = mutex_lock (&lock->mutex);
      if (err != 0)
        return err;
      lock->owner = self;
    }
  if (++(lock->depth) == 0) /* wraparound? */
    {
      lock->depth--;
      return EAGAIN;
    }
  return 0;
}

int
glthread_recursive_lock_unlock_multithreaded (gl_recursive_lock_t *lock)
{
  if (lock->owner != thr_self ())
    return EPERM;
  if (lock->depth == 0)
    return EINVAL;
  if (--(lock->depth) == 0)
    {
      lock->owner = (thread_t) 0;
      return mutex_unlock (&lock->mutex);
    }
  else
    return 0;
}

int
glthread_recursive_lock_destroy_multithreaded (gl_recursive_lock_t *lock)
{
  if (lock->owner != (thread_t) 0)
    return EBUSY;
  return mutex_destroy (&lock->mutex);
}

/* -------------------------- gl_once_t datatype -------------------------- */

int
glthread_once_multithreaded (gl_once_t *once_control, void (*initfunction) (void))
{
  if (!once_control->inited)
    {
      int err;

      /* Use the mutex to guarantee that if another thread is already calling
         the initfunction, this thread waits until it's finished.  */
      err = mutex_lock (&once_control->mutex);
      if (err != 0)
        return err;
      if (!once_control->inited)
        {
          once_control->inited = 1;
          initfunction ();
        }
      return mutex_unlock (&once_control->mutex);
    }
  else
    return 0;
}

int
glthread_once_singlethreaded (gl_once_t *once_control)
{
  /* We know that gl_once_t contains an integer type.  */
  if (!once_control->inited)
    {
      /* First time use of once_control.  Invert the marker.  */
      once_control->inited = ~ 0;
      return 1;
    }
  else
    return 0;
}

#endif

/* ========================================================================= */

#if USE_WINDOWS_THREADS

/* -------------------------- gl_lock_t datatype -------------------------- */

void
glthread_lock_init_func (gl_lock_t *lock)
{
  InitializeCriticalSection (&lock->lock);
  lock->guard.done = 1;
}

int
glthread_lock_lock_func (gl_lock_t *lock)
{
  if (!lock->guard.done)
    {
      if (InterlockedIncrement (&lock->guard.started) == 0)
        /* This thread is the first one to need this lock.  Initialize it.  */
        glthread_lock_init (lock);
      else
        /* Yield the CPU while waiting for another thread to finish
           initializing this lock.  */
        while (!lock->guard.done)
          Sleep (0);
    }
  EnterCriticalSection (&lock->lock);
  return 0;
}

int
glthread_lock_unlock_func (gl_lock_t *lock)
{
  if (!lock->guard.done)
    return EINVAL;
  LeaveCriticalSection (&lock->lock);
  return 0;
}

int
glthread_lock_destroy_func (gl_lock_t *lock)
{
  if (!lock->guard.done)
    return EINVAL;
  DeleteCriticalSection (&lock->lock);
  lock->guard.done = 0;
  return 0;
}

/* ------------------------- gl_rwlock_t datatype ------------------------- */

/* In this file, the waitqueues are implemented as circular arrays.  */
#define gl_waitqueue_t gl_carray_waitqueue_t

static void
gl_waitqueue_init (gl_waitqueue_t *wq)
{
  wq->array = NULL;
  wq->count = 0;
  wq->alloc = 0;
  wq->offset = 0;
}

/* Enqueues the current thread, represented by an event, in a wait queue.
   Returns INVALID_HANDLE_VALUE if an allocation failure occurs.  */
static HANDLE
gl_waitqueue_add (gl_waitqueue_t *wq)
{
  HANDLE event;
  unsigned int index;

  if (wq->count == wq->alloc)
    {
      unsigned int new_alloc = 2 * wq->alloc + 1;
      HANDLE *new_array =
        (HANDLE *) realloc (wq->array, new_alloc * sizeof (HANDLE));
      if (new_array == NULL)
        /* No more memory.  */
        return INVALID_HANDLE_VALUE;
      /* Now is a good opportunity to rotate the array so that its contents
         starts at offset 0.  */
      if (wq->offset > 0)
        {
          unsigned int old_count = wq->count;
          unsigned int old_alloc = wq->alloc;
          unsigned int old_offset = wq->offset;
          unsigned int i;
          if (old_offset + old_count > old_alloc)
            {
              unsigned int limit = old_offset + old_count - old_alloc;
              for (i = 0; i < limit; i++)
                new_array[old_alloc + i] = new_array[i];
            }
          for (i = 0; i < old_count; i++)
            new_array[i] = new_array[old_offset + i];
          wq->offset = 0;
        }
      wq->array = new_array;
      wq->alloc = new_alloc;
    }
  /* Whether the created event is a manual-reset one or an auto-reset one,
     does not matter, since we will wait on it only once.  */
  event = CreateEvent (NULL, TRUE, FALSE, NULL);
  if (event == INVALID_HANDLE_VALUE)
    /* No way to allocate an event.  */
    return INVALID_HANDLE_VALUE;
  index = wq->offset + wq->count;
  if (index >= wq->alloc)
    index -= wq->alloc;
  wq->array[index] = event;
  wq->count++;
  return event;
}

/* Notifies the first thread from a wait queue and dequeues it.  */
static void
gl_waitqueue_notify_first (gl_waitqueue_t *wq)
{
  SetEvent (wq->array[wq->offset + 0]);
  wq->offset++;
  wq->count--;
  if (wq->count == 0 || wq->offset == wq->alloc)
    wq->offset = 0;
}

/* Notifies all threads from a wait queue and dequeues them all.  */
static void
gl_waitqueue_notify_all (gl_waitqueue_t *wq)
{
  unsigned int i;

  for (i = 0; i < wq->count; i++)
    {
      unsigned int index = wq->offset + i;
      if (index >= wq->alloc)
        index -= wq->alloc;
      SetEvent (wq->array[index]);
    }
  wq->count = 0;
  wq->offset = 0;
}

void
glthread_rwlock_init_func (gl_rwlock_t *lock)
{
  InitializeCriticalSection (&lock->lock);
  gl_waitqueue_init (&lock->waiting_readers);
  gl_waitqueue_init (&lock->waiting_writers);
  lock->runcount = 0;
  lock->guard.done = 1;
}

int
glthread_rwlock_rdlock_func (gl_rwlock_t *lock)
{
  if (!lock->guard.done)
    {
      if (InterlockedIncrement (&lock->guard.started) == 0)
        /* This thread is the first one to need this lock.  Initialize it.  */
        glthread_rwlock_init (lock);
      else
        /* Yield the CPU while waiting for another thread to finish
           initializing this lock.  */
        while (!lock->guard.done)
          Sleep (0);
    }
  EnterCriticalSection (&lock->lock);
  /* Test whether only readers are currently running, and whether the runcount
     field will not overflow.  */
  if (!(lock->runcount + 1 > 0))
    {
      /* This thread has to wait for a while.  Enqueue it among the
         waiting_readers.  */
      HANDLE event = gl_waitqueue_add (&lock->waiting_readers);
      if (event != INVALID_HANDLE_VALUE)
        {
          DWORD result;
          LeaveCriticalSection (&lock->lock);
          /* Wait until another thread signals this event.  */
          result = WaitForSingleObject (event, INFINITE);
          if (result == WAIT_FAILED || result == WAIT_TIMEOUT)
            abort ();
          CloseHandle (event);
          /* The thread which signalled the event already did the bookkeeping:
             removed us from the waiting_readers, incremented lock->runcount.  */
          if (!(lock->runcount > 0))
            abort ();
          return 0;
        }
      else
        {
          /* Allocation failure.  Weird.  */
          do
            {
              LeaveCriticalSection (&lock->lock);
              Sleep (1);
              EnterCriticalSection (&lock->lock);
            }
          while (!(lock->runcount + 1 > 0));
        }
    }
  lock->runcount++;
  LeaveCriticalSection (&lock->lock);
  return 0;
}

int
glthread_rwlock_wrlock_func (gl_rwlock_t *lock)
{
  if (!lock->guard.done)
    {
      if (InterlockedIncrement (&lock->guard.started) == 0)
        /* This thread is the first one to need this lock.  Initialize it.  */
        glthread_rwlock_init (lock);
      else
        /* Yield the CPU while waiting for another thread to finish
           initializing this lock.  */
        while (!lock->guard.done)
          Sleep (0);
    }
  EnterCriticalSection (&lock->lock);
  /* Test whether no readers or writers are currently running.  */
  if (!(lock->runcount == 0))
    {
      /* This thread has to wait for a while.  Enqueue it among the
         waiting_writers.  */
      HANDLE event = gl_waitqueue_add (&lock->waiting_writers);
      if (event != INVALID_HANDLE_VALUE)
        {
          DWORD result;
          LeaveCriticalSection (&lock->lock);
          /* Wait until another thread signals this event.  */
          result = WaitForSingleObject (event, INFINITE);
          if (result == WAIT_FAILED || result == WAIT_TIMEOUT)
            abort ();
          CloseHandle (event);
          /* The thread which signalled the event already did the bookkeeping:
             removed us from the waiting_writers, set lock->runcount = -1.  */
          if (!(lock->runcount == -1))
            abort ();
          return 0;
        }
      else
        {
          /* Allocation failure.  Weird.  */
          do
            {
              LeaveCriticalSection (&lock->lock);
              Sleep (1);
              EnterCriticalSection (&lock->lock);
            }
          while (!(lock->runcount == 0));
        }
    }
  lock->runcount--; /* runcount becomes -1 */
  LeaveCriticalSection (&lock->lock);
  return 0;
}

int
glthread_rwlock_unlock_func (gl_rwlock_t *lock)
{
  if (!lock->guard.done)
    return EINVAL;
  EnterCriticalSection (&lock->lock);
  if (lock->runcount < 0)
    {
      /* Drop a writer lock.  */
      if (!(lock->runcount == -1))
        abort ();
      lock->runcount = 0;
    }
  else
    {
      /* Drop a reader lock.  */
      if (!(lock->runcount > 0))
        {
          LeaveCriticalSection (&lock->lock);
          return EPERM;
        }
      lock->runcount--;
    }
  if (lock->runcount == 0)
    {
      /* POSIX recommends that "write locks shall take precedence over read
         locks", to avoid "writer starvation".  */
      if (lock->waiting_writers.count > 0)
        {
          /* Wake up one of the waiting writers.  */
          lock->runcount--;
          gl_waitqueue_notify_first (&lock->waiting_writers);
        }
      else
        {
          /* Wake up all waiting readers.  */
          lock->runcount += lock->waiting_readers.count;
          gl_waitqueue_notify_all (&lock->waiting_readers);
        }
    }
  LeaveCriticalSection (&lock->lock);
  return 0;
}

int
glthread_rwlock_destroy_func (gl_rwlock_t *lock)
{
  if (!lock->guard.done)
    return EINVAL;
  if (lock->runcount != 0)
    return EBUSY;
  DeleteCriticalSection (&lock->lock);
  if (lock->waiting_readers.array != NULL)
    free (lock->waiting_readers.array);
  if (lock->waiting_writers.array != NULL)
    free (lock->waiting_writers.array);
  lock->guard.done = 0;
  return 0;
}

/* --------------------- gl_recursive_lock_t datatype --------------------- */

void
glthread_recursive_lock_init_func (gl_recursive_lock_t *lock)
{
  lock->owner = 0;
  lock->depth = 0;
  InitializeCriticalSection (&lock->lock);
  lock->guard.done = 1;
}

int
glthread_recursive_lock_lock_func (gl_recursive_lock_t *lock)
{
  if (!lock->guard.done)
    {
      if (InterlockedIncrement (&lock->guard.started) == 0)
        /* This thread is the first one to need this lock.  Initialize it.  */
        glthread_recursive_lock_init (lock);
      else
        /* Yield the CPU while waiting for another thread to finish
           initializing this lock.  */
        while (!lock->guard.done)
          Sleep (0);
    }
  {
    DWORD self = GetCurrentThreadId ();
    if (lock->owner != self)
      {
        EnterCriticalSection (&lock->lock);
        lock->owner = self;
      }
    if (++(lock->depth) == 0) /* wraparound? */
      {
        lock->depth--;
        return EAGAIN;
      }
  }
  return 0;
}

int
glthread_recursive_lock_unlock_func (gl_recursive_lock_t *lock)
{
  if (lock->owner != GetCurrentThreadId ())
    return EPERM;
  if (lock->depth == 0)
    return EINVAL;
  if (--(lock->depth) == 0)
    {
      lock->owner = 0;
      LeaveCriticalSection (&lock->lock);
    }
  return 0;
}

int
glthread_recursive_lock_destroy_func (gl_recursive_lock_t *lock)
{
  if (lock->owner != 0)
    return EBUSY;
  DeleteCriticalSection (&lock->lock);
  lock->guard.done = 0;
  return 0;
}

/* -------------------------- gl_once_t datatype -------------------------- */

void
glthread_once_func (gl_once_t *once_control, void (*initfunction) (void))
{
  if (once_control->inited <= 0)
    {
      if (InterlockedIncrement (&once_control->started) == 0)
        {
          /* This thread is the first one to come to this once_control.  */
          InitializeCriticalSection (&once_control->lock);
          EnterCriticalSection (&once_control->lock);
          once_control->inited = 0;
          initfunction ();
          once_control->inited = 1;
          LeaveCriticalSection (&once_control->lock);
        }
      else
        {
          /* Undo last operation.  */
          InterlockedDecrement (&once_control->started);
          /* Some other thread has already started the initialization.
             Yield the CPU while waiting for the other thread to finish
             initializing and taking the lock.  */
          while (once_control->inited < 0)
            Sleep (0);
          if (once_control->inited <= 0)
            {
              /* Take the lock.  This blocks until the other thread has
                 finished calling the initfunction.  */
              EnterCriticalSection (&once_control->lock);
              LeaveCriticalSection (&once_control->lock);
              if (!(once_control->inited > 0))
                abort ();
            }
        }
    }
}

#endif

/* ========================================================================= */
