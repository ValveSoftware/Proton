/*
 * Copyright 2008-2009 Henri Verbeet for CodeWeavers
 * Copyright 2017 Józef Kucia for CodeWeavers
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

#include "vkd3d_shader_private.h"

#define VKD3D_SM4_INSTRUCTION_MODIFIER        (0x1u << 31)

#define VKD3D_SM4_MODIFIER_AOFFIMMI           0x1
#define VKD3D_SM4_AOFFIMMI_U_SHIFT            9
#define VKD3D_SM4_AOFFIMMI_U_MASK             (0xfu << VKD3D_SM4_AOFFIMMI_U_SHIFT)
#define VKD3D_SM4_AOFFIMMI_V_SHIFT            13
#define VKD3D_SM4_AOFFIMMI_V_MASK             (0xfu << VKD3D_SM4_AOFFIMMI_V_SHIFT)
#define VKD3D_SM4_AOFFIMMI_W_SHIFT            17
#define VKD3D_SM4_AOFFIMMI_W_MASK             (0xfu << VKD3D_SM4_AOFFIMMI_W_SHIFT)

#define VKD3D_SM4_INSTRUCTION_LENGTH_SHIFT    24
#define VKD3D_SM4_INSTRUCTION_LENGTH_MASK     (0x1fu << VKD3D_SM4_INSTRUCTION_LENGTH_SHIFT)

#define VKD3D_SM4_INSTRUCTION_FLAGS_SHIFT     11
#define VKD3D_SM4_INSTRUCTION_FLAGS_MASK      (0x7u << VKD3D_SM4_INSTRUCTION_FLAGS_SHIFT)

#define VKD3D_SM4_RESOURCE_TYPE_SHIFT         11
#define VKD3D_SM4_RESOURCE_TYPE_MASK          (0xfu << VKD3D_SM4_RESOURCE_TYPE_SHIFT)

#define VKD3D_SM4_PRIMITIVE_TYPE_SHIFT        11
#define VKD3D_SM4_PRIMITIVE_TYPE_MASK         (0x3fu << VKD3D_SM4_PRIMITIVE_TYPE_SHIFT)

#define VKD3D_SM4_INDEX_TYPE_SHIFT            11
#define VKD3D_SM4_INDEX_TYPE_MASK             (0x1u << VKD3D_SM4_INDEX_TYPE_SHIFT)

#define VKD3D_SM4_SAMPLER_MODE_SHIFT          11
#define VKD3D_SM4_SAMPLER_MODE_MASK           (0xfu << VKD3D_SM4_SAMPLER_MODE_SHIFT)

#define VKD3D_SM4_SHADER_DATA_TYPE_SHIFT      11
#define VKD3D_SM4_SHADER_DATA_TYPE_MASK       (0xfu << VKD3D_SM4_SHADER_DATA_TYPE_SHIFT)

#define VKD3D_SM4_INTERPOLATION_MODE_SHIFT    11
#define VKD3D_SM4_INTERPOLATION_MODE_MASK     (0xfu << VKD3D_SM4_INTERPOLATION_MODE_SHIFT)

#define VKD3D_SM4_GLOBAL_FLAGS_SHIFT          11
#define VKD3D_SM4_GLOBAL_FLAGS_MASK           (0xffu << VKD3D_SM4_GLOBAL_FLAGS_SHIFT)

#define VKD3D_SM5_PRECISE_SHIFT               19
#define VKD3D_SM5_PRECISE_MASK                (0xfu << VKD3D_SM5_PRECISE_SHIFT)

#define VKD3D_SM5_CONTROL_POINT_COUNT_SHIFT   11
#define VKD3D_SM5_CONTROL_POINT_COUNT_MASK    (0xffu << VKD3D_SM5_CONTROL_POINT_COUNT_SHIFT)

#define VKD3D_SM5_FP_ARRAY_SIZE_SHIFT         16
#define VKD3D_SM5_FP_TABLE_COUNT_MASK         0xffffu

#define VKD3D_SM5_UAV_FLAGS_SHIFT             15
#define VKD3D_SM5_UAV_FLAGS_MASK              (0x1ffu << VKD3D_SM5_UAV_FLAGS_SHIFT)

#define VKD3D_SM5_SYNC_FLAGS_SHIFT            11
#define VKD3D_SM5_SYNC_FLAGS_MASK             (0xffu << VKD3D_SM5_SYNC_FLAGS_SHIFT)

#define VKD3D_SM5_TESSELLATOR_SHIFT           11
#define VKD3D_SM5_TESSELLATOR_MASK            (0xfu << VKD3D_SM5_TESSELLATOR_SHIFT)

#define VKD3D_SM4_OPCODE_MASK                 0xff

#define VKD3D_SM4_REGISTER_MODIFIER           (0x1u << 31)

#define VKD3D_SM4_ADDRESSING_SHIFT2           28
#define VKD3D_SM4_ADDRESSING_MASK2            (0x3u << VKD3D_SM4_ADDRESSING_SHIFT2)

#define VKD3D_SM4_ADDRESSING_SHIFT1           25
#define VKD3D_SM4_ADDRESSING_MASK1            (0x3u << VKD3D_SM4_ADDRESSING_SHIFT1)

#define VKD3D_SM4_ADDRESSING_SHIFT0           22
#define VKD3D_SM4_ADDRESSING_MASK0            (0x3u << VKD3D_SM4_ADDRESSING_SHIFT0)

#define VKD3D_SM4_REGISTER_ORDER_SHIFT        20
#define VKD3D_SM4_REGISTER_ORDER_MASK         (0x3u << VKD3D_SM4_REGISTER_ORDER_SHIFT)

#define VKD3D_SM4_REGISTER_TYPE_SHIFT         12
#define VKD3D_SM4_REGISTER_TYPE_MASK          (0xffu << VKD3D_SM4_REGISTER_TYPE_SHIFT)

#define VKD3D_SM4_SWIZZLE_TYPE_SHIFT          2
#define VKD3D_SM4_SWIZZLE_TYPE_MASK           (0x3u << VKD3D_SM4_SWIZZLE_TYPE_SHIFT)

#define VKD3D_SM4_IMMCONST_TYPE_SHIFT         0
#define VKD3D_SM4_IMMCONST_TYPE_MASK          (0x3u << VKD3D_SM4_IMMCONST_TYPE_SHIFT)

#define VKD3D_SM4_WRITEMASK_SHIFT             4
#define VKD3D_SM4_WRITEMASK_MASK              (0xfu << VKD3D_SM4_WRITEMASK_SHIFT)

#define VKD3D_SM4_SWIZZLE_SHIFT               4
#define VKD3D_SM4_SWIZZLE_MASK                (0xffu << VKD3D_SM4_SWIZZLE_SHIFT)

#define VKD3D_SM4_VERSION_MAJOR(version)      (((version) >> 4) & 0xf)
#define VKD3D_SM4_VERSION_MINOR(version)      (((version) >> 0) & 0xf)

#define VKD3D_SM4_ADDRESSING_RELATIVE         0x2
#define VKD3D_SM4_ADDRESSING_OFFSET           0x1

#define VKD3D_SM4_INSTRUCTION_FLAG_SATURATE   0x4

#define VKD3D_SM4_CONDITIONAL_NZ              (0x1u << 18)

enum vkd3d_sm4_opcode
{
    VKD3D_SM4_OP_ADD                              = 0x00,
    VKD3D_SM4_OP_AND                              = 0x01,
    VKD3D_SM4_OP_BREAK                            = 0x02,
    VKD3D_SM4_OP_BREAKC                           = 0x03,
    VKD3D_SM4_OP_CASE                             = 0x06,
    VKD3D_SM4_OP_CONTINUE                         = 0x07,
    VKD3D_SM4_OP_CONTINUEC                        = 0x08,
    VKD3D_SM4_OP_CUT                              = 0x09,
    VKD3D_SM4_OP_DEFAULT                          = 0x0a,
    VKD3D_SM4_OP_DERIV_RTX                        = 0x0b,
    VKD3D_SM4_OP_DERIV_RTY                        = 0x0c,
    VKD3D_SM4_OP_DISCARD                          = 0x0d,
    VKD3D_SM4_OP_DIV                              = 0x0e,
    VKD3D_SM4_OP_DP2                              = 0x0f,
    VKD3D_SM4_OP_DP3                              = 0x10,
    VKD3D_SM4_OP_DP4                              = 0x11,
    VKD3D_SM4_OP_ELSE                             = 0x12,
    VKD3D_SM4_OP_EMIT                             = 0x13,
    VKD3D_SM4_OP_ENDIF                            = 0x15,
    VKD3D_SM4_OP_ENDLOOP                          = 0x16,
    VKD3D_SM4_OP_ENDSWITCH                        = 0x17,
    VKD3D_SM4_OP_EQ                               = 0x18,
    VKD3D_SM4_OP_EXP                              = 0x19,
    VKD3D_SM4_OP_FRC                              = 0x1a,
    VKD3D_SM4_OP_FTOI                             = 0x1b,
    VKD3D_SM4_OP_FTOU                             = 0x1c,
    VKD3D_SM4_OP_GE                               = 0x1d,
    VKD3D_SM4_OP_IADD                             = 0x1e,
    VKD3D_SM4_OP_IF                               = 0x1f,
    VKD3D_SM4_OP_IEQ                              = 0x20,
    VKD3D_SM4_OP_IGE                              = 0x21,
    VKD3D_SM4_OP_ILT                              = 0x22,
    VKD3D_SM4_OP_IMAD                             = 0x23,
    VKD3D_SM4_OP_IMAX                             = 0x24,
    VKD3D_SM4_OP_IMIN                             = 0x25,
    VKD3D_SM4_OP_IMUL                             = 0x26,
    VKD3D_SM4_OP_INE                              = 0x27,
    VKD3D_SM4_OP_INEG                             = 0x28,
    VKD3D_SM4_OP_ISHL                             = 0x29,
    VKD3D_SM4_OP_ISHR                             = 0x2a,
    VKD3D_SM4_OP_ITOF                             = 0x2b,
    VKD3D_SM4_OP_LABEL                            = 0x2c,
    VKD3D_SM4_OP_LD                               = 0x2d,
    VKD3D_SM4_OP_LD2DMS                           = 0x2e,
    VKD3D_SM4_OP_LOG                              = 0x2f,
    VKD3D_SM4_OP_LOOP                             = 0x30,
    VKD3D_SM4_OP_LT                               = 0x31,
    VKD3D_SM4_OP_MAD                              = 0x32,
    VKD3D_SM4_OP_MIN                              = 0x33,
    VKD3D_SM4_OP_MAX                              = 0x34,
    VKD3D_SM4_OP_SHADER_DATA                      = 0x35,
    VKD3D_SM4_OP_MOV                              = 0x36,
    VKD3D_SM4_OP_MOVC                             = 0x37,
    VKD3D_SM4_OP_MUL                              = 0x38,
    VKD3D_SM4_OP_NE                               = 0x39,
    VKD3D_SM4_OP_NOP                              = 0x3a,
    VKD3D_SM4_OP_NOT                              = 0x3b,
    VKD3D_SM4_OP_OR                               = 0x3c,
    VKD3D_SM4_OP_RESINFO                          = 0x3d,
    VKD3D_SM4_OP_RET                              = 0x3e,
    VKD3D_SM4_OP_RETC                             = 0x3f,
    VKD3D_SM4_OP_ROUND_NE                         = 0x40,
    VKD3D_SM4_OP_ROUND_NI                         = 0x41,
    VKD3D_SM4_OP_ROUND_PI                         = 0x42,
    VKD3D_SM4_OP_ROUND_Z                          = 0x43,
    VKD3D_SM4_OP_RSQ                              = 0x44,
    VKD3D_SM4_OP_SAMPLE                           = 0x45,
    VKD3D_SM4_OP_SAMPLE_C                         = 0x46,
    VKD3D_SM4_OP_SAMPLE_C_LZ                      = 0x47,
    VKD3D_SM4_OP_SAMPLE_LOD                       = 0x48,
    VKD3D_SM4_OP_SAMPLE_GRAD                      = 0x49,
    VKD3D_SM4_OP_SAMPLE_B                         = 0x4a,
    VKD3D_SM4_OP_SQRT                             = 0x4b,
    VKD3D_SM4_OP_SWITCH                           = 0x4c,
    VKD3D_SM4_OP_SINCOS                           = 0x4d,
    VKD3D_SM4_OP_UDIV                             = 0x4e,
    VKD3D_SM4_OP_ULT                              = 0x4f,
    VKD3D_SM4_OP_UGE                              = 0x50,
    VKD3D_SM4_OP_UMUL                             = 0x51,
    VKD3D_SM4_OP_UMAX                             = 0x53,
    VKD3D_SM4_OP_UMIN                             = 0x54,
    VKD3D_SM4_OP_USHR                             = 0x55,
    VKD3D_SM4_OP_UTOF                             = 0x56,
    VKD3D_SM4_OP_XOR                              = 0x57,
    VKD3D_SM4_OP_DCL_RESOURCE                     = 0x58,
    VKD3D_SM4_OP_DCL_CONSTANT_BUFFER              = 0x59,
    VKD3D_SM4_OP_DCL_SAMPLER                      = 0x5a,
    VKD3D_SM4_OP_DCL_INDEX_RANGE                  = 0x5b,
    VKD3D_SM4_OP_DCL_OUTPUT_TOPOLOGY              = 0x5c,
    VKD3D_SM4_OP_DCL_INPUT_PRIMITIVE              = 0x5d,
    VKD3D_SM4_OP_DCL_VERTICES_OUT                 = 0x5e,
    VKD3D_SM4_OP_DCL_INPUT                        = 0x5f,
    VKD3D_SM4_OP_DCL_INPUT_SGV                    = 0x60,
    VKD3D_SM4_OP_DCL_INPUT_SIV                    = 0x61,
    VKD3D_SM4_OP_DCL_INPUT_PS                     = 0x62,
    VKD3D_SM4_OP_DCL_INPUT_PS_SGV                 = 0x63,
    VKD3D_SM4_OP_DCL_INPUT_PS_SIV                 = 0x64,
    VKD3D_SM4_OP_DCL_OUTPUT                       = 0x65,
    VKD3D_SM4_OP_DCL_OUTPUT_SIV                   = 0x67,
    VKD3D_SM4_OP_DCL_TEMPS                        = 0x68,
    VKD3D_SM4_OP_DCL_INDEXABLE_TEMP               = 0x69,
    VKD3D_SM4_OP_DCL_GLOBAL_FLAGS                 = 0x6a,
    VKD3D_SM4_OP_LOD                              = 0x6c,
    VKD3D_SM4_OP_GATHER4                          = 0x6d,
    VKD3D_SM4_OP_SAMPLE_POS                       = 0x6e,
    VKD3D_SM4_OP_SAMPLE_INFO                      = 0x6f,
    VKD3D_SM5_OP_HS_DECLS                         = 0x71,
    VKD3D_SM5_OP_HS_CONTROL_POINT_PHASE           = 0x72,
    VKD3D_SM5_OP_HS_FORK_PHASE                    = 0x73,
    VKD3D_SM5_OP_HS_JOIN_PHASE                    = 0x74,
    VKD3D_SM5_OP_EMIT_STREAM                      = 0x75,
    VKD3D_SM5_OP_CUT_STREAM                       = 0x76,
    VKD3D_SM5_OP_FCALL                            = 0x78,
    VKD3D_SM5_OP_BUFINFO                          = 0x79,
    VKD3D_SM5_OP_DERIV_RTX_COARSE                 = 0x7a,
    VKD3D_SM5_OP_DERIV_RTX_FINE                   = 0x7b,
    VKD3D_SM5_OP_DERIV_RTY_COARSE                 = 0x7c,
    VKD3D_SM5_OP_DERIV_RTY_FINE                   = 0x7d,
    VKD3D_SM5_OP_GATHER4_C                        = 0x7e,
    VKD3D_SM5_OP_GATHER4_PO                       = 0x7f,
    VKD3D_SM5_OP_GATHER4_PO_C                     = 0x80,
    VKD3D_SM5_OP_RCP                              = 0x81,
    VKD3D_SM5_OP_F32TOF16                         = 0x82,
    VKD3D_SM5_OP_F16TOF32                         = 0x83,
    VKD3D_SM5_OP_COUNTBITS                        = 0x86,
    VKD3D_SM5_OP_FIRSTBIT_HI                      = 0x87,
    VKD3D_SM5_OP_FIRSTBIT_LO                      = 0x88,
    VKD3D_SM5_OP_FIRSTBIT_SHI                     = 0x89,
    VKD3D_SM5_OP_UBFE                             = 0x8a,
    VKD3D_SM5_OP_IBFE                             = 0x8b,
    VKD3D_SM5_OP_BFI                              = 0x8c,
    VKD3D_SM5_OP_BFREV                            = 0x8d,
    VKD3D_SM5_OP_SWAPC                            = 0x8e,
    VKD3D_SM5_OP_DCL_STREAM                       = 0x8f,
    VKD3D_SM5_OP_DCL_FUNCTION_BODY                = 0x90,
    VKD3D_SM5_OP_DCL_FUNCTION_TABLE               = 0x91,
    VKD3D_SM5_OP_DCL_INTERFACE                    = 0x92,
    VKD3D_SM5_OP_DCL_INPUT_CONTROL_POINT_COUNT    = 0x93,
    VKD3D_SM5_OP_DCL_OUTPUT_CONTROL_POINT_COUNT   = 0x94,
    VKD3D_SM5_OP_DCL_TESSELLATOR_DOMAIN           = 0x95,
    VKD3D_SM5_OP_DCL_TESSELLATOR_PARTITIONING     = 0x96,
    VKD3D_SM5_OP_DCL_TESSELLATOR_OUTPUT_PRIMITIVE = 0x97,
    VKD3D_SM5_OP_DCL_HS_MAX_TESSFACTOR            = 0x98,
    VKD3D_SM5_OP_DCL_HS_FORK_PHASE_INSTANCE_COUNT = 0x99,
    VKD3D_SM5_OP_DCL_HS_JOIN_PHASE_INSTANCE_COUNT = 0x9a,
    VKD3D_SM5_OP_DCL_THREAD_GROUP                 = 0x9b,
    VKD3D_SM5_OP_DCL_UAV_TYPED                    = 0x9c,
    VKD3D_SM5_OP_DCL_UAV_RAW                      = 0x9d,
    VKD3D_SM5_OP_DCL_UAV_STRUCTURED               = 0x9e,
    VKD3D_SM5_OP_DCL_TGSM_RAW                     = 0x9f,
    VKD3D_SM5_OP_DCL_TGSM_STRUCTURED              = 0xa0,
    VKD3D_SM5_OP_DCL_RESOURCE_RAW                 = 0xa1,
    VKD3D_SM5_OP_DCL_RESOURCE_STRUCTURED          = 0xa2,
    VKD3D_SM5_OP_LD_UAV_TYPED                     = 0xa3,
    VKD3D_SM5_OP_STORE_UAV_TYPED                  = 0xa4,
    VKD3D_SM5_OP_LD_RAW                           = 0xa5,
    VKD3D_SM5_OP_STORE_RAW                        = 0xa6,
    VKD3D_SM5_OP_LD_STRUCTURED                    = 0xa7,
    VKD3D_SM5_OP_STORE_STRUCTURED                 = 0xa8,
    VKD3D_SM5_OP_ATOMIC_AND                       = 0xa9,
    VKD3D_SM5_OP_ATOMIC_OR                        = 0xaa,
    VKD3D_SM5_OP_ATOMIC_XOR                       = 0xab,
    VKD3D_SM5_OP_ATOMIC_CMP_STORE                 = 0xac,
    VKD3D_SM5_OP_ATOMIC_IADD                      = 0xad,
    VKD3D_SM5_OP_ATOMIC_IMAX                      = 0xae,
    VKD3D_SM5_OP_ATOMIC_IMIN                      = 0xaf,
    VKD3D_SM5_OP_ATOMIC_UMAX                      = 0xb0,
    VKD3D_SM5_OP_ATOMIC_UMIN                      = 0xb1,
    VKD3D_SM5_OP_IMM_ATOMIC_ALLOC                 = 0xb2,
    VKD3D_SM5_OP_IMM_ATOMIC_CONSUME               = 0xb3,
    VKD3D_SM5_OP_IMM_ATOMIC_IADD                  = 0xb4,
    VKD3D_SM5_OP_IMM_ATOMIC_AND                   = 0xb5,
    VKD3D_SM5_OP_IMM_ATOMIC_OR                    = 0xb6,
    VKD3D_SM5_OP_IMM_ATOMIC_XOR                   = 0xb7,
    VKD3D_SM5_OP_IMM_ATOMIC_EXCH                  = 0xb8,
    VKD3D_SM5_OP_IMM_ATOMIC_CMP_EXCH              = 0xb9,
    VKD3D_SM5_OP_IMM_ATOMIC_IMAX                  = 0xba,
    VKD3D_SM5_OP_IMM_ATOMIC_IMIN                  = 0xbb,
    VKD3D_SM5_OP_IMM_ATOMIC_UMAX                  = 0xbc,
    VKD3D_SM5_OP_IMM_ATOMIC_UMIN                  = 0xbd,
    VKD3D_SM5_OP_SYNC                             = 0xbe,
    VKD3D_SM5_OP_EVAL_SAMPLE_INDEX                = 0xcc,
    VKD3D_SM5_OP_EVAL_CENTROID                    = 0xcd,
    VKD3D_SM5_OP_DCL_GS_INSTANCES                 = 0xce,
};

enum vkd3d_sm4_register_type
{
    VKD3D_SM4_RT_TEMP                    = 0x00,
    VKD3D_SM4_RT_INPUT                   = 0x01,
    VKD3D_SM4_RT_OUTPUT                  = 0x02,
    VKD3D_SM4_RT_INDEXABLE_TEMP          = 0x03,
    VKD3D_SM4_RT_IMMCONST                = 0x04,
    VKD3D_SM4_RT_SAMPLER                 = 0x06,
    VKD3D_SM4_RT_RESOURCE                = 0x07,
    VKD3D_SM4_RT_CONSTBUFFER             = 0x08,
    VKD3D_SM4_RT_IMMCONSTBUFFER          = 0x09,
    VKD3D_SM4_RT_PRIMID                  = 0x0b,
    VKD3D_SM4_RT_DEPTHOUT                = 0x0c,
    VKD3D_SM4_RT_NULL                    = 0x0d,
    VKD3D_SM4_RT_RASTERIZER              = 0x0e,
    VKD3D_SM4_RT_OMASK                   = 0x0f,
    VKD3D_SM5_RT_STREAM                  = 0x10,
    VKD3D_SM5_RT_FUNCTION_BODY           = 0x11,
    VKD3D_SM5_RT_FUNCTION_POINTER        = 0x13,
    VKD3D_SM5_RT_OUTPUT_CONTROL_POINT_ID = 0x16,
    VKD3D_SM5_RT_FORK_INSTANCE_ID        = 0x17,
    VKD3D_SM5_RT_JOIN_INSTANCE_ID        = 0x18,
    VKD3D_SM5_RT_INPUT_CONTROL_POINT     = 0x19,
    VKD3D_SM5_RT_OUTPUT_CONTROL_POINT    = 0x1a,
    VKD3D_SM5_RT_PATCH_CONSTANT_DATA     = 0x1b,
    VKD3D_SM5_RT_DOMAIN_LOCATION         = 0x1c,
    VKD3D_SM5_RT_UAV                     = 0x1e,
    VKD3D_SM5_RT_SHARED_MEMORY           = 0x1f,
    VKD3D_SM5_RT_THREAD_ID               = 0x20,
    VKD3D_SM5_RT_THREAD_GROUP_ID         = 0x21,
    VKD3D_SM5_RT_LOCAL_THREAD_ID         = 0x22,
    VKD3D_SM5_RT_COVERAGE                = 0x23,
    VKD3D_SM5_RT_LOCAL_THREAD_INDEX      = 0x24,
    VKD3D_SM5_RT_GS_INSTANCE_ID          = 0x25,
    VKD3D_SM5_RT_DEPTHOUT_GREATER_EQUAL  = 0x26,
    VKD3D_SM5_RT_DEPTHOUT_LESS_EQUAL     = 0x27,
};

enum vkd3d_sm4_output_primitive_type
{
    VKD3D_SM4_OUTPUT_PT_POINTLIST     = 0x1,
    VKD3D_SM4_OUTPUT_PT_LINESTRIP     = 0x3,
    VKD3D_SM4_OUTPUT_PT_TRIANGLESTRIP = 0x5,
};

enum vkd3d_sm4_input_primitive_type
{
    VKD3D_SM4_INPUT_PT_POINT          = 0x01,
    VKD3D_SM4_INPUT_PT_LINE           = 0x02,
    VKD3D_SM4_INPUT_PT_TRIANGLE       = 0x03,
    VKD3D_SM4_INPUT_PT_LINEADJ        = 0x06,
    VKD3D_SM4_INPUT_PT_TRIANGLEADJ    = 0x07,
    VKD3D_SM5_INPUT_PT_PATCH1         = 0x08,
    VKD3D_SM5_INPUT_PT_PATCH2         = 0x09,
    VKD3D_SM5_INPUT_PT_PATCH3         = 0x0a,
    VKD3D_SM5_INPUT_PT_PATCH4         = 0x0b,
    VKD3D_SM5_INPUT_PT_PATCH5         = 0x0c,
    VKD3D_SM5_INPUT_PT_PATCH6         = 0x0d,
    VKD3D_SM5_INPUT_PT_PATCH7         = 0x0e,
    VKD3D_SM5_INPUT_PT_PATCH8         = 0x0f,
    VKD3D_SM5_INPUT_PT_PATCH9         = 0x10,
    VKD3D_SM5_INPUT_PT_PATCH10        = 0x11,
    VKD3D_SM5_INPUT_PT_PATCH11        = 0x12,
    VKD3D_SM5_INPUT_PT_PATCH12        = 0x13,
    VKD3D_SM5_INPUT_PT_PATCH13        = 0x14,
    VKD3D_SM5_INPUT_PT_PATCH14        = 0x15,
    VKD3D_SM5_INPUT_PT_PATCH15        = 0x16,
    VKD3D_SM5_INPUT_PT_PATCH16        = 0x17,
    VKD3D_SM5_INPUT_PT_PATCH17        = 0x18,
    VKD3D_SM5_INPUT_PT_PATCH18        = 0x19,
    VKD3D_SM5_INPUT_PT_PATCH19        = 0x1a,
    VKD3D_SM5_INPUT_PT_PATCH20        = 0x1b,
    VKD3D_SM5_INPUT_PT_PATCH21        = 0x1c,
    VKD3D_SM5_INPUT_PT_PATCH22        = 0x1d,
    VKD3D_SM5_INPUT_PT_PATCH23        = 0x1e,
    VKD3D_SM5_INPUT_PT_PATCH24        = 0x1f,
    VKD3D_SM5_INPUT_PT_PATCH25        = 0x20,
    VKD3D_SM5_INPUT_PT_PATCH26        = 0x21,
    VKD3D_SM5_INPUT_PT_PATCH27        = 0x22,
    VKD3D_SM5_INPUT_PT_PATCH28        = 0x23,
    VKD3D_SM5_INPUT_PT_PATCH29        = 0x24,
    VKD3D_SM5_INPUT_PT_PATCH30        = 0x25,
    VKD3D_SM5_INPUT_PT_PATCH31        = 0x26,
    VKD3D_SM5_INPUT_PT_PATCH32        = 0x27,
};

enum vkd3d_sm4_swizzle_type
{
    VKD3D_SM4_SWIZZLE_NONE            = 0x0,
    VKD3D_SM4_SWIZZLE_VEC4            = 0x1,
    VKD3D_SM4_SWIZZLE_SCALAR          = 0x2,
};

enum vkd3d_sm4_immconst_type
{
    VKD3D_SM4_IMMCONST_SCALAR = 0x1,
    VKD3D_SM4_IMMCONST_VEC4   = 0x2,
};

enum vkd3d_sm4_resource_type
{
    VKD3D_SM4_RESOURCE_BUFFER             = 0x1,
    VKD3D_SM4_RESOURCE_TEXTURE_1D         = 0x2,
    VKD3D_SM4_RESOURCE_TEXTURE_2D         = 0x3,
    VKD3D_SM4_RESOURCE_TEXTURE_2DMS       = 0x4,
    VKD3D_SM4_RESOURCE_TEXTURE_3D         = 0x5,
    VKD3D_SM4_RESOURCE_TEXTURE_CUBE       = 0x6,
    VKD3D_SM4_RESOURCE_TEXTURE_1DARRAY    = 0x7,
    VKD3D_SM4_RESOURCE_TEXTURE_2DARRAY    = 0x8,
    VKD3D_SM4_RESOURCE_TEXTURE_2DMSARRAY  = 0x9,
    VKD3D_SM4_RESOURCE_TEXTURE_CUBEARRAY  = 0xa,
};

enum vkd3d_sm4_data_type
{
    VKD3D_SM4_DATA_UNORM  = 0x1,
    VKD3D_SM4_DATA_SNORM  = 0x2,
    VKD3D_SM4_DATA_INT    = 0x3,
    VKD3D_SM4_DATA_UINT   = 0x4,
    VKD3D_SM4_DATA_FLOAT  = 0x5,
};

enum vkd3d_sm4_sampler_mode
{
    VKD3D_SM4_SAMPLER_DEFAULT    = 0x0,
    VKD3D_SM4_SAMPLER_COMPARISON = 0x1,
};

enum vkd3d_sm4_shader_data_type
{
    VKD3D_SM4_SHADER_DATA_IMMEDIATE_CONSTANT_BUFFER = 0x3,
    VKD3D_SM4_SHADER_DATA_MESSAGE                   = 0x4,
};

struct vkd3d_shader_src_param_entry
{
    struct list entry;
    struct vkd3d_shader_src_param param;
};

struct vkd3d_sm4_data
{
    struct vkd3d_shader_version shader_version;
    const DWORD *start, *end;

    unsigned int output_map[MAX_REG_OUTPUT];

    struct vkd3d_shader_src_param src_param[5];
    struct vkd3d_shader_dst_param dst_param[2];
    struct list src_free;
    struct list src;
    struct vkd3d_shader_immediate_constant_buffer icb;
};

struct vkd3d_sm4_opcode_info
{
    enum vkd3d_sm4_opcode opcode;
    enum VKD3D_SHADER_INSTRUCTION_HANDLER handler_idx;
    const char *dst_info;
    const char *src_info;
    void (*read_opcode_func)(struct vkd3d_shader_instruction *ins,
            DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
            struct vkd3d_sm4_data *priv);
};

static const enum vkd3d_primitive_type output_primitive_type_table[] =
{
    /* UNKNOWN */                             VKD3D_PT_UNDEFINED,
    /* VKD3D_SM4_OUTPUT_PT_POINTLIST */       VKD3D_PT_POINTLIST,
    /* UNKNOWN */                             VKD3D_PT_UNDEFINED,
    /* VKD3D_SM4_OUTPUT_PT_LINESTRIP */       VKD3D_PT_LINESTRIP,
    /* UNKNOWN */                             VKD3D_PT_UNDEFINED,
    /* VKD3D_SM4_OUTPUT_PT_TRIANGLESTRIP */   VKD3D_PT_TRIANGLESTRIP,
};

