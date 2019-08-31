# ld-version-script.m4 serial 4
dnl Copyright (C) 2008-2018 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Simon Josefsson

# FIXME: The test below returns a false positive for mingw
# cross-compiles, 'local:' statements does not reduce number of
# exported symbols in a DLL.  Use --disable-ld-version-script to work
# around the problem.

# gl_LD_VERSION_SCRIPT
# --------------------
# Check if LD supports linker scripts, and define automake conditional
# HAVE_LD_VERSION_SCRIPT if so.
AC_DEFUN([gl_LD_VERSION_SCRIPT],
[
  AC_ARG_ENABLE([ld-version-script],
    [AS_HELP_STRING([--enable-ld-version-script],
       [enable linker version script (default is enabled when possible)])],
    [have_ld_version_script=$enableval],
    [AC_CACHE_CHECK([if LD -Wl,--version-script works],
       [gl_cv_sys_ld_version_script],
       [gl_cv_sys_ld_version_script=no
        save_LDFLAGS=$LDFLAGS
        LDFLAGS="$LDFLAGS -Wl,--version-script=conftest.map"
        echo foo >conftest.map
        AC_LINK_IFELSE([AC_LANG_PROGRAM([], [])],
          [],
          [cat > conftest.map <<EOF
VERS_1 {
        global: sym;
};

VERS_2 {
        global: sym;
} VERS_1;
EOF
           AC_LINK_IFELSE([AC_LANG_PROGRAM([], [])],
             [gl_cv_sys_ld_version_script=yes])])
        rm -f conftest.map
        LDFLAGS=$save_LDFLAGS])
     have_ld_version_script=$gl_cv_sys_ld_version_script])
  AM_CONDITIONAL([HAVE_LD_VERSION_SCRIPT],
    [test "$have_ld_version_script" = yes])
])
