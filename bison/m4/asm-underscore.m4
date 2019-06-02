# asm-underscore.m4 serial 2
dnl Copyright (C) 2010-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Bruno Haible. Based on as-underscore.m4 in GNU clisp.

# gl_ASM_SYMBOL_PREFIX
# Tests for the prefix of C symbols at the assembly language level and the
# linker level. This prefix is either an underscore or empty. Defines the
# C macro USER_LABEL_PREFIX to this prefix, and sets ASM_SYMBOL_PREFIX to
# a stringified variant of this prefix.

AC_DEFUN([gl_ASM_SYMBOL_PREFIX],
[
  dnl We don't use GCC's __USER_LABEL_PREFIX__ here, because
  dnl 1. It works only for GCC.
  dnl 2. It is incorrectly defined on some platforms, in some GCC versions.
  AC_REQUIRE([gl_C_ASM])
  AC_CACHE_CHECK(
    [whether C symbols are prefixed with underscore at the linker level],
    [gl_cv_prog_as_underscore],
    [cat > conftest.c <<EOF
#ifdef __cplusplus
extern "C" int foo (void);
#endif
int foo(void) { return 0; }
EOF
     # Look for the assembly language name in the .s file.
     AC_TRY_COMMAND(${CC-cc} $CFLAGS $CPPFLAGS $gl_c_asm_opt conftest.c) >/dev/null 2>&1
     if grep _foo conftest.$gl_asmext >/dev/null ; then
       gl_cv_prog_as_underscore=yes
     else
       gl_cv_prog_as_underscore=no
     fi
     rm -f conftest*
    ])
  if test $gl_cv_prog_as_underscore = yes; then
    USER_LABEL_PREFIX=_
  else
    USER_LABEL_PREFIX=
  fi
  AC_DEFINE_UNQUOTED([USER_LABEL_PREFIX], [$USER_LABEL_PREFIX],
    [Define to the prefix of C symbols at the assembler and linker level,
     either an underscore or empty.])
  ASM_SYMBOL_PREFIX='"'${USER_LABEL_PREFIX}'"'
  AC_SUBST([ASM_SYMBOL_PREFIX])
])

# gl_C_ASM
# Determines how to produce an assembly language file from C source code.
# Sets the variables:
#   gl_asmext - the extension of assembly language output,
#   gl_c_asm_opt - the C compiler option that produces assembly language output.

AC_DEFUN([gl_C_ASM],
[
  AC_EGREP_CPP([MicrosoftCompiler],
    [
#ifdef _MSC_VER
MicrosoftCompiler
#endif
    ],
    [gl_asmext='asm'
     gl_c_asm_opt='-c -Fa'
    ],
    [gl_asmext='s'
     gl_c_asm_opt='-S'
    ])
])
