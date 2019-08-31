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

#include "vkd3d_private.h"

#define VKD3D_NULL_BUFFER_SIZE 16
#define VKD3D_NULL_VIEW_FORMAT DXGI_FORMAT_R8G8B8A8_UNORM

static inline bool is_cpu_accessible_heap(const D3D12_HEAP_PROPERTIES *properties)
{
    if (properties->Type == D3D12_HEAP_TYPE_DEFAULT)
        return false;
    if (properties->Type == D3D12_HEAP_TYPE_CUSTOM)
    {
        return properties->CPUPageProperty == D3D12_CPU_PAGE_PROPERTY_WRITE_COMBINE
                || properties->CPUPageProperty == D3D12_CPU_PAGE_PROPERTY_WRITE_BACK;
    }
    return true;
}

static unsigned int vkd3d_select_memory_type(struct d3d12_device *device, uint32_t memory_type_mask,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS heap_flags)
{
    const VkPhysicalDeviceMemoryProperties *memory_info = &device->memory_properties;
    VkMemoryPropertyFlags flags[3];
    unsigned int i, j, count = 0;

    switch (heap_properties->Type)
    {
        case D3D12_HEAP_TYPE_DEFAULT:
            flags[count++] = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
            break;

        case D3D12_HEAP_TYPE_UPLOAD:
            flags[count++] = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            break;

        case D3D12_HEAP_TYPE_READBACK:
            flags[count++] = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT
                    | VK_MEMORY_PROPERTY_HOST_CACHED_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            flags[count++] = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            break;

        case D3D12_HEAP_TYPE_CUSTOM:
            FIXME("Custom heaps not supported yet.\n");
            flags[count++] = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT
                    | VK_MEMORY_PROPERTY_HOST_CACHED_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            flags[count++] = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            flags[count++] = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
            break;

        default:
            WARN("Invalid heap type %#x.\n", heap_properties->Type);
            return ~0u;
    }

    for (j = 0; j < count; ++j)
    {
        VkMemoryPropertyFlags preferred_flags = flags[j];

        for (i = 0; i < memory_info->memoryTypeCount; ++i)
        {
            if (!(memory_type_mask & (1u << i)))
                continue;
            if ((memory_info->memoryTypes[i].propertyFlags & preferred_flags) == preferred_flags)
                return i;
        }
    }

    return ~0u;
}

static HRESULT vkd3d_allocate_device_memory(struct d3d12_device *device,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS heap_flags,
        const VkMemoryRequirements *memory_requirements,
        const VkMemoryDedicatedAllocateInfo *dedicated_allocate_info,
        VkDeviceMemory *vk_memory, uint32_t *vk_memory_type)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    VkMemoryAllocateInfo allocate_info;
    VkResult vr;

    TRACE("Memory requirements: size %#"PRIx64", alignment %#"PRIx64".\n",
            memory_requirements->size, memory_requirements->alignment);

    allocate_info.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    allocate_info.pNext = dedicated_allocate_info;
    allocate_info.allocationSize = memory_requirements->size;
    allocate_info.memoryTypeIndex = vkd3d_select_memory_type(device,
            memory_requirements->memoryTypeBits, heap_properties, heap_flags);

    if (allocate_info.memoryTypeIndex == ~0u)
    {
        FIXME("Failed to find suitable memory type (allowed types %#x).\n", memory_requirements->memoryTypeBits);
        *vk_memory = VK_NULL_HANDLE;
        return E_FAIL;
    }

    TRACE("Allocating memory type %u.\n", allocate_info.memoryTypeIndex);

    if ((vr = VK_CALL(vkAllocateMemory(device->vk_device, &allocate_info, NULL, vk_memory))) < 0)
    {
        WARN("Failed to allocate device memory, vr %d.\n", vr);
        *vk_memory = VK_NULL_HANDLE;
        return hresult_from_vk_result(vr);
    }

    if (vk_memory_type)
        *vk_memory_type = allocate_info.memoryTypeIndex;

    return S_OK;
}

HRESULT vkd3d_allocate_buffer_memory(struct d3d12_device *device, VkBuffer vk_buffer,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS heap_flags,
        VkDeviceMemory *vk_memory, uint32_t *vk_memory_type, VkDeviceSize *vk_memory_size)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    VkMemoryDedicatedAllocateInfo *dedicated_allocation = NULL;
    VkMemoryDedicatedRequirements dedicated_requirements;
    VkMemoryDedicatedAllocateInfo dedicated_info;
    VkMemoryRequirements2 memory_requirements2;
    VkMemoryRequirements *memory_requirements;
    VkBufferMemoryRequirementsInfo2 info;
    VkResult vr;
    HRESULT hr;

    memory_requirements = &memory_requirements2.memoryRequirements;

    if (device->vk_info.KHR_dedicated_allocation)
    {
        info.sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2;
        info.pNext = NULL;
        info.buffer = vk_buffer;

        dedicated_requirements.sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;
        dedicated_requirements.pNext = NULL;

        memory_requirements2.sType = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
        memory_requirements2.pNext = &dedicated_requirements;

        VK_CALL(vkGetBufferMemoryRequirements2KHR(device->vk_device, &info, &memory_requirements2));

        if (dedicated_requirements.prefersDedicatedAllocation)
        {
            dedicated_allocation = &dedicated_info;

            dedicated_info.sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
            dedicated_info.pNext = NULL;
            dedicated_info.image = VK_NULL_HANDLE;
            dedicated_info.buffer = vk_buffer;
        }
    }
    else
    {
        VK_CALL(vkGetBufferMemoryRequirements(device->vk_device, vk_buffer, memory_requirements));
    }

    if (FAILED(hr = vkd3d_allocate_device_memory(device, heap_properties, heap_flags,
            memory_requirements, dedicated_allocation, vk_memory, vk_memory_type)))
        return hr;

    if ((vr = VK_CALL(vkBindBufferMemory(device->vk_device, vk_buffer, *vk_memory, 0))) < 0)
    {
        WARN("Failed to bind memory, vr %d.\n", vr);
        VK_CALL(vkFreeMemory(device->vk_device, *vk_memory, NULL));
        *vk_memory = VK_NULL_HANDLE;
    }

    if (vk_memory_size)
        *vk_memory_size = memory_requirements->size;

    return hresult_from_vk_result(vr);
}

static HRESULT vkd3d_allocate_image_memory(struct d3d12_device *device, VkImage vk_image,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS heap_flags,
        VkDeviceMemory *vk_memory, uint32_t *vk_memory_type, VkDeviceSize *vk_memory_size)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    VkMemoryDedicatedAllocateInfo *dedicated_allocation = NULL;
    VkMemoryDedicatedRequirements dedicated_requirements;
    VkMemoryDedicatedAllocateInfo dedicated_info;
    VkMemoryRequirements2 memory_requirements2;
    VkMemoryRequirements *memory_requirements;
    VkImageMemoryRequirementsInfo2 info;
    VkResult vr;
    HRESULT hr;

    memory_requirements = &memory_requirements2.memoryRequirements;

    if (device->vk_info.KHR_dedicated_allocation)
    {
        info.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2;
        info.pNext = NULL;
        info.image = vk_image;

        dedicated_requirements.sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;
        dedicated_requirements.pNext = NULL;

        memory_requirements2.sType = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
        memory_requirements2.pNext = &dedicated_requirements;

        VK_CALL(vkGetImageMemoryRequirements2KHR(device->vk_device, &info, &memory_requirements2));

        if (dedicated_requirements.prefersDedicatedAllocation)
        {
            dedicated_allocation = &dedicated_info;

            dedicated_info.sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
            dedicated_info.pNext = NULL;
            dedicated_info.image = vk_image;
            dedicated_info.buffer = VK_NULL_HANDLE;
        }
    }
    else
    {
        VK_CALL(vkGetImageMemoryRequirements(device->vk_device, vk_image, memory_requirements));
    }

    if (FAILED(hr = vkd3d_allocate_device_memory(device, heap_properties, heap_flags,
            memory_requirements, dedicated_allocation, vk_memory, vk_memory_type)))
        return hr;

    if ((vr = VK_CALL(vkBindImageMemory(device->vk_device, vk_image, *vk_memory, 0))) < 0)
    {
        WARN("Failed to bind memory, vr %d.\n", vr);
        VK_CALL(vkFreeMemory(device->vk_device, *vk_memory, NULL));
        *vk_memory = VK_NULL_HANDLE;
        return hresult_from_vk_result(vr);
    }

    if (vk_memory_size)
        *vk_memory_size = memory_requirements->size;

    return S_OK;
}

/* ID3D12Heap */
static inline struct d3d12_heap *impl_from_ID3D12Heap(ID3D12Heap *iface)
{
    return CONTAINING_RECORD(iface, struct d3d12_heap, ID3D12Heap_iface);
}

static HRESULT STDMETHODCALLTYPE d3d12_heap_QueryInterface(ID3D12Heap *iface,
        REFIID iid, void **object)
{
    TRACE("iface %p, iid %s, object %p.\n", iface, debugstr_guid(iid), object);

    if (IsEqualGUID(iid, &IID_ID3D12Heap)
            || IsEqualGUID(iid, &IID_ID3D12Pageable)
            || IsEqualGUID(iid, &IID_ID3D12DeviceChild)
            || IsEqualGUID(iid, &IID_ID3D12Object)
            || IsEqualGUID(iid, &IID_IUnknown))
    {
        ID3D12Heap_AddRef(iface);
        *object = iface;
        return S_OK;
    }

    WARN("%s not implemented, returning E_NOINTERFACE.\n", debugstr_guid(iid));

    *object = NULL;
    return E_NOINTERFACE;
}

static ULONG STDMETHODCALLTYPE d3d12_heap_AddRef(ID3D12Heap *iface)
{
    struct d3d12_heap *heap = impl_from_ID3D12Heap(iface);
    ULONG refcount = InterlockedIncrement(&heap->refcount);

    TRACE("%p increasing refcount to %u.\n", heap, refcount);

    assert(!heap->is_private);

    return refcount;
}

static void d3d12_heap_destroy(struct d3d12_heap *heap)
{
    struct d3d12_device *device = heap->device;
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;

    TRACE("Destroying heap %p.\n", heap);

    vkd3d_private_store_destroy(&heap->private_store);

    VK_CALL(vkFreeMemory(device->vk_device, heap->vk_memory, NULL));

    pthread_mutex_destroy(&heap->mutex);

    if (heap->is_private)
        device = NULL;

    vkd3d_free(heap);

    if (device)
        d3d12_device_release(device);
}

static ULONG STDMETHODCALLTYPE d3d12_heap_Release(ID3D12Heap *iface)
{
    struct d3d12_heap *heap = impl_from_ID3D12Heap(iface);
    ULONG refcount = InterlockedDecrement(&heap->refcount);

    TRACE("%p decreasing refcount to %u.\n", heap, refcount);

    if (!refcount)
        d3d12_heap_destroy(heap);

    return refcount;
}

