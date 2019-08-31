/*
 * Copyright 2002-2003 Jason Edmeades
 * Copyright 2002-2003 Raphael Junqueira
 * Copyright 2004 Christian Costa
 * Copyright 2005 Oliver Stieber
 * Copyright 2006 Ivan Gyurdiev
 * Copyright 2007-2008, 2013 Stefan Dösinger for CodeWeavers
 * Copyright 2009-2011 Henri Verbeet for CodeWeavers
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

#include <stdio.h>

struct vkd3d_string_buffer
{
    struct list entry;
    char *buffer;
    unsigned int buffer_size;
    unsigned int content_size;
};

static const char * const shader_opcode_names[] =
{
    /* VKD3DSIH_ABS                              */ "abs",
    /* VKD3DSIH_ADD                              */ "add",
    /* VKD3DSIH_AND                              */ "and",
    /* VKD3DSIH_ATOMIC_AND                       */ "atomic_and",
    /* VKD3DSIH_ATOMIC_CMP_STORE                 */ "atomic_cmp_store",
    /* VKD3DSIH_ATOMIC_IADD                      */ "atomic_iadd",
    /* VKD3DSIH_ATOMIC_IMAX                      */ "atomic_imax",
    /* VKD3DSIH_ATOMIC_IMIN                      */ "atomic_imin",
    /* VKD3DSIH_ATOMIC_OR                        */ "atomic_or",
    /* VKD3DSIH_ATOMIC_UMAX                      */ "atomic_umax",
    /* VKD3DSIH_ATOMIC_UMIN                      */ "atomic_umin",
    /* VKD3DSIH_ATOMIC_XOR                       */ "atomic_xor",
    /* VKD3DSIH_BEM                              */ "bem",
    /* VKD3DSIH_BFI                              */ "bfi",
    /* VKD3DSIH_BFREV                            */ "bfrev",
    /* VKD3DSIH_BREAK                            */ "break",
    /* VKD3DSIH_BREAKC                           */ "breakc",
    /* VKD3DSIH_BREAKP                           */ "breakp",
    /* VKD3DSIH_BUFINFO                          */ "bufinfo",
    /* VKD3DSIH_CALL                             */ "call",
    /* VKD3DSIH_CALLNZ                           */ "callnz",
    /* VKD3DSIH_CASE                             */ "case",
    /* VKD3DSIH_CMP                              */ "cmp",
    /* VKD3DSIH_CND                              */ "cnd",
    /* VKD3DSIH_CONTINUE                         */ "continue",
    /* VKD3DSIH_CONTINUEP                        */ "continuec",
    /* VKD3DSIH_COUNTBITS                        */ "countbits",
    /* VKD3DSIH_CRS                              */ "crs",
    /* VKD3DSIH_CUT                              */ "cut",
    /* VKD3DSIH_CUT_STREAM                       */ "cut_stream",
    /* VKD3DSIH_DCL                              */ "dcl",
    /* VKD3DSIH_DCL_CONSTANT_BUFFER              */ "dcl_constantBuffer",
    /* VKD3DSIH_DCL_FUNCTION_BODY                */ "dcl_function_body",
    /* VKD3DSIH_DCL_FUNCTION_TABLE               */ "dcl_function_table",
    /* VKD3DSIH_DCL_GLOBAL_FLAGS                 */ "dcl_globalFlags",
    /* VKD3DSIH_DCL_GS_INSTANCES                 */ "dcl_gs_instances",
    /* VKD3DSIH_DCL_HS_FORK_PHASE_INSTANCE_COUNT */ "dcl_hs_fork_phase_instance_count",
    /* VKD3DSIH_DCL_HS_JOIN_PHASE_INSTANCE_COUNT */ "dcl_hs_join_phase_instance_count",
    /* VKD3DSIH_DCL_HS_MAX_TESSFACTOR            */ "dcl_hs_max_tessfactor",
    /* VKD3DSIH_DCL_IMMEDIATE_CONSTANT_BUFFER    */ "dcl_immediateConstantBuffer",
    /* VKD3DSIH_DCL_INDEX_RANGE                  */ "dcl_index_range",
    /* VKD3DSIH_DCL_INDEXABLE_TEMP               */ "dcl_indexableTemp",
    /* VKD3DSIH_DCL_INPUT                        */ "dcl_input",
    /* VKD3DSIH_DCL_INPUT_CONTROL_POINT_COUNT    */ "dcl_input_control_point_count",
    /* VKD3DSIH_DCL_INPUT_PRIMITIVE              */ "dcl_inputPrimitive",
    /* VKD3DSIH_DCL_INPUT_PS                     */ "dcl_input_ps",
    /* VKD3DSIH_DCL_INPUT_PS_SGV                 */ "dcl_input_ps_sgv",
    /* VKD3DSIH_DCL_INPUT_PS_SIV                 */ "dcl_input_ps_siv",
    /* VKD3DSIH_DCL_INPUT_SGV                    */ "dcl_input_sgv",
    /* VKD3DSIH_DCL_INPUT_SIV                    */ "dcl_input_siv",
    /* VKD3DSIH_DCL_INTERFACE                    */ "dcl_interface",
    /* VKD3DSIH_DCL_OUTPUT                       */ "dcl_output",
    /* VKD3DSIH_DCL_OUTPUT_CONTROL_POINT_COUNT   */ "dcl_output_control_point_count",
    /* VKD3DSIH_DCL_OUTPUT_SIV                   */ "dcl_output_siv",
    /* VKD3DSIH_DCL_OUTPUT_TOPOLOGY              */ "dcl_outputTopology",
    /* VKD3DSIH_DCL_RESOURCE_RAW                 */ "dcl_resource_raw",
    /* VKD3DSIH_DCL_RESOURCE_STRUCTURED          */ "dcl_resource_structured",
    /* VKD3DSIH_DCL_SAMPLER                      */ "dcl_sampler",
    /* VKD3DSIH_DCL_STREAM                       */ "dcl_stream",
    /* VKD3DSIH_DCL_TEMPS                        */ "dcl_temps",
    /* VKD3DSIH_DCL_TESSELLATOR_DOMAIN           */ "dcl_tessellator_domain",
    /* VKD3DSIH_DCL_TESSELLATOR_OUTPUT_PRIMITIVE */ "dcl_tessellator_output_primitive",
    /* VKD3DSIH_DCL_TESSELLATOR_PARTITIONING     */ "dcl_tessellator_partitioning",
    /* VKD3DSIH_DCL_TGSM_RAW                     */ "dcl_tgsm_raw",
    /* VKD3DSIH_DCL_TGSM_STRUCTURED              */ "dcl_tgsm_structured",
    /* VKD3DSIH_DCL_THREAD_GROUP                 */ "dcl_thread_group",
    /* VKD3DSIH_DCL_UAV_RAW                      */ "dcl_uav_raw",
    /* VKD3DSIH_DCL_UAV_STRUCTURED               */ "dcl_uav_structured",
    /* VKD3DSIH_DCL_UAV_TYPED                    */ "dcl_uav_typed",
    /* VKD3DSIH_DCL_VERTICES_OUT                 */ "dcl_maxOutputVertexCount",
    /* VKD3DSIH_DEF                              */ "def",
    /* VKD3DSIH_DEFAULT                          */ "default",
    /* VKD3DSIH_DEFB                             */ "defb",
    /* VKD3DSIH_DEFI                             */ "defi",
    /* VKD3DSIH_DIV                              */ "div",
    /* VKD3DSIH_DP2                              */ "dp2",
    /* VKD3DSIH_DP2ADD                           */ "dp2add",
    /* VKD3DSIH_DP3                              */ "dp3",
    /* VKD3DSIH_DP4                              */ "dp4",
    /* VKD3DSIH_DST                              */ "dst",
    /* VKD3DSIH_DSX                              */ "dsx",
    /* VKD3DSIH_DSX_COARSE                       */ "deriv_rtx_coarse",
    /* VKD3DSIH_DSX_FINE                         */ "deriv_rtx_fine",
    /* VKD3DSIH_DSY                              */ "dsy",
    /* VKD3DSIH_DSY_COARSE                       */ "deriv_rty_coarse",
    /* VKD3DSIH_DSY_FINE                         */ "deriv_rty_fine",
    /* VKD3DSIH_ELSE                             */ "else",
    /* VKD3DSIH_EMIT                             */ "emit",
    /* VKD3DSIH_EMIT_STREAM                      */ "emit_stream",
    /* VKD3DSIH_ENDIF                            */ "endif",
    /* VKD3DSIH_ENDLOOP                          */ "endloop",
    /* VKD3DSIH_ENDREP                           */ "endrep",
    /* VKD3DSIH_ENDSWITCH                        */ "endswitch",
    /* VKD3DSIH_EQ                               */ "eq",
    /* VKD3DSIH_EVAL_CENTROID                    */ "eval_centroid",
    /* VKD3DSIH_EVAL_SAMPLE_INDEX                */ "eval_sample_index",
    /* VKD3DSIH_EXP                              */ "exp",
    /* VKD3DSIH_EXPP                             */ "expp",
    /* VKD3DSIH_F16TOF32                         */ "f16tof32",
    /* VKD3DSIH_F32TOF16                         */ "f32tof16",
    /* VKD3DSIH_FCALL                            */ "fcall",
    /* VKD3DSIH_FIRSTBIT_HI                      */ "firstbit_hi",
    /* VKD3DSIH_FIRSTBIT_LO                      */ "firstbit_lo",
    /* VKD3DSIH_FIRSTBIT_SHI                     */ "firstbit_shi",
    /* VKD3DSIH_FRC                              */ "frc",
    /* VKD3DSIH_FTOI                             */ "ftoi",
    /* VKD3DSIH_FTOU                             */ "ftou",
    /* VKD3DSIH_GATHER4                          */ "gather4",
    /* VKD3DSIH_GATHER4_C                        */ "gather4_c",
    /* VKD3DSIH_GATHER4_PO                       */ "gather4_po",
    /* VKD3DSIH_GATHER4_PO_C                     */ "gather4_po_c",
    /* VKD3DSIH_GE                               */ "ge",
    /* VKD3DSIH_HS_CONTROL_POINT_PHASE           */ "hs_control_point_phase",
    /* VKD3DSIH_HS_DECLS                         */ "hs_decls",
    /* VKD3DSIH_HS_FORK_PHASE                    */ "hs_fork_phase",
    /* VKD3DSIH_HS_JOIN_PHASE                    */ "hs_join_phase",
    /* VKD3DSIH_IADD                             */ "iadd",
    /* VKD3DSIH_IBFE                             */ "ibfe",
    /* VKD3DSIH_IEQ                              */ "ieq",
    /* VKD3DSIH_IF                               */ "if",
    /* VKD3DSIH_IFC                              */ "ifc",
    /* VKD3DSIH_IGE                              */ "ige",
    /* VKD3DSIH_ILT                              */ "ilt",
    /* VKD3DSIH_IMAD                             */ "imad",
    /* VKD3DSIH_IMAX                             */ "imax",
    /* VKD3DSIH_IMIN                             */ "imin",
    /* VKD3DSIH_IMM_ATOMIC_ALLOC                 */ "imm_atomic_alloc",
    /* VKD3DSIH_IMM_ATOMIC_AND                   */ "imm_atomic_and",
    /* VKD3DSIH_IMM_ATOMIC_CMP_EXCH              */ "imm_atomic_cmp_exch",
    /* VKD3DSIH_IMM_ATOMIC_CONSUME               */ "imm_atomic_consume",
    /* VKD3DSIH_IMM_ATOMIC_EXCH                  */ "imm_atomic_exch",
    /* VKD3DSIH_IMM_ATOMIC_IADD                  */ "imm_atomic_iadd",
    /* VKD3DSIH_IMM_ATOMIC_IMAX                  */ "imm_atomic_imax",
    /* VKD3DSIH_IMM_ATOMIC_IMIN                  */ "imm_atomic_imin",
    /* VKD3DSIH_IMM_ATOMIC_OR                    */ "imm_atomic_or",
    /* VKD3DSIH_IMM_ATOMIC_UMAX                  */ "imm_atomic_umax",
    /* VKD3DSIH_IMM_ATOMIC_UMIN                  */ "imm_atomic_umin",
    /* VKD3DSIH_IMM_ATOMIC_XOR                   */ "imm_atomic_xor",
    /* VKD3DSIH_IMUL                             */ "imul",
    /* VKD3DSIH_INE                              */ "ine",
    /* VKD3DSIH_INEG                             */ "ineg",
    /* VKD3DSIH_ISHL                             */ "ishl",
    /* VKD3DSIH_ISHR                             */ "ishr",
    /* VKD3DSIH_ITOF                             */ "itof",
    /* VKD3DSIH_LABEL                            */ "label",
    /* VKD3DSIH_LD                               */ "ld",
    /* VKD3DSIH_LD2DMS                           */ "ld2dms",
    /* VKD3DSIH_LD_RAW                           */ "ld_raw",
    /* VKD3DSIH_LD_STRUCTURED                    */ "ld_structured",
    /* VKD3DSIH_LD_UAV_TYPED                     */ "ld_uav_typed",
    /* VKD3DSIH_LIT                              */ "lit",
    /* VKD3DSIH_LOD                              */ "lod",
    /* VKD3DSIH_LOG                              */ "log",
    /* VKD3DSIH_LOGP                             */ "logp",
    /* VKD3DSIH_LOOP                             */ "loop",
    /* VKD3DSIH_LRP                              */ "lrp",
    /* VKD3DSIH_LT                               */ "lt",
    /* VKD3DSIH_M3x2                             */ "m3x2",
    /* VKD3DSIH_M3x3                             */ "m3x3",
    /* VKD3DSIH_M3x4                             */ "m3x4",
    /* VKD3DSIH_M4x3                             */ "m4x3",
    /* VKD3DSIH_M4x4                             */ "m4x4",
    /* VKD3DSIH_MAD                              */ "mad",
    /* VKD3DSIH_MAX                              */ "max",
    /* VKD3DSIH_MIN                              */ "min",
    /* VKD3DSIH_MOV                              */ "mov",
    /* VKD3DSIH_MOVA                             */ "mova",
    /* VKD3DSIH_MOVC                             */ "movc",
    /* VKD3DSIH_MUL                              */ "mul",
    /* VKD3DSIH_NE                               */ "ne",
    /* VKD3DSIH_NOP                              */ "nop",
    /* VKD3DSIH_NOT                              */ "not",
    /* VKD3DSIH_NRM                              */ "nrm",
    /* VKD3DSIH_OR                               */ "or",
    /* VKD3DSIH_PHASE                            */ "phase",
    /* VKD3DSIH_POW                              */ "pow",
    /* VKD3DSIH_RCP                              */ "rcp",
    /* VKD3DSIH_REP                              */ "rep",
    /* VKD3DSIH_RESINFO                          */ "resinfo",
    /* VKD3DSIH_RET                              */ "ret",
    /* VKD3DSIH_RETP                             */ "retp",
    /* VKD3DSIH_ROUND_NE                         */ "round_ne",
    /* VKD3DSIH_ROUND_NI                         */ "round_ni",
    /* VKD3DSIH_ROUND_PI                         */ "round_pi",
    /* VKD3DSIH_ROUND_Z                          */ "round_z",
    /* VKD3DSIH_RSQ                              */ "rsq",
    /* VKD3DSIH_SAMPLE                           */ "sample",
    /* VKD3DSIH_SAMPLE_B                         */ "sample_b",
    /* VKD3DSIH_SAMPLE_C                         */ "sample_c",
    /* VKD3DSIH_SAMPLE_C_LZ                      */ "sample_c_lz",
    /* VKD3DSIH_SAMPLE_GRAD                      */ "sample_d",
    /* VKD3DSIH_SAMPLE_INFO                      */ "sample_info",
    /* VKD3DSIH_SAMPLE_LOD                       */ "sample_l",
    /* VKD3DSIH_SAMPLE_POS                       */ "sample_pos",
    /* VKD3DSIH_SETP                             */ "setp",
    /* VKD3DSIH_SGE                              */ "sge",
    /* VKD3DSIH_SGN                              */ "sgn",
    /* VKD3DSIH_SINCOS                           */ "sincos",
    /* VKD3DSIH_SLT                              */ "slt",
    /* VKD3DSIH_SQRT                             */ "sqrt",
    /* VKD3DSIH_STORE_RAW                        */ "store_raw",
    /* VKD3DSIH_STORE_STRUCTURED                 */ "store_structured",
    /* VKD3DSIH_STORE_UAV_TYPED                  */ "store_uav_typed",
    /* VKD3DSIH_SUB                              */ "sub",
    /* VKD3DSIH_SWAPC                            */ "swapc",
    /* VKD3DSIH_SWITCH                           */ "switch",
    /* VKD3DSIH_SYNC                             */ "sync",
    /* VKD3DSIH_TEX                              */ "texld",
    /* VKD3DSIH_TEXBEM                           */ "texbem",
    /* VKD3DSIH_TEXBEML                          */ "texbeml",
    /* VKD3DSIH_TEXCOORD                         */ "texcrd",
    /* VKD3DSIH_TEXDEPTH                         */ "texdepth",
    /* VKD3DSIH_TEXDP3                           */ "texdp3",
    /* VKD3DSIH_TEXDP3TEX                        */ "texdp3tex",
    /* VKD3DSIH_TEXKILL                          */ "texkill",
    /* VKD3DSIH_TEXLDD                           */ "texldd",
    /* VKD3DSIH_TEXLDL                           */ "texldl",
    /* VKD3DSIH_TEXM3x2DEPTH                     */ "texm3x2depth",
    /* VKD3DSIH_TEXM3x2PAD                       */ "texm3x2pad",
    /* VKD3DSIH_TEXM3x2TEX                       */ "texm3x2tex",
    /* VKD3DSIH_TEXM3x3                          */ "texm3x3",
    /* VKD3DSIH_TEXM3x3DIFF                      */ "texm3x3diff",
    /* VKD3DSIH_TEXM3x3PAD                       */ "texm3x3pad",
    /* VKD3DSIH_TEXM3x3SPEC                      */ "texm3x3spec",
    /* VKD3DSIH_TEXM3x3TEX                       */ "texm3x3tex",
    /* VKD3DSIH_TEXM3x3VSPEC                     */ "texm3x3vspec",
    /* VKD3DSIH_TEXREG2AR                        */ "texreg2ar",
    /* VKD3DSIH_TEXREG2GB                        */ "texreg2gb",
    /* VKD3DSIH_TEXREG2RGB                       */ "texreg2rgb",
    /* VKD3DSIH_UBFE                             */ "ubfe",
    /* VKD3DSIH_UDIV                             */ "udiv",
    /* VKD3DSIH_UGE                              */ "uge",
    /* VKD3DSIH_ULT                              */ "ult",
    /* VKD3DSIH_UMAX                             */ "umax",
    /* VKD3DSIH_UMIN                             */ "umin",
    /* VKD3DSIH_UMUL                             */ "umul",
    /* VKD3DSIH_USHR                             */ "ushr",
    /* VKD3DSIH_UTOF                             */ "utof",
    /* VKD3DSIH_XOR                              */ "xor",
};

