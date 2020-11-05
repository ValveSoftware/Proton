//*@@@+++@@@@******************************************************************
//
// Copyright © Microsoft Corp.
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 
// • Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
// • Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
//*@@@---@@@@******************************************************************


/************************************************************************* 
*  This file documents all the macros approved for use in windows source
*  code. It includes some experimental macros which should only be used by
*  experts.
*
*  DO NOT include this file directly.  This file is include after
*  specstrings.h. So we can undefine every possible old definition including
*  private internal macros people should not be using, as well as macros from
*  sal.h.  Macros are redefined here in a way to cause syntax errors when used
*  incorrectly during a normal build when specstrings.h is included and
*  __SPECSTRINGS_STRICT_LEVEL is defined.
*
*  There are several levels of strictness, each level includes the behavior of
*  all previous levels.
*
*  0 - Disable strict checking 
*  1 - Break on unapproved macros and misuse of statement 
*      macros such as __fallthrough (default)
*  2 - Deprecated some old macros that should not be used
*  3 - Use VS 2005 Source Annotation to make sure every macro 
*      is used in the right context. For example placing __in on a return 
*      parameter will result in an error.
************************************************************************/
#ifndef __SPECSTRINGS_STRICT_LEVEL
#define __SPECSTRINGS_STRICT_LEVEL 1
#endif
/************************************************************************
*  Introduction
*
*  specstrings.h provides a set of annotations to describe how a function uses
*  its parameters - the assumptions it makes about them, and the guarantees it
*  makes upon finishing.
* 
*  Annotations must be placed before a function parameter's type or its return
*  type. There are two basic classes of common annotations buffer annotations
*  and advanced annotations.  Buffer annotations describe how functions use
*  their pointer parameters, and advanced annotations either describe
*  complex/unusual buffer behavior, or provide additional information about a
*  parameter that is not otherwise expressible.
* 
*  Buffer Annotations
* 
*  The most important annotations in SpecStrings.h provide a consistent way to
*  annotate buffer parameters or return values for a function. Each of these
*  annotations describes a single buffer (which could be a string, a
*  fixed-length or variable-length array, or just a pointer) that the function
*  interacts with: where it is, how large it is, how much is initialized, and
*  what the function does with it.
* 
*  The appropriate macro for a given buffer can be constructed using the table
*  below.  Just pick the appropriate values from each category, and combine
*  them together with a leading underscore. Some combinations of values do not
*  make sense as buffer annotations. Only meaningful annotations can be added
*  to your code; for a list of these, see the buffer annotation definitions
*  section.
* 
*  Only a single buffer annotation should be used for each parameter.
* 
*  |------------|------------|---------|--------|----------|---------------|
*  |   Level    |   Usage    |  Size   | Output | Optional |  Parameters   |
*  |------------|------------|---------|--------|----------|---------------|
*  | <>         | <>         | <>      | <>     | <>       | <>            |
*  | _deref     | _in        | _ecount | _full  | _opt     | (size)        |
*  | _deref_opt | _out       | _bcount | _part  |          | (size,length) |
*  |            | _inout     |         |        |          |               |
*  |            |            |         |        |          |               |
*  |------------|------------|---------|--------|----------|---------------|
*
*  Note: "<>" represents the empty string.
* 
*  Level: Describes the buffer pointer's level of indirection from the
*  parameter or return value 'p'.
* 
*  <>         : p is the buffer pointer.
*  _deref     : *p is the buffer pointer. p must not be NULL.
*  _deref_opt : *p may be the buffer pointer. p may be NULL, in which case the 
*               rest of the annotation is ignored.
* 
*  Usage: Describes how the function uses the buffer.
* 
*  <> : The buffer is not accessed. If used on the return value or with
*  _deref, the function will provide the buffer, and it will be uninitialized
*  at exit.  Otherwise, the caller must provide the buffer. This should only
*  be used for alloc and free functions.
*
*  _in : The function will only read from the buffer. The caller must provide
*  the buffer and initialize it.
*
*  _out : The function will only write to the buffer. If used on the return
*  value or with _deref, the function will provide the buffer and initialize
*  it.  Otherwise, the caller must provide the buffer, and the function will
*  initialize it.
*
*  _inout : The function may freely read from and write to the buffer. The
*  caller must provide the buffer and initialize it. If used with _deref, the
*  buffer may be reallocated by the function.
*
*  Size: Describes the total size of the buffer. This may be less than the
*  space actually allocated for the buffer, in which case it describes the
*  accessible amount.
* 
*  <> : No buffer size is given. If the type specifies the buffer size (such
*  as with LPSTR and LPWSTR), that amount is used. Otherwise, the buffer is
*  one element long. Must be used with _in, _out, or _inout.
*
*  _ecount : The buffer size is an explicit element count.
*
*  _bcount : The buffer size is an explicit byte count.
* 
*  Output: Describes how much of the buffer will be initialized by the
*  function. For _inout buffers, this also describes how much is initialized
*  at entry. Omit this category for _in buffers; they must be fully
*  initialized by the caller.
* 
*  <> : The type specifies how much is initialized. For instance, a function
*  initializing an LPWSTR must NULL-terminate the string.
*
*  _full : The function initializes the entire buffer.
*
*  _part : The function initializes part of the buffer, and explicitly
*  indicates how much.
* 
*  Optional: Describes if the buffer itself is optional.
* 
*  <>   : The pointer to the buffer must not be NULL.
*
*  _opt : The pointer to the buffer might be NULL. It will be checked before
*  being dereferenced.
* 
*  Parameters: Gives explicit counts for the size and length of the buffer.
* 
*  <> : There is no explicit count. Use when neither _ecount nor _bcount is
*  used.
*
*  (size) : Only the buffer's total size is given. Use with _ecount or _bcount
*  but not _part.
*
*  (size,length) : The buffer's total size and initialized length are
*  given. Use with _ecount_part and _bcount_part.
* 
*  ----------------------------------------------------------------------------
*  Buffer Annotation Examples
* 
*  LWSTDAPI_(BOOL) StrToIntExA(
*      LPCSTR pszString,  //  No annotation required, const implies __in.
*      DWORD dwFlags,
*      __out int *piRet   // A pointer whose dereference will be filled in.
*  );
* 
*  void MyPaintingFunction(
*      __in HWND hwndControl,     //  An initialized read-only parameter.
*      __in_opt HDC hdcOptional,  //  An initialized read-only parameter that 
*                                 //  might be NULL.
*      __inout IPropertyStore *ppsStore // An initialized parameter that 
*                                       // may be freely used and modified.
*  );
* 
*  LWSTDAPI_(BOOL) PathCompactPathExA(
*      __out_ecount(cchMax) LPSTR pszOut, //  A string buffer with cch elements
*                                         //  that will be '\0' terminated 
*                                         //  on exit.
*      LPCSTR pszSrc,                     //  No annotation required, 
*                                         //  const implies __in.
*      UINT cchMax,                              
*      DWORD dwFlags
*  );
* 
*  HRESULT SHLocalAllocBytes(
*      size_t cb,
*      __deref_bcount(cb) T **ppv //  A pointer whose dereference will be set
*                                 //  to an uninitialized buffer with cb bytes.
*  );
* 
*  __inout_bcount_full(cb) : A buffer with cb elements that is fully
*  initialized at entry and exit, and may be written to by this function.
* 
*  __out_ecount_part(count, *countOut) : A buffer with count elements that
*  will be partially initialized by this function. The function indicates how
*  much it initialized by setting *countOut.
* 
************************************************************************/
#if (_MSC_VER >= 1400) && !defined(__midl) && !defined(_PREFAST_) && (__SPECSTRINGS_STRICT_LEVEL > 0)
#pragma once
#include <wmspecstrings_undef.h>
#define __ecount(size)                                __allowed(on_return)
#define __bcount(size)                                __allowed(on_return)
#define __xcount(size)                                __allowed(on_return)
#define __in                                          __allowed(on_parameter)
#define __in_ecount(size)                             __allowed(on_parameter)
#define __in_bcount(size)                             __allowed(on_parameter)
#define __in_xcount(size)                             __allowed(on_parameter)
#define __in_z                                        __allowed(on_parameter)
#define __in_ecount_z(size)                           __allowed(on_parameter)
#define __in_bcount_z(size)                           __allowed(on_parameter)
#define __out                                         __allowed(on_parameter)
#define __out_ecount(size)                            __allowed(on_parameter)
#define __out_bcount(size)                            __allowed(on_parameter)
#define __out_xcount(size)                            __allowed(on_parameter)
#define __out_ecount_part(size,len)                   __allowed(on_parameter)
#define __out_bcount_part(size,len)                   __allowed(on_parameter)
#define __out_xcount_part(size,len)                   __allowed(on_parameter)
#define __out_ecount_full(size)                       __allowed(on_parameter)
#define __out_bcount_full(size)                       __allowed(on_parameter)
#define __out_xcount_full(size)                       __allowed(on_parameter)
#define __out_z				              __allowed(on_parameter)
#define __out_ecount_z(size)                          __allowed(on_parameter)
#define __out_bcount_z(size)                          __allowed(on_parameter)
#define __inout                                       __allowed(on_parameter)
#define __inout_ecount(size)                          __allowed(on_parameter)
#define __inout_bcount(size)                          __allowed(on_parameter)
#define __inout_xcount(size)                          __allowed(on_parameter)
#define __inout_ecount_part(size,len)                 __allowed(on_parameter)
#define __inout_bcount_part(size,len)                 __allowed(on_parameter)
#define __inout_xcount_part(size,len)                 __allowed(on_parameter)
#define __inout_ecount_full(size)                     __allowed(on_parameter)
#define __inout_bcount_full(size)                     __allowed(on_parameter)
#define __inout_xcount_full(size)                     __allowed(on_parameter)
#define __inout_z                                     __allowed(on_parameter)
#define __inout_ecount_z(size)                        __allowed(on_parameter)
#define __inout_bcount_z(size)                        __allowed(on_parameter)
#define __ecount_opt(size)                            __allowed(on_parameter)
#define __bcount_opt(size)                            __allowed(on_parameter)
#define __xcount_opt(size)                            __allowed(on_parameter)
#define __in_opt                                      __allowed(on_parameter)
#define __in_ecount_opt(size)                         __allowed(on_parameter)
#define __in_bcount_opt(size)                         __allowed(on_parameter)
#define __in_z_opt                                    __allowed(on_parameter)
#define __in_ecount_z_opt(size)                       __allowed(on_parameter)
#define __in_bcount_z_opt(size)                       __allowed(on_parameter)
#define __in_xcount_opt(size)                         __allowed(on_parameter)
#define __out_opt                                     __allowed(on_parameter)
#define __out_ecount_opt(size)                        __allowed(on_parameter)
#define __out_bcount_opt(size)                        __allowed(on_parameter)
#define __out_xcount_opt(size)                        __allowed(on_parameter)
#define __out_ecount_part_opt(size,len)               __allowed(on_parameter)
#define __out_bcount_part_opt(size,len)               __allowed(on_parameter)
#define __out_xcount_part_opt(size,len)               __allowed(on_parameter)
#define __out_ecount_full_opt(size)                   __allowed(on_parameter)
#define __out_bcount_full_opt(size)                   __allowed(on_parameter)
#define __out_xcount_full_opt(size)                   __allowed(on_parameter)
#define __out_ecount_z_opt(size)                      __allowed(on_parameter)
#define __out_bcount_z_opt(size)                      __allowed(on_parameter)
#define __inout_opt                                   __allowed(on_parameter)
#define __inout_ecount_opt(size)                      __allowed(on_parameter)
#define __inout_bcount_opt(size)                      __allowed(on_parameter)
#define __inout_xcount_opt(size)                      __allowed(on_parameter)
#define __inout_ecount_part_opt(size,len)             __allowed(on_parameter)
#define __inout_bcount_part_opt(size,len)             __allowed(on_parameter)
#define __inout_xcount_part_opt(size,len)             __allowed(on_parameter)
#define __inout_ecount_full_opt(size)                 __allowed(on_parameter)
#define __inout_bcount_full_opt(size)                 __allowed(on_parameter)
#define __inout_xcount_full_opt(size)                 __allowed(on_parameter)
#define __inout_z_opt                                 __allowed(on_parameter)
#define __inout_ecount_z_opt(size)                    __allowed(on_parameter)
#define __inout_ecount_z_opt(size)                    __allowed(on_parameter)
#define __inout_bcount_z_opt(size)                    __allowed(on_parameter)
#define __deref_ecount(size)                          __allowed(on_parameter)
#define __deref_bcount(size)                          __allowed(on_parameter)
#define __deref_xcount(size)                          __allowed(on_parameter)
#define __deref_in                                    __allowed(on_parameter)
#define __deref_in_ecount(size)                       __allowed(on_parameter)
#define __deref_in_bcount(size)                       __allowed(on_parameter)
#define __deref_in_xcount(size)                       __allowed(on_parameter)
#define __deref_out                                   __allowed(on_parameter)
#define __deref_out_ecount(size)                      __allowed(on_parameter)
#define __deref_out_bcount(size)                      __allowed(on_parameter)
#define __deref_out_xcount(size)                      __allowed(on_parameter)
#define __deref_out_ecount_part(size,len)             __allowed(on_parameter)
#define __deref_out_bcount_part(size,len)             __allowed(on_parameter)
#define __deref_out_xcount_part(size,len)             __allowed(on_parameter)
#define __deref_out_ecount_full(size)                 __allowed(on_parameter)
#define __deref_out_bcount_full(size)                 __allowed(on_parameter)
#define __deref_out_xcount_full(size)                 __allowed(on_parameter)
#define __deref_out_z                                 __allowed(on_parameter)
#define __deref_out_ecount_z(size)                    __allowed(on_parameter)
#define __deref_out_bcount_z(size)                    __allowed(on_parameter)
#define __deref_out_xcount(size)                      __allowed(on_parameter)
#define __deref_inout                                 __allowed(on_parameter)
#define __deref_inout_ecount(size)                    __allowed(on_parameter)
#define __deref_inout_bcount(size)                    __allowed(on_parameter)
#define __deref_inout_xcount(size)                    __allowed(on_parameter)
#define __deref_inout_ecount_part(size,len)           __allowed(on_parameter)
#define __deref_inout_bcount_part(size,len)           __allowed(on_parameter)
#define __deref_inout_xcount_part(size,len)           __allowed(on_parameter)
#define __deref_inout_ecount_full(size)               __allowed(on_parameter)
#define __deref_inout_bcount_full(size)               __allowed(on_parameter)
#define __deref_inout_xcount_full(size)               __allowed(on_parameter)
#define __deref_inout_z                               __allowed(on_parameter)
#define __deref_inout_ecount_z(size)                  __allowed(on_parameter)
#define __deref_inout_bcount_z(size)                  __allowed(on_parameter)
#define __deref_ecount_opt(size)                      __allowed(on_parameter)
#define __deref_bcount_opt(size)                      __allowed(on_parameter)
#define __deref_xcount_opt(size)                      __allowed(on_parameter)
#define __deref_in_opt                                __allowed(on_parameter)
#define __deref_in_ecount_opt(size)                   __allowed(on_parameter)
#define __deref_in_bcount_opt(size)                   __allowed(on_parameter)
#define __deref_in_xcount_opt(size)                   __allowed(on_parameter)
#define __deref_out_opt                               __allowed(on_parameter)
#define __deref_out_ecount_opt(size)                  __allowed(on_parameter)
#define __deref_out_bcount_opt(size)                  __allowed(on_parameter)
#define __deref_out_xcount_opt(size)                  __allowed(on_parameter)
#define __deref_out_ecount_part_opt(size,len)         __allowed(on_parameter)
#define __deref_out_bcount_part_opt(size,len)         __allowed(on_parameter)
#define __deref_out_xcount_part_opt(size,len)         __allowed(on_parameter)
#define __deref_out_ecount_full_opt(size)             __allowed(on_parameter)
#define __deref_out_bcount_full_opt(size)             __allowed(on_parameter)
#define __deref_out_xcount_full_opt(size)             __allowed(on_parameter)
#define __deref_out_z_opt                             __allowed(on_parameter)
#define __deref_out_ecount_z_opt(size)                __allowed(on_parameter)
#define __deref_out_bcount_z_opt(size)                __allowed(on_parameter)
#define __deref_inout_opt                             __allowed(on_parameter)
#define __deref_inout_ecount_opt(size)                __allowed(on_parameter)
#define __deref_inout_bcount_opt(size)                __allowed(on_parameter)
#define __deref_inout_xcount_opt(size)                __allowed(on_parameter)
#define __deref_inout_ecount_part_opt(size,len)       __allowed(on_parameter)
#define __deref_inout_bcount_part_opt(size,len)       __allowed(on_parameter)
#define __deref_inout_xcount_part_opt(size,len)       __allowed(on_parameter)
#define __deref_inout_ecount_full_opt(size)           __allowed(on_parameter)
#define __deref_inout_bcount_full_opt(size)           __allowed(on_parameter)
#define __deref_inout_xcount_full_opt(size)           __allowed(on_parameter)
#define __deref_inout_z_opt                           __allowed(on_parameter)
#define __deref_inout_ecount_z_opt(size)              __allowed(on_parameter)
#define __deref_inout_bcount_z_opt(size)              __allowed(on_parameter)
#define __deref_opt_ecount(size)                      __allowed(on_parameter)
#define __deref_opt_bcount(size)                      __allowed(on_parameter)
#define __deref_opt_xcount(size)                      __allowed(on_parameter)
#define __deref_opt_in                                __allowed(on_parameter)
#define __deref_opt_in_ecount(size)                   __allowed(on_parameter)
#define __deref_opt_in_bcount(size)                   __allowed(on_parameter)
#define __deref_opt_in_xcount(size)                   __allowed(on_parameter)
#define __deref_opt_out                               __allowed(on_parameter)
#define __deref_opt_out_ecount(size)                  __allowed(on_parameter)
#define __deref_opt_out_bcount(size)                  __allowed(on_parameter)
#define __deref_opt_out_xcount(size)                  __allowed(on_parameter)
#define __deref_opt_out_ecount_part(size,len)         __allowed(on_parameter)
#define __deref_opt_out_bcount_part(size,len)         __allowed(on_parameter)
#define __deref_opt_out_xcount_part(size,len)         __allowed(on_parameter)
#define __deref_opt_out_ecount_full(size)             __allowed(on_parameter)
#define __deref_opt_out_bcount_full(size)             __allowed(on_parameter)
#define __deref_opt_out_xcount_full(size)             __allowed(on_parameter)
#define __deref_opt_inout                             __allowed(on_parameter)
#define __deref_opt_inout_ecount(size)                __allowed(on_parameter)
#define __deref_opt_inout_bcount(size)                __allowed(on_parameter)
#define __deref_opt_inout_xcount(size)                __allowed(on_parameter)
#define __deref_opt_inout_ecount_part(size,len)       __allowed(on_parameter)
#define __deref_opt_inout_bcount_part(size,len)       __allowed(on_parameter)
#define __deref_opt_inout_xcount_part(size,len)       __allowed(on_parameter)
#define __deref_opt_inout_ecount_full(size)           __allowed(on_parameter)
#define __deref_opt_inout_bcount_full(size)           __allowed(on_parameter)
#define __deref_opt_inout_xcount_full(size)           __allowed(on_parameter)
#define __deref_opt_inout_z                           __allowed(on_parameter)
#define __deref_opt_inout_ecount_z(size)              __allowed(on_parameter)
#define __deref_opt_inout_bcount_z(size)              __allowed(on_parameter)
#define __deref_opt_ecount_opt(size)                  __allowed(on_parameter)
#define __deref_opt_bcount_opt(size)                  __allowed(on_parameter)
#define __deref_opt_xcount_opt(size)                  __allowed(on_parameter)
#define __deref_opt_in_opt                            __allowed(on_parameter)
#define __deref_opt_in_ecount_opt(size)               __allowed(on_parameter)
#define __deref_opt_in_bcount_opt(size)               __allowed(on_parameter)
#define __deref_opt_in_xcount_opt(size)               __allowed(on_parameter)
#define __deref_opt_out_opt                           __allowed(on_parameter)
#define __deref_opt_out_ecount_opt(size)              __allowed(on_parameter)
#define __deref_opt_out_bcount_opt(size)              __allowed(on_parameter)
#define __deref_opt_out_xcount_opt(size)              __allowed(on_parameter)
#define __deref_opt_out_ecount_part_opt(size,len)     __allowed(on_parameter)
#define __deref_opt_out_bcount_part_opt(size,len)     __allowed(on_parameter)
#define __deref_opt_out_xcount_part_opt(size,len)     __allowed(on_parameter)
#define __deref_opt_out_ecount_full_opt(size)         __allowed(on_parameter)
#define __deref_opt_out_bcount_full_opt(size)         __allowed(on_parameter)
#define __deref_opt_out_xcount_full_opt(size)         __allowed(on_parameter)  
#define __deref_opt_out_z_opt                         __allowed(on_parameter)
#define __deref_opt_out_ecount_z_opt(size)            __allowed(on_parameter)
#define __deref_opt_out_bcount_z_opt(size)            __allowed(on_parameter)
#define __deref_opt_inout_opt                         __allowed(on_parameter)
#define __deref_opt_inout_ecount_opt(size)            __allowed(on_parameter)
#define __deref_opt_inout_bcount_opt(size)            __allowed(on_parameter)
#define __deref_opt_inout_xcount_opt(size)            __allowed(on_parameter)
#define __deref_opt_inout_ecount_part_opt(size,len)   __allowed(on_parameter) 
#define __deref_opt_inout_bcount_part_opt(size,len)   __allowed(on_parameter)
#define __deref_opt_inout_xcount_part_opt(size,len)   __allowed(on_parameter)
#define __deref_opt_inout_ecount_full_opt(size)       __allowed(on_parameter)
#define __deref_opt_inout_bcount_full_opt(size)       __allowed(on_parameter)
#define __deref_opt_inout_xcount_full_opt(size)       __allowed(on_parameter)
#define __deref_opt_inout_z_opt                       __allowed(on_parameter)
#define __deref_opt_inout_ecount_z_opt(size)          __allowed(on_parameter)
#define __deref_opt_inout_bcount_z_opt(size)          __allowed(on_parameter)
/************************************************************************
*  Advanced Annotations
* 
*  Advanced annotations describe behavior that is not expressible with the
*  regular buffer macros. These may be used either to annotate buffer
*  parameters that involve complex or conditional behavior, or to enrich
*  existing annotations with additional information.
* 
*  __success(expr) T f() : <expr> indicates whether function f succeeded or
*  not. If <expr> is true at exit, all the function's guarantees (as given
*  by other annotations) must hold. If <expr> is false at exit, the caller
*  should not expect any of the function's guarantees to hold. If not used,
*  the function must always satisfy its guarantees. Added automatically to
*  functions that indicate success in standard ways, such as by returning an
*  HRESULT.
* 
*  __out_awcount(expr, size) T *p : Pointer p is a buffer whose size may be
*  given in either bytes or elements. If <expr> is true, this acts like
*  __out_bcount. If <expr> is false, this acts like __out_ecount. This
*  should only be used to annotate old APIs.
* 
*  __in_awcount(expr, size) T* p : Pointer p is a buffer whose size may be given
*  in either bytes or elements. If <expr> is true, this acts like
*  __in_bcount. If <expr> is false, this acts like __in_ecount. This should
*  only be used to annotate old APIs.
* 
*  __nullterminated T* p : Pointer p is a buffer that may be read or written
*  up to and including the first '\0' character or pointer. May be used on
*  typedefs, which marks valid (properly initialized) instances of that type
*  as being null-terminated.
* 
*  __nullnullterminated T* p : Pointer p is a buffer that may be read or
*  written up to and including the first sequence of two '\0' characters or
*  pointers. May be used on typedefs, which marks valid instances of that
*  type as being double-null terminated.
* 
*  __reserved T v : Value v must be 0/NULL, reserved for future use.
* 
*  __checkReturn T f(); : Return value of f must not be ignored by callers
*  of this function.
* 
*  __typefix(ctype) T v : Value v should be treated as an instance of ctype,
*  rather than its declared type when considering validity.
* 
*  __override T f(); : Specify C#-style 'override' behaviour for overriding
*  virtual methods.
* 
*  __callback T f(); : Function f can be used as a function pointer.
* 
*  __format_string T p : Pointer p is a string that contains % markers in
*  the style of printf.
* 
*  __blocksOn(resource) f(); : Function f blocks on the resource 'resource'.
* 
*  __fallthrough : Annotates switch statement labels where fall-through is
*  desired, to distinguish from forgotten break statements.
* 
*  __range(low_bnd, up_bnd) int f(): The return from the function "f" must
*  be in the inclusive numeric range [low_bnd, up_bnd].
*
*  __in_range(low_bnd, up_bnd) int i : Precondition that integer i must be
*  in the inclusive numeric range [low_bnd, up_bnd].
* 
*  __out_range(low_bnd, up_bnd) int i : Postcondition that integer i must be
*  in the inclusive numeric range [low_bnd, up_bnd].
* 
*  __deref_in_range(low_bnd, up_bnd) int* pi : Precondition that integer *pi
*  must be in the inclusive numeric range [low_bnd, up_bnd].
*
*  __deref_out_range(low_bnd, up_bnd) int* pi : Postcondition that integer
*  *pi must be in the inclusive numeric range [low_bnd, up_bnd].
*
*  The first argument of a range macro may also be a C relational operator
*  (<,>,!=, ==, <=, >=).
*  
*  __range(rel_op, j) int f(): Postcondition that "f() rel_op j" must be
*  true.  Note that j may be a expression known only at runtime.
*
*  __in_range(rel_op, j) int i : Precondition that "i rel_op j" must be
*  true.  Note that j may be a expression known only at runtime.
* 
*  __out_range(rel_op, j) int i : Postcondition that integer "i rel_op j"
*  must be true.  Note that j may be a expression known only at runtime.
* 
*  __deref_in_range(rel_op, j) int *pi : Precondition that "*pi rel_op j"
*  must be true.  Note that j may be a expression known only at runtime.
*
*  __deref_out_range(rel_op, j) int *pi : Postcondition that "*pi rel_op j"
*  must be true.  Note that j may be a expression known only at runtime.
*
*  __in_bound int i : Precondition that integer i must be bound, but the
*  exact range can't be specified at compile time.  __in_range should be
*  used if the range can be explicitly stated.
*
*  __out_bound int i : Postcondition that integer i must be bound, but the
*  exact range can't be specified at compile time.  __out_range should be
*  used if the range can be explicitly stated.
* 
*  __deref_out_bound int pi : Postcondition that integer *pi must be bound,
*  but the exact range can't be specified at compile time.
*  __deref_out_range should be used if the range can be explicitly stated.
* 
*  __assume_bound(expr); : Assume that the expression is bound to some known
*  range. This can be used to suppress integer overflow warnings on integral
*  expressions that are known to be bound due to reasons not explicit in the
*  code. Use as a statement in the body of a function.
* 
*  __allocator void f(): Function allocates memory using an integral size
*  argument
*
*  ----------------------------------------------------------------------------
*  Advanced Annotation Examples
* 
*  __success(return == TRUE) LWSTDAPI_(BOOL) 
*  PathCanonicalizeA(__out_ecount(MAX_PATH) LPSTR pszBuf, LPCSTR pszPath);
*  //  pszBuf is only guaranteed to be null-terminated when TRUE is returned.
* 
*  // Initialized LPWSTRs are null-terminated strings.
*  typedef __nullterminated WCHAR* LPWSTR;
* 
*  __out_ecount(cch) __typefix(LPWSTR) void *psz;
*  // psz is a buffer parameter which will be a null-terminated WCHAR string 
*  // at exit, and which initially contains cch WCHARs.
* 
************************************************************************/
#define __success(expr)          __allowed(on_function_or_typedecl)
#define __out_awcount(expr,size) __allowed(on_parameter) 
#define __in_awcount(expr,size)  __allowed(on_parameter)   
#define __nullterminated         __allowed(on_typedecl)
#define __nullnullterminated     __allowed(on_typedecl)
#define __reserved               __allowed(on_parameter)
#define __checkReturn            __allowed(on_function)
#define __typefix(ctype)         __allowed(on_parameter_or_return) 
#define __override               __allowed(on_function) 
#define __callback               __allowed(on_function) 
#define __format_string          __allowed(on_parameter_or_return) 
#define __blocksOn(resource)     __allowed(on_function) 
#define __fallthrough            __allowed(as_statement)
#define __range(lb,ub)           __allowed(on_return) 
#define __in_range(lb,ub)        __allowed(on_parameter) 
#define __out_range(lb,ub)       __allowed(on_parameter) 
#define __deref_in_range(lb,ub)  __allowed(on_parameter) 
#define __deref_out_range(lb,ub) __allowed(on_parameter) 
#define __field_range(lb,ub)     __allowed(on_field)
#define __bound                  __allowed(on_return) 
#define __in_bound               __allowed(on_parameter) 
#define __out_bound              __allowed(on_parameter) 
#define __deref_out_bound        __allowed(on_parameter) 
#define __assume_bound(i)        __allowed(as_statement_with_arg(i))
#define __allocator              __allowed(on_function) 
/*************************************************************************** 
* Expert Macros
***************************************************************************/
#define __null                  __allowed(on_typedecl)
#define __notnull               __allowed(on_typedecl)
#define __maybenull             __allowed(on_typedecl)
#define __exceptthat            __allowed(on_typedecl)
/*************************************************************************** 
* Macros to classify fields of structures.
*                          Structure Annotations
*
*   The buffer annotations are a convenient way of describing
*   relationships between buffers and their size on a function by
*   function basis. Very often struct or class data members have similar
*   invariants, which can be expressed directly on the type.
*
*   Similar to our buffer annotations we can summarize all the various
*   structure annotations by one choosing an element from each column of
*   this table to build a composite annotation.
*
*           +--------------------------------------------------+
*           | Selector |  Units  |    Size/Init     | Optional |
*           |----------+---------+------------------+----------|
*           | __field  | _ecount | (size)           | empty    |
*           |----------+---------+------------------+----------|
*           | __struct | _bcount | _full(size)      | _opt     |
*           |----------+---------+------------------+----------|
*           |          | _xcount | _part(size,init) |          |
*           +--------------------------------------------------+
*
*   Note that empty represents the empty string. Sometime arguments need
*   to be "floated" to the left to give us a valid annotation name. For
*   example the naive combination __field_ecount(size)_opt is actually
*   written as __field_ecount_opt(size). Not all possible combinations
*   are currently supported or sensible. See specstrings_strict.h for
*   the currently supported set. Those that are supported are documented
*   below.
*
*Summary of Elements
*
*   Selector
*
*                __field
*                        The annotation should only be placed in front
*                        of data members of structures and classes. The
*                        data members are pointers to a block of data.
*                        The annotations describe properties about the
*                        size of the block of data. This can be used for
*
*                __struct
*                        The annotation should only be placed at the
*                        beginning of the definition of a structure or
*                        class. These annotations are used when a struct
*                        or class is used as a "header" that is
*                        allocated inline with a block of data and there
*                        is no apparent field that represents the tail
*                        end of the structure.
*
*   Units
*
*                _ecount
*                        All size and initialization values are in terms
*                        of elements of the appropriate type
*
*                _bcount
*                        All size and initialization values are in terms
*                        of raw byte sizes.
*
*                _xcount
*                        The size or initialization values cannot be
*                        properly expressed as a simple byte or element
*                        count, and instead a place holder is used to
*                        document the relationship.
*
*   Size/Init
*           All the size/init expressions can contain references to
*           other fields in the struct or class.
*
*                (size)
*                        The size of the buffer is determined by the
*                        expression size. Unless, the type of the buffer
*                        provides more information nothing is know about
*                        how much of this data is initialized. For
*                        example, if the data member happens to be a
*                        string type such as LPSTR. It is assumed that
*                        the data is initialized to the first '\0'.
*
*                _full(size)
*                        The size of the buffer is determined by the
*                        expression size and all the data in the buffer
*                        is guaranteed to be initialized.
*
*                _part(size,init)
*                        The size of the buffer is determined by the
*                        expression size and all the data in the buffer
*                        is guaranteed to be initialized up to init
*                        elements or bytes.
*
*   Optional
*
*                empty
*                        The pointer to the block of memory is never
*                        NULL
*
*                _opt
*                        The pointer to the block of memory is may be
*                        NULL
*
*     
*   // Basic Usage of Struct Annotations                         
*   #include <stdio.h>                                           
*   #include <stdlib.h>                                          
*   struct buf_s {                                               
*    int sz;                                                     
*    __field_bcount_full(sz)                                     
*    char *buf;                                                  
*   };                                                           
*   void InitBuf(__out struct *buf_s b,int sz) {                 
*        b->buf = calloc(sz,sizeof(char));                       
*        b->sz = sz;                                             
*   }                                                            
*   void WriteBuf(__in FILE *fp,__in struct *buf_s b) {          
*     fwrite(b->buf,b->sz,sizeof(char),fp);                      
*   }                                                            
*   void ReadBuf(__in FILE *fp,__inout struct *buf_s b) {        
*     fread(b->buf,b->sz,sizeof(char),fp);                       
*   }                                                            
*                                                                 
*                                                                 
*                                                                 
*   // Inline Allocated Buffer                                   
*   struct buf_s {                                               
*    int sz;                                                     
*    __field_bcount(sz)                                          
*    char buf[1];                                                
*   };                                                           
*   void WriteBuf(__in FILE *fp,__in struct *buf_s b) {          
*     fwrite(&(b->buf),b->sz,sizeof(char),fp);                   
*   }                                                            
*   void ReadBuf(__in FILE *fp,__inout struct *buf_s b) {        
*     fread(&(b->buf),b->sz,sizeof(char),fp);                    
*   }                                                            
*                                                                 
*                                                                 
*                                                                 
*   // Embedded Header Structure                                 
*   __struct_bcount(sz)                                          
*   struct buf_s {                                               
*    int sz;                                                     
*   };                                                           
*   void WriteBuf(__in FILE *fp,__in struct *buf_s b) {          
*     fwrite(&b,b->sz,sizeof(char),fp);                          
*   }                                                            
*   void ReadBuf(__in FILE *fp,__inout struct *buf_s b) {        
*     fread(&b,b->sz,sizeof(char),fp);                           
*   }                                                            
*
*
****************************************************************************/
#define __field_ecount(size)               __allowed(on_field)
#define __field_bcount(size)               __allowed(on_field)
#define __field_xcount(size)               __allowed(on_field)
#define __field_ecount_opt(size)           __allowed(on_field)
#define __field_bcount_opt(size)           __allowed(on_field)
#define __field_xcount_opt(size)           __allowed(on_field)
#define __field_ecount_part(size,init)     __allowed(on_field)
#define __field_bcount_part(size,init)     __allowed(on_field)
#define __field_xcount_part(size,init)     __allowed(on_field)
#define __field_ecount_part_opt(size,init) __allowed(on_field)
#define __field_bcount_part_opt(size,init) __allowed(on_field)
#define __field_xcount_part_opt(size,init) __allowed(on_field)
#define __field_ecount_full(size)          __allowed(on_field)
#define __field_bcount_full(size)          __allowed(on_field)
#define __field_xcount_full(size)          __allowed(on_field)
#define __field_ecount_full_opt(size)      __allowed(on_field)
#define __field_bcount_full_opt(size)      __allowed(on_field) 
#define __field_xcount_full_opt(size)      __allowed(on_field)
#define __struct_bcount(size)              __allowed(on_struct) 
#define __struct_xcount(size)              __allowed(on_struct) 

