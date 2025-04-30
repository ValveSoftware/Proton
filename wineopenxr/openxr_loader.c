#include <stdlib.h>

#include "initguid.h"
#include "openxr_loader.h"
#include "wine/unixlib.h"
#include "wine/vulkan_driver.h"
#include "dxvk-interop.h"
#include "vkd3d-proton-interop.h"

WINE_DEFAULT_DEBUG_CHANNEL(openxr);

static uint32_t g_physdev_vid, g_physdev_pid;
static char *g_instance_extensions, *g_device_extensions;
static XrVersion api_version = XR_CURRENT_API_VERSION;

#define SESSION_TYPE_VULKAN 1
#define SESSION_TYPE_OPENGL 2
#define SESSION_TYPE_D3D11 3
#define SESSION_TYPE_D3D12 4

UINT64 g_vk_create_instance_callback;
UINT64 g_vk_create_device_callback;

union CompositionLayer {
  XrCompositionLayerProjection projection;
  XrCompositionLayerQuad quad;
  XrCompositionLayerCubeKHR cube;
  XrCompositionLayerDepthInfoKHR depth_info;
  XrCompositionLayerCylinderKHR cylinder;
  XrCompositionLayerEquirectKHR equirect;
  XrCompositionLayerEquirect2KHR equirect2;
};

static CRITICAL_SECTION session_list_lock = {NULL, -1, 0, 0, 0, 0};
static struct list session_list = LIST_INIT(session_list);

static wine_XrSession *get_wrapped_XrSession(XrSession native) {
  wine_XrSession *cursor;

  EnterCriticalSection(&session_list_lock);

  LIST_FOR_EACH_ENTRY(cursor, &session_list, wine_XrSession, entry) {
    if (cursor->host_session == native) {
      break;
    }
  }

  LeaveCriticalSection(&session_list_lock);

  if (&cursor->entry == &session_list) {
    return NULL;
  }

  return cursor;
}

static void parse_extensions(const char *in, uint32_t *out_count, char ***out_strs) {
  char *iter, *start;
  char **list, *str = strdup(in);
  uint32_t extension_count = 0, o = 0;

  iter = str;
  while (*iter) {
    if (*iter++ == ' ') {
      extension_count++;
    }
  }
  /* count the one ending in NUL */
  if (iter != str) {
    extension_count++;
  }
  if (!extension_count) {
    *out_count = 0;
    *out_strs = NULL;
    return;
  }

  list = malloc(extension_count * sizeof(char *));

  start = iter = str;
  do {
    if (*iter == ' ') {
      *iter = 0;
      list[o++] = strdup(start);
      TRACE("added %s to list\n", list[o - 1]);
      iter++;
      start = iter;
    } else if (*iter == 0) {
      list[o++] = strdup(start);
      TRACE("added %s to list\n", list[o - 1]);
      break;
    } else {
      iter++;
    }
  } while (1);

  *out_count = extension_count;
  *out_strs = list;
}