static HRESULT STDMETHODCALLTYPE d3d12_heap_GetPrivateData(ID3D12Heap *iface,
        REFGUID guid, UINT *data_size, void *data)
{
    struct d3d12_heap *heap = impl_from_ID3D12Heap(iface);

    TRACE("iface %p, guid %s, data_size %p, data %p.\n", iface, debugstr_guid(guid), data_size, data);

    return vkd3d_get_private_data(&heap->private_store, guid, data_size, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_heap_SetPrivateData(ID3D12Heap *iface,
        REFGUID guid, UINT data_size, const void *data)
{
    struct d3d12_heap *heap = impl_from_ID3D12Heap(iface);

    TRACE("iface %p, guid %s, data_size %u, data %p.\n", iface, debugstr_guid(guid), data_size, data);

    return vkd3d_set_private_data(&heap->private_store, guid, data_size, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_heap_SetPrivateDataInterface(ID3D12Heap *iface,
        REFGUID guid, const IUnknown *data)
{
    struct d3d12_heap *heap = impl_from_ID3D12Heap(iface);

    TRACE("iface %p, guid %s, data %p.\n", iface, debugstr_guid(guid), data);

    return vkd3d_set_private_data_interface(&heap->private_store, guid, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_heap_SetName(ID3D12Heap *iface, const WCHAR *name)
{
    struct d3d12_heap *heap = impl_from_ID3D12Heap(iface);

    TRACE("iface %p, name %s.\n", iface, debugstr_w(name, heap->device->wchar_size));

    return vkd3d_set_vk_object_name(heap->device, (uint64_t)heap->vk_memory,
            VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT, name);
}

static HRESULT STDMETHODCALLTYPE d3d12_heap_GetDevice(ID3D12Heap *iface, REFIID iid, void **device)
{
    struct d3d12_heap *heap = impl_from_ID3D12Heap(iface);

    TRACE("iface %p, iid %s, device %p.\n", iface, debugstr_guid(iid), device);

    return d3d12_device_query_interface(heap->device, iid, device);
}

static D3D12_HEAP_DESC * STDMETHODCALLTYPE d3d12_heap_GetDesc(ID3D12Heap *iface,
        D3D12_HEAP_DESC *desc)
{
    struct d3d12_heap *heap = impl_from_ID3D12Heap(iface);

    TRACE("iface %p, desc %p.\n", iface, desc);

    *desc = heap->desc;
    return desc;
}

static const struct ID3D12HeapVtbl d3d12_heap_vtbl =
{
    /* IUnknown methods */
    d3d12_heap_QueryInterface,
    d3d12_heap_AddRef,
    d3d12_heap_Release,
    /* ID3D12Object methods */
    d3d12_heap_GetPrivateData,
    d3d12_heap_SetPrivateData,
    d3d12_heap_SetPrivateDataInterface,
    d3d12_heap_SetName,
    /* ID3D12DeviceChild methods */
    d3d12_heap_GetDevice,
    /* ID3D12Heap methods */
    d3d12_heap_GetDesc,
};

struct d3d12_heap *unsafe_impl_from_ID3D12Heap(ID3D12Heap *iface)
{
    if (!iface)
        return NULL;
    assert(iface->lpVtbl == &d3d12_heap_vtbl);
    return impl_from_ID3D12Heap(iface);
}

static HRESULT d3d12_heap_map(struct d3d12_heap *heap, uint64_t offset,
        struct d3d12_resource *resource, void **data)
{
    struct d3d12_device *device = heap->device;
    HRESULT hr = S_OK;
    VkResult vr;
    int rc;

    if ((rc = pthread_mutex_lock(&heap->mutex)))
    {
        ERR("Failed to lock mutex, error %d.\n", rc);
        *data = NULL;
        return hresult_from_errno(rc);
    }

    assert(!resource->map_count || heap->map_ptr);

    if (!resource->map_count)
    {
        if (!heap->map_ptr)
        {
            const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;

            TRACE("Mapping heap %p.\n", heap);

            assert(!heap->map_count);

            if ((vr = VK_CALL(vkMapMemory(device->vk_device, heap->vk_memory,
                    0, VK_WHOLE_SIZE, 0, &heap->map_ptr))) < 0)
            {
                WARN("Failed to map device memory, vr %d.\n", vr);
                heap->map_ptr = NULL;
            }

            hr = hresult_from_vk_result(vr);
        }

        if (heap->map_ptr)
            ++heap->map_count;
    }

    if (hr == S_OK)
    {
        assert(heap->map_ptr);
        *data = (BYTE *)heap->map_ptr + offset;
        ++resource->map_count;
    }
    else
    {
        assert(!heap->map_ptr);
        *data = NULL;
    }

    pthread_mutex_unlock(&heap->mutex);

    return hr;
}

static void d3d12_heap_unmap(struct d3d12_heap *heap, struct d3d12_resource *resource)
{
    struct d3d12_device *device = heap->device;
    int rc;

    if ((rc = pthread_mutex_lock(&heap->mutex)))
    {
        ERR("Failed to lock mutex, error %d.\n", rc);
        return;
    }

    if (!resource->map_count)
    {
        WARN("Resource %p is not mapped.\n", resource);
        goto done;
    }

    --resource->map_count;
    if (resource->map_count)
        goto done;

    if (!heap->map_count)
    {
        ERR("Heap %p is not mapped.\n", heap);
        goto done;
    }

    --heap->map_count;
    if (!heap->map_count)
    {
        const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;

        TRACE("Unmapping heap %p, ptr %p.\n", heap, heap->map_ptr);

        VK_CALL(vkUnmapMemory(device->vk_device, heap->vk_memory));
        heap->map_ptr = NULL;
    }

done:
    pthread_mutex_unlock(&heap->mutex);
}

static HRESULT validate_heap_desc(const D3D12_HEAP_DESC *desc, const struct d3d12_resource *resource)
{
    if (!resource && !desc->SizeInBytes)
    {
        WARN("Invalid size %"PRIu64".\n", desc->SizeInBytes);
        return E_INVALIDARG;
    }

    if (desc->Alignment != D3D12_DEFAULT_RESOURCE_PLACEMENT_ALIGNMENT
            && desc->Alignment != D3D12_DEFAULT_MSAA_RESOURCE_PLACEMENT_ALIGNMENT)
    {
        WARN("Invalid alignment %"PRIu64".\n", desc->Alignment);
        return E_INVALIDARG;
    }

    if (!resource && desc->Flags & D3D12_HEAP_FLAG_ALLOW_DISPLAY)
    {
        WARN("D3D12_HEAP_FLAG_ALLOW_DISPLAY is only for committed resources.\n");
        return E_INVALIDARG;
    }

    return S_OK;
}

static HRESULT d3d12_heap_init(struct d3d12_heap *heap,
        struct d3d12_device *device, const D3D12_HEAP_DESC *desc, const struct d3d12_resource *resource)
{
    VkMemoryRequirements memory_requirements;
    VkDeviceSize vk_memory_size;
    HRESULT hr;
    int rc;

    heap->ID3D12Heap_iface.lpVtbl = &d3d12_heap_vtbl;
    heap->refcount = 1;

    heap->is_private = !!resource;

    heap->desc = *desc;

    heap->map_ptr = NULL;
    heap->map_count = 0;

    if (!heap->desc.Properties.CreationNodeMask)
        heap->desc.Properties.CreationNodeMask = 1;
    if (!heap->desc.Properties.VisibleNodeMask)
        heap->desc.Properties.VisibleNodeMask = 1;

    debug_ignored_node_mask(heap->desc.Properties.CreationNodeMask);
    debug_ignored_node_mask(heap->desc.Properties.VisibleNodeMask);

    if (!heap->desc.Alignment)
        heap->desc.Alignment = D3D12_DEFAULT_RESOURCE_PLACEMENT_ALIGNMENT;

    if (FAILED(hr = validate_heap_desc(&heap->desc, resource)))
        return hr;

    if ((rc = pthread_mutex_init(&heap->mutex, NULL)))
    {
        ERR("Failed to initialize mutex, error %d.\n", rc);
        return hresult_from_errno(rc);
    }

    if (FAILED(hr = vkd3d_private_store_init(&heap->private_store)))
    {
        pthread_mutex_destroy(&heap->mutex);
        return hr;
    }

    if (resource)
    {
        if (d3d12_resource_is_buffer(resource))
        {
            hr = vkd3d_allocate_buffer_memory(device, resource->u.vk_buffer,
                    &heap->desc.Properties, heap->desc.Flags,
                    &heap->vk_memory, &heap->vk_memory_type, &vk_memory_size);
        }
        else
        {
            hr = vkd3d_allocate_image_memory(device, resource->u.vk_image,
                    &heap->desc.Properties, heap->desc.Flags,
                    &heap->vk_memory, &heap->vk_memory_type, &vk_memory_size);
        }

        heap->desc.SizeInBytes = vk_memory_size;
    }
    else
    {
        memory_requirements.size = heap->desc.SizeInBytes;
        memory_requirements.alignment = heap->desc.Alignment;
        memory_requirements.memoryTypeBits = ~(uint32_t)0;

        hr = vkd3d_allocate_device_memory(device, &heap->desc.Properties,
                heap->desc.Flags, &memory_requirements, NULL,
                &heap->vk_memory, &heap->vk_memory_type);
    }
    if (FAILED(hr))
    {
        vkd3d_private_store_destroy(&heap->private_store);
        pthread_mutex_destroy(&heap->mutex);
        return hr;
    }

    heap->device = device;
    if (!heap->is_private)
        d3d12_device_add_ref(heap->device);

    return S_OK;
}

HRESULT d3d12_heap_create(struct d3d12_device *device, const D3D12_HEAP_DESC *desc,
        const struct d3d12_resource *resource, struct d3d12_heap **heap)
{
    struct d3d12_heap *object;
    HRESULT hr;

    if (!(object = vkd3d_malloc(sizeof(*object))))
        return E_OUTOFMEMORY;

    if (FAILED(hr = d3d12_heap_init(object, device, desc, resource)))
    {
        vkd3d_free(object);
        return hr;
    }

    TRACE("Created %s %p.\n", object->is_private ? "private heap" : "heap", object);

    *heap = object;

    return S_OK;
}

static VkImageType vk_image_type_from_d3d12_resource_dimension(D3D12_RESOURCE_DIMENSION dimension)
{
    switch (dimension)
    {
        case D3D12_RESOURCE_DIMENSION_TEXTURE1D:
            return VK_IMAGE_TYPE_1D;
        case D3D12_RESOURCE_DIMENSION_TEXTURE2D:
            return VK_IMAGE_TYPE_2D;
        case D3D12_RESOURCE_DIMENSION_TEXTURE3D:
            return VK_IMAGE_TYPE_3D;
        default:
            ERR("Invalid resource dimension %#x.\n", dimension);
            return VK_IMAGE_TYPE_2D;
    }
}

VkSampleCountFlagBits vk_samples_from_sample_count(unsigned int sample_count)
{
    switch (sample_count)
    {
        case 1:
            return VK_SAMPLE_COUNT_1_BIT;
        case 2:
            return VK_SAMPLE_COUNT_2_BIT;
        case 4:
            return VK_SAMPLE_COUNT_4_BIT;
        case 8:
            return VK_SAMPLE_COUNT_8_BIT;
        case 16:
            return VK_SAMPLE_COUNT_16_BIT;
        case 32:
            return VK_SAMPLE_COUNT_32_BIT;
        case 64:
            return VK_SAMPLE_COUNT_64_BIT;
        default:
            return 0;
    }
}

VkSampleCountFlagBits vk_samples_from_dxgi_sample_desc(const DXGI_SAMPLE_DESC *desc)
{
    VkSampleCountFlagBits vk_samples;

    if ((vk_samples = vk_samples_from_sample_count(desc->Count)))
        return vk_samples;

    FIXME("Unhandled sample count %u.\n", desc->Count);
    return VK_SAMPLE_COUNT_1_BIT;
}

HRESULT vkd3d_create_buffer(struct d3d12_device *device,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS heap_flags,
        const D3D12_RESOURCE_DESC *desc, VkBuffer *vk_buffer)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    const bool sparse_resource = !heap_properties;
    VkBufferCreateInfo buffer_info;
    D3D12_HEAP_TYPE heap_type;
    VkResult vr;

    heap_type = heap_properties ? heap_properties->Type : D3D12_HEAP_TYPE_DEFAULT;

    buffer_info.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    buffer_info.pNext = NULL;
    buffer_info.flags = 0;
    buffer_info.size = desc->Width;

    if (sparse_resource)
    {
        buffer_info.flags |= VK_BUFFER_CREATE_SPARSE_BINDING_BIT;
        if (device->vk_info.sparse_properties.residencyNonResidentStrict)
            buffer_info.flags |= VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT;
    }

    buffer_info.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT
            | VK_BUFFER_USAGE_TRANSFER_DST_BIT
            | VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT
            | VK_BUFFER_USAGE_INDEX_BUFFER_BIT
            | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT
            | VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT;

    if (device->vk_info.EXT_conditional_rendering)
        buffer_info.usage |= VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT;

    if (heap_type == D3D12_HEAP_TYPE_DEFAULT && device->vk_info.EXT_transform_feedback)
    {
        buffer_info.usage |= VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT
                | VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT;
    }

    if (heap_type == D3D12_HEAP_TYPE_UPLOAD)
        buffer_info.usage &= ~VK_BUFFER_USAGE_TRANSFER_DST_BIT;
    else if (heap_type == D3D12_HEAP_TYPE_READBACK)
        buffer_info.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT;

    if (desc->Flags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS)
        buffer_info.usage |= VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT;
    if (!(desc->Flags & D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE))
        buffer_info.usage |= VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT;

    /* Buffers always have properties of D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS. */
    if (desc->Flags & D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS)
    {
        WARN("D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS cannot be set for buffers.\n");
        return E_INVALIDARG;
    }

    if (device->queue_family_count > 1)
    {
        buffer_info.sharingMode = VK_SHARING_MODE_CONCURRENT;
        buffer_info.queueFamilyIndexCount = device->queue_family_count;
        buffer_info.pQueueFamilyIndices = device->queue_family_indices;
    }
    else
    {
        buffer_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        buffer_info.queueFamilyIndexCount = 0;
        buffer_info.pQueueFamilyIndices = NULL;
    }

    if (desc->Flags & (D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET | D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL))
        FIXME("Unsupported resource flags %#x.\n", desc->Flags);

    if ((vr = VK_CALL(vkCreateBuffer(device->vk_device, &buffer_info, NULL, vk_buffer))) < 0)
    {
        WARN("Failed to create Vulkan buffer, vr %d.\n", vr);
        *vk_buffer = VK_NULL_HANDLE;
    }

    return hresult_from_vk_result(vr);
}

static unsigned int max_miplevel_count(const D3D12_RESOURCE_DESC *desc)
{
    unsigned int size = max(desc->Width, desc->Height);
    size = max(size, d3d12_resource_desc_get_depth(desc, 0));
    return vkd3d_log2i(size) + 1;
}

static const struct vkd3d_format_compatibility_list *vkd3d_get_format_compatibility_list(
        const struct d3d12_device *device, DXGI_FORMAT dxgi_format)
{
    unsigned int i;

    for (i = 0; i < device->format_compatibility_list_count; ++i)
    {
        if (device->format_compatibility_lists[i].typeless_format == dxgi_format)
            return &device->format_compatibility_lists[i];
    }

    return NULL;
}

static bool vkd3d_is_linear_tiling_supported(const struct d3d12_device *device, VkImageCreateInfo *image_info)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    VkImageFormatProperties properties;
    VkResult vr;

    if ((vr = VK_CALL(vkGetPhysicalDeviceImageFormatProperties(device->vk_physical_device, image_info->format,
            image_info->imageType, VK_IMAGE_TILING_LINEAR, image_info->usage, image_info->flags, &properties))) < 0)
    {
        if (vr != VK_ERROR_FORMAT_NOT_SUPPORTED)
            WARN("Failed to get device image format properties, vr %d.\n", vr);

        return false;
    }

    return image_info->extent.depth <= properties.maxExtent.depth
            && image_info->mipLevels <= properties.maxMipLevels
            && image_info->arrayLayers <= properties.maxArrayLayers
            && (image_info->samples & properties.sampleCounts);
}

static HRESULT vkd3d_create_image(struct d3d12_device *device,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS heap_flags,
        const D3D12_RESOURCE_DESC *desc, struct d3d12_resource *resource, VkImage *vk_image)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    const struct vkd3d_format_compatibility_list *compat_list;
    const bool sparse_resource = !heap_properties;
    VkImageFormatListCreateInfoKHR format_list;
    const struct vkd3d_format *format;
    VkImageCreateInfo image_info;
    VkResult vr;

    if (!(format = vkd3d_format_from_d3d12_resource_desc(device, desc, 0)))
    {
        WARN("Invalid DXGI format %#x.\n", desc->Format);
        return E_INVALIDARG;
    }

    image_info.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    image_info.pNext = NULL;
    image_info.flags = 0;
    if (!(desc->Flags & D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL) && format->type == VKD3D_FORMAT_TYPE_TYPELESS)
    {
        image_info.flags |= VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT;

        /* Format compatibility rules are more relaxed for UAVs. */
        if (!(desc->Flags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS)
                && (compat_list = vkd3d_get_format_compatibility_list(device, desc->Format)))
        {
            format_list.sType = VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR;
            format_list.pNext = NULL;
            format_list.viewFormatCount = compat_list->format_count;
            format_list.pViewFormats = compat_list->vk_formats;

            image_info.pNext = &format_list;
        }
    }
    if (desc->Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE2D
            && desc->Width == desc->Height && desc->DepthOrArraySize >= 6
            && desc->SampleDesc.Count == 1)
        image_info.flags |= VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT;
    if (desc->Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE3D)
        image_info.flags |= VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR;

    if (sparse_resource)
    {
        image_info.flags |= VK_IMAGE_CREATE_SPARSE_BINDING_BIT;
        if (device->vk_info.sparse_properties.residencyNonResidentStrict)
            image_info.flags |= VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT;
    }

    image_info.imageType = vk_image_type_from_d3d12_resource_dimension(desc->Dimension);
    image_info.format = format->vk_format;
    image_info.extent.width = desc->Width;
    image_info.extent.height = desc->Height;

    if (desc->Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE3D)
    {
        image_info.extent.depth = desc->DepthOrArraySize;
        image_info.arrayLayers = 1;
    }
    else
    {
        image_info.extent.depth = 1;
        image_info.arrayLayers = desc->DepthOrArraySize;
    }

    image_info.mipLevels = min(desc->MipLevels, max_miplevel_count(desc));
    image_info.samples = vk_samples_from_dxgi_sample_desc(&desc->SampleDesc);

    if (sparse_resource)
    {
        if (desc->Layout != D3D12_TEXTURE_LAYOUT_64KB_UNDEFINED_SWIZZLE)
        {
            WARN("D3D12_TEXTURE_LAYOUT_64KB_UNDEFINED_SWIZZLE must be used for reserved texture.\n");
            return E_INVALIDARG;
        }

        image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    }
    else if (desc->Layout == D3D12_TEXTURE_LAYOUT_UNKNOWN)
    {
        image_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    }
    else if (desc->Layout == D3D12_TEXTURE_LAYOUT_ROW_MAJOR)
    {
        image_info.tiling = VK_IMAGE_TILING_LINEAR;
    }
    else
    {
        FIXME("Unsupported layout %#x.\n", desc->Layout);
        return E_NOTIMPL;
    }

    image_info.usage = VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    if (desc->Flags & D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET)
        image_info.usage |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    if (desc->Flags & D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL)
        image_info.usage |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
    if (desc->Flags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS)
        image_info.usage |= VK_IMAGE_USAGE_STORAGE_BIT;
    if (!(desc->Flags & D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE))
        image_info.usage |= VK_IMAGE_USAGE_SAMPLED_BIT;

    if ((desc->Flags & D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS) && device->queue_family_count > 1)
    {
        TRACE("Creating image with VK_SHARING_MODE_CONCURRENT.\n");
        image_info.sharingMode = VK_SHARING_MODE_CONCURRENT;
        image_info.queueFamilyIndexCount = device->queue_family_count;
        image_info.pQueueFamilyIndices = device->queue_family_indices;
    }
    else
    {
        image_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
        image_info.queueFamilyIndexCount = 0;
        image_info.pQueueFamilyIndices = NULL;
    }

    if (heap_properties && is_cpu_accessible_heap(heap_properties))
    {
        image_info.initialLayout = VK_IMAGE_LAYOUT_PREINITIALIZED;

        if (vkd3d_is_linear_tiling_supported(device, &image_info))
        {
            /* Required for ReadFromSubresource(). */
            WARN("Forcing VK_IMAGE_TILING_LINEAR for CPU readable texture.\n");
            image_info.tiling = VK_IMAGE_TILING_LINEAR;
        }
    }
    else
    {
        image_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    }

    if (resource && image_info.tiling == VK_IMAGE_TILING_LINEAR)
        resource->flags |= VKD3D_RESOURCE_LINEAR_TILING;

    if ((vr = VK_CALL(vkCreateImage(device->vk_device, &image_info, NULL, vk_image))) < 0)
        WARN("Failed to create Vulkan image, vr %d.\n", vr);

    return hresult_from_vk_result(vr);
}

HRESULT vkd3d_get_image_allocation_info(struct d3d12_device *device,
        const D3D12_RESOURCE_DESC *desc, D3D12_RESOURCE_ALLOCATION_INFO *allocation_info)
{
    static const D3D12_HEAP_PROPERTIES heap_properties = {D3D12_HEAP_TYPE_DEFAULT};
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    D3D12_RESOURCE_DESC validated_desc;
    VkMemoryRequirements requirements;
    VkImage vk_image;
    HRESULT hr;

    assert(desc->Dimension != D3D12_RESOURCE_DIMENSION_BUFFER);
    assert(d3d12_resource_validate_desc(desc) == S_OK);

    if (!desc->MipLevels)
    {
        validated_desc = *desc;
        validated_desc.MipLevels = max_miplevel_count(desc);
        desc = &validated_desc;
    }

    /* XXX: We have to create an image to get its memory requirements. */
    if (SUCCEEDED(hr = vkd3d_create_image(device, &heap_properties, 0, desc, NULL, &vk_image)))
    {
        VK_CALL(vkGetImageMemoryRequirements(device->vk_device, vk_image, &requirements));
        VK_CALL(vkDestroyImage(device->vk_device, vk_image, NULL));

        allocation_info->SizeInBytes = requirements.size;
        allocation_info->Alignment = requirements.alignment;
    }

    return hr;
}

static void d3d12_resource_destroy(struct d3d12_resource *resource, struct d3d12_device *device)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;

    if (resource->flags & VKD3D_RESOURCE_EXTERNAL)
        return;

    if (resource->gpu_address)
        vkd3d_gpu_va_allocator_free(&device->gpu_va_allocator, resource->gpu_address);

    if (d3d12_resource_is_buffer(resource))
        VK_CALL(vkDestroyBuffer(device->vk_device, resource->u.vk_buffer, NULL));
    else
        VK_CALL(vkDestroyImage(device->vk_device, resource->u.vk_image, NULL));

    if (resource->flags & VKD3D_RESOURCE_DEDICATED_HEAP)
        d3d12_heap_destroy(resource->heap);
}

static ULONG d3d12_resource_incref(struct d3d12_resource *resource)
{
    ULONG refcount = InterlockedIncrement(&resource->internal_refcount);

    TRACE("%p increasing refcount to %u.\n", resource, refcount);

    return refcount;
}

static ULONG d3d12_resource_decref(struct d3d12_resource *resource)
{
    ULONG refcount = InterlockedDecrement(&resource->internal_refcount);

    TRACE("%p decreasing refcount to %u.\n", resource, refcount);

    if (!refcount)
    {
        vkd3d_private_store_destroy(&resource->private_store);
        d3d12_resource_destroy(resource, resource->device);
        vkd3d_free(resource);
    }

    return refcount;
}

bool d3d12_resource_is_cpu_accessible(const struct d3d12_resource *resource)
{
    return resource->heap && is_cpu_accessible_heap(&resource->heap->desc.Properties);
}

static bool d3d12_resource_validate_box(const struct d3d12_resource *resource,
        unsigned int sub_resource_idx, const D3D12_BOX *box)
{
    unsigned int mip_level = sub_resource_idx % resource->desc.MipLevels;
    struct d3d12_device *device = resource->device;
    const struct vkd3d_format *vkd3d_format;
    uint32_t width_mask, height_mask;
    uint64_t width, height, depth;

    width = d3d12_resource_desc_get_width(&resource->desc, mip_level);
    height = d3d12_resource_desc_get_height(&resource->desc, mip_level);
    depth = d3d12_resource_desc_get_depth(&resource->desc, mip_level);

    vkd3d_format = vkd3d_format_from_d3d12_resource_desc(device, &resource->desc, 0);
    assert(vkd3d_format);
    width_mask = vkd3d_format->block_width - 1;
    height_mask = vkd3d_format->block_height - 1;

    return box->left <= width && box->right <= width
            && box->top <= height && box->bottom <= height
            && box->front <= depth && box->back <= depth
            && !(box->left & width_mask)
            && !(box->right & width_mask)
            && !(box->top & height_mask)
            && !(box->bottom & height_mask);
}

/* ID3D12Resource */
static inline struct d3d12_resource *impl_from_ID3D12Resource(ID3D12Resource *iface)
{
    return CONTAINING_RECORD(iface, struct d3d12_resource, ID3D12Resource_iface);
}

static HRESULT STDMETHODCALLTYPE d3d12_resource_QueryInterface(ID3D12Resource *iface,
        REFIID riid, void **object)
{
    TRACE("iface %p, riid %s, object %p.\n", iface, debugstr_guid(riid), object);

    if (IsEqualGUID(riid, &IID_ID3D12Resource)
            || IsEqualGUID(riid, &IID_ID3D12Pageable)
            || IsEqualGUID(riid, &IID_ID3D12DeviceChild)
            || IsEqualGUID(riid, &IID_ID3D12Object)
            || IsEqualGUID(riid, &IID_IUnknown))
    {
        ID3D12Resource_AddRef(iface);
        *object = iface;
        return S_OK;
    }

    WARN("%s not implemented, returning E_NOINTERFACE.\n", debugstr_guid(riid));

    *object = NULL;
    return E_NOINTERFACE;
}

static ULONG STDMETHODCALLTYPE d3d12_resource_AddRef(ID3D12Resource *iface)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);
    ULONG refcount = InterlockedIncrement(&resource->refcount);

    TRACE("%p increasing refcount to %u.\n", resource, refcount);

    if (refcount == 1)
    {
        struct d3d12_device *device = resource->device;

        d3d12_device_add_ref(device);
        d3d12_resource_incref(resource);
    }

    return refcount;
}

