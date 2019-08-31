/*
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
 *
 * This file incorporates work covered by the following copyright and
 * permission notice:
 *
 * Copyright 2002-2003 The wine-d3d team
 * Copyright 2002-2003 2004 Jason Edmeades
 * Copyright 2002-2003 Raphael Junqueira
 * Copyright 2005 Oliver Stieber
 * Copyright 2006 Stefan Dösinger
 * Copyright 2006-2011, 2013 Stefan Dösinger for CodeWeavers
 * Copyright 2007 Henri Verbeet
 * Copyright 2008-2009 Henri Verbeet for CodeWeavers
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

#ifndef __VKD3D_SHADER_PRIVATE_H
#define __VKD3D_SHADER_PRIVATE_H

#define NONAMELESSUNION
#include "vkd3d_common.h"
#include "vkd3d_memory.h"
#include "vkd3d_shader.h"
#include "list.h"

#include <assert.h>
#include <inttypes.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#include <strings.h>

#define VKD3D_VEC4_SIZE 4

enum VKD3D_SHADER_INSTRUCTION_HANDLER
{
    VKD3DSIH_ABS,
    VKD3DSIH_ADD,
    VKD3DSIH_AND,
    VKD3DSIH_ATOMIC_AND,
    VKD3DSIH_ATOMIC_CMP_STORE,
    VKD3DSIH_ATOMIC_IADD,
    VKD3DSIH_ATOMIC_IMAX,
    VKD3DSIH_ATOMIC_IMIN,
    VKD3DSIH_ATOMIC_OR,
    VKD3DSIH_ATOMIC_UMAX,
    VKD3DSIH_ATOMIC_UMIN,
    VKD3DSIH_ATOMIC_XOR,
    VKD3DSIH_BEM,
    VKD3DSIH_BFI,
    VKD3DSIH_BFREV,
    VKD3DSIH_BREAK,
    VKD3DSIH_BREAKC,
    VKD3DSIH_BREAKP,
    VKD3DSIH_BUFINFO,
    VKD3DSIH_CALL,
    VKD3DSIH_CALLNZ,
    VKD3DSIH_CASE,
    VKD3DSIH_CMP,
    VKD3DSIH_CND,
    VKD3DSIH_CONTINUE,
    VKD3DSIH_CONTINUEP,
    VKD3DSIH_COUNTBITS,
    VKD3DSIH_CRS,
    VKD3DSIH_CUT,
    VKD3DSIH_CUT_STREAM,
    VKD3DSIH_DCL,
    VKD3DSIH_DCL_CONSTANT_BUFFER,
    VKD3DSIH_DCL_FUNCTION_BODY,
    VKD3DSIH_DCL_FUNCTION_TABLE,
    VKD3DSIH_DCL_GLOBAL_FLAGS,
    VKD3DSIH_DCL_GS_INSTANCES,
    VKD3DSIH_DCL_HS_FORK_PHASE_INSTANCE_COUNT,
    VKD3DSIH_DCL_HS_JOIN_PHASE_INSTANCE_COUNT,
    VKD3DSIH_DCL_HS_MAX_TESSFACTOR,
    VKD3DSIH_DCL_IMMEDIATE_CONSTANT_BUFFER,
    VKD3DSIH_DCL_INDEX_RANGE,
    VKD3DSIH_DCL_INDEXABLE_TEMP,
    VKD3DSIH_DCL_INPUT,
    VKD3DSIH_DCL_INPUT_CONTROL_POINT_COUNT,
    VKD3DSIH_DCL_INPUT_PRIMITIVE,
    VKD3DSIH_DCL_INPUT_PS,
    VKD3DSIH_DCL_INPUT_PS_SGV,
    VKD3DSIH_DCL_INPUT_PS_SIV,
    VKD3DSIH_DCL_INPUT_SGV,
    VKD3DSIH_DCL_INPUT_SIV,
    VKD3DSIH_DCL_INTERFACE,
    VKD3DSIH_DCL_OUTPUT,
    VKD3DSIH_DCL_OUTPUT_CONTROL_POINT_COUNT,
    VKD3DSIH_DCL_OUTPUT_SIV,
    VKD3DSIH_DCL_OUTPUT_TOPOLOGY,
    VKD3DSIH_DCL_RESOURCE_RAW,
    VKD3DSIH_DCL_RESOURCE_STRUCTURED,
    VKD3DSIH_DCL_SAMPLER,
    VKD3DSIH_DCL_STREAM,
    VKD3DSIH_DCL_TEMPS,
    VKD3DSIH_DCL_TESSELLATOR_DOMAIN,
    VKD3DSIH_DCL_TESSELLATOR_OUTPUT_PRIMITIVE,
    VKD3DSIH_DCL_TESSELLATOR_PARTITIONING,
    VKD3DSIH_DCL_TGSM_RAW,
    VKD3DSIH_DCL_TGSM_STRUCTURED,
    VKD3DSIH_DCL_THREAD_GROUP,
    VKD3DSIH_DCL_UAV_RAW,
    VKD3DSIH_DCL_UAV_STRUCTURED,
    VKD3DSIH_DCL_UAV_TYPED,
    VKD3DSIH_DCL_VERTICES_OUT,
    VKD3DSIH_DEF,
    VKD3DSIH_DEFAULT,
    VKD3DSIH_DEFB,
    VKD3DSIH_DEFI,
    VKD3DSIH_DIV,
    VKD3DSIH_DP2,
    VKD3DSIH_DP2ADD,
    VKD3DSIH_DP3,
    VKD3DSIH_DP4,
    VKD3DSIH_DST,
    VKD3DSIH_DSX,
    VKD3DSIH_DSX_COARSE,
    VKD3DSIH_DSX_FINE,
    VKD3DSIH_DSY,
    VKD3DSIH_DSY_COARSE,
    VKD3DSIH_DSY_FINE,
    VKD3DSIH_ELSE,
    VKD3DSIH_EMIT,
    VKD3DSIH_EMIT_STREAM,
    VKD3DSIH_ENDIF,
    VKD3DSIH_ENDLOOP,
    VKD3DSIH_ENDREP,
    VKD3DSIH_ENDSWITCH,
    VKD3DSIH_EQ,
    VKD3DSIH_EVAL_CENTROID,
    VKD3DSIH_EVAL_SAMPLE_INDEX,
    VKD3DSIH_EXP,
    VKD3DSIH_EXPP,
    VKD3DSIH_F16TOF32,
    VKD3DSIH_F32TOF16,
    VKD3DSIH_FCALL,
    VKD3DSIH_FIRSTBIT_HI,
    VKD3DSIH_FIRSTBIT_LO,
    VKD3DSIH_FIRSTBIT_SHI,
    VKD3DSIH_FRC,
    VKD3DSIH_FTOI,
    VKD3DSIH_FTOU,
    VKD3DSIH_GATHER4,
    VKD3DSIH_GATHER4_C,
    VKD3DSIH_GATHER4_PO,
    VKD3DSIH_GATHER4_PO_C,
    VKD3DSIH_GE,
    VKD3DSIH_HS_CONTROL_POINT_PHASE,
    VKD3DSIH_HS_DECLS,
    VKD3DSIH_HS_FORK_PHASE,
    VKD3DSIH_HS_JOIN_PHASE,
    VKD3DSIH_IADD,
    VKD3DSIH_IBFE,
    VKD3DSIH_IEQ,
    VKD3DSIH_IF,
    VKD3DSIH_IFC,
    VKD3DSIH_IGE,
    VKD3DSIH_ILT,
    VKD3DSIH_IMAD,
    VKD3DSIH_IMAX,
    VKD3DSIH_IMIN,
    VKD3DSIH_IMM_ATOMIC_ALLOC,
    VKD3DSIH_IMM_ATOMIC_AND,
    VKD3DSIH_IMM_ATOMIC_CMP_EXCH,
    VKD3DSIH_IMM_ATOMIC_CONSUME,
    VKD3DSIH_IMM_ATOMIC_EXCH,
    VKD3DSIH_IMM_ATOMIC_IADD,
    VKD3DSIH_IMM_ATOMIC_IMAX,
    VKD3DSIH_IMM_ATOMIC_IMIN,
    VKD3DSIH_IMM_ATOMIC_OR,
    VKD3DSIH_IMM_ATOMIC_UMAX,
    VKD3DSIH_IMM_ATOMIC_UMIN,
    VKD3DSIH_IMM_ATOMIC_XOR,
    VKD3DSIH_IMUL,
    VKD3DSIH_INE,
    VKD3DSIH_INEG,
    VKD3DSIH_ISHL,
    VKD3DSIH_ISHR,
    VKD3DSIH_ITOF,
    VKD3DSIH_LABEL,
    VKD3DSIH_LD,
    VKD3DSIH_LD2DMS,
    VKD3DSIH_LD_RAW,
    VKD3DSIH_LD_STRUCTURED,
    VKD3DSIH_LD_UAV_TYPED,
    VKD3DSIH_LIT,
    VKD3DSIH_LOD,
    VKD3DSIH_LOG,
    VKD3DSIH_LOGP,
    VKD3DSIH_LOOP,
    VKD3DSIH_LRP,
    VKD3DSIH_LT,
    VKD3DSIH_M3x2,
    VKD3DSIH_M3x3,
    VKD3DSIH_M3x4,
    VKD3DSIH_M4x3,
    VKD3DSIH_M4x4,
    VKD3DSIH_MAD,
    VKD3DSIH_MAX,
    VKD3DSIH_MIN,
    VKD3DSIH_MOV,
    VKD3DSIH_MOVA,
    VKD3DSIH_MOVC,
    VKD3DSIH_MUL,
    VKD3DSIH_NE,
    VKD3DSIH_NOP,
    VKD3DSIH_NOT,
    VKD3DSIH_NRM,
    VKD3DSIH_OR,
    VKD3DSIH_PHASE,
    VKD3DSIH_POW,
    VKD3DSIH_RCP,
    VKD3DSIH_REP,
    VKD3DSIH_RESINFO,
    VKD3DSIH_RET,
    VKD3DSIH_RETP,
    VKD3DSIH_ROUND_NE,
    VKD3DSIH_ROUND_NI,
    VKD3DSIH_ROUND_PI,
    VKD3DSIH_ROUND_Z,
    VKD3DSIH_RSQ,
    VKD3DSIH_SAMPLE,
    VKD3DSIH_SAMPLE_B,
    VKD3DSIH_SAMPLE_C,
    VKD3DSIH_SAMPLE_C_LZ,
    VKD3DSIH_SAMPLE_GRAD,
    VKD3DSIH_SAMPLE_INFO,
    VKD3DSIH_SAMPLE_LOD,
    VKD3DSIH_SAMPLE_POS,
    VKD3DSIH_SETP,
    VKD3DSIH_SGE,
    VKD3DSIH_SGN,
    VKD3DSIH_SINCOS,
    VKD3DSIH_SLT,
    VKD3DSIH_SQRT,
    VKD3DSIH_STORE_RAW,
    VKD3DSIH_STORE_STRUCTURED,
    VKD3DSIH_STORE_UAV_TYPED,
    VKD3DSIH_SUB,
    VKD3DSIH_SWAPC,
    VKD3DSIH_SWITCH,
    VKD3DSIH_SYNC,
    VKD3DSIH_TEX,
    VKD3DSIH_TEXBEM,
    VKD3DSIH_TEXBEML,
    VKD3DSIH_TEXCOORD,
    VKD3DSIH_TEXDEPTH,
    VKD3DSIH_TEXDP3,
    VKD3DSIH_TEXDP3TEX,
    VKD3DSIH_TEXKILL,
    VKD3DSIH_TEXLDD,
    VKD3DSIH_TEXLDL,
    VKD3DSIH_TEXM3x2DEPTH,
    VKD3DSIH_TEXM3x2PAD,
    VKD3DSIH_TEXM3x2TEX,
    VKD3DSIH_TEXM3x3,
    VKD3DSIH_TEXM3x3DIFF,
    VKD3DSIH_TEXM3x3PAD,
    VKD3DSIH_TEXM3x3SPEC,
    VKD3DSIH_TEXM3x3TEX,
    VKD3DSIH_TEXM3x3VSPEC,
    VKD3DSIH_TEXREG2AR,
    VKD3DSIH_TEXREG2GB,
    VKD3DSIH_TEXREG2RGB,
    VKD3DSIH_UBFE,
    VKD3DSIH_UDIV,
    VKD3DSIH_UGE,
    VKD3DSIH_ULT,
    VKD3DSIH_UMAX,
    VKD3DSIH_UMIN,
    VKD3DSIH_UMUL,
    VKD3DSIH_USHR,
    VKD3DSIH_UTOF,
    VKD3DSIH_XOR,

    VKD3DSIH_INVALID,
};

enum vkd3d_shader_register_type
{
    VKD3DSPR_TEMP = 0,
    VKD3DSPR_INPUT = 1,
    VKD3DSPR_CONST = 2,
    VKD3DSPR_ADDR = 3,
    VKD3DSPR_TEXTURE = 3,
    VKD3DSPR_RASTOUT = 4,
    VKD3DSPR_ATTROUT = 5,
    VKD3DSPR_TEXCRDOUT = 6,
    VKD3DSPR_OUTPUT = 6,
    VKD3DSPR_CONSTINT = 7,
    VKD3DSPR_COLOROUT = 8,
    VKD3DSPR_DEPTHOUT = 9,
    VKD3DSPR_SAMPLER = 10,
    VKD3DSPR_CONST2 = 11,
    VKD3DSPR_CONST3 = 12,
    VKD3DSPR_CONST4 = 13,
    VKD3DSPR_CONSTBOOL = 14,
    VKD3DSPR_LOOP = 15,
    VKD3DSPR_TEMPFLOAT16 = 16,
    VKD3DSPR_MISCTYPE = 17,
    VKD3DSPR_LABEL = 18,
    VKD3DSPR_PREDICATE = 19,
    VKD3DSPR_IMMCONST,
    VKD3DSPR_CONSTBUFFER,
    VKD3DSPR_IMMCONSTBUFFER,
    VKD3DSPR_PRIMID,
    VKD3DSPR_NULL,
    VKD3DSPR_RESOURCE,
    VKD3DSPR_UAV,
    VKD3DSPR_OUTPOINTID,
    VKD3DSPR_FORKINSTID,
    VKD3DSPR_JOININSTID,
    VKD3DSPR_INCONTROLPOINT,
    VKD3DSPR_OUTCONTROLPOINT,
    VKD3DSPR_PATCHCONST,
    VKD3DSPR_TESSCOORD,
    VKD3DSPR_GROUPSHAREDMEM,
    VKD3DSPR_THREADID,
    VKD3DSPR_THREADGROUPID,
    VKD3DSPR_LOCALTHREADID,
    VKD3DSPR_LOCALTHREADINDEX,
    VKD3DSPR_IDXTEMP,
    VKD3DSPR_STREAM,
    VKD3DSPR_FUNCTIONBODY,
    VKD3DSPR_FUNCTIONPOINTER,
    VKD3DSPR_COVERAGE,
    VKD3DSPR_SAMPLEMASK,
    VKD3DSPR_GSINSTID,
    VKD3DSPR_DEPTHOUTGE,
    VKD3DSPR_DEPTHOUTLE,
    VKD3DSPR_RASTERIZER,

    VKD3DSPR_INVALID = ~0u,
};

enum vkd3d_shader_resource_type
{
    VKD3D_SHADER_RESOURCE_NONE,
    VKD3D_SHADER_RESOURCE_BUFFER,
    VKD3D_SHADER_RESOURCE_TEXTURE_1D,
    VKD3D_SHADER_RESOURCE_TEXTURE_2D,
    VKD3D_SHADER_RESOURCE_TEXTURE_2DMS,
    VKD3D_SHADER_RESOURCE_TEXTURE_3D,
    VKD3D_SHADER_RESOURCE_TEXTURE_CUBE,
    VKD3D_SHADER_RESOURCE_TEXTURE_1DARRAY,
    VKD3D_SHADER_RESOURCE_TEXTURE_2DARRAY,
    VKD3D_SHADER_RESOURCE_TEXTURE_2DMSARRAY,
    VKD3D_SHADER_RESOURCE_TEXTURE_CUBEARRAY,
};

enum vkd3d_data_type
{
    VKD3D_DATA_FLOAT,
    VKD3D_DATA_INT,
    VKD3D_DATA_RESOURCE,
    VKD3D_DATA_SAMPLER,
    VKD3D_DATA_UAV,
    VKD3D_DATA_UINT,
    VKD3D_DATA_UNORM,
    VKD3D_DATA_SNORM,
    VKD3D_DATA_OPAQUE,
};

enum vkd3d_immconst_type
{
    VKD3D_IMMCONST_SCALAR,
    VKD3D_IMMCONST_VEC4,
};

enum vkd3d_shader_src_modifier
{
    VKD3DSPSM_NONE = 0,
    VKD3DSPSM_NEG = 1,
    VKD3DSPSM_BIAS = 2,
    VKD3DSPSM_BIASNEG = 3,
    VKD3DSPSM_SIGN = 4,
    VKD3DSPSM_SIGNNEG = 5,
    VKD3DSPSM_COMP = 6,
    VKD3DSPSM_X2 = 7,
    VKD3DSPSM_X2NEG = 8,
    VKD3DSPSM_DZ = 9,
    VKD3DSPSM_DW = 10,
    VKD3DSPSM_ABS = 11,
    VKD3DSPSM_ABSNEG = 12,
    VKD3DSPSM_NOT = 13,
};

#define VKD3DSP_WRITEMASK_0   0x1u /* .x r */
#define VKD3DSP_WRITEMASK_1   0x2u /* .y g */
#define VKD3DSP_WRITEMASK_2   0x4u /* .z b */
#define VKD3DSP_WRITEMASK_3   0x8u /* .w a */
#define VKD3DSP_WRITEMASK_ALL 0xfu /* all */

