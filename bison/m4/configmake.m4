# configmake.m4 serial 2
dnl Copyright (C) 2010-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# gl_CONFIGMAKE_PREP
# ------------------
# Guarantee all of the standard directory variables, even when used with
# autoconf 2.59 (datarootdir wasn't supported until 2.59c, and runstatedir
# in 2.70) or automake 1.9.6 (pkglibexecdir wasn't supported until 1.10b,
# and runstatedir in 1.14.1).
AC_DEFUN([gl_CONFIGMAKE_PREP],
[
  dnl Technically, datadir should default to datarootdir.  But if
  dnl autoconf is too old to provide datarootdir, then reversing the
  dnl definition is a reasonable compromise.  Only AC_SUBST a variable
  dnl if it was not already defined earlier by autoconf.
  if test "x$datarootdir" = x; then
    AC_SUBST([datarootdir], ['${datadir}'])
  fi
  dnl Copy the approach used in autoconf 2.60.
  if test "x$docdir" = x; then
    AC_SUBST([docdir], [m4_ifset([AC_PACKAGE_TARNAME],
      ['${datarootdir}/doc/${PACKAGE_TARNAME}'],
      ['${datarootdir}/doc/${PACKAGE}'])])
  fi
  dnl The remaining variables missing from autoconf 2.59 are easier.
  if test "x$htmldir" = x; then
    AC_SUBST([htmldir], ['${docdir}'])
  fi
  if test "x$dvidir" = x; then
    AC_SUBST([dvidir], ['${docdir}'])
  fi
  if test "x$pdfdir" = x; then
    AC_SUBST([pdfdir], ['${docdir}'])
  fi
  if test "x$psdir" = x; then
    AC_SUBST([psdir], ['${docdir}'])
  fi
  if test "x$lispdir" = x; then
    AC_SUBST([lispdir], ['${datarootdir}/emacs/site-lisp'])
  fi
  if test "x$localedir" = x; then
    AC_SUBST([localedir], ['${datarootdir}/locale'])
  fi
  dnl Added in autoconf 2.70
  if test "x$runstatedir" = x; then
    AC_SUBST([runstatedir], ['${localstatedir}/run'])
  fi

  dnl Automake 1.9.6 only lacks pkglibexecdir; and since 1.11 merely
  dnl provides it without AC_SUBST, this blind use of AC_SUBST is safe.
  AC_SUBST([pkglibexecdir], ['${libexecdir}/${PACKAGE}'])
])
