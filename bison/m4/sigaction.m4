# sigaction.m4 serial 7
dnl Copyright (C) 2008-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# Determine if sigaction interface is present.
AC_DEFUN([gl_SIGACTION],
[
  AC_REQUIRE([gl_SIGNAL_H_DEFAULTS])
  AC_CHECK_FUNCS_ONCE([sigaction])
  if test $ac_cv_func_sigaction = yes; then
    AC_CHECK_MEMBERS([struct sigaction.sa_sigaction], , ,
                     [[#include <signal.h>]])
    if test $ac_cv_member_struct_sigaction_sa_sigaction = no; then
      HAVE_STRUCT_SIGACTION_SA_SIGACTION=0
    fi
  else
    HAVE_SIGACTION=0
  fi
])

# Prerequisites of the part of lib/signal.in.h and of lib/sigaction.c.
AC_DEFUN([gl_PREREQ_SIGACTION],
[
  AC_REQUIRE([gl_SIGNAL_H_DEFAULTS])
  AC_REQUIRE([AC_C_RESTRICT])
  AC_REQUIRE([AC_TYPE_UID_T])
  AC_REQUIRE([gl_PREREQ_SIG_HANDLER_H])
  AC_CHECK_FUNCS_ONCE([sigaltstack siginterrupt])
  AC_CHECK_TYPES([siginfo_t], [], [], [[
#include <signal.h>
  ]])
  if test $ac_cv_type_siginfo_t = no; then
    HAVE_SIGINFO_T=0
  fi
])

# Prerequisites of lib/sig-handler.h.
AC_DEFUN([gl_PREREQ_SIG_HANDLER_H], [:])
