# include_next.m4 serial 23
dnl Copyright (C) 2006-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Paul Eggert and Derek Price.

dnl Sets INCLUDE_NEXT and PRAGMA_SYSTEM_HEADER.
dnl
dnl INCLUDE_NEXT expands to 'include_next' if the compiler supports it, or to
dnl 'include' otherwise.
dnl
dnl INCLUDE_NEXT_AS_FIRST_DIRECTIVE expands to 'include_next' if the compiler
dnl supports it in the special case that it is the first include directive in
dnl the given file, or to 'include' otherwise.
dnl
dnl PRAGMA_SYSTEM_HEADER can be used in files that contain #include_next,
dnl so as to avoid GCC warnings when the gcc option -pedantic is used.
dnl '#pragma GCC system_header' has the same effect as if the file was found
dnl through the include search path specified with '-isystem' options (as
dnl opposed to the search path specified with '-I' options). Namely, gcc
dnl does not warn about some things, and on some systems (Solaris and Interix)
dnl __STDC__ evaluates to 0 instead of to 1. The latter is an undesired side
dnl effect; we are therefore careful to use 'defined __STDC__' or '1' instead
dnl of plain '__STDC__'.
dnl
dnl PRAGMA_COLUMNS can be used in files that override system header files, so
dnl as to avoid compilation errors on HP NonStop systems when the gnulib file
dnl is included by a system header file that does a "#pragma COLUMNS 80" (which
dnl has the effect of truncating the lines of that file and all files that it
dnl includes to 80 columns) and the gnulib file has lines longer than 80
dnl columns.