static ULONG STDMETHODCALLTYPE d3d12_resource_Release(ID3D12Resource *iface)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);
    ULONG refcount = InterlockedDecrement(&resource->refcount);

    TRACE("%p decreasing refcount to %u.\n", resource, refcount);

    if (!refcount)
    {
        struct d3d12_device *device = resource->device;

        d3d12_resource_decref(resource);

        d3d12_device_release(device);
    }

    return refcount;
}

static HRESULT STDMETHODCALLTYPE d3d12_resource_GetPrivateData(ID3D12Resource *iface,
        REFGUID guid, UINT *data_size, void *data)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);

    TRACE("iface %p, guid %s, data_size %p, data %p.\n", iface, debugstr_guid(guid), data_size, data);

    return vkd3d_get_private_data(&resource->private_store, guid, data_size, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_resource_SetPrivateData(ID3D12Resource *iface,
        REFGUID guid, UINT data_size, const void *data)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);

    TRACE("iface %p, guid %s, data_size %u, data %p.\n", iface, debugstr_guid(guid), data_size, data);

    return vkd3d_set_private_data(&resource->private_store, guid, data_size, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_resource_SetPrivateDataInterface(ID3D12Resource *iface,
        REFGUID guid, const IUnknown *data)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);

    TRACE("iface %p, guid %s, data %p.\n", iface, debugstr_guid(guid), data);

    return vkd3d_set_private_data_interface(&resource->private_store, guid, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_resource_SetName(ID3D12Resource *iface, const WCHAR *name)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);
    HRESULT hr;

    TRACE("iface %p, name %s.\n", iface, debugstr_w(name, resource->device->wchar_size));

    if (resource->flags & VKD3D_RESOURCE_DEDICATED_HEAP)
    {
        if (FAILED(hr = d3d12_heap_SetName(&resource->heap->ID3D12Heap_iface, name)))
            return hr;
    }

    if (d3d12_resource_is_buffer(resource))
        return vkd3d_set_vk_object_name(resource->device, (uint64_t)resource->u.vk_buffer,
                VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT, name);
    else
        return vkd3d_set_vk_object_name(resource->device, (uint64_t)resource->u.vk_image,
                VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT, name);
}

static HRESULT STDMETHODCALLTYPE d3d12_resource_GetDevice(ID3D12Resource *iface, REFIID iid, void **device)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);

    TRACE("iface %p, iid %s, device %p.\n", iface, debugstr_guid(iid), device);

    return d3d12_device_query_interface(resource->device, iid, device);
}

static HRESULT STDMETHODCALLTYPE d3d12_resource_Map(ID3D12Resource *iface, UINT sub_resource,
        const D3D12_RANGE *read_range, void **data)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);
    unsigned int sub_resource_count;
    HRESULT hr;

    TRACE("iface %p, sub_resource %u, read_range %p, data %p.\n",
            iface, sub_resource, read_range, data);

    if (!d3d12_resource_is_cpu_accessible(resource))
    {
        WARN("Resource is not CPU accessible.\n");
        return E_INVALIDARG;
    }

    sub_resource_count = d3d12_resource_desc_get_sub_resource_count(&resource->desc);
    if (sub_resource >= sub_resource_count)
    {
        WARN("Sub-resource index %u is out of range (%u sub-resources).\n", sub_resource, sub_resource_count);
        return E_INVALIDARG;
    }

    if (d3d12_resource_is_texture(resource))
    {
        /* Textures seem to be mappable only on UMA adapters. */
        FIXME("Not implemented for textures.\n");
        return E_INVALIDARG;
    }

    if (!resource->heap)
    {
        FIXME("Not implemented for this resource type.\n");
        return E_NOTIMPL;
    }

    WARN("Ignoring read range %p.\n", read_range);

    if (FAILED(hr = d3d12_heap_map(resource->heap, resource->heap_offset, resource, data)))
        WARN("Failed to map resource %p, hr %#x.\n", resource, hr);

    TRACE("Returning pointer %p.\n", *data);

    return hr;
}

static void STDMETHODCALLTYPE d3d12_resource_Unmap(ID3D12Resource *iface, UINT sub_resource,
        const D3D12_RANGE *written_range)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);
    unsigned int sub_resource_count;

    TRACE("iface %p, sub_resource %u, written_range %p.\n",
            iface, sub_resource, written_range);

    sub_resource_count = d3d12_resource_desc_get_sub_resource_count(&resource->desc);
    if (sub_resource >= sub_resource_count)
    {
        WARN("Sub-resource index %u is out of range (%u sub-resources).\n", sub_resource, sub_resource_count);
        return;
    }

    WARN("Ignoring written range %p.\n", written_range);

    d3d12_heap_unmap(resource->heap, resource);
}

static D3D12_RESOURCE_DESC * STDMETHODCALLTYPE d3d12_resource_GetDesc(ID3D12Resource *iface,
        D3D12_RESOURCE_DESC *resource_desc)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);

    TRACE("iface %p, resource_desc %p.\n", iface, resource_desc);

    *resource_desc = resource->desc;
    return resource_desc;
}

static D3D12_GPU_VIRTUAL_ADDRESS STDMETHODCALLTYPE d3d12_resource_GetGPUVirtualAddress(ID3D12Resource *iface)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);

    TRACE("iface %p.\n", iface);

    return resource->gpu_address;
}

static HRESULT STDMETHODCALLTYPE d3d12_resource_WriteToSubresource(ID3D12Resource *iface,
        UINT dst_sub_resource, const D3D12_BOX *dst_box, const void *src_data,
        UINT src_row_pitch, UINT src_slice_pitch)
{
    FIXME("iface %p, dst_sub_resource %u, dst_box %p, src_data %p, "
            "src_row_pitch %u, src_slice_pitch %u stub!\n",
            iface, dst_sub_resource, dst_box,
            src_data, src_row_pitch, src_slice_pitch);

    return E_NOTIMPL;
}

static HRESULT STDMETHODCALLTYPE d3d12_resource_ReadFromSubresource(ID3D12Resource *iface,
        void *dst_data, UINT dst_row_pitch, UINT dst_slice_pitch,
        UINT src_sub_resource, const D3D12_BOX *src_box)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);
    const struct vkd3d_vk_device_procs *vk_procs;
    VkImageSubresource vk_sub_resource;
    const struct vkd3d_format *format;
    VkSubresourceLayout vk_layout;
    struct d3d12_device *device;
    BYTE *src_data, *src, *dst;
    unsigned int y, z;
    D3D12_BOX box;
    size_t size;
    HRESULT hr;

    TRACE("iface %p, dst_data %p, dst_row_pitch %u, dst_slice_pitch %u, "
            "src_sub_resource %u, src_box %s.\n",
            iface, dst_data, dst_row_pitch, dst_slice_pitch, src_sub_resource, debug_d3d12_box(src_box));

    if (d3d12_resource_is_buffer(resource))
    {
        WARN("Buffers are not supported.\n");
        return E_INVALIDARG;
    }

    device = resource->device;
    vk_procs = &device->vk_procs;

    if (!(format = vkd3d_format_from_d3d12_resource_desc(device, &resource->desc, 0)))
    {
        ERR("Invalid DXGI format %#x.\n", resource->desc.Format);
        return E_INVALIDARG;
    }
    if (format->vk_aspect_mask != VK_IMAGE_ASPECT_COLOR_BIT)
    {
        FIXME("Not supported for format %#x.\n", format->dxgi_format);
        return E_NOTIMPL;
    }

    vk_sub_resource.arrayLayer = src_sub_resource / resource->desc.MipLevels;
    vk_sub_resource.mipLevel = src_sub_resource % resource->desc.MipLevels;
    vk_sub_resource.aspectMask = format->vk_aspect_mask;

    if (src_box)
    {
        if (!d3d12_resource_validate_box(resource, src_sub_resource, src_box))
        {
            WARN("Invalid box %s.\n", debug_d3d12_box(src_box));
            return E_INVALIDARG;
        }

        box = *src_box;
    }
    else
    {
        box.left = 0;
        box.top = 0;
        box.front = 0;
        box.right = d3d12_resource_desc_get_width(&resource->desc, vk_sub_resource.mipLevel);
        box.bottom = d3d12_resource_desc_get_height(&resource->desc, vk_sub_resource.mipLevel);
        box.back = d3d12_resource_desc_get_depth(&resource->desc, vk_sub_resource.mipLevel);
    }
    if (box.right <= box.left || box.bottom <= box.top || box.back <= box.front)
    {
        WARN("Empty box %s.\n", debug_d3d12_box(src_box));
        return S_OK;
    }

    if (!d3d12_resource_is_cpu_accessible(resource))
    {
        FIXME_ONCE("Not implemented for this resource type.\n");
        return E_NOTIMPL;
    }
    if (!(resource->flags & VKD3D_RESOURCE_LINEAR_TILING))
    {
        FIXME_ONCE("Not implemented for image tiling other than VK_IMAGE_TILING_LINEAR.\n");
        return E_NOTIMPL;
    }

    VK_CALL(vkGetImageSubresourceLayout(device->vk_device, resource->u.vk_image, &vk_sub_resource, &vk_layout));
    TRACE("Offset %#"PRIx64", size %#"PRIx64", row pitch %#"PRIx64", depth pitch %#"PRIx64".\n",
            vk_layout.offset, vk_layout.size, vk_layout.rowPitch, vk_layout.depthPitch);

    if (FAILED(hr = d3d12_heap_map(resource->heap, resource->heap_offset, resource, (void **)&src_data)))
    {
        WARN("Failed to map resource %p, hr %#x.\n", resource, hr);
        return hr;
    }

    src_data += vk_layout.offset;
    src_data += box.left / format->block_width * format->byte_count * format->block_byte_count;
    size = (box.right - box.left) / format->block_width * format->byte_count * format->block_byte_count;
    for (z = box.front; z < box.back; ++z)
    {
        dst = dst_data + (z - box.front) * dst_slice_pitch;
        src = src_data + z * vk_layout.depthPitch + box.top / format->block_height * vk_layout.rowPitch;
        for (y = box.top; y < box.bottom; y += format->block_height)
        {
            memcpy(dst, src, size);
            dst += dst_row_pitch;
            src += vk_layout.rowPitch;
        }
    }

    d3d12_heap_unmap(resource->heap, resource);

    return S_OK;
}

static HRESULT STDMETHODCALLTYPE d3d12_resource_GetHeapProperties(ID3D12Resource *iface,
        D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS *flags)
{
    struct d3d12_resource *resource = impl_from_ID3D12Resource(iface);
    struct d3d12_heap *heap;

    TRACE("iface %p, heap_properties %p, flags %p.\n",
            iface, heap_properties, flags);

    if (resource->flags & VKD3D_RESOURCE_EXTERNAL)
    {
        if (heap_properties)
        {
            memset(heap_properties, 0, sizeof(*heap_properties));
            heap_properties->Type = D3D12_HEAP_TYPE_DEFAULT;
        }
        if (flags)
            *flags = D3D12_HEAP_FLAG_NONE;
        return S_OK;
    }

    if (!(heap = resource->heap))
    {
        WARN("Cannot get heap properties for reserved resources.\n");
        return E_INVALIDARG;
    }

    if (heap_properties)
        *heap_properties = heap->desc.Properties;
    if (flags)
        *flags = heap->desc.Flags;

    return S_OK;
}

static const struct ID3D12ResourceVtbl d3d12_resource_vtbl =
{
    /* IUnknown methods */
    d3d12_resource_QueryInterface,
    d3d12_resource_AddRef,
    d3d12_resource_Release,
    /* ID3D12Object methods */
    d3d12_resource_GetPrivateData,
    d3d12_resource_SetPrivateData,
    d3d12_resource_SetPrivateDataInterface,
    d3d12_resource_SetName,
    /* ID3D12DeviceChild methods */
    d3d12_resource_GetDevice,
    /* ID3D12Resource methods */
    d3d12_resource_Map,
    d3d12_resource_Unmap,
    d3d12_resource_GetDesc,
    d3d12_resource_GetGPUVirtualAddress,
    d3d12_resource_WriteToSubresource,
    d3d12_resource_ReadFromSubresource,
    d3d12_resource_GetHeapProperties,
};

struct d3d12_resource *unsafe_impl_from_ID3D12Resource(ID3D12Resource *iface)
{
    if (!iface)
        return NULL;
    assert(iface->lpVtbl == &d3d12_resource_vtbl);
    return impl_from_ID3D12Resource(iface);
}

static void d3d12_validate_resource_flags(D3D12_RESOURCE_FLAGS flags)
{
    unsigned int unknown_flags = flags & ~(D3D12_RESOURCE_FLAG_NONE
            | D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET
            | D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL
            | D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS
            | D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE
            | D3D12_RESOURCE_FLAG_ALLOW_CROSS_ADAPTER
            | D3D12_RESOURCE_FLAG_ALLOW_SIMULTANEOUS_ACCESS);

    if (unknown_flags)
        FIXME("Unknown resource flags %#x.\n", unknown_flags);
    if (flags & D3D12_RESOURCE_FLAG_ALLOW_CROSS_ADAPTER)
        FIXME("Ignoring D3D12_RESOURCE_FLAG_ALLOW_CROSS_ADAPTER.\n");
}

HRESULT d3d12_resource_validate_desc(const D3D12_RESOURCE_DESC *desc)
{
    switch (desc->Dimension)
    {
        case D3D12_RESOURCE_DIMENSION_BUFFER:
            if (desc->MipLevels != 1)
            {
                WARN("Invalid miplevel count %u for buffer.\n", desc->MipLevels);
                return E_INVALIDARG;
            }

            if (desc->Format != DXGI_FORMAT_UNKNOWN || desc->Layout != D3D12_TEXTURE_LAYOUT_ROW_MAJOR
                    || desc->Height != 1 || desc->DepthOrArraySize != 1
                    || desc->SampleDesc.Count != 1 || desc->SampleDesc.Quality != 0
                    || (desc->Alignment != 0 && desc->Alignment != D3D12_DEFAULT_RESOURCE_PLACEMENT_ALIGNMENT))
            {
                WARN("Invalid parameters for a buffer resource.\n");
                return E_INVALIDARG;
            }
            break;

        case D3D12_RESOURCE_DIMENSION_TEXTURE1D:
            if (desc->Height != 1)
            {
                WARN("1D texture with a height of %u.\n", desc->Height);
                return E_INVALIDARG;
            }
            break;

        case D3D12_RESOURCE_DIMENSION_TEXTURE2D:
        case D3D12_RESOURCE_DIMENSION_TEXTURE3D:
            break;

        default:
            WARN("Invalid resource dimension %#x.\n", desc->Dimension);
            return E_INVALIDARG;
    }

    d3d12_validate_resource_flags(desc->Flags);

    /* FIXME: Validate alignment for textures. */

    return S_OK;
}

static bool d3d12_resource_validate_heap_properties(const struct d3d12_resource *resource,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_RESOURCE_STATES initial_state)
{
    if (heap_properties->Type == D3D12_HEAP_TYPE_UPLOAD
            || heap_properties->Type == D3D12_HEAP_TYPE_READBACK)
    {
        if (d3d12_resource_is_texture(resource))
        {
            WARN("Textures cannot be created on upload/readback heaps.\n");
            return false;
        }

        if (resource->desc.Flags & (D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET | D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS))
        {
            WARN("Render target and unordered access buffers cannot be created on upload/readback heaps.\n");
            return false;
        }
    }

    if (heap_properties->Type == D3D12_HEAP_TYPE_UPLOAD && initial_state != D3D12_RESOURCE_STATE_GENERIC_READ)
    {
        WARN("For D3D12_HEAP_TYPE_UPLOAD the state must be D3D12_RESOURCE_STATE_GENERIC_READ.\n");
        return false;
    }
    if (heap_properties->Type == D3D12_HEAP_TYPE_READBACK && initial_state != D3D12_RESOURCE_STATE_COPY_DEST)
    {
        WARN("For D3D12_HEAP_TYPE_READBACK the state must be D3D12_RESOURCE_STATE_COPY_DEST.\n");
        return false;
    }

    return true;
}

static HRESULT d3d12_resource_init(struct d3d12_resource *resource, struct d3d12_device *device,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS heap_flags,
        const D3D12_RESOURCE_DESC *desc, D3D12_RESOURCE_STATES initial_state,
        const D3D12_CLEAR_VALUE *optimized_clear_value)
{
    HRESULT hr;

    resource->ID3D12Resource_iface.lpVtbl = &d3d12_resource_vtbl;
    resource->refcount = 1;
    resource->internal_refcount = 1;

    resource->desc = *desc;

    if (heap_properties && !d3d12_resource_validate_heap_properties(resource, heap_properties, initial_state))
        return E_INVALIDARG;

    if (!is_valid_resource_state(initial_state))
    {
        WARN("Invalid initial resource state %#x.\n", initial_state);
        return E_INVALIDARG;
    }

    if (optimized_clear_value && d3d12_resource_is_buffer(resource))
    {
        WARN("Optimized clear value must be NULL for buffers.\n");
        return E_INVALIDARG;
    }

    if (optimized_clear_value)
        WARN("Ignoring optimized clear value.\n");

    resource->gpu_address = 0;
    resource->flags = 0;

    if (FAILED(hr = d3d12_resource_validate_desc(&resource->desc)))
        return hr;

    switch (desc->Dimension)
    {
        case D3D12_RESOURCE_DIMENSION_BUFFER:
            if (FAILED(hr = vkd3d_create_buffer(device, heap_properties, heap_flags,
                    &resource->desc, &resource->u.vk_buffer)))
                return hr;
            if (!(resource->gpu_address = vkd3d_gpu_va_allocator_allocate(&device->gpu_va_allocator,
                    desc->Width, resource)))
            {
                ERR("Failed to allocate GPU VA.\n");
                d3d12_resource_destroy(resource, device);
                return E_OUTOFMEMORY;
            }
            break;

        case D3D12_RESOURCE_DIMENSION_TEXTURE1D:
        case D3D12_RESOURCE_DIMENSION_TEXTURE2D:
        case D3D12_RESOURCE_DIMENSION_TEXTURE3D:
            if (!resource->desc.MipLevels)
                resource->desc.MipLevels = max_miplevel_count(desc);
            resource->flags |= VKD3D_RESOURCE_INITIAL_STATE_TRANSITION;
            if (FAILED(hr = vkd3d_create_image(device, heap_properties, heap_flags,
                    &resource->desc, resource, &resource->u.vk_image)))
                return hr;
            break;

        default:
            WARN("Invalid resource dimension %#x.\n", resource->desc.Dimension);
            return E_INVALIDARG;
    }

    resource->map_count = 0;

    resource->initial_state = initial_state;

    resource->heap = NULL;
    resource->heap_offset = 0;

    if (FAILED(hr = vkd3d_private_store_init(&resource->private_store)))
    {
        d3d12_resource_destroy(resource, device);
        return hr;
    }

    d3d12_device_add_ref(resource->device = device);

    return S_OK;
}

