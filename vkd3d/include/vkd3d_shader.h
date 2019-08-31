/*
 * Copyright 2017-2019 Józef Kucia for CodeWeavers
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

#ifndef __VKD3D_SHADER_H
#define __VKD3D_SHADER_H

#include <stdbool.h>
#include <stdint.h>
#include <vkd3d_types.h>

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

enum vkd3d_shader_structure_type
{
    /* 1.2 */
    VKD3D_SHADER_STRUCTURE_TYPE_SHADER_INTERFACE_INFO,
    VKD3D_SHADER_STRUCTURE_TYPE_COMPILE_ARGUMENTS,
    VKD3D_SHADER_STRUCTURE_TYPE_SCAN_INFO,
    VKD3D_SHADER_STRUCTURE_TYPE_TRANSFORM_FEEDBACK_INFO,
    VKD3D_SHADER_STRUCTURE_TYPE_DOMAIN_SHADER_COMPILE_ARGUMENTS,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_SHADER_STRUCTURE_TYPE),
};

enum vkd3d_shader_compiler_option
{
    VKD3D_SHADER_STRIP_DEBUG = 0x00000001,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_SHADER_COMPILER_OPTION),
};

enum vkd3d_shader_visibility
{
    VKD3D_SHADER_VISIBILITY_ALL = 0,
    VKD3D_SHADER_VISIBILITY_VERTEX = 1,
    VKD3D_SHADER_VISIBILITY_HULL = 2,
    VKD3D_SHADER_VISIBILITY_DOMAIN = 3,
    VKD3D_SHADER_VISIBILITY_GEOMETRY = 4,
    VKD3D_SHADER_VISIBILITY_PIXEL = 5,

    VKD3D_SHADER_VISIBILITY_COMPUTE = 1000000000,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_SHADER_VISIBILITY),
};

struct vkd3d_shader_code
{
    const void *code;
    size_t size;
};

enum vkd3d_shader_descriptor_type
{
    VKD3D_SHADER_DESCRIPTOR_TYPE_UNKNOWN,
    VKD3D_SHADER_DESCRIPTOR_TYPE_CBV,     /* cb# */
    VKD3D_SHADER_DESCRIPTOR_TYPE_SRV,     /* t#  */
    VKD3D_SHADER_DESCRIPTOR_TYPE_UAV,     /* u#  */
    VKD3D_SHADER_DESCRIPTOR_TYPE_SAMPLER, /* s#  */

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_SHADER_DESCRIPTOR_TYPE),
};

struct vkd3d_shader_descriptor_binding
{
    unsigned int set;
    unsigned int binding;
};

enum vkd3d_shader_binding_flag
{
    VKD3D_SHADER_BINDING_FLAG_BUFFER = 0x00000001,
    VKD3D_SHADER_BINDING_FLAG_IMAGE  = 0x00000002,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_SHADER_BINDING_FLAG),
};

enum vkd3d_shader_parameter_type
{
    VKD3D_SHADER_PARAMETER_TYPE_UNKNOWN,
    VKD3D_SHADER_PARAMETER_TYPE_IMMEDIATE_CONSTANT,
    VKD3D_SHADER_PARAMETER_TYPE_SPECIALIZATION_CONSTANT,
};

enum vkd3d_shader_parameter_data_type
{
    VKD3D_SHADER_PARAMETER_DATA_TYPE_UNKNOWN,
    VKD3D_SHADER_PARAMETER_DATA_TYPE_UINT32,
};

enum vkd3d_shader_parameter_name
{
    VKD3D_SHADER_PARAMETER_NAME_UNKNOWN,
    VKD3D_SHADER_PARAMETER_NAME_RASTERIZER_SAMPLE_COUNT,
};

struct vkd3d_shader_parameter_immediate_constant
{
    union
    {
        uint32_t u32;
    } u;
};

struct vkd3d_shader_parameter_specialization_constant
{
    uint32_t id;
};

struct vkd3d_shader_parameter
{
    enum vkd3d_shader_parameter_name name;
    enum vkd3d_shader_parameter_type type;
    enum vkd3d_shader_parameter_data_type data_type;
    union
    {
        struct vkd3d_shader_parameter_immediate_constant immediate_constant;
        struct vkd3d_shader_parameter_specialization_constant specialization_constant;
    } u;
};

