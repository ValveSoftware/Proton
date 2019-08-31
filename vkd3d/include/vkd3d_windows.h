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

#ifndef __VKD3D_WINDOWS_H
#define __VKD3D_WINDOWS_H
#ifndef _INC_WINDOWS

/* Nameless unions */
#ifndef __C89_NAMELESS
# ifdef NONAMELESSUNION
#  define __C89_NAMELESS
#  define __C89_NAMELESSUNIONNAME u
# else
#  define __C89_NAMELESS
#  define __C89_NAMELESSUNIONNAME
# endif /* NONAMELESSUNION */
#endif  /* __C89_NAMELESS */

#if !defined(_WIN32) || defined(__WIDL__)

# if !defined(__WIDL__) && !defined(VKD3D_WIN32_WCHAR)
#  include <wchar.h>
# endif

# ifdef __GNUC__
#  define DECLSPEC_ALIGN(x) __attribute__((aligned(x)))
# endif

/* HRESULT */
typedef int HRESULT;
# define SUCCEEDED(hr) ((HRESULT)(hr) >= 0)
# define FAILED(hr)    ((HRESULT)(hr) < 0)

# define _HRESULT_TYPEDEF_(x) ((HRESULT)x)

# define S_OK    _HRESULT_TYPEDEF_(0)
# define S_FALSE _HRESULT_TYPEDEF_(1)

# define E_NOTIMPL     _HRESULT_TYPEDEF_(0x80004001)
# define E_NOINTERFACE _HRESULT_TYPEDEF_(0x80004002)
# define E_POINTER     _HRESULT_TYPEDEF_(0x80004003)
# define E_ABORT       _HRESULT_TYPEDEF_(0x80004004)
# define E_FAIL        _HRESULT_TYPEDEF_(0x80004005)
# define E_OUTOFMEMORY _HRESULT_TYPEDEF_(0x8007000E)
# define E_INVALIDARG  _HRESULT_TYPEDEF_(0x80070057)

# define DXGI_ERROR_NOT_FOUND _HRESULT_TYPEDEF_(0x887a0002)
# define DXGI_ERROR_MORE_DATA _HRESULT_TYPEDEF_(0x887a0003)

/* Basic types */
typedef unsigned char BYTE;
typedef unsigned int DWORD;
typedef int INT;
typedef unsigned int UINT;
typedef int LONG;
typedef unsigned int ULONG;
typedef float FLOAT;
typedef LONG BOOL;

/* Assuming LP64 model */
typedef char INT8;
typedef unsigned char UINT8;
typedef short INT16;
typedef unsigned short UINT16;
typedef int INT32;
typedef unsigned int UINT32;
# if defined(__x86_64__) || defined(__WIDL__)
typedef long INT64;
typedef unsigned long UINT64;
# else
typedef long long DECLSPEC_ALIGN(8) INT64;
typedef unsigned long long DECLSPEC_ALIGN(8) UINT64;
# endif
typedef long LONG_PTR;
typedef unsigned long ULONG_PTR;

typedef ULONG_PTR SIZE_T;

# ifdef VKD3D_WIN32_WCHAR
typedef unsigned short WCHAR;
# else
typedef wchar_t WCHAR;
# endif /* VKD3D_WIN32_WCHAR */
typedef void *HANDLE;

/* GUID */
# ifdef __WIDL__
typedef struct
{
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} GUID;
# else
typedef struct _GUID
{
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} GUID;
# endif

typedef GUID IID;

# ifdef INITGUID
#  ifndef __cplusplus
#   define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        const GUID name DECLSPEC_HIDDEN; \
        const GUID name = \
    { l, w1, w2, { b1, b2, b3, b4, b5, b6, b7, b8 }}
#  else
#   define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        EXTERN_C const GUID name DECLSPEC_HIDDEN; \
        EXTERN_C const GUID name = \
    { l, w1, w2, { b1, b2, b3, b4, b5, b6, b7, b8 }}
#  endif
# else
#  define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        EXTERN_C const GUID name DECLSPEC_HIDDEN;
# endif /* INITGUID */

/* __uuidof emulation */
#if defined(__cplusplus) && !defined(_MSC_VER)

extern "C++"
{
    template<typename T> const GUID &__vkd3d_uuidof();
}