AC_DEFUN([gl_INCLUDE_NEXT],
[
  AC_LANG_PREPROC_REQUIRE()
  AC_CACHE_CHECK([whether the preprocessor supports include_next],
    [gl_cv_have_include_next],
    [rm -rf conftestd1a conftestd1b conftestd2
     mkdir conftestd1a conftestd1b conftestd2
     dnl IBM C 9.0, 10.1 (original versions, prior to the 2009-01 updates) on
     dnl AIX 6.1 support include_next when used as first preprocessor directive
     dnl in a file, but not when preceded by another include directive. Check
     dnl for this bug by including <stdio.h>.
     dnl Additionally, with this same compiler, include_next is a no-op when
     dnl used in a header file that was included by specifying its absolute
     dnl file name. Despite these two bugs, include_next is used in the
     dnl compiler's <math.h>. By virtue of the second bug, we need to use
     dnl include_next as well in this case.
     cat <<EOF > conftestd1a/conftest.h
#define DEFINED_IN_CONFTESTD1
#include_next <conftest.h>
#ifdef DEFINED_IN_CONFTESTD2
int foo;
#else
#error "include_next doesn't work"
#endif
EOF
     cat <<EOF > conftestd1b/conftest.h
#define DEFINED_IN_CONFTESTD1
#include <stdio.h>
#include_next <conftest.h>
#ifdef DEFINED_IN_CONFTESTD2
int foo;
#else
#error "include_next doesn't work"
#endif
EOF
     cat <<EOF > conftestd2/conftest.h
#ifndef DEFINED_IN_CONFTESTD1
#error "include_next test doesn't work"
#endif
#define DEFINED_IN_CONFTESTD2
EOF
     gl_save_CPPFLAGS="$CPPFLAGS"
     CPPFLAGS="$gl_save_CPPFLAGS -Iconftestd1b -Iconftestd2"
dnl We intentionally avoid using AC_LANG_SOURCE here.
     AC_COMPILE_IFELSE([AC_LANG_DEFINES_PROVIDED[#include <conftest.h>]],
       [gl_cv_have_include_next=yes],
       [CPPFLAGS="$gl_save_CPPFLAGS -Iconftestd1a -Iconftestd2"
        AC_COMPILE_IFELSE([AC_LANG_DEFINES_PROVIDED[#include <conftest.h>]],
          [gl_cv_have_include_next=buggy],
          [gl_cv_have_include_next=no])
       ])
     CPPFLAGS="$gl_save_CPPFLAGS"
     rm -rf conftestd1a conftestd1b conftestd2
    ])
  PRAGMA_SYSTEM_HEADER=
  if test $gl_cv_have_include_next = yes; then
    INCLUDE_NEXT=include_next
    INCLUDE_NEXT_AS_FIRST_DIRECTIVE=include_next
    if test -n "$GCC"; then
      PRAGMA_SYSTEM_HEADER='#pragma GCC system_header'
    fi
  else
    if test $gl_cv_have_include_next = buggy; then
      INCLUDE_NEXT=include
      INCLUDE_NEXT_AS_FIRST_DIRECTIVE=include_next
    else
      INCLUDE_NEXT=include
      INCLUDE_NEXT_AS_FIRST_DIRECTIVE=include
    fi
  fi
  AC_SUBST([INCLUDE_NEXT])
  AC_SUBST([INCLUDE_NEXT_AS_FIRST_DIRECTIVE])
  AC_SUBST([PRAGMA_SYSTEM_HEADER])
  AC_CACHE_CHECK([whether system header files limit the line length],
    [gl_cv_pragma_columns],
    [dnl HP NonStop systems, which define __TANDEM, have this misfeature.
     AC_EGREP_CPP([choke me],
       [
#ifdef __TANDEM
choke me
#endif
       ],
       [gl_cv_pragma_columns=yes],
       [gl_cv_pragma_columns=no])
    ])
  if test $gl_cv_pragma_columns = yes; then
    PRAGMA_COLUMNS="#pragma COLUMNS 10000"
  else
    PRAGMA_COLUMNS=
  fi
  AC_SUBST([PRAGMA_COLUMNS])
])

# gl_CHECK_NEXT_HEADERS(HEADER1 HEADER2 ...)
# ------------------------------------------
# For each arg foo.h, if #include_next works, define NEXT_FOO_H to be
# '<foo.h>'; otherwise define it to be
# '"///usr/include/foo.h"', or whatever other absolute file name is suitable.
# Also, if #include_next works as first preprocessing directive in a file,
# define NEXT_AS_FIRST_DIRECTIVE_FOO_H to be '<foo.h>'; otherwise define it to
# be
# '"///usr/include/foo.h"', or whatever other absolute file name is suitable.
# That way, a header file with the following line:
#       #@INCLUDE_NEXT@ @NEXT_FOO_H@
# or
#       #@INCLUDE_NEXT_AS_FIRST_DIRECTIVE@ @NEXT_AS_FIRST_DIRECTIVE_FOO_H@
# behaves (after sed substitution) as if it contained
#       #include_next <foo.h>
# even if the compiler does not support include_next.
# The three "///" are to pacify Sun C 5.8, which otherwise would say
# "warning: #include of /usr/include/... may be non-portable".
# Use '""', not '<>', so that the /// cannot be confused with a C99 comment.
# Note: This macro assumes that the header file is not empty after
# preprocessing, i.e. it does not only define preprocessor macros but also
# provides some type/enum definitions or function/variable declarations.
#
# This macro also checks whether each header exists, by invoking
# AC_CHECK_HEADERS_ONCE or AC_CHECK_HEADERS on each argument.
AC_DEFUN([gl_CHECK_NEXT_HEADERS],
[
  gl_NEXT_HEADERS_INTERNAL([$1], [check])
])

# gl_NEXT_HEADERS(HEADER1 HEADER2 ...)
# ------------------------------------
# Like gl_CHECK_NEXT_HEADERS, except do not check whether the headers exist.
# This is suitable for headers like <stddef.h> that are standardized by C89
# and therefore can be assumed to exist.
AC_DEFUN([gl_NEXT_HEADERS],
[
  gl_NEXT_HEADERS_INTERNAL([$1], [assume])
])

# The guts of gl_CHECK_NEXT_HEADERS and gl_NEXT_HEADERS.
AC_DEFUN([gl_NEXT_HEADERS_INTERNAL],
[
  AC_REQUIRE([gl_INCLUDE_NEXT])
  AC_REQUIRE([AC_CANONICAL_HOST])

  m4_if([$2], [check],
    [AC_CHECK_HEADERS_ONCE([$1])
    ])

dnl FIXME: gl_next_header and gl_header_exists must be used unquoted
dnl until we can assume autoconf 2.64 or newer.
  m4_foreach_w([gl_HEADER_NAME], [$1],
    [AS_VAR_PUSHDEF([gl_next_header],
                    [gl_cv_next_]m4_defn([gl_HEADER_NAME]))
     if test $gl_cv_have_include_next = yes; then
       AS_VAR_SET(gl_next_header, ['<'gl_HEADER_NAME'>'])
     else
       AC_CACHE_CHECK(
         [absolute name of <]m4_defn([gl_HEADER_NAME])[>],
         m4_defn([gl_next_header]),
         [m4_if([$2], [check],
            [AS_VAR_PUSHDEF([gl_header_exists],
                            [ac_cv_header_]m4_defn([gl_HEADER_NAME]))
             if test AS_VAR_GET(gl_header_exists) = yes; then
             AS_VAR_POPDEF([gl_header_exists])
            ])
           gl_ABSOLUTE_HEADER_ONE(gl_HEADER_NAME)
           AS_VAR_COPY([gl_header], [gl_cv_absolute_]AS_TR_SH(gl_HEADER_NAME))
           AS_VAR_SET(gl_next_header, ['"'$gl_header'"'])
          m4_if([$2], [check],
            [else
               AS_VAR_SET(gl_next_header, ['<'gl_HEADER_NAME'>'])
             fi
            ])
         ])
     fi
     AC_SUBST(
       AS_TR_CPP([NEXT_]m4_defn([gl_HEADER_NAME])),
       [AS_VAR_GET(gl_next_header)])
     if test $gl_cv_have_include_next = yes || test $gl_cv_have_include_next = buggy; then
       # INCLUDE_NEXT_AS_FIRST_DIRECTIVE='include_next'
       gl_next_as_first_directive='<'gl_HEADER_NAME'>'
     else
       # INCLUDE_NEXT_AS_FIRST_DIRECTIVE='include'
       gl_next_as_first_directive=AS_VAR_GET(gl_next_header)
     fi
     AC_SUBST(
       AS_TR_CPP([NEXT_AS_FIRST_DIRECTIVE_]m4_defn([gl_HEADER_NAME])),
       [$gl_next_as_first_directive])
     AS_VAR_POPDEF([gl_next_header])])
])

# Autoconf 2.68 added warnings for our use of AC_COMPILE_IFELSE;
# this fallback is safe for all earlier autoconf versions.
m4_define_default([AC_LANG_DEFINES_PROVIDED])
