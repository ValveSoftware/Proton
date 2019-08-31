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

#include <errno.h>

#define COLOR         (VK_IMAGE_ASPECT_COLOR_BIT)
#define DEPTH         (VK_IMAGE_ASPECT_DEPTH_BIT)
#define STENCIL       (VK_IMAGE_ASPECT_STENCIL_BIT)
#define DEPTH_STENCIL (VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT)
#define TYPELESS      VKD3D_FORMAT_TYPE_TYPELESS
#define SINT          VKD3D_FORMAT_TYPE_SINT
#define UINT          VKD3D_FORMAT_TYPE_UINT
static const struct vkd3d_format vkd3d_formats[] =
{
    {DXGI_FORMAT_R32G32B32A32_TYPELESS, VK_FORMAT_R32G32B32A32_SFLOAT,      16, 1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_R32G32B32A32_FLOAT,    VK_FORMAT_R32G32B32A32_SFLOAT,      16, 1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R32G32B32A32_UINT,     VK_FORMAT_R32G32B32A32_UINT,        16, 1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R32G32B32A32_SINT,     VK_FORMAT_R32G32B32A32_SINT,        16, 1, 1,  1, COLOR, 1, SINT},
    {DXGI_FORMAT_R32G32B32_TYPELESS,    VK_FORMAT_R32G32B32_SFLOAT,         12, 1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_R32G32B32_FLOAT,       VK_FORMAT_R32G32B32_SFLOAT,         12, 1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R32G32B32_UINT,        VK_FORMAT_R32G32B32_UINT,           12, 1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R32G32B32_SINT,        VK_FORMAT_R32G32B32_SINT,           12, 1, 1,  1, COLOR, 1, SINT},
    {DXGI_FORMAT_R16G16B16A16_TYPELESS, VK_FORMAT_R16G16B16A16_SFLOAT,      8,  1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_R16G16B16A16_FLOAT,    VK_FORMAT_R16G16B16A16_SFLOAT,      8,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R16G16B16A16_UNORM,    VK_FORMAT_R16G16B16A16_UNORM,       8,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R16G16B16A16_UINT,     VK_FORMAT_R16G16B16A16_UINT,        8,  1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R16G16B16A16_SNORM,    VK_FORMAT_R16G16B16A16_SNORM,       8,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R16G16B16A16_SINT,     VK_FORMAT_R16G16B16A16_SINT,        8,  1, 1,  1, COLOR, 1, SINT},
    {DXGI_FORMAT_R32G32_TYPELESS,       VK_FORMAT_R32G32_SFLOAT,            8,  1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_R32G32_FLOAT,          VK_FORMAT_R32G32_SFLOAT,            8,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R32G32_UINT,           VK_FORMAT_R32G32_UINT,              8,  1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R32G32_SINT,           VK_FORMAT_R32G32_SINT,              8,  1, 1,  1, COLOR, 1, SINT},
    {DXGI_FORMAT_R10G10B10A2_TYPELESS,  VK_FORMAT_A2B10G10R10_UNORM_PACK32, 4,  1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_R10G10B10A2_UNORM,     VK_FORMAT_A2B10G10R10_UNORM_PACK32, 4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R10G10B10A2_UINT,      VK_FORMAT_A2B10G10R10_UINT_PACK32,  4,  1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R11G11B10_FLOAT,       VK_FORMAT_B10G11R11_UFLOAT_PACK32,  4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R8G8_TYPELESS,         VK_FORMAT_R8G8_UNORM,               2,  1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_R8G8_UNORM,            VK_FORMAT_R8G8_UNORM,               2,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R8G8_UINT,             VK_FORMAT_R8G8_UINT,                2,  1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R8G8_SNORM,            VK_FORMAT_R8G8_SNORM,               2,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R8G8_SINT,             VK_FORMAT_R8G8_SINT,                2,  1, 1,  1, COLOR, 1, SINT},
    {DXGI_FORMAT_R8G8B8A8_TYPELESS,     VK_FORMAT_R8G8B8A8_UNORM,           4,  1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_R8G8B8A8_UNORM,        VK_FORMAT_R8G8B8A8_UNORM,           4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R8G8B8A8_UNORM_SRGB,   VK_FORMAT_R8G8B8A8_SRGB,            4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R8G8B8A8_UINT,         VK_FORMAT_R8G8B8A8_UINT,            4,  1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R8G8B8A8_SNORM,        VK_FORMAT_R8G8B8A8_SNORM,           4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R8G8B8A8_SINT,         VK_FORMAT_R8G8B8A8_SINT,            4,  1, 1,  1, COLOR, 1, SINT},
    {DXGI_FORMAT_R16G16_TYPELESS,       VK_FORMAT_R16G16_SFLOAT,            4,  1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_R16G16_FLOAT,          VK_FORMAT_R16G16_SFLOAT,            4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R16G16_UNORM,          VK_FORMAT_R16G16_UNORM,             4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R16G16_UINT,           VK_FORMAT_R16G16_UINT,              4,  1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R16G16_SNORM,          VK_FORMAT_R16G16_SNORM,             4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R16G16_SINT,           VK_FORMAT_R16G16_SINT,              4,  1, 1,  1, COLOR, 1, SINT},
    {DXGI_FORMAT_R32_TYPELESS,          VK_FORMAT_R32_UINT,                 4,  1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_D32_FLOAT,             VK_FORMAT_D32_SFLOAT,               4,  1, 1,  1, DEPTH, 1},
    {DXGI_FORMAT_R32_FLOAT,             VK_FORMAT_R32_SFLOAT,               4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R32_UINT,              VK_FORMAT_R32_UINT,                 4,  1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R32_SINT,              VK_FORMAT_R32_SINT,                 4,  1, 1,  1, COLOR, 1, SINT},
    {DXGI_FORMAT_R16_TYPELESS,          VK_FORMAT_R16_UINT,                 2,  1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_R16_FLOAT,             VK_FORMAT_R16_SFLOAT,               2,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_D16_UNORM,             VK_FORMAT_D16_UNORM,                2,  1, 1,  1, DEPTH, 1},
    {DXGI_FORMAT_R16_UNORM,             VK_FORMAT_R16_UNORM,                2,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R16_UINT,              VK_FORMAT_R16_UINT,                 2,  1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R16_SNORM,             VK_FORMAT_R16_SNORM,                2,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R16_SINT,              VK_FORMAT_R16_SINT,                 2,  1, 1,  1, COLOR, 1, SINT},
    {DXGI_FORMAT_R8_TYPELESS,           VK_FORMAT_R8_UNORM,                 1,  1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_R8_UNORM,              VK_FORMAT_R8_UNORM,                 1,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R8_UINT,               VK_FORMAT_R8_UINT,                  1,  1, 1,  1, COLOR, 1, UINT},
    {DXGI_FORMAT_R8_SNORM,              VK_FORMAT_R8_SNORM,                 1,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_R8_SINT,               VK_FORMAT_R8_SINT,                  1,  1, 1,  1, COLOR, 1, SINT},
    {DXGI_FORMAT_A8_UNORM,              VK_FORMAT_R8_UNORM,                 1,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_B8G8R8A8_UNORM,        VK_FORMAT_B8G8R8A8_UNORM,           4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_B8G8R8X8_UNORM,        VK_FORMAT_B8G8R8A8_UNORM,           4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_B8G8R8A8_TYPELESS,     VK_FORMAT_B8G8R8A8_UNORM,           4,  1, 1,  1, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_B8G8R8A8_UNORM_SRGB,   VK_FORMAT_B8G8R8A8_SRGB,            4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_B8G8R8X8_TYPELESS,     VK_FORMAT_B8G8R8A8_UNORM,           4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_B8G8R8X8_UNORM_SRGB,   VK_FORMAT_B8G8R8A8_SRGB,            4,  1, 1,  1, COLOR, 1},
    {DXGI_FORMAT_BC1_TYPELESS,          VK_FORMAT_BC1_RGBA_UNORM_BLOCK,     1,  4, 4,  8, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_BC1_UNORM,             VK_FORMAT_BC1_RGBA_UNORM_BLOCK,     1,  4, 4,  8, COLOR, 1},
    {DXGI_FORMAT_BC1_UNORM_SRGB,        VK_FORMAT_BC1_RGBA_SRGB_BLOCK,      1,  4, 4,  8, COLOR, 1},
    {DXGI_FORMAT_BC2_TYPELESS,          VK_FORMAT_BC2_UNORM_BLOCK,          1,  4, 4, 16, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_BC2_UNORM,             VK_FORMAT_BC2_UNORM_BLOCK,          1,  4, 4, 16, COLOR, 1},
    {DXGI_FORMAT_BC2_UNORM_SRGB,        VK_FORMAT_BC2_SRGB_BLOCK,           1,  4, 4, 16, COLOR, 1},
    {DXGI_FORMAT_BC3_TYPELESS,          VK_FORMAT_BC3_UNORM_BLOCK,          1,  4, 4, 16, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_BC3_UNORM,             VK_FORMAT_BC3_UNORM_BLOCK,          1,  4, 4, 16, COLOR, 1},
    {DXGI_FORMAT_BC3_UNORM_SRGB,        VK_FORMAT_BC3_SRGB_BLOCK,           1,  4, 4, 16, COLOR, 1},
    {DXGI_FORMAT_BC4_TYPELESS,          VK_FORMAT_BC4_UNORM_BLOCK,          1,  4, 4,  8, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_BC4_UNORM,             VK_FORMAT_BC4_UNORM_BLOCK,          1,  4, 4,  8, COLOR, 1},
    {DXGI_FORMAT_BC4_SNORM,             VK_FORMAT_BC4_SNORM_BLOCK,          1,  4, 4,  8, COLOR, 1},
    {DXGI_FORMAT_BC5_TYPELESS,          VK_FORMAT_BC5_UNORM_BLOCK,          1,  4, 4, 16, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_BC5_UNORM,             VK_FORMAT_BC5_UNORM_BLOCK,          1,  4, 4, 16, COLOR, 1},
    {DXGI_FORMAT_BC5_SNORM,             VK_FORMAT_BC5_SNORM_BLOCK,          1,  4, 4, 16, COLOR, 1},
    {DXGI_FORMAT_BC6H_TYPELESS,         VK_FORMAT_BC6H_UFLOAT_BLOCK,        1,  4, 4, 16, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_BC6H_UF16,             VK_FORMAT_BC6H_UFLOAT_BLOCK,        1,  4, 4, 16, COLOR, 1},
    {DXGI_FORMAT_BC6H_SF16,             VK_FORMAT_BC6H_SFLOAT_BLOCK,        1,  4, 4, 16, COLOR, 1},
    {DXGI_FORMAT_BC7_TYPELESS,          VK_FORMAT_BC7_UNORM_BLOCK,          1,  4, 4, 16, COLOR, 1, TYPELESS},
    {DXGI_FORMAT_BC7_UNORM,             VK_FORMAT_BC7_UNORM_BLOCK,          1,  4, 4, 16, COLOR, 1},
    {DXGI_FORMAT_BC7_UNORM_SRGB,        VK_FORMAT_BC7_SRGB_BLOCK,           1,  4, 4, 16, COLOR, 1},
};