static const struct
{
    enum vkd3d_shader_input_sysval_semantic sysval_semantic;
    const char *sysval_name;
}
shader_input_sysval_semantic_names[] =
{
    {VKD3D_SIV_POSITION,                   "position"},
    {VKD3D_SIV_CLIP_DISTANCE,              "clip_distance"},
    {VKD3D_SIV_CULL_DISTANCE,              "cull_distance"},
    {VKD3D_SIV_RENDER_TARGET_ARRAY_INDEX,  "render_target_array_index"},
    {VKD3D_SIV_VIEWPORT_ARRAY_INDEX,       "viewport_array_index"},
    {VKD3D_SIV_VERTEX_ID,                  "vertex_id"},
    {VKD3D_SIV_INSTANCE_ID,                "instance_id"},
    {VKD3D_SIV_PRIMITIVE_ID,               "primitive_id"},
    {VKD3D_SIV_IS_FRONT_FACE,              "is_front_face"},
    {VKD3D_SIV_SAMPLE_INDEX,               "sample_index"},
    {VKD3D_SIV_QUAD_U0_TESS_FACTOR,        "finalQuadUeq0EdgeTessFactor"},
    {VKD3D_SIV_QUAD_V0_TESS_FACTOR,        "finalQuadVeq0EdgeTessFactor"},
    {VKD3D_SIV_QUAD_U1_TESS_FACTOR,        "finalQuadUeq1EdgeTessFactor"},
    {VKD3D_SIV_QUAD_V1_TESS_FACTOR,        "finalQuadVeq1EdgeTessFactor"},
    {VKD3D_SIV_QUAD_U_INNER_TESS_FACTOR,   "finalQuadUInsideTessFactor"},
    {VKD3D_SIV_QUAD_V_INNER_TESS_FACTOR,   "finalQuadVInsideTessFactor"},
    {VKD3D_SIV_TRIANGLE_U_TESS_FACTOR,     "finalTriUeq0EdgeTessFactor"},
    {VKD3D_SIV_TRIANGLE_V_TESS_FACTOR,     "finalTriVeq0EdgeTessFactor"},
    {VKD3D_SIV_TRIANGLE_W_TESS_FACTOR,     "finalTriWeq0EdgeTessFactor"},
    {VKD3D_SIV_TRIANGLE_INNER_TESS_FACTOR, "finalTriInsideTessFactor"},
    {VKD3D_SIV_LINE_DETAIL_TESS_FACTOR,    "finalLineDetailTessFactor"},
    {VKD3D_SIV_LINE_DENSITY_TESS_FACTOR,   "finalLineDensityTessFactor"},
};

