## Copyright (C) 2001-2003, 2005-2015 Free Software Foundation, Inc.

## This program is free software: you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program.  If not, see <http://www.gnu.org/licenses/>.

AM_MAKEINFOFLAGS = --no-split
info_TEXINFOS = doc/bison.texi
doc_bison_TEXINFOS =                            \
  $(CROSS_OPTIONS_TEXI)                         \
  doc/fdl.texi                                  \
  doc/gpl-3.0.texi

# Cannot express dependencies directly on file names because of Automake.
# Obfuscate with a variable.
doc_bison = doc/bison
$(doc_bison).dvi: $(FIGS_GV:.gv=.eps)
$(doc_bison).info: $(FIGS_GV:.gv=.txt)
$(doc_bison).pdf: $(FIGS_GV:.gv=.pdf)
$(doc_bison).html: $(FIGS_GV:.gv=.png)

TEXI2DVI = texi2dvi --build-dir=doc/bison.t2d -I doc
CLEANDIRS = doc/bison.t2d
clean-local:
	rm -rf $(CLEANDIRS)

MOSTLYCLEANFILES += $(top_srcdir)/doc/*.t

CROSS_OPTIONS_PL = $(top_srcdir)/build-aux/cross-options.pl
CROSS_OPTIONS_TEXI = $(top_srcdir)/doc/cross-options.texi
$(CROSS_OPTIONS_TEXI): doc/bison.help $(CROSS_OPTIONS_PL)
# Create $@~ which is the previous contents.  Don't use 'mv' here so
# that even if we are interrupted, the file is still available for
# diff in the next run.  Note that $@ might not exist yet.
	$(AM_V_GEN){ test ! -f $@ || cat $@; } >$@~
	$(AM_V_at)test ! -f $@.tmp || rm -f $@.tmp
	$(AM_V_at)src/bison$(EXEEXT) --help |				 \
	  $(PERL) $(CROSS_OPTIONS_PL) $(top_srcdir)/src/scan-gram.l >$@.tmp
	$(AM_V_at)diff -u $@~ $@.tmp || true
	$(AM_V_at)mv $@.tmp $@
MAINTAINERCLEANFILES = $(CROSS_OPTIONS_TEXI)

## ---------- ##
## Ref card.  ##
## ---------- ##

EXTRA_DIST += doc/refcard.tex
CLEANFILES += doc/refcard.pdf

doc/refcard.pdf: doc/refcard.tex
	$(AM_V_GEN) cd doc && pdftex $(abs_top_srcdir)/doc/refcard.tex



## ---------------- ##
## doc/bison.help.  ##
## ---------------- ##

# Some of our targets (cross-option.texi, bison.1) use "bison --help".
# Since we want to ship the generated file to avoid additional
# requirements over the user environment, we used not depend on
# src/bison itself, but on src/getargs.c and other files.  Yet, we
# need "bison --help" to work to make help2man happy, so we used to
# include "make src/bison" in the commands.  Then we may have a
# problem with concurrent builds, since one make might be aiming one
# of its jobs at compiling src/bison, and another job at generating
# the man page.  If the latter is faster than the former, then we have
# two makes that concurrently try to compile src/bison.  Doomed to
# failure.
#
# As a simple scheme to get our way out, make a stamp file,
# bison.help, which contains --version then --help.  This file can
# depend on bison, which ensures its correctness.  But update it
# *only* if needed (content changes).  This way, we avoid useless
# compilations of cross-option.texi and bison.1.  At the cost of
# repeated builds of bison.help.

EXTRA_DIST += $(top_srcdir)/doc/bison.help
if ! CROSS_COMPILING
MAINTAINERCLEANFILES += $(top_srcdir)/doc/bison.help
$(top_srcdir)/doc/bison.help: src/bison$(EXEEXT)
	$(AM_V_GEN)src/bison$(EXEEXT) --version >doc/bison.help.tmp
	$(AM_V_at) src/bison$(EXEEXT) --help   >>doc/bison.help.tmp
	$(AM_V_at)$(top_srcdir)/build-aux/move-if-change doc/bison.help.tmp $@
endif ! CROSS_COMPILING


## ----------- ##
## Man Pages.  ##
## ----------- ##

dist_man_MANS = $(top_srcdir)/doc/bison.1

EXTRA_DIST += $(dist_man_MANS:.1=.x)
MAINTAINERCLEANFILES += $(dist_man_MANS)

# Differences to ignore when comparing the man page (the date).
remove_time_stamp = \
  sed 's/^\(\.TH[^"]*"[^"]*"[^"]*\)"[^"]*"/\1/'

# Depend on configure to get version number changes.
if ! CROSS_COMPILING
MAN_DEPS = doc/bison.help doc/bison.x $(top_srcdir)/configure
endif

$(top_srcdir)/doc/bison.1: $(MAN_DEPS)
	$(AM_V_GEN)$(HELP2MAN)			\
	    --include=$(top_srcdir)/doc/bison.x	\
	    --output=$@.t src/bison$(EXEEXT)
	$(AM_V_at)if $(remove_time_stamp) $@ >$@a.t 2>/dev/null &&	 \
	   $(remove_time_stamp) $@.t | cmp $@a.t - >/dev/null 2>&1; then \
	  touch $@;							 \
	else								 \
	  mv $@.t $@;							 \
	fi
	$(AM_V_at)rm -f $@*.t

if ENABLE_YACC
nodist_man_MANS = doc/yacc.1
endif

## ----------------------------- ##
## Graphviz examples generation. ##
## ----------------------------- ##

CLEANFILES += $(FIGS_GV:.gv=.eps) $(FIGS_GV:.gv=.pdf) $(FIGS_GV:.gv=.png)
FIGS_GV =                                               \
  doc/figs/example.gv                                   \
  doc/figs/example-reduce.gv doc/figs/example-shift.gv
EXTRA_DIST +=                                                   \
  $(FIGS_GV) $(FIGS_GV:.gv=.txt)                                \
  $(FIGS_GV:.gv=.eps) $(FIGS_GV:.gv=.pdf) $(FIGS_GV:.gv=.png)
SUFFIXES += .gv .eps .pdf .png

.gv.eps:
	$(AM_V_GEN) $(MKDIR_P) `echo "./$@" | sed -e 's,/[^/]*$$,,'`
	$(AM_V_at) $(DOT) -Gmargin=0 -Teps $< >$@.tmp
	$(AM_V_at) mv $@.tmp $@

.gv.pdf:
	$(AM_V_GEN) $(MKDIR_P) `echo "./$@" | sed -e 's,/[^/]*$$,,'`
	$(AM_V_at) $(DOT) -Gmargin=0 -Tpdf $< >$@.tmp
	$(AM_V_at) mv $@.tmp $@

.gv.png:
	$(AM_V_GEN) $(MKDIR_P) `echo "./$@" | sed -e 's,/[^/]*$$,,'`
	$(AM_V_at) $(DOT) -Gmargin=0 -Tpng $< >$@.tmp
	$(AM_V_at) mv $@.tmp $@

## -------------- ##
## Doxygenation.  ##
## -------------- ##

DOXYGEN = doxygen

.PHONY: doc html

doc: html

html-local: doc/Doxyfile
	$(AM_V_GEN) $(DOXYGEN) doc/Doxyfile

edit = sed -e 's,@PACKAGE_NAME\@,$(PACKAGE_NAME),g' \
	   -e 's,@PACKAGE_VERSION\@,$(PACKAGE_VERSION),g' \
	   -e 's,@PERL\@,$(PERL),g' \
	   -e 's,@top_builddir\@,$(top_builddir),g' \
	   -e 's,@top_srcdir\@,$(top_srcdir),g'

EXTRA_DIST += doc/Doxyfile.in
CLEANFILES += doc/Doxyfile
# Sed is used to generate Doxyfile from Doxyfile.in instead of
# configure, because the former is way faster than the latter.
doc/Doxyfile: $(top_srcdir)/doc/Doxyfile.in
	$(AM_V_GEN) $(edit) $(top_srcdir)/doc/Doxyfile.in >doc/Doxyfile

CLEANDIRS += doc/html
