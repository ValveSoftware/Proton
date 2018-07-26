/* asm thunks for the flat (FnTable) API */

#ifdef __i386__
#include "pshpack1.h"
struct thunk
{
  BYTE mov_ecx;
  void *this;
  BYTE mov_edx;
  void *proc;
  BYTE jmp;
  LONG call_flat;
  BYTE nop;
};
#include "poppack.h"

extern void call_flat_method(void);

static inline void init_thunk( struct thunk *thunk, void *this, void *proc, int param_count )
{
  thunk->mov_ecx = 0xb9;
  thunk->this = this;
  thunk->mov_edx = 0xba;
  thunk->proc = proc;
  thunk->jmp = 0xe9;
  thunk->call_flat = (char *)call_flat_method - (char *)(&thunk->call_flat + 1);
}

#else

#include "pshpack1.h"
struct thunk
{
  BYTE mov_r10[2];
  void *this;
  BYTE mov_r11[2];
  void *proc;
  BYTE mov_rax[2];
  void *call_flat;
  BYTE jmp_rax[2];
};
#include "poppack.h"

static const struct thunk thunk_template =
{
    { 0x49, 0xba }, 0,        /* movq This, %r10 */
    { 0x49, 0xbb }, 0,        /* movq proc, %r11 */
    { 0x48, 0xb8 }, 0,        /* movq call_thunk, %rax */
    { 0xff, 0xe0 }            /* jmp *%rax */
};

typedef void (*pfn_call_flat_method)(void);

extern void call_flat_method3(void);
extern void call_flat_method4(void);
extern void call_flat_method9(void);

static inline pfn_call_flat_method get_call_flat_method_pfn( int param_count )
{
    if (param_count <= 3)
        return call_flat_method3;
    if (param_count <= 4)
        return call_flat_method4;
    return call_flat_method9;
}

static inline void init_thunk( struct thunk *thunk, void *this, void *proc, int param_count )
{
    *thunk = thunk_template;
    thunk->this = this;
    thunk->proc = proc;
    thunk->call_flat = get_call_flat_method_pfn(param_count);
}

#endif

static inline struct thunk *alloc_thunks( unsigned int count )
{
    return VirtualAlloc(NULL, count * sizeof(struct thunk),
        MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
}