enum vkd3d_shader_dst_modifier
{
    VKD3DSPDM_NONE = 0,
    VKD3DSPDM_SATURATE = 1,
    VKD3DSPDM_PARTIALPRECISION = 2,
    VKD3DSPDM_MSAMPCENTROID = 4,
};

enum vkd3d_shader_interpolation_mode
{
    VKD3DSIM_NONE = 0,
    VKD3DSIM_CONSTANT = 1,
    VKD3DSIM_LINEAR = 2,
    VKD3DSIM_LINEAR_CENTROID = 3,
    VKD3DSIM_LINEAR_NOPERSPECTIVE = 4,
    VKD3DSIM_LINEAR_NOPERSPECTIVE_CENTROID = 5,
    VKD3DSIM_LINEAR_SAMPLE = 6,
    VKD3DSIM_LINEAR_NOPERSPECTIVE_SAMPLE = 7,
};

enum vkd3d_shader_global_flags
{
    VKD3DSGF_REFACTORING_ALLOWED               = 0x01,
    VKD3DSGF_FORCE_EARLY_DEPTH_STENCIL         = 0x04,
    VKD3DSGF_ENABLE_RAW_AND_STRUCTURED_BUFFERS = 0x08,
    VKD3DSGF_ENABLE_MINIMUM_PRECISION          = 0x20
};

