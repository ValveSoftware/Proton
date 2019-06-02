# warn-on-use.m4 serial 5
dnl Copyright (C) 2010-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# gl_WARN_ON_USE_PREPARE(INCLUDES, NAMES)
# ---------------------------------------
# For each whitespace-separated element in the list of NAMES, define
# HAVE_RAW_DECL_name if the function has a declaration among INCLUDES
# even after being undefined as a macro.
#
# See warn-on-use.h for some hints on how to poison function names, as
# well as ideas on poisoning global variables and macros.  NAMES may
# include global variables, but remember that only functions work with
# _GL_WARN_ON_USE.  Typically, INCLUDES only needs to list a single
# header, but if the replacement header pulls in other headers because
# some systems declare functions in the wrong header, then INCLUDES
# should do likewise.
#
# It is generally safe to assume declarations for functions declared
# in the intersection of C89 and C11 (such as printf) without
# needing gl_WARN_ON_USE_PREPARE.
AC_DEFUN([gl_WARN_ON_USE_PREPARE],
[
  m4_foreach_w([gl_decl], [$2],
    [AH_TEMPLATE([HAVE_RAW_DECL_]AS_TR_CPP(m4_defn([gl_decl])),
      [Define to 1 if ]m4_defn([gl_decl])[ is declared even after
       undefining macros.])])dnl
dnl FIXME: gl_Symbol must be used unquoted until we can assume
dnl autoconf 2.64 or newer.
  for gl_func in m4_flatten([$2]); do
    AS_VAR_PUSHDEF([gl_Symbol], [gl_cv_have_raw_decl_$gl_func])dnl
    AC_CACHE_CHECK([whether $gl_func is declared without a macro],
      gl_Symbol,
      [AC_COMPILE_IFELSE([AC_LANG_PROGRAM([$1],
[@%:@undef $gl_func
  (void) $gl_func;])],
        [AS_VAR_SET(gl_Symbol, [yes])], [AS_VAR_SET(gl_Symbol, [no])])])
    AS_VAR_IF(gl_Symbol, [yes],
      [AC_DEFINE_UNQUOTED(AS_TR_CPP([HAVE_RAW_DECL_$gl_func]), [1])
       dnl shortcut - if the raw declaration exists, then set a cache
       dnl variable to allow skipping any later AC_CHECK_DECL efforts
       eval ac_cv_have_decl_$gl_func=yes])
    AS_VAR_POPDEF([gl_Symbol])dnl
  done
])
