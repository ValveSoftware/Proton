# Configure template for GNU Bison.                   -*-Autoconf-*-
#
# Copyright (C) 2001-2015 Free Software Foundation, Inc.
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

# In order for some versions of Sun Studio to compile our C++ test cases
# correctly, we need Autoconf 2.64 or better to handle the restrict
# keyword in at least string.h from gnulib.  We need Autoconf 2.68 or
# better to avoid a typo in the 'configure --help' entry for the YACC
# environment variable.
AC_PREREQ([2.68])
m4_pattern_forbid([^gl_[A-Z]])

AC_INIT([GNU Bison],
        m4_esyscmd([build-aux/git-version-gen .tarball-version]),
        [bug-bison@gnu.org])
AC_SUBST([PACKAGE_COPYRIGHT_YEAR], [2015])
AC_DEFINE_UNQUOTED([PACKAGE_COPYRIGHT_YEAR], [$PACKAGE_COPYRIGHT_YEAR],
                   [The copyright year for this package])

AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

# We use Automake 1.14's %D% and %C%.
#
# We want gnits strictness only when rolling a stable release.  For
# release candidates, we use version strings like 2.4.3_rc1, but gnits
# doesn't like that, so we let the underscore disable gnits.  Between
# releases, we want to be able run make dist without being required to
# add a bogus NEWS entry.  In that case, the version string
# automatically contains a dash, which we also let disable gnits.
AM_INIT_AUTOMAKE([1.14 dist-xz nostdinc
                 color-tests parallel-tests
                 silent-rules]
                 m4_bmatch(m4_defn([AC_PACKAGE_VERSION]), [[-_]],
                           [gnu], [gnits]))
AM_SILENT_RULES([yes])
AC_CONFIG_HEADERS([lib/config.h:lib/config.in.h])

# Checks for the compiler.
AC_PROG_CC_STDC
AC_PROG_CXX

# Gnulib (early checks).
gl_EARLY

# Gnulib uses '#pragma GCC diagnostic push' to silence some
# warnings, but older gcc doesn't support this.
AC_CACHE_CHECK([whether pragma GCC diagnostic push works],
  [lv_cv_gcc_pragma_push_works], [
  save_CFLAGS=$CFLAGS
  CFLAGS='-Wunknown-pragmas -Werror'
  AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[
    #pragma GCC diagnostic push
    #pragma GCC diagnostic pop
  ]])],
  [lv_cv_gcc_pragma_push_works=yes],
  [lv_cv_gcc_pragma_push_works=no])
  CFLAGS=$save_CFLAGS])

AC_ARG_ENABLE([gcc-warnings],
[  --enable-gcc-warnings   turn on lots of GCC warnings (not recommended).
                           Also, issue synclines from the examples/ to
                           the corresponding source in the Texinfo doc.],
[case $enable_gcc_warnings in
   yes|no) ;;
   *)  AC_MSG_ERROR([invalid value for --gcc-warnings: $enable_gcc_warnings]);;
 esac],
              [enable_gcc_warnings=no])
AM_CONDITIONAL([ENABLE_GCC_WARNINGS], [test "$enable_gcc_warnings" = yes])
if test "$enable_gcc_warnings" = yes; then
  warn_common='-Wall -Wextra -Wno-sign-compare -Wcast-align -Wdocumentation
    -Wformat -Wpointer-arith -Wwrite-strings'
  warn_c='-Wbad-function-cast -Wshadow -Wstrict-prototypes'
  warn_cxx='-Wnoexcept'
  # Warnings for the test suite only.
  #
  # -fno-color-diagnostics: Clang's use of colors in the error
  # messages is confusing the tests looking at the compiler's output
  # (e.g., synclines.at).
  warn_tests='-Wundef -pedantic -Wsign-compare -fno-color-diagnostics'

  AC_LANG_PUSH([C])
  # Clang supports many of GCC's -W options, but only issues warnings
  # on the ones it does not recognize.  In that case, gl_WARN_ADD
  # thinks the option is supported, and unknown options are then added
  # to CFLAGS.  But then, when -Werror is added in the test suite for
  # instance, the warning about the unknown option turns into an
  # error.
  #
  # This should be addressed by gnulib's gl_WARN_ADD, but in the
  # meanwhile, turn warnings about unknown options into errors in
  # CFLAGS, and restore CFLAGS after the tests.
  save_CFLAGS=$CFLAGS
  gl_WARN_ADD([-Werror=unknown-warning-option], [CFLAGS])
  for i in $warn_common $warn_c;
  do
    gl_WARN_ADD([$i], [WARN_CFLAGS])
  done
  gl_WARN_ADD([-Werror], [WERROR_CFLAGS])

  # Warnings for the test suite, and maybe for bison if GCC is modern
  # enough.
  gl_WARN_ADD([-Wmissing-declarations], [WARN_CFLAGS_TEST])
  gl_WARN_ADD([-Wmissing-prototypes], [WARN_CFLAGS_TEST])
  test $lv_cv_gcc_pragma_push_works = yes &&
    AS_VAR_APPEND([WARN_CFLAGS], [" $WARN_CFLAGS_TEST"])

  # Warnings for the test suite only.
  for i in $warn_tests;
  do
    gl_WARN_ADD([$i], [WARN_CFLAGS_TEST])
  done
  CFLAGS=$save_CFLAGS
  AC_LANG_POP([C])

  AC_LANG_PUSH([C++])
  save_CXXFLAGS=$CXXFLAGS
  gl_WARN_ADD([-Werror=unknown-warning-option], [CXXFLAGS])
  for i in $warn_common $warn_cxx;
  do
    gl_WARN_ADD([$i], [WARN_CXXFLAGS])
  done
  gl_WARN_ADD([-Wzero-as-null-pointer-constant], [WARN_CXXFLAGS],
              [AC_LANG_PROGRAM([], [nullptr])])
  gl_WARN_ADD([-Werror], [WERROR_CXXFLAGS])
  # Warnings for the test suite only.
  for i in $warn_tests;
  do
    gl_WARN_ADD([$i], [WARN_CXXFLAGS_TEST])
  done
  # Clang++ 3.2+ reject C code generated by Flex.
  gl_WARN_ADD([-Wno-null-conversion], [FLEX_SCANNER_CXXFLAGS])
  # So does G++ 4.8...
  gl_WARN_ADD([-Wno-sign-compare], [FLEX_SCANNER_CXXFLAGS])
  # ... possiby in std=c++11 mode.
  gl_WARN_ADD([-Wno-zero-as-null-pointer-constant], [FLEX_SCANNER_CXXFLAGS])
  CXXFLAGS=$save_CXXFLAGS
  AC_LANG_POP([C++])