/* Each depth/stencil format is only compatible with itself in Vulkan. */
static const struct vkd3d_format vkd3d_depth_stencil_formats[] =
{
    {DXGI_FORMAT_R32G8X24_TYPELESS,        VK_FORMAT_D32_SFLOAT_S8_UINT, 8,  1, 1, 1, DEPTH_STENCIL, 2, TYPELESS},
    {DXGI_FORMAT_D32_FLOAT_S8X24_UINT,     VK_FORMAT_D32_SFLOAT_S8_UINT, 8,  1, 1, 1, DEPTH_STENCIL, 2},
    {DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS, VK_FORMAT_D32_SFLOAT_S8_UINT, 8,  1, 1, 1, DEPTH,         2},
    {DXGI_FORMAT_X32_TYPELESS_G8X24_UINT,  VK_FORMAT_D32_SFLOAT_S8_UINT, 8,  1, 1, 1, STENCIL,       2},
    {DXGI_FORMAT_R32_TYPELESS,             VK_FORMAT_D32_SFLOAT,         4,  1, 1, 1, DEPTH,         1, TYPELESS},
    {DXGI_FORMAT_R32_FLOAT,                VK_FORMAT_D32_SFLOAT,         4,  1, 1, 1, DEPTH,         1},
    {DXGI_FORMAT_R24G8_TYPELESS,           VK_FORMAT_D24_UNORM_S8_UINT,  4,  1, 1, 1, DEPTH_STENCIL, 2, TYPELESS},
    {DXGI_FORMAT_D24_UNORM_S8_UINT,        VK_FORMAT_D24_UNORM_S8_UINT,  4,  1, 1, 1, DEPTH_STENCIL, 2},
    {DXGI_FORMAT_R24_UNORM_X8_TYPELESS,    VK_FORMAT_D24_UNORM_S8_UINT,  4,  1, 1, 1, DEPTH,         2},
    {DXGI_FORMAT_X24_TYPELESS_G8_UINT,     VK_FORMAT_D24_UNORM_S8_UINT,  4,  1, 1, 1, STENCIL,       2},
    {DXGI_FORMAT_R16_TYPELESS,             VK_FORMAT_D16_UNORM,          2,  1, 1, 1, DEPTH,         1, TYPELESS},
    {DXGI_FORMAT_R16_UNORM,                VK_FORMAT_D16_UNORM,          2,  1, 1, 1, DEPTH,         1},
};
#undef COLOR
#undef DEPTH
#undef STENCIL
#undef DEPTH_STENCIL
#undef TYPELESS
#undef SINT
#undef UINT

