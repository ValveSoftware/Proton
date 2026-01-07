#if 0
#pragma makedep unix
#endif

#define _GNU_SOURCE
#include <dlfcn.h>
#include <time.h>

#include "ntstatus.h"
#define WIN32_NO_STATUS
#include "windef.h"
#include "winnt.h"
#include "winternl.h"
#include "wine/server_protocol.h"

#include "openxr_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(openxr);

static struct {
  const char *win32_ext, *linux_ext;
  BOOL remove_original;
  BOOL force_enable;
} substitute_extensions[] = {
    {"XR_KHR_D3D11_enable", "XR_KHR_vulkan_enable"},
    {"XR_KHR_D3D12_enable", "XR_KHR_vulkan_enable"},
    {"XR_KHR_win32_convert_performance_counter_time", "XR_KHR_convert_timespec_time", TRUE, TRUE},
};

static XrResult (*p_xrConvertTimespecTimeToTimeKHR)(XrInstance, const struct timespec *, XrTime *);
static XrResult (*p_xrConvertTimeToTimespecTimeKHR)(XrInstance, XrTime, struct timespec *);

struct openxr_instance_funcs g_xr_host_instance_dispatch_table;

VkDevice (*get_native_VkDevice)(VkDevice);
VkInstance (*get_native_VkInstance)(VkInstance);
VkPhysicalDevice (*get_native_VkPhysicalDevice)(VkPhysicalDevice);
VkPhysicalDevice (*get_wrapped_VkPhysicalDevice)(VkInstance, VkPhysicalDevice);
VkQueue (*get_native_VkQueue)(VkQueue);