struct vkd3d_shader_resource_binding
{
    enum vkd3d_shader_descriptor_type type;
    unsigned int register_index;
    enum vkd3d_shader_visibility shader_visibility;
    unsigned int flags; /* vkd3d_shader_binding_flags */

    struct vkd3d_shader_descriptor_binding binding;
};

#define VKD3D_DUMMY_SAMPLER_INDEX ~0u

struct vkd3d_shader_combined_resource_sampler
{
    unsigned int resource_index;
    unsigned int sampler_index;
    enum vkd3d_shader_visibility shader_visibility;
    unsigned int flags; /* vkd3d_shader_binding_flags */

    struct vkd3d_shader_descriptor_binding binding;
};

struct vkd3d_shader_uav_counter_binding
{
    unsigned int register_index; /* u# */
    enum vkd3d_shader_visibility shader_visibility;

    struct vkd3d_shader_descriptor_binding binding;
    unsigned int offset;
};

struct vkd3d_shader_push_constant_buffer
{
    unsigned int register_index;
    enum vkd3d_shader_visibility shader_visibility;

    unsigned int offset; /* in bytes */
    unsigned int size;   /* in bytes */
};

struct vkd3d_shader_interface_info
{
    enum vkd3d_shader_structure_type type;
    const void *next;

    const struct vkd3d_shader_resource_binding *bindings;
    unsigned int binding_count;

    const struct vkd3d_shader_push_constant_buffer *push_constant_buffers;
    unsigned int push_constant_buffer_count;

    const struct vkd3d_shader_combined_resource_sampler *combined_samplers;
    unsigned int combined_sampler_count;

    const struct vkd3d_shader_uav_counter_binding *uav_counters;
    unsigned int uav_counter_count;
};

struct vkd3d_shader_transform_feedback_element
{
    unsigned int stream_index;
    const char *semantic_name;
    unsigned int semantic_index;
    uint8_t component_index;
    uint8_t component_count;
    uint8_t output_slot;
};

/* Extends vkd3d_shader_interface_info. */
struct vkd3d_shader_transform_feedback_info
{
    enum vkd3d_shader_structure_type type;
    const void *next;

    const struct vkd3d_shader_transform_feedback_element *elements;
    unsigned int element_count;
    const unsigned int *buffer_strides;
    unsigned int buffer_stride_count;
};

enum vkd3d_shader_target
{
    VKD3D_SHADER_TARGET_NONE,
    VKD3D_SHADER_TARGET_SPIRV_OPENGL_4_5,
    VKD3D_SHADER_TARGET_SPIRV_VULKAN_1_0, /* default target */

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_SHADER_TARGET),
};

enum vkd3d_shader_target_extension
{
    VKD3D_SHADER_TARGET_EXTENSION_NONE,

    VKD3D_SHADER_TARGET_EXTENSION_SPV_EXT_DEMOTE_TO_HELPER_INVOCATION,
};

struct vkd3d_shader_compile_arguments
{
    enum vkd3d_shader_structure_type type;
    const void *next;

    enum vkd3d_shader_target target;

    unsigned int target_extension_count;
    const enum vkd3d_shader_target_extension *target_extensions;

    unsigned int parameter_count;
    const struct vkd3d_shader_parameter *parameters;

    bool dual_source_blending;
    const unsigned int *output_swizzles;
    unsigned int output_swizzle_count;
};

enum vkd3d_tessellator_output_primitive
{
    VKD3D_TESSELLATOR_OUTPUT_POINT        = 1,
    VKD3D_TESSELLATOR_OUTPUT_LINE         = 2,
    VKD3D_TESSELLATOR_OUTPUT_TRIANGLE_CW  = 3,
    VKD3D_TESSELLATOR_OUTPUT_TRIANGLE_CCW = 4,
};