static const enum vkd3d_primitive_type input_primitive_type_table[] =
{
    /* UNKNOWN */                             VKD3D_PT_UNDEFINED,
    /* VKD3D_SM4_INPUT_PT_POINT */            VKD3D_PT_POINTLIST,
    /* VKD3D_SM4_INPUT_PT_LINE */             VKD3D_PT_LINELIST,
    /* VKD3D_SM4_INPUT_PT_TRIANGLE */         VKD3D_PT_TRIANGLELIST,
    /* UNKNOWN */                             VKD3D_PT_UNDEFINED,
    /* UNKNOWN */                             VKD3D_PT_UNDEFINED,
    /* VKD3D_SM4_INPUT_PT_LINEADJ */          VKD3D_PT_LINELIST_ADJ,
    /* VKD3D_SM4_INPUT_PT_TRIANGLEADJ */      VKD3D_PT_TRIANGLELIST_ADJ,
};

static const enum vkd3d_shader_resource_type resource_type_table[] =
{
    /* 0 */                                       VKD3D_SHADER_RESOURCE_NONE,
    /* VKD3D_SM4_RESOURCE_BUFFER */               VKD3D_SHADER_RESOURCE_BUFFER,
    /* VKD3D_SM4_RESOURCE_TEXTURE_1D */           VKD3D_SHADER_RESOURCE_TEXTURE_1D,
    /* VKD3D_SM4_RESOURCE_TEXTURE_2D */           VKD3D_SHADER_RESOURCE_TEXTURE_2D,
    /* VKD3D_SM4_RESOURCE_TEXTURE_2DMS */         VKD3D_SHADER_RESOURCE_TEXTURE_2DMS,
    /* VKD3D_SM4_RESOURCE_TEXTURE_3D */           VKD3D_SHADER_RESOURCE_TEXTURE_3D,
    /* VKD3D_SM4_RESOURCE_TEXTURE_CUBE */         VKD3D_SHADER_RESOURCE_TEXTURE_CUBE,
    /* VKD3D_SM4_RESOURCE_TEXTURE_1DARRAY */      VKD3D_SHADER_RESOURCE_TEXTURE_1DARRAY,
    /* VKD3D_SM4_RESOURCE_TEXTURE_2DARRAY */      VKD3D_SHADER_RESOURCE_TEXTURE_2DARRAY,
    /* VKD3D_SM4_RESOURCE_TEXTURE_2DMSARRAY */    VKD3D_SHADER_RESOURCE_TEXTURE_2DMSARRAY,
    /* VKD3D_SM4_RESOURCE_TEXTURE_CUBEARRAY */    VKD3D_SHADER_RESOURCE_TEXTURE_CUBEARRAY,
};

static const enum vkd3d_data_type data_type_table[] =
{
    /* 0 */                       VKD3D_DATA_FLOAT,
    /* VKD3D_SM4_DATA_UNORM */    VKD3D_DATA_UNORM,
    /* VKD3D_SM4_DATA_SNORM */    VKD3D_DATA_SNORM,
    /* VKD3D_SM4_DATA_INT */      VKD3D_DATA_INT,
    /* VKD3D_SM4_DATA_UINT */     VKD3D_DATA_UINT,
    /* VKD3D_SM4_DATA_FLOAT */    VKD3D_DATA_FLOAT,
};

static bool shader_is_sm_5_1(const struct vkd3d_sm4_data *priv)
{
    const struct vkd3d_shader_version *version = &priv->shader_version;
    return version->major >= 5 && version->minor >= 1;
}

static bool shader_sm4_read_src_param(struct vkd3d_sm4_data *priv, const DWORD **ptr, const DWORD *end,
        enum vkd3d_data_type data_type, struct vkd3d_shader_src_param *src_param);
static bool shader_sm4_read_dst_param(struct vkd3d_sm4_data *priv, const DWORD **ptr, const DWORD *end,
        enum vkd3d_data_type data_type, struct vkd3d_shader_dst_param *dst_param);

static bool shader_sm4_read_register_space(struct vkd3d_sm4_data *priv,
        const DWORD **ptr, const DWORD *end, unsigned int *register_space)
{
    *register_space = 0;

    if (!shader_is_sm_5_1(priv))
        return true;

    if (*ptr >= end)
    {
        WARN("Invalid ptr %p >= end %p.\n", *ptr, end);
        return false;
    }

    *register_space = *(*ptr)++;
    return true;
}

static void shader_sm4_read_conditional_op(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    shader_sm4_read_src_param(priv, &tokens, &tokens[token_count], VKD3D_DATA_UINT, &priv->src_param[0]);
    ins->flags = (opcode_token & VKD3D_SM4_CONDITIONAL_NZ) ?
            VKD3D_SHADER_CONDITIONAL_OP_NZ : VKD3D_SHADER_CONDITIONAL_OP_Z;
}

static void shader_sm4_read_shader_data(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    enum vkd3d_sm4_shader_data_type type;
    unsigned int icb_size;

    type = (opcode_token & VKD3D_SM4_SHADER_DATA_TYPE_MASK) >> VKD3D_SM4_SHADER_DATA_TYPE_SHIFT;
    if (type != VKD3D_SM4_SHADER_DATA_IMMEDIATE_CONSTANT_BUFFER)
    {
        FIXME("Ignoring shader data type %#x.\n", type);
        ins->handler_idx = VKD3DSIH_NOP;
        return;
    }

    ++tokens;
    icb_size = token_count - 1;
    if (icb_size % 4 || icb_size > MAX_IMMEDIATE_CONSTANT_BUFFER_SIZE)
    {
        FIXME("Unexpected immediate constant buffer size %u.\n", icb_size);
        ins->handler_idx = VKD3DSIH_INVALID;
        return;
    }

    priv->icb.vec4_count = icb_size / 4;
    memcpy(priv->icb.data, tokens, sizeof(*tokens) * icb_size);
    ins->declaration.icb = &priv->icb;
}

static void shader_sm4_read_dcl_resource(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    enum vkd3d_sm4_resource_type resource_type;
    const DWORD *end = &tokens[token_count];
    enum vkd3d_sm4_data_type data_type;
    enum vkd3d_data_type reg_data_type;
    DWORD components;

    resource_type = (opcode_token & VKD3D_SM4_RESOURCE_TYPE_MASK) >> VKD3D_SM4_RESOURCE_TYPE_SHIFT;
    if (!resource_type || (resource_type >= ARRAY_SIZE(resource_type_table)))
    {
        FIXME("Unhandled resource type %#x.\n", resource_type);
        ins->declaration.semantic.resource_type = VKD3D_SHADER_RESOURCE_NONE;
    }
    else
    {
        ins->declaration.semantic.resource_type = resource_type_table[resource_type];
    }
    reg_data_type = opcode == VKD3D_SM4_OP_DCL_RESOURCE ? VKD3D_DATA_RESOURCE : VKD3D_DATA_UAV;
    shader_sm4_read_dst_param(priv, &tokens, end, reg_data_type, &ins->declaration.semantic.reg);

    components = *tokens++;
    if ((components & 0xfff0) != (components & 0xf) * 0x1110)
        FIXME("Components (%#x) have different data types.\n", components);
    data_type = components & 0xf;

    if (!data_type || (data_type >= ARRAY_SIZE(data_type_table)))
    {
        FIXME("Unhandled data type %#x.\n", data_type);
        ins->declaration.semantic.resource_data_type = VKD3D_DATA_FLOAT;
    }
    else
    {
        ins->declaration.semantic.resource_data_type = data_type_table[data_type];
    }

    if (reg_data_type == VKD3D_DATA_UAV)
        ins->flags = (opcode_token & VKD3D_SM5_UAV_FLAGS_MASK) >> VKD3D_SM5_UAV_FLAGS_SHIFT;

    shader_sm4_read_register_space(priv, &tokens, end, &ins->declaration.semantic.register_space);
}

