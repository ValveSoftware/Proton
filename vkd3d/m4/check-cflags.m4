dnl
dnl This file contains code derived from WINE_TRY_CFLAGS() and is used courtesy of Alexandre Julliard.
dnl

dnl VKD3D_CHECK_CFLAGS(flags)
AC_DEFUN([VKD3D_CHECK_CFLAGS],
  [AS_VAR_PUSHDEF([vkd3d_cflags], vkd3d_cv_cflags_[[$1]])dnl
  AC_CACHE_CHECK([whether the compiler supports $1], vkd3d_cflags,
  [vkd3d_cflags_saved=$CFLAGS
  CFLAGS="$CFLAGS $1 -Werror"
  AC_LINK_IFELSE([AC_LANG_SOURCE([[int main(int argc, char **argv) { return 0; }]])],
                 [AS_VAR_SET(vkd3d_cflags, yes)],
                 [AS_VAR_SET(vkd3d_cflags, no)])
  CFLAGS=$vkd3d_cflags_saved])
  AS_VAR_IF([vkd3d_cflags], [yes], [VKD3D_CFLAGS="$VKD3D_CFLAGS $1"])dnl
  AS_VAR_POPDEF([vkd3d_cflags])])
