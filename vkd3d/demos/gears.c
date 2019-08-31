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
 * This application contains code derived from glxgears, the license for which
 * follows:
 *
 * Copyright (C) 1999-2001  Brian Paul   All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * BRIAN PAUL BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#define INITGUID
#define _GNU_SOURCE
#include <sys/time.h>
#include <assert.h>
#include <stdio.h>
#include <math.h>
#include "demo.h"

#include "gears_vs.h"
#include "gears_ps_flat.h"
#include "gears_ps_smooth.h"

struct cxg_fence
{
    ID3D12Fence *fence;
    UINT64 value;
    HANDLE event;
};

struct cxg_cb_data
{
    float mvp_matrix[16];
    float normal_matrix[12];
};

struct cxg_instance_data
{
    struct demo_vec3 diffuse;
    struct demo_vec4 transform;
};

struct cxg_vertex
{
    struct demo_vec3 position;
    struct demo_vec3 normal;
};

struct cxg_face
{
    uint16_t v[3];
};

struct cxg_mesh
{
    struct cxg_vertex *vertices;
    size_t vertex_count;

    struct cxg_face *faces;
    size_t flat_face_count;
    size_t smooth_face_count;
};

struct cxg_draw
{
    size_t vertex_idx;
    size_t flat_index_idx;
    size_t flat_index_count;
    size_t smooth_index_idx;
    size_t smooth_index_count;
};

struct cx_gears
{
    struct demo demo;

    struct demo_window *window;

    unsigned int width;
    unsigned int height;
    float aspect_ratio;

    bool animate;
    float alpha;
    float theta;
    float phi;

    D3D12_VIEWPORT vp;
    D3D12_RECT scissor_rect;

    ID3D12Device *device;
    ID3D12CommandQueue *command_queue;
    struct demo_swapchain *swapchain;
    ID3D12DescriptorHeap *rtv_heap, *dsv_heap;
    unsigned int rtv_descriptor_size;
    ID3D12Resource *render_targets[3];
    ID3D12CommandAllocator *command_allocator[3];

    ID3D12RootSignature *root_signature;
    ID3D12PipelineState *pipeline_state_smooth, *pipeline_state_flat;
    ID3D12GraphicsCommandList *command_list[3];
    ID3D12Resource *ds, *cb, *vb[2], *ib;
    D3D12_VERTEX_BUFFER_VIEW vbv[2];
    D3D12_INDEX_BUFFER_VIEW ibv;

    unsigned int rt_idx;
    struct cxg_fence fence;

    struct cxg_cb_data *cb_data;
    struct cxg_instance_data *instance_data;
    struct cxg_draw draws[3];
};

