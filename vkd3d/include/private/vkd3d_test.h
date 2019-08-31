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

#ifndef __VKD3D_TEST_H
#define __VKD3D_TEST_H

#include "vkd3d_common.h"
#include <assert.h>
#include <inttypes.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void vkd3d_test_main(int argc, char **argv);
static const char *vkd3d_test_name;
static const char *vkd3d_test_platform = "other";

static void vkd3d_test_start_todo(bool is_todo);
static int vkd3d_test_loop_todo(void);
static void vkd3d_test_end_todo(void);

#define START_TEST(name) \
        static const char *vkd3d_test_name = #name; \
        static void vkd3d_test_main(int argc, char **argv)

/*
 * Use assert_that() for conditions that should always be true.
 * todo_if() and bug_if() do not influence assert_that().
 */
#define assert_that assert_that_(__LINE__)

#define ok ok_(__LINE__)

#define skip skip_(__LINE__)

#define trace trace_(__LINE__)

#define assert_that_(line) \
        do { \
        unsigned int vkd3d_line = line; \
        VKD3D_TEST_ASSERT_THAT

#define VKD3D_TEST_ASSERT_THAT(args...) \
        vkd3d_test_assert_that(vkd3d_line, args); } while (0)

#define ok_(line) \
        do { \
        unsigned int vkd3d_line = line; \
        VKD3D_TEST_OK

#define VKD3D_TEST_OK(args...) \
        vkd3d_test_ok(vkd3d_line, args); } while (0)

#define todo_(line) \
        do { \
        unsigned int vkd3d_line = line; \
        VKD3D_TEST_TODO

#define VKD3D_TEST_TODO(args...) \
        vkd3d_test_todo(vkd3d_line, args); } while (0)

#define skip_(line) \
        do { \
        unsigned int vkd3d_line = line; \
        VKD3D_TEST_SKIP

#define VKD3D_TEST_SKIP(args...) \
        vkd3d_test_skip(vkd3d_line, args); } while (0)

#define trace_(line) \
        do { \
        unsigned int vkd3d_line = line; \
        VKD3D_TEST_TRACE

#define VKD3D_TEST_TRACE(args...) \
        vkd3d_test_trace(vkd3d_line, args); } while (0)

#define todo_if(is_todo) \
    for (vkd3d_test_start_todo(is_todo); vkd3d_test_loop_todo(); vkd3d_test_end_todo())

#define bug_if(is_bug) \
    for (vkd3d_test_start_bug(is_bug); vkd3d_test_loop_bug(); vkd3d_test_end_bug())

#define todo todo_if(true)

static struct
{
    LONG success_count;
    LONG failure_count;
    LONG skip_count;
    LONG todo_count;
    LONG todo_success_count;
    LONG bug_count;

    unsigned int debug_level;

    unsigned int todo_level;
    bool todo_do_loop;

    unsigned int bug_level;
    bool bug_do_loop;
    bool bug_enabled;

    const char *test_name_filter;
    char context[1024];
} vkd3d_test_state;

static bool
vkd3d_test_platform_is_windows(void)
{
    return !strcmp(vkd3d_test_platform, "windows");
}

static inline bool
broken(bool condition)
{
    return condition && vkd3d_test_platform_is_windows();
}

static void
vkd3d_test_check_assert_that(unsigned int line, bool result, const char *fmt, va_list args)
{
    if (result)
    {
        InterlockedIncrement(&vkd3d_test_state.success_count);
        if (vkd3d_test_state.debug_level > 1)
            printf("%s:%d%s: Test succeeded.\n", vkd3d_test_name, line, vkd3d_test_state.context);
    }
    else
    {
        InterlockedIncrement(&vkd3d_test_state.failure_count);
        printf("%s:%d%s: Test failed: ", vkd3d_test_name, line, vkd3d_test_state.context);
        vprintf(fmt, args);
    }
}

static void VKD3D_PRINTF_FUNC(3, 4) VKD3D_UNUSED
vkd3d_test_assert_that(unsigned int line, bool result, const char *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    vkd3d_test_check_assert_that(line, result, fmt, args);
    va_end(args);
}