static void string_buffer_clear(struct vkd3d_string_buffer *buffer)
{
    buffer->buffer[0] = '\0';
    buffer->content_size = 0;
}

static bool string_buffer_init(struct vkd3d_string_buffer *buffer)
{
    buffer->buffer_size = 32;
    if (!(buffer->buffer = vkd3d_malloc(buffer->buffer_size)))
    {
        ERR("Failed to allocate shader buffer memory.\n");
        return false;
    }

    string_buffer_clear(buffer);
    return true;
}

static void string_buffer_free(struct vkd3d_string_buffer *buffer)
{
    vkd3d_free(buffer->buffer);
}

static bool string_buffer_resize(struct vkd3d_string_buffer *buffer, int rc)
{
    unsigned int new_buffer_size = buffer->buffer_size * 2;
    char *new_buffer;

    while (rc > 0 && (unsigned int)rc >= new_buffer_size - buffer->content_size)
        new_buffer_size *= 2;
    if (!(new_buffer = vkd3d_realloc(buffer->buffer, new_buffer_size)))
    {
        ERR("Failed to grow buffer.\n");
        buffer->buffer[buffer->content_size] = '\0';
        return false;
    }
    buffer->buffer = new_buffer;
    buffer->buffer_size = new_buffer_size;
    return true;
}

static int shader_vaddline(struct vkd3d_string_buffer *buffer, const char *format, va_list args)
{
    unsigned int rem;
    int rc;

    rem = buffer->buffer_size - buffer->content_size;
    rc = vsnprintf(&buffer->buffer[buffer->content_size], rem, format, args);
    if (rc < 0 || (unsigned int)rc >= rem)
        return rc;

    buffer->content_size += rc;
    return 0;
}

static int shader_addline(struct vkd3d_string_buffer *buffer, const char *format, ...)
{
    va_list args;
    int ret;

    for (;;)
    {
        va_start(args, format);
        ret = shader_vaddline(buffer, format, args);
        va_end(args);
        if (!ret)
            return ret;
        if (!string_buffer_resize(buffer, ret))
            return -1;
    }
}

/* Convert floating point offset relative to a register file to an absolute
 * offset for float constants. */
static unsigned int shader_get_float_offset(enum vkd3d_shader_register_type register_type, UINT register_idx)
{
    switch (register_type)
    {
        case VKD3DSPR_CONST: return register_idx;
        case VKD3DSPR_CONST2: return 2048 + register_idx;
        case VKD3DSPR_CONST3: return 4096 + register_idx;
        case VKD3DSPR_CONST4: return 6144 + register_idx;
        default:
            FIXME("Unsupported register type: %u.\n", register_type);
            return register_idx;
    }
}

static void shader_dump_global_flags(struct vkd3d_string_buffer *buffer, DWORD global_flags)
{
    unsigned int i;

    static const struct
    {
        unsigned int flag;
        const char *name;
    }
    global_flag_info[] =
    {
        {VKD3DSGF_REFACTORING_ALLOWED,               "refactoringAllowed"},
        {VKD3DSGF_FORCE_EARLY_DEPTH_STENCIL,         "forceEarlyDepthStencil"},
        {VKD3DSGF_ENABLE_RAW_AND_STRUCTURED_BUFFERS, "enableRawAndStructuredBuffers"},
        {VKD3DSGF_ENABLE_MINIMUM_PRECISION,          "enableMinimumPrecision"},
    };

    for (i = 0; i < ARRAY_SIZE(global_flag_info); ++i)
    {
        if (global_flags & global_flag_info[i].flag)
        {
            shader_addline(buffer, global_flag_info[i].name);
            global_flags &= ~global_flag_info[i].flag;
            if (global_flags)
                shader_addline(buffer, " | ");
        }
    }

    if (global_flags)
        shader_addline(buffer, "unknown_flags(%#x)", global_flags);
}

static void shader_dump_sync_flags(struct vkd3d_string_buffer *buffer, DWORD sync_flags)
{
    if (sync_flags & VKD3DSSF_GROUP_SHARED_MEMORY)
    {
        shader_addline(buffer, "_g");
        sync_flags &= ~VKD3DSSF_GROUP_SHARED_MEMORY;
    }
    if (sync_flags & VKD3DSSF_THREAD_GROUP)
    {
        shader_addline(buffer, "_t");
        sync_flags &= ~VKD3DSSF_THREAD_GROUP;
    }

    if (sync_flags)
        shader_addline(buffer, "_unknown_flags(%#x)", sync_flags);
}