enum vkd3d_tessellator_partitioning
{
    VKD3D_TESSELLATOR_PARTITIONING_INTEGER         = 1,
    VKD3D_TESSELLATOR_PARTITIONING_POW2            = 2,
    VKD3D_TESSELLATOR_PARTITIONING_FRACTIONAL_ODD  = 3,
    VKD3D_TESSELLATOR_PARTITIONING_FRACTIONAL_EVEN = 4,
};

/* Extends vkd3d_shader_compile_arguments. */
struct vkd3d_shader_domain_shader_compile_arguments
{
    enum vkd3d_shader_structure_type type;
    const void *next;

    enum vkd3d_tessellator_output_primitive output_primitive;
    enum vkd3d_tessellator_output_primitive partitioning;
};

/* root signature 1.0 */
enum vkd3d_filter
{
    VKD3D_FILTER_MIN_MAG_MIP_POINT = 0x0,
    VKD3D_FILTER_MIN_MAG_POINT_MIP_LINEAR = 0x1,
    VKD3D_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x4,
    VKD3D_FILTER_MIN_POINT_MAG_MIP_LINEAR = 0x5,
    VKD3D_FILTER_MIN_LINEAR_MAG_MIP_POINT = 0x10,
    VKD3D_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x11,
    VKD3D_FILTER_MIN_MAG_LINEAR_MIP_POINT = 0x14,
    VKD3D_FILTER_MIN_MAG_MIP_LINEAR = 0x15,
    VKD3D_FILTER_ANISOTROPIC = 0x55,
    VKD3D_FILTER_COMPARISON_MIN_MAG_MIP_POINT = 0x80,
    VKD3D_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR = 0x81,
    VKD3D_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x84,
    VKD3D_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR = 0x85,
    VKD3D_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT = 0x90,
    VKD3D_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x91,
    VKD3D_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT = 0x94,
    VKD3D_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR = 0x95,
    VKD3D_FILTER_COMPARISON_ANISOTROPIC = 0xd5,
    VKD3D_FILTER_MINIMUM_MIN_MAG_MIP_POINT = 0x100,
    VKD3D_FILTER_MINIMUM_MIN_MAG_POINT_MIP_LINEAR = 0x101,
    VKD3D_FILTER_MINIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x104,
    VKD3D_FILTER_MINIMUM_MIN_POINT_MAG_MIP_LINEAR = 0x105,
    VKD3D_FILTER_MINIMUM_MIN_LINEAR_MAG_MIP_POINT = 0x110,
    VKD3D_FILTER_MINIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x111,
    VKD3D_FILTER_MINIMUM_MIN_MAG_LINEAR_MIP_POINT = 0x114,
    VKD3D_FILTER_MINIMUM_MIN_MAG_MIP_LINEAR = 0x115,
    VKD3D_FILTER_MINIMUM_ANISOTROPIC = 0x155,
    VKD3D_FILTER_MAXIMUM_MIN_MAG_MIP_POINT = 0x180,
    VKD3D_FILTER_MAXIMUM_MIN_MAG_POINT_MIP_LINEAR = 0x181,
    VKD3D_FILTER_MAXIMUM_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x184,
    VKD3D_FILTER_MAXIMUM_MIN_POINT_MAG_MIP_LINEAR = 0x185,
    VKD3D_FILTER_MAXIMUM_MIN_LINEAR_MAG_MIP_POINT = 0x190,
    VKD3D_FILTER_MAXIMUM_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x191,
    VKD3D_FILTER_MAXIMUM_MIN_MAG_LINEAR_MIP_POINT = 0x194,
    VKD3D_FILTER_MAXIMUM_MIN_MAG_MIP_LINEAR = 0x195,
    VKD3D_FILTER_MAXIMUM_ANISOTROPIC = 0x1d5,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_FILTER),
};

enum vkd3d_texture_address_mode
{
    VKD3D_TEXTURE_ADDRESS_MODE_WRAP = 1,
    VKD3D_TEXTURE_ADDRESS_MODE_MIRROR = 2,
    VKD3D_TEXTURE_ADDRESS_MODE_CLAMP = 3,
    VKD3D_TEXTURE_ADDRESS_MODE_BORDER = 4,
    VKD3D_TEXTURE_ADDRESS_MODE_MIRROR_ONCE = 5,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_TEXTURE_ADDRESS_MODE),
};