static void shader_sm4_read_dcl_constant_buffer(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    const DWORD *end = &tokens[token_count];

    shader_sm4_read_src_param(priv, &tokens, end, VKD3D_DATA_FLOAT, &ins->declaration.cb.src);
    if (opcode_token & VKD3D_SM4_INDEX_TYPE_MASK)
        ins->flags |= VKD3DSI_INDEXED_DYNAMIC;

    ins->declaration.cb.size = ins->declaration.cb.src.reg.idx[1].offset;
    ins->declaration.cb.register_space = 0;

    if (shader_is_sm_5_1(priv))
    {
        if (tokens >= end)
        {
            FIXME("Invalid ptr %p >= end %p.\n", tokens, end);
            return;
        }

        ins->declaration.cb.size = *tokens++;
        shader_sm4_read_register_space(priv, &tokens, end, &ins->declaration.cb.register_space);
    }
}

static void shader_sm4_read_dcl_sampler(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    const DWORD *end = &tokens[token_count];

    ins->flags = (opcode_token & VKD3D_SM4_SAMPLER_MODE_MASK) >> VKD3D_SM4_SAMPLER_MODE_SHIFT;
    if (ins->flags & ~VKD3D_SM4_SAMPLER_COMPARISON)
        FIXME("Unhandled sampler mode %#x.\n", ins->flags);
    shader_sm4_read_src_param(priv, &tokens, end, VKD3D_DATA_SAMPLER, &ins->declaration.sampler.src);
    shader_sm4_read_register_space(priv, &tokens, end, &ins->declaration.sampler.register_space);
}

static void shader_sm4_read_dcl_index_range(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    shader_sm4_read_dst_param(priv, &tokens, &tokens[token_count], VKD3D_DATA_OPAQUE,
            &ins->declaration.index_range.dst);
    ins->declaration.index_range.register_count = *tokens;
}

static void shader_sm4_read_dcl_output_topology(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    enum vkd3d_sm4_output_primitive_type primitive_type;

    primitive_type = (opcode_token & VKD3D_SM4_PRIMITIVE_TYPE_MASK) >> VKD3D_SM4_PRIMITIVE_TYPE_SHIFT;
    if (primitive_type >= ARRAY_SIZE(output_primitive_type_table))
        ins->declaration.primitive_type.type = VKD3D_PT_UNDEFINED;
    else
        ins->declaration.primitive_type.type = output_primitive_type_table[primitive_type];

    if (ins->declaration.primitive_type.type == VKD3D_PT_UNDEFINED)
        FIXME("Unhandled output primitive type %#x.\n", primitive_type);
}

static void shader_sm4_read_dcl_input_primitive(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    enum vkd3d_sm4_input_primitive_type primitive_type;

    primitive_type = (opcode_token & VKD3D_SM4_PRIMITIVE_TYPE_MASK) >> VKD3D_SM4_PRIMITIVE_TYPE_SHIFT;
    if (VKD3D_SM5_INPUT_PT_PATCH1 <= primitive_type && primitive_type <= VKD3D_SM5_INPUT_PT_PATCH32)
    {
        ins->declaration.primitive_type.type = VKD3D_PT_PATCH;
        ins->declaration.primitive_type.patch_vertex_count = primitive_type - VKD3D_SM5_INPUT_PT_PATCH1 + 1;
    }
    else if (primitive_type >= ARRAY_SIZE(input_primitive_type_table))
    {
        ins->declaration.primitive_type.type = VKD3D_PT_UNDEFINED;
    }
    else
    {
        ins->declaration.primitive_type.type = input_primitive_type_table[primitive_type];
    }

    if (ins->declaration.primitive_type.type == VKD3D_PT_UNDEFINED)
        FIXME("Unhandled input primitive type %#x.\n", primitive_type);
}

static void shader_sm4_read_declaration_count(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.count = *tokens;
}

static void shader_sm4_read_declaration_dst(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    shader_sm4_read_dst_param(priv, &tokens, &tokens[token_count], VKD3D_DATA_FLOAT, &ins->declaration.dst);
}

static void shader_sm4_read_declaration_register_semantic(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    shader_sm4_read_dst_param(priv, &tokens, &tokens[token_count], VKD3D_DATA_FLOAT,
            &ins->declaration.register_semantic.reg);
    ins->declaration.register_semantic.sysval_semantic = *tokens;
}

static void shader_sm4_read_dcl_input_ps(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->flags = (opcode_token & VKD3D_SM4_INTERPOLATION_MODE_MASK) >> VKD3D_SM4_INTERPOLATION_MODE_SHIFT;
    shader_sm4_read_dst_param(priv, &tokens, &tokens[token_count], VKD3D_DATA_FLOAT, &ins->declaration.dst);
}

static void shader_sm4_read_dcl_input_ps_siv(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->flags = (opcode_token & VKD3D_SM4_INTERPOLATION_MODE_MASK) >> VKD3D_SM4_INTERPOLATION_MODE_SHIFT;
    shader_sm4_read_dst_param(priv, &tokens, &tokens[token_count], VKD3D_DATA_FLOAT,
            &ins->declaration.register_semantic.reg);
    ins->declaration.register_semantic.sysval_semantic = *tokens;
}

static void shader_sm4_read_dcl_indexable_temp(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.indexable_temp.register_idx = *tokens++;
    ins->declaration.indexable_temp.register_size = *tokens++;
    ins->declaration.indexable_temp.component_count = *tokens;
}

static void shader_sm4_read_dcl_global_flags(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->flags = (opcode_token & VKD3D_SM4_GLOBAL_FLAGS_MASK) >> VKD3D_SM4_GLOBAL_FLAGS_SHIFT;
}

static void shader_sm5_read_fcall(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    priv->src_param[0].reg.u.fp_body_idx = *tokens++;
    shader_sm4_read_src_param(priv, &tokens, &tokens[token_count], VKD3D_DATA_OPAQUE, &priv->src_param[0]);
}

static void shader_sm5_read_dcl_function_body(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.index = *tokens;
}

static void shader_sm5_read_dcl_function_table(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.index = *tokens++;
    FIXME("Ignoring set of function bodies (count %u).\n", *tokens);
}

static void shader_sm5_read_dcl_interface(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.fp.index = *tokens++;
    ins->declaration.fp.body_count = *tokens++;
    ins->declaration.fp.array_size = *tokens >> VKD3D_SM5_FP_ARRAY_SIZE_SHIFT;
    ins->declaration.fp.table_count = *tokens++ & VKD3D_SM5_FP_TABLE_COUNT_MASK;
    FIXME("Ignoring set of function tables (count %u).\n", ins->declaration.fp.table_count);
}

static void shader_sm5_read_control_point_count(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.count = (opcode_token & VKD3D_SM5_CONTROL_POINT_COUNT_MASK)
            >> VKD3D_SM5_CONTROL_POINT_COUNT_SHIFT;
}

static void shader_sm5_read_dcl_tessellator_domain(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.tessellator_domain = (opcode_token & VKD3D_SM5_TESSELLATOR_MASK)
        >> VKD3D_SM5_TESSELLATOR_SHIFT;
}

static void shader_sm5_read_dcl_tessellator_partitioning(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.tessellator_partitioning = (opcode_token & VKD3D_SM5_TESSELLATOR_MASK)
            >> VKD3D_SM5_TESSELLATOR_SHIFT;
}

static void shader_sm5_read_dcl_tessellator_output_primitive(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.tessellator_output_primitive = (opcode_token & VKD3D_SM5_TESSELLATOR_MASK)
            >> VKD3D_SM5_TESSELLATOR_SHIFT;
}

static void shader_sm5_read_dcl_hs_max_tessfactor(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.max_tessellation_factor = *(float *)tokens;
}

static void shader_sm5_read_dcl_thread_group(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->declaration.thread_group_size.x = *tokens++;
    ins->declaration.thread_group_size.y = *tokens++;
    ins->declaration.thread_group_size.z = *tokens++;
}

static void shader_sm5_read_dcl_uav_raw(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    const DWORD *end = &tokens[token_count];

    shader_sm4_read_dst_param(priv, &tokens, end, VKD3D_DATA_UAV, &ins->declaration.raw_resource.dst);
    ins->flags = (opcode_token & VKD3D_SM5_UAV_FLAGS_MASK) >> VKD3D_SM5_UAV_FLAGS_SHIFT;
    shader_sm4_read_register_space(priv, &tokens, end, &ins->declaration.raw_resource.register_space);
}

static void shader_sm5_read_dcl_uav_structured(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    const DWORD *end = &tokens[token_count];

    shader_sm4_read_dst_param(priv, &tokens, end, VKD3D_DATA_UAV, &ins->declaration.structured_resource.reg);
    ins->flags = (opcode_token & VKD3D_SM5_UAV_FLAGS_MASK) >> VKD3D_SM5_UAV_FLAGS_SHIFT;
    ins->declaration.structured_resource.byte_stride = *tokens;
    if (ins->declaration.structured_resource.byte_stride % 4)
        FIXME("Byte stride %u is not multiple of 4.\n", ins->declaration.structured_resource.byte_stride);
    shader_sm4_read_register_space(priv, &tokens, end, &ins->declaration.structured_resource.register_space);
}

static void shader_sm5_read_dcl_tgsm_raw(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    shader_sm4_read_dst_param(priv, &tokens, &tokens[token_count], VKD3D_DATA_FLOAT, &ins->declaration.tgsm_raw.reg);
    ins->declaration.tgsm_raw.byte_count = *tokens;
    if (ins->declaration.tgsm_raw.byte_count % 4)
        FIXME("Byte count %u is not multiple of 4.\n", ins->declaration.tgsm_raw.byte_count);
}

static void shader_sm5_read_dcl_tgsm_structured(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    shader_sm4_read_dst_param(priv, &tokens, &tokens[token_count], VKD3D_DATA_FLOAT,
            &ins->declaration.tgsm_structured.reg);
    ins->declaration.tgsm_structured.byte_stride = *tokens++;
    ins->declaration.tgsm_structured.structure_count = *tokens;
    if (ins->declaration.tgsm_structured.byte_stride % 4)
        FIXME("Byte stride %u is not multiple of 4.\n", ins->declaration.tgsm_structured.byte_stride);
}

static void shader_sm5_read_dcl_resource_structured(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    const DWORD *end = &tokens[token_count];

    shader_sm4_read_dst_param(priv, &tokens, end, VKD3D_DATA_RESOURCE, &ins->declaration.structured_resource.reg);
    ins->declaration.structured_resource.byte_stride = *tokens;
    if (ins->declaration.structured_resource.byte_stride % 4)
        FIXME("Byte stride %u is not multiple of 4.\n", ins->declaration.structured_resource.byte_stride);
    shader_sm4_read_register_space(priv, &tokens, end, &ins->declaration.structured_resource.register_space);
}

static void shader_sm5_read_dcl_resource_raw(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    const DWORD *end = &tokens[token_count];

    shader_sm4_read_dst_param(priv, &tokens, end, VKD3D_DATA_RESOURCE, &ins->declaration.dst);
    shader_sm4_read_register_space(priv, &tokens, end, &ins->declaration.raw_resource.register_space);
}

static void shader_sm5_read_sync(struct vkd3d_shader_instruction *ins,
        DWORD opcode, DWORD opcode_token, const DWORD *tokens, unsigned int token_count,
        struct vkd3d_sm4_data *priv)
{
    ins->flags = (opcode_token & VKD3D_SM5_SYNC_FLAGS_MASK) >> VKD3D_SM5_SYNC_FLAGS_SHIFT;
}

/*
 * f -> VKD3D_DATA_FLOAT
 * i -> VKD3D_DATA_INT
 * u -> VKD3D_DATA_UINT
 * O -> VKD3D_DATA_OPAQUE
 * R -> VKD3D_DATA_RESOURCE
 * S -> VKD3D_DATA_SAMPLER
 * U -> VKD3D_DATA_UAV
 */
