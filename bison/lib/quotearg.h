/* quotearg.h - quote arguments for output

   Copyright (C) 1998-2002, 2004, 2006, 2008-2015 Free Software Foundation,
   Inc.

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

/* Written by Paul Eggert <eggert@twinsun.com> */

#ifndef QUOTEARG_H_
# define QUOTEARG_H_ 1

# include <stddef.h>

/* Basic quoting styles.  For each style, an example is given on the
   input strings "simple", "\0 \t\n'\"\033?""?/\\", and "a:b", using
   quotearg_buffer, quotearg_mem, and quotearg_colon_mem with that
   style and the default flags and quoted characters.  Note that the
   examples are shown here as valid C strings rather than what
   displays on a terminal (with "??/" as a trigraph for "\\").  */
enum quoting_style
  {
    /* Output names as-is (ls --quoting-style=literal).  Can result in
       embedded null bytes if QA_ELIDE_NULL_BYTES is not in
       effect.

       quotearg_buffer:
       "simple", "\0 \t\n'\"\033??/\\", "a:b"
       quotearg:
       "simple", " \t\n'\"\033??/\\", "a:b"
       quotearg_colon:
       "simple", " \t\n'\"\033??/\\", "a:b"
    */
    literal_quoting_style,

    /* Quote names for the shell if they contain shell metacharacters
       or would cause ambiguous output (ls --quoting-style=shell).
       Can result in embedded null bytes if QA_ELIDE_NULL_BYTES is not
       in effect.

       quotearg_buffer:
       "simple", "'\0 \t\n'\\''\"\033??/\\'", "a:b"
       quotearg:
       "simple", "' \t\n'\\''\"\033??/\\'", "a:b"
       quotearg_colon:
       "simple", "' \t\n'\\''\"\033??/\\'", "'a:b'"
    */
    shell_quoting_style,

    /* Quote names for the shell, even if they would normally not
       require quoting (ls --quoting-style=shell-always).  Can result
       in embedded null bytes if QA_ELIDE_NULL_BYTES is not in effect.
       Behaves like shell_quoting_style if QA_ELIDE_OUTER_QUOTES is in
       effect.

       quotearg_buffer:
       "'simple'", "'\0 \t\n'\\''\"\033??/\\'", "'a:b'"
       quotearg:
       "'simple'", "' \t\n'\\''\"\033??/\\'", "'a:b'"
       quotearg_colon:
       "'simple'", "' \t\n'\\''\"\033??/\\'", "'a:b'"
    */
    shell_always_quoting_style,

    /* Quote names as for a C language string (ls --quoting-style=c).
       Behaves like c_maybe_quoting_style if QA_ELIDE_OUTER_QUOTES is
       in effect.  Split into consecutive strings if
       QA_SPLIT_TRIGRAPHS.

       quotearg_buffer:
       "\"simple\"", "\"\\0 \\t\\n'\\\"\\033??/\\\\\"", "\"a:b\""
       quotearg:
       "\"simple\"", "\"\\0 \\t\\n'\\\"\\033??/\\\\\"", "\"a:b\""
       quotearg_colon:
       "\"simple\"", "\"\\0 \\t\\n'\\\"\\033??/\\\\\"", "\"a\\:b\""
    */
    c_quoting_style,

    /* Like c_quoting_style except omit the surrounding double-quote
       characters if no quoted characters are encountered.

       quotearg_buffer:
       "simple", "\"\\0 \\t\\n'\\\"\\033??/\\\\\"", "a:b"
       quotearg:
       "simple", "\"\\0 \\t\\n'\\\"\\033??/\\\\\"", "a:b"
       quotearg_colon:
       "simple", "\"\\0 \\t\\n'\\\"\\033??/\\\\\"", "\"a:b\""
    */
    c_maybe_quoting_style,

    /* Like c_quoting_style except always omit the surrounding
       double-quote characters and ignore QA_SPLIT_TRIGRAPHS
       (ls --quoting-style=escape).

       quotearg_buffer:
       "simple", "\\0 \\t\\n'\"\\033??/\\\\", "a:b"
       quotearg:
       "simple", "\\0 \\t\\n'\"\\033??/\\\\", "a:b"
       quotearg_colon:
       "simple", "\\0 \\t\\n'\"\\033??/\\\\", "a\\:b"
    */
    escape_quoting_style,

    /* Like clocale_quoting_style, but use single quotes in the
       default C locale or if the program does not use gettext
       (ls --quoting-style=locale).  For UTF-8 locales, quote
       characters will use Unicode.

       LC_MESSAGES=C
       quotearg_buffer:
       "`simple'", "`\\0 \\t\\n\\'\"\\033??/\\\\'", "`a:b'"
       quotearg:
       "`simple'", "`\\0 \\t\\n\\'\"\\033??/\\\\'", "`a:b'"
       quotearg_colon:
       "`simple'", "`\\0 \\t\\n\\'\"\\033??/\\\\'", "`a\\:b'"

       LC_MESSAGES=pt_PT.utf8
       quotearg_buffer:
       "\302\253simple\302\273",
       "\302\253\\0 \\t\\n'\"\\033??/\\\\\302\253", "\302\253a:b\302\273"
       quotearg:
       "\302\253simple\302\273",
       "\302\253\\0 \\t\\n'\"\\033??/\\\\\302\253", "\302\253a:b\302\273"
       quotearg_colon:
       "\302\253simple\302\273",
       "\302\253\\0 \\t\\n'\"\\033??/\\\\\302\253", "\302\253a\\:b\302\273"
    */
    locale_quoting_style,

    /* Like c_quoting_style except use quotation marks appropriate for
       the locale and ignore QA_SPLIT_TRIGRAPHS
       (ls --quoting-style=clocale).

       LC_MESSAGES=C
       quotearg_buffer:
       "\"simple\"", "\"\\0 \\t\\n'\\\"\\033??/\\\\\"", "\"a:b\""
       quotearg:
       "\"simple\"", "\"\\0 \\t\\n'\\\"\\033??/\\\\\"", "\"a:b\""
       quotearg_colon:
       "\"simple\"", "\"\\0 \\t\\n'\\\"\\033??/\\\\\"", "\"a\\:b\""

       LC_MESSAGES=pt_PT.utf8
       quotearg_buffer:
       "\302\253simple\302\273",
       "\302\253\\0 \\t\\n'\"\\033??/\\\\\302\253", "\302\253a:b\302\273"
       quotearg:
       "\302\253simple\302\273",
       "\302\253\\0 \\t\\n'\"\\033??/\\\\\302\253", "\302\253a:b\302\273"
       quotearg_colon:
       "\302\253simple\302\273",
       "\302\253\\0 \\t\\n'\"\\033??/\\\\\302\253", "\302\253a\\:b\302\273"
    */
    clocale_quoting_style,

    /* Like clocale_quoting_style except use the custom quotation marks
       set by set_custom_quoting.  If custom quotation marks are not
       set, the behavior is undefined.

       left_quote = right_quote = "'"
       quotearg_buffer:
       "'simple'", "'\\0 \\t\\n\\'\"\\033??/\\\\'", "'a:b'"
       quotearg:
       "'simple'", "'\\0 \\t\\n\\'\"\\033??/\\\\'", "'a:b'"
       quotearg_colon:
       "'simple'", "'\\0 \\t\\n\\'\"\\033??/\\\\'", "'a\\:b'"

       left_quote = "(" and right_quote = ")"
       quotearg_buffer:
       "(simple)", "(\\0 \\t\\n'\"\\033??/\\\\)", "(a:b)"
       quotearg:
       "(simple)", "(\\0 \\t\\n'\"\\033??/\\\\)", "(a:b)"
       quotearg_colon:
       "(simple)", "(\\0 \\t\\n'\"\\033??/\\\\)", "(a\\:b)"

       left_quote = ":" and right_quote = " "
       quotearg_buffer:
       ":simple ", ":\\0\\ \\t\\n'\"\\033??/\\\\ ", ":a:b "
       quotearg:
       ":simple ", ":\\0\\ \\t\\n'\"\\033??/\\\\ ", ":a:b "
       quotearg_colon:
       ":simple ", ":\\0\\ \\t\\n'\"\\033??/\\\\ ", ":a\\:b "

       left_quote = "\"'" and right_quote = "'\""
       Notice that this is treated as a single level of quotes or two
       levels where the outer quote need not be escaped within the inner
       quotes.  For two levels where the outer quote must be escaped
       within the inner quotes, you must use separate quotearg
       invocations.
       quotearg_buffer:
       "\"'simple'\"", "\"'\\0 \\t\\n\\'\"\\033??/\\\\'\"", "\"'a:b'\""
       quotearg:
       "\"'simple'\"", "\"'\\0 \\t\\n\\'\"\\033??/\\\\'\"", "\"'a:b'\""
       quotearg_colon:
       "\"'simple'\"", "\"'\\0 \\t\\n\\'\"\\033??/\\\\'\"", "\"'a\\:b'\""
    */
    custom_quoting_style
  };

