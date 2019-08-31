/*
 * Copyright 2016 Henri Verbeet for CodeWeavers
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

/*
 * This application contains code derived from Microsoft's "HelloTriangle"
 * demo, the license for which follows:
 *
 * Copyright (c) 2015 Microsoft
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#define INITGUID
#include <assert.h>
#include "demo.h"

#include "triangle_vs.h"
#include "triangle_ps.h"

struct cxt_fence
{
    ID3D12Fence *fence;
    UINT64 value;
    HANDLE event;
};

struct cx_triangle
{
    struct demo demo;

    struct demo_window *window;

    unsigned int width;
    unsigned int height;
    float aspect_ratio;

    D3D12_VIEWPORT vp;
    D3D12_RECT scissor_rect;

    ID3D12Device *device;
    ID3D12CommandQueue *command_queue;
    struct demo_swapchain *swapchain;
    ID3D12DescriptorHeap *rtv_heap;
    unsigned int rtv_descriptor_size;
    ID3D12Resource *render_targets[3];
    ID3D12CommandAllocator *command_allocator;

    ID3D12RootSignature *root_signature;
    ID3D12PipelineState *pipeline_state;
    ID3D12GraphicsCommandList *command_list;
    ID3D12Resource *vb;
    D3D12_VERTEX_BUFFER_VIEW vbv;

    unsigned int frame_idx;
    struct cxt_fence fence;
};

static void cxt_populate_command_list(struct cx_triangle *cxt)
{
    static const float clear_colour[] = {0.0f, 0.2f, 0.4f, 1.0f};

    D3D12_CPU_DESCRIPTOR_HANDLE rtv_handle;
    D3D12_RESOURCE_BARRIER barrier;
    HRESULT hr;

    hr = ID3D12CommandAllocator_Reset(cxt->command_allocator);
    assert(SUCCEEDED(hr));

    hr = ID3D12GraphicsCommandList_Reset(cxt->command_list, cxt->command_allocator, cxt->pipeline_state);
    assert(SUCCEEDED(hr));

    ID3D12GraphicsCommandList_SetGraphicsRootSignature(cxt->command_list, cxt->root_signature);
    ID3D12GraphicsCommandList_RSSetViewports(cxt->command_list, 1, &cxt->vp);
    ID3D12GraphicsCommandList_RSSetScissorRects(cxt->command_list, 1, &cxt->scissor_rect);

    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
    barrier.Transition.pResource = cxt->render_targets[cxt->frame_idx];
    barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
    barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;
    ID3D12GraphicsCommandList_ResourceBarrier(cxt->command_list, 1, &barrier);

    rtv_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(cxt->rtv_heap);
    rtv_handle.ptr += cxt->frame_idx * cxt->rtv_descriptor_size;
    ID3D12GraphicsCommandList_OMSetRenderTargets(cxt->command_list, 1, &rtv_handle, FALSE, NULL);

    ID3D12GraphicsCommandList_ClearRenderTargetView(cxt->command_list, rtv_handle, clear_colour, 0, NULL);
    ID3D12GraphicsCommandList_IASetPrimitiveTopology(cxt->command_list, D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D12GraphicsCommandList_IASetVertexBuffers(cxt->command_list, 0, 1, &cxt->vbv);
    ID3D12GraphicsCommandList_DrawInstanced(cxt->command_list, 3, 1, 0, 0);

    barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
    barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
    ID3D12GraphicsCommandList_ResourceBarrier(cxt->command_list, 1, &barrier);

    hr = ID3D12GraphicsCommandList_Close(cxt->command_list);
    assert(SUCCEEDED(hr));
}

static void cxt_wait_for_previous_frame(struct cx_triangle *cxt)
{
    struct cxt_fence *fence = &cxt->fence;
    const UINT64 v = fence->value;
    HRESULT hr;

    hr = ID3D12CommandQueue_Signal(cxt->command_queue, fence->fence, v);
    assert(SUCCEEDED(hr));

    ++fence->value;

    if (ID3D12Fence_GetCompletedValue(fence->fence) < v)
    {
        hr = ID3D12Fence_SetEventOnCompletion(fence->fence, v, fence->event);
        assert(SUCCEEDED(hr));
        demo_wait_event(fence->event, INFINITE);
    }

    cxt->frame_idx = demo_swapchain_get_current_back_buffer_index(cxt->swapchain);
}

static void cxt_render_frame(struct demo_window *window, void *user_data)
{
    struct cx_triangle *cxt = user_data;

    cxt_populate_command_list(cxt);
    ID3D12CommandQueue_ExecuteCommandLists(cxt->command_queue, 1, (ID3D12CommandList **)&cxt->command_list);
    demo_swapchain_present(cxt->swapchain);
    cxt_wait_for_previous_frame(cxt);
}

static void cxt_destroy_pipeline(struct cx_triangle *cxt)
{
    unsigned int i;

    ID3D12CommandAllocator_Release(cxt->command_allocator);
    for (i = 0; i < ARRAY_SIZE(cxt->render_targets); ++i)
    {
        ID3D12Resource_Release(cxt->render_targets[i]);
    }
    ID3D12DescriptorHeap_Release(cxt->rtv_heap);
    demo_swapchain_destroy(cxt->swapchain);
    ID3D12CommandQueue_Release(cxt->command_queue);
    ID3D12Device_Release(cxt->device);
}

static void cxt_load_pipeline(struct cx_triangle *cxt)
{
    struct demo_swapchain_desc swapchain_desc;
    D3D12_DESCRIPTOR_HEAP_DESC rtv_heap_desc;
    D3D12_CPU_DESCRIPTOR_HANDLE rtv_handle;
    D3D12_COMMAND_QUEUE_DESC queue_desc;
    unsigned int i;
    HRESULT hr;

    hr = D3D12CreateDevice(NULL, D3D_FEATURE_LEVEL_11_0, &IID_ID3D12Device, (void **)&cxt->device);
    assert(SUCCEEDED(hr));

    memset(&queue_desc, 0, sizeof(queue_desc));
    queue_desc.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE;
    queue_desc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
    hr = ID3D12Device_CreateCommandQueue(cxt->device, &queue_desc,
            &IID_ID3D12CommandQueue, (void **)&cxt->command_queue);
    assert(SUCCEEDED(hr));

    swapchain_desc.buffer_count = ARRAY_SIZE(cxt->render_targets);
    swapchain_desc.format = DXGI_FORMAT_B8G8R8A8_UNORM;
    swapchain_desc.width = cxt->width;
    swapchain_desc.height = cxt->height;
    cxt->swapchain = demo_swapchain_create(cxt->command_queue, cxt->window, &swapchain_desc);
    assert(cxt->swapchain);
    cxt->frame_idx = demo_swapchain_get_current_back_buffer_index(cxt->swapchain);

    memset(&rtv_heap_desc, 0, sizeof(rtv_heap_desc));
    rtv_heap_desc.NumDescriptors = ARRAY_SIZE(cxt->render_targets);
    rtv_heap_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    rtv_heap_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
    hr = ID3D12Device_CreateDescriptorHeap(cxt->device, &rtv_heap_desc,
            &IID_ID3D12DescriptorHeap, (void **)&cxt->rtv_heap);
    assert(SUCCEEDED(hr));

    cxt->rtv_descriptor_size = ID3D12Device_GetDescriptorHandleIncrementSize(cxt->device,
            D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
    rtv_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(cxt->rtv_heap);
    for (i = 0; i < ARRAY_SIZE(cxt->render_targets); ++i)
    {
        cxt->render_targets[i] = demo_swapchain_get_back_buffer(cxt->swapchain, i);
        ID3D12Device_CreateRenderTargetView(cxt->device, cxt->render_targets[i], NULL, rtv_handle);
        rtv_handle.ptr += cxt->rtv_descriptor_size;
    }

    hr = ID3D12Device_CreateCommandAllocator(cxt->device, D3D12_COMMAND_LIST_TYPE_DIRECT,
            &IID_ID3D12CommandAllocator, (void **)&cxt->command_allocator);
    assert(SUCCEEDED(hr));
}

static void cxt_fence_destroy(struct cxt_fence *cxt_fence)
{
    ID3D12Fence_Release(cxt_fence->fence);
    demo_destroy_event(cxt_fence->event);
}

static void cxt_destroy_assets(struct cx_triangle *cxt)
{
    cxt_fence_destroy(&cxt->fence);
    ID3D12Resource_Release(cxt->vb);
    ID3D12GraphicsCommandList_Release(cxt->command_list);
    ID3D12PipelineState_Release(cxt->pipeline_state);
    ID3D12RootSignature_Release(cxt->root_signature);
}

static void cxt_fence_create(struct cxt_fence *fence, ID3D12Device *device)
{
    HRESULT hr;

    hr = ID3D12Device_CreateFence(device, 0, D3D12_FENCE_FLAG_NONE,
            &IID_ID3D12Fence, (void **)&fence->fence);
    assert(SUCCEEDED(hr));
    fence->value = 1;
    fence->event = demo_create_event();
    assert(fence->event);
}

static void cxt_load_assets(struct cx_triangle *cxt)
{
    static const D3D12_INPUT_ELEMENT_DESC il_desc[] =
    {
        {"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
        {"COLOR", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 12, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
    };

    const struct
    {
        struct demo_vec3 position;
        struct demo_vec4 colour;
    }
    vertices[] =
    {
        {{ 0.0f,   0.25f * cxt->aspect_ratio, 0.0f}, {1.0f, 0.0f, 0.0f, 1.0f}},
        {{ 0.25f, -0.25f * cxt->aspect_ratio, 0.0f}, {0.0f, 1.0f, 0.0f, 1.0f}},
        {{-0.25f, -0.25f * cxt->aspect_ratio, 0.0f}, {0.0f, 0.0f, 1.0f, 1.0f}},
    };

    D3D12_ROOT_SIGNATURE_DESC root_signature_desc;
    D3D12_GRAPHICS_PIPELINE_STATE_DESC pso_desc;
    D3D12_RESOURCE_DESC resource_desc;
    D3D12_HEAP_PROPERTIES heap_desc;
    D3D12_RANGE read_range = {0, 0};
    HRESULT hr;
    void *data;

    memset(&root_signature_desc, 0, sizeof(root_signature_desc));
    root_signature_desc.Flags = D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT;
    hr = demo_create_root_signature(cxt->device, &root_signature_desc, &cxt->root_signature);
    assert(SUCCEEDED(hr));

    memset(&pso_desc, 0, sizeof(pso_desc));
    pso_desc.InputLayout.pInputElementDescs = il_desc;
    pso_desc.InputLayout.NumElements = ARRAY_SIZE(il_desc);
    pso_desc.pRootSignature = cxt->root_signature;
    pso_desc.VS.pShaderBytecode = g_vs_main;
    pso_desc.VS.BytecodeLength = sizeof(g_vs_main);
    pso_desc.PS.pShaderBytecode = g_ps_main;
    pso_desc.PS.BytecodeLength = sizeof(g_ps_main);
    demo_rasterizer_desc_init_default(&pso_desc.RasterizerState);
    demo_blend_desc_init_default(&pso_desc.BlendState);
    pso_desc.DepthStencilState.DepthEnable = FALSE;
    pso_desc.DepthStencilState.StencilEnable = FALSE;
    pso_desc.SampleMask = UINT_MAX;
    pso_desc.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
    pso_desc.NumRenderTargets = 1;
    pso_desc.RTVFormats[0] = DXGI_FORMAT_B8G8R8A8_UNORM;
    pso_desc.SampleDesc.Count = 1;
    hr = ID3D12Device_CreateGraphicsPipelineState(cxt->device, &pso_desc,
            &IID_ID3D12PipelineState, (void **)&cxt->pipeline_state);
    assert(SUCCEEDED(hr));

    hr = ID3D12Device_CreateCommandList(cxt->device, 0, D3D12_COMMAND_LIST_TYPE_DIRECT, cxt->command_allocator,
            cxt->pipeline_state, &IID_ID3D12GraphicsCommandList, (void **)&cxt->command_list);
    assert(SUCCEEDED(hr));

    hr = ID3D12GraphicsCommandList_Close(cxt->command_list);
    assert(SUCCEEDED(hr));

    heap_desc.Type = D3D12_HEAP_TYPE_UPLOAD;
    heap_desc.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
    heap_desc.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
    heap_desc.CreationNodeMask = 1;
    heap_desc.VisibleNodeMask = 1;

    resource_desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    resource_desc.Alignment = 0;
    resource_desc.Width = sizeof(vertices);
    resource_desc.Height = 1;
    resource_desc.DepthOrArraySize = 1;
    resource_desc.MipLevels = 1;
    resource_desc.Format = DXGI_FORMAT_UNKNOWN;
    resource_desc.SampleDesc.Count = 1;
    resource_desc.SampleDesc.Quality = 0;
    resource_desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    resource_desc.Flags = D3D12_RESOURCE_FLAG_NONE;

    hr = ID3D12Device_CreateCommittedResource(cxt->device, &heap_desc, D3D12_HEAP_FLAG_NONE, &resource_desc,
            D3D12_RESOURCE_STATE_GENERIC_READ, NULL, &IID_ID3D12Resource, (void **)&cxt->vb);
    assert(SUCCEEDED(hr));

    hr = ID3D12Resource_Map(cxt->vb, 0, &read_range, &data);
    assert(SUCCEEDED(hr));
    memcpy(data, vertices, sizeof(vertices));
    ID3D12Resource_Unmap(cxt->vb, 0, NULL);

    cxt->vbv.BufferLocation = ID3D12Resource_GetGPUVirtualAddress(cxt->vb);
    cxt->vbv.StrideInBytes = sizeof(*vertices);
    cxt->vbv.SizeInBytes = sizeof(vertices);

    cxt_fence_create(&cxt->fence, cxt->device);
    cxt_wait_for_previous_frame(cxt);
}

static void cxt_key_press(struct demo_window *window, demo_key key, void *user_data)
{
    if (key == DEMO_KEY_ESCAPE)
        demo_window_destroy(window);
}

static int cxt_main(void)
{
    unsigned int width = 640, height = 480;
    struct cx_triangle cxt;

    memset(&cxt, 0, sizeof(cxt));

    if (!demo_init(&cxt.demo, NULL))
        return EXIT_FAILURE;

    cxt.window = demo_window_create(&cxt.demo, "Vkd3d Triangle", width, height, &cxt);
    demo_window_set_expose_func(cxt.window, cxt_render_frame);
    demo_window_set_key_press_func(cxt.window, cxt_key_press);

    cxt.width = width;
    cxt.height = height;
    cxt.aspect_ratio = (float)width / (float)height;

    cxt.vp.Width = (float)width;
    cxt.vp.Height = (float)height;
    cxt.vp.MaxDepth = 1.0f;

    cxt.scissor_rect.right = width;
    cxt.scissor_rect.bottom = height;

    cxt_load_pipeline(&cxt);
    cxt_load_assets(&cxt);

    demo_process_events(&cxt.demo);

    cxt_wait_for_previous_frame(&cxt);
    cxt_destroy_assets(&cxt);
    cxt_destroy_pipeline(&cxt);
    demo_cleanup(&cxt.demo);

    return EXIT_SUCCESS;
}

#ifdef _WIN32
int wmain(void)
#else
int main(void)
#endif
{
    return cxt_main();
}