static BOOL get_vulkan_extensions(void) {
  /* Linux SteamVR's xrCreateInstance will hang forever if SteamVR hasn't
   * already been launched by the user.  Since that's the only way to tell if
   * OpenXR is functioning, let's use OpenVR to tell whether SteamVR is
   * functioning before calling xrCreateInstance.
   *
   * This should be removed when SteamVR's bug is fixed. */
  DWORD type, value, wait_status = 0, size;
  LSTATUS status;
  HANDLE event;
  HKEY vr_key;

  if ((status = RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\Wine\\VR", 0, KEY_READ, &vr_key))) {
    ERR("Could not create key, status %#x.\n", status);
    return FALSE;
  }

  size = sizeof(value);
  if ((status = RegQueryValueExA(vr_key, "state", NULL, &type, (BYTE *)&value, &size))) {
    ERR("Could not query value, status %#x.\n", status);
    RegCloseKey(vr_key);
    return FALSE;
  }
  if (type != REG_DWORD) {
    ERR("Unexpected value type %#x.\n", type);
    RegCloseKey(vr_key);
    return FALSE;
  }

  if (value) {
    goto done;
  }

  event = CreateEventA(NULL, FALSE, FALSE, NULL);
  while (1) {
    if (RegNotifyChangeKeyValue(vr_key, FALSE, REG_NOTIFY_CHANGE_LAST_SET, event, TRUE)) {
      ERR("Error registering registry change notification.\n");
      CloseHandle(event);
      goto done;
    }
    size = sizeof(value);
    if ((status = RegQueryValueExA(vr_key, "state", NULL, &type, (BYTE *)&value, &size))) {
      ERR("Could not query value, status %#x.\n", status);
      CloseHandle(event);
      goto done;
    }
    if (value) {
      break;
    }
    while ((wait_status = WaitForSingleObject(event, 1000)) == WAIT_TIMEOUT) {
      ERR("VR state wait timeout.\n");
    }

    if (wait_status != WAIT_OBJECT_0) {
      ERR("Got unexpected wait status %#x.\n", wait_status);
      break;
    }
  }
  CloseHandle(event);

done:
  if (value == 1) {
    if ((status = RegQueryValueExA(vr_key, "openxr_vulkan_instance_extensions", NULL, &type, NULL, &size))) {
      ERR("Error getting openxr_vulkan_instance_extensions, status %#x.\n", status);
      RegCloseKey(vr_key);
      return FALSE;
    }
    g_instance_extensions = malloc(size);
    if ((status = RegQueryValueExA(vr_key, "openxr_vulkan_instance_extensions", NULL, &type,
                                   (BYTE *)g_instance_extensions, &size))) {
      ERR("Error getting openxr_vulkan_instance_extensions, status %#x.\n", status);
      RegCloseKey(vr_key);
      return FALSE;
    }
    if ((status = RegQueryValueExA(vr_key, "openxr_vulkan_device_extensions", NULL, &type, NULL, &size))) {
      ERR("Error getting openxr_vulkan_device_extensions, status %#x.\n", status);
      RegCloseKey(vr_key);
      return FALSE;
    }
    g_device_extensions = malloc(size);
    if ((status = RegQueryValueExA(vr_key, "openxr_vulkan_device_extensions", NULL, &type, (BYTE *)g_device_extensions,
                                   &size))) {
      ERR("Error getting openxr_vulkan_device_extensions, status %#x.\n", status);
      RegCloseKey(vr_key);
      return FALSE;
    }
    if ((status = RegQueryValueExA(vr_key, "openxr_vulkan_device_vid", NULL, &type, (BYTE *)&g_physdev_vid, &size))) {
      ERR("Error getting openxr_vulkan_device_vid, status: %#x.\n", status);
      RegCloseKey(vr_key);
      return FALSE;
    }
    if ((status = RegQueryValueExA(vr_key, "openxr_vulkan_device_pid", NULL, &type, (BYTE *)&g_physdev_pid, &size))) {
      ERR("Error getting openxr_vulkan_device_pid, status: %#x.\n", status);
      RegCloseKey(vr_key);
      return FALSE;
    }
  }

  RegCloseKey(vr_key);
  return value == 1;
}

static BOOL WINAPI wine_openxr_unix_init(INIT_ONCE *once, void *param, void **context) {
  struct init_openxr_params params = {.winevulkan = LoadLibraryA("winevulkan.dll")};
  if (__wine_init_unix_call() || UNIX_CALL(init, &params)) {
    return FALSE;
  }
  g_vk_create_instance_callback = params.create_instance_callback;
  g_vk_create_device_callback = params.create_device_callback;
  return TRUE;
}

static BOOL wine_openxr_unix_init_once(void) {
  static INIT_ONCE init_once = INIT_ONCE_STATIC_INIT;

  return InitOnceExecuteOnce(&init_once, wine_openxr_unix_init, NULL, NULL);
}

static XrResult wine_openxr_init_once(void) {
  if (g_instance_extensions || g_device_extensions) {
    /* already done */
    return XR_SUCCESS;
  }

  if (!wine_openxr_unix_init_once()) {
    return XR_ERROR_INITIALIZATION_FAILED;
  }

  if (!get_vulkan_extensions()) {
    return XR_ERROR_INITIALIZATION_FAILED;
  }

  TRACE("g_device_extensions %s.\n", g_device_extensions);
  __wine_set_unix_env(WINE_VULKAN_DEVICE_VARIABLE, g_device_extensions);
  return XR_SUCCESS;
}

static int get_extensions(char **ret_instance_extensions, char **ret_device_extensions,
                          uint32_t *ret_physdev_vid, uint32_t *ret_physdev_pid) {
  PFN_xrGetVulkanInstanceExtensionsKHR pxrGetVulkanInstanceExtensionsKHR;
  PFN_xrGetSystem pxrGetSystem;
  PFN_xrGetVulkanGraphicsDeviceKHR pxrGetVulkanGraphicsDeviceKHR;
  PFN_xrGetVulkanGraphicsRequirementsKHR pxrGetVulkanGraphicsRequirementsKHR;
  PFN_xrGetInstanceProperties pxrGetInstanceProperties;
  PFN_xrEnumerateViewConfigurations pxrEnumerateViewConfigurations;
  char *instance_extensions, *device_extensions;
  uint32_t len, i;
  XrInstance instance;
  XrSystemId system;
  XrResult res;
  VkInstance vk_instance;
  VkResult vk_res;
  VkPhysicalDevice vk_physdev;
  VkPhysicalDeviceProperties vk_dev_props;
  struct xrGetVulkanDeviceExtensionsKHR_params params;
  NTSTATUS status;

  static const char *xr_extensions[] = {
      "XR_KHR_vulkan_enable",
  };

  XrInstanceCreateInfo xrCreateInfo = {
      .type = XR_TYPE_INSTANCE_CREATE_INFO,
      .next = NULL,
      .createFlags = 0,
      .applicationInfo =
          {
              .applicationVersion = 0,
              .engineVersion = 0,
              .apiVersion = api_version,
          },
      .enabledApiLayerCount = 0,
      .enabledApiLayerNames = NULL,
      .enabledExtensionCount = ARRAY_SIZE(xr_extensions),
      .enabledExtensionNames = xr_extensions,
  };
  XrInstanceProperties inst_props = {
      .type = XR_TYPE_INSTANCE_PROPERTIES,
  };
  XrSystemGetInfo system_info = {
      .type = XR_TYPE_SYSTEM_GET_INFO,
      .formFactor = XR_FORM_FACTOR_HEAD_MOUNTED_DISPLAY,
  };
  XrGraphicsRequirementsVulkanKHR reqs = {
      .type = XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR,
  };
  VkApplicationInfo vk_appinfo = {
      .sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
      .pNext = NULL,
      .pApplicationName = "wineopenxr test instance",
      .applicationVersion = 0,
      .pEngineName = "wineopenxr test instance",
      .engineVersion = VK_MAKE_VERSION(1, 0, 0),
      .apiVersion = VK_MAKE_VERSION(1, 1, 0),
  };
  VkInstanceCreateInfo vk_createinfo = {
      .sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
      .pNext = NULL,
      .flags = 0,
      .pApplicationInfo = &vk_appinfo,
      .enabledLayerCount = 0,
      .ppEnabledLayerNames = NULL,
      .enabledExtensionCount = 0,
      .ppEnabledExtensionNames = NULL,
  };
  XrViewConfigurationType *configs;

  if (!wine_openxr_unix_init_once()) {
    WARN("unixlib initialization failed.\n");
    return XR_ERROR_INITIALIZATION_FAILED;
  }

  strcpy(xrCreateInfo.applicationInfo.applicationName, "wineopenxr test instance");
  strcpy(xrCreateInfo.applicationInfo.engineName, "wineopenxr test instance");

  res = xrCreateInstance(&xrCreateInfo, &instance);
  if (res == XR_ERROR_API_VERSION_UNSUPPORTED) {
    WARN("version %#lx unsupported.\n", (long)api_version);
    api_version = XR_MAKE_VERSION(1, 0, 0);
    xrCreateInfo.applicationInfo.apiVersion = api_version;
    res = xrCreateInstance(&xrCreateInfo, &instance);
  }
  if (res != XR_SUCCESS) {
    WARN("xrCreateInstance failed: %d\n", res);
    return res;
  }

  xrGetInstanceProcAddr(instance, "xrGetVulkanInstanceExtensionsKHR",
                        (PFN_xrVoidFunction *)&pxrGetVulkanInstanceExtensionsKHR);
  xrGetInstanceProcAddr(instance, "xrGetSystem", (PFN_xrVoidFunction *)&pxrGetSystem);
  xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsDeviceKHR", (PFN_xrVoidFunction *)&pxrGetVulkanGraphicsDeviceKHR);
  xrGetInstanceProcAddr(instance, "xrGetVulkanGraphicsRequirementsKHR",
                        (PFN_xrVoidFunction *)&pxrGetVulkanGraphicsRequirementsKHR);
  xrGetInstanceProcAddr(instance, "xrGetInstanceProperties", (PFN_xrVoidFunction *)&pxrGetInstanceProperties);
  xrGetInstanceProcAddr(instance, "xrEnumerateViewConfigurations",
                        (PFN_xrVoidFunction *)&pxrEnumerateViewConfigurations);

  res = pxrGetInstanceProperties(instance, &inst_props);
  if (res != XR_SUCCESS) {
    WARN("xrGetInstanceProperties failed: %d\n", res);
  }

  res = pxrGetSystem(instance, &system_info, &system);
  if (res != XR_SUCCESS) {
    WARN("xrGetSystem failed: %d\n", res);
    xrDestroyInstance(instance);
    return res;
  }

  res = pxrEnumerateViewConfigurations(instance, system, 0, &len, NULL);
  if (res != XR_SUCCESS) {
    WARN("xrEnumerateViewConfigurations failed: %d\n", res);
  }
  configs = malloc(len * sizeof(*configs));
  res = pxrEnumerateViewConfigurations(instance, system, len, &len, configs);
  if (res != XR_SUCCESS) {
    WARN("xrEnumerateViewConfigurations failed: %d\n", res);
  }
  free(configs);

  res = pxrGetVulkanGraphicsRequirementsKHR(instance, system, &reqs);
  if (res != XR_SUCCESS) {
    WARN("xrGetVulkanGraphicsRequirementsKHR failed: %d\n", res);
  }

  res = pxrGetVulkanInstanceExtensionsKHR(instance, system, 0, &len, NULL);
  if (res != XR_SUCCESS) {
    WARN("xrGetVulkanInstanceExtensionsKHR failed: %d\n", res);
    xrDestroyInstance(instance);
    return res;
  }
  instance_extensions = malloc(len);
  res = pxrGetVulkanInstanceExtensionsKHR(instance, system, len, &len, instance_extensions);
  if (res != XR_SUCCESS) {
    WARN("xrGetVulkanInstanceExtensionsKHR failed: %d\n", res);
    xrDestroyInstance(instance);
    free(instance_extensions);
    return res;
  }

  parse_extensions(instance_extensions, &vk_createinfo.enabledExtensionCount,
                   (char ***)&vk_createinfo.ppEnabledExtensionNames);

  vk_res = vkCreateInstance(&vk_createinfo, NULL, &vk_instance);
  if (vk_res != VK_SUCCESS) {
    WARN("vkCreateInstance failed: %d\n", vk_res);
    for (i = 0; i < vk_createinfo.enabledExtensionCount; ++i) {
      free((void *)vk_createinfo.ppEnabledExtensionNames[i]);
    }
    free((void *)vk_createinfo.ppEnabledExtensionNames);
    xrDestroyInstance(instance);
    free(instance_extensions);
    return XR_ERROR_INITIALIZATION_FAILED;
  }

  for (i = 0; i < vk_createinfo.enabledExtensionCount; ++i) {
    free((void *)vk_createinfo.ppEnabledExtensionNames[i]);
  }
  free((void *)vk_createinfo.ppEnabledExtensionNames);

  res = pxrGetVulkanGraphicsDeviceKHR(instance, system, vk_instance, &vk_physdev);
  if (res != XR_SUCCESS) {
    WARN("xrGetVulkanGraphicsDeviceKHR failed: %d\n", res);
    vkDestroyInstance(vk_instance, NULL);
    xrDestroyInstance(instance);
    free(instance_extensions);
    return res;
  }

  vkGetPhysicalDeviceProperties(vk_physdev, &vk_dev_props);
  *ret_physdev_vid = vk_dev_props.vendorID;
  *ret_physdev_pid = vk_dev_props.deviceID;

  /* Call Unix thunk directly to get the real host extensions list */
  params.instance = instance;
  params.systemId = system;
  params.bufferCapacityInput = 0;
  params.bufferCountOutput = &len;
  params.buffer = NULL;
  status = UNIX_CALL(xrGetVulkanDeviceExtensionsKHR, &params);
  assert(!status && "xrGetVulkanDeviceExtensionsKHR");
  res = params.result;

  if (res != XR_SUCCESS) {
    WARN("pxrGetVulkanDeviceExtensionsKHR fail: %d\n", res);
    vkDestroyInstance(vk_instance, NULL);
    xrDestroyInstance(instance);
    free(instance_extensions);
    return res;
  }
  device_extensions = malloc(len);

  params.bufferCapacityInput = len;
  params.buffer = device_extensions;
  status = UNIX_CALL(xrGetVulkanDeviceExtensionsKHR, &params);
  assert(!status && "xrGetVulkanDeviceExtensionsKHR");
  res = params.result;

  if (res != XR_SUCCESS) {
    WARN("pxrGetVulkanDeviceExtensionsKHR fail: %d\n", res);
    vkDestroyInstance(vk_instance, NULL);
    xrDestroyInstance(instance);
    free(instance_extensions);
    free(device_extensions);
    return res;
  }

  vkDestroyInstance(vk_instance, NULL);
  xrDestroyInstance(instance);

  TRACE("Got required instance extensions: %s\n", instance_extensions);
  TRACE("Got required device extensions: %s\n", device_extensions);

  *ret_instance_extensions = instance_extensions;
  *ret_device_extensions = device_extensions;

  return XR_SUCCESS;
}

XrResult WINAPI xrCreateInstance(const XrInstanceCreateInfo *createInfo, XrInstance *instance) {
  wine_XrInstance *wine_instance = calloc(1, sizeof(wine_XrInstance));
  struct xrCreateInstance_params params = {
      .createInfo = createInfo,
      .instance = &wine_instance->host_instance,
  };
  NTSTATUS _status;
  _status = UNIX_CALL(xrCreateInstance, &params);
  assert(!_status && "xrCreateInstance");

  if (params.result != XR_SUCCESS) {
    WARN("xrCreateInstance failed: %d\n", params.result);
    free(wine_instance);
  } else {
    *instance = (XrInstance)wine_instance;
  }

  return params.result;
}

XrResult WINAPI xrDestroyInstance(XrInstance instance) {
  wine_XrInstance *wine_instance = wine_instance_from_handle(instance);
  struct xrDestroyInstance_params params = {
      .instance = instance,
  };
  NTSTATUS _status;

  TRACE("\n");
  _status = UNIX_CALL(xrDestroyInstance, &params);
  assert(!_status && "xrDestroyInstance");

  if (params.result != XR_SUCCESS) {
    WARN("xrDestroyInstance failed: %d\n", params.result);
    return params.result;
  }

  if (wine_instance->dxvk_device) {
    wine_instance->dxvk_device->lpVtbl->Release(wine_instance->dxvk_device);
  }

  if (wine_instance->d3d12_device) {
    vkDestroyCommandPool(wine_instance->vk_device, wine_instance->vk_command_pool, NULL);
    assert(!wine_instance->d3d12_device2 || (void *)wine_instance->d3d12_device2 == (void *)wine_instance->d3d12_device);
    wine_instance->d3d12_device->lpVtbl->Release(wine_instance->d3d12_device);
    wine_instance->d3d12_queue->lpVtbl->Release(wine_instance->d3d12_queue);
  }

  free(wine_instance);

  return XR_SUCCESS;
}

/* SteamVR does some internal init during these functions. */
static XrResult do_vulkan_init(wine_XrInstance *wine_instance, VkInstance vk_instance) {
  XrInstance instance = (XrInstance)wine_instance;
  char *instance_extensions, *device_extensions;
  XrGraphicsRequirementsVulkanKHR vk_reqs;
  XrResult res;
  uint32_t len;

  vk_reqs.type = XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR;
  vk_reqs.next = NULL;
  res = xrGetVulkanGraphicsRequirementsKHR(instance, wine_instance->systemId, &vk_reqs);
  if (res != XR_SUCCESS) {
    WINE_WARN("xrGetVulkanGraphicsRequirementsKHR failed: %d\n", res);
    return res;
  }

  res = xrGetVulkanInstanceExtensionsKHR(instance, wine_instance->systemId, 0, &len, NULL);
  if (res != XR_SUCCESS) {
    WINE_WARN("xrGetVulkanInstanceExtensionsKHR failed: %d\n", res);
    return res;
  }
  instance_extensions = malloc(len);
  res = xrGetVulkanInstanceExtensionsKHR(instance, wine_instance->systemId, len, &len, instance_extensions);
  if (res != XR_SUCCESS) {
    WINE_WARN("xrGetVulkanInstanceExtensionsKHR failed: %d\n", res);
    free(instance_extensions);
    return res;
  }

  res = xrGetVulkanGraphicsDeviceKHR(instance, wine_instance->systemId, vk_instance, &wine_instance->vk_phys_dev);
  if (res != XR_SUCCESS) {
    WINE_WARN("xrGetVulkanGraphicsDeviceKHR failed: %d\n", res);
    return res;
  }

  res = xrGetVulkanDeviceExtensionsKHR(instance, wine_instance->systemId, 0, &len, NULL);
  if (res != XR_SUCCESS) {
    WINE_WARN("pxrGetVulkanDeviceExtensionsKHR fail: %d\n", res);
    return res;
  }
  device_extensions = malloc(len);
  res = xrGetVulkanDeviceExtensionsKHR(instance, wine_instance->systemId, len, &len, device_extensions);
  if (res != XR_SUCCESS) {
    WINE_WARN("pxrGetVulkanDeviceExtensionsKHR fail: %d\n", res);
    free(device_extensions);
    return res;
  }
  free(device_extensions);

  return XR_SUCCESS;
}

XrResult WINAPI xrCreateSession(XrInstance instance, const XrSessionCreateInfo *createInfo, XrSession *session) {
  wine_XrInstance *wine_instance = wine_instance_from_handle(instance);
  wine_XrSession *wine_session = calloc(1, sizeof(wine_XrSession));
  XrSessionCreateInfo our_create_info = *createInfo;
  XrGraphicsBindingVulkanKHR our_vk_binding;
  struct xrCreateSession_params params = {
      .instance = instance,
      .createInfo = &our_create_info,
      .session = &wine_session->host_session,
  };
  XrResult res;
  NTSTATUS _status;
  uint32_t session_type = 0;

  TRACE("%p, %p, %p\n", instance, createInfo, session);

  if (createInfo->next) {
    switch (((XrBaseInStructure *)createInfo->next)->type) {
      case XR_TYPE_GRAPHICS_BINDING_VULKAN2_KHR /* == XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR */: {
        session_type = SESSION_TYPE_VULKAN;
        break;
      }
      case XR_TYPE_GRAPHICS_BINDING_D3D11_KHR: {
        const XrGraphicsBindingD3D11KHR *their_d3d11_binding = (const XrGraphicsBindingD3D11KHR *)createInfo->next;
        HRESULT hr;

        hr = ID3D11Device_QueryInterface(their_d3d11_binding->device, &IID_IDXGIVkInteropDevice2,
                                         (void **)&wine_instance->dxvk_device);
        if (FAILED(hr)) {
          WARN("Given ID3D11Device doesn't support IDXGIVkInteropDevice. Only DXVK is supported.\n");
          return XR_ERROR_VALIDATION_FAILURE;
        }

        our_vk_binding.type = XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR;
        our_vk_binding.next = NULL;

        wine_instance->dxvk_device->lpVtbl->GetVulkanHandles(wine_instance->dxvk_device, &our_vk_binding.instance,
                                                             &our_vk_binding.physicalDevice, &our_vk_binding.device);

        wine_instance->dxvk_device->lpVtbl->GetSubmissionQueue2(
            wine_instance->dxvk_device, NULL, &our_vk_binding.queueIndex, &our_vk_binding.queueFamilyIndex);

        if ((res = do_vulkan_init(wine_instance, our_vk_binding.instance)) != XR_SUCCESS) {
          return res;
        }

        our_vk_binding.physicalDevice = wine_instance->vk_phys_dev;
        our_create_info = *createInfo;
        our_create_info.next = &our_vk_binding;
        session_type = SESSION_TYPE_D3D11;

        break;
      }
      case XR_TYPE_GRAPHICS_BINDING_D3D12_KHR: {
        const XrGraphicsBindingD3D12KHR *their_d3d12_binding = createInfo->next;
        VkCommandPoolCreateInfo command_pool_create_info = {
            .sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,
            .flags = 0,
            .pNext = NULL,
        };
        HRESULT hr;
        UINT32 queue_index;
        VkQueueFlags queue_flags;
        ID3D12DeviceExt1 *device_ext;
        hr = ID3D12Device_QueryInterface(their_d3d12_binding->device, &IID_ID3D12DXVKInteropDevice2,
                                         (void **)&wine_instance->d3d12_device2);
        if (SUCCEEDED(hr))
          wine_instance->d3d12_device = (ID3D12DXVKInteropDevice *)wine_instance->d3d12_device2;
        else
          hr = ID3D12Device_QueryInterface(their_d3d12_binding->device, &IID_ID3D12DXVKInteropDevice,
                                           (void **)&wine_instance->d3d12_device);
        if (FAILED(hr)) {
          WARN("Given ID3D12Device doesn't support ID3D12DXVKInteropDevice. Only vkd3d-proton is supported.\n");
          return XR_ERROR_VALIDATION_FAILURE;
        }
        hr = ID3D12Device_QueryInterface(their_d3d12_binding->device, &IID_ID3D12DeviceExt1, (void **)&device_ext);
        if (FAILED(hr)) {
          WARN("Given ID3D12Device doesn't support ID3D12DeviceExt1. Only vkd3d-proton is supported.\n");
          return XR_ERROR_VALIDATION_FAILURE;
        }

        our_vk_binding.type = XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR;
        our_vk_binding.next = NULL;

        wine_instance->d3d12_queue = their_d3d12_binding->queue;
        their_d3d12_binding->queue->lpVtbl->AddRef(their_d3d12_binding->queue);

        wine_instance->d3d12_device->lpVtbl->GetVulkanHandles(wine_instance->d3d12_device, &our_vk_binding.instance,
                                                              &our_vk_binding.physicalDevice, &our_vk_binding.device);
        device_ext->lpVtbl->GetVulkanQueueInfoEx(device_ext, their_d3d12_binding->queue, &wine_instance->vk_queue,
                                                 &queue_index, &queue_flags, &our_vk_binding.queueFamilyIndex);
        device_ext->lpVtbl->Release(device_ext);

        wine_instance->vk_device = our_vk_binding.device;
        our_vk_binding.queueIndex = queue_index;
        if ((res = do_vulkan_init(wine_instance, our_vk_binding.instance)) != XR_SUCCESS) {
          return res;
        }

        our_vk_binding.physicalDevice = wine_instance->vk_phys_dev;

        our_create_info = *createInfo;
        our_create_info.next = &our_vk_binding;

        command_pool_create_info.queueFamilyIndex = our_vk_binding.queueFamilyIndex;
        if (vkCreateCommandPool(wine_instance->vk_device, &command_pool_create_info, NULL,
                                &wine_instance->vk_command_pool) != VK_SUCCESS) {
          WARN("vkCreateCommandPool failed\n");
          return XR_ERROR_RUNTIME_FAILURE;
        }

        session_type = SESSION_TYPE_D3D12;

        break;
      }
      default:
        WARN("Unhandled graphics binding type: %d\n", ((XrBaseInStructure *)createInfo->next)->type);
        break;
    }
  }

  _status = UNIX_CALL(xrCreateSession, &params);
  assert(!_status && "xrCreateSession");

  if (params.result != XR_SUCCESS) {
    WARN("xrCreateSession failed: %d\n", res);
    free(wine_session);
    return params.result;
  }

  wine_session->instance = wine_instance;
  wine_session->session_type = session_type;

  EnterCriticalSection(&session_list_lock);

  list_add_tail(&session_list, &wine_session->entry);

  LeaveCriticalSection(&session_list_lock);

  *session = (XrSession)wine_session;

  return XR_SUCCESS;
}

XrResult WINAPI xrDestroySession(XrSession session) {
  wine_XrSession *wine_session = wine_session_from_handle(session);
  struct xrDestroySession_params params = {.session = session};
  NTSTATUS _status;

  TRACE("%p\n", session);
  _status = UNIX_CALL(xrDestroySession, &params);
  assert(!_status && "xrDestroySession");
  if (params.result != XR_SUCCESS) {
    WARN("xrDestroySession failed: %d\n", params.result);
    return params.result;
  }

  free(wine_session);
  return XR_SUCCESS;
}

XrResult WINAPI xrPollEvent(XrInstance instance, XrEventDataBuffer *eventData) {
  struct xrPollEvent_params params = {.instance = instance, .eventData = eventData};
  NTSTATUS _status;

  WINE_TRACE("%p, %p\n", instance, eventData);

  _status = UNIX_CALL(xrPollEvent, &params);
  assert(!_status && "xrPollEvent");

  WINE_TRACE("eventData->type %#x\n", eventData->type);

  if (params.result == XR_SUCCESS) {
    switch (eventData->type) {
      case XR_TYPE_EVENT_DATA_INTERACTION_PROFILE_CHANGED: {
        XrEventDataInteractionProfileChanged *evt = (XrEventDataInteractionProfileChanged *)eventData;
        evt->session = (XrSession)get_wrapped_XrSession(evt->session);
        break;
      }
      case XR_TYPE_EVENT_DATA_SESSION_STATE_CHANGED: {
        XrEventDataSessionStateChanged *evt = (XrEventDataSessionStateChanged *)eventData;
        evt->session = (XrSession)get_wrapped_XrSession(evt->session);
        break;
      }
      case XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR: {
        XrEventDataVisibilityMaskChangedKHR *evt = (XrEventDataVisibilityMaskChangedKHR *)eventData;
        evt->session = (XrSession)get_wrapped_XrSession(evt->session);
        break;
      }
      case XR_TYPE_EVENT_DATA_REFERENCE_SPACE_CHANGE_PENDING: {
        XrEventDataReferenceSpaceChangePending *evt = (XrEventDataReferenceSpaceChangePending *)eventData;
        evt->session = (XrSession)get_wrapped_XrSession(evt->session);
        break;
      }
      case XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT: {
        XrEventDataUserPresenceChangedEXT *evt = (XrEventDataUserPresenceChangedEXT *)eventData;
        evt->session = (XrSession)get_wrapped_XrSession(evt->session);
        break;
      }
      case XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML: {
        XrEventDataLocalizationChangedML *evt = (XrEventDataLocalizationChangedML *)eventData;
        evt->session = (XrSession)get_wrapped_XrSession(evt->session);
        break;
      }
      default:
        break;
    }
  }

  return params.result;
}
XrResult WINAPI xrGetSystem(XrInstance instance, const XrSystemGetInfo *getInfo, XrSystemId *systemId) {
  wine_XrInstance *wine_instance = wine_instance_from_handle(instance);
  struct xrGetSystem_params params = {.instance = instance, .getInfo = getInfo, .systemId = systemId};
  NTSTATUS _status;

  TRACE("%p, %p, %p\n", instance, getInfo, systemId);
  _status = UNIX_CALL(xrGetSystem, &params);
  assert(!_status && "xrGetSystem");
  if (params.result != XR_SUCCESS) {
    return params.result;
  }

  wine_instance->systemId = *systemId;
  return params.result;
}

static BOOL is_vulkan_format_depth(VkFormat format) {
  switch (format) {
    case VK_FORMAT_B8G8R8A8_SRGB:
    case VK_FORMAT_B8G8R8A8_UNORM:
    case VK_FORMAT_R8G8B8A8_SRGB:
    case VK_FORMAT_R8G8B8A8_UNORM:
    case VK_FORMAT_R32G32B32A32_SFLOAT:
    case VK_FORMAT_R32G32B32_SFLOAT:
    case VK_FORMAT_R16G16B16A16_SFLOAT:
    case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
      return FALSE;
    case VK_FORMAT_D32_SFLOAT:
    case VK_FORMAT_D16_UNORM:
    case VK_FORMAT_D24_UNORM_S8_UINT:
    case VK_FORMAT_D32_SFLOAT_S8_UINT:
      return TRUE;

    default:
      WARN("Unknown vulkan format %#x", format);
      return FALSE;
  }
}

int64_t map_format_dxgi_to_vulkan(int64_t format) {
  switch (format) {
    case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
      return VK_FORMAT_B8G8R8A8_SRGB;

    case DXGI_FORMAT_B8G8R8A8_UNORM:
      return VK_FORMAT_B8G8R8A8_UNORM;

    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
      return VK_FORMAT_R8G8B8A8_SRGB;

    case DXGI_FORMAT_R8G8B8A8_UNORM:
      return VK_FORMAT_R8G8B8A8_UNORM;

    case DXGI_FORMAT_R32G32B32A32_FLOAT:
      return VK_FORMAT_R32G32B32A32_SFLOAT;

    case DXGI_FORMAT_R32G32B32_FLOAT:
      return VK_FORMAT_R32G32B32_SFLOAT;

    case DXGI_FORMAT_R16G16B16A16_FLOAT:
      return VK_FORMAT_R16G16B16A16_SFLOAT;

    case DXGI_FORMAT_R10G10B10A2_UNORM:
      return VK_FORMAT_A2B10G10R10_UNORM_PACK32;

    case DXGI_FORMAT_D32_FLOAT:
      return VK_FORMAT_D32_SFLOAT;

    case DXGI_FORMAT_D16_UNORM:
      return VK_FORMAT_D16_UNORM;

    case DXGI_FORMAT_D24_UNORM_S8_UINT:
      return VK_FORMAT_D24_UNORM_S8_UINT;

    case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
      return VK_FORMAT_D32_SFLOAT_S8_UINT;

    default:
      WARN("Unable to map DXGI format (%lu) to Vulkan format\n", (long)format);
      return VK_FORMAT_UNDEFINED;
  }
}

int64_t map_format_vulkan_to_dxgi(int64_t format) {
  switch (format) {
    case VK_FORMAT_B8G8R8A8_SRGB:
      return DXGI_FORMAT_B8G8R8A8_UNORM_SRGB;

    case VK_FORMAT_B8G8R8A8_UNORM:
      return DXGI_FORMAT_B8G8R8A8_UNORM;

    case VK_FORMAT_R8G8B8A8_SRGB:
      return DXGI_FORMAT_R8G8B8A8_UNORM_SRGB;

    case VK_FORMAT_R8G8B8A8_UNORM:
      return DXGI_FORMAT_R8G8B8A8_UNORM;

    case VK_FORMAT_R32G32B32A32_SFLOAT:
      return DXGI_FORMAT_R32G32B32A32_FLOAT;

    case VK_FORMAT_R32G32B32_SFLOAT:
      return DXGI_FORMAT_R32G32B32_FLOAT;

    case VK_FORMAT_R16G16B16A16_SFLOAT:
      return DXGI_FORMAT_R16G16B16A16_FLOAT;

    case VK_FORMAT_A2B10G10R10_UNORM_PACK32:
      return DXGI_FORMAT_R10G10B10A2_UNORM;

    case VK_FORMAT_D32_SFLOAT:
      return DXGI_FORMAT_D32_FLOAT;

    case VK_FORMAT_D16_UNORM:
      return DXGI_FORMAT_D16_UNORM;

    case VK_FORMAT_D24_UNORM_S8_UINT:
      return DXGI_FORMAT_D24_UNORM_S8_UINT;

    case VK_FORMAT_D32_SFLOAT_S8_UINT:
      return DXGI_FORMAT_D32_FLOAT_S8X24_UINT;

    default:
      WARN("Unable to map Vulkan format (%lu) to DXGI format\n", (long)format);
      return DXGI_FORMAT_UNKNOWN;
  }
}

XrResult WINAPI xrEnumerateSwapchainFormats(XrSession session,
                                            uint32_t formatCapacityInput,
                                            uint32_t *formatCountOutput,
                                            int64_t *formats) {
  wine_XrSession *wine_session = wine_session_from_handle(session);
  uint32_t real_format_count;
  int64_t *real_formats;
  uint32_t i, o;
  struct xrEnumerateSwapchainFormats_params params = {
      .session = session,
      .formatCapacityInput = formatCapacityInput,
      .formatCountOutput = formatCountOutput,
      .formats = formats,
  };
  NTSTATUS _status;

  TRACE("%p, %u, %p, %p\n", session, formatCapacityInput, formatCountOutput, formats);

  if (wine_session->session_type != SESSION_TYPE_D3D11 && wine_session->session_type != SESSION_TYPE_D3D12) {
    _status = UNIX_CALL(xrEnumerateSwapchainFormats, &params);
    assert(!_status && "xrEnumerateSwapchainFormats");
    return params.result;
  }

  params.formatCapacityInput = 0;
  params.formatCountOutput = &real_format_count;
  params.formats = NULL;

  _status = UNIX_CALL(xrEnumerateSwapchainFormats, &params);
  assert(!_status && "xrEnumerateSwapchainFormats");
  if (params.result != XR_SUCCESS) {
    return params.result;
  }

  real_formats = malloc(sizeof(*real_formats) * real_format_count);

  params.formatCapacityInput = real_format_count;
  params.formats = real_formats;

  _status = UNIX_CALL(xrEnumerateSwapchainFormats, &params);
  assert(!_status && "xrEnumerateSwapchainFormats");
  if (params.result != XR_SUCCESS) {
    goto done;
  }

  o = 0;
  for (i = 0; i < real_format_count; ++i) {
    int64_t mapped = map_format_vulkan_to_dxgi(real_formats[i]);

    if (mapped == DXGI_FORMAT_UNKNOWN) {
      continue;
    }

    if (formatCapacityInput && formats) {
      if (o < formatCapacityInput) {
        formats[o] = mapped;
      } else {
        params.result = XR_ERROR_SIZE_INSUFFICIENT;
      }
    }
    ++o;
  }
  *formatCountOutput = o;

done:
  free(real_formats);
  return params.result;
}

XrResult WINAPI xrCreateSwapchain(XrSession session, const XrSwapchainCreateInfo *createInfo, XrSwapchain *swapchain) {
  wine_XrSession *wine_session = wine_session_from_handle(session);
  wine_XrSwapchain *wine_swapchain = calloc(1, sizeof(wine_XrSwapchain));
  XrSwapchainCreateInfo our_createInfo = *createInfo;
  struct xrCreateSwapchain_params params = {
      .session = session, .createInfo = &our_createInfo, .swapchain = &wine_swapchain->host_swapchain};
  NTSTATUS _status;

  wine_swapchain->create_info = *createInfo;

  TRACE("%p, %p, %p\n", session, createInfo, swapchain);

  if (wine_session->session_type == SESSION_TYPE_D3D11 || wine_session->session_type == SESSION_TYPE_D3D12) {
    BOOL format_is_depth;
    our_createInfo.format = map_format_dxgi_to_vulkan(createInfo->format);
    if (our_createInfo.format == VK_FORMAT_UNDEFINED) {
      ERR("unable to set Vulkan format\n");
      free(wine_swapchain);
      return XR_ERROR_SWAPCHAIN_FORMAT_UNSUPPORTED;
    }

    our_createInfo.usageFlags |= XR_SWAPCHAIN_USAGE_MUTABLE_FORMAT_BIT;

    format_is_depth = is_vulkan_format_depth(our_createInfo.format);
    if ((createInfo->usageFlags & XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT) && format_is_depth) {
      WARN("Swapchain has a color attachment usage, but it's format is for depth\n");
    }
    if ((createInfo->usageFlags & XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT) && !format_is_depth) {
      WARN("Swapchain has a depth/stencil usage, but it's format is for color\n");
    }
  }

  _status = UNIX_CALL(xrCreateSwapchain, &params);
  assert(!_status && "xrCreateSwapchain");
  if (params.result != XR_SUCCESS) {
    WARN("xrCreateSwapchain failed: %d\n", params.result);
    free(wine_swapchain);
    return params.result;
  }

  wine_swapchain->session = wine_session;
  *swapchain = (XrSwapchain)wine_swapchain;

  return XR_SUCCESS;
}

static void release_d3d12_resources(wine_XrSwapchain *swapchain, uint32_t image_count) {
  wine_XrInstance *instance = swapchain->session->instance;
  XrSwapchainImageD3D12KHR *d3d12_images = (XrSwapchainImageD3D12KHR *)swapchain->images;
  UINT i;
  if (!image_count) {
    return;
  }

  for (i = 0; i < image_count; i++) {
    if (d3d12_images[i].texture) {
      d3d12_images[i].texture->lpVtbl->Release(d3d12_images[i].texture);
    }
  }
  vkFreeCommandBuffers(instance->vk_device, instance->vk_command_pool, image_count, swapchain->cmd_release);
  vkFreeCommandBuffers(instance->vk_device, instance->vk_command_pool, image_count, swapchain->cmd_acquire);
  free(swapchain->cmd_release);
  free(swapchain->cmd_acquire);
  free(swapchain->acquired);
  free(swapchain->acquired_indices);
}

XrResult WINAPI xrDestroySwapchain(XrSwapchain swapchain) {
  wine_XrSwapchain *wine_swapchain = wine_swapchain_from_handle(swapchain);
  struct xrDestroySwapchain_params params = {.swapchain = swapchain};
  NTSTATUS _status;

  TRACE("%p\n", swapchain);

  _status = UNIX_CALL(xrDestroySwapchain, &params);
  assert(!_status && "xrDestroySwapchain");
  if (params.result != XR_SUCCESS) {
    WARN("xrDestroySwapchain failed: %d\n", params.result);
    return params.result;
  }

  if (wine_swapchain->image_count) {
    UINT i;
    if (wine_swapchain->session->session_type == SESSION_TYPE_D3D11) {
      XrSwapchainImageD3D11KHR *d3d11_images = (XrSwapchainImageD3D11KHR *)wine_swapchain->images;
      for (i = 0; i < wine_swapchain->image_count; i++) {
        d3d11_images[i].texture->lpVtbl->Release(d3d11_images[i].texture);
      }
    } else if (wine_swapchain->session->session_type == SESSION_TYPE_D3D12) {
      release_d3d12_resources(wine_swapchain, wine_swapchain->image_count);
    }
    free(wine_swapchain->images);
    wine_swapchain->image_count = 0;
  }

  free(wine_swapchain);

  return XR_SUCCESS;
}

static D3D11_USAGE d3d11usage_from_XrSwapchainUsageFlags(XrSwapchainUsageFlags flags) {
  static const D3D11_USAGE supported_flags = XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT |
                                             XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT |
                                             XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT | XR_SWAPCHAIN_USAGE_SAMPLED_BIT;
  D3D11_USAGE ret = 0;

  if (flags & ~supported_flags) {
    WINE_FIXME("Unhandled flags %#lx.\n", (long)flags);
  }

  if (flags & XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT) {
    ret |= D3D11_BIND_RENDER_TARGET;
  }
  if (flags & XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT) {
    ret |= D3D11_BIND_DEPTH_STENCIL;
  }
  if (flags & XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT) {
    ret |= D3D11_BIND_UNORDERED_ACCESS;
  }
  if (flags & XR_SWAPCHAIN_USAGE_SAMPLED_BIT) {
    ret |= D3D11_BIND_SHADER_RESOURCE;
  }

  return ret;
}

static VkResult record_transition_command(wine_XrInstance *instance,
                                          VkImage image,
                                          VkImageSubresourceRange subresource,
                                          VkImageLayout from,
                                          VkImageLayout to,
                                          VkCommandBuffer *out_cmd) {
  VkResult ret;
  VkCommandBufferAllocateInfo command_buffer_allocate_info = {
      .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,
      .level = VK_COMMAND_BUFFER_LEVEL_PRIMARY,
      .commandPool = instance->vk_command_pool,
      .commandBufferCount = 1,
  };
  VkCommandBufferBeginInfo begin_info = {
      .sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,
      .flags = 0,
  };
  VkImageMemoryBarrier barrier = {
      .sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
      .oldLayout = from,
      .newLayout = to,
      .srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED,
      .dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED,
      .image = image,
      .subresourceRange = subresource,
      .srcAccessMask = VK_ACCESS_MEMORY_WRITE_BIT,
      .dstAccessMask = VK_ACCESS_MEMORY_READ_BIT,
  };

  *out_cmd = VK_NULL_HANDLE;
  if (from == to) {
    return VK_SUCCESS;
  }

  if ((ret = vkAllocateCommandBuffers(instance->vk_device, &command_buffer_allocate_info, out_cmd)) != VK_SUCCESS) {
    return ret;
  }
  if ((ret = vkBeginCommandBuffer(*out_cmd, &begin_info)) != VK_SUCCESS) {
    return ret;
  }
  vkCmdPipelineBarrier(*out_cmd, VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT, VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT, 0, 0, NULL, 0,
                       NULL, 1, &barrier);
  return vkEndCommandBuffer(*out_cmd);
}

XrResult WINAPI xrEnumerateSwapchainImages(XrSwapchain swapchain,
                                           uint32_t imageCapacityInput,
                                           uint32_t *imageCountOutput,
                                           XrSwapchainImageBaseHeader *images) {
  wine_XrSwapchain *wine_swapchain = wine_swapchain_from_handle(swapchain);
  wine_XrInstance *wine_instance = wine_swapchain->session->instance;
  XrSwapchainImageVulkanKHR *our_vk;
  HRESULT hr;
  size_t image_size = 0;
  uint32_t i;
  struct xrEnumerateSwapchainImages_params params = {
      .swapchain = swapchain,
      .imageCapacityInput = imageCapacityInput,
      .imageCountOutput = imageCountOutput,
      .images = images,
  };
  NTSTATUS _status;

  TRACE("%p, %u, %p, %p\n", swapchain, imageCapacityInput, imageCountOutput, images);
  if (wine_swapchain->session->session_type != SESSION_TYPE_D3D11 &&
      wine_swapchain->session->session_type != SESSION_TYPE_D3D12) {
    _status = UNIX_CALL(xrEnumerateSwapchainImages, &params);
    assert(!_status && "xrEnumerateSwapchainImages");
    return params.result;
  }

  if (!wine_swapchain->image_count) {
    uint32_t image_count;
    params.imageCapacityInput = 0;
    params.imageCountOutput = &image_count;
    params.images = NULL;
    _status = UNIX_CALL(xrEnumerateSwapchainImages, &params);
    assert(!_status && "xrEnumerateSwapchainImages");
    if (params.result != XR_SUCCESS) {
      return params.result;
    }

    our_vk = malloc(sizeof(*our_vk) * image_count);
    for (i = 0; i < image_count; ++i) {
      our_vk[i].type = XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR;
      our_vk[i].next = NULL;
    }

    params.imageCapacityInput = image_count;
    params.images = (XrSwapchainImageBaseHeader *)our_vk;
    _status = UNIX_CALL(xrEnumerateSwapchainImages, &params);
    assert(!_status && "xrEnumerateSwapchainImages");
    if (params.result != XR_SUCCESS) {
      free(our_vk);
      return params.result;
    }

    if (wine_swapchain->session->session_type == SESSION_TYPE_D3D11) {
      XrSwapchainImageD3D11KHR *our_d3d11;
      D3D11_TEXTURE2D_DESC1 desc;

      desc.Width = wine_swapchain->create_info.width;
      desc.Height = wine_swapchain->create_info.height;
      desc.MipLevels = wine_swapchain->create_info.mipCount;
      desc.ArraySize = wine_swapchain->create_info.arraySize;
      desc.Format = wine_swapchain->create_info.format;
      TRACE("creating dxvk texture with dxgi format %d (%x)\n", desc.Format, desc.Format);
      desc.SampleDesc.Count = wine_swapchain->create_info.sampleCount;
      desc.SampleDesc.Quality = 0;
      desc.Usage = D3D11_USAGE_DEFAULT;
      desc.BindFlags = d3d11usage_from_XrSwapchainUsageFlags(wine_swapchain->create_info.usageFlags);
      desc.CPUAccessFlags = 0;
      desc.MiscFlags = 0;
      desc.TextureLayout = D3D11_TEXTURE_LAYOUT_UNDEFINED;

      our_d3d11 = malloc(sizeof(XrSwapchainImageD3D11KHR) * image_count);
      for (i = 0; i < image_count; ++i) {
        hr = wine_instance->dxvk_device->lpVtbl->CreateTexture2DFromVkImage(wine_instance->dxvk_device, &desc,
                                                                            our_vk[i].image, &our_d3d11[i].texture);
        if (FAILED(hr)) {
          UINT j;
          for (j = 0; j < i; ++j) {
            our_d3d11[i].texture->lpVtbl->Release(our_d3d11[i].texture);
          }
          free(our_d3d11);
          free(our_vk);
          WARN("Failed to create DXVK texture from VkImage: %08x\n", hr);
          return XR_ERROR_RUNTIME_FAILURE;
        }
        TRACE("Successfully allocated texture %p\n", our_d3d11[i].texture);
      }
      wine_swapchain->images = (XrSwapchainImageBaseHeader *)our_d3d11;
    } else if (wine_swapchain->session->session_type == SESSION_TYPE_D3D12) {
      XrSwapchainImageD3D12KHR *our_d3d12;
      D3D12_RESOURCE_DESC1 desc;
      ID3D12DeviceExt1 *device_ext;
      HRESULT hr = wine_instance->d3d12_device->lpVtbl->QueryInterface(wine_instance->d3d12_device,
                                                                       &IID_ID3D12DeviceExt1, (void **)&device_ext);
      BOOL format_is_depth = is_vulkan_format_depth(map_format_dxgi_to_vulkan(wine_swapchain->create_info.format));
      BOOL succeeded = TRUE;
      const D3D12_RESOURCE_STATES incoming_state =
          format_is_depth ? D3D12_RESOURCE_STATE_DEPTH_WRITE : D3D12_RESOURCE_STATE_RENDER_TARGET;
      const VkImageLayout vk_layout =
          format_is_depth ? VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL : VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
      const VkImageSubresourceRange subresource = {
          .layerCount = wine_swapchain->create_info.arraySize,
          .baseArrayLayer = 0,
          .levelCount = wine_swapchain->create_info.mipCount,
          .baseMipLevel = 0,
          .aspectMask =
              format_is_depth ? (VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT) : VK_IMAGE_ASPECT_COLOR_BIT,
      };
      if (FAILED(hr)) {
        ERR("Cannot get vkd3d-proton interface: %08x\n", hr);
        return XR_ERROR_VALIDATION_FAILURE;
      }

      desc.Alignment = 0;
      desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
      desc.Width = wine_swapchain->create_info.width;
      desc.Height = wine_swapchain->create_info.height;
      desc.MipLevels = wine_swapchain->create_info.mipCount;
      desc.DepthOrArraySize = wine_swapchain->create_info.arraySize;
      desc.Format = wine_swapchain->create_info.format;
      TRACE("creating vkd3d-proton texture with dxgi format %d (%x)\n", desc.Format, desc.Format);
      desc.SampleDesc.Count = wine_swapchain->create_info.sampleCount;
      desc.SampleDesc.Quality = 0;
      desc.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
      desc.Flags = 0;
      if (!format_is_depth) {
        desc.Flags |= D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET;
      } else {
        desc.Flags |= D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL;
        if (!(wine_swapchain->create_info.usageFlags & XR_SWAPCHAIN_USAGE_SAMPLED_BIT)) {
          desc.Flags |= D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE;
        }
      }
      if (wine_swapchain->create_info.usageFlags & XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT) {
        desc.Flags |= D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;
      }

      our_d3d12 = calloc(1, sizeof(XrSwapchainImageD3D12KHR) * image_count);
      for (i = 0; i < image_count; ++i) {
        hr = device_ext->lpVtbl->CreateResourceFromBorrowedHandle(device_ext, &desc, our_vk[i].image,
                                                                  &our_d3d12[i].texture);
        if (FAILED(hr)) {
          ERR("Failed to create vkd3d-proton texture from VkImage: %08x\n", hr);
          succeeded = FALSE;
          break;
        }
        TRACE("Successfully allocated texture %p\n", our_d3d12[i].texture);
      }
      device_ext->lpVtbl->Release(device_ext);

      if (succeeded) {
        wine_swapchain->acquired = calloc(1, sizeof(BOOL) * image_count);
        wine_swapchain->acquired_indices = malloc(sizeof(uint32_t) * (image_count + 1));
        wine_swapchain->acquired_count = wine_swapchain->acquired_start = 0;
        wine_swapchain->images = (XrSwapchainImageBaseHeader *)our_d3d12;

        wine_swapchain->cmd_release = calloc(1, sizeof(VkCommandBuffer) * image_count);
        wine_swapchain->cmd_acquire = calloc(1, sizeof(VkCommandBuffer) * image_count);
        for (i = 0; i < image_count; i++) {
          VkImageLayout d3d12_vk_layout;
          wine_instance->d3d12_device->lpVtbl->GetVulkanImageLayout(wine_instance->d3d12_device, our_d3d12[i].texture,
                                                                    incoming_state, &d3d12_vk_layout);
          if (record_transition_command(wine_instance, our_vk[i].image, subresource, d3d12_vk_layout, vk_layout,
                                        &wine_swapchain->cmd_release[i]) != VK_SUCCESS ||
              record_transition_command(wine_instance, our_vk[i].image, subresource, vk_layout, d3d12_vk_layout,
                                        &wine_swapchain->cmd_acquire[i]) != VK_SUCCESS) {
            ERR("Failed to create command buffer for layout transition\n");
            succeeded = FALSE;
            break;
          }
        }
      }
      if (!succeeded) {
        release_d3d12_resources(wine_swapchain, image_count);
        free(wine_swapchain->images);
        wine_swapchain->images = NULL;
        free(our_vk);
        return XR_ERROR_RUNTIME_FAILURE;
      }
    }
    free(our_vk);
    wine_swapchain->image_count = image_count;
    TRACE("image count %d\n", image_count);
  }

  *imageCountOutput = wine_swapchain->image_count;
  if (wine_swapchain->session->session_type == SESSION_TYPE_D3D11) {
    image_size = sizeof(XrSwapchainImageD3D11KHR);
  } else if (wine_swapchain->session->session_type == SESSION_TYPE_D3D12) {
    image_size = sizeof(XrSwapchainImageD3D12KHR);
  }
  memcpy(images, wine_swapchain->images, image_size * min(wine_swapchain->image_count, imageCapacityInput));
  return XR_SUCCESS;
}

static void lock_d3d_queue(wine_XrInstance *instance, BOOL drain_queue)
{
    if (instance->dxvk_device)
    {
        if (drain_queue)
            instance->dxvk_device->lpVtbl->FlushRenderingCommands(instance->dxvk_device);
        instance->dxvk_device->lpVtbl->LockSubmissionQueue(instance->dxvk_device);
    }
    else if (!drain_queue && instance->d3d12_device2)
        instance->d3d12_device2->lpVtbl->LockVulkanQueue(instance->d3d12_device2, instance->d3d12_queue);
    else if (instance->d3d12_device)
        instance->d3d12_device->lpVtbl->LockCommandQueue(instance->d3d12_device, instance->d3d12_queue);
}

static void unlock_d3d_queue(wine_XrInstance *instance, BOOL drain_queue)
{
    if (instance->dxvk_device)
        instance->dxvk_device->lpVtbl->ReleaseSubmissionQueue(instance->dxvk_device);
    else if (!drain_queue && instance->d3d12_device2)
        instance->d3d12_device2->lpVtbl->UnlockVulkanQueue(instance->d3d12_device2, instance->d3d12_queue);
    else if (instance->d3d12_device)
        instance->d3d12_device->lpVtbl->UnlockCommandQueue(instance->d3d12_device, instance->d3d12_queue);
}

XrResult WINAPI xrAcquireSwapchainImage(XrSwapchain swapchain,
                                        const XrSwapchainImageAcquireInfo *acquireInfo,
                                        uint32_t *index) {
  wine_XrSwapchain *wine_swapchain = wine_swapchain_from_handle(swapchain);
  wine_XrInstance *wine_instance = wine_swapchain->session->instance;
  struct xrAcquireSwapchainImage_params params = {
      .swapchain = swapchain,
      .acquireInfo = acquireInfo,
      .index = index,
  };
  NTSTATUS _status;

  TRACE("%p, %p, %p image count %d, acquired %d\n", swapchain, acquireInfo, index, wine_swapchain->image_count,
        wine_swapchain->acquired_count);

  if (wine_instance->d3d12_device && wine_swapchain->acquired_count >= wine_swapchain->image_count)
  {
      WARN("Application has acquired all images but still tries to acquire more.\n");
      return XR_ERROR_CALL_ORDER_INVALID;
  }

  lock_d3d_queue(wine_instance, FALSE);

  _status = UNIX_CALL(xrAcquireSwapchainImage, &params);
  assert(!_status && "xrAcquireSwapchainImage");

  if (!wine_instance->d3d12_device) {
    unlock_d3d_queue(wine_instance, FALSE);
    return params.result;
  }

  if (params.result == XR_SUCCESS) {
    if (!wine_swapchain->acquired[*index] && wine_swapchain->cmd_acquire[*index] != VK_NULL_HANDLE) {
      VkSubmitInfo submit_info = {
          .sType = VK_STRUCTURE_TYPE_SUBMIT_INFO,
          .commandBufferCount = 1,
          .pCommandBuffers = &wine_swapchain->cmd_acquire[*index],
      };

      vkQueueSubmit(wine_instance->vk_queue, 1, &submit_info, VK_NULL_HANDLE);
    }

    if (!wine_swapchain->acquired[*index]) {
      uint32_t next = (wine_swapchain->acquired_start + wine_swapchain->acquired_count) % wine_swapchain->image_count;
      wine_swapchain->acquired[*index] = TRUE;
      wine_swapchain->acquired_indices[next] = *index;
      wine_swapchain->acquired_count += 1;
    } else {
      WARN("the application acquired the same image (index %d) again!?", *index);
    }
  }
  unlock_d3d_queue(wine_instance, FALSE);
  return params.result;
}

XrResult WINAPI xrReleaseSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageReleaseInfo *releaseInfo) {
  wine_XrSwapchain *wine_swapchain = wine_swapchain_from_handle(swapchain);
  wine_XrInstance *wine_instance = wine_swapchain->session->instance;
  uint32_t index = ~0u;
  struct xrReleaseSwapchainImage_params params = {
      .swapchain = swapchain,
      .releaseInfo = releaseInfo,
  };
  NTSTATUS _status;

  TRACE("%p, %p\n", swapchain, releaseInfo);

  if (wine_instance->d3d12_device && !wine_swapchain->acquired_count)
  {
    WARN("Application tried to release a swapchain image without having acquired it first.\n");
    return XR_ERROR_CALL_ORDER_INVALID;
  }

  lock_d3d_queue(wine_instance, TRUE);

  if (wine_instance->d3d12_device)
  {
    index = wine_swapchain->acquired_indices[wine_swapchain->acquired_start];
    if (wine_swapchain->cmd_release[index] != VK_NULL_HANDLE) {
      VkSubmitInfo submit_info = {
          .sType = VK_STRUCTURE_TYPE_SUBMIT_INFO,
          .commandBufferCount = 1,
          .pCommandBuffers = &wine_swapchain->cmd_release[index],
      };

      vkQueueSubmit(wine_instance->vk_queue, 1, &submit_info, VK_NULL_HANDLE);
    }
  }

  _status = UNIX_CALL(xrReleaseSwapchainImage, &params);
  assert(!_status && "xrReleaseSwapchainImage");
  if (!wine_instance->d3d12_device) {
    unlock_d3d_queue(wine_instance, TRUE);
    return params.result;
  }

  if (params.result != XR_SUCCESS && wine_swapchain->cmd_release[index] != VK_NULL_HANDLE) {
    VkSubmitInfo submit_info = {
        .sType = VK_STRUCTURE_TYPE_SUBMIT_INFO,
        .commandBufferCount = 1,
        .pCommandBuffers = &wine_swapchain->cmd_acquire[index],
    };
    WARN("xrReleaseSwapchainImage failed, reverting layout transition\n");
    vkQueueSubmit(wine_instance->vk_queue, 1, &submit_info, VK_NULL_HANDLE);
  }
  if (params.result == XR_SUCCESS) {
    wine_swapchain->acquired[index] = FALSE;
    wine_swapchain->acquired_start = (wine_swapchain->acquired_start + 1) % wine_swapchain->image_count;
    wine_swapchain->acquired_count -= 1;
  }
  unlock_d3d_queue(wine_instance, TRUE);
  return params.result;
}