/* Flags for use in set_quoting_flags.  */
enum quoting_flags
  {
    /* Always elide null bytes from styles that do not quote them,
       even when the length of the result is available to the
       caller.  */
    QA_ELIDE_NULL_BYTES = 0x01,

    /* Omit the surrounding quote characters if no escaped characters
       are encountered.  Note that if no other character needs
       escaping, then neither does the escape character.  */
    QA_ELIDE_OUTER_QUOTES = 0x02,

    /* In the c_quoting_style and c_maybe_quoting_style, split ANSI
       trigraph sequences into concatenated strings (for example,
       "?""?/" rather than "??/", which could be confused with
       "\\").  */
    QA_SPLIT_TRIGRAPHS = 0x04
  };

/* For now, --quoting-style=literal is the default, but this may change.  */
# ifndef DEFAULT_QUOTING_STYLE
#  define DEFAULT_QUOTING_STYLE literal_quoting_style
# endif

/* Names of quoting styles and their corresponding values.  */
extern char const *const quoting_style_args[];
extern enum quoting_style const quoting_style_vals[];

struct quoting_options;

/* The functions listed below set and use a hidden variable
   that contains the default quoting style options.  */

/* Allocate a new set of quoting options, with contents initially identical
   to O if O is not null, or to the default if O is null.
   It is the caller's responsibility to free the result.  */
