/*
 * Copyright 2016-2018 Józef Kucia for CodeWeavers
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

#ifndef __VKD3D_D3D12_TEST_UTILS_H
#define __VKD3D_D3D12_TEST_UTILS_H

#define wait_queue_idle(a, b) wait_queue_idle_(__LINE__, a, b)
static void wait_queue_idle_(unsigned int line, ID3D12Device *device, ID3D12CommandQueue *queue);
static ID3D12Device *create_device(void);

static void set_rect(RECT *rect, int left, int top, int right, int bottom)
{
    rect->left = left;
    rect->right = right;
    rect->top = top;
    rect->bottom = bottom;
}

static inline void set_box(D3D12_BOX *box, unsigned int left, unsigned int top, unsigned int front,
        unsigned int right, unsigned int bottom, unsigned int back)
{
    box->left = left;
    box->top = top;
    box->front = front;
    box->right = right;
    box->bottom = bottom;
    box->back = back;
}

static void set_viewport(D3D12_VIEWPORT *vp, float x, float y,
        float width, float height, float min_depth, float max_depth)
{
    vp->TopLeftX = x;
    vp->TopLeftY = y;
    vp->Width = width;
    vp->Height = height;
    vp->MinDepth = min_depth;
    vp->MaxDepth = max_depth;
}

static bool compare_color(DWORD c1, DWORD c2, BYTE max_diff)
{
    if (abs((c1 & 0xff) - (c2 & 0xff)) > max_diff)
        return false;
    c1 >>= 8; c2 >>= 8;
    if (abs((c1 & 0xff) - (c2 & 0xff)) > max_diff)
        return false;
    c1 >>= 8; c2 >>= 8;
    if (abs((c1 & 0xff) - (c2 & 0xff)) > max_diff)
        return false;
    c1 >>= 8; c2 >>= 8;
    if (abs((c1 & 0xff) - (c2 & 0xff)) > max_diff)
        return false;
    return true;
}

static D3D12_SHADER_BYTECODE shader_bytecode(const DWORD *code, size_t size)
{
    D3D12_SHADER_BYTECODE shader_bytecode = { code, size };
    return shader_bytecode;
}

static void exec_command_list(ID3D12CommandQueue *queue, ID3D12GraphicsCommandList *list)
{
    ID3D12CommandList *lists[] = {(ID3D12CommandList *)list};
    ID3D12CommandQueue_ExecuteCommandLists(queue, 1, lists);
}

#define reset_command_list(a, b) reset_command_list_(__LINE__, a, b)
static inline void reset_command_list_(unsigned int line,
        ID3D12GraphicsCommandList *list, ID3D12CommandAllocator *allocator)
{
    HRESULT hr;

    hr = ID3D12CommandAllocator_Reset(allocator);
    assert_that_(line)(hr == S_OK, "Failed to reset command allocator, hr %#x.\n", hr);
    hr = ID3D12GraphicsCommandList_Reset(list, allocator, NULL);
    assert_that_(line)(hr == S_OK, "Failed to reset command list, hr %#x.\n", hr);
}

#define queue_signal(a, b, c) queue_signal_(__LINE__, a, b, c)
static inline void queue_signal_(unsigned int line, ID3D12CommandQueue *queue, ID3D12Fence *fence, uint64_t value)
{
    HRESULT hr;

    hr = ID3D12CommandQueue_Signal(queue, fence, value);
    ok_(line)(hr == S_OK, "Failed to submit signal operation to queue, hr %#x.\n", hr);
}

#define queue_wait(a, b, c) queue_wait_(__LINE__, a, b, c)
static inline void queue_wait_(unsigned int line, ID3D12CommandQueue *queue, ID3D12Fence *fence, uint64_t value)
{
    HRESULT hr;

    hr = ID3D12CommandQueue_Wait(queue, fence, value);
    ok_(line)(hr == S_OK, "Failed to submit wait operation to queue, hr %#x.\n", hr);
}

#define create_buffer(a, b, c, d, e) create_buffer_(__LINE__, a, b, c, d, e)
static ID3D12Resource *create_buffer_(unsigned int line, ID3D12Device *device,
        D3D12_HEAP_TYPE heap_type, size_t size, D3D12_RESOURCE_FLAGS resource_flags,
        D3D12_RESOURCE_STATES initial_resource_state)
{
    D3D12_HEAP_PROPERTIES heap_properties;
    D3D12_RESOURCE_DESC resource_desc;
    ID3D12Resource *buffer;
    HRESULT hr;

    memset(&heap_properties, 0, sizeof(heap_properties));
    heap_properties.Type = heap_type;

    resource_desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    resource_desc.Alignment = 0;
    resource_desc.Width = size;
    resource_desc.Height = 1;
    resource_desc.DepthOrArraySize = 1;
    resource_desc.MipLevels = 1;
    resource_desc.Format = DXGI_FORMAT_UNKNOWN;
    resource_desc.SampleDesc.Count = 1;
    resource_desc.SampleDesc.Quality = 0;
    resource_desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    resource_desc.Flags = resource_flags;

    hr = ID3D12Device_CreateCommittedResource(device, &heap_properties,
            D3D12_HEAP_FLAG_NONE, &resource_desc, initial_resource_state,
            NULL, &IID_ID3D12Resource, (void **)&buffer);
    assert_that_(line)(SUCCEEDED(hr), "Failed to create buffer, hr %#x.\n", hr);
    return buffer;
}

#define create_readback_buffer(a, b) create_readback_buffer_(__LINE__, a, b)
static ID3D12Resource *create_readback_buffer_(unsigned int line, ID3D12Device *device,
        size_t size)
{
    return create_buffer_(line, device, D3D12_HEAP_TYPE_READBACK, size,
            D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST);
}

#define update_buffer_data(a, b, c, d) update_buffer_data_(__LINE__, a, b, c, d)
static inline void update_buffer_data_(unsigned int line, ID3D12Resource *buffer,
        size_t offset, size_t size, const void *data)
{
    D3D12_RANGE range;
    HRESULT hr;
    void *ptr;

    range.Begin = range.End = 0;
    hr = ID3D12Resource_Map(buffer, 0, &range, &ptr);
    ok_(line)(hr == S_OK, "Failed to map buffer, hr %#x.\n", hr);
    memcpy((BYTE *)ptr + offset, data, size);
    ID3D12Resource_Unmap(buffer, 0, NULL);
}

#define create_upload_buffer(a, b, c) create_upload_buffer_(__LINE__, a, b, c)
static inline ID3D12Resource *create_upload_buffer_(unsigned int line, ID3D12Device *device,
        size_t size, const void *data)
{
    ID3D12Resource *buffer;

    buffer = create_buffer_(line, device, D3D12_HEAP_TYPE_UPLOAD, size,
            D3D12_RESOURCE_FLAG_NONE, D3D12_RESOURCE_STATE_GENERIC_READ);
    if (data)
        update_buffer_data_(line, buffer, 0, size, data);
    return buffer;
}

#define create_cpu_descriptor_heap(a, b, c) create_cpu_descriptor_heap_(__LINE__, a, b, c)
static inline ID3D12DescriptorHeap *create_cpu_descriptor_heap_(unsigned int line, ID3D12Device *device,
        D3D12_DESCRIPTOR_HEAP_TYPE heap_type, unsigned int descriptor_count)
{
    D3D12_DESCRIPTOR_HEAP_DESC heap_desc;
    ID3D12DescriptorHeap *descriptor_heap;
    HRESULT hr;

    heap_desc.Type = heap_type,
    heap_desc.NumDescriptors = descriptor_count;
    heap_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
    heap_desc.NodeMask = 0;
    hr = ID3D12Device_CreateDescriptorHeap(device, &heap_desc,
            &IID_ID3D12DescriptorHeap, (void **)&descriptor_heap);
    ok_(line)(SUCCEEDED(hr), "Failed to create descriptor heap, hr %#x.\n", hr);

    return descriptor_heap;
}

#define create_gpu_descriptor_heap(a, b, c) create_gpu_descriptor_heap_(__LINE__, a, b, c)
static inline ID3D12DescriptorHeap *create_gpu_descriptor_heap_(unsigned int line, ID3D12Device *device,
        D3D12_DESCRIPTOR_HEAP_TYPE heap_type, unsigned int descriptor_count)
{
    D3D12_DESCRIPTOR_HEAP_DESC heap_desc;
    ID3D12DescriptorHeap *descriptor_heap;
    HRESULT hr;

    heap_desc.Type = heap_type,
    heap_desc.NumDescriptors = descriptor_count;
    heap_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
    heap_desc.NodeMask = 0;
    hr = ID3D12Device_CreateDescriptorHeap(device, &heap_desc,
            &IID_ID3D12DescriptorHeap, (void **)&descriptor_heap);
    ok_(line)(SUCCEEDED(hr), "Failed to create descriptor heap, hr %#x.\n", hr);

    return descriptor_heap;
}

static void transition_sub_resource_state(ID3D12GraphicsCommandList *list, ID3D12Resource *resource,
        unsigned int sub_resource_idx, D3D12_RESOURCE_STATES state_before, D3D12_RESOURCE_STATES state_after)
{
    D3D12_RESOURCE_BARRIER barrier;

    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
    barrier.Transition.pResource = resource;
    barrier.Transition.Subresource = sub_resource_idx;
    barrier.Transition.StateBefore = state_before;
    barrier.Transition.StateAfter = state_after;

    ID3D12GraphicsCommandList_ResourceBarrier(list, 1, &barrier);
}

#define create_command_queue(a, b, c) create_command_queue_(__LINE__, a, b, c)
static inline ID3D12CommandQueue *create_command_queue_(unsigned int line, ID3D12Device *device,
        D3D12_COMMAND_LIST_TYPE type, int priority)
{
    D3D12_COMMAND_QUEUE_DESC queue_desc;
    ID3D12CommandQueue *queue;
    HRESULT hr;

    queue_desc.Type = type;
    queue_desc.Priority = priority;
    queue_desc.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE;
    queue_desc.NodeMask = 0;
    hr = ID3D12Device_CreateCommandQueue(device, &queue_desc, &IID_ID3D12CommandQueue, (void **)&queue);
    ok_(line)(hr == S_OK, "Failed to create command queue, hr %#x.\n", hr);

    return queue;
}

static void transition_resource_state(ID3D12GraphicsCommandList *list, ID3D12Resource *resource,
        D3D12_RESOURCE_STATES state_before, D3D12_RESOURCE_STATES state_after)
{
    transition_sub_resource_state(list, resource, D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES,
            state_before, state_after);
}

static unsigned int format_size(DXGI_FORMAT format)
{
    switch (format)
    {
        case DXGI_FORMAT_UNKNOWN:
        case DXGI_FORMAT_A8_UNORM:
        case DXGI_FORMAT_R8_UINT:
        case DXGI_FORMAT_R8_UNORM:
            return 1;
        case DXGI_FORMAT_R32G32B32A32_FLOAT:
        case DXGI_FORMAT_R32G32B32A32_UINT:
        case DXGI_FORMAT_R8G8_UNORM:
            return 16;
        case DXGI_FORMAT_R16G16B16A16_TYPELESS:
            return 8;
        case DXGI_FORMAT_R32_TYPELESS:
        case DXGI_FORMAT_D32_FLOAT:
        case DXGI_FORMAT_R32_FLOAT:
        case DXGI_FORMAT_R32_UINT:
        case DXGI_FORMAT_R32_SINT:
        case DXGI_FORMAT_R8G8B8A8_TYPELESS:
        case DXGI_FORMAT_R8G8B8A8_UNORM:
        case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
        case DXGI_FORMAT_B8G8R8A8_UNORM:
            return 4;
        case DXGI_FORMAT_R16_FLOAT:
        case DXGI_FORMAT_R16_UNORM:
        case DXGI_FORMAT_R16_UINT:
            return 2;
        case DXGI_FORMAT_BC1_UNORM:
        case DXGI_FORMAT_BC1_UNORM_SRGB:
        case DXGI_FORMAT_BC4_UNORM:
        case DXGI_FORMAT_BC4_SNORM:
            return 8;
        case DXGI_FORMAT_BC2_UNORM:
        case DXGI_FORMAT_BC2_UNORM_SRGB:
        case DXGI_FORMAT_BC3_UNORM:
        case DXGI_FORMAT_BC3_UNORM_SRGB:
        case DXGI_FORMAT_BC5_UNORM:
        case DXGI_FORMAT_BC5_SNORM:
        case DXGI_FORMAT_BC6H_UF16:
        case DXGI_FORMAT_BC6H_SF16:
        case DXGI_FORMAT_BC7_UNORM:
        case DXGI_FORMAT_BC7_UNORM_SRGB:
            return 16;
        default:
            trace("Unhandled format %#x.\n", format);
            return 1;
    }
}

static inline unsigned int format_block_width(DXGI_FORMAT format)
{
    switch (format)
    {
        case DXGI_FORMAT_BC1_UNORM:
        case DXGI_FORMAT_BC1_UNORM_SRGB:
        case DXGI_FORMAT_BC4_UNORM:
        case DXGI_FORMAT_BC4_SNORM:
        case DXGI_FORMAT_BC2_UNORM:
        case DXGI_FORMAT_BC2_UNORM_SRGB:
        case DXGI_FORMAT_BC3_UNORM:
        case DXGI_FORMAT_BC3_UNORM_SRGB:
        case DXGI_FORMAT_BC5_UNORM:
        case DXGI_FORMAT_BC5_SNORM:
        case DXGI_FORMAT_BC6H_UF16:
        case DXGI_FORMAT_BC6H_SF16:
        case DXGI_FORMAT_BC7_UNORM:
        case DXGI_FORMAT_BC7_UNORM_SRGB:
            return 4;
        default:
            return 1;
    }
}

static inline unsigned int format_block_height(DXGI_FORMAT format)
{
    switch (format)
    {
        case DXGI_FORMAT_BC1_UNORM:
        case DXGI_FORMAT_BC1_UNORM_SRGB:
        case DXGI_FORMAT_BC4_UNORM:
        case DXGI_FORMAT_BC4_SNORM:
        case DXGI_FORMAT_BC2_UNORM:
        case DXGI_FORMAT_BC2_UNORM_SRGB:
        case DXGI_FORMAT_BC3_UNORM:
        case DXGI_FORMAT_BC3_UNORM_SRGB:
        case DXGI_FORMAT_BC5_UNORM:
        case DXGI_FORMAT_BC5_SNORM:
        case DXGI_FORMAT_BC6H_UF16:
        case DXGI_FORMAT_BC6H_SF16:
        case DXGI_FORMAT_BC7_UNORM:
        case DXGI_FORMAT_BC7_UNORM_SRGB:
            return 4;
        default:
            return 1;
    }
}

struct resource_readback
{
    uint64_t width;
    unsigned int height;
    unsigned int depth;
    ID3D12Resource *resource;
    uint64_t row_pitch;
    void *data;
};

static void get_texture_readback_with_command_list(ID3D12Resource *texture, unsigned int sub_resource,
        struct resource_readback *rb, ID3D12CommandQueue *queue, ID3D12GraphicsCommandList *command_list)
{
    D3D12_TEXTURE_COPY_LOCATION dst_location, src_location;
    D3D12_HEAP_PROPERTIES heap_properties;
    D3D12_RESOURCE_DESC resource_desc;
    ID3D12Resource *src_resource;
    D3D12_RANGE read_range;
    unsigned int miplevel;
    ID3D12Device *device;
    uint64_t buffer_size;
    HRESULT hr;

    hr = ID3D12Resource_GetDevice(texture, &IID_ID3D12Device, (void **)&device);
    assert_that(hr == S_OK, "Failed to get device, hr %#x.\n", hr);

    resource_desc = ID3D12Resource_GetDesc(texture);
    assert_that(resource_desc.Dimension != D3D12_RESOURCE_DIMENSION_BUFFER,
            "Resource %p is not texture.\n", texture);

    miplevel = sub_resource % resource_desc.MipLevels;
    rb->width = max(1, resource_desc.Width >> miplevel);
    rb->width = align(rb->width, format_block_width(resource_desc.Format));
    rb->height = max(1, resource_desc.Height >> miplevel);
    rb->height = align(rb->height, format_block_height(resource_desc.Format));
    rb->depth = resource_desc.Dimension == D3D12_RESOURCE_DIMENSION_TEXTURE3D
            ? max(1, resource_desc.DepthOrArraySize >> miplevel) : 1;
    rb->row_pitch = align(rb->width * format_size(resource_desc.Format), D3D12_TEXTURE_DATA_PITCH_ALIGNMENT);
    rb->data = NULL;

    if (resource_desc.SampleDesc.Count > 1)
    {
        memset(&heap_properties, 0, sizeof(heap_properties));
        heap_properties.Type = D3D12_HEAP_TYPE_DEFAULT;

        resource_desc.Alignment = 0;
        resource_desc.DepthOrArraySize = 1;
        resource_desc.SampleDesc.Count = 1;
        resource_desc.SampleDesc.Quality = 0;
        hr = ID3D12Device_CreateCommittedResource(device, &heap_properties, D3D12_HEAP_FLAG_NONE,
                &resource_desc, D3D12_RESOURCE_STATE_RESOLVE_DEST, NULL,
                &IID_ID3D12Resource, (void **)&src_resource);
        assert_that(hr == S_OK, "Failed to create texture, hr %#x.\n", hr);

        ID3D12GraphicsCommandList_ResolveSubresource(command_list,
                src_resource, 0, texture, sub_resource, resource_desc.Format);
        transition_resource_state(command_list, src_resource,
                D3D12_RESOURCE_STATE_RESOLVE_DEST, D3D12_RESOURCE_STATE_COPY_SOURCE);

        sub_resource = 0;
    }
    else
    {
        src_resource = texture;
    }

    buffer_size = rb->row_pitch * rb->height * rb->depth;
    rb->resource = create_readback_buffer(device, buffer_size);

    dst_location.pResource = rb->resource;
    dst_location.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    dst_location.PlacedFootprint.Offset = 0;
    dst_location.PlacedFootprint.Footprint.Format = resource_desc.Format;
    dst_location.PlacedFootprint.Footprint.Width = rb->width;
    dst_location.PlacedFootprint.Footprint.Height = rb->height;
    dst_location.PlacedFootprint.Footprint.Depth = rb->depth;
    dst_location.PlacedFootprint.Footprint.RowPitch = rb->row_pitch;

    src_location.pResource = src_resource;
    src_location.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    src_location.SubresourceIndex = sub_resource;

    ID3D12GraphicsCommandList_CopyTextureRegion(command_list, &dst_location, 0, 0, 0, &src_location, NULL);
    hr = ID3D12GraphicsCommandList_Close(command_list);
    assert_that(hr == S_OK, "Failed to close command list, hr %#x.\n", hr);

    exec_command_list(queue, command_list);
    wait_queue_idle(device, queue);
    ID3D12Device_Release(device);

    if (src_resource != texture)
        ID3D12Resource_Release(src_resource);

    read_range.Begin = 0;
    read_range.End = buffer_size;
    hr = ID3D12Resource_Map(rb->resource, 0, &read_range, &rb->data);
    assert_that(hr == S_OK, "Failed to map readback buffer, hr %#x.\n", hr);
}

static void *get_readback_data(struct resource_readback *rb,
        unsigned int x, unsigned int y, unsigned int z, size_t element_size)
{
    unsigned int slice_pitch = rb->row_pitch * rb->height;
    return &((BYTE *)rb->data)[slice_pitch * z + rb->row_pitch * y + x * element_size];
}

static unsigned int get_readback_uint(struct resource_readback *rb,
        unsigned int x, unsigned int y, unsigned int z)
{
    return *(unsigned int *)get_readback_data(rb, x, y, z, sizeof(unsigned int));
}

static void release_resource_readback(struct resource_readback *rb)
{
    D3D12_RANGE range = {0, 0};
    ID3D12Resource_Unmap(rb->resource, 0, &range);
    ID3D12Resource_Release(rb->resource);
}

#define check_readback_data_uint(a, b, c, d) check_readback_data_uint_(__LINE__, a, b, c, d)
static void check_readback_data_uint_(unsigned int line, struct resource_readback *rb,
        const D3D12_BOX *box, unsigned int expected, unsigned int max_diff)
{
    D3D12_BOX b = {0, 0, 0, rb->width, rb->height, rb->depth};
    unsigned int x = 0, y = 0, z;
    bool all_match = true;
    unsigned int got = 0;

    if (box)
        b = *box;

    for (z = b.front; z < b.back; ++z)
    {
        for (y = b.top; y < b.bottom; ++y)
        {
            for (x = b.left; x < b.right; ++x)
            {
                got = get_readback_uint(rb, x, y, z);
                if (!compare_color(got, expected, max_diff))
                {
                    all_match = false;
                    break;
                }
            }
            if (!all_match)
                break;
        }
        if (!all_match)
            break;
    }
    ok_(line)(all_match, "Got 0x%08x, expected 0x%08x at (%u, %u, %u).\n", got, expected, x, y, z);
}

#define check_sub_resource_uint(a, b, c, d, e, f) check_sub_resource_uint_(__LINE__, a, b, c, d, e, f)
static inline void check_sub_resource_uint_(unsigned int line, ID3D12Resource *texture,
        unsigned int sub_resource_idx, ID3D12CommandQueue *queue, ID3D12GraphicsCommandList *command_list,
        unsigned int expected, unsigned int max_diff)
{
    struct resource_readback rb;

    get_texture_readback_with_command_list(texture, sub_resource_idx, &rb, queue, command_list);
    check_readback_data_uint_(line, &rb, NULL, expected, max_diff);
    release_resource_readback(&rb);
}

#define create_default_buffer(a, b, c, d) create_default_buffer_(__LINE__, a, b, c, d)
static inline ID3D12Resource *create_default_buffer_(unsigned int line, ID3D12Device *device,
        size_t size, D3D12_RESOURCE_FLAGS resource_flags, D3D12_RESOURCE_STATES initial_resource_state)
{
    return create_buffer_(line, device, D3D12_HEAP_TYPE_DEFAULT, size,
            resource_flags, initial_resource_state);
}

static ID3D12Resource *create_default_texture_(unsigned int line, ID3D12Device *device,
        D3D12_RESOURCE_DIMENSION dimension, unsigned int width, unsigned int height,
        unsigned int depth_or_array_size, unsigned int miplevel_count, DXGI_FORMAT format,
        D3D12_RESOURCE_FLAGS flags, D3D12_RESOURCE_STATES initial_state)
{
    D3D12_HEAP_PROPERTIES heap_properties;
    D3D12_RESOURCE_DESC resource_desc;
    ID3D12Resource *texture;
    HRESULT hr;

    assert(dimension != D3D12_RESOURCE_DIMENSION_BUFFER);

    memset(&heap_properties, 0, sizeof(heap_properties));
    heap_properties.Type = D3D12_HEAP_TYPE_DEFAULT;

    memset(&resource_desc, 0, sizeof(resource_desc));
    resource_desc.Dimension = dimension;
    resource_desc.Width = width;
    resource_desc.Height = height;
    resource_desc.DepthOrArraySize = depth_or_array_size;
    resource_desc.MipLevels = miplevel_count;
    resource_desc.Format = format;
    resource_desc.SampleDesc.Count = 1;
    resource_desc.Flags = flags;
    hr = ID3D12Device_CreateCommittedResource(device, &heap_properties, D3D12_HEAP_FLAG_NONE,
            &resource_desc, initial_state, NULL, &IID_ID3D12Resource, (void **)&texture);
    ok_(line)(SUCCEEDED(hr), "Failed to create texture, hr %#x.\n", hr);

    return texture;
}

#define create_default_texture(a, b, c, d, e, f) create_default_texture2d_(__LINE__, a, b, c, 1, 1, d, e, f)
#define create_default_texture2d(a, b, c, d, e, f, g, h) create_default_texture2d_(__LINE__, a, b, c, d, e, f, g, h)
static ID3D12Resource *create_default_texture2d_(unsigned int line, ID3D12Device *device,
        unsigned int width, unsigned int height, unsigned int array_size, unsigned int miplevel_count,
        DXGI_FORMAT format, D3D12_RESOURCE_FLAGS flags, D3D12_RESOURCE_STATES initial_state)
{
    return create_default_texture_(line, device, D3D12_RESOURCE_DIMENSION_TEXTURE2D,
            width, height, array_size, miplevel_count, format, flags, initial_state);
}

#define create_default_texture3d(a, b, c, d, e, f, g, h) create_default_texture3d_(__LINE__, a, b, c, d, e, f, g, h)
static inline ID3D12Resource *create_default_texture3d_(unsigned int line, ID3D12Device *device,
        unsigned int width, unsigned int height, unsigned int depth, unsigned int miplevel_count,
        DXGI_FORMAT format, D3D12_RESOURCE_FLAGS flags, D3D12_RESOURCE_STATES initial_state)
{
    return create_default_texture_(line, device, D3D12_RESOURCE_DIMENSION_TEXTURE3D,
            width, height, depth, miplevel_count, format, flags, initial_state);
}

static HRESULT create_root_signature(ID3D12Device *device, const D3D12_ROOT_SIGNATURE_DESC *desc,
        ID3D12RootSignature **root_signature)
{
    ID3DBlob *blob;
    HRESULT hr;

    if (FAILED(hr = D3D12SerializeRootSignature(desc, D3D_ROOT_SIGNATURE_VERSION_1_0, &blob, NULL)))
        return hr;

    hr = ID3D12Device_CreateRootSignature(device, 0, ID3D10Blob_GetBufferPointer(blob),
            ID3D10Blob_GetBufferSize(blob), &IID_ID3D12RootSignature, (void **)root_signature);
    ID3D10Blob_Release(blob);
    return hr;
}

#define create_empty_root_signature(device, flags) create_empty_root_signature_(__LINE__, device, flags)
static ID3D12RootSignature *create_empty_root_signature_(unsigned int line,
        ID3D12Device *device, D3D12_ROOT_SIGNATURE_FLAGS flags)
{
    D3D12_ROOT_SIGNATURE_DESC root_signature_desc;
    ID3D12RootSignature *root_signature = NULL;
    HRESULT hr;

    root_signature_desc.NumParameters = 0;
    root_signature_desc.pParameters = NULL;
    root_signature_desc.NumStaticSamplers = 0;
    root_signature_desc.pStaticSamplers = NULL;
    root_signature_desc.Flags = flags;
    hr = create_root_signature(device, &root_signature_desc, &root_signature);
    ok_(line)(SUCCEEDED(hr), "Failed to create root signature, hr %#x.\n", hr);

    return root_signature;
}

static void init_pipeline_state_desc(D3D12_GRAPHICS_PIPELINE_STATE_DESC *desc,
        ID3D12RootSignature *root_signature, DXGI_FORMAT rt_format,
        const D3D12_SHADER_BYTECODE *vs, const D3D12_SHADER_BYTECODE *ps,
        const D3D12_INPUT_LAYOUT_DESC *input_layout)
{
    static const DWORD vs_code[] =
    {
#if 0
        void main(uint id : SV_VertexID, out float4 position : SV_Position)
        {
            float2 coords = float2((id << 1) & 2, id & 2);
            position = float4(coords * float2(2, -2) + float2(-1, 1), 0, 1);
        }
#endif
        0x43425844, 0xf900d25e, 0x68bfefa7, 0xa63ac0a7, 0xa476af7a, 0x00000001, 0x0000018c, 0x00000003,
        0x0000002c, 0x00000060, 0x00000094, 0x4e475349, 0x0000002c, 0x00000001, 0x00000008, 0x00000020,
        0x00000000, 0x00000006, 0x00000001, 0x00000000, 0x00000101, 0x565f5653, 0x65747265, 0x00444978,
        0x4e47534f, 0x0000002c, 0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000001, 0x00000003,
        0x00000000, 0x0000000f, 0x505f5653, 0x7469736f, 0x006e6f69, 0x58454853, 0x000000f0, 0x00010050,
        0x0000003c, 0x0100086a, 0x04000060, 0x00101012, 0x00000000, 0x00000006, 0x04000067, 0x001020f2,
        0x00000000, 0x00000001, 0x02000068, 0x00000001, 0x0b00008c, 0x00100012, 0x00000000, 0x00004001,
        0x00000001, 0x00004001, 0x00000001, 0x0010100a, 0x00000000, 0x00004001, 0x00000000, 0x07000001,
        0x00100042, 0x00000000, 0x0010100a, 0x00000000, 0x00004001, 0x00000002, 0x05000056, 0x00100032,
        0x00000000, 0x00100086, 0x00000000, 0x0f000032, 0x00102032, 0x00000000, 0x00100046, 0x00000000,
        0x00004002, 0x40000000, 0xc0000000, 0x00000000, 0x00000000, 0x00004002, 0xbf800000, 0x3f800000,
        0x00000000, 0x00000000, 0x08000036, 0x001020c2, 0x00000000, 0x00004002, 0x00000000, 0x00000000,
        0x00000000, 0x3f800000, 0x0100003e,
    };
    static const DWORD ps_code[] =
    {
#if 0
        void main(const in float4 position : SV_Position, out float4 target : SV_Target0)
        {
            target = float4(0.0f, 1.0f, 0.0f, 1.0f);
        }
#endif
        0x43425844, 0x8a4a8140, 0x5eba8e0b, 0x714e0791, 0xb4b8eed2, 0x00000001, 0x000000d8, 0x00000003,
        0x0000002c, 0x00000060, 0x00000094, 0x4e475349, 0x0000002c, 0x00000001, 0x00000008, 0x00000020,
        0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000000f, 0x505f5653, 0x7469736f, 0x006e6f69,
        0x4e47534f, 0x0000002c, 0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000000, 0x00000003,
        0x00000000, 0x0000000f, 0x545f5653, 0x65677261, 0xabab0074, 0x58454853, 0x0000003c, 0x00000050,
        0x0000000f, 0x0100086a, 0x03000065, 0x001020f2, 0x00000000, 0x08000036, 0x001020f2, 0x00000000,
        0x00004002, 0x00000000, 0x3f800000, 0x00000000, 0x3f800000, 0x0100003e,
    };

    memset(desc, 0, sizeof(*desc));
    desc->pRootSignature = root_signature;
    if (vs)
        desc->VS = *vs;
    else
        desc->VS = shader_bytecode(vs_code, sizeof(vs_code));
    if (ps)
        desc->PS = *ps;
    else
        desc->PS = shader_bytecode(ps_code, sizeof(ps_code));
    desc->StreamOutput.RasterizedStream = 0;
    desc->BlendState.RenderTarget[0].RenderTargetWriteMask = D3D12_COLOR_WRITE_ENABLE_ALL;
    desc->RasterizerState.FillMode = D3D12_FILL_MODE_SOLID;
    desc->RasterizerState.CullMode = D3D12_CULL_MODE_BACK;
    if (input_layout)
        desc->InputLayout = *input_layout;
    desc->SampleMask = ~(UINT)0;
    desc->PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
    if (rt_format)
    {
        desc->NumRenderTargets = 1;
        desc->RTVFormats[0] = rt_format;
    }
    desc->SampleDesc.Count = 1;
}

#define create_pipeline_state(a, b, c, d, e, f) create_pipeline_state_(__LINE__, a, b, c, d, e, f)
static ID3D12PipelineState *create_pipeline_state_(unsigned int line, ID3D12Device *device,
        ID3D12RootSignature *root_signature, DXGI_FORMAT rt_format,
        const D3D12_SHADER_BYTECODE *vs, const D3D12_SHADER_BYTECODE *ps,
        const D3D12_INPUT_LAYOUT_DESC *input_layout)
{
    D3D12_GRAPHICS_PIPELINE_STATE_DESC pipeline_state_desc;
    ID3D12PipelineState *pipeline_state;
    HRESULT hr;

    init_pipeline_state_desc(&pipeline_state_desc, root_signature, rt_format, vs, ps, input_layout);
    hr = ID3D12Device_CreateGraphicsPipelineState(device, &pipeline_state_desc,
            &IID_ID3D12PipelineState, (void **)&pipeline_state);
    ok_(line)(SUCCEEDED(hr), "Failed to create graphics pipeline state, hr %#x.\n", hr);

    return pipeline_state;
}

struct test_context_desc
{
    unsigned int rt_width, rt_height, rt_array_size;
    DXGI_FORMAT rt_format;
    DXGI_SAMPLE_DESC sample_desc;
    unsigned int rt_descriptor_count;
    unsigned int root_signature_flags;
    bool no_render_target;
    bool no_root_signature;
    bool no_pipeline;
    const D3D12_SHADER_BYTECODE *ps;
};

struct test_context
{
    ID3D12Device *device;

    ID3D12CommandQueue *queue;
    ID3D12CommandAllocator *allocator;
    ID3D12GraphicsCommandList *list;

    D3D12_RESOURCE_DESC render_target_desc;
    ID3D12Resource *render_target;

    ID3D12DescriptorHeap *rtv_heap;
    D3D12_CPU_DESCRIPTOR_HANDLE rtv;

    ID3D12RootSignature *root_signature;
    ID3D12PipelineState *pipeline_state;

    D3D12_VIEWPORT viewport;
    RECT scissor_rect;
};

#define create_render_target(context, a, b, c) create_render_target_(__LINE__, context, a, b, c)
static void create_render_target_(unsigned int line, struct test_context *context,
        const struct test_context_desc *desc, ID3D12Resource **render_target,
        const D3D12_CPU_DESCRIPTOR_HANDLE *rtv)
{
    D3D12_HEAP_PROPERTIES heap_properties;
    D3D12_RESOURCE_DESC resource_desc;
    D3D12_CLEAR_VALUE clear_value;
    HRESULT hr;

    memset(&heap_properties, 0, sizeof(heap_properties));
    heap_properties.Type = D3D12_HEAP_TYPE_DEFAULT;

    resource_desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    resource_desc.Alignment = 0;
    resource_desc.Width = desc && desc->rt_width ? desc->rt_width : 32;
    resource_desc.Height = desc && desc->rt_height ? desc->rt_height : 32;
    resource_desc.DepthOrArraySize = desc && desc->rt_array_size ? desc->rt_array_size : 1;
    resource_desc.MipLevels = 1;
    resource_desc.Format = desc && desc->rt_format ? desc->rt_format : DXGI_FORMAT_R8G8B8A8_UNORM;
    resource_desc.SampleDesc.Count = desc && desc->sample_desc.Count ? desc->sample_desc.Count : 1;
    resource_desc.SampleDesc.Quality = desc && desc->sample_desc.Count ? desc->sample_desc.Quality : 0;
    resource_desc.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    resource_desc.Flags = D3D12_RESOURCE_FLAG_ALLOW_RENDER_TARGET;
    clear_value.Format = resource_desc.Format;
    clear_value.Color[0] = 1.0f;
    clear_value.Color[1] = 1.0f;
    clear_value.Color[2] = 1.0f;
    clear_value.Color[3] = 1.0f;
    hr = ID3D12Device_CreateCommittedResource(context->device,
            &heap_properties, D3D12_HEAP_FLAG_NONE, &resource_desc,
            D3D12_RESOURCE_STATE_RENDER_TARGET, &clear_value,
            &IID_ID3D12Resource, (void **)render_target);
    ok_(line)(hr == S_OK, "Failed to create texture, hr %#x.\n", hr);

    context->render_target_desc = resource_desc;

    if (rtv)
        ID3D12Device_CreateRenderTargetView(context->device, *render_target, NULL, *rtv);
}

#define init_test_context(context, desc) init_test_context_(__LINE__, context, desc)
static inline bool init_test_context_(unsigned int line, struct test_context *context,
        const struct test_context_desc *desc)
{
    D3D12_DESCRIPTOR_HEAP_DESC rtv_heap_desc;
    ID3D12Device *device;
    HRESULT hr;

    memset(context, 0, sizeof(*context));

    if (!(context->device = create_device()))
    {
        skip_(line)("Failed to create device.\n");
        return false;
    }
    device = context->device;

    context->queue = create_command_queue_(line, device, D3D12_COMMAND_LIST_TYPE_DIRECT, D3D12_COMMAND_QUEUE_PRIORITY_NORMAL);

    hr = ID3D12Device_CreateCommandAllocator(device, D3D12_COMMAND_LIST_TYPE_DIRECT,
            &IID_ID3D12CommandAllocator, (void **)&context->allocator);
    ok_(line)(SUCCEEDED(hr), "Failed to create command allocator, hr %#x.\n", hr);

    hr = ID3D12Device_CreateCommandList(device, 0, D3D12_COMMAND_LIST_TYPE_DIRECT,
            context->allocator, NULL, &IID_ID3D12GraphicsCommandList, (void **)&context->list);
    ok_(line)(SUCCEEDED(hr), "Failed to create command list, hr %#x.\n", hr);

    if (desc && desc->no_render_target)
        return true;

    rtv_heap_desc.NumDescriptors = desc && desc->rt_descriptor_count ? desc->rt_descriptor_count : 1;
    rtv_heap_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    rtv_heap_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
    rtv_heap_desc.NodeMask = 0;
    hr = ID3D12Device_CreateDescriptorHeap(device, &rtv_heap_desc,
            &IID_ID3D12DescriptorHeap, (void **)&context->rtv_heap);
    ok_(line)(SUCCEEDED(hr), "Failed to create descriptor heap, hr %#x.\n", hr);

    context->rtv = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(context->rtv_heap);

    create_render_target_(line, context, desc, &context->render_target, &context->rtv);

    set_viewport(&context->viewport, 0.0f, 0.0f,
            context->render_target_desc.Width, context->render_target_desc.Height, 0.0f, 1.0f);
    set_rect(&context->scissor_rect, 0, 0,
            context->render_target_desc.Width, context->render_target_desc.Height);

    if (desc && desc->no_root_signature)
        return true;

    context->root_signature = create_empty_root_signature_(line,
            device, desc ? desc->root_signature_flags : D3D12_ROOT_SIGNATURE_FLAG_NONE);

    if (desc && desc->no_pipeline)
        return true;

    context->pipeline_state = create_pipeline_state_(line, device,
            context->root_signature, context->render_target_desc.Format,
            NULL, desc ? desc->ps : NULL, NULL);

    return true;
}

#define destroy_test_context(context) destroy_test_context_(__LINE__, context)
static inline void destroy_test_context_(unsigned int line, struct test_context *context)
{
    ULONG refcount;

    if (context->pipeline_state)
        ID3D12PipelineState_Release(context->pipeline_state);
    if (context->root_signature)
        ID3D12RootSignature_Release(context->root_signature);

    if (context->rtv_heap)
        ID3D12DescriptorHeap_Release(context->rtv_heap);
    if (context->render_target)
        ID3D12Resource_Release(context->render_target);

    ID3D12CommandAllocator_Release(context->allocator);
    ID3D12CommandQueue_Release(context->queue);
    ID3D12GraphicsCommandList_Release(context->list);

    refcount = ID3D12Device_Release(context->device);
    ok_(line)(!refcount, "ID3D12Device has %u references left.\n", (unsigned int)refcount);
}

static inline D3D12_CPU_DESCRIPTOR_HANDLE get_cpu_handle(ID3D12Device *device,
        ID3D12DescriptorHeap *heap, D3D12_DESCRIPTOR_HEAP_TYPE heap_type, unsigned int offset)
{
    D3D12_CPU_DESCRIPTOR_HANDLE handle;
    unsigned int descriptor_size;

    handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(heap);
    if (!offset)
        return handle;

    descriptor_size = ID3D12Device_GetDescriptorHandleIncrementSize(device, heap_type);
    handle.ptr += offset * descriptor_size;
    return handle;
}

static inline D3D12_GPU_DESCRIPTOR_HANDLE get_gpu_handle(ID3D12Device *device,
        ID3D12DescriptorHeap *heap, D3D12_DESCRIPTOR_HEAP_TYPE heap_type, unsigned int offset)
{
    D3D12_GPU_DESCRIPTOR_HANDLE handle;
    unsigned int descriptor_size;

    handle = ID3D12DescriptorHeap_GetGPUDescriptorHandleForHeapStart(heap);
    if (!offset)
        return handle;

    descriptor_size = ID3D12Device_GetDescriptorHandleIncrementSize(device, heap_type);
    handle.ptr += offset * descriptor_size;
    return handle;
}

static inline D3D12_CPU_DESCRIPTOR_HANDLE get_cpu_descriptor_handle(struct test_context *context,
        ID3D12DescriptorHeap *heap, unsigned int offset)
{
    return get_cpu_handle(context->device, heap, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, offset);
}

static inline D3D12_CPU_DESCRIPTOR_HANDLE get_cpu_sampler_handle(struct test_context *context,
        ID3D12DescriptorHeap *heap, unsigned int offset)
{
    return get_cpu_handle(context->device, heap, D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER, offset);
}

static inline D3D12_CPU_DESCRIPTOR_HANDLE get_cpu_rtv_handle(struct test_context *context,
        ID3D12DescriptorHeap *heap, unsigned int offset)
{
    return get_cpu_handle(context->device, heap, D3D12_DESCRIPTOR_HEAP_TYPE_RTV, offset);
}

static inline D3D12_GPU_DESCRIPTOR_HANDLE get_gpu_descriptor_handle(struct test_context *context,
        ID3D12DescriptorHeap *heap, unsigned int offset)
{
    return get_gpu_handle(context->device, heap, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, offset);
}

static inline D3D12_GPU_DESCRIPTOR_HANDLE get_gpu_sampler_handle(struct test_context *context,
        ID3D12DescriptorHeap *heap, unsigned int offset)
{
    return get_gpu_handle(context->device, heap, D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER, offset);
}

#endif  /* __VKD3D_D3D12_TEST_UTILS_H */