static const struct vkd3d_format_compatibility_info
{
    DXGI_FORMAT format;
    DXGI_FORMAT typeless_format;
}
vkd3d_format_compatibility_info[] =
{
    /* DXGI_FORMAT_R32G32B32A32_TYPELESS */
    {DXGI_FORMAT_R32G32B32A32_UINT,        DXGI_FORMAT_R32G32B32A32_TYPELESS},
    {DXGI_FORMAT_R32G32B32A32_SINT,        DXGI_FORMAT_R32G32B32A32_TYPELESS},
    {DXGI_FORMAT_R32G32B32A32_FLOAT,       DXGI_FORMAT_R32G32B32A32_TYPELESS},
    /* DXGI_FORMAT_R32G32B32_TYPELESS */
    {DXGI_FORMAT_R32G32B32_UINT,           DXGI_FORMAT_R32G32B32_TYPELESS},
    {DXGI_FORMAT_R32G32B32_SINT,           DXGI_FORMAT_R32G32B32_TYPELESS},
    {DXGI_FORMAT_R32G32B32_FLOAT,          DXGI_FORMAT_R32G32B32_TYPELESS},
    /* DXGI_FORMAT_R16G16B16A16_TYPELESS */
    {DXGI_FORMAT_R16G16B16A16_UNORM,       DXGI_FORMAT_R16G16B16A16_TYPELESS},
    {DXGI_FORMAT_R16G16B16A16_SNORM,       DXGI_FORMAT_R16G16B16A16_TYPELESS},
    {DXGI_FORMAT_R16G16B16A16_UINT,        DXGI_FORMAT_R16G16B16A16_TYPELESS},
    {DXGI_FORMAT_R16G16B16A16_SINT,        DXGI_FORMAT_R16G16B16A16_TYPELESS},
    {DXGI_FORMAT_R16G16B16A16_FLOAT,       DXGI_FORMAT_R16G16B16A16_TYPELESS},
    /* DXGI_FORMAT_R32G32_TYPELESS */
    {DXGI_FORMAT_R32G32_UINT,              DXGI_FORMAT_R32G32_TYPELESS},
    {DXGI_FORMAT_R32G32_SINT,              DXGI_FORMAT_R32G32_TYPELESS},
    {DXGI_FORMAT_R32G32_FLOAT,             DXGI_FORMAT_R32G32_TYPELESS},
    /* DXGI_FORMAT_R32G8X24_TYPELESS */
    {DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS, DXGI_FORMAT_R32G8X24_TYPELESS},
    {DXGI_FORMAT_X32_TYPELESS_G8X24_UINT,  DXGI_FORMAT_R32G8X24_TYPELESS},
    {DXGI_FORMAT_D32_FLOAT_S8X24_UINT,     DXGI_FORMAT_R32G8X24_TYPELESS},
    /* DXGI_FORMAT_R10G10B10A2_TYPELESS */
    {DXGI_FORMAT_R10G10B10A2_UINT,         DXGI_FORMAT_R10G10B10A2_TYPELESS},
    {DXGI_FORMAT_R10G10B10A2_UNORM,        DXGI_FORMAT_R10G10B10A2_TYPELESS},
    /* DXGI_FORMAT_R8G8B8A8_TYPELESS */
    {DXGI_FORMAT_R8G8B8A8_UINT,            DXGI_FORMAT_R8G8B8A8_TYPELESS},
    {DXGI_FORMAT_R8G8B8A8_SINT,            DXGI_FORMAT_R8G8B8A8_TYPELESS},
    {DXGI_FORMAT_R8G8B8A8_SNORM,           DXGI_FORMAT_R8G8B8A8_TYPELESS},
    {DXGI_FORMAT_R8G8B8A8_UNORM_SRGB,      DXGI_FORMAT_R8G8B8A8_TYPELESS},
    {DXGI_FORMAT_R8G8B8A8_UNORM,           DXGI_FORMAT_R8G8B8A8_TYPELESS},
    /* DXGI_FORMAT_R16G16_TYPELESS */
    {DXGI_FORMAT_R16G16_UNORM,             DXGI_FORMAT_R16G16_TYPELESS},
    {DXGI_FORMAT_R16G16_SNORM,             DXGI_FORMAT_R16G16_TYPELESS},
    {DXGI_FORMAT_R16G16_UINT,              DXGI_FORMAT_R16G16_TYPELESS},
    {DXGI_FORMAT_R16G16_SINT,              DXGI_FORMAT_R16G16_TYPELESS},
    {DXGI_FORMAT_R16G16_FLOAT,             DXGI_FORMAT_R16G16_TYPELESS},
    /* DXGI_FORMAT_R32_TYPELESS */
    {DXGI_FORMAT_D32_FLOAT,                DXGI_FORMAT_R32_TYPELESS},
    {DXGI_FORMAT_R32_FLOAT,                DXGI_FORMAT_R32_TYPELESS},
    {DXGI_FORMAT_R32_UINT,                 DXGI_FORMAT_R32_TYPELESS},
    {DXGI_FORMAT_R32_SINT,                 DXGI_FORMAT_R32_TYPELESS},
    /* DXGI_FORMAT_R24G8_TYPELESS */
    {DXGI_FORMAT_R24_UNORM_X8_TYPELESS,    DXGI_FORMAT_R24G8_TYPELESS},
    {DXGI_FORMAT_X24_TYPELESS_G8_UINT,     DXGI_FORMAT_R24G8_TYPELESS},
    {DXGI_FORMAT_D24_UNORM_S8_UINT,        DXGI_FORMAT_R24G8_TYPELESS},
    /* DXGI_FORMAT_R8G8_TYPELESS */
    {DXGI_FORMAT_R8G8_SNORM,               DXGI_FORMAT_R8G8_TYPELESS},
    {DXGI_FORMAT_R8G8_UNORM,               DXGI_FORMAT_R8G8_TYPELESS},
    {DXGI_FORMAT_R8G8_UINT,                DXGI_FORMAT_R8G8_TYPELESS},
    {DXGI_FORMAT_R8G8_SINT,                DXGI_FORMAT_R8G8_TYPELESS},
    /* DXGI_FORMAT_R16_TYPELESS */
    {DXGI_FORMAT_D16_UNORM,                DXGI_FORMAT_R16_TYPELESS},
    {DXGI_FORMAT_R16_UNORM,                DXGI_FORMAT_R16_TYPELESS},
    {DXGI_FORMAT_R16_SNORM,                DXGI_FORMAT_R16_TYPELESS},
    {DXGI_FORMAT_R16_UINT,                 DXGI_FORMAT_R16_TYPELESS},
    {DXGI_FORMAT_R16_SINT,                 DXGI_FORMAT_R16_TYPELESS},
    {DXGI_FORMAT_R16_FLOAT,                DXGI_FORMAT_R16_TYPELESS},
    /* DXGI_FORMAT_R8_TYPELESS */
    {DXGI_FORMAT_R8_UNORM,                 DXGI_FORMAT_R8_TYPELESS},
    {DXGI_FORMAT_R8_SNORM,                 DXGI_FORMAT_R8_TYPELESS},
    {DXGI_FORMAT_R8_UINT,                  DXGI_FORMAT_R8_TYPELESS},
    {DXGI_FORMAT_R8_SINT,                  DXGI_FORMAT_R8_TYPELESS},
    /* DXGI_FORMAT_BC1_TYPELESS */
    {DXGI_FORMAT_BC1_UNORM_SRGB,           DXGI_FORMAT_BC1_TYPELESS},
    {DXGI_FORMAT_BC1_UNORM,                DXGI_FORMAT_BC1_TYPELESS},
    /* DXGI_FORMAT_BC2_TYPELESS */
    {DXGI_FORMAT_BC2_UNORM_SRGB,           DXGI_FORMAT_BC2_TYPELESS},
    {DXGI_FORMAT_BC2_UNORM,                DXGI_FORMAT_BC2_TYPELESS},
    /* DXGI_FORMAT_BC3_TYPELESS */
    {DXGI_FORMAT_BC3_UNORM_SRGB,           DXGI_FORMAT_BC3_TYPELESS},
    {DXGI_FORMAT_BC3_UNORM,                DXGI_FORMAT_BC3_TYPELESS},
    /* DXGI_FORMAT_BC4_TYPELESS */
    {DXGI_FORMAT_BC4_UNORM,                DXGI_FORMAT_BC4_TYPELESS},
    {DXGI_FORMAT_BC4_SNORM,                DXGI_FORMAT_BC4_TYPELESS},
    /* DXGI_FORMAT_BC5_TYPELESS */
    {DXGI_FORMAT_BC5_UNORM,                DXGI_FORMAT_BC5_TYPELESS},
    {DXGI_FORMAT_BC5_SNORM,                DXGI_FORMAT_BC5_TYPELESS},
    /* DXGI_FORMAT_BC6H_TYPELESS */
    {DXGI_FORMAT_BC6H_UF16,                DXGI_FORMAT_BC6H_TYPELESS},
    {DXGI_FORMAT_BC6H_SF16,                DXGI_FORMAT_BC6H_TYPELESS},
    /* DXGI_FORMAT_BC7_TYPELESS */
    {DXGI_FORMAT_BC7_UNORM_SRGB,           DXGI_FORMAT_BC7_TYPELESS},
    {DXGI_FORMAT_BC7_UNORM,                DXGI_FORMAT_BC7_TYPELESS},
    /* DXGI_FORMAT_B8G8R8A8_TYPELESS */
    {DXGI_FORMAT_B8G8R8A8_UNORM_SRGB,      DXGI_FORMAT_B8G8R8A8_TYPELESS},
    {DXGI_FORMAT_B8G8R8A8_UNORM,           DXGI_FORMAT_B8G8R8A8_TYPELESS},
    /* DXGI_FORMAT_B8G8R8X8_TYPELESS */
    {DXGI_FORMAT_B8G8R8X8_UNORM_SRGB,      DXGI_FORMAT_B8G8R8X8_TYPELESS},
    {DXGI_FORMAT_B8G8R8X8_UNORM,           DXGI_FORMAT_B8G8R8X8_TYPELESS},
};

