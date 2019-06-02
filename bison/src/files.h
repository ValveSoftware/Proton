/* File names and variables for bison,

   Copyright (C) 1984, 1989, 2000-2002, 2006-2007, 2009-2015 Free
   Software Foundation, Inc.

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

#ifndef FILES_H_
# define FILES_H_

# include "uniqstr.h"

/* File name specified with -o for the output file, or 0 if no -o.  */
extern char const *spec_outfile;

/* File name for the parser (i.e., the one above, or its default.) */
extern char *parser_file_name;

/* Symbol prefix specified with -p, or 0 if no -p.  */
extern const char *spec_name_prefix;

/* File name prefix specified with -b, or 0 if no -b.  */
extern char const *spec_file_prefix;

/* --verbose. */
extern char *spec_verbose_file;

/* File name specified for the output graph.  */
extern char *spec_graph_file;

/* File name specified for the xml output.  */
extern char *spec_xml_file;

/* File name specified with --defines.  */
extern char *spec_defines_file;

/* Directory prefix of output file names.  */
extern char *dir_prefix;

/* The file name as given on the command line.
   Not named "input_file" because Flex uses this name for an argument,
   and therefore GCC warns about a name clash. */
extern uniqstr grammar_file;

/* The current file name.  Might change with %include, or with #line.  */
extern uniqstr current_file;

/* The computed base for output file names.  */
extern char *all_but_ext;

void compute_output_file_names (void);
void output_file_names_free (void);

/** Record that we generate a file.
 *
 *  \param file_name  the name of file being generated.
 *  \param source whether this is a source file (*c, *.java...)
 *                as opposed to a report (*.output, *.dot...).
 */
void output_file_name_check (char **file_name, bool source);

/** Remove all the generated source files. */
void unlink_generated_sources (void);

FILE *xfopen (const char *name, char const *mode);
void xfclose (FILE *ptr);
FILE *xfdopen (int fd, char const *mode);

#endif /* !FILES_H_ */
