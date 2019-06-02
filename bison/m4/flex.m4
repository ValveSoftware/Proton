# flex.m4 serial 2
# Copyright (C) 2012-2015 Free Software Foundation, Inc.
# This file is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# AC_PROG_LEX
# -----------
# Look for flex or lex.  Set its associated library to LEXLIB.
# Check if lex declares yytext as a char * by default, not a char[].
AN_MAKEVAR([LEX],  [AC_PROG_LEX])
AN_PROGRAM([lex],  [AC_PROG_LEX])
AN_PROGRAM([flex], [AC_PROG_LEX])
AC_DEFUN_ONCE([AC_PROG_LEX],
[AC_CHECK_PROGS([LEX], [flex lex], [:])
if test "x$LEX" != "x:"; then
  _AC_PROG_LEX_YYTEXT_DECL
fi])


# _AC_PROG_LEX_YYTEXT_DECL
# ------------------------
# Check whether this is Flex, for the Lex output root, the Lex library,
# and whether Lex declares yytext as a char * by default.
m4_define([_AC_PROG_LEX_YYTEXT_DECL],
[AC_CACHE_CHECK([whether lex is flex],
                [ac_cv_prog_lex_is_flex],
[cat >conftest.l <<_ACEOF[
%option debug nodefault noinput nounput noyywrap never-interactive
%x SC_CONF_TEST
%%
a { BEGIN SC_CONF_TEST; }
]_ACEOF
if _AC_DO_VAR([LEX conftest.l]); then
  ac_cv_prog_lex_is_flex=yes
else
  ac_cv_prog_lex_is_flex=no
fi
])
AC_SUBST([LEX_IS_FLEX],
         [`test "$ac_cv_prog_lex_is_flex" = yes && echo true || echo false`])dnl

cat >conftest.l <<_ACEOF[
%%
a { ECHO; }
b { REJECT; }
c { yymore (); }
d { yyless (1); }
e { /* IRIX 6.5 flex 2.5.4 underquotes its yyless argument.  */
    yyless ((input () != 0)); }
f { unput (yytext[0]); }
. { BEGIN INITIAL; }
%%
#ifdef YYTEXT_POINTER
extern char *yytext;
#endif
int
main (void)
{
  return ! yylex () + ! yywrap ();
}
]_ACEOF
_AC_DO_VAR([LEX conftest.l])
AC_CACHE_CHECK([lex output file root], [ac_cv_prog_lex_root], [
if test -f lex.yy.c; then
  ac_cv_prog_lex_root=lex.yy
elif test -f lexyy.c; then
  ac_cv_prog_lex_root=lexyy
else
  AC_MSG_ERROR([cannot find output from $LEX; giving up])
fi])
AC_SUBST([LEX_OUTPUT_ROOT], [$ac_cv_prog_lex_root])dnl

if test -z "${LEXLIB+set}"; then
  AC_CACHE_CHECK([lex library], [ac_cv_lib_lex], [
    ac_save_LIBS=$LIBS
    ac_cv_lib_lex='none needed'
    for ac_lib in '' -lfl -ll; do
      LIBS="$ac_lib $ac_save_LIBS"
      AC_LINK_IFELSE([AC_LANG_DEFINES_PROVIDED[`cat $LEX_OUTPUT_ROOT.c`]],
        [ac_cv_lib_lex=$ac_lib])
      test "$ac_cv_lib_lex" != 'none needed' && break
    done
    LIBS=$ac_save_LIBS
  ])
  test "$ac_cv_lib_lex" != 'none needed' && LEXLIB=$ac_cv_lib_lex
fi
AC_SUBST([LEXLIB])

AC_CACHE_CHECK([whether yytext is a pointer],
               [ac_cv_prog_lex_yytext_pointer],
[# POSIX says lex can declare yytext either as a pointer or an array; the
# default is implementation-dependent.  Figure out which it is, since
# not all implementations provide the %pointer and %array declarations.
ac_cv_prog_lex_yytext_pointer=no
ac_save_LIBS=$LIBS
LIBS="$LEXLIB $ac_save_LIBS"
AC_LINK_IFELSE([AC_LANG_DEFINES_PROVIDED
  [#define YYTEXT_POINTER 1
`cat $LEX_OUTPUT_ROOT.c`]],
  [ac_cv_prog_lex_yytext_pointer=yes])
LIBS=$ac_save_LIBS
])
dnl
if test $ac_cv_prog_lex_yytext_pointer = yes; then
  AC_DEFINE([YYTEXT_POINTER], [1],
            [Define to 1 if `lex' declares `yytext' as a `char *' by default,
             not a `char[]'.])
fi
rm -f conftest.l $LEX_OUTPUT_ROOT.c
])# _AC_PROG_LEX_YYTEXT_DECL