static bool dxgi_format_is_depth_stencil(DXGI_FORMAT dxgi_format)
{
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(vkd3d_formats); ++i)
    {
        const struct vkd3d_format *current = &vkd3d_formats[i];

        if (current->dxgi_format == dxgi_format)
            return current->vk_aspect_mask & (VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT);
    }

    for (i = 0; i < ARRAY_SIZE(vkd3d_depth_stencil_formats); ++i)
    {
        if (vkd3d_depth_stencil_formats[i].dxgi_format == dxgi_format)
            return true;
    }

    return false;
}

/* FIXME: This table should be generated at compile-time. */
static HRESULT vkd3d_init_format_compatibility_lists(struct d3d12_device *device)
{
    struct vkd3d_format_compatibility_list *lists, *current_list;
    const struct vkd3d_format_compatibility_info *current;
    DXGI_FORMAT dxgi_format;
    VkFormat vk_format;
    unsigned int count;
    unsigned int i, j;

    device->format_compatibility_list_count = 0;
    device->format_compatibility_lists = NULL;

    if (!device->vk_info.KHR_image_format_list)
        return S_OK;

    count = 1;
    dxgi_format = vkd3d_format_compatibility_info[0].typeless_format;
    for (i = 0; i < ARRAY_SIZE(vkd3d_format_compatibility_info); ++i)
    {
        DXGI_FORMAT typeless_format = vkd3d_format_compatibility_info[i].typeless_format;

        if (dxgi_format != typeless_format)
        {
            ++count;
            dxgi_format = typeless_format;
        }
    }

    if (!(lists = vkd3d_calloc(count, sizeof(*lists))))
        return E_OUTOFMEMORY;

    count = 0;
    current_list = lists;
    current_list->typeless_format = vkd3d_format_compatibility_info[0].typeless_format;
    for (i = 0; i < ARRAY_SIZE(vkd3d_format_compatibility_info); ++i)
    {
        current = &vkd3d_format_compatibility_info[i];

        if (current_list->typeless_format != current->typeless_format)
        {
            /* Avoid empty format lists. */
            if (current_list->format_count)
            {
                ++current_list;
                ++count;
            }

            current_list->typeless_format = current->typeless_format;
        }

        /* In Vulkan, each depth-stencil format is only compatible with itself. */
        if (dxgi_format_is_depth_stencil(current->format))
            continue;

        if (!(vk_format = vkd3d_get_vk_format(current->format)))
            continue;

        for (j = 0; j < current_list->format_count; ++j)
        {
            if (current_list->vk_formats[j] == vk_format)
                break;
        }

        if (j >= current_list->format_count)
        {
            assert(current_list->format_count < VKD3D_MAX_COMPATIBLE_FORMAT_COUNT);
            current_list->vk_formats[current_list->format_count++] = vk_format;
        }
    }
    if (current_list->format_count)
        ++count;

    device->format_compatibility_list_count = count;
    device->format_compatibility_lists = lists;
    return S_OK;
}

