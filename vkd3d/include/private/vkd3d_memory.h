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

#ifndef __VKD3D_MEMORY_H
#define __VKD3D_MEMORY_H

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

#include "vkd3d_debug.h"

static inline void *vkd3d_malloc(size_t size)
{
    void *ptr;
    if (!(ptr = malloc(size)))
        ERR("Out of memory.\n");
    return ptr;
}

static inline void *vkd3d_realloc(void *ptr, size_t size)
{
    if (!(ptr = realloc(ptr, size)))
        ERR("Out of memory.\n");
    return ptr;
}

static inline void *vkd3d_calloc(size_t count, size_t size)
{
    void *ptr;
    assert(count <= ~(size_t)0 / size);
    if (!(ptr = calloc(count, size)))
        ERR("Out of memory.\n");
    return ptr;
}

static inline void vkd3d_free(void *ptr)
{
    free(ptr);
}

bool vkd3d_array_reserve(void **elements, size_t *capacity,
        size_t element_count, size_t element_size) DECLSPEC_HIDDEN;

#endif  /* __VKD3D_MEMORY_H */
