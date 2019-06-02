# gnulib-common.m4 serial 36
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# gl_COMMON
# is expanded unconditionally through gnulib-tool magic.
AC_DEFUN([gl_COMMON], [
  dnl Use AC_REQUIRE here, so that the code is expanded once only.
  AC_REQUIRE([gl_00GNULIB])
  AC_REQUIRE([gl_COMMON_BODY])
])
AC_DEFUN([gl_COMMON_BODY], [
  AH_VERBATIM([_Noreturn],
[/* The _Noreturn keyword of C11.  */
#if ! (defined _Noreturn \
       || (defined __STDC_VERSION__ && 201112 <= __STDC_VERSION__))
# if (3 <= __GNUC__ || (__GNUC__ == 2 && 8 <= __GNUC_MINOR__) \
      || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif
])
  AH_VERBATIM([isoc99_inline],
[/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif])
  AH_VERBATIM([unused_parameter],
[/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED

/* gcc supports the "unused" attribute on possibly unused labels, and
   g++ has since version 4.5.  Note to support C++ as well as C,
   _GL_UNUSED_LABEL should be used with a trailing ;  */
#if !defined __cplusplus || __GNUC__ > 4 \
    || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
# define _GL_UNUSED_LABEL _GL_UNUSED
#else
# define _GL_UNUSED_LABEL
#endif

/* The __pure__ attribute was added in gcc 2.96.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The __const__ attribute was added in gcc 2.95.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
# define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
#else
# define _GL_ATTRIBUTE_CONST /* empty */
#endif
])
  dnl Preparation for running test programs:
  dnl Tell glibc to write diagnostics from -D_FORTIFY_SOURCE=2 to stderr, not
  dnl to /dev/tty, so they can be redirected to log files.  Such diagnostics
  dnl arise e.g., in the macros gl_PRINTF_DIRECTIVE_N, gl_SNPRINTF_DIRECTIVE_N.
  LIBC_FATAL_STDERR_=1
  export LIBC_FATAL_STDERR_
])

# gl_MODULE_INDICATOR_CONDITION
# expands to a C preprocessor expression that evaluates to 1 or 0, depending
# whether a gnulib module that has been requested shall be considered present
# or not.
m4_define([gl_MODULE_INDICATOR_CONDITION], [1])

# gl_MODULE_INDICATOR_SET_VARIABLE([modulename])
# sets the shell variable that indicates the presence of the given module to
# a C preprocessor expression that will evaluate to 1.
AC_DEFUN([gl_MODULE_INDICATOR_SET_VARIABLE],
[
  gl_MODULE_INDICATOR_SET_VARIABLE_AUX(
    [GNULIB_[]m4_translit([[$1]],
                          [abcdefghijklmnopqrstuvwxyz./-],
                          [ABCDEFGHIJKLMNOPQRSTUVWXYZ___])],
    [gl_MODULE_INDICATOR_CONDITION])
])

# gl_MODULE_INDICATOR_SET_VARIABLE_AUX([variable])
# modifies the shell variable to include the gl_MODULE_INDICATOR_CONDITION.
# The shell variable's value is a C preprocessor expression that evaluates
# to 0 or 1.
AC_DEFUN([gl_MODULE_INDICATOR_SET_VARIABLE_AUX],
[
  m4_if(m4_defn([gl_MODULE_INDICATOR_CONDITION]), [1],
    [
     dnl Simplify the expression VALUE || 1 to 1.
     $1=1
    ],
    [gl_MODULE_INDICATOR_SET_VARIABLE_AUX_OR([$1],
                                             [gl_MODULE_INDICATOR_CONDITION])])
])

# gl_MODULE_INDICATOR_SET_VARIABLE_AUX_OR([variable], [condition])
# modifies the shell variable to include the given condition.  The shell
# variable's value is a C preprocessor expression that evaluates to 0 or 1.
AC_DEFUN([gl_MODULE_INDICATOR_SET_VARIABLE_AUX_OR],
[
  dnl Simplify the expression 1 || CONDITION to 1.
  if test "$[]$1" != 1; then
    dnl Simplify the expression 0 || CONDITION to CONDITION.
    if test "$[]$1" = 0; then
      $1=$2
    else
      $1="($[]$1 || $2)"
    fi
  fi
])

