#!/usr/bin/env python3

# pylint: disable=wildcard-import, unused-wildcard-import, invalid-name

"""Query Vulkan capabilities"""

from ctypes import *

VkResult = c_int32  # enum (size == 4)
VK_SUCCESS = 0
VK_ERROR_INITIALIZATION_FAILED = -3

VkStructureType = c_int32  # enum (size == 4)
VK_STRUCTURE_TYPE_APPLICATION_INFO = 0
VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO = 1

VkInstanceCreateFlags = c_int32  # enum (size == 4)

VkInstance = c_void_p  # handle (struct ptr)


def vk_make_version(major, minor, patch):
    """
    VK_MAKE_VERSION macro logic for Python

    https://www.khronos.org/registry/vulkan/specs/1.1-extensions/html/vkspec.html#fundamentals-versionnum
    """
    return c_uint32((major << 22) | (minor << 12) | patch)


class VkApplicationInfo(Structure):

    """Python shim for struct VkApplicationInfo

    https://www.khronos.org/registry/vulkan/specs/1.1-extensions/man/html/VkApplicationInfo.html
    """

    # pylint: disable=too-few-public-methods

    _fields_ = [('sType', VkStructureType),
                ('pNext', c_void_p),
                ('pApplicationName', c_char_p),
                ('applicationVersion', c_uint32),
                ('pEngineName', c_char_p),
                ('engineVersion', c_uint32),
                ('apiVersion', c_uint32)]

    def __init__(self, name, version):
        super().__init__()
        self.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO
        self.pApplicationName = name.encode()
        self.applicationVersion = vk_make_version(*version)
        self.apiVersion = vk_make_version(1, 0, 0)


class VkInstanceCreateInfo(Structure):

    """Python shim for struct VkInstanceCreateInfo

    https://www.khronos.org/registry/vulkan/specs/1.1-extensions/man/html/VkInstanceCreateInfo.html
    """

    # pylint: disable=too-few-public-methods

    _fields_ = [('sType', VkStructureType),
                ('pNext', c_void_p),
                ('flags', VkInstanceCreateFlags),
                ('pApplicationInfo', POINTER(VkApplicationInfo)),
                ('enabledLayerCount', c_uint32),
                ('ppEnabledLayerNames', c_char_p),
                ('enabledExtensionCount', c_uint32),
                ('ppEnabledExtensionNames', c_char_p)]

    def __init__(self, app_info):
        super().__init__()
        self.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO
        self.pApplicationInfo = pointer(app_info)


def is_vulkan_supported():
    """
    Returns True iff vulkan library can be loaded, initialized,
    and reports at least one physical device available.
    """
    vulkan = None
    try:
        vulkan = CDLL('libvulkan.so.1')
    except OSError:
        return False
    app_info = VkApplicationInfo('vkinfo', version=(0, 1, 0))
    create_info = VkInstanceCreateInfo(app_info)
    instance = VkInstance()
    result = vulkan.vkCreateInstance(byref(create_info), 0, byref(instance))
    if result != VK_SUCCESS:
        return False
    dev_count = c_uint32(0)
    result = vulkan.vkEnumeratePhysicalDevices(instance, byref(dev_count), 0)
    vulkan.vkDestroyInstance(instance, 0)
    return result == VK_SUCCESS and dev_count.value > 0