XrResult WINAPI xrBeginFrame(XrSession session, const XrFrameBeginInfo *frameBeginInfo) {
  wine_XrSession *wine_session = wine_session_from_handle(session);
  struct xrBeginFrame_params params = {
      .session = session,
      .frameBeginInfo = frameBeginInfo,
  };
  NTSTATUS _status;

  TRACE("%p, %p\n", session, frameBeginInfo);

  lock_d3d_queue(wine_session->instance, FALSE);
  _status = UNIX_CALL(xrBeginFrame, &params);
  assert(!_status && "xrBeginFrame");
  unlock_d3d_queue(wine_session->instance, FALSE);
  return params.result;
}

static XrCompositionLayerBaseHeader *convert_XrCompositionLayer(wine_XrSession *wine_session,
                                                                const XrCompositionLayerBaseHeader *in_layer,
                                                                CompositionLayer *out_layer,
                                                                uint32_t *view_idx,
                                                                uint32_t *view_info_idx) {
  uint32_t i;

  TRACE("Type %u, pNext %p.\n", in_layer->type, in_layer->next);

  switch (in_layer->type) {
    case XR_TYPE_COMPOSITION_LAYER_CUBE_KHR: {
      out_layer->cube = *(const XrCompositionLayerCubeKHR *)in_layer;
      out_layer->cube.swapchain = wine_swapchain_from_handle(out_layer->cube.swapchain)->host_swapchain;
      break;
    }

    case XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR:
      out_layer->cylinder = *(const XrCompositionLayerCylinderKHR *)in_layer;
      out_layer->cylinder.subImage.swapchain =
          wine_swapchain_from_handle(out_layer->cylinder.subImage.swapchain)->host_swapchain;
      break;

    case XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR:
      out_layer->depth_info = *(const XrCompositionLayerDepthInfoKHR *)in_layer;
      out_layer->depth_info.subImage.swapchain =
          wine_swapchain_from_handle(out_layer->depth_info.subImage.swapchain)->host_swapchain;
      break;

    case XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR:
      out_layer->equirect = *(const XrCompositionLayerEquirectKHR *)in_layer;
      out_layer->equirect.subImage.swapchain =
          wine_swapchain_from_handle(out_layer->equirect.subImage.swapchain)->host_swapchain;
      break;

    case XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR:
      out_layer->equirect2 = *(const XrCompositionLayerEquirect2KHR *)in_layer;
      out_layer->equirect2.subImage.swapchain =
          wine_swapchain_from_handle(out_layer->equirect2.subImage.swapchain)->host_swapchain;
      break;

    case XR_TYPE_COMPOSITION_LAYER_PROJECTION: {
      const XrCompositionLayerProjectionView *view;
      unsigned int view_info_count;

      out_layer->projection = *(const XrCompositionLayerProjection *)in_layer;

      view_info_count = 0;
      for (i = 0; i < out_layer->projection.viewCount; ++i) {
        view = &((XrCompositionLayerProjection *)in_layer)->views[i];
        while ((view = view->next)) {
          ++view_info_count;
        }
      }

      if (out_layer->projection.viewCount + *view_idx > wine_session->projection_view_count) {
        wine_session->projection_view_count = out_layer->projection.viewCount + *view_idx;
        wine_session->projection_views =
            realloc(wine_session->projection_views,
                    sizeof(XrCompositionLayerProjectionView) * wine_session->projection_view_count);
      }

      if (view_info_count + *view_info_idx > wine_session->view_info_count) {
        wine_session->view_info_count += view_info_count;
        wine_session->view_infos =
            realloc(wine_session->view_infos, sizeof(*wine_session->view_infos) * wine_session->view_info_count);
      }

      out_layer->projection.views = &wine_session->projection_views[*view_idx];
      memcpy((void *)out_layer->projection.views, ((const XrCompositionLayerProjection *)in_layer)->views,
             sizeof(XrCompositionLayerProjectionView) * out_layer->projection.viewCount);
      view_info_count = 0;
      for (i = 0; i < out_layer->projection.viewCount; ++i) {
        view = &out_layer->projection.views[i];
        if (view->type != XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW) {
          WARN("Unexpected view type %u.\n", view->type);
        }

        ((XrCompositionLayerProjectionView *)view)->subImage.swapchain =
            wine_swapchain_from_handle(view->subImage.swapchain)->host_swapchain;
        while (view->next) {
          TRACE("Projection view type %u.\n", ((XrCompositionLayerProjectionView *)view->next)->type);
          switch (((XrCompositionLayerProjectionView *)view->next)->type) {
            case XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR: {
              XrCompositionLayerDepthInfoKHR *out_depth_info, *in_depth_info;

              in_depth_info = (XrCompositionLayerDepthInfoKHR *)view->next;
              out_depth_info = &wine_session->view_infos[*view_info_idx + view_info_count].depth_info;
              *out_depth_info = *in_depth_info;
              out_depth_info->subImage.swapchain =
                  wine_swapchain_from_handle(out_depth_info->subImage.swapchain)->host_swapchain;
              ((XrCompositionLayerProjectionView *)view)->next = out_depth_info;
              break;
            }
            case XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB: {
              XrCompositionLayerSpaceWarpInfoFB *out_warp_info, *in_warp_info;

              in_warp_info = (XrCompositionLayerSpaceWarpInfoFB *)view->next;
              out_warp_info = &wine_session->view_infos[*view_info_idx + view_info_count].space_warp_info;
              *out_warp_info = *in_warp_info;
              out_warp_info->motionVectorSubImage.swapchain =
                  wine_swapchain_from_handle(out_warp_info->motionVectorSubImage.swapchain)->host_swapchain;
              out_warp_info->depthSubImage.swapchain =
                  wine_swapchain_from_handle(out_warp_info->depthSubImage.swapchain)->host_swapchain;
              ((XrCompositionLayerProjectionView *)view)->next = out_warp_info;
              break;
            }
            default:
              WARN("Unknown view info type %u.\n", view->type);
              break;
          }
          ++view_info_count;
          view = view->next;
        }
      }

      *view_idx += out_layer->projection.viewCount;
      *view_info_idx += view_info_count;
      break;
    }
    case XR_TYPE_COMPOSITION_LAYER_QUAD:
      out_layer->quad = *(const XrCompositionLayerQuad *)in_layer;
      out_layer->quad.subImage.swapchain =
          wine_swapchain_from_handle(out_layer->quad.subImage.swapchain)->host_swapchain;
      break;

    default:
      WARN("Unknown composition in_layer type: %d\n", in_layer->type);
      return (XrCompositionLayerBaseHeader *)in_layer;
  }

  return (XrCompositionLayerBaseHeader *)out_layer;
}

