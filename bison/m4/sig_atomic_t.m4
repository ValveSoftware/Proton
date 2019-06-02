# sig_atomic_t.m4 serial 3
dnl Copyright (C) 2003, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gt_TYPE_SIG_ATOMIC_T],
[
  AC_CHECK_TYPES([sig_atomic_t], ,
    [AC_DEFINE([sig_atomic_t], [int],
       [Define as an integer type suitable for memory locations that can be
        accessed atomically even in the presence of asynchronous signals.])],
    [#include <signal.h>])
])
