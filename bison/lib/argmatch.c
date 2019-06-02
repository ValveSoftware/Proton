/* argmatch.c -- find a match for a string in an array

   Copyright (C) 1990, 1998-1999, 2001-2007, 2009-2015 Free Software
   Foundation, Inc.

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

/* Written by David MacKenzie <djm@ai.mit.edu>
   Modified by Akim Demaille <demaille@inf.enst.fr> */

#include <config.h>

/* Specification.  */
#include "argmatch.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gettext.h"
#define _(msgid) gettext (msgid)

#include "error.h"
#include "quotearg.h"
#include "quote.h"

#if USE_UNLOCKED_IO
# include "unlocked-io.h"
#endif

/* When reporting an invalid argument, show nonprinting characters
   by using the quoting style ARGMATCH_QUOTING_STYLE.  Do not use
   literal_quoting_style.  */
#ifndef ARGMATCH_QUOTING_STYLE
# define ARGMATCH_QUOTING_STYLE locale_quoting_style
#endif

/* Non failing version of argmatch call this function after failing. */
#ifndef ARGMATCH_DIE
# include "exitfail.h"
# define ARGMATCH_DIE exit (exit_failure)
#endif

#ifdef ARGMATCH_DIE_DECL
ARGMATCH_DIE_DECL;
#endif

static void
__argmatch_die (void)
{
  ARGMATCH_DIE;
}

/* Used by XARGMATCH and XARGCASEMATCH.  See description in argmatch.h.
   Default to __argmatch_die, but allow caller to change this at run-time. */
argmatch_exit_fn argmatch_die = __argmatch_die;


/* If ARG is an unambiguous match for an element of the
   NULL-terminated array ARGLIST, return the index in ARGLIST
   of the matched element, else -1 if it does not match any element
   or -2 if it is ambiguous (is a prefix of more than one element).

   If VALLIST is none null, use it to resolve ambiguities limited to
   synonyms, i.e., for
     "yes", "yop" -> 0
     "no", "nope" -> 1
   "y" is a valid argument, for 0, and "n" for 1.  */

ptrdiff_t
argmatch (const char *arg, const char *const *arglist,
          const char *vallist, size_t valsize)
{
  size_t i;                     /* Temporary index in ARGLIST.  */
  size_t arglen;                /* Length of ARG.  */
  ptrdiff_t matchind = -1;      /* Index of first nonexact match.  */
  bool ambiguous = false;       /* If true, multiple nonexact match(es).  */

  arglen = strlen (arg);

  /* Test all elements for either exact match or abbreviated matches.  */
  for (i = 0; arglist[i]; i++)
    {
      if (!strncmp (arglist[i], arg, arglen))
        {
          if (strlen (arglist[i]) == arglen)
            /* Exact match found.  */
            return i;
          else if (matchind == -1)
            /* First nonexact match found.  */
            matchind = i;
          else
            {
              /* Second nonexact match found.  */
              if (vallist == NULL
                  || memcmp (vallist + valsize * matchind,
                             vallist + valsize * i, valsize))
                {
                  /* There is a real ambiguity, or we could not
                     disambiguate. */
                  ambiguous = true;
                }
            }
        }
    }
  if (ambiguous)
    return -2;
  else
    return matchind;
}

/* Error reporting for argmatch.
   CONTEXT is a description of the type of entity that was being matched.
   VALUE is the invalid value that was given.
   PROBLEM is the return value from argmatch.  */

void
argmatch_invalid (const char *context, const char *value, ptrdiff_t problem)
{
  char const *format = (problem == -1
                        ? _("invalid argument %s for %s")
                        : _("ambiguous argument %s for %s"));

  error (0, 0, format, quotearg_n_style (0, ARGMATCH_QUOTING_STYLE, value),
         quote_n (1, context));
}

/* List the valid arguments for argmatch.
   ARGLIST is the same as in argmatch.
   VALLIST is a pointer to an array of values.
   VALSIZE is the size of the elements of VALLIST */
void
argmatch_valid (const char *const *arglist,
                const char *vallist, size_t valsize)
{
  size_t i;
  const char *last_val = NULL;

  /* We try to put synonyms on the same line.  The assumption is that
     synonyms follow each other */
  fputs (_("Valid arguments are:"), stderr);
  for (i = 0; arglist[i]; i++)
    if ((i == 0)
        || memcmp (last_val, vallist + valsize * i, valsize))
      {
        fprintf (stderr, "\n  - %s", quote (arglist[i]));
        last_val = vallist + valsize * i;
      }
    else
      {
        fprintf (stderr, ", %s", quote (arglist[i]));
      }
  putc ('\n', stderr);
}

/* Never failing versions of the previous functions.

   CONTEXT is the context for which argmatch is called (e.g.,
   "--version-control", or "$VERSION_CONTROL" etc.).  Upon failure,
   calls the (supposed never to return) function EXIT_FN. */

ptrdiff_t
__xargmatch_internal (const char *context,
                      const char *arg, const char *const *arglist,
                      const char *vallist, size_t valsize,
                      argmatch_exit_fn exit_fn)
{
  ptrdiff_t res = argmatch (arg, arglist, vallist, valsize);
  if (res >= 0)
    /* Success. */
    return res;

  /* We failed.  Explain why. */
  argmatch_invalid (context, arg, res);
  argmatch_valid (arglist, vallist, valsize);
  (*exit_fn) ();

  return -1; /* To please the compilers. */
}

/* Look for VALUE in VALLIST, an array of objects of size VALSIZE and
   return the first corresponding argument in ARGLIST */
const char *
argmatch_to_argument (const char *value,
                      const char *const *arglist,
                      const char *vallist, size_t valsize)
{
  size_t i;

  for (i = 0; arglist[i]; i++)
    if (!memcmp (value, vallist + valsize * i, valsize))
      return arglist[i];
  return NULL;
}

#ifdef TEST
/*
 * Based on "getversion.c" by David MacKenzie <djm@gnu.ai.mit.edu>
 */
char *program_name;

/* When to make backup files.  */
enum backup_type
{
  /* Never make backups.  */
  no_backups,

  /* Make simple backups of every file.  */
  simple_backups,

  /* Make numbered backups of files that already have numbered backups,
     and simple backups of the others.  */
  numbered_existing_backups,

  /* Make numbered backups of every file.  */
  numbered_backups
};

/* Two tables describing arguments (keys) and their corresponding
   values */
static const char *const backup_args[] =
{
  "no", "none", "off",
  "simple", "never",
  "existing", "nil",
  "numbered", "t",
  0
};

static const enum backup_type backup_vals[] =
{
  no_backups, no_backups, no_backups,
  simple_backups, simple_backups,
  numbered_existing_backups, numbered_existing_backups,
  numbered_backups, numbered_backups
};

int
main (int argc, const char *const *argv)
{
  const char *cp;
  enum backup_type backup_type = no_backups;

  program_name = (char *) argv[0];

  if (argc > 2)
    {
      fprintf (stderr, "Usage: %s [VERSION_CONTROL]\n", program_name);
      exit (1);
    }

  if ((cp = getenv ("VERSION_CONTROL")))
    backup_type = XARGMATCH ("$VERSION_CONTROL", cp,
                             backup_args, backup_vals);

  if (argc == 2)
    backup_type = XARGMATCH (program_name, argv[1],
                             backup_args, backup_vals);

  printf ("The version control is '%s'\n",
          ARGMATCH_TO_ARGUMENT (backup_type, backup_args, backup_vals));

  return 0;
}
#endif