static void
vkd3d_test_check_ok(unsigned int line, bool result, const char *fmt, va_list args)
{
    bool is_todo = vkd3d_test_state.todo_level && !vkd3d_test_platform_is_windows();
    bool is_bug = vkd3d_test_state.bug_level && !vkd3d_test_platform_is_windows();

    if (is_bug && vkd3d_test_state.bug_enabled)
    {
        InterlockedIncrement(&vkd3d_test_state.bug_count);
        if (is_todo)
            result = !result;
        if (result)
            printf("%s:%d%s: Fixed bug: ", vkd3d_test_name, line, vkd3d_test_state.context);
        else
            printf("%s:%d%s: Bug: ", vkd3d_test_name, line, vkd3d_test_state.context);
        vprintf(fmt, args);
    }
    else if (is_todo)
    {
        if (result)
        {
            InterlockedIncrement(&vkd3d_test_state.todo_success_count);
            printf("%s:%d%s: Todo succeeded: ", vkd3d_test_name, line, vkd3d_test_state.context);
        }
        else
        {
            InterlockedIncrement(&vkd3d_test_state.todo_count);
            printf("%s:%d%s: Todo: ", vkd3d_test_name, line, vkd3d_test_state.context);
        }
        vprintf(fmt, args);
    }
    else
    {
        vkd3d_test_check_assert_that(line, result, fmt, args);
    }
}

static void VKD3D_PRINTF_FUNC(3, 4) VKD3D_UNUSED
vkd3d_test_ok(unsigned int line, bool result, const char *fmt, ...)
{
    va_list args;

    va_start(args, fmt);
    vkd3d_test_check_ok(line, result, fmt, args);
    va_end(args);
}

static void VKD3D_PRINTF_FUNC(2, 3) VKD3D_UNUSED
vkd3d_test_skip(unsigned int line, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    printf("%s:%d%s: Test skipped: ", vkd3d_test_name, line, vkd3d_test_state.context);
    vprintf(fmt, args);
    va_end(args);
    InterlockedIncrement(&vkd3d_test_state.skip_count);
}

static void VKD3D_PRINTF_FUNC(2, 3) VKD3D_UNUSED
vkd3d_test_trace(unsigned int line, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    printf("%s:%d%s: ", vkd3d_test_name, line, vkd3d_test_state.context);
    vprintf(fmt, args);
    va_end(args);
}

static void VKD3D_PRINTF_FUNC(1, 2) VKD3D_UNUSED
vkd3d_test_debug(const char *fmt, ...)
{
    char buffer[512];
    va_list args;
    int size;

    size = snprintf(buffer, sizeof(buffer), "%s: ", vkd3d_test_name);
    if (0 < size && size < sizeof(buffer))
    {
        va_start(args, fmt);
        vsnprintf(buffer + size, sizeof(buffer) - size, fmt, args);
        va_end(args);
    }
    buffer[sizeof(buffer) - 1] = '\0';

#ifdef _WIN32
    OutputDebugStringA(buffer);
#endif

    if (vkd3d_test_state.debug_level > 0)
        printf("%s\n", buffer);
}

int main(int argc, char **argv)
{
    const char *test_filter = getenv("VKD3D_TEST_FILTER");
    const char *debug_level = getenv("VKD3D_TEST_DEBUG");
    char *test_platform = getenv("VKD3D_TEST_PLATFORM");
    const char *bug = getenv("VKD3D_TEST_BUG");

    memset(&vkd3d_test_state, 0, sizeof(vkd3d_test_state));
    vkd3d_test_state.debug_level = debug_level ? atoi(debug_level) : 0;
    vkd3d_test_state.bug_enabled = bug ? atoi(bug) : true;
    vkd3d_test_state.test_name_filter = test_filter;

    if (test_platform)
    {
        test_platform = strdup(test_platform);
        vkd3d_test_platform = test_platform;
    }

    if (vkd3d_test_state.debug_level > 1)
        printf("Test platform: '%s'.\n", vkd3d_test_platform);

    vkd3d_test_main(argc, argv);

    printf("%s: %lu tests executed (%lu failures, %lu skipped, %lu todo, %lu bugs).\n",
            vkd3d_test_name,
            (unsigned long)(vkd3d_test_state.success_count
            + vkd3d_test_state.failure_count + vkd3d_test_state.todo_count
            + vkd3d_test_state.todo_success_count),
            (unsigned long)(vkd3d_test_state.failure_count
            + vkd3d_test_state.todo_success_count),
            (unsigned long)vkd3d_test_state.skip_count,
            (unsigned long)vkd3d_test_state.todo_count,
            (unsigned long)vkd3d_test_state.bug_count);

    if (test_platform)
        free(test_platform);

    return vkd3d_test_state.failure_count || vkd3d_test_state.todo_success_count;
}