XrResult WINAPI xrEndFrame(XrSession session, const XrFrameEndInfo *frameEndInfo) {
  wine_XrSession *wine_session = wine_session_from_handle(session);
  XrFrameEndInfo our_frameEndInfo;
  struct xrEndFrame_params params = {
      .session = session,
      .frameEndInfo = &our_frameEndInfo,
  };
  uint32_t i, view_idx = 0, view_info_idx = 0;
  NTSTATUS _status;

  TRACE("%p, %p\n", session, frameEndInfo);

  if (frameEndInfo->layerCount > wine_session->composition_layer_count) {
    free(wine_session->composition_layers);
    wine_session->composition_layers = malloc(frameEndInfo->layerCount * sizeof(*wine_session->composition_layers));
    free(wine_session->composition_layer_ptrs);
    wine_session->composition_layer_ptrs =
        malloc(frameEndInfo->layerCount * sizeof(*wine_session->composition_layer_ptrs));
    wine_session->composition_layer_count = frameEndInfo->layerCount;
  }

  for (i = 0; i < frameEndInfo->layerCount; ++i) {
    wine_session->composition_layer_ptrs[i] = convert_XrCompositionLayer(
        wine_session, frameEndInfo->layers[i], &wine_session->composition_layers[i], &view_idx, &view_info_idx);
  }

  our_frameEndInfo = *frameEndInfo;
  our_frameEndInfo.layers = (const XrCompositionLayerBaseHeader *const *)wine_session->composition_layer_ptrs;

  lock_d3d_queue(wine_session->instance, FALSE);
  _status = UNIX_CALL(xrEndFrame, &params);
  assert(!_status && "xrEndFrame");

  unlock_d3d_queue(wine_session->instance, FALSE);
  return params.result;
}