enum vkd3d_shader_sync_flags
{
    VKD3DSSF_THREAD_GROUP        = 0x1,
    VKD3DSSF_GROUP_SHARED_MEMORY = 0x2,
};

enum vkd3d_shader_uav_flags
{
    VKD3DSUF_GLOBALLY_COHERENT = 0x2,
    VKD3DSUF_ORDER_PRESERVING_COUNTER = 0x100,
};

enum vkd3d_tessellator_domain
{
    VKD3D_TESSELLATOR_DOMAIN_LINE      = 1,
    VKD3D_TESSELLATOR_DOMAIN_TRIANGLE  = 2,
    VKD3D_TESSELLATOR_DOMAIN_QUAD      = 3,
};

#define VKD3DSI_NONE                    0x0
#define VKD3DSI_TEXLD_PROJECT           0x1
#define VKD3DSI_INDEXED_DYNAMIC         0x4
#define VKD3DSI_RESINFO_RCP_FLOAT       0x1
#define VKD3DSI_RESINFO_UINT            0x2
#define VKD3DSI_SAMPLE_INFO_UINT        0x1
#define VKD3DSI_SAMPLER_COMPARISON_MODE 0x1

#define VKD3DSI_PRECISE_X         0x100
#define VKD3DSI_PRECISE_Y         0x200
#define VKD3DSI_PRECISE_Z         0x400
#define VKD3DSI_PRECISE_W         0x800
#define VKD3DSI_PRECISE_XYZW      (VKD3DSI_PRECISE_X | VKD3DSI_PRECISE_Y \
                                  | VKD3DSI_PRECISE_Z | VKD3DSI_PRECISE_W)
