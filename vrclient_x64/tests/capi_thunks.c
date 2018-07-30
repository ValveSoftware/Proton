#include "capi_thunks_autogen.h"

#include <assert.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_PARAMETERS 20

HmdRect2_t DEFAULT_RECT;
HmdVector2_t DEFAULT_VECTOR2;
HmdVector3_t DEFAULT_VECTOR3;
HmdColor_t DEFAULT_COLOR;

enum parameter_type
{
    PT_PTR,
    PT_BOOL,
    PT_FLOAT,
    PT_UINT32,
    PT_UINT64,
    PT_HMDRECT2,
    PT_HMDVECTOR2,
    PT_HMDVECTOR3,
    PT_HMDCOLOR,
};

struct parameter
{
    enum parameter_type pt;
    union
    {
        const void *ptr;
        bool b;
        float f;
        uint32_t u32;
        uint64_t u64;
        HmdRect2_t hmd_rect2;
        HmdVector2_t hmd_vector2;
        HmdVector3_t hmd_vector3;
        HmdColor_t hmd_color;
    } value;
};

static struct
{
    unsigned int parameter_index;
    unsigned int parameter_count;
    struct parameter parameters[MAX_PARAMETERS];
}
params;

void clear_parameters(void)
{
    memset(&params, 0, sizeof(params));
}

struct parameter *get_next_parameter(void)
{
    assert(params.parameter_count < MAX_PARAMETERS);
    return &params.parameters[params.parameter_count++];
}

struct parameter *get_pushed_parameter(void)
{
    assert(params.parameter_index < params.parameter_count);
    return &params.parameters[params.parameter_index++];
}

void push_ptr_parameter(const void *v)
{
    struct parameter *param = get_next_parameter();

    param->pt = PT_PTR;
    param->value.ptr = v;
}

void push_bool_parameter(bool b)
{
    struct parameter *param = get_next_parameter();

    param->pt = PT_BOOL;
    param->value.b = b;
}

void push_float_parameter(float f)
{
    struct parameter *param = get_next_parameter();

    param->pt = PT_FLOAT;
    param->value.f = f;
}

void push_uint32_parameter(uint32_t u)
{
    struct parameter *param = get_next_parameter();

    param->pt = PT_UINT32;
    param->value.u32 = u;
}

void push_uint64_parameter(uint64_t u)
{
    struct parameter *param = get_next_parameter();

    param->pt = PT_UINT64;
    param->value.u64 = u;
}

void push_HmdRect2_parameter(HmdRect2_t v)
{
    struct parameter *param = get_next_parameter();

    param->pt = PT_HMDRECT2;
    param->value.hmd_rect2 = v;
}

void push_HmdVector2_parameter(HmdVector2_t v)
{
    struct parameter *param = get_next_parameter();

    param->pt = PT_HMDVECTOR2;
    param->value.hmd_vector2 = v;
}

void push_HmdVector3_parameter(HmdVector3_t v)
{
    struct parameter *param = get_next_parameter();

    param->pt = PT_HMDVECTOR3;
    param->value.hmd_vector3 = v;

}

void push_HmdColor_parameter(HmdColor_t v)
{
    struct parameter *param = get_next_parameter();

    param->pt = PT_HMDCOLOR;
    param->value.hmd_color = v;
}

void check_ptr_parameter_(const char *file, unsigned int line, const char *name, const void *v)
{
    unsigned int i = params.parameter_index;
    struct parameter *param = get_pushed_parameter();

    if (param->pt != PT_PTR)
    {
        fprintf(stderr, "%s:%u, %s, %u: Invalid parameter type %#x.\n", file, line, name, i, param->pt);
        exit(-1);
    }

    if (param->value.ptr != v)
    {
        fprintf(stderr, "%s:%u, %s, %u: Got %p, expected %p.\n", file, line, name, i, param->value.ptr, v);
        exit(-1);
    }
}