XrResult WINAPI xrConvertTimeToWin32PerformanceCounterKHR(XrInstance instance,
                                                          XrTime time,
                                                          LARGE_INTEGER *performanceCounter) {
  FIXME("unimplemented\n");
  /* FIXME */
  return XR_ERROR_INITIALIZATION_FAILED;
}

XrResult WINAPI xrConvertWin32PerformanceCounterToTimeKHR(XrInstance instance,
                                                          const LARGE_INTEGER *performanceCounter,
                                                          XrTime *time) {
  FIXME("unimplemented\n");
  /* FIXME */
  return XR_ERROR_INITIALIZATION_FAILED;
}

XrResult WINAPI xrGetD3D11GraphicsRequirementsKHR(XrInstance instance,
                                                  XrSystemId systemId,
                                                  XrGraphicsRequirementsD3D11KHR *graphicsRequirements) {
  IDXGIFactory1 *factory;
  IDXGIAdapter *adapter;
  DXGI_ADAPTER_DESC adapter_desc;
  HRESULT hr;
  DWORD i;

  TRACE("\n");

  hr = CreateDXGIFactory1(&IID_IDXGIFactory1, (void **)&factory);
  if (FAILED(hr)) {
    WARN("CreateDXGIFactory1 failed: %08x\n", hr);
    return XR_ERROR_INITIALIZATION_FAILED;
  }

  i = 0;
  while ((hr = IDXGIFactory1_EnumAdapters(factory, i++, &adapter)) == S_OK) {
    hr = IDXGIAdapter_GetDesc(adapter, &adapter_desc);
    if (FAILED(hr)) {
      WARN("GetDesc failed: %08x\n", hr);
      IDXGIAdapter_Release(adapter);
      continue;
    }

    IDXGIAdapter_Release(adapter);

    /* FIXME: what if we have two of the same adapters? */
    if (adapter_desc.VendorId == g_physdev_vid && adapter_desc.DeviceId == g_physdev_pid) {
      TRACE("Found DXGI adapter for %#04x:%#04x\n", g_physdev_vid, g_physdev_pid);
      break;
    }
  }

  if (hr == S_OK) {
    graphicsRequirements->adapterLuid = adapter_desc.AdapterLuid;
  } else {
    WARN("Couldn't find matching DXGI adapter for given VkPhysicalDevice! Choosing first one...\n");

    hr = IDXGIFactory1_EnumAdapters(factory, 0, &adapter);
    if (FAILED(hr)) {
      WARN("EnumAdapters(0) failed: %08x\n", hr);
      IDXGIFactory1_Release(factory);
      return XR_ERROR_INITIALIZATION_FAILED;
    }

    hr = IDXGIAdapter_GetDesc(adapter, &adapter_desc);
    if (FAILED(hr)) {
      WARN("GetDesc(0) failed: %08x\n", hr);
      IDXGIAdapter_Release(adapter);
      IDXGIFactory1_Release(factory);
      return XR_ERROR_INITIALIZATION_FAILED;
    }

    IDXGIAdapter_Release(adapter);

    graphicsRequirements->adapterLuid = adapter_desc.AdapterLuid;
  }

  IDXGIFactory1_Release(factory);

  /* XXX */
  graphicsRequirements->minFeatureLevel = D3D_FEATURE_LEVEL_10_0;

  return XR_SUCCESS;
}