static const struct vkd3d_sm4_opcode_info opcode_table[] =
{
    {VKD3D_SM4_OP_ADD,                              VKD3DSIH_ADD,                              "f",    "ff"},
    {VKD3D_SM4_OP_AND,                              VKD3DSIH_AND,                              "u",    "uu"},
    {VKD3D_SM4_OP_BREAK,                            VKD3DSIH_BREAK,                            "",     ""},
    {VKD3D_SM4_OP_BREAKC,                           VKD3DSIH_BREAKP,                           "",     "u",
            shader_sm4_read_conditional_op},
    {VKD3D_SM4_OP_CASE,                             VKD3DSIH_CASE,                             "",     "u"},
    {VKD3D_SM4_OP_CONTINUE,                         VKD3DSIH_CONTINUE,                         "",     ""},
    {VKD3D_SM4_OP_CONTINUEC,                        VKD3DSIH_CONTINUEP,                        "",     "u",
            shader_sm4_read_conditional_op},
    {VKD3D_SM4_OP_CUT,                              VKD3DSIH_CUT,                              "",     ""},
    {VKD3D_SM4_OP_DEFAULT,                          VKD3DSIH_DEFAULT,                          "",     ""},
    {VKD3D_SM4_OP_DERIV_RTX,                        VKD3DSIH_DSX,                              "f",    "f"},
    {VKD3D_SM4_OP_DERIV_RTY,                        VKD3DSIH_DSY,                              "f",    "f"},
    {VKD3D_SM4_OP_DISCARD,                          VKD3DSIH_TEXKILL,                          "",     "u",
            shader_sm4_read_conditional_op},
    {VKD3D_SM4_OP_DIV,                              VKD3DSIH_DIV,                              "f",    "ff"},
    {VKD3D_SM4_OP_DP2,                              VKD3DSIH_DP2,                              "f",    "ff"},
    {VKD3D_SM4_OP_DP3,                              VKD3DSIH_DP3,                              "f",    "ff"},
    {VKD3D_SM4_OP_DP4,                              VKD3DSIH_DP4,                              "f",    "ff"},
    {VKD3D_SM4_OP_ELSE,                             VKD3DSIH_ELSE,                             "",     ""},
    {VKD3D_SM4_OP_EMIT,                             VKD3DSIH_EMIT,                             "",     ""},
    {VKD3D_SM4_OP_ENDIF,                            VKD3DSIH_ENDIF,                            "",     ""},
    {VKD3D_SM4_OP_ENDLOOP,                          VKD3DSIH_ENDLOOP,                          "",     ""},
    {VKD3D_SM4_OP_ENDSWITCH,                        VKD3DSIH_ENDSWITCH,                        "",     ""},
    {VKD3D_SM4_OP_EQ,                               VKD3DSIH_EQ,                               "u",    "ff"},
    {VKD3D_SM4_OP_EXP,                              VKD3DSIH_EXP,                              "f",    "f"},
    {VKD3D_SM4_OP_FRC,                              VKD3DSIH_FRC,                              "f",    "f"},
    {VKD3D_SM4_OP_FTOI,                             VKD3DSIH_FTOI,                             "i",    "f"},
    {VKD3D_SM4_OP_FTOU,                             VKD3DSIH_FTOU,                             "u",    "f"},
    {VKD3D_SM4_OP_GE,                               VKD3DSIH_GE,                               "u",    "ff"},
    {VKD3D_SM4_OP_IADD,                             VKD3DSIH_IADD,                             "i",    "ii"},
    {VKD3D_SM4_OP_IF,                               VKD3DSIH_IF,                               "",     "u",
            shader_sm4_read_conditional_op},
    {VKD3D_SM4_OP_IEQ,                              VKD3DSIH_IEQ,                              "u",    "ii"},
    {VKD3D_SM4_OP_IGE,                              VKD3DSIH_IGE,                              "u",    "ii"},
    {VKD3D_SM4_OP_ILT,                              VKD3DSIH_ILT,                              "u",    "ii"},
    {VKD3D_SM4_OP_IMAD,                             VKD3DSIH_IMAD,                             "i",    "iii"},
    {VKD3D_SM4_OP_IMAX,                             VKD3DSIH_IMAX,                             "i",    "ii"},
    {VKD3D_SM4_OP_IMIN,                             VKD3DSIH_IMIN,                             "i",    "ii"},
    {VKD3D_SM4_OP_IMUL,                             VKD3DSIH_IMUL,                             "ii",   "ii"},
    {VKD3D_SM4_OP_INE,                              VKD3DSIH_INE,                              "u",    "ii"},
    {VKD3D_SM4_OP_INEG,                             VKD3DSIH_INEG,                             "i",    "i"},
    {VKD3D_SM4_OP_ISHL,                             VKD3DSIH_ISHL,                             "i",    "ii"},
    {VKD3D_SM4_OP_ISHR,                             VKD3DSIH_ISHR,                             "i",    "ii"},
    {VKD3D_SM4_OP_ITOF,                             VKD3DSIH_ITOF,                             "f",    "i"},
    {VKD3D_SM4_OP_LABEL,                            VKD3DSIH_LABEL,                            "",     "O"},
    {VKD3D_SM4_OP_LD,                               VKD3DSIH_LD,                               "u",    "iR"},
    {VKD3D_SM4_OP_LD2DMS,                           VKD3DSIH_LD2DMS,                           "u",    "iRi"},
    {VKD3D_SM4_OP_LOG,                              VKD3DSIH_LOG,                              "f",    "f"},
    {VKD3D_SM4_OP_LOOP,                             VKD3DSIH_LOOP,                             "",     ""},
    {VKD3D_SM4_OP_LT,                               VKD3DSIH_LT,                               "u",    "ff"},
    {VKD3D_SM4_OP_MAD,                              VKD3DSIH_MAD,                              "f",    "fff"},
    {VKD3D_SM4_OP_MIN,                              VKD3DSIH_MIN,                              "f",    "ff"},
    {VKD3D_SM4_OP_MAX,                              VKD3DSIH_MAX,                              "f",    "ff"},
    {VKD3D_SM4_OP_SHADER_DATA,                      VKD3DSIH_DCL_IMMEDIATE_CONSTANT_BUFFER,    "",     "",
            shader_sm4_read_shader_data},
    {VKD3D_SM4_OP_MOV,                              VKD3DSIH_MOV,                              "f",    "f"},
    {VKD3D_SM4_OP_MOVC,                             VKD3DSIH_MOVC,                             "f",    "uff"},
    {VKD3D_SM4_OP_MUL,                              VKD3DSIH_MUL,                              "f",    "ff"},
    {VKD3D_SM4_OP_NE,                               VKD3DSIH_NE,                               "u",    "ff"},
    {VKD3D_SM4_OP_NOP,                              VKD3DSIH_NOP,                              "",     ""},
    {VKD3D_SM4_OP_NOT,                              VKD3DSIH_NOT,                              "u",    "u"},
    {VKD3D_SM4_OP_OR,                               VKD3DSIH_OR,                               "u",    "uu"},
    {VKD3D_SM4_OP_RESINFO,                          VKD3DSIH_RESINFO,                          "f",    "iR"},
    {VKD3D_SM4_OP_RET,                              VKD3DSIH_RET,                              "",     ""},
    {VKD3D_SM4_OP_RETC,                             VKD3DSIH_RETP,                             "",     "u",
            shader_sm4_read_conditional_op},
    {VKD3D_SM4_OP_ROUND_NE,                         VKD3DSIH_ROUND_NE,                         "f",    "f"},
    {VKD3D_SM4_OP_ROUND_NI,                         VKD3DSIH_ROUND_NI,                         "f",    "f"},
    {VKD3D_SM4_OP_ROUND_PI,                         VKD3DSIH_ROUND_PI,                         "f",    "f"},
    {VKD3D_SM4_OP_ROUND_Z,                          VKD3DSIH_ROUND_Z,                          "f",    "f"},
    {VKD3D_SM4_OP_RSQ,                              VKD3DSIH_RSQ,                              "f",    "f"},
    {VKD3D_SM4_OP_SAMPLE,                           VKD3DSIH_SAMPLE,                           "u",    "fRS"},
    {VKD3D_SM4_OP_SAMPLE_C,                         VKD3DSIH_SAMPLE_C,                         "f",    "fRSf"},
    {VKD3D_SM4_OP_SAMPLE_C_LZ,                      VKD3DSIH_SAMPLE_C_LZ,                      "f",    "fRSf"},
    {VKD3D_SM4_OP_SAMPLE_LOD,                       VKD3DSIH_SAMPLE_LOD,                       "u",    "fRSf"},
    {VKD3D_SM4_OP_SAMPLE_GRAD,                      VKD3DSIH_SAMPLE_GRAD,                      "u",    "fRSff"},
    {VKD3D_SM4_OP_SAMPLE_B,                         VKD3DSIH_SAMPLE_B,                         "u",    "fRSf"},
    {VKD3D_SM4_OP_SQRT,                             VKD3DSIH_SQRT,                             "f",    "f"},
    {VKD3D_SM4_OP_SWITCH,                           VKD3DSIH_SWITCH,                           "",     "i"},
    {VKD3D_SM4_OP_SINCOS,                           VKD3DSIH_SINCOS,                           "ff",   "f"},
    {VKD3D_SM4_OP_UDIV,                             VKD3DSIH_UDIV,                             "uu",   "uu"},
    {VKD3D_SM4_OP_ULT,                              VKD3DSIH_ULT,                              "u",    "uu"},
    {VKD3D_SM4_OP_UGE,                              VKD3DSIH_UGE,                              "u",    "uu"},
    {VKD3D_SM4_OP_UMUL,                             VKD3DSIH_UMUL,                             "uu",   "uu"},
    {VKD3D_SM4_OP_UMAX,                             VKD3DSIH_UMAX,                             "u",    "uu"},
    {VKD3D_SM4_OP_UMIN,                             VKD3DSIH_UMIN,                             "u",    "uu"},
    {VKD3D_SM4_OP_USHR,                             VKD3DSIH_USHR,                             "u",    "uu"},
    {VKD3D_SM4_OP_UTOF,                             VKD3DSIH_UTOF,                             "f",    "u"},
    {VKD3D_SM4_OP_XOR,                              VKD3DSIH_XOR,                              "u",    "uu"},
    {VKD3D_SM4_OP_DCL_RESOURCE,                     VKD3DSIH_DCL,                              "R",    "",
            shader_sm4_read_dcl_resource},
    {VKD3D_SM4_OP_DCL_CONSTANT_BUFFER,              VKD3DSIH_DCL_CONSTANT_BUFFER,              "",     "",
            shader_sm4_read_dcl_constant_buffer},
    {VKD3D_SM4_OP_DCL_SAMPLER,                      VKD3DSIH_DCL_SAMPLER,                      "",     "",
            shader_sm4_read_dcl_sampler},
    {VKD3D_SM4_OP_DCL_INDEX_RANGE,                  VKD3DSIH_DCL_INDEX_RANGE,                  "",     "",
            shader_sm4_read_dcl_index_range},
    {VKD3D_SM4_OP_DCL_OUTPUT_TOPOLOGY,              VKD3DSIH_DCL_OUTPUT_TOPOLOGY,              "",     "",
            shader_sm4_read_dcl_output_topology},
    {VKD3D_SM4_OP_DCL_INPUT_PRIMITIVE,              VKD3DSIH_DCL_INPUT_PRIMITIVE,              "",     "",
            shader_sm4_read_dcl_input_primitive},
    {VKD3D_SM4_OP_DCL_VERTICES_OUT,                 VKD3DSIH_DCL_VERTICES_OUT,                 "",     "",
            shader_sm4_read_declaration_count},
    {VKD3D_SM4_OP_DCL_INPUT,                        VKD3DSIH_DCL_INPUT,                        "",     "",
            shader_sm4_read_declaration_dst},
    {VKD3D_SM4_OP_DCL_INPUT_SGV,                    VKD3DSIH_DCL_INPUT_SGV,                    "",     "",
            shader_sm4_read_declaration_register_semantic},
    {VKD3D_SM4_OP_DCL_INPUT_SIV,                    VKD3DSIH_DCL_INPUT_SIV,                    "",     "",
            shader_sm4_read_declaration_register_semantic},
    {VKD3D_SM4_OP_DCL_INPUT_PS,                     VKD3DSIH_DCL_INPUT_PS,                     "",     "",
            shader_sm4_read_dcl_input_ps},
    {VKD3D_SM4_OP_DCL_INPUT_PS_SGV,                 VKD3DSIH_DCL_INPUT_PS_SGV,                 "",     "",
            shader_sm4_read_declaration_register_semantic},
    {VKD3D_SM4_OP_DCL_INPUT_PS_SIV,                 VKD3DSIH_DCL_INPUT_PS_SIV,                 "",     "",
            shader_sm4_read_dcl_input_ps_siv},
    {VKD3D_SM4_OP_DCL_OUTPUT,                       VKD3DSIH_DCL_OUTPUT,                       "",     "",
            shader_sm4_read_declaration_dst},
    {VKD3D_SM4_OP_DCL_OUTPUT_SIV,                   VKD3DSIH_DCL_OUTPUT_SIV,                   "",     "",
            shader_sm4_read_declaration_register_semantic},
    {VKD3D_SM4_OP_DCL_TEMPS,                        VKD3DSIH_DCL_TEMPS,                        "",     "",
            shader_sm4_read_declaration_count},
    {VKD3D_SM4_OP_DCL_INDEXABLE_TEMP,               VKD3DSIH_DCL_INDEXABLE_TEMP,               "",     "",
            shader_sm4_read_dcl_indexable_temp},
    {VKD3D_SM4_OP_DCL_GLOBAL_FLAGS,                 VKD3DSIH_DCL_GLOBAL_FLAGS,                 "",     "",
            shader_sm4_read_dcl_global_flags},
    {VKD3D_SM4_OP_LOD,                              VKD3DSIH_LOD,                              "f",    "fRS"},
    {VKD3D_SM4_OP_GATHER4,                          VKD3DSIH_GATHER4,                          "u",    "fRS"},
    {VKD3D_SM4_OP_SAMPLE_POS,                       VKD3DSIH_SAMPLE_POS,                       "f",    "Ru"},
    {VKD3D_SM4_OP_SAMPLE_INFO,                      VKD3DSIH_SAMPLE_INFO,                      "f",    "R"},
    {VKD3D_SM5_OP_HS_DECLS,                         VKD3DSIH_HS_DECLS,                         "",     ""},
    {VKD3D_SM5_OP_HS_CONTROL_POINT_PHASE,           VKD3DSIH_HS_CONTROL_POINT_PHASE,           "",     ""},
    {VKD3D_SM5_OP_HS_FORK_PHASE,                    VKD3DSIH_HS_FORK_PHASE,                    "",     ""},
    {VKD3D_SM5_OP_HS_JOIN_PHASE,                    VKD3DSIH_HS_JOIN_PHASE,                    "",     ""},
    {VKD3D_SM5_OP_EMIT_STREAM,                      VKD3DSIH_EMIT_STREAM,                      "",     "f"},
    {VKD3D_SM5_OP_CUT_STREAM,                       VKD3DSIH_CUT_STREAM,                       "",     "f"},
    {VKD3D_SM5_OP_FCALL,                            VKD3DSIH_FCALL,                            "",     "O",
            shader_sm5_read_fcall},
    {VKD3D_SM5_OP_BUFINFO,                          VKD3DSIH_BUFINFO,                          "i",    "U"},
    {VKD3D_SM5_OP_DERIV_RTX_COARSE,                 VKD3DSIH_DSX_COARSE,                       "f",    "f"},
    {VKD3D_SM5_OP_DERIV_RTX_FINE,                   VKD3DSIH_DSX_FINE,                         "f",    "f"},
    {VKD3D_SM5_OP_DERIV_RTY_COARSE,                 VKD3DSIH_DSY_COARSE,                       "f",    "f"},
    {VKD3D_SM5_OP_DERIV_RTY_FINE,                   VKD3DSIH_DSY_FINE,                         "f",    "f"},
    {VKD3D_SM5_OP_GATHER4_C,                        VKD3DSIH_GATHER4_C,                        "f",    "fRSf"},
    {VKD3D_SM5_OP_GATHER4_PO,                       VKD3DSIH_GATHER4_PO,                       "f",    "fiRS"},
    {VKD3D_SM5_OP_GATHER4_PO_C,                     VKD3DSIH_GATHER4_PO_C,                     "f",    "fiRSf"},
    {VKD3D_SM5_OP_RCP,                              VKD3DSIH_RCP,                              "f",    "f"},
    {VKD3D_SM5_OP_F32TOF16,                         VKD3DSIH_F32TOF16,                         "u",    "f"},
    {VKD3D_SM5_OP_F16TOF32,                         VKD3DSIH_F16TOF32,                         "f",    "u"},
    {VKD3D_SM5_OP_COUNTBITS,                        VKD3DSIH_COUNTBITS,                        "u",    "u"},
    {VKD3D_SM5_OP_FIRSTBIT_HI,                      VKD3DSIH_FIRSTBIT_HI,                      "u",    "u"},
    {VKD3D_SM5_OP_FIRSTBIT_LO,                      VKD3DSIH_FIRSTBIT_LO,                      "u",    "u"},
    {VKD3D_SM5_OP_FIRSTBIT_SHI,                     VKD3DSIH_FIRSTBIT_SHI,                     "u",    "i"},
    {VKD3D_SM5_OP_UBFE,                             VKD3DSIH_UBFE,                             "u",    "iiu"},
    {VKD3D_SM5_OP_IBFE,                             VKD3DSIH_IBFE,                             "i",    "iii"},
    {VKD3D_SM5_OP_BFI,                              VKD3DSIH_BFI,                              "u",    "iiuu"},
    {VKD3D_SM5_OP_BFREV,                            VKD3DSIH_BFREV,                            "u",    "u"},
    {VKD3D_SM5_OP_SWAPC,                            VKD3DSIH_SWAPC,                            "ff",   "uff"},
    {VKD3D_SM5_OP_DCL_STREAM,                       VKD3DSIH_DCL_STREAM,                       "",     "O"},
    {VKD3D_SM5_OP_DCL_FUNCTION_BODY,                VKD3DSIH_DCL_FUNCTION_BODY,                "",     "",
            shader_sm5_read_dcl_function_body},
    {VKD3D_SM5_OP_DCL_FUNCTION_TABLE,               VKD3DSIH_DCL_FUNCTION_TABLE,               "",     "",
            shader_sm5_read_dcl_function_table},
    {VKD3D_SM5_OP_DCL_INTERFACE,                    VKD3DSIH_DCL_INTERFACE,                    "",     "",
            shader_sm5_read_dcl_interface},
    {VKD3D_SM5_OP_DCL_INPUT_CONTROL_POINT_COUNT,    VKD3DSIH_DCL_INPUT_CONTROL_POINT_COUNT,    "",     "",
            shader_sm5_read_control_point_count},
    {VKD3D_SM5_OP_DCL_OUTPUT_CONTROL_POINT_COUNT,   VKD3DSIH_DCL_OUTPUT_CONTROL_POINT_COUNT,   "",     "",
            shader_sm5_read_control_point_count},
    {VKD3D_SM5_OP_DCL_TESSELLATOR_DOMAIN,           VKD3DSIH_DCL_TESSELLATOR_DOMAIN,           "",     "",
            shader_sm5_read_dcl_tessellator_domain},
    {VKD3D_SM5_OP_DCL_TESSELLATOR_PARTITIONING,     VKD3DSIH_DCL_TESSELLATOR_PARTITIONING,     "",     "",
            shader_sm5_read_dcl_tessellator_partitioning},
    {VKD3D_SM5_OP_DCL_TESSELLATOR_OUTPUT_PRIMITIVE, VKD3DSIH_DCL_TESSELLATOR_OUTPUT_PRIMITIVE, "",     "",
            shader_sm5_read_dcl_tessellator_output_primitive},
    {VKD3D_SM5_OP_DCL_HS_MAX_TESSFACTOR,            VKD3DSIH_DCL_HS_MAX_TESSFACTOR,            "",     "",
            shader_sm5_read_dcl_hs_max_tessfactor},
    {VKD3D_SM5_OP_DCL_HS_FORK_PHASE_INSTANCE_COUNT, VKD3DSIH_DCL_HS_FORK_PHASE_INSTANCE_COUNT, "",     "",
            shader_sm4_read_declaration_count},
    {VKD3D_SM5_OP_DCL_HS_JOIN_PHASE_INSTANCE_COUNT, VKD3DSIH_DCL_HS_JOIN_PHASE_INSTANCE_COUNT, "",     "",
            shader_sm4_read_declaration_count},
    {VKD3D_SM5_OP_DCL_THREAD_GROUP,                 VKD3DSIH_DCL_THREAD_GROUP,                 "",     "",
            shader_sm5_read_dcl_thread_group},
    {VKD3D_SM5_OP_DCL_UAV_TYPED,                    VKD3DSIH_DCL_UAV_TYPED,                    "",     "",
            shader_sm4_read_dcl_resource},
    {VKD3D_SM5_OP_DCL_UAV_RAW,                      VKD3DSIH_DCL_UAV_RAW,                      "",     "",
            shader_sm5_read_dcl_uav_raw},
    {VKD3D_SM5_OP_DCL_UAV_STRUCTURED,               VKD3DSIH_DCL_UAV_STRUCTURED,               "",     "",
            shader_sm5_read_dcl_uav_structured},
    {VKD3D_SM5_OP_DCL_TGSM_RAW,                     VKD3DSIH_DCL_TGSM_RAW,                     "",     "",
            shader_sm5_read_dcl_tgsm_raw},
    {VKD3D_SM5_OP_DCL_TGSM_STRUCTURED,              VKD3DSIH_DCL_TGSM_STRUCTURED,              "",     "",
            shader_sm5_read_dcl_tgsm_structured},
    {VKD3D_SM5_OP_DCL_RESOURCE_RAW,                 VKD3DSIH_DCL_RESOURCE_RAW,                 "",     "",
            shader_sm5_read_dcl_resource_raw},
    {VKD3D_SM5_OP_DCL_RESOURCE_STRUCTURED,          VKD3DSIH_DCL_RESOURCE_STRUCTURED,          "",     "",
            shader_sm5_read_dcl_resource_structured},
    {VKD3D_SM5_OP_LD_UAV_TYPED,                     VKD3DSIH_LD_UAV_TYPED,                     "u",    "iU"},
    {VKD3D_SM5_OP_STORE_UAV_TYPED,                  VKD3DSIH_STORE_UAV_TYPED,                  "U",    "iu"},
    {VKD3D_SM5_OP_LD_RAW,                           VKD3DSIH_LD_RAW,                           "u",    "iU"},
    {VKD3D_SM5_OP_STORE_RAW,                        VKD3DSIH_STORE_RAW,                        "U",    "uu"},
    {VKD3D_SM5_OP_LD_STRUCTURED,                    VKD3DSIH_LD_STRUCTURED,                    "u",    "iiR"},
    {VKD3D_SM5_OP_STORE_STRUCTURED,                 VKD3DSIH_STORE_STRUCTURED,                 "U",    "iiu"},
    {VKD3D_SM5_OP_ATOMIC_AND,                       VKD3DSIH_ATOMIC_AND,                       "U",    "iu"},
    {VKD3D_SM5_OP_ATOMIC_OR,                        VKD3DSIH_ATOMIC_OR,                        "U",    "iu"},
    {VKD3D_SM5_OP_ATOMIC_XOR,                       VKD3DSIH_ATOMIC_XOR,                       "U",    "iu"},
    {VKD3D_SM5_OP_ATOMIC_CMP_STORE,                 VKD3DSIH_ATOMIC_CMP_STORE,                 "U",    "iuu"},
    {VKD3D_SM5_OP_ATOMIC_IADD,                      VKD3DSIH_ATOMIC_IADD,                      "U",    "ii"},
    {VKD3D_SM5_OP_ATOMIC_IMAX,                      VKD3DSIH_ATOMIC_IMAX,                      "U",    "ii"},
    {VKD3D_SM5_OP_ATOMIC_IMIN,                      VKD3DSIH_ATOMIC_IMIN,                      "U",    "ii"},
    {VKD3D_SM5_OP_ATOMIC_UMAX,                      VKD3DSIH_ATOMIC_UMAX,                      "U",    "iu"},
    {VKD3D_SM5_OP_ATOMIC_UMIN,                      VKD3DSIH_ATOMIC_UMIN,                      "U",    "iu"},
    {VKD3D_SM5_OP_IMM_ATOMIC_ALLOC,                 VKD3DSIH_IMM_ATOMIC_ALLOC,                 "u",    "U"},
    {VKD3D_SM5_OP_IMM_ATOMIC_CONSUME,               VKD3DSIH_IMM_ATOMIC_CONSUME,               "u",    "U"},
    {VKD3D_SM5_OP_IMM_ATOMIC_IADD,                  VKD3DSIH_IMM_ATOMIC_IADD,                  "uU",   "ii"},
    {VKD3D_SM5_OP_IMM_ATOMIC_AND,                   VKD3DSIH_IMM_ATOMIC_AND,                   "uU",   "iu"},
    {VKD3D_SM5_OP_IMM_ATOMIC_OR,                    VKD3DSIH_IMM_ATOMIC_OR,                    "uU",   "iu"},
    {VKD3D_SM5_OP_IMM_ATOMIC_XOR,                   VKD3DSIH_IMM_ATOMIC_XOR,                   "uU",   "iu"},
    {VKD3D_SM5_OP_IMM_ATOMIC_EXCH,                  VKD3DSIH_IMM_ATOMIC_EXCH,                  "uU",   "iu"},
    {VKD3D_SM5_OP_IMM_ATOMIC_CMP_EXCH,              VKD3DSIH_IMM_ATOMIC_CMP_EXCH,              "uU",   "iuu"},
    {VKD3D_SM5_OP_IMM_ATOMIC_IMAX,                  VKD3DSIH_IMM_ATOMIC_IMAX,                  "iU",   "ii"},
    {VKD3D_SM5_OP_IMM_ATOMIC_IMIN,                  VKD3DSIH_IMM_ATOMIC_IMIN,                  "iU",   "ii"},
    {VKD3D_SM5_OP_IMM_ATOMIC_UMAX,                  VKD3DSIH_IMM_ATOMIC_UMAX,                  "uU",   "iu"},
    {VKD3D_SM5_OP_IMM_ATOMIC_UMIN,                  VKD3DSIH_IMM_ATOMIC_UMIN,                  "uU",   "iu"},
    {VKD3D_SM5_OP_SYNC,                             VKD3DSIH_SYNC,                             "",     "",
            shader_sm5_read_sync},
    {VKD3D_SM5_OP_EVAL_SAMPLE_INDEX,                VKD3DSIH_EVAL_SAMPLE_INDEX,                "f",    "fi"},
    {VKD3D_SM5_OP_EVAL_CENTROID,                    VKD3DSIH_EVAL_CENTROID,                    "f",    "f"},
    {VKD3D_SM5_OP_DCL_GS_INSTANCES,                 VKD3DSIH_DCL_GS_INSTANCES,                 "",     "",
            shader_sm4_read_declaration_count},
};