void check_bool_parameter_(const char *file, unsigned int line, const char *name, bool b)
{
    unsigned int i = params.parameter_index;
    struct parameter *param = get_pushed_parameter();

    if (param->pt != PT_BOOL)
    {
        fprintf(stderr, "%s:%u, %s, %u: Invalid parameter type %#x.\n", file, line, name, i, param->pt);
        exit(-1);
    }

    if (param->value.b != b)
    {
        fprintf(stderr, "%s:%u, %s, %u: Got %#x, expected %#x.\n", file, line, name, i, param->value.b, b);
        exit(-1);
    }
}

void check_float_parameter_(const char *file, unsigned int line, const char *name, float f)
{
    unsigned int i = params.parameter_index;
    struct parameter *param = get_pushed_parameter();

    if (param->pt != PT_FLOAT)
    {
        fprintf(stderr, "%s:%u, %s, %u: Invalid parameter type %#x.\n", file, line, name, i, param->pt);
        exit(-1);
    }

    if (param->value.f != f)
    {
        fprintf(stderr, "%s:%u, %s, %u: Got %.8ex, expected %.8ex.\n", file, line, name, i, param->value.f, f);
        exit(-1);
    }
}

void check_uint32_parameter_(const char *file, unsigned int line, const char *name, uint32_t u)
{
    unsigned int i = params.parameter_index;
    struct parameter *param = get_pushed_parameter();

    if (param->pt != PT_UINT32)
    {
        fprintf(stderr, "%s:%u, %s, %u: Invalid parameter type %#x.\n", file, line, name, i, param->pt);
        exit(-1);
    }

    if (param->value.u32 != u)
    {
        fprintf(stderr, "%s:%u, %s, %u: Got %"PRIu32", expected %"PRIu32".\n",
                file, line, name, i, param->value.u32, u);
        exit(-1);
    }
}

void check_uint64_parameter_(const char *file, unsigned int line, const char *name, uint64_t u)
{
    unsigned int i = params.parameter_index;
    struct parameter *param = get_pushed_parameter();

    if (param->pt != PT_UINT64)
    {
        fprintf(stderr, "%s:%u, %s, %u: Invalid parameter type %#x.\n", file, line, name, i, param->pt);
        exit(-1);
    }

    if (param->value.u64 != u)
    {
        fprintf(stderr, "%s:%u, %s, %u: Got %"PRIu64", expected %"PRIu64".\n",
                file, line, name, i, param->value.u64, u);
        exit(-1);
    }
}

void check_HmdRect2_parameter_(const char *file, unsigned int line, const char *name, HmdRect2_t v)
{
    unsigned int i = params.parameter_index;
    struct parameter *param = get_pushed_parameter();

    if (param->pt != PT_HMDRECT2)
    {
        fprintf(stderr, "%s:%u, %s, %u: Invalid parameter type %#x.\n", file, line, name, i, param->pt);
        exit(-1);
    }

    fprintf(stderr, "TODO: compare HmdRect2\n");
}

void check_HmdVector2_parameter_(const char *file, unsigned int line, const char *name, HmdVector2_t v)
{
    unsigned int i = params.parameter_index;
    struct parameter *param = get_pushed_parameter();

    if (param->pt != PT_HMDVECTOR2)
    {
        fprintf(stderr, "%s:%u, %s, %u: Invalid parameter type %#x.\n", file, line, name, i, param->pt);
        exit(-1);
    }

    fprintf(stderr, "TODO: compare HmdVector2\n");
}

void check_HmdVector3_parameter_(const char *file, unsigned int line, const char *name, HmdVector3_t v)
{
    unsigned int i = params.parameter_index;
    struct parameter *param = get_pushed_parameter();

    if (param->pt != PT_HMDVECTOR3)
    {
        fprintf(stderr, "%s:%u, %s, %u: Invalid parameter type %#x.\n", file, line, name, i, param->pt);
        exit(-1);
    }

    fprintf(stderr, "TODO: compare HmdVector3\n");
}

void check_HmdColor_parameter_(const char *file, unsigned int line, const char *name, HmdColor_t v)
{
    unsigned int i = params.parameter_index;
    struct parameter *param = get_pushed_parameter();

    if (param->pt != PT_HMDCOLOR)
    {
        fprintf(stderr, "%s:%u, %s, %u: Invalid parameter type %#x.\n", file, line, name, i, param->pt);
        exit(-1);
    }

    fprintf(stderr, "TODO: compare HmdColor\n");
}