#define VKD3DSI_PRECISE_SHIFT     8

enum vkd3d_shader_rel_op
{
    VKD3D_SHADER_REL_OP_GT = 1,
    VKD3D_SHADER_REL_OP_EQ = 2,
    VKD3D_SHADER_REL_OP_GE = 3,
    VKD3D_SHADER_REL_OP_LT = 4,
    VKD3D_SHADER_REL_OP_NE = 5,
    VKD3D_SHADER_REL_OP_LE = 6,
};

enum vkd3d_shader_conditional_op
{
    VKD3D_SHADER_CONDITIONAL_OP_NZ = 0,
    VKD3D_SHADER_CONDITIONAL_OP_Z  = 1
};

#define VKD3D_SM1_VS  0xfffeu
#define VKD3D_SM1_PS  0xffffu
#define VKD3D_SM4_PS  0x0000u
#define VKD3D_SM4_VS  0x0001u
#define VKD3D_SM4_GS  0x0002u
#define VKD3D_SM5_HS  0x0003u
#define VKD3D_SM5_DS  0x0004u
#define VKD3D_SM5_CS  0x0005u

/* Shader version tokens, and shader end tokens */
#define VKD3DPS_VERSION(major, minor) ((VKD3D_SM1_PS << 16) | ((major) << 8) | (minor))
#define VKD3DVS_VERSION(major, minor) ((VKD3D_SM1_VS << 16) | ((major) << 8) | (minor))