XrResult WINAPI xrGetD3D12GraphicsRequirementsKHR(XrInstance instance,
                                                  XrSystemId systemId,
                                                  XrGraphicsRequirementsD3D12KHR *graphicsRequirements) {
  XrGraphicsRequirementsD3D11KHR requirements;
  XrResult result = xrGetD3D11GraphicsRequirementsKHR(instance, systemId, &requirements);
  if (result != XR_SUCCESS) {
    return result;
  }
  graphicsRequirements->adapterLuid = requirements.adapterLuid;
  graphicsRequirements->minFeatureLevel = D3D_FEATURE_LEVEL_11_0;
  return XR_SUCCESS;
}

XrResult WINAPI xrCreateApiLayerInstance(const XrInstanceCreateInfo *info,
                                         const XrApiLayerCreateInfo *layerInfo,
                                         XrInstance *instance) {
  TRACE("%p, %p, %p\n", info, layerInfo, instance);

  return xrCreateInstance(info, instance);
}

XrResult WINAPI xrCreateVulkanInstanceKHR(XrInstance instance,
                                          const XrVulkanInstanceCreateInfoKHR *createInfo,
                                          VkInstance *vulkanInstance,
                                          VkResult *vulkanResult) {
  struct vk_create_callback_context context;
  VkCreateInfoWineInstanceCallback callback;
  VkInstanceCreateInfo vulkan_create_info;

  TRACE("instance %p, createInfo %p, vulkanInstance %p, vulkanResult %p.\n", instance, createInfo, vulkanInstance,
        vulkanResult);

  if (createInfo->createFlags) {
    WARN("Unexpected flags %#lx.\n", (long)createInfo->createFlags);
  }

  context.wine_instance = instance;
  context.create_info = (UINT64)createInfo;

  vulkan_create_info = *createInfo->vulkanCreateInfo;
  callback.sType = VK_STRUCTURE_TYPE_CREATE_INFO_WINE_INSTANCE_CALLBACK;
  callback.native_create_callback = g_vk_create_instance_callback;
  callback.context = &context;
  callback.pNext = vulkan_create_info.pNext;
  vulkan_create_info.pNext = &callback;

  *vulkanResult = vkCreateInstance(&vulkan_create_info, createInfo->vulkanAllocator, vulkanInstance);

  if (context.ret == XR_SUCCESS && *vulkanResult != VK_SUCCESS) {
    WARN("winevulkan instance creation failed after native xrCreateVulkanInstanceKHR() success.\n");
  }

  TRACE("result %d, vk result %d.\n", context.ret, *vulkanResult);
  return context.ret;
}