enum vkd3d_comparison_func
{
    VKD3D_COMPARISON_FUNC_NEVER = 1,
    VKD3D_COMPARISON_FUNC_LESS = 2,
    VKD3D_COMPARISON_FUNC_EQUAL = 3,
    VKD3D_COMPARISON_FUNC_LESS_EQUAL = 4,
    VKD3D_COMPARISON_FUNC_GREATER = 5,
    VKD3D_COMPARISON_FUNC_NOT_EQUAL = 6,
    VKD3D_COMPARISON_FUNC_GREATER_EQUAL = 7,
    VKD3D_COMPARISON_FUNC_ALWAYS = 8,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_COMPARISON_FUNC),
};

enum vkd3d_static_border_color
{
    VKD3D_STATIC_BORDER_COLOR_TRANSPARENT_BLACK = 0,
    VKD3D_STATIC_BORDER_COLOR_OPAQUE_BLACK = 1,
    VKD3D_STATIC_BORDER_COLOR_OPAQUE_WHITE = 2,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_STATIC_BORDER_COLOR),
};

struct vkd3d_static_sampler_desc
{
    enum vkd3d_filter filter;
    enum vkd3d_texture_address_mode address_u;
    enum vkd3d_texture_address_mode address_v;
    enum vkd3d_texture_address_mode address_w;
    float mip_lod_bias;
    unsigned int max_anisotropy;
    enum vkd3d_comparison_func comparison_func;
    enum vkd3d_static_border_color border_color;
    float min_lod;
    float max_lod;
    unsigned int shader_register;
    unsigned int register_space;
    enum vkd3d_shader_visibility shader_visibility;
};

enum vkd3d_descriptor_range_type
{
    VKD3D_DESCRIPTOR_RANGE_TYPE_SRV = 0,
    VKD3D_DESCRIPTOR_RANGE_TYPE_UAV = 1,
    VKD3D_DESCRIPTOR_RANGE_TYPE_CBV = 2,
    VKD3D_DESCRIPTOR_RANGE_TYPE_SAMPLER = 3,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_DESCRIPTOR_RANGE_TYPE),
};

struct vkd3d_descriptor_range
{
    enum vkd3d_descriptor_range_type range_type;
    unsigned int descriptor_count;
    unsigned int base_shader_register;
    unsigned int register_space;
    unsigned int descriptor_table_offset;
};

struct vkd3d_root_descriptor_table
{
    unsigned int descriptor_range_count;
    const struct vkd3d_descriptor_range *descriptor_ranges;
};

struct vkd3d_root_constants
{
    unsigned int shader_register;
    unsigned int register_space;
    unsigned int value_count;
};

struct vkd3d_root_descriptor
{
    unsigned int shader_register;
    unsigned int register_space;
};

enum vkd3d_root_parameter_type
{
    VKD3D_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE = 0,
    VKD3D_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS = 1,
    VKD3D_ROOT_PARAMETER_TYPE_CBV = 2,
    VKD3D_ROOT_PARAMETER_TYPE_SRV = 3,
    VKD3D_ROOT_PARAMETER_TYPE_UAV = 4,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_ROOT_PARAMETER_TYPE),
};

struct vkd3d_root_parameter
{
    enum vkd3d_root_parameter_type parameter_type;
    union
    {
        struct vkd3d_root_descriptor_table descriptor_table;
        struct vkd3d_root_constants constants;
        struct vkd3d_root_descriptor descriptor;
    } u;
    enum vkd3d_shader_visibility shader_visibility;
};

enum vkd3d_root_signature_flags
{
    VKD3D_ROOT_SIGNATURE_FLAG_NONE = 0x0,
    VKD3D_ROOT_SIGNATURE_FLAG_ALLOW_INPUT_ASSEMBLER_INPUT_LAYOUT = 0x1,
    VKD3D_ROOT_SIGNATURE_FLAG_DENY_VERTEX_SHADER_ROOT_ACCESS = 0x2,
    VKD3D_ROOT_SIGNATURE_FLAG_DENY_HULL_SHADER_ROOT_ACCESS = 0x4,
    VKD3D_ROOT_SIGNATURE_FLAG_DENY_DOMAIN_SHADER_ROOT_ACCESS = 0x8,
    VKD3D_ROOT_SIGNATURE_FLAG_DENY_GEOMETRY_SHADER_ROOT_ACCESS = 0x10,
    VKD3D_ROOT_SIGNATURE_FLAG_DENY_PIXEL_SHADER_ROOT_ACCESS = 0x20,
    VKD3D_ROOT_SIGNATURE_FLAG_ALLOW_STREAM_OUTPUT = 0x40,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_ROOT_SIGNATURE_FLAGS),
};