static void shader_dump_precise_flags(struct vkd3d_string_buffer *buffer, DWORD flags)
{
    if (!(flags & VKD3DSI_PRECISE_XYZW))
        return;

    shader_addline(buffer, " [precise");
    if (flags != VKD3DSI_PRECISE_XYZW)
    {
        shader_addline(buffer, "(%s%s%s%s)",
                flags & VKD3DSI_PRECISE_X ? "x" : "",
                flags & VKD3DSI_PRECISE_Y ? "y" : "",
                flags & VKD3DSI_PRECISE_Z ? "z" : "",
                flags & VKD3DSI_PRECISE_W ? "w" : "");
    }
    shader_addline(buffer, "]");
}

static void shader_dump_uav_flags(struct vkd3d_string_buffer *buffer, DWORD uav_flags)
{
    if (uav_flags & VKD3DSUF_GLOBALLY_COHERENT)
    {
        shader_addline(buffer, "_glc");
        uav_flags &= ~VKD3DSUF_GLOBALLY_COHERENT;
    }
    if (uav_flags & VKD3DSUF_ORDER_PRESERVING_COUNTER)
    {
        shader_addline(buffer, "_opc");
        uav_flags &= ~VKD3DSUF_ORDER_PRESERVING_COUNTER;
    }

    if (uav_flags)
        shader_addline(buffer, "_unknown_flags(%#x)", uav_flags);
}

static void shader_dump_tessellator_domain(struct vkd3d_string_buffer *buffer,
        enum vkd3d_tessellator_domain domain)
{
    switch (domain)
    {
        case VKD3D_TESSELLATOR_DOMAIN_LINE:
            shader_addline(buffer, "line");
            break;
        case VKD3D_TESSELLATOR_DOMAIN_TRIANGLE:
            shader_addline(buffer, "triangle");
            break;
        case VKD3D_TESSELLATOR_DOMAIN_QUAD:
            shader_addline(buffer, "quad");
            break;
        default:
            shader_addline(buffer, "unknown_tessellator_domain(%#x)", domain);
            break;
    }
}

static void shader_dump_tessellator_output_primitive(struct vkd3d_string_buffer *buffer,
        enum vkd3d_tessellator_output_primitive output_primitive)
{
    switch (output_primitive)
    {
        case VKD3D_TESSELLATOR_OUTPUT_POINT:
            shader_addline(buffer, "point");
            break;
        case VKD3D_TESSELLATOR_OUTPUT_LINE:
            shader_addline(buffer, "line");
            break;
        case VKD3D_TESSELLATOR_OUTPUT_TRIANGLE_CW:
            shader_addline(buffer, "triangle_cw");
            break;
        case VKD3D_TESSELLATOR_OUTPUT_TRIANGLE_CCW:
            shader_addline(buffer, "triangle_ccw");
            break;
        default:
            shader_addline(buffer, "unknown_tessellator_output_primitive(%#x)", output_primitive);
            break;
    }
}

static void shader_dump_tessellator_partitioning(struct vkd3d_string_buffer *buffer,
        enum vkd3d_tessellator_partitioning partitioning)
{
    switch (partitioning)
    {
        case VKD3D_TESSELLATOR_PARTITIONING_INTEGER:
            shader_addline(buffer, "integer");
            break;
        case VKD3D_TESSELLATOR_PARTITIONING_POW2:
            shader_addline(buffer, "pow2");
            break;
        case VKD3D_TESSELLATOR_PARTITIONING_FRACTIONAL_ODD:
            shader_addline(buffer, "fractional_odd");
            break;
        case VKD3D_TESSELLATOR_PARTITIONING_FRACTIONAL_EVEN:
            shader_addline(buffer, "fractional_even");
            break;
        default:
            shader_addline(buffer, "unknown_tessellator_partitioning(%#x)", partitioning);
            break;
    }
}

static void shader_dump_shader_input_sysval_semantic(struct vkd3d_string_buffer *buffer,
        enum vkd3d_shader_input_sysval_semantic semantic)
{
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(shader_input_sysval_semantic_names); ++i)
    {
        if (shader_input_sysval_semantic_names[i].sysval_semantic == semantic)
        {
            shader_addline(buffer, "%s", shader_input_sysval_semantic_names[i].sysval_name);
            return;
        }
    }

    shader_addline(buffer, "unknown_shader_input_sysval_semantic(%#x)", semantic);
}

static void shader_dump_decl_usage(struct vkd3d_string_buffer *buffer,
        const struct vkd3d_shader_semantic *semantic, unsigned int flags,
        const struct vkd3d_shader_version *shader_version)
{
    shader_addline(buffer, "dcl");

    if (semantic->reg.reg.type == VKD3DSPR_SAMPLER)
    {
        switch (semantic->resource_type)
        {
            case VKD3D_SHADER_RESOURCE_TEXTURE_2D:
                shader_addline(buffer, "_2d");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_3D:
                shader_addline(buffer, "_3d");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_CUBE:
                shader_addline(buffer, "_cube");
                break;

            default:
                shader_addline(buffer, "_unknown_resource_type(%#x)", semantic->resource_type);
                break;
        }
    }
    else if (semantic->reg.reg.type == VKD3DSPR_RESOURCE || semantic->reg.reg.type == VKD3DSPR_UAV)
    {
        if (semantic->reg.reg.type == VKD3DSPR_RESOURCE)
            shader_addline(buffer, "_resource_");
        else
            shader_addline(buffer, "_uav_");
        switch (semantic->resource_type)
        {
            case VKD3D_SHADER_RESOURCE_BUFFER:
                shader_addline(buffer, "buffer");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_1D:
                shader_addline(buffer, "texture1d");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_2D:
                shader_addline(buffer, "texture2d");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_2DMS:
                shader_addline(buffer, "texture2dms");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_3D:
                shader_addline(buffer, "texture3d");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_CUBE:
                shader_addline(buffer, "texturecube");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_1DARRAY:
                shader_addline(buffer, "texture1darray");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_2DARRAY:
                shader_addline(buffer, "texture2darray");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_2DMSARRAY:
                shader_addline(buffer, "texture2dmsarray");
                break;

            case VKD3D_SHADER_RESOURCE_TEXTURE_CUBEARRAY:
                shader_addline(buffer, "texturecubearray");
                break;

            default:
                shader_addline(buffer, "unknown");
                break;
        }
        if (semantic->reg.reg.type == VKD3DSPR_UAV)
            shader_dump_uav_flags(buffer, flags);
        switch (semantic->resource_data_type)
        {
            case VKD3D_DATA_FLOAT:
                shader_addline(buffer, " (float)");
                break;

            case VKD3D_DATA_INT:
                shader_addline(buffer, " (int)");
                break;

            case VKD3D_DATA_UINT:
                shader_addline(buffer, " (uint)");
                break;

            case VKD3D_DATA_UNORM:
                shader_addline(buffer, " (unorm)");
                break;

            case VKD3D_DATA_SNORM:
                shader_addline(buffer, " (snorm)");
                break;

            default:
                shader_addline(buffer, " (unknown)");
                break;
        }
    }
    else
    {
        /* Pixel shaders 3.0 don't have usage semantics. */
        if (shader_version->major < 3 && shader_version->type == VKD3D_SHADER_TYPE_PIXEL)
            return;
        else
            shader_addline(buffer, "_");

        switch (semantic->usage)
        {
            case VKD3D_DECL_USAGE_POSITION:
                shader_addline(buffer, "position%u", semantic->usage_idx);
                break;

            case VKD3D_DECL_USAGE_BLEND_INDICES:
                shader_addline(buffer, "blend");
                break;

            case VKD3D_DECL_USAGE_BLEND_WEIGHT:
                shader_addline(buffer, "weight");
                break;

            case VKD3D_DECL_USAGE_NORMAL:
                shader_addline(buffer, "normal%u", semantic->usage_idx);
                break;

            case VKD3D_DECL_USAGE_PSIZE:
                shader_addline(buffer, "psize");
                break;

            case VKD3D_DECL_USAGE_COLOR:
                if (!semantic->usage_idx)
                    shader_addline(buffer, "color");
                else
                    shader_addline(buffer, "specular%u", (semantic->usage_idx - 1));
                break;

            case VKD3D_DECL_USAGE_TEXCOORD:
                shader_addline(buffer, "texture%u", semantic->usage_idx);
                break;

            case VKD3D_DECL_USAGE_TANGENT:
                shader_addline(buffer, "tangent");
                break;

            case VKD3D_DECL_USAGE_BINORMAL:
                shader_addline(buffer, "binormal");
                break;

            case VKD3D_DECL_USAGE_TESS_FACTOR:
                shader_addline(buffer, "tessfactor");
                break;

            case VKD3D_DECL_USAGE_POSITIONT:
                shader_addline(buffer, "positionT%u", semantic->usage_idx);
                break;

            case VKD3D_DECL_USAGE_FOG:
                shader_addline(buffer, "fog");
                break;

            case VKD3D_DECL_USAGE_DEPTH:
                shader_addline(buffer, "depth");
                break;

            case VKD3D_DECL_USAGE_SAMPLE:
                shader_addline(buffer, "sample");
                break;

            default:
                shader_addline(buffer, "<unknown_semantic(%#x)>", semantic->usage);
                FIXME("Unrecognised semantic usage %#x.\n", semantic->usage);
        }
    }
}