static void cxg_populate_command_list(struct cx_gears *cxg, unsigned int rt_idx)
{
    ID3D12GraphicsCommandList *command_list = cxg->command_list[rt_idx];
    static const float clear_colour[] = {0.0f, 0.0f, 0.0f, 1.0f};

    D3D12_CPU_DESCRIPTOR_HANDLE rtv_handle, dsv_handle;
    D3D12_RESOURCE_BARRIER barrier;
    HRESULT hr;
    size_t i;

    hr = ID3D12CommandAllocator_Reset(cxg->command_allocator[rt_idx]);
    assert(SUCCEEDED(hr));

    hr = ID3D12GraphicsCommandList_Reset(command_list, cxg->command_allocator[rt_idx], cxg->pipeline_state_flat);
    assert(SUCCEEDED(hr));

    ID3D12GraphicsCommandList_SetGraphicsRootSignature(command_list, cxg->root_signature);
    ID3D12GraphicsCommandList_SetGraphicsRootConstantBufferView(command_list, 0,
            ID3D12Resource_GetGPUVirtualAddress(cxg->cb));

    ID3D12GraphicsCommandList_RSSetViewports(command_list, 1, &cxg->vp);
    ID3D12GraphicsCommandList_RSSetScissorRects(command_list, 1, &cxg->scissor_rect);

    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
    barrier.Transition.pResource = cxg->render_targets[rt_idx];
    barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
    barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;
    ID3D12GraphicsCommandList_ResourceBarrier(command_list, 1, &barrier);

    rtv_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(cxg->rtv_heap);
    rtv_handle.ptr += rt_idx * cxg->rtv_descriptor_size;
    dsv_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(cxg->dsv_heap);
    ID3D12GraphicsCommandList_OMSetRenderTargets(command_list, 1, &rtv_handle, FALSE, &dsv_handle);

    ID3D12GraphicsCommandList_ClearRenderTargetView(command_list, rtv_handle, clear_colour, 0, NULL);
    ID3D12GraphicsCommandList_ClearDepthStencilView(command_list,
            dsv_handle, D3D12_CLEAR_FLAG_DEPTH, 1.0f, 0, 0, NULL);
    ID3D12GraphicsCommandList_IASetPrimitiveTopology(command_list, D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D12GraphicsCommandList_IASetIndexBuffer(command_list, &cxg->ibv);
    ID3D12GraphicsCommandList_IASetVertexBuffers(command_list, 0, 2, cxg->vbv);

    for (i = 0; i < ARRAY_SIZE(cxg->draws); ++i)
    {
        ID3D12GraphicsCommandList_DrawIndexedInstanced(command_list, cxg->draws[i].flat_index_count,
                1, cxg->draws[i].flat_index_idx, cxg->draws[i].vertex_idx, i);

        ID3D12GraphicsCommandList_SetPipelineState(command_list, cxg->pipeline_state_smooth);
        ID3D12GraphicsCommandList_DrawIndexedInstanced(command_list, cxg->draws[i].smooth_index_count,
                1, cxg->draws[i].smooth_index_idx, cxg->draws[i].vertex_idx, i);

        ID3D12GraphicsCommandList_SetPipelineState(command_list, cxg->pipeline_state_flat);
    }

    barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
    barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
    ID3D12GraphicsCommandList_ResourceBarrier(command_list, 1, &barrier);

    hr = ID3D12GraphicsCommandList_Close(command_list);
    assert(SUCCEEDED(hr));
}

static void cxg_wait_for_previous_frame(struct cx_gears *cxg)
{
    struct cxg_fence *fence = &cxg->fence;
    const UINT64 v = fence->value;
    HRESULT hr;

    hr = ID3D12CommandQueue_Signal(cxg->command_queue, fence->fence, v);
    assert(SUCCEEDED(hr));

    ++fence->value;

    if (ID3D12Fence_GetCompletedValue(fence->fence) < v)
    {
        hr = ID3D12Fence_SetEventOnCompletion(fence->fence, v, fence->event);
        assert(SUCCEEDED(hr));
        demo_wait_event(fence->event, INFINITE);
    }

    cxg->rt_idx = demo_swapchain_get_current_back_buffer_index(cxg->swapchain);
}

static void cxg_update_mvp(struct cx_gears *cxg)
{
    float s1 = sinf(cxg->theta);
    float c1 = cosf(cxg->theta);
    float s2 = sinf(cxg->phi);
    float c2 = cosf(cxg->phi);
    float z_offset = -40.0f;
    float z_max = 60.0f;
    float z_min = 5.0f;
    float sx = z_min;
    float sy = z_min * cxg->aspect_ratio;
    float sz = -((z_max + z_min) / (z_max - z_min));
    float d = (-2.0f * z_max * z_min) / (z_max - z_min);
    unsigned int i, j;
    float world[] =
    {
          c1,  s2 * s1, c2 * -s1, 0.0f,
        0.0f,       c2,       s2, 0.0f,
          s1, -s2 * c1,  c2 * c1, 0.0f,
        0.0f,     0.0f, z_offset, 1.0f,
    };
    float projection[] =
    {
          sx, 0.0f, 0.0f,  0.0f,
        0.0f,   sy, 0.0f,  0.0f,
        0.0f, 0.0f,   sz, -1.0f,
        0.0f, 0.0f,    d,  0.0f,
    };

    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            cxg->cb_data->mvp_matrix[i * 4 + j] = projection[j] * world[i * 4]
                    + projection[j +  4] * world[i * 4 + 1]
                    + projection[j +  8] * world[i * 4 + 2]
                    + projection[j + 12] * world[i * 4 + 3];
        }
    }
    memcpy(cxg->cb_data->normal_matrix, world, sizeof(cxg->cb_data->normal_matrix));
}

static void cxg_render_frame(struct cx_gears *cxg)
{
    static double t_prev = -1.0;
    struct timeval tv;
    double dt, t;
    float a;

    gettimeofday(&tv, NULL);
    t = tv.tv_sec + tv.tv_usec / 1000000.0;
    if (t_prev < 0.0)
        t_prev = t;
    dt = t - t_prev;
    t_prev = t;

    if (cxg->animate)
    {
        cxg->alpha += (70.0 * M_PI / 180.0) * dt; /* 70°/s */
        if (cxg->alpha > 20.0 * M_PI)
            cxg->alpha -= 20.0 * M_PI;
    }

    a = cxg->alpha;
    demo_vec4_set(&cxg->instance_data[0].transform, cosf(a), sinf(a), -3.0f, -2.0f);
    a = (-2.0f * cxg->alpha) - 9.0f * M_PI / 180.0;
    demo_vec4_set(&cxg->instance_data[1].transform, cosf(a), sinf(a),  3.1f, -2.0f);
    a = (-2.0f * cxg->alpha) - 25.0f * M_PI / 180.0;
    demo_vec4_set(&cxg->instance_data[2].transform, cosf(a), sinf(a), -3.1f,  4.2f);

    ID3D12CommandQueue_ExecuteCommandLists(cxg->command_queue, 1,
            (ID3D12CommandList **)&cxg->command_list[cxg->rt_idx]);
    demo_swapchain_present(cxg->swapchain);
    cxg_wait_for_previous_frame(cxg);
}