XrResult WINAPI wine_xrCreateInstance(const XrInstanceCreateInfo *createInfo, XrInstance *instance) {
  XrResult res;
  uint32_t i, j, count = 0;
  XrInstanceCreateInfo our_createInfo;
  const char *ext_name;
  const char **new_list;

  TRACE("%p, %p\n", createInfo, instance);

  TRACE("Incoming extensions:\n");
  for (i = 0; i < createInfo->enabledExtensionCount; ++i) {
    TRACE("  -%s\n", createInfo->enabledExtensionNames[i]);
  }

  new_list = malloc(createInfo->enabledExtensionCount * sizeof(*new_list));

  /* remove win32 extensions */
  for (i = 0; i < createInfo->enabledExtensionCount; ++i) {
    ext_name = createInfo->enabledExtensionNames[i];
    for (j = 0; j < ARRAY_SIZE(substitute_extensions); ++j) {
      if (!strcmp(ext_name, substitute_extensions[j].win32_ext)) {
        if (substitute_extensions[j].force_enable) {
          ext_name = NULL;
        } else {
          ext_name = substitute_extensions[j].linux_ext;
        }
        break;
      }
    }
    if (ext_name) {
      new_list[count++] = ext_name;
    }
  }

  our_createInfo = *createInfo;
  our_createInfo.enabledExtensionNames = (const char *const *)new_list;
  our_createInfo.enabledExtensionCount = count;
  createInfo = &our_createInfo;

  TRACE("Enabled extensions:\n");
  for (i = 0; i < createInfo->enabledExtensionCount; ++i) {
    TRACE("  -%s\n", createInfo->enabledExtensionNames[i]);
  }

  res = xrCreateInstance(createInfo, instance);
  if (res != XR_SUCCESS) {
    WARN("xrCreateInstance failed: %d\n", res);
    goto cleanup;
  }

#define USE_XR_FUNC(x) \
  xrGetInstanceProcAddr(*instance, #x, (PFN_xrVoidFunction *)&g_xr_host_instance_dispatch_table.p_##x);
  ALL_XR_INSTANCE_FUNCS()
#undef USE_XR_FUNC

  /* These will be NULL if XR_KHR_convert_timespec_time is not available. */
  xrGetInstanceProcAddr(*instance, "xrConvertTimespecTimeToTimeKHR",
                        (PFN_xrVoidFunction *)&p_xrConvertTimespecTimeToTimeKHR);
  xrGetInstanceProcAddr(*instance, "xrConvertTimeToTimespecTimeKHR",
                        (PFN_xrVoidFunction *)&p_xrConvertTimeToTimespecTimeKHR);

cleanup:
  free((void *)our_createInfo.enabledExtensionNames);
  return res;
}

XrResult WINAPI wine_xrCreateSession(XrInstance instance, const XrSessionCreateInfo *createInfo, XrSession *session) {
  wine_XrInstance *wine_instance = wine_instance_from_handle(instance);
  XrResult res;
  XrSessionCreateInfo our_create_info;
  XrGraphicsBindingVulkanKHR our_vk_binding;

  if (createInfo->next) {
    switch (((XrBaseInStructure *)createInfo->next)->type) {
      case XR_TYPE_GRAPHICS_BINDING_VULKAN2_KHR /* == XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR */: {
        const XrGraphicsBindingVulkanKHR *their_vk_binding = (const XrGraphicsBindingVulkanKHR *)createInfo->next;

        our_vk_binding = *their_vk_binding;
        our_vk_binding.instance = get_native_VkInstance(their_vk_binding->instance);
        our_vk_binding.physicalDevice = get_native_VkPhysicalDevice(their_vk_binding->physicalDevice);
        our_vk_binding.device = get_native_VkDevice(their_vk_binding->device);

        our_create_info = *createInfo;
        our_create_info.next = &our_vk_binding;
        createInfo = &our_create_info;
        break;
      }
      default:
        WARN("Unhandled graphics binding type: %d\n", ((XrBaseInStructure *)createInfo->next)->type);
        break;
    }
  }

  res = g_xr_host_instance_dispatch_table.p_xrCreateSession(wine_instance->host_instance, createInfo, session);
  if (res != XR_SUCCESS) {
    WARN("xrCreateSession failed: %d\n", res);
    return res;
  }

  return XR_SUCCESS;
}

XrResult WINAPI wine_xrCreateSwapchain(XrSession session,
                                       const XrSwapchainCreateInfo *createInfo,
                                       XrSwapchain *swapchain) {
  return g_xr_host_instance_dispatch_table.p_xrCreateSwapchain(wine_session_from_handle(session)->host_session,
                                                               createInfo, swapchain);
}

XrResult WINAPI wine_xrEnumerateInstanceExtensionProperties(const char *layerName,
                                                            uint32_t propertyCapacityInput,
                                                            uint32_t *propertyCountOutput,
                                                            XrExtensionProperties *properties) {
  uint32_t i, j, dst, count, extra_extensions_count;
  XrResult res;

  TRACE("\n");

  res = xrEnumerateInstanceExtensionProperties(layerName, propertyCapacityInput, propertyCountOutput, properties);
  if (res != XR_SUCCESS) {
    return res;
  }

  if (!properties) {
    extra_extensions_count = 0;
    for (i = 0; i < ARRAY_SIZE(substitute_extensions); ++i) {
      if (!substitute_extensions[i].remove_original || substitute_extensions[i].force_enable) {
        ++extra_extensions_count;
      }
    }

    *propertyCountOutput += extra_extensions_count;
    TRACE("%u extensions.\n", *propertyCountOutput);
    return XR_SUCCESS;
  }

  count = *propertyCountOutput;
  for (i = 0; i < count; ++i) {
    for (j = 0; j < ARRAY_SIZE(substitute_extensions); ++j) {
      if (!strcmp(properties[i].extensionName, substitute_extensions[j].linux_ext)) {
        if (substitute_extensions[j].force_enable) {
          FIXME("Force enabled extension %s already supported by the runtime.\n", substitute_extensions[j].linux_ext);
          substitute_extensions[j].force_enable = FALSE;
        }

        if (substitute_extensions[j].remove_original) {
          dst = i;
        } else {
          dst = (*propertyCountOutput)++;
        }
        strcpy(properties[dst].extensionName, substitute_extensions[j].win32_ext);
      }
    }
  }

  for (j = 0; j < ARRAY_SIZE(substitute_extensions); ++j) {
    if (substitute_extensions[j].force_enable) {
      strcpy(properties[*propertyCountOutput].extensionName, substitute_extensions[j].win32_ext);
      ++*propertyCountOutput;
    }
  }

  TRACE("Enumerated extensions:\n");
  for (i = 0; i < *propertyCountOutput; ++i) {
    TRACE("  -%s\n", properties[i].extensionName);
  }

  return XR_SUCCESS;
}

XrResult WINAPI wine_xrGetVulkanGraphicsDeviceKHR(XrInstance instance,
                                                  XrSystemId systemId,
                                                  VkInstance vkInstance,
                                                  VkPhysicalDevice *vkPhysicalDevice) {
  XrResult res;
  TRACE("%p, 0x%s, %p, %p\n", instance, wine_dbgstr_longlong(systemId), vkInstance, vkPhysicalDevice);
  res = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsDeviceKHR(
      wine_instance_from_handle(instance)->host_instance, systemId, get_native_VkInstance(vkInstance),
      vkPhysicalDevice);
  *vkPhysicalDevice = get_wrapped_VkPhysicalDevice(vkInstance, *vkPhysicalDevice);
  return res;
}

XrResult WINAPI wine_xrGetVulkanGraphicsDevice2KHR(XrInstance instance,
                                                   const XrVulkanGraphicsDeviceGetInfoKHR *getInfo,
                                                   VkPhysicalDevice *vulkanPhysicalDevice) {
  XrVulkanGraphicsDeviceGetInfoKHR our_getinfo;
  XrResult res;

  TRACE("instance %p, getInfo %p, vulkanPhysicalDevice %p.\n", instance, getInfo, vulkanPhysicalDevice);

  if (getInfo->next) {
    WARN("Unsupported chained structure %p.\n", getInfo->next);
  }

  our_getinfo = *getInfo;
  our_getinfo.vulkanInstance = get_native_VkInstance(our_getinfo.vulkanInstance);

  res = g_xr_host_instance_dispatch_table.p_xrGetVulkanGraphicsDevice2KHR(
      wine_instance_from_handle(instance)->host_instance, &our_getinfo, vulkanPhysicalDevice);
  if (res == XR_SUCCESS) {
    *vulkanPhysicalDevice = get_wrapped_VkPhysicalDevice(getInfo->vulkanInstance, *vulkanPhysicalDevice);
  }
  return res;
}

XrResult WINAPI wine_xrGetVulkanInstanceExtensionsKHR(XrInstance instance,
                                                      XrSystemId systemId,
                                                      uint32_t bufferCapacityInput,
                                                      uint32_t *bufferCountOutput,
                                                      char *buffer) {
  static const char win32_surface[] = "VK_KHR_surface VK_KHR_win32_surface";

  XrResult res;
  uint32_t lin_len;

  TRACE("%p, 0x%s, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), bufferCapacityInput, bufferCountOutput,
        buffer);

  /* Linux SteamVR does not return xlib_surface, but Windows SteamVR _does_
   * return win32_surface. Some games (including hello_xr) depend on that, so
   * add it here. */

  res = g_xr_host_instance_dispatch_table.p_xrGetVulkanInstanceExtensionsKHR(
      wine_instance_from_handle(instance)->host_instance, systemId, bufferCapacityInput, bufferCountOutput, buffer);
  if (res == XR_SUCCESS) {
    if (bufferCapacityInput > 0) {
      /* *bufferCountOutput is not required to (and sometimes does not) contain the offset to the NUL byte */
      lin_len = strlen(buffer) + 1;

      if (bufferCapacityInput < lin_len + sizeof(win32_surface)) {
        return XR_ERROR_SIZE_INSUFFICIENT;
      }

      buffer[lin_len - 1] = ' ';
      memcpy(&buffer[lin_len], win32_surface, sizeof(win32_surface));

      TRACE("returning: %s\n", buffer);
      *bufferCountOutput = lin_len + sizeof(win32_surface);
    } else {
      *bufferCountOutput += sizeof(win32_surface) /* NUL byte included for required ' ' */;
    }
  }

  return res;
}

static VkResult WINAPI vk_create_instance_callback(const VkInstanceCreateInfo *create_info,
                                                   const VkAllocationCallbacks *allocator,
                                                   VkInstance *vk_instance,
                                                   void *(*pfnGetInstanceProcAddr)(VkInstance, const char *),
                                                   void *context) {
  struct vk_create_callback_context *c = context;
  XrVulkanInstanceCreateInfoKHR our_create_info;
  VkInstanceCreateInfo our_vulkan_create_info;
  const char **enabled_extensions = NULL;
  unsigned int i;
  VkResult ret;

  our_create_info = *(const XrVulkanInstanceCreateInfoKHR *)c->create_info;
  our_create_info.pfnGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)pfnGetInstanceProcAddr;
  our_create_info.vulkanCreateInfo = create_info;
  our_create_info.vulkanAllocator = allocator;

  for (i = 0; i < create_info->enabledExtensionCount; ++i) {
    if (!strcmp(create_info->ppEnabledExtensionNames[i], "VK_KHR_surface")) {
      break;
    }
  }

  if (i == create_info->enabledExtensionCount) {
    our_vulkan_create_info = *create_info;
    our_create_info.vulkanCreateInfo = &our_vulkan_create_info;

    enabled_extensions = malloc((create_info->enabledExtensionCount + 2) * sizeof(*enabled_extensions));
    memcpy(enabled_extensions, create_info->ppEnabledExtensionNames,
           create_info->enabledExtensionCount * sizeof(*enabled_extensions));
    enabled_extensions[our_vulkan_create_info.enabledExtensionCount++] = "VK_KHR_surface";
    enabled_extensions[our_vulkan_create_info.enabledExtensionCount++] = "VK_KHR_xlib_surface";
    our_vulkan_create_info.ppEnabledExtensionNames = enabled_extensions;
  }

  c->ret = g_xr_host_instance_dispatch_table.p_xrCreateVulkanInstanceKHR(
      wine_instance_from_handle(c->wine_instance)->host_instance, &our_create_info, vk_instance, &ret);
  free(enabled_extensions);
  return ret;
}