struct vkd3d_root_signature_desc
{
    unsigned int parameter_count;
    const struct vkd3d_root_parameter *parameters;
    unsigned int static_sampler_count;
    const struct vkd3d_static_sampler_desc *static_samplers;
    enum vkd3d_root_signature_flags flags;
};

/* root signature 1.1 */
enum vkd3d_root_descriptor_flags
{
    VKD3D_ROOT_DESCRIPTOR_FLAG_NONE = 0x0,
    VKD3D_ROOT_DESCRIPTOR_FLAG_DATA_VOLATILE = 0x2,
    VKD3D_ROOT_DESCRIPTOR_FLAG_DATA_STATIC_WHILE_SET_AT_EXECUTE = 0x4,
    VKD3D_ROOT_DESCRIPTOR_FLAG_DATA_STATIC = 0x8,
};

enum vkd3d_descriptor_range_flags
{
    VKD3D_DESCRIPTOR_RANGE_FLAG_NONE = 0x0,
    VKD3D_DESCRIPTOR_RANGE_FLAG_DESCRIPTORS_VOLATILE = 0x1,
    VKD3D_DESCRIPTOR_RANGE_FLAG_DATA_VOLATILE = 0x2,
    VKD3D_DESCRIPTOR_RANGE_FLAG_DATA_STATIC_WHILE_SET_AT_EXECUTE = 0x4,
    VKD3D_DESCRIPTOR_RANGE_FLAG_DATA_STATIC = 0x8,
};

struct vkd3d_descriptor_range1
{
    enum vkd3d_descriptor_range_type range_type;
    unsigned int descriptor_count;
    unsigned int base_shader_register;
    unsigned int register_space;
    enum vkd3d_descriptor_range_flags flags;
    unsigned int descriptor_table_offset;
};

struct vkd3d_root_descriptor_table1
{
    unsigned int descriptor_range_count;
    const struct vkd3d_descriptor_range1 *descriptor_ranges;
};

struct vkd3d_root_descriptor1
{
    unsigned int shader_register;
    unsigned int register_space;
    enum vkd3d_root_descriptor_flags flags;
};

struct vkd3d_root_parameter1
{
    enum vkd3d_root_parameter_type parameter_type;
    union
    {
        struct vkd3d_root_descriptor_table1 descriptor_table;
        struct vkd3d_root_constants constants;
        struct vkd3d_root_descriptor1 descriptor;
    } u;
    enum vkd3d_shader_visibility shader_visibility;
};

struct vkd3d_root_signature_desc1
{
    unsigned int parameter_count;
    const struct vkd3d_root_parameter1 *parameters;
    unsigned int static_sampler_count;
    const struct vkd3d_static_sampler_desc *static_samplers;
    enum vkd3d_root_signature_flags flags;
};

enum vkd3d_root_signature_version
{
    VKD3D_ROOT_SIGNATURE_VERSION_1_0 = 0x1,
    VKD3D_ROOT_SIGNATURE_VERSION_1_1 = 0x2,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_ROOT_SIGNATURE_VERSION),
};

struct vkd3d_versioned_root_signature_desc
{
    enum vkd3d_root_signature_version version;
    union
    {
        struct vkd3d_root_signature_desc v_1_0;
        struct vkd3d_root_signature_desc1 v_1_1;
    } u;
};

/* FIXME: Add support for 64 UAV bind slots. */
#define VKD3D_SHADER_MAX_UNORDERED_ACCESS_VIEWS 8

struct vkd3d_shader_scan_info
{
    enum vkd3d_shader_structure_type type;
    void *next;

