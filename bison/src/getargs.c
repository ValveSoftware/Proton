/* Parse command line arguments for Bison.

   Copyright (C) 1984, 1986, 1989, 1992, 2000-2015 Free Software
   Foundation, Inc.

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

#include <config.h>
#include "system.h"
#include "output.h"

#include <argmatch.h>
#include <c-strcase.h>
#include <configmake.h>
#include <error.h>
#include <getopt.h>
#include <progname.h>

#include "complain.h"
#include "files.h"
#include "getargs.h"
#include "muscle-tab.h"
#include "quote.h"
#include "uniqstr.h"

bool defines_flag;
bool graph_flag;
bool xml_flag;
bool no_lines_flag;
bool token_table_flag;
bool yacc_flag; /* for -y */

bool nondeterministic_parser = false;
bool glr_parser = false;

int feature_flag = feature_caret;
int report_flag = report_none;
int trace_flag = trace_none;

static struct bison_language const valid_languages[] = {
  { "c", "c-skel.m4", ".c", ".h", true },
  { "c++", "c++-skel.m4", ".cc", ".hh", true },
  { "java", "java-skel.m4", ".java", ".java", false },
  { "", "", "", "", false }
};

int skeleton_prio = default_prio;
const char *skeleton = NULL;
int language_prio = default_prio;
struct bison_language const *language = &valid_languages[0];

/** Decode an option's key.
 *
 *  \param option   option being decoded.
 *  \param keys     array of valid subarguments.
 *  \param values   array of corresponding (int) values.
 *  \param all      the all value.
 *  \param flags    the flags to update
 *  \param arg      the subarguments to decode.
 *                  If null, then activate all the flags.
 *  \param no       length of the potential "no-" prefix.
 *                  Can be 0 or 3. If 3, negate the action of the subargument.
 *
 *  If VALUE != 0 then KEY sets flags and no-KEY clears them.
 *  If VALUE == 0 then KEY clears all flags from \c all and no-KEY sets all
 *  flags from \c all.  Thus no-none = all and no-all = none.
 */
static void
flag_argmatch (const char *option,
               const char * const keys[], const int values[],
               int all, int *flags, char *arg, size_t no)
{
  int value = XARGMATCH (option, arg + no, keys, values);

  /* -rnone == -rno-all, and -rno-none == -rall.  */
  if (!value)
    {
      value = all;
      no = !no;
    }

  if (no)
    *flags &= ~value;
  else
    *flags |= value;
}

/** Decode an option's set of keys.
 *
 *  \param option   option being decoded.
 *  \param keys     array of valid subarguments.
 *  \param values   array of corresponding (int) values.
 *  \param all      the all value.
 *  \param flags    the flags to update
 *  \param args     comma separated list of effective subarguments to decode.
 *                  If 0, then activate all the flags.
 */
static void
flags_argmatch (const char *option,
                const char * const keys[], const int values[],
                int all, int *flags, char *args)
{
  if (args)
    for (args = strtok (args, ","); args; args = strtok (NULL, ","))
      {
        size_t no = STRPREFIX_LIT ("no-", args) ? 3 : 0;
        flag_argmatch (option, keys,
                       values, all, flags, args, no);
      }
  else
    *flags |= all;
}


/** Decode a set of sub arguments.
 *
 *  \param FlagName  the flag familly to update.
 *  \param Args      the effective sub arguments to decode.
 *  \param All       the "all" value.
 *
 *  \arg FlagName_args   the list of keys.
 *  \arg FlagName_types  the list of values.
 *  \arg FlagName_flag   the flag to update.
 */
