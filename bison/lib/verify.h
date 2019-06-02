/* Compile-time assert-like macros.

   Copyright (C) 2005-2006, 2009-2015 Free Software Foundation, Inc.

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

/* Written by Paul Eggert, Bruno Haible, and Jim Meyering.  */

#ifndef _GL_VERIFY_H
#define _GL_VERIFY_H


/* Define _GL_HAVE__STATIC_ASSERT to 1 if _Static_assert works as per C11.
   This is supported by GCC 4.6.0 and later, in C mode, and its use
   here generates easier-to-read diagnostics when verify (R) fails.

   Define _GL_HAVE_STATIC_ASSERT to 1 if static_assert works as per C++11.
   This will likely be supported by future GCC versions, in C++ mode.

   Use this only with GCC.  If we were willing to slow 'configure'
   down we could also use it with other compilers, but since this
   affects only the quality of diagnostics, why bother?  */
#if (4 < __GNUC__ + (6 <= __GNUC_MINOR__) \
     && (201112L <= __STDC_VERSION__  || !defined __STRICT_ANSI__) \
     && !defined __cplusplus)
# define _GL_HAVE__STATIC_ASSERT 1
#endif
/* The condition (99 < __GNUC__) is temporary, until we know about the
   first G++ release that supports static_assert.  */
#if (99 < __GNUC__) && defined __cplusplus
# define _GL_HAVE_STATIC_ASSERT 1
#endif

/* FreeBSD 9.1 <sys/cdefs.h>, included by <stddef.h> and lots of other
   system headers, defines a conflicting _Static_assert that is no
   better than ours; override it.  */
#ifndef _GL_HAVE_STATIC_ASSERT
# include <stddef.h>
# undef _Static_assert
#endif

/* Each of these macros verifies that its argument R is nonzero.  To
   be portable, R should be an integer constant expression.  Unlike
   assert (R), there is no run-time overhead.

   If _Static_assert works, verify (R) uses it directly.  Similarly,
   _GL_VERIFY_TRUE works by packaging a _Static_assert inside a struct
   that is an operand of sizeof.

   The code below uses several ideas for C++ compilers, and for C
   compilers that do not support _Static_assert:

   * The first step is ((R) ? 1 : -1).  Given an expression R, of
     integral or boolean or floating-point type, this yields an
     expression of integral type, whose value is later verified to be
     constant and nonnegative.

   * Next this expression W is wrapped in a type
     struct _gl_verify_type {
       unsigned int _gl_verify_error_if_negative: W;
     }.
     If W is negative, this yields a compile-time error.  No compiler can
     deal with a bit-field of negative size.

     One might think that an array size check would have the same
     effect, that is, that the type struct { unsigned int dummy[W]; }
     would work as well.  However, inside a function, some compilers
     (such as C++ compilers and GNU C) allow local parameters and
     variables inside array size expressions.  With these compilers,
     an array size check would not properly diagnose this misuse of
     the verify macro:

       void function (int n) { verify (n < 0); }

   * For the verify macro, the struct _gl_verify_type will need to
     somehow be embedded into a declaration.  To be portable, this
     declaration must declare an object, a constant, a function, or a
     typedef name.  If the declared entity uses the type directly,
     such as in

       struct dummy {...};
       typedef struct {...} dummy;
       extern struct {...} *dummy;
       extern void dummy (struct {...} *);
       extern struct {...} *dummy (void);

     two uses of the verify macro would yield colliding declarations
     if the entity names are not disambiguated.  A workaround is to
     attach the current line number to the entity name:

       #define _GL_CONCAT0(x, y) x##y
       #define _GL_CONCAT(x, y) _GL_CONCAT0 (x, y)
       extern struct {...} * _GL_CONCAT (dummy, __LINE__);

     But this has the problem that two invocations of verify from
     within the same macro would collide, since the __LINE__ value
     would be the same for both invocations.  (The GCC __COUNTER__
     macro solves this problem, but is not portable.)

     A solution is to use the sizeof operator.  It yields a number,
     getting rid of the identity of the type.  Declarations like

       extern int dummy [sizeof (struct {...})];
       extern void dummy (int [sizeof (struct {...})]);
       extern int (*dummy (void)) [sizeof (struct {...})];

     can be repeated.

   * Should the implementation use a named struct or an unnamed struct?
     Which of the following alternatives can be used?

       extern int dummy [sizeof (struct {...})];
       extern int dummy [sizeof (struct _gl_verify_type {...})];
       extern void dummy (int [sizeof (struct {...})]);
       extern void dummy (int [sizeof (struct _gl_verify_type {...})]);
       extern int (*dummy (void)) [sizeof (struct {...})];
       extern int (*dummy (void)) [sizeof (struct _gl_verify_type {...})];

     In the second and sixth case, the struct type is exported to the
     outer scope; two such declarations therefore collide.  GCC warns
     about the first, third, and fourth cases.  So the only remaining
     possibility is the fifth case:

       extern int (*dummy (void)) [sizeof (struct {...})];

   * GCC warns about duplicate declarations of the dummy function if
     -Wredundant-decls is used.  GCC 4.3 and later have a builtin
     __COUNTER__ macro that can let us generate unique identifiers for
     each dummy function, to suppress this warning.

   * This implementation exploits the fact that older versions of GCC,
     which do not support _Static_assert, also do not warn about the
     last declaration mentioned above.

   * GCC warns if -Wnested-externs is enabled and verify() is used
     within a function body; but inside a function, you can always
     arrange to use verify_expr() instead.

   * In C++, any struct definition inside sizeof is invalid.
     Use a template type to work around the problem.  */

