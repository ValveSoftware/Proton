/* This file is auto-generated, do not edit. */

#include <stdarg.h>

#include "windef.h"
#include "winbase.h"

#include "cxx.h"
#include "flatapi.h"

#ifdef __i386__
__ASM_GLOBAL_FUNC(call_flat_method,
    "popl %eax\n\t"
    "pushl %ecx\n\t"
    "pushl %eax\n\t"
    "jmp *%edx");
#else
// handles "this" and up to 3 parameters
__ASM_GLOBAL_FUNC(call_flat_method,
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "jmp *%r11");
extern void call_flat_method(void);

__ASM_GLOBAL_FUNC(call_flat_method_f,
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "jmp *%r11");
extern void call_flat_method_f(void);

__ASM_GLOBAL_FUNC(call_flat_method4,
    "subq $0x28, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 40\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "call *%r11\n\t"
    "addq $0x28, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -40\n\t")
    "ret");
extern void call_flat_method4(void);

__ASM_GLOBAL_FUNC(call_flat_method5,
    "subq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 56\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq 0x60(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "call *%r11\n\t"
    "addq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -56\n\t")
    "ret");
extern void call_flat_method5(void);

__ASM_GLOBAL_FUNC(call_flat_method6,
    "subq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 56\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq 0x60(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x68(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "call *%r11\n\t"
    "addq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -56\n\t")
    "ret");
extern void call_flat_method6(void);

__ASM_GLOBAL_FUNC(call_flat_method7,
    "subq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 72\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq 0x70(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x78(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq 0x80(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x38(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "call *%r11\n\t"
    "addq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -72\n\t")
    "ret");
extern void call_flat_method7(void);

__ASM_GLOBAL_FUNC(call_flat_method8,
    "subq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 72\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq 0x70(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x78(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq 0x80(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x38(%rsp)\n\t"
    "movq 0x88(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x40(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "call *%r11\n\t"
    "addq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -72\n\t")
    "ret");
extern void call_flat_method8(void);

__ASM_GLOBAL_FUNC(call_flat_method9,
    "subq $0x58, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 88\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq 0x80(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x88(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq 0x90(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x38(%rsp)\n\t"
    "movq 0x98(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x40(%rsp)\n\t"
    "movq 0xa0(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x48(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "call *%r11\n\t"
    "addq $0x58, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -88\n\t")
    "ret");
extern void call_flat_method9(void);

__ASM_GLOBAL_FUNC(call_flat_method4_f,
    "subq $0x28, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 40\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x28, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -40\n\t")
    "ret");
extern void call_flat_method4_f(void);

__ASM_GLOBAL_FUNC(call_flat_method4_f_f,
    "subq $0x28, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 40\n\t")
    "movq %xmm3, 0x20(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x28, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -40\n\t")
    "ret");
extern void call_flat_method4_f_f(void);

__ASM_GLOBAL_FUNC(call_flat_method5_f,
    "subq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 56\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq 0x60(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -56\n\t")
    "ret");
extern void call_flat_method5_f(void);

__ASM_GLOBAL_FUNC(call_flat_method5_f_f,
    "subq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 56\n\t")
    "movq %xmm3, 0x20(%rsp)\n\t"
    "movq 0x60(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -56\n\t")
    "ret");
extern void call_flat_method5_f_f(void);

__ASM_GLOBAL_FUNC(call_flat_method6_f,
    "subq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 56\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq 0x60(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x68(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -56\n\t")
    "ret");
extern void call_flat_method6_f(void);

__ASM_GLOBAL_FUNC(call_flat_method6_f_f,
    "subq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 56\n\t")
    "movq %xmm3, 0x20(%rsp)\n\t"
    "movq 0x60(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x68(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x38, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -56\n\t")
    "ret");
extern void call_flat_method6_f_f(void);

__ASM_GLOBAL_FUNC(call_flat_method7_f,
    "subq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 72\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq 0x70(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x78(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq 0x80(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x38(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -72\n\t")
    "ret");