static const enum vkd3d_shader_register_type register_type_table[] =
{
    /* VKD3D_SM4_RT_TEMP */                    VKD3DSPR_TEMP,
    /* VKD3D_SM4_RT_INPUT */                   VKD3DSPR_INPUT,
    /* VKD3D_SM4_RT_OUTPUT */                  VKD3DSPR_OUTPUT,
    /* VKD3D_SM4_RT_INDEXABLE_TEMP */          VKD3DSPR_IDXTEMP,
    /* VKD3D_SM4_RT_IMMCONST */                VKD3DSPR_IMMCONST,
    /* UNKNOWN */                              ~0u,
    /* VKD3D_SM4_RT_SAMPLER */                 VKD3DSPR_SAMPLER,
    /* VKD3D_SM4_RT_RESOURCE */                VKD3DSPR_RESOURCE,
    /* VKD3D_SM4_RT_CONSTBUFFER */             VKD3DSPR_CONSTBUFFER,
    /* VKD3D_SM4_RT_IMMCONSTBUFFER */          VKD3DSPR_IMMCONSTBUFFER,
    /* UNKNOWN */                              ~0u,
    /* VKD3D_SM4_RT_PRIMID */                  VKD3DSPR_PRIMID,
    /* VKD3D_SM4_RT_DEPTHOUT */                VKD3DSPR_DEPTHOUT,
    /* VKD3D_SM4_RT_NULL */                    VKD3DSPR_NULL,
    /* VKD3D_SM4_RT_RASTERIZER */              VKD3DSPR_RASTERIZER,
    /* VKD3D_SM4_RT_OMASK */                   VKD3DSPR_SAMPLEMASK,
    /* VKD3D_SM5_RT_STREAM */                  VKD3DSPR_STREAM,
    /* VKD3D_SM5_RT_FUNCTION_BODY */           VKD3DSPR_FUNCTIONBODY,
    /* UNKNOWN */                              ~0u,
    /* VKD3D_SM5_RT_FUNCTION_POINTER */        VKD3DSPR_FUNCTIONPOINTER,
    /* UNKNOWN */                              ~0u,
    /* UNKNOWN */                              ~0u,
    /* VKD3D_SM5_RT_OUTPUT_CONTROL_POINT_ID */ VKD3DSPR_OUTPOINTID,
    /* VKD3D_SM5_RT_FORK_INSTANCE_ID */        VKD3DSPR_FORKINSTID,
    /* VKD3D_SM5_RT_JOIN_INSTANCE_ID */        VKD3DSPR_JOININSTID,
    /* VKD3D_SM5_RT_INPUT_CONTROL_POINT */     VKD3DSPR_INCONTROLPOINT,
    /* VKD3D_SM5_RT_OUTPUT_CONTROL_POINT */    VKD3DSPR_OUTCONTROLPOINT,
    /* VKD3D_SM5_RT_PATCH_CONSTANT_DATA */     VKD3DSPR_PATCHCONST,
    /* VKD3D_SM5_RT_DOMAIN_LOCATION */         VKD3DSPR_TESSCOORD,
    /* UNKNOWN */                              ~0u,
    /* VKD3D_SM5_RT_UAV */                     VKD3DSPR_UAV,
    /* VKD3D_SM5_RT_SHARED_MEMORY */           VKD3DSPR_GROUPSHAREDMEM,
    /* VKD3D_SM5_RT_THREAD_ID */               VKD3DSPR_THREADID,
    /* VKD3D_SM5_RT_THREAD_GROUP_ID */         VKD3DSPR_THREADGROUPID,
    /* VKD3D_SM5_RT_LOCAL_THREAD_ID */         VKD3DSPR_LOCALTHREADID,
    /* VKD3D_SM5_RT_COVERAGE */                VKD3DSPR_COVERAGE,
    /* VKD3D_SM5_RT_LOCAL_THREAD_INDEX */      VKD3DSPR_LOCALTHREADINDEX,
    /* VKD3D_SM5_RT_GS_INSTANCE_ID */          VKD3DSPR_GSINSTID,
    /* VKD3D_SM5_RT_DEPTHOUT_GREATER_EQUAL */  VKD3DSPR_DEPTHOUTGE,
    /* VKD3D_SM5_RT_DEPTHOUT_LESS_EQUAL */     VKD3DSPR_DEPTHOUTLE,
};

static const struct vkd3d_sm4_opcode_info *get_opcode_info(enum vkd3d_sm4_opcode opcode)
{
    unsigned int i;

    for (i = 0; i < sizeof(opcode_table) / sizeof(*opcode_table); ++i)
    {
        if (opcode == opcode_table[i].opcode) return &opcode_table[i];
    }

    return NULL;
}

static void map_register(const struct vkd3d_sm4_data *priv, struct vkd3d_shader_register *reg)
{
    switch (priv->shader_version.type)
    {
        case VKD3D_SHADER_TYPE_PIXEL:
            if (reg->type == VKD3DSPR_OUTPUT)
            {
                unsigned int reg_idx = reg->idx[0].offset;

                if (reg_idx >= ARRAY_SIZE(priv->output_map))
                {
                    ERR("Invalid output index %u.\n", reg_idx);
                    break;
                }

                reg->type = VKD3DSPR_COLOROUT;
                reg->idx[0].offset = priv->output_map[reg_idx];
            }
            break;

        default:
            break;
    }
}

static enum vkd3d_data_type map_data_type(char t)
{
    switch (t)
    {
        case 'f':
            return VKD3D_DATA_FLOAT;
        case 'i':
            return VKD3D_DATA_INT;
        case 'u':
            return VKD3D_DATA_UINT;
        case 'O':
            return VKD3D_DATA_OPAQUE;
        case 'R':
            return VKD3D_DATA_RESOURCE;
        case 'S':
            return VKD3D_DATA_SAMPLER;
        case 'U':
            return VKD3D_DATA_UAV;
        default:
            ERR("Invalid data type '%c'.\n", t);
            return VKD3D_DATA_FLOAT;
    }
}

void *shader_sm4_init(const DWORD *byte_code, size_t byte_code_size,
        const struct vkd3d_shader_signature *output_signature)
{
    DWORD version_token, token_count;
    struct vkd3d_sm4_data *priv;
    unsigned int i;

    if (byte_code_size / sizeof(*byte_code) < 2)
    {
        WARN("Invalid byte code size %lu.\n", (long)byte_code_size);
        return NULL;
    }

    version_token = byte_code[0];
    TRACE("Version: 0x%08x.\n", version_token);
    token_count = byte_code[1];
    TRACE("Token count: %u.\n", token_count);

    if (token_count < 2 || byte_code_size / sizeof(*byte_code) < token_count)
    {
        WARN("Invalid token count %u.\n", token_count);
        return NULL;
    }

    if (!(priv = vkd3d_malloc(sizeof(*priv))))
    {
        ERR("Failed to allocate private data\n");
        return NULL;
    }

    priv->start = &byte_code[2];
    priv->end = &byte_code[token_count];

    switch (version_token >> 16)
    {
        case VKD3D_SM4_PS:
            priv->shader_version.type = VKD3D_SHADER_TYPE_PIXEL;
            break;

        case VKD3D_SM4_VS:
            priv->shader_version.type = VKD3D_SHADER_TYPE_VERTEX;
            break;

        case VKD3D_SM4_GS:
            priv->shader_version.type = VKD3D_SHADER_TYPE_GEOMETRY;
            break;

        case VKD3D_SM5_HS:
            priv->shader_version.type = VKD3D_SHADER_TYPE_HULL;
            break;

        case VKD3D_SM5_DS:
            priv->shader_version.type = VKD3D_SHADER_TYPE_DOMAIN;
            break;

        case VKD3D_SM5_CS:
            priv->shader_version.type = VKD3D_SHADER_TYPE_COMPUTE;
            break;

        default:
            FIXME("Unrecognised shader type %#x.\n", version_token >> 16);
    }
    priv->shader_version.major = VKD3D_SM4_VERSION_MAJOR(version_token);
    priv->shader_version.minor = VKD3D_SM4_VERSION_MINOR(version_token);

    memset(priv->output_map, 0xff, sizeof(priv->output_map));
    for (i = 0; i < output_signature->element_count; ++i)
    {
        struct vkd3d_shader_signature_element *e = &output_signature->elements[i];

        if (e->register_index >= ARRAY_SIZE(priv->output_map))
        {
            WARN("Invalid output index %u.\n", e->register_index);
            continue;
        }

        priv->output_map[e->register_index] = e->semantic_index;
    }

    list_init(&priv->src_free);
    list_init(&priv->src);

    return priv;
}

void shader_sm4_free(void *data)
{
    struct vkd3d_shader_src_param_entry *e1, *e2;
    struct vkd3d_sm4_data *priv = data;

    list_move_head(&priv->src_free, &priv->src);
    LIST_FOR_EACH_ENTRY_SAFE(e1, e2, &priv->src_free, struct vkd3d_shader_src_param_entry, entry)
    {
        vkd3d_free(e1);
    }
    vkd3d_free(priv);
}

static struct vkd3d_shader_src_param *get_src_param(struct vkd3d_sm4_data *priv)
{
    struct vkd3d_shader_src_param_entry *e;
    struct list *elem;

    if (!list_empty(&priv->src_free))
    {
        elem = list_head(&priv->src_free);
        list_remove(elem);
    }
    else
    {
        if (!(e = vkd3d_malloc(sizeof(*e))))
            return NULL;
        elem = &e->entry;
    }

    list_add_tail(&priv->src, elem);
    e = LIST_ENTRY(elem, struct vkd3d_shader_src_param_entry, entry);
    return &e->param;
}

void shader_sm4_read_header(void *data, const DWORD **ptr, struct vkd3d_shader_version *shader_version)
{
    struct vkd3d_sm4_data *priv = data;

    *ptr = priv->start;
    *shader_version = priv->shader_version;
}

static bool shader_sm4_read_reg_idx(struct vkd3d_sm4_data *priv, const DWORD **ptr, const DWORD *end,
        DWORD addressing, struct vkd3d_shader_register_index *reg_idx)
{
    if (addressing & VKD3D_SM4_ADDRESSING_RELATIVE)
    {
        struct vkd3d_shader_src_param *rel_addr = get_src_param(priv);

        if (!(reg_idx->rel_addr = rel_addr))
        {
            ERR("Failed to get src param for relative addressing.\n");
            return false;
        }

        if (addressing & VKD3D_SM4_ADDRESSING_OFFSET)
            reg_idx->offset = *(*ptr)++;
        else
            reg_idx->offset = 0;
        shader_sm4_read_src_param(priv, ptr, end, VKD3D_DATA_INT, rel_addr);
    }
    else
    {
        reg_idx->rel_addr = NULL;
        reg_idx->offset = *(*ptr)++;
    }

    return true;
}

static bool shader_sm4_read_param(struct vkd3d_sm4_data *priv, const DWORD **ptr, const DWORD *end,
        enum vkd3d_data_type data_type, struct vkd3d_shader_register *param,
        enum vkd3d_shader_src_modifier *modifier)
{
    enum vkd3d_sm4_register_type register_type;
    DWORD token, order;

    if (*ptr >= end)
    {
        WARN("Invalid ptr %p >= end %p.\n", *ptr, end);
        return false;
    }
    token = *(*ptr)++;

    register_type = (token & VKD3D_SM4_REGISTER_TYPE_MASK) >> VKD3D_SM4_REGISTER_TYPE_SHIFT;
    if (register_type >= ARRAY_SIZE(register_type_table)
            || register_type_table[register_type] == VKD3DSPR_INVALID)
    {
        FIXME("Unhandled register type %#x.\n", register_type);
        param->type = VKD3DSPR_TEMP;
    }
    else
    {
        param->type = register_type_table[register_type];
    }
    param->data_type = data_type;

    if (token & VKD3D_SM4_REGISTER_MODIFIER)
    {
        DWORD m;

        if (*ptr >= end)
        {
            WARN("Invalid ptr %p >= end %p.\n", *ptr, end);
            return false;
        }
        m = *(*ptr)++;

        switch (m)
        {
            case 0x41:
                *modifier = VKD3DSPSM_NEG;
                break;

            case 0x81:
                *modifier = VKD3DSPSM_ABS;
                break;

            case 0xc1:
                *modifier = VKD3DSPSM_ABSNEG;
                break;

            default:
                FIXME("Skipping modifier 0x%08x.\n", m);
                *modifier = VKD3DSPSM_NONE;
                break;
        }
    }
    else
    {
        *modifier = VKD3DSPSM_NONE;
    }

    order = (token & VKD3D_SM4_REGISTER_ORDER_MASK) >> VKD3D_SM4_REGISTER_ORDER_SHIFT;

    if (order < 1)
    {
        param->idx[0].offset = ~0u;
        param->idx[0].rel_addr = NULL;
    }
    else
    {
        DWORD addressing = (token & VKD3D_SM4_ADDRESSING_MASK0) >> VKD3D_SM4_ADDRESSING_SHIFT0;
        if (!(shader_sm4_read_reg_idx(priv, ptr, end, addressing, &param->idx[0])))
        {
            ERR("Failed to read register index.\n");
            return false;
        }
    }

    if (order < 2)
    {
        param->idx[1].offset = ~0u;
        param->idx[1].rel_addr = NULL;
    }
    else
    {
        DWORD addressing = (token & VKD3D_SM4_ADDRESSING_MASK1) >> VKD3D_SM4_ADDRESSING_SHIFT1;
        if (!(shader_sm4_read_reg_idx(priv, ptr, end, addressing, &param->idx[1])))
        {
            ERR("Failed to read register index.\n");
            return false;
        }
    }

    if (order < 3)
    {
        param->idx[2].offset = ~0u;
        param->idx[2].rel_addr = NULL;
    }
    else
    {
        DWORD addressing = (token & VKD3D_SM4_ADDRESSING_MASK2) >> VKD3D_SM4_ADDRESSING_SHIFT2;
        if (!(shader_sm4_read_reg_idx(priv, ptr, end, addressing, &param->idx[2])))
        {
            ERR("Failed to read register index.\n");
            return false;
        }
    }

    if (order > 3)
    {
        WARN("Unhandled order %u.\n", order);
        return false;
    }

    if (register_type == VKD3D_SM4_RT_IMMCONST)
    {
        enum vkd3d_sm4_immconst_type immconst_type =
                (token & VKD3D_SM4_IMMCONST_TYPE_MASK) >> VKD3D_SM4_IMMCONST_TYPE_SHIFT;

        switch (immconst_type)
        {
            case VKD3D_SM4_IMMCONST_SCALAR:
                param->immconst_type = VKD3D_IMMCONST_SCALAR;
                if (end - *ptr < 1)
                {
                    WARN("Invalid ptr %p, end %p.\n", *ptr, end);
                    return false;
                }
                memcpy(param->u.immconst_uint, *ptr, 1 * sizeof(DWORD));
                *ptr += 1;
                break;

            case VKD3D_SM4_IMMCONST_VEC4:
                param->immconst_type = VKD3D_IMMCONST_VEC4;
                if (end - *ptr < VKD3D_VEC4_SIZE)
                {
                    WARN("Invalid ptr %p, end %p.\n", *ptr, end);
                    return false;
                }
                memcpy(param->u.immconst_uint, *ptr, VKD3D_VEC4_SIZE * sizeof(DWORD));
                *ptr += 4;
                break;

            default:
                FIXME("Unhandled immediate constant type %#x.\n", immconst_type);
                break;
        }
    }

    map_register(priv, param);

    return true;
}

static bool shader_sm4_is_scalar_register(const struct vkd3d_shader_register *reg)
{
    switch (reg->type)
    {
        case VKD3DSPR_COVERAGE:
        case VKD3DSPR_DEPTHOUT:
        case VKD3DSPR_DEPTHOUTGE:
        case VKD3DSPR_DEPTHOUTLE:
        case VKD3DSPR_GSINSTID:
        case VKD3DSPR_LOCALTHREADINDEX:
        case VKD3DSPR_OUTPOINTID:
        case VKD3DSPR_PRIMID:
        case VKD3DSPR_SAMPLEMASK:
            return true;
        default:
            return false;
    }
}

static bool shader_sm4_read_src_param(struct vkd3d_sm4_data *priv, const DWORD **ptr, const DWORD *end,
        enum vkd3d_data_type data_type, struct vkd3d_shader_src_param *src_param)
{
    DWORD token;

    if (*ptr >= end)
    {
        WARN("Invalid ptr %p >= end %p.\n", *ptr, end);
        return false;
    }
    token = **ptr;

    if (!shader_sm4_read_param(priv, ptr, end, data_type, &src_param->reg, &src_param->modifiers))
    {
        ERR("Failed to read parameter.\n");
        return false;
    }

    if (src_param->reg.type == VKD3DSPR_IMMCONST)
    {
        src_param->swizzle = VKD3D_NO_SWIZZLE;
    }
    else
    {
        enum vkd3d_sm4_swizzle_type swizzle_type =
                (token & VKD3D_SM4_SWIZZLE_TYPE_MASK) >> VKD3D_SM4_SWIZZLE_TYPE_SHIFT;

        switch (swizzle_type)
        {
            case VKD3D_SM4_SWIZZLE_NONE:
                if (shader_sm4_is_scalar_register(&src_param->reg))
                    src_param->swizzle = VKD3D_SWIZZLE(VKD3D_SWIZZLE_X, VKD3D_SWIZZLE_X, VKD3D_SWIZZLE_X, VKD3D_SWIZZLE_X);
                else
                    src_param->swizzle = VKD3D_NO_SWIZZLE;
                break;

            case VKD3D_SM4_SWIZZLE_SCALAR:
                src_param->swizzle = (token & VKD3D_SM4_SWIZZLE_MASK) >> VKD3D_SM4_SWIZZLE_SHIFT;
                src_param->swizzle = (src_param->swizzle & 0x3) * 0x55;
                break;

            case VKD3D_SM4_SWIZZLE_VEC4:
                src_param->swizzle = (token & VKD3D_SM4_SWIZZLE_MASK) >> VKD3D_SM4_SWIZZLE_SHIFT;
                break;

            default:
                FIXME("Unhandled swizzle type %#x.\n", swizzle_type);
                break;
        }
    }

    return true;
}

static bool shader_sm4_read_dst_param(struct vkd3d_sm4_data *priv, const DWORD **ptr, const DWORD *end,
        enum vkd3d_data_type data_type, struct vkd3d_shader_dst_param *dst_param)
{
    enum vkd3d_shader_src_modifier modifier;
    DWORD token;

    if (*ptr >= end)
    {
        WARN("Invalid ptr %p >= end %p.\n", *ptr, end);
        return false;
    }
    token = **ptr;

    if (!shader_sm4_read_param(priv, ptr, end, data_type, &dst_param->reg, &modifier))
    {
        ERR("Failed to read parameter.\n");
        return false;
    }

    if (modifier != VKD3DSPSM_NONE)
    {
        ERR("Invalid source modifier %#x on destination register.\n", modifier);
        return false;
    }

    dst_param->write_mask = (token & VKD3D_SM4_WRITEMASK_MASK) >> VKD3D_SM4_WRITEMASK_SHIFT;
    /* Scalar registers are declared with no write mask in shader bytecode. */
    if (!dst_param->write_mask && shader_sm4_is_scalar_register(&dst_param->reg))
        dst_param->write_mask = VKD3DSP_WRITEMASK_0;
    dst_param->modifiers = 0;
    dst_param->shift = 0;

    return true;
}

static void shader_sm4_read_instruction_modifier(DWORD modifier, struct vkd3d_shader_instruction *ins)
{
    static const DWORD recognized_bits = VKD3D_SM4_INSTRUCTION_MODIFIER
            | VKD3D_SM4_MODIFIER_AOFFIMMI
            | VKD3D_SM4_AOFFIMMI_U_MASK
            | VKD3D_SM4_AOFFIMMI_V_MASK
            | VKD3D_SM4_AOFFIMMI_W_MASK;

    if (modifier & ~recognized_bits)
    {
        WARN("Unhandled modifier 0x%08x.\n", modifier);
    }
    else
    {
        /* Bit fields are used for sign extension */
        struct
        {
            int u : 4;
            int v : 4;
            int w : 4;
        }
        aoffimmi;
        aoffimmi.u = (modifier & VKD3D_SM4_AOFFIMMI_U_MASK) >> VKD3D_SM4_AOFFIMMI_U_SHIFT;
        aoffimmi.v = (modifier & VKD3D_SM4_AOFFIMMI_V_MASK) >> VKD3D_SM4_AOFFIMMI_V_SHIFT;
        aoffimmi.w = (modifier & VKD3D_SM4_AOFFIMMI_W_MASK) >> VKD3D_SM4_AOFFIMMI_W_SHIFT;
        ins->texel_offset.u = aoffimmi.u;
        ins->texel_offset.v = aoffimmi.v;
        ins->texel_offset.w = aoffimmi.w;
    }
}