static HRESULT d3d12_resource_create(struct d3d12_device *device,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS heap_flags,
        const D3D12_RESOURCE_DESC *desc, D3D12_RESOURCE_STATES initial_state,
        const D3D12_CLEAR_VALUE *optimized_clear_value, struct d3d12_resource **resource)
{
    struct d3d12_resource *object;
    HRESULT hr;

    if (!(object = vkd3d_malloc(sizeof(*object))))
        return E_OUTOFMEMORY;

    if (FAILED(hr = d3d12_resource_init(object, device, heap_properties, heap_flags,
            desc, initial_state, optimized_clear_value)))
    {
        vkd3d_free(object);
        return hr;
    }

    *resource = object;

    return hr;
}

static HRESULT vkd3d_allocate_resource_memory(
        struct d3d12_device *device, struct d3d12_resource *resource,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS heap_flags)
{
    D3D12_HEAP_DESC heap_desc;
    HRESULT hr;

    heap_desc.SizeInBytes = 0;
    heap_desc.Properties = *heap_properties;
    heap_desc.Alignment = 0;
    heap_desc.Flags = heap_flags;
    if (SUCCEEDED(hr = d3d12_heap_create(device, &heap_desc, resource, &resource->heap)))
        resource->flags |= VKD3D_RESOURCE_DEDICATED_HEAP;
    return hr;
}

HRESULT d3d12_committed_resource_create(struct d3d12_device *device,
        const D3D12_HEAP_PROPERTIES *heap_properties, D3D12_HEAP_FLAGS heap_flags,
        const D3D12_RESOURCE_DESC *desc, D3D12_RESOURCE_STATES initial_state,
        const D3D12_CLEAR_VALUE *optimized_clear_value, struct d3d12_resource **resource)
{
    struct d3d12_resource *object;
    HRESULT hr;

    if (!heap_properties)
    {
        WARN("Heap properties are NULL.\n");
        return E_INVALIDARG;
    }

    if (FAILED(hr = d3d12_resource_create(device, heap_properties, heap_flags,
            desc, initial_state, optimized_clear_value, &object)))
        return hr;

    if (FAILED(hr = vkd3d_allocate_resource_memory(device, object, heap_properties, heap_flags)))
    {
        d3d12_resource_Release(&object->ID3D12Resource_iface);
        return hr;
    }

    TRACE("Created committed resource %p.\n", object);

    *resource = object;

    return S_OK;
}

static HRESULT vkd3d_bind_heap_memory(struct d3d12_device *device,
        struct d3d12_resource *resource, struct d3d12_heap *heap, uint64_t heap_offset)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    VkDevice vk_device = device->vk_device;
    VkMemoryRequirements requirements;
    VkResult vr;

    if (d3d12_resource_is_buffer(resource))
        VK_CALL(vkGetBufferMemoryRequirements(vk_device, resource->u.vk_buffer, &requirements));
    else
        VK_CALL(vkGetImageMemoryRequirements(vk_device, resource->u.vk_image, &requirements));

    if (heap_offset % requirements.alignment)
    {
        FIXME("Invalid heap offset %#"PRIx64" (alignment %#"PRIx64").\n",
                heap_offset, requirements.alignment);
        goto allocate_memory;
    }

    if (!(requirements.memoryTypeBits & (1u << heap->vk_memory_type)))
    {
        FIXME("Memory type %u cannot be bound to resource %p (allowed types %#x).\n",
                heap->vk_memory_type, resource, requirements.memoryTypeBits);
        goto allocate_memory;
    }

    if (d3d12_resource_is_buffer(resource))
        vr = VK_CALL(vkBindBufferMemory(vk_device, resource->u.vk_buffer, heap->vk_memory, heap_offset));
    else
        vr = VK_CALL(vkBindImageMemory(vk_device, resource->u.vk_image, heap->vk_memory, heap_offset));

    if (vr == VK_SUCCESS)
    {
        resource->heap = heap;
        resource->heap_offset = heap_offset;
    }
    else
    {
        WARN("Failed to bind memory, vr %d.\n", vr);
    }

    return hresult_from_vk_result(vr);

allocate_memory:
    FIXME("Allocating device memory.\n");
    return vkd3d_allocate_resource_memory(device, resource, &heap->desc.Properties, heap->desc.Flags);
}

HRESULT d3d12_placed_resource_create(struct d3d12_device *device, struct d3d12_heap *heap, uint64_t heap_offset,
        const D3D12_RESOURCE_DESC *desc, D3D12_RESOURCE_STATES initial_state,
        const D3D12_CLEAR_VALUE *optimized_clear_value, struct d3d12_resource **resource)
{
    struct d3d12_resource *object;
    HRESULT hr;

    if (FAILED(hr = d3d12_resource_create(device, &heap->desc.Properties, heap->desc.Flags,
            desc, initial_state, optimized_clear_value, &object)))
        return hr;

    if (FAILED(hr = vkd3d_bind_heap_memory(device, object, heap, heap_offset)))
    {
        d3d12_resource_Release(&object->ID3D12Resource_iface);
        return hr;
    }

    TRACE("Created placed resource %p.\n", object);

    *resource = object;

    return S_OK;
}

HRESULT d3d12_reserved_resource_create(struct d3d12_device *device,
        const D3D12_RESOURCE_DESC *desc, D3D12_RESOURCE_STATES initial_state,
        const D3D12_CLEAR_VALUE *optimized_clear_value, struct d3d12_resource **resource)
{
    struct d3d12_resource *object;
    HRESULT hr;

    if (FAILED(hr = d3d12_resource_create(device, NULL, 0,
            desc, initial_state, optimized_clear_value, &object)))
        return hr;

    TRACE("Created reserved resource %p.\n", object);

    *resource = object;

    return S_OK;
}

HRESULT vkd3d_create_image_resource(ID3D12Device *device,
        const struct vkd3d_image_resource_create_info *create_info, ID3D12Resource **resource)
{
    struct d3d12_device *d3d12_device = unsafe_impl_from_ID3D12Device(device);
    struct d3d12_resource *object;
    HRESULT hr;

    TRACE("device %p, create_info %p, resource %p.\n", device, create_info, resource);

    if (!create_info || !resource)
        return E_INVALIDARG;
    if (create_info->type != VKD3D_STRUCTURE_TYPE_IMAGE_RESOURCE_CREATE_INFO)
    {
        WARN("Invalid structure type %#x.\n", create_info->type);
        return E_INVALIDARG;
    }
    if (create_info->next)
        WARN("Unhandled next %p.\n", create_info->next);

    if (!(object = vkd3d_malloc(sizeof(*object))))
        return E_OUTOFMEMORY;

    memset(object, 0, sizeof(*object));

    object->ID3D12Resource_iface.lpVtbl = &d3d12_resource_vtbl;
    object->refcount = 1;
    object->internal_refcount = 1;
    object->desc = create_info->desc;
    object->u.vk_image = create_info->vk_image;
    object->flags = VKD3D_RESOURCE_EXTERNAL;
    object->flags |= create_info->flags & VKD3D_RESOURCE_PUBLIC_FLAGS;
    object->initial_state = D3D12_RESOURCE_STATE_COMMON;
    if (create_info->flags & VKD3D_RESOURCE_PRESENT_STATE_TRANSITION)
        object->present_state = create_info->present_state;
    else
        object->present_state = D3D12_RESOURCE_STATE_COMMON;

    if (FAILED(hr = vkd3d_private_store_init(&object->private_store)))
    {
        vkd3d_free(object);
        return hr;
    }

    d3d12_device_add_ref(object->device = d3d12_device);

    TRACE("Created resource %p.\n", object);

    *resource = &object->ID3D12Resource_iface;

    return S_OK;
}

ULONG vkd3d_resource_incref(ID3D12Resource *resource)
{
    TRACE("resource %p.\n", resource);
    return d3d12_resource_incref(impl_from_ID3D12Resource(resource));
}

ULONG vkd3d_resource_decref(ID3D12Resource *resource)
{
    TRACE("resource %p.\n", resource);
    return d3d12_resource_decref(impl_from_ID3D12Resource(resource));
}

/* CBVs, SRVs, UAVs */
static struct vkd3d_view *vkd3d_view_create(void)
{
    struct vkd3d_view *view;

    if ((view = vkd3d_malloc(sizeof(*view))))
    {
        view->refcount = 1;
        view->vk_counter_view = VK_NULL_HANDLE;
    }
    return view;
}

void vkd3d_view_incref(struct vkd3d_view *view)
{
    InterlockedIncrement(&view->refcount);
}

static void vkd3d_view_decref_descriptor(struct vkd3d_view *view,
        const struct d3d12_desc *descriptor, struct d3d12_device *device)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    ULONG refcount = InterlockedDecrement(&view->refcount);

    if (refcount)
        return;

    TRACE("Destroying view %p.\n", view);

    if (!descriptor)
    {
        VK_CALL(vkDestroyImageView(device->vk_device, view->u.vk_image_view, NULL));
    }
    else if (descriptor->magic == VKD3D_DESCRIPTOR_MAGIC_SRV || descriptor->magic == VKD3D_DESCRIPTOR_MAGIC_UAV)
    {
        if (descriptor->vk_descriptor_type == VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER
                || descriptor->vk_descriptor_type == VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER)
            VK_CALL(vkDestroyBufferView(device->vk_device, view->u.vk_buffer_view, NULL));
        else
            VK_CALL(vkDestroyImageView(device->vk_device, view->u.vk_image_view, NULL));

        if (view->vk_counter_view)
            VK_CALL(vkDestroyBufferView(device->vk_device, view->vk_counter_view, NULL));
    }
    else if (descriptor->magic == VKD3D_DESCRIPTOR_MAGIC_SAMPLER)
    {
        VK_CALL(vkDestroySampler(device->vk_device, view->u.vk_sampler, NULL));
    }

    vkd3d_free(view);
}

void vkd3d_view_decref(struct vkd3d_view *view, struct d3d12_device *device)
{
    vkd3d_view_decref_descriptor(view, NULL, device);
}

static void d3d12_desc_destroy(struct d3d12_desc *descriptor,
        struct d3d12_device *device)
{
    /* Nothing to do for VKD3D_DESCRIPTOR_MAGIC_CBV. */
    if (descriptor->magic == VKD3D_DESCRIPTOR_MAGIC_SRV
            || descriptor->magic == VKD3D_DESCRIPTOR_MAGIC_UAV
            || descriptor->magic == VKD3D_DESCRIPTOR_MAGIC_SAMPLER)
    {
        vkd3d_view_decref_descriptor(descriptor->u.view, descriptor, device);
    }

    memset(descriptor, 0, sizeof(*descriptor));
}

void d3d12_desc_copy(struct d3d12_desc *dst, const struct d3d12_desc *src,
        struct d3d12_device *device)
{
    assert(dst != src);

    d3d12_desc_destroy(dst, device);

    *dst = *src;

    if (src->magic == VKD3D_DESCRIPTOR_MAGIC_SRV
            || src->magic == VKD3D_DESCRIPTOR_MAGIC_UAV
            || src->magic == VKD3D_DESCRIPTOR_MAGIC_SAMPLER)
    {
        vkd3d_view_incref(src->u.view);
    }
}

static VkDeviceSize vkd3d_get_required_texel_buffer_alignment(const struct d3d12_device *device,
        const struct vkd3d_format *format)
{
    const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT *properties;
    const struct vkd3d_vulkan_info *vk_info = &device->vk_info;
    VkDeviceSize alignment;

    if (vk_info->EXT_texel_buffer_alignment)
    {
        properties = &vk_info->texel_buffer_alignment_properties;

        alignment = max(properties->storageTexelBufferOffsetAlignmentBytes,
                properties->uniformTexelBufferOffsetAlignmentBytes);

        if (properties->storageTexelBufferOffsetSingleTexelAlignment
                && properties->uniformTexelBufferOffsetSingleTexelAlignment)
        {
            assert(!vkd3d_format_is_compressed(format));
            return min(format->byte_count, alignment);
        }

        return alignment;
    }

    return vk_info->device_limits.minTexelBufferOffsetAlignment;
}

static bool vkd3d_create_vk_buffer_view(struct d3d12_device *device,
        VkBuffer vk_buffer, const struct vkd3d_format *format,
        VkDeviceSize offset, VkDeviceSize range, VkBufferView *vk_view)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    struct VkBufferViewCreateInfo view_desc;
    VkDeviceSize alignment;
    VkResult vr;

    if (vkd3d_format_is_compressed(format))
    {
        WARN("Invalid format for buffer view %#x.\n", format->dxgi_format);
        return false;
    }

    alignment = vkd3d_get_required_texel_buffer_alignment(device, format);
    if (offset % alignment)
        FIXME("Offset %#"PRIx64" violates the required alignment %#"PRIx64".\n", offset, alignment);

    view_desc.sType = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
    view_desc.pNext = NULL;
    view_desc.flags = 0;
    view_desc.buffer = vk_buffer;
    view_desc.format = format->vk_format;
    view_desc.offset = offset;
    view_desc.range = range;
    if ((vr = VK_CALL(vkCreateBufferView(device->vk_device, &view_desc, NULL, vk_view))) < 0)
        WARN("Failed to create Vulkan buffer view, vr %d.\n", vr);
    return vr == VK_SUCCESS;
}

static bool vkd3d_create_buffer_view(struct d3d12_device *device,
        VkBuffer vk_buffer, const struct vkd3d_format *format,
        VkDeviceSize offset, VkDeviceSize size, struct vkd3d_view **view)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    struct vkd3d_view *object;
    VkBufferView vk_view;

    if (!vkd3d_create_vk_buffer_view(device, vk_buffer, format, offset, size, &vk_view))
        return false;

    if (!(object = vkd3d_view_create()))
    {
        VK_CALL(vkDestroyBufferView(device->vk_device, vk_view, NULL));
        return false;
    }

    object->u.vk_buffer_view = vk_view;
    *view = object;
    return true;
}

#define VKD3D_VIEW_RAW_BUFFER 0x1

static bool vkd3d_create_buffer_view_for_resource(struct d3d12_device *device,
        struct d3d12_resource *resource, DXGI_FORMAT view_format,
        unsigned int offset, unsigned int size, unsigned int structure_stride,
        unsigned int flags, struct vkd3d_view **view)
{
    const struct vkd3d_format *format;
    VkDeviceSize element_size;

    if (view_format == DXGI_FORMAT_R32_TYPELESS && (flags & VKD3D_VIEW_RAW_BUFFER))
    {
        format = vkd3d_get_format(device, DXGI_FORMAT_R32_UINT, false);
        element_size = format->byte_count;
    }
    else if (view_format == DXGI_FORMAT_UNKNOWN && structure_stride)
    {
        format = vkd3d_get_format(device, DXGI_FORMAT_R32_UINT, false);
        element_size = structure_stride;
    }
    else if ((format = vkd3d_format_from_d3d12_resource_desc(device, &resource->desc, view_format)))
    {
        element_size = format->byte_count;
    }
    else
    {
        WARN("Failed to find format for %#x.\n", resource->desc.Format);
        return false;
    }

    assert(d3d12_resource_is_buffer(resource));

    return vkd3d_create_buffer_view(device, resource->u.vk_buffer,
            format, offset * element_size, size * element_size, view);
}

static void vkd3d_set_view_swizzle_for_format(VkComponentMapping *components,
        const struct vkd3d_format *format, bool allowed_swizzle)
{
    components->r = VK_COMPONENT_SWIZZLE_R;
    components->g = VK_COMPONENT_SWIZZLE_G;
    components->b = VK_COMPONENT_SWIZZLE_B;
    components->a = VK_COMPONENT_SWIZZLE_A;

    if (format->vk_aspect_mask == VK_IMAGE_ASPECT_STENCIL_BIT)
    {
        if (allowed_swizzle)
        {
            components->r = VK_COMPONENT_SWIZZLE_ZERO;
            components->g = VK_COMPONENT_SWIZZLE_R;
            components->b = VK_COMPONENT_SWIZZLE_ZERO;
            components->a = VK_COMPONENT_SWIZZLE_ZERO;
        }
        else
        {
            FIXME("Stencil swizzle is not supported for format %#x.\n",
                    format->dxgi_format);
        }
    }

    if (format->dxgi_format == DXGI_FORMAT_A8_UNORM)
    {
        if (allowed_swizzle)
        {
            components->r = VK_COMPONENT_SWIZZLE_ZERO;
            components->g = VK_COMPONENT_SWIZZLE_ZERO;
            components->b = VK_COMPONENT_SWIZZLE_ZERO;
            components->a = VK_COMPONENT_SWIZZLE_R;
        }
        else
        {
            FIXME("Alpha swizzle is not supported.\n");
        }
    }

    if (format->dxgi_format == DXGI_FORMAT_B8G8R8X8_UNORM
            || format->dxgi_format == DXGI_FORMAT_B8G8R8X8_UNORM_SRGB)
    {
        if (allowed_swizzle)
        {
            components->r = VK_COMPONENT_SWIZZLE_R;
            components->g = VK_COMPONENT_SWIZZLE_G;
            components->b = VK_COMPONENT_SWIZZLE_B;
            components->a = VK_COMPONENT_SWIZZLE_ONE;
        }
        else
        {
            FIXME("B8G8R8X8 swizzle is not supported.\n");
        }
    }
}

