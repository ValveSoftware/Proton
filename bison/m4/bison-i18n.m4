# bison-i18n.m4 serial 2

dnl Copyright (C) 2005-2006, 2009-2015 Free Software Foundation, Inc.

dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Bruno Haible.

dnl Support for internationalization of bison-generated parsers.

dnl BISON_I18N
dnl should be used in configure.ac, after AM_GNU_GETTEXT. If USE_NLS is yes, it
dnl sets BISON_LOCALEDIR to indicate where to find the bison-runtime.mo files
dnl and defines YYENABLE_NLS if there are bison-runtime.mo files at all.
AC_DEFUN([BISON_I18N],
[
  if test -z "$USE_NLS"; then
    echo "The BISON-I18N macro is used without being preceded by AM-GNU-GETTEXT." 1>&2
    exit 1
  fi
  BISON_LOCALEDIR=
  BISON_USE_NLS=no
  if test "$USE_NLS" = yes; then
    dnl Determine bison's localedir.
    dnl AC_PROG_YACC sets the YACC variable; other macros set the BISON variable.
    dnl But even is YACC is called "yacc", it may be a script that invokes bison
    dnl and accepts the --print-localedir option.
    dnl YACC's default value is empty; BISON's default value is :.
    if (${YACC-${BISON-:}} --print-localedir) >/dev/null 2>&1; then
      BISON_LOCALEDIR=`${YACC-${BISON-:}} --print-localedir`
    fi
    AC_SUBST([BISON_LOCALEDIR])
    if test -n "$BISON_LOCALEDIR"; then
      dnl There is no need to enable internationalization if the user doesn't
      dnl want message catalogs.  So look at the language/locale names for
      dnl which the user wants message catalogs.  This is $LINGUAS.  If unset
      dnl or empty, he wants all of them.
      USER_LINGUAS="${LINGUAS-%UNSET%}"
      if test -n "$USER_LINGUAS"; then
        BISON_USE_NLS=yes
      fi
    fi
  fi
  if test $BISON_USE_NLS = yes; then
    AC_DEFINE([YYENABLE_NLS], 1,
      [Define to 1 to internationalize bison runtime messages.])
  fi
])