# gl_MODULE_INDICATOR([modulename])
# defines a C macro indicating the presence of the given module
# in a location where it can be used.
#                                             |  Value  |   Value   |
#                                             | in lib/ | in tests/ |
# --------------------------------------------+---------+-----------+
# Module present among main modules:          |    1    |     1     |
# --------------------------------------------+---------+-----------+
# Module present among tests-related modules: |    0    |     1     |
# --------------------------------------------+---------+-----------+
# Module not present at all:                  |    0    |     0     |
# --------------------------------------------+---------+-----------+
AC_DEFUN([gl_MODULE_INDICATOR],
[
  AC_DEFINE_UNQUOTED([GNULIB_]m4_translit([[$1]],
      [abcdefghijklmnopqrstuvwxyz./-],
      [ABCDEFGHIJKLMNOPQRSTUVWXYZ___]),
    [gl_MODULE_INDICATOR_CONDITION],
    [Define to a C preprocessor expression that evaluates to 1 or 0,
     depending whether the gnulib module $1 shall be considered present.])
])

# gl_MODULE_INDICATOR_FOR_TESTS([modulename])
# defines a C macro indicating the presence of the given module
# in lib or tests. This is useful to determine whether the module
# should be tested.
#                                             |  Value  |   Value   |
#                                             | in lib/ | in tests/ |
# --------------------------------------------+---------+-----------+
# Module present among main modules:          |    1    |     1     |
# --------------------------------------------+---------+-----------+
# Module present among tests-related modules: |    1    |     1     |
# --------------------------------------------+---------+-----------+
# Module not present at all:                  |    0    |     0     |
# --------------------------------------------+---------+-----------+
AC_DEFUN([gl_MODULE_INDICATOR_FOR_TESTS],
[
  AC_DEFINE([GNULIB_TEST_]m4_translit([[$1]],
      [abcdefghijklmnopqrstuvwxyz./-],
      [ABCDEFGHIJKLMNOPQRSTUVWXYZ___]), [1],
    [Define to 1 when the gnulib module $1 should be tested.])
])

# gl_ASSERT_NO_GNULIB_POSIXCHECK
# asserts that there will never be a need to #define GNULIB_POSIXCHECK.
# and thereby enables an optimization of configure and config.h.
# Used by Emacs.
AC_DEFUN([gl_ASSERT_NO_GNULIB_POSIXCHECK],
[
  dnl Override gl_WARN_ON_USE_PREPARE.
  dnl But hide this definition from 'aclocal'.
  AC_DEFUN([gl_W][ARN_ON_USE_PREPARE], [])
])

# gl_ASSERT_NO_GNULIB_TESTS
# asserts that there will be no gnulib tests in the scope of the configure.ac
# and thereby enables an optimization of config.h.
# Used by Emacs.
AC_DEFUN([gl_ASSERT_NO_GNULIB_TESTS],
[
  dnl Override gl_MODULE_INDICATOR_FOR_TESTS.
  AC_DEFUN([gl_MODULE_INDICATOR_FOR_TESTS], [])
])

# Test whether <features.h> exists.
# Set HAVE_FEATURES_H.
AC_DEFUN([gl_FEATURES_H],
[
  AC_CHECK_HEADERS_ONCE([features.h])
  if test $ac_cv_header_features_h = yes; then
    HAVE_FEATURES_H=1
  else
    HAVE_FEATURES_H=0
  fi
  AC_SUBST([HAVE_FEATURES_H])
])

# m4_foreach_w
# is a backport of autoconf-2.59c's m4_foreach_w.
# Remove this macro when we can assume autoconf >= 2.60.
m4_ifndef([m4_foreach_w],
  [m4_define([m4_foreach_w],
    [m4_foreach([$1], m4_split(m4_normalize([$2]), [ ]), [$3])])])

# AS_VAR_IF(VAR, VALUE, [IF-MATCH], [IF-NOT-MATCH])
# ----------------------------------------------------
# Backport of autoconf-2.63b's macro.
# Remove this macro when we can assume autoconf >= 2.64.
m4_ifndef([AS_VAR_IF],
[m4_define([AS_VAR_IF],
[AS_IF([test x"AS_VAR_GET([$1])" = x""$2], [$3], [$4])])])

# gl_PROG_CC_C99
# Modifies the value of the shell variable CC in an attempt to make $CC
# understand ISO C99 source code.
# This is like AC_PROG_CC_C99, except that
# - AC_PROG_CC_C99 did not exist in Autoconf versions < 2.60,
# - AC_PROG_CC_C99 does not mix well with AC_PROG_CC_STDC
#   <http://lists.gnu.org/archive/html/bug-gnulib/2011-09/msg00367.html>,
#   but many more packages use AC_PROG_CC_STDC than AC_PROG_CC_C99
#   <http://lists.gnu.org/archive/html/bug-gnulib/2011-09/msg00441.html>.
# Remaining problems:
# - When AC_PROG_CC_STDC is invoked twice, it adds the C99 enabling options
#   to CC twice
#   <http://lists.gnu.org/archive/html/bug-gnulib/2011-09/msg00431.html>.
# - AC_PROG_CC_STDC is likely to change now that C11 is an ISO standard.
AC_DEFUN([gl_PROG_CC_C99],
[
  dnl Change that version number to the minimum Autoconf version that supports
  dnl mixing AC_PROG_CC_C99 calls with AC_PROG_CC_STDC calls.
  m4_version_prereq([9.0],
    [AC_REQUIRE([AC_PROG_CC_C99])],
    [AC_REQUIRE([AC_PROG_CC_STDC])])
])