static VkComponentSwizzle vk_component_swizzle_from_d3d12(unsigned int component_mapping,
        unsigned int component_index)
{
    D3D12_SHADER_COMPONENT_MAPPING mapping
            = D3D12_DECODE_SHADER_4_COMPONENT_MAPPING(component_index, component_mapping);

    switch (mapping)
    {
        case D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_0:
            return VK_COMPONENT_SWIZZLE_R;
        case D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_1:
            return VK_COMPONENT_SWIZZLE_G;
        case D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_2:
            return VK_COMPONENT_SWIZZLE_B;
        case D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_3:
            return VK_COMPONENT_SWIZZLE_A;
        case D3D12_SHADER_COMPONENT_MAPPING_FORCE_VALUE_0:
            return VK_COMPONENT_SWIZZLE_ZERO;
        case D3D12_SHADER_COMPONENT_MAPPING_FORCE_VALUE_1:
            return VK_COMPONENT_SWIZZLE_ONE;
    }

    FIXME("Invalid component mapping %#x.\n", mapping);
    return VK_COMPONENT_SWIZZLE_IDENTITY;
}

static void vk_component_mapping_from_d3d12(VkComponentMapping *components,
        unsigned int component_mapping)
{
    components->r = vk_component_swizzle_from_d3d12(component_mapping, 0);
    components->g = vk_component_swizzle_from_d3d12(component_mapping, 1);
    components->b = vk_component_swizzle_from_d3d12(component_mapping, 2);
    components->a = vk_component_swizzle_from_d3d12(component_mapping, 3);
}

static VkComponentSwizzle swizzle_vk_component(const VkComponentMapping *components,
        VkComponentSwizzle component, VkComponentSwizzle swizzle)
{
    switch (swizzle)
    {
        case VK_COMPONENT_SWIZZLE_IDENTITY:
            break;

        case VK_COMPONENT_SWIZZLE_R:
            component = components->r;
            break;

        case VK_COMPONENT_SWIZZLE_G:
            component = components->g;
            break;

        case VK_COMPONENT_SWIZZLE_B:
            component = components->b;
            break;

        case VK_COMPONENT_SWIZZLE_A:
            component = components->a;
            break;

        case VK_COMPONENT_SWIZZLE_ONE:
        case VK_COMPONENT_SWIZZLE_ZERO:
            component = swizzle;
            break;

        default:
            FIXME("Invalid component swizzle %#x.\n", swizzle);
            break;
    }

    assert(component != VK_COMPONENT_SWIZZLE_IDENTITY);
    return component;
}

static void vk_component_mapping_compose(VkComponentMapping *dst, const VkComponentMapping *b)
{
    const VkComponentMapping a = *dst;

    dst->r = swizzle_vk_component(&a, a.r, b->r);
    dst->g = swizzle_vk_component(&a, a.g, b->g);
    dst->b = swizzle_vk_component(&a, a.b, b->b);
    dst->a = swizzle_vk_component(&a, a.a, b->a);
}

struct vkd3d_texture_view_desc
{
    VkImageViewType view_type;
    const struct vkd3d_format *format;
    unsigned int miplevel_idx;
    unsigned int miplevel_count;
    unsigned int layer_idx;
    unsigned int layer_count;
    VkComponentMapping components;
    bool allowed_swizzle;
};

static bool init_default_texture_view_desc(struct vkd3d_texture_view_desc *desc,
        struct d3d12_resource *resource, DXGI_FORMAT view_format)
{
    const struct d3d12_device *device = resource->device;

    if (!(desc->format = vkd3d_format_from_d3d12_resource_desc(device, &resource->desc, view_format)))
    {
        FIXME("Failed to find format (resource format %#x, view format %#x).\n",
                resource->desc.Format, view_format);
        return false;
    }

    desc->miplevel_idx = 0;
    desc->miplevel_count = 1;
    desc->layer_idx = 0;
    desc->layer_count = d3d12_resource_desc_get_layer_count(&resource->desc);

    switch (resource->desc.Dimension)
    {
        case D3D12_RESOURCE_DIMENSION_TEXTURE1D:
            desc->view_type = resource->desc.DepthOrArraySize > 1
                    ? VK_IMAGE_VIEW_TYPE_1D_ARRAY : VK_IMAGE_VIEW_TYPE_1D;
            break;

        case D3D12_RESOURCE_DIMENSION_TEXTURE2D:
            desc->view_type = resource->desc.DepthOrArraySize > 1
                    ? VK_IMAGE_VIEW_TYPE_2D_ARRAY : VK_IMAGE_VIEW_TYPE_2D;
            break;

        case D3D12_RESOURCE_DIMENSION_TEXTURE3D:
            desc->view_type = VK_IMAGE_VIEW_TYPE_3D;
            desc->layer_count = 1;
            break;

        default:
            FIXME("Resource dimension %#x not implemented.\n", resource->desc.Dimension);
            return false;
    }

    desc->components.r = VK_COMPONENT_SWIZZLE_IDENTITY;
    desc->components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
    desc->components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
    desc->components.a = VK_COMPONENT_SWIZZLE_IDENTITY;
    desc->allowed_swizzle = false;
    return true;
}

static bool vkd3d_create_texture_view(struct d3d12_device *device,
        VkImage vk_image, const struct vkd3d_texture_view_desc *desc,
        struct vkd3d_view **view)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    const struct vkd3d_format *format = desc->format;
    struct VkImageViewCreateInfo view_desc;
    struct vkd3d_view *object;
    VkImageView vk_view;
    VkResult vr;

    view_desc.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    view_desc.pNext = NULL;
    view_desc.flags = 0;
    view_desc.image = vk_image;
    view_desc.viewType = desc->view_type;
    view_desc.format = format->vk_format;
    vkd3d_set_view_swizzle_for_format(&view_desc.components, format, desc->allowed_swizzle);
    if (desc->allowed_swizzle)
        vk_component_mapping_compose(&view_desc.components, &desc->components);
    view_desc.subresourceRange.aspectMask = format->vk_aspect_mask;
    view_desc.subresourceRange.baseMipLevel = desc->miplevel_idx;
    view_desc.subresourceRange.levelCount = desc->miplevel_count;
    view_desc.subresourceRange.baseArrayLayer = desc->layer_idx;
    view_desc.subresourceRange.layerCount = desc->layer_count;
    if ((vr = VK_CALL(vkCreateImageView(device->vk_device, &view_desc, NULL, &vk_view))) < 0)
    {
        WARN("Failed to create Vulkan image view, vr %d.\n", vr);
        return false;
    }

    if (!(object = vkd3d_view_create()))
    {
        VK_CALL(vkDestroyImageView(device->vk_device, vk_view, NULL));
        return false;
    }

    object->u.vk_image_view = vk_view;
    *view = object;
    return true;
}

void d3d12_desc_create_cbv(struct d3d12_desc *descriptor,
        struct d3d12_device *device, const D3D12_CONSTANT_BUFFER_VIEW_DESC *desc)
{
    struct VkDescriptorBufferInfo *buffer_info;
    struct d3d12_resource *resource;

    d3d12_desc_destroy(descriptor, device);

    if (!desc)
    {
        WARN("Constant buffer desc is NULL.\n");
        return;
    }

    if (desc->SizeInBytes & (D3D12_CONSTANT_BUFFER_DATA_PLACEMENT_ALIGNMENT - 1))
    {
        WARN("Size is not %u bytes aligned.\n", D3D12_CONSTANT_BUFFER_DATA_PLACEMENT_ALIGNMENT);
        return;
    }

    buffer_info = &descriptor->u.vk_cbv_info;
    if (desc->BufferLocation)
    {
        resource = vkd3d_gpu_va_allocator_dereference(&device->gpu_va_allocator, desc->BufferLocation);
        buffer_info->buffer = resource->u.vk_buffer;
        buffer_info->offset = desc->BufferLocation - resource->gpu_address;
        buffer_info->range = min(desc->SizeInBytes, resource->desc.Width - buffer_info->offset);
    }
    else
    {
        /* NULL descriptor */
        buffer_info->buffer = device->null_resources.vk_buffer;
        buffer_info->offset = 0;
        buffer_info->range = VKD3D_NULL_BUFFER_SIZE;
    }

    descriptor->magic = VKD3D_DESCRIPTOR_MAGIC_CBV;
    descriptor->vk_descriptor_type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
}

static unsigned int vkd3d_view_flags_from_d3d12_buffer_srv_flags(D3D12_BUFFER_SRV_FLAGS flags)
{
    if (flags == D3D12_BUFFER_SRV_FLAG_RAW)
        return VKD3D_VIEW_RAW_BUFFER;
    if (flags)
        FIXME("Unhandled buffer SRV flags %#x.\n", flags);
    return 0;
}

static void vkd3d_create_null_srv(struct d3d12_desc *descriptor,
        struct d3d12_device *device, const D3D12_SHADER_RESOURCE_VIEW_DESC *desc)
{
    struct vkd3d_null_resources *null_resources = &device->null_resources;
    struct vkd3d_texture_view_desc vkd3d_desc;
    struct vkd3d_view *view;
    VkImage vk_image;

    if (!desc)
    {
        WARN("D3D12_SHADER_RESOURCE_VIEW_DESC is required for NULL view.\n");
        return;
    }

    switch (desc->ViewDimension)
    {
        case D3D12_SRV_DIMENSION_BUFFER:
            WARN("Creating NULL buffer SRV %#x.\n", desc->Format);

            if (vkd3d_create_buffer_view(device, null_resources->vk_buffer,
                    vkd3d_get_format(device, DXGI_FORMAT_R32_UINT, false),
                    0, VKD3D_NULL_BUFFER_SIZE, &view))
            {
                descriptor->magic = VKD3D_DESCRIPTOR_MAGIC_SRV;
                descriptor->vk_descriptor_type = VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER;
                descriptor->u.view = view;
            }
            return;

        case D3D12_SRV_DIMENSION_TEXTURE2D:
            vk_image = null_resources->vk_2d_image;
            vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D;
            break;
        case D3D12_SRV_DIMENSION_TEXTURE2DARRAY:
            vk_image = null_resources->vk_2d_image;
            vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
            break;

        default:
            FIXME("Unhandled view dimension %#x.\n", desc->ViewDimension);
            return;
    }

    WARN("Creating NULL SRV %#x.\n", desc->ViewDimension);

    vkd3d_desc.format = vkd3d_get_format(device, VKD3D_NULL_VIEW_FORMAT, false);
    vkd3d_desc.miplevel_idx = 0;
    vkd3d_desc.miplevel_count = 1;
    vkd3d_desc.layer_idx = 0;
    vkd3d_desc.layer_count = 1;
    vkd3d_desc.components.r = VK_COMPONENT_SWIZZLE_ZERO;
    vkd3d_desc.components.g = VK_COMPONENT_SWIZZLE_ZERO;
    vkd3d_desc.components.b = VK_COMPONENT_SWIZZLE_ZERO;
    vkd3d_desc.components.a = VK_COMPONENT_SWIZZLE_ZERO;
    vkd3d_desc.allowed_swizzle = true;

    if (!vkd3d_create_texture_view(device, vk_image, &vkd3d_desc, &view))
        return;

    descriptor->magic = VKD3D_DESCRIPTOR_MAGIC_SRV;
    descriptor->vk_descriptor_type = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
    descriptor->u.view = view;
}

static void vkd3d_create_buffer_srv(struct d3d12_desc *descriptor,
        struct d3d12_device *device, struct d3d12_resource *resource,
        const D3D12_SHADER_RESOURCE_VIEW_DESC *desc)
{
    struct vkd3d_view *view;
    unsigned int flags;

    if (!desc)
    {
        FIXME("Default SRV views not supported.\n");
        return;
    }

    if (desc->ViewDimension != D3D12_SRV_DIMENSION_BUFFER)
    {
        WARN("Unexpected view dimension %#x.\n", desc->ViewDimension);
        return;
    }

    flags = vkd3d_view_flags_from_d3d12_buffer_srv_flags(desc->u.Buffer.Flags);
    if (!vkd3d_create_buffer_view_for_resource(device, resource, desc->Format,
            desc->u.Buffer.FirstElement, desc->u.Buffer.NumElements,
            desc->u.Buffer.StructureByteStride, flags, &view))
        return;

    descriptor->magic = VKD3D_DESCRIPTOR_MAGIC_SRV;
    descriptor->vk_descriptor_type = VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER;
    descriptor->u.view = view;
}

void d3d12_desc_create_srv(struct d3d12_desc *descriptor,
        struct d3d12_device *device, struct d3d12_resource *resource,
        const D3D12_SHADER_RESOURCE_VIEW_DESC *desc)
{
    struct vkd3d_texture_view_desc vkd3d_desc;
    struct vkd3d_view *view;

    d3d12_desc_destroy(descriptor, device);

    if (!resource)
    {
        vkd3d_create_null_srv(descriptor, device, desc);
        return;
    }

    if (d3d12_resource_is_buffer(resource))
    {
        vkd3d_create_buffer_srv(descriptor, device, resource, desc);
        return;
    }

    if (!init_default_texture_view_desc(&vkd3d_desc, resource, desc ? desc->Format : 0))
        return;

    vkd3d_desc.miplevel_count = VK_REMAINING_MIP_LEVELS;
    vkd3d_desc.allowed_swizzle = true;

    if (desc)
    {
        if (desc->Shader4ComponentMapping != D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING)
        {
            TRACE("Component mapping %s for format %#x.\n",
                    debug_d3d12_shader_component_mapping(desc->Shader4ComponentMapping), desc->Format);

            vk_component_mapping_from_d3d12(&vkd3d_desc.components, desc->Shader4ComponentMapping);
        }

        switch (desc->ViewDimension)
        {
            case D3D12_SRV_DIMENSION_TEXTURE2D:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D;
                vkd3d_desc.miplevel_idx = desc->u.Texture2D.MostDetailedMip;
                vkd3d_desc.miplevel_count = desc->u.Texture2D.MipLevels;
                if (desc->u.Texture2D.PlaneSlice)
                    FIXME("Ignoring plane slice %u.\n", desc->u.Texture2D.PlaneSlice);
                if (desc->u.Texture2D.ResourceMinLODClamp)
                    FIXME("Unhandled min LOD clamp %.8e.\n", desc->u.Texture2D.ResourceMinLODClamp);
                break;
            case D3D12_SRV_DIMENSION_TEXTURE2DARRAY:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
                vkd3d_desc.miplevel_idx = desc->u.Texture2DArray.MostDetailedMip;
                vkd3d_desc.miplevel_count = desc->u.Texture2DArray.MipLevels;
                vkd3d_desc.layer_idx = desc->u.Texture2DArray.FirstArraySlice;
                vkd3d_desc.layer_count = desc->u.Texture2DArray.ArraySize;
                if (desc->u.Texture2DArray.PlaneSlice)
                    FIXME("Ignoring plane slice %u.\n", desc->u.Texture2DArray.PlaneSlice);
                if (desc->u.Texture2DArray.ResourceMinLODClamp)
                    FIXME("Unhandled min LOD clamp %.8e.\n", desc->u.Texture2DArray.ResourceMinLODClamp);
                break;
            case D3D12_SRV_DIMENSION_TEXTURE2DMS:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D;
                break;
            case D3D12_SRV_DIMENSION_TEXTURE2DMSARRAY:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
                vkd3d_desc.layer_idx = desc->u.Texture2DMSArray.FirstArraySlice;
                vkd3d_desc.layer_count = desc->u.Texture2DMSArray.ArraySize;
                break;
            case D3D12_SRV_DIMENSION_TEXTURE3D:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_3D;
                vkd3d_desc.miplevel_idx = desc->u.Texture3D.MostDetailedMip;
                vkd3d_desc.miplevel_count = desc->u.Texture3D.MipLevels;
                if (desc->u.Texture3D.ResourceMinLODClamp)
                    FIXME("Unhandled min LOD clamp %.8e.\n", desc->u.Texture2D.ResourceMinLODClamp);
                break;
            case D3D12_SRV_DIMENSION_TEXTURECUBE:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_CUBE;
                vkd3d_desc.miplevel_idx = desc->u.TextureCube.MostDetailedMip;
                vkd3d_desc.miplevel_count = desc->u.TextureCube.MipLevels;
                vkd3d_desc.layer_count = 6;
                if (desc->u.TextureCube.ResourceMinLODClamp)
                    FIXME("Unhandled min LOD clamp %.8e.\n", desc->u.TextureCube.ResourceMinLODClamp);
                break;
            case D3D12_SRV_DIMENSION_TEXTURECUBEARRAY:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_CUBE_ARRAY;
                vkd3d_desc.miplevel_idx = desc->u.TextureCubeArray.MostDetailedMip;
                vkd3d_desc.miplevel_count = desc->u.TextureCubeArray.MipLevels;
                vkd3d_desc.layer_idx = desc->u.TextureCubeArray.First2DArrayFace;
                vkd3d_desc.layer_count = desc->u.TextureCubeArray.NumCubes;
                if (vkd3d_desc.layer_count != VK_REMAINING_ARRAY_LAYERS)
                    vkd3d_desc.layer_count *= 6;
                if (desc->u.TextureCubeArray.ResourceMinLODClamp)
                    FIXME("Unhandled min LOD clamp %.8e.\n", desc->u.TextureCubeArray.ResourceMinLODClamp);
                break;
            default:
                FIXME("Unhandled view dimension %#x.\n", desc->ViewDimension);
        }
    }

    if (!vkd3d_create_texture_view(device, resource->u.vk_image, &vkd3d_desc, &view))
        return;

    descriptor->magic = VKD3D_DESCRIPTOR_MAGIC_SRV;
    descriptor->vk_descriptor_type = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
    descriptor->u.view = view;
}

static unsigned int vkd3d_view_flags_from_d3d12_buffer_uav_flags(D3D12_BUFFER_UAV_FLAGS flags)
{
    if (flags == D3D12_BUFFER_UAV_FLAG_RAW)
        return VKD3D_VIEW_RAW_BUFFER;
    if (flags)
        FIXME("Unhandled buffer UAV flags %#x.\n", flags);
    return 0;
}

static void vkd3d_create_null_uav(struct d3d12_desc *descriptor,
        struct d3d12_device *device, const D3D12_UNORDERED_ACCESS_VIEW_DESC *desc)
{
    struct vkd3d_null_resources *null_resources = &device->null_resources;
    struct vkd3d_texture_view_desc vkd3d_desc;
    struct vkd3d_view *view;
    VkImage vk_image;

    if (!desc)
    {
        WARN("View desc is required for NULL view.\n");
        return;
    }

