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

#ifndef __VKD3D_TYPES_H
#define __VKD3D_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#define VKD3D_FORCE_32_BIT_ENUM(name) name##_FORCE_32BIT = 0x7fffffff

enum vkd3d_result
{
    VKD3D_OK = 0,
    VKD3D_ERROR = -1, /* unspecified failure */
    VKD3D_ERROR_OUT_OF_MEMORY = -2,
    VKD3D_ERROR_INVALID_ARGUMENT = -3,
    VKD3D_ERROR_INVALID_SHADER = -4,
    VKD3D_ERROR_NOT_IMPLEMENTED = -5,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_RESULT),
};

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif  /* __VKD3D_TYPES_H */
