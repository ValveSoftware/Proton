# Customize maint.mk                           -*- makefile -*-
# Copyright (C) 2008-2015 Free Software Foundation, Inc.

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

# Update version, then recompile so that tests/bison --version be
# up-to-date, then compile our parser again with our up-to-date bison.
.PHONY: regen
regen: _version
	$(MAKE) $(AM_MAKEFLAGS)
	touch $(srcdir)/src/parse-gram.y
	$(MAKE) $(AM_MAKEFLAGS)

# Used in maint.mk's web-manual rule
manual_title = The Yacc-compatible Parser Generator
gendocs_options_ = -I $(abs_top_srcdir)/doc -I $(abs_top_builddir)/doc

# It's useful to run maintainer-*check* targets during development, but we
# don't want to wait on a recompile because of an update to $(VERSION).  Thus,
# override the _is-dist-target from GNUmakefile so that maintainer-*check*
# targets are filtered out.
_is-dist-target = $(filter-out %clean maintainer-check% maintainer-%-check, \
  $(filter maintainer-% dist% alpha beta major,$(MAKECMDGOALS)))

url_dir_list = \
  ftp://$(gnu_rel_host)/gnu/bison

# Tests not to run as part of "make distcheck".
local-checks-to-skip =			\
  sc_immutable_NEWS			\
  sc_prohibit_atoi_atof

# The local directory containing the checked-out copy of gnulib used in
# this release.  Used solely to get a date for the "announcement" target.
gnulib_dir = $(srcdir)/gnulib

bootstrap-tools = autoconf,automake,flex,gettext,gnulib

announcement_Cc_ = \
  bug-bison@gnu.org, help-bison@gnu.org, bison-patches@gnu.org, \
  coordinator@translationproject.org

update-copyright: update-b4-copyright update-package-copyright-year
update-copyright-env = \
  UPDATE_COPYRIGHT_FORCE=1 UPDATE_COPYRIGHT_USE_INTERVALS=1


## -------------------- ##
## More syntax-checks.  ##
## -------------------- ##

# At least for Mac OS X's grep, the order between . and [ in "[^.[]"
# matters:
# $ LC_ALL=fr_FR grep -nE '[^[.]' /dev/null
# $ LC_ALL=C grep -nE '[^[.]' /dev/null
# grep: invalid collating element or class
# $ LC_ALL=fr_FR grep -nE '[^.[]' /dev/null
# $ LC_ALL=C grep -nE '[^.[]' /dev/null
sc_at_parser_check:
	@prohibit='AT_PARSER_CHECK\(\[+[^.[]|AT_CHECK\(\[+\./'		\
	halt='use AT_PARSER_CHECK for and only for generated parsers'	\
	  $(_sc_search_regexp)

# Indent only with spaces.
# Taken from Coreutils.
sc_prohibit_tab_based_indentation:
	@prohibit='^ *	'						\
	halt='TAB in indentation; use only spaces'			\
	  $(_sc_search_regexp)

# Prohibit the use of `...` in tests/.  Use $(...) instead.
# Taken from Coreutils.
# Not ready for Bison yet.
#sc_prohibit_test_backticks:
#	@prohibit='`' in_vc_files='^tests/'		\
#	halt='use $$(...), not `...` in tests/'		\
#	  $(_sc_search_regexp)

# Enforce recommended preprocessor indentation style.
# Taken from Coreutils.
sc_preprocessor_indentation:
	@if cppi --version >/dev/null 2>&1; then			\
	  $(VC_LIST_EXCEPT) | grep '\.[ch]$$' | xargs cppi -a -c	\
	    || { echo '$(ME): incorrect preprocessor indentation' 1>&2;	\
		exit 1; };						\
	else								\
	  echo '$(ME): skipping test $@: cppi not installed' 1>&2;	\
	fi