#ifdef _WIN32
static char *vkd3d_test_strdupWtoA(WCHAR *str)
{
    char *out;
    int len;

    if (!(len = WideCharToMultiByte(CP_ACP, 0, str, -1, NULL, 0, NULL, NULL)))
        return NULL;
    if (!(out = malloc(len)))
        return NULL;
    WideCharToMultiByte(CP_ACP, 0, str, -1, out, len, NULL, NULL);

    return out;
}

static bool running_under_wine(void)
{
    HMODULE module = GetModuleHandleA("ntdll.dll");
    return module && GetProcAddress(module, "wine_server_call");
}

int wmain(int argc, WCHAR **wargv)
{
    char **argv;
    int i, ret;

    argv = malloc(argc * sizeof(*argv));
    assert(argv);
    for (i = 0; i < argc; ++i)
    {
        if (!(argv[i] = vkd3d_test_strdupWtoA(wargv[i])))
            break;
    }
    assert(i == argc);

    vkd3d_test_platform = running_under_wine() ? "wine" : "windows";

    ret = main(argc, argv);

    for (i = 0; i < argc; ++i)
        free(argv[i]);
    free(argv);

    return ret;
}
#endif  /* _WIN32 */

typedef void (*vkd3d_test_pfn)(void);

static inline void vkd3d_run_test(const char *name, vkd3d_test_pfn test_pfn)
{
    if (vkd3d_test_state.test_name_filter && !strstr(name, vkd3d_test_state.test_name_filter))
        return;

    vkd3d_test_debug("%s", name);
    test_pfn();
}

static inline void vkd3d_test_start_todo(bool is_todo)
{
    vkd3d_test_state.todo_level = (vkd3d_test_state.todo_level << 1) | is_todo;
    vkd3d_test_state.todo_do_loop = true;
}

static inline int vkd3d_test_loop_todo(void)
{
    bool do_loop = vkd3d_test_state.todo_do_loop;
    vkd3d_test_state.todo_do_loop = false;
    return do_loop;
}

static inline void vkd3d_test_end_todo(void)
{
    vkd3d_test_state.todo_level >>= 1;
}

static inline void vkd3d_test_start_bug(bool is_bug)
{
    vkd3d_test_state.bug_level = (vkd3d_test_state.bug_level << 1) | is_bug;
    vkd3d_test_state.bug_do_loop = true;
}

static inline int vkd3d_test_loop_bug(void)
{
    bool do_loop = vkd3d_test_state.bug_do_loop;
    vkd3d_test_state.bug_do_loop = false;
    return do_loop;
}

static inline void vkd3d_test_end_bug(void)
{
    vkd3d_test_state.bug_level >>= 1;
}

static inline void vkd3d_test_set_context(const char *fmt, ...)
{
    va_list args;

    if (!fmt)
    {
        vkd3d_test_state.context[0] = '\0';
        return;
    }

    vkd3d_test_state.context[0] = ':';
    va_start(args, fmt);
    vsnprintf(&vkd3d_test_state.context[1], sizeof(vkd3d_test_state.context) - 1, fmt, args);
    va_end(args);
    vkd3d_test_state.context[sizeof(vkd3d_test_state.context) - 1] = '\0';
}

#define run_test(test_pfn) \
        vkd3d_run_test(#test_pfn, test_pfn)

#endif  /* __VKD3D_TEST_H */
