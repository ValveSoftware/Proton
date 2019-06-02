/* Manipulating the FPU control word.
   Copyright (C) 2007-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2007.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef _FPUCW_H
#define _FPUCW_H

/* The i386 floating point hardware (the 387 compatible FPU, not the modern
   SSE/SSE2 hardware) has a controllable rounding precision.  It is specified
   through the 'PC' bits in the FPU control word ('fctrl' register).  (See
   the GNU libc i386 <fpu_control.h> header for details.)

   On some platforms, such as Linux or Solaris, the default precision setting
   is set to "extended precision".  This means that 'long double' instructions
   operate correctly, but 'double' computations often produce slightly
   different results as on strictly IEEE 754 conforming systems.

   On some platforms, such as NetBSD, the default precision is set to
   "double precision".  This means that 'long double' instructions will operate
   only as 'double', i.e. lead to wrong results.  Similarly on FreeBSD 6.4, at
   least for the division of 'long double' numbers.

   The FPU control word is under control of the application, i.e. it is
   not required to be set either way by the ABI.  (In fact, the i386 ABI
   http://refspecs.freestandards.org/elf/abi386-4.pdf page 3-12 = page 38
   is not clear about it.  But in any case, gcc treats the control word
   like a "preserved" register: it emits code that assumes that the control
   word is preserved across calls, and it restores the control word at the
   end of functions that modify it.)

   See Vincent Lefèvre's page http://www.vinc17.org/research/extended.en.html
   for a good explanation.
   See http://www.uwsg.iu.edu/hypermail/linux/kernel/0103.0/0453.html for
   some argumentation which setting should be the default.  */

/* This header file provides the following facilities:
     fpucw_t                        integral type holding the value of 'fctrl'
     FPU_PC_MASK                    bit mask denoting the precision control
     FPU_PC_DOUBLE                  precision control for 53 bits mantissa
     FPU_PC_EXTENDED                precision control for 64 bits mantissa
     GET_FPUCW ()                   yields the current FPU control word
     SET_FPUCW (word)               sets the FPU control word
     DECL_LONG_DOUBLE_ROUNDING      variable declaration for
                                    BEGIN/END_LONG_DOUBLE_ROUNDING
     BEGIN_LONG_DOUBLE_ROUNDING ()  starts a sequence of instructions with
                                    'long double' safe operation precision
     END_LONG_DOUBLE_ROUNDING ()    ends a sequence of instructions with
                                    'long double' safe operation precision
 */

/* Inline assembler like this works only with GNU C.  */
#if (defined __i386__ || defined __x86_64__) && defined __GNUC__

typedef unsigned short fpucw_t; /* glibc calls this fpu_control_t */

# define FPU_PC_MASK 0x0300
# define FPU_PC_DOUBLE 0x200    /* glibc calls this _FPU_DOUBLE */
# define FPU_PC_EXTENDED 0x300  /* glibc calls this _FPU_EXTENDED */

# define GET_FPUCW() \
  ({ fpucw_t _cw;                                               \
     __asm__ __volatile__ ("fnstcw %0" : "=m" (*&_cw));         \
     _cw;                                                       \
   })
# define SET_FPUCW(word) \
  (void)({ fpucw_t _ncw = (word);                               \
           __asm__ __volatile__ ("fldcw %0" : : "m" (*&_ncw));  \
         })

# define DECL_LONG_DOUBLE_ROUNDING \
  fpucw_t oldcw;
# define BEGIN_LONG_DOUBLE_ROUNDING() \
  (void)(oldcw = GET_FPUCW (),                                  \
         SET_FPUCW ((oldcw & ~FPU_PC_MASK) | FPU_PC_EXTENDED))
# define END_LONG_DOUBLE_ROUNDING() \
  SET_FPUCW (oldcw)

#else

typedef unsigned int fpucw_t;

# define FPU_PC_MASK 0
# define FPU_PC_DOUBLE 0
# define FPU_PC_EXTENDED 0

# define GET_FPUCW() 0
# define SET_FPUCW(word) (void)(word)

# define DECL_LONG_DOUBLE_ROUNDING
# define BEGIN_LONG_DOUBLE_ROUNDING()
# define END_LONG_DOUBLE_ROUNDING()

#endif

#endif /* _FPUCW_H */