/*************************************************************************** 
* Macros to classify the entrypoints and indicate their category.
*
* Pre-defined control point categories include: RPC, KERNEL, GDI.
*
* Pre-defined control point macros include:
*  __rpc_entry, __kernel_entry, __gdi_entry.
***************************************************************************/
#define __control_entrypoint(category)     __allowed(on_function) 
#define __rpc_entry                        __allowed(on_function) 
#define __kernel_entry                     __allowed(on_function) 
#define __gdi_entry                        __allowed(on_function)  

/*************************************************************************** 
* Macros to track untrusted data and their validation. The list of untrusted
* sources include:
*
* FILE                     - File reading stream or API
* NETWORK                  - Socket readers
* INTERNET                 - WinInet and WinHttp readers
* USER_REGISTRY            - HKCU portions of the registry
* USER_MODE                - Parameters to kernel entry points
* RPC                      - Parameters to RPC entry points 
* DRIVER                   - Device driver 
***************************************************************************/
#define __in_data_source(src_sym)       __allowed(on_parameter) 
#define __out_data_source(src_sym)      __allowed(on_parameter) 
#define __field_data_source(src_sym)    __allowed(on_field)
#define __this_out_data_source(src_syn) __allowed(on_function)

/************************************************************************** 
* Macros to tag file parsing code. Predefined formats include:
*  PNG                     - Portable Network Graphics
*  JPEG                    - Joint Photographic Experts Group
*  BMP                     - Bitmap
*  RC_BMP                  - Resource bitmap
*  WMF                     - Windows Metafile
*  EMF                     - Windows Enhanced Metafile
*  GIF                     - Graphics Interchange Format
*  MIME_TYPE               - MIME type from header tokens
*  MAIL_MONIKER            - MAIL information refered by URL moniker
*  HTML                    - HyperText Markup Language
*  WMPHOTO                 - Windows media photo
*  OE_VCARD                - Outlook Express virtual card
*  OE_CONTACT              - Outlook Express contact
*  MIDI                    - Musical Instrument Digital Interface
*  LDIF                    - LDAP Data Interchange Format
*  AVI                     - Audio Visual Interchange
*  ACM                     - Audio Compression Manager
**************************************************************************/
#define __out_validated(filetype_sym)         __allowed(on_parameter) 
#define __this_out_validated(filetype_sym)    __allowed(on_function)   
#define __file_parser(filetype_sym)           __allowed(on_function) 
#define __file_parser_class(filetype_sym)     __allowed(on_struct)  
#define __file_parser_library(filetype_sym)   __allowed(as_global_decl)  

