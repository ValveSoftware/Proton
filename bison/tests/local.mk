## Makefile for Bison testsuite.

# Copyright (C) 2000-2015 Free Software Foundation, Inc.
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

EXTRA_DIST += $(TESTSUITE_AT) tests/testsuite

DISTCLEANFILES       += tests/atconfig $(check_SCRIPTS)
MAINTAINERCLEANFILES += $(TESTSUITE)

## ------------ ##
## package.m4.  ##
## ------------ ##

$(top_srcdir)/tests/package.m4: $(top_srcdir)/configure
	$(AM_V_GEN)rm -f $@ $@.tmp
	$(AM_V_at){ \
	  echo '# Signature of the current package.'; \
	  echo 'm4_define([AT_PACKAGE_NAME],      [$(PACKAGE_NAME)])'; \
	  echo 'm4_define([AT_PACKAGE_TARNAME],   [$(PACKAGE_TARNAME)])'; \
	  echo 'm4_define([AT_PACKAGE_VERSION],   [$(PACKAGE_VERSION)])'; \
	  echo 'm4_define([AT_PACKAGE_STRING],    [$(PACKAGE_STRING)])'; \
	  echo 'm4_define([AT_PACKAGE_BUGREPORT], [$(PACKAGE_BUGREPORT)])'; \
	} >$@.tmp
	$(AM_V_at)mv $@.tmp $@

## ------------------------- ##
## Generate the test suite.  ##
## ------------------------- ##

TESTSUITE_AT =                                  \
  tests/testsuite.at                            \
                                                \
  tests/actions.at                              \
  tests/c++.at                                  \
  tests/calc.at                                 \
  tests/conflicts.at                            \
  tests/cxx-type.at                             \
  tests/existing.at                             \
  tests/glr-regression.at                       \
  tests/headers.at                              \
  tests/input.at                                \
  tests/java.at                                 \
  tests/javapush.at                             \
  tests/local.at                                \
  tests/named-refs.at                           \
  tests/output.at                               \
  tests/package.m4                              \
  tests/push.at                                 \
  tests/reduce.at                               \
  tests/regression.at                           \
  tests/sets.at                                 \
  tests/skeletons.at                            \
  tests/synclines.at                            \
  tests/torture.at                              \
  tests/types.at

TESTSUITE = $(top_srcdir)/tests/testsuite

AUTOTEST = $(AUTOM4TE) --language=autotest
AUTOTESTFLAGS = -I $(top_srcdir)/tests
$(TESTSUITE): $(TESTSUITE_AT)
	$(AM_V_GEN) \
	  $(AUTOTEST) $(AUTOTESTFLAGS) $(srcdir)/tests/testsuite.at -o $@.tmp
	$(AM_V_at)$(PERL) -pi -e 's/\@tb\@/\t/g' $@.tmp
	$(AM_V_at)mv $@.tmp $@


## -------------------- ##
## Run the test suite.  ##
## -------------------- ##

# Move into tests/ so that testsuite.dir etc. be created there.
RUN_TESTSUITE = $(TESTSUITE) -C tests $(TESTSUITEFLAGS)
check_SCRIPTS = $(BISON) tests/atconfig tests/atlocal
RUN_TESTSUITE_deps = all $(TESTSUITE) $(check_SCRIPTS)

clean-local: clean-local-tests
clean-local-tests:
	test ! -f $(TESTSUITE) || $(TESTSUITE) -C tests --clean

check-local: $(RUN_TESTSUITE_deps)
	$(RUN_TESTSUITE)

# Run the test suite on the *installed* tree.
installcheck-local: $(RUN_TESTSUITE_deps)
	$(RUN_TESTSUITE) AUTOTEST_PATH='$(bindir)'

# Be real mean with it.
.PHONY: maintainer-check-g++
maintainer-check-g++: $(RUN_TESTSUITE_deps)
	$(RUN_TESTSUITE) --compile-c-with-cxx

.PHONY: maintainer-check-posix
maintainer-check-posix: $(RUN_TESTSUITE_deps)
	$(RUN_TESTSUITE) POSIXLY_CORRECT=1 _POSIX2_VERSION=200112

.PHONY: maintainer-check-valgrind
maintainer-check-valgrind: $(RUN_TESTSUITE_deps)
	test -z '$(VALGRIND)' ||					\
	  $(RUN_TESTSUITE)						\
	    PREBISON='$(VALGRIND_PREBISON)' PREPARSER='$(VALGRIND) -q'	\
	    VALGRIND_OPTS='--leak-check=full --show-reachable=yes'

.PHONY: maintainer-check
maintainer-check: maintainer-check-posix maintainer-check-valgrind maintainer-check-g++

.PHONY: maintainer-push-check
maintainer-push-check:
	$(MAKE) $(AM_MAKEFLAGS) maintainer-check			\
	  TESTSUITEFLAGS='BISON_USE_PUSH_FOR_PULL=1 $(TESTSUITEFLAGS)'

.PHONY: maintainer-xml-check
maintainer-xml-check:
	$(MAKE) $(AM_MAKEFLAGS) maintainer-check		\
	  TESTSUITEFLAGS='BISON_TEST_XML=1 $(TESTSUITEFLAGS)'

.PHONY: maintainer-release-check
maintainer-release-check: maintainer-check maintainer-push-check maintainer-xml-check