    switch (desc->ViewDimension)
    {
        case D3D12_UAV_DIMENSION_BUFFER:
            WARN("Creating NULL buffer UAV %#x.\n", desc->Format);

            if (vkd3d_create_buffer_view(device, null_resources->vk_storage_buffer,
                    vkd3d_get_format(device, DXGI_FORMAT_R32_UINT, false),
                    0, VKD3D_NULL_BUFFER_SIZE, &view))
            {
                descriptor->magic = VKD3D_DESCRIPTOR_MAGIC_UAV;
                descriptor->vk_descriptor_type = VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER;
                descriptor->u.view = view;
            }
            return;

        case D3D12_UAV_DIMENSION_TEXTURE2D:
            vk_image = null_resources->vk_2d_storage_image;
            vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D;
            break;
        case D3D12_UAV_DIMENSION_TEXTURE2DARRAY:
            vk_image = null_resources->vk_2d_storage_image;
            vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
            break;

        default:
            FIXME("Unhandled view dimension %#x.\n", desc->ViewDimension);
            return;
    }

    WARN("Creating NULL UAV %#x.\n", desc->ViewDimension);

    vkd3d_desc.format = vkd3d_get_format(device, VKD3D_NULL_VIEW_FORMAT, false);
    vkd3d_desc.miplevel_idx = 0;
    vkd3d_desc.miplevel_count = 1;
    vkd3d_desc.layer_idx = 0;
    vkd3d_desc.layer_count = 1;
    vkd3d_desc.components.r = VK_COMPONENT_SWIZZLE_R;
    vkd3d_desc.components.g = VK_COMPONENT_SWIZZLE_G;
    vkd3d_desc.components.b = VK_COMPONENT_SWIZZLE_B;
    vkd3d_desc.components.a = VK_COMPONENT_SWIZZLE_A;
    vkd3d_desc.allowed_swizzle = false;

    if (!vkd3d_create_texture_view(device, vk_image, &vkd3d_desc, &view))
        return;

    descriptor->magic = VKD3D_DESCRIPTOR_MAGIC_UAV;
    descriptor->vk_descriptor_type = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
    descriptor->u.view = view;
}

static void vkd3d_create_buffer_uav(struct d3d12_desc *descriptor, struct d3d12_device *device,
        struct d3d12_resource *resource, struct d3d12_resource *counter_resource,
        const D3D12_UNORDERED_ACCESS_VIEW_DESC *desc)
{
    struct vkd3d_view *view;
    unsigned int flags;

    if (!desc)
    {
        FIXME("Default UAV views not supported.\n");
        return;
    }

    if (desc->ViewDimension != D3D12_UAV_DIMENSION_BUFFER)
    {
        WARN("Unexpected view dimension %#x.\n", desc->ViewDimension);
        return;
    }

    if (desc->u.Buffer.CounterOffsetInBytes)
        FIXME("Ignoring counter offset %"PRIu64".\n", desc->u.Buffer.CounterOffsetInBytes);

    flags = vkd3d_view_flags_from_d3d12_buffer_uav_flags(desc->u.Buffer.Flags);
    if (!vkd3d_create_buffer_view_for_resource(device, resource, desc->Format,
            desc->u.Buffer.FirstElement, desc->u.Buffer.NumElements,
            desc->u.Buffer.StructureByteStride, flags, &view))
        return;

    descriptor->magic = VKD3D_DESCRIPTOR_MAGIC_UAV;
    descriptor->vk_descriptor_type = VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER;
    descriptor->u.view = view;

    if (counter_resource)
    {
        const struct vkd3d_format *format;

        assert(d3d12_resource_is_buffer(counter_resource));
        assert(desc->u.Buffer.StructureByteStride);

        format = vkd3d_get_format(device, DXGI_FORMAT_R32_UINT, false);
        if (!vkd3d_create_vk_buffer_view(device, counter_resource->u.vk_buffer, format,
                desc->u.Buffer.CounterOffsetInBytes, sizeof(uint32_t), &view->vk_counter_view))
        {
            WARN("Failed to create counter buffer view.\n");
            view->vk_counter_view = VK_NULL_HANDLE;
            d3d12_desc_destroy(descriptor, device);
        }
    }

    /* FIXME: Clears are implemented only for R32_UINT buffer UAVs. */
    if ((desc->Format == DXGI_FORMAT_R32_TYPELESS && (desc->u.Buffer.Flags & VKD3D_VIEW_RAW_BUFFER))
            || desc->Format == DXGI_FORMAT_R32_UINT)
    {
        const struct vkd3d_format *format = vkd3d_get_format(device, DXGI_FORMAT_R32_UINT, false);

        descriptor->uav.buffer.offset = desc->u.Buffer.FirstElement * format->byte_count;
        descriptor->uav.buffer.size = desc->u.Buffer.NumElements * format->byte_count;
    }
}

static void vkd3d_create_texture_uav(struct d3d12_desc *descriptor,
        struct d3d12_device *device, struct d3d12_resource *resource,
        const D3D12_UNORDERED_ACCESS_VIEW_DESC *desc)
{
    struct vkd3d_texture_view_desc vkd3d_desc;
    struct vkd3d_view *view;

    if (!init_default_texture_view_desc(&vkd3d_desc, resource, desc ? desc->Format : 0))
        return;

    if (vkd3d_format_is_compressed(vkd3d_desc.format))
    {
        WARN("UAVs cannot be created for compressed formats.\n");
        return;
    }

    if (desc)
    {
        switch (desc->ViewDimension)
        {
            case D3D12_UAV_DIMENSION_TEXTURE2D:
                vkd3d_desc.miplevel_idx = desc->u.Texture2D.MipSlice;
                if (desc->u.Texture2D.PlaneSlice)
                    FIXME("Ignoring plane slice %u.\n", desc->u.Texture2D.PlaneSlice);
                break;
            case D3D12_UAV_DIMENSION_TEXTURE2DARRAY:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
                vkd3d_desc.miplevel_idx = desc->u.Texture2DArray.MipSlice;
                vkd3d_desc.layer_idx = desc->u.Texture2DArray.FirstArraySlice;
                vkd3d_desc.layer_count = desc->u.Texture2DArray.ArraySize;
                if (desc->u.Texture2DArray.PlaneSlice)
                    FIXME("Ignoring plane slice %u.\n", desc->u.Texture2DArray.PlaneSlice);
                break;
            case D3D12_UAV_DIMENSION_TEXTURE3D:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_3D;
                vkd3d_desc.miplevel_idx = desc->u.Texture3D.MipSlice;
                if (desc->u.Texture3D.FirstWSlice || desc->u.Texture3D.WSize != resource->desc.DepthOrArraySize)
                    FIXME("Unhandled depth view %u-%u.\n",
                            desc->u.Texture3D.FirstWSlice, desc->u.Texture3D.WSize);
                break;
            default:
                FIXME("Unhandled view dimension %#x.\n", desc->ViewDimension);
        }
    }

    if (!vkd3d_create_texture_view(device, resource->u.vk_image, &vkd3d_desc, &view))
        return;

    descriptor->magic = VKD3D_DESCRIPTOR_MAGIC_UAV;
    descriptor->vk_descriptor_type = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
    descriptor->u.view = view;

    descriptor->uav.texture.vk_aspect_mask = vkd3d_desc.format->vk_aspect_mask;
    descriptor->uav.texture.miplevel_idx = vkd3d_desc.miplevel_idx;
    descriptor->uav.texture.layer_idx = vkd3d_desc.layer_idx;
    descriptor->uav.texture.layer_count = vkd3d_desc.layer_count;
}

void d3d12_desc_create_uav(struct d3d12_desc *descriptor, struct d3d12_device *device,
        struct d3d12_resource *resource, struct d3d12_resource *counter_resource,
        const D3D12_UNORDERED_ACCESS_VIEW_DESC *desc)
{
    d3d12_desc_destroy(descriptor, device);

    if (!resource)
    {
        if (counter_resource)
            FIXME("Ignoring counter resource %p.\n", counter_resource);
        vkd3d_create_null_uav(descriptor, device, desc);
        return;
    }

    if (d3d12_resource_is_buffer(resource))
    {
        vkd3d_create_buffer_uav(descriptor, device, resource, counter_resource, desc);
    }
    else
    {
        if (counter_resource)
            FIXME("Unexpected counter resource for texture view.\n");
        vkd3d_create_texture_uav(descriptor, device, resource, desc);
    }
}

bool vkd3d_create_raw_buffer_view(struct d3d12_device *device,
        D3D12_GPU_VIRTUAL_ADDRESS gpu_address, VkBufferView *vk_buffer_view)
{
    const struct vkd3d_format *format;
    struct d3d12_resource *resource;

    format = vkd3d_get_format(device, DXGI_FORMAT_R32_UINT, false);
    resource = vkd3d_gpu_va_allocator_dereference(&device->gpu_va_allocator, gpu_address);
    assert(d3d12_resource_is_buffer(resource));
    return vkd3d_create_vk_buffer_view(device, resource->u.vk_buffer, format,
            gpu_address - resource->gpu_address, VK_WHOLE_SIZE, vk_buffer_view);
}

/* samplers */
static VkFilter vk_filter_from_d3d12(D3D12_FILTER_TYPE type)
{
    switch (type)
    {
        case D3D12_FILTER_TYPE_POINT:
            return VK_FILTER_NEAREST;
        case D3D12_FILTER_TYPE_LINEAR:
            return VK_FILTER_LINEAR;
        default:
            FIXME("Unhandled filter type %#x.\n", type);
            return VK_FILTER_NEAREST;
    }
}

static VkSamplerMipmapMode vk_mipmap_mode_from_d3d12(D3D12_FILTER_TYPE type)
{
    switch (type)
    {
        case D3D12_FILTER_TYPE_POINT:
            return VK_SAMPLER_MIPMAP_MODE_NEAREST;
        case D3D12_FILTER_TYPE_LINEAR:
            return VK_SAMPLER_MIPMAP_MODE_LINEAR;
        default:
            FIXME("Unhandled filter type %#x.\n", type);
            return VK_SAMPLER_MIPMAP_MODE_NEAREST;
    }
}

static VkSamplerAddressMode vk_address_mode_from_d3d12(D3D12_TEXTURE_ADDRESS_MODE mode)
{
    switch (mode)
    {
        case D3D12_TEXTURE_ADDRESS_MODE_WRAP:
            return VK_SAMPLER_ADDRESS_MODE_REPEAT;
        case D3D12_TEXTURE_ADDRESS_MODE_MIRROR:
            return VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT;
        case D3D12_TEXTURE_ADDRESS_MODE_CLAMP:
            return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        case D3D12_TEXTURE_ADDRESS_MODE_BORDER:
            return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
            /* D3D12_TEXTURE_ADDRESS_MODE_MIRROR_ONCE requires VK_KHR_mirror_clamp_to_edge. */
        default:
            FIXME("Unhandled address mode %#x.\n", mode);
            return VK_SAMPLER_ADDRESS_MODE_REPEAT;
    }
}

static VkResult d3d12_create_sampler(struct d3d12_device *device, D3D12_FILTER filter,
        D3D12_TEXTURE_ADDRESS_MODE address_u, D3D12_TEXTURE_ADDRESS_MODE address_v,
        D3D12_TEXTURE_ADDRESS_MODE address_w, float mip_lod_bias, unsigned int max_anisotropy,
        D3D12_COMPARISON_FUNC comparison_func, float min_lod, float max_lod,
        VkSampler *vk_sampler)
{
    const struct vkd3d_vk_device_procs *vk_procs;
    struct VkSamplerCreateInfo sampler_desc;
    VkResult vr;

    vk_procs = &device->vk_procs;

    if (D3D12_DECODE_FILTER_REDUCTION(filter) == D3D12_FILTER_REDUCTION_TYPE_MINIMUM
            || D3D12_DECODE_FILTER_REDUCTION(filter) == D3D12_FILTER_REDUCTION_TYPE_MAXIMUM)
        FIXME("Min/max reduction mode not supported.\n");

    sampler_desc.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    sampler_desc.pNext = NULL;
    sampler_desc.flags = 0;
    sampler_desc.magFilter = vk_filter_from_d3d12(D3D12_DECODE_MAG_FILTER(filter));
    sampler_desc.minFilter = vk_filter_from_d3d12(D3D12_DECODE_MIN_FILTER(filter));
    sampler_desc.mipmapMode = vk_mipmap_mode_from_d3d12(D3D12_DECODE_MIP_FILTER(filter));
    sampler_desc.addressModeU = vk_address_mode_from_d3d12(address_u);
    sampler_desc.addressModeV = vk_address_mode_from_d3d12(address_v);
    sampler_desc.addressModeW = vk_address_mode_from_d3d12(address_w);
    sampler_desc.mipLodBias = mip_lod_bias;
    sampler_desc.anisotropyEnable = D3D12_DECODE_IS_ANISOTROPIC_FILTER(filter);
    sampler_desc.maxAnisotropy = max_anisotropy;
    sampler_desc.compareEnable = D3D12_DECODE_IS_COMPARISON_FILTER(filter);
    sampler_desc.compareOp = sampler_desc.compareEnable ? vk_compare_op_from_d3d12(comparison_func) : 0;
    sampler_desc.minLod = min_lod;
    sampler_desc.maxLod = max_lod;
    sampler_desc.borderColor = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
    sampler_desc.unnormalizedCoordinates = VK_FALSE;
    if ((vr = VK_CALL(vkCreateSampler(device->vk_device, &sampler_desc, NULL, vk_sampler))) < 0)
        WARN("Failed to create Vulkan sampler, vr %d.\n", vr);

    return vr;
}

void d3d12_desc_create_sampler(struct d3d12_desc *sampler,
        struct d3d12_device *device, const D3D12_SAMPLER_DESC *desc)
{
    struct vkd3d_view *view;

    d3d12_desc_destroy(sampler, device);

    if (!desc)
    {
        WARN("NULL sampler desc.\n");
        return;
    }

    if (desc->AddressU == D3D12_TEXTURE_ADDRESS_MODE_BORDER
            || desc->AddressV == D3D12_TEXTURE_ADDRESS_MODE_BORDER
            || desc->AddressW == D3D12_TEXTURE_ADDRESS_MODE_BORDER)
        FIXME("Ignoring border color {%.8e, %.8e, %.8e, %.8e}.\n",
                desc->BorderColor[0], desc->BorderColor[1], desc->BorderColor[2], desc->BorderColor[3]);

    if (!(view = vkd3d_view_create()))
        return;

    if (d3d12_create_sampler(device, desc->Filter, desc->AddressU,
            desc->AddressV, desc->AddressW, desc->MipLODBias, desc->MaxAnisotropy,
            desc->ComparisonFunc, desc->MinLOD, desc->MaxLOD, &view->u.vk_sampler) < 0)
    {
        vkd3d_free(view);
        return;
    }

    sampler->magic = VKD3D_DESCRIPTOR_MAGIC_SAMPLER;
    sampler->vk_descriptor_type = VK_DESCRIPTOR_TYPE_SAMPLER;
    sampler->u.view = view;
}

HRESULT vkd3d_create_static_sampler(struct d3d12_device *device,
        const D3D12_STATIC_SAMPLER_DESC *desc, VkSampler *vk_sampler)
{
    VkResult vr;

    if (desc->AddressU == D3D12_TEXTURE_ADDRESS_MODE_BORDER
            || desc->AddressV == D3D12_TEXTURE_ADDRESS_MODE_BORDER
            || desc->AddressW == D3D12_TEXTURE_ADDRESS_MODE_BORDER)
        FIXME("Ignoring border %#x.\n", desc->BorderColor);

    vr = d3d12_create_sampler(device, desc->Filter, desc->AddressU,
            desc->AddressV, desc->AddressW, desc->MipLODBias, desc->MaxAnisotropy,
            desc->ComparisonFunc, desc->MinLOD, desc->MaxLOD, vk_sampler);
    return hresult_from_vk_result(vr);
}

/* RTVs */
static void d3d12_rtv_desc_destroy(struct d3d12_rtv_desc *rtv, struct d3d12_device *device)
{
    if (rtv->magic != VKD3D_DESCRIPTOR_MAGIC_RTV)
        return;

    vkd3d_view_decref(rtv->view, device);
    memset(rtv, 0, sizeof(*rtv));
}

void d3d12_rtv_desc_create_rtv(struct d3d12_rtv_desc *rtv_desc, struct d3d12_device *device,
        struct d3d12_resource *resource, const D3D12_RENDER_TARGET_VIEW_DESC *desc)
{
    struct vkd3d_texture_view_desc vkd3d_desc;
    struct vkd3d_view *view;

    d3d12_rtv_desc_destroy(rtv_desc, device);

    if (!resource)
    {
        FIXME("NULL resource RTV not implemented.\n");
        return;
    }

    if (!init_default_texture_view_desc(&vkd3d_desc, resource, desc ? desc->Format : 0))
        return;

    if (vkd3d_desc.format->vk_aspect_mask != VK_IMAGE_ASPECT_COLOR_BIT)
    {
        WARN("Trying to create RTV for depth/stencil format %#x.\n", vkd3d_desc.format->dxgi_format);
        return;
    }

    if (desc)
    {
        switch (desc->ViewDimension)
        {
            case D3D12_RTV_DIMENSION_TEXTURE2D:
                vkd3d_desc.miplevel_idx = desc->u.Texture2D.MipSlice;
                if (desc->u.Texture2D.PlaneSlice)
                    FIXME("Ignoring plane slice %u.\n", desc->u.Texture2D.PlaneSlice);
                break;
            case D3D12_RTV_DIMENSION_TEXTURE2DARRAY:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
                vkd3d_desc.miplevel_idx = desc->u.Texture2DArray.MipSlice;
                vkd3d_desc.layer_idx = desc->u.Texture2DArray.FirstArraySlice;
                vkd3d_desc.layer_count = desc->u.Texture2DArray.ArraySize;
                if (desc->u.Texture2DArray.PlaneSlice)
                    FIXME("Ignoring plane slice %u.\n", desc->u.Texture2DArray.PlaneSlice);
                break;
            case D3D12_RTV_DIMENSION_TEXTURE2DMS:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D;
                break;
            case D3D12_RTV_DIMENSION_TEXTURE2DMSARRAY:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
                vkd3d_desc.layer_idx = desc->u.Texture2DMSArray.FirstArraySlice;
                vkd3d_desc.layer_count = desc->u.Texture2DMSArray.ArraySize;
                break;
            case D3D12_RTV_DIMENSION_TEXTURE3D:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
                vkd3d_desc.miplevel_idx = desc->u.Texture3D.MipSlice;
                vkd3d_desc.layer_idx = desc->u.Texture3D.FirstWSlice;
                vkd3d_desc.layer_count = desc->u.Texture3D.WSize;
                break;
            default:
                FIXME("Unhandled view dimension %#x.\n", desc->ViewDimension);
        }
    }
    else if (resource->desc.Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE3D)
    {
        vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
        vkd3d_desc.layer_idx = 0;
        vkd3d_desc.layer_count = resource->desc.DepthOrArraySize;
    }