/* Concatenate two preprocessor tokens.  */
#define _GL_CONCAT(x, y) _GL_CONCAT0 (x, y)
#define _GL_CONCAT0(x, y) x##y

/* _GL_COUNTER is an integer, preferably one that changes each time we
   use it.  Use __COUNTER__ if it works, falling back on __LINE__
   otherwise.  __LINE__ isn't perfect, but it's better than a
   constant.  */
#if defined __COUNTER__ && __COUNTER__ != __COUNTER__
# define _GL_COUNTER __COUNTER__
#else
# define _GL_COUNTER __LINE__
#endif

/* Generate a symbol with the given prefix, making it unique if
   possible.  */
#define _GL_GENSYM(prefix) _GL_CONCAT (prefix, _GL_COUNTER)

/* Verify requirement R at compile-time, as an integer constant expression
   that returns 1.  If R is false, fail at compile-time, preferably
   with a diagnostic that includes the string-literal DIAGNOSTIC.  */

#define _GL_VERIFY_TRUE(R, DIAGNOSTIC) \
   (!!sizeof (_GL_VERIFY_TYPE (R, DIAGNOSTIC)))

#ifdef __cplusplus
# if !GNULIB_defined_struct__gl_verify_type
template <int w>
  struct _gl_verify_type {
    unsigned int _gl_verify_error_if_negative: w;
  };
#  define GNULIB_defined_struct__gl_verify_type 1
# endif
# define _GL_VERIFY_TYPE(R, DIAGNOSTIC) \
    _gl_verify_type<(R) ? 1 : -1>
#elif defined _GL_HAVE__STATIC_ASSERT
# define _GL_VERIFY_TYPE(R, DIAGNOSTIC) \
    struct {                                   \
      _Static_assert (R, DIAGNOSTIC);          \
      int _gl_dummy;                          \
    }
#else
# define _GL_VERIFY_TYPE(R, DIAGNOSTIC) \
    struct { unsigned int _gl_verify_error_if_negative: (R) ? 1 : -1; }
#endif

/* Verify requirement R at compile-time, as a declaration without a
   trailing ';'.  If R is false, fail at compile-time, preferably
   with a diagnostic that includes the string-literal DIAGNOSTIC.

   Unfortunately, unlike C11, this implementation must appear as an
   ordinary declaration, and cannot appear inside struct { ... }.  */

#ifdef _GL_HAVE__STATIC_ASSERT
# define _GL_VERIFY _Static_assert
#else
# define _GL_VERIFY(R, DIAGNOSTIC)				       \
    extern int (*_GL_GENSYM (_gl_verify_function) (void))	       \
      [_GL_VERIFY_TRUE (R, DIAGNOSTIC)]
#endif

/* _GL_STATIC_ASSERT_H is defined if this code is copied into assert.h.  */
#ifdef _GL_STATIC_ASSERT_H
# if !defined _GL_HAVE__STATIC_ASSERT && !defined _Static_assert
#  define _Static_assert(R, DIAGNOSTIC) _GL_VERIFY (R, DIAGNOSTIC)
# endif
# if !defined _GL_HAVE_STATIC_ASSERT && !defined static_assert
#  define static_assert _Static_assert /* C11 requires this #define.  */
# endif
#endif

/* @assert.h omit start@  */

/* Each of these macros verifies that its argument R is nonzero.  To
   be portable, R should be an integer constant expression.  Unlike
   assert (R), there is no run-time overhead.

   There are two macros, since no single macro can be used in all
   contexts in C.  verify_true (R) is for scalar contexts, including
   integer constant expression contexts.  verify (R) is for declaration
   contexts, e.g., the top level.  */

/* Verify requirement R at compile-time, as an integer constant expression.
   Return 1.  This is equivalent to verify_expr (R, 1).

   verify_true is obsolescent; please use verify_expr instead.  */

#define verify_true(R) _GL_VERIFY_TRUE (R, "verify_true (" #R ")")

/* Verify requirement R at compile-time.  Return the value of the
   expression E.  */

#define verify_expr(R, E) \
   (_GL_VERIFY_TRUE (R, "verify_expr (" #R ", " #E ")") ? (E) : (E))

/* Verify requirement R at compile-time, as a declaration without a
   trailing ';'.  */

#define verify(R) _GL_VERIFY (R, "verify (" #R ")")

#ifndef __has_builtin
# define __has_builtin(x) 0
#endif

/* Assume that R always holds.  This lets the compiler optimize
   accordingly.  R should not have side-effects; it may or may not be
   evaluated.  Behavior is undefined if R is false.  */

#if (__has_builtin (__builtin_unreachable) \
     || 4 < __GNUC__ + (5 <= __GNUC_MINOR__))
# define assume(R) ((R) ? (void) 0 : __builtin_unreachable ())
#elif 1200 <= _MSC_VER
# define assume(R) __assume (R)
#elif (defined lint \
       && (__has_builtin (__builtin_trap) \
           || 3 < __GNUC__ + (3 < __GNUC_MINOR__ + (4 <= __GNUC_PATCHLEVEL__))))
  /* Doing it this way helps various packages when configured with
     --enable-gcc-warnings, which compiles with -Dlint.  It's nicer
     when 'assume' silences warnings even with older GCCs.  */
# define assume(R) ((R) ? (void) 0 : __builtin_trap ())
#else
# define assume(R) ((void) (0 && (R)))
#endif

/* @assert.h omit end@  */

#endif
