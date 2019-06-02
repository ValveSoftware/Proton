# fpieee.m4 serial 2
dnl Copyright (C) 2007, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl IEEE 754 standardized three items:
dnl - The formats of single-float and double-float - nowadays commonly
dnl   available as 'float' and 'double' in C and C++.
dnl   No autoconf test needed.
dnl - The overflow and division by zero behaviour: The result are values
dnl   '±Inf' and 'NaN', rather than exceptions as it was before.
dnl   This file provides an autoconf macro for ensuring this behaviour of
dnl   floating-point operations.
dnl - A set of conditions (overflow, underflow, inexact, etc.) which can
dnl   be configured to trigger an exception.
dnl   This cannot be done in a portable way: it depends on the compiler,
dnl   libc, kernel, and CPU.  No autoconf macro is provided for this.

dnl Ensure non-trapping behaviour of floating-point overflow and
dnl floating-point division by zero.
dnl (For integer overflow, see gcc's -ftrapv option; for integer division by
dnl zero, see the autoconf macro in intdiv0.m4.)

AC_DEFUN([gl_FP_IEEE],
[
  AC_REQUIRE([AC_PROG_CC])
  AC_REQUIRE([AC_CANONICAL_HOST])
  # IEEE behaviour is the default on all CPUs except Alpha and SH
  # (according to the test results of Bruno Haible's ieeefp/fenv_default.m4
  # and the GCC 4.1.2 manual).
  case "$host_cpu" in
    alpha*)
      # On Alpha systems, a compiler option provides the behaviour.
      # See the ieee(3) manual page, also available at
      # <http://h30097.www3.hp.com/docs/base_doc/DOCUMENTATION/V51B_HTML/MAN/MAN3/0600____.HTM>
      if test -n "$GCC"; then
        # GCC has the option -mieee.
        # For full IEEE compliance (rarely needed), use option -mieee-with-inexact.
        CPPFLAGS="$CPPFLAGS -mieee"
      else
        # Compaq (ex-DEC) C has the option -ieee, equivalent to -ieee_with_no_inexact.
        # For full IEEE compliance (rarely needed), use option -ieee_with_inexact.
        CPPFLAGS="$CPPFLAGS -ieee"
      fi
      ;;
    sh*)
      if test -n "$GCC"; then
        # GCC has the option -mieee.
        CPPFLAGS="$CPPFLAGS -mieee"
      fi
      ;;
  esac
])