    assert(d3d12_resource_is_texture(resource));

    if (!vkd3d_create_texture_view(device, resource->u.vk_image, &vkd3d_desc, &view))
        return;

    rtv_desc->magic = VKD3D_DESCRIPTOR_MAGIC_RTV;
    rtv_desc->sample_count = vk_samples_from_dxgi_sample_desc(&resource->desc.SampleDesc);
    rtv_desc->format = vkd3d_desc.format;
    rtv_desc->width = d3d12_resource_desc_get_width(&resource->desc, vkd3d_desc.miplevel_idx);
    rtv_desc->height = d3d12_resource_desc_get_height(&resource->desc, vkd3d_desc.miplevel_idx);
    rtv_desc->layer_count = vkd3d_desc.layer_count;
    rtv_desc->view = view;
    rtv_desc->resource = resource;
}

/* DSVs */
static void d3d12_dsv_desc_destroy(struct d3d12_dsv_desc *dsv, struct d3d12_device *device)
{
    if (dsv->magic != VKD3D_DESCRIPTOR_MAGIC_DSV)
        return;

    vkd3d_view_decref(dsv->view, device);
    memset(dsv, 0, sizeof(*dsv));
}

void d3d12_dsv_desc_create_dsv(struct d3d12_dsv_desc *dsv_desc, struct d3d12_device *device,
        struct d3d12_resource *resource, const D3D12_DEPTH_STENCIL_VIEW_DESC *desc)
{
    struct vkd3d_texture_view_desc vkd3d_desc;
    struct vkd3d_view *view;

    d3d12_dsv_desc_destroy(dsv_desc, device);

    if (!resource)
    {
        FIXME("NULL resource DSV not implemented.\n");
        return;
    }

    if (resource->desc.Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE3D)
    {
        WARN("Cannot create DSV for 3D texture.\n");
        return;
    }

    if (!init_default_texture_view_desc(&vkd3d_desc, resource, desc ? desc->Format : 0))
        return;

    if (!(vkd3d_desc.format->vk_aspect_mask & (VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT)))
    {
        WARN("Trying to create DSV for format %#x.\n", vkd3d_desc.format->dxgi_format);
        return;
    }

    if (desc)
    {
        if (desc->Flags)
            FIXME("Ignoring flags %#x.\n", desc->Flags);

        switch (desc->ViewDimension)
        {
            case D3D12_DSV_DIMENSION_TEXTURE2D:
                vkd3d_desc.miplevel_idx = desc->u.Texture2D.MipSlice;
                break;
            case D3D12_DSV_DIMENSION_TEXTURE2DARRAY:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
                vkd3d_desc.miplevel_idx = desc->u.Texture2DArray.MipSlice;
                vkd3d_desc.layer_idx = desc->u.Texture2DArray.FirstArraySlice;
                vkd3d_desc.layer_count = desc->u.Texture2DArray.ArraySize;
                break;
            case D3D12_DSV_DIMENSION_TEXTURE2DMS:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D;
                break;
            case D3D12_DSV_DIMENSION_TEXTURE2DMSARRAY:
                vkd3d_desc.view_type = VK_IMAGE_VIEW_TYPE_2D_ARRAY;
                vkd3d_desc.layer_idx = desc->u.Texture2DMSArray.FirstArraySlice;
                vkd3d_desc.layer_count = desc->u.Texture2DMSArray.ArraySize;
                break;
            default:
                FIXME("Unhandled view dimension %#x.\n", desc->ViewDimension);
        }
    }

    assert(d3d12_resource_is_texture(resource));

    if (!vkd3d_create_texture_view(device, resource->u.vk_image, &vkd3d_desc, &view))
        return;

    dsv_desc->magic = VKD3D_DESCRIPTOR_MAGIC_DSV;
    dsv_desc->sample_count = vk_samples_from_dxgi_sample_desc(&resource->desc.SampleDesc);
    dsv_desc->format = vkd3d_desc.format;
    dsv_desc->width = d3d12_resource_desc_get_width(&resource->desc, vkd3d_desc.miplevel_idx);
    dsv_desc->height = d3d12_resource_desc_get_height(&resource->desc, vkd3d_desc.miplevel_idx);
    dsv_desc->layer_count = vkd3d_desc.layer_count;
    dsv_desc->view = view;
    dsv_desc->resource = resource;
}

/* ID3D12DescriptorHeap */
static inline struct d3d12_descriptor_heap *impl_from_ID3D12DescriptorHeap(ID3D12DescriptorHeap *iface)
{
    return CONTAINING_RECORD(iface, struct d3d12_descriptor_heap, ID3D12DescriptorHeap_iface);
}

static HRESULT STDMETHODCALLTYPE d3d12_descriptor_heap_QueryInterface(ID3D12DescriptorHeap *iface,
        REFIID riid, void **object)
{
    TRACE("iface %p, riid %s, object %p.\n", iface, debugstr_guid(riid), object);

    if (IsEqualGUID(riid, &IID_ID3D12DescriptorHeap)
            || IsEqualGUID(riid, &IID_ID3D12Pageable)
            || IsEqualGUID(riid, &IID_ID3D12DeviceChild)
            || IsEqualGUID(riid, &IID_ID3D12Object)
            || IsEqualGUID(riid, &IID_IUnknown))
    {
        ID3D12DescriptorHeap_AddRef(iface);
        *object = iface;
        return S_OK;
    }

    WARN("%s not implemented, returning E_NOINTERFACE.\n", debugstr_guid(riid));

    *object = NULL;
    return E_NOINTERFACE;
}

static ULONG STDMETHODCALLTYPE d3d12_descriptor_heap_AddRef(ID3D12DescriptorHeap *iface)
{
    struct d3d12_descriptor_heap *heap = impl_from_ID3D12DescriptorHeap(iface);
    ULONG refcount = InterlockedIncrement(&heap->refcount);

    TRACE("%p increasing refcount to %u.\n", heap, refcount);

    return refcount;
}

static ULONG STDMETHODCALLTYPE d3d12_descriptor_heap_Release(ID3D12DescriptorHeap *iface)
{
    struct d3d12_descriptor_heap *heap = impl_from_ID3D12DescriptorHeap(iface);
    ULONG refcount = InterlockedDecrement(&heap->refcount);

    TRACE("%p decreasing refcount to %u.\n", heap, refcount);

    if (!refcount)
    {
        struct d3d12_device *device = heap->device;
        unsigned int i;

        vkd3d_private_store_destroy(&heap->private_store);

        switch (heap->desc.Type)
        {
            case D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV:
            case D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER:
            {
                struct d3d12_desc *descriptors = (struct d3d12_desc *)heap->descriptors;

                for (i = 0; i < heap->desc.NumDescriptors; ++i)
                {
                    d3d12_desc_destroy(&descriptors[i], device);
                }
                break;
            }

            case D3D12_DESCRIPTOR_HEAP_TYPE_RTV:
            {
                struct d3d12_rtv_desc *rtvs = (struct d3d12_rtv_desc *)heap->descriptors;

                for (i = 0; i < heap->desc.NumDescriptors; ++i)
                {
                    d3d12_rtv_desc_destroy(&rtvs[i], device);
                }
                break;
            }

            case D3D12_DESCRIPTOR_HEAP_TYPE_DSV:
            {
                struct d3d12_dsv_desc *dsvs = (struct d3d12_dsv_desc *)heap->descriptors;

                for (i = 0; i < heap->desc.NumDescriptors; ++i)
                {
                    d3d12_dsv_desc_destroy(&dsvs[i], device);
                }
                break;
            }

            default:
                break;
        }

        vkd3d_free(heap);

        d3d12_device_release(device);
    }

    return refcount;
}