/*************************************************************************** 
* Macros to track the code content in the file. The type of code
* contents currently tracked:
*
* NDIS_DRIVER                   - NDIS Device driver 
***************************************************************************/
#define __source_code_content(codetype_sym)     __allowed(as_global_decl) 

/*************************************************************************** 
* Macros to track the code content in the class. The type of code
* contents currently tracked:
*
* DCOM                          - Class implementing DCOM
***************************************************************************/
#define __class_code_content(codetype_sym)    __allowed(on_struct) 

/*************************************************************************
* Macros to tag encoded function pointers
**************************************************************************/
#define __encoded_pointer                 
#define __encoded_array                   
#define __field_encoded_pointer           __allowed(on_field)
#define __field_encoded_array             __allowed(on_field)

#define __transfer(formal)                __allowed(on_parameter_or_return) 
#define __assume_validated(exp)           __allowed(as_statement_with_arg(exp))

/************************************************************************* 
* __analysis_assume(expr) : Expert macro use only when directed. Use this to
* tell static analysis tools like PREfix and PREfast about a non-coded
* assumption that you wish the tools to assume. The assumption will be
* understood by those tools. By default there is no dynamic checking or
* static checking of the assumption in any build.
*
* To obtain dynamic checking wrap this macro in your local version of a debug
* assert.
* Please do not put function calls in the expression because this is not
* supported by all tools:
*  __analysis_assume(GetObject () != NULL); // DO NOT DO THIS
*
*************************************************************************/
#define __analysis_assume(expr) __allowed(as_statement_with_arg(expr))
#define __analysis_assert(expr) __allowed(as_statement_with_arg(expr))