# define __CRT_UUID_DECL(type, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
    extern "C++" \
    { \
        template<> inline const GUID &__vkd3d_uuidof<type>() \
        { \
            static const IID __uuid_inst = {l, w1, w2, {b1, b2, b3, b4, b5, b6, b7, b8}}; \
            return __uuid_inst; \
        } \
        template<> inline const GUID &__vkd3d_uuidof<type *>() \
        { \
            return __vkd3d_uuidof<type>(); \
        } \
    }

# define __uuidof(type) __vkd3d_uuidof<typeof(type)>()
#else
# define __CRT_UUID_DECL(type, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)
#endif /* defined(__cplusplus) && !defined(_MSC_VER) */

typedef struct SECURITY_ATTRIBUTES SECURITY_ATTRIBUTES;
#endif  /* !defined(_WIN32) || defined(__WIDL__) */


#ifndef _WIN32
# include <stddef.h>
# include <stdlib.h>
# include <string.h>

# define COM_NO_WINDOWS_H

# define FORCEINLINE inline

# define CONTAINING_RECORD(address, type, field) \
        ((type *)((char *)(address) - offsetof(type, field)))

# ifdef __x86_64__
#  define __stdcall __attribute__((ms_abi))
# else
#  if (__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 2)) || defined(__APPLE__)
#   define __stdcall __attribute__((__stdcall__)) __attribute__((__force_align_arg_pointer__))
#  else
#   define __stdcall __attribute__((__stdcall__))
#  endif
# endif

# define WINAPI __stdcall
# define STDMETHODCALLTYPE __stdcall

# ifdef __GNUC__
#  define DECLSPEC_SELECTANY __attribute__((weak))
# endif

/* Macros for COM interfaces */
# define interface struct
# define BEGIN_INTERFACE
# define END_INTERFACE
# define MIDL_INTERFACE(x) struct

# ifdef __cplusplus
#  define EXTERN_C extern "C"
# else
#  define EXTERN_C extern
# endif

# define CONST_VTBL const

# define TRUE 1
# define FALSE 0

# if defined(__cplusplus) && !defined(CINTERFACE)
#  define REFIID const IID &
#  define REFGUID const GUID &
# else
#  define REFIID const IID * const
#  define REFGUID const GUID * const
# endif

#if defined(__cplusplus) && !defined(CINTERFACE)
# define IsEqualGUID(guid1, guid2) (!memcmp(&(guid1), &(guid2), sizeof(GUID)))
#else
# define IsEqualGUID(guid1, guid2) (!memcmp(guid1, guid2, sizeof(GUID)))
#endif

#elif !defined(__WIDL__)

# include <windows.h>

#endif  /* _WIN32 */


/* Define DECLSPEC_HIDDEN */
#ifndef DECLSPEC_HIDDEN
# if defined(__MINGW32__)
#  define DECLSPEC_HIDDEN
# elif defined(__GNUC__)
#  define DECLSPEC_HIDDEN __attribute__((visibility("hidden")))
# else
#  define DECLSPEC_HIDDEN
# endif
#endif  /* DECLSPEC_HIDDEN */

/* Define min() & max() macros */
#ifndef NOMINMAX
# ifndef min
#  define min(a, b) (((a) <= (b)) ? (a) : (b))
# endif

# ifndef max
#  define max(a, b) (((a) >= (b)) ? (a) : (b))
# endif
#endif /* NOMINMAX */

#ifndef DEFINE_ENUM_FLAG_OPERATORS
#ifdef __cplusplus
# define DEFINE_ENUM_FLAG_OPERATORS(type) \
extern "C++" \
{ \
    inline type operator &(type x, type y) { return (type)((int)x & (int)y); } \
    inline type operator &=(type &x, type y) { return (type &)((int &)x &= (int)y); } \
    inline type operator ~(type x) { return (type)~(int)x; } \
    inline type operator |(type x, type y) { return (type)((int)x | (int)y); } \
    inline type operator |=(type &x, type y) { return (type &)((int &)x |= (int)y); } \
    inline type operator ^(type x, type y) { return (type)((int)x ^ (int)y); } \
    inline type operator ^=(type &x, type y) { return (type &)((int &)x ^= (int)y); } \
}
#else
# define DEFINE_ENUM_FLAG_OPERATORS(type)
#endif
#endif /* DEFINE_ENUM_FLAG_OPERATORS */

#endif  /* _INC_WINDOWS */
#endif  /* __VKD3D_WINDOWS_H */