static void vkd3d_cleanup_format_compatibility_lists(struct d3d12_device *device)
{
    vkd3d_free((void *)device->format_compatibility_lists);

    device->format_compatibility_lists = NULL;
    device->format_compatibility_list_count = 0;
}

static HRESULT vkd3d_init_depth_stencil_formats(struct d3d12_device *device)
{
    const unsigned int count = ARRAY_SIZE(vkd3d_depth_stencil_formats);
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    VkFormatProperties properties;
    struct vkd3d_format *formats;
    unsigned int i;

    VK_CALL(vkGetPhysicalDeviceFormatProperties(device->vk_physical_device,
            VK_FORMAT_D24_UNORM_S8_UINT, &properties));

    if (properties.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT)
    {
        device->depth_stencil_formats = vkd3d_depth_stencil_formats;
    }
    else
    {
        /* AMD doesn't support VK_FORMAT_D24_UNORM_S8_UINT. */
        WARN("Mapping VK_FORMAT_D24_UNORM_S8_UINT to VK_FORMAT_D32_SFLOAT_S8_UINT.\n");

        if (!(formats = vkd3d_calloc(count, sizeof(*formats))))
            return E_OUTOFMEMORY;

        memcpy(formats, vkd3d_depth_stencil_formats, sizeof(vkd3d_depth_stencil_formats));
        for (i = 0; i < count; ++i)
        {
            if (formats[i].vk_format == VK_FORMAT_D24_UNORM_S8_UINT)
            {
                formats[i].vk_format = VK_FORMAT_D32_SFLOAT_S8_UINT;
                formats[i].is_emulated = true;
            }
        }

        device->depth_stencil_formats = formats;
    }

    return S_OK;
}

static void vkd3d_cleanup_depth_stencil_formats(struct d3d12_device *device)
{
    if (vkd3d_depth_stencil_formats != device->depth_stencil_formats)
        vkd3d_free((void *)device->depth_stencil_formats);

    device->depth_stencil_formats = NULL;
}

HRESULT vkd3d_init_format_info(struct d3d12_device *device)
{
    HRESULT hr;

    if (FAILED(hr = vkd3d_init_depth_stencil_formats(device)))
        return hr;

    if FAILED(hr = vkd3d_init_format_compatibility_lists(device))
        vkd3d_cleanup_depth_stencil_formats(device);

    return hr;
}

void vkd3d_cleanup_format_info(struct d3d12_device *device)
{
    vkd3d_cleanup_depth_stencil_formats(device);
    vkd3d_cleanup_format_compatibility_lists(device);
}

/* We use overrides for depth/stencil formats. This is required in order to
 * properly support typeless formats because depth/stencil formats are only
 * compatible with themselves in Vulkan.
 */
static const struct vkd3d_format *vkd3d_get_depth_stencil_format(const struct d3d12_device *device,
        DXGI_FORMAT dxgi_format)
{
    const struct vkd3d_format *formats;
    unsigned int i;

    assert(device);
    formats = device->depth_stencil_formats;

    for (i = 0; i < ARRAY_SIZE(vkd3d_depth_stencil_formats); ++i)
    {
        if (formats[i].dxgi_format == dxgi_format)
            return &formats[i];
    }

    return NULL;
}

const struct vkd3d_format *vkd3d_get_format(const struct d3d12_device *device,
        DXGI_FORMAT dxgi_format, bool depth_stencil)
{
    const struct vkd3d_format *format;
    unsigned int i;

    if (depth_stencil && (format = vkd3d_get_depth_stencil_format(device, dxgi_format)))
        return format;

    for (i = 0; i < ARRAY_SIZE(vkd3d_formats); ++i)
    {
        if (vkd3d_formats[i].dxgi_format == dxgi_format)
            return &vkd3d_formats[i];
    }

    return NULL;
}

VkFormat vkd3d_get_vk_format(DXGI_FORMAT format)
{
    const struct vkd3d_format *vkd3d_format;

    if (!(vkd3d_format = vkd3d_get_format(NULL, format, false)))
        return VK_FORMAT_UNDEFINED;

    return vkd3d_format->vk_format;
}

