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

#ifndef __VKD3D_DEBUG_H
#define __VKD3D_DEBUG_H

#include "vkd3d_common.h"

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>

#ifdef VKD3D_NO_TRACE_MESSAGES
#define TRACE(args...) do { } while (0)
#define TRACE_ON() (false)
#endif

#ifdef VKD3D_NO_DEBUG_MESSAGES
#define WARN(args...) do { } while (0)
#define FIXME(args...) do { } while (0)
#endif

enum vkd3d_dbg_level
{
    VKD3D_DBG_LEVEL_NONE,
    VKD3D_DBG_LEVEL_ERR,
    VKD3D_DBG_LEVEL_FIXME,
    VKD3D_DBG_LEVEL_WARN,
    VKD3D_DBG_LEVEL_TRACE,
};

enum vkd3d_dbg_level vkd3d_dbg_get_level(void) DECLSPEC_HIDDEN;

void vkd3d_dbg_printf(enum vkd3d_dbg_level level, const char *function,
        const char *fmt, ...) VKD3D_PRINTF_FUNC(3, 4) DECLSPEC_HIDDEN;

const char *vkd3d_dbg_sprintf(const char *fmt, ...) VKD3D_PRINTF_FUNC(1, 2) DECLSPEC_HIDDEN;
const char *vkd3d_dbg_vsprintf(const char *fmt, va_list args) DECLSPEC_HIDDEN;
const char *debugstr_a(const char *str) DECLSPEC_HIDDEN;
const char *debugstr_w(const WCHAR *wstr, size_t wchar_size) DECLSPEC_HIDDEN;

#define VKD3D_DBG_LOG(level) \
        do { \
        const enum vkd3d_dbg_level vkd3d_dbg_level = VKD3D_DBG_LEVEL_##level; \
        VKD3D_DBG_PRINTF

#define VKD3D_DBG_LOG_ONCE(first_time_level, level) \
        do { \
        static bool vkd3d_dbg_next_time; \
        const enum vkd3d_dbg_level vkd3d_dbg_level = vkd3d_dbg_next_time \
        ? VKD3D_DBG_LEVEL_##level : VKD3D_DBG_LEVEL_##first_time_level; \
        vkd3d_dbg_next_time = true; \
        VKD3D_DBG_PRINTF

#define VKD3D_DBG_PRINTF(args...) \
        vkd3d_dbg_printf(vkd3d_dbg_level, __FUNCTION__, args); } while (0)

#ifndef TRACE
#define TRACE VKD3D_DBG_LOG(TRACE)
#endif

#ifndef WARN
#define WARN  VKD3D_DBG_LOG(WARN)
#endif

#ifndef FIXME
#define FIXME VKD3D_DBG_LOG(FIXME)
#endif

#define ERR   VKD3D_DBG_LOG(ERR)

#ifndef TRACE_ON
#define TRACE_ON() (vkd3d_dbg_get_level() == VKD3D_DBG_LEVEL_TRACE)
#endif

#define FIXME_ONCE VKD3D_DBG_LOG_ONCE(FIXME, WARN)

#define VKD3D_DEBUG_ENV_NAME(name) const char *vkd3d_dbg_env_name = name

static inline const char *debugstr_guid(const GUID *guid)
{
    if (!guid)
        return "(null)";

    return vkd3d_dbg_sprintf("{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
            (unsigned long)guid->Data1, guid->Data2, guid->Data3, guid->Data4[0],
            guid->Data4[1], guid->Data4[2], guid->Data4[3], guid->Data4[4],
            guid->Data4[5], guid->Data4[6], guid->Data4[7]);
}

unsigned int vkd3d_env_var_as_uint(const char *name, unsigned int default_value) DECLSPEC_HIDDEN;

struct vkd3d_debug_option
{
    const char *name;
    uint64_t flag;
};

bool vkd3d_debug_list_has_member(const char *string, const char *member) DECLSPEC_HIDDEN;
uint64_t vkd3d_parse_debug_options(const char *string,
        const struct vkd3d_debug_option *options, unsigned int option_count) DECLSPEC_HIDDEN;

#endif  /* __VKD3D_DEBUG_H */
