# 00gnulib.m4 serial 3
dnl Copyright (C) 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl This file must be named something that sorts before all other
dnl gnulib-provided .m4 files.  It is needed until such time as we can
dnl assume Autoconf 2.64, with its improved AC_DEFUN_ONCE and
dnl m4_divert semantics.

# Until autoconf 2.63, handling of the diversion stack required m4_init
# to be called first; but this does not happen with aclocal.  Wrapping
# the entire execution in another layer of the diversion stack fixes this.
# Worse, prior to autoconf 2.62, m4_wrap depended on the underlying m4
# for whether it was FIFO or LIFO; in order to properly balance with
# m4_init, we need to undo our push just before anything wrapped within
# the m4_init body.  The way to ensure this is to wrap both sides of
# m4_init with a one-shot macro that does the pop at the right time.
m4_ifndef([_m4_divert_diversion],
[m4_divert_push([KILL])
m4_define([gl_divert_fixup], [m4_divert_pop()m4_define([$0])])
m4_define([m4_init],
  [gl_divert_fixup()]m4_defn([m4_init])[gl_divert_fixup()])])


# AC_DEFUN_ONCE([NAME], VALUE)
# ----------------------------
# Define NAME to expand to VALUE on the first use (whether by direct
# expansion, or by AC_REQUIRE), and to nothing on all subsequent uses.
# Avoid bugs in AC_REQUIRE in Autoconf 2.63 and earlier.  This
# definition is slower than the version in Autoconf 2.64, because it
# can only use interfaces that existed since 2.59; but it achieves the
# same effect.  Quoting is necessary to avoid confusing Automake.
m4_version_prereq([2.63.263], [],
[m4_define([AC][_DEFUN_ONCE],
  [AC][_DEFUN([$1],
    [AC_REQUIRE([_gl_DEFUN_ONCE([$1])],
      [m4_indir([_gl_DEFUN_ONCE([$1])])])])]dnl
[AC][_DEFUN([_gl_DEFUN_ONCE([$1])], [$2])])])

# gl_00GNULIB
# -----------
# Witness macro that this file has been included.  Needed to force
# Automake to include this file prior to all other gnulib .m4 files.
AC_DEFUN([gl_00GNULIB])