DXGI_FORMAT vkd3d_get_dxgi_format(VkFormat format)
{
    DXGI_FORMAT dxgi_format;
    VkFormat vk_format;
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(vkd3d_formats); ++i)
    {
        vk_format = vkd3d_formats[i].vk_format;
        dxgi_format = vkd3d_formats[i].dxgi_format;
        if (vk_format == format && vkd3d_formats[i].type != VKD3D_FORMAT_TYPE_TYPELESS)
            return dxgi_format;
    }

    FIXME("Unhandled Vulkan format %#x.\n", format);
    return DXGI_FORMAT_UNKNOWN;
}

bool is_valid_feature_level(D3D_FEATURE_LEVEL feature_level)
{
    static const D3D_FEATURE_LEVEL valid_feature_levels[] =
    {
        D3D_FEATURE_LEVEL_12_1,
        D3D_FEATURE_LEVEL_12_0,
        D3D_FEATURE_LEVEL_11_1,
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_1,
        D3D_FEATURE_LEVEL_10_0,
        D3D_FEATURE_LEVEL_9_3,
        D3D_FEATURE_LEVEL_9_2,
        D3D_FEATURE_LEVEL_9_1,
    };
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(valid_feature_levels); ++i)
    {
        if (valid_feature_levels[i] == feature_level)
            return true;
    }

    return false;
}

bool is_write_resource_state(D3D12_RESOURCE_STATES state)
{
    return state & (D3D12_RESOURCE_STATE_RENDER_TARGET
            | D3D12_RESOURCE_STATE_UNORDERED_ACCESS
            | D3D12_RESOURCE_STATE_DEPTH_WRITE
            | D3D12_RESOURCE_STATE_STREAM_OUT
            | D3D12_RESOURCE_STATE_COPY_DEST
            | D3D12_RESOURCE_STATE_RESOLVE_DEST);
}

static bool is_power_of_two(unsigned int x)
{
    return x && !(x & (x -1));
}

bool is_valid_resource_state(D3D12_RESOURCE_STATES state)
{
    const D3D12_RESOURCE_STATES valid_states =
            D3D12_RESOURCE_STATE_COMMON |
            D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER |
            D3D12_RESOURCE_STATE_INDEX_BUFFER |
            D3D12_RESOURCE_STATE_RENDER_TARGET |
            D3D12_RESOURCE_STATE_UNORDERED_ACCESS |
            D3D12_RESOURCE_STATE_DEPTH_WRITE |
            D3D12_RESOURCE_STATE_DEPTH_READ |
            D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE |
            D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE |
            D3D12_RESOURCE_STATE_STREAM_OUT |
            D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT |
            D3D12_RESOURCE_STATE_COPY_DEST |
            D3D12_RESOURCE_STATE_COPY_SOURCE |
            D3D12_RESOURCE_STATE_RESOLVE_DEST |
            D3D12_RESOURCE_STATE_RESOLVE_SOURCE |
            D3D12_RESOURCE_STATE_GENERIC_READ |
            D3D12_RESOURCE_STATE_PRESENT |
            D3D12_RESOURCE_STATE_PREDICATION;

    if (state & ~valid_states)
    {
        WARN("Invalid resource states %#x.\n", state & ~valid_states);
        return false;
    }

    /* Exactly one bit must be set for write states. */
    if (is_write_resource_state(state) && !is_power_of_two(state))
    {
        WARN("Write state cannot be mixed with other states: %#x.\n", state);
        return false;
    }

    return true;
}

HRESULT return_interface(void *iface, REFIID iface_iid,
        REFIID requested_iid, void **object)
{
    IUnknown *unknown = iface;
    HRESULT hr;

    if (IsEqualGUID(iface_iid, requested_iid))
    {
        *object = unknown;
        return S_OK;
    }

    hr = IUnknown_QueryInterface(unknown, requested_iid, object);
    IUnknown_Release(unknown);
    return hr;
}

const char *debug_d3d12_box(const D3D12_BOX *box)
{
    if (!box)
        return "(null)";

    return vkd3d_dbg_sprintf("(%u, %u, %u)-(%u, %u, %u)",
            box->left, box->top, box->front,
            box->right, box->bottom, box->back);
}

static const char *debug_d3d12_shader_component(D3D12_SHADER_COMPONENT_MAPPING component)
{
    switch (component)
    {
        case D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_0:
            return "r";
        case D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_1:
            return "g";
        case D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_2:
            return "b";
        case D3D12_SHADER_COMPONENT_MAPPING_FROM_MEMORY_COMPONENT_3:
            return "a";
        case D3D12_SHADER_COMPONENT_MAPPING_FORCE_VALUE_0:
            return "0";
        case D3D12_SHADER_COMPONENT_MAPPING_FORCE_VALUE_1:
            return "1";
    }

    FIXME("Invalid component mapping %#x.\n", component);
    return "invalid";
}

const char *debug_d3d12_shader_component_mapping(unsigned int mapping)
{
    return vkd3d_dbg_sprintf("{%s, %s, %s, %s}",
            debug_d3d12_shader_component(D3D12_DECODE_SHADER_4_COMPONENT_MAPPING(0, mapping)),
            debug_d3d12_shader_component(D3D12_DECODE_SHADER_4_COMPONENT_MAPPING(1, mapping)),
            debug_d3d12_shader_component(D3D12_DECODE_SHADER_4_COMPONENT_MAPPING(2, mapping)),
            debug_d3d12_shader_component(D3D12_DECODE_SHADER_4_COMPONENT_MAPPING(3, mapping)));
}

const char *debug_vk_extent_3d(VkExtent3D extent)
{
    return vkd3d_dbg_sprintf("(%u, %u, %u)",
            (unsigned int)extent.width,
            (unsigned int)extent.height,
            (unsigned int)extent.depth);
}

const char *debug_vk_queue_flags(VkQueueFlags flags)
{
    char buffer[120];

    buffer[0] = '\0';
#define FLAG_TO_STR(f) if (flags & f) { strcat(buffer, " | "#f); flags &= ~f; }
    FLAG_TO_STR(VK_QUEUE_GRAPHICS_BIT)
    FLAG_TO_STR(VK_QUEUE_COMPUTE_BIT)
    FLAG_TO_STR(VK_QUEUE_TRANSFER_BIT)
    FLAG_TO_STR(VK_QUEUE_SPARSE_BINDING_BIT)
#undef FLAG_TO_STR
    if (flags)
        FIXME("Unrecognized flag(s) %#x.\n", flags);

    if (!buffer[0])
        return "0";
    return vkd3d_dbg_sprintf("%s", &buffer[3]);
}