static void cxg_destroy_pipeline(struct cx_gears *cxg)
{
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(cxg->command_allocator); ++i)
    {
        ID3D12CommandAllocator_Release(cxg->command_allocator[i]);
    }
    for (i = 0; i < ARRAY_SIZE(cxg->render_targets); ++i)
    {
        ID3D12Resource_Release(cxg->render_targets[i]);
    }
    ID3D12DescriptorHeap_Release(cxg->dsv_heap);
    ID3D12DescriptorHeap_Release(cxg->rtv_heap);
    demo_swapchain_destroy(cxg->swapchain);
    ID3D12CommandQueue_Release(cxg->command_queue);
    ID3D12Device_Release(cxg->device);
}

static void cxg_load_pipeline(struct cx_gears *cxg)
{
    struct demo_swapchain_desc swapchain_desc;
    D3D12_CPU_DESCRIPTOR_HANDLE rtv_handle;
    D3D12_DESCRIPTOR_HEAP_DESC heap_desc;
    D3D12_COMMAND_QUEUE_DESC queue_desc;
    unsigned int i;
    HRESULT hr;

    hr = D3D12CreateDevice(NULL, D3D_FEATURE_LEVEL_11_0, &IID_ID3D12Device, (void **)&cxg->device);
    assert(SUCCEEDED(hr));

    memset(&queue_desc, 0, sizeof(queue_desc));
    queue_desc.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE;
    queue_desc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
    hr = ID3D12Device_CreateCommandQueue(cxg->device, &queue_desc,
            &IID_ID3D12CommandQueue, (void **)&cxg->command_queue);
    assert(SUCCEEDED(hr));

    swapchain_desc.buffer_count = ARRAY_SIZE(cxg->render_targets);
    swapchain_desc.format = DXGI_FORMAT_B8G8R8A8_UNORM;
    swapchain_desc.width = cxg->width;
    swapchain_desc.height = cxg->height;
    cxg->swapchain = demo_swapchain_create(cxg->command_queue, cxg->window, &swapchain_desc);
    assert(cxg->swapchain);
    cxg->rt_idx = demo_swapchain_get_current_back_buffer_index(cxg->swapchain);

    memset(&heap_desc, 0, sizeof(heap_desc));
    heap_desc.NumDescriptors = ARRAY_SIZE(cxg->render_targets);
    heap_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
    heap_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
    hr = ID3D12Device_CreateDescriptorHeap(cxg->device, &heap_desc,
            &IID_ID3D12DescriptorHeap, (void **)&cxg->rtv_heap);
    assert(SUCCEEDED(hr));

    cxg->rtv_descriptor_size = ID3D12Device_GetDescriptorHandleIncrementSize(cxg->device,
            D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
    rtv_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(cxg->rtv_heap);
    for (i = 0; i < ARRAY_SIZE(cxg->render_targets); ++i)
    {
        cxg->render_targets[i] = demo_swapchain_get_back_buffer(cxg->swapchain, i);
        ID3D12Device_CreateRenderTargetView(cxg->device, cxg->render_targets[i], NULL, rtv_handle);
        rtv_handle.ptr += cxg->rtv_descriptor_size;
    }

    heap_desc.NumDescriptors = 1;
    heap_desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_DSV;
    heap_desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
    hr = ID3D12Device_CreateDescriptorHeap(cxg->device, &heap_desc,
            &IID_ID3D12DescriptorHeap, (void **)&cxg->dsv_heap);
    assert(SUCCEEDED(hr));

    for (i = 0; i < ARRAY_SIZE(cxg->command_allocator); ++i)
    {
        hr = ID3D12Device_CreateCommandAllocator(cxg->device, D3D12_COMMAND_LIST_TYPE_DIRECT,
                &IID_ID3D12CommandAllocator, (void **)&cxg->command_allocator[i]);
        assert(SUCCEEDED(hr));
    }
}

static void cxg_fence_destroy(struct cxg_fence *cxg_fence)
{
    ID3D12Fence_Release(cxg_fence->fence);
    demo_destroy_event(cxg_fence->event);
}

static void cxg_destroy_assets(struct cx_gears *cxg)
{
    unsigned int i;

    cxg_fence_destroy(&cxg->fence);
    ID3D12Resource_Release(cxg->ib);
    ID3D12Resource_Unmap(cxg->vb[1], 0, NULL);
    ID3D12Resource_Release(cxg->vb[1]);
    ID3D12Resource_Release(cxg->vb[0]);
    ID3D12Resource_Unmap(cxg->cb, 0, NULL);
    ID3D12Resource_Release(cxg->cb);
    ID3D12Resource_Release(cxg->ds);
    for (i = 0; i < ARRAY_SIZE(cxg->command_list); ++i)
        ID3D12GraphicsCommandList_Release(cxg->command_list[i]);
    ID3D12PipelineState_Release(cxg->pipeline_state_smooth);
    ID3D12PipelineState_Release(cxg->pipeline_state_flat);
    ID3D12RootSignature_Release(cxg->root_signature);
}

static void cxg_fence_create(struct cxg_fence *fence, ID3D12Device *device)
{
    HRESULT hr;

    hr = ID3D12Device_CreateFence(device, 0, D3D12_FENCE_FLAG_NONE,
            &IID_ID3D12Fence, (void **)&fence->fence);
    assert(SUCCEEDED(hr));
    fence->value = 1;
    fence->event = demo_create_event();
    assert(fence->event);
}

static void cxg_vertex_set_position(struct cxg_vertex *v, float x, float y, float z)
{
    demo_vec3_set(&v->position, x, y, z);
}

static void cxg_vertex_set_normal(struct cxg_vertex *v, float x, float y, float z)
{
    demo_vec3_set(&v->normal, x, y, z);
}

static void cxg_mesh_create(ID3D12Device *device, float inner_radius, float outer_radius, float width,
        unsigned int tooth_count, float tooth_depth, struct cxg_mesh *mesh)
{
    struct cxg_vertex *vertices;
    struct cxg_face *faces;
    unsigned int i, j;
    float r0, r1, r2;
    float angle, da;

    if (!(vertices = calloc(tooth_count, 12 * sizeof(*vertices))))
        return;
    if (!(faces = calloc(tooth_count, 20 * sizeof(*faces))))
    {
        free(vertices);
        return;
    }

    r0 = inner_radius;
    r1 = outer_radius - tooth_depth / 2.0f;
    r2 = outer_radius + tooth_depth / 2.0f;
    da = 2.0f * M_PI / tooth_count / 4.0f;

    for (i = 0; i < tooth_count; ++i)
    {
        struct cxg_vertex *tooth = &vertices[i * 12];
        float u, v;

        angle = i * 2.0f * M_PI / tooth_count;

        cxg_vertex_set_position(&tooth[0], r0 * cosf(angle), r0 * sinf(angle), width * 0.5f);
        cxg_vertex_set_normal(&tooth[0], -cosf(angle), -sinf(angle), 0.0f);
        cxg_vertex_set_position(&tooth[1], r1 * cosf(angle), r1 * sinf(angle), width * 0.5f);
        cxg_vertex_set_normal(&tooth[1], 0.0f, 0.0f, 1.0f);
        cxg_vertex_set_position(&tooth[2], r1 * cosf(angle + 3 * da), r1 * sinf(angle + 3 * da), width * 0.5f);
        cxg_vertex_set_normal(&tooth[2], 0.0f, 0.0f, 1.0f);
        cxg_vertex_set_position(&tooth[3], r2 * cosf(angle + da), r2 * sinf(angle + da), width * 0.5f);
        cxg_vertex_set_normal(&tooth[3], cosf(angle), sinf(angle), 0.0f);
        cxg_vertex_set_position(&tooth[4], r2 * cosf(angle + 2 * da), r2 * sinf(angle + 2 * da), width * 0.5f);
        u = r1 * cosf(angle + 3 * da) - r2 * cosf(angle + 2 * da);
        v = r1 * sinf(angle + 3 * da) - r2 * sinf(angle + 2 * da);
        cxg_vertex_set_normal(&tooth[4], v, -u, 0.0f);

        cxg_vertex_set_position(&tooth[5], r0 * cosf(angle), r0 * sinf(angle), -width * 0.5f);
        cxg_vertex_set_normal(&tooth[5], -cosf(angle), -sinf(angle), 0.0f);
        cxg_vertex_set_position(&tooth[6], r1 * cosf(angle), r1 * sinf(angle), -width * 0.5f);
        cxg_vertex_set_normal(&tooth[6], 0.0f, 0.0f, -1.0f);
        cxg_vertex_set_position(&tooth[7], r1 * cosf(angle + 3 * da), r1 * sinf(angle + 3 * da), -width * 0.5f);
        cxg_vertex_set_normal(&tooth[7], 0.0f, 0.0f, -1.0f);
        cxg_vertex_set_position(&tooth[8], r2 * cosf(angle + da), r2 * sinf(angle + da), -width * 0.5f);
        cxg_vertex_set_normal(&tooth[8], 0.0f, 0.0f, -1.0f);
        cxg_vertex_set_position(&tooth[9], r2 * cosf(angle + 2 * da), r2 * sinf(angle + 2 * da), -width * 0.5f);
        cxg_vertex_set_normal(&tooth[9], 0.0f, 0.0f, -1.0f);

        cxg_vertex_set_position(&tooth[10], r1 * cosf(angle), r1 * sinf(angle), width * 0.5f);
        u = r2 * cosf(angle + da) - r1 * cosf(angle);
        v = r2 * sinf(angle + da) - r1 * sinf(angle);
        cxg_vertex_set_normal(&tooth[10], v, -u, 0.0f);
        cxg_vertex_set_position(&tooth[11], r1 * cosf(angle + 3 * da), r1 * sinf(angle + 3 * da), width * 0.5f);
        cxg_vertex_set_normal(&tooth[11], cosf(angle), sinf(angle), 0.0f);
    }

    for (i = 0; i < tooth_count; ++i)
    {
        struct cxg_face *f = &faces[i * 18];
        static const struct cxg_face flat_faces[] =
        {
            /* Front */
            {{ 1,  2,  0}},
            {{ 1,  3,  4}},
            {{ 1,  4,  2}},
            {{ 2, 12,  0}},
            {{ 2, 13, 12}},
            /* Back */
            {{ 6,  5,  7}},
            {{ 6,  9,  8}},
            {{ 6,  7,  9}},
            {{ 7,  5, 17}},
            {{ 7, 17, 18}},
            /* Outward */
            {{10,  6,  8}},
            {{10,  8,  3}},
            {{ 3,  8,  9}},
            {{ 3,  9,  4}},
            {{ 4,  9,  7}},
            {{ 4,  7, 11}},
            {{11,  7, 18}},
            {{11, 18, 22}},
        };

        for (j = 0; j < ARRAY_SIZE(flat_faces); ++j)
        {
            f[j].v[0] = (flat_faces[j].v[0] + i * 12) % (tooth_count * 12);
            f[j].v[1] = (flat_faces[j].v[1] + i * 12) % (tooth_count * 12);
            f[j].v[2] = (flat_faces[j].v[2] + i * 12) % (tooth_count * 12);
        }
    }

    for (i = 0; i < tooth_count; ++i)
    {
        struct cxg_face *f = &faces[i * 2 + tooth_count * 18];
        static const struct cxg_face smooth_faces[] =
        {
            /* Inward */
            {{ 0, 17,  5}},
            {{ 0, 12, 17}},
        };

        for (j = 0; j < ARRAY_SIZE(smooth_faces); ++j)
        {
            f[j].v[0] = (smooth_faces[j].v[0] + i * 12) % (tooth_count * 12);
            f[j].v[1] = (smooth_faces[j].v[1] + i * 12) % (tooth_count * 12);
            f[j].v[2] = (smooth_faces[j].v[2] + i * 12) % (tooth_count * 12);
        }
    }

    mesh->vertices = vertices;
    mesh->vertex_count = 12 * tooth_count;
    mesh->faces = faces;
    mesh->flat_face_count = 18 * tooth_count;
    mesh->smooth_face_count = 2 * tooth_count;
}

static void cxg_mesh_destroy(struct cxg_mesh *mesh)
{
    free(mesh->faces);
    free(mesh->vertices);
}

static void cxg_load_gears(struct cx_gears *cxg)
{
    size_t vertex_count, face_count, vertex_idx, face_idx, i;
    D3D12_RESOURCE_DESC resource_desc;
    D3D12_HEAP_PROPERTIES heap_desc;
    D3D12_RANGE read_range = {0, 0};
    struct cxg_vertex *vertices;
    struct cxg_mesh gears[3];
    struct cxg_face *faces;
    HRESULT hr;

    cxg_mesh_create(cxg->device, 1.0f, 4.0f, 1.0f, 20, 0.7f, &gears[0]);
    demo_vec3_set(&cxg->instance_data[0].diffuse, 0.8f, 0.1f, 0.0f);
    cxg_mesh_create(cxg->device, 0.5f, 2.0f, 2.0f, 10, 0.7f, &gears[1]);
    demo_vec3_set(&cxg->instance_data[1].diffuse, 0.0f, 0.8f, 0.2f);
    cxg_mesh_create(cxg->device, 1.3f, 2.0f, 0.5f, 10, 0.7f, &gears[2]);
    demo_vec3_set(&cxg->instance_data[2].diffuse, 0.2f, 0.2f, 1.0f);

    for (i = 0, vertex_count = 0, face_count = 0; i < ARRAY_SIZE(gears); ++i)
    {
        vertex_count += gears[i].vertex_count;
        face_count += gears[i].flat_face_count + gears[i].smooth_face_count;
    }

    heap_desc.Type = D3D12_HEAP_TYPE_UPLOAD;
    heap_desc.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
    heap_desc.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
    heap_desc.CreationNodeMask = 1;
    heap_desc.VisibleNodeMask = 1;

    resource_desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    resource_desc.Alignment = 0;
    resource_desc.Width = vertex_count * sizeof(*vertices);
    resource_desc.Height = 1;
    resource_desc.DepthOrArraySize = 1;
    resource_desc.MipLevels = 1;
    resource_desc.Format = DXGI_FORMAT_UNKNOWN;
    resource_desc.SampleDesc.Count = 1;
    resource_desc.SampleDesc.Quality = 0;
    resource_desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    resource_desc.Flags = D3D12_RESOURCE_FLAG_NONE;

    hr = ID3D12Device_CreateCommittedResource(cxg->device, &heap_desc, D3D12_HEAP_FLAG_NONE, &resource_desc,
            D3D12_RESOURCE_STATE_GENERIC_READ, NULL, &IID_ID3D12Resource, (void **)&cxg->vb[0]);
    assert(SUCCEEDED(hr));

    resource_desc.Width = face_count * sizeof(*faces);
    hr = ID3D12Device_CreateCommittedResource(cxg->device, &heap_desc, D3D12_HEAP_FLAG_NONE, &resource_desc,
            D3D12_RESOURCE_STATE_GENERIC_READ, NULL, &IID_ID3D12Resource, (void **)&cxg->ib);
    assert(SUCCEEDED(hr));

    hr = ID3D12Resource_Map(cxg->vb[0], 0, &read_range, (void **)&vertices);
    assert(SUCCEEDED(hr));
    hr = ID3D12Resource_Map(cxg->ib, 0, &read_range, (void **)&faces);
    assert(SUCCEEDED(hr));

    for (i = 0, vertex_idx = 0, face_idx = 0; i < ARRAY_SIZE(gears); ++i)
    {
        size_t tmp;

        cxg->draws[i].vertex_idx = vertex_idx;
        memcpy(&vertices[vertex_idx], gears[i].vertices, gears[i].vertex_count * sizeof(*vertices));
        vertex_idx += gears[i].vertex_count;

        cxg->draws[i].flat_index_idx = 3 * face_idx;
        cxg->draws[i].flat_index_count = 3 * gears[i].flat_face_count;
        cxg->draws[i].smooth_index_idx = cxg->draws[i].flat_index_idx + cxg->draws[i].flat_index_count;
        cxg->draws[i].smooth_index_count = 3 * gears[i].smooth_face_count;
        tmp = gears[i].flat_face_count + gears[i].smooth_face_count;
        memcpy(&faces[face_idx], gears[i].faces, tmp * sizeof(*faces));
        face_idx += tmp;
    }

    ID3D12Resource_Unmap(cxg->ib, 0, NULL);
    ID3D12Resource_Unmap(cxg->vb[0], 0, NULL);

    cxg_mesh_destroy(&gears[2]);
    cxg_mesh_destroy(&gears[1]);
    cxg_mesh_destroy(&gears[0]);

    cxg->vbv[0].BufferLocation = ID3D12Resource_GetGPUVirtualAddress(cxg->vb[0]);
    cxg->vbv[0].StrideInBytes = sizeof(*vertices);
    cxg->vbv[0].SizeInBytes = vertex_count * sizeof(*vertices);

    cxg->ibv.BufferLocation = ID3D12Resource_GetGPUVirtualAddress(cxg->ib);
    cxg->ibv.SizeInBytes = face_count * sizeof(*faces);
    cxg->ibv.Format = DXGI_FORMAT_R16_UINT;
}

static void cxg_load_assets(struct cx_gears *cxg)
{
    static const D3D12_INPUT_ELEMENT_DESC il_desc[] =
    {
        {"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
        {"NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 12, D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0},
        {"DIFFUSE", 0, DXGI_FORMAT_R32G32B32_FLOAT, 1, 0, D3D12_INPUT_CLASSIFICATION_PER_INSTANCE_DATA, 1},
        {"TRANSFORM", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 1, 12, D3D12_INPUT_CLASSIFICATION_PER_INSTANCE_DATA, 1},
    };

    D3D12_ROOT_SIGNATURE_DESC root_signature_desc;
    D3D12_GRAPHICS_PIPELINE_STATE_DESC pso_desc;
    D3D12_CPU_DESCRIPTOR_HANDLE dsv_handle;
    D3D12_ROOT_PARAMETER root_parameter;
    D3D12_RESOURCE_DESC resource_desc;
    D3D12_HEAP_PROPERTIES heap_desc;
    D3D12_RANGE read_range = {0, 0};
    D3D12_CLEAR_VALUE clear_value;
    unsigned int i;
    HRESULT hr;

    root_parameter.ParameterType = D3D12_ROOT_PARAMETER_TYPE_CBV;
    root_parameter.Descriptor.ShaderRegister = 0;
    root_parameter.Descriptor.RegisterSpace = 0;
    root_parameter.ShaderVisibility = D3D12_SHADER_VISIBILITY_VERTEX;

    memset(&root_signature_desc, 0, sizeof(root_signature_desc));
    root_signature_desc.NumParameters = 1;
    root_signature_desc.pParameters = &root_parameter;
    root_signature_desc.Flags = D3D12_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT
            | D3D12_ROOT_SIGNATURE_FLAG_DENY_HULL_SHADER_ROOT_ACCESS
            | D3D12_ROOT_SIGNATURE_FLAG_DENY_DOMAIN_SHADER_ROOT_ACCESS
            | D3D12_ROOT_SIGNATURE_FLAG_DENY_GEOMETRY_SHADER_ROOT_ACCESS
            | D3D12_ROOT_SIGNATURE_FLAG_DENY_PIXEL_SHADER_ROOT_ACCESS;
    hr = demo_create_root_signature(cxg->device, &root_signature_desc, &cxg->root_signature);
    assert(SUCCEEDED(hr));

    memset(&pso_desc, 0, sizeof(pso_desc));
    pso_desc.InputLayout.pInputElementDescs = il_desc;
    pso_desc.InputLayout.NumElements = ARRAY_SIZE(il_desc);
    pso_desc.pRootSignature = cxg->root_signature;
    pso_desc.VS.pShaderBytecode = g_vs_main;
    pso_desc.VS.BytecodeLength = sizeof(g_vs_main);
    pso_desc.PS.pShaderBytecode = g_ps_main_flat;
    pso_desc.PS.BytecodeLength = sizeof(g_ps_main_flat);

    demo_rasterizer_desc_init_default(&pso_desc.RasterizerState);
    pso_desc.RasterizerState.FrontCounterClockwise = TRUE;
    demo_blend_desc_init_default(&pso_desc.BlendState);
    pso_desc.DepthStencilState.DepthEnable = TRUE;
    pso_desc.DepthStencilState.DepthWriteMask = D3D12_DEPTH_WRITE_MASK_ALL;
    pso_desc.DepthStencilState.DepthFunc = D3D12_COMPARISON_FUNC_LESS;
    pso_desc.DepthStencilState.StencilEnable = FALSE;
    pso_desc.SampleMask = UINT_MAX;
    pso_desc.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
    pso_desc.NumRenderTargets = 1;
    pso_desc.RTVFormats[0] = DXGI_FORMAT_B8G8R8A8_UNORM;
    pso_desc.DSVFormat = DXGI_FORMAT_D32_FLOAT;
    pso_desc.SampleDesc.Count = 1;
    hr = ID3D12Device_CreateGraphicsPipelineState(cxg->device, &pso_desc,
            &IID_ID3D12PipelineState, (void **)&cxg->pipeline_state_flat);
    assert(SUCCEEDED(hr));

    pso_desc.PS.pShaderBytecode = g_ps_main_smooth;
    pso_desc.PS.BytecodeLength = sizeof(g_ps_main_smooth);
    hr = ID3D12Device_CreateGraphicsPipelineState(cxg->device, &pso_desc,
            &IID_ID3D12PipelineState, (void **)&cxg->pipeline_state_smooth);
    assert(SUCCEEDED(hr));

    for (i = 0; i < ARRAY_SIZE(cxg->command_list); ++i)
    {
        hr = ID3D12Device_CreateCommandList(cxg->device, 0, D3D12_COMMAND_LIST_TYPE_DIRECT,
                cxg->command_allocator[i], cxg->pipeline_state_flat,
                &IID_ID3D12GraphicsCommandList, (void **)&cxg->command_list[i]);
        assert(SUCCEEDED(hr));
        hr = ID3D12GraphicsCommandList_Close(cxg->command_list[i]);
        assert(SUCCEEDED(hr));
    }

    heap_desc.Type = D3D12_HEAP_TYPE_DEFAULT;
    heap_desc.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
    heap_desc.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
    heap_desc.CreationNodeMask = 1;
    heap_desc.VisibleNodeMask = 1;

    resource_desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    resource_desc.Alignment = 0;
    resource_desc.Width = cxg->width;
    resource_desc.Height = cxg->height;
    resource_desc.DepthOrArraySize = 1;
    resource_desc.MipLevels = 1;
    resource_desc.Format = DXGI_FORMAT_D32_FLOAT;
    resource_desc.SampleDesc.Count = 1;
    resource_desc.SampleDesc.Quality = 0;
    resource_desc.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    resource_desc.Flags = D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL;

    clear_value.Format = DXGI_FORMAT_D32_FLOAT;
    clear_value.DepthStencil.Depth = 1.0f;
    clear_value.DepthStencil.Stencil = 0;

    hr = ID3D12Device_CreateCommittedResource(cxg->device, &heap_desc, D3D12_HEAP_FLAG_NONE, &resource_desc,
            D3D12_RESOURCE_STATE_DEPTH_WRITE, &clear_value, &IID_ID3D12Resource, (void **)&cxg->ds);
    assert(SUCCEEDED(hr));

    dsv_handle = ID3D12DescriptorHeap_GetCPUDescriptorHandleForHeapStart(cxg->dsv_heap);
    ID3D12Device_CreateDepthStencilView(cxg->device, cxg->ds, NULL, dsv_handle);

    heap_desc.Type = D3D12_HEAP_TYPE_UPLOAD;

    resource_desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    resource_desc.Width = sizeof(*cxg->cb_data);
    resource_desc.Height = 1;
    resource_desc.Format = DXGI_FORMAT_UNKNOWN;
    resource_desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    resource_desc.Flags = D3D12_RESOURCE_FLAG_NONE;

    hr = ID3D12Device_CreateCommittedResource(cxg->device, &heap_desc, D3D12_HEAP_FLAG_NONE, &resource_desc,
            D3D12_RESOURCE_STATE_GENERIC_READ, NULL, &IID_ID3D12Resource, (void **)&cxg->cb);
    assert(SUCCEEDED(hr));

    hr = ID3D12Resource_Map(cxg->cb, 0, &read_range, (void **)&cxg->cb_data);
    assert(SUCCEEDED(hr));
    cxg_update_mvp(cxg);

    resource_desc.Width = 3 * sizeof(*cxg->instance_data);
    hr = ID3D12Device_CreateCommittedResource(cxg->device, &heap_desc, D3D12_HEAP_FLAG_NONE, &resource_desc,
            D3D12_RESOURCE_STATE_GENERIC_READ, NULL, &IID_ID3D12Resource, (void **)&cxg->vb[1]);
    assert(SUCCEEDED(hr));

    hr = ID3D12Resource_Map(cxg->vb[1], 0, &read_range, (void **)&cxg->instance_data);
    assert(SUCCEEDED(hr));

    cxg->vbv[1].BufferLocation = ID3D12Resource_GetGPUVirtualAddress(cxg->vb[1]);
    cxg->vbv[1].StrideInBytes = sizeof(*cxg->instance_data);
    cxg->vbv[1].SizeInBytes = 3 * sizeof(*cxg->instance_data);

    cxg_load_gears(cxg);

    cxg_fence_create(&cxg->fence, cxg->device);
    cxg_wait_for_previous_frame(cxg);
}

static void cxg_key_press(struct demo_window *window, demo_key key, void *user_data)
{
    struct cx_gears *cxg = user_data;

    switch (key)
    {
        case 'a':
        case 'A':
            cxg->animate = !cxg->animate;
            break;
        case DEMO_KEY_ESCAPE:
            demo_window_destroy(window);
            break;
        case DEMO_KEY_LEFT:
            cxg->theta += M_PI / 36.0f;
            cxg_update_mvp(cxg);
            break;
        case DEMO_KEY_RIGHT:
            cxg->theta -= M_PI / 36.0f;
            cxg_update_mvp(cxg);
            break;
        case DEMO_KEY_UP:
            cxg->phi += M_PI / 36.0f;
            cxg_update_mvp(cxg);
            break;
        case DEMO_KEY_DOWN:
            cxg->phi -= M_PI / 36.0f;
            cxg_update_mvp(cxg);
            break;
        default:
            break;
    }
}

static void cxg_expose(struct demo_window *window, void *user_data)
{
    cxg_render_frame(user_data);
}

static void cxg_idle(struct demo *demo, void *user_data)
{
    cxg_render_frame(user_data);
}

static int cxg_main(void)
{
    unsigned int width = 300, height = 300;
    struct cx_gears cxg;

    memset(&cxg, 0, sizeof(cxg));
    if (!demo_init(&cxg.demo, &cxg))
        return EXIT_FAILURE;
    demo_set_idle_func(&cxg.demo, cxg_idle);

    cxg.window = demo_window_create(&cxg.demo, "Vkd3d Gears", width, height, &cxg);
    demo_window_set_key_press_func(cxg.window, cxg_key_press);
    demo_window_set_expose_func(cxg.window, cxg_expose);

    cxg.width = width;
    cxg.height = height;
    cxg.aspect_ratio = (float)width / (float)height;

    cxg.animate = true;
    cxg.theta = M_PI / 6.0f;
    cxg.phi = M_PI / 9.0f;

    cxg.vp.Width = width;
    cxg.vp.Height = height;
    cxg.vp.MaxDepth = 1.0f;

    cxg.scissor_rect.right = width;
    cxg.scissor_rect.bottom = height;

    cxg_load_pipeline(&cxg);
    cxg_load_assets(&cxg);
    cxg_populate_command_list(&cxg, 0);
    cxg_populate_command_list(&cxg, 1);
    cxg_populate_command_list(&cxg, 2);

    demo_process_events(&cxg.demo);

    cxg_wait_for_previous_frame(&cxg);
    cxg_destroy_assets(&cxg);
    cxg_destroy_pipeline(&cxg);
    demo_cleanup(&cxg.demo);

    return EXIT_SUCCESS;
}

#ifdef _WIN32
int wmain(void)
#else
int main(void)
#endif
{
    return cxg_main();
}
