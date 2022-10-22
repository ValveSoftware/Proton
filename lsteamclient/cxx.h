/*
 * Copyright 2012 Piotr Caban for CodeWeavers
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

#include "wine/asm.h"

#ifdef _WIN64

#define VTABLE_ADD_FUNC(name) "\t.quad " THISCALL_NAME(name) "\n"

#define __ASM_VTABLE(name,funcs) \
    __asm__(".data\n" \
            "\t.balign 8\n" \
            "\t.quad " __ASM_NAME(#name "_rtti") "\n" \
            "\t.globl " __ASM_NAME(#name "_vtable") "\n" \
            __ASM_NAME(#name "_vtable") ":\n" \
            funcs "\n\t.text")

#else

#define VTABLE_ADD_FUNC(name) "\t.long " THISCALL_NAME(name) "\n"

#define __ASM_VTABLE(name,funcs) \
    __asm__(".data\n" \
            "\t.balign 4\n" \
            "\t.long " __ASM_NAME(#name "_rtti") "\n" \
            "\t.globl " __ASM_NAME(#name "_vtable") "\n" \
            __ASM_NAME(#name "_vtable") ":\n" \
            funcs "\n\t.text")

#endif /* _WIN64 */

#ifndef __x86_64__

#define DEFINE_RTTI_BASE(name, base_classes_no, mangled_name) \
    static type_info name ## _type_info = { \
        &type_info_vtable, \
        NULL, \
        mangled_name \
    }; \
\
static const rtti_base_descriptor name ## _rtti_base_descriptor = { \
    &name ##_type_info, \
    base_classes_no, \
    { 0, -1, 0}, \
    64 \
};

#define DEFINE_RTTI_DATA(name, off, base_classes_no, cl1, cl2, cl3, cl4, cl5, cl6, cl7, cl8, cl9, mangled_name) \
    DEFINE_RTTI_BASE(name, base_classes_no, mangled_name) \
\
static const rtti_base_array name ## _rtti_base_array = { \
    { \
        &name ## _rtti_base_descriptor, \
        cl1, \
        cl2, \
        cl3, \
        cl4, \
        cl5, \
        cl6, \
        cl7, \
        cl8, \
        cl9, \
    } \
}; \
\
static const rtti_object_hierarchy name ## _hierarchy = { \
    0, \
    0, \
    base_classes_no+1, \
    &name ## _rtti_base_array \
}; \
\
const rtti_object_locator name ## _rtti = { \
    0, \
    off, \
    0, \
    &name ## _type_info, \
    &name ## _hierarchy \
};

#define DEFINE_CXX_TYPE_INFO(type) \
static const cxx_type_info type ## _cxx_type_info = { \
    0, \
    & type ##_type_info, \
    { 0, -1, 0 }, \
    sizeof(type), \
    (cxx_copy_ctor)THISCALL(type ##_copy_ctor) \
};

#define DEFINE_CXX_DATA(type, base_no, cl1, cl2, cl3, cl4, dtor)  \
DEFINE_CXX_TYPE_INFO(type) \
\
static const cxx_type_info_table type ## _cxx_type_table = { \
    base_no+1, \
    { \
        & type ## _cxx_type_info, \
        cl1, \
        cl2, \
        cl3, \
        cl4  \
    } \
}; \
\
static const cxx_exception_type type ## _cxx_type = { \
    0, \
    (cxx_copy_ctor)THISCALL(dtor), \
    NULL, \
    & type ## _cxx_type_table \
};

#else

#define __DEFINE_RTTI_BASE(name, base_classes_no, mangled_name) \
    static type_info name ## _type_info = { \
        &type_info_vtable, \
        NULL, \
        mangled_name \
    }; \
\
static rtti_base_descriptor name ## _rtti_base_descriptor = { \
    0xdeadbeef, \
    base_classes_no, \
    { 0, -1, 0}, \
    64 \
};

#define DEFINE_RTTI_BASE(name, base_classes_no, mangled_name) \
    __DEFINE_RTTI_BASE(name, base_classes_no, mangled_name) \
    \
    static void init_ ## name ## _rtti(char *base) \
    { \
        name ## _rtti_base_descriptor.type_descriptor = (char*)&name ## _type_info - base; \
    }

