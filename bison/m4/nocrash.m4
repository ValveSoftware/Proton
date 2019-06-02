# nocrash.m4 serial 4
dnl Copyright (C) 2005, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl Based on libsigsegv, from Bruno Haible and Paolo Bonzini.

AC_PREREQ([2.13])

dnl Expands to some code for use in .c programs that will cause the configure
dnl test to exit instead of crashing. This is useful to avoid triggering
dnl action from a background debugger and to avoid core dumps.
dnl Usage:   ...
dnl          ]GL_NOCRASH[
dnl          ...
dnl          int main() { nocrash_init(); ... }
AC_DEFUN([GL_NOCRASH],[[
#include <stdlib.h>
#if defined __MACH__ && defined __APPLE__
/* Avoid a crash on Mac OS X.  */
#include <mach/mach.h>
#include <mach/mach_error.h>
#include <mach/thread_status.h>
#include <mach/exception.h>
#include <mach/task.h>
#include <pthread.h>
/* The exception port on which our thread listens.  */
static mach_port_t our_exception_port;
/* The main function of the thread listening for exceptions of type
   EXC_BAD_ACCESS.  */
static void *
mach_exception_thread (void *arg)
{
  /* Buffer for a message to be received.  */
  struct {
    mach_msg_header_t head;
    mach_msg_body_t msgh_body;
    char data[1024];
  } msg;
  mach_msg_return_t retval;
  /* Wait for a message on the exception port.  */
  retval = mach_msg (&msg.head, MACH_RCV_MSG | MACH_RCV_LARGE, 0, sizeof (msg),
                     our_exception_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
  if (retval != MACH_MSG_SUCCESS)
    abort ();
  exit (1);
}
static void
nocrash_init (void)
{
  mach_port_t self = mach_task_self ();
  /* Allocate a port on which the thread shall listen for exceptions.  */
  if (mach_port_allocate (self, MACH_PORT_RIGHT_RECEIVE, &our_exception_port)
      == KERN_SUCCESS) {
    /* See http://web.mit.edu/darwin/src/modules/xnu/osfmk/man/mach_port_insert_right.html.  */
    if (mach_port_insert_right (self, our_exception_port, our_exception_port,
                                MACH_MSG_TYPE_MAKE_SEND)
        == KERN_SUCCESS) {
      /* The exceptions we want to catch.  Only EXC_BAD_ACCESS is interesting
         for us.  */
      exception_mask_t mask = EXC_MASK_BAD_ACCESS;
      /* Create the thread listening on the exception port.  */
      pthread_attr_t attr;
      pthread_t thread;
      if (pthread_attr_init (&attr) == 0
          && pthread_attr_setdetachstate (&attr, PTHREAD_CREATE_DETACHED) == 0
          && pthread_create (&thread, &attr, mach_exception_thread, NULL) == 0) {
        pthread_attr_destroy (&attr);
        /* Replace the exception port info for these exceptions with our own.
           Note that we replace the exception port for the entire task, not only
           for a particular thread.  This has the effect that when our exception
           port gets the message, the thread specific exception port has already
           been asked, and we don't need to bother about it.
           See http://web.mit.edu/darwin/src/modules/xnu/osfmk/man/task_set_exception_ports.html.  */
        task_set_exception_ports (self, mask, our_exception_port,
                                  EXCEPTION_DEFAULT, MACHINE_THREAD_STATE);
      }
    }
  }
}
#elif (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
/* Avoid a crash on native Windows.  */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winerror.h>
static LONG WINAPI
exception_filter (EXCEPTION_POINTERS *ExceptionInfo)
{
  switch (ExceptionInfo->ExceptionRecord->ExceptionCode)
    {
    case EXCEPTION_ACCESS_VIOLATION:
    case EXCEPTION_IN_PAGE_ERROR:
    case EXCEPTION_STACK_OVERFLOW:
    case EXCEPTION_GUARD_PAGE:
    case EXCEPTION_PRIV_INSTRUCTION:
    case EXCEPTION_ILLEGAL_INSTRUCTION:
    case EXCEPTION_DATATYPE_MISALIGNMENT:
    case EXCEPTION_ARRAY_BOUNDS_EXCEEDED:
    case EXCEPTION_NONCONTINUABLE_EXCEPTION:
      exit (1);
    }
  return EXCEPTION_CONTINUE_SEARCH;
}
static void
nocrash_init (void)
{
  SetUnhandledExceptionFilter ((LPTOP_LEVEL_EXCEPTION_FILTER) exception_filter);
}
#else
/* Avoid a crash on POSIX systems.  */
#include <signal.h>
/* A POSIX signal handler.  */
static void
exception_handler (int sig)
{
  exit (1);
}
static void
nocrash_init (void)
{
#ifdef SIGSEGV
  signal (SIGSEGV, exception_handler);
#endif
#ifdef SIGBUS
  signal (SIGBUS, exception_handler);
#endif
}
#endif
]])