#define MAX_IMMEDIATE_CONSTANT_BUFFER_SIZE 4096
#define MAX_REG_OUTPUT 32

enum vkd3d_shader_type
{
    VKD3D_SHADER_TYPE_PIXEL,
    VKD3D_SHADER_TYPE_VERTEX,
    VKD3D_SHADER_TYPE_GEOMETRY,
    VKD3D_SHADER_TYPE_HULL,
    VKD3D_SHADER_TYPE_DOMAIN,
    VKD3D_SHADER_TYPE_GRAPHICS_COUNT,

    VKD3D_SHADER_TYPE_COMPUTE = VKD3D_SHADER_TYPE_GRAPHICS_COUNT,
    VKD3D_SHADER_TYPE_COUNT,
};

struct vkd3d_shader_version
{
    enum vkd3d_shader_type type;
    uint8_t major;
    uint8_t minor;
};

struct vkd3d_shader_immediate_constant_buffer
{
    unsigned int vec4_count;
    DWORD data[MAX_IMMEDIATE_CONSTANT_BUFFER_SIZE];
};

struct vkd3d_shader_indexable_temp
{
    struct list entry;
    unsigned int register_idx;
    unsigned int register_size;
    unsigned int component_count;
};

struct vkd3d_shader_register_index
{
    const struct vkd3d_shader_src_param *rel_addr;
    unsigned int offset;
};

struct vkd3d_shader_register
{
    enum vkd3d_shader_register_type type;
    enum vkd3d_data_type data_type;
    struct vkd3d_shader_register_index idx[3];
    enum vkd3d_immconst_type immconst_type;
    union
    {
        DWORD immconst_uint[VKD3D_VEC4_SIZE];
        float immconst_float[VKD3D_VEC4_SIZE];
        unsigned fp_body_idx;
    } u;
};