static void shader_dump_src_param(struct vkd3d_string_buffer *buffer,
        const struct vkd3d_shader_src_param *param, const struct vkd3d_shader_version *shader_version);

static void shader_dump_register(struct vkd3d_string_buffer *buffer,
        const struct vkd3d_shader_register *reg, const struct vkd3d_shader_version *shader_version)
{
    static const char * const rastout_reg_names[] = {"oPos", "oFog", "oPts"};
    static const char * const misctype_reg_names[] = {"vPos", "vFace"};
    unsigned int offset = reg->idx[0].offset;

    switch (reg->type)
    {
        case VKD3DSPR_TEMP:
            shader_addline(buffer, "r");
            break;

        case VKD3DSPR_INPUT:
            shader_addline(buffer, "v");
            break;

        case VKD3DSPR_CONST:
        case VKD3DSPR_CONST2:
        case VKD3DSPR_CONST3:
        case VKD3DSPR_CONST4:
            shader_addline(buffer, "c");
            offset = shader_get_float_offset(reg->type, offset);
            break;

        case VKD3DSPR_TEXTURE: /* vs: case VKD3DSPR_ADDR */
            shader_addline(buffer, "%c", shader_version->type == VKD3D_SHADER_TYPE_PIXEL ? 't' : 'a');
            break;

        case VKD3DSPR_RASTOUT:
            shader_addline(buffer, "%s", rastout_reg_names[offset]);
            break;

        case VKD3DSPR_COLOROUT:
            shader_addline(buffer, "oC");
            break;

        case VKD3DSPR_DEPTHOUT:
            shader_addline(buffer, "oDepth");
            break;

        case VKD3DSPR_DEPTHOUTGE:
            shader_addline(buffer, "oDepthGE");
            break;

        case VKD3DSPR_DEPTHOUTLE:
            shader_addline(buffer, "oDepthLE");
            break;

        case VKD3DSPR_ATTROUT:
            shader_addline(buffer, "oD");
            break;

        case VKD3DSPR_TEXCRDOUT:
            /* Vertex shaders >= 3.0 use general purpose output registers
             * (VKD3DSPR_OUTPUT), which can include an address token. */
            if (shader_version->major >= 3)
                shader_addline(buffer, "o");
            else
                shader_addline(buffer, "oT");
            break;

        case VKD3DSPR_CONSTINT:
            shader_addline(buffer, "i");
            break;

        case VKD3DSPR_CONSTBOOL:
            shader_addline(buffer, "b");
            break;

        case VKD3DSPR_LABEL:
            shader_addline(buffer, "l");
            break;

        case VKD3DSPR_LOOP:
            shader_addline(buffer, "aL");
            break;

        case VKD3DSPR_SAMPLER:
            shader_addline(buffer, "s");
            break;

        case VKD3DSPR_MISCTYPE:
            if (offset > 1)
            {
                FIXME("Unhandled misctype register %u.\n", offset);
                shader_addline(buffer, "<unhandled misctype %#x>", offset);
            }
            else
            {
                shader_addline(buffer, "%s", misctype_reg_names[offset]);
            }
            break;

        case VKD3DSPR_PREDICATE:
            shader_addline(buffer, "p");
            break;

        case VKD3DSPR_IMMCONST:
            shader_addline(buffer, "l");
            break;

        case VKD3DSPR_CONSTBUFFER:
            shader_addline(buffer, "cb");
            break;

        case VKD3DSPR_IMMCONSTBUFFER:
            shader_addline(buffer, "icb");
            break;

        case VKD3DSPR_PRIMID:
            shader_addline(buffer, "primID");
            break;

        case VKD3DSPR_NULL:
            shader_addline(buffer, "null");
            break;

        case VKD3DSPR_RASTERIZER:
            shader_addline(buffer, "rasterizer");
            break;

        case VKD3DSPR_RESOURCE:
            shader_addline(buffer, "t");
            break;

        case VKD3DSPR_UAV:
            shader_addline(buffer, "u");
            break;

        case VKD3DSPR_OUTPOINTID:
            shader_addline(buffer, "vOutputControlPointID");
            break;

        case VKD3DSPR_FORKINSTID:
            shader_addline(buffer, "vForkInstanceId");
            break;

        case VKD3DSPR_JOININSTID:
            shader_addline(buffer, "vJoinInstanceId");
            break;

        case VKD3DSPR_INCONTROLPOINT:
            shader_addline(buffer, "vicp");
            break;

        case VKD3DSPR_OUTCONTROLPOINT:
            shader_addline(buffer, "vocp");
            break;

        case VKD3DSPR_PATCHCONST:
            shader_addline(buffer, "vpc");
            break;

        case VKD3DSPR_TESSCOORD:
            shader_addline(buffer, "vDomainLocation");
            break;

        case VKD3DSPR_GROUPSHAREDMEM:
            shader_addline(buffer, "g");
            break;

        case VKD3DSPR_THREADID:
            shader_addline(buffer, "vThreadID");
            break;

        case VKD3DSPR_THREADGROUPID:
            shader_addline(buffer, "vThreadGroupID");
            break;

        case VKD3DSPR_LOCALTHREADID:
            shader_addline(buffer, "vThreadIDInGroup");
            break;

        case VKD3DSPR_LOCALTHREADINDEX:
            shader_addline(buffer, "vThreadIDInGroupFlattened");
            break;

        case VKD3DSPR_IDXTEMP:
            shader_addline(buffer, "x");
            break;

        case VKD3DSPR_STREAM:
            shader_addline(buffer, "m");
            break;

        case VKD3DSPR_FUNCTIONBODY:
            shader_addline(buffer, "fb");
            break;

        case VKD3DSPR_FUNCTIONPOINTER:
            shader_addline(buffer, "fp");
            break;

        case VKD3DSPR_COVERAGE:
            shader_addline(buffer, "vCoverage");
            break;

        case VKD3DSPR_SAMPLEMASK:
            shader_addline(buffer, "oMask");
            break;

        case VKD3DSPR_GSINSTID:
            shader_addline(buffer, "vGSInstanceID");
            break;

        default:
            shader_addline(buffer, "<unhandled_rtype(%#x)>", reg->type);
            break;
    }

    if (reg->type == VKD3DSPR_IMMCONST)
    {
        shader_addline(buffer, "(");
        switch (reg->immconst_type)
        {
            case VKD3D_IMMCONST_SCALAR:
                switch (reg->data_type)
                {
                    case VKD3D_DATA_FLOAT:
                        shader_addline(buffer, "%.8e", reg->u.immconst_float[0]);
                        break;
                    case VKD3D_DATA_INT:
                        shader_addline(buffer, "%d", reg->u.immconst_uint[0]);
                        break;
                    case VKD3D_DATA_RESOURCE:
                    case VKD3D_DATA_SAMPLER:
                    case VKD3D_DATA_UINT:
                        shader_addline(buffer, "%u", reg->u.immconst_uint[0]);
                        break;
                    default:
                        shader_addline(buffer, "<unhandled data type %#x>", reg->data_type);
                        break;
                }
                break;

            case VKD3D_IMMCONST_VEC4:
                switch (reg->data_type)
                {
                    case VKD3D_DATA_FLOAT:
                        shader_addline(buffer, "%.8e, %.8e, %.8e, %.8e",
                                reg->u.immconst_float[0], reg->u.immconst_float[1],
                                reg->u.immconst_float[2], reg->u.immconst_float[3]);
                        break;
                    case VKD3D_DATA_INT:
                        shader_addline(buffer, "%d, %d, %d, %d",
                                reg->u.immconst_uint[0], reg->u.immconst_uint[1],
                                reg->u.immconst_uint[2], reg->u.immconst_uint[3]);
                        break;
                    case VKD3D_DATA_RESOURCE:
                    case VKD3D_DATA_SAMPLER:
                    case VKD3D_DATA_UINT:
                        shader_addline(buffer, "%u, %u, %u, %u",
                                reg->u.immconst_uint[0], reg->u.immconst_uint[1],
                                reg->u.immconst_uint[2], reg->u.immconst_uint[3]);
                        break;
                    default:
                        shader_addline(buffer, "<unhandled data type %#x>", reg->data_type);
                        break;
                }
                break;

            default:
                shader_addline(buffer, "<unhandled immconst_type %#x>", reg->immconst_type);
                break;
        }
        shader_addline(buffer, ")");
    }
    else if (reg->type != VKD3DSPR_RASTOUT
            && reg->type != VKD3DSPR_MISCTYPE
            && reg->type != VKD3DSPR_NULL)
    {
        if (offset != ~0u)
        {
            shader_addline(buffer, "[");
            if (reg->idx[0].rel_addr)
            {
                shader_dump_src_param(buffer, reg->idx[0].rel_addr, shader_version);
                shader_addline(buffer, " + ");
            }
            shader_addline(buffer, "%u]", offset);

            if (reg->idx[1].offset != ~0u)
            {
                shader_addline(buffer, "[");
                if (reg->idx[1].rel_addr)
                {
                    shader_dump_src_param(buffer, reg->idx[1].rel_addr, shader_version);
                    shader_addline(buffer, " + ");
                }
                shader_addline(buffer, "%u]", reg->idx[1].offset);
            }

            if (reg->idx[2].offset != ~0u)
            {
                shader_addline(buffer, "[");
                if (reg->idx[2].rel_addr)
                {
                    shader_dump_src_param(buffer, reg->idx[2].rel_addr, shader_version);
                    shader_addline(buffer, " + ");
                }
                shader_addline(buffer, "%u]", reg->idx[2].offset);
            }
        }

        if (reg->type == VKD3DSPR_FUNCTIONPOINTER)
            shader_addline(buffer, "[%u]", reg->u.fp_body_idx);
    }
}