XrResult WINAPI xrCreateVulkanDeviceKHR(XrInstance instance,
                                        const XrVulkanDeviceCreateInfoKHR *createInfo,
                                        VkDevice *vulkanDevice,
                                        VkResult *vulkanResult) {
  struct vk_create_callback_context context;
  VkCreateInfoWineDeviceCallback callback;
  VkDeviceCreateInfo vulkan_create_info;

  TRACE("instance %p, createInfo %p, vulkanDevice %p, vulkanResult %p.\n", instance, createInfo, vulkanDevice,
        vulkanResult);

  if (createInfo->createFlags) {
    WARN("Unexpected flags %#lx.\n", (long)createInfo->createFlags);
  }

  context.wine_instance = instance;
  context.create_info = (UINT64)createInfo;

  vulkan_create_info = *createInfo->vulkanCreateInfo;
  callback.sType = VK_STRUCTURE_TYPE_CREATE_INFO_WINE_DEVICE_CALLBACK;
  callback.native_create_callback = g_vk_create_device_callback;
  callback.context = &context;
  callback.pNext = vulkan_create_info.pNext;
  vulkan_create_info.pNext = &callback;

  *vulkanResult =
      vkCreateDevice(createInfo->vulkanPhysicalDevice, &vulkan_create_info, createInfo->vulkanAllocator, vulkanDevice);

  if (context.ret == XR_SUCCESS && *vulkanResult != VK_SUCCESS) {
    WARN("winevulkan instance creation failed after native xrCreateVulkanInstanceKHR() success.\n");
  }

  TRACE("result %d, vk result %d.\n", context.ret, *vulkanResult);
  return context.ret;
}

