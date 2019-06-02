# getopt.m4 serial 44
dnl Copyright (C) 2002-2006, 2008-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# Request a POSIX compliant getopt function.
AC_DEFUN([gl_FUNC_GETOPT_POSIX],
[
  m4_divert_text([DEFAULTS], [gl_getopt_required=POSIX])
  AC_REQUIRE([gl_UNISTD_H_DEFAULTS])
  AC_REQUIRE([gl_GETOPT_CHECK_HEADERS])
  dnl Other modules can request the gnulib implementation of the getopt
  dnl functions unconditionally, by defining gl_REPLACE_GETOPT_ALWAYS.
  dnl argp.m4 does this.
  m4_ifdef([gl_REPLACE_GETOPT_ALWAYS], [
    REPLACE_GETOPT=1
  ], [
    REPLACE_GETOPT=0
    if test -n "$gl_replace_getopt"; then
      REPLACE_GETOPT=1
    fi
  ])
  if test $REPLACE_GETOPT = 1; then
    dnl Arrange for getopt.h to be created.
    gl_GETOPT_SUBSTITUTE_HEADER
  fi
])

# Request a POSIX compliant getopt function with GNU extensions (such as
# options with optional arguments) and the functions getopt_long,
# getopt_long_only.
AC_DEFUN([gl_FUNC_GETOPT_GNU],
[
  m4_divert_text([INIT_PREPARE], [gl_getopt_required=GNU])

  AC_REQUIRE([gl_FUNC_GETOPT_POSIX])
])

