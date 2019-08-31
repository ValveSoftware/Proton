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

#ifndef __VKD3D_UTILS_PRIVATE_H
#define __VKD3D_UTILS_PRIVATE_H

#define COBJMACROS
#define NONAMELESSUNION
#define VK_NO_PROTOTYPES

#include <pthread.h>
#include <vkd3d.h>

#include "vkd3d_memory.h"
#include <vkd3d_utils.h>

struct vkd3d_event
{
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    BOOL is_signaled;
};

#endif  /* __VKD3D_UTILS_PRIVATE_H */