    unsigned int uav_read_mask;    /* VKD3D_SHADER_MAX_UNORDERED_ACCESS_VIEWS */
    unsigned int uav_counter_mask; /* VKD3D_SHADER_MAX_UNORDERED_ACCESS_VIEWS */
    unsigned int sampler_comparison_mode_mask; /* 16 */
    bool use_vocp;
};

enum vkd3d_component_type
{
    VKD3D_TYPE_VOID    = 0,
    VKD3D_TYPE_UINT    = 1,
    VKD3D_TYPE_INT     = 2,
    VKD3D_TYPE_FLOAT   = 3,
    VKD3D_TYPE_BOOL,
    VKD3D_TYPE_COUNT,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_COMPONENT_TYPE),
};

enum vkd3d_sysval_semantic
{
    VKD3D_SV_NONE                      = 0,
    VKD3D_SV_POSITION                  = 1,
    VKD3D_SV_CLIP_DISTANCE             = 2,
    VKD3D_SV_CULL_DISTANCE             = 3,
    VKD3D_SV_RENDER_TARGET_ARRAY_INDEX = 4,
    VKD3D_SV_VIEWPORT_ARRAY_INDEX      = 5,
    VKD3D_SV_VERTEX_ID                 = 6,
    VKD3D_SV_PRIMITIVE_ID              = 7,
    VKD3D_SV_INSTANCE_ID               = 8,
    VKD3D_SV_IS_FRONT_FACE             = 9,
    VKD3D_SV_SAMPLE_INDEX              = 10,
    VKD3D_SV_TESS_FACTOR_QUADEDGE      = 11,
    VKD3D_SV_TESS_FACTOR_QUADINT       = 12,
    VKD3D_SV_TESS_FACTOR_TRIEDGE       = 13,
    VKD3D_SV_TESS_FACTOR_TRIINT        = 14,
    VKD3D_SV_TESS_FACTOR_LINEDET       = 15,
    VKD3D_SV_TESS_FACTOR_LINEDEN       = 16,

    VKD3D_FORCE_32_BIT_ENUM(VKD3D_SYSVAL_SEMANTIC),
};

enum vkd3d_shader_minimum_precision
{
    VKD3D_SHADER_MINIMUM_PRECISION_NONE      = 0,
    VKD3D_SHADER_MINIMUM_PRECISION_FLOAT_16  = 1,
    VKD3D_SHADER_MINIMUM_PRECISION_FLOAT_8_2 = 2,
    VKD3D_SHADER_MINIMUM_PRECISION_INT_16    = 4,
    VKD3D_SHADER_MINIMUM_PRECISION_UINT_16   = 5,
};

struct vkd3d_shader_signature_element
{
    const char *semantic_name;
    unsigned int semantic_index;
    unsigned int stream_index;
    enum vkd3d_sysval_semantic sysval_semantic;
    enum vkd3d_component_type component_type;
    unsigned int register_index;
    unsigned int mask;
    enum vkd3d_shader_minimum_precision min_precision;
};

struct vkd3d_shader_signature
{
    struct vkd3d_shader_signature_element *elements;
    unsigned int element_count;
};

/* swizzle bits fields: wwzzyyxx */
#define VKD3D_SWIZZLE_X (0u)
#define VKD3D_SWIZZLE_Y (1u)
#define VKD3D_SWIZZLE_Z (2u)
#define VKD3D_SWIZZLE_W (3u)

#define VKD3D_SWIZZLE_MASK (0x3u)
#define VKD3D_SWIZZLE_SHIFT(idx) (2u * (idx))

#define VKD3D_SWIZZLE(x, y, z, w) \
        (((x & VKD3D_SWIZZLE_MASK) << VKD3D_SWIZZLE_SHIFT(0)) \
        | ((y & VKD3D_SWIZZLE_MASK) << VKD3D_SWIZZLE_SHIFT(1)) \
        | ((z & VKD3D_SWIZZLE_MASK) << VKD3D_SWIZZLE_SHIFT(2)) \
        | ((w & VKD3D_SWIZZLE_MASK) << VKD3D_SWIZZLE_SHIFT(3)))