void shader_sm4_read_instruction(void *data, const DWORD **ptr, struct vkd3d_shader_instruction *ins)
{
    const struct vkd3d_sm4_opcode_info *opcode_info;
    DWORD opcode_token, opcode, previous_token;
    struct vkd3d_sm4_data *priv = data;
    unsigned int i, len;
    size_t remaining;
    const DWORD *p;
    DWORD precise;

    list_move_head(&priv->src_free, &priv->src);

    if (*ptr >= priv->end)
    {
        WARN("End of byte-code, failed to read opcode.\n");
        goto fail;
    }
    remaining = priv->end - *ptr;

    opcode_token = *(*ptr)++;
    opcode = opcode_token & VKD3D_SM4_OPCODE_MASK;

    len = ((opcode_token & VKD3D_SM4_INSTRUCTION_LENGTH_MASK) >> VKD3D_SM4_INSTRUCTION_LENGTH_SHIFT);
    if (!len)
    {
        if (remaining < 2)
        {
            WARN("End of byte-code, failed to read length token.\n");
            goto fail;
        }
        len = **ptr;
    }
    if (!len || remaining < len)
    {
        WARN("Read invalid length %u (remaining %zu).\n", len, remaining);
        goto fail;
    }
    --len;

    if (!(opcode_info = get_opcode_info(opcode)))
    {
        FIXME("Unrecognized opcode %#x, opcode_token 0x%08x.\n", opcode, opcode_token);
        ins->handler_idx = VKD3DSIH_INVALID;
        *ptr += len;
        return;
    }

    ins->handler_idx = opcode_info->handler_idx;
    ins->flags = 0;
    ins->coissue = false;
    ins->predicate = NULL;
    ins->dst_count = strlen(opcode_info->dst_info);
    ins->dst = priv->dst_param;
    ins->src_count = strlen(opcode_info->src_info);
    ins->src = priv->src_param;
    memset(&ins->texel_offset, 0, sizeof(ins->texel_offset));

    p = *ptr;
    *ptr += len;

    if (opcode_info->read_opcode_func)
    {
        opcode_info->read_opcode_func(ins, opcode, opcode_token, p, len, priv);
    }
    else
    {
        enum vkd3d_shader_dst_modifier instruction_dst_modifier = VKD3DSPDM_NONE;

        previous_token = opcode_token;
        while (previous_token & VKD3D_SM4_INSTRUCTION_MODIFIER && p != *ptr)
            shader_sm4_read_instruction_modifier(previous_token = *p++, ins);

        ins->flags = (opcode_token & VKD3D_SM4_INSTRUCTION_FLAGS_MASK) >> VKD3D_SM4_INSTRUCTION_FLAGS_SHIFT;
        if (ins->flags & VKD3D_SM4_INSTRUCTION_FLAG_SATURATE)
        {
            ins->flags &= ~VKD3D_SM4_INSTRUCTION_FLAG_SATURATE;
            instruction_dst_modifier = VKD3DSPDM_SATURATE;
        }
        precise = (opcode_token & VKD3D_SM5_PRECISE_MASK) >> VKD3D_SM5_PRECISE_SHIFT;
        ins->flags |= precise << VKD3DSI_PRECISE_SHIFT;

        for (i = 0; i < ins->dst_count; ++i)
        {
            if (!(shader_sm4_read_dst_param(priv, &p, *ptr, map_data_type(opcode_info->dst_info[i]),
                    &priv->dst_param[i])))
            {
                ins->handler_idx = VKD3DSIH_INVALID;
                return;
            }
            priv->dst_param[i].modifiers |= instruction_dst_modifier;
        }

        for (i = 0; i < ins->src_count; ++i)
        {
            if (!(shader_sm4_read_src_param(priv, &p, *ptr, map_data_type(opcode_info->src_info[i]),
                    &priv->src_param[i])))
            {
                ins->handler_idx = VKD3DSIH_INVALID;
                return;
            }
        }
    }

    return;

fail:
    *ptr = priv->end;
    ins->handler_idx = VKD3DSIH_INVALID;
    return;
}

bool shader_sm4_is_end(void *data, const DWORD **ptr)
{
    struct vkd3d_sm4_data *priv = data;
    return *ptr == priv->end;
}

#define MAKE_TAG(ch0, ch1, ch2, ch3) \
    ((DWORD)(ch0) | ((DWORD)(ch1) << 8) | \
    ((DWORD)(ch2) << 16) | ((DWORD)(ch3) << 24 ))
#define TAG_DXBC MAKE_TAG('D', 'X', 'B', 'C')
#define TAG_ISGN MAKE_TAG('I', 'S', 'G', 'N')
#define TAG_ISG1 MAKE_TAG('I', 'S', 'G', '1')
#define TAG_OSGN MAKE_TAG('O', 'S', 'G', 'N')
#define TAG_OSG5 MAKE_TAG('O', 'S', 'G', '5')
#define TAG_OSG1 MAKE_TAG('O', 'S', 'G', '1')
#define TAG_PCSG MAKE_TAG('P', 'C', 'S', 'G')
#define TAG_PSG1 MAKE_TAG('P', 'S', 'G', '1')
#define TAG_SHDR MAKE_TAG('S', 'H', 'D', 'R')
#define TAG_SHEX MAKE_TAG('S', 'H', 'E', 'X')
#define TAG_AON9 MAKE_TAG('A', 'o', 'n', '9')
#define TAG_RTS0 MAKE_TAG('R', 'T', 'S', '0')

static bool require_space(size_t offset, size_t count, size_t size, size_t data_size)
{
    return !count || (data_size - offset) / count >= size;
}

static void read_dword(const char **ptr, DWORD *d)
{
    memcpy(d, *ptr, sizeof(*d));
    *ptr += sizeof(*d);
}

static void read_float(const char **ptr, float *f)
{
    STATIC_ASSERT(sizeof(float) == sizeof(DWORD));
    read_dword(ptr, (DWORD *)f);
}

static void skip_dword_unknown(const char **ptr, unsigned int count)
{
    unsigned int i;
    DWORD d;

    WARN("Skipping %u unknown DWORDs:\n", count);
    for (i = 0; i < count; ++i)
    {
        read_dword(ptr, &d);
        WARN("\t0x%08x\n", d);
    }
}

static const char *shader_get_string(const char *data, size_t data_size, DWORD offset)
{
    size_t len, max_len;

    if (offset >= data_size)
    {
        WARN("Invalid offset %#x (data size %#lx).\n", offset, (long)data_size);
        return NULL;
    }

    max_len = data_size - offset;
    len = strnlen(data + offset, max_len);

    if (len == max_len)
        return NULL;

    return data + offset;
}

