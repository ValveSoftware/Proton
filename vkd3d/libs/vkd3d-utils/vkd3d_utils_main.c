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

#include "vkd3d_utils_private.h"

VKD3D_DEBUG_ENV_NAME("VKD3D_DEBUG");

HRESULT WINAPI D3D12GetDebugInterface(REFIID iid, void **debug)
{
    FIXME("iid %s, debug %p stub!\n", debugstr_guid(iid), debug);

    return E_NOTIMPL;
}

HRESULT WINAPI D3D12CreateDevice(IUnknown *adapter,
        D3D_FEATURE_LEVEL minimum_feature_level, REFIID iid, void **device)
{
    struct vkd3d_optional_instance_extensions_info optional_extensions_info;
    struct vkd3d_instance_create_info instance_create_info;
    struct vkd3d_device_create_info device_create_info;

    static const char * const instance_extensions[] =
    {
        VK_KHR_SURFACE_EXTENSION_NAME,
    };
    static const char * const optional_instance_extensions[] =
    {
        "VK_KHR_xcb_surface",
        "VK_MVK_macos_surface",
    };
    static const char * const device_extensions[] =
    {
        VK_KHR_SWAPCHAIN_EXTENSION_NAME,
    };

    TRACE("adapter %p, minimum_feature_level %#x, iid %s, device %p.\n",
            adapter, minimum_feature_level, debugstr_guid(iid), device);

    if (adapter)
        FIXME("Ignoring adapter %p.\n", adapter);

    memset(&optional_extensions_info, 0, sizeof(optional_extensions_info));
    optional_extensions_info.type = VKD3D_STRUCTURE_TYPE_OPTIONAL_INSTANCE_EXTENSIONS_INFO;
    optional_extensions_info.extensions = optional_instance_extensions;
    optional_extensions_info.extension_count = ARRAY_SIZE(optional_instance_extensions);

    memset(&instance_create_info, 0, sizeof(instance_create_info));
    instance_create_info.type = VKD3D_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instance_create_info.next = &optional_extensions_info;
    instance_create_info.pfn_signal_event = vkd3d_signal_event;
    instance_create_info.wchar_size = sizeof(WCHAR);
    instance_create_info.instance_extensions = instance_extensions;
    instance_create_info.instance_extension_count = ARRAY_SIZE(instance_extensions);

    memset(&device_create_info, 0, sizeof(device_create_info));
    device_create_info.type = VKD3D_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    device_create_info.next = NULL;
    device_create_info.minimum_feature_level = minimum_feature_level;
    device_create_info.instance_create_info = &instance_create_info;
    device_create_info.device_extensions = device_extensions;
    device_create_info.device_extension_count = ARRAY_SIZE(device_extensions);

    return vkd3d_create_device(&device_create_info, iid, device);
}

HRESULT WINAPI D3D12CreateRootSignatureDeserializer(const void *data, SIZE_T data_size,
        REFIID iid, void **deserializer)
{
    TRACE("data %p, data_size %lu, iid %s, deserializer %p.\n",
            data, data_size, debugstr_guid(iid), deserializer);

    return vkd3d_create_root_signature_deserializer(data, data_size, iid, deserializer);
}

HRESULT WINAPI D3D12CreateVersionedRootSignatureDeserializer(const void *data, SIZE_T data_size,
        REFIID iid,void **deserializer)
{
    TRACE("data %p, data_size %lu, iid %s, deserializer %p.\n",
            data, data_size, debugstr_guid(iid), deserializer);

    return vkd3d_create_versioned_root_signature_deserializer(data, data_size, iid, deserializer);
}

HRESULT WINAPI D3D12SerializeRootSignature(const D3D12_ROOT_SIGNATURE_DESC *desc,
        D3D_ROOT_SIGNATURE_VERSION version, ID3DBlob **blob, ID3DBlob **error_blob)
{
    TRACE("desc %p, version %#x, blob %p, error_blob %p.\n", desc, version, blob, error_blob);

    return vkd3d_serialize_root_signature(desc, version, blob, error_blob);
}

HRESULT WINAPI D3D12SerializeVersionedRootSignature(const D3D12_VERSIONED_ROOT_SIGNATURE_DESC *desc,
        ID3DBlob **blob, ID3DBlob **error_blob)
{
    TRACE("desc %p, blob %p, error_blob %p.\n", desc, blob, error_blob);

    return vkd3d_serialize_versioned_root_signature(desc, blob, error_blob);
}

/* Events */
HANDLE vkd3d_create_event(void)
{
    struct vkd3d_event *event;
    int rc;

    TRACE(".\n");

    if (!(event = vkd3d_malloc(sizeof(*event))))
        return NULL;

    if ((rc = pthread_mutex_init(&event->mutex, NULL)))
    {
        ERR("Failed to initialize mutex, error %d.\n", rc);
        vkd3d_free(event);
        return NULL;
    }
    if ((rc = pthread_cond_init(&event->cond, NULL)))
    {
        ERR("Failed to initialize condition variable, error %d.\n", rc);
        pthread_mutex_destroy(&event->mutex);
        vkd3d_free(event);
        return NULL;
    }

    event->is_signaled = false;

    TRACE("Created event %p.\n", event);

    return event;
}

unsigned int vkd3d_wait_event(HANDLE event, unsigned int milliseconds)
{
    struct vkd3d_event *impl = event;
    int rc;

    TRACE("event %p, milliseconds %u.\n", event, milliseconds);

    if ((rc = pthread_mutex_lock(&impl->mutex)))
    {
        ERR("Failed to lock mutex, error %d.\n", rc);
        return VKD3D_WAIT_FAILED;
    }

    if (impl->is_signaled || !milliseconds)
    {
        bool is_signaled = impl->is_signaled;
        impl->is_signaled = false;
        pthread_mutex_unlock(&impl->mutex);
        return is_signaled ? VKD3D_WAIT_OBJECT_0 : VKD3D_WAIT_TIMEOUT;
    }

    if (milliseconds == VKD3D_INFINITE)
    {
        do
        {
            if ((rc = pthread_cond_wait(&impl->cond, &impl->mutex)))
            {
                ERR("Failed to wait on condition variable, error %d.\n", rc);
                pthread_mutex_unlock(&impl->mutex);
                return VKD3D_WAIT_FAILED;
            }
        } while (!impl->is_signaled);

        impl->is_signaled = false;
        pthread_mutex_unlock(&impl->mutex);
        return VKD3D_WAIT_OBJECT_0;
    }

    pthread_mutex_unlock(&impl->mutex);
    FIXME("Timed wait not implemented yet.\n");
    return VKD3D_WAIT_FAILED;
}

HRESULT vkd3d_signal_event(HANDLE event)
{
    struct vkd3d_event *impl = event;
    int rc;

    TRACE("event %p.\n", event);

    if ((rc = pthread_mutex_lock(&impl->mutex)))
    {
        ERR("Failed to lock mutex, error %d.\n", rc);
        return E_FAIL;
    }
    impl->is_signaled = true;
    pthread_cond_signal(&impl->cond);
    pthread_mutex_unlock(&impl->mutex);

    return S_OK;
}

void vkd3d_destroy_event(HANDLE event)
{
    struct vkd3d_event *impl = event;
    int rc;

    TRACE("event %p.\n", event);

    if ((rc = pthread_mutex_destroy(&impl->mutex)))
        ERR("Failed to destroy mutex, error %d.\n", rc);
    if ((rc = pthread_cond_destroy(&impl->cond)))
        ERR("Failed to destroy condition variable, error %d.\n", rc);
    vkd3d_free(impl);
}
