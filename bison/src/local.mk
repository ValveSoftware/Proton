# Copyright (C) 2001-2015 Free Software Foundation, Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

LDADD = lib/libbison.a $(LIBINTL)

bin_PROGRAMS = src/bison
# Prettify Automake-computed names of compiled objects.
src_bison_SHORTNAME = bison

src_bison_CFLAGS = $(AM_CFLAGS) $(WERROR_CFLAGS)
src_bison_SOURCES =                             \
  src/AnnotationList.c                          \
  src/AnnotationList.h                          \
  src/InadequacyList.c                          \
  src/InadequacyList.h                          \
  src/LR0.c                                     \
  src/LR0.h                                     \
  src/Sbitset.c                                 \
  src/Sbitset.h                                 \
  src/assoc.c                                   \
  src/assoc.h                                   \
  src/closure.c                                 \
  src/closure.h                                 \
  src/complain.c                                \
  src/complain.h                                \
  src/conflicts.c                               \
  src/conflicts.h                               \
  src/derives.c                                 \
  src/derives.h                                 \
  src/files.c                                   \
  src/files.h                                   \
  src/flex-scanner.h                            \
  src/getargs.c                                 \
  src/getargs.h                                 \
  src/gram.c                                    \
  src/gram.h                                    \
  src/graphviz.c                                \
  src/graphviz.h                                \
  src/lalr.c                                    \
  src/lalr.h                                    \
  src/ielr.c                                    \
  src/ielr.h                                    \
  src/location.c                                \
  src/location.h                                \
  src/main.c                                    \
  src/muscle-tab.c                              \
  src/muscle-tab.h                              \
  src/named-ref.c                               \
  src/named-ref.h                               \
  src/nullable.c                                \
  src/nullable.h                                \
  src/output.c                                  \
  src/output.h                                  \
  src/parse-gram.y                              \
  src/print-xml.c                               \
  src/print-xml.h                               \
  src/print.c                                   \
  src/print.h                                   \
  src/print_graph.c                             \
  src/print_graph.h                             \
  src/reader.c                                  \
  src/reader.h                                  \
  src/reduce.c                                  \
  src/reduce.h                                  \
  src/relation.c                                \
  src/relation.h                                \
  src/scan-code-c.c                             \
  src/scan-code.h                               \
  src/scan-gram-c.c                             \
  src/scan-gram.h                               \
  src/scan-skel-c.c                             \
  src/scan-skel.h                               \
  src/state.c                                   \
  src/state.h                                   \
  src/symlist.c                                 \
  src/symlist.h                                 \
  src/symtab.c                                  \
  src/symtab.h                                  \
  src/system.h                                  \
  src/tables.c                                  \
  src/tables.h                                  \
  src/uniqstr.c                                 \
  src/uniqstr.h

EXTRA_src_bison_SOURCES =                       \
  src/scan-code.l                               \
  src/scan-gram.l                               \
  src/scan-skel.l

BUILT_SOURCES +=                                \
  src/parse-gram.c                              \
  src/parse-gram.h                              \
  src/scan-code.c                               \
  src/scan-gram.c                               \
  src/scan-skel.c


## ------ ##
## yacc.  ##
## ------ ##

if ENABLE_YACC
bin_SCRIPTS = src/yacc
endif
EXTRA_SCRIPTS = src/yacc
MOSTLYCLEANFILES += src/yacc

src/yacc:
	$(AM_V_GEN)rm -f $@ $@.tmp
	$(AM_V_at)echo '#! /bin/sh' >$@.tmp
	$(AM_V_at)echo "exec '$(bindir)/bison' -y "'"$$@"' >>$@.tmp
	$(AM_V_at)chmod a+x $@.tmp
	$(AM_V_at)mv $@.tmp $@