static void shader_dump_dst_param(struct vkd3d_string_buffer *buffer,
        const struct vkd3d_shader_dst_param *param, const struct vkd3d_shader_version *shader_version)
{
    DWORD write_mask = param->write_mask;

    shader_dump_register(buffer, &param->reg, shader_version);

    if (write_mask && write_mask != VKD3DSP_WRITEMASK_ALL)
    {
        static const char write_mask_chars[] = "xyzw";

        shader_addline(buffer, ".");
        if (write_mask & VKD3DSP_WRITEMASK_0)
            shader_addline(buffer, "%c", write_mask_chars[0]);
        if (write_mask & VKD3DSP_WRITEMASK_1)
            shader_addline(buffer, "%c", write_mask_chars[1]);
        if (write_mask & VKD3DSP_WRITEMASK_2)
            shader_addline(buffer, "%c", write_mask_chars[2]);
        if (write_mask & VKD3DSP_WRITEMASK_3)
            shader_addline(buffer, "%c", write_mask_chars[3]);
    }
}

static void shader_dump_src_param(struct vkd3d_string_buffer *buffer,
        const struct vkd3d_shader_src_param *param, const struct vkd3d_shader_version *shader_version)
{
    enum vkd3d_shader_src_modifier src_modifier = param->modifiers;
    DWORD swizzle = param->swizzle;

    if (src_modifier == VKD3DSPSM_NEG
            || src_modifier == VKD3DSPSM_BIASNEG
            || src_modifier == VKD3DSPSM_SIGNNEG
            || src_modifier == VKD3DSPSM_X2NEG
            || src_modifier == VKD3DSPSM_ABSNEG)
        shader_addline(buffer, "-");
    else if (src_modifier == VKD3DSPSM_COMP)
        shader_addline(buffer, "1-");
    else if (src_modifier == VKD3DSPSM_NOT)
        shader_addline(buffer, "!");

    if (src_modifier == VKD3DSPSM_ABS || src_modifier == VKD3DSPSM_ABSNEG)
        shader_addline(buffer, "abs(");

    shader_dump_register(buffer, &param->reg, shader_version);

    switch (src_modifier)
    {
        case VKD3DSPSM_NONE:    break;
        case VKD3DSPSM_NEG:     break;
        case VKD3DSPSM_NOT:     break;
        case VKD3DSPSM_BIAS:    shader_addline(buffer, "_bias"); break;
        case VKD3DSPSM_BIASNEG: shader_addline(buffer, "_bias"); break;
        case VKD3DSPSM_SIGN:    shader_addline(buffer, "_bx2"); break;
        case VKD3DSPSM_SIGNNEG: shader_addline(buffer, "_bx2"); break;
        case VKD3DSPSM_COMP:    break;
        case VKD3DSPSM_X2:      shader_addline(buffer, "_x2"); break;
        case VKD3DSPSM_X2NEG:   shader_addline(buffer, "_x2"); break;
        case VKD3DSPSM_DZ:      shader_addline(buffer, "_dz"); break;
        case VKD3DSPSM_DW:      shader_addline(buffer, "_dw"); break;
        case VKD3DSPSM_ABSNEG:  shader_addline(buffer, ")"); break;
        case VKD3DSPSM_ABS:     shader_addline(buffer, ")"); break;
        default:                  shader_addline(buffer, "_unknown_modifier(%#x)", src_modifier);
    }

    if (swizzle != VKD3D_NO_SWIZZLE)
    {
        static const char swizzle_chars[] = "xyzw";
        DWORD swizzle_x = (swizzle >> VKD3D_SWIZZLE_SHIFT(0)) & VKD3D_SWIZZLE_MASK;
        DWORD swizzle_y = (swizzle >> VKD3D_SWIZZLE_SHIFT(1)) & VKD3D_SWIZZLE_MASK;
        DWORD swizzle_z = (swizzle >> VKD3D_SWIZZLE_SHIFT(2)) & VKD3D_SWIZZLE_MASK;
        DWORD swizzle_w = (swizzle >> VKD3D_SWIZZLE_SHIFT(3)) & VKD3D_SWIZZLE_MASK;

        if (swizzle_x == swizzle_y
                && swizzle_x == swizzle_z
                && swizzle_x == swizzle_w)
        {
            shader_addline(buffer, ".%c", swizzle_chars[swizzle_x]);
        }
        else
        {
            shader_addline(buffer, ".%c%c%c%c", swizzle_chars[swizzle_x], swizzle_chars[swizzle_y],
                    swizzle_chars[swizzle_z], swizzle_chars[swizzle_w]);
        }
    }
}

static void shader_dump_ins_modifiers(struct vkd3d_string_buffer *buffer,
        const struct vkd3d_shader_dst_param *dst)
{
    DWORD mmask = dst->modifiers;

    switch (dst->shift)
    {
        case 0: break;
        case 13: shader_addline(buffer, "_d8"); break;
        case 14: shader_addline(buffer, "_d4"); break;
        case 15: shader_addline(buffer, "_d2"); break;
        case 1: shader_addline(buffer, "_x2"); break;
        case 2: shader_addline(buffer, "_x4"); break;
        case 3: shader_addline(buffer, "_x8"); break;
        default: shader_addline(buffer, "_unhandled_shift(%d)", dst->shift); break;
    }

    if (mmask & VKD3DSPDM_SATURATE)         shader_addline(buffer, "_sat");
    if (mmask & VKD3DSPDM_PARTIALPRECISION) shader_addline(buffer, "_pp");
    if (mmask & VKD3DSPDM_MSAMPCENTROID)    shader_addline(buffer, "_centroid");

    mmask &= ~(VKD3DSPDM_SATURATE | VKD3DSPDM_PARTIALPRECISION | VKD3DSPDM_MSAMPCENTROID);
    if (mmask) FIXME("Unrecognised modifier %#x.\n", mmask);
}

static void shader_dump_primitive_type(struct vkd3d_string_buffer *buffer,
        const struct vkd3d_shader_primitive_type *primitive_type)
{
    switch (primitive_type->type)
    {
        case VKD3D_PT_UNDEFINED:
            shader_addline(buffer, "undefined");
            break;
        case VKD3D_PT_POINTLIST:
            shader_addline(buffer, "pointlist");
            break;
        case VKD3D_PT_LINELIST:
            shader_addline(buffer, "linelist");
            break;
        case VKD3D_PT_LINESTRIP:
            shader_addline(buffer, "linestrip");
            break;
        case VKD3D_PT_TRIANGLELIST:
            shader_addline(buffer, "trianglelist");
            break;
        case VKD3D_PT_TRIANGLESTRIP:
            shader_addline(buffer, "trianglestrip");
            break;
        case VKD3D_PT_TRIANGLEFAN:
            shader_addline(buffer, "trianglefan");
            break;
        case VKD3D_PT_LINELIST_ADJ:
            shader_addline(buffer, "linelist_adj");
            break;
        case VKD3D_PT_LINESTRIP_ADJ:
            shader_addline(buffer, "linestrip_adj");
            break;
        case VKD3D_PT_TRIANGLELIST_ADJ:
            shader_addline(buffer, "trianglelist_adj");
            break;
        case VKD3D_PT_TRIANGLESTRIP_ADJ:
            shader_addline(buffer, "trianglestrip_adj");
            break;
        case VKD3D_PT_PATCH:
            shader_addline(buffer, "patch%u", primitive_type->patch_vertex_count);
            break;
        default:
            shader_addline(buffer, "<unrecognized_primitive_type %#x>", primitive_type->type);
            break;
    }
}

