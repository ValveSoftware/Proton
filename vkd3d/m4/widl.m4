dnl VKD3D_PROG_WIDL(major, minor)
AC_DEFUN([VKD3D_PROG_WIDL],

[AC_CHECK_PROG([WIDL], [widl], [widl], [no])

AS_IF([test "x$WIDL" != "xno"],
[AC_MSG_CHECKING([checking whether widl version >= $1.$2])
vkd3d_widl_version=`$WIDL -V 2>/dev/null | $SED -E '/version/{s/.* version (.*)/\1/;q;}'`

AX_COMPARE_VERSION([$vkd3d_widl_version], [ge], [$1.$2],
                   [AC_MSG_RESULT([yes ($vkd3d_widl_version)])],
                   [AC_MSG_RESULT([no ($vkd3d_widl_version)])
                   WIDL=no])
])])
