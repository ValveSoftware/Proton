/* Scan Bison Skeletons.                                       -*- C -*-

   Copyright (C) 2001-2015 Free Software Foundation, Inc.

   This file is part of Bison, the GNU Compiler Compiler.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

%option nodefault noyywrap noinput nounput never-interactive debug
%option prefix="skel_" outfile="lex.yy.c"

%{
/* Work around a bug in flex 2.5.31.  See Debian bug 333231
   <http://bugs.debian.org/cgi-bin/bugreport.cgi?bug=333231>.  */
#undef skel_wrap
#define skel_wrap() 1

#define FLEX_PREFIX(Id) skel_ ## Id
#include <src/flex-scanner.h>

#include <dirname.h>
#include <error.h>
#include <quotearg.h>

#include <src/complain.h>
#include <src/getargs.h>
#include <src/files.h>
#include <src/scan-skel.h>

#define YY_DECL static int skel_lex (void)
YY_DECL;

typedef void (*at_directive)(int, char**, char **, int*);
static void at_init (int *argc, char *argv[], at_directive *at_ptr, at_directive fun);
static void at_basename (int argc, char *argv[], char**, int*);
static void at_complain (int argc, char *argv[], char**, int*);
static void at_output (int argc, char *argv[], char **name, int *lineno);
static void fail_for_at_directive_too_many_args (char const *at_directive_name);
static void fail_for_at_directive_too_few_args (char const *at_directive_name);
static void fail_for_invalid_at (char const *at);
%}

%x SC_AT_DIRECTIVE_ARGS
%x SC_AT_DIRECTIVE_SKIP_WS

%%

%{
  int out_lineno PACIFY_CC (= 0);
  char *out_name = NULL;

  /* Currently, only the @complain directive takes multiple arguments, and
     never more than 7, with argv[0] being the directive name and argv[1]
     being the type of complaint to dispatch. */
#define ARGC_MAX 9
  int argc = 0;
  char *argv[ARGC_MAX];
  at_directive at_ptr = NULL;
%}

"@@" fputc ('@', yyout);
"@{" fputc ('[', yyout);
"@}" fputc (']', yyout);
"@'" continue;  /* Used by b4_cat in ../data/bison.m4.  */
@\n  continue;

"@oline@"  fprintf (yyout, "%d", out_lineno + 1);
"@ofile@"  fputs (quotearg_style (c_quoting_style, out_name), yyout);

"@basename("    at_init (&argc, argv, &at_ptr, &at_basename);
"@complain("    at_init (&argc, argv, &at_ptr, &at_complain);
"@output("      at_init (&argc, argv, &at_ptr, &at_output);

  /* This pattern must not match more than the previous @ patterns. */
@[^@{}\'(\n]*   fail_for_invalid_at (yytext);
\n              out_lineno++; ECHO;
[^@\n]+         ECHO;

<INITIAL><<EOF>> {
  if (out_name)
    {
      free (out_name);
      xfclose (yyout);
    }
  return EOF;
}

<SC_AT_DIRECTIVE_ARGS>
{
  [^@]+  STRING_GROW;

  "@@"   obstack_1grow (&obstack_for_string, '@');
  "@{"   obstack_1grow (&obstack_for_string, '[');
  "@}"   obstack_1grow (&obstack_for_string, ']');
  "@'"   continue; /* For starting an argument that begins with whitespace. */
  @\n    continue;

  @[,)] {
    if (argc >= ARGC_MAX)
      fail_for_at_directive_too_many_args (argv[0]);

    argv[argc++] = obstack_finish0 (&obstack_for_string);

    /* Like M4, skip whitespace after a comma.  */
    if (yytext[1] == ',')
      BEGIN SC_AT_DIRECTIVE_SKIP_WS;
    else
      {
        aver (at_ptr);
        at_ptr (argc, argv, &out_name, &out_lineno);
        obstack_free (&obstack_for_string, argv[0]);
        argc = 0;
        BEGIN INITIAL;
      }
  }

  @.?  fail_for_invalid_at (yytext);
}