struct quoting_options *clone_quoting_options (struct quoting_options *o);

/* Get the value of O's quoting style.  If O is null, use the default.  */
enum quoting_style get_quoting_style (struct quoting_options *o);

/* In O (or in the default if O is null),
   set the value of the quoting style to S.  */
void set_quoting_style (struct quoting_options *o, enum quoting_style s);

/* In O (or in the default if O is null),
   set the value of the quoting options for character C to I.
   Return the old value.  Currently, the only values defined for I are
   0 (the default) and 1 (which means to quote the character even if
   it would not otherwise be quoted).  C must never be a digit or a
   letter that has special meaning after a backslash (for example, "\t"
   for tab).  */
int set_char_quoting (struct quoting_options *o, char c, int i);

/* In O (or in the default if O is null),
   set the value of the quoting options flag to I, which can be a
   bitwise combination of enum quoting_flags, or 0 for default
   behavior.  Return the old value.  */
int set_quoting_flags (struct quoting_options *o, int i);

/* In O (or in the default if O is null),
   set the value of the quoting style to custom_quoting_style,
   set the left quote to LEFT_QUOTE, and set the right quote to
   RIGHT_QUOTE.  Each of LEFT_QUOTE and RIGHT_QUOTE must be
   null-terminated and can be the empty string.  Because backslashes are
   used for escaping, it does not make sense for RIGHT_QUOTE to contain
   a backslash.  RIGHT_QUOTE must not begin with a digit or a letter
   that has special meaning after a backslash (for example, "\t" for
   tab).  */
void set_custom_quoting (struct quoting_options *o,
                         char const *left_quote,
                         char const *right_quote);

/* Place into buffer BUFFER (of size BUFFERSIZE) a quoted version of
   argument ARG (of size ARGSIZE), using O to control quoting.
   If O is null, use the default.
   Terminate the output with a null character, and return the written
   size of the output, not counting the terminating null.
   If BUFFERSIZE is too small to store the output string, return the
   value that would have been returned had BUFFERSIZE been large enough.
   If ARGSIZE is -1, use the string length of the argument for ARGSIZE.
   On output, BUFFER might contain embedded null bytes if ARGSIZE was
   not -1, the style of O does not use backslash escapes, and the
   flags of O do not request elision of null bytes.*/
size_t quotearg_buffer (char *buffer, size_t buffersize,
                        char const *arg, size_t argsize,
                        struct quoting_options const *o);