XrResult WINAPI xrGetInstanceProcAddr(XrInstance instance, const char *fn_name, PFN_xrVoidFunction *out_fn) {
  struct is_available_instance_function_openxr_params params =
  {
    .instance = instance,
    .name = fn_name,
  };
  NTSTATUS _status;

  TRACE("%s\n", fn_name);

  _status = UNIX_CALL(is_available_instance_function, &params);
  assert(!_status && "is_available_instance_function");

  if (params.ret)
  {
    WARN("is_available_instance_function failed for %s, ret %d\n", fn_name, params.ret);
    return params.ret;
  }

  *out_fn = wine_xr_get_instance_proc_addr(fn_name);
  if (!*out_fn) {
    WARN("Unable to find requested function: %s\n", fn_name);
    return XR_ERROR_FUNCTION_UNSUPPORTED;
  }

  return XR_SUCCESS;
}

XrResult WINAPI xrNegotiateLoaderRuntimeInterface(const XrNegotiateLoaderInfo *info,
                                                  XrNegotiateRuntimeRequest *request) {
  const XrNegotiateLoaderInfo *loaderInfo = (const XrNegotiateLoaderInfo *)info;
  XrNegotiateRuntimeRequest *runtimeRequest = (XrNegotiateRuntimeRequest *)request;
  XrResult res;

  TRACE("%p %p\n", loaderInfo, runtimeRequest);

  if (!loaderInfo || !runtimeRequest) {
    return XR_ERROR_INITIALIZATION_FAILED;
  }

  if ((res = wine_openxr_init_once()) != XR_SUCCESS) {
    TRACE("could not initialize openxr: %d\n", res);
    return res;
  }

  if (loaderInfo->structType != XR_LOADER_INTERFACE_STRUCT_LOADER_INFO ||
      loaderInfo->structVersion != XR_LOADER_INFO_STRUCT_VERSION ||
      loaderInfo->structSize != sizeof(XrNegotiateLoaderInfo)) {
    return XR_ERROR_VALIDATION_FAILURE;
  }

  if (loaderInfo->minInterfaceVersion > XR_CURRENT_LOADER_RUNTIME_VERSION ||
      loaderInfo->maxInterfaceVersion < XR_CURRENT_LOADER_RUNTIME_VERSION) {
    return XR_ERROR_VALIDATION_FAILURE;
  }

  if (runtimeRequest->structType != XR_LOADER_INTERFACE_STRUCT_RUNTIME_REQUEST ||
      runtimeRequest->structVersion != XR_RUNTIME_INFO_STRUCT_VERSION ||
      runtimeRequest->structSize != sizeof(XrNegotiateRuntimeRequest)) {
    return XR_ERROR_VALIDATION_FAILURE;
  }

  runtimeRequest->runtimeInterfaceVersion = XR_CURRENT_LOADER_RUNTIME_VERSION;
  runtimeRequest->getInstanceProcAddr = (PFN_xrGetInstanceProcAddr)&xrGetInstanceProcAddr;
  runtimeRequest->runtimeApiVersion = api_version;

  return XR_SUCCESS;
}

XrResult WINAPI xrGetVulkanDeviceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetVulkanDeviceExtensionsKHR_params params;
    NTSTATUS _status;

    /* Even while returning fixed string still call the host function, that is a part of OpenXR over Vulkan
     * expected initialization sequence. */
    params.instance = instance;
    params.systemId = systemId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetVulkanDeviceExtensionsKHR, &params);
    assert(!_status && "xrGetVulkanDeviceExtensionsKHR");

    if (params.result == XR_SUCCESS && bufferCapacityInput)
    {
        __wine_set_unix_env(WINE_VULKAN_DEVICE_VARIABLE, buffer);
        strcpy(buffer, WINE_VULKAN_DEVICE_EXTENSION_NAME);
        *bufferCountOutput = sizeof(WINE_VULKAN_DEVICE_EXTENSION_NAME);
        TRACE("returning %s.\n", buffer);
    }
    else if ((params.result == XR_SUCCESS || params.result == XR_ERROR_SIZE_INSUFFICIENT)
            && *bufferCountOutput < sizeof(WINE_VULKAN_DEVICE_EXTENSION_NAME))
    {
        *bufferCountOutput = sizeof(WINE_VULKAN_DEVICE_EXTENSION_NAME);
    }

    return params.result;
}


/* wineopenxr API */
XrResult WINAPI __wineopenxr_GetVulkanInstanceExtensions(uint32_t buflen, uint32_t *outlen, char *buf) {
  XrResult res;

  TRACE("\n");

  if ((res = wine_openxr_init_once()) != XR_SUCCESS) {
    TRACE("could not initialize openxr: %d\n", res);
    return res;
  }

  if (buflen < strlen(g_instance_extensions) + 1 || !buf) {
    *outlen = strlen(g_instance_extensions) + 1;
    return XR_SUCCESS;
  }

  *outlen = strlen(g_instance_extensions) + 1;
  strcpy(buf, g_instance_extensions);

  return XR_SUCCESS;
}

/* wineopenxr API */
XrResult WINAPI __wineopenxr_GetVulkanDeviceExtensions(uint32_t buflen, uint32_t *outlen, char *buf) {
  XrResult res;

  TRACE("\n");

  if ((res = wine_openxr_init_once()) != XR_SUCCESS) {
    TRACE("could not initialize openxr: %d\n", res);
    return res;
  }

  if (buflen < strlen(WINE_VULKAN_DEVICE_EXTENSION_NAME) + 1 || !buf) {
    *outlen = strlen(WINE_VULKAN_DEVICE_EXTENSION_NAME) + 1;
    return XR_SUCCESS;
  }

  *outlen = strlen(WINE_VULKAN_DEVICE_EXTENSION_NAME) + 1;
  strcpy(buf, WINE_VULKAN_DEVICE_EXTENSION_NAME);

  return XR_SUCCESS;
}

BOOL CDECL wineopenxr_init_registry(void)
{
    char *xr_inst_ext, *xr_dev_ext;
    uint32_t vid, pid;
    LSTATUS status;
    HKEY vr_key;

    if ((status = RegOpenKeyExA( HKEY_CURRENT_USER, "Software\\Wine\\VR", 0, KEY_ALL_ACCESS, &vr_key )))
    {
        WARN( "Could not open key, status %#x.\n", status );
        return FALSE;
    }

    if (!get_extensions( &xr_inst_ext, &xr_dev_ext, &vid, &pid ))
    {
        TRACE( "Got XR extensions.\n" );
        if ((status = RegSetValueExA( vr_key, "openxr_vulkan_instance_extensions", 0, REG_SZ,
                                      (BYTE *)xr_inst_ext, strlen( xr_inst_ext ) + 1 )))
            ERR( "Could not set openxr_vulkan_instance_extensions value, status %#x.\n", status );
        if ((status = RegSetValueExA( vr_key, "openxr_vulkan_device_extensions", 0, REG_SZ,
                                      (BYTE *)xr_dev_ext, strlen( xr_dev_ext ) + 1 )))
            ERR( "Could not set openxr_vulkan_device_extensions value, status %#x.\n", status );
        if ((status = RegSetValueExA( vr_key, "openxr_vulkan_device_vid", 0, REG_DWORD,
                                      (BYTE *)&vid, sizeof(vid) )))
            ERR( "Could not set openxr_vulkan_device_vid value, status %#x.\n", status );
        if ((status = RegSetValueExA( vr_key, "openxr_vulkan_device_pid", 0, REG_DWORD,
                                      (BYTE *)&pid, sizeof(pid) )))
            ERR( "Could not set openxr_vulkan_device_pid value, status %#x.\n", status );
    }

    TRACE( "Initialized OpenXR registry entries\n" );
    RegCloseKey( vr_key );
    return TRUE;
}