#define DEFINE_RTTI_DATA(name, off, base_classes_no, cl1, cl2, cl3, cl4, cl5, cl6, cl7, cl8, cl9, mangled_name) \
    __DEFINE_RTTI_BASE(name, base_classes_no, mangled_name) \
\
static rtti_base_array name ## _rtti_base_array = { \
    { \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef, \
    } \
}; \
\
static rtti_object_hierarchy name ## _hierarchy = { \
    0, \
    0, \
    base_classes_no+1, \
    0xdeadbeef \
}; \
\
rtti_object_locator name ## _rtti = { \
    1, \
    off, \
    0, \
    0xdeadbeef, \
    0xdeadbeef, \
    0xdeadbeef \
};\
\
static void init_ ## name ## _rtti(char *base) \
{ \
    name ## _rtti_base_descriptor.type_descriptor = (char*)&name ## _type_info - base; \
    name ## _rtti_base_array.bases[0] = (char*)&name ## _rtti_base_descriptor - base; \
    name ## _rtti_base_array.bases[1] = (char*)cl1 - base; \
    name ## _rtti_base_array.bases[2] = (char*)cl2 - base; \
    name ## _rtti_base_array.bases[3] = (char*)cl3 - base; \
    name ## _rtti_base_array.bases[4] = (char*)cl4 - base; \
    name ## _rtti_base_array.bases[5] = (char*)cl5 - base; \
    name ## _rtti_base_array.bases[6] = (char*)cl6 - base; \
    name ## _rtti_base_array.bases[7] = (char*)cl7 - base; \
    name ## _rtti_base_array.bases[8] = (char*)cl8 - base; \
    name ## _rtti_base_array.bases[9] = (char*)cl9 - base; \
    name ## _hierarchy.base_classes = (char*)&name ## _rtti_base_array - base; \
    name ## _rtti.type_descriptor = (char*)&name ## _type_info - base; \
    name ## _rtti.type_hierarchy = (char*)&name ## _hierarchy - base; \
    name ## _rtti.object_locator = (char*)&name ## _rtti - base; \
}

#define DEFINE_CXX_TYPE_INFO(type) \
static cxx_type_info type ## _cxx_type_info = { \
    0, \
    0xdeadbeef, \
    { 0, -1, 0 }, \
    sizeof(type), \
    0xdeadbeef \
}; \
\
static void init_ ## type ## _cxx_type_info(char *base) \
{ \
    type ## _cxx_type_info.type_info  = (char *)&type ## _type_info - base; \
    type ## _cxx_type_info.copy_ctor  = (char *)type ## _copy_ctor - base; \
}

#define DEFINE_CXX_DATA(type, base_no, cl1, cl2, cl3, cl4, dtor)  \
\
DEFINE_CXX_TYPE_INFO(type) \
\
static cxx_type_info_table type ## _cxx_type_table = { \
    base_no+1, \
    { \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef, \
        0xdeadbeef  \
    } \
}; \
\
static cxx_exception_type type ##_cxx_type = { \
    0, \
    0xdeadbeef, \
    0, \
    0xdeadbeef \
}; \
\
static void init_ ## type ## _cxx(char *base) \
{ \
    init_ ## type ## _cxx_type_info(base); \
    type ## _cxx_type_table.info[0]   = (char *)&type ## _cxx_type_info - base; \
    type ## _cxx_type_table.info[1]   = (char *)cl1 - base; \
    type ## _cxx_type_table.info[2]   = (char *)cl2 - base; \
    type ## _cxx_type_table.info[3]   = (char *)cl3 - base; \
    type ## _cxx_type_table.info[4]   = (char *)cl4 - base; \
    type ## _cxx_type.destructor      = (char *)dtor - base; \
    type ## _cxx_type.type_info_table = (char *)&type ## _cxx_type_table - base; \
}

#endif

#define DEFINE_RTTI_DATA0(name, off, mangled_name) \
    DEFINE_RTTI_DATA(name, off, 0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, mangled_name)
#define DEFINE_RTTI_DATA1(name, off, cl1, mangled_name) \
    DEFINE_RTTI_DATA(name, off, 1, cl1, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, mangled_name)