# gl_PROG_AR_RANLIB
# Determines the values for AR, ARFLAGS, RANLIB that fit with the compiler.
# The user can set the variables AR, ARFLAGS, RANLIB if he wants to override
# the values.
AC_DEFUN([gl_PROG_AR_RANLIB],
[
  dnl Minix 3 comes with two toolchains: The Amsterdam Compiler Kit compiler
  dnl as "cc", and GCC as "gcc". They have different object file formats and
  dnl library formats. In particular, the GNU binutils programs ar, ranlib
  dnl produce libraries that work only with gcc, not with cc.
  AC_REQUIRE([AC_PROG_CC])
  AC_CACHE_CHECK([for Minix Amsterdam compiler], [gl_cv_c_amsterdam_compiler],
    [
      AC_EGREP_CPP([Amsterdam],
        [
#ifdef __ACK__
Amsterdam
#endif
        ],
        [gl_cv_c_amsterdam_compiler=yes],
        [gl_cv_c_amsterdam_compiler=no])
    ])
  if test -z "$AR"; then
    if test $gl_cv_c_amsterdam_compiler = yes; then
      AR='cc -c.a'
      if test -z "$ARFLAGS"; then
        ARFLAGS='-o'
      fi
    else
      dnl Use the Automake-documented default values for AR and ARFLAGS,
      dnl but prefer ${host}-ar over ar (useful for cross-compiling).
      AC_CHECK_TOOL([AR], [ar], [ar])
      if test -z "$ARFLAGS"; then
        ARFLAGS='cru'
      fi
    fi
  else
    if test -z "$ARFLAGS"; then
      ARFLAGS='cru'
    fi
  fi
  AC_SUBST([AR])
  AC_SUBST([ARFLAGS])
  if test -z "$RANLIB"; then
    if test $gl_cv_c_amsterdam_compiler = yes; then
      RANLIB=':'
    else
      dnl Use the ranlib program if it is available.
      AC_PROG_RANLIB
    fi
  fi
  AC_SUBST([RANLIB])
])

# AC_PROG_MKDIR_P
# is a backport of autoconf-2.60's AC_PROG_MKDIR_P, with a fix
# for interoperability with automake-1.9.6 from autoconf-2.62.
# Remove this macro when we can assume autoconf >= 2.62 or
# autoconf >= 2.60 && automake >= 1.10.
# AC_AUTOCONF_VERSION was introduced in 2.62, so use that as the witness.
m4_ifndef([AC_AUTOCONF_VERSION],[
m4_ifdef([AC_PROG_MKDIR_P], [
  dnl For automake-1.9.6 && autoconf < 2.62: Ensure MKDIR_P is AC_SUBSTed.
  m4_define([AC_PROG_MKDIR_P],
    m4_defn([AC_PROG_MKDIR_P])[
    AC_SUBST([MKDIR_P])])], [
  dnl For autoconf < 2.60: Backport of AC_PROG_MKDIR_P.
  AC_DEFUN_ONCE([AC_PROG_MKDIR_P],
    [AC_REQUIRE([AM_PROG_MKDIR_P])dnl defined by automake
     MKDIR_P='$(mkdir_p)'
     AC_SUBST([MKDIR_P])])])
])

