# exponentd.m4 serial 3
dnl Copyright (C) 2007-2008, 2010-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.
AC_DEFUN([gl_DOUBLE_EXPONENT_LOCATION],
[
  AC_CACHE_CHECK([where to find the exponent in a 'double'],
    [gl_cv_cc_double_expbit0],
    [
      AC_RUN_IFELSE(
        [AC_LANG_SOURCE([[
#include <float.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#define NWORDS \
  ((sizeof (double) + sizeof (unsigned int) - 1) / sizeof (unsigned int))
typedef union { double value; unsigned int word[NWORDS]; } memory_double;
static unsigned int ored_words[NWORDS];
static unsigned int anded_words[NWORDS];
static void add_to_ored_words (double x)
{
  memory_double m;
  size_t i;
  /* Clear it first, in case sizeof (double) < sizeof (memory_double).  */
  memset (&m, 0, sizeof (memory_double));
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
  add_to_ored_words (0.25);
  add_to_ored_words (0.5);
  add_to_ored_words (1.0);
  add_to_ored_words (2.0);
  add_to_ored_words (4.0);
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
        [gl_cv_cc_double_expbit0=`cat conftest.out`],
        [gl_cv_cc_double_expbit0="unknown"],
        [
          dnl On ARM, there are two 'double' floating-point formats, used by
          dnl different sets of instructions: The older FPA instructions assume
          dnl that they are stored in big-endian word order, while the words
          dnl (like integer types) are stored in little-endian byte order.
          dnl The newer VFP instructions assume little-endian order
          dnl consistently.
          AC_EGREP_CPP([mixed_endianness], [
#if defined arm || defined __arm || defined __arm__
  mixed_endianness
#endif
            ],
            [gl_cv_cc_double_expbit0="unknown"],
            [
              pushdef([AC_MSG_CHECKING],[:])dnl
              pushdef([AC_MSG_RESULT],[:])dnl
              pushdef([AC_MSG_RESULT_UNQUOTED],[:])dnl
              AC_C_BIGENDIAN(
                [gl_cv_cc_double_expbit0="word 0 bit 20"],
                [gl_cv_cc_double_expbit0="word 1 bit 20"],
                [gl_cv_cc_double_expbit0="unknown"])
              popdef([AC_MSG_RESULT_UNQUOTED])dnl
              popdef([AC_MSG_RESULT])dnl
              popdef([AC_MSG_CHECKING])dnl
            ])
        ])
      rm -f conftest.out
    ])
  case "$gl_cv_cc_double_expbit0" in
    word*bit*)
      word=`echo "$gl_cv_cc_double_expbit0" | sed -e 's/word //' -e 's/ bit.*//'`
      bit=`echo "$gl_cv_cc_double_expbit0" | sed -e 's/word.*bit //'`
      AC_DEFINE_UNQUOTED([DBL_EXPBIT0_WORD], [$word],
        [Define as the word index where to find the exponent of 'double'.])
      AC_DEFINE_UNQUOTED([DBL_EXPBIT0_BIT], [$bit],
        [Define as the bit index in the word where to find bit 0 of the exponent of 'double'.])
      ;;
  esac
])
