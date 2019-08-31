AC_PREREQ([2.69])
AC_INIT([vkd3d],[1.1])

AC_CONFIG_AUX_DIR([bin])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_HEADERS(include/config.h)

AC_ARG_VAR([WIDL], [widl IDL compiler])
AC_ARG_VAR([CROSSCC32], [32-bit Windows cross compiler])
AC_ARG_VAR([CROSSCC64], [64-bit Windows cross compiler])
AC_ARG_WITH([xcb], AS_HELP_STRING([--with-xcb], [Build with XCB library (default: test)]))
AC_ARG_WITH([spirv-tools], AS_HELP_STRING([--with-spirv-tools],
                                          [Build with SPIRV-Tools library (default: disabled)]))
AC_ARG_ENABLE([demos],
              AS_HELP_STRING([--enable-demos], [Build demo programs (default: disabled)]),,
              [enable_demos=no])
AC_ARG_ENABLE([tests],
              AS_HELP_STRING([--enable-tests], [Build tests (default: enabled)]),,
              [enable_tests=yes])

AC_USE_SYSTEM_EXTENSIONS

dnl Check for progs
AM_PROG_AR
AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_SED
AC_PROG_MKDIR_P
VKD3D_PROG_WIDL(3, 20)
AS_IF([test "x$WIDL" = "xno"], [AC_MSG_WARN([widl is required to build header files.])])

AM_INIT_AUTOMAKE([1.11 foreign silent-rules subdir-objects no-dist-gzip dist-xz -Wall -Werror])
AM_MAINTAINER_MODE([enable])
AM_SILENT_RULES([yes])

LT_PREREQ([2.4.2])
LT_INIT([win32-dll])

gl_LD_VERSION_SCRIPT

dnl Check compiler specific flags
AC_SUBST([VKD3D_CFLAGS])
AS_IF([test "x${GCC}" = "xyes"],
      [VKD3D_CFLAGS="-Wall -pipe"
      VKD3D_CHECK_CFLAGS([-std=c99])
      VKD3D_CHECK_CFLAGS([-Wdeclaration-after-statement])
      VKD3D_CHECK_CFLAGS([-Wimplicit-fallthrough])
      VKD3D_CHECK_CFLAGS([-Wmissing-prototypes])
      VKD3D_CHECK_CFLAGS([-Wunused-but-set-parameter])
      VKD3D_CHECK_CFLAGS([-Wvla])
      VKD3D_CHECK_CFLAGS([-Wl,--no-undefined])])

dnl Check for cross compilers
VKD3D_CHECK_MINGW32_PROG([CROSSCC32], [CROSSTARGET32], [no])
VKD3D_CHECK_MINGW64_PROG([CROSSCC64], [CROSSTARGET64], [no])

dnl Check for headers
AC_CHECK_HEADERS([dlfcn.h pthread.h \
                  vulkan/vulkan.h \
                  vulkan/spirv.h vulkan/GLSL.std.450.h \
                  spirv/unified1/spirv.h spirv/unified1/GLSL.std.450.h])
AS_IF([test "x$ac_cv_header_pthread_h" != "xyes"], [AC_MSG_ERROR([pthread.h not found.])])
AS_IF([test "x$ac_cv_header_vulkan_vulkan_h" != "xyes"], [AC_MSG_ERROR([vulkan.h not found.])])
AS_IF([test "x$ac_cv_header_spirv_unified1_spirv_h" != "xyes" \
       -a "x$ac_cv_header_vulkan_spirv_h" != "xyes"],
      [AC_MSG_ERROR([spirv.h not found.])])
AS_IF([test "x$ac_cv_header_spirv_unified1_GLSL_std_450_h" != "xyes" \
       -a "x$ac_cv_header_vulkan_GLSL_std_450_h" != "xyes"],
      [AC_MSG_ERROR([GLSL.std.450.h not found.])])

VKD3D_CHECK_VULKAN_HEADER_VERSION([113], [AC_MSG_ERROR([Vulkan headers are too old, 1.1.113 is required.])])

