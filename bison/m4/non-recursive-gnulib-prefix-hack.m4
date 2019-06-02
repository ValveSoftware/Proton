dnl Copyright (C) 2012-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl gl_NON_RECURSIVE_GNULIB_PREFIX_HACK LIB_DIR
dnl Adjust configure-set $gl_LIBOBJS and each AC_SUBST'd *_H variable
dnl with a value ending in ".h" to reflect that these files are located
dnl in the directory specified by LIB_DIR.
AC_DEFUN([gl_NON_RECURSIVE_GNULIB_PREFIX_HACK],
[
  # Tell AC_LIBSOURCES where to find source files like alloca.c.
  AC_CONFIG_LIBOBJ_DIR([lib])

  # This hack originated in bison.  It is required when using non-recursive
  # automake rules to build from gnulib-provided lib/ sources.  Hence, LIB_DIR
  # is usually simply "lib".  Those rules use the list of names like "fchdir.o"
  # and "strstr.o" in gl_LIBOBJS.  With non-recursive make, we must prefix each
  # such file name with the "lib/" prefix.  See also build-aux/prefix-gnulib-mk.
  gl_LIBOBJS=`echo "$gl_LIBOBJS" | sed -e 's, , $1/,g'`

  # Listing the names of the variables to prefix is error-prone.
  # Rather, adjust each AC_SUBST'd variable whose name ends in '_H'
  # and whose value ends in '.h'.
  for ac_var in $ac_subst_vars
  do
    eval "ac_val=\$$ac_var"
    case $ac_var:$ac_val in
      (*_H:*.h) eval "$ac_var=$1/\$$ac_var";;
    esac
  done
])
