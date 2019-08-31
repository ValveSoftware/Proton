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
 */

#include "vkd3d_shader_private.h"
#include "rbtree.h"

#include <stdarg.h>
#include <stdio.h>

#ifdef HAVE_SPIRV_UNIFIED1_SPIRV_H
# include "spirv/unified1/spirv.h"
#else
# include "vulkan/spirv.h"
#endif  /* HAVE_SPIRV_UNIFIED1_SPIRV_H */
#ifdef HAVE_SPIRV_UNIFIED1_GLSL_STD_450_H
# include "spirv/unified1/GLSL.std.450.h"
#else
# include "vulkan/GLSL.std.450.h"
#endif  /* HAVE_SPIRV_UNIFIED1_GLSL_STD_450_H */

#ifdef HAVE_SPIRV_TOOLS
# include "spirv-tools/libspirv.h"

static spv_target_env spv_target_env_from_vkd3d(enum vkd3d_shader_target target)
{
    switch (target)
    {
        case VKD3D_SHADER_TARGET_SPIRV_OPENGL_4_5:
            return SPV_ENV_OPENGL_4_5;
        case VKD3D_SHADER_TARGET_SPIRV_VULKAN_1_0:
            return SPV_ENV_VULKAN_1_0;
        default:
            ERR("Invalid shader target %#x.\n", target);
            return SPV_ENV_VULKAN_1_0;
    }
}

static void vkd3d_spirv_dump(const struct vkd3d_shader_code *spirv, enum vkd3d_shader_target target)
{
    const static uint32_t options
            = SPV_BINARY_TO_TEXT_OPTION_FRIENDLY_NAMES | SPV_BINARY_TO_TEXT_OPTION_INDENT;
    spv_diagnostic diagnostic = NULL;
    spv_text text = NULL;
    spv_context context;
    spv_result_t ret;

    context = spvContextCreate(spv_target_env_from_vkd3d(target));

    if (!(ret = spvBinaryToText(context, spirv->code, spirv->size / sizeof(uint32_t),
            options, &text, &diagnostic)))
    {
        const char *str, *current = text->str;
        while ((str = strchr(current, '\n')))
        {
            TRACE("%.*s\n", (int)(str - current), current);
            current = str + 1;
        }
    }
    else
    {
        FIXME("Failed to convert SPIR-V binary to text, ret %d.\n", ret);
        FIXME("Diagnostic message: %s.\n", debugstr_a(diagnostic->error));
    }

    spvTextDestroy(text);
    spvDiagnosticDestroy(diagnostic);
    spvContextDestroy(context);
}

static void vkd3d_spirv_validate(const struct vkd3d_shader_code *spirv, enum vkd3d_shader_target target)
{
    spv_diagnostic diagnostic = NULL;
    spv_context context;
    spv_result_t ret;

    context = spvContextCreate(spv_target_env_from_vkd3d(target));

    if ((ret = spvValidateBinary(context, spirv->code, spirv->size / sizeof(uint32_t),
            &diagnostic)))
    {
        FIXME("Failed to validate SPIR-V binary, ret %d.\n", ret);
        FIXME("Diagnostic message: %s.\n", debugstr_a(diagnostic->error));
    }

    spvDiagnosticDestroy(diagnostic);
    spvContextDestroy(context);
}

#else

static void vkd3d_spirv_dump(const struct vkd3d_shader_code *spirv, enum vkd3d_shader_target target) {}
static void vkd3d_spirv_validate(const struct vkd3d_shader_code *spirv, enum vkd3d_shader_target target) {}

#endif  /* HAVE_SPIRV_TOOLS */

struct vkd3d_struct
{
    enum vkd3d_shader_structure_type type;
    const void *next;
};

#define vkd3d_find_struct(c, t) vkd3d_find_struct_(c, VKD3D_SHADER_STRUCTURE_TYPE_##t)
static const void *vkd3d_find_struct_(const struct vkd3d_struct *chain,
        enum vkd3d_shader_structure_type type)
{
    while (chain)
    {
        if (chain->type == type)
            return chain;

        chain = chain->next;
    }

    return NULL;
}

static enum vkd3d_shader_input_sysval_semantic vkd3d_siv_from_sysval(enum vkd3d_sysval_semantic sysval)
{
    switch (sysval)
    {
        case VKD3D_SV_NONE:
            return VKD3D_SIV_NONE;
        case VKD3D_SV_POSITION:
            return VKD3D_SIV_POSITION;
        default:
            FIXME("Unhandled sysval %#x.\n", sysval);
            return VKD3D_SIV_NONE;
    }
}

#define VKD3D_SPIRV_VERSION 0x00010000
#define VKD3D_SPIRV_GENERATOR_ID 18
#define VKD3D_SPIRV_GENERATOR_VERSION 1
#define VKD3D_SPIRV_GENERATOR_MAGIC ((VKD3D_SPIRV_GENERATOR_ID << 16) | VKD3D_SPIRV_GENERATOR_VERSION)

struct vkd3d_spirv_stream
{
    uint32_t *words;
    size_t capacity;
    size_t word_count;

    struct list inserted_chunks;
};

static void vkd3d_spirv_stream_init(struct vkd3d_spirv_stream *stream)
{
    stream->capacity = 256;
    if (!(stream->words = vkd3d_calloc(stream->capacity, sizeof(*stream->words))))
        stream->capacity = 0;
    stream->word_count = 0;

    list_init(&stream->inserted_chunks);
}

struct vkd3d_spirv_chunk
{
    struct list entry;
    size_t location;
    size_t word_count;
    uint32_t words[];
};

static void vkd3d_spirv_stream_clear(struct vkd3d_spirv_stream *stream)
{
    struct vkd3d_spirv_chunk *c1, *c2;

    stream->word_count = 0;

    LIST_FOR_EACH_ENTRY_SAFE(c1, c2, &stream->inserted_chunks, struct vkd3d_spirv_chunk, entry)
        vkd3d_free(c1);

    list_init(&stream->inserted_chunks);
}

static void vkd3d_spirv_stream_free(struct vkd3d_spirv_stream *stream)
{
    vkd3d_free(stream->words);

    vkd3d_spirv_stream_clear(stream);
}

static size_t vkd3d_spirv_stream_current_location(struct vkd3d_spirv_stream *stream)
{
    return stream->word_count;
}

static void vkd3d_spirv_stream_insert(struct vkd3d_spirv_stream *stream,
        size_t location, const uint32_t *words, unsigned int word_count)
{
    struct vkd3d_spirv_chunk *chunk, *current;

    if (!(chunk = vkd3d_malloc(offsetof(struct vkd3d_spirv_chunk, words[word_count]))))
        return;

    chunk->location = location;
    chunk->word_count = word_count;
    memcpy(chunk->words, words, word_count * sizeof(*words));

    LIST_FOR_EACH_ENTRY(current, &stream->inserted_chunks, struct vkd3d_spirv_chunk, entry)
    {
        if (current->location > location)
        {
            list_add_before(&current->entry, &chunk->entry);
            return;
        }
    }

    list_add_tail(&stream->inserted_chunks, &chunk->entry);
}

static bool vkd3d_spirv_stream_append(struct vkd3d_spirv_stream *dst_stream,
        const struct vkd3d_spirv_stream *src_stream)
{
    size_t word_count, src_word_count = src_stream->word_count;
    struct vkd3d_spirv_chunk *chunk;
    size_t src_location = 0;

    assert(list_empty(&dst_stream->inserted_chunks));

    LIST_FOR_EACH_ENTRY(chunk, &src_stream->inserted_chunks, struct vkd3d_spirv_chunk, entry)
        src_word_count += chunk->word_count;

    if (!vkd3d_array_reserve((void **)&dst_stream->words, &dst_stream->capacity,
            dst_stream->word_count + src_word_count, sizeof(*dst_stream->words)))
        return false;

    assert(dst_stream->word_count + src_word_count <= dst_stream->capacity);
    LIST_FOR_EACH_ENTRY(chunk, &src_stream->inserted_chunks, struct vkd3d_spirv_chunk, entry)
    {
        assert(src_location <= chunk->location);
        word_count = chunk->location - src_location;
        memcpy(&dst_stream->words[dst_stream->word_count], &src_stream->words[src_location],
                word_count * sizeof(*src_stream->words));
        dst_stream->word_count += word_count;
        src_location += word_count;
        assert(src_location == chunk->location);

        memcpy(&dst_stream->words[dst_stream->word_count], chunk->words,
                chunk->word_count * sizeof(*chunk->words));
        dst_stream->word_count += chunk->word_count;
    }

    word_count = src_stream->word_count - src_location;
    memcpy(&dst_stream->words[dst_stream->word_count], &src_stream->words[src_location],
            word_count * sizeof(*src_stream->words));
    dst_stream->word_count += word_count;
    return true;
}

struct vkd3d_spirv_builder
{
    uint64_t capability_mask;
    uint64_t capability_draw_parameters : 1;
    uint64_t capability_demote_to_helper_invocation : 1;
    uint32_t ext_instr_set_glsl_450;
    SpvExecutionModel execution_model;

    uint32_t current_id;
    uint32_t main_function_id;
    struct rb_tree declarations;
    uint32_t type_sampler_id;
    uint32_t type_bool_id;
    uint32_t type_void_id;

    struct vkd3d_spirv_stream debug_stream; /* debug instructions */
    struct vkd3d_spirv_stream annotation_stream; /* decoration instructions */
    struct vkd3d_spirv_stream global_stream; /* types, constants, global variables */
    struct vkd3d_spirv_stream function_stream; /* function definitions */

    struct vkd3d_spirv_stream execution_mode_stream; /* execution mode instructions */

    struct vkd3d_spirv_stream original_function_stream;
    struct vkd3d_spirv_stream insertion_stream;
    size_t insertion_location;

    size_t main_function_location;

    /* entry point interface */
    uint32_t *iface;
    size_t iface_capacity;
    size_t iface_element_count;
};

static uint32_t vkd3d_spirv_alloc_id(struct vkd3d_spirv_builder *builder)
{
    return builder->current_id++;
}

static void vkd3d_spirv_enable_capability(struct vkd3d_spirv_builder *builder,
        SpvCapability cap)
{
    if (cap < sizeof(builder->capability_mask) * CHAR_BIT)
    {
        builder->capability_mask |= 1ull << cap;
    }
    else if (cap == SpvCapabilityDrawParameters)
    {
        builder->capability_draw_parameters = 1;
    }
    else if (cap == SpvCapabilityDemoteToHelperInvocationEXT)
    {
        builder->capability_demote_to_helper_invocation = 1;
    }
    else
    {
        FIXME("Unhandled capability %#x.\n", cap);
    }
}

static uint32_t vkd3d_spirv_get_glsl_std450_instr_set(struct vkd3d_spirv_builder *builder)
{
    if (!builder->ext_instr_set_glsl_450)
        builder->ext_instr_set_glsl_450 = vkd3d_spirv_alloc_id(builder);

    return builder->ext_instr_set_glsl_450;
}

static void vkd3d_spirv_add_iface_variable(struct vkd3d_spirv_builder *builder,
        uint32_t id)
{
    if (!vkd3d_array_reserve((void **)&builder->iface, &builder->iface_capacity,
            builder->iface_element_count + 1, sizeof(*builder->iface)))
        return;

    builder->iface[builder->iface_element_count++] = id;
}

static void vkd3d_spirv_set_execution_model(struct vkd3d_spirv_builder *builder,
        SpvExecutionModel model)
{
    builder->execution_model = model;

    switch (model)
    {
        case SpvExecutionModelVertex:
        case SpvExecutionModelFragment:
        case SpvExecutionModelGLCompute:
            vkd3d_spirv_enable_capability(builder, SpvCapabilityShader);
            break;
        case SpvExecutionModelTessellationControl:
        case SpvExecutionModelTessellationEvaluation:
            vkd3d_spirv_enable_capability(builder, SpvCapabilityTessellation);
            break;
        case SpvExecutionModelGeometry:
            vkd3d_spirv_enable_capability(builder, SpvCapabilityGeometry);
            break;
        default:
            ERR("Unhandled execution model %#x.\n", model);
    }
}

static uint32_t vkd3d_spirv_opcode_word(SpvOp op, unsigned int word_count)
{
    assert(!(op & ~SpvOpCodeMask));
    return (word_count << SpvWordCountShift) | op;
}

static void vkd3d_spirv_build_word(struct vkd3d_spirv_stream *stream, uint32_t word)
{
    if (!vkd3d_array_reserve((void **)&stream->words, &stream->capacity,
            stream->word_count + 1, sizeof(*stream->words)))
        return;

    stream->words[stream->word_count++] = word;
}

static unsigned int vkd3d_spirv_string_word_count(const char *str)
{
    return align(strlen(str) + 1, sizeof(uint32_t)) / sizeof(uint32_t);
}

static void vkd3d_spirv_build_string(struct vkd3d_spirv_stream *stream,
        const char *str, unsigned int word_count)
{
    unsigned int word_idx, i;
    const char *ptr = str;

    for (word_idx = 0; word_idx < word_count; ++word_idx)
    {
        uint32_t word = 0;
        for (i = 0; i < sizeof(uint32_t) && *ptr; ++i)
            word |= (uint32_t)*ptr++ << (8 * i);
        vkd3d_spirv_build_word(stream, word);
    }
}

typedef uint32_t (*vkd3d_spirv_build_pfn)(struct vkd3d_spirv_builder *builder);
typedef uint32_t (*vkd3d_spirv_build1_pfn)(struct vkd3d_spirv_builder *builder,
        uint32_t operand0);
typedef uint32_t (*vkd3d_spirv_build1v_pfn)(struct vkd3d_spirv_builder *builder,
        uint32_t operand0, const uint32_t *operands, unsigned int operand_count);
typedef uint32_t (*vkd3d_spirv_build2_pfn)(struct vkd3d_spirv_builder *builder,
        uint32_t operand0, uint32_t operand1);
typedef uint32_t (*vkd3d_spirv_build7_pfn)(struct vkd3d_spirv_builder *builder,
        uint32_t operand0, uint32_t operand1, uint32_t operand2, uint32_t operand3,
        uint32_t operand4, uint32_t operand5, uint32_t operand6);

static uint32_t vkd3d_spirv_build_once(struct vkd3d_spirv_builder *builder,
        uint32_t *id, vkd3d_spirv_build_pfn build_pfn)
{
    if (!(*id))
        *id = build_pfn(builder);
    return *id;
}

#define MAX_SPIRV_DECLARATION_PARAMETER_COUNT 7

struct vkd3d_spirv_declaration
{
    struct rb_entry entry;

    SpvOp op;
    unsigned int parameter_count;
    uint32_t parameters[MAX_SPIRV_DECLARATION_PARAMETER_COUNT];
    uint32_t id;
};

static int vkd3d_spirv_declaration_compare(const void *key, const struct rb_entry *e)
{
    const struct vkd3d_spirv_declaration *a = key;
    const struct vkd3d_spirv_declaration *b = RB_ENTRY_VALUE(e, const struct vkd3d_spirv_declaration, entry);

    if (a->op != b->op)
        return a->op - b->op;
    if (a->parameter_count != b->parameter_count)
        return a->parameter_count - b->parameter_count;
    assert(a->parameter_count <= ARRAY_SIZE(a->parameters));
    return memcmp(&a->parameters, &b->parameters, a->parameter_count * sizeof(*a->parameters));
}

static void vkd3d_spirv_declaration_free(struct rb_entry *entry, void *context)
{
    struct vkd3d_spirv_declaration *d = RB_ENTRY_VALUE(entry, struct vkd3d_spirv_declaration, entry);

    vkd3d_free(d);
}

static void vkd3d_spirv_insert_declaration(struct vkd3d_spirv_builder *builder,
        const struct vkd3d_spirv_declaration *declaration)
{
    struct vkd3d_spirv_declaration *d;

    assert(declaration->parameter_count <= ARRAY_SIZE(declaration->parameters));

    if (!(d = vkd3d_malloc(sizeof(*d))))
        return;
    memcpy(d, declaration, sizeof(*d));
    if (rb_put(&builder->declarations, d, &d->entry) == -1)
    {
        ERR("Failed to insert declaration entry.\n");
        vkd3d_free(d);
    }
}

static uint32_t vkd3d_spirv_build_once1(struct vkd3d_spirv_builder *builder,
        SpvOp op, uint32_t operand0, vkd3d_spirv_build1_pfn build_pfn)
{
    struct vkd3d_spirv_declaration declaration;
    struct rb_entry *entry;

    declaration.op = op;
    declaration.parameter_count = 1;
    declaration.parameters[0] = operand0;

    if ((entry = rb_get(&builder->declarations, &declaration)))
        return RB_ENTRY_VALUE(entry, struct vkd3d_spirv_declaration, entry)->id;

    declaration.id = build_pfn(builder, operand0);
    vkd3d_spirv_insert_declaration(builder, &declaration);
    return declaration.id;
}

static uint32_t vkd3d_spirv_build_once1v(struct vkd3d_spirv_builder *builder,
        SpvOp op, uint32_t operand0, const uint32_t *operands, unsigned int operand_count,
        vkd3d_spirv_build1v_pfn build_pfn)
{
    struct vkd3d_spirv_declaration declaration;
    unsigned int i, param_idx = 0;
    struct rb_entry *entry;

    if (operand_count >= ARRAY_SIZE(declaration.parameters))
    {
        WARN("Unsupported parameter count %u (opcode %#x).\n", operand_count + 1, op);
        return build_pfn(builder, operand0, operands, operand_count);
    }

    declaration.op = op;
    declaration.parameters[param_idx++] = operand0;
    for (i = 0; i < operand_count; ++i)
        declaration.parameters[param_idx++] = operands[i];
    declaration.parameter_count = param_idx;

    if ((entry = rb_get(&builder->declarations, &declaration)))
        return RB_ENTRY_VALUE(entry, struct vkd3d_spirv_declaration, entry)->id;

    declaration.id = build_pfn(builder, operand0, operands, operand_count);
    vkd3d_spirv_insert_declaration(builder, &declaration);
    return declaration.id;
}

static uint32_t vkd3d_spirv_build_once2(struct vkd3d_spirv_builder *builder,
        SpvOp op, uint32_t operand0, uint32_t operand1, vkd3d_spirv_build2_pfn build_pfn)
{
    struct vkd3d_spirv_declaration declaration;
    struct rb_entry *entry;

    declaration.op = op;
    declaration.parameter_count = 2;
    declaration.parameters[0] = operand0;
    declaration.parameters[1] = operand1;

    if ((entry = rb_get(&builder->declarations, &declaration)))
        return RB_ENTRY_VALUE(entry, struct vkd3d_spirv_declaration, entry)->id;

    declaration.id = build_pfn(builder, operand0, operand1);
    vkd3d_spirv_insert_declaration(builder, &declaration);
    return declaration.id;
}

static uint32_t vkd3d_spirv_build_once7(struct vkd3d_spirv_builder *builder,
        SpvOp op, const uint32_t *operands, vkd3d_spirv_build7_pfn build_pfn)
{
    struct vkd3d_spirv_declaration declaration;
    struct rb_entry *entry;

    declaration.op = op;
    declaration.parameter_count = 7;
    memcpy(&declaration.parameters, operands, declaration.parameter_count * sizeof(*operands));

    if ((entry = rb_get(&builder->declarations, &declaration)))
        return RB_ENTRY_VALUE(entry, struct vkd3d_spirv_declaration, entry)->id;

    declaration.id = build_pfn(builder, operands[0], operands[1], operands[2],
            operands[3], operands[4], operands[5], operands[6]);
    vkd3d_spirv_insert_declaration(builder, &declaration);
    return declaration.id;
}

/*
 * vkd3d_spirv_build_op[1-3][v]()
 * vkd3d_spirv_build_op_[t][r][1-3][v]()
 *
 * t   - result type
 * r   - result id
 * 1-3 - the number of operands
 * v   - variable number of operands
 */
static void vkd3d_spirv_build_op(struct vkd3d_spirv_stream *stream, SpvOp op)
{
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(op, 1));
}

static void vkd3d_spirv_build_op1(struct vkd3d_spirv_stream *stream,
        SpvOp op, uint32_t operand)
{
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(op, 2));
    vkd3d_spirv_build_word(stream, operand);
}

static void vkd3d_spirv_build_op1v(struct vkd3d_spirv_stream *stream,
        SpvOp op, uint32_t operand0, const uint32_t *operands, unsigned int operand_count)
{
    unsigned int i;
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(op, 2 + operand_count));
    vkd3d_spirv_build_word(stream, operand0);
    for (i = 0; i < operand_count; ++i)
        vkd3d_spirv_build_word(stream, operands[i]);
}

static void vkd3d_spirv_build_op2v(struct vkd3d_spirv_stream *stream,
        SpvOp op, uint32_t operand0, uint32_t operand1,
        const uint32_t *operands, unsigned int operand_count)
{
    unsigned int i;
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(op, 3 + operand_count));
    vkd3d_spirv_build_word(stream, operand0);
    vkd3d_spirv_build_word(stream, operand1);
    for (i = 0; i < operand_count; ++i)
        vkd3d_spirv_build_word(stream, operands[i]);
}

static void vkd3d_spirv_build_op3v(struct vkd3d_spirv_stream *stream,
        SpvOp op, uint32_t operand0, uint32_t operand1, uint32_t operand2,
        const uint32_t *operands, unsigned int operand_count)
{
    unsigned int i;
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(op, 4 + operand_count));
    vkd3d_spirv_build_word(stream, operand0);
    vkd3d_spirv_build_word(stream, operand1);
    vkd3d_spirv_build_word(stream, operand2);
    for (i = 0; i < operand_count; ++i)
        vkd3d_spirv_build_word(stream, operands[i]);
}

static void vkd3d_spirv_build_op2(struct vkd3d_spirv_stream *stream,
        SpvOp op, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op2v(stream, op, operand0, operand1, NULL, 0);
}

static void vkd3d_spirv_build_op3(struct vkd3d_spirv_stream *stream,
        SpvOp op, uint32_t operand0, uint32_t operand1, uint32_t operand2)
{
    return vkd3d_spirv_build_op2v(stream, op, operand0, operand1, &operand2, 1);
}

static uint32_t vkd3d_spirv_build_op_rv(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op,
        const uint32_t *operands, unsigned int operand_count)
{
    uint32_t result_id = vkd3d_spirv_alloc_id(builder);
    vkd3d_spirv_build_op1v(stream, op, result_id, operands, operand_count);
    return result_id;
}

static uint32_t vkd3d_spirv_build_op_r(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op)
{
    return vkd3d_spirv_build_op_rv(builder, stream, op, NULL, 0);
}

static uint32_t vkd3d_spirv_build_op_r1(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op, uint32_t operand0)
{
    return vkd3d_spirv_build_op_rv(builder, stream, op, &operand0, 1);
}

static uint32_t vkd3d_spirv_build_op_r2(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op, uint32_t operand0, uint32_t operand1)
{
    uint32_t operands[] = {operand0, operand1};
    return vkd3d_spirv_build_op_rv(builder, stream, op, operands, ARRAY_SIZE(operands));
}

static uint32_t vkd3d_spirv_build_op_r1v(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op, uint32_t operand0,
        const uint32_t *operands, unsigned int operand_count)
{
    uint32_t result_id = vkd3d_spirv_alloc_id(builder);
    vkd3d_spirv_build_op2v(stream, op, result_id, operand0, operands, operand_count);
    return result_id;
}

static uint32_t vkd3d_spirv_build_op_trv(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op, uint32_t result_type,
        const uint32_t *operands, unsigned int operand_count)
{
    uint32_t result_id = vkd3d_spirv_alloc_id(builder);
    vkd3d_spirv_build_op2v(stream, op, result_type, result_id, operands, operand_count);
    return result_id;
}

static uint32_t vkd3d_spirv_build_op_tr(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op, uint32_t result_type)
{
    return vkd3d_spirv_build_op_trv(builder, stream, op, result_type, NULL, 0);
}

static uint32_t vkd3d_spirv_build_op_tr1(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op, uint32_t result_type,
        uint32_t operand0)
{
    return vkd3d_spirv_build_op_trv(builder, stream, op, result_type, &operand0, 1);
}

static uint32_t vkd3d_spirv_build_op_tr2(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op, uint32_t result_type,
        uint32_t operand0, uint32_t operand1)
{
    uint32_t operands[] = {operand0, operand1};
    return vkd3d_spirv_build_op_trv(builder, stream, op, result_type,
            operands, ARRAY_SIZE(operands));
}

static uint32_t vkd3d_spirv_build_op_tr3(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op, uint32_t result_type,
        uint32_t operand0, uint32_t operand1, uint32_t operand2)
{
    uint32_t operands[] = {operand0, operand1, operand2};
    return vkd3d_spirv_build_op_trv(builder, stream, op, result_type,
            operands, ARRAY_SIZE(operands));
}

static uint32_t vkd3d_spirv_build_op_tr1v(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op, uint32_t result_type,
        uint32_t operand0, const uint32_t *operands, unsigned int operand_count)
{
    uint32_t result_id = vkd3d_spirv_alloc_id(builder);
    vkd3d_spirv_build_op3v(stream, op, result_type, result_id, operand0, operands, operand_count);
    return result_id;
}

static uint32_t vkd3d_spirv_build_op_tr2v(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, SpvOp op, uint32_t result_type,
        uint32_t operand0, uint32_t operand1, const uint32_t *operands, unsigned int operand_count)
{
    uint32_t result_id = vkd3d_spirv_alloc_id(builder);
    unsigned int i;
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(op, 5 + operand_count));
    vkd3d_spirv_build_word(stream, result_type);
    vkd3d_spirv_build_word(stream, result_id);
    vkd3d_spirv_build_word(stream, operand0);
    vkd3d_spirv_build_word(stream, operand1);
    for (i = 0; i < operand_count; ++i)
        vkd3d_spirv_build_word(stream, operands[i]);
    return result_id;
}

static void vkd3d_spirv_begin_function_stream_insertion(struct vkd3d_spirv_builder *builder,
        size_t location)
{
    assert(builder->insertion_location == ~(size_t)0);

    if (vkd3d_spirv_stream_current_location(&builder->function_stream) == location)
        return;

    builder->original_function_stream = builder->function_stream;
    builder->function_stream = builder->insertion_stream;
    builder->insertion_location = location;
}

static void vkd3d_spirv_end_function_stream_insertion(struct vkd3d_spirv_builder *builder)
{
    struct vkd3d_spirv_stream *insertion_stream = &builder->insertion_stream;

    if (builder->insertion_location == ~(size_t)0)
        return;

    builder->insertion_stream = builder->function_stream;
    builder->function_stream = builder->original_function_stream;

    vkd3d_spirv_stream_insert(&builder->function_stream, builder->insertion_location,
            insertion_stream->words, insertion_stream->word_count);
    vkd3d_spirv_stream_clear(insertion_stream);
    builder->insertion_location = ~(size_t)0;
}

struct vkd3d_spirv_op_branch_conditional
{
    uint32_t opcode;
    uint32_t condition_id;
    uint32_t true_label;
    uint32_t false_label;
};

static struct vkd3d_spirv_op_branch_conditional *vkd3d_spirv_as_op_branch_conditional(
        struct vkd3d_spirv_stream *stream, size_t location)
{
    return (struct vkd3d_spirv_op_branch_conditional *)&stream->words[location];
}

static void vkd3d_spirv_build_op_capability(struct vkd3d_spirv_stream *stream,
        SpvCapability cap)
{
    vkd3d_spirv_build_op1(stream, SpvOpCapability, cap);
}

static void vkd3d_spirv_build_op_extension(struct vkd3d_spirv_stream *stream,
        const char *name)
{
    unsigned int name_size = vkd3d_spirv_string_word_count(name);
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(SpvOpExtension, 1 + name_size));
    vkd3d_spirv_build_string(stream, name, name_size);
}

static void vkd3d_spirv_build_op_ext_inst_import(struct vkd3d_spirv_stream *stream,
        uint32_t result_id, const char *name)
{
    unsigned int name_size = vkd3d_spirv_string_word_count(name);
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(SpvOpExtInstImport, 2 + name_size));
    vkd3d_spirv_build_word(stream, result_id);
    vkd3d_spirv_build_string(stream, name, name_size);
}

static uint32_t vkd3d_spirv_build_op_ext_inst(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t inst_set, uint32_t inst_number,
        uint32_t *operands, unsigned int operand_count)
{
    return vkd3d_spirv_build_op_tr2v(builder, &builder->function_stream,
            SpvOpExtInst, result_type, inst_set, inst_number, operands, operand_count);
}

static void vkd3d_spirv_build_op_memory_model(struct vkd3d_spirv_stream *stream,
        SpvAddressingModel addressing_model, SpvMemoryModel memory_model)
{
    vkd3d_spirv_build_op2(stream, SpvOpMemoryModel, addressing_model, memory_model);
}

static void vkd3d_spirv_build_op_entry_point(struct vkd3d_spirv_stream *stream,
        SpvExecutionModel model, uint32_t function_id, const char *name,
        uint32_t *interface_list, unsigned int interface_size)
{
    unsigned int i, name_size = vkd3d_spirv_string_word_count(name);
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(SpvOpEntryPoint, 3 + name_size + interface_size));
    vkd3d_spirv_build_word(stream, model);
    vkd3d_spirv_build_word(stream, function_id);
    vkd3d_spirv_build_string(stream, name, name_size);
    for (i = 0; i < interface_size; ++i)
        vkd3d_spirv_build_word(stream, interface_list[i]);
}

static void vkd3d_spirv_build_op_execution_mode(struct vkd3d_spirv_stream *stream,
        uint32_t entry_point, SpvExecutionMode mode, const uint32_t *literals, unsigned int literal_count)
{
    vkd3d_spirv_build_op2v(stream, SpvOpExecutionMode, entry_point, mode, literals, literal_count);
}

static void vkd3d_spirv_build_op_name(struct vkd3d_spirv_builder *builder,
        uint32_t id, const char *fmt, ...)
{
    struct vkd3d_spirv_stream *stream = &builder->debug_stream;
    unsigned int name_size;
    char name[1024];
    va_list args;

    va_start(args, fmt);
    vsnprintf(name, ARRAY_SIZE(name), fmt, args);
    name[ARRAY_SIZE(name) - 1] = '\0';
    va_end(args);

    name_size = vkd3d_spirv_string_word_count(name);
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(SpvOpName, 2 + name_size));
    vkd3d_spirv_build_word(stream, id);
    vkd3d_spirv_build_string(stream, name, name_size);
}

static void vkd3d_spirv_build_op_member_name(struct vkd3d_spirv_builder *builder,
        uint32_t type_id, uint32_t member, const char *fmt, ...)
{
    struct vkd3d_spirv_stream *stream = &builder->debug_stream;
    unsigned int name_size;
    char name[1024];
    va_list args;

    va_start(args, fmt);
    vsnprintf(name, ARRAY_SIZE(name), fmt, args);
    name[ARRAY_SIZE(name) - 1] = '\0';
    va_end(args);

    name_size = vkd3d_spirv_string_word_count(name);
    vkd3d_spirv_build_word(stream, vkd3d_spirv_opcode_word(SpvOpMemberName, 3 + name_size));
    vkd3d_spirv_build_word(stream, type_id);
    vkd3d_spirv_build_word(stream, member);
    vkd3d_spirv_build_string(stream, name, name_size);
}

static void vkd3d_spirv_build_op_decorate(struct vkd3d_spirv_builder *builder,
        uint32_t target_id, SpvDecoration decoration,
        uint32_t *literals, uint32_t literal_count)
{
    vkd3d_spirv_build_op2v(&builder->annotation_stream,
            SpvOpDecorate, target_id, decoration, literals, literal_count);
}

static void vkd3d_spirv_build_op_decorate1(struct vkd3d_spirv_builder *builder,
        uint32_t target_id, SpvDecoration decoration, uint32_t operand0)
{
    return vkd3d_spirv_build_op_decorate(builder, target_id, decoration, &operand0, 1);
}

static void vkd3d_spirv_build_op_member_decorate(struct vkd3d_spirv_builder *builder,
        uint32_t structure_type_id, uint32_t member_idx, SpvDecoration decoration,
        uint32_t *literals, uint32_t literal_count)
{
    vkd3d_spirv_build_op3v(&builder->annotation_stream, SpvOpMemberDecorate,
            structure_type_id, member_idx, decoration, literals, literal_count);
}

static void vkd3d_spirv_build_op_member_decorate1(struct vkd3d_spirv_builder *builder,
        uint32_t structure_type_id, uint32_t member_idx, SpvDecoration decoration, uint32_t operand0)
{
    vkd3d_spirv_build_op_member_decorate(builder, structure_type_id, member_idx, decoration, &operand0, 1);
}

static uint32_t vkd3d_spirv_build_op_type_void(struct vkd3d_spirv_builder *builder)
{
    return vkd3d_spirv_build_op_r(builder, &builder->global_stream, SpvOpTypeVoid);
}

static uint32_t vkd3d_spirv_get_op_type_void(struct vkd3d_spirv_builder *builder)
{
    return vkd3d_spirv_build_once(builder, &builder->type_void_id, vkd3d_spirv_build_op_type_void);
}

static uint32_t vkd3d_spirv_build_op_type_bool(struct vkd3d_spirv_builder *builder)
{
    return vkd3d_spirv_build_op_r(builder, &builder->global_stream, SpvOpTypeBool);
}

static uint32_t vkd3d_spirv_get_op_type_bool(struct vkd3d_spirv_builder *builder)
{
    return vkd3d_spirv_build_once(builder, &builder->type_bool_id, vkd3d_spirv_build_op_type_bool);
}

static uint32_t vkd3d_spirv_build_op_type_float(struct vkd3d_spirv_builder *builder,
        uint32_t width)
{
    return vkd3d_spirv_build_op_r1(builder, &builder->global_stream, SpvOpTypeFloat, width);
}

static uint32_t vkd3d_spirv_get_op_type_float(struct vkd3d_spirv_builder *builder,
        uint32_t width)
{
    return vkd3d_spirv_build_once1(builder, SpvOpTypeFloat, width, vkd3d_spirv_build_op_type_float);
}

static uint32_t vkd3d_spirv_build_op_type_int(struct vkd3d_spirv_builder *builder,
        uint32_t width, uint32_t signedness)
{
    return vkd3d_spirv_build_op_r2(builder, &builder->global_stream, SpvOpTypeInt, width, signedness);
}

static uint32_t vkd3d_spirv_get_op_type_int(struct vkd3d_spirv_builder *builder,
        uint32_t width, uint32_t signedness)
{
    return vkd3d_spirv_build_once2(builder, SpvOpTypeInt, width, signedness,
            vkd3d_spirv_build_op_type_int);
}

static uint32_t vkd3d_spirv_build_op_type_vector(struct vkd3d_spirv_builder *builder,
        uint32_t component_type, uint32_t component_count)
{
    return vkd3d_spirv_build_op_r2(builder, &builder->global_stream,
            SpvOpTypeVector, component_type, component_count);
}

static uint32_t vkd3d_spirv_get_op_type_vector(struct vkd3d_spirv_builder *builder,
        uint32_t component_type, uint32_t component_count)
{
    return vkd3d_spirv_build_once2(builder, SpvOpTypeVector, component_type, component_count,
            vkd3d_spirv_build_op_type_vector);
}

static uint32_t vkd3d_spirv_build_op_type_array(struct vkd3d_spirv_builder *builder,
        uint32_t element_type, uint32_t length_id)
{
    return vkd3d_spirv_build_op_r2(builder, &builder->global_stream,
            SpvOpTypeArray, element_type, length_id);
}

static uint32_t vkd3d_spirv_get_op_type_array(struct vkd3d_spirv_builder *builder,
        uint32_t element_type, uint32_t length_id)
{
    return vkd3d_spirv_build_once2(builder, SpvOpTypeArray, element_type, length_id,
            vkd3d_spirv_build_op_type_array);
}

static uint32_t vkd3d_spirv_build_op_type_struct(struct vkd3d_spirv_builder *builder,
        uint32_t *members, unsigned int member_count)
{
    return vkd3d_spirv_build_op_rv(builder, &builder->global_stream,
            SpvOpTypeStruct, members, member_count);
}

static uint32_t vkd3d_spirv_build_op_type_sampler(struct vkd3d_spirv_builder *builder)
{
    return vkd3d_spirv_build_op_r(builder, &builder->global_stream, SpvOpTypeSampler);
}

static uint32_t vkd3d_spirv_get_op_type_sampler(struct vkd3d_spirv_builder *builder)
{
    return vkd3d_spirv_build_once(builder, &builder->type_sampler_id, vkd3d_spirv_build_op_type_sampler);
}

/* Access qualifiers are not supported. */
static uint32_t vkd3d_spirv_build_op_type_image(struct vkd3d_spirv_builder *builder,
        uint32_t sampled_type_id, SpvDim dim, uint32_t depth, uint32_t arrayed,
        uint32_t ms, uint32_t sampled, SpvImageFormat format)
{
    uint32_t operands[] = {sampled_type_id, dim, depth, arrayed, ms, sampled, format};
    return vkd3d_spirv_build_op_rv(builder, &builder->global_stream,
            SpvOpTypeImage, operands, ARRAY_SIZE(operands));
}

static uint32_t vkd3d_spirv_get_op_type_image(struct vkd3d_spirv_builder *builder,
        uint32_t sampled_type_id, SpvDim dim, uint32_t depth, uint32_t arrayed,
        uint32_t ms, uint32_t sampled, SpvImageFormat format)
{
    uint32_t operands[] = {sampled_type_id, dim, depth, arrayed, ms, sampled, format};
    return vkd3d_spirv_build_once7(builder, SpvOpTypeImage, operands,
            vkd3d_spirv_build_op_type_image);
}

static uint32_t vkd3d_spirv_build_op_type_sampled_image(struct vkd3d_spirv_builder *builder,
        uint32_t image_type_id)
{
    return vkd3d_spirv_build_op_r1(builder, &builder->global_stream,
            SpvOpTypeSampledImage, image_type_id);
}

static uint32_t vkd3d_spirv_get_op_type_sampled_image(struct vkd3d_spirv_builder *builder,
        uint32_t image_type_id)
{
    return vkd3d_spirv_build_once1(builder, SpvOpTypeSampledImage, image_type_id,
            vkd3d_spirv_build_op_type_sampled_image);
}

static uint32_t vkd3d_spirv_build_op_type_function(struct vkd3d_spirv_builder *builder,
        uint32_t return_type, const uint32_t *param_types, unsigned int param_count)
{
    return vkd3d_spirv_build_op_r1v(builder, &builder->global_stream,
            SpvOpTypeFunction, return_type, param_types, param_count);
}

static uint32_t vkd3d_spirv_get_op_type_function(struct vkd3d_spirv_builder *builder,
        uint32_t return_type, const uint32_t *param_types, unsigned int param_count)
{
    return vkd3d_spirv_build_once1v(builder, SpvOpTypeFunction, return_type,
            param_types, param_count, vkd3d_spirv_build_op_type_function);
}

static uint32_t vkd3d_spirv_build_op_type_pointer(struct vkd3d_spirv_builder *builder,
        uint32_t storage_class, uint32_t type_id)
{
    return vkd3d_spirv_build_op_r2(builder, &builder->global_stream,
            SpvOpTypePointer, storage_class, type_id);
}

static uint32_t vkd3d_spirv_get_op_type_pointer(struct vkd3d_spirv_builder *builder,
        uint32_t storage_class, uint32_t type_id)
{
    return vkd3d_spirv_build_once2(builder, SpvOpTypePointer, storage_class, type_id,
            vkd3d_spirv_build_op_type_pointer);
}

/* Types larger than 32-bits are not supported. */
static uint32_t vkd3d_spirv_build_op_constant(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t value)
{
    return vkd3d_spirv_build_op_tr1(builder, &builder->global_stream,
            SpvOpConstant, result_type, value);
}

static uint32_t vkd3d_spirv_get_op_constant(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t value)
{
    return vkd3d_spirv_build_once2(builder, SpvOpConstant, result_type, value,
            vkd3d_spirv_build_op_constant);
}

static uint32_t vkd3d_spirv_build_op_constant_composite(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, const uint32_t *constituents, unsigned int constituent_count)
{
    return vkd3d_spirv_build_op_trv(builder, &builder->global_stream,
            SpvOpConstantComposite, result_type, constituents, constituent_count);
}

static uint32_t vkd3d_spirv_get_op_constant_composite(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, const uint32_t *constituents, unsigned int constituent_count)
{
    return vkd3d_spirv_build_once1v(builder, SpvOpConstantComposite, result_type,
            constituents, constituent_count, vkd3d_spirv_build_op_constant_composite);
}

static uint32_t vkd3d_spirv_build_op_spec_constant(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t value)
{
    return vkd3d_spirv_build_op_tr1(builder, &builder->global_stream,
            SpvOpSpecConstant, result_type, value);
}

static uint32_t vkd3d_spirv_build_op_variable(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, uint32_t type_id, uint32_t storage_class, uint32_t initializer)
{
    return vkd3d_spirv_build_op_tr1v(builder, stream,
            SpvOpVariable, type_id, storage_class, &initializer, !!initializer);
}

static uint32_t vkd3d_spirv_build_op_function(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t result_id, uint32_t function_control, uint32_t function_type)
{
    vkd3d_spirv_build_op3v(&builder->function_stream,
            SpvOpFunction, result_type, result_id, function_control, &function_type, 1);
    return result_id;
}

static uint32_t vkd3d_spirv_build_op_function_parameter(struct vkd3d_spirv_builder *builder,
        uint32_t result_type)
{
    return vkd3d_spirv_build_op_tr(builder, &builder->function_stream,
            SpvOpFunctionParameter, result_type);
}

static void vkd3d_spirv_build_op_function_end(struct vkd3d_spirv_builder *builder)
{
    vkd3d_spirv_build_op(&builder->function_stream, SpvOpFunctionEnd);
}

static uint32_t vkd3d_spirv_build_op_function_call(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t function_id, const uint32_t *arguments, unsigned int argument_count)
{
    return vkd3d_spirv_build_op_tr1v(builder, &builder->function_stream,
            SpvOpFunctionCall, result_type, function_id, arguments, argument_count);
}

static uint32_t vkd3d_spirv_build_op_undef(struct vkd3d_spirv_builder *builder,
        struct vkd3d_spirv_stream *stream, uint32_t type_id)
{
    return vkd3d_spirv_build_op_tr(builder, stream, SpvOpUndef, type_id);
}

static uint32_t vkd3d_spirv_build_op_access_chain(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t base_id, uint32_t *indexes, uint32_t index_count)
{
    return vkd3d_spirv_build_op_tr1v(builder, &builder->function_stream,
            SpvOpAccessChain, result_type, base_id, indexes, index_count);
}

static uint32_t vkd3d_spirv_build_op_access_chain1(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t base_id, uint32_t index)
{
    return vkd3d_spirv_build_op_access_chain(builder, result_type, base_id, &index, 1);
}

static uint32_t vkd3d_spirv_build_op_in_bounds_access_chain(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t base_id, uint32_t *indexes, uint32_t index_count)
{
    return vkd3d_spirv_build_op_tr1v(builder, &builder->function_stream,
            SpvOpInBoundsAccessChain, result_type, base_id, indexes, index_count);
}

static uint32_t vkd3d_spirv_build_op_in_bounds_access_chain1(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t base_id, uint32_t index)
{
    return vkd3d_spirv_build_op_in_bounds_access_chain(builder, result_type, base_id, &index, 1);
}

static uint32_t vkd3d_spirv_build_op_vector_shuffle(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t vector1_id, uint32_t vector2_id,
        const uint32_t *components, uint32_t component_count)
{
    return vkd3d_spirv_build_op_tr2v(builder, &builder->function_stream, SpvOpVectorShuffle,
            result_type, vector1_id, vector2_id, components, component_count);
}

static uint32_t vkd3d_spirv_build_op_composite_construct(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, const uint32_t *constituents, unsigned int constituent_count)
{
    return vkd3d_spirv_build_op_trv(builder, &builder->function_stream, SpvOpCompositeConstruct,
            result_type, constituents, constituent_count);
}

static uint32_t vkd3d_spirv_build_op_composite_extract(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t composite_id, const uint32_t *indexes, unsigned int index_count)
{
    return vkd3d_spirv_build_op_tr1v(builder, &builder->function_stream, SpvOpCompositeExtract,
            result_type, composite_id, indexes, index_count);
}

static uint32_t vkd3d_spirv_build_op_composite_extract1(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t composite_id, uint32_t index)
{
    return vkd3d_spirv_build_op_composite_extract(builder, result_type, composite_id, &index, 1);
}

static uint32_t vkd3d_spirv_build_op_composite_insert(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t object_id, uint32_t composite_id,
        const uint32_t *indexes, unsigned int index_count)
{
    return vkd3d_spirv_build_op_tr2v(builder, &builder->function_stream, SpvOpCompositeInsert,
            result_type, object_id, composite_id, indexes, index_count);
}

static uint32_t vkd3d_spirv_build_op_composite_insert1(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t object_id, uint32_t composite_id, uint32_t index)
{
    return vkd3d_spirv_build_op_composite_insert(builder, result_type, object_id, composite_id, &index, 1);
}

static uint32_t vkd3d_spirv_build_op_load(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t pointer_id, uint32_t memory_access)
{
    if (!memory_access)
        return vkd3d_spirv_build_op_tr1(builder, &builder->function_stream, SpvOpLoad,
                result_type, pointer_id);
    else
        return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream, SpvOpLoad,
                result_type, pointer_id, memory_access);
}

static void vkd3d_spirv_build_op_store(struct vkd3d_spirv_builder *builder,
        uint32_t pointer_id, uint32_t object_id, uint32_t memory_access)
{
    if (!memory_access)
        return vkd3d_spirv_build_op2(&builder->function_stream, SpvOpStore,
                pointer_id, object_id);
    else
        return vkd3d_spirv_build_op3(&builder->function_stream, SpvOpStore,
                pointer_id, object_id, memory_access);
}

static void vkd3d_spirv_build_op_copy_memory(struct vkd3d_spirv_builder *builder,
        uint32_t target_id, uint32_t source_id, uint32_t memory_access)
{
    if (!memory_access)
        return vkd3d_spirv_build_op2(&builder->function_stream, SpvOpCopyMemory,
                target_id, source_id);
    else
        return vkd3d_spirv_build_op3(&builder->function_stream, SpvOpCopyMemory,
                target_id, source_id, memory_access);
}

static uint32_t vkd3d_spirv_build_op_select(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t condition_id, uint32_t object0_id, uint32_t object1_id)
{
    return vkd3d_spirv_build_op_tr3(builder, &builder->function_stream,
            SpvOpSelect, result_type, condition_id, object0_id, object1_id);
}

static void vkd3d_spirv_build_op_kill(struct vkd3d_spirv_builder *builder)
{
    vkd3d_spirv_build_op(&builder->function_stream, SpvOpKill);
}

static void vkd3d_spirv_build_op_demote_to_helper_invocation(struct vkd3d_spirv_builder *builder)
{
    vkd3d_spirv_build_op(&builder->function_stream, SpvOpDemoteToHelperInvocationEXT);
}

static void vkd3d_spirv_build_op_return(struct vkd3d_spirv_builder *builder)
{
    vkd3d_spirv_build_op(&builder->function_stream, SpvOpReturn);
}

static uint32_t vkd3d_spirv_build_op_label(struct vkd3d_spirv_builder *builder,
        uint32_t label_id)
{
    vkd3d_spirv_build_op1(&builder->function_stream, SpvOpLabel, label_id);
    return label_id;
}

/* Loop control parameters are not supported. */
static void vkd3d_spirv_build_op_loop_merge(struct vkd3d_spirv_builder *builder,
        uint32_t merge_block, uint32_t continue_target, SpvLoopControlMask loop_control)
{
    vkd3d_spirv_build_op3(&builder->function_stream, SpvOpLoopMerge,
            merge_block, continue_target, loop_control);
}

static void vkd3d_spirv_build_op_selection_merge(struct vkd3d_spirv_builder *builder,
        uint32_t merge_block, uint32_t selection_control)
{
    vkd3d_spirv_build_op2(&builder->function_stream, SpvOpSelectionMerge,
            merge_block, selection_control);
}

static void vkd3d_spirv_build_op_branch(struct vkd3d_spirv_builder *builder, uint32_t label)
{
    vkd3d_spirv_build_op1(&builder->function_stream, SpvOpBranch, label);
}

/* Branch weights are not supported. */
static void vkd3d_spirv_build_op_branch_conditional(struct vkd3d_spirv_builder *builder,
        uint32_t condition, uint32_t true_label, uint32_t false_label)
{
    vkd3d_spirv_build_op3(&builder->function_stream, SpvOpBranchConditional,
            condition, true_label, false_label);
}

static void vkd3d_spirv_build_op_switch(struct vkd3d_spirv_builder *builder,
        uint32_t selector, uint32_t default_label, uint32_t *targets, unsigned int target_count)
{
    vkd3d_spirv_build_op2v(&builder->function_stream, SpvOpSwitch,
            selector, default_label, targets, 2 * target_count);
}

static uint32_t vkd3d_spirv_build_op_iadd(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpIAdd, result_type, operand0, operand1);
}

static uint32_t vkd3d_spirv_build_op_imul(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpIMul, result_type, operand0, operand1);
}

static uint32_t vkd3d_spirv_build_op_udiv(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpUDiv, result_type, operand0, operand1);
}

static uint32_t vkd3d_spirv_build_op_umod(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpUMod, result_type, operand0, operand1);
}

static uint32_t vkd3d_spirv_build_op_isub(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpISub, result_type, operand0, operand1);
}

static uint32_t vkd3d_spirv_build_op_fdiv(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpFDiv, result_type, operand0, operand1);
}

static uint32_t vkd3d_spirv_build_op_fnegate(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand)
{
    return vkd3d_spirv_build_op_tr1(builder, &builder->function_stream,
            SpvOpFNegate, result_type, operand);
}

static uint32_t vkd3d_spirv_build_op_snegate(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand)
{
    return vkd3d_spirv_build_op_tr1(builder, &builder->function_stream,
            SpvOpSNegate, result_type, operand);
}

static uint32_t vkd3d_spirv_build_op_and(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpBitwiseAnd, result_type, operand0, operand1);
}

static uint32_t vkd3d_spirv_build_op_shift_left_logical(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t base, uint32_t shift)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpShiftLeftLogical, result_type, base, shift);
}

static uint32_t vkd3d_spirv_build_op_shift_right_logical(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t base, uint32_t shift)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpShiftRightLogical, result_type, base, shift);
}

static uint32_t vkd3d_spirv_build_op_logical_and(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpLogicalAnd, result_type, operand0, operand1);
}

static uint32_t vkd3d_spirv_build_op_uless_than(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpULessThan, result_type, operand0, operand1);
}

static uint32_t vkd3d_spirv_build_op_uless_than_equal(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand0, uint32_t operand1)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpULessThanEqual, result_type, operand0, operand1);
}

static uint32_t vkd3d_spirv_build_op_convert_utof(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t unsigned_value)
{
    return vkd3d_spirv_build_op_tr1(builder, &builder->function_stream,
            SpvOpConvertUToF, result_type, unsigned_value);
}

static uint32_t vkd3d_spirv_build_op_bitcast(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand)
{
    return vkd3d_spirv_build_op_tr1(builder, &builder->function_stream,
            SpvOpBitcast, result_type, operand);
}

static uint32_t vkd3d_spirv_build_op_image_texel_pointer(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t image_id, uint32_t coordinate_id, uint32_t sample_id)
{
    return vkd3d_spirv_build_op_tr3(builder, &builder->function_stream,
            SpvOpImageTexelPointer, result_type, image_id, coordinate_id, sample_id);
}

static uint32_t vkd3d_spirv_build_op_sampled_image(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t image_id, uint32_t sampler_id)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpSampledImage, result_type, image_id, sampler_id);
}

static uint32_t vkd3d_spirv_build_op_image(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t sampled_image_id)
{
    return vkd3d_spirv_build_op_tr1(builder, &builder->function_stream,
            SpvOpImage, result_type, sampled_image_id);
}

static uint32_t vkd3d_spirv_build_image_instruction(struct vkd3d_spirv_builder *builder,
        SpvOp op, uint32_t result_type, const uint32_t *operands, unsigned int operand_count,
        uint32_t image_operands_mask, const uint32_t *image_operands, unsigned int image_operand_count)
{
    unsigned int index = 0, i;
    uint32_t w[10];

    assert(operand_count <= ARRAY_SIZE(w));
    for (i = 0; i < operand_count; ++i)
        w[index++] = operands[i];

    if (image_operands_mask)
    {
        assert(index + 1 + image_operand_count <= ARRAY_SIZE(w));
        w[index++] = image_operands_mask;
        for (i = 0; i < image_operand_count; ++i)
            w[index++] = image_operands[i];
    }

    return vkd3d_spirv_build_op_trv(builder, &builder->function_stream,
            op, result_type, w, index);
}

static uint32_t vkd3d_spirv_build_op_image_sample(struct vkd3d_spirv_builder *builder,
        SpvOp op, uint32_t result_type, uint32_t sampled_image_id, uint32_t coordinate_id,
        uint32_t image_operands_mask, const uint32_t *image_operands, unsigned int image_operand_count)
{
    const uint32_t operands[] = {sampled_image_id, coordinate_id};

    if (op == SpvOpImageSampleExplicitLod)
        assert(image_operands_mask & (SpvImageOperandsLodMask | SpvImageOperandsGradMask));
    else
        assert(op == SpvOpImageSampleImplicitLod);

    return vkd3d_spirv_build_image_instruction(builder, op, result_type,
            operands, ARRAY_SIZE(operands), image_operands_mask, image_operands, image_operand_count);
}

static uint32_t vkd3d_spirv_build_op_image_sample_dref(struct vkd3d_spirv_builder *builder,
        SpvOp op, uint32_t result_type, uint32_t sampled_image_id, uint32_t coordinate_id, uint32_t dref_id,
        uint32_t image_operands_mask, const uint32_t *image_operands, unsigned int image_operand_count)
{
    const uint32_t operands[] = {sampled_image_id, coordinate_id, dref_id};

    if (op == SpvOpImageSampleDrefExplicitLod)
        assert(image_operands_mask & (SpvImageOperandsLodMask | SpvImageOperandsGradMask));
    else
        assert(op == SpvOpImageSampleDrefImplicitLod);

    return vkd3d_spirv_build_image_instruction(builder, op, result_type,
            operands, ARRAY_SIZE(operands), image_operands_mask, image_operands, image_operand_count);
}

static uint32_t vkd3d_spirv_build_op_image_gather(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t sampled_image_id, uint32_t coordinate_id, uint32_t component_id,
        uint32_t image_operands_mask, const uint32_t *image_operands, unsigned int image_operand_count)
{
    const uint32_t operands[] = {sampled_image_id, coordinate_id, component_id};
    return vkd3d_spirv_build_image_instruction(builder, SpvOpImageGather, result_type,
            operands, ARRAY_SIZE(operands), image_operands_mask, image_operands, image_operand_count);
}

static uint32_t vkd3d_spirv_build_op_image_dref_gather(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t sampled_image_id, uint32_t coordinate_id, uint32_t dref_id,
        uint32_t image_operands_mask, const uint32_t *image_operands, unsigned int image_operand_count)
{
    const uint32_t operands[] = {sampled_image_id, coordinate_id, dref_id};
    return vkd3d_spirv_build_image_instruction(builder, SpvOpImageDrefGather, result_type,
            operands, ARRAY_SIZE(operands), image_operands_mask, image_operands, image_operand_count);
}

static uint32_t vkd3d_spirv_build_op_image_fetch(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t image_id, uint32_t coordinate_id,
        uint32_t image_operands_mask, const uint32_t *image_operands, unsigned int image_operand_count)
{
    const uint32_t operands[] = {image_id, coordinate_id};
    return vkd3d_spirv_build_image_instruction(builder, SpvOpImageFetch, result_type,
            operands, ARRAY_SIZE(operands), image_operands_mask, image_operands, image_operand_count);
}

static uint32_t vkd3d_spirv_build_op_image_read(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t image_id, uint32_t coordinate_id,
        uint32_t image_operands_mask, const uint32_t *image_operands, unsigned int image_operand_count)
{
    const uint32_t operands[] = {image_id, coordinate_id};
    return vkd3d_spirv_build_image_instruction(builder, SpvOpImageRead, result_type,
            operands, ARRAY_SIZE(operands), image_operands_mask, image_operands, image_operand_count);
}

static void vkd3d_spirv_build_op_image_write(struct vkd3d_spirv_builder *builder,
        uint32_t image_id, uint32_t coordinate_id, uint32_t texel_id,
        uint32_t image_operands, const uint32_t *operands, unsigned int operand_count)
{
    if (image_operands)
        FIXME("Image operands not supported.\n");

    vkd3d_spirv_build_op3(&builder->function_stream, SpvOpImageWrite,
            image_id, coordinate_id, texel_id);
}

static uint32_t vkd3d_spirv_build_op_image_query_size_lod(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t image_id, uint32_t lod_id)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpImageQuerySizeLod, result_type, image_id, lod_id);
}

static uint32_t vkd3d_spirv_build_op_image_query_size(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t image_id)
{
    return vkd3d_spirv_build_op_tr1(builder, &builder->function_stream,
            SpvOpImageQuerySize, result_type, image_id);
}

static uint32_t vkd3d_spirv_build_op_image_query_levels(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t image_id)
{
    return vkd3d_spirv_build_op_tr1(builder, &builder->function_stream,
            SpvOpImageQueryLevels, result_type, image_id);
}

static uint32_t vkd3d_spirv_build_op_image_query_samples(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t image_id)
{
    return vkd3d_spirv_build_op_tr1(builder, &builder->function_stream,
            SpvOpImageQuerySamples, result_type, image_id);
}

static uint32_t vkd3d_spirv_build_op_image_query_lod(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t image_id, uint32_t coordinate_id)
{
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpImageQueryLod, result_type, image_id, coordinate_id);
}

static void vkd3d_spirv_build_op_emit_vertex(struct vkd3d_spirv_builder *builder)
{
    return vkd3d_spirv_build_op(&builder->function_stream, SpvOpEmitVertex);
}

static void vkd3d_spirv_build_op_end_primitive(struct vkd3d_spirv_builder *builder)
{
    return vkd3d_spirv_build_op(&builder->function_stream, SpvOpEndPrimitive);
}

static void vkd3d_spirv_build_op_control_barrier(struct vkd3d_spirv_builder *builder,
        uint32_t execution_id, uint32_t memory_id, uint32_t memory_semantics_id)
{
    vkd3d_spirv_build_op3(&builder->function_stream,
            SpvOpControlBarrier, execution_id, memory_id, memory_semantics_id);
}

static void vkd3d_spirv_build_op_memory_barrier(struct vkd3d_spirv_builder *builder,
        uint32_t memory_id, uint32_t memory_semantics_id)
{
    vkd3d_spirv_build_op2(&builder->function_stream,
            SpvOpMemoryBarrier, memory_id, memory_semantics_id);
}

static uint32_t vkd3d_spirv_build_op_glsl_std450_tr1(struct vkd3d_spirv_builder *builder,
        enum GLSLstd450 op, uint32_t result_type, uint32_t operand)
{
    uint32_t id = vkd3d_spirv_get_glsl_std450_instr_set(builder);
    return vkd3d_spirv_build_op_ext_inst(builder, result_type, id, op, &operand, 1);
}

static uint32_t vkd3d_spirv_build_op_glsl_std450_fabs(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand)
{
    return vkd3d_spirv_build_op_glsl_std450_tr1(builder, GLSLstd450FAbs, result_type, operand);
}

static uint32_t vkd3d_spirv_build_op_glsl_std450_sin(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand)
{
    return vkd3d_spirv_build_op_glsl_std450_tr1(builder, GLSLstd450Sin, result_type, operand);
}

static uint32_t vkd3d_spirv_build_op_glsl_std450_cos(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t operand)
{
    return vkd3d_spirv_build_op_glsl_std450_tr1(builder, GLSLstd450Cos, result_type, operand);
}

static uint32_t vkd3d_spirv_build_op_glsl_std450_nclamp(struct vkd3d_spirv_builder *builder,
        uint32_t result_type, uint32_t x, uint32_t min, uint32_t max)
{
    uint32_t glsl_std450_id = vkd3d_spirv_get_glsl_std450_instr_set(builder);
    uint32_t operands[] = {x, min, max};
    return vkd3d_spirv_build_op_ext_inst(builder, result_type, glsl_std450_id,
            GLSLstd450NClamp, operands, ARRAY_SIZE(operands));
}

static uint32_t vkd3d_spirv_get_type_id(struct vkd3d_spirv_builder *builder,
        enum vkd3d_component_type component_type, unsigned int component_count)
{
    uint32_t scalar_id;

    if (component_count == 1)
    {
        switch (component_type)
        {
            case VKD3D_TYPE_VOID:
                return vkd3d_spirv_get_op_type_void(builder);
                break;
            case VKD3D_TYPE_FLOAT:
                return vkd3d_spirv_get_op_type_float(builder, 32);
                break;
            case VKD3D_TYPE_INT:
            case VKD3D_TYPE_UINT:
                return vkd3d_spirv_get_op_type_int(builder, 32, component_type == VKD3D_TYPE_INT);
                break;
            case VKD3D_TYPE_BOOL:
                return vkd3d_spirv_get_op_type_bool(builder);
                break;
            default:
                FIXME("Unhandled component type %#x.\n", component_type);
                return 0;
        }
    }
    else
    {
        assert(component_type != VKD3D_TYPE_VOID);
        scalar_id = vkd3d_spirv_get_type_id(builder, component_type, 1);
        return vkd3d_spirv_get_op_type_vector(builder, scalar_id, component_count);
    }
}

static void vkd3d_spirv_builder_init(struct vkd3d_spirv_builder *builder)
{
    vkd3d_spirv_stream_init(&builder->debug_stream);
    vkd3d_spirv_stream_init(&builder->annotation_stream);
    vkd3d_spirv_stream_init(&builder->global_stream);
    vkd3d_spirv_stream_init(&builder->function_stream);
    vkd3d_spirv_stream_init(&builder->execution_mode_stream);

    vkd3d_spirv_stream_init(&builder->insertion_stream);
    builder->insertion_location = ~(size_t)0;

    builder->current_id = 1;

    rb_init(&builder->declarations, vkd3d_spirv_declaration_compare);

    builder->main_function_id = vkd3d_spirv_alloc_id(builder);
    vkd3d_spirv_build_op_name(builder, builder->main_function_id, "main");
}

static void vkd3d_spirv_builder_begin_main_function(struct vkd3d_spirv_builder *builder)
{
    uint32_t void_id, function_type_id;

    void_id = vkd3d_spirv_get_op_type_void(builder);
    function_type_id = vkd3d_spirv_get_op_type_function(builder, void_id, NULL, 0);

    vkd3d_spirv_build_op_function(builder, void_id,
            builder->main_function_id, SpvFunctionControlMaskNone, function_type_id);
    vkd3d_spirv_build_op_label(builder, vkd3d_spirv_alloc_id(builder));
    builder->main_function_location = vkd3d_spirv_stream_current_location(&builder->function_stream);
}

static void vkd3d_spirv_builder_free(struct vkd3d_spirv_builder *builder)
{
    vkd3d_spirv_stream_free(&builder->debug_stream);
    vkd3d_spirv_stream_free(&builder->annotation_stream);
    vkd3d_spirv_stream_free(&builder->global_stream);
    vkd3d_spirv_stream_free(&builder->function_stream);
    vkd3d_spirv_stream_free(&builder->execution_mode_stream);

    vkd3d_spirv_stream_free(&builder->insertion_stream);

    rb_destroy(&builder->declarations, vkd3d_spirv_declaration_free, NULL);

    vkd3d_free(builder->iface);
}

static bool vkd3d_spirv_compile_module(struct vkd3d_spirv_builder *builder,
        struct vkd3d_shader_code *spirv)
{
    uint64_t capability_mask = builder->capability_mask;
    struct vkd3d_spirv_stream stream;
    uint32_t *code;
    unsigned int i;
    size_t size;

    vkd3d_spirv_stream_init(&stream);

    vkd3d_spirv_build_word(&stream, SpvMagicNumber);
    vkd3d_spirv_build_word(&stream, VKD3D_SPIRV_VERSION);
    vkd3d_spirv_build_word(&stream, VKD3D_SPIRV_GENERATOR_MAGIC);
    vkd3d_spirv_build_word(&stream, builder->current_id); /* bound */
    vkd3d_spirv_build_word(&stream, 0); /* schema, reserved */

    /* capabilities */
    for (i = 0; capability_mask; ++i)
    {
        if (capability_mask & 1)
            vkd3d_spirv_build_op_capability(&stream, i);
        capability_mask >>= 1;
    }
    if (builder->capability_draw_parameters)
        vkd3d_spirv_build_op_capability(&stream, SpvCapabilityDrawParameters);
    if (builder->capability_demote_to_helper_invocation)
        vkd3d_spirv_build_op_capability(&stream, SpvCapabilityDemoteToHelperInvocationEXT);

    /* extensions */
    if (builder->capability_draw_parameters)
        vkd3d_spirv_build_op_extension(&stream, "SPV_KHR_shader_draw_parameters");
    if (builder->capability_demote_to_helper_invocation)
        vkd3d_spirv_build_op_extension(&stream, "SPV_EXT_demote_to_helper_invocation");

    if (builder->ext_instr_set_glsl_450)
        vkd3d_spirv_build_op_ext_inst_import(&stream, builder->ext_instr_set_glsl_450, "GLSL.std.450");

    /* entry point declarations */
    vkd3d_spirv_build_op_memory_model(&stream, SpvAddressingModelLogical, SpvMemoryModelGLSL450);
    vkd3d_spirv_build_op_entry_point(&stream, builder->execution_model, builder->main_function_id,
            "main", builder->iface, builder->iface_element_count);

    /* execution mode declarations */
    vkd3d_spirv_stream_append(&stream, &builder->execution_mode_stream);

    vkd3d_spirv_stream_append(&stream, &builder->debug_stream);
    vkd3d_spirv_stream_append(&stream, &builder->annotation_stream);
    vkd3d_spirv_stream_append(&stream, &builder->global_stream);
    vkd3d_spirv_stream_append(&stream, &builder->function_stream);

    if (!(code = vkd3d_calloc(stream.word_count, sizeof(*code))))
    {
        vkd3d_spirv_stream_free(&stream);
        return false;
    }

    size = stream.word_count * sizeof(*code);
    memcpy(code, stream.words, size);
    vkd3d_spirv_stream_free(&stream);

    spirv->code = code;
    spirv->size = size;

    return true;
}

static const struct vkd3d_spirv_resource_type
{
    enum vkd3d_shader_resource_type resource_type;

    SpvDim dim;
    uint32_t arrayed;
    uint32_t ms;

    unsigned int coordinate_component_count;
    unsigned int offset_component_count;

    SpvCapability capability;
    SpvCapability uav_capability;
}
vkd3d_spirv_resource_type_table[] =
{
    {VKD3D_SHADER_RESOURCE_BUFFER,            SpvDimBuffer, 0, 0, 1, 0,
            SpvCapabilitySampledBuffer, SpvCapabilityImageBuffer},
    {VKD3D_SHADER_RESOURCE_TEXTURE_1D,        SpvDim1D,     0, 0, 1, 1,
            SpvCapabilitySampled1D, SpvCapabilityImage1D},
    {VKD3D_SHADER_RESOURCE_TEXTURE_2DMS,      SpvDim2D,     0, 1, 2, 2},
    {VKD3D_SHADER_RESOURCE_TEXTURE_2D,        SpvDim2D,     0, 0, 2, 2},
    {VKD3D_SHADER_RESOURCE_TEXTURE_3D,        SpvDim3D,     0, 0, 3, 3},
    {VKD3D_SHADER_RESOURCE_TEXTURE_CUBE,      SpvDimCube,   0, 0, 3, 0},
    {VKD3D_SHADER_RESOURCE_TEXTURE_1DARRAY,   SpvDim1D,     1, 0, 2, 1,
            SpvCapabilitySampled1D, SpvCapabilityImage1D},
    {VKD3D_SHADER_RESOURCE_TEXTURE_2DARRAY,   SpvDim2D,     1, 0, 3, 2},
    {VKD3D_SHADER_RESOURCE_TEXTURE_2DMSARRAY, SpvDim2D,     1, 1, 3, 2},
    {VKD3D_SHADER_RESOURCE_TEXTURE_CUBEARRAY, SpvDimCube,   1, 0, 4, 0,
            SpvCapabilitySampledCubeArray, SpvCapabilityImageCubeArray},
};

static const struct vkd3d_spirv_resource_type *vkd3d_get_spirv_resource_type(
        enum vkd3d_shader_resource_type resource_type)
{
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(vkd3d_spirv_resource_type_table); ++i)
    {
        const struct vkd3d_spirv_resource_type* current = &vkd3d_spirv_resource_type_table[i];

        if (current->resource_type == resource_type)
            return current;
    }

    FIXME("Unhandled resource type %#x.\n", resource_type);
    return NULL;
}

struct vkd3d_symbol_register
{
    enum vkd3d_shader_register_type type;
    unsigned int idx;
};

struct vkd3d_symbol_resource
{
    enum vkd3d_shader_register_type type;
    unsigned int idx;
};

struct vkd3d_symbol_combined_sampler
{
    unsigned int resource_idx;
    unsigned int sampler_idx;
};

struct vkd3d_symbol_register_data
{
    SpvStorageClass storage_class;
    uint32_t member_idx;
    enum vkd3d_component_type component_type;
    unsigned int write_mask;
    unsigned int structure_stride;
    bool is_aggregate; /* An aggregate, i.e. a structure or an array. */
    bool is_dynamically_indexed; /* If member_idx is a variable ID instead of a constant. */
};

struct vkd3d_symbol_resource_data
{
    enum vkd3d_component_type sampled_type;
    uint32_t type_id;
    const struct vkd3d_spirv_resource_type *resource_type_info;
    unsigned int structure_stride;
    bool raw;
    uint32_t uav_counter_id;
};

struct vkd3d_symbol
{
    struct rb_entry entry;

    enum
    {
        VKD3D_SYMBOL_REGISTER,
        VKD3D_SYMBOL_RESOURCE,
        VKD3D_SYMBOL_COMBINED_SAMPLER,
    } type;

    union
    {
        struct vkd3d_symbol_register reg;
        struct vkd3d_symbol_resource resource;
        struct vkd3d_symbol_combined_sampler combined_sampler;
    } key;

    uint32_t id;
    union
    {
        struct vkd3d_symbol_register_data reg;
        struct vkd3d_symbol_resource_data resource;
    } info;
};

static int vkd3d_symbol_compare(const void *key, const struct rb_entry *entry)
{
    const struct vkd3d_symbol *a = key;
    const struct vkd3d_symbol *b = RB_ENTRY_VALUE(entry, const struct vkd3d_symbol, entry);

    if (a->type != b->type)
        return a->type - b->type;
    return memcmp(&a->key, &b->key, sizeof(a->key));
}

static void vkd3d_symbol_free(struct rb_entry *entry, void *context)
{
    struct vkd3d_symbol *s = RB_ENTRY_VALUE(entry, struct vkd3d_symbol, entry);

    vkd3d_free(s);
}

static void vkd3d_symbol_make_register(struct vkd3d_symbol *symbol,
        const struct vkd3d_shader_register *reg)
{
    symbol->type = VKD3D_SYMBOL_REGISTER;
    memset(&symbol->key, 0, sizeof(symbol->key));
    symbol->key.reg.type = reg->type;
    if (vkd3d_shader_register_is_input(reg) && reg->idx[1].offset != ~0u)
        symbol->key.reg.idx = reg->idx[1].offset;
    else if (reg->type != VKD3DSPR_IMMCONSTBUFFER)
        symbol->key.reg.idx = reg->idx[0].offset;
}

static void vkd3d_symbol_set_register_info(struct vkd3d_symbol *symbol,
        uint32_t val_id, SpvStorageClass storage_class,
        enum vkd3d_component_type component_type, DWORD write_mask)
{
    symbol->id = val_id;
    symbol->info.reg.storage_class = storage_class;
    symbol->info.reg.member_idx = 0;
    symbol->info.reg.component_type = component_type;
    symbol->info.reg.write_mask = write_mask;
    symbol->info.reg.structure_stride = 0;
    symbol->info.reg.is_aggregate = false;
    symbol->info.reg.is_dynamically_indexed = false;
}

static void vkd3d_symbol_make_resource(struct vkd3d_symbol *symbol,
        const struct vkd3d_shader_register *reg)
{
    symbol->type = VKD3D_SYMBOL_RESOURCE;
    memset(&symbol->key, 0, sizeof(symbol->key));
    symbol->key.resource.type = reg->type;
    symbol->key.resource.idx = reg->idx[0].offset;
}

static void vkd3d_symbol_make_combined_sampler(struct vkd3d_symbol *symbol,
        unsigned int resource_index, unsigned int sampler_index)
{
    symbol->type = VKD3D_SYMBOL_COMBINED_SAMPLER;
    memset(&symbol->key, 0, sizeof(symbol->key));
    symbol->key.combined_sampler.resource_idx = resource_index;
    symbol->key.combined_sampler.sampler_idx = sampler_index;
}

static struct vkd3d_symbol *vkd3d_symbol_dup(const struct vkd3d_symbol *symbol)
{
    struct vkd3d_symbol *s;

    if (!(s = vkd3d_malloc(sizeof(*s))))
        return NULL;

    return memcpy(s, symbol, sizeof(*s));
}

static const char *debug_vkd3d_symbol(const struct vkd3d_symbol *symbol)
{
    switch (symbol->type)
    {
        case VKD3D_SYMBOL_REGISTER:
            return vkd3d_dbg_sprintf("register %#x, %u",
                    symbol->key.reg.type, symbol->key.reg.idx);
        case VKD3D_SYMBOL_RESOURCE:
            return vkd3d_dbg_sprintf("resource %#x, %u",
                    symbol->key.resource.type, symbol->key.resource.idx);
        default:
            return vkd3d_dbg_sprintf("type %#x", symbol->type);
    }
}

struct vkd3d_if_cf_info
{
    size_t stream_location;
    unsigned int id;
    uint32_t merge_block_id;
    uint32_t else_block_id;
};

struct vkd3d_loop_cf_info
{
    uint32_t header_block_id;
    uint32_t continue_block_id;
    uint32_t merge_block_id;
};

struct vkd3d_switch_cf_info
{
    size_t stream_location;
    unsigned int id;
    uint32_t selector_id;
    uint32_t merge_block_id;
    uint32_t default_block_id;
    uint32_t *case_blocks;
    size_t case_blocks_size;
    unsigned int case_block_count;
};

struct vkd3d_control_flow_info
{
    union
    {
        struct vkd3d_if_cf_info if_;
        struct vkd3d_loop_cf_info loop;
        struct vkd3d_switch_cf_info switch_;
    } u;

    enum
    {
        VKD3D_BLOCK_IF,
        VKD3D_BLOCK_LOOP,
        VKD3D_BLOCK_SWITCH,
    } current_block;
    bool inside_block;
};

struct vkd3d_push_constant_buffer_binding
{
    struct vkd3d_shader_register reg;
    struct vkd3d_shader_push_constant_buffer pc;
};

struct vkd3d_shader_phase
{
    enum VKD3D_SHADER_INSTRUCTION_HANDLER type;
    unsigned int idx;
    unsigned int instance_count;
    uint32_t function_id;
    uint32_t instance_id;
    size_t function_location;
};

struct vkd3d_shader_spec_constant
{
    enum vkd3d_shader_parameter_name name;
    uint32_t id;
};

struct vkd3d_hull_shader_variables
{
    uint32_t tess_level_outer_id;
    uint32_t tess_level_inner_id;
};

struct vkd3d_dxbc_compiler
{
    struct vkd3d_spirv_builder spirv_builder;

    uint32_t options;

    struct rb_tree symbol_table;
    uint32_t temp_id;
    unsigned int temp_count;
    struct vkd3d_hull_shader_variables hs;
    uint32_t sample_positions_id;

    enum vkd3d_shader_type shader_type;

    unsigned int branch_id;
    unsigned int loop_id;
    unsigned int switch_id;
    unsigned int control_flow_depth;
    struct vkd3d_control_flow_info *control_flow_info;
    size_t control_flow_info_size;

    struct vkd3d_shader_interface_info shader_interface;
    struct vkd3d_push_constant_buffer_binding *push_constants;
    const struct vkd3d_shader_compile_arguments *compile_args;

    bool after_declarations_section;
    const struct vkd3d_shader_signature *input_signature;
    const struct vkd3d_shader_signature *output_signature;
    const struct vkd3d_shader_signature *patch_constant_signature;
    const struct vkd3d_shader_transform_feedback_info *xfb_info;
    struct vkd3d_shader_output_info
    {
        uint32_t id;
        enum vkd3d_component_type component_type;
        uint32_t array_element_mask;
    } *output_info;
    uint32_t private_output_variable[MAX_REG_OUTPUT + 1]; /* 1 entry for oDepth */
    uint32_t private_output_variable_write_mask[MAX_REG_OUTPUT + 1]; /* 1 entry for oDepth */
    uint32_t epilogue_function_id;

    uint32_t binding_idx;

    const struct vkd3d_shader_scan_info *scan_info;
    unsigned int input_control_point_count;
    unsigned int output_control_point_count;

    unsigned int shader_phase_count;
    struct vkd3d_shader_phase *shader_phases;
    size_t shader_phases_size;

    uint32_t current_spec_constant_id;
    unsigned int spec_constant_count;
    struct vkd3d_shader_spec_constant *spec_constants;
    size_t spec_constants_size;
};

static bool is_control_point_phase(const struct vkd3d_shader_phase *phase)
{
    return phase && phase->type == VKD3DSIH_HS_CONTROL_POINT_PHASE;
}

static void vkd3d_dxbc_compiler_emit_initial_declarations(struct vkd3d_dxbc_compiler *compiler);

struct vkd3d_dxbc_compiler *vkd3d_dxbc_compiler_create(const struct vkd3d_shader_version *shader_version,
        const struct vkd3d_shader_desc *shader_desc, uint32_t compiler_options,
        const struct vkd3d_shader_interface_info *shader_interface,
        const struct vkd3d_shader_compile_arguments *compile_args,
        const struct vkd3d_shader_scan_info *scan_info)
{
    const struct vkd3d_shader_signature *patch_constant_signature = &shader_desc->patch_constant_signature;
    const struct vkd3d_shader_signature *output_signature = &shader_desc->output_signature;
    struct vkd3d_dxbc_compiler *compiler;
    unsigned int max_element_count;
    unsigned int i;

    if (!(compiler = vkd3d_malloc(sizeof(*compiler))))
        return NULL;

    memset(compiler, 0, sizeof(*compiler));

    max_element_count = max(output_signature->element_count, patch_constant_signature->element_count);
    if (!(compiler->output_info = vkd3d_calloc(max_element_count, sizeof(*compiler->output_info))))
    {
        vkd3d_free(compiler);
        return NULL;
    }

    vkd3d_spirv_builder_init(&compiler->spirv_builder);
    compiler->options = compiler_options;

    rb_init(&compiler->symbol_table, vkd3d_symbol_compare);

    compiler->shader_type = shader_version->type;

    compiler->input_signature = &shader_desc->input_signature;
    compiler->output_signature = &shader_desc->output_signature;
    compiler->patch_constant_signature = &shader_desc->patch_constant_signature;

    if (shader_interface)
    {
        compiler->xfb_info = vkd3d_find_struct(shader_interface->next, TRANSFORM_FEEDBACK_INFO);

        compiler->shader_interface = *shader_interface;
        if (shader_interface->push_constant_buffer_count)
        {
            if (!(compiler->push_constants = vkd3d_calloc(shader_interface->push_constant_buffer_count,
                    sizeof(*compiler->push_constants))))
            {
                vkd3d_dxbc_compiler_destroy(compiler);
                return NULL;
            }
            for (i = 0; i < shader_interface->push_constant_buffer_count; ++i)
                compiler->push_constants[i].pc = shader_interface->push_constant_buffers[i];
        }
    }
    compiler->compile_args = compile_args;

    compiler->scan_info = scan_info;

    vkd3d_dxbc_compiler_emit_initial_declarations(compiler);

    return compiler;
}

static enum vkd3d_shader_target vkd3d_dxbc_compiler_get_target(const struct vkd3d_dxbc_compiler *compiler)
{
    const struct vkd3d_shader_compile_arguments *args = compiler->compile_args;
    return args ? args->target : VKD3D_SHADER_TARGET_SPIRV_VULKAN_1_0;
}

static bool vkd3d_dxbc_compiler_is_opengl_target(const struct vkd3d_dxbc_compiler *compiler)
{
    return vkd3d_dxbc_compiler_get_target(compiler) == VKD3D_SHADER_TARGET_SPIRV_OPENGL_4_5;
}

static bool vkd3d_dxbc_compiler_is_target_extension_supported(const struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_shader_target_extension extension)
{
    const struct vkd3d_shader_compile_arguments *args = compiler->compile_args;
    unsigned int i;

    for (i = 0; args && i < args->target_extension_count; ++i)
    {
        if (args->target_extensions[i] == extension)
            return true;
    }

    return false;
}

static bool vkd3d_dxbc_compiler_check_shader_visibility(const struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_shader_visibility visibility)
{
    switch (visibility)
    {
        case VKD3D_SHADER_VISIBILITY_ALL:
            return true;
        case VKD3D_SHADER_VISIBILITY_VERTEX:
            return compiler->shader_type == VKD3D_SHADER_TYPE_VERTEX;
        case VKD3D_SHADER_VISIBILITY_HULL:
            return compiler->shader_type == VKD3D_SHADER_TYPE_HULL;
        case VKD3D_SHADER_VISIBILITY_DOMAIN:
            return compiler->shader_type == VKD3D_SHADER_TYPE_DOMAIN;
        case VKD3D_SHADER_VISIBILITY_GEOMETRY:
            return compiler->shader_type == VKD3D_SHADER_TYPE_GEOMETRY;
        case VKD3D_SHADER_VISIBILITY_PIXEL:
            return compiler->shader_type == VKD3D_SHADER_TYPE_PIXEL;
        case VKD3D_SHADER_VISIBILITY_COMPUTE:
            return compiler->shader_type == VKD3D_SHADER_TYPE_COMPUTE;
        default:
            ERR("Invalid shader visibility %#x.\n", visibility);
            return false;
    }
}

static struct vkd3d_push_constant_buffer_binding *vkd3d_dxbc_compiler_find_push_constant_buffer(
        const struct vkd3d_dxbc_compiler *compiler, const struct vkd3d_shader_register *reg)
{
    unsigned int reg_idx = reg->idx[0].offset;
    unsigned int i;

    for (i = 0; i < compiler->shader_interface.push_constant_buffer_count; ++i)
    {
        struct vkd3d_push_constant_buffer_binding *current = &compiler->push_constants[i];

        if (!vkd3d_dxbc_compiler_check_shader_visibility(compiler, current->pc.shader_visibility))
            continue;

        if (current->pc.register_index == reg_idx)
            return current;
    }

    return NULL;
}

static bool vkd3d_dxbc_compiler_has_combined_sampler(const struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *resource, const struct vkd3d_shader_register *sampler)
{
    const struct vkd3d_shader_interface_info *shader_interface = &compiler->shader_interface;
    const struct vkd3d_shader_combined_resource_sampler *combined_sampler;
    unsigned int i;

    if (!shader_interface->combined_sampler_count)
        return false;

    if (resource && resource->type == VKD3DSPR_UAV)
        return false;

    for (i = 0; i < shader_interface->combined_sampler_count; ++i)
    {
        combined_sampler = &shader_interface->combined_samplers[i];

        if (!vkd3d_dxbc_compiler_check_shader_visibility(compiler, combined_sampler->shader_visibility))
            continue;

        if ((!resource || combined_sampler->resource_index == resource->idx[0].offset)
                && (!sampler || combined_sampler->sampler_index == sampler->idx[0].offset))
            return true;
    }

    return false;
}

static struct vkd3d_shader_descriptor_binding vkd3d_dxbc_compiler_get_descriptor_binding(
        struct vkd3d_dxbc_compiler *compiler, const struct vkd3d_shader_register *reg,
        enum vkd3d_shader_resource_type resource_type, bool is_uav_counter)
{
    const struct vkd3d_shader_interface_info *shader_interface = &compiler->shader_interface;
    enum vkd3d_shader_descriptor_type descriptor_type;
    enum vkd3d_shader_binding_flag resource_type_flag;
    struct vkd3d_shader_descriptor_binding binding;
    unsigned int reg_idx = reg->idx[0].offset;
    unsigned int i;

    descriptor_type = VKD3D_SHADER_DESCRIPTOR_TYPE_UNKNOWN;
    if (reg->type == VKD3DSPR_CONSTBUFFER)
        descriptor_type = VKD3D_SHADER_DESCRIPTOR_TYPE_CBV;
    else if (reg->type == VKD3DSPR_RESOURCE)
        descriptor_type = VKD3D_SHADER_DESCRIPTOR_TYPE_SRV;
    else if (reg->type == VKD3DSPR_UAV)
        descriptor_type = VKD3D_SHADER_DESCRIPTOR_TYPE_UAV;
    else if (reg->type == VKD3DSPR_SAMPLER)
        descriptor_type = VKD3D_SHADER_DESCRIPTOR_TYPE_SAMPLER;
    else
        FIXME("Unhandled register type %#x.\n", reg->type);

    resource_type_flag = resource_type == VKD3D_SHADER_RESOURCE_BUFFER
            ? VKD3D_SHADER_BINDING_FLAG_BUFFER : VKD3D_SHADER_BINDING_FLAG_IMAGE;

    if (is_uav_counter)
    {
        assert(descriptor_type == VKD3D_SHADER_DESCRIPTOR_TYPE_UAV);
        for (i = 0; i < shader_interface->uav_counter_count; ++i)
        {
            const struct vkd3d_shader_uav_counter_binding *current = &shader_interface->uav_counters[i];

            if (!vkd3d_dxbc_compiler_check_shader_visibility(compiler, current->shader_visibility))
                continue;

            if (current->offset)
                FIXME("Atomic counter offsets are not supported yet.\n");

            if (current->register_index == reg_idx)
                return current->binding;
        }
        if (shader_interface->uav_counter_count)
            FIXME("Could not find descriptor binding for UAV counter %u.\n", reg_idx);
    }
    else if (descriptor_type != VKD3D_SHADER_DESCRIPTOR_TYPE_UNKNOWN)
    {
        for (i = 0; i < shader_interface->binding_count; ++i)
        {
            const struct vkd3d_shader_resource_binding *current = &shader_interface->bindings[i];

            if (!(current->flags & resource_type_flag))
                continue;

            if (!vkd3d_dxbc_compiler_check_shader_visibility(compiler, current->shader_visibility))
                continue;

            if (current->type == descriptor_type && current->register_index == reg_idx)
                return current->binding;
        }
        if (shader_interface->binding_count)
            FIXME("Could not find binding for type %#x, register %u, shader type %#x.\n",
                    descriptor_type, reg_idx, compiler->shader_type);
    }

    binding.set = 0;
    binding.binding = compiler->binding_idx++;
    return binding;
}

static void vkd3d_dxbc_compiler_emit_descriptor_binding(struct vkd3d_dxbc_compiler *compiler,
        uint32_t variable_id, const struct vkd3d_shader_descriptor_binding *binding)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;

    vkd3d_spirv_build_op_decorate1(builder, variable_id, SpvDecorationDescriptorSet, binding->set);
    vkd3d_spirv_build_op_decorate1(builder, variable_id, SpvDecorationBinding, binding->binding);
}

static void vkd3d_dxbc_compiler_emit_descriptor_binding_for_reg(struct vkd3d_dxbc_compiler *compiler,
        uint32_t variable_id, const struct vkd3d_shader_register *reg,
        enum vkd3d_shader_resource_type resource_type, bool is_uav_counter)
{
    struct vkd3d_shader_descriptor_binding binding;

    binding = vkd3d_dxbc_compiler_get_descriptor_binding(compiler, reg, resource_type, is_uav_counter);
    vkd3d_dxbc_compiler_emit_descriptor_binding(compiler, variable_id, &binding);
}

static void vkd3d_dxbc_compiler_put_symbol(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_symbol *symbol)
{
    struct vkd3d_symbol *s;

    s = vkd3d_symbol_dup(symbol);
    if (rb_put(&compiler->symbol_table, s, &s->entry) == -1)
    {
        ERR("Failed to insert symbol entry (%s).\n", debug_vkd3d_symbol(symbol));
        vkd3d_free(s);
    }
}

static uint32_t vkd3d_dxbc_compiler_get_constant(struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_component_type component_type, unsigned int component_count, const uint32_t *values)
{
    uint32_t type_id, scalar_type_id, component_ids[VKD3D_VEC4_SIZE];
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    unsigned int i;

    assert(0 < component_count && component_count <= VKD3D_VEC4_SIZE);
    type_id = vkd3d_spirv_get_type_id(builder, component_type, component_count);

    switch (component_type)
    {
        case VKD3D_TYPE_UINT:
        case VKD3D_TYPE_INT:
        case VKD3D_TYPE_FLOAT:
            break;
        default:
            FIXME("Unhandled component_type %#x.\n", component_type);
            return vkd3d_spirv_build_op_undef(builder, &builder->global_stream, type_id);
    }

    if (component_count == 1)
    {
        return vkd3d_spirv_get_op_constant(builder, type_id, *values);
    }
    else
    {
        scalar_type_id = vkd3d_spirv_get_type_id(builder, component_type, 1);
        for (i = 0; i < component_count; ++i)
            component_ids[i] = vkd3d_spirv_get_op_constant(builder, scalar_type_id, values[i]);
        return vkd3d_spirv_get_op_constant_composite(builder, type_id, component_ids, component_count);
    }
}

static uint32_t vkd3d_dxbc_compiler_get_constant_uint(struct vkd3d_dxbc_compiler *compiler,
        uint32_t value)
{
    return vkd3d_dxbc_compiler_get_constant(compiler, VKD3D_TYPE_UINT, 1, &value);
}

static uint32_t vkd3d_dxbc_compiler_get_constant_float(struct vkd3d_dxbc_compiler *compiler,
        float value)
{
    return vkd3d_dxbc_compiler_get_constant(compiler, VKD3D_TYPE_FLOAT, 1, (uint32_t *)&value);
}

static uint32_t vkd3d_dxbc_compiler_get_constant_vector(struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_component_type component_type, unsigned int component_count, uint32_t value)
{
    const uint32_t values[] = {value, value, value, value};
    return vkd3d_dxbc_compiler_get_constant(compiler, component_type, component_count, values);
}

static uint32_t vkd3d_dxbc_compiler_get_constant_uint_vector(struct vkd3d_dxbc_compiler *compiler,
        uint32_t value, unsigned int component_count)
{
    return vkd3d_dxbc_compiler_get_constant_vector(compiler, VKD3D_TYPE_UINT, component_count, value);
}

static uint32_t vkd3d_dxbc_compiler_get_constant_float_vector(struct vkd3d_dxbc_compiler *compiler,
        float value, unsigned int component_count)
{
    const float values[] = {value, value, value, value};
    return vkd3d_dxbc_compiler_get_constant(compiler,
            VKD3D_TYPE_FLOAT, component_count, (const uint32_t *)values);
}

static uint32_t vkd3d_dxbc_compiler_get_type_id_for_reg(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, DWORD write_mask)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;

    return vkd3d_spirv_get_type_id(builder,
            vkd3d_component_type_from_data_type(reg->data_type),
            vkd3d_write_mask_component_count(write_mask));
}

static uint32_t vkd3d_dxbc_compiler_get_type_id_for_dst(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_dst_param *dst)
{
    return vkd3d_dxbc_compiler_get_type_id_for_reg(compiler, &dst->reg, dst->write_mask);
}

static bool vkd3d_dxbc_compiler_get_register_name(char *buffer, unsigned int buffer_size,
        const struct vkd3d_shader_register *reg)
{
    unsigned int idx;

    idx = reg->idx[1].offset != ~0u ? reg->idx[1].offset : reg->idx[0].offset;
    switch (reg->type)
    {
        case VKD3DSPR_RESOURCE:
            snprintf(buffer, buffer_size, "t%u", reg->idx[0].offset);
            break;
        case VKD3DSPR_UAV:
            snprintf(buffer, buffer_size, "u%u", reg->idx[0].offset);
            break;
        case VKD3DSPR_SAMPLER:
            snprintf(buffer, buffer_size, "s%u", reg->idx[0].offset);
            break;
        case VKD3DSPR_CONSTBUFFER:
            snprintf(buffer, buffer_size, "cb%u_%u", reg->idx[0].offset, reg->idx[1].offset);
            break;
        case VKD3DSPR_INPUT:
            snprintf(buffer, buffer_size, "v%u", idx);
            break;
        case VKD3DSPR_INCONTROLPOINT:
            snprintf(buffer, buffer_size, "vicp%u", idx);
            break;
        case VKD3DSPR_OUTPUT:
        case VKD3DSPR_COLOROUT:
            snprintf(buffer, buffer_size, "o%u", idx);
            break;
        case VKD3DSPR_DEPTHOUT:
        case VKD3DSPR_DEPTHOUTGE:
        case VKD3DSPR_DEPTHOUTLE:
            snprintf(buffer, buffer_size, "oDepth");
            break;
        case VKD3DSPR_FORKINSTID:
            snprintf(buffer, buffer_size, "vForkInstanceId");
            break;
        case VKD3DSPR_JOININSTID:
            snprintf(buffer, buffer_size, "vJoinInstanceId");
            break;
        case VKD3DSPR_PATCHCONST:
            snprintf(buffer, buffer_size, "vpc%u", idx);
            break;
        case VKD3DSPR_TESSCOORD:
            snprintf(buffer, buffer_size, "vDomainLocation");
            break;
        case VKD3DSPR_THREADID:
            snprintf(buffer, buffer_size, "vThreadID");
            break;
        case VKD3DSPR_LOCALTHREADID:
            snprintf(buffer, buffer_size, "vThreadIDInGroup");
            break;
        case VKD3DSPR_LOCALTHREADINDEX:
            snprintf(buffer, buffer_size, "vThreadIDInGroupFlattened");
            break;
        case VKD3DSPR_THREADGROUPID:
            snprintf(buffer, buffer_size, "vThreadGroupID");
            break;
        case VKD3DSPR_GROUPSHAREDMEM:
            snprintf(buffer, buffer_size, "g%u", reg->idx[0].offset);
            break;
        case VKD3DSPR_IDXTEMP:
            snprintf(buffer, buffer_size, "x%u", idx);
            break;
        case VKD3DSPR_COVERAGE:
            snprintf(buffer, buffer_size, "vCoverage");
            break;
        case VKD3DSPR_SAMPLEMASK:
            snprintf(buffer, buffer_size, "oMask");
            break;
        case VKD3DSPR_OUTPOINTID:
        case VKD3DSPR_PRIMID:
            /* SPIRV-Tools disassembler generates names for SPIR-V built-ins. */
            return false;
        default:
            FIXME("Unhandled register %#x.\n", reg->type);
            snprintf(buffer, buffer_size, "unrecognized_%#x", reg->type);
            return false;
    }

    return true;
}

static void vkd3d_dxbc_compiler_emit_register_debug_name(struct vkd3d_spirv_builder *builder,
        uint32_t id, const struct vkd3d_shader_register *reg)
{
    char debug_name[256];
    if (vkd3d_dxbc_compiler_get_register_name(debug_name, ARRAY_SIZE(debug_name), reg))
        vkd3d_spirv_build_op_name(builder, id, "%s", debug_name);
}

static uint32_t vkd3d_dxbc_compiler_emit_variable(struct vkd3d_dxbc_compiler *compiler,
        struct vkd3d_spirv_stream *stream, SpvStorageClass storage_class,
        enum vkd3d_component_type component_type, unsigned int component_count)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, ptr_type_id;

    type_id = vkd3d_spirv_get_type_id(builder, component_type, component_count);
    ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, storage_class, type_id);
    return vkd3d_spirv_build_op_variable(builder, stream, ptr_type_id, storage_class, 0);
}

static uint32_t vkd3d_dxbc_compiler_emit_array_variable(struct vkd3d_dxbc_compiler *compiler,
        struct vkd3d_spirv_stream *stream, SpvStorageClass storage_class,
        enum vkd3d_component_type component_type, unsigned int component_count, unsigned int array_length)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, length_id, ptr_type_id;

    if (!array_length)
        return vkd3d_dxbc_compiler_emit_variable(compiler,
                stream, storage_class, component_type, component_count);

    type_id = vkd3d_spirv_get_type_id(builder, component_type, component_count);
    length_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, array_length);
    type_id = vkd3d_spirv_get_op_type_array(builder, type_id, length_id);
    ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, storage_class, type_id);
    return vkd3d_spirv_build_op_variable(builder, stream, ptr_type_id, storage_class, 0);
}

static const struct vkd3d_shader_parameter *vkd3d_dxbc_compiler_get_shader_parameter(
        struct vkd3d_dxbc_compiler *compiler, enum vkd3d_shader_parameter_name name)
{
    const struct vkd3d_shader_compile_arguments *compile_args = compiler->compile_args;
    unsigned int i;

    for (i = 0; compile_args && i < compile_args->parameter_count; ++i)
    {
        if (compile_args->parameters[i].name == name)
            return &compile_args->parameters[i];
    }

    return NULL;
}

static const struct vkd3d_spec_constant_info
{
    enum vkd3d_shader_parameter_name name;
    uint32_t default_value;
    const char *debug_name;
}
vkd3d_shader_parameters[] =
{
    {VKD3D_SHADER_PARAMETER_NAME_RASTERIZER_SAMPLE_COUNT, 1, "sample_count"},
};

static const struct vkd3d_spec_constant_info *get_spec_constant_info(enum vkd3d_shader_parameter_name name)
{
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(vkd3d_shader_parameters); ++i)
    {
        if (vkd3d_shader_parameters[i].name == name)
            return &vkd3d_shader_parameters[i];
    }

    FIXME("Unhandled parameter name %#x.\n", name);
    return NULL;
}

static uint32_t vkd3d_dxbc_compiler_alloc_spec_constant_id(struct vkd3d_dxbc_compiler *compiler)
{
    if (!compiler->current_spec_constant_id)
    {
        const struct vkd3d_shader_compile_arguments *compile_args = compiler->compile_args;
        unsigned int i, id = 0;

        for (i = 0; compiler->compile_args && i < compile_args->parameter_count; ++i)
        {
            const struct vkd3d_shader_parameter *current = &compile_args->parameters[i];

            if (current->type == VKD3D_SHADER_PARAMETER_TYPE_SPECIALIZATION_CONSTANT)
                id = max(current->u.specialization_constant.id + 1, id);
        }

        compiler->current_spec_constant_id = id;
    }

    return compiler->current_spec_constant_id++;
}

static uint32_t vkd3d_dxbc_compiler_emit_spec_constant(struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_shader_parameter_name name, uint32_t spec_id)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_spec_constant_info *info;
    uint32_t type_id, id, default_value;

    info = get_spec_constant_info(name);
    default_value = info ? info->default_value : 0;

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    id = vkd3d_spirv_build_op_spec_constant(builder, type_id, default_value);
    vkd3d_spirv_build_op_decorate1(builder, id, SpvDecorationSpecId, spec_id);

    if (info)
        vkd3d_spirv_build_op_name(builder, id, "%s", info->debug_name);

    if (vkd3d_array_reserve((void **)&compiler->spec_constants, &compiler->spec_constants_size,
            compiler->spec_constant_count + 1, sizeof(*compiler->spec_constants)))
    {
        struct vkd3d_shader_spec_constant *constant = &compiler->spec_constants[compiler->spec_constant_count++];
        constant->name = name;
        constant->id = id;
    }

    return id;
}

static uint32_t vkd3d_dxbc_compiler_get_spec_constant(struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_shader_parameter_name name, uint32_t spec_id)
{
    unsigned int i;

    for (i = 0; i < compiler->spec_constant_count; ++i)
    {
        if (compiler->spec_constants[i].name == name)
            return compiler->spec_constants[i].id;
    }

    return vkd3d_dxbc_compiler_emit_spec_constant(compiler, name, spec_id);
}

static uint32_t vkd3d_dxbc_compiler_emit_uint_shader_parameter(struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_shader_parameter_name name)
{
    const struct vkd3d_shader_parameter *parameter;

    if (!(parameter = vkd3d_dxbc_compiler_get_shader_parameter(compiler, name)))
    {
        WARN("Unresolved shader parameter %#x.\n", name);
        goto default_parameter;
    }

    if (parameter->type == VKD3D_SHADER_PARAMETER_TYPE_IMMEDIATE_CONSTANT)
        return vkd3d_dxbc_compiler_get_constant_uint(compiler, parameter->u.immediate_constant.u.u32);
    if (parameter->type == VKD3D_SHADER_PARAMETER_TYPE_SPECIALIZATION_CONSTANT)
        return vkd3d_dxbc_compiler_get_spec_constant(compiler, name, parameter->u.specialization_constant.id);

    FIXME("Unhandled parameter type %#x.\n", parameter->type);

default_parameter:
    return vkd3d_dxbc_compiler_get_spec_constant(compiler,
            name, vkd3d_dxbc_compiler_alloc_spec_constant_id(compiler));
}

static uint32_t vkd3d_dxbc_compiler_emit_construct_vector(struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_component_type component_type, unsigned int component_count,
        uint32_t val_id, unsigned int val_component_idx, unsigned int val_component_count)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t components[VKD3D_VEC4_SIZE];
    uint32_t type_id, result_id;
    unsigned int i;

    assert(val_component_idx < val_component_count);

    type_id = vkd3d_spirv_get_type_id(builder, component_type, component_count);
    if (val_component_count == 1)
    {
        for (i = 0; i < component_count; ++i)
            components[i] = val_id;
        result_id = vkd3d_spirv_build_op_composite_construct(builder,
                type_id, components, component_count);
    }
    else
    {
        for (i = 0; i < component_count; ++i)
            components[i] = val_component_idx;
        result_id = vkd3d_spirv_build_op_vector_shuffle(builder,
                type_id, val_id, val_id, components, component_count);
    }
    return result_id;
}

static uint32_t vkd3d_dxbc_compiler_emit_load_src(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_src_param *src, DWORD write_mask);

static uint32_t vkd3d_dxbc_compiler_emit_register_addressing(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register_index *reg_index)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, addr_id;

    if (!reg_index->rel_addr)
        return vkd3d_dxbc_compiler_get_constant_uint(compiler, reg_index->offset);

    addr_id = vkd3d_dxbc_compiler_emit_load_src(compiler, reg_index->rel_addr, VKD3DSP_WRITEMASK_0);
    if (reg_index->offset)
    {
        type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
        addr_id = vkd3d_spirv_build_op_iadd(builder, type_id,
                addr_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, reg_index->offset));
    }
    return addr_id;
}

struct vkd3d_shader_register_info
{
    uint32_t id;
    SpvStorageClass storage_class;
    enum vkd3d_component_type component_type;
    unsigned int write_mask;
    uint32_t member_idx;
    unsigned int structure_stride;
    bool is_aggregate;
    bool is_dynamically_indexed;
};

static bool vkd3d_dxbc_compiler_get_register_info(const struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, struct vkd3d_shader_register_info *register_info)
{
    struct vkd3d_symbol reg_symbol, *symbol;
    struct rb_entry *entry;

    assert(reg->type != VKD3DSPR_IMMCONST);

    if (reg->type == VKD3DSPR_TEMP)
    {
        assert(reg->idx[0].offset < compiler->temp_count);
        register_info->id = compiler->temp_id + reg->idx[0].offset;
        register_info->storage_class = SpvStorageClassFunction;
        register_info->member_idx = 0;
        register_info->component_type = VKD3D_TYPE_FLOAT;
        register_info->write_mask = VKD3DSP_WRITEMASK_ALL;
        register_info->structure_stride = 0;
        register_info->is_aggregate = false;
        register_info->is_dynamically_indexed = false;
        return true;
    }

    vkd3d_symbol_make_register(&reg_symbol, reg);
    if (!(entry = rb_get(&compiler->symbol_table, &reg_symbol)))
    {
        FIXME("Unrecognized register (%s).\n", debug_vkd3d_symbol(&reg_symbol));
        memset(register_info, 0, sizeof(*register_info));
        return false;
    }

    symbol = RB_ENTRY_VALUE(entry, struct vkd3d_symbol, entry);
    register_info->id = symbol->id;
    register_info->storage_class = symbol->info.reg.storage_class;
    register_info->member_idx = symbol->info.reg.member_idx;
    register_info->component_type = symbol->info.reg.component_type;
    register_info->write_mask = symbol->info.reg.write_mask;
    register_info->structure_stride = symbol->info.reg.structure_stride;
    register_info->is_aggregate = symbol->info.reg.is_aggregate;
    register_info->is_dynamically_indexed = symbol->info.reg.is_dynamically_indexed;

    return true;
}

static void vkd3d_dxbc_compiler_emit_dereference_register(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, struct vkd3d_shader_register_info *register_info)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    unsigned int component_count, index_count = 0;
    uint32_t type_id, ptr_type_id;
    uint32_t indexes[2];

    if (reg->type == VKD3DSPR_CONSTBUFFER)
    {
        assert(!reg->idx[0].rel_addr);
        indexes[index_count++] = vkd3d_dxbc_compiler_get_constant_uint(compiler, register_info->member_idx);
        indexes[index_count++] = vkd3d_dxbc_compiler_emit_register_addressing(compiler, &reg->idx[1]);
    }
    else if (reg->type == VKD3DSPR_IMMCONSTBUFFER)
    {
        indexes[index_count++] = vkd3d_dxbc_compiler_emit_register_addressing(compiler, &reg->idx[0]);
    }
    else if (reg->type == VKD3DSPR_IDXTEMP)
    {
        indexes[index_count++] = vkd3d_dxbc_compiler_emit_register_addressing(compiler, &reg->idx[1]);
    }
    else if (register_info->is_aggregate)
    {
        struct vkd3d_shader_register_index reg_idx = reg->idx[0];

        if (reg->idx[1].rel_addr)
            FIXME("Relative addressing not implemented.\n");

        if (register_info->is_dynamically_indexed)
        {
            indexes[index_count++] = vkd3d_spirv_build_op_load(builder,
                    vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_INT, 1),
                    register_info->member_idx, SpvMemoryAccessMaskNone);
        }
        else
        {
            reg_idx.offset = register_info->member_idx;
            indexes[index_count++] = vkd3d_dxbc_compiler_emit_register_addressing(compiler, &reg_idx);
        }
    }
    else
    {
        if (reg->idx[1].rel_addr || (reg->idx[1].offset == ~0u && reg->idx[0].rel_addr))
            FIXME("Relative addressing not implemented.\n");

        /* Handle arrayed registers, e.g. v[3][0]. */
        if (reg->idx[1].offset != ~0u)
            indexes[index_count++] = vkd3d_dxbc_compiler_emit_register_addressing(compiler, &reg->idx[0]);
    }

    if (index_count)
    {
        component_count = vkd3d_write_mask_component_count(register_info->write_mask);
        type_id = vkd3d_spirv_get_type_id(builder, register_info->component_type, component_count);
        ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, register_info->storage_class, type_id);
        register_info->id = vkd3d_spirv_build_op_access_chain(builder, ptr_type_id,
                register_info->id, indexes, index_count);
    }
}

static uint32_t vkd3d_dxbc_compiler_get_register_id(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    struct vkd3d_shader_register_info register_info;

    if (vkd3d_dxbc_compiler_get_register_info(compiler, reg, &register_info))
    {
        vkd3d_dxbc_compiler_emit_dereference_register(compiler, reg, &register_info);
        return register_info.id;
    }

    return vkd3d_dxbc_compiler_emit_variable(compiler, &builder->global_stream,
            SpvStorageClassPrivate, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE);
}

static bool vkd3d_swizzle_is_equal(unsigned int dst_write_mask,
        unsigned int swizzle, unsigned int write_mask)
{
    return vkd3d_compact_swizzle(VKD3D_NO_SWIZZLE, dst_write_mask) == vkd3d_compact_swizzle(swizzle, write_mask);
}

static uint32_t vkd3d_dxbc_compiler_emit_swizzle(struct vkd3d_dxbc_compiler *compiler,
        uint32_t val_id, unsigned int val_write_mask, enum vkd3d_component_type component_type,
        unsigned int swizzle, unsigned int write_mask)
{
    unsigned int i, component_idx, component_count, val_component_count;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, components[VKD3D_VEC4_SIZE];

    component_count = vkd3d_write_mask_component_count(write_mask);
    val_component_count = vkd3d_write_mask_component_count(val_write_mask);

    if (component_count == val_component_count
            && (component_count == 1 || vkd3d_swizzle_is_equal(val_write_mask, swizzle, write_mask)))
        return val_id;

    type_id = vkd3d_spirv_get_type_id(builder, component_type, component_count);

    if (component_count == 1)
    {
        component_idx = vkd3d_write_mask_get_component_idx(write_mask);
        component_idx = vkd3d_swizzle_get_component(swizzle, component_idx);
        component_idx -= vkd3d_write_mask_get_component_idx(val_write_mask);
        return vkd3d_spirv_build_op_composite_extract1(builder, type_id, val_id, component_idx);
    }

    if (val_component_count == 1)
    {
        for (i = 0, component_idx = 0; i < VKD3D_VEC4_SIZE; ++i)
        {
            if (write_mask & (VKD3DSP_WRITEMASK_0 << i))
            {
                assert(VKD3DSP_WRITEMASK_0 << vkd3d_swizzle_get_component(swizzle, i) == val_write_mask);
                components[component_idx++] = val_id;
            }
        }
        return vkd3d_spirv_build_op_composite_construct(builder, type_id, components, component_count);
    }

    for (i = 0, component_idx = 0; i < VKD3D_VEC4_SIZE; ++i)
    {
        if (write_mask & (VKD3DSP_WRITEMASK_0 << i))
            components[component_idx++] = vkd3d_swizzle_get_component(swizzle, i);
    }
    return vkd3d_spirv_build_op_vector_shuffle(builder,
            type_id, val_id, val_id, components, component_count);
}

static uint32_t vkd3d_dxbc_compiler_emit_vector_shuffle(struct vkd3d_dxbc_compiler *compiler,
        uint32_t vector1_id, uint32_t vector2_id, unsigned int swizzle, unsigned int write_mask,
        enum vkd3d_component_type component_type, unsigned int component_count)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t components[VKD3D_VEC4_SIZE];
    uint32_t type_id;
    unsigned int i;

    assert(component_count <= ARRAY_SIZE(components));

    for (i = 0; i < component_count; ++i)
    {
        if (write_mask & (VKD3DSP_WRITEMASK_0 << i))
            components[i] = vkd3d_swizzle_get_component(swizzle, i);
        else
            components[i] = VKD3D_VEC4_SIZE + vkd3d_swizzle_get_component(swizzle, i);
    }

    type_id = vkd3d_spirv_get_type_id(builder, component_type, component_count);
    return vkd3d_spirv_build_op_vector_shuffle(builder,
            type_id, vector1_id, vector2_id, components, component_count);
}

static uint32_t vkd3d_dxbc_compiler_emit_load_constant(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, DWORD swizzle, DWORD write_mask)
{
    unsigned int component_count = vkd3d_write_mask_component_count(write_mask);
    uint32_t values[VKD3D_VEC4_SIZE] = {0};
    unsigned int i, j;

    assert(reg->type == VKD3DSPR_IMMCONST);

    if (reg->immconst_type == VKD3D_IMMCONST_SCALAR)
    {
        for (i = 0; i < component_count; ++i)
            values[i] = *reg->u.immconst_uint;
    }
    else
    {
        for (i = 0, j = 0; i < VKD3D_VEC4_SIZE; ++i)
        {
            if (write_mask & (VKD3DSP_WRITEMASK_0 << i))
                values[j++] = reg->u.immconst_uint[vkd3d_swizzle_get_component(swizzle, i)];
        }
    }

    return vkd3d_dxbc_compiler_get_constant(compiler,
            vkd3d_component_type_from_data_type(reg->data_type), component_count, values);
}

static uint32_t vkd3d_dxbc_compiler_emit_load_scalar(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, DWORD swizzle, DWORD write_mask,
        const struct vkd3d_shader_register_info *reg_info)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, ptr_type_id, index, reg_id, val_id;
    unsigned int component_idx, reg_component_count;
    enum vkd3d_component_type component_type;
    unsigned int skipped_component_mask;

    assert(reg->type != VKD3DSPR_IMMCONST);
    assert(vkd3d_write_mask_component_count(write_mask) == 1);

    component_idx = vkd3d_write_mask_get_component_idx(write_mask);
    component_idx = vkd3d_swizzle_get_component(swizzle, component_idx);
    skipped_component_mask = ~reg_info->write_mask & ((VKD3DSP_WRITEMASK_0 << component_idx) - 1);
    if (skipped_component_mask)
        component_idx -= vkd3d_write_mask_component_count(skipped_component_mask);
    component_type = vkd3d_component_type_from_data_type(reg->data_type);

    reg_component_count = vkd3d_write_mask_component_count(reg_info->write_mask);

    if (component_idx >= vkd3d_write_mask_component_count(reg_info->write_mask))
    {
        ERR("Invalid component_idx %u for register %#x, %u (write_mask %#x).\n",
                component_idx, reg->type, reg->idx[0].offset, reg_info->write_mask);
    }

    type_id = vkd3d_spirv_get_type_id(builder, reg_info->component_type, 1);
    reg_id = reg_info->id;
    if (reg_component_count != 1)
    {
        ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, reg_info->storage_class, type_id);
        index = vkd3d_dxbc_compiler_get_constant_uint(compiler, component_idx);
        reg_id = vkd3d_spirv_build_op_in_bounds_access_chain1(builder, ptr_type_id, reg_id, index);
    }

    val_id = vkd3d_spirv_build_op_load(builder, type_id, reg_id, SpvMemoryAccessMaskNone);

    if (component_type != reg_info->component_type)
    {
        type_id = vkd3d_spirv_get_type_id(builder, component_type, 1);
        val_id = vkd3d_spirv_build_op_bitcast(builder, type_id, val_id);
    }

    return val_id;
}

static uint32_t vkd3d_dxbc_compiler_emit_load_reg(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, DWORD swizzle, DWORD write_mask)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    struct vkd3d_shader_register_info reg_info;
    enum vkd3d_component_type component_type;
    unsigned int component_count;
    uint32_t type_id, val_id;

    if (reg->type == VKD3DSPR_IMMCONST)
        return vkd3d_dxbc_compiler_emit_load_constant(compiler, reg, swizzle, write_mask);

    component_count = vkd3d_write_mask_component_count(write_mask);
    component_type = vkd3d_component_type_from_data_type(reg->data_type);
    if (!vkd3d_dxbc_compiler_get_register_info(compiler, reg, &reg_info))
    {
        type_id = vkd3d_spirv_get_type_id(builder, component_type, component_count);
        return vkd3d_spirv_build_op_undef(builder, &builder->global_stream, type_id);
    }
    vkd3d_dxbc_compiler_emit_dereference_register(compiler, reg, &reg_info);

    /* Intermediate value (no storage class). */
    if (reg_info.storage_class == SpvStorageClassMax)
    {
        val_id = reg_info.id;
    }
    else if (component_count == 1)
    {
        return vkd3d_dxbc_compiler_emit_load_scalar(compiler, reg, swizzle, write_mask, &reg_info);
    }
    else
    {
        type_id = vkd3d_spirv_get_type_id(builder,
                reg_info.component_type, vkd3d_write_mask_component_count(reg_info.write_mask));
        val_id = vkd3d_spirv_build_op_load(builder, type_id, reg_info.id, SpvMemoryAccessMaskNone);
    }

    val_id = vkd3d_dxbc_compiler_emit_swizzle(compiler,
            val_id, reg_info.write_mask, reg_info.component_type, swizzle, write_mask);

    if (component_type != reg_info.component_type)
    {
        type_id = vkd3d_spirv_get_type_id(builder, component_type, component_count);
        val_id = vkd3d_spirv_build_op_bitcast(builder, type_id, val_id);
    }

    return val_id;
}

static void vkd3d_dxbc_compiler_emit_execution_mode(struct vkd3d_dxbc_compiler *compiler,
        SpvExecutionMode mode, const uint32_t *literals, unsigned int literal_count)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;

    vkd3d_spirv_build_op_execution_mode(&builder->execution_mode_stream,
            builder->main_function_id, mode, literals, literal_count);
}

static void vkd3d_dxbc_compiler_emit_execution_mode1(struct vkd3d_dxbc_compiler *compiler,
        SpvExecutionMode mode, const uint32_t literal)
{
    vkd3d_dxbc_compiler_emit_execution_mode(compiler, mode, &literal, 1);
}

static uint32_t vkd3d_dxbc_compiler_emit_abs(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, DWORD write_mask, uint32_t val_id)
{
    unsigned int component_count = vkd3d_write_mask_component_count(write_mask);
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id;

    if (reg->data_type == VKD3D_DATA_FLOAT)
    {
        type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, component_count);
        return vkd3d_spirv_build_op_glsl_std450_fabs(builder, type_id, val_id);
    }

    FIXME("Unhandled data type %#x.\n", reg->data_type);
    return val_id;
}

static uint32_t vkd3d_dxbc_compiler_emit_neg(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, DWORD write_mask, uint32_t val_id)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id;

    type_id = vkd3d_dxbc_compiler_get_type_id_for_reg(compiler, reg, write_mask);
    if (reg->data_type == VKD3D_DATA_FLOAT)
        return vkd3d_spirv_build_op_fnegate(builder, type_id, val_id);
    else if (reg->data_type == VKD3D_DATA_INT)
        return vkd3d_spirv_build_op_snegate(builder, type_id, val_id);

    FIXME("Unhandled data type %#x.\n", reg->data_type);
    return val_id;
}

static uint32_t vkd3d_dxbc_compiler_emit_src_modifier(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, DWORD write_mask,
        enum vkd3d_shader_src_modifier modifier, uint32_t val_id)
{
    switch (modifier)
    {
        case VKD3DSPSM_NONE:
            break;
        case VKD3DSPSM_NEG:
            return vkd3d_dxbc_compiler_emit_neg(compiler, reg, write_mask, val_id);
        case VKD3DSPSM_ABS:
            return vkd3d_dxbc_compiler_emit_abs(compiler, reg, write_mask, val_id);
        case VKD3DSPSM_ABSNEG:
            val_id = vkd3d_dxbc_compiler_emit_abs(compiler, reg, write_mask, val_id);
            return vkd3d_dxbc_compiler_emit_neg(compiler, reg, write_mask, val_id);
        default:
            FIXME("Unhandled src modifier %#x.\n", modifier);
            break;
    }

    return val_id;
}

static uint32_t vkd3d_dxbc_compiler_emit_load_src(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_src_param *src, DWORD write_mask)
{
    uint32_t val_id;

    val_id = vkd3d_dxbc_compiler_emit_load_reg(compiler, &src->reg, src->swizzle, write_mask);
    return vkd3d_dxbc_compiler_emit_src_modifier(compiler, &src->reg, write_mask, src->modifiers, val_id);
}

static uint32_t vkd3d_dxbc_compiler_emit_load_src_with_type(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_src_param *src, DWORD write_mask, enum vkd3d_component_type component_type)
{
    struct vkd3d_shader_src_param src_param = *src;

    src_param.reg.data_type = vkd3d_data_type_from_component_type(component_type);
    return vkd3d_dxbc_compiler_emit_load_src(compiler, &src_param, write_mask);
}

static void vkd3d_dxbc_compiler_emit_store_scalar(struct vkd3d_dxbc_compiler *compiler,
        uint32_t dst_id, unsigned int dst_write_mask, enum vkd3d_component_type component_type,
        SpvStorageClass storage_class, unsigned int write_mask, uint32_t val_id)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, ptr_type_id, index;
    unsigned int component_idx;

    if (vkd3d_write_mask_component_count(dst_write_mask) > 1)
    {
        type_id = vkd3d_spirv_get_type_id(builder, component_type, 1);
        ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, storage_class, type_id);
        component_idx = vkd3d_write_mask_get_component_idx(write_mask);
        component_idx -= vkd3d_write_mask_get_component_idx(dst_write_mask);
        index = vkd3d_dxbc_compiler_get_constant_uint(compiler, component_idx);
        dst_id = vkd3d_spirv_build_op_in_bounds_access_chain1(builder, ptr_type_id, dst_id, index);
    }

    vkd3d_spirv_build_op_store(builder, dst_id, val_id, SpvMemoryAccessMaskNone);
}

static void vkd3d_dxbc_compiler_emit_store(struct vkd3d_dxbc_compiler *compiler,
        uint32_t dst_id, unsigned int dst_write_mask, enum vkd3d_component_type component_type,
        SpvStorageClass storage_class, unsigned int write_mask, uint32_t val_id)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    unsigned int component_count, dst_component_count;
    uint32_t components[VKD3D_VEC4_SIZE];
    unsigned int i, component_idx;
    uint32_t type_id, dst_val_id;

    assert(write_mask);

    component_count = vkd3d_write_mask_component_count(write_mask);

    if (component_count == 1)
    {
        return vkd3d_dxbc_compiler_emit_store_scalar(compiler,
                dst_id, dst_write_mask, component_type, storage_class, write_mask, val_id);
    }

    dst_component_count = vkd3d_write_mask_component_count(dst_write_mask);
    if (dst_component_count != component_count)
    {
        type_id = vkd3d_spirv_get_type_id(builder, component_type, dst_component_count);
        dst_val_id = vkd3d_spirv_build_op_load(builder, type_id, dst_id, SpvMemoryAccessMaskNone);

        assert(component_count <= ARRAY_SIZE(components));

        for (i = 0, component_idx = 0; i < dst_component_count; ++i)
        {
            if (write_mask & (VKD3DSP_WRITEMASK_0 << i))
                components[i] = dst_component_count + component_idx++;
            else
                components[i] = i;
        }

        val_id = vkd3d_spirv_build_op_vector_shuffle(builder,
                type_id, dst_val_id, val_id, components, dst_component_count);
    }

    vkd3d_spirv_build_op_store(builder, dst_id, val_id, SpvMemoryAccessMaskNone);
}

static void vkd3d_dxbc_compiler_emit_store_reg(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, unsigned int write_mask, uint32_t val_id)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    struct vkd3d_shader_register_info reg_info;
    enum vkd3d_component_type component_type;
    uint32_t type_id;

    assert(reg->type != VKD3DSPR_IMMCONST);

    if (!vkd3d_dxbc_compiler_get_register_info(compiler, reg, &reg_info))
        return;
    vkd3d_dxbc_compiler_emit_dereference_register(compiler, reg, &reg_info);

    component_type = vkd3d_component_type_from_data_type(reg->data_type);
    if (component_type != reg_info.component_type)
    {
        unsigned int component_count = vkd3d_write_mask_component_count(write_mask);
        type_id = vkd3d_spirv_get_type_id(builder, reg_info.component_type, component_count);
        val_id = vkd3d_spirv_build_op_bitcast(builder, type_id, val_id);
        component_type = reg_info.component_type;
    }

    vkd3d_dxbc_compiler_emit_store(compiler,
            reg_info.id, reg_info.write_mask, component_type, reg_info.storage_class, write_mask, val_id);
}

static uint32_t vkd3d_dxbc_compiler_emit_sat(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, DWORD write_mask, uint32_t val_id)
{
    unsigned int component_count = vkd3d_write_mask_component_count(write_mask);
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, zero_id, one_id;

    zero_id = vkd3d_dxbc_compiler_get_constant_float_vector(compiler, 0.0f, component_count);
    one_id = vkd3d_dxbc_compiler_get_constant_float_vector(compiler, 1.0f, component_count);

    type_id = vkd3d_dxbc_compiler_get_type_id_for_reg(compiler, reg, write_mask);
    if (reg->data_type == VKD3D_DATA_FLOAT)
        return vkd3d_spirv_build_op_glsl_std450_nclamp(builder, type_id, val_id, zero_id, one_id);

    FIXME("Unhandled data type %#x.\n", reg->data_type);
    return val_id;
}

static void vkd3d_dxbc_compiler_emit_store_dst(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_dst_param *dst, uint32_t val_id)
{
    assert(!(dst->modifiers & ~VKD3DSPDM_SATURATE));
    if (dst->modifiers & VKD3DSPDM_SATURATE)
        val_id = vkd3d_dxbc_compiler_emit_sat(compiler, &dst->reg, dst->write_mask, val_id);

    vkd3d_dxbc_compiler_emit_store_reg(compiler, &dst->reg, dst->write_mask, val_id);
}

static void vkd3d_dxbc_compiler_emit_store_dst_swizzled(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_dst_param *dst, uint32_t val_id,
        enum vkd3d_component_type component_type, DWORD swizzle)
{
    struct vkd3d_shader_dst_param typed_dst = *dst;
    val_id = vkd3d_dxbc_compiler_emit_swizzle(compiler,
            val_id, VKD3DSP_WRITEMASK_ALL, component_type, swizzle, dst->write_mask);
    /* XXX: The register data type could be fixed by the shader parser. For SM5
     * shaders the data types are stored in instructions modifiers.
     */
    typed_dst.reg.data_type = vkd3d_data_type_from_component_type(component_type);
    vkd3d_dxbc_compiler_emit_store_dst(compiler, &typed_dst, val_id);
}

static void vkd3d_dxbc_compiler_emit_store_dst_components(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_dst_param *dst, enum vkd3d_component_type component_type,
        uint32_t *component_ids)
{
    unsigned int component_count = vkd3d_write_mask_component_count(dst->write_mask);
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, val_id;

    if (component_count > 1)
    {
        type_id = vkd3d_spirv_get_type_id(builder, component_type, component_count);
        val_id = vkd3d_spirv_build_op_composite_construct(builder,
                type_id, component_ids, component_count);
    }
    else
    {
        val_id = *component_ids;
    }
    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

static void vkd3d_dxbc_compiler_emit_store_dst_scalar(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_dst_param *dst, uint32_t val_id,
        enum vkd3d_component_type component_type, DWORD swizzle)
{
    unsigned int component_count = vkd3d_write_mask_component_count(dst->write_mask);
    uint32_t component_ids[VKD3D_VEC4_SIZE];
    unsigned int component_idx, i;

    component_idx = vkd3d_write_mask_get_component_idx(dst->write_mask);
    for (i = 0; i < component_count; ++i)
    {
        if (vkd3d_swizzle_get_component(swizzle, component_idx + i))
            ERR("Invalid swizzle %#x for scalar value, write mask %#x.\n", swizzle, dst->write_mask);

        component_ids[i] = val_id;
    }
    vkd3d_dxbc_compiler_emit_store_dst_components(compiler, dst, component_type, component_ids);
}

static void vkd3d_dxbc_compiler_decorate_builtin(struct vkd3d_dxbc_compiler *compiler,
        uint32_t target_id, SpvBuiltIn builtin)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;

    switch (builtin)
    {
        case SpvBuiltInPrimitiveId:
            if (compiler->shader_type == VKD3D_SHADER_TYPE_PIXEL)
                vkd3d_spirv_enable_capability(builder, SpvCapabilityGeometry);
            break;
        case SpvBuiltInFragDepth:
            vkd3d_dxbc_compiler_emit_execution_mode(compiler, SpvExecutionModeDepthReplacing, NULL, 0);
            break;
        case SpvBuiltInLayer:
            vkd3d_spirv_enable_capability(builder, SpvCapabilityGeometry);
            break;
        case SpvBuiltInViewportIndex:
            vkd3d_spirv_enable_capability(builder, SpvCapabilityMultiViewport);
            break;
        case SpvBuiltInSampleId:
            vkd3d_spirv_enable_capability(builder, SpvCapabilitySampleRateShading);
            break;
        default:
            break;
    }

    vkd3d_spirv_build_op_decorate1(builder, target_id, SpvDecorationBuiltIn, builtin);
}

static void vkd3d_dxbc_compiler_emit_interpolation_decorations(struct vkd3d_dxbc_compiler *compiler,
        uint32_t id, enum vkd3d_shader_interpolation_mode mode)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;

    switch (mode)
    {
        case VKD3DSIM_NONE:
            break;
        case VKD3DSIM_CONSTANT:
            vkd3d_spirv_build_op_decorate(builder, id, SpvDecorationFlat, NULL, 0);
            break;
        case VKD3DSIM_LINEAR:
            break;
        case VKD3DSIM_LINEAR_CENTROID:
            vkd3d_spirv_build_op_decorate(builder, id, SpvDecorationCentroid, NULL, 0);
            break;
        case VKD3DSIM_LINEAR_NOPERSPECTIVE:
            vkd3d_spirv_build_op_decorate(builder, id, SpvDecorationNoPerspective, NULL, 0);
            break;
        case VKD3DSIM_LINEAR_SAMPLE:
            vkd3d_spirv_enable_capability(builder, SpvCapabilitySampleRateShading);
            vkd3d_spirv_build_op_decorate(builder, id, SpvDecorationSample, NULL, 0);
            break;
        default:
            FIXME("Unhandled interpolation mode %#x.\n", mode);
            break;
    }
}

static uint32_t vkd3d_dxbc_compiler_emit_int_to_bool(struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_shader_conditional_op condition, unsigned int component_count, uint32_t val_id)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id;
    SpvOp op;

    assert(!(condition & ~(VKD3D_SHADER_CONDITIONAL_OP_NZ | VKD3D_SHADER_CONDITIONAL_OP_Z)));

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_BOOL, component_count);
    op = condition & VKD3D_SHADER_CONDITIONAL_OP_Z ? SpvOpIEqual : SpvOpINotEqual;
    return vkd3d_spirv_build_op_tr2(builder, &builder->function_stream, op, type_id, val_id,
            vkd3d_dxbc_compiler_get_constant_uint_vector(compiler, 0, component_count));
}

static uint32_t vkd3d_dxbc_compiler_emit_bool_to_int(struct vkd3d_dxbc_compiler *compiler,
        unsigned int component_count, uint32_t val_id)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, true_id, false_id;

    true_id = vkd3d_dxbc_compiler_get_constant_uint_vector(compiler, 0xffffffff, component_count);
    false_id = vkd3d_dxbc_compiler_get_constant_uint_vector(compiler, 0, component_count);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, component_count);
    return vkd3d_spirv_build_op_select(builder, type_id, val_id, true_id, false_id);
}

typedef uint32_t (*vkd3d_spirv_builtin_fixup_pfn)(struct vkd3d_dxbc_compiler *compiler,
        uint32_t val_id);

static uint32_t vkd3d_dxbc_compiler_emit_draw_parameter_fixup(struct vkd3d_dxbc_compiler *compiler,
        uint32_t index_id, SpvBuiltIn base)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t base_var_id, base_id, type_id;

    vkd3d_spirv_enable_capability(builder, SpvCapabilityDrawParameters);

    base_var_id = vkd3d_dxbc_compiler_emit_variable(compiler, &builder->global_stream,
            SpvStorageClassInput, VKD3D_TYPE_INT, 1);
    vkd3d_spirv_add_iface_variable(builder, base_var_id);
    vkd3d_dxbc_compiler_decorate_builtin(compiler, base_var_id, base);

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_INT, 1);
    base_id = vkd3d_spirv_build_op_load(builder,
            type_id, base_var_id, SpvMemoryAccessMaskNone);

    return vkd3d_spirv_build_op_isub(builder, type_id, index_id, base_id);
}

/* Substitute "VertexIndex - BaseVertex" for SV_VertexID. */
static uint32_t sv_vertex_id_fixup(struct vkd3d_dxbc_compiler *compiler,
        uint32_t vertex_index_id)
{
    return vkd3d_dxbc_compiler_emit_draw_parameter_fixup(compiler,
            vertex_index_id, SpvBuiltInBaseVertex);
}

/* Substitute "InstanceIndex - BaseInstance" for SV_InstanceID. */
static uint32_t sv_instance_id_fixup(struct vkd3d_dxbc_compiler *compiler,
        uint32_t instance_index_id)
{
    return vkd3d_dxbc_compiler_emit_draw_parameter_fixup(compiler,
            instance_index_id, SpvBuiltInBaseInstance);
}

static uint32_t sv_front_face_fixup(struct vkd3d_dxbc_compiler *compiler,
        uint32_t front_facing_id)
{
    return vkd3d_dxbc_compiler_emit_bool_to_int(compiler, 1, front_facing_id);
}

/* frag_coord.w = 1.0f / frag_coord.w */
static uint32_t frag_coord_fixup(struct vkd3d_dxbc_compiler *compiler,
        uint32_t frag_coord_id)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, w_id;

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, 1);
    w_id = vkd3d_spirv_build_op_composite_extract1(builder, type_id, frag_coord_id, 3);
    w_id = vkd3d_spirv_build_op_fdiv(builder, type_id,
            vkd3d_dxbc_compiler_get_constant_float(compiler, 1.0f), w_id);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE);
    return vkd3d_spirv_build_op_composite_insert1(builder, type_id, w_id, frag_coord_id, 3);
}

struct vkd3d_spirv_builtin
{
    enum vkd3d_component_type component_type;
    unsigned int component_count;
    SpvBuiltIn spirv_builtin;
    vkd3d_spirv_builtin_fixup_pfn fixup_pfn;
    unsigned int spirv_array_size;
    unsigned int member_idx;
};

/*
 * The following tables are based on the "14.6. Built-In Variables" section
 * from the Vulkan spec.
 */
static const struct
{
    enum vkd3d_shader_input_sysval_semantic sysval;
    struct vkd3d_spirv_builtin builtin;
    enum vkd3d_shader_target target;
}
vkd3d_system_value_builtins[] =
{
    {VKD3D_SIV_VERTEX_ID,   {VKD3D_TYPE_INT,   1, SpvBuiltInVertexId},   VKD3D_SHADER_TARGET_SPIRV_OPENGL_4_5},
    {VKD3D_SIV_INSTANCE_ID, {VKD3D_TYPE_INT,   1, SpvBuiltInInstanceId}, VKD3D_SHADER_TARGET_SPIRV_OPENGL_4_5},

    {VKD3D_SIV_POSITION,    {VKD3D_TYPE_FLOAT, 4, SpvBuiltInPosition}},
    {VKD3D_SIV_VERTEX_ID,   {VKD3D_TYPE_INT,   1, SpvBuiltInVertexIndex, sv_vertex_id_fixup}},
    {VKD3D_SIV_INSTANCE_ID, {VKD3D_TYPE_INT,   1, SpvBuiltInInstanceIndex, sv_instance_id_fixup}},

    {VKD3D_SIV_PRIMITIVE_ID, {VKD3D_TYPE_INT, 1, SpvBuiltInPrimitiveId}},

    {VKD3D_SIV_RENDER_TARGET_ARRAY_INDEX, {VKD3D_TYPE_INT, 1, SpvBuiltInLayer}},
    {VKD3D_SIV_VIEWPORT_ARRAY_INDEX,      {VKD3D_TYPE_INT, 1, SpvBuiltInViewportIndex}},

    {VKD3D_SIV_IS_FRONT_FACE, {VKD3D_TYPE_BOOL, 1, SpvBuiltInFrontFacing, sv_front_face_fixup}},

    {VKD3D_SIV_SAMPLE_INDEX, {VKD3D_TYPE_UINT, 1, SpvBuiltInSampleId}},

    {VKD3D_SIV_CLIP_DISTANCE, {VKD3D_TYPE_FLOAT, 1, SpvBuiltInClipDistance, NULL, 1}},
    {VKD3D_SIV_CULL_DISTANCE, {VKD3D_TYPE_FLOAT, 1, SpvBuiltInCullDistance, NULL, 1}},

    {VKD3D_SIV_QUAD_U0_TESS_FACTOR,      {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelOuter, NULL, 4, 0}},
    {VKD3D_SIV_QUAD_V0_TESS_FACTOR,      {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelOuter, NULL, 4, 1}},
    {VKD3D_SIV_QUAD_U1_TESS_FACTOR,      {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelOuter, NULL, 4, 2}},
    {VKD3D_SIV_QUAD_V1_TESS_FACTOR,      {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelOuter, NULL, 4, 3}},
    {VKD3D_SIV_QUAD_U_INNER_TESS_FACTOR, {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelInner, NULL, 2, 0}},
    {VKD3D_SIV_QUAD_V_INNER_TESS_FACTOR, {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelInner, NULL, 2, 1}},

    {VKD3D_SIV_TRIANGLE_U_TESS_FACTOR,     {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelOuter, NULL, 4, 0}},
    {VKD3D_SIV_TRIANGLE_V_TESS_FACTOR,     {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelOuter, NULL, 4, 1}},
    {VKD3D_SIV_TRIANGLE_W_TESS_FACTOR,     {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelOuter, NULL, 4, 2}},
    {VKD3D_SIV_TRIANGLE_INNER_TESS_FACTOR, {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelInner, NULL, 2, 0}},

    {VKD3D_SIV_LINE_DETAIL_TESS_FACTOR,  {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelOuter, NULL, 4, 0}},
    {VKD3D_SIV_LINE_DENSITY_TESS_FACTOR, {VKD3D_TYPE_FLOAT, 1, SpvBuiltInTessLevelOuter, NULL, 4, 1}},
};
static const struct vkd3d_spirv_builtin vkd3d_pixel_shader_position_builtin =
{
    VKD3D_TYPE_FLOAT, 4, SpvBuiltInFragCoord, frag_coord_fixup,
};
static const struct
{
    enum vkd3d_shader_register_type reg_type;
    struct vkd3d_spirv_builtin builtin;
}
vkd3d_register_builtins[] =
{
    {VKD3DSPR_THREADID,         {VKD3D_TYPE_INT, 3, SpvBuiltInGlobalInvocationId}},
    {VKD3DSPR_LOCALTHREADID,    {VKD3D_TYPE_INT, 3, SpvBuiltInLocalInvocationId}},
    {VKD3DSPR_LOCALTHREADINDEX, {VKD3D_TYPE_INT, 1, SpvBuiltInLocalInvocationIndex}},
    {VKD3DSPR_THREADGROUPID,    {VKD3D_TYPE_INT, 3, SpvBuiltInWorkgroupId}},

    {VKD3DSPR_GSINSTID,         {VKD3D_TYPE_INT, 1, SpvBuiltInInvocationId}},
    {VKD3DSPR_OUTPOINTID,       {VKD3D_TYPE_INT, 1, SpvBuiltInInvocationId}},

    {VKD3DSPR_PRIMID,           {VKD3D_TYPE_INT, 1, SpvBuiltInPrimitiveId}},

    {VKD3DSPR_TESSCOORD,        {VKD3D_TYPE_FLOAT, 3, SpvBuiltInTessCoord}},

    {VKD3DSPR_COVERAGE,         {VKD3D_TYPE_UINT, 1, SpvBuiltInSampleMask, NULL, 1}},
    {VKD3DSPR_SAMPLEMASK,       {VKD3D_TYPE_UINT, 1, SpvBuiltInSampleMask, NULL, 1}},

    {VKD3DSPR_DEPTHOUT,         {VKD3D_TYPE_FLOAT, 1, SpvBuiltInFragDepth}},
    {VKD3DSPR_DEPTHOUTGE,       {VKD3D_TYPE_FLOAT, 1, SpvBuiltInFragDepth}},
    {VKD3DSPR_DEPTHOUTLE,       {VKD3D_TYPE_FLOAT, 1, SpvBuiltInFragDepth}},
};

static void vkd3d_dxbc_compiler_emit_register_execution_mode(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg)
{
    switch (reg->type)
    {
        case VKD3DSPR_DEPTHOUTGE:
            vkd3d_dxbc_compiler_emit_execution_mode(compiler, SpvExecutionModeDepthGreater, NULL, 0);
            break;
        case VKD3DSPR_DEPTHOUTLE:
            vkd3d_dxbc_compiler_emit_execution_mode(compiler, SpvExecutionModeDepthLess, NULL, 0);
            break;
        default:
            return;
    }
}

static const struct vkd3d_spirv_builtin *get_spirv_builtin_for_sysval(
        const struct vkd3d_dxbc_compiler *compiler, enum vkd3d_shader_input_sysval_semantic sysval)
{
    enum vkd3d_shader_target target;
    unsigned int i;

    if (!sysval)
        return NULL;

    /* In pixel shaders, SV_Position is mapped to SpvBuiltInFragCoord. */
    if (sysval == VKD3D_SIV_POSITION && compiler->shader_type == VKD3D_SHADER_TYPE_PIXEL)
        return &vkd3d_pixel_shader_position_builtin;

    target = vkd3d_dxbc_compiler_get_target(compiler);
    for (i = 0; i < ARRAY_SIZE(vkd3d_system_value_builtins); ++i)
    {
        if (vkd3d_system_value_builtins[i].sysval == sysval
                && (!vkd3d_system_value_builtins[i].target
                || vkd3d_system_value_builtins[i].target == target))
            return &vkd3d_system_value_builtins[i].builtin;
    }

    FIXME("Unhandled builtin (sysval %#x).\n", sysval);

    return NULL;
}

static const struct vkd3d_spirv_builtin *get_spirv_builtin_for_register(
        enum vkd3d_shader_register_type reg_type)
{
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(vkd3d_register_builtins); ++i)
    {
        if (vkd3d_register_builtins[i].reg_type == reg_type)
            return &vkd3d_register_builtins[i].builtin;
    }

    return NULL;
}

static const struct vkd3d_spirv_builtin *vkd3d_get_spirv_builtin(const struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_shader_register_type reg_type, enum vkd3d_shader_input_sysval_semantic sysval)
{
    const struct vkd3d_spirv_builtin *builtin;

    if ((builtin = get_spirv_builtin_for_sysval(compiler, sysval)))
        return builtin;
    if ((builtin = get_spirv_builtin_for_register(reg_type)))
        return builtin;

    if (sysval != VKD3D_SIV_NONE || (reg_type != VKD3DSPR_OUTPUT && reg_type != VKD3DSPR_COLOROUT))
        FIXME("Unhandled builtin (register type %#x, sysval %#x).\n", reg_type, sysval);
    return NULL;
}

static const struct vkd3d_shader_signature_element *vkd3d_find_signature_element_for_reg(
        const struct vkd3d_shader_signature *signature, unsigned int *signature_element_index,
        unsigned int reg_idx, DWORD write_mask)
{
    unsigned int signature_idx;

    for (signature_idx = 0; signature_idx < signature->element_count; ++signature_idx)
    {
        if (signature->elements[signature_idx].register_index == reg_idx
                && (signature->elements[signature_idx].mask & write_mask) == write_mask)
        {
            if (signature_element_index)
                *signature_element_index = signature_idx;
            return &signature->elements[signature_idx];
        }
    }

    FIXME("Could not find shader signature element (register %u, write mask %#x).\n",
            reg_idx, write_mask);
    if (signature_element_index)
        *signature_element_index = ~0u;
    return NULL;
}

static uint32_t vkd3d_dxbc_compiler_get_invocation_id(struct vkd3d_dxbc_compiler *compiler)
{
    struct vkd3d_shader_register r;

    assert(compiler->shader_type == VKD3D_SHADER_TYPE_HULL);

    memset(&r, 0, sizeof(r));
    r.type = VKD3DSPR_OUTPOINTID;
    r.idx[0].offset = ~0u;
    r.idx[1].offset = ~0u;
    return vkd3d_dxbc_compiler_get_register_id(compiler, &r);
}

static uint32_t vkd3d_dxbc_compiler_emit_load_invocation_id(struct vkd3d_dxbc_compiler *compiler)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, id;

    id = vkd3d_dxbc_compiler_get_invocation_id(compiler);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_INT, 1);
    return vkd3d_spirv_build_op_load(builder, type_id, id, SpvMemoryAccessMaskNone);
}

static void vkd3d_dxbc_compiler_emit_shader_phase_name(struct vkd3d_dxbc_compiler *compiler,
        uint32_t id, const struct vkd3d_shader_phase *phase, const char *suffix)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const char *name;

    if (!suffix)
        suffix = "";

    switch (phase->type)
    {
        case VKD3DSIH_HS_CONTROL_POINT_PHASE:
            name = "control";
            break;
        case VKD3DSIH_HS_FORK_PHASE:
            name = "fork";
            break;
        case VKD3DSIH_HS_JOIN_PHASE:
            name = "join";
            break;
        default:
            ERR("Invalid phase type %#x.\n", phase->type);
            return;
    }
    vkd3d_spirv_build_op_name(builder, id, "%s%u%s", name, phase->idx, suffix);
}

static void vkd3d_dxbc_compiler_begin_shader_phase(struct vkd3d_dxbc_compiler *compiler,
        struct vkd3d_shader_phase *phase)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t void_id, function_type_id;
    unsigned int param_count;
    uint32_t param_type_id;

    if (phase->instance_count)
    {
        param_type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
        param_count = 1;
    }
    else
    {
        param_count = 0;
    }

    phase->function_id = vkd3d_spirv_alloc_id(builder);

    void_id = vkd3d_spirv_get_op_type_void(builder);
    function_type_id = vkd3d_spirv_get_op_type_function(builder, void_id, &param_type_id, param_count);
    vkd3d_spirv_build_op_function(builder, void_id, phase->function_id,
            SpvFunctionControlMaskNone, function_type_id);

    if (phase->instance_count)
        phase->instance_id = vkd3d_spirv_build_op_function_parameter(builder, param_type_id);

    vkd3d_spirv_build_op_label(builder, vkd3d_spirv_alloc_id(builder));
    phase->function_location = vkd3d_spirv_stream_current_location(&builder->function_stream);

    vkd3d_dxbc_compiler_emit_shader_phase_name(compiler, phase->function_id, phase, NULL);
}

static const struct vkd3d_shader_phase *vkd3d_dxbc_compiler_get_current_shader_phase(
        struct vkd3d_dxbc_compiler *compiler)
{
    struct vkd3d_shader_phase *phase;

    if (!compiler->shader_phase_count)
        return NULL;

    phase = &compiler->shader_phases[compiler->shader_phase_count - 1];
    if (!phase->function_id)
        vkd3d_dxbc_compiler_begin_shader_phase(compiler, phase);
    return phase;
}

static void vkd3d_dxbc_compiler_decorate_xfb_output(struct vkd3d_dxbc_compiler *compiler,
        uint32_t id, unsigned int component_count, const struct vkd3d_shader_signature_element *signature_element)
{
    const struct vkd3d_shader_transform_feedback_info *xfb_info = compiler->xfb_info;
    const struct vkd3d_shader_transform_feedback_element *xfb_element;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    unsigned int offset, stride, i;

    if (!xfb_info)
        return;

    offset = 0;
    xfb_element = NULL;
    for (i = 0; i < xfb_info->element_count; ++i)
    {
        const struct vkd3d_shader_transform_feedback_element *e = &xfb_info->elements[i];

        if (e->stream_index == signature_element->stream_index
                && !ascii_strcasecmp(e->semantic_name, signature_element->semantic_name)
                && e->semantic_index == signature_element->semantic_index)
        {
            xfb_element = e;
            break;
        }

        offset += 4 * e->component_count;
    }

    if (!xfb_element)
        return;

    if (xfb_element->component_index || xfb_element->component_count > component_count)
    {
        FIXME("Unhandled component range %u, %u.\n", xfb_element->component_index, xfb_element->component_count);
        return;
    }

    if (xfb_element->output_slot < xfb_info->buffer_stride_count)
    {
        stride = xfb_info->buffer_strides[xfb_element->output_slot];
    }
    else
    {
        stride = 0;
        for (i = 0; i < xfb_info->element_count; ++i)
        {
            const struct vkd3d_shader_transform_feedback_element *e = &xfb_info->elements[i];

            if (e->stream_index == xfb_element->stream_index && e->output_slot == xfb_element->output_slot)
                stride += 4 * e->component_count;
        }
    }

    vkd3d_spirv_build_op_decorate1(builder, id, SpvDecorationXfbBuffer, xfb_element->output_slot);
    vkd3d_spirv_build_op_decorate1(builder, id, SpvDecorationXfbStride, stride);
    vkd3d_spirv_build_op_decorate1(builder, id, SpvDecorationOffset, offset);
}

static uint32_t vkd3d_dxbc_compiler_emit_builtin_variable(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_spirv_builtin *builtin, SpvStorageClass storage_class, unsigned int array_size)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t id;

    array_size = max(array_size, builtin->spirv_array_size);

    id = vkd3d_dxbc_compiler_emit_array_variable(compiler,
            &builder->global_stream, storage_class,
            builtin->component_type, builtin->component_count, array_size);
    vkd3d_spirv_add_iface_variable(builder, id);
    vkd3d_dxbc_compiler_decorate_builtin(compiler, id, builtin->spirv_builtin);

    if (compiler->shader_type == VKD3D_SHADER_TYPE_PIXEL && storage_class == SpvStorageClassInput
            && builtin->component_type != VKD3D_TYPE_FLOAT && builtin->component_type != VKD3D_TYPE_BOOL)
        vkd3d_spirv_build_op_decorate(builder, id, SpvDecorationFlat, NULL, 0);

    return id;
}

static bool needs_private_io_variable(const struct vkd3d_shader_signature *signature,
        unsigned int reg_idx, const struct vkd3d_spirv_builtin *builtin,
        unsigned int *component_count, unsigned int *out_write_mask)
{
    unsigned int write_mask = 0;
    bool have_sysval = false;
    unsigned int i, count;

    if (*component_count == VKD3D_VEC4_SIZE)
        return false;

    for (i = 0, count = 0; i < signature->element_count; ++i)
    {
        const struct vkd3d_shader_signature_element *current = &signature->elements[i];

        if (current->register_index != reg_idx)
            continue;

        write_mask |= current->mask & 0xff;
        ++count;

        if (current->sysval_semantic)
            have_sysval = true;
    }

    if (count == 1)
        return false;

    if (builtin || have_sysval)
        return true;

    if (!vkd3d_bitmask_is_contiguous(write_mask))
    {
        FIXME("Write mask %#x is non-contiguous.\n", write_mask);
        return true;
    }

    assert(vkd3d_write_mask_component_count(write_mask) >= *component_count);
    *component_count = vkd3d_write_mask_component_count(write_mask);
    *out_write_mask = write_mask;
    return false;
}

static uint32_t vkd3d_dxbc_compiler_emit_input(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_dst_param *dst, enum vkd3d_shader_input_sysval_semantic sysval,
        enum vkd3d_shader_interpolation_mode interpolation_mode)
{
    unsigned int component_idx, component_count, input_component_count;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_signature_element *signature_element;
    const struct vkd3d_shader_signature *shader_signature;
    const struct vkd3d_shader_register *reg = &dst->reg;
    uint32_t type_id, ptr_type_id, float_type_id;
    const struct vkd3d_spirv_builtin *builtin;
    enum vkd3d_component_type component_type;
    uint32_t val_id, input_id, var_id;
    struct vkd3d_symbol reg_symbol;
    SpvStorageClass storage_class;
    struct rb_entry *entry = NULL;
    bool use_private_var = false;
    unsigned int write_mask;
    unsigned int array_size;
    unsigned int reg_idx;
    uint32_t i, index;

    assert(!reg->idx[0].rel_addr);
    assert(!reg->idx[1].rel_addr);

    if (reg->idx[1].offset != ~0u)
    {
        array_size = reg->idx[0].offset;
        reg_idx = reg->idx[1].offset;
    }
    else
    {
        array_size = 0;
        reg_idx = reg->idx[0].offset;
    }

    shader_signature = reg->type == VKD3DSPR_PATCHCONST
            ? compiler->patch_constant_signature : compiler->input_signature;

    if (!(signature_element = vkd3d_find_signature_element_for_reg(shader_signature,
            NULL, reg_idx, dst->write_mask)))
    {
        FIXME("No signature element for shader input, ignoring shader input.\n");
        return 0;
    }

    if (compiler->shader_type == VKD3D_SHADER_TYPE_HULL && !sysval && signature_element->sysval_semantic)
        sysval = vkd3d_siv_from_sysval(signature_element->sysval_semantic);

    builtin = get_spirv_builtin_for_sysval(compiler, sysval);

    write_mask = signature_element->mask & 0xff;

    component_count = vkd3d_write_mask_component_count(dst->write_mask);
    if (builtin)
    {
        component_type = builtin->component_type;
        input_component_count = builtin->component_count;
        component_idx = 0;
    }
    else
    {
        component_type = signature_element->component_type;
        input_component_count = vkd3d_write_mask_component_count(signature_element->mask & 0xff);
        component_idx = vkd3d_write_mask_get_component_idx(signature_element->mask & 0xff);
    }

    if ((use_private_var = builtin && builtin->fixup_pfn))
    {
        component_count = VKD3D_VEC4_SIZE;
        write_mask = VKD3DSP_WRITEMASK_ALL;
    }
    else if (needs_private_io_variable(shader_signature, reg_idx, builtin, &input_component_count, &write_mask))
    {
        use_private_var = true;
        component_count = VKD3D_VEC4_SIZE;
        write_mask = VKD3DSP_WRITEMASK_ALL;
    }
    else
    {
        component_idx = vkd3d_write_mask_get_component_idx(write_mask);
    }

    storage_class = SpvStorageClassInput;

    vkd3d_symbol_make_register(&reg_symbol, reg);

    if (builtin)
    {
        input_id = vkd3d_dxbc_compiler_emit_builtin_variable(compiler, builtin, storage_class, array_size);
        entry = rb_get(&compiler->symbol_table, &reg_symbol);
    }
    else if ((entry = rb_get(&compiler->symbol_table, &reg_symbol)))
    {
        input_id = RB_ENTRY_VALUE(entry, const struct vkd3d_symbol, entry)->id;
    }
    else
    {
        unsigned int location = reg_idx;

        if (reg->type == VKD3DSPR_PATCHCONST)
            location += compiler->input_signature->element_count;

        input_id = vkd3d_dxbc_compiler_emit_array_variable(compiler, &builder->global_stream,
                storage_class, component_type, input_component_count, array_size);
        vkd3d_spirv_add_iface_variable(builder, input_id);
        vkd3d_spirv_build_op_decorate1(builder, input_id, SpvDecorationLocation, location);
        if (component_idx)
            vkd3d_spirv_build_op_decorate1(builder, input_id, SpvDecorationComponent, component_idx);

        vkd3d_dxbc_compiler_emit_interpolation_decorations(compiler, input_id, interpolation_mode);
    }

    if (reg->type == VKD3DSPR_PATCHCONST)
        vkd3d_spirv_build_op_decorate(builder, input_id, SpvDecorationPatch, NULL, 0);

    if (entry || !use_private_var)
    {
        var_id = input_id;
    }
    else
    {
        storage_class = SpvStorageClassPrivate;
        var_id = vkd3d_dxbc_compiler_emit_array_variable(compiler, &builder->global_stream,
                storage_class, VKD3D_TYPE_FLOAT, component_count, array_size);
    }

    if (!entry)
    {
        vkd3d_symbol_set_register_info(&reg_symbol, var_id, storage_class,
                use_private_var ? VKD3D_TYPE_FLOAT : component_type, write_mask);
        vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);

        vkd3d_dxbc_compiler_emit_register_debug_name(builder, var_id, reg);
    }

    if (use_private_var)
    {
        type_id = vkd3d_spirv_get_type_id(builder, component_type, input_component_count);
        for (i = 0; i < max(array_size, 1); ++i)
        {
            struct vkd3d_shader_register dst_reg = *reg;
            dst_reg.data_type = VKD3D_DATA_FLOAT;

            val_id = input_id;
            if (array_size)
            {
                ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassInput, type_id);
                index = vkd3d_dxbc_compiler_get_constant_uint(compiler, i);
                val_id = vkd3d_spirv_build_op_in_bounds_access_chain1(builder, ptr_type_id, input_id, index);
                dst_reg.idx[0].offset = i;
            }
            val_id = vkd3d_spirv_build_op_load(builder, type_id, val_id, SpvMemoryAccessMaskNone);

            if (builtin && builtin->fixup_pfn)
                val_id = builtin->fixup_pfn(compiler, val_id);

            if (component_type != VKD3D_TYPE_FLOAT)
            {
                float_type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, input_component_count);
                val_id = vkd3d_spirv_build_op_bitcast(builder, float_type_id, val_id);
            }

            val_id = vkd3d_dxbc_compiler_emit_swizzle(compiler, val_id,
                    vkd3d_write_mask_from_component_count(input_component_count) << component_idx,
                    VKD3D_TYPE_FLOAT, VKD3D_NO_SWIZZLE, dst->write_mask);

            vkd3d_dxbc_compiler_emit_store_reg(compiler, &dst_reg, dst->write_mask, val_id);
        }
    }

    return input_id;
}

static void vkd3d_dxbc_compiler_emit_input_register(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_dst_param *dst)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_register *reg = &dst->reg;
    const struct vkd3d_spirv_builtin *builtin;
    struct vkd3d_symbol reg_symbol;
    struct rb_entry *entry;
    uint32_t input_id;

    assert(!reg->idx[0].rel_addr);
    assert(!reg->idx[1].rel_addr);
    assert(reg->idx[1].offset == ~0u);

    if (!(builtin = get_spirv_builtin_for_register(reg->type)))
    {
        FIXME("Unhandled register %#x.\n", reg->type);
        return;
    }

    /* vPrim may be declared in multiple hull shader phases. */
    vkd3d_symbol_make_register(&reg_symbol, reg);
    if ((entry = rb_get(&compiler->symbol_table, &reg_symbol)))
        return;

    input_id = vkd3d_dxbc_compiler_emit_builtin_variable(compiler, builtin, SpvStorageClassInput, 0);

    vkd3d_symbol_set_register_info(&reg_symbol, input_id, SpvStorageClassInput,
            builtin->component_type, vkd3d_write_mask_from_component_count(builtin->component_count));
    reg_symbol.info.reg.is_aggregate = builtin->spirv_array_size;
    vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);
    vkd3d_dxbc_compiler_emit_register_debug_name(builder, input_id, reg);
}

static void vkd3d_dxbc_compiler_emit_shader_phase_input(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_phase *phase, const struct vkd3d_shader_dst_param *dst)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_register *reg = &dst->reg;
    struct vkd3d_symbol reg_symbol;
    uint32_t val_id;

    switch (reg->type)
    {
        case VKD3DSPR_INPUT:
            vkd3d_dxbc_compiler_emit_input(compiler, dst, VKD3D_SIV_NONE, VKD3DSIM_NONE);
            return;
        case VKD3DSPR_PRIMID:
            vkd3d_dxbc_compiler_emit_input_register(compiler, dst);
            return;
        case VKD3DSPR_FORKINSTID:
        case VKD3DSPR_JOININSTID:
            val_id = phase->instance_id;
            break;
        case VKD3DSPR_OUTPOINTID: /* Emitted in vkd3d_dxbc_compiler_emit_initial_declarations(). */
        case VKD3DSPR_OUTCONTROLPOINT: /* See vkd3d_dxbc_compiler_leave_shader_phase(). */
            return;
        default:
            FIXME("Unhandled shader phase input register %#x.\n", reg->type);
            return;
    }

    vkd3d_symbol_make_register(&reg_symbol, reg);
    vkd3d_symbol_set_register_info(&reg_symbol, val_id,
            SpvStorageClassMax /* Intermediate value */,
            VKD3D_TYPE_UINT, VKD3DSP_WRITEMASK_0);
    vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);
    vkd3d_dxbc_compiler_emit_register_debug_name(builder, val_id, reg);
}

static unsigned int vkd3d_dxbc_compiler_get_output_variable_index(
        struct vkd3d_dxbc_compiler *compiler, unsigned int register_idx)
{
    if (register_idx == ~0u) /* oDepth */
        return ARRAY_SIZE(compiler->private_output_variable) - 1;
    assert(register_idx < ARRAY_SIZE(compiler->private_output_variable) - 1);
    return register_idx;
}

static unsigned int get_shader_output_swizzle(const struct vkd3d_dxbc_compiler *compiler,
        unsigned int register_idx)
{
    const struct vkd3d_shader_compile_arguments *compile_args;

    if (!(compile_args = compiler->compile_args))
        return VKD3D_NO_SWIZZLE;
    if (register_idx >= compile_args->output_swizzle_count)
        return VKD3D_NO_SWIZZLE;
    return compile_args->output_swizzles[register_idx];
}

static bool is_dual_source_blending(const struct vkd3d_dxbc_compiler *compiler)
{
    const struct vkd3d_shader_compile_arguments *compile_args = compiler->compile_args;

    return compiler->shader_type == VKD3D_SHADER_TYPE_PIXEL
            && compile_args && compile_args->dual_source_blending;
}

static void calculate_clip_or_cull_distance_mask(const struct vkd3d_shader_signature_element *e,
        uint32_t *mask)
{
    if (e->semantic_index >= sizeof(*mask) * CHAR_BIT / VKD3D_VEC4_SIZE)
    {
        FIXME("Invalid semantic index %u for clip/cull distance.\n", e->semantic_index);
        return;
    }

    *mask |= (e->mask & VKD3DSP_WRITEMASK_ALL) << (VKD3D_VEC4_SIZE * e->semantic_index);
}

/* Emits arrayed SPIR-V built-in variables. */
static void vkd3d_dxbc_compiler_emit_shader_signature_outputs(struct vkd3d_dxbc_compiler *compiler)
{
    const struct vkd3d_shader_signature *output_signature = compiler->output_signature;
    uint32_t clip_distance_mask = 0, clip_distance_id = 0;
    uint32_t cull_distance_mask = 0, cull_distance_id = 0;
    const struct vkd3d_spirv_builtin *builtin;
    unsigned int i, count;

    for (i = 0; i < output_signature->element_count; ++i)
    {
        const struct vkd3d_shader_signature_element *e = &output_signature->elements[i];

        switch (e->sysval_semantic)
        {
            case VKD3D_SV_CLIP_DISTANCE:
                calculate_clip_or_cull_distance_mask(e, &clip_distance_mask);
                break;

            case VKD3D_SV_CULL_DISTANCE:
                calculate_clip_or_cull_distance_mask(e, &cull_distance_mask);
                break;

            default:
                break;
        }
    }

    if (clip_distance_mask)
    {
        count = vkd3d_popcount(clip_distance_mask);
        builtin = get_spirv_builtin_for_sysval(compiler, VKD3D_SIV_CLIP_DISTANCE);
        clip_distance_id = vkd3d_dxbc_compiler_emit_builtin_variable(compiler,
                builtin, SpvStorageClassOutput, count);
    }

    if (cull_distance_mask)
    {
        count = vkd3d_popcount(cull_distance_mask);
        builtin = get_spirv_builtin_for_sysval(compiler, VKD3D_SIV_CULL_DISTANCE);
        cull_distance_id = vkd3d_dxbc_compiler_emit_builtin_variable(compiler,
                builtin, SpvStorageClassOutput, count);
    }

    for (i = 0; i < output_signature->element_count; ++i)
    {
        const struct vkd3d_shader_signature_element *e = &output_signature->elements[i];

        switch (e->sysval_semantic)
        {
            case VKD3D_SV_CLIP_DISTANCE:
                compiler->output_info[i].id = clip_distance_id;
                compiler->output_info[i].array_element_mask = clip_distance_mask;
                break;

            case VKD3D_SV_CULL_DISTANCE:
                compiler->output_info[i].id = cull_distance_id;
                compiler->output_info[i].array_element_mask = cull_distance_mask;
                break;

            default:
                break;
        }
    }
}

static void vkd3d_dxbc_compiler_emit_output_register(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_dst_param *dst)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_register *reg = &dst->reg;
    const struct vkd3d_spirv_builtin *builtin;
    struct vkd3d_symbol reg_symbol;
    uint32_t output_id;

    assert(!reg->idx[0].rel_addr);
    assert(!reg->idx[1].rel_addr);
    assert(reg->idx[1].offset == ~0u);

    if (!(builtin = get_spirv_builtin_for_register(reg->type)))
    {
        FIXME("Unhandled register %#x.\n", reg->type);
        return;
    }

    output_id = vkd3d_dxbc_compiler_emit_builtin_variable(compiler, builtin, SpvStorageClassOutput, 0);

    vkd3d_symbol_make_register(&reg_symbol, reg);
    vkd3d_symbol_set_register_info(&reg_symbol, output_id, SpvStorageClassOutput,
            builtin->component_type, vkd3d_write_mask_from_component_count(builtin->component_count));
    reg_symbol.info.reg.is_aggregate = builtin->spirv_array_size;
    vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);
    vkd3d_dxbc_compiler_emit_register_debug_name(builder, output_id, reg);
}

static void vkd3d_dxbc_compiler_emit_output(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_dst_param *dst, enum vkd3d_shader_input_sysval_semantic sysval)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_signature_element *signature_element;
    const struct vkd3d_shader_signature *shader_signature;
    const struct vkd3d_shader_register *reg = &dst->reg;
    unsigned int component_idx, output_component_count;
    const struct vkd3d_spirv_builtin *builtin;
    enum vkd3d_component_type component_type;
    const struct vkd3d_shader_phase *phase;
    struct vkd3d_symbol reg_symbol;
    SpvStorageClass storage_class;
    struct rb_entry *entry = NULL;
    unsigned int signature_idx;
    bool use_private_variable;
    unsigned int write_mask;
    unsigned int array_size;
    bool is_patch_constant;
    uint32_t id, var_id;

    phase = vkd3d_dxbc_compiler_get_current_shader_phase(compiler);
    is_patch_constant = phase && (phase->type == VKD3DSIH_HS_FORK_PHASE || phase->type == VKD3DSIH_HS_JOIN_PHASE);

    shader_signature = is_patch_constant ? compiler->patch_constant_signature : compiler->output_signature;

    array_size = is_control_point_phase(phase) ? compiler->output_control_point_count : 0;

    if (!(signature_element = vkd3d_find_signature_element_for_reg(shader_signature,
            &signature_idx, reg->idx[0].offset, dst->write_mask)))
    {
        FIXME("No signature element for shader output, ignoring shader output.\n");
        return;
    }

    builtin = vkd3d_get_spirv_builtin(compiler, dst->reg.type, sysval);

    write_mask = signature_element->mask & 0xff;

    component_idx = vkd3d_write_mask_get_component_idx(dst->write_mask);
    output_component_count = vkd3d_write_mask_component_count(signature_element->mask & 0xff);
    if (builtin)
    {
        component_type = builtin->component_type;
        if (!builtin->spirv_array_size)
            output_component_count = builtin->component_count;
    }
    else
    {
        component_type = signature_element->component_type;
    }

    storage_class = SpvStorageClassOutput;

    if ((use_private_variable = builtin && builtin->spirv_array_size))
        write_mask = dst->write_mask;
    else if (get_shader_output_swizzle(compiler, signature_element->register_index) != VKD3D_NO_SWIZZLE
            || needs_private_io_variable(shader_signature, signature_element->register_index,
            builtin, &output_component_count, &write_mask))
    {
        use_private_variable = true;
        write_mask = VKD3DSP_WRITEMASK_ALL;
    }
    else
    {
        component_idx = vkd3d_write_mask_get_component_idx(write_mask);
    }

    vkd3d_symbol_make_register(&reg_symbol, reg);

    if (compiler->output_info[signature_idx].id)
    {
        id = compiler->output_info[signature_idx].id;
        if (compiler->output_info[signature_idx].array_element_mask)
        {
            use_private_variable = true;
            write_mask = VKD3DSP_WRITEMASK_ALL;
            entry = rb_get(&compiler->symbol_table, &reg_symbol);
        }
    }
    else if ((entry = rb_get(&compiler->symbol_table, &reg_symbol)))
    {
        id = RB_ENTRY_VALUE(entry, const struct vkd3d_symbol, entry)->id;
    }
    else
    {
        if (builtin)
        {
            id = vkd3d_dxbc_compiler_emit_builtin_variable(compiler, builtin, storage_class, array_size);
            vkd3d_dxbc_compiler_emit_register_execution_mode(compiler, &dst->reg);
            if (component_idx)
                FIXME("Unhandled component index %u.\n", component_idx);
        }
        else
        {
            unsigned int location = reg->idx[0].offset;

            if (is_patch_constant)
                location += compiler->output_signature->element_count;

            id = vkd3d_dxbc_compiler_emit_array_variable(compiler, &builder->global_stream,
                    storage_class, component_type, output_component_count, array_size);
            vkd3d_spirv_add_iface_variable(builder, id);

            if (is_dual_source_blending(compiler) && reg->idx[0].offset < 2)
            {
                vkd3d_spirv_build_op_decorate1(builder, id, SpvDecorationLocation, 0);
                vkd3d_spirv_build_op_decorate1(builder, id, SpvDecorationIndex, reg->idx[0].offset);
            }
            else
            {
                vkd3d_spirv_build_op_decorate1(builder, id, SpvDecorationLocation, location);
            }

            if (component_idx)
                vkd3d_spirv_build_op_decorate1(builder, id, SpvDecorationComponent, component_idx);
        }

        if (is_patch_constant)
            vkd3d_spirv_build_op_decorate(builder, id, SpvDecorationPatch, NULL, 0);

        vkd3d_dxbc_compiler_decorate_xfb_output(compiler, id, output_component_count, signature_element);
    }

    compiler->output_info[signature_idx].id = id;
    compiler->output_info[signature_idx].component_type = component_type;

    if (use_private_variable)
        storage_class = SpvStorageClassPrivate;

    if (entry)
        var_id = RB_ENTRY_VALUE(entry, const struct vkd3d_symbol, entry)->id;
    else if (!use_private_variable)
        var_id = id;
    else
        var_id = vkd3d_dxbc_compiler_emit_variable(compiler, &builder->global_stream,
                storage_class, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE);
    if (!entry)
    {
        vkd3d_symbol_set_register_info(&reg_symbol, var_id, storage_class,
                use_private_variable ? VKD3D_TYPE_FLOAT : component_type, write_mask);
        reg_symbol.info.reg.is_aggregate = use_private_variable ? false : array_size;
        if (!use_private_variable && is_control_point_phase(phase))
        {
            reg_symbol.info.reg.member_idx = vkd3d_dxbc_compiler_get_invocation_id(compiler);
            reg_symbol.info.reg.is_dynamically_indexed = true;
        }
        vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);

        vkd3d_dxbc_compiler_emit_register_debug_name(builder, var_id, reg);
    }

    if (use_private_variable)
    {
        unsigned int idx = vkd3d_dxbc_compiler_get_output_variable_index(compiler, reg->idx[0].offset);
        compiler->private_output_variable[idx] = var_id;
        compiler->private_output_variable_write_mask[idx] |= dst->write_mask;
        if (!compiler->epilogue_function_id)
            compiler->epilogue_function_id = vkd3d_spirv_alloc_id(builder);
    }
}

static void vkd3d_dxbc_compiler_emit_shader_phase_output(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_phase *phase, const struct vkd3d_shader_dst_param *dst,
        enum vkd3d_shader_input_sysval_semantic sysval)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_register *reg = &dst->reg;
    const struct vkd3d_spirv_builtin *builtin;
    struct vkd3d_symbol reg_symbol;
    uint32_t *variable_id;

    variable_id = NULL;
    if ((builtin = get_spirv_builtin_for_sysval(compiler, sysval)))
    {
        if (builtin->spirv_builtin == SpvBuiltInTessLevelOuter)
            variable_id = &compiler->hs.tess_level_outer_id;
        else if (builtin->spirv_builtin == SpvBuiltInTessLevelInner)
            variable_id = &compiler->hs.tess_level_inner_id;
    }

    if (!variable_id)
    {
        FIXME("Unhandled shader phase output register %#x, sysval %#x.\n", reg->type, sysval);
        return;
    }

    if (!*variable_id)
    {
        *variable_id = vkd3d_dxbc_compiler_emit_builtin_variable(compiler, builtin, SpvStorageClassOutput, 0);
        if (phase->type == VKD3DSIH_HS_FORK_PHASE || phase->type == VKD3DSIH_HS_JOIN_PHASE)
            vkd3d_spirv_build_op_decorate(builder, *variable_id, SpvDecorationPatch, NULL, 0);
    }

    vkd3d_symbol_make_register(&reg_symbol, reg);
    vkd3d_symbol_set_register_info(&reg_symbol, *variable_id, SpvStorageClassOutput,
            builtin->component_type, vkd3d_write_mask_from_component_count(builtin->component_count));
    reg_symbol.info.reg.member_idx = builtin->member_idx;
    reg_symbol.info.reg.is_aggregate = builtin->spirv_array_size;
    vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);
}

static void vkd3d_dxbc_compiler_emit_store_shader_output(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_signature_element *output,
        const struct vkd3d_shader_output_info *output_info,
        uint32_t output_index_id, uint32_t val_id, unsigned int write_mask)
{
    unsigned int dst_write_mask, use_mask, uninit_mask, swizzle, mask;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, zero_id, ptr_type_id, chain_id, object_id;
    unsigned int i, index;
    uint32_t output_id;

    dst_write_mask = output->mask & 0xff;
    write_mask &= dst_write_mask;
    use_mask = (output->mask >> 8) & 0xff;

    if (!write_mask)
        return;

    if (output_info->component_type != VKD3D_TYPE_FLOAT)
    {
        type_id = vkd3d_spirv_get_type_id(builder, output_info->component_type, VKD3D_VEC4_SIZE);
        val_id = vkd3d_spirv_build_op_bitcast(builder, type_id, val_id);
    }

    swizzle = get_shader_output_swizzle(compiler, output->register_index);
    uninit_mask = dst_write_mask & use_mask;
    if (uninit_mask)
    {
        /* Set values to 0 for not initialized shader output components. */
        write_mask |= uninit_mask;
        zero_id = vkd3d_dxbc_compiler_get_constant_vector(compiler,
                output_info->component_type, VKD3D_VEC4_SIZE, 0);
        val_id = vkd3d_dxbc_compiler_emit_vector_shuffle(compiler,
                zero_id, val_id, swizzle, uninit_mask, output_info->component_type,
                vkd3d_write_mask_component_count(write_mask));
    }
    else
    {
        val_id = vkd3d_dxbc_compiler_emit_swizzle(compiler,
                val_id, VKD3DSP_WRITEMASK_ALL, output_info->component_type, swizzle, write_mask);
    }

    output_id = output_info->id;
    if (output_index_id)
    {
        type_id = vkd3d_spirv_get_type_id(builder,
                output_info->component_type, vkd3d_write_mask_component_count(dst_write_mask));
        ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassOutput, type_id);
        output_id = vkd3d_spirv_build_op_access_chain1(builder, ptr_type_id, output_id, output_index_id);
    }

    if (!output_info->array_element_mask)
    {
        vkd3d_dxbc_compiler_emit_store(compiler,
                output_id, dst_write_mask, output_info->component_type, SpvStorageClassOutput, write_mask, val_id);
        return;
    }

    type_id = vkd3d_spirv_get_type_id(builder, output_info->component_type, 1);
    ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassOutput, type_id);
    mask = output_info->array_element_mask;
    mask &= (1u << (output->semantic_index * VKD3D_VEC4_SIZE)) - 1;
    for (i = 0, index = vkd3d_popcount(mask); i < VKD3D_VEC4_SIZE; ++i)
    {
        if (!(write_mask & (VKD3DSP_WRITEMASK_0 << i)))
            continue;

        chain_id = vkd3d_spirv_build_op_access_chain1(builder,
                ptr_type_id, output_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, index));
        object_id = vkd3d_dxbc_compiler_emit_swizzle(compiler, val_id,
                write_mask, output_info->component_type, VKD3D_NO_SWIZZLE, VKD3DSP_WRITEMASK_0 << i);
        vkd3d_dxbc_compiler_emit_store(compiler, chain_id, VKD3DSP_WRITEMASK_0 << index,
                output_info->component_type, SpvStorageClassOutput, VKD3DSP_WRITEMASK_0 << i, object_id);
        ++index;
    }
}

static void vkd3d_dxbc_compiler_emit_shader_epilogue_function(struct vkd3d_dxbc_compiler *compiler)
{
    uint32_t param_type_id[MAX_REG_OUTPUT + 1], param_id[MAX_REG_OUTPUT + 1] = {};
    uint32_t void_id, type_id, ptr_type_id, function_type_id, function_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_signature *signature;
    const struct vkd3d_shader_phase *phase;
    uint32_t output_index_id = 0;
    bool is_patch_constant;
    unsigned int i, count;
    DWORD variable_idx;

    STATIC_ASSERT(ARRAY_SIZE(compiler->private_output_variable) == ARRAY_SIZE(param_id));
    STATIC_ASSERT(ARRAY_SIZE(compiler->private_output_variable) == ARRAY_SIZE(param_type_id));
    STATIC_ASSERT(ARRAY_SIZE(compiler->private_output_variable) == ARRAY_SIZE(compiler->private_output_variable_write_mask));

    phase = vkd3d_dxbc_compiler_get_current_shader_phase(compiler);
    is_patch_constant = phase && (phase->type == VKD3DSIH_HS_FORK_PHASE || phase->type == VKD3DSIH_HS_JOIN_PHASE);

    signature = is_patch_constant ? compiler->patch_constant_signature : compiler->output_signature;

    function_id = compiler->epilogue_function_id;

    void_id = vkd3d_spirv_get_op_type_void(builder);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, 4);
    ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassPrivate, type_id);
    for (i = 0, count = 0; i < ARRAY_SIZE(compiler->private_output_variable); ++i)
    {
        if (compiler->private_output_variable[i])
            param_type_id[count++] = ptr_type_id;
    }
    function_type_id = vkd3d_spirv_get_op_type_function(builder, void_id, param_type_id, count);

    vkd3d_spirv_build_op_function(builder, void_id, function_id,
            SpvFunctionControlMaskNone, function_type_id);

    for (i = 0; i < ARRAY_SIZE(compiler->private_output_variable); ++i)
    {
        if (compiler->private_output_variable[i])
            param_id[i] = vkd3d_spirv_build_op_function_parameter(builder, ptr_type_id);
    }

    vkd3d_spirv_build_op_label(builder, vkd3d_spirv_alloc_id(builder));

    for (i = 0; i < ARRAY_SIZE(compiler->private_output_variable); ++i)
    {
        if (compiler->private_output_variable[i])
            param_id[i] = vkd3d_spirv_build_op_load(builder, type_id, param_id[i], SpvMemoryAccessMaskNone);
    }

    if (is_control_point_phase(phase))
        output_index_id = vkd3d_dxbc_compiler_emit_load_invocation_id(compiler);

    for (i = 0; i < signature->element_count; ++i)
    {
        variable_idx = vkd3d_dxbc_compiler_get_output_variable_index(compiler,
                signature->elements[i].register_index);

        if (!param_id[variable_idx])
            continue;

        vkd3d_dxbc_compiler_emit_store_shader_output(compiler,
                &signature->elements[i], &compiler->output_info[i], output_index_id,
                param_id[variable_idx], compiler->private_output_variable_write_mask[variable_idx]);
    }

    vkd3d_spirv_build_op_return(&compiler->spirv_builder);
    vkd3d_spirv_build_op_function_end(builder);

    memset(compiler->private_output_variable, 0, sizeof(compiler->private_output_variable));
    memset(compiler->private_output_variable_write_mask, 0, sizeof(compiler->private_output_variable_write_mask));
    compiler->epilogue_function_id = 0;
}

static void vkd3d_dxbc_compiler_emit_hull_shader_builtins(struct vkd3d_dxbc_compiler *compiler)
{
    struct vkd3d_shader_dst_param dst;

    memset(&dst, 0, sizeof(dst));
    dst.reg.type = VKD3DSPR_OUTPOINTID;
    dst.reg.idx[0].offset = ~0u;
    dst.reg.idx[1].offset = ~0u;
    dst.write_mask = VKD3DSP_WRITEMASK_0;
    vkd3d_dxbc_compiler_emit_input_register(compiler, &dst);
}

static void vkd3d_dxbc_compiler_emit_initial_declarations(struct vkd3d_dxbc_compiler *compiler)
{
    const struct vkd3d_shader_transform_feedback_info *xfb_info = compiler->xfb_info;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;

    switch (compiler->shader_type)
    {
        case VKD3D_SHADER_TYPE_VERTEX:
            vkd3d_spirv_set_execution_model(builder, SpvExecutionModelVertex);
            break;
        case VKD3D_SHADER_TYPE_HULL:
            vkd3d_spirv_set_execution_model(builder, SpvExecutionModelTessellationControl);
            vkd3d_dxbc_compiler_emit_hull_shader_builtins(compiler);
            break;
        case VKD3D_SHADER_TYPE_DOMAIN:
            vkd3d_spirv_set_execution_model(builder, SpvExecutionModelTessellationEvaluation);
            break;
        case VKD3D_SHADER_TYPE_GEOMETRY:
            vkd3d_spirv_set_execution_model(builder, SpvExecutionModelGeometry);
            break;
        case VKD3D_SHADER_TYPE_PIXEL:
            vkd3d_spirv_set_execution_model(builder, SpvExecutionModelFragment);
            vkd3d_dxbc_compiler_emit_execution_mode(compiler, SpvExecutionModeOriginUpperLeft, NULL, 0);
            break;
        case VKD3D_SHADER_TYPE_COMPUTE:
            vkd3d_spirv_set_execution_model(builder, SpvExecutionModelGLCompute);
            break;
        default:
            ERR("Invalid shader type %#x.\n", compiler->shader_type);
    }

    if (xfb_info && xfb_info->element_count)
    {
        vkd3d_spirv_enable_capability(builder, SpvCapabilityTransformFeedback);
        vkd3d_dxbc_compiler_emit_execution_mode(compiler, SpvExecutionModeXfb, NULL, 0);
    }

    if (compiler->shader_type != VKD3D_SHADER_TYPE_HULL)
        vkd3d_spirv_builder_begin_main_function(builder);

    vkd3d_dxbc_compiler_emit_shader_signature_outputs(compiler);
}

static size_t vkd3d_dxbc_compiler_get_current_function_location(struct vkd3d_dxbc_compiler *compiler)
{
    const struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_phase *phase;

    if ((phase = vkd3d_dxbc_compiler_get_current_shader_phase(compiler)))
        return phase->function_location;

    return builder->main_function_location;
}

static void vkd3d_dxbc_compiler_emit_dcl_global_flags(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    unsigned int flags = instruction->flags;

    if (flags & VKD3DSGF_FORCE_EARLY_DEPTH_STENCIL)
    {
        vkd3d_dxbc_compiler_emit_execution_mode(compiler, SpvExecutionModeEarlyFragmentTests, NULL, 0);
        flags &= ~VKD3DSGF_FORCE_EARLY_DEPTH_STENCIL;
    }

    if (flags & ~(VKD3DSGF_REFACTORING_ALLOWED | VKD3DSGF_ENABLE_RAW_AND_STRUCTURED_BUFFERS))
        FIXME("Unhandled global flags %#x.\n", flags);
    else
        WARN("Unhandled global flags %#x.\n", flags);
}

static void vkd3d_dxbc_compiler_emit_dcl_temps(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    size_t function_location;
    unsigned int i;
    uint32_t id;

    function_location = vkd3d_dxbc_compiler_get_current_function_location(compiler);
    vkd3d_spirv_begin_function_stream_insertion(builder, function_location);

    assert(!compiler->temp_count);
    compiler->temp_count = instruction->declaration.count;
    for (i = 0; i < compiler->temp_count; ++i)
    {
        id = vkd3d_dxbc_compiler_emit_variable(compiler, &builder->function_stream,
                SpvStorageClassFunction, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE);
        if (!i)
            compiler->temp_id = id;
        assert(id == compiler->temp_id + i);

        vkd3d_spirv_build_op_name(builder, id, "r%u", i);
    }

    vkd3d_spirv_end_function_stream_insertion(builder);
}

static void vkd3d_dxbc_compiler_emit_dcl_indexable_temp(struct vkd3d_dxbc_compiler *compiler,
          const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_indexable_temp *temp = &instruction->declaration.indexable_temp;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    struct vkd3d_shader_register reg;
    struct vkd3d_symbol reg_symbol;
    size_t function_location;
    uint32_t id;

    if (temp->component_count != 4)
        FIXME("Unhandled component count %u.\n", temp->component_count);

    memset(&reg, 0, sizeof(reg));
    reg.type = VKD3DSPR_IDXTEMP;
    reg.idx[0].offset = temp->register_idx;
    reg.idx[1].offset = ~0u;

    function_location = vkd3d_dxbc_compiler_get_current_function_location(compiler);
    vkd3d_spirv_begin_function_stream_insertion(builder, function_location);

    id = vkd3d_dxbc_compiler_emit_array_variable(compiler, &builder->function_stream,
            SpvStorageClassFunction, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE, temp->register_size);

    vkd3d_dxbc_compiler_emit_register_debug_name(builder, id, &reg);

    vkd3d_spirv_end_function_stream_insertion(builder);

    vkd3d_symbol_make_register(&reg_symbol, &reg);
    vkd3d_symbol_set_register_info(&reg_symbol, id,
            SpvStorageClassFunction, VKD3D_TYPE_FLOAT, VKD3DSP_WRITEMASK_ALL);
    vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);
}

static void vkd3d_dxbc_compiler_emit_push_constant_buffers(struct vkd3d_dxbc_compiler *compiler)
{
    const SpvStorageClass storage_class = SpvStorageClassPushConstant;
    uint32_t vec4_id, length_id, struct_id, pointer_type_id, var_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    unsigned int i, j, count, reg_idx, cb_size;
    struct vkd3d_symbol reg_symbol;
    uint32_t *member_ids;

    count = 0;
    for (i = 0; i < compiler->shader_interface.push_constant_buffer_count; ++i)
    {
        const struct vkd3d_push_constant_buffer_binding *cb = &compiler->push_constants[i];

        if (cb->reg.type)
            ++count;
    }
    if (!count)
        return;

    if (!(member_ids = vkd3d_calloc(count, sizeof(*member_ids))))
        return;

    vec4_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE);

    for (i = 0, j = 0; i < compiler->shader_interface.push_constant_buffer_count; ++i)
    {
        const struct vkd3d_push_constant_buffer_binding *cb = &compiler->push_constants[i];
        if (!cb->reg.type)
            continue;

        cb_size = cb->reg.idx[1].offset;
        length_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, cb_size);
        member_ids[j]  = vkd3d_spirv_build_op_type_array(builder, vec4_id, length_id);
        vkd3d_spirv_build_op_decorate1(builder, member_ids[j], SpvDecorationArrayStride, 16);

        ++j;
    }

    struct_id = vkd3d_spirv_build_op_type_struct(builder, member_ids, count);
    vkd3d_spirv_build_op_decorate(builder, struct_id, SpvDecorationBlock, NULL, 0);
    vkd3d_spirv_build_op_name(builder, struct_id, "push_cb");
    vkd3d_free(member_ids);

    pointer_type_id = vkd3d_spirv_get_op_type_pointer(builder, storage_class, struct_id);
    var_id = vkd3d_spirv_build_op_variable(builder, &builder->global_stream,
            pointer_type_id, storage_class, 0);

    for (i = 0, j = 0; i < compiler->shader_interface.push_constant_buffer_count; ++i)
    {
        const struct vkd3d_push_constant_buffer_binding *cb = &compiler->push_constants[i];
        if (!cb->reg.type)
            continue;

        reg_idx = cb->reg.idx[0].offset;
        vkd3d_spirv_build_op_member_decorate1(builder, struct_id, j,
                SpvDecorationOffset, cb->pc.offset);
        vkd3d_spirv_build_op_member_name(builder, struct_id, j, "cb%u", reg_idx);

        vkd3d_symbol_make_register(&reg_symbol, &cb->reg);
        vkd3d_symbol_set_register_info(&reg_symbol, var_id,
                storage_class, VKD3D_TYPE_FLOAT, VKD3DSP_WRITEMASK_ALL);
        reg_symbol.info.reg.member_idx = j;
        vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);

        ++j;
    }
}

static void vkd3d_dxbc_compiler_emit_dcl_constant_buffer(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    uint32_t vec4_id, array_type_id, length_id, struct_id, pointer_type_id, var_id;
    const struct vkd3d_shader_constant_buffer *cb = &instruction->declaration.cb;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const SpvStorageClass storage_class = SpvStorageClassUniform;
    const struct vkd3d_shader_register *reg = &cb->src.reg;
    struct vkd3d_push_constant_buffer_binding *push_cb;
    struct vkd3d_symbol reg_symbol;

    assert(!(instruction->flags & ~VKD3DSI_INDEXED_DYNAMIC));

    if (cb->register_space)
        FIXME("Unhandled register space %u.\n", cb->register_space);

    if ((push_cb = vkd3d_dxbc_compiler_find_push_constant_buffer(compiler, reg)))
    {
        /* Push constant buffers are handled in
         * vkd3d_dxbc_compiler_emit_push_constant_buffers().
         */
        unsigned int cb_size_in_bytes = cb->size * VKD3D_VEC4_SIZE * sizeof(uint32_t);
        push_cb->reg = *reg;
        if (cb_size_in_bytes > push_cb->pc.size)
        {
            WARN("Constant buffer size %u exceeds push constant size %u.\n",
                    cb_size_in_bytes, push_cb->pc.size);
        }
        return;
    }

    vec4_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE);
    length_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, cb->size);
    array_type_id = vkd3d_spirv_build_op_type_array(builder, vec4_id, length_id);
    vkd3d_spirv_build_op_decorate1(builder, array_type_id, SpvDecorationArrayStride, 16);

    struct_id = vkd3d_spirv_build_op_type_struct(builder, &array_type_id, 1);
    vkd3d_spirv_build_op_decorate(builder, struct_id, SpvDecorationBlock, NULL, 0);
    vkd3d_spirv_build_op_member_decorate1(builder, struct_id, 0, SpvDecorationOffset, 0);
    vkd3d_spirv_build_op_name(builder, struct_id, "cb%u_struct", cb->size);

    pointer_type_id = vkd3d_spirv_get_op_type_pointer(builder, storage_class, struct_id);
    var_id = vkd3d_spirv_build_op_variable(builder, &builder->global_stream,
            pointer_type_id, storage_class, 0);

    vkd3d_dxbc_compiler_emit_descriptor_binding_for_reg(compiler,
            var_id, reg, VKD3D_SHADER_RESOURCE_BUFFER, false);

    vkd3d_dxbc_compiler_emit_register_debug_name(builder, var_id, reg);

    vkd3d_symbol_make_register(&reg_symbol, reg);
    vkd3d_symbol_set_register_info(&reg_symbol, var_id,
            storage_class, VKD3D_TYPE_FLOAT, VKD3DSP_WRITEMASK_ALL);
    vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);
}

static void vkd3d_dxbc_compiler_emit_dcl_immediate_constant_buffer(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_immediate_constant_buffer *icb = instruction->declaration.icb;
    uint32_t *elements, length_id, type_id, const_id, ptr_type_id, icb_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    struct vkd3d_shader_register reg;
    struct vkd3d_symbol reg_symbol;
    unsigned int i;

    if (!(elements = vkd3d_calloc(icb->vec4_count, sizeof(*elements))))
        return;
    for (i = 0; i < icb->vec4_count; ++i)
        elements[i] = vkd3d_dxbc_compiler_get_constant(compiler,
                VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE, &icb->data[4 * i]);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE);
    length_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, icb->vec4_count);
    type_id = vkd3d_spirv_get_op_type_array(builder, type_id, length_id);
    const_id = vkd3d_spirv_build_op_constant_composite(builder, type_id, elements, icb->vec4_count);
    ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassPrivate, type_id);
    icb_id = vkd3d_spirv_build_op_variable(builder, &builder->global_stream,
            ptr_type_id, SpvStorageClassPrivate, const_id);
    vkd3d_spirv_build_op_name(builder, icb_id, "icb");
    vkd3d_free(elements);

    memset(&reg, 0, sizeof(reg));
    reg.type = VKD3DSPR_IMMCONSTBUFFER;
    vkd3d_symbol_make_register(&reg_symbol, &reg);
    vkd3d_symbol_set_register_info(&reg_symbol, icb_id,
            SpvStorageClassPrivate, VKD3D_TYPE_FLOAT, VKD3DSP_WRITEMASK_ALL);
    vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);
}

static void vkd3d_dxbc_compiler_emit_dcl_sampler(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_register *reg = &instruction->declaration.sampler.src.reg;
    const SpvStorageClass storage_class = SpvStorageClassUniformConstant;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, ptr_type_id, var_id;
    struct vkd3d_symbol reg_symbol;

    if (instruction->declaration.sampler.register_space)
        FIXME("Unhandled register space %u.\n", instruction->declaration.sampler.register_space);

    if (vkd3d_dxbc_compiler_has_combined_sampler(compiler, NULL, reg))
        return;

    type_id = vkd3d_spirv_get_op_type_sampler(builder);
    ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, storage_class, type_id);
    var_id = vkd3d_spirv_build_op_variable(builder, &builder->global_stream,
            ptr_type_id, storage_class, 0);

    vkd3d_dxbc_compiler_emit_descriptor_binding_for_reg(compiler,
            var_id, reg, VKD3D_SHADER_RESOURCE_NONE, false);

    vkd3d_dxbc_compiler_emit_register_debug_name(builder, var_id, reg);

    vkd3d_symbol_make_register(&reg_symbol, reg);
    vkd3d_symbol_set_register_info(&reg_symbol, var_id,
            storage_class, VKD3D_TYPE_FLOAT, VKD3DSP_WRITEMASK_ALL);
    vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);
}

static const struct vkd3d_spirv_resource_type *vkd3d_dxbc_compiler_enable_resource_type(
        struct vkd3d_dxbc_compiler *compiler, enum vkd3d_shader_resource_type resource_type, bool is_uav)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_spirv_resource_type *resource_type_info;

    if (!(resource_type_info = vkd3d_get_spirv_resource_type(resource_type)))
        return NULL;

    if (resource_type_info->capability)
        vkd3d_spirv_enable_capability(builder, resource_type_info->capability);
    if (is_uav && resource_type_info->uav_capability)
        vkd3d_spirv_enable_capability(builder, resource_type_info->uav_capability);

    return resource_type_info;
}

static SpvImageFormat image_format_for_image_read(enum vkd3d_component_type data_type)
{
    /* The following formats are supported by Direct3D 11 hardware for UAV
     * typed loads. A newer hardware may support more formats for UAV typed
     * loads (see StorageImageReadWithoutFormat SPIR-V capability).
     */
    switch (data_type)
    {
        case VKD3D_TYPE_FLOAT:
            return SpvImageFormatR32f;
        case VKD3D_TYPE_INT:
            return SpvImageFormatR32i;
        case VKD3D_TYPE_UINT:
            return SpvImageFormatR32ui;
        default:
            FIXME("Unhandled type %#x.\n", data_type);
            return SpvImageFormatUnknown;
    }
}

static uint32_t vkd3d_dxbc_compiler_get_image_type_id(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, const struct vkd3d_spirv_resource_type *resource_type_info,
        enum vkd3d_component_type data_type, bool raw_structured, uint32_t depth)
{
    const struct vkd3d_shader_scan_info *scan_info = compiler->scan_info;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t sampled_type_id;
    SpvImageFormat format;

    format = SpvImageFormatUnknown;
    if (reg->type == VKD3DSPR_UAV
            && (raw_structured || (scan_info->uav_read_mask & (1u << reg->idx[0].offset))))
        format = image_format_for_image_read(data_type);

    sampled_type_id = vkd3d_spirv_get_type_id(builder, data_type, 1);
    return vkd3d_spirv_get_op_type_image(builder, sampled_type_id, resource_type_info->dim,
            depth, resource_type_info->arrayed, resource_type_info->ms,
            reg->type == VKD3DSPR_UAV ? 2 : 1, format);
}

static void vkd3d_dxbc_compiler_emit_combined_sampler_declarations(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *resource, enum vkd3d_shader_resource_type resource_type,
        enum vkd3d_component_type sampled_type, unsigned int structure_stride, bool raw,
        const struct vkd3d_spirv_resource_type *resource_type_info)
{
    const struct vkd3d_shader_interface_info *shader_interface = &compiler->shader_interface;
    const struct vkd3d_shader_scan_info *scan_info = compiler->scan_info;
    const SpvStorageClass storage_class = SpvStorageClassUniformConstant;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_combined_resource_sampler *current;
    const unsigned int resource_index = resource->idx[0].offset;
    uint32_t image_type_id, type_id, ptr_type_id, var_id;
    enum vkd3d_shader_binding_flag resource_type_flag;
    struct vkd3d_symbol symbol;
    unsigned int i;
    bool depth;

    resource_type_flag = resource_type == VKD3D_SHADER_RESOURCE_BUFFER
            ? VKD3D_SHADER_BINDING_FLAG_BUFFER : VKD3D_SHADER_BINDING_FLAG_IMAGE;

    for (i = 0; i < shader_interface->combined_sampler_count; ++i)
    {
        current = &shader_interface->combined_samplers[i];

        if (current->resource_index != resource_index)
            continue;

        if (!(current->flags & resource_type_flag))
            continue;

        if (!vkd3d_dxbc_compiler_check_shader_visibility(compiler, current->shader_visibility))
            continue;

        depth = current->sampler_index != VKD3D_DUMMY_SAMPLER_INDEX
                && scan_info->sampler_comparison_mode_mask & (1u << current->sampler_index);

        image_type_id = vkd3d_dxbc_compiler_get_image_type_id(compiler,
                resource, resource_type_info, sampled_type, structure_stride || raw, depth);
        type_id = vkd3d_spirv_get_op_type_sampled_image(builder, image_type_id);

        ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, storage_class, type_id);
        var_id = vkd3d_spirv_build_op_variable(builder, &builder->global_stream,
                ptr_type_id, storage_class, 0);

        vkd3d_dxbc_compiler_emit_descriptor_binding(compiler, var_id, &current->binding);

        if (current->sampler_index == VKD3D_DUMMY_SAMPLER_INDEX)
            vkd3d_spirv_build_op_name(builder, var_id, "t%u_dummy_sampler", resource_index);
        else
            vkd3d_spirv_build_op_name(builder, var_id, "t%u_s%u", resource_index, current->sampler_index);

        vkd3d_symbol_make_combined_sampler(&symbol, resource_index, current->sampler_index);
        symbol.id = var_id;
        symbol.info.resource.sampled_type = sampled_type;
        symbol.info.resource.type_id = image_type_id;
        symbol.info.resource.resource_type_info = resource_type_info;
        symbol.info.resource.structure_stride = structure_stride;
        symbol.info.resource.raw = raw;
        symbol.info.resource.uav_counter_id = 0;
        vkd3d_dxbc_compiler_put_symbol(compiler, &symbol);
    }
}

static void vkd3d_dxbc_compiler_emit_resource_declaration(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, enum vkd3d_shader_resource_type resource_type,
        enum vkd3d_data_type resource_data_type, unsigned int structure_stride, bool raw)
{
    uint32_t counter_type_id, type_id, ptr_type_id, var_id, counter_var_id = 0;
    const struct vkd3d_shader_scan_info *scan_info = compiler->scan_info;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    SpvStorageClass storage_class = SpvStorageClassUniformConstant;
    const struct vkd3d_spirv_resource_type *resource_type_info;
    enum vkd3d_component_type sampled_type;
    struct vkd3d_symbol resource_symbol;
    bool is_uav;

    is_uav = reg->type == VKD3DSPR_UAV;
    if (!(resource_type_info = vkd3d_dxbc_compiler_enable_resource_type(compiler,
            resource_type, is_uav)))
    {
        FIXME("Unrecognized resource type.\n");
        return;
    }

    sampled_type = vkd3d_component_type_from_data_type(resource_data_type);

    if (vkd3d_dxbc_compiler_has_combined_sampler(compiler, reg, NULL))
    {
        vkd3d_dxbc_compiler_emit_combined_sampler_declarations(compiler,
                reg, resource_type, sampled_type, structure_stride, raw, resource_type_info);
        return;
    }

    type_id = vkd3d_dxbc_compiler_get_image_type_id(compiler,
            reg, resource_type_info, sampled_type, structure_stride || raw, 0);
    ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, storage_class, type_id);
    var_id = vkd3d_spirv_build_op_variable(builder, &builder->global_stream,
            ptr_type_id, storage_class, 0);

    vkd3d_dxbc_compiler_emit_descriptor_binding_for_reg(compiler, var_id, reg, resource_type, false);

    vkd3d_dxbc_compiler_emit_register_debug_name(builder, var_id, reg);

    if (is_uav && !(scan_info->uav_read_mask & (1u << reg->idx[0].offset)))
        vkd3d_spirv_build_op_decorate(builder, var_id, SpvDecorationNonReadable, NULL, 0);

    if (is_uav && (scan_info->uav_counter_mask & (1u << reg->idx[0].offset)))
    {
        assert(structure_stride); /* counters are valid only for structured buffers */

        if (vkd3d_dxbc_compiler_is_opengl_target(compiler))
        {
            vkd3d_spirv_enable_capability(builder, SpvCapabilityAtomicStorage);
            storage_class = SpvStorageClassAtomicCounter;
            counter_type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
            ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, storage_class, counter_type_id);
        }

        counter_var_id = vkd3d_spirv_build_op_variable(builder, &builder->global_stream,
                ptr_type_id, storage_class, 0);

        vkd3d_dxbc_compiler_emit_descriptor_binding_for_reg(compiler,
                counter_var_id, reg, resource_type, true);

        vkd3d_spirv_build_op_name(builder, counter_var_id, "u%u_counter", reg->idx[0].offset);
    }

    vkd3d_symbol_make_resource(&resource_symbol, reg);
    resource_symbol.id = var_id;
    resource_symbol.info.resource.sampled_type = sampled_type;
    resource_symbol.info.resource.type_id = type_id;
    resource_symbol.info.resource.resource_type_info = resource_type_info;
    resource_symbol.info.resource.structure_stride = structure_stride;
    resource_symbol.info.resource.raw = raw;
    resource_symbol.info.resource.uav_counter_id = counter_var_id;
    vkd3d_dxbc_compiler_put_symbol(compiler, &resource_symbol);
}

static void vkd3d_dxbc_compiler_emit_dcl_resource(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_semantic *semantic = &instruction->declaration.semantic;

    if (semantic->register_space)
        FIXME("Unhandled register space %u.\n", semantic->register_space);
    if (instruction->flags)
        FIXME("Unhandled UAV flags %#x.\n", instruction->flags);

    vkd3d_dxbc_compiler_emit_resource_declaration(compiler, &semantic->reg.reg,
            semantic->resource_type, semantic->resource_data_type, 0, false);
}

static void vkd3d_dxbc_compiler_emit_dcl_resource_raw(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_raw_resource *resource = &instruction->declaration.raw_resource;

    if (resource->register_space)
        FIXME("Unhandled register space %u.\n", resource->register_space);
    if (instruction->flags)
        FIXME("Unhandled UAV flags %#x.\n", instruction->flags);

    vkd3d_dxbc_compiler_emit_resource_declaration(compiler, &resource->dst.reg,
            VKD3D_SHADER_RESOURCE_BUFFER, VKD3D_DATA_UINT, 0, true);
}

static void vkd3d_dxbc_compiler_emit_dcl_resource_structured(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_structured_resource *resource = &instruction->declaration.structured_resource;
    const struct vkd3d_shader_register *reg = &resource->reg.reg;
    unsigned int stride = resource->byte_stride;

    if (resource->register_space)
        FIXME("Unhandled register space %u.\n", resource->register_space);
    if (instruction->flags)
        FIXME("Unhandled UAV flags %#x.\n", instruction->flags);

    vkd3d_dxbc_compiler_emit_resource_declaration(compiler, reg,
            VKD3D_SHADER_RESOURCE_BUFFER, VKD3D_DATA_UINT, stride / 4, false);
}

static void vkd3d_dxbc_compiler_emit_workgroup_memory(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *reg, unsigned int size, unsigned int structure_stride)
{
    uint32_t type_id, array_type_id, length_id, pointer_type_id, var_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const SpvStorageClass storage_class = SpvStorageClassWorkgroup;
    struct vkd3d_symbol reg_symbol;

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    length_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, size);
    array_type_id = vkd3d_spirv_get_op_type_array(builder, type_id, length_id);

    pointer_type_id = vkd3d_spirv_get_op_type_pointer(builder, storage_class, array_type_id);
    var_id = vkd3d_spirv_build_op_variable(builder, &builder->global_stream,
            pointer_type_id, storage_class, 0);

    vkd3d_dxbc_compiler_emit_register_debug_name(builder, var_id, reg);

    vkd3d_symbol_make_register(&reg_symbol, reg);
    vkd3d_symbol_set_register_info(&reg_symbol, var_id,
            storage_class, VKD3D_TYPE_UINT, VKD3DSP_WRITEMASK_0);
    reg_symbol.info.reg.structure_stride = structure_stride;
    vkd3d_dxbc_compiler_put_symbol(compiler, &reg_symbol);
}

static void vkd3d_dxbc_compiler_emit_dcl_tgsm_raw(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_tgsm_raw *tgsm_raw = &instruction->declaration.tgsm_raw;
    vkd3d_dxbc_compiler_emit_workgroup_memory(compiler, &tgsm_raw->reg.reg,
            tgsm_raw->byte_count / 4, 0);
}

static void vkd3d_dxbc_compiler_emit_dcl_tgsm_structured(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_tgsm_structured *tgsm_structured = &instruction->declaration.tgsm_structured;
    unsigned int stride = tgsm_structured->byte_stride / 4;
    vkd3d_dxbc_compiler_emit_workgroup_memory(compiler, &tgsm_structured->reg.reg,
            tgsm_structured->structure_count * stride, stride);
}

static void vkd3d_dxbc_compiler_emit_dcl_input(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_dst_param *dst = &instruction->declaration.dst;
    const struct vkd3d_shader_phase *phase;

    if ((phase = vkd3d_dxbc_compiler_get_current_shader_phase(compiler)))
        vkd3d_dxbc_compiler_emit_shader_phase_input(compiler, phase, dst);
    else if (vkd3d_shader_register_is_input(&dst->reg) || dst->reg.type == VKD3DSPR_PATCHCONST)
        vkd3d_dxbc_compiler_emit_input(compiler, dst, VKD3D_SIV_NONE, VKD3DSIM_NONE);
    else
        vkd3d_dxbc_compiler_emit_input_register(compiler, dst);
}

static void vkd3d_dxbc_compiler_emit_dcl_input_ps(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    vkd3d_dxbc_compiler_emit_input(compiler, &instruction->declaration.dst, VKD3D_SIV_NONE, instruction->flags);
}

static void vkd3d_dxbc_compiler_emit_dcl_input_ps_sysval(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_register_semantic *semantic = &instruction->declaration.register_semantic;

    vkd3d_dxbc_compiler_emit_input(compiler, &semantic->reg, semantic->sysval_semantic, instruction->flags);
}

static void vkd3d_dxbc_compiler_emit_dcl_input_sysval(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    vkd3d_dxbc_compiler_emit_input(compiler, &instruction->declaration.register_semantic.reg,
            instruction->declaration.register_semantic.sysval_semantic, VKD3DSIM_NONE);
}

static void vkd3d_dxbc_compiler_emit_dcl_output(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_dst_param *dst = &instruction->declaration.dst;

    if (vkd3d_shader_register_is_output(&dst->reg))
        vkd3d_dxbc_compiler_emit_output(compiler, dst, VKD3D_SIV_NONE);
    else
        vkd3d_dxbc_compiler_emit_output_register(compiler, dst);
}

static void vkd3d_dxbc_compiler_emit_dcl_output_siv(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    enum vkd3d_shader_input_sysval_semantic sysval;
    const struct vkd3d_shader_dst_param *dst;
    const struct vkd3d_shader_phase *phase;

    dst = &instruction->declaration.register_semantic.reg;
    sysval = instruction->declaration.register_semantic.sysval_semantic;

    if ((phase = vkd3d_dxbc_compiler_get_current_shader_phase(compiler)))
        vkd3d_dxbc_compiler_emit_shader_phase_output(compiler, phase, dst, sysval);
    else
        vkd3d_dxbc_compiler_emit_output(compiler, dst, sysval);
}

static bool vkd3d_dxbc_compiler_check_index_range(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_index_range *range)
{
    const struct vkd3d_shader_register *reg = &range->dst.reg;
    struct vkd3d_shader_register_info reg_info;
    struct vkd3d_shader_register current_reg;
    struct vkd3d_symbol reg_symbol;
    unsigned int i;
    uint32_t id;

    current_reg = *reg;
    vkd3d_symbol_make_register(&reg_symbol, &current_reg);
    if (!vkd3d_dxbc_compiler_get_register_info(compiler, &current_reg, &reg_info))
    {
        ERR("Failed to get register info.\n");
        return false;
    }

    /* FIXME: We should check if it's an array. */
    if (!reg_info.is_aggregate)
    {
        FIXME("Unhandled register %#x.\n", reg->type);
        return false;
    }
    id = reg_info.id;

    for (i = reg->idx[0].offset; i < reg->idx[0].offset + range->register_count; ++i)
    {
        current_reg.idx[0].offset = i;
        vkd3d_symbol_make_register(&reg_symbol, &current_reg);

        if (range->dst.write_mask != reg_info.write_mask
                || vkd3d_write_mask_component_count(reg_info.write_mask) != 1)
        {
            FIXME("Unhandled index range write mask %#x (%#x).\n",
                    range->dst.write_mask, reg_info.write_mask);
            return false;
        }

        if (reg_info.id != id)
        {
            FIXME("Unhandled index range %#x, %u.\n", reg->type, i);
            return false;
        }
    }

    return true;
}

static void vkd3d_dxbc_compiler_emit_dcl_index_range(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_index_range *range = &instruction->declaration.index_range;

    if (!vkd3d_dxbc_compiler_check_index_range(compiler, range))
        FIXME("Ignoring dcl_index_range %#x %u.\n", range->dst.reg.type, range->register_count);
}

static void vkd3d_dxbc_compiler_emit_dcl_stream(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    unsigned int stream_idx = instruction->src[0].reg.idx[0].offset;

    if (stream_idx)
        FIXME("Multiple streams are not supported yet.\n");
}

static void vkd3d_dxbc_compiler_emit_output_vertex_count(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    vkd3d_dxbc_compiler_emit_execution_mode1(compiler,
            SpvExecutionModeOutputVertices, instruction->declaration.count);
}

static void vkd3d_dxbc_compiler_emit_dcl_input_primitive(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    enum vkd3d_primitive_type primitive_type = instruction->declaration.primitive_type.type;
    SpvExecutionMode mode;

    switch (primitive_type)
    {
        case VKD3D_PT_POINTLIST:
            mode = SpvExecutionModeInputPoints;
            break;
        case VKD3D_PT_LINELIST:
            mode = SpvExecutionModeInputLines;
            break;
        case VKD3D_PT_LINELIST_ADJ:
            mode = SpvExecutionModeInputLinesAdjacency;
            break;
        case VKD3D_PT_TRIANGLELIST:
            mode = SpvExecutionModeTriangles;
            break;
        case VKD3D_PT_TRIANGLELIST_ADJ:
            mode = SpvExecutionModeInputTrianglesAdjacency;
            break;
        default:
            FIXME("Unhandled primitive type %#x.\n", primitive_type);
            return;
    }

    vkd3d_dxbc_compiler_emit_execution_mode(compiler, mode, NULL, 0);
}

static void vkd3d_dxbc_compiler_emit_dcl_output_topology(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    enum vkd3d_primitive_type primitive_type = instruction->declaration.primitive_type.type;
    SpvExecutionMode mode;

    switch (primitive_type)
    {
        case VKD3D_PT_POINTLIST:
            mode = SpvExecutionModeOutputPoints;
            break;
        case VKD3D_PT_LINESTRIP:
            mode = SpvExecutionModeOutputLineStrip;
            break;
        case VKD3D_PT_TRIANGLESTRIP:
            mode = SpvExecutionModeOutputTriangleStrip;
            break;
        default:
            ERR("Unexpected primitive type %#x.\n", primitive_type);
            return;
    }

    vkd3d_dxbc_compiler_emit_execution_mode(compiler, mode, NULL, 0);
}

static void vkd3d_dxbc_compiler_emit_dcl_gs_instances(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    vkd3d_dxbc_compiler_emit_execution_mode1(compiler,
            SpvExecutionModeInvocations, instruction->declaration.count);
}

static void vkd3d_dxbc_compiler_emit_dcl_tessellator_domain(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    enum vkd3d_tessellator_domain domain = instruction->declaration.tessellator_domain;
    SpvExecutionMode mode;

    if (compiler->shader_type == VKD3D_SHADER_TYPE_HULL && vkd3d_dxbc_compiler_is_opengl_target(compiler))
        return;

    switch (domain)
    {
        case VKD3D_TESSELLATOR_DOMAIN_LINE:
            mode = SpvExecutionModeIsolines;
            break;
        case VKD3D_TESSELLATOR_DOMAIN_TRIANGLE:
            mode = SpvExecutionModeTriangles;
            break;
        case VKD3D_TESSELLATOR_DOMAIN_QUAD:
            mode = SpvExecutionModeQuads;
            break;
        default:
            FIXME("Invalid tessellator domain %#x.\n", domain);
            return;
    }

    vkd3d_dxbc_compiler_emit_execution_mode(compiler, mode, NULL, 0);
}

static void vkd3d_dxbc_compiler_emit_tessellator_output_primitive(struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_tessellator_output_primitive primitive)
{
    SpvExecutionMode mode;

    if (compiler->shader_type == VKD3D_SHADER_TYPE_HULL && vkd3d_dxbc_compiler_is_opengl_target(compiler))
        return;

    switch (primitive)
    {
        case VKD3D_TESSELLATOR_OUTPUT_POINT:
            mode = SpvExecutionModePointMode;
            break;
        case VKD3D_TESSELLATOR_OUTPUT_LINE:
            return;
        case VKD3D_TESSELLATOR_OUTPUT_TRIANGLE_CW:
            mode = SpvExecutionModeVertexOrderCw;
            break;
        case VKD3D_TESSELLATOR_OUTPUT_TRIANGLE_CCW:
            mode = SpvExecutionModeVertexOrderCcw;
            break;
        default:
            FIXME("Invalid tessellator output primitive %#x.\n", primitive);
            return;
    }

    vkd3d_dxbc_compiler_emit_execution_mode(compiler, mode, NULL, 0);
}

static void vkd3d_dxbc_compiler_emit_tessellator_partitioning(struct vkd3d_dxbc_compiler *compiler,
        enum vkd3d_tessellator_partitioning partitioning)
{
    SpvExecutionMode mode;

    if (compiler->shader_type == VKD3D_SHADER_TYPE_HULL && vkd3d_dxbc_compiler_is_opengl_target(compiler))
        return;

    switch (partitioning)
    {
        case VKD3D_TESSELLATOR_PARTITIONING_INTEGER:
        case VKD3D_TESSELLATOR_PARTITIONING_POW2:
            mode = SpvExecutionModeSpacingEqual;
            break;
        case VKD3D_TESSELLATOR_PARTITIONING_FRACTIONAL_ODD:
            mode = SpvExecutionModeSpacingFractionalOdd;
            break;
        case VKD3D_TESSELLATOR_PARTITIONING_FRACTIONAL_EVEN:
            mode = SpvExecutionModeSpacingFractionalEven;
            break;
        default:
            FIXME("Invalid tessellator partitioning %#x.\n", partitioning);
            return;
    }

    vkd3d_dxbc_compiler_emit_execution_mode(compiler, mode, NULL, 0);
}

static void vkd3d_dxbc_compiler_emit_dcl_thread_group(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_thread_group_size *group_size = &instruction->declaration.thread_group_size;
    const uint32_t local_size[] = {group_size->x, group_size->y, group_size->z};

    vkd3d_dxbc_compiler_emit_execution_mode(compiler,
            SpvExecutionModeLocalSize, local_size, ARRAY_SIZE(local_size));
}

static void vkd3d_dxbc_compiler_leave_shader_phase(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_phase *phase)
{
    const struct vkd3d_shader_signature *signature = compiler->output_signature;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    struct vkd3d_symbol reg_symbol, *symbol;
    struct vkd3d_shader_register reg;
    struct rb_entry *entry;
    unsigned int i;

    vkd3d_spirv_build_op_function_end(builder);

    if (compiler->epilogue_function_id)
    {
        vkd3d_dxbc_compiler_emit_shader_phase_name(compiler, compiler->epilogue_function_id, phase, "_epilogue");
        vkd3d_dxbc_compiler_emit_shader_epilogue_function(compiler);
    }

    compiler->temp_id = 0;
    compiler->temp_count = 0;

    /*
     * vocp inputs in fork and join shader phases are outputs of the control
     * point phase. Reinsert symbols for vocp registers while leaving the
     * control point phase.
     */
    if (is_control_point_phase(phase))
    {
        memset(&reg, 0, sizeof(reg));
        reg.idx[1].offset = ~0u;

        /* Fork and join phases share output registers (patch constants).
         * Control point phase has separate output registers. */
        memset(compiler->output_info, 0, signature->element_count * sizeof(*compiler->output_info));
        memset(compiler->private_output_variable, 0, sizeof(compiler->private_output_variable));
        memset(compiler->private_output_variable_write_mask, 0, sizeof(compiler->private_output_variable_write_mask));

        for (i = 0; i < signature->element_count; ++i)
        {
            const struct vkd3d_shader_signature_element *e = &signature->elements[i];

            reg.type = VKD3DSPR_OUTPUT;
            reg.idx[0].offset = e->register_index;
            vkd3d_symbol_make_register(&reg_symbol, &reg);
            if ((entry = rb_get(&compiler->symbol_table, &reg_symbol)))
            {
                rb_remove(&compiler->symbol_table, entry);

                symbol = RB_ENTRY_VALUE(entry, struct vkd3d_symbol, entry);

                reg.type = VKD3DSPR_OUTCONTROLPOINT;
                reg.idx[1].offset = reg.idx[0].offset;
                reg.idx[0].offset = compiler->output_control_point_count;
                vkd3d_symbol_make_register(symbol, &reg);
                symbol->info.reg.is_aggregate = false;

                if (rb_put(&compiler->symbol_table, symbol, entry) == -1)
                {
                    ERR("Failed to insert vocp symbol entry (%s).\n", debug_vkd3d_symbol(symbol));
                    vkd3d_symbol_free(entry, NULL);
                }
            }
        }
    }

    if (phase->type == VKD3DSIH_HS_FORK_PHASE || phase->type == VKD3DSIH_HS_JOIN_PHASE)
    {
        signature = compiler->patch_constant_signature;

        memset(&reg, 0, sizeof(reg));
        reg.idx[1].offset = ~0u;

        for (i = 0; i < signature->element_count; ++i)
        {
            const struct vkd3d_shader_signature_element *e = &signature->elements[i];

            reg.type = VKD3DSPR_OUTPUT;
            reg.idx[0].offset = e->register_index;
            vkd3d_symbol_make_register(&reg_symbol, &reg);

            if ((entry = rb_get(&compiler->symbol_table, &reg_symbol)))
            {
                rb_remove(&compiler->symbol_table, entry);
                vkd3d_symbol_free(entry, NULL);
            }
        }
    }

    if (phase->instance_count)
    {
        reg.type = phase->type == VKD3DSIH_HS_FORK_PHASE ? VKD3DSPR_FORKINSTID : VKD3DSPR_JOININSTID;
        reg.idx[0].offset = ~0u;
        vkd3d_symbol_make_register(&reg_symbol, &reg);
        if ((entry = rb_get(&compiler->symbol_table, &reg_symbol)))
        {
            rb_remove(&compiler->symbol_table, entry);
            vkd3d_symbol_free(entry, NULL);
        }
    }
}

static void vkd3d_dxbc_compiler_enter_shader_phase(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_phase *previous_phase;
    struct vkd3d_shader_phase *phase;

    if ((previous_phase = vkd3d_dxbc_compiler_get_current_shader_phase(compiler)))
        vkd3d_dxbc_compiler_leave_shader_phase(compiler, previous_phase);

    if (!vkd3d_array_reserve((void **)&compiler->shader_phases, &compiler->shader_phases_size,
            compiler->shader_phase_count + 1, sizeof(*compiler->shader_phases)))
        return;
    phase = &compiler->shader_phases[compiler->shader_phase_count];

    phase->type = instruction->handler_idx;
    phase->idx = compiler->shader_phase_count;
    phase->instance_count = 0;
    phase->function_id = 0;
    phase->instance_id = 0;
    phase->function_location = 0;

    ++compiler->shader_phase_count;
}

static int vkd3d_dxbc_compiler_emit_shader_phase_instance_count(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_shader_phase *phase = &compiler->shader_phases[compiler->shader_phase_count - 1];

    if (!compiler->shader_phase_count
            || (phase->type != VKD3DSIH_HS_FORK_PHASE && phase->type != VKD3DSIH_HS_JOIN_PHASE)
            || phase->function_id)
    {
        WARN("Unexpected dcl_hs_{fork,join}_phase_instance_count instruction.\n");
        return VKD3D_ERROR_INVALID_SHADER;
    }

    phase->instance_count = instruction->declaration.count;

    vkd3d_dxbc_compiler_begin_shader_phase(compiler, phase);

    return VKD3D_OK;
}

static const struct vkd3d_shader_phase *vkd3d_dxbc_compiler_get_control_point_phase(
        struct vkd3d_dxbc_compiler *compiler)
{
    const struct vkd3d_shader_phase *phase;

    if (compiler->shader_phase_count < 1)
        return NULL;

    phase = &compiler->shader_phases[0];
    if (is_control_point_phase(phase))
        return phase;

    return NULL;
}

static void vkd3d_dxbc_compiler_emit_default_control_point_phase(struct vkd3d_dxbc_compiler *compiler)
{
    const struct vkd3d_shader_signature *output_signature = compiler->output_signature;
    const struct vkd3d_shader_signature *input_signature = compiler->input_signature;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t type_id, input_ptr_type_id, output_ptr_type_id;
    const struct vkd3d_spirv_builtin *input_builtin;
    uint32_t input_id, output_id, dst_id, src_id;
    enum vkd3d_component_type component_type;
    unsigned int component_count;
    uint32_t invocation_id;
    unsigned int i;

    invocation_id = vkd3d_dxbc_compiler_emit_load_invocation_id(compiler);

    assert(input_signature->element_count == output_signature->element_count);
    for (i = 0; i < output_signature->element_count; ++i)
    {
        const struct vkd3d_shader_signature_element *output = &output_signature->elements[i];
        const struct vkd3d_shader_signature_element *input = &input_signature->elements[i];

        assert((input->mask & 0xff) == (output->mask & 0xff));
        assert(input->component_type == output->component_type);

        if ((input_builtin = get_spirv_builtin_for_sysval(compiler, vkd3d_siv_from_sysval(input->sysval_semantic))))
        {
            component_type = input_builtin->component_type;
            component_count = input_builtin->component_count;
        }
        else
        {
            component_type = input->component_type;
            component_count = vkd3d_write_mask_component_count(input->mask & 0xff);
        }

        if (input_builtin)
        {
            input_id = vkd3d_dxbc_compiler_emit_builtin_variable(compiler,
                    input_builtin, SpvStorageClassInput, compiler->input_control_point_count);
        }
        else
        {
            input_id = vkd3d_dxbc_compiler_emit_array_variable(compiler, &builder->global_stream,
                    SpvStorageClassInput, component_type, component_count, compiler->input_control_point_count);
            vkd3d_spirv_add_iface_variable(builder, input_id);
            vkd3d_spirv_build_op_decorate1(builder, input_id, SpvDecorationLocation, input->register_index);
        }
        vkd3d_spirv_build_op_name(builder, input_id, "vicp%u", input->register_index);

        output_id = vkd3d_dxbc_compiler_emit_array_variable(compiler, &builder->global_stream,
                SpvStorageClassOutput, component_type, component_count, compiler->output_control_point_count);
        vkd3d_spirv_add_iface_variable(builder, output_id);
        vkd3d_spirv_build_op_decorate1(builder, output_id, SpvDecorationLocation, output->register_index);
        vkd3d_spirv_build_op_name(builder, output_id, "vocp%u", output->register_index);

        type_id = vkd3d_spirv_get_type_id(builder, component_type, component_count);
        output_ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassOutput, type_id);
        input_ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassInput, type_id);

        dst_id = vkd3d_spirv_build_op_access_chain1(builder, output_ptr_type_id, output_id, invocation_id);
        src_id = vkd3d_spirv_build_op_access_chain1(builder, input_ptr_type_id, input_id, invocation_id);
        vkd3d_spirv_build_op_copy_memory(builder, dst_id, src_id, SpvMemoryAccessMaskNone);
    }
}

static void vkd3d_dxbc_compiler_emit_barrier(struct vkd3d_dxbc_compiler *compiler,
        SpvScope execution_scope, SpvScope memory_scope, SpvMemorySemanticsMask semantics)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t execution_id, memory_id, semantics_id;

    memory_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, memory_scope);
    semantics_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, semantics);

    if (execution_scope != SpvScopeMax)
    {
        execution_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, execution_scope);
        vkd3d_spirv_build_op_control_barrier(builder, execution_id, memory_id, semantics_id);
    }
    else
    {
        vkd3d_spirv_build_op_memory_barrier(builder, memory_id, semantics_id);
    }
}

static void vkd3d_dxbc_compiler_emit_hull_shader_barrier(struct vkd3d_dxbc_compiler *compiler)
{
    vkd3d_dxbc_compiler_emit_barrier(compiler,
            SpvScopeWorkgroup, SpvScopeInvocation, SpvMemorySemanticsMaskNone);
}

static void vkd3d_dxbc_compiler_emit_hull_shader_main(struct vkd3d_dxbc_compiler *compiler)
{
    const struct vkd3d_shader_scan_info *scan_info = compiler->scan_info;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_phase *control_point_phase, *phase;
    uint32_t phase_instance_id;
    unsigned int i, j;
    uint32_t void_id;

    vkd3d_spirv_builder_begin_main_function(builder);

    void_id = vkd3d_spirv_get_op_type_void(builder);

    if ((control_point_phase = vkd3d_dxbc_compiler_get_control_point_phase(compiler)))
        vkd3d_spirv_build_op_function_call(builder, void_id, control_point_phase->function_id, NULL, 0);
    else
        vkd3d_dxbc_compiler_emit_default_control_point_phase(compiler);

    if (scan_info->use_vocp)
        vkd3d_dxbc_compiler_emit_hull_shader_barrier(compiler);

    for (i = 0; i < compiler->shader_phase_count; ++i)
    {
        phase = &compiler->shader_phases[i];
        if (is_control_point_phase(phase))
            continue;

        if (phase->instance_count)
        {
            for (j = 0; j < phase->instance_count; ++j)
            {
                phase_instance_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, j);
                vkd3d_spirv_build_op_function_call(builder,
                        void_id, phase->function_id, &phase_instance_id, 1);
            }
        }
        else
        {
            vkd3d_spirv_build_op_function_call(builder, void_id, phase->function_id, NULL, 0);
        }
    }

    vkd3d_spirv_build_op_return(builder);
    vkd3d_spirv_build_op_function_end(builder);
}

static SpvOp vkd3d_dxbc_compiler_map_alu_instruction(const struct vkd3d_shader_instruction *instruction)
{
    static const struct
    {
        enum VKD3D_SHADER_INSTRUCTION_HANDLER handler_idx;
        SpvOp spirv_op;
    }
    alu_ops[] =
    {
        {VKD3DSIH_ADD,        SpvOpFAdd},
        {VKD3DSIH_AND,        SpvOpBitwiseAnd},
        {VKD3DSIH_BFREV,      SpvOpBitReverse},
        {VKD3DSIH_COUNTBITS,  SpvOpBitCount},
        {VKD3DSIH_DIV,        SpvOpFDiv},
        {VKD3DSIH_FTOI,       SpvOpConvertFToS},
        {VKD3DSIH_FTOU,       SpvOpConvertFToU},
        {VKD3DSIH_IADD,       SpvOpIAdd},
        {VKD3DSIH_INEG,       SpvOpSNegate},
        {VKD3DSIH_ISHL,       SpvOpShiftLeftLogical},
        {VKD3DSIH_ISHR,       SpvOpShiftRightArithmetic},
        {VKD3DSIH_ITOF,       SpvOpConvertSToF},
        {VKD3DSIH_MUL,        SpvOpFMul},
        {VKD3DSIH_NOT,        SpvOpNot},
        {VKD3DSIH_OR,         SpvOpBitwiseOr},
        {VKD3DSIH_USHR,       SpvOpShiftRightLogical},
        {VKD3DSIH_UTOF,       SpvOpConvertUToF},
        {VKD3DSIH_XOR,        SpvOpBitwiseXor},
    };
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(alu_ops); ++i)
    {
        if (alu_ops[i].handler_idx == instruction->handler_idx)
            return alu_ops[i].spirv_op;
    }

    return SpvOpMax;
}

static void vkd3d_dxbc_compiler_emit_alu_instruction(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t src_ids[VKD3D_DXBC_MAX_SOURCE_COUNT];
    uint32_t type_id, val_id;
    unsigned int i;
    SpvOp op;

    op = vkd3d_dxbc_compiler_map_alu_instruction(instruction);
    if (op == SpvOpMax)
    {
        ERR("Unexpected instruction %#x.\n", instruction->handler_idx);
        return;
    }

    assert(instruction->dst_count == 1);
    assert(instruction->src_count <= VKD3D_DXBC_MAX_SOURCE_COUNT);

    type_id = vkd3d_dxbc_compiler_get_type_id_for_dst(compiler, dst);

    for (i = 0; i < instruction->src_count; ++i)
        src_ids[i] = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[i], dst->write_mask);

    val_id = vkd3d_spirv_build_op_trv(builder, &builder->function_stream, op, type_id,
            src_ids, instruction->src_count);

    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

static enum GLSLstd450 vkd3d_dxbc_compiler_map_ext_glsl_instruction(
        const struct vkd3d_shader_instruction *instruction)
{
    static const struct
    {
        enum VKD3D_SHADER_INSTRUCTION_HANDLER handler_idx;
        enum GLSLstd450 glsl_inst;
    }
    glsl_insts[] =
    {
        {VKD3DSIH_EXP,             GLSLstd450Exp2},
        {VKD3DSIH_FIRSTBIT_HI,     GLSLstd450FindUMsb},
        {VKD3DSIH_FIRSTBIT_LO,     GLSLstd450FindILsb},
        {VKD3DSIH_FIRSTBIT_SHI,    GLSLstd450FindSMsb},
        {VKD3DSIH_FRC,             GLSLstd450Fract},
        {VKD3DSIH_IMAX,            GLSLstd450SMax},
        {VKD3DSIH_IMIN,            GLSLstd450SMin},
        {VKD3DSIH_LOG,             GLSLstd450Log2},
        {VKD3DSIH_MAD,             GLSLstd450Fma},
        {VKD3DSIH_MAX,             GLSLstd450NMax},
        {VKD3DSIH_MIN,             GLSLstd450NMin},
        {VKD3DSIH_ROUND_NE,        GLSLstd450RoundEven},
        {VKD3DSIH_ROUND_NI,        GLSLstd450Floor},
        {VKD3DSIH_ROUND_PI,        GLSLstd450Ceil},
        {VKD3DSIH_ROUND_Z,         GLSLstd450Trunc},
        {VKD3DSIH_RSQ,             GLSLstd450InverseSqrt},
        {VKD3DSIH_SQRT,            GLSLstd450Sqrt},
        {VKD3DSIH_UMAX,            GLSLstd450UMax},
        {VKD3DSIH_UMIN,            GLSLstd450UMin},
    };
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(glsl_insts); ++i)
    {
        if (glsl_insts[i].handler_idx == instruction->handler_idx)
            return glsl_insts[i].glsl_inst;
    }

    return GLSLstd450Bad;
}

static void vkd3d_dxbc_compiler_emit_ext_glsl_instruction(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t src_id[VKD3D_DXBC_MAX_SOURCE_COUNT];
    uint32_t instr_set_id, type_id, val_id;
    enum GLSLstd450 glsl_inst;
    unsigned int i;

    glsl_inst = vkd3d_dxbc_compiler_map_ext_glsl_instruction(instruction);
    if (glsl_inst == GLSLstd450Bad)
    {
        ERR("Unexpected instruction %#x.\n", instruction->handler_idx);
        return;
    }

    instr_set_id = vkd3d_spirv_get_glsl_std450_instr_set(builder);

    assert(instruction->dst_count == 1);
    assert(instruction->src_count <= VKD3D_DXBC_MAX_SOURCE_COUNT);

    type_id = vkd3d_dxbc_compiler_get_type_id_for_dst(compiler, dst);

    for (i = 0; i < instruction->src_count; ++i)
        src_id[i] = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[i], dst->write_mask);

    val_id = vkd3d_spirv_build_op_ext_inst(builder, type_id,
            instr_set_id, glsl_inst, src_id, instruction->src_count);

    if (instruction->handler_idx == VKD3DSIH_FIRSTBIT_HI
            || instruction->handler_idx == VKD3DSIH_FIRSTBIT_SHI)
    {
        /* In D3D bits are numbered from the most significant bit. */
        val_id = vkd3d_spirv_build_op_isub(builder, type_id,
                vkd3d_dxbc_compiler_get_constant_uint(compiler, 31), val_id);
    }

    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

static void vkd3d_dxbc_compiler_emit_mov(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    struct vkd3d_shader_register_info dst_reg_info, src_reg_info;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t val_id, dst_val_id, type_id, dst_id, src_id;
    uint32_t components[VKD3D_VEC4_SIZE];
    unsigned int i, component_count;

    if (src->reg.type == VKD3DSPR_IMMCONST || dst->modifiers || src->modifiers)
        goto general_implementation;

    vkd3d_dxbc_compiler_get_register_info(compiler, &dst->reg, &dst_reg_info);
    vkd3d_dxbc_compiler_get_register_info(compiler, &src->reg, &src_reg_info);

    if (dst_reg_info.component_type != src_reg_info.component_type
            || dst_reg_info.write_mask != src_reg_info.write_mask)
        goto general_implementation;

    if (vkd3d_swizzle_is_equal(dst_reg_info.write_mask, src->swizzle, src_reg_info.write_mask))
    {
        dst_id = vkd3d_dxbc_compiler_get_register_id(compiler, &dst->reg);
        src_id = vkd3d_dxbc_compiler_get_register_id(compiler, &src->reg);

        vkd3d_spirv_build_op_copy_memory(builder, dst_id, src_id, SpvMemoryAccessMaskNone);
        return;
    }

    component_count = vkd3d_write_mask_component_count(dst->write_mask);
    if (component_count != 1 && component_count != VKD3D_VEC4_SIZE
            && dst_reg_info.write_mask == VKD3DSP_WRITEMASK_ALL)
    {
        dst_id = vkd3d_dxbc_compiler_get_register_id(compiler, &dst->reg);
        src_id = vkd3d_dxbc_compiler_get_register_id(compiler, &src->reg);

        type_id = vkd3d_spirv_get_type_id(builder, dst_reg_info.component_type, VKD3D_VEC4_SIZE);
        val_id = vkd3d_spirv_build_op_load(builder, type_id, src_id, SpvMemoryAccessMaskNone);
        dst_val_id = vkd3d_spirv_build_op_load(builder, type_id, dst_id, SpvMemoryAccessMaskNone);

        for (i = 0; i < ARRAY_SIZE(components); ++i)
        {
            if (dst->write_mask & (VKD3DSP_WRITEMASK_0 << i))
                components[i] = VKD3D_VEC4_SIZE + vkd3d_swizzle_get_component(src->swizzle, i);
            else
                components[i] = i;
        }

        val_id = vkd3d_spirv_build_op_vector_shuffle(builder,
                type_id, dst_val_id, val_id, components, VKD3D_VEC4_SIZE);

        vkd3d_spirv_build_op_store(builder, dst_id, val_id, SpvMemoryAccessMaskNone);
        return;
    }

general_implementation:
    val_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src, dst->write_mask);
    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

static void vkd3d_dxbc_compiler_emit_movc(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t condition_id, src1_id, src2_id, type_id, val_id;
    unsigned int component_count;

    condition_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], dst->write_mask);
    src1_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[1], dst->write_mask);
    src2_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[2], dst->write_mask);

    component_count = vkd3d_write_mask_component_count(dst->write_mask);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, component_count);

    condition_id = vkd3d_dxbc_compiler_emit_int_to_bool(compiler,
            VKD3D_SHADER_CONDITIONAL_OP_NZ, component_count, condition_id);
    val_id = vkd3d_spirv_build_op_select(builder, type_id, condition_id, src1_id, src2_id);

    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

static void vkd3d_dxbc_compiler_emit_swapc(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t condition_id, src1_id, src2_id, type_id, val_id;
    unsigned int component_count;

    assert(dst[0].write_mask == dst[1].write_mask);

    condition_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], dst->write_mask);
    src1_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[1], dst->write_mask);
    src2_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[2], dst->write_mask);

    component_count = vkd3d_write_mask_component_count(dst->write_mask);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, component_count);

    condition_id = vkd3d_dxbc_compiler_emit_int_to_bool(compiler,
            VKD3D_SHADER_CONDITIONAL_OP_NZ, component_count, condition_id);

    val_id = vkd3d_spirv_build_op_select(builder, type_id, condition_id, src2_id, src1_id);
    vkd3d_dxbc_compiler_emit_store_dst(compiler, &dst[0], val_id);
    val_id = vkd3d_spirv_build_op_select(builder, type_id, condition_id, src1_id, src2_id);
    vkd3d_dxbc_compiler_emit_store_dst(compiler, &dst[1], val_id);
}

static void vkd3d_dxbc_compiler_emit_dot(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    enum vkd3d_component_type component_type;
    uint32_t type_id, val_id, src_ids[2];
    unsigned int component_count, i;
    DWORD write_mask;

    component_count = vkd3d_write_mask_component_count(dst->write_mask);
    component_type = vkd3d_component_type_from_data_type(dst->reg.data_type);

    if (instruction->handler_idx == VKD3DSIH_DP4)
        write_mask = VKD3DSP_WRITEMASK_ALL;
    else if (instruction->handler_idx == VKD3DSIH_DP3)
        write_mask = VKD3DSP_WRITEMASK_0 | VKD3DSP_WRITEMASK_1 | VKD3DSP_WRITEMASK_2;
    else
        write_mask = VKD3DSP_WRITEMASK_0 | VKD3DSP_WRITEMASK_1;

    assert(instruction->src_count == ARRAY_SIZE(src_ids));
    for (i = 0; i < ARRAY_SIZE(src_ids); ++i)
        src_ids[i] = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[i], write_mask);

    type_id = vkd3d_spirv_get_type_id(builder, component_type, 1);

    val_id = vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            SpvOpDot, type_id, src_ids[0], src_ids[1]);
    if (component_count > 1)
    {
        val_id = vkd3d_dxbc_compiler_emit_construct_vector(compiler,
                component_type, component_count, val_id, 0, 1);
    }

    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

static void vkd3d_dxbc_compiler_emit_rcp(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t type_id, src_id, val_id;
    unsigned int component_count;

    component_count = vkd3d_write_mask_component_count(dst->write_mask);
    type_id = vkd3d_dxbc_compiler_get_type_id_for_dst(compiler, dst);

    src_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src, dst->write_mask);
    val_id = vkd3d_spirv_build_op_fdiv(builder, type_id,
            vkd3d_dxbc_compiler_get_constant_float_vector(compiler, 1.0f, component_count), src_id);
    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

static void vkd3d_dxbc_compiler_emit_sincos(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_dst_param *dst_sin = &instruction->dst[0];
    const struct vkd3d_shader_dst_param *dst_cos = &instruction->dst[1];
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t type_id, src_id, sin_id = 0, cos_id = 0;

    if (dst_sin->reg.type != VKD3DSPR_NULL)
    {
        type_id = vkd3d_dxbc_compiler_get_type_id_for_dst(compiler, dst_sin);
        src_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src, dst_sin->write_mask);

        sin_id = vkd3d_spirv_build_op_glsl_std450_sin(builder, type_id, src_id);
    }

    if (dst_cos->reg.type != VKD3DSPR_NULL)
    {
        if (dst_sin->reg.type == VKD3DSPR_NULL || dst_cos->write_mask != dst_sin->write_mask)
        {
            type_id = vkd3d_dxbc_compiler_get_type_id_for_dst(compiler, dst_cos);
            src_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src, dst_cos->write_mask);
        }

        cos_id = vkd3d_spirv_build_op_glsl_std450_cos(builder, type_id, src_id);
    }

    if (sin_id)
        vkd3d_dxbc_compiler_emit_store_dst(compiler, dst_sin, sin_id);

    if (cos_id)
        vkd3d_dxbc_compiler_emit_store_dst(compiler, dst_cos, cos_id);
}

static void vkd3d_dxbc_compiler_emit_imul(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t type_id, val_id, src0_id, src1_id;

    if (dst[0].reg.type != VKD3DSPR_NULL)
        FIXME("Extended multiplies not implemented.\n"); /* SpvOpSMulExtended */

    if (dst[1].reg.type == VKD3DSPR_NULL)
        return;

    type_id = vkd3d_dxbc_compiler_get_type_id_for_dst(compiler, &dst[1]);

    src0_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], dst[1].write_mask);
    src1_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[1], dst[1].write_mask);

    val_id = vkd3d_spirv_build_op_imul(builder, type_id, src0_id, src1_id);

    vkd3d_dxbc_compiler_emit_store_dst(compiler, &dst[1], val_id);
}

static void vkd3d_dxbc_compiler_emit_imad(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t type_id, val_id, src_ids[3];
    unsigned int i, component_count;

    component_count = vkd3d_write_mask_component_count(dst->write_mask);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_INT, component_count);

    for (i = 0; i < ARRAY_SIZE(src_ids); ++i)
        src_ids[i] = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[i], dst->write_mask);

    val_id = vkd3d_spirv_build_op_imul(builder, type_id, src_ids[0], src_ids[1]);
    val_id = vkd3d_spirv_build_op_iadd(builder, type_id, val_id, src_ids[2]);

    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

static void vkd3d_dxbc_compiler_emit_udiv(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    uint32_t type_id, val_id, src0_id, src1_id, condition_id, uint_max_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    unsigned int component_count = 0;

    if (dst[0].reg.type != VKD3DSPR_NULL)
    {
        component_count = vkd3d_write_mask_component_count(dst[0].write_mask);
        type_id = vkd3d_dxbc_compiler_get_type_id_for_dst(compiler, &dst[0]);

        src0_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], dst[0].write_mask);
        src1_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[1], dst[0].write_mask);

        condition_id = vkd3d_dxbc_compiler_emit_int_to_bool(compiler,
                VKD3D_SHADER_CONDITIONAL_OP_NZ, component_count, src1_id);
        uint_max_id = vkd3d_dxbc_compiler_get_constant_uint_vector(compiler,
                0xffffffff, component_count);

        val_id = vkd3d_spirv_build_op_udiv(builder, type_id, src0_id, src1_id);
        /* The SPIR-V spec says: "The resulting value is undefined if Operand 2 is 0." */
        val_id = vkd3d_spirv_build_op_select(builder, type_id, condition_id, val_id, uint_max_id);

        vkd3d_dxbc_compiler_emit_store_dst(compiler, &dst[0], val_id);
    }

    if (dst[1].reg.type != VKD3DSPR_NULL)
    {
        if (!component_count || dst[0].write_mask != dst[1].write_mask)
        {
            component_count = vkd3d_write_mask_component_count(dst[1].write_mask);
            type_id = vkd3d_dxbc_compiler_get_type_id_for_dst(compiler, &dst[1]);

            src0_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], dst[1].write_mask);
            src1_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[1], dst[1].write_mask);

            condition_id = vkd3d_dxbc_compiler_emit_int_to_bool(compiler,
                    VKD3D_SHADER_CONDITIONAL_OP_NZ, component_count, src1_id);
            uint_max_id = vkd3d_dxbc_compiler_get_constant_uint_vector(compiler,
                    0xffffffff, component_count);
        }

        val_id = vkd3d_spirv_build_op_umod(builder, type_id, src0_id, src1_id);
        /* The SPIR-V spec says: "The resulting value is undefined if Operand 2 is 0." */
        val_id = vkd3d_spirv_build_op_select(builder, type_id, condition_id, val_id, uint_max_id);

        vkd3d_dxbc_compiler_emit_store_dst(compiler, &dst[1], val_id);
    }
}

static void vkd3d_dxbc_compiler_emit_bitfield_instruction(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    uint32_t src_ids[4], constituents[VKD3D_VEC4_SIZE], type_id, mask_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    enum vkd3d_component_type component_type;
    unsigned int i, j, k, src_count;
    DWORD write_mask;
    SpvOp op;

    src_count = instruction->src_count;
    assert(2 <= src_count && src_count <= ARRAY_SIZE(src_ids));

    component_type = vkd3d_component_type_from_data_type(dst->reg.data_type);
    type_id = vkd3d_spirv_get_type_id(builder, component_type, 1);
    mask_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, 0x1f);

    switch (instruction->handler_idx)
    {
        case VKD3DSIH_BFI:  op = SpvOpBitFieldInsert; break;
        case VKD3DSIH_IBFE: op = SpvOpBitFieldSExtract; break;
        case VKD3DSIH_UBFE: op = SpvOpBitFieldUExtract; break;
        default:
            ERR("Unexpected instruction %#x.\n", instruction->handler_idx);
            return;
    }

    assert(dst->write_mask & VKD3DSP_WRITEMASK_ALL);
    for (i = 0, k = 0; i < VKD3D_VEC4_SIZE; ++i)
    {
        if (!(write_mask = dst->write_mask & (VKD3DSP_WRITEMASK_0 << i)))
            continue;

        for (j = 0; j < src_count; ++j)
        {
            src_ids[src_count - j - 1] = vkd3d_dxbc_compiler_emit_load_src_with_type(compiler,
                    &src[j], write_mask, component_type);
        }

        /* In SPIR-V, the last two operands are Offset and Count. */
        for (j = src_count - 2; j < src_count; ++j)
        {
            src_ids[j] = vkd3d_spirv_build_op_and(builder, type_id, src_ids[j], mask_id);
        }

        constituents[k++] = vkd3d_spirv_build_op_trv(builder, &builder->function_stream,
                op, type_id, src_ids, src_count);
    }

    vkd3d_dxbc_compiler_emit_store_dst_components(compiler, dst, component_type, constituents);
}

static void vkd3d_dxbc_compiler_emit_f16tof32(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    uint32_t instr_set_id, type_id, scalar_type_id, src_id, result_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t components[VKD3D_VEC4_SIZE];
    unsigned int i, j;
    DWORD write_mask;

    instr_set_id = vkd3d_spirv_get_glsl_std450_instr_set(builder);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, 2);
    scalar_type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, 1);

    /* FIXME: Consider a single UnpackHalf2x16 intruction per 2 components. */
    assert(dst->write_mask & VKD3DSP_WRITEMASK_ALL);
    for (i = 0, j = 0; i < VKD3D_VEC4_SIZE; ++i)
    {
        if (!(write_mask = dst->write_mask & (VKD3DSP_WRITEMASK_0 << i)))
            continue;

        src_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src, write_mask);
        result_id = vkd3d_spirv_build_op_ext_inst(builder, type_id,
                instr_set_id, GLSLstd450UnpackHalf2x16, &src_id, 1);
        components[j++] = vkd3d_spirv_build_op_composite_extract1(builder,
                scalar_type_id, result_id, 0);
    }

    vkd3d_dxbc_compiler_emit_store_dst_components(compiler,
            dst, vkd3d_component_type_from_data_type(dst->reg.data_type), components);
}

static void vkd3d_dxbc_compiler_emit_f32tof16(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    uint32_t instr_set_id, type_id, scalar_type_id, src_id, zero_id, constituents[2];
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t components[VKD3D_VEC4_SIZE];
    unsigned int i, j;
    DWORD write_mask;

    instr_set_id = vkd3d_spirv_get_glsl_std450_instr_set(builder);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, 2);
    scalar_type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    zero_id = vkd3d_dxbc_compiler_get_constant_float(compiler, 0.0f);

    /* FIXME: Consider a single PackHalf2x16 intruction per 2 components. */
    assert(dst->write_mask & VKD3DSP_WRITEMASK_ALL);
    for (i = 0, j = 0; i < VKD3D_VEC4_SIZE; ++i)
    {
        if (!(write_mask = dst->write_mask & (VKD3DSP_WRITEMASK_0 << i)))
            continue;

        src_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src, write_mask);
        constituents[0] = src_id;
        constituents[1] = zero_id;
        src_id = vkd3d_spirv_build_op_composite_construct(builder,
                type_id, constituents, ARRAY_SIZE(constituents));
        components[j++] = vkd3d_spirv_build_op_ext_inst(builder, scalar_type_id,
                instr_set_id, GLSLstd450PackHalf2x16, &src_id, 1);
    }

    vkd3d_dxbc_compiler_emit_store_dst_components(compiler,
            dst, vkd3d_component_type_from_data_type(dst->reg.data_type), components);
}

static void vkd3d_dxbc_compiler_emit_comparison_instruction(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t src0_id, src1_id, type_id, result_id;
    unsigned int component_count;
    SpvOp op;

    switch (instruction->handler_idx)
    {
        case VKD3DSIH_EQ:  op = SpvOpFOrdEqual; break;
        case VKD3DSIH_GE:  op = SpvOpFOrdGreaterThanEqual; break;
        case VKD3DSIH_IEQ: op = SpvOpIEqual; break;
        case VKD3DSIH_IGE: op = SpvOpSGreaterThanEqual; break;
        case VKD3DSIH_ILT: op = SpvOpSLessThan; break;
        case VKD3DSIH_INE: op = SpvOpINotEqual; break;
        case VKD3DSIH_LT:  op = SpvOpFOrdLessThan; break;
        case VKD3DSIH_NE:  op = SpvOpFUnordNotEqual; break;
        case VKD3DSIH_UGE: op = SpvOpUGreaterThanEqual; break;
        case VKD3DSIH_ULT: op = SpvOpULessThan; break;
        default:
            ERR("Unexpected instruction %#x.\n", instruction->handler_idx);
            return;
    }

    component_count = vkd3d_write_mask_component_count(dst->write_mask);

    src0_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], dst->write_mask);
    src1_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[1], dst->write_mask);

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_BOOL, component_count);
    result_id = vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
            op, type_id, src0_id, src1_id);

    result_id = vkd3d_dxbc_compiler_emit_bool_to_int(compiler, component_count, result_id);
    vkd3d_dxbc_compiler_emit_store_reg(compiler, &dst->reg, dst->write_mask, result_id);
}

static uint32_t vkd3d_dxbc_compiler_emit_conditional_branch(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction, uint32_t target_block_id)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t condition_id, merge_block_id;

    condition_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src, VKD3DSP_WRITEMASK_0);
    condition_id = vkd3d_dxbc_compiler_emit_int_to_bool(compiler, instruction->flags, 1, condition_id);

    merge_block_id = vkd3d_spirv_alloc_id(builder);

    vkd3d_spirv_build_op_selection_merge(builder, merge_block_id, SpvSelectionControlMaskNone);
    vkd3d_spirv_build_op_branch_conditional(builder, condition_id, target_block_id, merge_block_id);

    return merge_block_id;
}

static void vkd3d_dxbc_compiler_emit_shader_epilogue_invocation(struct vkd3d_dxbc_compiler *compiler)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t void_id, function_id, arguments[MAX_REG_OUTPUT];
    unsigned int i, count;

    if ((function_id = compiler->epilogue_function_id))
    {
        void_id = vkd3d_spirv_get_op_type_void(builder);
        for (i = 0, count = 0; i < ARRAY_SIZE(compiler->private_output_variable); ++i)
        {
            if (compiler->private_output_variable[i])
                arguments[count++] = compiler->private_output_variable[i];
        }

        vkd3d_spirv_build_op_function_call(builder, void_id, function_id, arguments, count);
    }
}

static void vkd3d_dxbc_compiler_emit_return(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;

    if (compiler->shader_type != VKD3D_SHADER_TYPE_GEOMETRY)
        vkd3d_dxbc_compiler_emit_shader_epilogue_invocation(compiler);

    vkd3d_spirv_build_op_return(builder);
}

static void vkd3d_dxbc_compiler_emit_retc(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t target_id, merge_block_id;

    target_id = vkd3d_spirv_alloc_id(builder);
    merge_block_id = vkd3d_dxbc_compiler_emit_conditional_branch(compiler, instruction, target_id);

    vkd3d_spirv_build_op_label(builder, target_id);
    vkd3d_dxbc_compiler_emit_return(compiler, instruction);
    vkd3d_spirv_build_op_label(builder, merge_block_id);
}

static void vkd3d_dxbc_compiler_emit_kill(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t target_id, merge_block_id;

    target_id = vkd3d_spirv_alloc_id(builder);
    merge_block_id = vkd3d_dxbc_compiler_emit_conditional_branch(compiler, instruction, target_id);

    vkd3d_spirv_build_op_label(builder, target_id);

    if (vkd3d_dxbc_compiler_is_target_extension_supported(compiler,
            VKD3D_SHADER_TARGET_EXTENSION_SPV_EXT_DEMOTE_TO_HELPER_INVOCATION))
    {
        vkd3d_spirv_build_op_demote_to_helper_invocation(builder);
        vkd3d_spirv_build_op_branch(builder, merge_block_id);
    }
    else
    {
        vkd3d_spirv_build_op_kill(builder);
    }

    vkd3d_spirv_build_op_label(builder, merge_block_id);
}

static struct vkd3d_control_flow_info *vkd3d_dxbc_compiler_push_control_flow_level(
        struct vkd3d_dxbc_compiler *compiler)
{
    if (!vkd3d_array_reserve((void **)&compiler->control_flow_info, &compiler->control_flow_info_size,
            compiler->control_flow_depth + 1, sizeof(*compiler->control_flow_info)))
    {
        ERR("Failed to allocate control flow info structure.\n");
        return NULL;
    }

    return &compiler->control_flow_info[compiler->control_flow_depth++];
}

static void vkd3d_dxbc_compiler_pop_control_flow_level(struct vkd3d_dxbc_compiler *compiler)
{
    struct vkd3d_control_flow_info *cf_info;

    assert(compiler->control_flow_depth);

    cf_info = &compiler->control_flow_info[--compiler->control_flow_depth];
    memset(cf_info, 0, sizeof(*cf_info));
}

static struct vkd3d_control_flow_info *vkd3d_dxbc_compiler_find_innermost_loop(
        struct vkd3d_dxbc_compiler *compiler)
{
    int depth;

    for (depth = compiler->control_flow_depth - 1; depth >= 0; --depth)
    {
        if (compiler->control_flow_info[depth].current_block == VKD3D_BLOCK_LOOP)
            return &compiler->control_flow_info[depth];
    }

    return NULL;
}

static struct vkd3d_control_flow_info *vkd3d_dxbc_compiler_find_innermost_breakable_cf_construct(
        struct vkd3d_dxbc_compiler *compiler)
{
    int depth;

    for (depth = compiler->control_flow_depth - 1; depth >= 0; --depth)
    {
        if (compiler->control_flow_info[depth].current_block == VKD3D_BLOCK_LOOP
                || compiler->control_flow_info[depth].current_block == VKD3D_BLOCK_SWITCH)
            return &compiler->control_flow_info[depth];
    }

    return NULL;
}

static int vkd3d_dxbc_compiler_emit_control_flow_instruction(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    uint32_t loop_header_block_id, loop_body_block_id, continue_block_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t merge_block_id, val_id, condition_id, true_label;
    struct vkd3d_control_flow_info *cf_info;

    cf_info = compiler->control_flow_depth
            ? &compiler->control_flow_info[compiler->control_flow_depth - 1] : NULL;

    switch (instruction->handler_idx)
    {
        case VKD3DSIH_IF:
            if (!(cf_info = vkd3d_dxbc_compiler_push_control_flow_level(compiler)))
                return VKD3D_ERROR_OUT_OF_MEMORY;

            val_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src, VKD3DSP_WRITEMASK_0);
            condition_id = vkd3d_dxbc_compiler_emit_int_to_bool(compiler, instruction->flags, 1, val_id);

            true_label = vkd3d_spirv_alloc_id(builder);
            merge_block_id = vkd3d_spirv_alloc_id(builder);
            vkd3d_spirv_build_op_selection_merge(builder, merge_block_id, SpvSelectionControlMaskNone);
            cf_info->u.if_.stream_location = vkd3d_spirv_stream_current_location(&builder->function_stream);
            vkd3d_spirv_build_op_branch_conditional(builder, condition_id, true_label, merge_block_id);

            vkd3d_spirv_build_op_label(builder, true_label);

            cf_info->u.if_.id = compiler->branch_id;
            cf_info->u.if_.merge_block_id = merge_block_id;
            cf_info->u.if_.else_block_id = 0;
            cf_info->inside_block = true;
            cf_info->current_block = VKD3D_BLOCK_IF;

            vkd3d_spirv_build_op_name(builder, merge_block_id, "branch%u_merge", compiler->branch_id);
            vkd3d_spirv_build_op_name(builder, true_label, "branch%u_true", compiler->branch_id);
            ++compiler->branch_id;
            break;

        case VKD3DSIH_ELSE:
            assert(compiler->control_flow_depth);
            assert(cf_info->current_block == VKD3D_BLOCK_IF);

            if (cf_info->inside_block)
                vkd3d_spirv_build_op_branch(builder, cf_info->u.if_.merge_block_id);

            cf_info->u.if_.else_block_id = vkd3d_spirv_alloc_id(builder);
            vkd3d_spirv_as_op_branch_conditional(&builder->function_stream,
                    cf_info->u.if_.stream_location)->false_label = cf_info->u.if_.else_block_id;
            vkd3d_spirv_build_op_name(builder,
                    cf_info->u.if_.else_block_id, "branch%u_false", cf_info->u.if_.id);
            vkd3d_spirv_build_op_label(builder, cf_info->u.if_.else_block_id);
            cf_info->inside_block = true;
            break;

        case VKD3DSIH_ENDIF:
            assert(compiler->control_flow_depth);
            assert(cf_info->current_block == VKD3D_BLOCK_IF);

            if (cf_info->inside_block)
                vkd3d_spirv_build_op_branch(builder, cf_info->u.if_.merge_block_id);

            vkd3d_spirv_build_op_label(builder, cf_info->u.if_.merge_block_id);

            vkd3d_dxbc_compiler_pop_control_flow_level(compiler);
            break;

        case VKD3DSIH_LOOP:
            if (!(cf_info = vkd3d_dxbc_compiler_push_control_flow_level(compiler)))
                return VKD3D_ERROR_OUT_OF_MEMORY;

            loop_header_block_id = vkd3d_spirv_alloc_id(builder);
            loop_body_block_id = vkd3d_spirv_alloc_id(builder);
            continue_block_id = vkd3d_spirv_alloc_id(builder);
            merge_block_id = vkd3d_spirv_alloc_id(builder);

            vkd3d_spirv_build_op_branch(builder, loop_header_block_id);
            vkd3d_spirv_build_op_label(builder, loop_header_block_id);
            vkd3d_spirv_build_op_loop_merge(builder, merge_block_id, continue_block_id, SpvLoopControlMaskNone);
            vkd3d_spirv_build_op_branch(builder, loop_body_block_id);

            vkd3d_spirv_build_op_label(builder, loop_body_block_id);

            cf_info->u.loop.header_block_id = loop_header_block_id;
            cf_info->u.loop.continue_block_id = continue_block_id;
            cf_info->u.loop.merge_block_id = merge_block_id;
            cf_info->current_block = VKD3D_BLOCK_LOOP;

            vkd3d_spirv_build_op_name(builder, loop_header_block_id, "loop%u_header", compiler->loop_id);
            vkd3d_spirv_build_op_name(builder, loop_body_block_id, "loop%u_body", compiler->loop_id);
            vkd3d_spirv_build_op_name(builder, continue_block_id, "loop%u_continue", compiler->loop_id);
            vkd3d_spirv_build_op_name(builder, merge_block_id, "loop%u_merge", compiler->loop_id);
            ++compiler->loop_id;
            break;

        case VKD3DSIH_ENDLOOP:
            assert(compiler->control_flow_depth);
            assert(cf_info->current_block == VKD3D_BLOCK_LOOP);

            vkd3d_spirv_build_op_branch(builder, cf_info->u.loop.continue_block_id);

            vkd3d_spirv_build_op_label(builder, cf_info->u.loop.continue_block_id);
            vkd3d_spirv_build_op_branch(builder, cf_info->u.loop.header_block_id);
            vkd3d_spirv_build_op_label(builder, cf_info->u.loop.merge_block_id);

            vkd3d_dxbc_compiler_pop_control_flow_level(compiler);
            break;

        case VKD3DSIH_SWITCH:
            if (!(cf_info = vkd3d_dxbc_compiler_push_control_flow_level(compiler)))
                return VKD3D_ERROR_OUT_OF_MEMORY;

            merge_block_id = vkd3d_spirv_alloc_id(builder);

            assert(src->reg.data_type == VKD3D_DATA_INT);
            val_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src, VKD3DSP_WRITEMASK_0);

            vkd3d_spirv_build_op_selection_merge(builder, merge_block_id, SpvSelectionControlMaskNone);

            cf_info->u.switch_.id = compiler->switch_id;
            cf_info->u.switch_.merge_block_id = merge_block_id;
            cf_info->u.switch_.stream_location = vkd3d_spirv_stream_current_location(&builder->function_stream);
            cf_info->u.switch_.selector_id = val_id;
            cf_info->u.switch_.case_blocks = NULL;
            cf_info->u.switch_.case_blocks_size = 0;
            cf_info->u.switch_.case_block_count = 0;
            cf_info->u.switch_.default_block_id = 0;
            cf_info->inside_block = false;
            cf_info->current_block = VKD3D_BLOCK_SWITCH;

            vkd3d_spirv_build_op_name(builder, merge_block_id, "switch%u_merge", compiler->switch_id);

            ++compiler->switch_id;

            if (!vkd3d_array_reserve((void **)&cf_info->u.switch_.case_blocks, &cf_info->u.switch_.case_blocks_size,
                    10, sizeof(*cf_info->u.switch_.case_blocks)))
                return VKD3D_ERROR_OUT_OF_MEMORY;

            break;

        case VKD3DSIH_ENDSWITCH:
            assert(compiler->control_flow_depth);
            assert(cf_info->current_block == VKD3D_BLOCK_SWITCH);
            assert(!cf_info->inside_block);

            if (!cf_info->u.switch_.default_block_id)
                cf_info->u.switch_.default_block_id = cf_info->u.switch_.merge_block_id;

            vkd3d_spirv_build_op_label(builder, cf_info->u.switch_.merge_block_id);

            /* The OpSwitch instruction is inserted when the endswitch
             * instruction is processed because we do not know the number
             * of case statments in advance.*/
            vkd3d_spirv_begin_function_stream_insertion(builder, cf_info->u.switch_.stream_location);
            vkd3d_spirv_build_op_switch(builder, cf_info->u.switch_.selector_id,
                    cf_info->u.switch_.default_block_id, cf_info->u.switch_.case_blocks,
                    cf_info->u.switch_.case_block_count);
            vkd3d_spirv_end_function_stream_insertion(builder);

            vkd3d_free(cf_info->u.switch_.case_blocks);
            vkd3d_dxbc_compiler_pop_control_flow_level(compiler);
            break;

        case VKD3DSIH_CASE:
        {
            uint32_t label_id, value;

            assert(compiler->control_flow_depth);
            assert(cf_info->current_block == VKD3D_BLOCK_SWITCH);

            assert(src->swizzle == VKD3D_NO_SWIZZLE && src->reg.type == VKD3DSPR_IMMCONST);
            value = *src->reg.u.immconst_uint;

            if (!vkd3d_array_reserve((void **)&cf_info->u.switch_.case_blocks, &cf_info->u.switch_.case_blocks_size,
                    2 * (cf_info->u.switch_.case_block_count + 1), sizeof(*cf_info->u.switch_.case_blocks)))
                return VKD3D_ERROR_OUT_OF_MEMORY;

            label_id = vkd3d_spirv_alloc_id(builder);
            if (cf_info->inside_block) /* fall-through */
                vkd3d_spirv_build_op_branch(builder, label_id);

            cf_info->u.switch_.case_blocks[2 * cf_info->u.switch_.case_block_count + 0] = value;
            cf_info->u.switch_.case_blocks[2 * cf_info->u.switch_.case_block_count + 1] = label_id;
            ++cf_info->u.switch_.case_block_count;

            vkd3d_spirv_build_op_label(builder, label_id);
            cf_info->inside_block = true;
            vkd3d_spirv_build_op_name(builder, label_id, "switch%u_case%u", cf_info->u.switch_.id, value);
            break;
        }

        case VKD3DSIH_DEFAULT:
            assert(compiler->control_flow_depth);
            assert(cf_info->current_block == VKD3D_BLOCK_SWITCH);
            assert(!cf_info->u.switch_.default_block_id);

            cf_info->u.switch_.default_block_id = vkd3d_spirv_alloc_id(builder);
            if (cf_info->inside_block) /* fall-through */
                vkd3d_spirv_build_op_branch(builder, cf_info->u.switch_.default_block_id);

            vkd3d_spirv_build_op_label(builder, cf_info->u.switch_.default_block_id);
            vkd3d_spirv_build_op_name(builder, cf_info->u.switch_.default_block_id,
                    "switch%u_default", cf_info->u.switch_.id);
            cf_info->inside_block = true;
            break;

        case VKD3DSIH_BREAK:
        {
            struct vkd3d_control_flow_info *breakable_cf_info;

            assert(compiler->control_flow_depth);

            if (!(breakable_cf_info = vkd3d_dxbc_compiler_find_innermost_breakable_cf_construct(compiler)))
            {
                FIXME("Unhandled break instruction.\n");
                return VKD3D_ERROR_INVALID_SHADER;
            }

            if (breakable_cf_info->current_block == VKD3D_BLOCK_LOOP)
            {
                vkd3d_spirv_build_op_branch(builder, breakable_cf_info->u.loop.merge_block_id);
            }
            else if (breakable_cf_info->current_block == VKD3D_BLOCK_SWITCH)
            {
                assert(breakable_cf_info->inside_block);
                vkd3d_spirv_build_op_branch(builder, breakable_cf_info->u.switch_.merge_block_id);
            }

            cf_info->inside_block = false;
            break;
        }

        case VKD3DSIH_BREAKP:
        {
            struct vkd3d_control_flow_info *loop_cf_info;

            assert(compiler->control_flow_depth);

            if (!(loop_cf_info = vkd3d_dxbc_compiler_find_innermost_loop(compiler)))
            {
                ERR("Invalid 'breakc' instruction outside loop.\n");
                return VKD3D_ERROR_INVALID_SHADER;
            }

            merge_block_id = vkd3d_dxbc_compiler_emit_conditional_branch(compiler,
                    instruction, loop_cf_info->u.loop.merge_block_id);
            vkd3d_spirv_build_op_label(builder, merge_block_id);
            break;
        }

        case VKD3DSIH_CONTINUE:
        {
            struct vkd3d_control_flow_info *loop_cf_info;

            assert(compiler->control_flow_depth);

            if (!(loop_cf_info = vkd3d_dxbc_compiler_find_innermost_loop(compiler)))
            {
                ERR("Invalid 'continue' instruction outside loop.\n");
                return VKD3D_ERROR_INVALID_SHADER;
            }

            vkd3d_spirv_build_op_branch(builder, loop_cf_info->u.loop.continue_block_id);

            cf_info->inside_block = false;
            break;
        }

        case VKD3DSIH_CONTINUEP:
        {
            struct vkd3d_control_flow_info *loop_cf_info;

            if (!(loop_cf_info = vkd3d_dxbc_compiler_find_innermost_loop(compiler)))
            {
                ERR("Invalid 'continuec' instruction outside loop.\n");
                return VKD3D_ERROR_INVALID_SHADER;
            }

            merge_block_id = vkd3d_dxbc_compiler_emit_conditional_branch(compiler,
                    instruction, loop_cf_info->u.loop.continue_block_id);
            vkd3d_spirv_build_op_label(builder, merge_block_id);
            break;
        }

        case VKD3DSIH_RET:
            vkd3d_dxbc_compiler_emit_return(compiler, instruction);

            if (cf_info)
                cf_info->inside_block = false;
            break;

        case VKD3DSIH_RETP:
            vkd3d_dxbc_compiler_emit_retc(compiler, instruction);
            break;

        case VKD3DSIH_TEXKILL:
            vkd3d_dxbc_compiler_emit_kill(compiler, instruction);
            break;

        default:
            ERR("Unexpected instruction %#x.\n", instruction->handler_idx);
            break;
    }

    return VKD3D_OK;
}

static void vkd3d_dxbc_compiler_emit_deriv_instruction(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    const struct instruction_info *info;
    uint32_t type_id, src_id, val_id;
    unsigned int i;

    static const struct instruction_info
    {
        enum VKD3D_SHADER_INSTRUCTION_HANDLER handler_idx;
        SpvOp op;
        bool needs_derivative_control;
    }
    deriv_instructions[] =
    {
        {VKD3DSIH_DSX,        SpvOpDPdx},
        {VKD3DSIH_DSX_COARSE, SpvOpDPdxCoarse, true},
        {VKD3DSIH_DSX_FINE,   SpvOpDPdxFine,   true},
        {VKD3DSIH_DSY,        SpvOpDPdy},
        {VKD3DSIH_DSY_COARSE, SpvOpDPdyCoarse, true},
        {VKD3DSIH_DSY_FINE,   SpvOpDPdyFine,   true},
    };

    info = NULL;
    for (i = 0; i < ARRAY_SIZE(deriv_instructions); ++i)
    {
        if (deriv_instructions[i].handler_idx == instruction->handler_idx)
        {
            info = &deriv_instructions[i];
            break;
        }
    }
    if (!info)
    {
        ERR("Unexpected instruction %#x.\n", instruction->handler_idx);
        return;
    }

    if (info->needs_derivative_control)
        vkd3d_spirv_enable_capability(builder, SpvCapabilityDerivativeControl);

    assert(instruction->dst_count == 1);
    assert(instruction->src_count == 1);

    type_id = vkd3d_dxbc_compiler_get_type_id_for_dst(compiler, dst);
    src_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src, dst->write_mask);
    val_id = vkd3d_spirv_build_op_tr1(builder, &builder->function_stream, info->op, type_id, src_id);
    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

struct vkd3d_shader_image
{
    uint32_t id;
    uint32_t image_id;
    uint32_t sampled_image_id;

    enum vkd3d_component_type sampled_type;
    uint32_t image_type_id;
    const struct vkd3d_spirv_resource_type *resource_type_info;
    unsigned int structure_stride;
    bool raw;
};

#define VKD3D_IMAGE_FLAG_NONE    0x0
#define VKD3D_IMAGE_FLAG_DEPTH   0x1
#define VKD3D_IMAGE_FLAG_NO_LOAD 0x2
#define VKD3D_IMAGE_FLAG_SAMPLED 0x4

static const struct vkd3d_symbol *vkd3d_dxbc_compiler_find_resource(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *resource_reg)
{
    struct vkd3d_symbol resource_key;
    struct rb_entry *entry;

    vkd3d_symbol_make_resource(&resource_key, resource_reg);
    entry = rb_get(&compiler->symbol_table, &resource_key);
    assert(entry);
    return RB_ENTRY_VALUE(entry, struct vkd3d_symbol, entry);
}

static const struct vkd3d_symbol *vkd3d_dxbc_compiler_find_combined_sampler(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_register *resource_reg, const struct vkd3d_shader_register *sampler_reg)
{
    const struct vkd3d_shader_interface_info *shader_interface = &compiler->shader_interface;
    unsigned int resource_index, sampler_index;
    struct vkd3d_symbol key;
    struct rb_entry *entry;

    if (!shader_interface->combined_sampler_count)
        return NULL;

    resource_index = resource_reg->idx[0].offset;
    sampler_index = sampler_reg ? sampler_reg->idx[0].offset : VKD3D_DUMMY_SAMPLER_INDEX;

    vkd3d_symbol_make_combined_sampler(&key, resource_index, sampler_index);
    if ((entry = rb_get(&compiler->symbol_table, &key)))
        return RB_ENTRY_VALUE(entry, struct vkd3d_symbol, entry);
    return NULL;
}

static void vkd3d_dxbc_compiler_prepare_image(struct vkd3d_dxbc_compiler *compiler,
        struct vkd3d_shader_image *image, const struct vkd3d_shader_register *resource_reg,
        const struct vkd3d_shader_register *sampler_reg, unsigned int flags)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t sampler_var_id, sampler_id, sampled_image_type_id;
    const struct vkd3d_symbol *symbol = NULL;
    bool load, sampled, depth_comparison;

    load = !(flags & VKD3D_IMAGE_FLAG_NO_LOAD);
    sampled = flags & VKD3D_IMAGE_FLAG_SAMPLED;
    depth_comparison = flags & VKD3D_IMAGE_FLAG_DEPTH;

    if (resource_reg->type == VKD3DSPR_RESOURCE)
        symbol = vkd3d_dxbc_compiler_find_combined_sampler(compiler, resource_reg, sampler_reg);
    if (!symbol)
        symbol = vkd3d_dxbc_compiler_find_resource(compiler, resource_reg);

    image->id = symbol->id;
    image->sampled_type = symbol->info.resource.sampled_type;
    image->image_type_id = symbol->info.resource.type_id;
    image->resource_type_info = symbol->info.resource.resource_type_info;
    image->structure_stride = symbol->info.resource.structure_stride;
    image->raw = symbol->info.resource.raw;

    if (symbol->type == VKD3D_SYMBOL_COMBINED_SAMPLER)
    {
        sampled_image_type_id = vkd3d_spirv_get_op_type_sampled_image(builder, image->image_type_id);
        image->sampled_image_id = vkd3d_spirv_build_op_load(builder,
                sampled_image_type_id, image->id, SpvMemoryAccessMaskNone);
        image->image_id = !sampled ? vkd3d_spirv_build_op_image(builder,
                image->image_type_id, image->sampled_image_id) : 0;
        return;
    }

    image->image_id = load ? vkd3d_spirv_build_op_load(builder,
            image->image_type_id, image->id, SpvMemoryAccessMaskNone) : 0;

    image->image_type_id = vkd3d_dxbc_compiler_get_image_type_id(compiler,
            resource_reg, image->resource_type_info, image->sampled_type,
            image->structure_stride || image->raw, depth_comparison);

    if (sampled)
    {
        assert(image->image_id);
        assert(sampler_reg);

        sampler_var_id = vkd3d_dxbc_compiler_get_register_id(compiler, sampler_reg);

        sampler_id = vkd3d_spirv_build_op_load(builder,
                vkd3d_spirv_get_op_type_sampler(builder), sampler_var_id, SpvMemoryAccessMaskNone);
        sampled_image_type_id = vkd3d_spirv_get_op_type_sampled_image(builder, image->image_type_id);
        image->sampled_image_id = vkd3d_spirv_build_op_sampled_image(builder,
                sampled_image_type_id, image->image_id, sampler_id);
    }
    else
    {
        image->sampled_image_id = 0;
    }
}

static uint32_t vkd3d_dxbc_compiler_emit_texel_offset(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction,
        const struct vkd3d_spirv_resource_type *resource_type_info)
{
    const struct vkd3d_shader_texel_offset *offset = &instruction->texel_offset;
    unsigned int component_count = resource_type_info->offset_component_count;
    int32_t data[4] = {offset->u, offset->v, offset->w, 0};
    return vkd3d_dxbc_compiler_get_constant(compiler,
            VKD3D_TYPE_INT, component_count, (const uint32_t *)data);
}

static void vkd3d_dxbc_compiler_emit_ld(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t type_id, coordinate_id, val_id;
    SpvImageOperandsMask operands_mask = 0;
    unsigned int image_operand_count = 0;
    struct vkd3d_shader_image image;
    uint32_t image_operands[2];
    DWORD coordinate_mask;
    bool multisample;

    multisample = instruction->handler_idx == VKD3DSIH_LD2DMS;

    vkd3d_dxbc_compiler_prepare_image(compiler, &image, &src[1].reg, NULL, VKD3D_IMAGE_FLAG_NONE);

    type_id = vkd3d_spirv_get_type_id(builder, image.sampled_type, VKD3D_VEC4_SIZE);
    coordinate_mask = (1u << image.resource_type_info->coordinate_component_count) - 1;
    coordinate_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], coordinate_mask);
    if (image.resource_type_info->resource_type != VKD3D_SHADER_RESOURCE_BUFFER && !multisample)
    {
        operands_mask |= SpvImageOperandsLodMask;
        image_operands[image_operand_count++] = vkd3d_dxbc_compiler_emit_load_src(compiler,
                &src[0], VKD3DSP_WRITEMASK_3);
    }
    if (vkd3d_shader_instruction_has_texel_offset(instruction))
    {
        operands_mask |= SpvImageOperandsConstOffsetMask;
        image_operands[image_operand_count++] = vkd3d_dxbc_compiler_emit_texel_offset(compiler,
                instruction, image.resource_type_info);
    }
    if (multisample)
    {
        operands_mask |= SpvImageOperandsSampleMask;
        image_operands[image_operand_count++] = vkd3d_dxbc_compiler_emit_load_src(compiler,
                &src[2], VKD3DSP_WRITEMASK_0);
    }
    assert(image_operand_count <= ARRAY_SIZE(image_operands));
    val_id = vkd3d_spirv_build_op_image_fetch(builder, type_id,
            image.image_id, coordinate_id, operands_mask, image_operands, image_operand_count);

    vkd3d_dxbc_compiler_emit_store_dst_swizzled(compiler,
            dst, val_id, image.sampled_type, src[1].swizzle);
}

static void vkd3d_dxbc_compiler_emit_lod(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    const struct vkd3d_shader_src_param *resource, *sampler;
    uint32_t type_id, coordinate_id, val_id;
    struct vkd3d_shader_image image;

    vkd3d_spirv_enable_capability(builder, SpvCapabilityImageQuery);

    resource = &src[1];
    sampler = &src[2];
    vkd3d_dxbc_compiler_prepare_image(compiler, &image,
            &resource->reg, &sampler->reg, VKD3D_IMAGE_FLAG_SAMPLED);

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, 2);
    coordinate_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], VKD3DSP_WRITEMASK_ALL);
    val_id = vkd3d_spirv_build_op_image_query_lod(builder,
            type_id, image.sampled_image_id, coordinate_id);

    vkd3d_dxbc_compiler_emit_store_dst_swizzled(compiler,
            dst, val_id, image.sampled_type, resource->swizzle);
}

static void vkd3d_dxbc_compiler_emit_sample(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    const struct vkd3d_shader_src_param *resource, *sampler;
    uint32_t sampled_type_id, coordinate_id, val_id;
    SpvImageOperandsMask operands_mask = 0;
    unsigned int image_operand_count = 0;
    struct vkd3d_shader_image image;
    uint32_t image_operands[3];
    DWORD coordinate_mask;
    SpvOp op;

    resource = &src[1];
    sampler = &src[2];
    vkd3d_dxbc_compiler_prepare_image(compiler, &image,
            &resource->reg, &sampler->reg, VKD3D_IMAGE_FLAG_SAMPLED);

    switch (instruction->handler_idx)
    {
        case VKD3DSIH_SAMPLE:
            op = SpvOpImageSampleImplicitLod;
            break;
        case VKD3DSIH_SAMPLE_B:
            op = SpvOpImageSampleImplicitLod;
            operands_mask |= SpvImageOperandsBiasMask;
            image_operands[image_operand_count++] = vkd3d_dxbc_compiler_emit_load_src(compiler,
                    &src[3], VKD3DSP_WRITEMASK_0);
            break;
        case VKD3DSIH_SAMPLE_GRAD:
            op = SpvOpImageSampleExplicitLod;
            operands_mask |= SpvImageOperandsGradMask;
            coordinate_mask = (1u << image.resource_type_info->offset_component_count) - 1;
            image_operands[image_operand_count++] = vkd3d_dxbc_compiler_emit_load_src(compiler,
                    &src[3], coordinate_mask);
            image_operands[image_operand_count++] = vkd3d_dxbc_compiler_emit_load_src(compiler,
                    &src[4], coordinate_mask);
            break;
        case VKD3DSIH_SAMPLE_LOD:
            op = SpvOpImageSampleExplicitLod;
            operands_mask |= SpvImageOperandsLodMask;
            image_operands[image_operand_count++] = vkd3d_dxbc_compiler_emit_load_src(compiler,
                    &src[3], VKD3DSP_WRITEMASK_0);
            break;
        default:
            ERR("Unexpected instruction %#x.\n", instruction->handler_idx);
            return;
    }

    if (vkd3d_shader_instruction_has_texel_offset(instruction))
    {
        operands_mask |= SpvImageOperandsConstOffsetMask;
        image_operands[image_operand_count++] = vkd3d_dxbc_compiler_emit_texel_offset(compiler,
                instruction, image.resource_type_info);
    }

    sampled_type_id = vkd3d_spirv_get_type_id(builder, image.sampled_type, VKD3D_VEC4_SIZE);
    coordinate_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], VKD3DSP_WRITEMASK_ALL);
    assert(image_operand_count <= ARRAY_SIZE(image_operands));
    val_id = vkd3d_spirv_build_op_image_sample(builder, op, sampled_type_id,
            image.sampled_image_id, coordinate_id, operands_mask, image_operands, image_operand_count);

    vkd3d_dxbc_compiler_emit_store_dst_swizzled(compiler,
            dst, val_id, image.sampled_type, resource->swizzle);
}

static void vkd3d_dxbc_compiler_emit_sample_c(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    uint32_t sampled_type_id, coordinate_id, dref_id, val_id, type_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    SpvImageOperandsMask operands_mask = 0;
    unsigned int image_operand_count = 0;
    struct vkd3d_shader_image image;
    uint32_t image_operands[1];
    SpvOp op;

    if (vkd3d_shader_instruction_has_texel_offset(instruction))
        FIXME("Texel offset not supported.\n");

    if (instruction->handler_idx == VKD3DSIH_SAMPLE_C_LZ)
    {
        op = SpvOpImageSampleDrefExplicitLod;
        operands_mask |= SpvImageOperandsLodMask;
        image_operands[image_operand_count++]
                = vkd3d_dxbc_compiler_get_constant_float(compiler, 0.0f);
    }
    else
    {
        op = SpvOpImageSampleDrefImplicitLod;
    }

    vkd3d_dxbc_compiler_prepare_image(compiler,
            &image, &src[1].reg, &src[2].reg, VKD3D_IMAGE_FLAG_SAMPLED | VKD3D_IMAGE_FLAG_DEPTH);
    sampled_type_id = vkd3d_spirv_get_type_id(builder, image.sampled_type, 1);
    coordinate_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], VKD3DSP_WRITEMASK_ALL);
    dref_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[3], VKD3DSP_WRITEMASK_0);
    /* XXX: Nvidia is broken and expects that the D_ref is packed together with coordinates. */
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE);
    coordinate_id = vkd3d_spirv_build_op_composite_insert1(builder,
            type_id, dref_id, coordinate_id, image.resource_type_info->coordinate_component_count);
    val_id = vkd3d_spirv_build_op_image_sample_dref(builder, op, sampled_type_id,
            image.sampled_image_id, coordinate_id, dref_id, operands_mask,
            image_operands, image_operand_count);

    vkd3d_dxbc_compiler_emit_store_dst_scalar(compiler,
            dst, val_id, image.sampled_type, src[1].swizzle);
}

static void vkd3d_dxbc_compiler_emit_gather4(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    const struct vkd3d_shader_src_param *addr, *offset, *resource, *sampler;
    uint32_t sampled_type_id, coordinate_id, component_id, dref_id, val_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    unsigned int image_flags = VKD3D_IMAGE_FLAG_SAMPLED;
    SpvImageOperandsMask operands_mask = 0;
    unsigned int image_operand_count = 0;
    struct vkd3d_shader_image image;
    unsigned int component_idx;
    uint32_t image_operands[1];
    DWORD coordinate_mask;
    bool extended_offset;

    if (instruction->handler_idx == VKD3DSIH_GATHER4_C
            || instruction->handler_idx == VKD3DSIH_GATHER4_PO_C)
        image_flags |= VKD3D_IMAGE_FLAG_DEPTH;

    extended_offset = instruction->handler_idx == VKD3DSIH_GATHER4_PO
            || instruction->handler_idx == VKD3DSIH_GATHER4_PO_C;

    addr = &src[0];
    offset = extended_offset ? &src[1] : NULL;
    resource = &src[1 + extended_offset];
    sampler = &src[2 + extended_offset];

    vkd3d_dxbc_compiler_prepare_image(compiler, &image,
            &resource->reg, &sampler->reg, image_flags);

    if (offset)
    {
        vkd3d_spirv_enable_capability(builder, SpvCapabilityImageGatherExtended);
        operands_mask |= SpvImageOperandsOffsetMask;
        image_operands[image_operand_count++] = vkd3d_dxbc_compiler_emit_load_src(compiler,
                offset, (1u << image.resource_type_info->offset_component_count) - 1);
    }
    else if (vkd3d_shader_instruction_has_texel_offset(instruction))
    {
        operands_mask |= SpvImageOperandsConstOffsetMask;
        image_operands[image_operand_count++] = vkd3d_dxbc_compiler_emit_texel_offset(compiler,
                instruction, image.resource_type_info);
    }

    sampled_type_id = vkd3d_spirv_get_type_id(builder, image.sampled_type, VKD3D_VEC4_SIZE);
    coordinate_mask = (1u << image.resource_type_info->coordinate_component_count) - 1;
    coordinate_id = vkd3d_dxbc_compiler_emit_load_src(compiler, addr, coordinate_mask);
    if (image_flags & VKD3D_IMAGE_FLAG_DEPTH)
    {
        dref_id = vkd3d_dxbc_compiler_emit_load_src(compiler,
                &src[3 + extended_offset], VKD3DSP_WRITEMASK_0);
        val_id = vkd3d_spirv_build_op_image_dref_gather(builder, sampled_type_id,
                image.sampled_image_id, coordinate_id, dref_id,
                operands_mask, image_operands, image_operand_count);
    }
    else
    {
        component_idx = vkd3d_swizzle_get_component(sampler->swizzle, 0);
        /* Nvidia driver requires signed integer type. */
        component_id = vkd3d_dxbc_compiler_get_constant(compiler,
                VKD3D_TYPE_INT, 1, &component_idx);
        val_id = vkd3d_spirv_build_op_image_gather(builder, sampled_type_id,
                image.sampled_image_id, coordinate_id, component_id,
                operands_mask, image_operands, image_operand_count);
    }

    vkd3d_dxbc_compiler_emit_store_dst_swizzled(compiler,
            dst, val_id, image.sampled_type, resource->swizzle);
}

static uint32_t vkd3d_dxbc_compiler_emit_raw_structured_addressing(
        struct vkd3d_dxbc_compiler *compiler, uint32_t type_id, unsigned int stride,
        const struct vkd3d_shader_src_param *src0, DWORD src0_mask,
        const struct vkd3d_shader_src_param *src1, DWORD src1_mask)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_src_param *offset;
    uint32_t structure_id = 0, offset_id;
    DWORD offset_write_mask;

    if (stride)
    {
        structure_id = vkd3d_dxbc_compiler_emit_load_src(compiler, src0, src0_mask);
        structure_id = vkd3d_spirv_build_op_imul(builder, type_id,
                structure_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, stride));
    }
    offset = stride ? src1 : src0;
    offset_write_mask = stride ? src1_mask : src0_mask;

    offset_id = vkd3d_dxbc_compiler_emit_load_src(compiler, offset, offset_write_mask);
    offset_id = vkd3d_spirv_build_op_shift_right_logical(builder, type_id,
            offset_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, 2));

    if (structure_id)
        return vkd3d_spirv_build_op_iadd(builder, type_id, structure_id, offset_id);
    else
        return offset_id;
}

static void vkd3d_dxbc_compiler_emit_ld_raw_structured_srv_uav(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t coordinate_id, type_id, val_id, texel_type_id;
    const struct vkd3d_shader_src_param *resource;
    uint32_t base_coordinate_id, component_idx;
    uint32_t constituents[VKD3D_VEC4_SIZE];
    struct vkd3d_shader_image image;
    unsigned int i, j;
    SpvOp op;

    resource = &src[instruction->src_count - 1];

    if (resource->reg.type == VKD3DSPR_RESOURCE)
        op = SpvOpImageFetch;
    else
        op = SpvOpImageRead;

    vkd3d_dxbc_compiler_prepare_image(compiler, &image, &resource->reg, NULL, VKD3D_IMAGE_FLAG_NONE);

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    base_coordinate_id = vkd3d_dxbc_compiler_emit_raw_structured_addressing(compiler,
            type_id, image.structure_stride, &src[0], VKD3DSP_WRITEMASK_0, &src[1], VKD3DSP_WRITEMASK_0);

    texel_type_id = vkd3d_spirv_get_type_id(builder, image.sampled_type, VKD3D_VEC4_SIZE);
    assert(dst->write_mask & VKD3DSP_WRITEMASK_ALL);
    for (i = 0, j = 0; i < VKD3D_VEC4_SIZE; ++i)
    {
        if (!(dst->write_mask & (VKD3DSP_WRITEMASK_0 << i)))
            continue;

        component_idx = vkd3d_swizzle_get_component(resource->swizzle, i);
        coordinate_id = base_coordinate_id;
        if (component_idx)
            coordinate_id = vkd3d_spirv_build_op_iadd(builder, type_id,
                    coordinate_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, component_idx));

        val_id = vkd3d_spirv_build_op_tr2(builder, &builder->function_stream,
                op, texel_type_id, image.image_id, coordinate_id);
        constituents[j++] = vkd3d_spirv_build_op_composite_extract1(builder,
                type_id, val_id, 0);
    }
    assert(dst->reg.data_type == VKD3D_DATA_UINT);
    vkd3d_dxbc_compiler_emit_store_dst_components(compiler, dst, VKD3D_TYPE_UINT, constituents);
}

static void vkd3d_dxbc_compiler_emit_ld_tgsm(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t coordinate_id, type_id, ptr_type_id, ptr_id;
    const struct vkd3d_shader_src_param *resource;
    struct vkd3d_shader_register_info reg_info;
    uint32_t base_coordinate_id, component_idx;
    uint32_t constituents[VKD3D_VEC4_SIZE];
    unsigned int i, j;

    resource = &src[instruction->src_count - 1];
    if (!vkd3d_dxbc_compiler_get_register_info(compiler, &resource->reg, &reg_info))
        return;

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, reg_info.storage_class, type_id);
    base_coordinate_id = vkd3d_dxbc_compiler_emit_raw_structured_addressing(compiler,
            type_id, reg_info.structure_stride, &src[0], VKD3DSP_WRITEMASK_0, &src[1], VKD3DSP_WRITEMASK_0);

    assert(dst->write_mask & VKD3DSP_WRITEMASK_ALL);
    for (i = 0, j = 0; i < VKD3D_VEC4_SIZE; ++i)
    {
        if (!(dst->write_mask & (VKD3DSP_WRITEMASK_0 << i)))
            continue;

        component_idx = vkd3d_swizzle_get_component(resource->swizzle, i);
        coordinate_id = base_coordinate_id;
        if (component_idx)
            coordinate_id = vkd3d_spirv_build_op_iadd(builder, type_id,
                    coordinate_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, component_idx));

        ptr_id = vkd3d_spirv_build_op_access_chain1(builder, ptr_type_id, reg_info.id, coordinate_id);
        constituents[j++] = vkd3d_spirv_build_op_load(builder, type_id, ptr_id, SpvMemoryAccessMaskNone);
    }
    assert(dst->reg.data_type == VKD3D_DATA_UINT);
    vkd3d_dxbc_compiler_emit_store_dst_components(compiler, dst, VKD3D_TYPE_UINT, constituents);
}

static void vkd3d_dxbc_compiler_emit_ld_raw_structured(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    enum vkd3d_shader_register_type reg_type = instruction->src[instruction->src_count - 1].reg.type;
    switch (reg_type)
    {
        case VKD3DSPR_RESOURCE:
        case VKD3DSPR_UAV:
            vkd3d_dxbc_compiler_emit_ld_raw_structured_srv_uav(compiler, instruction);
            break;
        case VKD3DSPR_GROUPSHAREDMEM:
            vkd3d_dxbc_compiler_emit_ld_tgsm(compiler, instruction);
            break;
        default:
            ERR("Unexpected register type %#x.\n", reg_type);
    }
}

static void vkd3d_dxbc_compiler_emit_store_uav_raw_structured(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t coordinate_id, type_id, val_id, texel_id;
    const struct vkd3d_shader_src_param *texel;
    uint32_t base_coordinate_id, component_idx;
    struct vkd3d_shader_image image;
    unsigned int component_count;

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    vkd3d_dxbc_compiler_prepare_image(compiler, &image, &dst->reg, NULL, VKD3D_IMAGE_FLAG_NONE);
    assert((instruction->handler_idx == VKD3DSIH_STORE_STRUCTURED) != !image.structure_stride);
    base_coordinate_id = vkd3d_dxbc_compiler_emit_raw_structured_addressing(compiler,
            type_id, image.structure_stride, &src[0], VKD3DSP_WRITEMASK_0, &src[1], VKD3DSP_WRITEMASK_0);

    texel = &src[instruction->src_count - 1];
    assert(texel->reg.data_type == VKD3D_DATA_UINT);
    val_id = vkd3d_dxbc_compiler_emit_load_src(compiler, texel, dst->write_mask);

    component_count = vkd3d_write_mask_component_count(dst->write_mask);
    for (component_idx = 0; component_idx < component_count; ++component_idx)
    {
        /* Mesa Vulkan drivers require the texel parameter to be a vector. */
        texel_id = vkd3d_dxbc_compiler_emit_construct_vector(compiler,
                VKD3D_TYPE_UINT, VKD3D_VEC4_SIZE, val_id, component_idx, component_count);

        coordinate_id = base_coordinate_id;
        if (component_idx)
            coordinate_id = vkd3d_spirv_build_op_iadd(builder, type_id,
                    coordinate_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, component_idx));

        vkd3d_spirv_build_op_image_write(builder, image.image_id, coordinate_id,
                texel_id, SpvImageOperandsMaskNone, NULL, 0);
    }
}

static void vkd3d_dxbc_compiler_emit_store_tgsm(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    uint32_t coordinate_id, type_id, val_id, ptr_type_id, ptr_id, data_id;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t base_coordinate_id, component_idx;
    const struct vkd3d_shader_src_param *data;
    struct vkd3d_shader_register_info reg_info;
    unsigned int component_count;

    if (!vkd3d_dxbc_compiler_get_register_info(compiler, &dst->reg, &reg_info))
        return;

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, reg_info.storage_class, type_id);
    assert((instruction->handler_idx == VKD3DSIH_STORE_STRUCTURED) != !reg_info.structure_stride);
    base_coordinate_id = vkd3d_dxbc_compiler_emit_raw_structured_addressing(compiler,
            type_id, reg_info.structure_stride, &src[0], VKD3DSP_WRITEMASK_0, &src[1], VKD3DSP_WRITEMASK_0);

    data = &src[instruction->src_count - 1];
    assert(data->reg.data_type == VKD3D_DATA_UINT);
    val_id = vkd3d_dxbc_compiler_emit_load_src(compiler, data, dst->write_mask);

    component_count = vkd3d_write_mask_component_count(dst->write_mask);
    for (component_idx = 0; component_idx < component_count; ++component_idx)
    {
        data_id = component_count > 1 ?
                vkd3d_spirv_build_op_composite_extract1(builder, type_id, val_id, component_idx) : val_id;

        coordinate_id = base_coordinate_id;
        if (component_idx)
            coordinate_id = vkd3d_spirv_build_op_iadd(builder, type_id,
                    coordinate_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, component_idx));

        ptr_id = vkd3d_spirv_build_op_access_chain1(builder, ptr_type_id, reg_info.id, coordinate_id);
        vkd3d_spirv_build_op_store(builder, ptr_id, data_id, SpvMemoryAccessMaskNone);
    }
}

static void vkd3d_dxbc_compiler_emit_store_raw_structured(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    enum vkd3d_shader_register_type reg_type = instruction->dst[0].reg.type;
    switch (reg_type)
    {
        case VKD3DSPR_UAV:
            vkd3d_dxbc_compiler_emit_store_uav_raw_structured(compiler, instruction);
            break;
        case VKD3DSPR_GROUPSHAREDMEM:
            vkd3d_dxbc_compiler_emit_store_tgsm(compiler, instruction);
            break;
        default:
            ERR("Unexpected register type %#x.\n", reg_type);
    }
}

static void vkd3d_dxbc_compiler_emit_ld_uav_typed(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t coordinate_id, type_id, val_id;
    struct vkd3d_shader_image image;
    DWORD coordinate_mask;

    vkd3d_dxbc_compiler_prepare_image(compiler, &image, &src[1].reg, NULL, VKD3D_IMAGE_FLAG_NONE);
    type_id = vkd3d_spirv_get_type_id(builder, image.sampled_type, VKD3D_VEC4_SIZE);
    coordinate_mask = (1u << image.resource_type_info->coordinate_component_count) - 1;
    coordinate_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], coordinate_mask);

    val_id = vkd3d_spirv_build_op_image_read(builder, type_id,
            image.image_id, coordinate_id, SpvImageOperandsMaskNone, NULL, 0);

    vkd3d_dxbc_compiler_emit_store_dst_swizzled(compiler,
            dst, val_id, image.sampled_type, src[1].swizzle);
}

static void vkd3d_dxbc_compiler_emit_store_uav_typed(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t coordinate_id, texel_id;
    struct vkd3d_shader_image image;
    DWORD coordinate_mask;

    vkd3d_spirv_enable_capability(builder, SpvCapabilityStorageImageWriteWithoutFormat);

    vkd3d_dxbc_compiler_prepare_image(compiler, &image, &dst->reg, NULL, VKD3D_IMAGE_FLAG_NONE);
    coordinate_mask = (1u << image.resource_type_info->coordinate_component_count) - 1;
    coordinate_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], coordinate_mask);
    texel_id = vkd3d_dxbc_compiler_emit_load_src_with_type(compiler, &src[1], dst->write_mask, image.sampled_type);

    vkd3d_spirv_build_op_image_write(builder, image.image_id, coordinate_id, texel_id,
            SpvImageOperandsMaskNone, NULL, 0);
}

static void vkd3d_dxbc_compiler_emit_uav_counter_instruction(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    unsigned int memory_semantics = SpvMemorySemanticsMaskNone;
    uint32_t ptr_type_id, type_id, counter_id, result_id;
    uint32_t coordinate_id, sample_id, pointer_id;
    const struct vkd3d_symbol *resource_symbol;
    uint32_t operands[3];
    SpvOp op;

    op = instruction->handler_idx == VKD3DSIH_IMM_ATOMIC_ALLOC
            ? SpvOpAtomicIIncrement : SpvOpAtomicIDecrement;

    resource_symbol = vkd3d_dxbc_compiler_find_resource(compiler, &src->reg);
    counter_id = resource_symbol->info.resource.uav_counter_id;
    assert(counter_id);

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    if (vkd3d_dxbc_compiler_is_opengl_target(compiler))
    {
        pointer_id = counter_id;
        memory_semantics |= SpvMemorySemanticsAtomicCounterMemoryMask;
    }
    else
    {
        ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassImage, type_id);
        coordinate_id = sample_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, 0);
        pointer_id = vkd3d_spirv_build_op_image_texel_pointer(builder,
                ptr_type_id, counter_id, coordinate_id, sample_id);
    }

    operands[0] = pointer_id;
    operands[1] = vkd3d_dxbc_compiler_get_constant_uint(compiler, SpvScopeDevice);
    operands[2] = vkd3d_dxbc_compiler_get_constant_uint(compiler, memory_semantics);
    result_id = vkd3d_spirv_build_op_trv(builder, &builder->function_stream,
            op, type_id, operands, ARRAY_SIZE(operands));
    if (op == SpvOpAtomicIDecrement)
    {
        /* SpvOpAtomicIDecrement returns the original value. */
        result_id = vkd3d_spirv_build_op_isub(builder, type_id, result_id,
                vkd3d_dxbc_compiler_get_constant_uint(compiler, 1));
    }
    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, result_id);
}

static SpvOp vkd3d_dxbc_compiler_map_atomic_instruction(const struct vkd3d_shader_instruction *instruction)
{
    static const struct
    {
        enum VKD3D_SHADER_INSTRUCTION_HANDLER handler_idx;
        SpvOp spirv_op;
    }
    atomic_ops[] =
    {
        {VKD3DSIH_ATOMIC_AND,          SpvOpAtomicAnd},
        {VKD3DSIH_ATOMIC_CMP_STORE,    SpvOpAtomicCompareExchange},
        {VKD3DSIH_ATOMIC_IADD,         SpvOpAtomicIAdd},
        {VKD3DSIH_ATOMIC_IMAX,         SpvOpAtomicSMax},
        {VKD3DSIH_ATOMIC_IMIN,         SpvOpAtomicSMin},
        {VKD3DSIH_ATOMIC_OR,           SpvOpAtomicOr},
        {VKD3DSIH_ATOMIC_UMAX,         SpvOpAtomicUMax},
        {VKD3DSIH_ATOMIC_UMIN,         SpvOpAtomicUMin},
        {VKD3DSIH_ATOMIC_XOR,          SpvOpAtomicXor},
        {VKD3DSIH_IMM_ATOMIC_AND,      SpvOpAtomicAnd},
        {VKD3DSIH_IMM_ATOMIC_CMP_EXCH, SpvOpAtomicCompareExchange},
        {VKD3DSIH_IMM_ATOMIC_EXCH,     SpvOpAtomicExchange},
        {VKD3DSIH_IMM_ATOMIC_IADD,     SpvOpAtomicIAdd},
        {VKD3DSIH_IMM_ATOMIC_IMAX,     SpvOpAtomicSMax},
        {VKD3DSIH_IMM_ATOMIC_IMIN,     SpvOpAtomicSMin},
        {VKD3DSIH_IMM_ATOMIC_OR,       SpvOpAtomicOr},
        {VKD3DSIH_IMM_ATOMIC_UMAX,     SpvOpAtomicUMax},
        {VKD3DSIH_IMM_ATOMIC_UMIN,     SpvOpAtomicUMin},
        {VKD3DSIH_IMM_ATOMIC_XOR,      SpvOpAtomicXor},
    };
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(atomic_ops); ++i)
    {
        if (atomic_ops[i].handler_idx == instruction->handler_idx)
            return atomic_ops[i].spirv_op;
    }

    return SpvOpMax;
}

static bool is_imm_atomic_instruction(enum VKD3D_SHADER_INSTRUCTION_HANDLER handler_idx)
{
    return VKD3DSIH_IMM_ATOMIC_ALLOC <= handler_idx && handler_idx <= VKD3DSIH_IMM_ATOMIC_XOR;
}

static void vkd3d_dxbc_compiler_emit_atomic_instruction(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t ptr_type_id, type_id, val_id, result_id;
    const struct vkd3d_shader_dst_param *resource;
    uint32_t coordinate_id, sample_id, pointer_id;
    struct vkd3d_shader_register_info reg_info;
    enum vkd3d_component_type component_type;
    struct vkd3d_shader_image image;
    unsigned int structure_stride;
    DWORD coordinate_mask;
    uint32_t operands[6];
    unsigned int i = 0;
    SpvScope scope;
    bool raw;
    SpvOp op;

    resource = is_imm_atomic_instruction(instruction->handler_idx) ? &dst[1] : &dst[0];

    op = vkd3d_dxbc_compiler_map_atomic_instruction(instruction);
    if (op == SpvOpMax)
    {
        ERR("Unexpected instruction %#x.\n", instruction->handler_idx);
        return;
    }

    if (resource->reg.type == VKD3DSPR_GROUPSHAREDMEM)
    {
        scope = SpvScopeWorkgroup;
        coordinate_mask = 1u;
        if (!vkd3d_dxbc_compiler_get_register_info(compiler, &resource->reg, &reg_info))
            return;
        structure_stride = reg_info.structure_stride;
        raw = !structure_stride;
    }
    else
    {
        scope = SpvScopeDevice;
        vkd3d_dxbc_compiler_prepare_image(compiler, &image, &resource->reg, NULL, VKD3D_IMAGE_FLAG_NO_LOAD);
        coordinate_mask = (1u << image.resource_type_info->coordinate_component_count) - 1;
        structure_stride = image.structure_stride;
        raw = image.raw;
    }

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    if (structure_stride || raw)
    {
        assert(!raw != !structure_stride);
        coordinate_id = vkd3d_dxbc_compiler_emit_raw_structured_addressing(compiler,
                type_id, structure_stride, &src[0], VKD3DSP_WRITEMASK_0,
                &src[0], VKD3DSP_WRITEMASK_1);
    }
    else
    {
        assert(resource->reg.type != VKD3DSPR_GROUPSHAREDMEM);
        coordinate_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], coordinate_mask);
    }

    if (resource->reg.type == VKD3DSPR_GROUPSHAREDMEM)
    {
        component_type = VKD3D_TYPE_UINT;
        ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, reg_info.storage_class, type_id);
        pointer_id = vkd3d_spirv_build_op_access_chain1(builder, ptr_type_id, reg_info.id, coordinate_id);
    }
    else
    {
        component_type = image.sampled_type;
        type_id = vkd3d_spirv_get_type_id(builder, image.sampled_type, 1);
        ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassImage, type_id);
        sample_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, 0);
        pointer_id = vkd3d_spirv_build_op_image_texel_pointer(builder,
                ptr_type_id, image.id, coordinate_id, sample_id);
    }

    val_id = vkd3d_dxbc_compiler_emit_load_src_with_type(compiler, &src[1], VKD3DSP_WRITEMASK_0, component_type);

    operands[i++] = pointer_id;
    operands[i++] = vkd3d_dxbc_compiler_get_constant_uint(compiler, scope);
    operands[i++] = vkd3d_dxbc_compiler_get_constant_uint(compiler, SpvMemorySemanticsMaskNone);
    if (instruction->src_count >= 3)
    {
        operands[i++] = vkd3d_dxbc_compiler_get_constant_uint(compiler, SpvMemorySemanticsMaskNone);
        operands[i++] = vkd3d_dxbc_compiler_emit_load_src_with_type(compiler, &src[2], VKD3DSP_WRITEMASK_0, component_type);
    }
    operands[i++] = val_id;
    result_id = vkd3d_spirv_build_op_trv(builder, &builder->function_stream,
            op, type_id, operands, i);

    if (is_imm_atomic_instruction(instruction->handler_idx))
        vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, result_id);
}

static void vkd3d_dxbc_compiler_emit_bufinfo(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t type_id, val_id, stride_id;
    struct vkd3d_shader_image image;
    uint32_t constituents[2];
    unsigned int write_mask;

    vkd3d_spirv_enable_capability(builder, SpvCapabilityImageQuery);

    vkd3d_dxbc_compiler_prepare_image(compiler, &image, &src->reg, NULL, VKD3D_IMAGE_FLAG_NONE);

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    val_id = vkd3d_spirv_build_op_image_query_size(builder, type_id, image.image_id);
    write_mask = VKD3DSP_WRITEMASK_0;

    if (image.structure_stride)
    {
        stride_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, image.structure_stride);
        constituents[0] = vkd3d_spirv_build_op_udiv(builder, type_id, val_id, stride_id);
        constituents[1] = stride_id;
        type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, ARRAY_SIZE(constituents));
        val_id = vkd3d_spirv_build_op_composite_construct(builder,
                type_id, constituents, ARRAY_SIZE(constituents));
        write_mask |= VKD3DSP_WRITEMASK_1;
    }
    else if (image.raw)
    {
        val_id = vkd3d_spirv_build_op_shift_left_logical(builder, type_id,
                val_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, 2));
    }

    val_id = vkd3d_dxbc_compiler_emit_swizzle(compiler,
            val_id, write_mask, VKD3D_TYPE_UINT, src->swizzle, dst->write_mask);
    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

static void vkd3d_dxbc_compiler_emit_resinfo(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t type_id, lod_id, val_id, miplevel_count_id;
    uint32_t constituents[VKD3D_VEC4_SIZE];
    unsigned int i, size_component_count;
    struct vkd3d_shader_image image;
    bool supports_mipmaps;

    vkd3d_spirv_enable_capability(builder, SpvCapabilityImageQuery);

    vkd3d_dxbc_compiler_prepare_image(compiler, &image, &src[1].reg, NULL, VKD3D_IMAGE_FLAG_NONE);
    size_component_count = image.resource_type_info->coordinate_component_count;
    if (image.resource_type_info->dim == SpvDimCube)
        --size_component_count;
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, size_component_count);

    supports_mipmaps = src[1].reg.type != VKD3DSPR_UAV && !image.resource_type_info->ms;
    if (supports_mipmaps)
    {
        lod_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[0], VKD3DSP_WRITEMASK_0);
        val_id = vkd3d_spirv_build_op_image_query_size_lod(builder, type_id, image.image_id, lod_id);
        type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
        miplevel_count_id = vkd3d_spirv_build_op_image_query_levels(builder, type_id, image.image_id);
    }
    else
    {
        val_id = vkd3d_spirv_build_op_image_query_size(builder, type_id, image.image_id);
        /* For UAVs the returned miplevel count is always 1. */
        miplevel_count_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, 1);
    }

    constituents[0] = val_id;
    for (i = 0; i < 3 - size_component_count; ++i)
        constituents[i + 1] = vkd3d_dxbc_compiler_get_constant_uint(compiler, 0);
    constituents[i + 1] = miplevel_count_id;
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, VKD3D_VEC4_SIZE);
    val_id = vkd3d_spirv_build_op_composite_construct(builder,
            type_id, constituents, i + 2);

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE);
    if (instruction->flags == VKD3DSI_RESINFO_UINT)
    {
        val_id = vkd3d_spirv_build_op_bitcast(builder, type_id, val_id);
    }
    else
    {
        if (instruction->flags)
            FIXME("Unhandled flags %#x.\n", instruction->flags);
        val_id = vkd3d_spirv_build_op_convert_utof(builder, type_id, val_id);
    }
    val_id = vkd3d_dxbc_compiler_emit_swizzle(compiler,
            val_id, VKD3DSP_WRITEMASK_ALL, VKD3D_TYPE_FLOAT, src[1].swizzle, dst->write_mask);

    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

static uint32_t vkd3d_dxbc_compiler_emit_query_sample_count(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_src_param *src)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    struct vkd3d_shader_image image;
    uint32_t type_id, val_id;

    if (src->reg.type == VKD3DSPR_RASTERIZER)
    {
        val_id = vkd3d_dxbc_compiler_emit_uint_shader_parameter(compiler,
                VKD3D_SHADER_PARAMETER_NAME_RASTERIZER_SAMPLE_COUNT);
    }
    else
    {
        vkd3d_spirv_enable_capability(builder, SpvCapabilityImageQuery);

        vkd3d_dxbc_compiler_prepare_image(compiler, &image, &src->reg, NULL, VKD3D_IMAGE_FLAG_NONE);
        type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
        val_id = vkd3d_spirv_build_op_image_query_samples(builder, type_id, image.image_id);
    }

    return val_id;
}

static void vkd3d_dxbc_compiler_emit_sample_info(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    uint32_t constituents[VKD3D_VEC4_SIZE];
    uint32_t type_id, val_id;
    unsigned int i;

    val_id = vkd3d_dxbc_compiler_emit_query_sample_count(compiler, src);

    constituents[0] = val_id;
    for (i = 1; i < VKD3D_VEC4_SIZE; ++i)
        constituents[i] = vkd3d_dxbc_compiler_get_constant_uint(compiler, 0);
    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, VKD3D_VEC4_SIZE);
    val_id = vkd3d_spirv_build_op_composite_construct(builder, type_id, constituents, VKD3D_VEC4_SIZE);

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, VKD3D_VEC4_SIZE);
    if (instruction->flags == VKD3DSI_SAMPLE_INFO_UINT)
    {
        val_id = vkd3d_spirv_build_op_bitcast(builder, type_id, val_id);
    }
    else
    {
        if (instruction->flags)
            FIXME("Unhandled flags %#x.\n", instruction->flags);
        val_id = vkd3d_spirv_build_op_convert_utof(builder, type_id, val_id);
    }

    val_id = vkd3d_dxbc_compiler_emit_swizzle(compiler,
            val_id, VKD3DSP_WRITEMASK_ALL, VKD3D_TYPE_FLOAT, src->swizzle, dst->write_mask);

    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

/* XXX: This is correct only when standard sample positions are used. */
static void vkd3d_dxbc_compiler_emit_sample_position(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    /* Standard sample locations from the Vulkan spec. */
    static const float standard_sample_positions[][2] =
    {
        /* 1 sample */
        { 0.0 / 16.0,  0.0 / 16.0},
        /* 2 samples */
        { 4.0 / 16.0,  4.0 / 16.0},
        {-4.0 / 16.0, -4.0 / 16.0},
        /* 4 samples */
        {-2.0 / 16.0, -6.0 / 16.0},
        { 6.0 / 16.0, -2.0 / 16.0},
        {-6.0 / 16.0,  2.0 / 16.0},
        { 2.0 / 16.0,  6.0 / 16.0},
        /* 8 samples */
        { 1.0 / 16.0, -3.0 / 16.0},
        {-1.0 / 16.0,  3.0 / 16.0},
        { 5.0 / 16.0,  1.0 / 16.0},
        {-3.0 / 16.0, -5.0 / 16.0},
        {-5.0 / 16.0,  5.0 / 16.0},
        {-7.0 / 16.0, -1.0 / 16.0},
        { 3.0 / 16.0,  7.0 / 16.0},
        { 7.0 / 16.0, -7.0 / 16.0},
        /* 16 samples */
        { 1.0 / 16.0,  1.0 / 16.0},
        {-1.0 / 16.0, -3.0 / 16.0},
        {-3.0 / 16.0,  2.0 / 16.0},
        { 4.0 / 16.0, -1.0 / 16.0},
        {-5.0 / 16.0, -2.0 / 16.0},
        { 2.0 / 16.0,  5.0 / 16.0},
        { 5.0 / 16.0,  3.0 / 16.0},
        { 3.0 / 16.0, -5.0 / 16.0},
        {-2.0 / 16.0,  6.0 / 16.0},
        { 0.0 / 16.0, -7.0 / 16.0},
        {-4.0 / 16.0, -6.0 / 16.0},
        {-6.0 / 16.0,  4.0 / 16.0},
        {-8.0 / 16.0,  0.0 / 16.0},
        { 7.0 / 16.0, -4.0 / 16.0},
        { 6.0 / 16.0,  7.0 / 16.0},
        {-7.0 / 16.0, -8.0 / 16.0},
    };
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    uint32_t constituents[ARRAY_SIZE(standard_sample_positions)];
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    uint32_t array_type_id, length_id, index_id, id;
    uint32_t sample_count_id, sample_index_id;
    uint32_t type_id, bool_id, ptr_type_id;
    unsigned int i;

    sample_count_id = vkd3d_dxbc_compiler_emit_query_sample_count(compiler, &instruction->src[0]);
    sample_index_id = vkd3d_dxbc_compiler_emit_load_src(compiler, &instruction->src[1], VKD3DSP_WRITEMASK_0);

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_UINT, 1);
    index_id = vkd3d_spirv_build_op_iadd(builder, type_id, sample_count_id, sample_index_id);
    index_id = vkd3d_spirv_build_op_isub(builder,
            type_id, index_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, 1));

    /* Validate sample index. */
    bool_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_BOOL, 1);
    id = vkd3d_spirv_build_op_logical_and(builder, bool_id,
            vkd3d_spirv_build_op_uless_than(builder, bool_id, sample_index_id, sample_count_id),
            vkd3d_spirv_build_op_uless_than_equal(builder,
                    bool_id, sample_index_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, 16)));
    index_id = vkd3d_spirv_build_op_select(builder, type_id,
            id, index_id, vkd3d_dxbc_compiler_get_constant_uint(compiler, 0));

    type_id = vkd3d_spirv_get_type_id(builder, VKD3D_TYPE_FLOAT, 2);
    if (!(id = compiler->sample_positions_id))
    {
        length_id = vkd3d_dxbc_compiler_get_constant_uint(compiler, ARRAY_SIZE(standard_sample_positions));
        array_type_id = vkd3d_spirv_get_op_type_array(builder, type_id, length_id);

        for (i = 0; i < ARRAY_SIZE(standard_sample_positions); ++ i)
        {
            constituents[i] = vkd3d_dxbc_compiler_get_constant(compiler,
                    VKD3D_TYPE_FLOAT, 2, (const uint32_t *)standard_sample_positions[i]);
        }

        id = vkd3d_spirv_build_op_constant_composite(builder, array_type_id, constituents, ARRAY_SIZE(constituents));
        ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassPrivate, array_type_id);
        id = vkd3d_spirv_build_op_variable(builder, &builder->global_stream, ptr_type_id, SpvStorageClassPrivate, id);
        vkd3d_spirv_build_op_name(builder, id, "sample_pos");
        compiler->sample_positions_id = id;
    }

    ptr_type_id = vkd3d_spirv_get_op_type_pointer(builder, SpvStorageClassPrivate, type_id);
    id = vkd3d_spirv_build_op_in_bounds_access_chain1(builder, ptr_type_id, id, index_id);
    id = vkd3d_spirv_build_op_load(builder, type_id, id, SpvMemoryAccessMaskNone);

    id = vkd3d_dxbc_compiler_emit_swizzle(compiler,
            id, VKD3DSP_WRITEMASK_0 | VKD3DSP_WRITEMASK_1, VKD3D_TYPE_FLOAT,
            instruction->src[0].swizzle, dst->write_mask);
    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, id);
}

static void vkd3d_dxbc_compiler_emit_eval_attrib(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_dst_param *dst = instruction->dst;
    const struct vkd3d_shader_src_param *src = instruction->src;
    const struct vkd3d_shader_register *input = &src[0].reg;
    uint32_t instr_set_id, type_id, val_id, src_ids[2];
    struct vkd3d_shader_register_info register_info;
    unsigned int src_count = 0;
    enum GLSLstd450 op;

    if (!vkd3d_dxbc_compiler_get_register_info(compiler, input, &register_info))
        return;

    if (register_info.storage_class != SpvStorageClassInput)
    {
        FIXME("Not supported for storage class %#x.\n", register_info.storage_class);
        return;
    }

    vkd3d_spirv_enable_capability(builder, SpvCapabilityInterpolationFunction);

    src_ids[src_count++] = register_info.id;

    if (instruction->handler_idx == VKD3DSIH_EVAL_CENTROID)
    {
        op = GLSLstd450InterpolateAtCentroid;
    }
    else
    {
        assert(instruction->handler_idx == VKD3DSIH_EVAL_SAMPLE_INDEX);
        op = GLSLstd450InterpolateAtSample;
        src_ids[src_count++] = vkd3d_dxbc_compiler_emit_load_src(compiler, &src[1], VKD3DSP_WRITEMASK_0);
    }

    type_id = vkd3d_spirv_get_type_id(builder,
            VKD3D_TYPE_FLOAT, vkd3d_write_mask_component_count(register_info.write_mask));

    instr_set_id = vkd3d_spirv_get_glsl_std450_instr_set(builder);
    val_id = vkd3d_spirv_build_op_ext_inst(builder, type_id, instr_set_id, op, src_ids, src_count);

    val_id = vkd3d_dxbc_compiler_emit_swizzle(compiler,
            val_id, register_info.write_mask, VKD3D_TYPE_FLOAT, src[0].swizzle, dst->write_mask);

    vkd3d_dxbc_compiler_emit_store_dst(compiler, dst, val_id);
}

/* From the Vulkan spec:
 *
 *   "Scope for execution must be limited to: * Workgroup * Subgroup"
 *
 *   "Scope for memory must be limited to: * Device * Workgroup * Invocation"
 */
static void vkd3d_dxbc_compiler_emit_sync(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    unsigned int memory_semantics = SpvMemorySemanticsAcquireReleaseMask;
    unsigned int flags = instruction->flags;
    SpvScope execution_scope = SpvScopeMax;
    SpvScope memory_scope = SpvScopeDevice;

    if (flags & VKD3DSSF_GROUP_SHARED_MEMORY)
    {
        memory_scope = SpvScopeWorkgroup;
        memory_semantics |= SpvMemorySemanticsWorkgroupMemoryMask;
        flags &= ~VKD3DSSF_GROUP_SHARED_MEMORY;
    }

    if (flags & VKD3DSSF_THREAD_GROUP)
    {
        execution_scope = SpvScopeWorkgroup;
        flags &= ~VKD3DSSF_THREAD_GROUP;
    }

    if (flags)
    {
        FIXME("Unhandled sync flags %#x.\n", flags);
        memory_scope = SpvScopeDevice;
        execution_scope = SpvScopeWorkgroup;
        memory_semantics |= SpvMemorySemanticsUniformMemoryMask
                | SpvMemorySemanticsSubgroupMemoryMask
                | SpvMemorySemanticsWorkgroupMemoryMask
                | SpvMemorySemanticsCrossWorkgroupMemoryMask
                | SpvMemorySemanticsAtomicCounterMemoryMask
                | SpvMemorySemanticsImageMemoryMask;
    }

    vkd3d_dxbc_compiler_emit_barrier(compiler, execution_scope, memory_scope, memory_semantics);
}

static void vkd3d_dxbc_compiler_emit_emit_stream(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    unsigned int stream_idx;

    if (instruction->handler_idx == VKD3DSIH_EMIT_STREAM)
        stream_idx = instruction->src[0].reg.idx[0].offset;
    else
        stream_idx = 0;

    if (stream_idx)
    {
        FIXME("Multiple streams are not supported yet.\n");
        return;
    }

    vkd3d_dxbc_compiler_emit_shader_epilogue_invocation(compiler);
    vkd3d_spirv_build_op_emit_vertex(builder);
}

static void vkd3d_dxbc_compiler_emit_cut_stream(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    unsigned int stream_idx;

    if (instruction->handler_idx == VKD3DSIH_CUT_STREAM)
        stream_idx = instruction->src[0].reg.idx[0].offset;
    else
        stream_idx = 0;

    if (stream_idx)
    {
        FIXME("Multiple streams are not supported yet.\n");
        return;
    }

    vkd3d_spirv_build_op_end_primitive(builder);
}

/* This function is called after declarations are processed. */
static void vkd3d_dxbc_compiler_emit_main_prolog(struct vkd3d_dxbc_compiler *compiler)
{
    vkd3d_dxbc_compiler_emit_push_constant_buffers(compiler);
}

static bool is_dcl_instruction(enum VKD3D_SHADER_INSTRUCTION_HANDLER handler_idx)
{
    return (VKD3DSIH_DCL <= handler_idx && handler_idx <= VKD3DSIH_DCL_VERTICES_OUT)
            || handler_idx == VKD3DSIH_HS_DECLS;
}

int vkd3d_dxbc_compiler_handle_instruction(struct vkd3d_dxbc_compiler *compiler,
        const struct vkd3d_shader_instruction *instruction)
{
    int ret = VKD3D_OK;

    if (!is_dcl_instruction(instruction->handler_idx) && !compiler->after_declarations_section)
    {
        compiler->after_declarations_section = true;
        vkd3d_dxbc_compiler_emit_main_prolog(compiler);
    }

    switch (instruction->handler_idx)
    {
        case VKD3DSIH_DCL_GLOBAL_FLAGS:
            vkd3d_dxbc_compiler_emit_dcl_global_flags(compiler, instruction);
            break;
        case VKD3DSIH_DCL_TEMPS:
            vkd3d_dxbc_compiler_emit_dcl_temps(compiler, instruction);
            break;
        case VKD3DSIH_DCL_INDEXABLE_TEMP:
            vkd3d_dxbc_compiler_emit_dcl_indexable_temp(compiler, instruction);
            break;
        case VKD3DSIH_DCL_CONSTANT_BUFFER:
            vkd3d_dxbc_compiler_emit_dcl_constant_buffer(compiler, instruction);
            break;
        case VKD3DSIH_DCL_IMMEDIATE_CONSTANT_BUFFER:
            vkd3d_dxbc_compiler_emit_dcl_immediate_constant_buffer(compiler, instruction);
            break;
        case VKD3DSIH_DCL_SAMPLER:
            vkd3d_dxbc_compiler_emit_dcl_sampler(compiler, instruction);
            break;
        case VKD3DSIH_DCL:
        case VKD3DSIH_DCL_UAV_TYPED:
            vkd3d_dxbc_compiler_emit_dcl_resource(compiler, instruction);
            break;
        case VKD3DSIH_DCL_RESOURCE_RAW:
        case VKD3DSIH_DCL_UAV_RAW:
            vkd3d_dxbc_compiler_emit_dcl_resource_raw(compiler, instruction);
            break;
        case VKD3DSIH_DCL_RESOURCE_STRUCTURED:
        case VKD3DSIH_DCL_UAV_STRUCTURED:
            vkd3d_dxbc_compiler_emit_dcl_resource_structured(compiler, instruction);
            break;
        case VKD3DSIH_DCL_TGSM_RAW:
            vkd3d_dxbc_compiler_emit_dcl_tgsm_raw(compiler, instruction);
            break;
        case VKD3DSIH_DCL_TGSM_STRUCTURED:
            vkd3d_dxbc_compiler_emit_dcl_tgsm_structured(compiler, instruction);
            break;
        case VKD3DSIH_DCL_INPUT:
            vkd3d_dxbc_compiler_emit_dcl_input(compiler, instruction);
            break;
        case VKD3DSIH_DCL_INPUT_PS:
            vkd3d_dxbc_compiler_emit_dcl_input_ps(compiler, instruction);
            break;
        case VKD3DSIH_DCL_INPUT_PS_SGV:
        case VKD3DSIH_DCL_INPUT_PS_SIV:
            vkd3d_dxbc_compiler_emit_dcl_input_ps_sysval(compiler, instruction);
            break;
        case VKD3DSIH_DCL_INPUT_SGV:
        case VKD3DSIH_DCL_INPUT_SIV:
            vkd3d_dxbc_compiler_emit_dcl_input_sysval(compiler, instruction);
            break;
        case VKD3DSIH_DCL_OUTPUT:
            vkd3d_dxbc_compiler_emit_dcl_output(compiler, instruction);
            break;
        case VKD3DSIH_DCL_OUTPUT_SIV:
            vkd3d_dxbc_compiler_emit_dcl_output_siv(compiler, instruction);
            break;
        case VKD3DSIH_DCL_INDEX_RANGE:
            vkd3d_dxbc_compiler_emit_dcl_index_range(compiler, instruction);
            break;
        case VKD3DSIH_DCL_STREAM:
            vkd3d_dxbc_compiler_emit_dcl_stream(compiler, instruction);
            break;
        case VKD3DSIH_DCL_VERTICES_OUT:
            vkd3d_dxbc_compiler_emit_output_vertex_count(compiler, instruction);
            break;
        case VKD3DSIH_DCL_INPUT_PRIMITIVE:
            vkd3d_dxbc_compiler_emit_dcl_input_primitive(compiler, instruction);
            break;
        case VKD3DSIH_DCL_OUTPUT_TOPOLOGY:
            vkd3d_dxbc_compiler_emit_dcl_output_topology(compiler, instruction);
            break;
        case VKD3DSIH_DCL_GS_INSTANCES:
            vkd3d_dxbc_compiler_emit_dcl_gs_instances(compiler, instruction);
            break;
        case VKD3DSIH_DCL_INPUT_CONTROL_POINT_COUNT:
            compiler->input_control_point_count = instruction->declaration.count;
            break;
        case VKD3DSIH_DCL_OUTPUT_CONTROL_POINT_COUNT:
            compiler->output_control_point_count = instruction->declaration.count;
            vkd3d_dxbc_compiler_emit_output_vertex_count(compiler, instruction);
            break;
        case VKD3DSIH_DCL_TESSELLATOR_DOMAIN:
            vkd3d_dxbc_compiler_emit_dcl_tessellator_domain(compiler, instruction);
            break;
        case VKD3DSIH_DCL_TESSELLATOR_OUTPUT_PRIMITIVE:
            vkd3d_dxbc_compiler_emit_tessellator_output_primitive(compiler,
                    instruction->declaration.tessellator_output_primitive);
            break;
        case VKD3DSIH_DCL_TESSELLATOR_PARTITIONING:
            vkd3d_dxbc_compiler_emit_tessellator_partitioning(compiler,
                    instruction->declaration.tessellator_partitioning);
            break;
        case VKD3DSIH_DCL_THREAD_GROUP:
            vkd3d_dxbc_compiler_emit_dcl_thread_group(compiler, instruction);
            break;
        case VKD3DSIH_DCL_HS_FORK_PHASE_INSTANCE_COUNT:
        case VKD3DSIH_DCL_HS_JOIN_PHASE_INSTANCE_COUNT:
            ret = vkd3d_dxbc_compiler_emit_shader_phase_instance_count(compiler, instruction);
            break;
        case VKD3DSIH_HS_CONTROL_POINT_PHASE:
        case VKD3DSIH_HS_FORK_PHASE:
        case VKD3DSIH_HS_JOIN_PHASE:
            vkd3d_dxbc_compiler_enter_shader_phase(compiler, instruction);
            break;
        case VKD3DSIH_MOV:
            vkd3d_dxbc_compiler_emit_mov(compiler, instruction);
            break;
        case VKD3DSIH_MOVC:
            vkd3d_dxbc_compiler_emit_movc(compiler, instruction);
            break;
        case VKD3DSIH_SWAPC:
            vkd3d_dxbc_compiler_emit_swapc(compiler, instruction);
            break;
        case VKD3DSIH_ADD:
        case VKD3DSIH_AND:
        case VKD3DSIH_BFREV:
        case VKD3DSIH_COUNTBITS:
        case VKD3DSIH_DIV:
        case VKD3DSIH_FTOI:
        case VKD3DSIH_FTOU:
        case VKD3DSIH_IADD:
        case VKD3DSIH_INEG:
        case VKD3DSIH_ISHL:
        case VKD3DSIH_ISHR:
        case VKD3DSIH_ITOF:
        case VKD3DSIH_MUL:
        case VKD3DSIH_NOT:
        case VKD3DSIH_OR:
        case VKD3DSIH_USHR:
        case VKD3DSIH_UTOF:
        case VKD3DSIH_XOR:
            vkd3d_dxbc_compiler_emit_alu_instruction(compiler, instruction);
            break;
        case VKD3DSIH_EXP:
        case VKD3DSIH_FIRSTBIT_HI:
        case VKD3DSIH_FIRSTBIT_LO:
        case VKD3DSIH_FIRSTBIT_SHI:
        case VKD3DSIH_FRC:
        case VKD3DSIH_IMAX:
        case VKD3DSIH_IMIN:
        case VKD3DSIH_LOG:
        case VKD3DSIH_MAD:
        case VKD3DSIH_MAX:
        case VKD3DSIH_MIN:
        case VKD3DSIH_ROUND_NE:
        case VKD3DSIH_ROUND_NI:
        case VKD3DSIH_ROUND_PI:
        case VKD3DSIH_ROUND_Z:
        case VKD3DSIH_RSQ:
        case VKD3DSIH_SQRT:
        case VKD3DSIH_UMAX:
        case VKD3DSIH_UMIN:
            vkd3d_dxbc_compiler_emit_ext_glsl_instruction(compiler, instruction);
            break;
        case VKD3DSIH_DP4:
        case VKD3DSIH_DP3:
        case VKD3DSIH_DP2:
            vkd3d_dxbc_compiler_emit_dot(compiler, instruction);
            break;
        case VKD3DSIH_RCP:
            vkd3d_dxbc_compiler_emit_rcp(compiler, instruction);
            break;
        case VKD3DSIH_SINCOS:
            vkd3d_dxbc_compiler_emit_sincos(compiler, instruction);
            break;
        case VKD3DSIH_IMUL:
            vkd3d_dxbc_compiler_emit_imul(compiler, instruction);
            break;
        case VKD3DSIH_IMAD:
            vkd3d_dxbc_compiler_emit_imad(compiler, instruction);
            break;
        case VKD3DSIH_UDIV:
            vkd3d_dxbc_compiler_emit_udiv(compiler, instruction);
            break;
        case VKD3DSIH_EQ:
        case VKD3DSIH_GE:
        case VKD3DSIH_IEQ:
        case VKD3DSIH_IGE:
        case VKD3DSIH_ILT:
        case VKD3DSIH_INE:
        case VKD3DSIH_LT:
        case VKD3DSIH_NE:
        case VKD3DSIH_UGE:
        case VKD3DSIH_ULT:
            vkd3d_dxbc_compiler_emit_comparison_instruction(compiler, instruction);
            break;
        case VKD3DSIH_BFI:
        case VKD3DSIH_IBFE:
        case VKD3DSIH_UBFE:
            vkd3d_dxbc_compiler_emit_bitfield_instruction(compiler, instruction);
            break;
        case VKD3DSIH_F16TOF32:
            vkd3d_dxbc_compiler_emit_f16tof32(compiler, instruction);
            break;
        case VKD3DSIH_F32TOF16:
            vkd3d_dxbc_compiler_emit_f32tof16(compiler, instruction);
            break;
        case VKD3DSIH_BREAK:
        case VKD3DSIH_BREAKP:
        case VKD3DSIH_CASE:
        case VKD3DSIH_CONTINUE:
        case VKD3DSIH_CONTINUEP:
        case VKD3DSIH_DEFAULT:
        case VKD3DSIH_ELSE:
        case VKD3DSIH_ENDIF:
        case VKD3DSIH_ENDLOOP:
        case VKD3DSIH_ENDSWITCH:
        case VKD3DSIH_IF:
        case VKD3DSIH_LOOP:
        case VKD3DSIH_RET:
        case VKD3DSIH_RETP:
        case VKD3DSIH_SWITCH:
        case VKD3DSIH_TEXKILL:
            ret = vkd3d_dxbc_compiler_emit_control_flow_instruction(compiler, instruction);
            break;
        case VKD3DSIH_DSX:
        case VKD3DSIH_DSX_COARSE:
        case VKD3DSIH_DSX_FINE:
        case VKD3DSIH_DSY:
        case VKD3DSIH_DSY_COARSE:
        case VKD3DSIH_DSY_FINE:
            vkd3d_dxbc_compiler_emit_deriv_instruction(compiler, instruction);
            break;
        case VKD3DSIH_LD2DMS:
        case VKD3DSIH_LD:
            vkd3d_dxbc_compiler_emit_ld(compiler, instruction);
            break;
        case VKD3DSIH_LOD:
            vkd3d_dxbc_compiler_emit_lod(compiler, instruction);
            break;
        case VKD3DSIH_SAMPLE:
        case VKD3DSIH_SAMPLE_B:
        case VKD3DSIH_SAMPLE_GRAD:
        case VKD3DSIH_SAMPLE_LOD:
            vkd3d_dxbc_compiler_emit_sample(compiler, instruction);
            break;
        case VKD3DSIH_SAMPLE_C:
        case VKD3DSIH_SAMPLE_C_LZ:
            vkd3d_dxbc_compiler_emit_sample_c(compiler, instruction);
            break;
        case VKD3DSIH_GATHER4:
        case VKD3DSIH_GATHER4_C:
        case VKD3DSIH_GATHER4_PO:
        case VKD3DSIH_GATHER4_PO_C:
            vkd3d_dxbc_compiler_emit_gather4(compiler, instruction);
            break;
        case VKD3DSIH_LD_RAW:
        case VKD3DSIH_LD_STRUCTURED:
            vkd3d_dxbc_compiler_emit_ld_raw_structured(compiler, instruction);
            break;
        case VKD3DSIH_STORE_RAW:
        case VKD3DSIH_STORE_STRUCTURED:
            vkd3d_dxbc_compiler_emit_store_raw_structured(compiler, instruction);
            break;
        case VKD3DSIH_LD_UAV_TYPED:
            vkd3d_dxbc_compiler_emit_ld_uav_typed(compiler, instruction);
            break;
        case VKD3DSIH_STORE_UAV_TYPED:
            vkd3d_dxbc_compiler_emit_store_uav_typed(compiler, instruction);
            break;
        case VKD3DSIH_IMM_ATOMIC_ALLOC:
        case VKD3DSIH_IMM_ATOMIC_CONSUME:
            vkd3d_dxbc_compiler_emit_uav_counter_instruction(compiler, instruction);
            break;
        case VKD3DSIH_ATOMIC_AND:
        case VKD3DSIH_ATOMIC_CMP_STORE:
        case VKD3DSIH_ATOMIC_IADD:
        case VKD3DSIH_ATOMIC_IMAX:
        case VKD3DSIH_ATOMIC_IMIN:
        case VKD3DSIH_ATOMIC_OR:
        case VKD3DSIH_ATOMIC_UMAX:
        case VKD3DSIH_ATOMIC_UMIN:
        case VKD3DSIH_ATOMIC_XOR:
        case VKD3DSIH_IMM_ATOMIC_AND:
        case VKD3DSIH_IMM_ATOMIC_CMP_EXCH:
        case VKD3DSIH_IMM_ATOMIC_EXCH:
        case VKD3DSIH_IMM_ATOMIC_IADD:
        case VKD3DSIH_IMM_ATOMIC_IMAX:
        case VKD3DSIH_IMM_ATOMIC_IMIN:
        case VKD3DSIH_IMM_ATOMIC_OR:
        case VKD3DSIH_IMM_ATOMIC_UMAX:
        case VKD3DSIH_IMM_ATOMIC_UMIN:
        case VKD3DSIH_IMM_ATOMIC_XOR:
            vkd3d_dxbc_compiler_emit_atomic_instruction(compiler, instruction);
            break;
        case VKD3DSIH_BUFINFO:
            vkd3d_dxbc_compiler_emit_bufinfo(compiler, instruction);
            break;
        case VKD3DSIH_RESINFO:
            vkd3d_dxbc_compiler_emit_resinfo(compiler, instruction);
            break;
        case VKD3DSIH_SAMPLE_INFO:
            vkd3d_dxbc_compiler_emit_sample_info(compiler, instruction);
            break;
        case VKD3DSIH_SAMPLE_POS:
            vkd3d_dxbc_compiler_emit_sample_position(compiler, instruction);
            break;
        case VKD3DSIH_EVAL_CENTROID:
        case VKD3DSIH_EVAL_SAMPLE_INDEX:
            vkd3d_dxbc_compiler_emit_eval_attrib(compiler, instruction);
            break;
        case VKD3DSIH_SYNC:
            vkd3d_dxbc_compiler_emit_sync(compiler, instruction);
            break;
        case VKD3DSIH_EMIT:
        case VKD3DSIH_EMIT_STREAM:
            vkd3d_dxbc_compiler_emit_emit_stream(compiler, instruction);
            break;
        case VKD3DSIH_CUT:
        case VKD3DSIH_CUT_STREAM:
            vkd3d_dxbc_compiler_emit_cut_stream(compiler, instruction);
            break;
        case VKD3DSIH_DCL_HS_MAX_TESSFACTOR:
        case VKD3DSIH_HS_DECLS:
        case VKD3DSIH_NOP:
            /* nothing to do */
            break;
        default:
            FIXME("Unhandled instruction %#x.\n", instruction->handler_idx);
    }

    return ret;
}

int vkd3d_dxbc_compiler_generate_spirv(struct vkd3d_dxbc_compiler *compiler,
        struct vkd3d_shader_code *spirv)
{
    const struct vkd3d_shader_compile_arguments *compile_args = compiler->compile_args;
    const struct vkd3d_shader_domain_shader_compile_arguments *ds_args;
    struct vkd3d_spirv_builder *builder = &compiler->spirv_builder;
    const struct vkd3d_shader_phase *phase;

    if ((phase = vkd3d_dxbc_compiler_get_current_shader_phase(compiler)))
        vkd3d_dxbc_compiler_leave_shader_phase(compiler, phase);
    else
        vkd3d_spirv_build_op_function_end(builder);

    if (compiler->shader_type == VKD3D_SHADER_TYPE_HULL)
        vkd3d_dxbc_compiler_emit_hull_shader_main(compiler);

    if (compiler->shader_type == VKD3D_SHADER_TYPE_DOMAIN)
    {
        if (compile_args && (ds_args = vkd3d_find_struct(compile_args->next, DOMAIN_SHADER_COMPILE_ARGUMENTS)))
        {
            vkd3d_dxbc_compiler_emit_tessellator_output_primitive(compiler, ds_args->output_primitive);
            vkd3d_dxbc_compiler_emit_tessellator_partitioning(compiler, ds_args->partitioning);
        }
        else if (vkd3d_dxbc_compiler_is_opengl_target(compiler))
        {
            ERR("vkd3d_shader_domain_shader_compile_arguments are required for "
                    "OpenGL tessellation evaluation shader.\n");
        }
    }

    if (compiler->epilogue_function_id)
    {
        vkd3d_spirv_build_op_name(builder, compiler->epilogue_function_id, "epilogue");
        vkd3d_dxbc_compiler_emit_shader_epilogue_function(compiler);
    }

    if (compiler->options & VKD3D_SHADER_STRIP_DEBUG)
        vkd3d_spirv_stream_clear(&builder->debug_stream);

    if (!vkd3d_spirv_compile_module(builder, spirv))
        return VKD3D_ERROR;

    if (TRACE_ON())
    {
        enum vkd3d_shader_target target = vkd3d_dxbc_compiler_get_target(compiler);
        vkd3d_spirv_dump(spirv, target);
        vkd3d_spirv_validate(spirv, target);
    }

    return VKD3D_OK;
}

void vkd3d_dxbc_compiler_destroy(struct vkd3d_dxbc_compiler *compiler)
{
    vkd3d_free(compiler->control_flow_info);

    vkd3d_free(compiler->output_info);

    vkd3d_free(compiler->push_constants);

    vkd3d_spirv_builder_free(&compiler->spirv_builder);

    rb_destroy(&compiler->symbol_table, vkd3d_symbol_free, NULL);

    vkd3d_free(compiler->shader_phases);
    vkd3d_free(compiler->spec_constants);

    vkd3d_free(compiler);
}