#define VKD3D_NO_SWIZZLE \
        VKD3D_SWIZZLE(VKD3D_SWIZZLE_X, VKD3D_SWIZZLE_Y, VKD3D_SWIZZLE_Z, VKD3D_SWIZZLE_W)

#ifndef VKD3D_SHADER_NO_PROTOTYPES

int vkd3d_shader_compile_dxbc(const struct vkd3d_shader_code *dxbc,
        struct vkd3d_shader_code *spirv, unsigned int compiler_options,
        const struct vkd3d_shader_interface_info *shader_interface_info,
        const struct vkd3d_shader_compile_arguments *compile_args);
void vkd3d_shader_free_shader_code(struct vkd3d_shader_code *code);

int vkd3d_shader_parse_root_signature(const struct vkd3d_shader_code *dxbc,
        struct vkd3d_versioned_root_signature_desc *root_signature);
void vkd3d_shader_free_root_signature(struct vkd3d_versioned_root_signature_desc *root_signature);

/* FIXME: Add support for returning error messages (ID3DBlob). */
int vkd3d_shader_serialize_root_signature(const struct vkd3d_versioned_root_signature_desc *root_signature,
        struct vkd3d_shader_code *dxbc);

int vkd3d_shader_convert_root_signature(struct vkd3d_versioned_root_signature_desc *dst,
        enum vkd3d_root_signature_version version, const struct vkd3d_versioned_root_signature_desc *src);

int vkd3d_shader_scan_dxbc(const struct vkd3d_shader_code *dxbc,
        struct vkd3d_shader_scan_info *scan_info);

int vkd3d_shader_parse_input_signature(const struct vkd3d_shader_code *dxbc,
        struct vkd3d_shader_signature *signature);
struct vkd3d_shader_signature_element *vkd3d_shader_find_signature_element(
        const struct vkd3d_shader_signature *signature, const char *semantic_name,
        unsigned int semantic_index, unsigned int stream_index);
void vkd3d_shader_free_shader_signature(struct vkd3d_shader_signature *signature);

#endif  /* VKD3D_SHADER_NO_PROTOTYPES */

/*
 * Function pointer typedefs for vkd3d-shader functions.
 */
typedef int (*PFN_vkd3d_shader_compile_dxbc)(const struct vkd3d_shader_code *dxbc,
        struct vkd3d_shader_code *spirv, unsigned int compiler_options,
        const struct vkd3d_shader_interface_info *shader_interface_info,
        const struct vkd3d_shader_compile_arguments *compile_args);
typedef void (*PFN_vkd3d_shader_free_shader_code)(struct vkd3d_shader_code *code);

typedef int (*PFN_vkd3d_shader_parse_root_signature)(const struct vkd3d_shader_code *dxbc,
        struct vkd3d_versioned_root_signature_desc *root_signature);
typedef void (*PFN_vkd3d_shader_free_root_signature)(struct vkd3d_versioned_root_signature_desc *root_signature);

typedef int (*PFN_vkd3d_shader_serialize_root_signature)(
        const struct vkd3d_versioned_root_signature_desc *root_signature, struct vkd3d_shader_code *dxbc);

typedef int (*PFN_vkd3d_shader_convert_root_signature)(struct vkd3d_versioned_root_signature_desc *dst,
        enum vkd3d_root_signature_version version, const struct vkd3d_versioned_root_signature_desc *src);

typedef int (*PFN_vkd3d_shader_scan_dxbc)(const struct vkd3d_shader_code *dxbc,
        struct vkd3d_shader_scan_info *scan_info);

typedef int (*PFN_vkd3d_shader_parse_input_signature)(const struct vkd3d_shader_code *dxbc,
        struct vkd3d_shader_signature *signature);
typedef struct vkd3d_shader_signature_element * (*PFN_vkd3d_shader_find_signature_element)(
        const struct vkd3d_shader_signature *signature, const char *semantic_name,
        unsigned int semantic_index, unsigned int stream_index);
typedef void (*PFN_vkd3d_shader_free_shader_signature)(struct vkd3d_shader_signature *signature);

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif  /* __VKD3D_SHADER_H */
