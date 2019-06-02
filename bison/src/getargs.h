/* Parse command line arguments for bison.

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

#ifndef GETARGS_H_
# define GETARGS_H_

# include "location.h"

enum { command_line_prio, grammar_prio, default_prio };

/* flags set by % directives */

/* for -S */
extern char const *skeleton;
extern int skeleton_prio;

/* for -I */
extern char const *include;

extern bool defines_flag;               /* for -d */
extern bool graph_flag;                 /* for -g */
extern bool xml_flag;                   /* for -x */
extern bool no_lines_flag;              /* for -l */
extern bool token_table_flag;           /* for -k */
extern bool yacc_flag;                  /* for -y */


/* GLR_PARSER is true if the input file says to use the GLR
   (Generalized LR) parser, and to output some additional information
   used by the GLR algorithm.  */

extern bool glr_parser;

/* NONDETERMINISTIC_PARSER is true iff conflicts are accepted.  This
   is used by the GLR parser, and might be used in BackTracking
   parsers too.  */

extern bool nondeterministic_parser;


/* --language.  */
struct bison_language
{
  char language[sizeof "Java"];
  char skeleton[sizeof "java-skel.m4"];
  char src_extension[sizeof ".java"];
  char header_extension[sizeof ".java"];
  bool add_tab;
};

extern int language_prio;
extern struct bison_language const *language;

/*-----------.
| --report.  |
`-----------*/

enum report
  {
    report_none             = 0,
    report_states           = 1 << 0,
    report_itemsets         = 1 << 1,
    report_lookahead_tokens = 1 << 2,
    report_solved_conflicts = 1 << 3,
    report_all              = ~0
  };
/** What appears in the *.output file.  */
extern int report_flag;

/*----------.
| --trace.  |
`----------*/
enum trace
  {
    trace_none      = 0,       /**< No traces. */
    trace_scan      = 1 << 0,  /**< Grammar scanner traces. */
    trace_parse     = 1 << 1,  /**< Grammar parser traces. */
    trace_resource  = 1 << 2,  /**< Memory allocation. */
    trace_sets      = 1 << 3,  /**< Grammar sets: firsts, nullable etc. */
    trace_bitsets   = 1 << 4,  /**< Use of bitsets. */
    trace_tools     = 1 << 5,  /**< m4 invocation. */
    trace_automaton = 1 << 6,  /**< Construction of the automaton. */
    trace_grammar   = 1 << 7,  /**< Reading, reducing the grammar. */
    trace_time      = 1 << 8,  /**< Time consumption. */
    trace_skeleton  = 1 << 9,  /**< Skeleton postprocessing. */
    trace_m4        = 1 << 10, /**< M4 traces. */
    trace_muscles   = 1 << 11, /**< M4 definitions of the muscles. */
    trace_ielr      = 1 << 12, /**< IELR conversion. */
    trace_all       = ~0       /**< All of the above.  */
  };
/** What debug items bison displays during its run.  */
extern int trace_flag;

/*-------------.
| --features.  |
`-------------*/

enum feature
  {
    feature_none  = 0,         /**< No additional feature.  */
    feature_caret = 1 << 0,    /**< Enhance the output of errors with carets.  */
    feature_all   = ~0         /**< All above features.  */
  };
/** What additional features to use.  */
extern int feature_flag;


/** Process the command line arguments.
 *
 *  \param argc   size of \a argv
 *  \param argv   list of arguments.
 */
void getargs (int argc, char *argv[]);

/* Used by parse-gram.y.  */
void language_argmatch (char const *arg, int prio, location loc);
void skeleton_arg (const char *arg, int prio, location loc);

/** In the string \c s, replace all characters \c from by \c to.  */
void tr (char *s, char from, char to);

#endif /* !GETARGS_H_ */
