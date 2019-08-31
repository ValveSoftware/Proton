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

/* Hack for MinGW-w64 headers.
 *
 * We want to use WIDL C inline wrappers because some methods
 * in D3D12 interfaces return aggregate objects. Unfortunately,
 * WIDL C inline wrappers are broken when used with MinGW-w64
 * headers because FORCEINLINE expands to extern inline
 * which leads to the "multiple storage classes in declaration
 * specifiers" compiler error.
 */
#ifdef __MINGW32__
#include <_mingw.h>
# ifdef __MINGW64_VERSION_MAJOR
#  undef __forceinline
#  define __forceinline __inline__ __attribute__((__always_inline__,__gnu_inline__))
# endif
#endif

#include <vkd3d_windows.h>
#define WIDL_C_INLINE_WRAPPERS
#define COBJMACROS
#include <vkd3d_d3d12.h>
#include <inttypes.h>

#define ARRAY_SIZE(x) (sizeof(x) / sizeof(*x))

#define DEMO_KEY_UNKNOWN    0x0000
#define DEMO_KEY_ESCAPE     0xff1b
#define DEMO_KEY_LEFT       0xff51
#define DEMO_KEY_UP         0xff52
#define DEMO_KEY_RIGHT      0xff53
#define DEMO_KEY_DOWN       0xff54

struct demo_vec3
{
    float x, y, z;
};

struct demo_vec4
{
    float x, y, z, w;
};

struct demo_swapchain_desc
{
    unsigned int width;
    unsigned int height;
    unsigned int buffer_count;
    DXGI_FORMAT format;
};

typedef uint32_t demo_key;

static inline void demo_vec3_set(struct demo_vec3 *v, float x, float y, float z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

static inline void demo_vec4_set(struct demo_vec4 *v, float x, float y, float z, float w)
{
    v->x = x;
    v->y = y;
    v->z = z;
    v->w = w;
}

static inline void demo_rasterizer_desc_init_default(D3D12_RASTERIZER_DESC *desc)
{
    desc->FillMode = D3D12_FILL_MODE_SOLID;
    desc->CullMode = D3D12_CULL_MODE_BACK;
    desc->FrontCounterClockwise = FALSE;
    desc->DepthBias = D3D12_DEFAULT_DEPTH_BIAS;
    desc->DepthBiasClamp = D3D12_DEFAULT_DEPTH_BIAS_CLAMP;
    desc->SlopeScaledDepthBias = D3D12_DEFAULT_SLOPE_SCALED_DEPTH_BIAS;
    desc->DepthClipEnable = TRUE;
    desc->MultisampleEnable = FALSE;
    desc->AntialiasedLineEnable = FALSE;
    desc->ForcedSampleCount = 0;
    desc->ConservativeRaster = D3D12_CONSERVATIVE_RASTERIZATION_MODE_OFF;
}

static inline void demo_blend_desc_init_default(D3D12_BLEND_DESC *desc)
{
    static const D3D12_RENDER_TARGET_BLEND_DESC rt_blend_desc =
    {
        .BlendEnable = FALSE,
        .LogicOpEnable = FALSE,
        .SrcBlend = D3D12_BLEND_ONE,
        .DestBlend = D3D12_BLEND_ZERO,
        .BlendOp = D3D12_BLEND_OP_ADD,
        .SrcBlendAlpha = D3D12_BLEND_ONE,
        .DestBlendAlpha = D3D12_BLEND_ZERO,
        .BlendOpAlpha = D3D12_BLEND_OP_ADD,
        .LogicOp = D3D12_LOGIC_OP_NOOP,
        .RenderTargetWriteMask = D3D12_COLOR_WRITE_ENABLE_ALL,
    };
    unsigned int i;

    desc->AlphaToCoverageEnable = FALSE;
    desc->IndependentBlendEnable = FALSE;
    for (i = 0; i < ARRAY_SIZE(desc->RenderTarget); ++i)
    {
        desc->RenderTarget[i] = rt_blend_desc;
    }
}

static inline HRESULT demo_create_root_signature(ID3D12Device *device,
        const D3D12_ROOT_SIGNATURE_DESC *desc, ID3D12RootSignature **signature)
{
    ID3DBlob *blob;
    HRESULT hr;

    if (FAILED(hr = D3D12SerializeRootSignature(desc, D3D_ROOT_SIGNATURE_VERSION_1, &blob, NULL)))
        return hr;
    hr = ID3D12Device_CreateRootSignature(device, 0, ID3D10Blob_GetBufferPointer(blob),
            ID3D10Blob_GetBufferSize(blob), &IID_ID3D12RootSignature, (void **)signature);
    ID3D10Blob_Release(blob);

    return hr;
}

#ifdef _WIN32
#include "demo_win32.h"
#else
#define INFINITE VKD3D_INFINITE
#include "demo_xcb.h"
#endif