struct vkd3d_shader_dst_param
{
    struct vkd3d_shader_register reg;
    DWORD write_mask;
    DWORD modifiers;
    DWORD shift;
};

struct vkd3d_shader_src_param
{
    struct vkd3d_shader_register reg;
    DWORD swizzle;
    enum vkd3d_shader_src_modifier modifiers;
};

struct vkd3d_shader_index_range
{
    struct vkd3d_shader_dst_param dst;
    unsigned int register_count;
};

enum vkd3d_decl_usage
{
    VKD3D_DECL_USAGE_POSITION             = 0,
    VKD3D_DECL_USAGE_BLEND_WEIGHT         = 1,
    VKD3D_DECL_USAGE_BLEND_INDICES        = 2,
    VKD3D_DECL_USAGE_NORMAL               = 3,
    VKD3D_DECL_USAGE_PSIZE                = 4,
    VKD3D_DECL_USAGE_TEXCOORD             = 5,
    VKD3D_DECL_USAGE_TANGENT              = 6,
    VKD3D_DECL_USAGE_BINORMAL             = 7,
    VKD3D_DECL_USAGE_TESS_FACTOR          = 8,
    VKD3D_DECL_USAGE_POSITIONT            = 9,
    VKD3D_DECL_USAGE_COLOR                = 10,
    VKD3D_DECL_USAGE_FOG                  = 11,
    VKD3D_DECL_USAGE_DEPTH                = 12,
    VKD3D_DECL_USAGE_SAMPLE               = 13
};

struct vkd3d_shader_semantic
{
    enum vkd3d_decl_usage usage;
    unsigned int usage_idx;
    enum vkd3d_shader_resource_type resource_type;
    enum vkd3d_data_type resource_data_type;
    struct vkd3d_shader_dst_param reg;
    unsigned int register_space;
};

enum vkd3d_shader_input_sysval_semantic
{
    VKD3D_SIV_NONE                         = 0,
    VKD3D_SIV_POSITION                     = 1,
    VKD3D_SIV_CLIP_DISTANCE                = 2,
    VKD3D_SIV_CULL_DISTANCE                = 3,
    VKD3D_SIV_RENDER_TARGET_ARRAY_INDEX    = 4,
    VKD3D_SIV_VIEWPORT_ARRAY_INDEX         = 5,
    VKD3D_SIV_VERTEX_ID                    = 6,
    VKD3D_SIV_PRIMITIVE_ID                 = 7,
    VKD3D_SIV_INSTANCE_ID                  = 8,
    VKD3D_SIV_IS_FRONT_FACE                = 9,
    VKD3D_SIV_SAMPLE_INDEX                 = 10,
    VKD3D_SIV_QUAD_U0_TESS_FACTOR          = 11,
    VKD3D_SIV_QUAD_V0_TESS_FACTOR          = 12,
    VKD3D_SIV_QUAD_U1_TESS_FACTOR          = 13,
    VKD3D_SIV_QUAD_V1_TESS_FACTOR          = 14,
    VKD3D_SIV_QUAD_U_INNER_TESS_FACTOR     = 15,
    VKD3D_SIV_QUAD_V_INNER_TESS_FACTOR     = 16,
    VKD3D_SIV_TRIANGLE_U_TESS_FACTOR       = 17,
    VKD3D_SIV_TRIANGLE_V_TESS_FACTOR       = 18,
    VKD3D_SIV_TRIANGLE_W_TESS_FACTOR       = 19,
    VKD3D_SIV_TRIANGLE_INNER_TESS_FACTOR   = 20,
    VKD3D_SIV_LINE_DETAIL_TESS_FACTOR      = 21,
    VKD3D_SIV_LINE_DENSITY_TESS_FACTOR     = 22,
};

struct vkd3d_shader_desc
{
    const DWORD *byte_code;
    size_t byte_code_size;
    struct vkd3d_shader_signature input_signature;
    struct vkd3d_shader_signature output_signature;
    struct vkd3d_shader_signature patch_constant_signature;
};

struct vkd3d_shader_register_semantic
{
    struct vkd3d_shader_dst_param reg;
    enum vkd3d_shader_input_sysval_semantic sysval_semantic;
};

struct vkd3d_shader_sampler
{
    struct vkd3d_shader_src_param src;
    unsigned int register_space;
};

struct vkd3d_shader_constant_buffer
{
    struct vkd3d_shader_src_param src;
    unsigned int size;
    unsigned int register_space;
};

struct vkd3d_shader_structured_resource
{
    struct vkd3d_shader_dst_param reg;
    unsigned int byte_stride;
    unsigned int register_space;
};