###########################################################
# Taken from Coreutils.
_p0 = \([^"'/]\|"\([^\"]\|[\].\)*"\|'\([^\']\|[\].\)*'
_pre = $(_p0)\|[/][^"'/*]\|[/]"\([^\"]\|[\].\)*"\|[/]'\([^\']\|[\].\)*'\)*
_pre_anchored = ^\($(_pre)\)
_comment_and_close = [^*]\|[*][^/*]\)*[*][*]*/
# help font-lock mode: '

# A sed expression that removes ANSI C and ISO C99 comments.
# Derived from the one in GNU gettext's 'moopp' preprocessor.
_sed_remove_comments =					\
/[/][/*]/{						\
  ta;							\
  :a;							\
  s,$(_pre_anchored)//.*,\1,;				\
  te;							\
  s,$(_pre_anchored)/[*]\($(_comment_and_close),\1 ,;	\
  ta;							\
  /^$(_pre)[/][*]/{					\
    s,$(_pre_anchored)/[*].*,\1 ,;			\
    tu;							\
    :u;							\
    n;							\
    s,^\($(_comment_and_close),,;			\
    tv;							\
    s,^.*$$,,;						\
    bu;							\
    :v;							\
  };							\
  :e;							\
}
# Quote all single quotes.
_sed_rm_comments_q = $(subst ','\'',$(_sed_remove_comments))
# help font-lock mode: '

_space_before_paren_exempt =? \\n\\$$
_space_before_paren_exempt = \
  (^ *\#|(LA)?LR\([01]\)|percent_(code|define)|b4_syncline|m4_(define|init)|symbol)
# Ensure that there is a space before each open parenthesis in C code.
sc_space_before_open_paren:
	@if $(VC_LIST_EXCEPT) | grep -l '\.[ch]$$' > /dev/null; then	\
	  fail=0;							\
	  for c in $$($(VC_LIST_EXCEPT) | grep '\.[ch]$$'); do		\
	    sed '$(_sed_rm_comments_q)' $$c 2>/dev/null			\
	      | grep -i '[[:alnum:]]('					\
	      | grep -vE '$(_space_before_paren_exempt)'		\
	      | grep . && { fail=1; echo "*** $$c"; };			\
	  done;								\
	  test $$fail = 1 &&						\
	    { echo '$(ME): the above files lack a space-before-open-paren' \
		1>&2; exit 1; } || :;					\
	else :;								\
	fi

## -------------------------- ##
## syntax-checks exceptions.  ##
## -------------------------- ##

exclude = \
  $(foreach a,$(1),$(eval $(subst $$,$$$$,exclude_file_name_regexp--sc_$(a))))
$(call exclude,								\
  bindtextdomain=^lib/main.c$$						\
  preprocessor_indentation=^data/|^lib/|^src/parse-gram.[ch]$$		\
  program_name=^lib/main.c$$						\
  prohibit_always-defined_macros=^data/yacc.c$$|^djgpp/			\
  prohibit_always-defined_macros+=?|^lib/timevar.c$$			\
  prohibit_always-defined_macros+=?|^src/(parse-gram.c|system.h)$$	\
  prohibit_always-defined_macros+=?|^tests/regression.at$$		\
  prohibit_always_true_header_tests=^djgpp/subpipe.h$$|^lib/timevar.c$$	\
  prohibit_always_true_header_tests+=?|^m4/timevar.m4$$			\
  prohibit_defined_have_decl_tests=?|^lib/timevar.c$$			\
  prohibit_doubled_word=^tests/named-refs.at$$                          \
  prohibit_magic_number_exit=^doc/bison.texi$$				\
  prohibit_magic_number_exit+=?|^tests/(conflicts|regression).at$$	\
  prohibit_strcmp=^doc/bison\.texi|tests/local\.at$$			\
  prohibit_tab_based_indentation=\.(am|mk)$$|^djgpp/|^\.git		\
  require_config_h_first=^(lib/yyerror|data/(glr|yacc))\.c$$		\
  space_before_open_paren=^(data/|djgpp/)                               \
  unmarked_diagnostics=^(djgpp/|doc/bison.texi$$|tests/c\+\+\.at$$)	\
)