/* Like quotearg_buffer, except return the result in a newly allocated
   buffer.  It is the caller's responsibility to free the result.  The
   result will not contain embedded null bytes.  */
char *quotearg_alloc (char const *arg, size_t argsize,
                      struct quoting_options const *o);

/* Like quotearg_alloc, except that the length of the result,
   excluding the terminating null byte, is stored into SIZE if it is
   non-NULL.  The result might contain embedded null bytes if ARGSIZE
   was not -1, SIZE was not NULL, the style of O does not use
   backslash escapes, and the flags of O do not request elision of
   null bytes.*/
char *quotearg_alloc_mem (char const *arg, size_t argsize,
                          size_t *size, struct quoting_options const *o);

/* Use storage slot N to return a quoted version of the string ARG.
   Use the default quoting options.
   The returned value points to static storage that can be
   reused by the next call to this function with the same value of N.
   N must be nonnegative.  The output of all functions in the
   quotearg_n family are guaranteed to not contain embedded null
   bytes.*/
char *quotearg_n (int n, char const *arg);

/* Equivalent to quotearg_n (0, ARG).  */
char *quotearg (char const *arg);

/* Use storage slot N to return a quoted version of the argument ARG
   of size ARGSIZE.  This is like quotearg_n (N, ARG), except it can
   quote null bytes.  */
char *quotearg_n_mem (int n, char const *arg, size_t argsize);

/* Equivalent to quotearg_n_mem (0, ARG, ARGSIZE).  */
char *quotearg_mem (char const *arg, size_t argsize);

/* Use style S and storage slot N to return a quoted version of the string ARG.
   This is like quotearg_n (N, ARG), except that it uses S with no other
   options to specify the quoting method.  */
char *quotearg_n_style (int n, enum quoting_style s, char const *arg);

/* Use style S and storage slot N to return a quoted version of the
   argument ARG of size ARGSIZE.  This is like quotearg_n_style
   (N, S, ARG), except it can quote null bytes.  */
char *quotearg_n_style_mem (int n, enum quoting_style s,
                            char const *arg, size_t argsize);

/* Equivalent to quotearg_n_style (0, S, ARG).  */
char *quotearg_style (enum quoting_style s, char const *arg);

/* Equivalent to quotearg_n_style_mem (0, S, ARG, ARGSIZE).  */
char *quotearg_style_mem (enum quoting_style s,
                          char const *arg, size_t argsize);

/* Like quotearg (ARG), except also quote any instances of CH.
   See set_char_quoting for a description of acceptable CH values.  */
char *quotearg_char (char const *arg, char ch);

/* Like quotearg_char (ARG, CH), except it can quote null bytes.  */
char *quotearg_char_mem (char const *arg, size_t argsize, char ch);

/* Equivalent to quotearg_char (ARG, ':').  */
char *quotearg_colon (char const *arg);

/* Like quotearg_colon (ARG), except it can quote null bytes.  */
char *quotearg_colon_mem (char const *arg, size_t argsize);

/* Like quotearg_n_style (N, S, ARG) but with S as custom_quoting_style
   with left quote as LEFT_QUOTE and right quote as RIGHT_QUOTE.  See
   set_custom_quoting for a description of acceptable LEFT_QUOTE and
   RIGHT_QUOTE values.  */
char *quotearg_n_custom (int n, char const *left_quote,
                         char const *right_quote, char const *arg);

/* Like quotearg_n_custom (N, LEFT_QUOTE, RIGHT_QUOTE, ARG) except it
   can quote null bytes.  */
char *quotearg_n_custom_mem (int n, char const *left_quote,
                             char const *right_quote,
                             char const *arg, size_t argsize);

/* Equivalent to quotearg_n_custom (0, LEFT_QUOTE, RIGHT_QUOTE, ARG).  */
char *quotearg_custom (char const *left_quote, char const *right_quote,
                       char const *arg);

/* Equivalent to quotearg_n_custom_mem (0, LEFT_QUOTE, RIGHT_QUOTE, ARG,
                                        ARGSIZE).  */
char *quotearg_custom_mem (char const *left_quote,
                           char const *right_quote,
                           char const *arg, size_t argsize);

/* Free any dynamically allocated memory.  */
void quotearg_free (void);

#endif /* !QUOTEARG_H_ */