AC_CHECK_DECL([SpvCapabilityDemoteToHelperInvocationEXT],, [AC_MSG_ERROR([SPIR-V headers are too old.])], [
#ifdef HAVE_SPIRV_UNIFIED1_SPIRV_H
# include "spirv/unified1/spirv.h"
#else
# include "vulkan/spirv.h"
#endif])

dnl Check for libraries
m4_ifdef([PKG_PROG_PKG_CONFIG], [PKG_PROG_PKG_CONFIG], [m4_fatal([pkg-config autoconf macros not found.])])

AC_CHECK_LIB([m], [ceilf])

AC_SUBST([DL_LIBS])
AC_CHECK_LIB([dl], [dlopen],
             [DL_LIBS="-ldl"],
             [AS_IF([test "$ac_cv_header_dlfnc_h" = "xyes"], [AC_MSG_ERROR([libdl not found.])])])

AC_ARG_VAR([PTHREAD_LIBS], [linker flags for pthreads])
VKD3D_CHECK_PTHREAD

AC_SUBST([VULKAN_LIBS])
VKD3D_CHECK_SONAME([vulkan], [vkGetInstanceProcAddr],
                   [VULKAN_LIBS="-lvulkan"],
                   [VKD3D_CHECK_SONAME([MoltenVK], [vkGetInstanceProcAddr],
                                       [VULKAN_LIBS="-lMoltenVK"
                                       AC_DEFINE_UNQUOTED([SONAME_LIBVULKAN],["$ac_cv_lib_soname_MoltenVK"])],
                                       [AC_MSG_ERROR([libvulkan and libMoltenVK not found.])])])

AS_IF([test "x$with_spirv_tools" = "xyes"],
      [PKG_CHECK_MODULES([SPIRV_TOOLS], [SPIRV-Tools-shared],
      [AC_DEFINE([HAVE_SPIRV_TOOLS], [1], [Define to 1 if you have SPIRV-Tools.])])],
      [with_spirv_tools=no])

HAVE_XCB=no
AS_IF([test "x$with_xcb" != "xno"],
      [PKG_CHECK_MODULES([XCB], [xcb xcb-keysyms],
                                [AC_DEFINE([HAVE_XCB], [1], [Define to 1 if you have libxcb.])
                                HAVE_XCB=yes],
                                [HAVE_XCB=no])])

dnl Check for functions
VKD3D_CHECK_FUNC([HAVE_BUILTIN_CLZ], [__builtin_clz], [__builtin_clz(0)])
VKD3D_CHECK_FUNC([HAVE_BUILTIN_POPCOUNT], [__builtin_popcount], [__builtin_popcount(0)])
VKD3D_CHECK_FUNC([HAVE_SYNC_ADD_AND_FETCH], [__sync_add_and_fetch], [__sync_add_and_fetch((int *)0, 0)])
VKD3D_CHECK_FUNC([HAVE_SYNC_SUB_AND_FETCH], [__sync_sub_and_fetch], [__sync_sub_and_fetch((int *)0, 0)])

VKD3D_CHECK_PTHREAD_SETNAME_NP

dnl Makefiles
AS_IF([test "x$enable_demos" = "xyes" -a "x$HAVE_XCB" != "xyes"],
      [AC_MSG_ERROR([libxcb is required for demos.])])
AM_CONDITIONAL([BUILD_DEMOS], [test "x$enable_demos" = "xyes"])
AM_CONDITIONAL([BUILD_TESTS], [test "x$enable_tests" != "xno"])
AM_CONDITIONAL([HAVE_WIDL], [test "x$WIDL" != "xno"])
AM_CONDITIONAL([HAVE_CROSSTARGET32], [test "x$CROSSTARGET32" != "xno"])
AM_CONDITIONAL([HAVE_CROSSTARGET64], [test "x$CROSSTARGET64" != "xno"])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT

dnl Output configuration summary
AS_IF([test "x$CROSSTARGET32" != "xno" -o "x$CROSSTARGET64" != "xno"],
      [HAVE_CROSSTEST=yes], [HAVE_CROSSTEST=no])

AS_ECHO(["
  Configuration summary for $PACKAGE $VERSION

  widl: ${WIDL}

  Have XCB: ${HAVE_XCB}
  Have SPIRV-Tools: ${with_spirv_tools}

  Building demos: ${enable_demos}
  Building tests: ${enable_tests}

  Building crosstests: ${HAVE_CROSSTEST}"])
AS_IF([test "x$CROSSTARGET32" != "xno"], [AS_ECHO(["    Using 32-bit cross compiler: $CROSSCC32"])])
AS_IF([test "x$CROSSTARGET64" != "xno"], [AS_ECHO(["    Using 64-bit cross compiler: $CROSSCC64"])])
AS_ECHO([])
