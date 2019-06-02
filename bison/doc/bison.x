[name]
bison \- GNU Project parser generator (yacc replacement)

[description]
.I Bison
is a parser generator in the style of
.IR yacc (1).
It should be upwardly compatible with input files designed
for
.IR yacc .
.PP
Input files should follow the
.I yacc
convention of ending in
.BR .y .
Unlike
.IR yacc ,
the generated files do not have fixed names, but instead use the prefix
of the input file.
Moreover, if you need to put
.I C++
code in the input file, you can end his name by a C++-like extension
(.ypp or .y++), then bison will follow your extension to name the
output file (.cpp or .c++).
For instance, a grammar description file named
.B parse.yxx
would produce the generated parser in a file named
.BR parse.tab.cxx ,
instead of
.IR yacc 's
.B y.tab.c
or old
.I Bison
version's
.BR parse.tab.c .
.PP
This description of the options that can be given to
.I bison
is adapted from the node
.B Invocation
in the
.B bison.texi
manual, which should be taken as authoritative.
.PP
.I Bison
supports both traditional single-letter options and mnemonic long
option names.  Long option names are indicated with
.B \-\-
instead of
.BR \- .
Abbreviations for option names are allowed as long as they
are unique.  When a long option takes an argument, like
.BR \-\-file-prefix ,
connect the option name and the argument with
.BR = .

[see also]
.BR lex (1),
.BR flex (1),
.BR yacc (1).