#define FLAGS_ARGMATCH(FlagName, Args, All)                             \
  flags_argmatch ("--" #FlagName, FlagName ## _args, FlagName ## _types, \
                  All, &FlagName ## _flag, Args)


/*----------------------.
| --report's handling.  |
`----------------------*/

static const char * const report_args[] =
{
  /* In a series of synonyms, present the most meaningful first, so
     that argmatch_valid be more readable.  */
  "none",
  "state", "states",
  "itemset", "itemsets",
  "lookahead", "lookaheads", "look-ahead",
  "solved",
  "all",
  0
};

static const int report_types[] =
{
  report_none,
  report_states, report_states,
  report_states | report_itemsets, report_states | report_itemsets,
  report_states | report_lookahead_tokens,
  report_states | report_lookahead_tokens,
  report_states | report_lookahead_tokens,
  report_states | report_solved_conflicts,
  report_all
};

ARGMATCH_VERIFY (report_args, report_types);


/*---------------------.
| --trace's handling.  |
`---------------------*/

static const char * const trace_args[] =
{
  "none       - no traces",
  "scan       - grammar scanner traces",
  "parse      - grammar parser traces",
  "automaton  - construction of the automaton",
  "bitsets    - use of bitsets",
  "grammar    - reading, reducing the grammar",
  "resource   - memory consumption (where available)",
  "sets       - grammar sets: firsts, nullable etc.",
  "muscles    - m4 definitions passed to the skeleton",
  "tools      - m4 invocation",
  "m4         - m4 traces",
  "skeleton   - skeleton postprocessing",
  "time       - time consumption",
  "ielr       - IELR conversion",
  "all        - all of the above",
  0
};

static const int trace_types[] =
{
  trace_none,
  trace_scan,
  trace_parse,
  trace_automaton,
  trace_bitsets,
  trace_grammar,
  trace_resource,
  trace_sets,
  trace_muscles,
  trace_tools,
  trace_m4,
  trace_skeleton,
  trace_time,
  trace_ielr,
  trace_all
};

ARGMATCH_VERIFY (trace_args, trace_types);


/*-----------------------.
| --feature's handling.  |
`-----------------------*/

static const char * const feature_args[] =
{
  "none",
  "caret", "diagnostics-show-caret",
  "all",
  0
};

static const int feature_types[] =
{
  feature_none,
  feature_caret, feature_caret,
  feature_all
};

ARGMATCH_VERIFY (feature_args, feature_types);

/*-------------------------------------------.
| Display the help message and exit STATUS.  |
`-------------------------------------------*/

static void usage (int) ATTRIBUTE_NORETURN;

static void
usage (int status)
{
  if (status != 0)
    fprintf (stderr, _("Try '%s --help' for more information.\n"),
             program_name);
  else
    {
      /* For ../build-aux/cross-options.pl to work, use the format:
                ^  -S, --long[=ARGS] (whitespace)
         A --long option is required.
         Otherwise, add exceptions to ../build-aux/cross-options.pl.  */

      printf (_("Usage: %s [OPTION]... FILE\n"), program_name);
      fputs (_("\
Generate a deterministic LR or generalized LR (GLR) parser employing\n\
LALR(1), IELR(1), or canonical LR(1) parser tables.  IELR(1) and\n\
canonical LR(1) support is experimental.\n\
\n\
"), stdout);

      fputs (_("\
Mandatory arguments to long options are mandatory for short options too.\n\
"), stdout);
      fputs (_("\
The same is true for optional arguments.\n\
"), stdout);

      fputs (_("\
\n\
Operation modes:\n\
  -h, --help                 display this help and exit\n\
  -V, --version              output version information and exit\n\
      --print-localedir      output directory containing locale-dependent data\n\
      --print-datadir        output directory containing skeletons and XSLT\n\
  -y, --yacc                 emulate POSIX Yacc\n\
  -W, --warnings[=CATEGORY]  report the warnings falling in CATEGORY\n\
  -f, --feature[=FEATURE]    activate miscellaneous features\n\
\n\
"), stdout);

      fputs (_("\
Parser:\n\
  -L, --language=LANGUAGE          specify the output programming language\n\
  -S, --skeleton=FILE              specify the skeleton to use\n\
  -t, --debug                      instrument the parser for tracing\n\
                                   same as '-Dparse.trace'\n\
      --locations                  enable location support\n\
  -D, --define=NAME[=VALUE]        similar to '%define NAME \"VALUE\"'\n\
  -F, --force-define=NAME[=VALUE]  override '%define NAME \"VALUE\"'\n\
  -p, --name-prefix=PREFIX         prepend PREFIX to the external symbols\n\
                                   deprecated by '-Dapi.prefix=PREFIX'\n\
  -l, --no-lines                   don't generate '#line' directives\n\
  -k, --token-table                include a table of token names\n\
"), stdout);
      putc ('\n', stdout);

      /* Keep -d and --defines separate so that ../build-aux/cross-options.pl
       * won't assume that -d also takes an argument.  */
      fputs (_("\
Output:\n\
      --defines[=FILE]       also produce a header file\n\
  -d                         likewise but cannot specify FILE (for POSIX Yacc)\n\
  -r, --report=THINGS        also produce details on the automaton\n\
      --report-file=FILE     write report to FILE\n\
  -v, --verbose              same as '--report=state'\n\
  -b, --file-prefix=PREFIX   specify a PREFIX for output files\n\
  -o, --output=FILE          leave output to FILE\n\
  -g, --graph[=FILE]         also output a graph of the automaton\n\
  -x, --xml[=FILE]           also output an XML report of the automaton\n\
                             (the XML schema is experimental)\n\
"), stdout);
      putc ('\n', stdout);

      fputs (_("\
Warning categories include:\n\
  'midrule-values'    unset or unused midrule values\n\
  'yacc'              incompatibilities with POSIX Yacc\n\
  'conflicts-sr'      S/R conflicts (enabled by default)\n\
  'conflicts-rr'      R/R conflicts (enabled by default)\n\
  'deprecated'        obsolete constructs\n\
  'empty-rule'        empty rules without %empty\n\
  'precedence'        useless precedence and associativity\n\
  'other'             all other warnings (enabled by default)\n\
  'all'               all the warnings except 'yacc'\n\
  'no-CATEGORY'       turn off warnings in CATEGORY\n\
  'none'              turn off all the warnings\n\
  'error[=CATEGORY]'  treat warnings as errors\n\
"), stdout);
      putc ('\n', stdout);

      fputs (_("\
THINGS is a list of comma separated words that can include:\n\
  'state'        describe the states\n\
  'itemset'      complete the core item sets with their closure\n\
  'lookahead'    explicitly associate lookahead tokens to items\n\
  'solved'       describe shift/reduce conflicts solving\n\
  'all'          include all the above information\n\
  'none'         disable the report\n\
"), stdout);
      putc ('\n', stdout);

      fputs (_("\
FEATURE is a list of comma separated words that can include:\n\
  'caret'        show errors with carets\n\
  'all'          all of the above\n\
  'none'         disable all of the above\n\
  "), stdout);

      putc ('\n', stdout);
      printf (_("Report bugs to <%s>.\n"), PACKAGE_BUGREPORT);
      printf (_("%s home page: <%s>.\n"), PACKAGE_NAME, PACKAGE_URL);
      fputs (_("General help using GNU software: "
               "<http://www.gnu.org/gethelp/>.\n"),
             stdout);
      /* Don't output this redundant message for English locales.
         Note we still output for 'C' so that it gets included in the
         man page.  */
      const char *lc_messages = setlocale (LC_MESSAGES, NULL);
      if (lc_messages && !STREQ (lc_messages, "en_"))
        /* TRANSLATORS: Replace LANG_CODE in this URL with your language
           code <http://translationproject.org/team/LANG_CODE.html> to
           form one of the URLs at http://translationproject.org/team/.
           Otherwise, replace the entire URL with your translation team's
           email address.  */
        fputs (_("Report translation bugs to "
                 "<http://translationproject.org/team/>.\n"), stdout);
      fputs (_("For complete documentation, run: info bison.\n"), stdout);
    }

  exit (status);
}


/*------------------------------.
| Display the version message.  |
`------------------------------*/

static void
version (void)
{
  /* Some efforts were made to ease the translators' task, please
     continue.  */
  printf (_("bison (GNU Bison) %s"), VERSION);
  putc ('\n', stdout);
  fputs (_("Written by Robert Corbett and Richard Stallman.\n"), stdout);
  putc ('\n', stdout);

  fprintf (stdout,
           _("Copyright (C) %d Free Software Foundation, Inc.\n"),
           PACKAGE_COPYRIGHT_YEAR);

  fputs (_("\
This is free software; see the source for copying conditions.  There is NO\n\
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n\
"),
         stdout);
}


/*-------------------------------------.
| --skeleton and --language handling.  |
`--------------------------------------*/

void
skeleton_arg (char const *arg, int prio, location loc)
{
  if (prio < skeleton_prio)
    {
      skeleton_prio = prio;
      skeleton = arg;
    }
  else if (prio == skeleton_prio)
    complain (&loc, complaint,
              _("multiple skeleton declarations are invalid"));
}

void
language_argmatch (char const *arg, int prio, location loc)
{
  char const *msg;

  if (prio < language_prio)
    {
      int i;
      for (i = 0; valid_languages[i].language[0]; i++)
        if (c_strcasecmp (arg, valid_languages[i].language) == 0)
          {
            language_prio = prio;
            language = &valid_languages[i];
            return;
          }
      msg = _("%s: invalid language");
    }
  else if (language_prio == prio)
    msg = _("multiple language declarations are invalid");
  else
    return;

  complain (&loc, complaint, msg, quotearg_colon (arg));
}

/*----------------------.
| Process the options.  |
`----------------------*/

/* Shorts options.
   Should be computed from long_options.  */
static char const short_options[] =
  "D:"
  "F:"
  "L:"
  "S:"
  "T::"
  "V"
  "W::"
  "b:"
  "d"
  "f::"
  "g::"
  "h"
  "k"
  "l"
  "o:"
  "p:"
  "r:"
  "t"
  "v"
  "x::"
  "y"
  ;

/* Values for long options that do not have single-letter equivalents.  */
enum
{
  LOCATIONS_OPTION = CHAR_MAX + 1,
  PRINT_LOCALEDIR_OPTION,
  PRINT_DATADIR_OPTION,
  REPORT_FILE_OPTION
};

static struct option const long_options[] =
{
  /* Operation modes. */
  { "help",            no_argument,       0,   'h' },
  { "version",         no_argument,       0,   'V' },
  { "print-localedir", no_argument,       0,   PRINT_LOCALEDIR_OPTION },
  { "print-datadir",   no_argument,       0,   PRINT_DATADIR_OPTION   },
  { "warnings",        optional_argument, 0,   'W' },

  /* Parser. */
  { "name-prefix",   required_argument,   0,   'p' },

  /* Output. */
  { "file-prefix", required_argument,   0,   'b' },
  { "output",      required_argument,   0,   'o' },
  { "output-file", required_argument,   0,   'o' },
  { "graph",       optional_argument,   0,   'g' },
  { "xml",         optional_argument,   0,   'x' },
  { "report",      required_argument,   0,   'r' },
  { "report-file", required_argument,   0,   REPORT_FILE_OPTION },
  { "verbose",     no_argument,         0,   'v' },

  /* Hidden. */
  { "trace",         optional_argument,   0,     'T' },

  /* Output.  */
  { "defines",     optional_argument,   0,   'd' },
  { "feature",     optional_argument,   0,   'f' },

  /* Operation modes.  */
  { "fixed-output-files", no_argument,  0,   'y' },
  { "yacc",               no_argument,  0,   'y' },

  /* Parser.  */
  { "debug",          no_argument,               0,   't' },
  { "define",         required_argument,         0,   'D' },
  { "force-define",   required_argument,         0,   'F' },
  { "locations",      no_argument,               0, LOCATIONS_OPTION },
  { "no-lines",       no_argument,               0,   'l' },
  { "skeleton",       required_argument,         0,   'S' },
  { "language",       required_argument,         0,   'L' },
  { "token-table",    no_argument,               0,   'k' },

  {0, 0, 0, 0}
};

/* Under DOS, there is no difference on the case.  This can be
   troublesome when looking for '.tab' etc.  */
#ifdef MSDOS
# define AS_FILE_NAME(File) (strlwr (File), (File))
#else
# define AS_FILE_NAME(File) (File)
#endif

/* Build a location for the current command line argument. */
static
location
command_line_location (void)
{
  location res;
  /* "<command line>" is used in GCC's messages about -D. */
  boundary_set (&res.start, uniqstr_new ("<command line>"), optind - 1, -1);
  res.end = res.start;
  return res;
}


void
getargs (int argc, char *argv[])
{
  int c;

  while ((c = getopt_long (argc, argv, short_options, long_options, NULL))
         != -1)
    switch (c)
      {
        /* ASCII Sorting for short options (i.e., upper case then
           lower case), and then long-only options.  */

      case 0:
        /* Certain long options cause getopt_long to return 0.  */
        break;

      case 'D': /* -DNAME[=(VALUE|"VALUE"|{VALUE})]. */
      case 'F': /* -FNAME[=(VALUE|"VALUE"|{VALUE})]. */
        {
          char *name = optarg;
          char *value = strchr (optarg, '=');
          muscle_kind kind = muscle_keyword;
          if (value)
            {
              char *end = value + strlen (value) - 1;
              *value++ = 0;
              if (*value == '{' && *end == '}')
                {
                  kind = muscle_code;
                  ++value;
                  *end = 0;
                }
              else if (*value == '"' && *end == '"')
                {
                  kind = muscle_string;
                  ++value;
                  *end = 0;
                }
            }
          muscle_percent_define_insert (name, command_line_location (),
                                        kind, value ? value : "",
                                        c == 'D' ? MUSCLE_PERCENT_DEFINE_D
                                                 : MUSCLE_PERCENT_DEFINE_F);
        }
        break;

      case 'L':
        language_argmatch (optarg, command_line_prio,
                           command_line_location ());
        break;

      case 'S':
        skeleton_arg (AS_FILE_NAME (optarg), command_line_prio,
                      command_line_location ());
        break;

      case 'T':
        FLAGS_ARGMATCH (trace, optarg, trace_all);
        break;

      case 'V':
        version ();
        exit (EXIT_SUCCESS);

      case 'f':
        FLAGS_ARGMATCH (feature, optarg, feature_all);
        break;

      case 'W':
        warnings_argmatch (optarg);
        break;

      case 'b':
        spec_file_prefix = AS_FILE_NAME (optarg);
        break;

      case 'd':
        /* Here, the -d and --defines options are differentiated.  */
        defines_flag = true;
        if (optarg)
          {
            free (spec_defines_file);
            spec_defines_file = xstrdup (AS_FILE_NAME (optarg));
          }
        break;

      case 'g':
        graph_flag = true;
        if (optarg)
          {
            free (spec_graph_file);
            spec_graph_file = xstrdup (AS_FILE_NAME (optarg));
          }
        break;

      case 'h':
        usage (EXIT_SUCCESS);

      case 'k':
        token_table_flag = true;
        break;

      case 'l':
        no_lines_flag = true;
        break;

      case 'o':
        spec_outfile = AS_FILE_NAME (optarg);
        break;

      case 'p':
        spec_name_prefix = optarg;
        break;

      case 'r':
        FLAGS_ARGMATCH (report, optarg, report_all);
        break;

      case 't':
        muscle_percent_define_insert ("parse.trace",
                                      command_line_location (),
                                      muscle_keyword, "",
                                      MUSCLE_PERCENT_DEFINE_D);
        break;

      case 'v':
        report_flag |= report_states;
        break;

      case 'x':
        xml_flag = true;
        if (optarg)
          {
            free (spec_xml_file);
            spec_xml_file = xstrdup (AS_FILE_NAME (optarg));
          }
        break;

      case 'y':
        warning_argmatch ("error=yacc", 0, 6);
        yacc_flag = true;
        break;

      case LOCATIONS_OPTION:
        muscle_percent_define_ensure ("locations",
                                      command_line_location (), true);
        break;

      case PRINT_LOCALEDIR_OPTION:
        printf ("%s\n", LOCALEDIR);
        exit (EXIT_SUCCESS);

      case PRINT_DATADIR_OPTION:
        printf ("%s\n", pkgdatadir ());
        exit (EXIT_SUCCESS);

      case REPORT_FILE_OPTION:
        free (spec_verbose_file);
        spec_verbose_file = xstrdup (AS_FILE_NAME (optarg));
        break;

      default:
        usage (EXIT_FAILURE);
      }

  if (argc - optind != 1)
    {
      if (argc - optind < 1)
        error (0, 0, _("%s: missing operand"), quotearg_colon (argv[argc - 1]));
      else
        error (0, 0, _("extra operand %s"), quote (argv[optind + 1]));
      usage (EXIT_FAILURE);
    }

  current_file = grammar_file = uniqstr_new (argv[optind]);
  MUSCLE_INSERT_C_STRING ("file_name", grammar_file);
}

void
tr (char *s, char from, char to)
{
  for (; *s; s++)
    if (*s == from)
      *s = to;
}