<SC_AT_DIRECTIVE_SKIP_WS>
{
  [ \t\r\n]    continue;
  .            yyless (0); BEGIN SC_AT_DIRECTIVE_ARGS;
}

<SC_AT_DIRECTIVE_ARGS,SC_AT_DIRECTIVE_SKIP_WS>
{
  <<EOF>>  complain (NULL, fatal, _("unclosed %s directive in skeleton"), argv[0]);
}

%%

static void
at_init (int *argc, char *argv[], at_directive *at_ptr, at_directive fun)
{
  *at_ptr = fun;
  yytext[yyleng-1] = '\0';
  obstack_grow (&obstack_for_string, yytext, yyleng);
  argv[(*argc)++] = obstack_finish (&obstack_for_string);
  BEGIN SC_AT_DIRECTIVE_ARGS;
}

/*------------------------.
| Scan a Bison skeleton.  |
`------------------------*/

void
scan_skel (FILE *in)
{
  static bool initialized = false;
  if (!initialized)
    {
      initialized = true;
      obstack_init (&obstack_for_string);
    }
  skel_in = in;
  skel__flex_debug = trace_flag & trace_skeleton;
  skel_lex ();
}

void
skel_scanner_free (void)
{
  obstack_free (&obstack_for_string, 0);
  /* Reclaim Flex's buffers.  */
  yylex_destroy ();
}

static inline warnings
flag (const char *arg)
{
  /* compare with values issued from b4_error */
  if (STREQ (arg, "complain"))
    return complaint;
  else if (STREQ (arg, "deprecated"))
    return Wdeprecated;
  else if (STREQ (arg, "fatal"))
    return fatal;
  else if (STREQ (arg, "note"))
    return silent | complaint | no_caret;
  else if (STREQ (arg, "warn"))
    return Wother;
  else
    abort ();
}

static void
at_basename (int argc, char *argv[], char **out_namep, int *out_linenop)
{
  (void) out_namep;
  (void) out_linenop;
  if (2 < argc)
    fail_for_at_directive_too_many_args (argv[0]);
  fputs (last_component (argv[1]), yyout);
}

static void
at_complain (int argc, char *argv[], char **out_namep, int *out_linenop)
{
  static unsigned indent;
  warnings w = flag (argv[1]);
  location loc;
  location *locp = NULL;

  (void) out_namep;
  (void) out_linenop;

  if (argc < 4)
    fail_for_at_directive_too_few_args (argv[0]);
  if (argv[2] && argv[2][0])
    {
      boundary_set_from_string (&loc.start, argv[2]);
      boundary_set_from_string (&loc.end, argv[3]);
      locp = &loc;
    }
  if (w & silent)
    indent += SUB_INDENT;
  else
    indent = 0;
  complain_args (locp, w, &indent, argc - 4, argv + 4);
  if (w & silent)
    indent -= SUB_INDENT;
}

static void
at_output (int argc, char *argv[], char **out_namep, int *out_linenop)
{
  if (2 < argc)
    fail_for_at_directive_too_many_args (argv[0]);
  if (*out_namep)
    {
      free (*out_namep);
      xfclose (yyout);
    }
  *out_namep = xstrdup (argv[1]);
  output_file_name_check (out_namep, true);
  /* If there were errors, do not generate the output.  */
  yyout = xfopen (complaint_status ? "/dev/null" : *out_namep, "w");
  *out_linenop = 1;
}

static void
fail_for_at_directive_too_few_args (char const *at_directive_name)
{
  complain (NULL, fatal, _("too few arguments for %s directive in skeleton"),
            at_directive_name);
}

static void
fail_for_at_directive_too_many_args (char const *at_directive_name)
{
  complain (NULL, fatal, _("too many arguments for %s directive in skeleton"),
            at_directive_name);
}

static void
fail_for_invalid_at (char const *at)
{
  complain (NULL, fatal, "invalid @ in skeleton: %s", at);
}
