dnl
dnl This file contains code derived from WINE_CHECK_MINGW_PROG() and is used courtesy of Alexandre Julliard.
dnl

dnl VKD3D_CHECK_MINGW32_PROG(cc-variable, crosstarget-variable, [value-if-not-found], [path])
AC_DEFUN([VKD3D_CHECK_MINGW32_PROG],
[AC_SUBST([$2], [$3])
vkd3d_mingw_list="m4_foreach([vkd3d_cpu], [i686, i586, i486, i386], [vkd3d_cpu-w64-mingw32-gcc ])"
AC_CHECK_PROGS([$1], [$vkd3d_mingw_list], [$3], [$4])
AS_VAR_PUSHDEF([vkd3d_cross_cc], [$1])dnl
AS_VAR_IF([vkd3d_cross_cc], [$3],
  [],
  [vkd3d_cc_saved="$CC"
  AS_VAR_COPY([CC], [vkd3d_cross_cc])
  AC_MSG_CHECKING([whether $CC works])
  AC_COMPILE_IFELSE([AC_LANG_PROGRAM([])],
                    [AC_MSG_RESULT([yes])
                    $2=`expr "$CC" : '\(.*\)-gcc'`],
                    [AC_MSG_RESULT([no])])
  CC="$vkd3d_cc_saved"])
AS_VAR_POPDEF([vkd3d_cross_cc])dnl
])

dnl VKD3D_CHECK_MINGW64_PROG(cc-variable, crosstarget-variable, [value-if-not-found], [path])
AC_DEFUN([VKD3D_CHECK_MINGW64_PROG],
[AC_SUBST([$2], [$3])
vkd3d_mingw_list="m4_foreach([vkd3d_cpu], [x86_64, amd64], [vkd3d_cpu-w64-mingw32-gcc ])"
AC_CHECK_PROGS([$1], [$vkd3d_mingw_list], [$3], [$4])
AS_VAR_PUSHDEF([vkd3d_cross_cc], [$1])dnl
AS_VAR_IF([vkd3d_cross_cc], [$3],
  [],
  [vkd3d_cc_saved="$CC"
  AS_VAR_COPY([CC], [vkd3d_cross_cc])
  AC_MSG_CHECKING([whether $CC works])
  AC_COMPILE_IFELSE([AC_LANG_PROGRAM([])],
                    [AC_MSG_RESULT([yes])
                    $2=`expr "$CC" : '\(.*\)-gcc'`],
                    [AC_MSG_RESULT([no])])
  CC="$vkd3d_cc_saved"])
AS_VAR_POPDEF([vkd3d_cross_cc])dnl
])