# Determine whether to replace the entire getopt facility.
AC_DEFUN([gl_GETOPT_CHECK_HEADERS],
[
  AC_REQUIRE([AC_CANONICAL_HOST]) dnl for cross-compiles
  AC_REQUIRE([AC_PROG_AWK]) dnl for awk that supports ENVIRON

  dnl Persuade Solaris <unistd.h> to declare optarg, optind, opterr, optopt.
  AC_REQUIRE([AC_USE_SYSTEM_EXTENSIONS])

  gl_CHECK_NEXT_HEADERS([getopt.h])
  if test $ac_cv_header_getopt_h = yes; then
    HAVE_GETOPT_H=1
  else
    HAVE_GETOPT_H=0
  fi
  AC_SUBST([HAVE_GETOPT_H])

  gl_replace_getopt=

  dnl Test whether <getopt.h> is available.
  if test -z "$gl_replace_getopt" && test $gl_getopt_required = GNU; then
    AC_CHECK_HEADERS([getopt.h], [], [gl_replace_getopt=yes])
  fi

  dnl Test whether the function getopt_long is available.
  if test -z "$gl_replace_getopt" && test $gl_getopt_required = GNU; then
    AC_CHECK_FUNCS([getopt_long_only], [], [gl_replace_getopt=yes])
  fi

  dnl POSIX 2008 does not specify leading '+' behavior, but see
  dnl http://austingroupbugs.net/view.php?id=191 for a recommendation on
  dnl the next version of POSIX.  For now, we only guarantee leading '+'
  dnl behavior with getopt-gnu.
  if test -z "$gl_replace_getopt"; then
    AC_CACHE_CHECK([whether getopt is POSIX compatible],
      [gl_cv_func_getopt_posix],
      [
        dnl Merging these three different test programs into a single one
        dnl would require a reset mechanism. On BSD systems, it can be done
        dnl through 'optreset'; on some others (glibc), it can be done by
        dnl setting 'optind' to 0; on others again (HP-UX, IRIX, OSF/1,
        dnl Solaris 9, musl libc), there is no such mechanism.
        if test $cross_compiling = no; then
          dnl Sanity check. Succeeds everywhere (except on MSVC,
          dnl which lacks <unistd.h> and getopt() entirely).
          AC_RUN_IFELSE(
            [AC_LANG_SOURCE([[
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int
main ()
{
  static char program[] = "program";
  static char a[] = "-a";
  static char foo[] = "foo";
  static char bar[] = "bar";
  char *argv[] = { program, a, foo, bar, NULL };
  int c;

  c = getopt (4, argv, "ab");
  if (!(c == 'a'))
    return 1;
  c = getopt (4, argv, "ab");
  if (!(c == -1))
    return 2;
  if (!(optind == 2))
    return 3;
  return 0;
}
]])],
            [gl_cv_func_getopt_posix=maybe],
            [gl_cv_func_getopt_posix=no])
          if test $gl_cv_func_getopt_posix = maybe; then
            dnl Sanity check with '+'. Succeeds everywhere (except on MSVC,
            dnl which lacks <unistd.h> and getopt() entirely).
            AC_RUN_IFELSE(
              [AC_LANG_SOURCE([[
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int
main ()
{
  static char program[] = "program";
  static char donald[] = "donald";
  static char p[] = "-p";
  static char billy[] = "billy";
  static char duck[] = "duck";
  static char a[] = "-a";
  static char bar[] = "bar";
  char *argv[] = { program, donald, p, billy, duck, a, bar, NULL };
  int c;

  c = getopt (7, argv, "+abp:q:");
  if (!(c == -1))
    return 4;
  if (!(strcmp (argv[0], "program") == 0))
    return 5;
  if (!(strcmp (argv[1], "donald") == 0))
    return 6;
  if (!(strcmp (argv[2], "-p") == 0))
    return 7;
  if (!(strcmp (argv[3], "billy") == 0))
    return 8;
  if (!(strcmp (argv[4], "duck") == 0))
    return 9;
  if (!(strcmp (argv[5], "-a") == 0))
    return 10;
  if (!(strcmp (argv[6], "bar") == 0))
    return 11;
  if (!(optind == 1))
    return 12;
  return 0;
}
]])],
              [gl_cv_func_getopt_posix=maybe],
              [gl_cv_func_getopt_posix=no])
          fi
          if test $gl_cv_func_getopt_posix = maybe; then
            dnl Detect Mac OS X 10.5, AIX 7.1, mingw bug.
            AC_RUN_IFELSE(
              [AC_LANG_SOURCE([[
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int
main ()
{
  static char program[] = "program";
  static char ab[] = "-ab";
  char *argv[3] = { program, ab, NULL };
  if (getopt (2, argv, "ab:") != 'a')
    return 13;
  if (getopt (2, argv, "ab:") != '?')
    return 14;
  if (optopt != 'b')
    return 15;
  if (optind != 2)
    return 16;
  return 0;
}
]])],
              [gl_cv_func_getopt_posix=yes],
              [gl_cv_func_getopt_posix=no])
          fi
        else
          case "$host_os" in
            darwin* | aix* | mingw*) gl_cv_func_getopt_posix="guessing no";;
            *)                       gl_cv_func_getopt_posix="guessing yes";;
          esac
        fi
      ])
    case "$gl_cv_func_getopt_posix" in
      *no) gl_replace_getopt=yes ;;
    esac
  fi

  if test -z "$gl_replace_getopt" && test $gl_getopt_required = GNU; then
    AC_CACHE_CHECK([for working GNU getopt function], [gl_cv_func_getopt_gnu],
      [# Even with POSIXLY_CORRECT, the GNU extension of leading '-' in the
       # optstring is necessary for programs like m4 that have POSIX-mandated
       # semantics for supporting options interspersed with files.
       # Also, since getopt_long is a GNU extension, we require optind=0.
       # Bash ties 'set -o posix' to a non-exported POSIXLY_CORRECT;
       # so take care to revert to the correct (non-)export state.
dnl GNU Coding Standards currently allow awk but not env; besides, env
dnl is ambiguous with environment values that contain newlines.
       gl_awk_probe='BEGIN { if ("POSIXLY_CORRECT" in ENVIRON) print "x" }'
       case ${POSIXLY_CORRECT+x}`$AWK "$gl_awk_probe" </dev/null` in
         xx) gl_had_POSIXLY_CORRECT=exported ;;
         x)  gl_had_POSIXLY_CORRECT=yes      ;;
         *)  gl_had_POSIXLY_CORRECT=         ;;
       esac
       POSIXLY_CORRECT=1
       export POSIXLY_CORRECT
       AC_RUN_IFELSE(
        [AC_LANG_PROGRAM([[#include <getopt.h>
                           #include <stddef.h>
                           #include <string.h>
           ]GL_NOCRASH[
           ]], [[
             int result = 0;

             nocrash_init();

             /* This code succeeds on glibc 2.8, OpenBSD 4.0, Cygwin, mingw,
                and fails on Mac OS X 10.5, AIX 5.2, HP-UX 11, IRIX 6.5,
                OSF/1 5.1, Solaris 10.  */
             {
               static char conftest[] = "conftest";
               static char plus[] = "-+";
               char *argv[3] = { conftest, plus, NULL };
               opterr = 0;
               if (getopt (2, argv, "+a") != '?')
                 result |= 1;
             }
             /* This code succeeds on glibc 2.8, mingw,
                and fails on Mac OS X 10.5, OpenBSD 4.0, AIX 5.2, HP-UX 11,
                IRIX 6.5, OSF/1 5.1, Solaris 10, Cygwin 1.5.x.  */
             {
               static char program[] = "program";
               static char p[] = "-p";
               static char foo[] = "foo";
               static char bar[] = "bar";
               char *argv[] = { program, p, foo, bar, NULL };

               optind = 1;
               if (getopt (4, argv, "p::") != 'p')
                 result |= 2;
               else if (optarg != NULL)
                 result |= 4;
               else if (getopt (4, argv, "p::") != -1)
                 result |= 6;
               else if (optind != 2)
                 result |= 8;
             }
             /* This code succeeds on glibc 2.8 and fails on Cygwin 1.7.0.  */
             {
               static char program[] = "program";
               static char foo[] = "foo";
               static char p[] = "-p";
               char *argv[] = { program, foo, p, NULL };
               optind = 0;
               if (getopt (3, argv, "-p") != 1)
                 result |= 16;
               else if (getopt (3, argv, "-p") != 'p')
                 result |= 16;
             }
             /* This code fails on glibc 2.11.  */
             {
               static char program[] = "program";
               static char b[] = "-b";
               static char a[] = "-a";
               char *argv[] = { program, b, a, NULL };
               optind = opterr = 0;
               if (getopt (3, argv, "+:a:b") != 'b')
                 result |= 32;
               else if (getopt (3, argv, "+:a:b") != ':')
                 result |= 32;
             }
             /* This code dumps core on glibc 2.14.  */
             {
               static char program[] = "program";
               static char w[] = "-W";
               static char dummy[] = "dummy";
               char *argv[] = { program, w, dummy, NULL };
               optind = opterr = 1;
               if (getopt (3, argv, "W;") != 'W')
                 result |= 64;
             }
             return result;
           ]])],
        [gl_cv_func_getopt_gnu=yes],
        [gl_cv_func_getopt_gnu=no],
        [dnl Cross compiling. Assume the worst, even on glibc platforms.
         gl_cv_func_getopt_gnu="guessing no"
        ])
       case $gl_had_POSIXLY_CORRECT in
         exported) ;;
         yes) AS_UNSET([POSIXLY_CORRECT]); POSIXLY_CORRECT=1 ;;
         *) AS_UNSET([POSIXLY_CORRECT]) ;;
       esac
      ])
    if test "$gl_cv_func_getopt_gnu" != yes; then
      gl_replace_getopt=yes
    else
      AC_CACHE_CHECK([for working GNU getopt_long function],
        [gl_cv_func_getopt_long_gnu],
        [AC_RUN_IFELSE(
           [AC_LANG_PROGRAM(
              [[#include <getopt.h>
                #include <stddef.h>
                #include <string.h>
              ]],
              [[static const struct option long_options[] =
                  {
                    { "xtremely-",no_argument,       NULL, 1003 },
                    { "xtra",     no_argument,       NULL, 1001 },
                    { "xtreme",   no_argument,       NULL, 1002 },
                    { "xtremely", no_argument,       NULL, 1003 },
                    { NULL,       0,                 NULL, 0 }
                  };
                /* This code fails on OpenBSD 5.0.  */
                {
                  static char program[] = "program";
                  static char xtremel[] = "--xtremel";
                  char *argv[] = { program, xtremel, NULL };
                  int option_index;
                  optind = 1; opterr = 0;
                  if (getopt_long (2, argv, "", long_options, &option_index) != 1003)
                    return 1;
                }
                return 0;
              ]])],
           [gl_cv_func_getopt_long_gnu=yes],
           [gl_cv_func_getopt_long_gnu=no],
           [dnl Cross compiling. Guess no on OpenBSD, yes otherwise.
            case "$host_os" in
              openbsd*) gl_cv_func_getopt_long_gnu="guessing no";;
              *)        gl_cv_func_getopt_long_gnu="guessing yes";;
            esac
           ])
        ])
      case "$gl_cv_func_getopt_long_gnu" in
        *yes) ;;
        *) gl_replace_getopt=yes ;;
      esac
    fi
  fi
])

AC_DEFUN([gl_GETOPT_SUBSTITUTE_HEADER],
[
  GETOPT_H=getopt.h
  AC_DEFINE([__GETOPT_PREFIX], [[rpl_]],
    [Define to rpl_ if the getopt replacement functions and variables
     should be used.])
  AC_SUBST([GETOPT_H])
])

# Prerequisites of lib/getopt*.
AC_DEFUN([gl_PREREQ_GETOPT],
[
  AC_CHECK_DECLS_ONCE([getenv])
])