struct vkd3d_shader_raw_resource
{
    struct vkd3d_shader_dst_param dst;
    unsigned int register_space;
};

struct vkd3d_shader_tgsm
{
    unsigned int size;
    unsigned int stride;
};

struct vkd3d_shader_tgsm_raw
{
    struct vkd3d_shader_dst_param reg;
    unsigned int byte_count;
};

struct vkd3d_shader_tgsm_structured
{
    struct vkd3d_shader_dst_param reg;
    unsigned int byte_stride;
    unsigned int structure_count;
};

struct vkd3d_shader_thread_group_size
{
    unsigned int x, y, z;
};

struct vkd3d_shader_function_table_pointer
{
    unsigned int index;
    unsigned int array_size;
    unsigned int body_count;
    unsigned int table_count;
};

struct vkd3d_shader_texel_offset
{
    signed char u, v, w;
};

enum vkd3d_primitive_type
{
    VKD3D_PT_UNDEFINED                    = 0,
    VKD3D_PT_POINTLIST                    = 1,
    VKD3D_PT_LINELIST                     = 2,
    VKD3D_PT_LINESTRIP                    = 3,
    VKD3D_PT_TRIANGLELIST                 = 4,
    VKD3D_PT_TRIANGLESTRIP                = 5,
    VKD3D_PT_TRIANGLEFAN                  = 6,
    VKD3D_PT_LINELIST_ADJ                 = 10,
    VKD3D_PT_LINESTRIP_ADJ                = 11,
    VKD3D_PT_TRIANGLELIST_ADJ             = 12,
    VKD3D_PT_TRIANGLESTRIP_ADJ            = 13,
    VKD3D_PT_PATCH                        = 14,
};

struct vkd3d_shader_primitive_type
{
    enum vkd3d_primitive_type type;
    unsigned int patch_vertex_count;
};

struct vkd3d_shader_instruction
{
    const struct vkd3d_shader_context *ctx;
    enum VKD3D_SHADER_INSTRUCTION_HANDLER handler_idx;
    DWORD flags;
    unsigned int dst_count;
    unsigned int src_count;
    const struct vkd3d_shader_dst_param *dst;
    const struct vkd3d_shader_src_param *src;
    struct vkd3d_shader_texel_offset texel_offset;
    bool coissue;
    const struct vkd3d_shader_src_param *predicate;
    union
    {
        struct vkd3d_shader_semantic semantic;
        struct vkd3d_shader_register_semantic register_semantic;
        struct vkd3d_shader_primitive_type primitive_type;
        struct vkd3d_shader_dst_param dst;
        struct vkd3d_shader_constant_buffer cb;
        struct vkd3d_shader_sampler sampler;
        unsigned int count;
        unsigned int index;
        const struct vkd3d_shader_immediate_constant_buffer *icb;
        struct vkd3d_shader_raw_resource raw_resource;
        struct vkd3d_shader_structured_resource structured_resource;
        struct vkd3d_shader_tgsm_raw tgsm_raw;
        struct vkd3d_shader_tgsm_structured tgsm_structured;
        struct vkd3d_shader_thread_group_size thread_group_size;
        enum vkd3d_tessellator_domain tessellator_domain;
        enum vkd3d_tessellator_output_primitive tessellator_output_primitive;
        enum vkd3d_tessellator_partitioning tessellator_partitioning;
        float max_tessellation_factor;
        struct vkd3d_shader_index_range index_range;
        struct vkd3d_shader_indexable_temp indexable_temp;
        struct vkd3d_shader_function_table_pointer fp;
    } declaration;
};

static inline bool vkd3d_shader_instruction_has_texel_offset(const struct vkd3d_shader_instruction *ins)
{
    return ins->texel_offset.u || ins->texel_offset.v || ins->texel_offset.w;
}

static inline bool vkd3d_shader_register_is_input(const struct vkd3d_shader_register *reg)
{
    return reg->type == VKD3DSPR_INPUT || reg->type == VKD3DSPR_INCONTROLPOINT || reg->type == VKD3DSPR_OUTCONTROLPOINT;
}

static inline bool vkd3d_shader_register_is_output(const struct vkd3d_shader_register *reg)
{
    return reg->type == VKD3DSPR_OUTPUT || reg->type == VKD3DSPR_COLOROUT;
}

void vkd3d_shader_trace(void *data) DECLSPEC_HIDDEN;

const char *shader_get_type_prefix(enum vkd3d_shader_type type) DECLSPEC_HIDDEN;

void *shader_sm4_init(const DWORD *byte_code, size_t byte_code_size,
        const struct vkd3d_shader_signature *output_signature) DECLSPEC_HIDDEN;
void shader_sm4_free(void *data) DECLSPEC_HIDDEN;
void shader_sm4_read_header(void *data, const DWORD **ptr,
        struct vkd3d_shader_version *shader_version) DECLSPEC_HIDDEN;