static int parse_dxbc(const char *data, size_t data_size,
        int (*chunk_handler)(const char *data, DWORD data_size, DWORD tag, void *ctx), void *ctx)
{
    const char *ptr = data;
    int ret = VKD3D_OK;
    DWORD chunk_count;
    DWORD total_size;
    unsigned int i;
    DWORD version;
    DWORD tag;

    if (data_size < VKD3D_DXBC_HEADER_SIZE)
    {
        WARN("Invalid data size %zu.\n", data_size);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    read_dword(&ptr, &tag);
    TRACE("tag: %#x.\n", tag);

    if (tag != TAG_DXBC)
    {
        WARN("Wrong tag.\n");
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    WARN("Ignoring DXBC checksum.\n");
    skip_dword_unknown(&ptr, 4);

    read_dword(&ptr, &version);
    TRACE("version: %#x.\n", version);
    if (version != 0x00000001)
    {
        WARN("Got unexpected DXBC version %#x.\n", version);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    read_dword(&ptr, &total_size);
    TRACE("total size: %#x\n", total_size);

    read_dword(&ptr, &chunk_count);
    TRACE("chunk count: %#x\n", chunk_count);

    for (i = 0; i < chunk_count; ++i)
    {
        DWORD chunk_tag, chunk_size;
        const char *chunk_ptr;
        DWORD chunk_offset;

        read_dword(&ptr, &chunk_offset);
        TRACE("chunk %u at offset %#x\n", i, chunk_offset);

        if (chunk_offset >= data_size || !require_space(chunk_offset, 2, sizeof(DWORD), data_size))
        {
            WARN("Invalid chunk offset %#x (data size %zu).\n", chunk_offset, data_size);
            return VKD3D_ERROR_INVALID_ARGUMENT;
        }

        chunk_ptr = data + chunk_offset;

        read_dword(&chunk_ptr, &chunk_tag);
        read_dword(&chunk_ptr, &chunk_size);

        if (!require_space(chunk_ptr - data, 1, chunk_size, data_size))
        {
            WARN("Invalid chunk size %#x (data size %zu, chunk offset %#x).\n",
                    chunk_size, data_size, chunk_offset);
            return VKD3D_ERROR_INVALID_ARGUMENT;
        }

        if ((ret = chunk_handler(chunk_ptr, chunk_size, chunk_tag, ctx)) < 0)
            break;
    }

    return ret;
}

static int shader_parse_signature(DWORD tag, const char *data, DWORD data_size,
        struct vkd3d_shader_signature *s)
{
    bool has_stream_index, has_min_precision;
    struct vkd3d_shader_signature_element *e;
    const char *ptr = data;
    unsigned int i;
    DWORD count;

    if (!require_space(0, 2, sizeof(DWORD), data_size))
    {
        WARN("Invalid data size %#x.\n", data_size);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    read_dword(&ptr, &count);
    TRACE("%u elements.\n", count);

    skip_dword_unknown(&ptr, 1); /* It seems to always be 0x00000008. */

    if (!require_space(ptr - data, count, 6 * sizeof(DWORD), data_size))
    {
        WARN("Invalid count %#x (data size %#x).\n", count, data_size);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    if (!(e = vkd3d_calloc(count, sizeof(*e))))
    {
        ERR("Failed to allocate input signature memory.\n");
        return VKD3D_ERROR_OUT_OF_MEMORY;
    }

    has_min_precision = tag == TAG_OSG1 || tag == TAG_PSG1 || tag == TAG_ISG1;
    has_stream_index = tag == TAG_OSG5 || has_min_precision;

    for (i = 0; i < count; ++i)
    {
        DWORD name_offset;

        if (has_stream_index)
            read_dword(&ptr, &e[i].stream_index);
        else
            e[i].stream_index = 0;

        read_dword(&ptr, &name_offset);
        if (!(e[i].semantic_name = shader_get_string(data, data_size, name_offset)))
        {
            WARN("Invalid name offset %#x (data size %#x).\n", name_offset, data_size);
            vkd3d_free(e);
            return VKD3D_ERROR_INVALID_ARGUMENT;
        }
        read_dword(&ptr, &e[i].semantic_index);
        read_dword(&ptr, &e[i].sysval_semantic);
        read_dword(&ptr, &e[i].component_type);
        read_dword(&ptr, &e[i].register_index);
        read_dword(&ptr, &e[i].mask);

        if (has_min_precision)
            read_dword(&ptr, &e[i].min_precision);
        else
            e[i].min_precision = VKD3D_SHADER_MINIMUM_PRECISION_NONE;

        TRACE("Stream: %u, semantic: %s, semantic idx: %u, sysval_semantic %#x, "
                "type %u, register idx: %u, use_mask %#x, input_mask %#x, precision %u.\n",
                e[i].stream_index, debugstr_a(e[i].semantic_name), e[i].semantic_index, e[i].sysval_semantic,
                e[i].component_type, e[i].register_index, (e[i].mask >> 8) & 0xff, e[i].mask & 0xff, e[i].min_precision);
    }

    s->elements = e;
    s->element_count = count;

    return VKD3D_OK;
}

static int isgn_handler(const char *data, DWORD data_size, DWORD tag, void *ctx)
{
    struct vkd3d_shader_signature *is = ctx;

    if (tag != TAG_ISGN)
        return VKD3D_OK;

    if (is->elements)
    {
        FIXME("Multiple input signatures.\n");
        vkd3d_shader_free_shader_signature(is);
    }
    return shader_parse_signature(tag, data, data_size, is);
}

int shader_parse_input_signature(const void *dxbc, size_t dxbc_length,
        struct vkd3d_shader_signature *signature)
{
    int ret;

    memset(signature, 0, sizeof(*signature));
    if ((ret = parse_dxbc(dxbc, dxbc_length, isgn_handler, signature)) < 0)
        ERR("Failed to parse input signature.\n");
    return ret;
}

static int shdr_handler(const char *data, DWORD data_size, DWORD tag, void *context)
{
    struct vkd3d_shader_desc *desc = context;
    int ret;

    switch (tag)
    {
        case TAG_ISGN:
        case TAG_ISG1:
            if (desc->input_signature.elements)
            {
                FIXME("Multiple input signatures.\n");
                break;
            }
            if ((ret = shader_parse_signature(tag, data, data_size, &desc->input_signature)) < 0)
                return ret;
            break;

        case TAG_OSGN:
        case TAG_OSG5:
        case TAG_OSG1:
            if (desc->output_signature.elements)
            {
                FIXME("Multiple output signatures.\n");
                break;
            }
            if ((ret = shader_parse_signature(tag, data, data_size, &desc->output_signature)) < 0)
                return ret;
            break;

        case TAG_PCSG:
        case TAG_PSG1:
            if (desc->patch_constant_signature.elements)
            {
                FIXME("Multiple patch constant signatures.\n");
                break;
            }
            if ((ret = shader_parse_signature(tag, data, data_size, &desc->patch_constant_signature)) < 0)
                return ret;
            break;

        case TAG_SHDR:
        case TAG_SHEX:
            if (desc->byte_code)
                FIXME("Multiple shader code chunks.\n");
            desc->byte_code = (const DWORD *)data;
            desc->byte_code_size = data_size;
            break;

        case TAG_AON9:
            TRACE("Skipping AON9 shader code chunk.\n");
            break;

        default:
            TRACE("Skipping chunk %#x.\n", tag);
            break;
    }

    return VKD3D_OK;
}

void free_shader_desc(struct vkd3d_shader_desc *desc)
{
    vkd3d_shader_free_shader_signature(&desc->input_signature);
    vkd3d_shader_free_shader_signature(&desc->output_signature);
    vkd3d_shader_free_shader_signature(&desc->patch_constant_signature);
}

int shader_extract_from_dxbc(const void *dxbc, size_t dxbc_length,
        struct vkd3d_shader_desc *desc)
{
    int ret;

    desc->byte_code = NULL;
    desc->byte_code_size = 0;
    memset(&desc->input_signature, 0, sizeof(desc->input_signature));
    memset(&desc->output_signature, 0, sizeof(desc->output_signature));
    memset(&desc->patch_constant_signature, 0, sizeof(desc->patch_constant_signature));

    ret = parse_dxbc(dxbc, dxbc_length, shdr_handler, desc);
    if (!desc->byte_code)
        ret = VKD3D_ERROR_INVALID_ARGUMENT;

    if (ret < 0)
    {
        FIXME("Failed to parse shader, vkd3d result %d.\n", ret);
        free_shader_desc(desc);
    }

    return ret;
}

/* root signatures */
#define VKD3D_ROOT_SIGNATURE_1_0_ROOT_DESCRIPTOR_FLAGS VKD3D_ROOT_DESCRIPTOR_FLAG_DATA_VOLATILE

#define VKD3D_ROOT_SIGNATURE_1_0_DESCRIPTOR_RANGE_FLAGS \
        (VKD3D_DESCRIPTOR_RANGE_FLAG_DESCRIPTORS_VOLATILE | VKD3D_DESCRIPTOR_RANGE_FLAG_DATA_VOLATILE)

struct root_signature_parser_context
{
    const char *data;
    unsigned int data_size;
};

static int shader_parse_descriptor_ranges(struct root_signature_parser_context *context,
        unsigned int offset, unsigned int count, struct vkd3d_descriptor_range *ranges)
{
    const char *ptr;
    unsigned int i;

    if (!require_space(offset, 5 * count, sizeof(DWORD), context->data_size))
    {
        WARN("Invalid data size %#x (offset %u, count %u).\n", context->data_size, offset, count);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    ptr = &context->data[offset];

    for (i = 0; i < count; ++i)
    {
        read_dword(&ptr, &ranges[i].range_type);
        read_dword(&ptr, &ranges[i].descriptor_count);
        read_dword(&ptr, &ranges[i].base_shader_register);
        read_dword(&ptr, &ranges[i].register_space);
        read_dword(&ptr, &ranges[i].descriptor_table_offset);

        TRACE("Type %#x, descriptor count %u, base shader register %u, "
                "register space %u, offset %u.\n",
                ranges[i].range_type, ranges[i].descriptor_count,
                ranges[i].base_shader_register, ranges[i].register_space,
                ranges[i].descriptor_table_offset);
    }

    return VKD3D_OK;
}

static void shader_validate_descriptor_range1(const struct vkd3d_descriptor_range1 *range)
{
    unsigned int unknown_flags = range->flags & ~(VKD3D_DESCRIPTOR_RANGE_FLAG_NONE
            | VKD3D_DESCRIPTOR_RANGE_FLAG_DESCRIPTORS_VOLATILE
            | VKD3D_DESCRIPTOR_RANGE_FLAG_DATA_VOLATILE
            | VKD3D_DESCRIPTOR_RANGE_FLAG_DATA_STATIC_WHILE_SET_AT_EXECUTE
            | VKD3D_DESCRIPTOR_RANGE_FLAG_DATA_STATIC);

    if (unknown_flags)
        FIXME("Unknown descriptor range flags %#x.\n", unknown_flags);
}

static int shader_parse_descriptor_ranges1(struct root_signature_parser_context *context,
        unsigned int offset, unsigned int count, struct vkd3d_descriptor_range1 *ranges)
{
    const char *ptr;
    unsigned int i;

    if (!require_space(offset, 6 * count, sizeof(uint32_t), context->data_size))
    {
        WARN("Invalid data size %#x (offset %u, count %u).\n", context->data_size, offset, count);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    ptr = &context->data[offset];

    for (i = 0; i < count; ++i)
    {
        read_dword(&ptr, &ranges[i].range_type);
        read_dword(&ptr, &ranges[i].descriptor_count);
        read_dword(&ptr, &ranges[i].base_shader_register);
        read_dword(&ptr, &ranges[i].register_space);
        read_dword(&ptr, &ranges[i].flags);
        read_dword(&ptr, &ranges[i].descriptor_table_offset);

        TRACE("Type %#x, descriptor count %u, base shader register %u, "
                "register space %u, flags %#x, offset %u.\n",
                ranges[i].range_type, ranges[i].descriptor_count,
                ranges[i].base_shader_register, ranges[i].register_space,
                ranges[i].flags, ranges[i].descriptor_table_offset);

        shader_validate_descriptor_range1(&ranges[i]);
    }

    return VKD3D_OK;
}

static int shader_parse_descriptor_table(struct root_signature_parser_context *context,
        unsigned int offset, struct vkd3d_root_descriptor_table *table)
{
    struct vkd3d_descriptor_range *ranges;
    unsigned int count;
    const char *ptr;

    if (!require_space(offset, 2, sizeof(DWORD), context->data_size))
    {
        WARN("Invalid data size %#x (offset %u).\n", context->data_size, offset);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    ptr = &context->data[offset];

    read_dword(&ptr, &count);
    read_dword(&ptr, &offset);

    TRACE("Descriptor range count %u.\n", count);

    table->descriptor_range_count = count;

    if (!(ranges = vkd3d_calloc(count, sizeof(*ranges))))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    table->descriptor_ranges = ranges;
    return shader_parse_descriptor_ranges(context, offset, count, ranges);
}

static int shader_parse_descriptor_table1(struct root_signature_parser_context *context,
        unsigned int offset, struct vkd3d_root_descriptor_table1 *table)
{
    struct vkd3d_descriptor_range1 *ranges;
    unsigned int count;
    const char *ptr;

    if (!require_space(offset, 2, sizeof(DWORD), context->data_size))
    {
        WARN("Invalid data size %#x (offset %u).\n", context->data_size, offset);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    ptr = &context->data[offset];

    read_dword(&ptr, &count);
    read_dword(&ptr, &offset);

    TRACE("Descriptor range count %u.\n", count);

    table->descriptor_range_count = count;

    if (!(ranges = vkd3d_calloc(count, sizeof(*ranges))))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    table->descriptor_ranges = ranges;
    return shader_parse_descriptor_ranges1(context, offset, count, ranges);
}

static int shader_parse_root_constants(struct root_signature_parser_context *context,
        unsigned int offset, struct vkd3d_root_constants *constants)
{
    const char *ptr;

    if (!require_space(offset, 3, sizeof(DWORD), context->data_size))
    {
        WARN("Invalid data size %#x (offset %u).\n", context->data_size, offset);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    ptr = &context->data[offset];

    read_dword(&ptr, &constants->shader_register);
    read_dword(&ptr, &constants->register_space);
    read_dword(&ptr, &constants->value_count);

    TRACE("Shader register %u, register space %u, 32-bit value count %u.\n",
            constants->shader_register, constants->register_space, constants->value_count);

    return VKD3D_OK;
}

static int shader_parse_root_descriptor(struct root_signature_parser_context *context,
        unsigned int offset, struct vkd3d_root_descriptor *descriptor)
{
    const char *ptr;

    if (!require_space(offset, 2, sizeof(DWORD), context->data_size))
    {
        WARN("Invalid data size %#x (offset %u).\n", context->data_size, offset);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    ptr = &context->data[offset];

    read_dword(&ptr, &descriptor->shader_register);
    read_dword(&ptr, &descriptor->register_space);

    TRACE("Shader register %u, register space %u.\n",
            descriptor->shader_register, descriptor->register_space);

    return VKD3D_OK;
}

static void shader_validate_root_descriptor1(const struct vkd3d_root_descriptor1 *descriptor)
{
    unsigned int unknown_flags = descriptor->flags & ~(VKD3D_ROOT_DESCRIPTOR_FLAG_NONE
            | VKD3D_ROOT_DESCRIPTOR_FLAG_DATA_VOLATILE
            | VKD3D_ROOT_DESCRIPTOR_FLAG_DATA_STATIC_WHILE_SET_AT_EXECUTE
            | VKD3D_ROOT_DESCRIPTOR_FLAG_DATA_STATIC);

    if (unknown_flags)
        FIXME("Unknown root descriptor flags %#x.\n", unknown_flags);
}

static int shader_parse_root_descriptor1(struct root_signature_parser_context *context,
        unsigned int offset, struct vkd3d_root_descriptor1 *descriptor)
{
    const char *ptr;

    if (!require_space(offset, 3, sizeof(DWORD), context->data_size))
    {
        WARN("Invalid data size %#x (offset %u).\n", context->data_size, offset);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    ptr = &context->data[offset];

    read_dword(&ptr, &descriptor->shader_register);
    read_dword(&ptr, &descriptor->register_space);
    read_dword(&ptr, &descriptor->flags);

    TRACE("Shader register %u, register space %u, flags %#x.\n",
            descriptor->shader_register, descriptor->register_space, descriptor->flags);

    shader_validate_root_descriptor1(descriptor);

    return VKD3D_OK;
}

static int shader_parse_root_parameters(struct root_signature_parser_context *context,
        unsigned int offset, unsigned int count, struct vkd3d_root_parameter *parameters)
{
    const char *ptr;
    unsigned int i;
    int ret;

    if (!require_space(offset, 3 * count, sizeof(DWORD), context->data_size))
    {
        WARN("Invalid data size %#x (offset %u, count %u).\n", context->data_size, offset, count);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    ptr = &context->data[offset];

    for (i = 0; i < count; ++i)
    {
        read_dword(&ptr, &parameters[i].parameter_type);
        read_dword(&ptr, &parameters[i].shader_visibility);
        read_dword(&ptr, &offset);

        TRACE("Type %#x, shader visibility %#x.\n",
                parameters[i].parameter_type, parameters[i].shader_visibility);

        switch (parameters[i].parameter_type)
        {
            case VKD3D_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE:
                ret = shader_parse_descriptor_table(context, offset, &parameters[i].u.descriptor_table);
                break;
            case VKD3D_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS:
                ret = shader_parse_root_constants(context, offset, &parameters[i].u.constants);
                break;
            case VKD3D_ROOT_PARAMETER_TYPE_CBV:
            case VKD3D_ROOT_PARAMETER_TYPE_SRV:
            case VKD3D_ROOT_PARAMETER_TYPE_UAV:
                ret = shader_parse_root_descriptor(context, offset, &parameters[i].u.descriptor);
                break;
            default:
                FIXME("Unrecognized type %#x.\n", parameters[i].parameter_type);
                return VKD3D_ERROR_INVALID_ARGUMENT;
        }

        if (ret < 0)
            return ret;
    }

    return VKD3D_OK;
}

static int shader_parse_root_parameters1(struct root_signature_parser_context *context,
        DWORD offset, DWORD count, struct vkd3d_root_parameter1 *parameters)
{
    const char *ptr;
    unsigned int i;
    int ret;

    if (!require_space(offset, 3 * count, sizeof(DWORD), context->data_size))
    {
        WARN("Invalid data size %#x (offset %u, count %u).\n", context->data_size, offset, count);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    ptr = &context->data[offset];

    for (i = 0; i < count; ++i)
    {
        read_dword(&ptr, &parameters[i].parameter_type);
        read_dword(&ptr, &parameters[i].shader_visibility);
        read_dword(&ptr, &offset);

        TRACE("Type %#x, shader visibility %#x.\n",
                parameters[i].parameter_type, parameters[i].shader_visibility);

        switch (parameters[i].parameter_type)
        {
            case VKD3D_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE:
                ret = shader_parse_descriptor_table1(context, offset, &parameters[i].u.descriptor_table);
                break;
            case VKD3D_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS:
                ret = shader_parse_root_constants(context, offset, &parameters[i].u.constants);
                break;
            case VKD3D_ROOT_PARAMETER_TYPE_CBV:
            case VKD3D_ROOT_PARAMETER_TYPE_SRV:
            case VKD3D_ROOT_PARAMETER_TYPE_UAV:
                ret = shader_parse_root_descriptor1(context, offset, &parameters[i].u.descriptor);
                break;
            default:
                FIXME("Unrecognized type %#x.\n", parameters[i].parameter_type);
                return VKD3D_ERROR_INVALID_ARGUMENT;
        }

        if (ret < 0)
            return ret;
    }

    return VKD3D_OK;
}

static int shader_parse_static_samplers(struct root_signature_parser_context *context,
        unsigned int offset, unsigned int count, struct vkd3d_static_sampler_desc *sampler_descs)
{
    const char *ptr;
    unsigned int i;

    if (!require_space(offset, 13 * count, sizeof(DWORD), context->data_size))
    {
        WARN("Invalid data size %#x (offset %u, count %u).\n", context->data_size, offset, count);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    ptr = &context->data[offset];

    for (i = 0; i < count; ++i)
    {
        read_dword(&ptr, &sampler_descs[i].filter);
        read_dword(&ptr, &sampler_descs[i].address_u);
        read_dword(&ptr, &sampler_descs[i].address_v);
        read_dword(&ptr, &sampler_descs[i].address_w);
        read_float(&ptr, &sampler_descs[i].mip_lod_bias);
        read_dword(&ptr, &sampler_descs[i].max_anisotropy);
        read_dword(&ptr, &sampler_descs[i].comparison_func);
        read_dword(&ptr, &sampler_descs[i].border_color);
        read_float(&ptr, &sampler_descs[i].min_lod);
        read_float(&ptr, &sampler_descs[i].max_lod);
        read_dword(&ptr, &sampler_descs[i].shader_register);
        read_dword(&ptr, &sampler_descs[i].register_space);
        read_dword(&ptr, &sampler_descs[i].shader_visibility);
    }

    return VKD3D_OK;
}

static int shader_parse_root_signature(const char *data, unsigned int data_size,
        struct vkd3d_versioned_root_signature_desc *desc)
{
    struct vkd3d_root_signature_desc *v_1_0 = &desc->u.v_1_0;
    struct root_signature_parser_context context;
    unsigned int count, offset, version;
    const char *ptr = data;
    int ret;

    context.data = data;
    context.data_size = data_size;

    if (!require_space(0, 6, sizeof(DWORD), data_size))
    {
        WARN("Invalid data size %#x.\n", data_size);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    read_dword(&ptr, &version);
    TRACE("Version %#x.\n", version);
    if (version != VKD3D_ROOT_SIGNATURE_VERSION_1_0 && version != VKD3D_ROOT_SIGNATURE_VERSION_1_1)
    {
        FIXME("Unknown version %#x.\n", version);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }
    desc->version = version;

    read_dword(&ptr, &count);
    read_dword(&ptr, &offset);
    TRACE("Parameter count %u, offset %u.\n", count, offset);

    if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
    {
        v_1_0->parameter_count = count;
        if (v_1_0->parameter_count)
        {
            struct vkd3d_root_parameter *parameters;
            if (!(parameters = vkd3d_calloc(v_1_0->parameter_count, sizeof(*parameters))))
                return VKD3D_ERROR_OUT_OF_MEMORY;
            v_1_0->parameters = parameters;
            if ((ret = shader_parse_root_parameters(&context, offset, count, parameters)) < 0)
                return ret;
        }
    }
    else
    {
        struct vkd3d_root_signature_desc1 *v_1_1 = &desc->u.v_1_1;

        assert(version == VKD3D_ROOT_SIGNATURE_VERSION_1_1);

        v_1_1->parameter_count = count;
        if (v_1_1->parameter_count)
        {
            struct vkd3d_root_parameter1 *parameters;
            if (!(parameters = vkd3d_calloc(v_1_1->parameter_count, sizeof(*parameters))))
                return VKD3D_ERROR_OUT_OF_MEMORY;
            v_1_1->parameters = parameters;
            if ((ret = shader_parse_root_parameters1(&context, offset, count, parameters)) < 0)
                return ret;
        }
    }

    read_dword(&ptr, &count);
    read_dword(&ptr, &offset);
    TRACE("Static sampler count %u, offset %u.\n", count, offset);

    v_1_0->static_sampler_count = count;
    if (v_1_0->static_sampler_count)
    {
        struct vkd3d_static_sampler_desc *samplers;
        if (!(samplers = vkd3d_calloc(v_1_0->static_sampler_count, sizeof(*samplers))))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        v_1_0->static_samplers = samplers;
        if ((ret = shader_parse_static_samplers(&context, offset, count, samplers)) < 0)
            return ret;
    }

    read_dword(&ptr, &v_1_0->flags);
    TRACE("Flags %#x.\n", v_1_0->flags);

    return VKD3D_OK;
}

static int rts0_handler(const char *data, DWORD data_size, DWORD tag, void *context)
{
    struct vkd3d_versioned_root_signature_desc *desc = context;

    if (tag != TAG_RTS0)
        return VKD3D_OK;

    return shader_parse_root_signature(data, data_size, desc);
}

int vkd3d_shader_parse_root_signature(const struct vkd3d_shader_code *dxbc,
        struct vkd3d_versioned_root_signature_desc *root_signature)
{
    int ret;

    TRACE("dxbc {%p, %zu}, root_signature %p.\n", dxbc->code, dxbc->size, root_signature);

    memset(root_signature, 0, sizeof(*root_signature));
    if ((ret = parse_dxbc(dxbc->code, dxbc->size, rts0_handler, root_signature)) < 0)
    {
        vkd3d_shader_free_root_signature(root_signature);
        return ret;
    }

    return VKD3D_OK;
}

static unsigned int versioned_root_signature_get_parameter_count(const struct vkd3d_versioned_root_signature_desc *desc)
{
    if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
        return desc->u.v_1_0.parameter_count;
    else
        return desc->u.v_1_1.parameter_count;
}

static enum vkd3d_root_parameter_type versioned_root_signature_get_parameter_type(
        const struct vkd3d_versioned_root_signature_desc *desc, unsigned int i)
{
    if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
        return desc->u.v_1_0.parameters[i].parameter_type;
    else
        return desc->u.v_1_1.parameters[i].parameter_type;
}

static enum vkd3d_shader_visibility versioned_root_signature_get_parameter_shader_visibility(
        const struct vkd3d_versioned_root_signature_desc *desc, unsigned int i)
{
    if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
        return desc->u.v_1_0.parameters[i].shader_visibility;
    else
        return desc->u.v_1_1.parameters[i].shader_visibility;
}

static const struct vkd3d_root_constants *versioned_root_signature_get_root_constants(
        const struct vkd3d_versioned_root_signature_desc *desc, unsigned int i)
{
    if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
        return &desc->u.v_1_0.parameters[i].u.constants;
    else
        return &desc->u.v_1_1.parameters[i].u.constants;
}

static unsigned int versioned_root_signature_get_static_sampler_count(const struct vkd3d_versioned_root_signature_desc *desc)
{
    if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
        return desc->u.v_1_0.static_sampler_count;
    else
        return desc->u.v_1_1.static_sampler_count;
}

static const struct vkd3d_static_sampler_desc *versioned_root_signature_get_static_samplers(
        const struct vkd3d_versioned_root_signature_desc *desc)
{
    if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
        return desc->u.v_1_0.static_samplers;
    else
        return desc->u.v_1_1.static_samplers;
}

static unsigned int versioned_root_signature_get_flags(const struct vkd3d_versioned_root_signature_desc *desc)
{
    if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
        return desc->u.v_1_0.flags;
    else
        return desc->u.v_1_1.flags;
}

struct root_signature_writer_context
{
    DWORD *data;
    size_t position;
    size_t capacity;

    size_t total_size_position;
    size_t chunk_position;
};

static bool write_dwords(struct root_signature_writer_context *context,
        unsigned int count, DWORD d)
{
    unsigned int i;

    if (!vkd3d_array_reserve((void **)&context->data, &context->capacity,
            context->position + count, sizeof(*context->data)))
        return false;
    for (i = 0; i < count; ++i)
        context->data[context->position++] = d;
    return true;
}

static bool write_dword(struct root_signature_writer_context *context, DWORD d)
{
    return write_dwords(context, 1, d);
}

static bool write_float(struct root_signature_writer_context *context, float f)
{
    union
    {
        float f;
        DWORD d;
    } u;
    u.f = f;
    return write_dword(context, u.d);
}

static size_t get_chunk_offset(struct root_signature_writer_context *context)
{
    return (context->position - context->chunk_position) * sizeof(DWORD);
}

static int shader_write_root_signature_header(struct root_signature_writer_context *context)
{
    if (!write_dword(context, TAG_DXBC))
        return VKD3D_ERROR_OUT_OF_MEMORY;

    /* The checksum is computed when all data is generated. */
    if (!write_dwords(context, 4, 0x00000000))
        return VKD3D_ERROR_OUT_OF_MEMORY;

    if (!write_dword(context, 0x00000001))
        return VKD3D_ERROR_OUT_OF_MEMORY;

    context->total_size_position = context->position;
    if (!write_dword(context, 0xffffffff)) /* total size */
        return VKD3D_ERROR_OUT_OF_MEMORY;

    if (!write_dword(context, 1)) /* chunk count */
        return VKD3D_ERROR_OUT_OF_MEMORY;

    /* chunk offset */
    if (!write_dword(context, (context->position + 1) * sizeof(DWORD)))
        return VKD3D_ERROR_OUT_OF_MEMORY;

    if (!write_dword(context, TAG_RTS0))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    if (!write_dword(context, 0xffffffff)) /* chunk size */
        return VKD3D_ERROR_OUT_OF_MEMORY;
    context->chunk_position = context->position;

    return VKD3D_OK;
}

static int shader_write_descriptor_ranges(struct root_signature_writer_context *context,
        const struct vkd3d_root_descriptor_table *table)
{
    const struct vkd3d_descriptor_range *ranges = table->descriptor_ranges;
    unsigned int i;

    for (i = 0; i < table->descriptor_range_count; ++i)
    {
        if (!write_dword(context, ranges[i].range_type))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, ranges[i].descriptor_count))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, ranges[i].base_shader_register))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, ranges[i].register_space))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, ranges[i].descriptor_table_offset))
            return VKD3D_ERROR_OUT_OF_MEMORY;
    }

    return VKD3D_OK;
}

static int shader_write_descriptor_ranges1(struct root_signature_writer_context *context,
        const struct vkd3d_root_descriptor_table1 *table)
{
    const struct vkd3d_descriptor_range1 *ranges = table->descriptor_ranges;
    unsigned int i;

    for (i = 0; i < table->descriptor_range_count; ++i)
    {
        if (!write_dword(context, ranges[i].range_type))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, ranges[i].descriptor_count))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, ranges[i].base_shader_register))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, ranges[i].register_space))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, ranges[i].flags))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, ranges[i].descriptor_table_offset))
            return VKD3D_ERROR_OUT_OF_MEMORY;
    }

    return VKD3D_OK;
}

static int shader_write_descriptor_table(struct root_signature_writer_context *context,
        const struct vkd3d_root_descriptor_table *table)
{
    if (!write_dword(context, table->descriptor_range_count))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    if (!write_dword(context, get_chunk_offset(context) + sizeof(DWORD))) /* offset */
        return VKD3D_ERROR_OUT_OF_MEMORY;

    return shader_write_descriptor_ranges(context, table);
}

static int shader_write_descriptor_table1(struct root_signature_writer_context *context,
        const struct vkd3d_root_descriptor_table1 *table)
{
    if (!write_dword(context, table->descriptor_range_count))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    if (!write_dword(context, get_chunk_offset(context) + sizeof(DWORD))) /* offset */
        return VKD3D_ERROR_OUT_OF_MEMORY;

    return shader_write_descriptor_ranges1(context, table);
}

static int shader_write_root_constants(struct root_signature_writer_context *context,
        const struct vkd3d_root_constants *constants)
{
    if (!write_dword(context, constants->shader_register))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    if (!write_dword(context, constants->register_space))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    if (!write_dword(context, constants->value_count))
        return VKD3D_ERROR_OUT_OF_MEMORY;

    return VKD3D_OK;
}

static int shader_write_root_descriptor(struct root_signature_writer_context *context,
        const struct vkd3d_root_descriptor *descriptor)
{
    if (!write_dword(context, descriptor->shader_register))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    if (!write_dword(context, descriptor->register_space))
        return VKD3D_ERROR_OUT_OF_MEMORY;

    return VKD3D_OK;
}

static int shader_write_root_descriptor1(struct root_signature_writer_context *context,
        const struct vkd3d_root_descriptor1 *descriptor)
{
    if (!write_dword(context, descriptor->shader_register))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    if (!write_dword(context, descriptor->register_space))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    if (!write_dword(context, descriptor->flags))
        return VKD3D_ERROR_OUT_OF_MEMORY;

    return VKD3D_OK;
}

