dnl VKD3D_CHECK_VULKAN_HEADER_VERSION
AC_DEFUN([VKD3D_CHECK_VULKAN_HEADER_VERSION],

[AS_VAR_PUSHDEF([vkd3d_vk_version], vkd3d_cv_vk_header_version_[[$1]])

AC_CACHE_CHECK([whether VK_HEADER_VERSION >= [$1]], vkd3d_vk_version,
               [AC_LINK_IFELSE(
               [AC_LANG_SOURCE([#include <vulkan/vulkan.h>
                               #if VK_HEADER_VERSION < $1
                               #error "Vulkan headers are too old"
                               #endif
                               int main(void) { return 0; }])],
               [AS_VAR_SET([vkd3d_vk_version], [yes])],
               [AS_VAR_SET([vkd3d_vk_version], [no])])])

AS_IF([test "x$vkd3d_vk_version" != "xyes"], [$2])

AS_VAR_POPDEF([vkd3d_vk_version])])