fi

BISON_TEST_FOR_WORKING_C_COMPILER
BISON_C_COMPILER_POSIXLY_CORRECT
BISON_TEST_FOR_WORKING_CXX_COMPILER
BISON_CXX_COMPILER_POSIXLY_CORRECT

AC_ARG_ENABLE([yacc],
  [AC_HELP_STRING([--disable-yacc],
     [do not build a yacc command or an -ly library])],
  , [enable_yacc=yes])
AM_CONDITIONAL([ENABLE_YACC], [test "$enable_yacc" = yes])

# Checks for programs.
AM_MISSING_PROG([DOT], [dot])
AC_PROG_LEX
$LEX_IS_FLEX || test "X$LEX" = X: || {
  AC_MSG_WARN([bypassing lex because flex is required])
  LEX=:
}
AM_CONDITIONAL([FLEX_CXX_WORKS],
  [$LEX_IS_FLEX && test $bison_cv_cxx_works = yes])
AC_PROG_YACC
AC_PROG_RANLIB
AC_PROG_GNU_M4
AC_DEFINE_UNQUOTED([M4], ["$M4"], [Define to the GNU M4 executable name.])
AC_DEFINE_UNQUOTED([M4_GNU_OPTION], ["$M4_GNU"], [Define to "-g" if GNU M4
supports -g, otherwise to "".])
AC_PATH_PROG([PERL], [perl])
if test -z "$PERL"; then
   AC_MSG_ERROR([perl not found])
fi
AM_MISSING_PROG([HELP2MAN], [help2man])
AC_PATH_PROG([XSLTPROC], [xsltproc])
AC_SUBST([XSLTPROC])

# Checks for header files.
AC_CHECK_HEADERS_ONCE([locale.h])

# Checks for compiler characteristics.
AC_C_INLINE

# Gnulib (later checks).  Putting them here rather than right after
# gl_EARLY avoids some redundant checks.
gl_INIT

# Checks for library functions.
AC_CHECK_FUNCS_ONCE([setlocale])
AM_WITH_DMALLOC
BISON_PREREQ_TIMEVAR

# Gettext.
# We use gnulib, which is only guaranteed to work properly with the
# latest Gettext.
AM_GNU_GETTEXT([external], [need-ngettext])
AM_GNU_GETTEXT_VERSION([0.18])
BISON_I18N

# Internationalized parsers.
AC_CONFIG_FILES([runtime-po/Makefile.in])
# Autoconf macros for packages using internationalized parsers.
aclocaldir='${datadir}/aclocal'
AC_SUBST([aclocaldir])

# Create the benchmark script.
AC_CONFIG_FILES([etc/bench.pl], [chmod +x etc/bench.pl])

# Initialize the test suite.
AC_CONFIG_TESTDIR(tests)
AC_CONFIG_FILES([tests/atlocal])
AC_CONFIG_FILES([tests/bison], [chmod +x tests/bison])
AC_CHECK_PROGS([VALGRIND], [valgrind])
case $VALGRIND:$host_os in
  '':*) ;;
  *:darwin*)
    # See README-hacking.
    # VALGRIND+='-q --suppressions=$(abs_top_srcdir)/build-aux/darwin11.4.0.valgrind'
    VALGRIND=;;
  *:*)
    suppfile=build-aux/$host_os.valgrind
    if test -f "$srcdir/$suppfile"; then
      VALGRIND="$VALGRIND --gen-suppressions=all"
      VALGRIND="$VALGRIND --suppressions=\$(abs_top_srcdir)/$suppfile"
    fi
    AC_SUBST([VALGRIND_PREBISON], ["$VALGRIND -q"])
    ;;
esac

# Whether we cannot run the compiled bison.
AM_CONDITIONAL([CROSS_COMPILING], [test "$cross_compiling" = yes])

AM_MISSING_PROG([AUTOM4TE], [autom4te])
# Needed by tests/atlocal.in.
AC_SUBST([GCC])

gt_JAVACOMP([1.3], [1.4])
gt_JAVAEXEC

AC_CONFIG_FILES([Makefile
                 po/Makefile.in
                 doc/yacc.1])
AC_OUTPUT