static HRESULT STDMETHODCALLTYPE d3d12_descriptor_heap_GetPrivateData(ID3D12DescriptorHeap *iface,
        REFGUID guid, UINT *data_size, void *data)
{
    struct d3d12_descriptor_heap *heap = impl_from_ID3D12DescriptorHeap(iface);

    TRACE("iface %p, guid %s, data_size %p, data %p.\n", iface, debugstr_guid(guid), data_size, data);

    return vkd3d_get_private_data(&heap->private_store, guid, data_size, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_descriptor_heap_SetPrivateData(ID3D12DescriptorHeap *iface,
        REFGUID guid, UINT data_size, const void *data)
{
    struct d3d12_descriptor_heap *heap = impl_from_ID3D12DescriptorHeap(iface);

    TRACE("iface %p, guid %s, data_size %u, data %p.\n", iface, debugstr_guid(guid), data_size, data);

    return vkd3d_set_private_data(&heap->private_store, guid, data_size, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_descriptor_heap_SetPrivateDataInterface(ID3D12DescriptorHeap *iface,
        REFGUID guid, const IUnknown *data)
{
    struct d3d12_descriptor_heap *heap = impl_from_ID3D12DescriptorHeap(iface);

    TRACE("iface %p, guid %s, data %p.\n", iface, debugstr_guid(guid), data);

    return vkd3d_set_private_data_interface(&heap->private_store, guid, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_descriptor_heap_SetName(ID3D12DescriptorHeap *iface, const WCHAR *name)
{
    struct d3d12_descriptor_heap *heap = impl_from_ID3D12DescriptorHeap(iface);

    TRACE("iface %p, name %s.\n", iface, debugstr_w(name, heap->device->wchar_size));

    return name ? S_OK : E_INVALIDARG;
}

static HRESULT STDMETHODCALLTYPE d3d12_descriptor_heap_GetDevice(ID3D12DescriptorHeap *iface, REFIID iid, void **device)
{
    struct d3d12_descriptor_heap *heap = impl_from_ID3D12DescriptorHeap(iface);

    TRACE("iface %p, iid %s, device %p.\n", iface, debugstr_guid(iid), device);

    return d3d12_device_query_interface(heap->device, iid, device);
}

static D3D12_DESCRIPTOR_HEAP_DESC * STDMETHODCALLTYPE d3d12_descriptor_heap_GetDesc(ID3D12DescriptorHeap *iface,
        D3D12_DESCRIPTOR_HEAP_DESC *desc)
{
    struct d3d12_descriptor_heap *heap = impl_from_ID3D12DescriptorHeap(iface);

    TRACE("iface %p, desc %p.\n", iface, desc);

    *desc = heap->desc;
    return desc;
}

static D3D12_CPU_DESCRIPTOR_HANDLE * STDMETHODCALLTYPE d3d12_descriptor_heap_GetCPUDescriptorHandleForHeapStart(
        ID3D12DescriptorHeap *iface, D3D12_CPU_DESCRIPTOR_HANDLE *descriptor)
{
    struct d3d12_descriptor_heap *heap = impl_from_ID3D12DescriptorHeap(iface);

    TRACE("iface %p, descriptor %p.\n", iface, descriptor);

    descriptor->ptr = (SIZE_T)heap->descriptors;

    return descriptor;
}

static D3D12_GPU_DESCRIPTOR_HANDLE * STDMETHODCALLTYPE d3d12_descriptor_heap_GetGPUDescriptorHandleForHeapStart(
        ID3D12DescriptorHeap *iface, D3D12_GPU_DESCRIPTOR_HANDLE *descriptor)
{
    struct d3d12_descriptor_heap *heap = impl_from_ID3D12DescriptorHeap(iface);

    TRACE("iface %p, descriptor %p.\n", iface, descriptor);

    descriptor->ptr = (uint64_t)(intptr_t)heap->descriptors;

    return descriptor;
}

static const struct ID3D12DescriptorHeapVtbl d3d12_descriptor_heap_vtbl =
{
    /* IUnknown methods */
    d3d12_descriptor_heap_QueryInterface,
    d3d12_descriptor_heap_AddRef,
    d3d12_descriptor_heap_Release,
    /* ID3D12Object methods */
    d3d12_descriptor_heap_GetPrivateData,
    d3d12_descriptor_heap_SetPrivateData,
    d3d12_descriptor_heap_SetPrivateDataInterface,
    d3d12_descriptor_heap_SetName,
    /* ID3D12DeviceChild methods */
    d3d12_descriptor_heap_GetDevice,
    /* ID3D12DescriptorHeap methods */
    d3d12_descriptor_heap_GetDesc,
    d3d12_descriptor_heap_GetCPUDescriptorHandleForHeapStart,
    d3d12_descriptor_heap_GetGPUDescriptorHandleForHeapStart,
};

static HRESULT d3d12_descriptor_heap_init(struct d3d12_descriptor_heap *descriptor_heap,
        struct d3d12_device *device, const D3D12_DESCRIPTOR_HEAP_DESC *desc)
{
    HRESULT hr;

    descriptor_heap->ID3D12DescriptorHeap_iface.lpVtbl = &d3d12_descriptor_heap_vtbl;
    descriptor_heap->refcount = 1;

    descriptor_heap->desc = *desc;

    if (FAILED(hr = vkd3d_private_store_init(&descriptor_heap->private_store)))
        return hr;

    d3d12_device_add_ref(descriptor_heap->device = device);

    return S_OK;
}

HRESULT d3d12_descriptor_heap_create(struct d3d12_device *device,
        const D3D12_DESCRIPTOR_HEAP_DESC *desc, struct d3d12_descriptor_heap **descriptor_heap)
{
    size_t max_descriptor_count, descriptor_size;
    struct d3d12_descriptor_heap *object;
    HRESULT hr;

    if (!(descriptor_size = d3d12_device_get_descriptor_handle_increment_size(device, desc->Type)))
    {
        WARN("No descriptor size for descriptor type %#x.\n", desc->Type);
        return E_INVALIDARG;
    }

    if ((desc->Flags & D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE)
            && (desc->Type == D3D12_DESCRIPTOR_HEAP_TYPE_RTV || desc->Type == D3D12_DESCRIPTOR_HEAP_TYPE_DSV))
    {
        WARN("RTV/DSV descriptor heaps cannot be shader visible.\n");
        return E_INVALIDARG;
    }

    max_descriptor_count = (~(size_t)0 - sizeof(*object)) / descriptor_size;
    if (desc->NumDescriptors > max_descriptor_count)
    {
        WARN("Invalid descriptor count %u (max %zu).\n", desc->NumDescriptors, max_descriptor_count);
        return E_OUTOFMEMORY;
    }

    if (!(object = vkd3d_malloc(offsetof(struct d3d12_descriptor_heap,
            descriptors[descriptor_size * desc->NumDescriptors]))))
        return E_OUTOFMEMORY;

    if (FAILED(hr = d3d12_descriptor_heap_init(object, device, desc)))
    {
        vkd3d_free(object);
        return hr;
    }

    memset(object->descriptors, 0, descriptor_size * desc->NumDescriptors);

    TRACE("Created descriptor heap %p.\n", object);

    *descriptor_heap = object;

    return S_OK;
}

/* ID3D12QueryHeap */
static inline struct d3d12_query_heap *impl_from_ID3D12QueryHeap(ID3D12QueryHeap *iface)
{
    return CONTAINING_RECORD(iface, struct d3d12_query_heap, ID3D12QueryHeap_iface);
}

static HRESULT STDMETHODCALLTYPE d3d12_query_heap_QueryInterface(ID3D12QueryHeap *iface,
        REFIID iid, void **out)
{
    TRACE("iface %p, iid %s, out %p.\n", iface, debugstr_guid(iid), out);

    if (IsEqualGUID(iid, &IID_ID3D12QueryHeap)
            || IsEqualGUID(iid, &IID_ID3D12Pageable)
            || IsEqualGUID(iid, &IID_ID3D12DeviceChild)
            || IsEqualGUID(iid, &IID_ID3D12Object)
            || IsEqualGUID(iid, &IID_IUnknown))
    {
        ID3D12QueryHeap_AddRef(iface);
        *out = iface;
        return S_OK;
    }

    WARN("%s not implemented, returning E_NOINTERFACE.\n", debugstr_guid(iid));

    *out = NULL;
    return E_NOINTERFACE;
}

static ULONG STDMETHODCALLTYPE d3d12_query_heap_AddRef(ID3D12QueryHeap *iface)
{
    struct d3d12_query_heap *heap = impl_from_ID3D12QueryHeap(iface);
    ULONG refcount = InterlockedIncrement(&heap->refcount);

    TRACE("%p increasing refcount to %u.\n", heap, refcount);

    return refcount;
}

static ULONG STDMETHODCALLTYPE d3d12_query_heap_Release(ID3D12QueryHeap *iface)
{
    struct d3d12_query_heap *heap = impl_from_ID3D12QueryHeap(iface);
    ULONG refcount = InterlockedDecrement(&heap->refcount);

    TRACE("%p decreasing refcount to %u.\n", heap, refcount);

    if (!refcount)
    {
        struct d3d12_device *device = heap->device;
        const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;

        vkd3d_private_store_destroy(&heap->private_store);

        VK_CALL(vkDestroyQueryPool(device->vk_device, heap->vk_query_pool, NULL));

        vkd3d_free(heap);

        d3d12_device_release(device);
    }

    return refcount;
}

static HRESULT STDMETHODCALLTYPE d3d12_query_heap_GetPrivateData(ID3D12QueryHeap *iface,
        REFGUID guid, UINT *data_size, void *data)
{
    struct d3d12_query_heap *heap = impl_from_ID3D12QueryHeap(iface);

    TRACE("iface %p, guid %s, data_size %p, data %p.\n", iface, debugstr_guid(guid), data_size, data);

    return vkd3d_get_private_data(&heap->private_store, guid, data_size, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_query_heap_SetPrivateData(ID3D12QueryHeap *iface,
        REFGUID guid, UINT data_size, const void *data)
{
    struct d3d12_query_heap *heap = impl_from_ID3D12QueryHeap(iface);

    TRACE("iface %p, guid %s, data_size %u, data %p.\n", iface, debugstr_guid(guid), data_size, data);

    return vkd3d_set_private_data(&heap->private_store, guid, data_size, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_query_heap_SetPrivateDataInterface(ID3D12QueryHeap *iface,
        REFGUID guid, const IUnknown *data)
{
    struct d3d12_query_heap *heap = impl_from_ID3D12QueryHeap(iface);

    TRACE("iface %p, guid %s, data %p.\n", iface, debugstr_guid(guid), data);

    return vkd3d_set_private_data_interface(&heap->private_store, guid, data);
}

static HRESULT STDMETHODCALLTYPE d3d12_query_heap_SetName(ID3D12QueryHeap *iface, const WCHAR *name)
{
    struct d3d12_query_heap *heap = impl_from_ID3D12QueryHeap(iface);

    TRACE("iface %p, name %s.\n", iface, debugstr_w(name, heap->device->wchar_size));

    return vkd3d_set_vk_object_name(heap->device, (uint64_t)heap->vk_query_pool,
            VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT, name);
}

static HRESULT STDMETHODCALLTYPE d3d12_query_heap_GetDevice(ID3D12QueryHeap *iface, REFIID iid, void **device)
{
    struct d3d12_query_heap *heap = impl_from_ID3D12QueryHeap(iface);

    TRACE("iface %p, iid %s, device %p.\n", iface, debugstr_guid(iid), device);

    return d3d12_device_query_interface(heap->device, iid, device);
}

static const struct ID3D12QueryHeapVtbl d3d12_query_heap_vtbl =
{
    /* IUnknown methods */
    d3d12_query_heap_QueryInterface,
    d3d12_query_heap_AddRef,
    d3d12_query_heap_Release,
    /* ID3D12Object methods */
    d3d12_query_heap_GetPrivateData,
    d3d12_query_heap_SetPrivateData,
    d3d12_query_heap_SetPrivateDataInterface,
    d3d12_query_heap_SetName,
    /* ID3D12DeviceChild methods */
    d3d12_query_heap_GetDevice,
};

struct d3d12_query_heap *unsafe_impl_from_ID3D12QueryHeap(ID3D12QueryHeap *iface)
{
    if (!iface)
        return NULL;
    assert(iface->lpVtbl == &d3d12_query_heap_vtbl);
    return impl_from_ID3D12QueryHeap(iface);
}

HRESULT d3d12_query_heap_create(struct d3d12_device *device, const D3D12_QUERY_HEAP_DESC *desc,
        struct d3d12_query_heap **heap)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    struct d3d12_query_heap *object;
    VkQueryPoolCreateInfo pool_info;
    unsigned int element_count;
    VkResult vr;
    HRESULT hr;

    element_count = DIV_ROUND_UP(desc->Count, sizeof(*object->availability_mask) * CHAR_BIT);
    if (!(object = vkd3d_malloc(offsetof(struct d3d12_query_heap, availability_mask[element_count]))))
        return E_OUTOFMEMORY;

    object->ID3D12QueryHeap_iface.lpVtbl = &d3d12_query_heap_vtbl;
    object->refcount = 1;
    object->device = device;
    memset(object->availability_mask, 0, element_count * sizeof(*object->availability_mask));

    pool_info.sType = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
    pool_info.pNext = NULL;
    pool_info.flags = 0;
    pool_info.queryCount = desc->Count;

    switch (desc->Type)
    {
        case D3D12_QUERY_HEAP_TYPE_OCCLUSION:
            pool_info.queryType = VK_QUERY_TYPE_OCCLUSION;
            pool_info.pipelineStatistics = 0;
            break;

        case D3D12_QUERY_HEAP_TYPE_TIMESTAMP:
            pool_info.queryType = VK_QUERY_TYPE_TIMESTAMP;
            pool_info.pipelineStatistics = 0;
            break;

        case D3D12_QUERY_HEAP_TYPE_PIPELINE_STATISTICS:
            pool_info.queryType = VK_QUERY_TYPE_PIPELINE_STATISTICS;
            pool_info.pipelineStatistics = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT
                    | VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT
                    | VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT
                    | VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT
                    | VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT
                    | VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT
                    | VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT
                    | VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT
                    | VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT
                    | VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT
                    | VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT;
            break;

        case D3D12_QUERY_HEAP_TYPE_SO_STATISTICS:
            if (!device->vk_info.transform_feedback_queries)
            {
                FIXME("Transform feedback queries are not supported by Vulkan implementation.\n");
                vkd3d_free(object);
                return E_NOTIMPL;
            }

            pool_info.queryType = VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT;
            pool_info.pipelineStatistics = 0;
            break;

        default:
            WARN("Invalid query heap type %u.\n", desc->Type);
            vkd3d_free(object);
            return E_INVALIDARG;
    }

    if (FAILED(hr = vkd3d_private_store_init(&object->private_store)))
    {
        vkd3d_free(object);
        return hr;
    }

    if ((vr = VK_CALL(vkCreateQueryPool(device->vk_device, &pool_info, NULL, &object->vk_query_pool))) < 0)
    {
        WARN("Failed to create Vulkan query pool, vr %d.\n", vr);
        vkd3d_private_store_destroy(&object->private_store);
        vkd3d_free(object);
        return hresult_from_vk_result(vr);
    }

    d3d12_device_add_ref(device);

    TRACE("Created query heap %p.\n", object);

    *heap = object;

    return S_OK;
}

static HRESULT vkd3d_init_null_resources_data(struct vkd3d_null_resources *null_resource,
        struct d3d12_device *device)
{
    const bool use_sparse_resources = device->vk_info.sparse_properties.residencyNonResidentStrict;
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    static const VkClearColorValue clear_color = {{0}};
    VkCommandBufferAllocateInfo command_buffer_info;
    VkCommandPool vk_command_pool = VK_NULL_HANDLE;
    VkCommandPoolCreateInfo command_pool_info;
    VkDevice vk_device = device->vk_device;
    VkCommandBufferBeginInfo begin_info;
    VkCommandBuffer vk_command_buffer;
    VkFence vk_fence = VK_NULL_HANDLE;
    VkImageSubresourceRange range;
    VkImageMemoryBarrier barrier;
    VkFenceCreateInfo fence_info;
    struct vkd3d_queue *queue;
    VkSubmitInfo submit_info;
    VkQueue vk_queue;
    VkResult vr;

    queue = d3d12_device_get_vkd3d_queue(device, D3D12_COMMAND_LIST_TYPE_DIRECT);

    command_pool_info.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    command_pool_info.pNext = NULL;
    command_pool_info.flags = 0;
    command_pool_info.queueFamilyIndex = queue->vk_family_index;

    if ((vr = VK_CALL(vkCreateCommandPool(vk_device, &command_pool_info, NULL, &vk_command_pool))) < 0)
    {
        WARN("Failed to create Vulkan command pool, vr %d.\n", vr);
        goto done;
    }

    command_buffer_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    command_buffer_info.pNext = NULL;
    command_buffer_info.commandPool = vk_command_pool;
    command_buffer_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    command_buffer_info.commandBufferCount = 1;

    if ((vr = VK_CALL(vkAllocateCommandBuffers(vk_device, &command_buffer_info, &vk_command_buffer))) < 0)
    {
        WARN("Failed to allocate Vulkan command buffer, vr %d.\n", vr);
        goto done;
    }

    begin_info.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    begin_info.pNext = NULL;
    begin_info.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    begin_info.pInheritanceInfo = NULL;

    if ((vr = VK_CALL(vkBeginCommandBuffer(vk_command_buffer, &begin_info))) < 0)
    {
        WARN("Failed to begin command buffer, vr %d.\n", vr);
        goto done;
    }

    /* fill buffer */
    VK_CALL(vkCmdFillBuffer(vk_command_buffer, null_resource->vk_buffer, 0, VK_WHOLE_SIZE, 0x00000000));

    if (use_sparse_resources)
    {
        /* transition 2D UAV image */
        barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        barrier.pNext = NULL;
        barrier.srcAccessMask = 0;
        barrier.dstAccessMask = 0;
        barrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        barrier.newLayout = VK_IMAGE_LAYOUT_GENERAL;
        barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.image = null_resource->vk_2d_storage_image;
        barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        barrier.subresourceRange.baseMipLevel = 0;
        barrier.subresourceRange.levelCount = VK_REMAINING_MIP_LEVELS;
        barrier.subresourceRange.baseArrayLayer = 0;
        barrier.subresourceRange.layerCount = VK_REMAINING_ARRAY_LAYERS;

        VK_CALL(vkCmdPipelineBarrier(vk_command_buffer,
                VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, 0,
                0, NULL, 0, NULL, 1, &barrier));
    }
    else
    {
        /* fill UAV buffer */
        VK_CALL(vkCmdFillBuffer(vk_command_buffer,
                null_resource->vk_storage_buffer, 0, VK_WHOLE_SIZE, 0x00000000));

        /* clear 2D UAV image */
        barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        barrier.pNext = NULL;
        barrier.srcAccessMask = 0;
        barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        barrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        barrier.newLayout = VK_IMAGE_LAYOUT_GENERAL;
        barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.image = null_resource->vk_2d_storage_image;
        barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        barrier.subresourceRange.baseMipLevel = 0;
        barrier.subresourceRange.levelCount = VK_REMAINING_MIP_LEVELS;
        barrier.subresourceRange.baseArrayLayer = 0;
        barrier.subresourceRange.layerCount = VK_REMAINING_ARRAY_LAYERS;

        VK_CALL(vkCmdPipelineBarrier(vk_command_buffer,
                VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TRANSFER_BIT, 0,
                0, NULL, 0, NULL, 1, &barrier));

        range.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        range.baseMipLevel = 0;
        range.levelCount = 1;
        range.baseArrayLayer = 0;
        range.layerCount = 1;

        VK_CALL(vkCmdClearColorImage(vk_command_buffer,
                null_resource->vk_2d_storage_image, VK_IMAGE_LAYOUT_GENERAL, &clear_color, 1, &range));
    }

    /* transition 2D SRV image */
    barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    barrier.pNext = NULL;
    barrier.srcAccessMask = 0;
    barrier.dstAccessMask = 0;
    barrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    barrier.newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.image = null_resource->vk_2d_image;
    barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    barrier.subresourceRange.baseMipLevel = 0;
    barrier.subresourceRange.levelCount = VK_REMAINING_MIP_LEVELS;
    barrier.subresourceRange.baseArrayLayer = 0;
    barrier.subresourceRange.layerCount = VK_REMAINING_ARRAY_LAYERS;

    VK_CALL(vkCmdPipelineBarrier(vk_command_buffer,
            VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, 0,
            0, NULL, 0, NULL, 1, &barrier));

    if ((vr = VK_CALL(vkEndCommandBuffer(vk_command_buffer))) < 0)
    {
        WARN("Failed to end command buffer, vr %d.\n", vr);
        goto done;
    }

    fence_info.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    fence_info.pNext = NULL;
    fence_info.flags = 0;

    if ((vr = VK_CALL(vkCreateFence(device->vk_device, &fence_info, NULL, &vk_fence))) < 0)
    {
        WARN("Failed to create Vulkan fence, vr %d.\n", vr);
        goto done;
    }

    submit_info.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submit_info.pNext = NULL;
    submit_info.waitSemaphoreCount = 0;
    submit_info.pWaitSemaphores = NULL;
    submit_info.pWaitDstStageMask = NULL;
    submit_info.commandBufferCount = 1;
    submit_info.pCommandBuffers = &vk_command_buffer;
    submit_info.signalSemaphoreCount = 0;
    submit_info.pSignalSemaphores = NULL;

    if (!(vk_queue = vkd3d_queue_acquire(queue)))
    {
        WARN("Failed to acquire queue %p.\n", queue);
        goto done;
    }

    if ((vr = VK_CALL(vkQueueSubmit(vk_queue, 1, &submit_info, vk_fence))) < 0)
        ERR("Failed to submit, vr %d.\n", vr);

    vkd3d_queue_release(queue);

    vr = VK_CALL(vkWaitForFences(device->vk_device, 1, &vk_fence, VK_FALSE, ~(uint64_t)0));
    if (vr != VK_SUCCESS)
        WARN("Failed to wait fo fence, vr %d.\n", vr);

done:
    VK_CALL(vkDestroyCommandPool(vk_device, vk_command_pool, NULL));
    VK_CALL(vkDestroyFence(vk_device, vk_fence, NULL));

    return hresult_from_vk_result(vr);
}

HRESULT vkd3d_init_null_resources(struct vkd3d_null_resources *null_resources,
        struct d3d12_device *device)
{
    const bool use_sparse_resources = device->vk_info.sparse_properties.residencyNonResidentStrict;
    D3D12_HEAP_PROPERTIES heap_properties;
    D3D12_RESOURCE_DESC resource_desc;
    HRESULT hr;

    TRACE("Creating resources for NULL views.\n");

    memset(null_resources, 0, sizeof(*null_resources));

    memset(&heap_properties, 0, sizeof(heap_properties));
    heap_properties.Type = D3D12_HEAP_TYPE_DEFAULT;

    /* buffer */
    resource_desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    resource_desc.Alignment = 0;
    resource_desc.Width = VKD3D_NULL_BUFFER_SIZE;
    resource_desc.Height = 1;
    resource_desc.DepthOrArraySize = 1;
    resource_desc.MipLevels = 1;
    resource_desc.Format = DXGI_FORMAT_UNKNOWN;
    resource_desc.SampleDesc.Count = 1;
    resource_desc.SampleDesc.Quality = 0;
    resource_desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    resource_desc.Flags = D3D12_RESOURCE_FLAG_NONE;

    if (FAILED(hr = vkd3d_create_buffer(device, &heap_properties, D3D12_HEAP_FLAG_NONE,
            &resource_desc, &null_resources->vk_buffer)))
        goto fail;
    if (FAILED(hr = vkd3d_allocate_buffer_memory(device, null_resources->vk_buffer,
            &heap_properties, D3D12_HEAP_FLAG_NONE, &null_resources->vk_buffer_memory, NULL, NULL)))
        goto fail;

    /* buffer UAV */
    resource_desc.Flags = D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;

    if (FAILED(hr = vkd3d_create_buffer(device, use_sparse_resources ? NULL : &heap_properties, D3D12_HEAP_FLAG_NONE,
            &resource_desc, &null_resources->vk_storage_buffer)))
        goto fail;
    if (!use_sparse_resources && FAILED(hr = vkd3d_allocate_buffer_memory(device, null_resources->vk_storage_buffer,
            &heap_properties, D3D12_HEAP_FLAG_NONE, &null_resources->vk_storage_buffer_memory, NULL, NULL)))
        goto fail;

    /* 2D SRV */
    resource_desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    resource_desc.Alignment = 0;
    resource_desc.Width = 1;
    resource_desc.Height = 1;
    resource_desc.DepthOrArraySize = 1;
    resource_desc.MipLevels = 1;
    resource_desc.Format = VKD3D_NULL_VIEW_FORMAT;
    resource_desc.SampleDesc.Count = 1;
    resource_desc.SampleDesc.Quality = 0;
    resource_desc.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    resource_desc.Flags = D3D12_RESOURCE_FLAG_NONE;

    if (FAILED(hr = vkd3d_create_image(device, &heap_properties, D3D12_HEAP_FLAG_NONE,
            &resource_desc, NULL, &null_resources->vk_2d_image)))
        goto fail;
    if (FAILED(hr = vkd3d_allocate_image_memory(device, null_resources->vk_2d_image,
            &heap_properties, D3D12_HEAP_FLAG_NONE, &null_resources->vk_2d_image_memory, NULL, NULL)))
        goto fail;

    /* 2D UAV */
    resource_desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    resource_desc.Alignment = 0;
    resource_desc.Width = 1;
    resource_desc.Height = 1;
    resource_desc.DepthOrArraySize = 1;
    resource_desc.MipLevels = 1;
    resource_desc.Format = VKD3D_NULL_VIEW_FORMAT;
    resource_desc.SampleDesc.Count = 1;
    resource_desc.SampleDesc.Quality = 0;
    resource_desc.Layout = use_sparse_resources
            ? D3D12_TEXTURE_LAYOUT_64KB_UNDEFINED_SWIZZLE : D3D12_TEXTURE_LAYOUT_UNKNOWN;
    resource_desc.Flags = D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS;

    if (FAILED(hr = vkd3d_create_image(device, use_sparse_resources ? NULL : &heap_properties, D3D12_HEAP_FLAG_NONE,
            &resource_desc, NULL, &null_resources->vk_2d_storage_image)))
        goto fail;
    if (!use_sparse_resources && FAILED(hr = vkd3d_allocate_image_memory(device, null_resources->vk_2d_storage_image,
            &heap_properties, D3D12_HEAP_FLAG_NONE, &null_resources->vk_2d_storage_image_memory, NULL, NULL)))
        goto fail;

    /* set Vulkan object names */
    vkd3d_set_vk_object_name_utf8(device, (uint64_t)null_resources->vk_buffer,
            VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT, "NULL buffer");
    vkd3d_set_vk_object_name_utf8(device, (uint64_t)null_resources->vk_buffer_memory,
            VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT, "NULL memory");
    vkd3d_set_vk_object_name_utf8(device, (uint64_t)null_resources->vk_storage_buffer,
            VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT, "NULL UAV buffer");
    vkd3d_set_vk_object_name_utf8(device, (uint64_t)null_resources->vk_2d_image,
            VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT, "NULL 2D SRV image");
    vkd3d_set_vk_object_name_utf8(device, (uint64_t)null_resources->vk_2d_image_memory,
            VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT, "NULL 2D SRV memory");
    vkd3d_set_vk_object_name_utf8(device, (uint64_t)null_resources->vk_2d_storage_image,
            VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT, "NULL 2D UAV image");
    if (!use_sparse_resources)
    {
        vkd3d_set_vk_object_name_utf8(device, (uint64_t)null_resources->vk_storage_buffer_memory,
                VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT, "NULL UAV buffer memory");
        vkd3d_set_vk_object_name_utf8(device, (uint64_t)null_resources->vk_2d_storage_image_memory,
                VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT, "NULL 2D UAV memory");
    }

    return vkd3d_init_null_resources_data(null_resources, device);

fail:
    ERR("Failed to initialize NULL resources, hr %#x.\n", hr);
    vkd3d_destroy_null_resources(null_resources, device);
    return hr;
}

void vkd3d_destroy_null_resources(struct vkd3d_null_resources *null_resources,
        struct d3d12_device *device)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;

    VK_CALL(vkDestroyBuffer(device->vk_device, null_resources->vk_buffer, NULL));
    VK_CALL(vkFreeMemory(device->vk_device, null_resources->vk_buffer_memory, NULL));

    VK_CALL(vkDestroyBuffer(device->vk_device, null_resources->vk_storage_buffer, NULL));
    VK_CALL(vkFreeMemory(device->vk_device, null_resources->vk_storage_buffer_memory, NULL));

    VK_CALL(vkDestroyImage(device->vk_device, null_resources->vk_2d_image, NULL));
    VK_CALL(vkFreeMemory(device->vk_device, null_resources->vk_2d_image_memory, NULL));

    VK_CALL(vkDestroyImage(device->vk_device, null_resources->vk_2d_storage_image, NULL));
    VK_CALL(vkFreeMemory(device->vk_device, null_resources->vk_2d_storage_image_memory, NULL));

    memset(null_resources, 0, sizeof(*null_resources));
}
