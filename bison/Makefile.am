## Process this file with automake to produce Makefile.in.

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

AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = -I m4

SUBDIRS = po runtime-po .

# Files installed for use by Automake.
aclocaldir = @aclocaldir@
aclocal_DATA = m4/bison-i18n.m4

EXTRA_DIST = .prev-version .version cfg.mk PACKAGING \
  ChangeLog-1998 ChangeLog-2012 ChangeLog

dist_doc_DATA = AUTHORS COPYING NEWS README THANKS TODO

## Running the bison from this tarball.  To generate our own parser,
## but also to run the tests.  Of course, you ought to keep a sane
## version of Bison nearby...
BISON = $(top_builddir)/tests/bison
BISON_IN = $(top_srcdir)/tests/bison.in
YACC = $(BISON) -o y.tab.c
AM_YFLAGS = -d -v -Werror -Wall -Wno-yacc --report=all

# Initialization before completion by local.mk's.
AM_CFLAGS = $(WARN_CFLAGS)
# Find builddir/src/scan-code.c etc.  For some reason "-I./lib"
# instead of "-Ilib" avoids infinite recursions on #include_next.
AM_CPPFLAGS = -I. -I./lib -I$(top_srcdir) -I$(top_srcdir)/lib
BUILT_SOURCES =
CLEANFILES =
DISTCLEANFILES =
EXTRA_DIST += $(dist_TESTS)
MOSTLYCLEANDIRS =
MOSTLYCLEANFILES =
SUFFIXES =
TESTS = $(dist_TESTS)
check_PROGRAMS =
dist_TESTS =
noinst_LIBRARIES =

include build-aux/local.mk
include data/local.mk
include djgpp/local.mk
include doc/local.mk
include etc/local.mk
include examples/local.mk
include lib/local.mk
include src/local.mk
include tests/local.mk

# See comments in build-aux/git-version-gen.  However, we make .version depend
# on configure so that .version and VERSION/PACKAGE_VERSION stay in sync in the
# working copy (for example, when you run autoreconf && make).  Allowing these
# to fall out of sync appears to have little potential to improve Bison build
# efficiency (even if we were to replace VERSION/PACKAGE_VERSION with .version
# everywhere possible).  On the other hand, it could be harmful.  For example,
# a developer might naively reference .version in a test case while the bison
# executable still compiles with VERSION, and so the test case might fail or
# pass incorrectly.
BUILT_SOURCES += $(top_srcdir)/.version
$(top_srcdir)/.version: configure
	echo $(VERSION) > $@-t && mv $@-t $@
dist-hook: gen-ChangeLog
	echo $(VERSION) > $(distdir)/.tarball-version

.PHONY: update-b4-copyright update-package-copyright-year
update-b4-copyright:
	$(AM_V_GEN)find $(srcdir)/data -type f          \
	  | xargs $(srcdir)/build-aux/$@
	@echo 'warning: src/parse-gram.[hc] may need to be regenerated.'
update-package-copyright-year:
	$(AM_V_GEN)$(srcdir)/build-aux/$@ $(srcdir)/configure.ac

gen_start_date = 2012-01-16
.PHONY: gen-ChangeLog
gen-ChangeLog:
	$(AM_V_GEN)if test -d $(srcdir)/.git; then	\
	  cl=$(distdir)/ChangeLog &&			\
	  rm -f $$cl.tmp &&				\
	  $(top_srcdir)/build-aux/gitlog-to-changelog	\
	    --strip-tab					\
	    --strip-cherry-pick				\
	    --no-cluster				\
	    --amend=$(srcdir)/build-aux/git-log-fix	\
	    --srcdir=$(srcdir)				\
	    --since=$(gen_start_date) > $$cl.tmp &&	\
	  mv -f $$cl.tmp $$cl;				\
	fi
