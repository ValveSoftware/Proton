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

#include "d3d12_crosstest.h"

#define recreate_command_list(a, b, c) recreate_command_list_(__LINE__, a, b, c)
static void recreate_command_list_(unsigned int line, ID3D12Device *device,
        ID3D12CommandAllocator *allocator, ID3D12GraphicsCommandList **command_list)
{
    HRESULT hr;

    hr = ID3D12CommandAllocator_Reset(allocator);
    ok_(line)(hr == S_OK, "Failed to reset command allocator, hr %#x.\n", hr);
    ID3D12GraphicsCommandList_Release(*command_list);
    hr = ID3D12Device_CreateCommandList(device, 0, D3D12_COMMAND_LIST_TYPE_DIRECT,
            allocator, NULL, &IID_ID3D12GraphicsCommandList, (void **)command_list);
    ok_(line)(hr == S_OK, "Failed to create command list, hr %#x.\n", hr);
}

static void test_invalid_resource_barriers(void)
{
    ID3D12Resource *texture, *readback_buffer, *upload_buffer;
    ID3D12CommandAllocator *command_allocator;
    ID3D12GraphicsCommandList *command_list;
    ID3D12CommandQueue *queue;
    ID3D12Device *device;
    ULONG refcount;
    HRESULT hr;

    if (!(device = create_device()))
    {
        skip("Failed to create device.\n");
        return;
    }

    queue = create_command_queue(device, D3D12_COMMAND_LIST_TYPE_DIRECT, D3D12_COMMAND_QUEUE_PRIORITY_NORMAL);

    hr = ID3D12Device_CreateCommandAllocator(device, D3D12_COMMAND_LIST_TYPE_DIRECT,
            &IID_ID3D12CommandAllocator, (void **)&command_allocator);
    ok(hr == S_OK, "Failed to create command allocator, hr %#x.\n", hr);

    hr = ID3D12Device_CreateCommandList(device, 0, D3D12_COMMAND_LIST_TYPE_DIRECT,
            command_allocator, NULL, &IID_ID3D12GraphicsCommandList, (void **)&command_list);
    ok(hr == S_OK, "Failed to create command list, hr %#x.\n", hr);

    texture = create_default_texture(device, 32, 32, DXGI_FORMAT_R8G8B8A8_UNORM,
            D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    upload_buffer = create_upload_buffer(device, 32, NULL);
    readback_buffer = create_readback_buffer(device, 32);

    /* The following invalid barrier is not detected by the runtime. */
    transition_resource_state(command_list, texture,
            D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE);
    hr = ID3D12GraphicsCommandList_Close(command_list);
    ok(hr == S_OK, "Failed to close command list, hr %#x.\n", hr);

    reset_command_list(command_list, command_allocator);

    /* The before state does not match with the previous state. */
    transition_resource_state(command_list, texture,
            D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_SOURCE);
    transition_resource_state(command_list, texture,
            D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
    hr = ID3D12GraphicsCommandList_Close(command_list);
    /* The returned error code has changed after a Windows update. */
    ok(hr == S_OK || hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);
    if (hr == S_OK)
    {
        exec_command_list(queue, command_list);
        wait_queue_idle(device, queue);
    }

    recreate_command_list(device, command_allocator, &command_list);

    /* The before state does not match with the previous state. */
    transition_resource_state(command_list, texture,
            D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE,
            D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE | D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    transition_resource_state(command_list, texture,
            D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);
    hr = ID3D12GraphicsCommandList_Close(command_list);
    /* The returned error code has changed after a Windows update. */
    ok(hr == S_OK || hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);
    if (hr == S_OK)
    {
        exec_command_list(queue, command_list);
        wait_queue_idle(device, queue);
    }

    recreate_command_list(device, command_allocator, &command_list);

    /* Exactly one write state or a combination of read-only states are allowed. */
    transition_resource_state(command_list, texture,
            D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE,
            D3D12_RESOURCE_STATE_UNORDERED_ACCESS | D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE);
    hr = ID3D12GraphicsCommandList_Close(command_list);
    ok(hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);

    recreate_command_list(device, command_allocator, &command_list);

    /* Readback resources cannot transition from D3D12_RESOURCE_STATE_COPY_DEST. */
    transition_resource_state(command_list, readback_buffer,
            D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_COMMON);
    hr = ID3D12GraphicsCommandList_Close(command_list);
    todo ok(hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);

    recreate_command_list(device, command_allocator, &command_list);

    /* Upload resources cannot transition from D3D12_RESOURCE_STATE_GENERIC_READ. */
    transition_resource_state(command_list, upload_buffer,
            D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_COMMON);
    hr = ID3D12GraphicsCommandList_Close(command_list);
    todo ok(hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);

    recreate_command_list(device, command_allocator, &command_list);

    /* NULL resource. */
    transition_resource_state(command_list, NULL,
            D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE);
    hr = ID3D12GraphicsCommandList_Close(command_list);
    ok(hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);

    ID3D12CommandAllocator_Release(command_allocator);
    ID3D12CommandQueue_Release(queue);
    ID3D12GraphicsCommandList_Release(command_list);
    ID3D12Resource_Release(readback_buffer);
    ID3D12Resource_Release(texture);
    ID3D12Resource_Release(upload_buffer);
    refcount = ID3D12Device_Release(device);
    ok(!refcount, "ID3D12Device has %u references left.\n", (unsigned int)refcount);
}

static void test_invalid_copy_texture_region(void)
{
    ID3D12Resource *dst_texture, *src_texture, *dst_buffer, *src_buffer;
    D3D12_TEXTURE_COPY_LOCATION src_location, dst_location;
    ID3D12CommandAllocator *command_allocator;
    ID3D12GraphicsCommandList *command_list;
    ID3D12Device *device;
    ULONG refcount;
    D3D12_BOX box;
    HRESULT hr;

    if (!(device = create_device()))
    {
        skip("Failed to create device.\n");
        return;
    }

    hr = ID3D12Device_CreateCommandAllocator(device, D3D12_COMMAND_LIST_TYPE_DIRECT,
            &IID_ID3D12CommandAllocator, (void **)&command_allocator);
    ok(hr == S_OK, "Failed to create command allocator, hr %#x.\n", hr);

    hr = ID3D12Device_CreateCommandList(device, 0, D3D12_COMMAND_LIST_TYPE_DIRECT,
            command_allocator, NULL, &IID_ID3D12GraphicsCommandList, (void **)&command_list);
    ok(hr == S_OK, "Failed to create command list, hr %#x.\n", hr);

    src_buffer = create_upload_buffer(device, 0x40000, NULL);
    dst_buffer = create_default_buffer(device, 0x40000, 0, D3D12_RESOURCE_STATE_COPY_DEST);

    src_texture = create_default_texture(device, 64, 64,
            DXGI_FORMAT_BC3_UNORM, 0, D3D12_RESOURCE_STATE_COPY_SOURCE);
    dst_texture = create_default_texture(device, 64, 64,
            DXGI_FORMAT_BC3_UNORM, 0, D3D12_RESOURCE_STATE_COPY_DEST);

    dst_location.pResource = dst_texture;
    dst_location.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    dst_location.SubresourceIndex = 0;

    src_location.pResource = src_buffer;
    src_location.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    src_location.PlacedFootprint.Offset = D3D12_TEXTURE_DATA_PLACEMENT_ALIGNMENT;
    src_location.PlacedFootprint.Footprint.Format = DXGI_FORMAT_BC3_UNORM;
    src_location.PlacedFootprint.Footprint.Width = 64;
    src_location.PlacedFootprint.Footprint.Height = 63; /* height must be multiple of block size */
    src_location.PlacedFootprint.Footprint.Depth = 1;
    src_location.PlacedFootprint.Footprint.RowPitch
            = 64 / format_block_width(DXGI_FORMAT_BC3_UNORM) * format_size(DXGI_FORMAT_BC3_UNORM);

    ID3D12GraphicsCommandList_CopyTextureRegion(command_list,
            &dst_location, 0, 0, 0, &src_location, NULL);

    hr = ID3D12GraphicsCommandList_Close(command_list);
    todo ok(hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);

    recreate_command_list(device, command_allocator, &command_list);

    src_location.PlacedFootprint.Footprint.Width = 4;
    src_location.PlacedFootprint.Footprint.Height = 4;

    /* dst y must be multiple of block size */
    ID3D12GraphicsCommandList_CopyTextureRegion(command_list,
            &dst_location, 0, 3, 0, &src_location, NULL);

    hr = ID3D12GraphicsCommandList_Close(command_list);
    todo ok(hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);

    recreate_command_list(device, command_allocator, &command_list);

    /* row pitch must be multiple of D3D12_TEXTURE_DATA_PLACEMENT_ALIGNMENT */
    src_location.PlacedFootprint.Footprint.RowPitch
            = 64 / format_block_width(DXGI_FORMAT_BC3_UNORM) * format_size(DXGI_FORMAT_BC3_UNORM) + 1;

    ID3D12GraphicsCommandList_CopyTextureRegion(command_list,
            &dst_location, 0, 0, 0, &src_location, NULL);

    hr = ID3D12GraphicsCommandList_Close(command_list);
    todo ok(hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);

    recreate_command_list(device, command_allocator, &command_list);

    dst_location.pResource = dst_buffer;
    dst_location.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    dst_location.PlacedFootprint.Offset = D3D12_TEXTURE_DATA_PLACEMENT_ALIGNMENT;
    dst_location.PlacedFootprint.Footprint.Format = DXGI_FORMAT_BC3_UNORM;
    dst_location.PlacedFootprint.Footprint.Width = 64;
    dst_location.PlacedFootprint.Footprint.Height = 64;
    dst_location.PlacedFootprint.Footprint.Depth = 1;
    dst_location.PlacedFootprint.Footprint.RowPitch
            = 64 / format_block_width(DXGI_FORMAT_BC3_UNORM) * format_size(DXGI_FORMAT_BC3_UNORM);

    src_location.pResource = src_texture;
    src_location.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    src_location.SubresourceIndex = 0;

    /* coordinates must be multiple of block size */
    set_box(&box, 0, 0, 0, 31, 31, 1);
    ID3D12GraphicsCommandList_CopyTextureRegion(command_list,
            &dst_location, 0, 0, 0, &src_location, &box);

    hr = ID3D12GraphicsCommandList_Close(command_list);
    todo ok(hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);

    recreate_command_list(device, command_allocator, &command_list);

    ID3D12Resource_Release(src_texture);
    src_texture = create_default_texture2d(device, 4, 4, 1, 3, DXGI_FORMAT_BC3_UNORM,
            D3D12_RESOURCE_FLAG_NONE, D3D12_RESOURCE_STATE_COPY_SOURCE);

    src_location.pResource = src_texture;
    src_location.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    src_location.SubresourceIndex = 1;

    /* coordinates must be multiple of block size even for smallest miplevels */
    set_box(&box, 0, 0, 0, 2, 2, 1);
    ID3D12GraphicsCommandList_CopyTextureRegion(command_list,
            &dst_location, 0, 0, 0, &src_location, &box);

    hr = ID3D12GraphicsCommandList_Close(command_list);
    todo ok(hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);

    recreate_command_list(device, command_allocator, &command_list);

    src_location.SubresourceIndex = 2;

    /* coordinates must be multiple of block size even for smallest miplevels */
    set_box(&box, 0, 0, 0, 1, 1, 1);
    ID3D12GraphicsCommandList_CopyTextureRegion(command_list,
            &dst_location, 0, 0, 0, &src_location, &box);

    hr = ID3D12GraphicsCommandList_Close(command_list);
    todo ok(hr == E_INVALIDARG, "Got unexpected hr %#x.\n", hr);

    ID3D12CommandAllocator_Release(command_allocator);
    ID3D12GraphicsCommandList_Release(command_list);
    ID3D12Resource_Release(dst_buffer);
    ID3D12Resource_Release(src_buffer);
    ID3D12Resource_Release(src_texture);
    ID3D12Resource_Release(dst_texture);
    refcount = ID3D12Device_Release(device);
    ok(!refcount, "ID3D12Device has %u references left.\n", (unsigned int)refcount);
}

static void test_invalid_unordered_access_views(void)
{
    D3D12_UNORDERED_ACCESS_VIEW_DESC uav_desc;
    D3D12_CPU_DESCRIPTOR_HANDLE cpu_handle;
    ID3D12DescriptorHeap *heap;
    ID3D12Resource *buffer;
    ID3D12Device *device;
    ULONG refcount;

    if (!(device = create_device()))
    {
        skip("Failed to create device.\n");
        return;
    }

    heap = create_gpu_descriptor_heap(device, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, 16);

    buffer = create_default_buffer(device, 64 * sizeof(float),
            D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS);

    cpu_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(heap);

    /* Buffer views cannot be created for compressed formats. */
    uav_desc.Format = DXGI_FORMAT_BC1_UNORM;
    uav_desc.ViewDimension = D3D12_UAV_DIMENSION_BUFFER;
    uav_desc.Buffer.FirstElement = 0;
    uav_desc.Buffer.NumElements = 64;
    uav_desc.Buffer.StructureByteStride = 0;
    uav_desc.Buffer.CounterOffsetInBytes = 0;
    uav_desc.Buffer.Flags = D3D12_BUFFER_UAV_FLAG_NONE;
    ID3D12Device_CreateUnorderedAccessView(device, buffer, NULL, &uav_desc, cpu_handle);

    ID3D12DescriptorHeap_Release(heap);
    ID3D12Resource_Release(buffer);
    refcount = ID3D12Device_Release(device);
    ok(!refcount, "ID3D12Device has %u references left.\n", (unsigned int)refcount);
}

START_TEST(d3d12_invalid_usage)
{
    parse_args(argc, argv);
    enable_d3d12_debug_layer(argc, argv);
    init_adapter_info();

    run_test(test_invalid_resource_barriers);
    run_test(test_invalid_copy_texture_region);
    run_test(test_invalid_unordered_access_views);
}
