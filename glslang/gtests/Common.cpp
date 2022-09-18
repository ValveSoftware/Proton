// Copyright (c) 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <cstdint>

#include <gmock/gmock.h>
#include "glslang/Include/Common.h"

namespace {

TEST(IsPow2, Int_Negative) {
  EXPECT_EQ(false, glslang::IsPow2(-5));
  EXPECT_EQ(false, glslang::IsPow2(-1));
  EXPECT_EQ(false, glslang::IsPow2(INT_MIN));
  EXPECT_EQ(false, glslang::IsPow2(int64_t(-10)));
}

TEST(IsPow2, Zero) {
  EXPECT_EQ(false, glslang::IsPow2(0));
  EXPECT_EQ(false, glslang::IsPow2(0u));
  EXPECT_EQ(false, glslang::IsPow2(0));
  EXPECT_EQ(false, glslang::IsPow2(uint64_t(0)));
  EXPECT_EQ(false, glslang::IsPow2(int64_t(0)));
}

TEST(IsPow2, Int_Positive_PowersOf2) {
  EXPECT_EQ(true, glslang::IsPow2(1));
  EXPECT_EQ(true, glslang::IsPow2(2));
  EXPECT_EQ(true, glslang::IsPow2(4));
  EXPECT_EQ(true, glslang::IsPow2(8));
  EXPECT_EQ(true, glslang::IsPow2(16));
  EXPECT_EQ(true, glslang::IsPow2(32768));
  EXPECT_EQ(true, glslang::IsPow2(65536));
  EXPECT_EQ(true, glslang::IsPow2(2147483648));
}

TEST(IsPow2, Int_Positive_NonPowersOf2) {
  EXPECT_EQ(false, glslang::IsPow2(3));
  EXPECT_EQ(false, glslang::IsPow2(5));
  EXPECT_EQ(false, glslang::IsPow2(2147483647));
}

TEST(IsPow2, Uint_Positive_PowersOf2) {
  EXPECT_EQ(true, glslang::IsPow2(1u));
  EXPECT_EQ(true, glslang::IsPow2(2u));
  EXPECT_EQ(true, glslang::IsPow2(4u));
  EXPECT_EQ(true, glslang::IsPow2(8u));
  EXPECT_EQ(true, glslang::IsPow2(16u));
  EXPECT_EQ(true, glslang::IsPow2(32768u));
  EXPECT_EQ(true, glslang::IsPow2(65536u));
  EXPECT_EQ(true, glslang::IsPow2(2147483648u));
}

TEST(IsPow2, Uint_Positive_NonPowersOf2) {
  EXPECT_EQ(false, glslang::IsPow2(3u));
  EXPECT_EQ(false, glslang::IsPow2(5u));
  EXPECT_EQ(false, glslang::IsPow2(2147483647u));
}

TEST(IntLog2, Int) {
  EXPECT_EQ(0, glslang::IntLog2(1));
  EXPECT_EQ(1, glslang::IntLog2(2));
  EXPECT_EQ(2, glslang::IntLog2(4));
  EXPECT_EQ(3, glslang::IntLog2(8));
  EXPECT_EQ(4, glslang::IntLog2(16));
  EXPECT_EQ(5, glslang::IntLog2(32));
  EXPECT_EQ(6, glslang::IntLog2(64));
  EXPECT_EQ(7, glslang::IntLog2(128));
  EXPECT_EQ(8, glslang::IntLog2(256));
  EXPECT_EQ(9, glslang::IntLog2(512));
  EXPECT_EQ(10, glslang::IntLog2(1024));
  EXPECT_EQ(11, glslang::IntLog2(2048));
  EXPECT_EQ(12, glslang::IntLog2(0x1000));
  EXPECT_EQ(13, glslang::IntLog2(0x2000));
  EXPECT_EQ(14, glslang::IntLog2(0x4000));
  EXPECT_EQ(15, glslang::IntLog2(0x8000));
  EXPECT_EQ(16, glslang::IntLog2(0x10000));
  EXPECT_EQ(17, glslang::IntLog2(0x20000));
  EXPECT_EQ(18, glslang::IntLog2(0x40000));
  EXPECT_EQ(19, glslang::IntLog2(0x80000));
  EXPECT_EQ(20, glslang::IntLog2(0x100000));
  EXPECT_EQ(21, glslang::IntLog2(0x200000));
  EXPECT_EQ(22, glslang::IntLog2(0x400000));
  EXPECT_EQ(23, glslang::IntLog2(0x800000));
  EXPECT_EQ(24, glslang::IntLog2(0x1000000));
  EXPECT_EQ(25, glslang::IntLog2(0x2000000));
  EXPECT_EQ(26, glslang::IntLog2(0x4000000));
  EXPECT_EQ(27, glslang::IntLog2(0x8000000));
  EXPECT_EQ(28, glslang::IntLog2(0x10000000));
  EXPECT_EQ(29, glslang::IntLog2(0x20000000));
  EXPECT_EQ(30, glslang::IntLog2(0x40000000));
}

TEST(IntLog2, Uint) {
  EXPECT_EQ(0, glslang::IntLog2(1u));
  EXPECT_EQ(1, glslang::IntLog2(2u));
  EXPECT_EQ(2, glslang::IntLog2(4u));
  EXPECT_EQ(3, glslang::IntLog2(8u));
  EXPECT_EQ(4, glslang::IntLog2(16u));
  EXPECT_EQ(5, glslang::IntLog2(32u));
  EXPECT_EQ(6, glslang::IntLog2(64u));
  EXPECT_EQ(7, glslang::IntLog2(128u));
  EXPECT_EQ(8, glslang::IntLog2(256u));
  EXPECT_EQ(9, glslang::IntLog2(512u));
  EXPECT_EQ(10, glslang::IntLog2(1024u));
  EXPECT_EQ(11, glslang::IntLog2(2048u));
  EXPECT_EQ(12, glslang::IntLog2(0x1000u));
  EXPECT_EQ(13, glslang::IntLog2(0x2000u));
  EXPECT_EQ(14, glslang::IntLog2(0x4000u));
  EXPECT_EQ(15, glslang::IntLog2(0x8000u));
  EXPECT_EQ(16, glslang::IntLog2(0x10000u));
  EXPECT_EQ(17, glslang::IntLog2(0x20000u));
  EXPECT_EQ(18, glslang::IntLog2(0x40000u));
  EXPECT_EQ(19, glslang::IntLog2(0x80000u));
  EXPECT_EQ(20, glslang::IntLog2(0x100000u));
  EXPECT_EQ(21, glslang::IntLog2(0x200000u));
  EXPECT_EQ(22, glslang::IntLog2(0x400000u));
  EXPECT_EQ(23, glslang::IntLog2(0x800000u));
  EXPECT_EQ(24, glslang::IntLog2(0x1000000u));
  EXPECT_EQ(25, glslang::IntLog2(0x2000000u));
  EXPECT_EQ(26, glslang::IntLog2(0x4000000u));
  EXPECT_EQ(27, glslang::IntLog2(0x8000000u));
  EXPECT_EQ(28, glslang::IntLog2(0x10000000u));
  EXPECT_EQ(29, glslang::IntLog2(0x20000000u));
  EXPECT_EQ(30, glslang::IntLog2(0x40000000u));
  EXPECT_EQ(31, glslang::IntLog2(0x80000000u));
}

TEST(IntLog2, Int64) {
  EXPECT_EQ(0, glslang::IntLog2(int64_t(1)));
  EXPECT_EQ(1, glslang::IntLog2(int64_t(2)));
  EXPECT_EQ(2, glslang::IntLog2(int64_t(4)));
  EXPECT_EQ(3, glslang::IntLog2(int64_t(8)));
  EXPECT_EQ(30, glslang::IntLog2(int64_t(0x40000000u)));
  EXPECT_EQ(31, glslang::IntLog2(int64_t(0x80000000u)));
  EXPECT_EQ(32, glslang::IntLog2(int64_t(0x10000) * int64_t(0x10000)));
  EXPECT_EQ(48, glslang::IntLog2(int64_t(0x10000) * int64_t(0x10000) * int64_t(0x10000)));
  EXPECT_EQ(62, glslang::IntLog2(int64_t(0x10000) * int64_t(0x10000) * int64_t(0x10000) * int64_t(0x4000)));
}

TEST(IntLog2, Uint64) {
  EXPECT_EQ(0, glslang::IntLog2(uint64_t(1)));
  EXPECT_EQ(1, glslang::IntLog2(uint64_t(2)));
  EXPECT_EQ(2, glslang::IntLog2(uint64_t(4)));
  EXPECT_EQ(3, glslang::IntLog2(uint64_t(8)));
  EXPECT_EQ(30, glslang::IntLog2(uint64_t(0x40000000u)));
  EXPECT_EQ(31, glslang::IntLog2(uint64_t(0x80000000u)));
  EXPECT_EQ(32, glslang::IntLog2(uint64_t(0x10000) * uint64_t(0x10000)));
  EXPECT_EQ(48, glslang::IntLog2(uint64_t(0x10000) * uint64_t(0x10000) * uint64_t(0x10000)));
  EXPECT_EQ(62, glslang::IntLog2(uint64_t(0x10000) * uint64_t(0x10000) * uint64_t(0x10000) * uint64_t(0x4000)));
  EXPECT_EQ(63, glslang::IntLog2(uint64_t(0x10000) * uint64_t(0x10000) * uint64_t(0x10000) * uint64_t(0x8000)));
}

}  // anonymous namespace
