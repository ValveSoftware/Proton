/*
 * Copyright 2016 Józef Kucia for CodeWeavers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __VKD3D_H
#define __VKD3D_H

#include <vkd3d_types.h>

#ifndef VKD3D_NO_WIN32_TYPES
# include <vkd3d_windows.h>
# include <vkd3d_d3d12.h>
#endif  /* VKD3D_NO_WIN32_TYPES */

#ifndef VKD3D_NO_VULKAN_H
# include <vulkan/vulkan.h>
#endif  /* VKD3D_NO_VULKAN_H */

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

enum vkd3d_structure_type
{
    /* 1.0 */
    VKD3D_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
    VKD3D_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
    VKD3D_STRUCTURE_TYPE_IMAGE_RESOURCE_CREATE_INFO,

    /* 1.1 */
    VKD3D_STRUCTURE_TYPE_OPTIONAL_INSTANCE_EXTENSIONS_INFO,

    /* 1.2 */
    VKD3D_STRUCTURE_TYPE_OPTIONAL_DEVICE_EXTENSIONS_INFO,
    VKD3D_STRUCTURE_TYPE_APPLICATION_INFO,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_STRUCTURE_TYPE),
};

typedef HRESULT (*PFN_vkd3d_signal_event)(HANDLE event);

typedef void * (*PFN_vkd3d_thread)(void *data);

typedef void * (*PFN_vkd3d_create_thread)(PFN_vkd3d_thread thread_main, void *data);
typedef HRESULT (*PFN_vkd3d_join_thread)(void *thread);

struct vkd3d_instance;

struct vkd3d_instance_create_info
{
    enum vkd3d_structure_type type;
    const void *next;

    PFN_vkd3d_signal_event pfn_signal_event;
    PFN_vkd3d_create_thread pfn_create_thread;
    PFN_vkd3d_join_thread pfn_join_thread;
    size_t wchar_size;

    /* If set to NULL, libvkd3d loads libvulkan. */
    PFN_vkGetInstanceProcAddr pfn_vkGetInstanceProcAddr;

    const char * const *instance_extensions;
    uint32_t instance_extension_count;
};

/* Extends vkd3d_instance_create_info. Available since 1.1. */
struct vkd3d_optional_instance_extensions_info
{
    enum vkd3d_structure_type type;
    const void *next;

    const char * const *extensions;
    uint32_t extension_count;
};

/* Extends vkd3d_instance_create_info. Available since 1.2. */
struct vkd3d_application_info
{
    enum vkd3d_structure_type type;
    const void *next;

    const char *application_name;
    uint32_t application_version;

    const char *engine_name; /* "vkd3d" if NULL */
    uint32_t engine_version; /* vkd3d version if engine_name is NULL */
};

struct vkd3d_device_create_info
{
    enum vkd3d_structure_type type;
    const void *next;

    D3D_FEATURE_LEVEL minimum_feature_level;

    struct vkd3d_instance *instance;
    const struct vkd3d_instance_create_info *instance_create_info;

    VkPhysicalDevice vk_physical_device;

    const char * const *device_extensions;
    uint32_t device_extension_count;

    IUnknown *parent;
    LUID adapter_luid;
};

/* Extends vkd3d_device_create_info. Available since 1.2. */
struct vkd3d_optional_device_extensions_info
{
    enum vkd3d_structure_type type;
    const void *next;

    const char * const *extensions;
    uint32_t extension_count;
};

/* vkd3d_image_resource_create_info flags */
#define VKD3D_RESOURCE_INITIAL_STATE_TRANSITION 0x00000001
#define VKD3D_RESOURCE_PRESENT_STATE_TRANSITION 0x00000002

struct vkd3d_image_resource_create_info
{
    enum vkd3d_structure_type type;
    const void *next;

    VkImage vk_image;
    D3D12_RESOURCE_DESC desc;
    unsigned int flags;
    D3D12_RESOURCE_STATES present_state;
};

#ifndef VKD3D_NO_PROTOTYPES

HRESULT vkd3d_create_instance(const struct vkd3d_instance_create_info *create_info,
        struct vkd3d_instance **instance);
ULONG vkd3d_instance_decref(struct vkd3d_instance *instance);
VkInstance vkd3d_instance_get_vk_instance(struct vkd3d_instance *instance);
ULONG vkd3d_instance_incref(struct vkd3d_instance *instance);

HRESULT vkd3d_create_device(const struct vkd3d_device_create_info *create_info,
        REFIID iid, void **device);
IUnknown *vkd3d_get_device_parent(ID3D12Device *device);
VkDevice vkd3d_get_vk_device(ID3D12Device *device);
VkPhysicalDevice vkd3d_get_vk_physical_device(ID3D12Device *device);
struct vkd3d_instance *vkd3d_instance_from_device(ID3D12Device *device);

