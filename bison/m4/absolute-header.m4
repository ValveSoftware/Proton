# absolute-header.m4 serial 16
dnl Copyright (C) 2006-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Derek Price.

# gl_ABSOLUTE_HEADER(HEADER1 HEADER2 ...)
# ---------------------------------------
# Find the absolute name of a header file, testing first if the header exists.
# If the header were sys/inttypes.h, this macro would define
# ABSOLUTE_SYS_INTTYPES_H to the '""' quoted absolute name of sys/inttypes.h
# in config.h
# (e.g. '#define ABSOLUTE_SYS_INTTYPES_H "///usr/include/sys/inttypes.h"').
# The three "///" are to pacify Sun C 5.8, which otherwise would say
# "warning: #include of /usr/include/... may be non-portable".
# Use '""', not '<>', so that the /// cannot be confused with a C99 comment.
# Note: This macro assumes that the header file is not empty after
# preprocessing, i.e. it does not only define preprocessor macros but also
# provides some type/enum definitions or function/variable declarations.
AC_DEFUN([gl_ABSOLUTE_HEADER],
[AC_REQUIRE([AC_CANONICAL_HOST])
AC_LANG_PREPROC_REQUIRE()dnl
dnl FIXME: gl_absolute_header and ac_header_exists must be used unquoted
dnl until we can assume autoconf 2.64 or newer.
m4_foreach_w([gl_HEADER_NAME], [$1],
  [AS_VAR_PUSHDEF([gl_absolute_header],
                  [gl_cv_absolute_]m4_defn([gl_HEADER_NAME]))dnl
  AC_CACHE_CHECK([absolute name of <]m4_defn([gl_HEADER_NAME])[>],
    m4_defn([gl_absolute_header]),
    [AS_VAR_PUSHDEF([ac_header_exists],
                    [ac_cv_header_]m4_defn([gl_HEADER_NAME]))dnl
    AC_CHECK_HEADERS_ONCE(m4_defn([gl_HEADER_NAME]))dnl
    if test AS_VAR_GET(ac_header_exists) = yes; then
      gl_ABSOLUTE_HEADER_ONE(m4_defn([gl_HEADER_NAME]))
    fi
    AS_VAR_POPDEF([ac_header_exists])dnl
    ])dnl
  AC_DEFINE_UNQUOTED(AS_TR_CPP([ABSOLUTE_]m4_defn([gl_HEADER_NAME])),
                     ["AS_VAR_GET(gl_absolute_header)"],
                     [Define this to an absolute name of <]m4_defn([gl_HEADER_NAME])[>.])
  AS_VAR_POPDEF([gl_absolute_header])dnl
])dnl
])# gl_ABSOLUTE_HEADER

# gl_ABSOLUTE_HEADER_ONE(HEADER)
# ------------------------------
# Like gl_ABSOLUTE_HEADER, except that:
#   - it assumes that the header exists,
#   - it uses the current CPPFLAGS,
#   - it does not cache the result,
#   - it is silent.
AC_DEFUN([gl_ABSOLUTE_HEADER_ONE],
[
  AC_REQUIRE([AC_CANONICAL_HOST])
  AC_LANG_CONFTEST([AC_LANG_SOURCE([[#include <]]m4_dquote([$1])[[>]])])
  dnl AIX "xlc -E" and "cc -E" omit #line directives for header files
  dnl that contain only a #include of other header files and no
  dnl non-comment tokens of their own. This leads to a failure to
  dnl detect the absolute name of <dirent.h>, <signal.h>, <poll.h>
  dnl and others. The workaround is to force preservation of comments
  dnl through option -C. This ensures all necessary #line directives
  dnl are present. GCC supports option -C as well.
  case "$host_os" in
    aix*) gl_absname_cpp="$ac_cpp -C" ;;
    *)    gl_absname_cpp="$ac_cpp" ;;
  esac
changequote(,)
  case "$host_os" in
    mingw*)
      dnl For the sake of native Windows compilers (excluding gcc),
      dnl treat backslash as a directory separator, like /.
      dnl Actually, these compilers use a double-backslash as
      dnl directory separator, inside the
      dnl   # line "filename"
      dnl directives.
      gl_dirsep_regex='[/\\]'
      ;;
    *)
      gl_dirsep_regex='\/'
      ;;
  esac
  dnl A sed expression that turns a string into a basic regular
  dnl expression, for use within "/.../".
  gl_make_literal_regex_sed='s,[]$^\\.*/[],\\&,g'
  gl_header_literal_regex=`echo '$1' \
                           | sed -e "$gl_make_literal_regex_sed"`
  gl_absolute_header_sed="/${gl_dirsep_regex}${gl_header_literal_regex}/"'{
      s/.*"\(.*'"${gl_dirsep_regex}${gl_header_literal_regex}"'\)".*/\1/
      s|^/[^/]|//&|
      p
      q
    }'
changequote([,])
  dnl eval is necessary to expand gl_absname_cpp.
  dnl Ultrix and Pyramid sh refuse to redirect output of eval,
  dnl so use subshell.
  AS_VAR_SET([gl_cv_absolute_]AS_TR_SH([[$1]]),
[`(eval "$gl_absname_cpp conftest.$ac_ext") 2>&AS_MESSAGE_LOG_FD |
  sed -n "$gl_absolute_header_sed"`])
])
