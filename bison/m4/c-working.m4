# Sanity test a C compiler.

# Copyright (C) 2006, 2009-2015 Free Software Foundation, Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

# Written by Paul Eggert.

AC_DEFUN([BISON_TEST_FOR_WORKING_C_COMPILER], [
  AC_COMPILE_IFELSE(
    [AC_LANG_PROGRAM(
       [[#include <limits.h>
         int test_array[CHAR_BIT];]])],
    [],
    [AC_MSG_FAILURE([cannot compile a simple C program])])
   AC_SUBST([BISON_C_WORKS], [:])
])

# BISON_CHECK_WITH_POSIXLY_CORRECT(CODE)
# --------------------------------------
# Run the Autoconf CODE with POSIXLY_CORRECT set to 1, and restored to
# its initial value afterwards.
AC_DEFUN([BISON_CHECK_WITH_POSIXLY_CORRECT],
[gl_awk_probe='BEGIN { if ("POSIXLY_CORRECT" in ENVIRON) print "x" }'
case ${POSIXLY_CORRECT+x}`$AWK "$gl_awk_probe" </dev/null` in
  xx) gl_had_POSIXLY_CORRECT=exported ;;
  x)  gl_had_POSIXLY_CORRECT=yes      ;;
  *)  gl_had_POSIXLY_CORRECT=         ;;
esac
POSIXLY_CORRECT=1
export POSIXLY_CORRECT
$1
case $gl_had_POSIXLY_CORRECT in
  exported) ;;
  yes) AS_UNSET([POSIXLY_CORRECT]); POSIXLY_CORRECT=1 ;;
  *) AS_UNSET([POSIXLY_CORRECT]) ;;
esac
])

# BISON_LANG_COMPILER_POSIXLY_CORRECT
# -----------------------------------
# Whether the compiler for the current language supports -g in
# POSIXLY_CORRECT mode.  clang-2.9 on OS X does not, because
# "clang-mp-2.9 -o test -g test.c" launches "/usr/bin/dsymutil test -o
# test.dSYM" which fails with "error: unable to open executable '-o'".
#
# Sets <LANG>_COMPILER_POSIXLY_CORRECT to true/false.
AC_DEFUN([BISON_LANG_COMPILER_POSIXLY_CORRECT],
[AC_CACHE_CHECK([whether $_AC_CC supports POSIXLY_CORRECT=1],
                [bison_cv_[]_AC_LANG_ABBREV[]_supports_posixly_correct],
[BISON_CHECK_WITH_POSIXLY_CORRECT(
[AC_LINK_IFELSE([AC_LANG_PROGRAM],
                [bison_cv_[]_AC_LANG_ABBREV[]_supports_posixly_correct=yes],
                [bison_cv_[]_AC_LANG_ABBREV[]_supports_posixly_correct=no])])])
case $bison_cv_[]_AC_LANG_ABBREV[]_supports_posixly_correct in
  yes) AC_SUBST(_AC_LANG_PREFIX[_COMPILER_POSIXLY_CORRECT], [true]) ;;
  no)  AC_SUBST(_AC_LANG_PREFIX[_COMPILER_POSIXLY_CORRECT], [false]);;
esac
])

# BISON_C_COMPILER_POSIXLY_CORRECT
# --------------------------------
# Whether the C compiler supports -g in POSIXLY_CORRECT mode.
AC_DEFUN([BISON_C_COMPILER_POSIXLY_CORRECT],
[AC_LANG_PUSH([C])
BISON_LANG_COMPILER_POSIXLY_CORRECT
AC_LANG_POP([C])
])
