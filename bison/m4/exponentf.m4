# exponentf.m4 serial 2
dnl Copyright (C) 2007-2008, 2010-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.
AC_DEFUN([gl_FLOAT_EXPONENT_LOCATION],
[
  AC_CACHE_CHECK([where to find the exponent in a 'float'],
    [gl_cv_cc_float_expbit0],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <float.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#define NWORDS \
  ((sizeof (float) + sizeof (unsigned int) - 1) / sizeof (unsigned int))
typedef union { float value; unsigned int word[NWORDS]; } memory_float;
static unsigned int ored_words[NWORDS];
static unsigned int anded_words[NWORDS];
static void add_to_ored_words (float x)
{
  memory_float m;
  size_t i;
  /* Clear it first, in case
     sizeof (float) < sizeof (memory_float).  */
  memset (&m, 0, sizeof (memory_float));
  m.value = x;
  for (i = 0; i < NWORDS; i++)
    {
      ored_words[i] |= m.word[i];
      anded_words[i] &= m.word[i];
    }
}
int main ()
{
  size_t j;
  FILE *fp = fopen ("conftest.out", "w");
  if (fp == NULL)
    return 1;
  for (j = 0; j < NWORDS; j++)
    anded_words[j] = ~ (unsigned int) 0;
  add_to_ored_words (0.25f);
  add_to_ored_words (0.5f);
  add_to_ored_words (1.0f);
  add_to_ored_words (2.0f);
  add_to_ored_words (4.0f);
  /* Remove bits that are common (e.g. if representation of the first mantissa
     bit is explicit).  */
  for (j = 0; j < NWORDS; j++)
    ored_words[j] &= ~anded_words[j];
  /* Now find the nonzero word.  */
  for (j = 0; j < NWORDS; j++)
    if (ored_words[j] != 0)
      break;
  if (j < NWORDS)
    {
      size_t i;
      for (i = j + 1; i < NWORDS; i++)
        if (ored_words[i] != 0)
          {
            fprintf (fp, "unknown");
            return (fclose (fp) != 0);
          }
      for (i = 0; ; i++)
        if ((ored_words[j] >> i) & 1)
          {
            fprintf (fp, "word %d bit %d", (int) j, (int) i);
            return (fclose (fp) != 0);
          }
    }
  fprintf (fp, "unknown");
  return (fclose (fp) != 0);
}
        ]])],
        [gl_cv_cc_float_expbit0=`cat conftest.out`],
        [gl_cv_cc_float_expbit0="unknown"],
        [gl_cv_cc_float_expbit0="word 0 bit 23"])
      rm -f conftest.out
    ])
  case "$gl_cv_cc_float_expbit0" in
    word*bit*)
      word=`echo "$gl_cv_cc_float_expbit0" | sed -e 's/word //' -e 's/ bit.*//'`
      bit=`echo "$gl_cv_cc_float_expbit0" | sed -e 's/word.*bit //'`
      AC_DEFINE_UNQUOTED([FLT_EXPBIT0_WORD], [$word],
        [Define as the word index where to find the exponent of 'float'.])
      AC_DEFINE_UNQUOTED([FLT_EXPBIT0_BIT], [$bit],
        [Define as the bit index in the word where to find bit 0 of the exponent of 'float'.])
      ;;
  esac
])