# AC_C_RESTRICT
# This definition is copied from post-2.69 Autoconf and overrides the
# AC_C_RESTRICT macro from autoconf 2.60..2.69.  It can be removed
# once autoconf >= 2.70 can be assumed.  It's painful to check version
# numbers, and in practice this macro is more up-to-date than Autoconf
# is, so override Autoconf unconditionally.
AC_DEFUN([AC_C_RESTRICT],
[AC_CACHE_CHECK([for C/C++ restrict keyword], [ac_cv_c_restrict],
  [ac_cv_c_restrict=no
   # The order here caters to the fact that C++ does not require restrict.
   for ac_kw in __restrict __restrict__ _Restrict restrict; do
     AC_COMPILE_IFELSE(
      [AC_LANG_PROGRAM(
	 [[typedef int *int_ptr;
	   int foo (int_ptr $ac_kw ip) { return ip[0]; }
	   int bar (int [$ac_kw]); /* Catch GCC bug 14050.  */
	   int bar (int ip[$ac_kw]) { return ip[0]; }
	 ]],
	 [[int s[1];
	   int *$ac_kw t = s;
	   t[0] = 0;
	   return foo (t) + bar (t);
	 ]])],
      [ac_cv_c_restrict=$ac_kw])
     test "$ac_cv_c_restrict" != no && break
   done
  ])
 AH_VERBATIM([restrict],
[/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#undef restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif])
 case $ac_cv_c_restrict in
   restrict) ;;
   no) AC_DEFINE([restrict], []) ;;
   *)  AC_DEFINE_UNQUOTED([restrict], [$ac_cv_c_restrict]) ;;
 esac
])# AC_C_RESTRICT

# gl_BIGENDIAN
# is like AC_C_BIGENDIAN, except that it can be AC_REQUIREd.
# Note that AC_REQUIRE([AC_C_BIGENDIAN]) does not work reliably because some
# macros invoke AC_C_BIGENDIAN with arguments.
AC_DEFUN([gl_BIGENDIAN],
[
  AC_C_BIGENDIAN
])

# gl_CACHE_VAL_SILENT(cache-id, command-to-set-it)
# is like AC_CACHE_VAL(cache-id, command-to-set-it), except that it does not
# output a spurious "(cached)" mark in the midst of other configure output.
# This macro should be used instead of AC_CACHE_VAL when it is not surrounded
# by an AC_MSG_CHECKING/AC_MSG_RESULT pair.
AC_DEFUN([gl_CACHE_VAL_SILENT],
[
  saved_as_echo_n="$as_echo_n"
  as_echo_n=':'
  AC_CACHE_VAL([$1], [$2])
  as_echo_n="$saved_as_echo_n"
])

# AS_VAR_COPY was added in autoconf 2.63b
m4_define_default([AS_VAR_COPY],
[AS_LITERAL_IF([$1[]$2], [$1=$$2], [eval $1=\$$2])])

# AC_PROG_SED was added in autoconf 2.59b
m4_ifndef([AC_PROG_SED],
[AC_DEFUN([AC_PROG_SED],
[AC_CACHE_CHECK([for a sed that does not truncate output], ac_cv_path_SED,
    [dnl ac_script should not contain more than 99 commands (for HP-UX sed),
     dnl but more than about 7000 bytes, to catch a limit in Solaris 8 /usr/ucb/sed.
     ac_script=s/aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa/bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb/
     for ac_i in 1 2 3 4 5 6 7; do
       ac_script="$ac_script$as_nl$ac_script"
     done
     echo "$ac_script" 2>/dev/null | sed 99q >conftest.sed
     AS_UNSET([ac_script])
     if test -z "$SED"; then
       ac_path_SED_found=false
       _AS_PATH_WALK([], [
         for ac_prog in sed gsed; do
           for ac_exec_ext in '' $ac_executable_extensions; do
             ac_path_SED="$as_dir/$ac_prog$ac_exec_ext"
             AS_EXECUTABLE_P(["$ac_path_SED"]) || continue
             case `"$ac_path_SED" --version 2>&1` in
               *GNU*) ac_cv_path_SED=$ac_path_SED ac_path_SED_found=:;;
               *)
                 ac_count=0
                 _AS_ECHO_N([0123456789]) >conftest.in
                 while :
                 do
                   cat conftest.in conftest.in >conftest.tmp
                   mv conftest.tmp conftest.in
                   cp conftest.in conftest.nl
                   echo >> conftest.nl
                   "$ac_path_SED" -f conftest.sed <conftest.nl >conftest.out 2>/dev/null || break
                   diff conftest.out conftest.nl >/dev/null 2>&1 || break
                   ac_count=`expr $ac_count + 1`
                   if test $ac_count -gt ${ac_path_SED_max-0}; then
                     # Best so far, but keep looking for better
                     ac_cv_path_SED=$ac_path_SED
                     ac_path_SED_max=$ac_count
                   fi
                   test $ac_count -gt 10 && break
                 done
                 rm -f conftest.in conftest.tmp conftest.nl conftest.out;;
             esac
             $ac_path_SED_found && break 3
           done
         done])
       if test -z "$ac_cv_path_SED"; then
         AC_ERROR([no acceptable sed could be found in \$PATH])
       fi
     else
       ac_cv_path_SED=$SED
     fi
 SED="$ac_cv_path_SED"
 AC_SUBST([SED])dnl
 rm -f conftest.sed
])])])