#define DEFINE_RTTI_DATA2(name, off, cl1, cl2, mangled_name) \
    DEFINE_RTTI_DATA(name, off, 2, cl1, cl2, NULL, NULL, NULL, NULL, NULL, NULL, NULL, mangled_name)
#define DEFINE_RTTI_DATA3(name, off, cl1, cl2, cl3, mangled_name) \
    DEFINE_RTTI_DATA(name, off, 3, cl1, cl2, cl3, NULL, NULL, NULL, NULL, NULL, NULL, mangled_name)
#define DEFINE_RTTI_DATA4(name, off, cl1, cl2, cl3, cl4, mangled_name) \
    DEFINE_RTTI_DATA(name, off, 4, cl1, cl2, cl3, cl4, NULL, NULL, NULL, NULL, NULL, mangled_name)
#define DEFINE_RTTI_DATA5(name, off, cl1, cl2, cl3, cl4, cl5, mangled_name) \
    DEFINE_RTTI_DATA(name, off, 5, cl1, cl2, cl3, cl4, cl5, NULL, NULL, NULL, NULL, mangled_name)
#define DEFINE_RTTI_DATA8(name, off, cl1, cl2, cl3, cl4, cl5, cl6, cl7, cl8, mangled_name) \
    DEFINE_RTTI_DATA(name, off, 8, cl1, cl2, cl3, cl4, cl5, cl6, cl7, cl8, NULL, mangled_name)
#define DEFINE_RTTI_DATA9(name, off, cl1, cl2, cl3, cl4, cl5, cl6, cl7, cl8, cl9, mangled_name) \
    DEFINE_RTTI_DATA(name, off, 9, cl1, cl2, cl3, cl4, cl5, cl6, cl7, cl8, cl9, mangled_name)

#define DEFINE_CXX_DATA0(name, dtor) \
    DEFINE_CXX_DATA(name, 0, NULL, NULL, NULL, NULL, dtor)
#define DEFINE_CXX_DATA1(name, cl1, dtor) \
    DEFINE_CXX_DATA(name, 1, cl1, NULL, NULL, NULL, dtor)
#define DEFINE_CXX_DATA2(name, cl1, cl2, dtor) \
    DEFINE_CXX_DATA(name, 2, cl1, cl2, NULL, NULL, dtor)
#define DEFINE_CXX_DATA3(name, cl1, cl2, cl3, dtor) \
    DEFINE_CXX_DATA(name, 3, cl1, cl2, cl3, NULL, dtor)
#define DEFINE_CXX_DATA4(name, cl1, cl2, cl3, cl4, dtor) \
    DEFINE_CXX_DATA(name, 4, cl1, cl2, cl3, cl4, dtor)

#ifdef __ASM_USE_THISCALL_WRAPPER

#define CALL_VTBL_FUNC(this, off, ret, type, args) ((ret (WINAPI*)type)&vtbl_wrapper_##off)args

extern void *vtbl_wrapper_0;
extern void *vtbl_wrapper_4;
extern void *vtbl_wrapper_8;
extern void *vtbl_wrapper_12;
extern void *vtbl_wrapper_16;
extern void *vtbl_wrapper_20;
extern void *vtbl_wrapper_24;
extern void *vtbl_wrapper_28;
extern void *vtbl_wrapper_32;
extern void *vtbl_wrapper_36;
extern void *vtbl_wrapper_40;
extern void *vtbl_wrapper_44;
extern void *vtbl_wrapper_48;
extern void *vtbl_wrapper_52;
extern void *vtbl_wrapper_56;

#else

#define CALL_VTBL_FUNC(this, off, ret, type, args) ((ret (__thiscall***)type)this)[0][off/4]args

#endif

/* exception object */
typedef void (*vtable_ptr)(void);
typedef struct __exception
{
    const vtable_ptr *vtable;
    char             *name;    /* Name of this exception, always a new copy for each object */
    int               do_free; /* Whether to free 'name' in our dtor */
} exception;

/* rtti */
typedef struct __type_info
{
    const vtable_ptr *vtable;
    char              *name;         /* Unmangled name, allocated lazily */
    char               mangled[128]; /* Variable length, but we declare it large enough for static RTTI */
} type_info;

