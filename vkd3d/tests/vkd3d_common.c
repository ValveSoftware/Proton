/*
 * Copyright 2019 Józef Kucia for CodeWeavers
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

#include "vkd3d_common.h"
#include "vkd3d_test.h"

static void check_version(const char *v, int expected_major, int expected_minor)
{
    int major, minor;

    vkd3d_parse_version(v, &major, &minor);
    ok(major == expected_major && minor == expected_minor,
            "Got %d.%d, expected %d.%d for %s.\n",
            major, minor, expected_major, expected_minor, v);
}

static void test_parse_version(void)
{
    check_version("", 0, 0);
    check_version(".3", 0, 3);
    check_version(".4.5", 0, 4);

    check_version("1", 1, 0);
    check_version("2", 2, 0);

    check_version("1.0", 1, 0);
    check_version("1.1", 1, 1);
    check_version("2.3.0", 2, 3);
}

static void check_contiguous(uint32_t mask, bool expected_result)
{
    bool r = vkd3d_bitmask_is_contiguous(mask);
    ok(r == expected_result, "Got %#x for bitmask %#"PRIx32".\n", r, mask);
}

static void test_bitmask_is_contiguous(void)
{
    check_contiguous(0x00000000, true);

    check_contiguous(0x00000001, true);
    check_contiguous(0x00000002, true);
    check_contiguous(0x00000003, true);
    check_contiguous(0x00000004, true);
    check_contiguous(0x00000005, false);
    check_contiguous(0x00000006, true);
    check_contiguous(0x00000007, true);
    check_contiguous(0x00000008, true);
    check_contiguous(0x00000009, false);
    check_contiguous(0x0000000a, false);
    check_contiguous(0x0000000b, false);
    check_contiguous(0x0000000c, true);
    check_contiguous(0x0000000d, false);
    check_contiguous(0x0000000e, true);
    check_contiguous(0x0000000f, true);

    check_contiguous(0x10000000, true);
    check_contiguous(0x20000000, true);
    check_contiguous(0x30000000, true);
    check_contiguous(0x40000000, true);
    check_contiguous(0x50000000, false);
    check_contiguous(0x60000000, true);
    check_contiguous(0x70000000, true);
    check_contiguous(0x80000000, true);
    check_contiguous(0x90000000, false);
    check_contiguous(0xa0000000, false);
    check_contiguous(0xb0000000, false);
    check_contiguous(0xc0000000, true);
    check_contiguous(0xd0000000, false);
    check_contiguous(0xe0000000, true);
    check_contiguous(0xf0000000, true);

    check_contiguous(0xf000000f, false);
    check_contiguous(0x0f0000f0, false);
    check_contiguous(0x00f00f00, false);

    check_contiguous(0x000000ff, true);
    check_contiguous(0x00000ff0, true);
    check_contiguous(0x0000ff00, true);
    check_contiguous(0x000ff000, true);
    check_contiguous(0x00ff0000, true);
    check_contiguous(0xff000000, true);

    check_contiguous(0xfff00000, true);
    check_contiguous(0xffff0000, true);
    check_contiguous(0xffff0000, true);
    check_contiguous(0xfffff000, true);
    check_contiguous(0xffffff00, true);
    check_contiguous(0xfffffff0, true);
    check_contiguous(0xffffffff, true);

    check_contiguous(0x0000001c, true);
    check_contiguous(0x000001c0, true);
    check_contiguous(0x00001c00, true);
    check_contiguous(0x0001c000, true);
    check_contiguous(0x001c0000, true);
    check_contiguous(0x01c00000, true);
    check_contiguous(0x1c000000, true);
}

START_TEST(vkd3d_common)
{
    run_test(test_parse_version);
    run_test(test_bitmask_is_contiguous);
}
