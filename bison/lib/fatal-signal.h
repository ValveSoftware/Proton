/* Emergency actions in case of a fatal signal.
   Copyright (C) 2003-2004, 2009-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2003.

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


#ifdef __cplusplus
extern "C" {
#endif


/* It is often useful to do some cleanup action when a usually fatal signal
   terminates the process, like removing a temporary file or killing a
   subprocess that may be stuck waiting for a device, pipe or network input.
   Such signals are SIGHUP, SIGINT, SIGPIPE, SIGTERM, and possibly others.
   The limitation of this facility is that it cannot work for SIGKILL.

   Signals with a SIG_IGN handler are considered to be non-fatal.  The
   functions in this file assume that when a SIG_IGN handler is installed
   for a signal, it was installed before any functions in this file were
   called and it stays so for the whole lifetime of the process.  */

/* Register a cleanup function to be executed when a catchable fatal signal
   occurs.

   Restrictions for the cleanup function:
     - The cleanup function can do all kinds of system calls.
     - It can also access application dependent memory locations and data
       structures provided they are in a consistent state. One way to ensure
       this is through block_fatal_signals()/unblock_fatal_signals(), see
       below.  Another - more tricky - way to ensure this is the careful use
       of 'volatile'.
   However,
     - malloc() and similarly complex facilities are not safe to be called
       because they are not guaranteed to be in a consistent state.
     - Also, the cleanup function must not block the catchable fatal signals
       and leave them blocked upon return.

   The cleanup function is executed asynchronously.  It is unspecified
   whether during its execution the catchable fatal signals are blocked
   or not.  */
extern void at_fatal_signal (void (*function) (void));


/* Sometimes it is necessary to block the usually fatal signals while the
   data structures being accessed by the cleanup action are being built or
   reorganized.  This is the case, for example, when a temporary file or
   directory is created through mkstemp() or mkdtemp(), because these
   functions create the temporary file or directory _before_ returning its
   name to the application.  */

/* Temporarily delay the catchable fatal signals.
   The signals will be blocked (= delayed) until the next call to
   unblock_fatal_signals().  If the signals are already blocked, a further
   call to block_fatal_signals() has no effect.  */
extern void block_fatal_signals (void);

/* Stop delaying the catchable fatal signals.  */
extern void unblock_fatal_signals (void);


#ifdef __cplusplus
}
#endif