static int shader_write_root_parameters(struct root_signature_writer_context *context,
        const struct vkd3d_versioned_root_signature_desc *desc)
{
    unsigned int parameter_count = versioned_root_signature_get_parameter_count(desc);
    size_t parameters_position;
    unsigned int i;
    int ret;

    parameters_position = context->position;
    for (i = 0; i < parameter_count; ++i)
    {
        if (!write_dword(context, versioned_root_signature_get_parameter_type(desc, i)))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, versioned_root_signature_get_parameter_shader_visibility(desc, i)))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, 0xffffffff)) /* offset */
            return VKD3D_ERROR_OUT_OF_MEMORY;
    }

    for (i = 0; i < parameter_count; ++i)
    {
        context->data[parameters_position + 3 * i + 2] = get_chunk_offset(context); /* offset */

        switch (versioned_root_signature_get_parameter_type(desc, i))
        {
            case VKD3D_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE:
                if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
                    ret = shader_write_descriptor_table(context, &desc->u.v_1_0.parameters[i].u.descriptor_table);
                else
                    ret = shader_write_descriptor_table1(context, &desc->u.v_1_1.parameters[i].u.descriptor_table);
                break;
            case VKD3D_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS:
                ret = shader_write_root_constants(context, versioned_root_signature_get_root_constants(desc, i));
                break;
            case VKD3D_ROOT_PARAMETER_TYPE_CBV:
            case VKD3D_ROOT_PARAMETER_TYPE_SRV:
            case VKD3D_ROOT_PARAMETER_TYPE_UAV:
                if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
                    ret = shader_write_root_descriptor(context, &desc->u.v_1_0.parameters[i].u.descriptor);
                else
                    ret = shader_write_root_descriptor1(context, &desc->u.v_1_1.parameters[i].u.descriptor);
                break;
            default:
                FIXME("Unrecognized type %#x.\n", versioned_root_signature_get_parameter_type(desc, i));
                return VKD3D_ERROR_INVALID_ARGUMENT;
        }

        if (ret < 0)
            return ret;
    }

    return VKD3D_OK;
}

static int shader_write_static_samplers(struct root_signature_writer_context *context,
        const struct vkd3d_versioned_root_signature_desc *desc)
{
    const struct vkd3d_static_sampler_desc *samplers = versioned_root_signature_get_static_samplers(desc);
    unsigned int i;

    for (i = 0; i < versioned_root_signature_get_static_sampler_count(desc); ++i)
    {
        if (!write_dword(context, samplers[i].filter))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, samplers[i].address_u))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, samplers[i].address_v))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, samplers[i].address_w))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_float(context, samplers[i].mip_lod_bias))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, samplers[i].max_anisotropy))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, samplers[i].comparison_func))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, samplers[i].border_color))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_float(context, samplers[i].min_lod))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_float(context, samplers[i].max_lod))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, samplers[i].shader_register))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, samplers[i].register_space))
            return VKD3D_ERROR_OUT_OF_MEMORY;
        if (!write_dword(context, samplers[i].shader_visibility))
            return VKD3D_ERROR_OUT_OF_MEMORY;
    }

    return VKD3D_OK;
}

static int shader_write_root_signature(struct root_signature_writer_context *context,
        const struct vkd3d_versioned_root_signature_desc *desc)
{
    size_t samplers_offset_position;
    int ret;

    if (!write_dword(context, desc->version))
        return VKD3D_ERROR_OUT_OF_MEMORY;

    if (!write_dword(context, versioned_root_signature_get_parameter_count(desc)))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    if (!write_dword(context, get_chunk_offset(context) + 4 * sizeof(DWORD))) /* offset */
        return VKD3D_ERROR_OUT_OF_MEMORY;

    if (!write_dword(context, versioned_root_signature_get_static_sampler_count(desc)))
        return VKD3D_ERROR_OUT_OF_MEMORY;
    samplers_offset_position = context->position;
    if (!write_dword(context, 0xffffffff)) /* offset */
        return VKD3D_ERROR_OUT_OF_MEMORY;

    if (!write_dword(context, versioned_root_signature_get_flags(desc)))
        return VKD3D_ERROR_OUT_OF_MEMORY;

    if ((ret = shader_write_root_parameters(context, desc)) < 0)
        return ret;

    context->data[samplers_offset_position] = get_chunk_offset(context);
    return shader_write_static_samplers(context, desc);
}

static int validate_descriptor_table_v_1_0(const struct vkd3d_root_descriptor_table *descriptor_table)
{
    bool have_srv_uav_cbv = false;
    bool have_sampler = false;
    unsigned int i;

    for (i = 0; i < descriptor_table->descriptor_range_count; ++i)
    {
        const struct vkd3d_descriptor_range *r = &descriptor_table->descriptor_ranges[i];

        if (r->range_type == VKD3D_DESCRIPTOR_RANGE_TYPE_SRV
                || r->range_type == VKD3D_DESCRIPTOR_RANGE_TYPE_UAV
                || r->range_type == VKD3D_DESCRIPTOR_RANGE_TYPE_CBV)
        {
            have_srv_uav_cbv = true;
        }
        else if (r->range_type == VKD3D_DESCRIPTOR_RANGE_TYPE_SAMPLER)
        {
            have_sampler = true;
        }
        else
        {
            WARN("Invalid descriptor range type %#x.\n", r->range_type);
            return VKD3D_ERROR_INVALID_ARGUMENT;
        }
    }

    if (have_srv_uav_cbv && have_sampler)
    {
        WARN("Samplers cannot be mixed with CBVs/SRVs/UAVs in descriptor tables.\n");
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    return VKD3D_OK;
}

static int validate_descriptor_table_v_1_1(const struct vkd3d_root_descriptor_table1 *descriptor_table)
{
    bool have_srv_uav_cbv = false;
    bool have_sampler = false;
    unsigned int i;

    for (i = 0; i < descriptor_table->descriptor_range_count; ++i)
    {
        const struct vkd3d_descriptor_range1 *r = &descriptor_table->descriptor_ranges[i];

        if (r->range_type == VKD3D_DESCRIPTOR_RANGE_TYPE_SRV
                || r->range_type == VKD3D_DESCRIPTOR_RANGE_TYPE_UAV
                || r->range_type == VKD3D_DESCRIPTOR_RANGE_TYPE_CBV)
        {
            have_srv_uav_cbv = true;
        }
        else if (r->range_type == VKD3D_DESCRIPTOR_RANGE_TYPE_SAMPLER)
        {
            have_sampler = true;
        }
        else
        {
            WARN("Invalid descriptor range type %#x.\n", r->range_type);
            return VKD3D_ERROR_INVALID_ARGUMENT;
        }
    }

    if (have_srv_uav_cbv && have_sampler)
    {
        WARN("Samplers cannot be mixed with CBVs/SRVs/UAVs in descriptor tables.\n");
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    return VKD3D_OK;
}

static int validate_root_signature_desc(const struct vkd3d_versioned_root_signature_desc *desc)
{
    int ret = VKD3D_OK;
    unsigned int i;

    for (i = 0; i < versioned_root_signature_get_parameter_count(desc); ++i)
    {
        enum vkd3d_root_parameter_type type;

        type = versioned_root_signature_get_parameter_type(desc, i);
        if (type == VKD3D_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE)
        {
            if (desc->version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
                ret = validate_descriptor_table_v_1_0(&desc->u.v_1_0.parameters[i].u.descriptor_table);
            else
                ret = validate_descriptor_table_v_1_1(&desc->u.v_1_1.parameters[i].u.descriptor_table);
        }

        if (ret < 0)
            break;
    }

    return ret;
}

int vkd3d_shader_serialize_root_signature(const struct vkd3d_versioned_root_signature_desc *root_signature,
        struct vkd3d_shader_code *dxbc)
{
    struct root_signature_writer_context context;
    size_t total_size, chunk_size;
    uint32_t checksum[4];
    int ret;

    TRACE("root_signature %p, dxbc %p.\n", root_signature, dxbc);

    if (root_signature->version != VKD3D_ROOT_SIGNATURE_VERSION_1_0
            && root_signature->version != VKD3D_ROOT_SIGNATURE_VERSION_1_1)
    {
        WARN("Root signature version %#x not supported.\n", root_signature->version);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    if ((ret = validate_root_signature_desc(root_signature)) < 0)
        return ret;

    memset(dxbc, 0, sizeof(*dxbc));
    memset(&context, 0, sizeof(context));
    if ((ret = shader_write_root_signature_header(&context)) < 0)
    {
        vkd3d_free(context.data);
        return ret;
    }

    if ((ret = shader_write_root_signature(&context, root_signature)) < 0)
    {
        vkd3d_free(context.data);
        return ret;
    }

    total_size = context.position * sizeof(DWORD);
    chunk_size = get_chunk_offset(&context);
    context.data[context.total_size_position] = total_size;
    context.data[context.chunk_position - 1] = chunk_size;

    dxbc->code = context.data;
    dxbc->size = total_size;

    vkd3d_compute_dxbc_checksum(dxbc->code, dxbc->size, checksum);
    memcpy((uint32_t *)dxbc->code + 1, checksum, sizeof(checksum));

    return VKD3D_OK;
}

static void free_descriptor_ranges(const struct vkd3d_root_parameter *parameters, unsigned int count)
{
    unsigned int i;

    if (!parameters)
        return;

    for (i = 0; i < count; ++i)
    {
        const struct vkd3d_root_parameter *p = &parameters[i];

        if (p->parameter_type == VKD3D_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE)
            vkd3d_free((void *)p->u.descriptor_table.descriptor_ranges);
    }
}

static int convert_root_parameters_to_v_1_0(struct vkd3d_root_parameter *dst,
        const struct vkd3d_root_parameter1 *src, unsigned int count)
{
    const struct vkd3d_descriptor_range1 *ranges1;
    struct vkd3d_descriptor_range *ranges;
    unsigned int i, j;
    int ret;

    for (i = 0; i < count; ++i)
    {
        const struct vkd3d_root_parameter1 *p1 = &src[i];
        struct vkd3d_root_parameter *p = &dst[i];

        p->parameter_type = p1->parameter_type;
        switch (p->parameter_type)
        {
            case VKD3D_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE:
                ranges = NULL;
                if ((p->u.descriptor_table.descriptor_range_count = p1->u.descriptor_table.descriptor_range_count))
                {
                    if (!(ranges = vkd3d_calloc(p->u.descriptor_table.descriptor_range_count, sizeof(*ranges))))
                    {
                        ret = VKD3D_ERROR_OUT_OF_MEMORY;
                        goto fail;
                    }
                }
                p->u.descriptor_table.descriptor_ranges = ranges;
                ranges1 = p1->u.descriptor_table.descriptor_ranges;
                for (j = 0; j < p->u.descriptor_table.descriptor_range_count; ++j)
                {
                    ranges[j].range_type = ranges1[j].range_type;
                    ranges[j].descriptor_count = ranges1[j].descriptor_count;
                    ranges[j].base_shader_register = ranges1[j].base_shader_register;
                    ranges[j].register_space = ranges1[j].register_space;
                    ranges[j].descriptor_table_offset = ranges1[j].descriptor_table_offset;
                }
                break;
            case VKD3D_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS:
                p->u.constants = p1->u.constants;
                break;
            case VKD3D_ROOT_PARAMETER_TYPE_CBV:
            case VKD3D_ROOT_PARAMETER_TYPE_SRV:
            case VKD3D_ROOT_PARAMETER_TYPE_UAV:
                p->u.descriptor.shader_register = p1->u.descriptor.shader_register;
                p->u.descriptor.register_space = p1->u.descriptor.register_space;
                break;
            default:
                WARN("Invalid root parameter type %#x.\n", p->parameter_type);
                ret = VKD3D_ERROR_INVALID_ARGUMENT;
                goto fail;

        }
        p->shader_visibility = p1->shader_visibility;
    }

    return VKD3D_OK;

fail:
    free_descriptor_ranges(dst, i);
    return ret;
}

static int convert_root_signature_to_v1_0(struct vkd3d_versioned_root_signature_desc *dst,
        const struct vkd3d_versioned_root_signature_desc *src)
{
    const struct vkd3d_root_signature_desc1 *src_desc = &src->u.v_1_1;
    struct vkd3d_root_signature_desc *dst_desc = &dst->u.v_1_0;
    struct vkd3d_static_sampler_desc *samplers = NULL;
    struct vkd3d_root_parameter *parameters = NULL;
    int ret;

    if ((dst_desc->parameter_count = src_desc->parameter_count))
    {
        if (!(parameters = vkd3d_calloc(dst_desc->parameter_count, sizeof(*parameters))))
        {
            ret = VKD3D_ERROR_OUT_OF_MEMORY;
            goto fail;
        }
        if ((ret = convert_root_parameters_to_v_1_0(parameters, src_desc->parameters, src_desc->parameter_count)) < 0)
            goto fail;
    }
    dst_desc->parameters = parameters;
    if ((dst_desc->static_sampler_count = src_desc->static_sampler_count))
    {
        if (!(samplers = vkd3d_calloc(dst_desc->static_sampler_count, sizeof(*samplers))))
        {
            ret = VKD3D_ERROR_OUT_OF_MEMORY;
            goto fail;
        }
        memcpy(samplers, src_desc->static_samplers, src_desc->static_sampler_count * sizeof(*samplers));
    }
    dst_desc->static_samplers = samplers;
    dst_desc->flags = src_desc->flags;

    return VKD3D_OK;

fail:
    free_descriptor_ranges(parameters, dst_desc->parameter_count);
    vkd3d_free(parameters);
    vkd3d_free(samplers);
    return ret;
}

static void free_descriptor_ranges1(const struct vkd3d_root_parameter1 *parameters, unsigned int count)
{
    unsigned int i;

    if (!parameters)
        return;

    for (i = 0; i < count; ++i)
    {
        const struct vkd3d_root_parameter1 *p = &parameters[i];

        if (p->parameter_type == VKD3D_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE)
            vkd3d_free((void *)p->u.descriptor_table.descriptor_ranges);
    }
}

static int convert_root_parameters_to_v_1_1(struct vkd3d_root_parameter1 *dst,
        const struct vkd3d_root_parameter *src, unsigned int count)
{
    const struct vkd3d_descriptor_range *ranges;
    struct vkd3d_descriptor_range1 *ranges1;
    unsigned int i, j;
    int ret;

    for (i = 0; i < count; ++i)
    {
        const struct vkd3d_root_parameter *p = &src[i];
        struct vkd3d_root_parameter1 *p1 = &dst[i];

        p1->parameter_type = p->parameter_type;
        switch (p1->parameter_type)
        {
            case VKD3D_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE:
                ranges1 = NULL;
                if ((p1->u.descriptor_table.descriptor_range_count = p->u.descriptor_table.descriptor_range_count))
                {
                    if (!(ranges1 = vkd3d_calloc(p1->u.descriptor_table.descriptor_range_count, sizeof(*ranges1))))
                    {
                        ret = VKD3D_ERROR_OUT_OF_MEMORY;
                        goto fail;
                    }
                }
                p1->u.descriptor_table.descriptor_ranges = ranges1;
                ranges = p->u.descriptor_table.descriptor_ranges;
                for (j = 0; j < p1->u.descriptor_table.descriptor_range_count; ++j)
                {
                    ranges1[j].range_type = ranges[j].range_type;
                    ranges1[j].descriptor_count = ranges[j].descriptor_count;
                    ranges1[j].base_shader_register = ranges[j].base_shader_register;
                    ranges1[j].register_space = ranges[j].register_space;
                    ranges1[j].flags = VKD3D_ROOT_SIGNATURE_1_0_DESCRIPTOR_RANGE_FLAGS;
                    ranges1[j].descriptor_table_offset = ranges[j].descriptor_table_offset;
                }
                break;
            case VKD3D_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS:
                p1->u.constants = p->u.constants;
                break;
            case VKD3D_ROOT_PARAMETER_TYPE_CBV:
            case VKD3D_ROOT_PARAMETER_TYPE_SRV:
            case VKD3D_ROOT_PARAMETER_TYPE_UAV:
                p1->u.descriptor.shader_register = p->u.descriptor.shader_register;
                p1->u.descriptor.register_space = p->u.descriptor.register_space;
                p1->u.descriptor.flags = VKD3D_ROOT_SIGNATURE_1_0_ROOT_DESCRIPTOR_FLAGS;
                break;
            default:
                WARN("Invalid root parameter type %#x.\n", p1->parameter_type);
                ret = VKD3D_ERROR_INVALID_ARGUMENT;
                goto fail;

        }
        p1->shader_visibility = p->shader_visibility;
    }

    return VKD3D_OK;

fail:
    free_descriptor_ranges1(dst, i);
    return ret;
}

static int convert_root_signature_to_v1_1(struct vkd3d_versioned_root_signature_desc *dst,
        const struct vkd3d_versioned_root_signature_desc *src)
{
    const struct vkd3d_root_signature_desc *src_desc = &src->u.v_1_0;
    struct vkd3d_root_signature_desc1 *dst_desc = &dst->u.v_1_1;
    struct vkd3d_static_sampler_desc *samplers = NULL;
    struct vkd3d_root_parameter1 *parameters = NULL;
    int ret;

    if ((dst_desc->parameter_count = src_desc->parameter_count))
    {
        if (!(parameters = vkd3d_calloc(dst_desc->parameter_count, sizeof(*parameters))))
        {
            ret = VKD3D_ERROR_OUT_OF_MEMORY;
            goto fail;
        }
        if ((ret = convert_root_parameters_to_v_1_1(parameters, src_desc->parameters, src_desc->parameter_count)) < 0)
            goto fail;
    }
    dst_desc->parameters = parameters;
    if ((dst_desc->static_sampler_count = src_desc->static_sampler_count))
    {
        if (!(samplers = vkd3d_calloc(dst_desc->static_sampler_count, sizeof(*samplers))))
        {
            ret = VKD3D_ERROR_OUT_OF_MEMORY;
            goto fail;
        }
        memcpy(samplers, src_desc->static_samplers, src_desc->static_sampler_count * sizeof(*samplers));
    }
    dst_desc->static_samplers = samplers;
    dst_desc->flags = src_desc->flags;

    return VKD3D_OK;

fail:
    free_descriptor_ranges1(parameters, dst_desc->parameter_count);
    vkd3d_free(parameters);
    vkd3d_free(samplers);
    return ret;
}

int vkd3d_shader_convert_root_signature(struct vkd3d_versioned_root_signature_desc *dst,
        enum vkd3d_root_signature_version version, const struct vkd3d_versioned_root_signature_desc *src)
{
    int ret;

    TRACE("dst %p, version %#x, src %p.\n", dst, version, src);

    if (src->version == version)
    {
        WARN("Nothing to convert.\n");
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    if (version != VKD3D_ROOT_SIGNATURE_VERSION_1_0 && version != VKD3D_ROOT_SIGNATURE_VERSION_1_1)
    {
        WARN("Root signature version %#x not supported.\n", version);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    if (src->version != VKD3D_ROOT_SIGNATURE_VERSION_1_0 && src->version != VKD3D_ROOT_SIGNATURE_VERSION_1_1)
    {
        WARN("Root signature version %#x not supported.\n", src->version);
        return VKD3D_ERROR_INVALID_ARGUMENT;
    }

    memset(dst, 0, sizeof(*dst));
    dst->version = version;

    if (version == VKD3D_ROOT_SIGNATURE_VERSION_1_0)
    {
        ret = convert_root_signature_to_v1_0(dst, src);
    }
    else
    {
        assert(version == VKD3D_ROOT_SIGNATURE_VERSION_1_1);
        ret = convert_root_signature_to_v1_1(dst, src);
    }

    return ret;
}