/************************************************************************* 
* __analysis_hint(hint_sym) : Expert macro use only when
* directed. Use this to influence certain analysis heuristics
* used by the tools. These hints do not describe the semantics
* of functions but simply direct the tools to act in a certain
* way.
*
* Current hints that are supported are:
*
* INLINE   - inline this function during analysis overrides any
*            default heuristics 
* NOINLINE - do not inline this function during analysis overrides 
*            and default heuristics
*************************************************************************/
#define __analysis_hint(hint) __allowed(on_function)

/************************************************************************* 
* Macros to encode abstract properties of values. Used by SALadt.h
*************************************************************************/
#define __type_has_adt_prop(adt,prop)     __allowed(on_typdecl)
#define __out_has_adt_prop(adt,prop)      __allowed(on_parameter)
#define __out_not_has_adt_prop(adt,prop)  __allowed(on_parameter)
#define __out_transfer_adt_prop(arg)      __allowed(on_parameter)
#define __out_has_type_adt_props(typ)     __allowed(on_parameter)
#define __assume_ValidCompNameA(expr)     __allowed(as_statement_with_arg(expr))
#define __assume_ValidCompNameW(expr)     __allowed(as_statement_with_arg(expr))

/************************************************************************* 
* Macros used by Prefast for Drivers 
* 
*  __possibly_notnulltermiated :
*
*  Used for return values of parameters or functions that do not
*  guarantee nullterimination in all cases.
*
*************************************************************************/
#define __possibly_notnulltermiated     __allowed(on_parameter_or_return)

