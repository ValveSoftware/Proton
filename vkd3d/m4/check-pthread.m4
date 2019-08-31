dnl VKD3D_CHECK_PTHREAD
AC_DEFUN([VKD3D_CHECK_PTHREAD],
[vkd3d_pthread_found=no

AS_IF([test "x$PTHREAD_LIBS" != x],
[vkd3d_libs_saved="$LIBS"
LIBS="$LIBS $PTHREAD_LIBS"

AC_MSG_CHECKING([checking for pthread_create in $PTHREAD_LIBS])
AC_TRY_LINK_FUNC([pthread_create], [vkd3d_pthread_found=yes])
AC_MSG_RESULT([$vkd3d_pthread_found])

AS_IF([test "x$vkd3d_pthread_found" = "xno"], [PTHREAD_LIBS=""])

LIBS="$vkd3d_libs_saved"])

AS_IF([test "x$vkd3d_pthread_found" != "xyes"],
AC_CHECK_LIB([pthread], [pthread_create],
             [PTHREAD_LIBS="-lpthread"],
             [AC_MSG_ERROR([libpthread not found.])]))
])