const char *debug_vk_memory_heap_flags(VkMemoryHeapFlags flags)
{
    char buffer[50];

    buffer[0] = '\0';
#define FLAG_TO_STR(f) if (flags & f) { strcat(buffer, " | "#f); flags &= ~f; }
    FLAG_TO_STR(VK_MEMORY_HEAP_DEVICE_LOCAL_BIT)
#undef FLAG_TO_STR
    if (flags)
        FIXME("Unrecognized flag(s) %#x.\n", flags);

    if (!buffer[0])
        return "0";
    return vkd3d_dbg_sprintf("%s", &buffer[3]);
}

const char *debug_vk_memory_property_flags(VkMemoryPropertyFlags flags)
{
    char buffer[200];

    buffer[0] = '\0';
#define FLAG_TO_STR(f) if (flags & f) { strcat(buffer, " | "#f); flags &= ~f; }
    FLAG_TO_STR(VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT)
    FLAG_TO_STR(VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT)
    FLAG_TO_STR(VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)
    FLAG_TO_STR(VK_MEMORY_PROPERTY_HOST_CACHED_BIT)
    FLAG_TO_STR(VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT)
#undef FLAG_TO_STR
    if (flags)
        FIXME("Unrecognized flag(s) %#x.\n", flags);

    if (!buffer[0])
        return "0";
    return vkd3d_dbg_sprintf("%s", &buffer[3]);
}

HRESULT hresult_from_errno(int rc)
{
    switch (rc)
    {
        case 0:
            return S_OK;
        case ENOMEM:
            return E_OUTOFMEMORY;
        case EINVAL:
            return E_INVALIDARG;
        default:
            FIXME("Unhandled errno %d.\n", rc);
            return E_FAIL;
    }
}

HRESULT hresult_from_vk_result(VkResult vr)
{
    switch (vr)
    {
        case VK_SUCCESS:
            return S_OK;
        case VK_ERROR_OUT_OF_DEVICE_MEMORY:
            WARN("Out of device memory.\n");
            /* fall-through */
        case VK_ERROR_OUT_OF_HOST_MEMORY:
            return E_OUTOFMEMORY;
        default:
            FIXME("Unhandled VkResult %d.\n", vr);
            /* fall-through */
        case VK_ERROR_DEVICE_LOST:
        case VK_ERROR_EXTENSION_NOT_PRESENT:
            return E_FAIL;
    }
}

HRESULT hresult_from_vkd3d_result(int vkd3d_result)
{
    switch (vkd3d_result)
    {
        case VKD3D_OK:
            return S_OK;
        case VKD3D_ERROR_INVALID_SHADER:
            WARN("Invalid shader bytecode.\n");
            /* fall-through */
        case VKD3D_ERROR:
            return E_FAIL;
        case VKD3D_ERROR_OUT_OF_MEMORY:
            return E_OUTOFMEMORY;
        case VKD3D_ERROR_INVALID_ARGUMENT:
            return E_INVALIDARG;
        case VKD3D_ERROR_NOT_IMPLEMENTED:
            return E_NOTIMPL;
        default:
            FIXME("Unhandled vkd3d result %d.\n", vkd3d_result);
            return E_FAIL;
    }
}