/************************************************************************* 
* Advanced macros
* 
*  __volatile 
* The __volatile annotation identifies a global variable or
* structure field that: 
*   1) is not declared volatile; 
*   2) is accessed concurrently by multiple threads.
*
* The __deref_volatile annotation identifies a global variable
* or structure field that stores a pointer to some data that:
*   1) is not declared volatile; 
*   2) is accessed concurrently by multiple threads.
*
* Prefast uses these annotations to find patterns of code that
* may result in unexpected re-fetching of the global variable
* into a local variable.
*
* We also provide two complimentary annotations __nonvolatile
* and __deref_nonvolatile that could be used to suppress Prefast
*
* re-fetching warnings on variables that are known either:
*   1) not to be in danger of being re-fetched or,
*   2) not to lead to incorrect results if they are re-fetched
*
*************************************************************************/
#define __volatile                       __allowed(on_global_or_field)
#define __deref_volatile                 __allowed(on_global_or_field)
#define __nonvolatile                    __allowed(on_global_or_field)
#define __deref_nonvolatile              __allowed(on_global_or_field)

/************************************************************************* 
* Macros deprecated with strict level greater then 1.
**************************************************************************/
#if (__SPECSTRINGS_STRICT_LEVEL > 1)
/* Must come before macro defintions */
#pragma deprecated(__in_nz)
#pragma deprecated(__in_ecount_nz)
#pragma deprecated(__in_bcount_nz)
#pragma deprecated(__out_nz)
#pragma deprecated(__out_nz_opt)
#pragma deprecated(__out_ecount_nz)
#pragma deprecated(__out_bcount_nz)
#pragma deprecated(__inout_nz)
#pragma deprecated(__inout_ecount_nz)
#pragma deprecated(__inout_bcount_nz)
#pragma deprecated(__in_nz_opt)          
#pragma deprecated(__in_ecount_nz_opt)
#pragma deprecated(__in_bcount_nz_opt)
#pragma deprecated(__out_ecount_nz_opt)
#pragma deprecated(__out_bcount_nz_opt)
#pragma deprecated(__inout_nz_opt)       
#pragma deprecated(__inout_ecount_nz_opt)
#pragma deprecated(__inout_bcount_nz_opt)
#pragma deprecated(__deref_out_nz)                 
#pragma deprecated(__deref_out_ecount_nz)
#pragma deprecated(__deref_out_bcount_nz)
#pragma deprecated(__deref_inout_nz)               
#pragma deprecated(__deref_inout_ecount_nz)
#pragma deprecated(__deref_inout_bcount_nz)
#pragma deprecated(__deref_out_nz_opt)             
#pragma deprecated(__deref_out_ecount_nz_opt)
#pragma deprecated(__deref_out_bcount_nz_opt)
#pragma deprecated(__deref_inout_nz_opt)           
#pragma deprecated(__deref_inout_ecount_nz_opt)
#pragma deprecated(__deref_inout_bcount_nz_opt)
#pragma deprecated(__deref_opt_inout_nz)           
#pragma deprecated(__deref_opt_inout_ecount_nz)
#pragma deprecated(__deref_opt_inout_bcount_nz)
#pragma deprecated(__deref_opt_out_nz_opt)         
#pragma deprecated(__deref_opt_out_ecount_nz_opt)
#pragma deprecated(__deref_opt_out_bcount_nz_opt)
#pragma deprecated(__deref_opt_inout_nz_opt)       
#pragma deprecated(__deref_opt_inout_ecount_nz_opt)
#pragma deprecated(__deref_opt_inout_bcount_nz_opt)
#pragma deprecated(__deref)
#pragma deprecated(__pre)
#pragma deprecated(__post)
#pragma deprecated(__readableTo)
#pragma deprecated(__writableTo)
#pragma deprecated(__maybevalid)
#pragma deprecated(__data_entrypoint)
#pragma deprecated(__inexpressible_readableTo)
#pragma deprecated(__readonly)
#pragma deprecated(__byte_writableTo)
#pragma deprecated(__byte_readableTo)
#pragma deprecated(__elem_readableTo)
#pragma deprecated(__elem_writableTo)
#pragma deprecated(__valid)
#pragma deprecated(__notvalid)
#pragma deprecated(__refparam)
#pragma deprecated(__precond)
#endif
/* Define soon to be deprecated macros to nops. */
#define __in_nz                                       
#define __in_ecount_nz(size)                          
#define __in_bcount_nz(size)                          
#define __out_nz                                      
#define __out_nz_opt                                  
#define __out_ecount_nz(size)                         
#define __out_bcount_nz(size)                         
#define __inout_nz                                    
#define __inout_ecount_nz(size)                       
#define __inout_bcount_nz(size)                       
#define __in_nz_opt                                   
#define __in_ecount_nz_opt(size)                      
#define __in_bcount_nz_opt(size)                      
#define __out_ecount_nz_opt(size)                     
#define __out_bcount_nz_opt(size)                     
#define __inout_nz_opt                                
#define __inout_ecount_nz_opt(size)                   
#define __inout_bcount_nz_opt(size)                   
#define __deref_out_nz                                
#define __deref_out_ecount_nz(size)                   
#define __deref_out_bcount_nz(size)                   
#define __deref_inout_nz                              
#define __deref_inout_ecount_nz(size)                 
#define __deref_inout_bcount_nz(size)                 
#define __deref_out_nz_opt                            
#define __deref_out_ecount_nz_opt(size)               
#define __deref_out_bcount_nz_opt(size)               
#define __deref_inout_nz_opt                          
#define __deref_inout_ecount_nz_opt(size)             
#define __deref_inout_bcount_nz_opt(size)             
#define __deref_opt_inout_nz                          
#define __deref_opt_inout_ecount_nz(size)             
#define __deref_opt_inout_bcount_nz(size)             
#define __deref_opt_out_nz_opt                        
#define __deref_opt_out_ecount_nz_opt(size)           
#define __deref_opt_out_bcount_nz_opt(size)           
#define __deref_opt_inout_nz_opt                      
#define __deref_opt_inout_ecount_nz_opt(size)         
#define __deref_opt_inout_bcount_nz_opt(size)         
#define __deref             
#define __pre               
#define __post              
#define __readableTo(count) 
#define __writableTo(count) 
#define __maybevalid        
#define __inexpressible_readableTo(string) 
#define __data_entrypoint(category)
#define __readonly
#define __byte_writableTo(count)
#define __byte_readableTo(count)
#define __elem_readableTo(count)
#define __elem_writableTo(count)
#define __valid
#define __notvalid
#define __refparam
#define __precond(condition)