extern void call_flat_method7_f(void);

__ASM_GLOBAL_FUNC(call_flat_method7_f_f,
    "subq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 72\n\t")
    "movq %xmm3, 0x20(%rsp)\n\t"
    "movq 0x70(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x78(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq 0x80(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x38(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -72\n\t")
    "ret");
extern void call_flat_method7_f_f(void);

__ASM_GLOBAL_FUNC(call_flat_method8_f,
    "subq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 72\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq 0x70(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x78(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq 0x80(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x38(%rsp)\n\t"
    "movq 0x88(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x40(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -72\n\t")
    "ret");
extern void call_flat_method8_f(void);

__ASM_GLOBAL_FUNC(call_flat_method8_f_f,
    "subq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 72\n\t")
    "movq %xmm3, 0x20(%rsp)\n\t"
    "movq 0x70(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x78(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq 0x80(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x38(%rsp)\n\t"
    "movq 0x88(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x40(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x48, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -72\n\t")
    "ret");
extern void call_flat_method8_f_f(void);

__ASM_GLOBAL_FUNC(call_flat_method9_f,
    "subq $0x58, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 88\n\t")
    "movq %r9, 0x20(%rsp)\n\t"
    "movq 0x80(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x88(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq 0x90(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x38(%rsp)\n\t"
    "movq 0x98(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x40(%rsp)\n\t"
    "movq 0xa0(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x48(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x58, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -88\n\t")
    "ret");
extern void call_flat_method9_f(void);

__ASM_GLOBAL_FUNC(call_flat_method9_f_f,
    "subq $0x58, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset 88\n\t")
    "movq %xmm3, 0x20(%rsp)\n\t"
    "movq 0x80(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x28(%rsp)\n\t"
    "movq 0x88(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x30(%rsp)\n\t"
    "movq 0x90(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x38(%rsp)\n\t"
    "movq 0x98(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x40(%rsp)\n\t"
    "movq 0xa0(%rsp), %rax\n\t" // copy parameter
    "movq %rax, 0x48(%rsp)\n\t"
    "movq %r8, %r9\n\t" // shift over arguments
    "movq %rdx, %r8\n\t"
    "movq %rcx, %rdx\n\t"
    "movq %r10, %rcx\n\t" // add This pointer
    "movaps %xmm2, %xmm3\n\t"
    "movaps %xmm1, %xmm2\n\t"
    "movaps %xmm0, %xmm1\n\t"
    "call *%r11\n\t"
    "addq $0x58, %rsp\n\t"
    __ASM_CFI(".cfi_adjust_cfa_offset -88\n\t")
    "ret");
extern void call_flat_method9_f_f(void);

pfn_call_flat_method
get_call_flat_method_pfn( int param_count, BOOL has_floats, BOOL is_4th_float )
{
    if (!has_floats)
    {
    if (param_count <= 3) return call_flat_method;
    if (param_count == 4) return call_flat_method4;
    if (param_count == 5) return call_flat_method5;
    if (param_count == 6) return call_flat_method6;
    if (param_count == 7) return call_flat_method7;
    if (param_count == 8) return call_flat_method8;
    return call_flat_method9;
    }
    if (is_4th_float)
    {
    if (param_count <= 3) return call_flat_method_f;
    if (param_count == 4) return call_flat_method4_f_f;
    if (param_count == 5) return call_flat_method5_f_f;
    if (param_count == 6) return call_flat_method6_f_f;
    if (param_count == 7) return call_flat_method7_f_f;
    if (param_count == 8) return call_flat_method8_f_f;
    return call_flat_method9_f_f;
    }
    if (param_count <= 3) return call_flat_method_f;
    if (param_count == 4) return call_flat_method4_f;
    if (param_count == 5) return call_flat_method5_f;
    if (param_count == 6) return call_flat_method6_f;
    if (param_count == 7) return call_flat_method7_f;
    if (param_count == 8) return call_flat_method8_f;
    return call_flat_method9_f;
}
#endif