extern const vtable_ptr type_info_vtable;

/* offsets for computing the this pointer */
typedef struct
{
    int         this_offset;   /* offset of base class this pointer from start of object */
    int         vbase_descr;   /* offset of virtual base class descriptor */
    int         vbase_offset;  /* offset of this pointer offset in virtual base class descriptor */
} this_ptr_offsets;

/* dlls/msvcrt/cppexcept.h */
typedef void (*cxx_copy_ctor)(void);

#ifndef __x86_64__

typedef struct _rtti_base_descriptor
{
    const type_info *type_descriptor;
    int num_base_classes;
    this_ptr_offsets offsets;    /* offsets for computing the this pointer */
    unsigned int attributes;
} rtti_base_descriptor;

typedef struct _rtti_base_array
{
    const rtti_base_descriptor *bases[10]; /* First element is the class itself */
} rtti_base_array;

typedef struct _rtti_object_hierarchy
{
    unsigned int signature;
    unsigned int attributes;
    int array_len; /* Size of the array pointed to by 'base_classes' */
    const rtti_base_array *base_classes;
} rtti_object_hierarchy;

typedef struct _rtti_object_locator
{
    unsigned int signature;
    int base_class_offset;
    unsigned int flags;
    const type_info *type_descriptor;
    const rtti_object_hierarchy *type_hierarchy;
} rtti_object_locator;

typedef struct
{
    UINT flags;
    const type_info *type_info;
    this_ptr_offsets offsets;
    unsigned int size;
    cxx_copy_ctor copy_ctor;
} cxx_type_info;

typedef struct
{
    UINT count;
    const cxx_type_info *info[5];
} cxx_type_info_table;

typedef struct
{
    UINT flags;
    void (*destructor)(void);
    void* /*cxx_exc_custom_handler*/ custom_handler;
    const cxx_type_info_table *type_info_table;
} cxx_exception_type;

#else

typedef struct
{
    unsigned int type_descriptor;
    int num_base_classes;
    this_ptr_offsets offsets;    /* offsets for computing the this pointer */
    unsigned int attributes;
} rtti_base_descriptor;

typedef struct
{
    unsigned int bases[10]; /* First element is the class itself */
} rtti_base_array;

typedef struct
{
    unsigned int signature;
    unsigned int attributes;
    int array_len; /* Size of the array pointed to by 'base_classes' */
    unsigned int base_classes;
} rtti_object_hierarchy;

typedef struct
{
    unsigned int signature;
    int base_class_offset;
    unsigned int flags;
    unsigned int type_descriptor;
    unsigned int type_hierarchy;
    unsigned int object_locator;
} rtti_object_locator;

typedef struct
{
    UINT flags;
    unsigned int type_info;
    this_ptr_offsets offsets;
    unsigned int size;
    unsigned int copy_ctor;
} cxx_type_info;

typedef struct
{
    UINT count;
    unsigned int info[5];
} cxx_type_info_table;

typedef struct
{
    UINT flags;
    unsigned int destructor;
    unsigned int custom_handler;
    unsigned int type_info_table;
} cxx_exception_type;

#endif

#define CREATE_TYPE_INFO_VTABLE \
DEFINE_THISCALL_WRAPPER(type_info_vector_dtor,8) \
void * __thiscall type_info_vector_dtor(type_info * _this, unsigned int flags) \
{ \
    if (flags & 2) \
    { \
        /* we have an array, with the number of elements stored before the first object */ \
        INT_PTR i, *ptr = (INT_PTR *)_this - 1; \
\
        for (i = *ptr - 1; i >= 0; i--) free(_this[i].name); \
        free(ptr); \
    } \
    else \
    { \
        free(_this->name); \
        if (flags & 1) free(_this); \
    } \
    return _this; \
} \
\
DEFINE_RTTI_DATA0( type_info, 0, ".?AVtype_info@@" ) \
\
__ASM_BLOCK_BEGIN(type_info_vtables) \
    __ASM_VTABLE(type_info, \
            VTABLE_ADD_FUNC(type_info_vector_dtor)); \
__ASM_BLOCK_END