static void shader_dump_interpolation_mode(struct vkd3d_string_buffer *buffer,
        enum vkd3d_shader_interpolation_mode interpolation_mode)
{
    switch (interpolation_mode)
    {
        case VKD3DSIM_CONSTANT:
            shader_addline(buffer, "constant");
            break;
        case VKD3DSIM_LINEAR:
            shader_addline(buffer, "linear");
            break;
        case VKD3DSIM_LINEAR_CENTROID:
            shader_addline(buffer, "linear centroid");
            break;
        case VKD3DSIM_LINEAR_NOPERSPECTIVE:
            shader_addline(buffer, "linear noperspective");
            break;
        case VKD3DSIM_LINEAR_SAMPLE:
            shader_addline(buffer, "linear sample");
            break;
        case VKD3DSIM_LINEAR_NOPERSPECTIVE_CENTROID:
            shader_addline(buffer, "linear noperspective centroid");
            break;
        case VKD3DSIM_LINEAR_NOPERSPECTIVE_SAMPLE:
            shader_addline(buffer, "linear noperspective sample");
            break;
        default:
            shader_addline(buffer, "<unrecognized_interpolation_mode %#x>", interpolation_mode);
            break;
    }
}

const char *shader_get_type_prefix(enum vkd3d_shader_type type)
{
    switch (type)
    {
        case VKD3D_SHADER_TYPE_VERTEX:
            return "vs";

        case VKD3D_SHADER_TYPE_HULL:
            return "hs";

        case VKD3D_SHADER_TYPE_DOMAIN:
            return "ds";

        case VKD3D_SHADER_TYPE_GEOMETRY:
            return "gs";

        case VKD3D_SHADER_TYPE_PIXEL:
            return "ps";

        case VKD3D_SHADER_TYPE_COMPUTE:
            return "cs";

        default:
            FIXME("Unhandled shader type %#x.\n", type);
            return "unknown";
    }
}

static void shader_dump_instruction_flags(struct vkd3d_string_buffer *buffer,
        const struct vkd3d_shader_instruction *ins, const struct vkd3d_shader_version *shader_version)
{
    switch (ins->handler_idx)
    {
        case VKD3DSIH_BREAKP:
        case VKD3DSIH_CONTINUEP:
        case VKD3DSIH_IF:
        case VKD3DSIH_RETP:
        case VKD3DSIH_TEXKILL:
            switch (ins->flags)
            {
                case VKD3D_SHADER_CONDITIONAL_OP_NZ: shader_addline(buffer, "_nz"); break;
                case VKD3D_SHADER_CONDITIONAL_OP_Z:  shader_addline(buffer, "_z"); break;
                default: shader_addline(buffer, "_unrecognized(%#x)", ins->flags); break;
            }
            break;

        case VKD3DSIH_IFC:
        case VKD3DSIH_BREAKC:
            switch (ins->flags)
            {
                case VKD3D_SHADER_REL_OP_GT: shader_addline(buffer, "_gt"); break;
                case VKD3D_SHADER_REL_OP_EQ: shader_addline(buffer, "_eq"); break;
                case VKD3D_SHADER_REL_OP_GE: shader_addline(buffer, "_ge"); break;
                case VKD3D_SHADER_REL_OP_LT: shader_addline(buffer, "_lt"); break;
                case VKD3D_SHADER_REL_OP_NE: shader_addline(buffer, "_ne"); break;
                case VKD3D_SHADER_REL_OP_LE: shader_addline(buffer, "_le"); break;
                default: shader_addline(buffer, "_(%u)", ins->flags);
            }
            break;

        case VKD3DSIH_RESINFO:
            switch (ins->flags)
            {
                case VKD3DSI_NONE: break;
                case VKD3DSI_RESINFO_RCP_FLOAT: shader_addline(buffer, "_rcpFloat"); break;
                case VKD3DSI_RESINFO_UINT: shader_addline(buffer, "_uint"); break;
                default: shader_addline(buffer, "_unrecognized(%#x)", ins->flags);
            }
            break;

        case VKD3DSIH_SAMPLE_INFO:
            switch (ins->flags)
            {
                case VKD3DSI_NONE: break;
                case VKD3DSI_SAMPLE_INFO_UINT: shader_addline(buffer, "_uint"); break;
                default: shader_addline(buffer, "_unrecognized(%#x)", ins->flags);
            }
            break;

        case VKD3DSIH_SYNC:
            shader_dump_sync_flags(buffer, ins->flags);
            break;

        case VKD3DSIH_TEX:
            if (shader_version->major >= 2 && (ins->flags & VKD3DSI_TEXLD_PROJECT))
                shader_addline(buffer, "p");
            break;

        default:
            shader_dump_precise_flags(buffer, ins->flags);
            break;
    }
}

static void shader_dump_register_space(struct vkd3d_string_buffer *buffer,
        unsigned int register_space, const struct vkd3d_shader_version *shader_version)
{
    if (shader_version->major >= 5 && shader_version->minor >= 1)
        shader_addline(buffer, ", space=%u", register_space);
}