uint32_t vkd3d_get_vk_queue_family_index(ID3D12CommandQueue *queue);
VkQueue vkd3d_acquire_vk_queue(ID3D12CommandQueue *queue);
void vkd3d_release_vk_queue(ID3D12CommandQueue *queue);

HRESULT vkd3d_create_image_resource(ID3D12Device *device,
        const struct vkd3d_image_resource_create_info *create_info, ID3D12Resource **resource);
ULONG vkd3d_resource_decref(ID3D12Resource *resource);
ULONG vkd3d_resource_incref(ID3D12Resource *resource);

HRESULT vkd3d_serialize_root_signature(const D3D12_ROOT_SIGNATURE_DESC *desc,
        D3D_ROOT_SIGNATURE_VERSION version, ID3DBlob **blob, ID3DBlob **error_blob);
HRESULT vkd3d_create_root_signature_deserializer(const void *data, SIZE_T data_size,
        REFIID iid, void **deserializer);

VkFormat vkd3d_get_vk_format(DXGI_FORMAT format);

/* 1.1 */
DXGI_FORMAT vkd3d_get_dxgi_format(VkFormat format);

/* 1.2 */
HRESULT vkd3d_serialize_versioned_root_signature(const D3D12_VERSIONED_ROOT_SIGNATURE_DESC *desc,
        ID3DBlob **blob, ID3DBlob **error_blob);
HRESULT vkd3d_create_versioned_root_signature_deserializer(const void *data, SIZE_T data_size,
        REFIID iid, void **deserializer);

#endif  /* VKD3D_NO_PROTOTYPES */

/*
 * Function pointer typedefs for vkd3d functions.
 */
typedef HRESULT (*PFN_vkd3d_create_instance)(const struct vkd3d_instance_create_info *create_info,
        struct vkd3d_instance **instance);
typedef ULONG (*PFN_vkd3d_instance_decref)(struct vkd3d_instance *instance);
typedef VkInstance (*PFN_vkd3d_instance_get_vk_instance)(struct vkd3d_instance *instance);
typedef ULONG (*PFN_vkd3d_instance_incref)(struct vkd3d_instance *instance);

typedef HRESULT (*PFN_vkd3d_create_device)(const struct vkd3d_device_create_info *create_info,
        REFIID iid, void **device);
typedef IUnknown * (*PFN_vkd3d_get_device_parent)(ID3D12Device *device);
typedef VkDevice (*PFN_vkd3d_get_vk_device)(ID3D12Device *device);
typedef VkPhysicalDevice (*PFN_vkd3d_get_vk_physical_device)(ID3D12Device *device);
typedef struct vkd3d_instance * (*PFN_vkd3d_instance_from_device)(ID3D12Device *device);

typedef uint32_t (*PFN_vkd3d_get_vk_queue_family_index)(ID3D12CommandQueue *queue);
typedef VkQueue (*PFN_vkd3d_acquire_vk_queue)(ID3D12CommandQueue *queue);
typedef void (*PFN_vkd3d_release_vk_queue)(ID3D12CommandQueue *queue);

typedef HRESULT (*PFN_vkd3d_create_image_resource)(ID3D12Device *device,
        const struct vkd3d_image_resource_create_info *create_info, ID3D12Resource **resource);
typedef ULONG (*PFN_vkd3d_resource_decref)(ID3D12Resource *resource);
typedef ULONG (*PFN_vkd3d_resource_incref)(ID3D12Resource *resource);

typedef HRESULT (*PFN_vkd3d_serialize_root_signature)(const D3D12_ROOT_SIGNATURE_DESC *desc,
        D3D_ROOT_SIGNATURE_VERSION version, ID3DBlob **blob, ID3DBlob **error_blob);
typedef HRESULT (*PFN_vkd3d_create_root_signature_deserializer)(const void *data, SIZE_T data_size,
        REFIID iid, void **deserializer);

typedef VkFormat (*PFN_vkd3d_get_vk_format)(DXGI_FORMAT format);

/* 1.1 */
typedef DXGI_FORMAT (*PFN_vkd3d_get_dxgi_format)(VkFormat format);

/* 1.2 */
typedef HRESULT (*PFN_vkd3d_serialize_versioned_root_signature)(const D3D12_VERSIONED_ROOT_SIGNATURE_DESC *desc,
        ID3DBlob **blob, ID3DBlob **error_blob);
typedef HRESULT (*PFN_vkd3d_create_versioned_root_signature_deserializer)(const void *data, SIZE_T data_size,
        REFIID iid, void **deserializer);

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif  /* __VKD3D_H */
