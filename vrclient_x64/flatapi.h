/* asm thunks for the flat (FnTable) API */

extern void call_flat_method(void);
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

static inline void init_thunk( struct thunk *thunk, void *this, void *proc )
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

static inline void init_thunk( struct thunk *thunk, void *this, void *proc )
{
    *thunk = thunk_template;
    thunk->this = this;
    thunk->proc = proc;
    thunk->call_flat = call_flat_method;
}

#endif

static inline struct thunk *alloc_thunks( unsigned int count )
{
    return VirtualAlloc(NULL, count * sizeof(struct thunk),
        MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
}