#define LOAD_GLOBAL_PFN(name) \
    if (!(procs->name = (void *)vkGetInstanceProcAddr(NULL, #name))) \
    { \
        ERR("Could not get global proc addr for '" #name "'.\n"); \
        return E_FAIL; \
    }

HRESULT vkd3d_load_vk_global_procs(struct vkd3d_vk_global_procs *procs,
        PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr)
{
    memset(procs, 0, sizeof(*procs));

    procs->vkGetInstanceProcAddr = vkGetInstanceProcAddr;

    LOAD_GLOBAL_PFN(vkCreateInstance)
    LOAD_GLOBAL_PFN(vkEnumerateInstanceExtensionProperties)

    TRACE("Loaded global Vulkan procs.\n");
    return S_OK;
}

#define LOAD_INSTANCE_PFN(name) \
    if (!(procs->name = (void *)global_procs->vkGetInstanceProcAddr(instance, #name))) \
    { \
        ERR("Could not get instance proc addr for '" #name "'.\n"); \
        return E_FAIL; \
    }
#define LOAD_INSTANCE_OPTIONAL_PFN(name) \
    procs->name = (void *)global_procs->vkGetInstanceProcAddr(instance, #name);

HRESULT vkd3d_load_vk_instance_procs(struct vkd3d_vk_instance_procs *procs,
        const struct vkd3d_vk_global_procs *global_procs, VkInstance instance)
{
    memset(procs, 0, sizeof(*procs));

#define VK_INSTANCE_PFN     LOAD_INSTANCE_PFN
#define VK_INSTANCE_EXT_PFN LOAD_INSTANCE_OPTIONAL_PFN
#include "vulkan_procs.h"

    TRACE("Loaded procs for VkInstance %p.\n", instance);
    return S_OK;
}

#define COPY_PARENT_PFN(name) procs->name = parent_procs->name;
#define LOAD_DEVICE_PFN(name) \
    if (!(procs->name = (void *)procs->vkGetDeviceProcAddr(device, #name))) \
    { \
        ERR("Could not get device proc addr for '" #name "'.\n"); \
        return E_FAIL; \
    }
#define LOAD_DEVICE_OPTIONAL_PFN(name) \
    procs->name = (void *)procs->vkGetDeviceProcAddr(device, #name);

HRESULT vkd3d_load_vk_device_procs(struct vkd3d_vk_device_procs *procs,
        const struct vkd3d_vk_instance_procs *parent_procs, VkDevice device)
{
    memset(procs, 0, sizeof(*procs));

#define VK_INSTANCE_PFN   COPY_PARENT_PFN
#define VK_DEVICE_PFN     LOAD_DEVICE_PFN
#define VK_DEVICE_EXT_PFN LOAD_DEVICE_OPTIONAL_PFN
#include "vulkan_procs.h"

    TRACE("Loaded procs for VkDevice %p.\n", device);
    return S_OK;
}

#ifdef _GNU_SOURCE

bool vkd3d_get_program_name(char program_name[PATH_MAX])
{
    char *name, *p, *real_path = NULL;

    if ((name = strrchr(program_invocation_name, '/')))
    {
        real_path = realpath("/proc/self/exe", NULL);

        /* Try to strip command line arguments. */
        if (real_path && (p = strrchr(real_path, '/'))
                && !strncmp(real_path, program_invocation_name, strlen(real_path)))
        {
            name = p;
        }

        ++name;
    }
    else if ((name = strrchr(program_invocation_name, '\\')))
    {
        ++name;
    }
    else
    {
        name = program_invocation_name;
    }

    strncpy(program_name, name, PATH_MAX);
    program_name[PATH_MAX - 1] = '\0';
    free(real_path);
    return true;
}

#else

bool vkd3d_get_program_name(char program_name[PATH_MAX])
{
    *program_name = '\0';
    return false;
}

#endif  /* _GNU_SOURCE */

static struct vkd3d_private_data *vkd3d_private_store_get_private_data(
        const struct vkd3d_private_store *store, const GUID *tag)
{
    struct vkd3d_private_data *data;

    LIST_FOR_EACH_ENTRY(data, &store->content, struct vkd3d_private_data, entry)
    {
        if (IsEqualGUID(&data->tag, tag))
            return data;
    }

    return NULL;
}

static HRESULT vkd3d_private_store_set_private_data(struct vkd3d_private_store *store,
        const GUID *tag, const void *data, unsigned int data_size, bool is_object)
{
    struct vkd3d_private_data *d, *old_data;
    const void *ptr = data;

    if (!data)
    {
        if ((d = vkd3d_private_store_get_private_data(store, tag)))
        {
            vkd3d_private_data_destroy(d);
            return S_OK;
        }

        return S_FALSE;
    }

    if (is_object)
    {
        if (data_size != sizeof(IUnknown *))
            return E_INVALIDARG;
        ptr = &data;
    }

    if (!(d = vkd3d_malloc(offsetof(struct vkd3d_private_data, u.data[data_size]))))
        return E_OUTOFMEMORY;

    d->tag = *tag;
    d->size = data_size;
    d->is_object = is_object;
    memcpy(d->u.data, ptr, data_size);
    if (is_object)
        IUnknown_AddRef(d->u.object);

    if ((old_data = vkd3d_private_store_get_private_data(store, tag)))
        vkd3d_private_data_destroy(old_data);
    list_add_tail(&store->content, &d->entry);

    return S_OK;
}

HRESULT vkd3d_get_private_data(struct vkd3d_private_store *store,
        const GUID *tag, unsigned int *out_size, void *out)
{
    const struct vkd3d_private_data *data;
    HRESULT hr = S_OK;
    unsigned int size;
    int rc;

    if (!out_size)
        return E_INVALIDARG;

    if ((rc = pthread_mutex_lock(&store->mutex)))
    {
        ERR("Failed to lock mutex, error %d.\n", rc);
        return hresult_from_errno(rc);
    }

    if (!(data = vkd3d_private_store_get_private_data(store, tag)))
    {
        *out_size = 0;
        hr = DXGI_ERROR_NOT_FOUND;
        goto done;
    }

    size = *out_size;
    *out_size = data->size;
    if (!out)
        goto done;

    if (size < data->size)
    {
        hr = DXGI_ERROR_MORE_DATA;
        goto done;
    }

    if (data->is_object)
        IUnknown_AddRef(data->u.object);
    memcpy(out, data->u.data, data->size);

done:
    pthread_mutex_unlock(&store->mutex);
    return hr;
}

HRESULT vkd3d_set_private_data(struct vkd3d_private_store *store,
        const GUID *tag, unsigned int data_size, const void *data)
{
    HRESULT hr;
    int rc;

    if ((rc = pthread_mutex_lock(&store->mutex)))
    {
        ERR("Failed to lock mutex, error %d.\n", rc);
        return hresult_from_errno(rc);
    }

    hr = vkd3d_private_store_set_private_data(store, tag, data, data_size, false);

    pthread_mutex_unlock(&store->mutex);
    return hr;
}

HRESULT vkd3d_set_private_data_interface(struct vkd3d_private_store *store,
        const GUID *tag, const IUnknown *object)
{
    const void *data = object ? object : (void *)&object;
    HRESULT hr;
    int rc;

    if ((rc = pthread_mutex_lock(&store->mutex)))
    {
        ERR("Failed to lock mutex, error %d.\n", rc);
        return hresult_from_errno(rc);
    }

    hr = vkd3d_private_store_set_private_data(store, tag, data, sizeof(object), !!object);

    pthread_mutex_unlock(&store->mutex);
    return hr;
}

VkResult vkd3d_set_vk_object_name_utf8(struct d3d12_device *device, uint64_t vk_object,
        VkDebugReportObjectTypeEXT vk_object_type, const char *name)
{
    const struct vkd3d_vk_device_procs *vk_procs = &device->vk_procs;
    VkDebugMarkerObjectNameInfoEXT info;

    if (!device->vk_info.EXT_debug_marker)
        return VK_SUCCESS;

    info.sType = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
    info.pNext = NULL;
    info.objectType = vk_object_type;
    info.object = vk_object;
    info.pObjectName = name;
    return VK_CALL(vkDebugMarkerSetObjectNameEXT(device->vk_device, &info));
}

HRESULT vkd3d_set_vk_object_name(struct d3d12_device *device, uint64_t vk_object,
        VkDebugReportObjectTypeEXT vk_object_type, const WCHAR *name)
{
    char *name_utf8;
    VkResult vr;

    if (!name)
        return E_INVALIDARG;

    if (!device->vk_info.EXT_debug_marker)
        return S_OK;

    if (!(name_utf8 = vkd3d_strdup_w_utf8(name, device->wchar_size)))
        return E_OUTOFMEMORY;

    vr = vkd3d_set_vk_object_name_utf8(device, vk_object, vk_object_type, name_utf8);

    vkd3d_free(name_utf8);

    return hresult_from_vk_result(vr);
}