static VkResult WINAPI vk_create_device_callback(VkPhysicalDevice phys_dev,
                                                 const VkDeviceCreateInfo *create_info,
                                                 const VkAllocationCallbacks *allocator,
                                                 VkDevice *vk_device,
                                                 void *(*pfnGetInstanceProcAddr)(VkInstance, const char *),
                                                 void *context) {
  /* Only Unix calls here, called from the Unix side. */
  struct vk_create_callback_context *c = context;
  XrVulkanDeviceCreateInfoKHR our_create_info;
  VkResult ret;

  our_create_info = *(const XrVulkanDeviceCreateInfoKHR *)c->create_info;
  our_create_info.pfnGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)pfnGetInstanceProcAddr;
  our_create_info.vulkanPhysicalDevice = phys_dev;
  our_create_info.vulkanCreateInfo = create_info;
  our_create_info.vulkanAllocator = allocator;
  c->ret = g_xr_host_instance_dispatch_table.p_xrCreateVulkanDeviceKHR(
      wine_instance_from_handle(c->wine_instance)->host_instance, &our_create_info, vk_device, &ret);
  return ret;
}

NTSTATUS init_openxr(void *args) {
  struct init_openxr_params *params = args;
  NTSTATUS status;
  unixlib_handle_t unix_funcs;
  Dl_info info;
  void *unix_handle;

  status = NtQueryVirtualMemory(GetCurrentProcess(), params->winevulkan,
                                (MEMORY_INFORMATION_CLASS)1000 /*MemoryWineUnixFuncs*/, &unix_funcs, sizeof(unix_funcs),
                                NULL);
  if (status) {
    ERR("NtQueryVirtualMemory status %#x.\n", (int)status);
    return status;
  }

  if (!dladdr((void *)(ULONG_PTR)unix_funcs, &info)) {
    ERR("dladdr failed.\n");
    return STATUS_INVALID_PARAMETER;
  }

  TRACE("path %s.\n", info.dli_fname);
  if (!(unix_handle = dlopen(info.dli_fname, RTLD_NOW))) {
    ERR("dlopen failed.\n");
    return STATUS_INVALID_PARAMETER;
  }

#define L(name)                                      \
  if (!(name = dlsym(unix_handle, "__wine_" #name))) \
    ERR("%s not found.\n", #name);

  L(get_native_VkDevice);
  L(get_native_VkInstance);
  L(get_native_VkPhysicalDevice);
  L(get_wrapped_VkPhysicalDevice);
  L(get_native_VkQueue);
#undef L

  dlclose(unix_handle);

  params->create_instance_callback = (UINT64)&vk_create_instance_callback;
  params->create_device_callback = (UINT64)&vk_create_device_callback;

  return STATUS_SUCCESS;
}

/* Constants for time conversion - matches Wine's ntdll/unix/sync.c */
#define NANOSECONDS_IN_A_SECOND 1000000000
#define TICKSPERSEC             10000000

static LONGLONG qpc_to_monotonic_offset(void)
{
  LARGE_INTEGER qpc;
  struct timespec ts;
  LONGLONG monotonic_qpc;

  NtQueryPerformanceCounter(&qpc, NULL);
  clock_gettime(CLOCK_MONOTONIC, &ts);
  monotonic_qpc = (ULONGLONG)ts.tv_sec * TICKSPERSEC + ts.tv_nsec / (NANOSECONDS_IN_A_SECOND / TICKSPERSEC);

  return qpc.QuadPart - monotonic_qpc;
}

XrResult wine_xrConvertWin32PerformanceCounterToTimeKHR(XrInstance instance,
                                                        const LARGE_INTEGER *performanceCounter,
                                                        XrTime *time) {
  wine_XrInstance *wine_instance = wine_instance_from_handle(instance);
  struct timespec ts;
  LONGLONG monotonic_qpc;
  XrResult res;

  TRACE("instance %p, performanceCounter %p (%lld), time %p\n",
        instance, performanceCounter,
        performanceCounter ? (long long)performanceCounter->QuadPart : 0, time);

  if (!performanceCounter || !time)
    return XR_ERROR_VALIDATION_FAILURE;

  if (!p_xrConvertTimespecTimeToTimeKHR) {
    WARN("XR_KHR_convert_timespec_time not available, cannot convert time.\n");
    return XR_ERROR_FUNCTION_UNSUPPORTED;
  }

  monotonic_qpc = performanceCounter->QuadPart - qpc_to_monotonic_offset();

  ts.tv_sec = monotonic_qpc / TICKSPERSEC;
  ts.tv_nsec = (monotonic_qpc % TICKSPERSEC) * (NANOSECONDS_IN_A_SECOND / TICKSPERSEC);

  res = p_xrConvertTimespecTimeToTimeKHR(wine_instance->host_instance, &ts, time);
  if (res != XR_SUCCESS)
    WARN("xrConvertTimespecTimeToTimeKHR failed: %d\n", res);

  return res;
}

XrResult wine_xrConvertTimeToWin32PerformanceCounterKHR(XrInstance instance,
                                                        XrTime time,
                                                        LARGE_INTEGER *performanceCounter) {
  wine_XrInstance *wine_instance = wine_instance_from_handle(instance);
  struct timespec ts;
  LONGLONG monotonic_qpc;
  XrResult res;

  TRACE("instance %p, time %lld, performanceCounter %p\n",
        instance, (long long)time, performanceCounter);

  if (!performanceCounter)
    return XR_ERROR_VALIDATION_FAILURE;

  if (!p_xrConvertTimeToTimespecTimeKHR) {
    WARN("XR_KHR_convert_timespec_time not available, cannot convert time.\n");
    return XR_ERROR_FUNCTION_UNSUPPORTED;
  }

  res = p_xrConvertTimeToTimespecTimeKHR(wine_instance->host_instance, time, &ts);
  if (res != XR_SUCCESS) {
    WARN("xrConvertTimeToTimespecTimeKHR failed: %d\n", res);
    return res;
  }

  monotonic_qpc = (ULONGLONG)ts.tv_sec * TICKSPERSEC +
                  ts.tv_nsec / (NANOSECONDS_IN_A_SECOND / TICKSPERSEC);
  performanceCounter->QuadPart = monotonic_qpc + qpc_to_monotonic_offset();

  return XR_SUCCESS;
}

NTSTATUS is_available_instance_function_openxr(void *args)
{
  struct is_available_instance_function_openxr_params *params = args;
  static const char *always_supported[] =
  {
    "xrGetD3D11GraphicsRequirementsKHR",
    "xrGetD3D12GraphicsRequirementsKHR",
    "xrConvertTimeToWin32PerformanceCounterKHR",
    "xrConvertWin32PerformanceCounterToTimeKHR",
  };
  wine_XrInstance *wine_instance = wine_instance_from_handle(params->instance);
  PFN_xrVoidFunction fn;
  unsigned int i;

  for (i = 0; i < ARRAY_SIZE(always_supported); ++i)
  {
    if (!strcmp(params->name, always_supported[i]))
    {
      params->ret = XR_SUCCESS;
      return STATUS_SUCCESS;
    }
  }

  params->ret = xrGetInstanceProcAddr(wine_instance ? wine_instance->host_instance : NULL, params->name, &fn);
  return STATUS_SUCCESS;
}
