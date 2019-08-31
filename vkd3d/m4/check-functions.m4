dnl VKD3D_CHECK_FUNC
AC_DEFUN([VKD3D_CHECK_FUNC],
[AC_MSG_CHECKING([for $2])
AC_LINK_IFELSE([AC_LANG_SOURCE([int main(void) { return [$3]; }])],
               [AC_MSG_RESULT([yes])
               AC_DEFINE([$1],
                         [1],
                         [Define to 1 if you have $2.])],
               [AC_MSG_RESULT([no])])])

dnl VKD3D_CHECK_LIB_FUNCS
AC_DEFUN([VKD3D_CHECK_LIB_FUNCS],
[vkd3d_libs_saved="$LIBS"
LIBS="$LIBS $2"
AC_CHECK_FUNCS([$1], [$3], [$4])
LIBS="$vkd3d_libs_saved"])

dnl VKD3D_CHECK_WHICH_PTHREAD_SETNAME_NP
AC_DEFUN([VKD3D_CHECK_WHICH_PTHREAD_SETNAME_NP],
         [AC_MSG_CHECKING([how many arguments pthread_set_np() takes])
         AC_CACHE_VAL([vkd3d_cv_which_pthread_set_np], [

vkd3d_cv_which_pthread_set_np=unknown

AC_COMPILE_IFELSE([AC_LANG_PROGRAM([#include <pthread.h>],
                                   [pthread_setname_np(pthread_self(), "conftest")])],
                                   [vkd3d_cv_which_pthread_set_np=two])

AS_IF([test "$vkd3d_cv_which_pthread_set_np" = "unknown"],
      [AC_COMPILE_IFELSE([AC_LANG_PROGRAM([#include <pthread.h>],
                                          [pthread_setname_np("conftest")])],
                                          [vkd3d_cv_which_pthread_set_np=one])])

]) dnl AC_CACHE_VAL

AS_CASE(["$vkd3d_cv_which_pthread_set_np"],
        [one],
        [AC_DEFINE([HAVE_PTHREAD_SETNAME_NP_1], [1],
                   [Define to 1 if you have the one-argument variant of pthread_setname_np().])
        AC_MSG_RESULT([one])],

        [two],
        [AC_DEFINE([HAVE_PTHREAD_SETNAME_NP_2], [1],
                   [Define to 1 if you have the two-argument variant of pthread_setname_np().])
        AC_MSG_RESULT([two])],

        [AC_MSG_RESULT([unknown])])

]) dnl AC_DEFUN

dnl VKD3D_CHECK_PTHREAD_SETNAME_NP
AC_DEFUN([VKD3D_CHECK_PTHREAD_SETNAME_NP],
         [VKD3D_CHECK_LIB_FUNCS([pthread_setname_np], [$PTHREAD_LIBS])
         AS_IF([test "x$ac_cv_func_pthread_setname_np" = "xyes"],
               [VKD3D_CHECK_WHICH_PTHREAD_SETNAME_NP])])