/************************************************************************* 
* Definitions to force a compile error when macros are used improperly.
* Relies on VS 2005 source annotations.
*************************************************************************/
#define __allowed(p) __$allowed_##p
#define __$allowed_as_global_decl /* empty */
#define __$allowed_as_statement_with_arg(x) \
    __pragma(warning(push)) __pragma(warning(disable : 4548)) \
        do {__noop(x);} while((0,0) __pragma(warning(pop)) )
#define __$allowed_as_statement __$allowed_as_statement_with_arg(1)

/**************************************************************************
*  This should go away. It's only for __success which we should split into.
*  __success and __typdecl_sucess
***************************************************************************/
#define __$allowed_on_function_or_typedecl /* empty */
#if (__SPECSTRINGS_STRICT_LEVEL == 1) || (__SPECSTRINGS_STRICT_LEVEL == 2)
#define __$allowed_on_typedecl /* empty */
#define __$allowed_on_return /* empty */
#define __$allowed_on_parameter /* empty */
#define __$allowed_on_function /* empty */
#define __$allowed_on_struct /* empty */
#define __$allowed_on_field /* empty */
#define __$allowed_on_parameter_or_return /* empty */
#define __$allowed_on_global_or_field /* empty */
#elif __SPECSTRINGS_STRICT_LEVEL == 3
#define __$allowed_on_typedecl /* empty */
/* Define dummy source attributes. Still needs more testing */
#define __$allowed_on_return [returnvalue: OnReturnOnly]
#define __$allowed_on_parameter [OnParameterOnly]
#define __$allowed_on_function [method: OnFunctionOnly]
#define __$allowed_on_struct [OnStructOnly]
#define __$allowed_on_field [OnFieldOnly]
#define __$allowed_on_parameter_or_return [OnParameterOrReturnOnly] 
#define __$allowed_on_global_or_field /* empty */
#pragma push_macro( "DECL_SA" )
#pragma push_macro( "SA" )
#ifdef __cplusplus
#define SA(x) x
#define DECL_SA(name,loc) \
  [repeatable] \
  [source_annotation_attribute( loc )] \
  struct name##Attribute { name##Attribute(); const char* ignored; }; 
#else
#define SA(x) SA_##x
#define DECL_SA(name,loc) \
  [source_annotation_attribute( loc )] \
  struct name { const char* ignored; };\
  typedef struct name name;
#endif  /* #endif  __cplusplus */
DECL_SA(OnParameterOnly,SA(Parameter));
DECL_SA(OnReturnOnly,SA(ReturnValue));
DECL_SA(OnFunctionOnly,SA(Method));
DECL_SA(OnStructOnly,SA(Struct));
DECL_SA(OnFieldOnly,SA(Field));
DECL_SA(OnParameterOrReturnOnly,SA(Parameter) | SA(ReturnValue));
#pragma pop_macro( "SA" )
#pragma pop_macro( "DECL_SA" )
#endif 
#endif 