static void shader_dump_instruction(struct vkd3d_string_buffer *buffer,
        const struct vkd3d_shader_instruction *ins, const struct vkd3d_shader_version *shader_version)
{
    unsigned int i;

    switch (ins->handler_idx)
    {
        case VKD3DSIH_DCL:
        case VKD3DSIH_DCL_UAV_TYPED:
            shader_dump_decl_usage(buffer, &ins->declaration.semantic, ins->flags, shader_version);
            shader_dump_ins_modifiers(buffer, &ins->declaration.semantic.reg);
            shader_addline(buffer, " ");
            shader_dump_dst_param(buffer, &ins->declaration.semantic.reg, shader_version);
            shader_dump_register_space(buffer, ins->declaration.semantic.register_space, shader_version);
            break;

        case VKD3DSIH_DCL_CONSTANT_BUFFER:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_src_param(buffer, &ins->declaration.cb.src, shader_version);
            if (shader_version->major >= 5 && shader_version->minor >= 1)
                shader_addline(buffer, "[%u]", ins->declaration.cb.size);
            shader_addline(buffer, ", %s",
                    ins->flags & VKD3DSI_INDEXED_DYNAMIC ? "dynamicIndexed" : "immediateIndexed");
            shader_dump_register_space(buffer, ins->declaration.cb.register_space, shader_version);
            break;

        case VKD3DSIH_DCL_FUNCTION_BODY:
            shader_addline(buffer, "%s fb%u",
                    shader_opcode_names[ins->handler_idx], ins->declaration.index);
            break;

        case VKD3DSIH_DCL_FUNCTION_TABLE:
            shader_addline(buffer, "%s ft%u = {...}",
                    shader_opcode_names[ins->handler_idx], ins->declaration.index);
            break;

        case VKD3DSIH_DCL_GLOBAL_FLAGS:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_global_flags(buffer, ins->flags);
            break;

        case VKD3DSIH_DCL_HS_MAX_TESSFACTOR:
            shader_addline(buffer, "%s %.8e", shader_opcode_names[ins->handler_idx],
                    ins->declaration.max_tessellation_factor);
            break;

        case VKD3DSIH_DCL_IMMEDIATE_CONSTANT_BUFFER:
            shader_addline(buffer, "%s {\n", shader_opcode_names[ins->handler_idx]);
            for (i = 0; i < ins->declaration.icb->vec4_count; ++i)
            {
                shader_addline(buffer, "    {0x%08x, 0x%08x, 0x%08x, 0x%08x},\n",
                        ins->declaration.icb->data[4 * i + 0],
                        ins->declaration.icb->data[4 * i + 1],
                        ins->declaration.icb->data[4 * i + 2],
                        ins->declaration.icb->data[4 * i + 3]);
            }
            shader_addline(buffer, "}");
            break;

        case VKD3DSIH_DCL_INDEX_RANGE:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_dst_param(buffer, &ins->declaration.index_range.dst, shader_version);
            shader_addline(buffer, " %u", ins->declaration.index_range.register_count);
            break;

        case VKD3DSIH_DCL_INDEXABLE_TEMP:
            shader_addline(buffer, "%s x[%u][%u], %u", shader_opcode_names[ins->handler_idx],
                    ins->declaration.indexable_temp.register_idx,
                    ins->declaration.indexable_temp.register_size,
                    ins->declaration.indexable_temp.component_count);
            break;

        case VKD3DSIH_DCL_INPUT_PS:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_interpolation_mode(buffer, ins->flags);
            shader_addline(buffer, " ");
            shader_dump_dst_param(buffer, &ins->declaration.dst, shader_version);
            break;

        case VKD3DSIH_DCL_INPUT_PS_SGV:
        case VKD3DSIH_DCL_INPUT_SGV:
        case VKD3DSIH_DCL_INPUT_SIV:
        case VKD3DSIH_DCL_OUTPUT_SIV:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_dst_param(buffer, &ins->declaration.register_semantic.reg, shader_version);
            shader_addline(buffer, ", ");
            shader_dump_shader_input_sysval_semantic(buffer, ins->declaration.register_semantic.sysval_semantic);
            break;

        case VKD3DSIH_DCL_INPUT_PS_SIV:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_interpolation_mode(buffer, ins->flags);
            shader_addline(buffer, " ");
            shader_dump_dst_param(buffer, &ins->declaration.register_semantic.reg, shader_version);
            shader_addline(buffer, ", ");
            shader_dump_shader_input_sysval_semantic(buffer, ins->declaration.register_semantic.sysval_semantic);
            break;

        case VKD3DSIH_DCL_INPUT:
        case VKD3DSIH_DCL_OUTPUT:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_dst_param(buffer, &ins->declaration.dst, shader_version);
            break;

        case VKD3DSIH_DCL_INPUT_PRIMITIVE:
        case VKD3DSIH_DCL_OUTPUT_TOPOLOGY:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_primitive_type(buffer, &ins->declaration.primitive_type);
            break;

        case VKD3DSIH_DCL_INTERFACE:
            shader_addline(buffer, "%s fp[%u][%u][%u] = {...}",
                    shader_opcode_names[ins->handler_idx], ins->declaration.fp.index,
                    ins->declaration.fp.array_size, ins->declaration.fp.body_count);
            break;

        case VKD3DSIH_DCL_RESOURCE_RAW:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_dst_param(buffer, &ins->declaration.raw_resource.dst, shader_version);
            shader_dump_register_space(buffer, ins->declaration.raw_resource.register_space, shader_version);
            break;

        case VKD3DSIH_DCL_RESOURCE_STRUCTURED:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_dst_param(buffer, &ins->declaration.structured_resource.reg, shader_version);
            shader_addline(buffer, ", %u", ins->declaration.structured_resource.byte_stride);
            shader_dump_register_space(buffer, ins->declaration.structured_resource.register_space, shader_version);
            break;

        case VKD3DSIH_DCL_SAMPLER:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_src_param(buffer, &ins->declaration.sampler.src, shader_version);
            if (ins->flags == VKD3DSI_SAMPLER_COMPARISON_MODE)
                shader_addline(buffer, ", comparisonMode");
            shader_dump_register_space(buffer, ins->declaration.sampler.register_space, shader_version);
            break;

        case VKD3DSIH_DCL_TEMPS:
        case VKD3DSIH_DCL_GS_INSTANCES:
        case VKD3DSIH_DCL_HS_FORK_PHASE_INSTANCE_COUNT:
        case VKD3DSIH_DCL_HS_JOIN_PHASE_INSTANCE_COUNT:
        case VKD3DSIH_DCL_INPUT_CONTROL_POINT_COUNT:
        case VKD3DSIH_DCL_OUTPUT_CONTROL_POINT_COUNT:
        case VKD3DSIH_DCL_VERTICES_OUT:
            shader_addline(buffer, "%s %u", shader_opcode_names[ins->handler_idx], ins->declaration.count);
            break;

        case VKD3DSIH_DCL_TESSELLATOR_DOMAIN:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_tessellator_domain(buffer, ins->declaration.tessellator_domain);
            break;

        case VKD3DSIH_DCL_TESSELLATOR_OUTPUT_PRIMITIVE:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_tessellator_output_primitive(buffer, ins->declaration.tessellator_output_primitive);
            break;

        case VKD3DSIH_DCL_TESSELLATOR_PARTITIONING:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_tessellator_partitioning(buffer, ins->declaration.tessellator_partitioning);
            break;

        case VKD3DSIH_DCL_TGSM_RAW:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_dst_param(buffer, &ins->declaration.tgsm_raw.reg, shader_version);
            shader_addline(buffer, ", %u", ins->declaration.tgsm_raw.byte_count);
            break;

        case VKD3DSIH_DCL_TGSM_STRUCTURED:
            shader_addline(buffer, "%s ", shader_opcode_names[ins->handler_idx]);
            shader_dump_dst_param(buffer, &ins->declaration.tgsm_structured.reg, shader_version);
            shader_addline(buffer, ", %u, %u", ins->declaration.tgsm_structured.byte_stride,
                    ins->declaration.tgsm_structured.structure_count);
            break;

        case VKD3DSIH_DCL_THREAD_GROUP:
            shader_addline(buffer, "%s %u, %u, %u", shader_opcode_names[ins->handler_idx],
                    ins->declaration.thread_group_size.x,
                    ins->declaration.thread_group_size.y,
                    ins->declaration.thread_group_size.z);
            break;

        case VKD3DSIH_DCL_UAV_RAW:
            shader_addline(buffer, "%s", shader_opcode_names[ins->handler_idx]);
            shader_dump_uav_flags(buffer, ins->flags);
            shader_addline(buffer, " ");
            shader_dump_dst_param(buffer, &ins->declaration.raw_resource.dst, shader_version);
            shader_dump_register_space(buffer, ins->declaration.raw_resource.register_space, shader_version);
            break;

        case VKD3DSIH_DCL_UAV_STRUCTURED:
            shader_addline(buffer, "%s", shader_opcode_names[ins->handler_idx]);
            shader_dump_uav_flags(buffer, ins->flags);
            shader_addline(buffer, " ");
            shader_dump_dst_param(buffer, &ins->declaration.structured_resource.reg, shader_version);
            shader_addline(buffer, ", %u", ins->declaration.structured_resource.byte_stride);
            shader_dump_register_space(buffer, ins->declaration.structured_resource.register_space, shader_version);
            break;

        case VKD3DSIH_DEF:
            shader_addline(buffer, "def c%u = %.8e, %.8e, %.8e, %.8e",
                    shader_get_float_offset(ins->dst[0].reg.type, ins->dst[0].reg.idx[0].offset),
                    ins->src[0].reg.u.immconst_float[0], ins->src[0].reg.u.immconst_float[1],
                    ins->src[0].reg.u.immconst_float[2], ins->src[0].reg.u.immconst_float[3]);
            break;

        case VKD3DSIH_DEFI:
            shader_addline(buffer, "defi i%u = %d, %d, %d, %d", ins->dst[0].reg.idx[0].offset,
                    ins->src[0].reg.u.immconst_uint[0], ins->src[0].reg.u.immconst_uint[1],
                    ins->src[0].reg.u.immconst_uint[2], ins->src[0].reg.u.immconst_uint[3]);
            break;

        case VKD3DSIH_DEFB:
            shader_addline(buffer, "defb b%u = %s",
                    ins->dst[0].reg.idx[0].offset, ins->src[0].reg.u.immconst_uint[0] ? "true" : "false");
            break;

        default:
            if (ins->predicate)
            {
                shader_addline(buffer, "(");
                shader_dump_src_param(buffer, ins->predicate, shader_version);
                shader_addline(buffer, ") ");
            }

            /* PixWin marks instructions with the coissue flag with a '+' */
            if (ins->coissue)
                shader_addline(buffer, "+");

            shader_addline(buffer, "%s", shader_opcode_names[ins->handler_idx]);

            shader_dump_instruction_flags(buffer, ins, shader_version);
            if (vkd3d_shader_instruction_has_texel_offset(ins))
            {
                shader_addline(buffer, "(%d,%d,%d)",
                        ins->texel_offset.u, ins->texel_offset.v, ins->texel_offset.w);
            }

            for (i = 0; i < ins->dst_count; ++i)
            {
                shader_dump_ins_modifiers(buffer, &ins->dst[i]);
                shader_addline(buffer, !i ? " " : ", ");
                shader_dump_dst_param(buffer, &ins->dst[i], shader_version);
            }

            /* Other source tokens */
            for (i = ins->dst_count; i < (ins->dst_count + ins->src_count); ++i)
            {
                shader_addline(buffer, !i ? " " : ", ");
                shader_dump_src_param(buffer, &ins->src[i - ins->dst_count], shader_version);
            }
            break;
    }

    shader_addline(buffer, "\n");
}

void vkd3d_shader_trace(void *data)
{
    struct vkd3d_shader_version shader_version;
    struct vkd3d_string_buffer buffer;
    const char *p, *q;
    const DWORD *ptr;

    if (!string_buffer_init(&buffer))
    {
        ERR("Failed to initialize string buffer.\n");
        return;
    }

    shader_sm4_read_header(data, &ptr, &shader_version);
    shader_addline(&buffer, "%s_%u_%u\n",
            shader_get_type_prefix(shader_version.type), shader_version.major, shader_version.minor);

    while (!shader_sm4_is_end(data, &ptr))
    {
        struct vkd3d_shader_instruction ins;

        shader_sm4_read_instruction(data, &ptr, &ins);
        if (ins.handler_idx == VKD3DSIH_INVALID)
        {
            WARN("Skipping unrecognized instruction.\n");
            shader_addline(&buffer, "<unrecognized instruction>\n");
            continue;
        }

        shader_dump_instruction(&buffer, &ins, &shader_version);
    }

    for (p = buffer.buffer; *p; p = q)
    {
        if (!(q = strstr(p, "\n")))
            q = p + strlen(p);
        else
            ++q;
        TRACE("    %.*s", (int)(q - p), p);
    }

    string_buffer_free(&buffer);
}
