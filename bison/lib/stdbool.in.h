/* Copyright (C) 2001-2003, 2006-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <haible@clisp.cons.org>, 2001.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef _GL_STDBOOL_H
#define _GL_STDBOOL_H

/* ISO C 99 <stdbool.h> for platforms that lack it.  */

/* Usage suggestions:

   Programs that use <stdbool.h> should be aware of some limitations
   and standards compliance issues.

   Standards compliance:

       - <stdbool.h> must be #included before 'bool', 'false', 'true'
         can be used.

       - You cannot assume that sizeof (bool) == 1.

       - Programs should not undefine the macros bool, true, and false,
         as C99 lists that as an "obsolescent feature".

   Limitations of this substitute, when used in a C89 environment:

       - <stdbool.h> must be #included before the '_Bool' type can be used.

       - You cannot assume that _Bool is a typedef; it might be a macro.

       - Bit-fields of type 'bool' are not supported.  Portable code
         should use 'unsigned int foo : 1;' rather than 'bool foo : 1;'.

       - In C99, casts and automatic conversions to '_Bool' or 'bool' are
         performed in such a way that every nonzero value gets converted
         to 'true', and zero gets converted to 'false'.  This doesn't work
         with this substitute.  With this substitute, only the values 0 and 1
         give the expected result when converted to _Bool' or 'bool'.

       - C99 allows the use of (_Bool)0.0 in constant expressions, but
         this substitute cannot always provide this property.

   Also, it is suggested that programs use 'bool' rather than '_Bool';
   this isn't required, but 'bool' is more common.  */


/* 7.16. Boolean type and values */

/* BeOS <sys/socket.h> already #defines false 0, true 1.  We use the same
   definitions below, but temporarily we have to #undef them.  */
#if defined __BEOS__ && !defined __HAIKU__
# include <OS.h> /* defines bool but not _Bool */
# undef false
# undef true
#endif

#ifdef __cplusplus
# define _Bool bool
# define bool bool
#else
# if defined __BEOS__ && !defined __HAIKU__
  /* A compiler known to have 'bool'.  */
  /* If the compiler already has both 'bool' and '_Bool', we can assume they
     are the same types.  */
#  if !@HAVE__BOOL@
typedef bool _Bool;
#  endif
# else
#  if !defined __GNUC__
   /* If @HAVE__BOOL@:
        Some HP-UX cc and AIX IBM C compiler versions have compiler bugs when
        the built-in _Bool type is used.  See
          http://gcc.gnu.org/ml/gcc-patches/2003-12/msg02303.html
          http://lists.gnu.org/archive/html/bug-coreutils/2005-11/msg00161.html
          http://lists.gnu.org/archive/html/bug-coreutils/2005-10/msg00086.html
        Similar bugs are likely with other compilers as well; this file
        wouldn't be used if <stdbool.h> was working.
        So we override the _Bool type.
      If !@HAVE__BOOL@:
        Need to define _Bool ourselves. As 'signed char' or as an enum type?
        Use of a typedef, with SunPRO C, leads to a stupid
          "warning: _Bool is a keyword in ISO C99".
        Use of an enum type, with IRIX cc, leads to a stupid
          "warning(1185): enumerated type mixed with another type".
        Even the existence of an enum type, without a typedef,
          "Invalid enumerator. (badenum)" with HP-UX cc on Tru64.
        The only benefit of the enum, debuggability, is not important
        with these compilers.  So use 'signed char' and no enum.  */
#   define _Bool signed char
#  else
   /* With this compiler, trust the _Bool type if the compiler has it.  */
#   if !@HAVE__BOOL@
   /* For the sake of symbolic names in gdb, define true and false as
      enum constants, not only as macros.
      It is tempting to write
         typedef enum { false = 0, true = 1 } _Bool;
      so that gdb prints values of type 'bool' symbolically.  But then
      values of type '_Bool' might promote to 'int' or 'unsigned int'
      (see ISO C 99 6.7.2.2.(4)); however, '_Bool' must promote to 'int'
      (see ISO C 99 6.3.1.1.(2)).  So add a negative value to the
      enum; this ensures that '_Bool' promotes to 'int'.  */
typedef enum { _Bool_must_promote_to_int = -1, false = 0, true = 1 } _Bool;
#   endif
#  endif
# endif
# define bool _Bool
#endif

/* The other macros must be usable in preprocessor directives.  */
#ifdef __cplusplus
# define false false
# define true true
#else
# define false 0
# define true 1
#endif

#define __bool_true_false_are_defined 1

#endif /* _GL_STDBOOL_H */