void shader_sm4_read_instruction(void *data, const DWORD **ptr,
        struct vkd3d_shader_instruction *ins) DECLSPEC_HIDDEN;
bool shader_sm4_is_end(void *data, const DWORD **ptr) DECLSPEC_HIDDEN;

int shader_extract_from_dxbc(const void *dxbc, size_t dxbc_length,
        struct vkd3d_shader_desc *desc) DECLSPEC_HIDDEN;
void free_shader_desc(struct vkd3d_shader_desc *desc) DECLSPEC_HIDDEN;

int shader_parse_input_signature(const void *dxbc, size_t dxbc_length,
        struct vkd3d_shader_signature *signature) DECLSPEC_HIDDEN;

struct vkd3d_dxbc_compiler;

struct vkd3d_dxbc_compiler *vkd3d_dxbc_compiler_create(const struct vkd3d_shader_version *shader_version,
        const struct vkd3d_shader_desc *shader_desc, uint32_t compiler_options,
        const struct vkd3d_shader_interface_info *shader_interface_info,
        const struct vkd3d_shader_compile_arguments *compile_args,
        const struct vkd3d_shader_scan_info *scan_info) DECLSPEC_HIDDEN;
int vkd3d_dxbc_compiler_handle_instruction(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction) DECLSPEC_HIDDEN;
int vkd3d_dxbc_compiler_generate_spirv(struct vkd3d_dxbc_compiler *compiler,
        struct vkd3d_shader_code *spirv) DECLSPEC_HIDDEN;
void vkd3d_dxbc_compiler_destroy(struct vkd3d_dxbc_compiler *compiler) DECLSPEC_HIDDEN;

void vkd3d_compute_dxbc_checksum(const void *dxbc, size_t size, uint32_t checksum[4]) DECLSPEC_HIDDEN;

static inline enum vkd3d_component_type vkd3d_component_type_from_data_type(
        enum vkd3d_data_type data_type)
{
    switch (data_type)
    {
        case VKD3D_DATA_FLOAT:
            return VKD3D_TYPE_FLOAT;
        case VKD3D_DATA_UINT:
            return VKD3D_TYPE_UINT;
        case VKD3D_DATA_INT:
            return VKD3D_TYPE_INT;
        default:
            FIXME("Unhandled data type %#x.\n", data_type);
            return VKD3D_TYPE_UINT;
    }
}

static inline enum vkd3d_data_type vkd3d_data_type_from_component_type(
        enum vkd3d_component_type component_type)
{
    switch (component_type)
    {
        case VKD3D_TYPE_FLOAT:
            return VKD3D_DATA_FLOAT;
        case VKD3D_TYPE_UINT:
            return VKD3D_DATA_UINT;
        case VKD3D_TYPE_INT:
            return VKD3D_DATA_INT;
        default:
            FIXME("Unhandled component type %#x.\n", component_type);
            return VKD3D_DATA_FLOAT;
    }
}

static inline unsigned int vkd3d_write_mask_get_component_idx(DWORD write_mask)
{
    unsigned int i;

    assert(write_mask);
    for (i = 0; i < VKD3D_VEC4_SIZE; ++i)
    {
        if (write_mask & (VKD3DSP_WRITEMASK_0 << i))
            return i;
    }

    FIXME("Invalid write mask %#x.\n", write_mask);
    return 0;
}

static inline unsigned int vkd3d_write_mask_component_count(DWORD write_mask)
{
    unsigned int count = vkd3d_popcount(write_mask & VKD3DSP_WRITEMASK_ALL);
    assert(1 <= count && count <= VKD3D_VEC4_SIZE);
    return count;
}

static inline unsigned int vkd3d_write_mask_from_component_count(unsigned int component_count)
{
    assert(component_count <= VKD3D_VEC4_SIZE);
    return (VKD3DSP_WRITEMASK_0 << component_count) - 1;
}

static inline unsigned int vkd3d_swizzle_get_component(DWORD swizzle,
        unsigned int idx)
{
    return (swizzle >> VKD3D_SWIZZLE_SHIFT(idx)) & VKD3D_SWIZZLE_MASK;
}

static inline unsigned int vkd3d_compact_swizzle(unsigned int swizzle, unsigned int write_mask)
{
    unsigned int i, compacted_swizzle = 0;

    for (i = 0; i < VKD3D_VEC4_SIZE; ++i)
    {
        if (write_mask & (VKD3DSP_WRITEMASK_0 << i))
        {
            compacted_swizzle <<= VKD3D_SWIZZLE_SHIFT(1);
            compacted_swizzle |= vkd3d_swizzle_get_component(swizzle, i);
        }
    }

    return compacted_swizzle;
}

#define VKD3D_DXBC_MAX_SOURCE_COUNT 6
#define VKD3D_DXBC_HEADER_SIZE (8 * sizeof(uint32_t))

#endif  /* __VKD3D_SHADER_PRIVATE_H */
