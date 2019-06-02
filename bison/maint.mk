# -*-Makefile-*-
# This Makefile fragment tries to be general-purpose enough to be
# used by many projects via the gnulib maintainer-makefile module.

## Copyright (C) 2001-2015 Free Software Foundation, Inc.
##
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

# This is reported not to work with make-3.79.1
# ME := $(word $(words $(MAKEFILE_LIST)),$(MAKEFILE_LIST))
ME := maint.mk

# Helper variables.
_empty =
_sp = $(_empty) $(_empty)

# _equal,S1,S2
# ------------
# If S1 == S2, return S1, otherwise the empty string.
_equal = $(and $(findstring $(1),$(2)),$(findstring $(2),$(1)))

# member-check,VARIABLE,VALID-VALUES
# ----------------------------------
# Check that $(VARIABLE) is in the space-separated list of VALID-VALUES, and
# return it.  Die otherwise.
member-check =								\
  $(strip								\
    $(if $($(1)),							\
      $(if $(findstring $(_sp),$($(1))),				\
          $(error invalid $(1): '$($(1))', expected $(2)),		\
          $(or $(findstring $(_sp)$($(1))$(_sp),$(_sp)$(2)$(_sp)),	\
            $(error invalid $(1): '$($(1))', expected $(2)))),		\
      $(error $(1) undefined)))

# Do not save the original name or timestamp in the .tar.gz file.
# Use --rsyncable if available.
gzip_rsyncable := \
  $(shell gzip --help 2>/dev/null|grep rsyncable >/dev/null \
    && printf %s --rsyncable)
GZIP_ENV = '--no-name --best $(gzip_rsyncable)'

GIT = git
VC = $(GIT)

VC_LIST = $(srcdir)/$(_build-aux)/vc-list-files -C $(srcdir)

# You can override this variable in cfg.mk to set your own regexp
# matching files to ignore.
VC_LIST_ALWAYS_EXCLUDE_REGEX ?= ^$$

# This is to preprocess robustly the output of $(VC_LIST), so that even
# when $(srcdir) is a pathological name like "....", the leading sed command
# removes only the intended prefix.
_dot_escaped_srcdir = $(subst .,\.,$(srcdir))

# Post-process $(VC_LIST) output, prepending $(srcdir)/, but only
# when $(srcdir) is not ".".
ifeq ($(srcdir),.)
  _prepend_srcdir_prefix =
else
  _prepend_srcdir_prefix = | $(SED) 's|^|$(srcdir)/|'
endif

# In order to be able to consistently filter "."-relative names,
# (i.e., with no $(srcdir) prefix), this definition is careful to
# remove any $(srcdir) prefix, and to restore what it removes.
_sc_excl = \
  $(or $(exclude_file_name_regexp--$@),^$$)
VC_LIST_EXCEPT = \
  $(VC_LIST) | $(SED) 's|^$(_dot_escaped_srcdir)/||' \
	| if test -f $(srcdir)/.x-$@; then grep -vEf $(srcdir)/.x-$@; \
	  else grep -Ev -e "$${VC_LIST_EXCEPT_DEFAULT-ChangeLog}"; fi \
	| grep -Ev -e '($(VC_LIST_ALWAYS_EXCLUDE_REGEX)|$(_sc_excl))' \
	$(_prepend_srcdir_prefix)

ifeq ($(origin prev_version_file), undefined)
  prev_version_file = $(srcdir)/.prev-version
endif

PREV_VERSION := $(shell cat $(prev_version_file) 2>/dev/null)
VERSION_REGEXP = $(subst .,\.,$(VERSION))
PREV_VERSION_REGEXP = $(subst .,\.,$(PREV_VERSION))

ifeq ($(VC),$(GIT))
  this-vc-tag = v$(VERSION)
  this-vc-tag-regexp = v$(VERSION_REGEXP)
else
  tag-package = $(shell echo "$(PACKAGE)" | tr '[:lower:]' '[:upper:]')
  tag-this-version = $(subst .,_,$(VERSION))
  this-vc-tag = $(tag-package)-$(tag-this-version)
  this-vc-tag-regexp = $(this-vc-tag)
endif
my_distdir = $(PACKAGE)-$(VERSION)

# Old releases are stored here.
release_archive_dir ?= ../release

# If RELEASE_TYPE is undefined, but RELEASE is, use its second word.
# But overwrite VERSION.
ifdef RELEASE
  VERSION := $(word 1, $(RELEASE))
  RELEASE_TYPE ?= $(word 2, $(RELEASE))
endif

# Validate and return $(RELEASE_TYPE), or die.
RELEASE_TYPES = alpha beta stable
release-type = $(call member-check,RELEASE_TYPE,$(RELEASE_TYPES))

# Override gnu_rel_host and url_dir_list in cfg.mk if these are not right.
# Use alpha.gnu.org for alpha and beta releases.
# Use ftp.gnu.org for stable releases.
gnu_ftp_host-alpha = alpha.gnu.org
gnu_ftp_host-beta = alpha.gnu.org
gnu_ftp_host-stable = ftp.gnu.org
gnu_rel_host ?= $(gnu_ftp_host-$(release-type))

url_dir_list ?= $(if $(call _equal,$(gnu_rel_host),ftp.gnu.org),	\
                     http://ftpmirror.gnu.org/$(PACKAGE),		\
                     ftp://$(gnu_rel_host)/gnu/$(PACKAGE))

# Override this in cfg.mk if you are using a different format in your
# NEWS file.
today = $(shell date +%Y-%m-%d)

# Select which lines of NEWS are searched for $(news-check-regexp).
# This is a sed line number spec.  The default says that we search
# lines 1..10 of NEWS for $(news-check-regexp).
# If you want to search only line 3 or only lines 20-22, use "3" or "20,22".
news-check-lines-spec ?= 1,10
news-check-regexp ?= '^\*.* $(VERSION_REGEXP) \($(today)\)'

# Prevent programs like 'sort' from considering distinct strings to be equal.
# Doing it here saves us from having to set LC_ALL elsewhere in this file.
export LC_ALL = C

## --------------- ##
## Sanity checks.  ##
## --------------- ##

ifneq ($(_gl-Makefile),)
_cfg_mk := $(wildcard $(srcdir)/cfg.mk)

# Collect the names of rules starting with 'sc_'.
syntax-check-rules := $(sort $(shell $(SED) -n \
   's/^\(sc_[a-zA-Z0-9_-]*\):.*/\1/p' $(srcdir)/$(ME) $(_cfg_mk)))
.PHONY: $(syntax-check-rules)

ifeq ($(shell $(VC_LIST) >/dev/null 2>&1; echo $$?),0)
  local-checks-available += $(syntax-check-rules)
else
  local-checks-available += no-vc-detected
no-vc-detected:
	@echo "No version control files detected; skipping syntax check"
endif
.PHONY: $(local-checks-available)

# Arrange to print the name of each syntax-checking rule just before running it.
$(syntax-check-rules): %: %.m
sc_m_rules_ = $(patsubst %, %.m, $(syntax-check-rules))
.PHONY: $(sc_m_rules_)
$(sc_m_rules_):
	@echo $(patsubst sc_%.m, %, $@)
	@date +%s.%N > .sc-start-$(basename $@)

# Compute and print the elapsed time for each syntax-check rule.
sc_z_rules_ = $(patsubst %, %.z, $(syntax-check-rules))
.PHONY: $(sc_z_rules_)
$(sc_z_rules_): %.z: %
	@end=$$(date +%s.%N);						\
	start=$$(cat .sc-start-$*);					\
	rm -f .sc-start-$*;						\
	awk -v s=$$start -v e=$$end					\
	  'END {printf "%.2f $(patsubst sc_%,%,$*)\n", e - s}' < /dev/null

# The patsubst here is to replace each sc_% rule with its sc_%.z wrapper
# that computes and prints elapsed time.
local-check :=								\
  $(patsubst sc_%, sc_%.z,						\
    $(filter-out $(local-checks-to-skip), $(local-checks-available)))

syntax-check: $(local-check)
endif

# _sc_search_regexp
#
# This macro searches for a given construct in the selected files and
# then takes some action.
#
# Parameters (shell variables):
#
#  prohibit | require
#
#     Regular expression (ERE) denoting either a forbidden construct
#     or a required construct.  Those arguments are exclusive.
#
#  exclude
#
#     Regular expression (ERE) denoting lines to ignore that matched
#     a prohibit construct.  For example, this can be used to exclude
#     comments that mention why the nearby code uses an alternative
#     construct instead of the simpler prohibited construct.
#
#  in_vc_files | in_files
#
#     grep-E-style regexp selecting the files to check.  For in_vc_files,
#     the regexp is used to select matching files from the list of all
#     version-controlled files; for in_files, it's from the names printed
#     by "find $(srcdir)".  When neither is specified, use all files that
#     are under version control.
#
#  containing | non_containing
#
#     Select the files (non) containing strings matching this regexp.
#     If both arguments are specified then CONTAINING takes
#     precedence.
#
#  with_grep_options
#
#     Extra options for grep.
#
#  ignore_case
#
#     Ignore case.
#
#  halt
#
#     Message to display before to halting execution.
#
# Finally, you may exempt files based on an ERE matching file names.
# For example, to exempt from the sc_space_tab check all files with the
# .diff suffix, set this Make variable:
#
# exclude_file_name_regexp--sc_space_tab = \.diff$
#
# Note that while this functionality is mostly inherited via VC_LIST_EXCEPT,
# when filtering by name via in_files, we explicitly filter out matching
# names here as well.

# Initialize each, so that envvar settings cannot interfere.
export require =
export prohibit =
export exclude =
export in_vc_files =
export in_files =
export containing =
export non_containing =
export halt =
export with_grep_options =

# By default, _sc_search_regexp does not ignore case.
export ignore_case =
_ignore_case = $$(test -n "$$ignore_case" && printf %s -i || :)

define _sc_say_and_exit
   dummy=; : so we do not need a semicolon before each use;		\
   { printf '%s\n' "$(ME): $$msg" 1>&2; exit 1; };
endef

define _sc_search_regexp
   dummy=; : so we do not need a semicolon before each use;		\
									\
   : Check arguments;							\
   test -n "$$prohibit" && test -n "$$require"				\
     && { msg='Cannot specify both prohibit and require'		\
          $(_sc_say_and_exit) } || :;					\
   test -z "$$prohibit" && test -z "$$require"				\
     && { msg='Should specify either prohibit or require'		\
          $(_sc_say_and_exit) } || :;					\
   test -z "$$prohibit" && test -n "$$exclude"				\
     && { msg='Use of exclude requires a prohibit pattern'		\
          $(_sc_say_and_exit) } || :;					\
   test -n "$$in_vc_files" && test -n "$$in_files"			\
     && { msg='Cannot specify both in_vc_files and in_files'		\
          $(_sc_say_and_exit) } || :;					\
   test "x$$halt" != x							\
     || { msg='halt not defined' $(_sc_say_and_exit) };			\
									\
   : Filter by file name;						\
   if test -n "$$in_files"; then					\
     files=$$(find $(srcdir) | grep -E "$$in_files"			\
              | grep -Ev '$(_sc_excl)');				\
   else									\
     files=$$($(VC_LIST_EXCEPT));					\
     if test -n "$$in_vc_files"; then					\
       files=$$(echo "$$files" | grep -E "$$in_vc_files");		\
     fi;								\
   fi;									\
									\
   : Filter by content;							\
   test -n "$$files" && test -n "$$containing"				\
     && { files=$$(grep -l "$$containing" $$files); } || :;		\
   test -n "$$files" && test -n "$$non_containing"			\
     && { files=$$(grep -vl "$$non_containing" $$files); } || :;	\
									\
   : Check for the construct;						\
   if test -n "$$files"; then						\
     if test -n "$$prohibit"; then					\
       grep $$with_grep_options $(_ignore_case) -nE "$$prohibit" $$files \
         | grep -vE "$${exclude:-^$$}"					\
         && { msg="$$halt" $(_sc_say_and_exit) } || :;			\
     else								\
       grep $$with_grep_options $(_ignore_case) -LE "$$require" $$files \
           | grep .							\
         && { msg="$$halt" $(_sc_say_and_exit) } || :;			\
     fi									\
   else :;								\
   fi || :;
endef

sc_avoid_if_before_free:
	@$(srcdir)/$(_build-aux)/useless-if-before-free			\
		$(useless_free_options)					\
	    $$($(VC_LIST_EXCEPT) | grep -v useless-if-before-free) &&	\
	  { echo '$(ME): found useless "if" before "free" above' 1>&2;	\
	    exit 1; } || :

sc_cast_of_argument_to_free:
	@prohibit='\<free *\( *\(' halt="don't cast free argument"	\
	  $(_sc_search_regexp)

sc_cast_of_x_alloc_return_value:
	@prohibit='\*\) *x(m|c|re)alloc\>'				\
	halt="don't cast x*alloc return value"				\
	  $(_sc_search_regexp)

sc_cast_of_alloca_return_value:
	@prohibit='\*\) *alloca\>'					\
	halt="don't cast alloca return value"				\
	  $(_sc_search_regexp)

sc_space_tab:
	@prohibit='[ ]	'						\
	halt='found SPACE-TAB sequence; remove the SPACE'		\
	  $(_sc_search_regexp)

# Don't use *scanf or the old ato* functions in "real" code.
# They provide no error checking mechanism.
# Instead, use strto* functions.
sc_prohibit_atoi_atof:
	@prohibit='\<([fs]?scanf|ato([filq]|ll)) *\('				\
	halt='do not use *scan''f, ato''f, ato''i, ato''l, ato''ll or ato''q'	\
	  $(_sc_search_regexp)

# Use STREQ rather than comparing strcmp == 0, or != 0.
sp_ = strcmp *\(.+\)
sc_prohibit_strcmp:
	@prohibit='! *strcmp *\(|\<$(sp_) *[!=]=|[!=]= *$(sp_)'		\
	exclude='# *define STRN?EQ\('					\
	halt='replace strcmp calls above with STREQ/STRNEQ'		\
	  $(_sc_search_regexp)

# Really.  You don't want to use this function.
# It may fail to NUL-terminate the destination,
# and always NUL-pads out to the specified length.
sc_prohibit_strncpy:
	@prohibit='\<strncpy *\('					\
	halt='do not use strncpy, period'				\
	  $(_sc_search_regexp)

# Pass EXIT_*, not number, to usage, exit, and error (when exiting)
# Convert all uses automatically, via these two commands:
# git grep -l '\<exit *(1)' \
#  | grep -vEf .x-sc_prohibit_magic_number_exit \
#  | xargs --no-run-if-empty \
#      perl -pi -e 's/(^|[^.])\b(exit ?)\(1\)/$1$2(EXIT_FAILURE)/'
# git grep -l '\<exit *(0)' \
#  | grep -vEf .x-sc_prohibit_magic_number_exit \
#  | xargs --no-run-if-empty \
#      perl -pi -e 's/(^|[^.])\b(exit ?)\(0\)/$1$2(EXIT_SUCCESS)/'
sc_prohibit_magic_number_exit:
	@prohibit='(^|[^.])\<(usage|exit|error) ?\(-?[0-9]+[,)]'	\
	exclude='exit \(77\)|error ?\(((0|77),|[^,]*)'			\
	halt='use EXIT_* values rather than magic number'		\
	  $(_sc_search_regexp)

# Using EXIT_SUCCESS as the first argument to error is misleading,
# since when that parameter is 0, error does not exit.  Use '0' instead.
sc_error_exit_success:
	@prohibit='error *\(EXIT_SUCCESS,'				\
	in_vc_files='\.[chly]$$'					\
	halt='found error (EXIT_SUCCESS'				\
	 $(_sc_search_regexp)

# "FATAL:" should be fully upper-cased in error messages
# "WARNING:" should be fully upper-cased, or fully lower-cased
sc_error_message_warn_fatal:
	@grep -nEA2 '[^rp]error *\(' $$($(VC_LIST_EXCEPT))		\
	    | grep -E '"Warning|"Fatal|"fatal' &&			\
	  { echo '$(ME): use FATAL, WARNING or warning'	1>&2;		\
	    exit 1; } || :

# Error messages should not start with a capital letter
sc_error_message_uppercase:
	@grep -nEA2 '[^rp]error *\(' $$($(VC_LIST_EXCEPT))		\
	    | grep -E '"[A-Z]'						\
	    | grep -vE '"FATAL|"WARNING|"Java|"C#|PRIuMAX' &&		\
	  { echo '$(ME): found capitalized error message' 1>&2;		\
	    exit 1; } || :

# Error messages should not end with a period
sc_error_message_period:
	@grep -nEA2 '[^rp]error *\(' $$($(VC_LIST_EXCEPT))		\
	    | grep -E '[^."]\."' &&					\
	  { echo '$(ME): found error message ending in period' 1>&2;	\
	    exit 1; } || :

sc_file_system:
	@prohibit=file''system						\
	ignore_case=1							\
	halt='found use of "file''system"; spell it "file system"'	\
	  $(_sc_search_regexp)

# Don't use cpp tests of this symbol.  All code assumes config.h is included.
sc_prohibit_have_config_h:
	@prohibit='^# *if.*HAVE''_CONFIG_H'				\
	halt='found use of HAVE''_CONFIG_H; remove'			\
	  $(_sc_search_regexp)

# Nearly all .c files must include <config.h>.  However, we also permit this
# via inclusion of a package-specific header, if cfg.mk specified one.
# config_h_header must be suitable for grep -E.
config_h_header ?= <config\.h>
sc_require_config_h:
	@require='^# *include $(config_h_header)'			\
	in_vc_files='\.c$$'						\
	halt='the above files do not include <config.h>'		\
	  $(_sc_search_regexp)

# You must include <config.h> before including any other header file.
# This can possibly be via a package-specific header, if given by cfg.mk.
sc_require_config_h_first:
	@if $(VC_LIST_EXCEPT) | grep '\.c$$' > /dev/null; then		\
	  fail=0;							\
	  for i in $$($(VC_LIST_EXCEPT) | grep '\.c$$'); do		\
	    grep '^# *include\>' $$i | $(SED) 1q			\
		| grep -E '^# *include $(config_h_header)' > /dev/null	\
	      || { echo $$i; fail=1; };					\
	  done;								\
	  test $$fail = 1 &&						\
	    { echo '$(ME): the above files include some other header'	\
		'before <config.h>' 1>&2; exit 1; } || :;		\
	else :;								\
	fi

sc_prohibit_HAVE_MBRTOWC:
	@prohibit='\bHAVE_MBRTOWC\b'					\
	halt="do not use $$prohibit; it is always defined"		\
	  $(_sc_search_regexp)

# To use this "command" macro, you must first define two shell variables:
# h: the header name, with no enclosing <> or ""
# re: a regular expression that matches IFF something provided by $h is used.
define _sc_header_without_use
  dummy=; : so we do not need a semicolon before each use;		\
  h_esc=`echo '[<"]'"$$h"'[">]'|$(SED) 's/\./\\\\./g'`;			\
  if $(VC_LIST_EXCEPT) | grep '\.c$$' > /dev/null; then			\
    files=$$(grep -l '^# *include '"$$h_esc"				\
	     $$($(VC_LIST_EXCEPT) | grep '\.c$$')) &&			\
    grep -LE "$$re" $$files | grep . &&					\
      { echo "$(ME): the above files include $$h but don't use it"	\
	1>&2; exit 1; } || :;						\
  else :;								\
  fi
endef

# Prohibit the inclusion of assert.h without an actual use of assert.
sc_prohibit_assert_without_use:
	@h='assert.h' re='\<assert *\(' $(_sc_header_without_use)

# Prohibit the inclusion of close-stream.h without an actual use.
sc_prohibit_close_stream_without_use:
	@h='close-stream.h' re='\<close_stream *\(' $(_sc_header_without_use)

# Prohibit the inclusion of getopt.h without an actual use.
sc_prohibit_getopt_without_use:
	@h='getopt.h' re='\<getopt(_long)? *\(' $(_sc_header_without_use)

# Don't include quotearg.h unless you use one of its functions.
sc_prohibit_quotearg_without_use:
	@h='quotearg.h' re='\<quotearg(_[^ ]+)? *\(' $(_sc_header_without_use)

# Don't include quote.h unless you use one of its functions.
sc_prohibit_quote_without_use:
	@h='quote.h' re='\<quote((_n)? *\(|_quoting_options\>)' \
	  $(_sc_header_without_use)

# Don't include this header unless you use one of its functions.
sc_prohibit_long_options_without_use:
	@h='long-options.h' re='\<parse_long_options *\(' \
	  $(_sc_header_without_use)

# Don't include this header unless you use one of its functions.
sc_prohibit_inttostr_without_use:
	@h='inttostr.h' re='\<(off|[iu]max|uint)tostr *\(' \
	  $(_sc_header_without_use)

# Don't include this header unless you use one of its functions.
sc_prohibit_ignore_value_without_use:
	@h='ignore-value.h' re='\<ignore_(value|ptr) *\(' \
	  $(_sc_header_without_use)

# Don't include this header unless you use one of its functions.
sc_prohibit_error_without_use:
	@h='error.h' \
	re='\<error(_at_line|_print_progname|_one_per_line|_message_count)? *\('\
	  $(_sc_header_without_use)

# Don't include xalloc.h unless you use one of its functions.
# Consider these symbols:
# perl -lne '/^# *define (\w+)\(/ and print $1' lib/xalloc.h|grep -v '^__';
# perl -lne '/^(?:extern )?(?:void|char) \*?(\w+) *\(/ and print $1' lib/xalloc.h
# Divide into two sets on case, and filter each through this:
# | sort | perl -MRegexp::Assemble -le \
#  'print Regexp::Assemble->new(file => "/dev/stdin")->as_string'|sed 's/\?://g'
# Note this was produced by the above:
# _xa1 = \
#x(((2n?)?re|c(har)?|n(re|m)|z)alloc|alloc_(oversized|die)|m(alloc|emdup)|strdup)
# But we can do better, in at least two ways:
# 1) take advantage of two "dup"-suffixed strings:
# x(((2n?)?re|c(har)?|n(re|m)|[mz])alloc|alloc_(oversized|die)|(mem|str)dup)
# 2) notice that "c(har)?|[mz]" is equivalent to the shorter and more readable
# "char|[cmz]"
# x(((2n?)?re|char|n(re|m)|[cmz])alloc|alloc_(oversized|die)|(mem|str)dup)
_xa1 = x(((2n?)?re|char|n(re|m)|[cmz])alloc|alloc_(oversized|die)|(mem|str)dup)
_xa2 = X([CZ]|N?M)ALLOC
sc_prohibit_xalloc_without_use:
	@h='xalloc.h' \
	re='\<($(_xa1)|$(_xa2)) *\('\
	  $(_sc_header_without_use)

# Extract function names:
# perl -lne '/^(?:extern )?(?:void|char) \*?(\w+) *\(/ and print $1' lib/hash.h
_hash_re = \
clear|delete|free|get_(first|next)|insert|lookup|print_statistics|reset_tuning
_hash_fn = \<($(_hash_re)) *\(
_hash_struct = (struct )?\<[Hh]ash_(table|tuning)\>
sc_prohibit_hash_without_use:
	@h='hash.h' \
	re='$(_hash_fn)|$(_hash_struct)'\
	  $(_sc_header_without_use)

sc_prohibit_cloexec_without_use:
	@h='cloexec.h' re='\<(set_cloexec_flag|dup_cloexec) *\(' \
	  $(_sc_header_without_use)

sc_prohibit_posixver_without_use:
	@h='posixver.h' re='\<posix2_version *\(' $(_sc_header_without_use)

sc_prohibit_same_without_use:
	@h='same.h' re='\<same_name *\(' $(_sc_header_without_use)

sc_prohibit_hash_pjw_without_use:
	@h='hash-pjw.h' \
	re='\<hash_pjw\>' \
	  $(_sc_header_without_use)

sc_prohibit_safe_read_without_use:
	@h='safe-read.h' re='(\<SAFE_READ_ERROR\>|\<safe_read *\()' \
	  $(_sc_header_without_use)

sc_prohibit_argmatch_without_use:
	@h='argmatch.h' \
	re='(\<(ARRAY_CARDINALITY|X?ARGMATCH(|_TO_ARGUMENT|_VERIFY))\>|\<(invalid_arg|argmatch(_exit_fn|_(in)?valid)?) *\()' \
	  $(_sc_header_without_use)

sc_prohibit_canonicalize_without_use:
	@h='canonicalize.h' \
	re='CAN_(EXISTING|ALL_BUT_LAST|MISSING)|canonicalize_(mode_t|filename_mode|file_name)' \
	  $(_sc_header_without_use)

sc_prohibit_root_dev_ino_without_use:
	@h='root-dev-ino.h' \
	re='(\<ROOT_DEV_INO_(CHECK|WARN)\>|\<get_root_dev_ino *\()' \
	  $(_sc_header_without_use)

sc_prohibit_openat_without_use:
	@h='openat.h' \
	re='\<(openat_(permissive|needs_fchdir|(save|restore)_fail)|l?(stat|ch(own|mod))at|(euid)?accessat|(FCHMOD|FCHOWN|STAT)AT_INLINE)\>' \
	  $(_sc_header_without_use)

# Prohibit the inclusion of c-ctype.h without an actual use.
ctype_re = isalnum|isalpha|isascii|isblank|iscntrl|isdigit|isgraph|islower\
|isprint|ispunct|isspace|isupper|isxdigit|tolower|toupper
sc_prohibit_c_ctype_without_use:
	@h='c-ctype.h' re='\<c_($(ctype_re)) *\(' \
	  $(_sc_header_without_use)

# The following list was generated by running:
# man signal.h|col -b|perl -ne '/bsd_signal.*;/.../sigwaitinfo.*;/ and print' \
#   | perl -lne '/^\s+(?:int|void).*?(\w+).*/ and print $1' | fmt
_sig_functions = \
  bsd_signal kill killpg pthread_kill pthread_sigmask raise sigaction \
  sigaddset sigaltstack sigdelset sigemptyset sigfillset sighold sigignore \
  siginterrupt sigismember signal sigpause sigpending sigprocmask sigqueue \
  sigrelse sigset sigsuspend sigtimedwait sigwait sigwaitinfo
_sig_function_re = $(subst $(_sp),|,$(strip $(_sig_functions)))
# The following were extracted from "man signal.h" manually.
_sig_types_and_consts =							\
  MINSIGSTKSZ SA_NOCLDSTOP SA_NOCLDWAIT SA_NODEFER SA_ONSTACK		\
  SA_RESETHAND SA_RESTART SA_SIGINFO SIGEV_NONE SIGEV_SIGNAL		\
  SIGEV_THREAD SIGSTKSZ SIG_BLOCK SIG_SETMASK SIG_UNBLOCK SS_DISABLE	\
  SS_ONSTACK mcontext_t pid_t sig_atomic_t sigevent siginfo_t sigset_t	\
  sigstack sigval stack_t ucontext_t
# generated via this:
# perl -lne '/^#ifdef (SIG\w+)/ and print $1' lib/sig2str.c|sort -u|fmt -70
_sig_names =								\
  SIGABRT SIGALRM SIGALRM1 SIGBUS SIGCANCEL SIGCHLD SIGCLD SIGCONT	\
  SIGDANGER SIGDIL SIGEMT SIGFPE SIGFREEZE SIGGRANT SIGHUP SIGILL	\
  SIGINFO SIGINT SIGIO SIGIOT SIGKAP SIGKILL SIGKILLTHR SIGLOST SIGLWP	\
  SIGMIGRATE SIGMSG SIGPHONE SIGPIPE SIGPOLL SIGPRE SIGPROF SIGPWR	\
  SIGQUIT SIGRETRACT SIGSAK SIGSEGV SIGSOUND SIGSTKFLT SIGSTOP SIGSYS	\
  SIGTERM SIGTHAW SIGTRAP SIGTSTP SIGTTIN SIGTTOU SIGURG SIGUSR1	\
  SIGUSR2 SIGVIRT SIGVTALRM SIGWAITING SIGWINCH SIGWIND SIGWINDOW	\
  SIGXCPU SIGXFSZ
_sig_syms_re = $(subst $(_sp),|,$(strip $(_sig_names) $(_sig_types_and_consts)))

# Prohibit the inclusion of signal.h without an actual use.
sc_prohibit_signal_without_use:
	@h='signal.h'							\
	re='\<($(_sig_function_re)) *\(|\<($(_sig_syms_re))\>'		\
	  $(_sc_header_without_use)

# Don't include stdio--.h unless you use one of its functions.
sc_prohibit_stdio--_without_use:
	@h='stdio--.h' re='\<((f(re)?|p)open|tmpfile) *\('		\
	  $(_sc_header_without_use)

# Don't include stdio-safer.h unless you use one of its functions.
sc_prohibit_stdio-safer_without_use:
	@h='stdio-safer.h' re='\<((f(re)?|p)open|tmpfile)_safer *\('	\
	  $(_sc_header_without_use)

# Prohibit the inclusion of strings.h without a sensible use.
# Using the likes of bcmp, bcopy, bzero, index or rindex is not sensible.
sc_prohibit_strings_without_use:
	@h='strings.h'							\
	re='\<(strn?casecmp|ffs(ll)?)\>'				\
	  $(_sc_header_without_use)

# Get the list of symbol names with this:
# perl -lne '/^# *define ([A-Z]\w+)\(/ and print $1' lib/intprops.h|fmt
_intprops_names =							\
  TYPE_IS_INTEGER TYPE_TWOS_COMPLEMENT TYPE_ONES_COMPLEMENT		\
  TYPE_SIGNED_MAGNITUDE TYPE_SIGNED TYPE_MINIMUM TYPE_MAXIMUM		\
  INT_BITS_STRLEN_BOUND INT_STRLEN_BOUND INT_BUFSIZE_BOUND		\
  INT_ADD_RANGE_OVERFLOW INT_SUBTRACT_RANGE_OVERFLOW			\
  INT_NEGATE_RANGE_OVERFLOW INT_MULTIPLY_RANGE_OVERFLOW			\
  INT_DIVIDE_RANGE_OVERFLOW INT_REMAINDER_RANGE_OVERFLOW		\
  INT_LEFT_SHIFT_RANGE_OVERFLOW INT_ADD_OVERFLOW INT_SUBTRACT_OVERFLOW	\
  INT_NEGATE_OVERFLOW INT_MULTIPLY_OVERFLOW INT_DIVIDE_OVERFLOW		\
  INT_REMAINDER_OVERFLOW INT_LEFT_SHIFT_OVERFLOW
_intprops_syms_re = $(subst $(_sp),|,$(strip $(_intprops_names)))
# Prohibit the inclusion of intprops.h without an actual use.
sc_prohibit_intprops_without_use:
	@h='intprops.h'							\
	re='\<($(_intprops_syms_re)) *\('				\
	  $(_sc_header_without_use)

_stddef_syms_re = NULL|offsetof|ptrdiff_t|size_t|wchar_t
# Prohibit the inclusion of stddef.h without an actual use.
sc_prohibit_stddef_without_use:
	@h='stddef.h'							\
	re='\<($(_stddef_syms_re))\>'					\
	  $(_sc_header_without_use)

_de1 = dirfd|(close|(fd)?open|read|rewind|seek|tell)dir(64)?(_r)?
_de2 = (versionsort|struct dirent|getdirentries|alphasort|scandir(at)?)(64)?
_de3 = MAXNAMLEN|DIR|ino_t|d_ino|d_fileno|d_namlen
_dirent_syms_re = $(_de1)|$(_de2)|$(_de3)
# Prohibit the inclusion of dirent.h without an actual use.
sc_prohibit_dirent_without_use:
	@h='dirent.h'							\
	re='\<($(_dirent_syms_re))\>'					\
	  $(_sc_header_without_use)

# Prohibit the inclusion of verify.h without an actual use.
sc_prohibit_verify_without_use:
	@h='verify.h'							\
	re='\<(verify(true|expr)?|static_assert) *\('			\
	  $(_sc_header_without_use)

# Don't include xfreopen.h unless you use one of its functions.
sc_prohibit_xfreopen_without_use:
	@h='xfreopen.h' re='\<xfreopen *\(' $(_sc_header_without_use)

sc_obsolete_symbols:
	@prohibit='\<(HAVE''_FCNTL_H|O''_NDELAY)\>'			\
	halt='do not use HAVE''_FCNTL_H or O'_NDELAY			\
	  $(_sc_search_regexp)

# FIXME: warn about definitions of EXIT_FAILURE, EXIT_SUCCESS, STREQ

# Each nonempty ChangeLog line must start with a year number, or a TAB.
sc_changelog:
	@prohibit='^[^12	]'					\
	in_vc_files='^ChangeLog$$'					\
	halt='found unexpected prefix in a ChangeLog'			\
	  $(_sc_search_regexp)

# Ensure that each .c file containing a "main" function also
# calls set_program_name.
sc_program_name:
	@require='set_program_name *\(.*\);'				\
	in_vc_files='\.c$$'						\
	containing='\<main *('						\
	halt='the above files do not call set_program_name'		\
	  $(_sc_search_regexp)

# Ensure that each .c file containing a "main" function also
# calls bindtextdomain.
sc_bindtextdomain:
	@require='bindtextdomain *\('					\
	in_vc_files='\.c$$'						\
	containing='\<main *('						\
	halt='the above files do not call bindtextdomain'		\
	  $(_sc_search_regexp)

# Require that the final line of each test-lib.sh-using test be this one:
# Exit $fail
# Note: this test requires GNU grep's --label= option.
Exit_witness_file ?= tests/test-lib.sh
Exit_base := $(notdir $(Exit_witness_file))
sc_require_test_exit_idiom:
	@if test -f $(srcdir)/$(Exit_witness_file); then		\
	  die=0;							\
	  for i in $$(grep -l -F 'srcdir/$(Exit_base)'			\
		$$($(VC_LIST) tests)); do				\
	    tail -n1 $$i | grep '^Exit .' > /dev/null			\
	      && : || { die=1; echo $$i; }				\
	  done;								\
	  test $$die = 1 &&						\
	    { echo 1>&2 '$(ME): the final line in each of the above is not:'; \
	      echo 1>&2 'Exit something';				\
	      exit 1; } || :;						\
	fi

sc_trailing_blank:
	@prohibit='[	 ]$$'						\
	halt='found trailing blank(s)'					\
	exclude='^Binary file .* matches$$'				\
	  $(_sc_search_regexp)

# Match lines like the following, but where there is only one space
# between the options and the description:
#   -D, --all-repeated[=delimit-method]  print all duplicate lines\n
longopt_re = --[a-z][0-9A-Za-z-]*(\[?=[0-9A-Za-z-]*\]?)?
sc_two_space_separator_in_usage:
	@prohibit='^   *(-[A-Za-z],)? $(longopt_re) [^ ].*\\$$'		\
	halt='help2man requires at least two spaces between an option and its description'\
	  $(_sc_search_regexp)

# A regexp matching function names like "error" that may be used
# to emit translatable messages.
_gl_translatable_diag_func_re ?= error

# Look for diagnostics that aren't marked for translation.
# This won't find any for which error's format string is on a separate line.
sc_unmarked_diagnostics:
	@prohibit='\<$(_gl_translatable_diag_func_re) *\([^"]*"[^"]*[a-z]{3}' \
	exclude='(_|ngettext ?)\('					\
	halt='found unmarked diagnostic(s)'				\
	  $(_sc_search_regexp)

# Avoid useless parentheses like those in this example:
# #if defined (SYMBOL) || defined (SYM2)
sc_useless_cpp_parens:
	@prohibit='^# *if .*defined *\('				\
	halt='found useless parentheses in cpp directive'		\
	  $(_sc_search_regexp)

# List headers for which HAVE_HEADER_H is always true, assuming you are
# using the appropriate gnulib module.  CAUTION: for each "unnecessary"
# #if HAVE_HEADER_H that you remove, be sure that your project explicitly
# requires the gnulib module that guarantees the usability of that header.
gl_assured_headers_ = \
  cd $(gnulib_dir)/lib && echo *.in.h|$(SED) 's/\.in\.h//g'

# Convert the list of names to upper case, and replace each space with "|".
az_ = abcdefghijklmnopqrstuvwxyz
AZ_ = ABCDEFGHIJKLMNOPQRSTUVWXYZ
gl_header_upper_case_or_ =						\
  $$($(gl_assured_headers_)						\
    | tr $(az_)/.- $(AZ_)___						\
    | tr -s ' ' '|'							\
    )
sc_prohibit_always_true_header_tests:
	@or=$(gl_header_upper_case_or_);				\
	re="HAVE_($$or)_H";						\
	prohibit='\<'"$$re"'\>'						\
	halt=$$(printf '%s\n'						\
	'do not test the above HAVE_<header>_H symbol(s);'		\
	'  with the corresponding gnulib module, they are always true')	\
	  $(_sc_search_regexp)

sc_prohibit_defined_have_decl_tests:
	@prohibit='(#[	 ]*ifn?def|\<defined)\>[	 (]+HAVE_DECL_'	\
	halt='HAVE_DECL macros are always defined'			\
	  $(_sc_search_regexp)

# ==================================================================
gl_other_headers_ ?= \
  intprops.h	\
  openat.h	\
  stat-macros.h

# Perl -lne code to extract "significant" cpp-defined symbols from a
# gnulib header file, eliminating a few common false-positives.
# The exempted names below are defined only conditionally in gnulib,
# and hence sometimes must/may be defined in application code.
gl_extract_significant_defines_ = \
  /^\# *define ([^_ (][^ (]*)(\s*\(|\s+\w+)/\
    && $$2 !~ /(?:rpl_|_used_without_)/\
    && $$1 !~ /^(?:NSIG|ENODATA)$$/\
    && $$1 !~ /^(?:SA_RESETHAND|SA_RESTART)$$/\
    and print $$1

# Create a list of regular expressions matching the names
# of macros that are guaranteed to be defined by parts of gnulib.
define def_sym_regex
	gen_h=$(gl_generated_headers_);					\
	(cd $(gnulib_dir)/lib;						\
	  for f in *.in.h $(gl_other_headers_); do			\
	    test -f $$f							\
	      && perl -lne '$(gl_extract_significant_defines_)' $$f;	\
	  done;								\
	) | sort -u							\
	  | $(SED) 's/^/^ *# *(define|undef)  */;s/$$/\\>/'
endef

# Don't define macros that we already get from gnulib header files.
sc_prohibit_always-defined_macros:
	@if test -d $(gnulib_dir); then					\
	  case $$(echo all: | grep -l -f - Makefile) in Makefile);; *)	\
	    echo '$(ME): skipping $@: you lack GNU grep' 1>&2; exit 0;;	\
	  esac;								\
	  $(def_sym_regex) | grep -E -f - $$($(VC_LIST_EXCEPT))		\
	    && { echo '$(ME): define the above via some gnulib .h file'	\
		  1>&2;  exit 1; } || :;				\
	fi
# ==================================================================

# Prohibit checked in backup files.
sc_prohibit_backup_files:
	@$(VC_LIST) | grep '~$$' &&				\
	  { echo '$(ME): found version controlled backup file' 1>&2;	\
	    exit 1; } || :

# Require the latest GPL.
sc_GPL_version:
	@prohibit='either ''version [^3]'				\
	halt='GPL vN, N!=3'						\
	  $(_sc_search_regexp)

# Require the latest GFDL.  Two regexp, since some .texi files end up
# line wrapping between 'Free Documentation License,' and 'Version'.
_GFDL_regexp = (Free ''Documentation.*Version 1\.[^3]|Version 1\.[^3] or any)
sc_GFDL_version:
	@prohibit='$(_GFDL_regexp)'					\
	halt='GFDL vN, N!=3'						\
	  $(_sc_search_regexp)

# Don't use Texinfo's @acronym{}.
# http://lists.gnu.org/archive/html/bug-gnulib/2010-03/msg00321.html
texinfo_suffix_re_ ?= \.(txi|texi(nfo)?)$$
sc_texinfo_acronym:
	@prohibit='@acronym\{'						\
	in_vc_files='$(texinfo_suffix_re_)'				\
	halt='found use of Texinfo @acronym{}'				\
	  $(_sc_search_regexp)

cvs_keywords = \
  Author|Date|Header|Id|Name|Locker|Log|RCSfile|Revision|Source|State

sc_prohibit_cvs_keyword:
	@prohibit='\$$($(cvs_keywords))\$$'				\
	halt='do not use CVS keyword expansion'				\
	  $(_sc_search_regexp)

# This Perl code is slightly obfuscated.  Not only is each "$" doubled
# because it's in a Makefile, but the $$c's are comments;  we cannot
# use "#" due to the way the script ends up concatenated onto one line.
# It would be much more concise, and would produce better output (including
# counts) if written as:
#   perl -ln -0777 -e '/\n(\n+)$/ and print "$ARGV: ".length $1' ...
# but that would be far less efficient, reading the entire contents
# of each file, rather than just the last two bytes of each.
# In addition, while the code below detects both blank lines and a missing
# newline at EOF, the above detects only the former.
#
# This is a perl script that is expected to be the single-quoted argument
# to a command-line "-le".  The remaining arguments are file names.
# Print the name of each file that does not end in exactly one newline byte.
# I.e., warn if there are blank lines (2 or more newlines), or if the
# last byte is not a newline.  However, currently we don't complain
# about any file that contains exactly one byte.
# Exit nonzero if at least one such file is found, otherwise, exit 0.
# Warn about, but otherwise ignore open failure.  Ignore seek/read failure.
#
# Use this if you want to remove trailing empty lines from selected files:
#   perl -pi -0777 -e 's/\n\n+$/\n/' files...
#
require_exactly_one_NL_at_EOF_ =					\
  foreach my $$f (@ARGV)						\
    {									\
      open F, "<", $$f or (warn "failed to open $$f: $$!\n"), next;	\
      my $$p = sysseek (F, -2, 2);					\
      my $$c = "seek failure probably means file has < 2 bytes; ignore"; \
      my $$last_two_bytes;						\
      defined $$p and $$p = sysread F, $$last_two_bytes, 2;		\
      close F;								\
      $$c = "ignore read failure";					\
      $$p && ($$last_two_bytes eq "\n\n"				\
              || substr ($$last_two_bytes,1) ne "\n")			\
          and (print $$f), $$fail=1;					\
    }									\
  END { exit defined $$fail }
sc_prohibit_empty_lines_at_EOF:
	@perl -le '$(require_exactly_one_NL_at_EOF_)' $$($(VC_LIST_EXCEPT)) \
	  || { echo '$(ME): empty line(s) or no newline at EOF'		\
		1>&2; exit 1; } || :

# Make sure we don't use st_blocks.  Use ST_NBLOCKS instead.
# This is a bit of a kludge, since it prevents use of the string
# even in comments, but for now it does the job with no false positives.
sc_prohibit_stat_st_blocks:
	@prohibit='[.>]st_blocks'					\
	halt='do not use st_blocks; use ST_NBLOCKS'			\
	  $(_sc_search_regexp)

# Make sure we don't define any S_IS* macros in src/*.c files.
# They're already defined via gnulib's sys/stat.h replacement.
sc_prohibit_S_IS_definition:
	@prohibit='^ *# *define  *S_IS'					\
	halt='do not define S_IS* macros; include <sys/stat.h>'		\
	  $(_sc_search_regexp)

# Perl block to convert a match to FILE_NAME:LINENO:TEST,
# that is shared by two definitions below.
perl_filename_lineno_text_ =						\
    -e '  {'								\
    -e '    $$n = ($$` =~ tr/\n/\n/ + 1);'				\
    -e '    ($$v = $$&) =~ s/\n/\\n/g;'					\
    -e '    print "$$ARGV:$$n:$$v\n";'					\
    -e '  }'

prohibit_doubled_word_RE_ ?= \
  /\b(then?|[iao]n|i[fst]|but|f?or|at|and|[dt]o)\s+\1\b/gims
prohibit_doubled_word_ =						\
    -e 'while ($(prohibit_doubled_word_RE_))'				\
    $(perl_filename_lineno_text_)

# Define this to a regular expression that matches
# any filename:dd:match lines you want to ignore.
# The default is to ignore no matches.
ignore_doubled_word_match_RE_ ?= ^$$

sc_prohibit_doubled_word:
	@perl -n -0777 $(prohibit_doubled_word_) $$($(VC_LIST_EXCEPT))	\
	  | grep -vE '$(ignore_doubled_word_match_RE_)'			\
	  | grep . && { echo '$(ME): doubled words' 1>&2; exit 1; } || :

# A regular expression matching undesirable combinations of words like
# "can not"; this matches them even when the two words appear on different
# lines, but not when there is an intervening delimiter like "#" or "*".
# Similarly undesirable, "See @xref{...}", since an @xref should start
# a sentence.  Explicitly prohibit any prefix of "see" or "also".
# Also prohibit a prefix matching "\w+ +".
# @pxref gets the same see/also treatment and should be parenthesized;
# presume it must *not* start a sentence.
bad_xref_re_ ?= (?:[\w,:;] +|(?:see|also)\s+)\@xref\{
bad_pxref_re_ ?= (?:[.!?]|(?:see|also))\s+\@pxref\{
prohibit_undesirable_word_seq_RE_ ?=					\
  /(?:\bcan\s+not\b|$(bad_xref_re_)|$(bad_pxref_re_))/gims
prohibit_undesirable_word_seq_ =					\
    -e 'while ($(prohibit_undesirable_word_seq_RE_))'			\
    $(perl_filename_lineno_text_)
# Define this to a regular expression that matches
# any filename:dd:match lines you want to ignore.
# The default is to ignore no matches.
ignore_undesirable_word_sequence_RE_ ?= ^$$

sc_prohibit_undesirable_word_seq:
	@perl -n -0777 $(prohibit_undesirable_word_seq_)		\
	     $$($(VC_LIST_EXCEPT))					\
	  | grep -vE '$(ignore_undesirable_word_sequence_RE_)' | grep .	\
	  && { echo '$(ME): undesirable word sequence' >&2; exit 1; } || :

# Except for shell files and for loops, double semicolon is probably a mistake
sc_prohibit_double_semicolon:
	@prohibit='; *;[	{} \]*(/[/*]|$$)'			\
	in_vc_files='\.[chly]$$'					\
	exclude='\bfor *\(.*\)'						\
	halt="Double semicolon detected"				\
	  $(_sc_search_regexp)

_ptm1 = use "test C1 && test C2", not "test C1 -''a C2"
_ptm2 = use "test C1 || test C2", not "test C1 -''o C2"
# Using test's -a and -o operators is not portable.
# We prefer test over [, since the latter is spelled [[ in configure.ac.
sc_prohibit_test_minus_ao:
	@prohibit='(\<test| \[+) .+ -[ao] '				\
	halt='$(_ptm1); $(_ptm2)'					\
	  $(_sc_search_regexp)

# Avoid a test bashism.
sc_prohibit_test_double_equal:
	@prohibit='(\<test| \[+) .+ == '				\
	containing='#! */bin/[a-z]*sh'					\
	halt='use "test x = x", not "test x =''= x"'			\
	  $(_sc_search_regexp)

# Each program that uses proper_name_utf8 must link with one of the
# ICONV libraries.  Otherwise, some ICONV library must appear in LDADD.
# The perl -0777 invocation below extracts the possibly-multi-line
# definition of LDADD from the appropriate Makefile.am and exits 0
# when it contains "ICONV".
sc_proper_name_utf8_requires_ICONV:
	@progs=$$(grep -l 'proper_name_utf8 ''("' $$($(VC_LIST_EXCEPT)));\
	if test "x$$progs" != x; then					\
	  fail=0;							\
	  for p in $$progs; do						\
	    dir=$$(dirname "$$p");					\
	    perl -0777							\
	      -ne 'exit !(/^LDADD =(.+?[^\\]\n)/ms && $$1 =~ /ICONV/)'	\
	      $$dir/Makefile.am && continue;				\
	    base=$$(basename "$$p" .c);					\
	    grep "$${base}_LDADD.*ICONV)" $$dir/Makefile.am > /dev/null	\
	      || { fail=1; echo 1>&2 "$(ME): $$p uses proper_name_utf8"; }; \
	  done;								\
	  test $$fail = 1 &&						\
	    { echo 1>&2 '$(ME): the above do not link with any ICONV library'; \
	      exit 1; } || :;						\
	fi

# Warn about "c0nst struct Foo const foo[]",
# but not about "char const *const foo" or "#define const const".
sc_redundant_const:
	@prohibit='\bconst\b[[:space:][:alnum:]]{2,}\bconst\b'		\
	halt='redundant "const" in declarations'			\
	  $(_sc_search_regexp)

sc_const_long_option:
	@prohibit='^ *static.*struct option '				\
	exclude='const struct option|struct option const'		\
	halt='add "const" to the above declarations'			\
	  $(_sc_search_regexp)

NEWS_hash =								\
  $$($(SED) -n '/^\*.* $(PREV_VERSION_REGEXP) ([0-9-]*)/,$$p'		\
       $(srcdir)/NEWS							\
     | perl -0777 -pe							\
	's/^Copyright.+?Free\sSoftware\sFoundation,\sInc\.\n//ms'	\
     | md5sum -								\
     | $(SED) 's/ .*//')

# Ensure that we don't accidentally insert an entry into an old NEWS block.
sc_immutable_NEWS:
	@if test -f $(srcdir)/NEWS; then				\
	  test "$(NEWS_hash)" = '$(old_NEWS_hash)' && : ||		\
	    { echo '$(ME): you have modified old NEWS' 1>&2; exit 1; };	\
	fi

# Update the hash stored above.  Do this after each release and
# for any corrections to old entries.
update-NEWS-hash: NEWS
	perl -pi -e 's/^(old_NEWS_hash[ \t]+:?=[ \t]+).*/$${1}'"$(NEWS_hash)/" \
	  $(srcdir)/cfg.mk

# Ensure that we use only the standard $(VAR) notation,
# not @...@ in Makefile.am, now that we can rely on automake
# to emit a definition for each substituted variable.
# However, there is still one case in which @VAR@ use is not just
# legitimate, but actually required: when augmenting an automake-defined
# variable with a prefix.  For example, gettext uses this:
# MAKEINFO = env LANG= LC_MESSAGES= LC_ALL= LANGUAGE= @MAKEINFO@
# otherwise, makeinfo would put German or French (current locale)
# navigation hints in the otherwise-English documentation.
#
# Allow the package to add exceptions via a hook in cfg.mk;
# for example, @PRAGMA_SYSTEM_HEADER@ can be permitted by
# setting this to ' && !/PRAGMA_SYSTEM_HEADER/'.
_makefile_at_at_check_exceptions ?=
sc_makefile_at_at_check:
	@perl -ne '/\@\w+\@/'						\
          -e ' && !/(\w+)\s+=.*\@\1\@$$/'				\
          -e ''$(_makefile_at_at_check_exceptions)			\
	  -e 'and (print "$$ARGV:$$.: $$_"), $$m=1; END {exit !$$m}'	\
	    $$($(VC_LIST_EXCEPT) | grep -E '(^|/)(Makefile\.am|[^/]+\.mk)$$') \
	  && { echo '$(ME): use $$(...), not @...@' 1>&2; exit 1; } || :

news-check: NEWS
	$(AM_V_GEN)if $(SED) -n $(news-check-lines-spec)p $<		\
	    | grep -E $(news-check-regexp) >/dev/null; then		\
	  :;								\
	else								\
	  echo 'NEWS: $$(news-check-regexp) failed to match' 1>&2;	\
	  exit 1;							\
	fi

sc_makefile_TAB_only_indentation:
	@prohibit='^	[ ]{8}'						\
	in_vc_files='akefile|\.mk$$'					\
	halt='found TAB-8-space indentation'				\
	  $(_sc_search_regexp)

sc_m4_quote_check:
	@prohibit='(AC_DEFINE(_UNQUOTED)?|AC_DEFUN)\([^[]'		\
	in_vc_files='(^configure\.ac|\.m4)$$'				\
	halt='quote the first arg to AC_DEF*'				\
	  $(_sc_search_regexp)

fix_po_file_diag = \
'you have changed the set of files with translatable diagnostics;\n\
apply the above patch\n'

# Verify that all source files using _() (more specifically, files that
# match $(_gl_translatable_string_re)) are listed in po/POTFILES.in.
po_file ?= $(srcdir)/po/POTFILES.in
generated_files ?= $(srcdir)/lib/*.[ch]
_gl_translatable_string_re ?= \b(N?_|gettext *)\([^)"]*("|$$)
sc_po_check:
	@if test -f $(po_file); then					\
	  grep -E -v '^(#|$$)' $(po_file)				\
	    | grep -v '^src/false\.c$$' | sort > $@-1;			\
	  files=;							\
	  for file in $$($(VC_LIST_EXCEPT)) $(generated_files); do	\
	    test -r $$file || continue;					\
	    case $$file in						\
	      *.m4|*.mk) continue ;;					\
	      *.?|*.??) ;;						\
	      *) continue;;						\
	    esac;							\
	    case $$file in						\
	    *.[ch])							\
	      base=`expr " $$file" : ' \(.*\)\..'`;			\
	      { test -f $$base.l || test -f $$base.y; } && continue;;	\
	    esac;							\
	    files="$$files $$file";					\
	  done;								\
	  grep -E -l '$(_gl_translatable_string_re)' $$files		\
	    | $(SED) 's|^$(_dot_escaped_srcdir)/||' | sort -u > $@-2;	\
	  diff -u -L $(po_file) -L $(po_file) $@-1 $@-2			\
	    || { printf '$(ME): '$(fix_po_file_diag) 1>&2; exit 1; };	\
	  rm -f $@-1 $@-2;						\
	fi

# Sometimes it is useful to change the PATH environment variable
# in Makefiles.  When doing so, it's better not to use the Unix-centric
# path separator of ':', but rather the automake-provided '$(PATH_SEPARATOR)'.
msg = 'Do not use ":" above; use $$(PATH_SEPARATOR) instead'
sc_makefile_path_separator_check:
	@prohibit='PATH[=].*:'						\
	in_vc_files='akefile|\.mk$$'					\
	halt=$(msg)							\
	  $(_sc_search_regexp)

# Check that 'make alpha' will not fail at the end of the process,
# i.e., when pkg-M.N.tar.xz already exists (either in "." or in ../release)
# and is read-only.
writable-files:
	$(AM_V_GEN)if test -d $(release_archive_dir); then		\
	  for file in $(DIST_ARCHIVES); do				\
	    for p in ./ $(release_archive_dir)/; do			\
	      test -e $$p$$file || continue;				\
	      test -w $$p$$file						\
		|| { echo ERROR: $$p$$file is not writable; fail=1; };	\
	    done;							\
	  done;								\
	  test "$$fail" && exit 1 || : ;				\
	else :;								\
	fi

v_etc_file = $(gnulib_dir)/lib/version-etc.c
sample-test = tests/sample-test
texi = doc/$(PACKAGE).texi
# Make sure that the copyright date in $(v_etc_file) is up to date.
# Do the same for the $(sample-test) and the main doc/.texi file.
sc_copyright_check:
	@require='enum { COPYRIGHT_YEAR = '$$(date +%Y)' };'		\
	in_files=$(v_etc_file)						\
	halt='out of date copyright in $(v_etc_file); update it'	\
	  $(_sc_search_regexp)
	@require='# Copyright \(C\) '$$(date +%Y)' Free'		\
	in_vc_files=$(sample-test)					\
	halt='out of date copyright in $(sample-test); update it'	\
	  $(_sc_search_regexp)
	@require='Copyright @copyright\{\} .*'$$(date +%Y)		\
	in_vc_files=$(texi)						\
	halt='out of date copyright in $(texi); update it'		\
	  $(_sc_search_regexp)

# If tests/help-version exists and seems to be new enough, assume that its
# use of init.sh and path_prepend_ is correct, and ensure that every other
# use of init.sh is identical.
# This is useful because help-version cross-checks prog --version
# with $(VERSION), which verifies that its path_prepend_ invocation
# sets PATH correctly.  This is an inexpensive way to ensure that
# the other init.sh-using tests also get it right.
_hv_file ?= $(srcdir)/tests/help-version
_hv_regex_weak ?= ^ *\. .*/init\.sh"
# Fix syntax-highlighters "
_hv_regex_strong ?= ^ *\. "\$${srcdir=\.}/init\.sh"
sc_cross_check_PATH_usage_in_tests:
	@if test -f $(_hv_file); then					\
	  grep -l 'VERSION mismatch' $(_hv_file) >/dev/null		\
	    || { echo "$@: skipped: no such file: $(_hv_file)" 1>&2;	\
		 exit 0; };						\
	  grep -lE '$(_hv_regex_strong)' $(_hv_file) >/dev/null		\
	    || { echo "$@: $(_hv_file) lacks conforming use of init.sh" 1>&2; \
		 exit 1; };						\
	  good=$$(grep -E '$(_hv_regex_strong)' $(_hv_file));		\
	  grep -LFx "$$good"						\
		$$(grep -lE '$(_hv_regex_weak)' $$($(VC_LIST_EXCEPT)))	\
	      | grep . &&						\
	    { echo "$(ME): the above files use path_prepend_ inconsistently" \
		1>&2; exit 1; } || :;					\
	fi

# BRE regex of file contents to identify a test script.
_test_script_regex ?= \<init\.sh\>

# In tests, use "compare expected actual", not the reverse.
sc_prohibit_reversed_compare_failure:
	@prohibit='\<compare [^ ]+ ([^ ]*exp|/dev/null)'		\
	containing='$(_test_script_regex)'				\
	halt='reversed compare arguments'				\
	  $(_sc_search_regexp)

# #if HAVE_... will evaluate to false for any non numeric string.
# That would be flagged by using -Wundef, however gnulib currently
# tests many undefined macros, and so we can't enable that option.
# So at least preclude common boolean strings as macro values.
sc_Wundef_boolean:
	@prohibit='^#define.*(yes|no|true|false)$$'			\
	in_files='$(CONFIG_INCLUDE)'					\
	halt='Use 0 or 1 for macro values'				\
	  $(_sc_search_regexp)

# Even if you use pathmax.h to guarantee that PATH_MAX is defined, it might
# not be constant, or might overflow a stack.  In general, use PATH_MAX as
# a limit, not an array or alloca size.
sc_prohibit_path_max_allocation:
	@prohibit='(\balloca *\([^)]*|\[[^]]*)\bPATH_MAX'		\
	halt='Avoid stack allocations of size PATH_MAX'			\
	  $(_sc_search_regexp)

sc_vulnerable_makefile_CVE-2009-4029:
	@prohibit='perm -777 -exec chmod a\+rwx|chmod 777 \$$\(distdir\)' \
	in_files='(^|/)Makefile\.in$$'					\
	halt=$$(printf '%s\n'						\
	  'the above files are vulnerable; beware of running'		\
	  '  "make dist*" rules, and upgrade to fixed automake'		\
	  '  see http://bugzilla.redhat.com/542609 for details')	\
	  $(_sc_search_regexp)

sc_vulnerable_makefile_CVE-2012-3386:
	@prohibit='chmod a\+w \$$\(distdir\)'				\
	in_files='(^|/)Makefile\.in$$'					\
	halt=$$(printf '%s\n'						\
	  'the above files are vulnerable; beware of running'		\
	  '  "make distcheck", and upgrade to fixed automake'		\
	  '  see http://bugzilla.redhat.com/CVE-2012-3386 for details')	\
	  $(_sc_search_regexp)

vc-diff-check:
	$(AM_V_GEN)(unset CDPATH; cd $(srcdir) && $(VC) diff) > vc-diffs || :
	$(AM_V_at)if test -s vc-diffs; then			\
	  cat vc-diffs;						\
	  echo "Some files are locally modified:" 1>&2;		\
	  exit 1;						\
	else							\
	  rm vc-diffs;						\
	fi

rel-files = $(DIST_ARCHIVES)

gnulib_dir ?= $(srcdir)/gnulib
gnulib-version = $$(cd $(gnulib_dir)				\
                    && { git describe || git rev-parse --short=10 HEAD; } )
bootstrap-tools ?= autoconf,automake,gnulib

gpgv = $$(gpgv2 --version >/dev/null && echo gpgv2 || echo gpgv)
# If it's not already specified, derive the GPG key ID from
# the signed tag we've just applied to mark this release.
gpg_key_ID ?=								\
  $$(cd $(srcdir)							\
     && git cat-file tag v$(VERSION)					\
        | $(gpgv) --status-fd 1 --keyring /dev/null - - 2>/dev/null	\
        | awk '/^\[GNUPG:\] ERRSIG / {print $$3; exit}')

translation_project_ ?= coordinator@translationproject.org

# Make info-gnu the default only for a stable release.
announcement_Cc_stable = $(translation_project_), $(PACKAGE_BUGREPORT)
announcement_mail_headers_stable =		\
  To: info-gnu@gnu.org				\
  Cc: $(announcement_Cc_)			\
  Mail-Followup-To: $(PACKAGE_BUGREPORT)

announcement_Cc_alpha = $(translation_project_)
announcement_mail_headers_alpha =		\
  To: $(PACKAGE_BUGREPORT)			\
  Cc: $(announcement_Cc_)

announcement_mail_Cc_beta = $(announcement_mail_Cc_alpha)
announcement_mail_headers_beta = $(announcement_mail_headers_alpha)

announcement_mail_Cc_ ?= $(announcement_mail_Cc_$(release-type))
announcement_mail_headers_ ?= $(announcement_mail_headers_$(release-type))
announcement: NEWS ChangeLog $(rel-files)
# Not $(AM_V_GEN) since the output of this command serves as
# announcement message: it would start with " GEN announcement".
	$(AM_V_at)$(srcdir)/$(_build-aux)/announce-gen			\
	    --mail-headers='$(announcement_mail_headers_)'		\
	    --release-type=$(release-type)				\
	    --package=$(PACKAGE)					\
	    --prev=$(PREV_VERSION)					\
	    --curr=$(VERSION)						\
	    --gpg-key-id=$(gpg_key_ID)					\
	    --srcdir=$(srcdir)						\
	    --news=$(srcdir)/NEWS					\
	    --bootstrap-tools=$(bootstrap-tools)			\
	    $$(case ,$(bootstrap-tools), in (*,gnulib,*)		\
	       echo --gnulib-version=$(gnulib-version);; esac)		\
	    --no-print-checksums					\
	    $(addprefix --url-dir=, $(url_dir_list))

.PHONY: release-commit
release-commit:
	$(AM_V_GEN)cd $(srcdir)				\
	  && $(_build-aux)/do-release-commit-and-tag	\
	       -C $(abs_builddir) $(RELEASE)

## ---------------- ##
## Updating files.  ##
## ---------------- ##

ftp-gnu = ftp://ftp.gnu.org/gnu
www-gnu = http://www.gnu.org

upload_dest_dir_ ?= $(PACKAGE)
upload_command =						\
  $(srcdir)/$(_build-aux)/gnupload $(GNUPLOADFLAGS)		\
  --to $(gnu_rel_host):$(upload_dest_dir_)			\
  $(rel-files)
emit_upload_commands:
	@echo =====================================
	@echo =====================================
	@echo '$(upload_command)'
	@echo '# send the ~/announce-$(my_distdir) e-mail'
	@echo =====================================
	@echo =====================================

.PHONY: upload
upload:
	$(AM_V_GEN)$(upload_command)

define emit-commit-log
  printf '%s\n' 'maint: post-release administrivia' ''			\
    '* NEWS: Add header line for next release.'				\
    '* .prev-version: Record previous version.'				\
    '* cfg.mk (old_NEWS_hash): Auto-update.'
endef

.PHONY: no-submodule-changes
no-submodule-changes:
	$(AM_V_GEN)if test -d $(srcdir)/.git				\
		&& git --version >/dev/null 2>&1; then			\
	  diff=$$(cd $(srcdir) && git submodule -q foreach		\
		  git diff-index --name-only HEAD)			\
	    || exit 1;							\
	  case $$diff in '') ;;						\
	    *) echo '$(ME): submodule files are locally modified:';	\
		echo "$$diff"; exit 1;; esac;				\
	else								\
	  : ;								\
	fi

submodule-checks ?= no-submodule-changes public-submodule-commit

# Ensure that each sub-module commit we're using is public.
# Without this, it is too easy to tag and release code that
# cannot be built from a fresh clone.
.PHONY: public-submodule-commit
public-submodule-commit:
	$(AM_V_GEN)if test -d $(srcdir)/.git				\
		&& git --version >/dev/null 2>&1; then			\
	  cd $(srcdir) &&						\
	  git submodule --quiet foreach					\
	      'test "$$(git rev-parse "$$sha1")"			\
		  = "$$(git merge-base origin "$$sha1")"'		\
	    || { echo '$(ME): found non-public submodule commit' >&2;	\
		 exit 1; };						\
	else								\
	  : ;								\
	fi
# This rule has a high enough utility/cost ratio that it should be a
# dependent of "check" by default.  However, some of us do occasionally
# commit a temporary change that deliberately points to a non-public
# submodule commit, and want to be able to use rules like "make check".
# In that case, run e.g., "make check gl_public_submodule_commit="
# to disable this test.
gl_public_submodule_commit ?= public-submodule-commit
check: $(gl_public_submodule_commit)

.PHONY: alpha beta stable release
ALL_RECURSIVE_TARGETS += alpha beta stable
alpha beta stable: $(local-check) writable-files $(submodule-checks)
	$(AM_V_GEN)test $@ = stable					\
	  && { echo $(VERSION) | grep -E '^[0-9]+(\.[0-9]+)+$$'		\
	       || { echo "invalid version string: $(VERSION)" 1>&2; exit 1;};}\
	  || :
	$(AM_V_at)$(MAKE) vc-diff-check
	$(AM_V_at)$(MAKE) news-check
	$(AM_V_at)$(MAKE) distcheck
	$(AM_V_at)$(MAKE) dist
	$(AM_V_at)$(MAKE) $(release-prep-hook) RELEASE_TYPE=$@
	$(AM_V_at)$(MAKE) -s emit_upload_commands RELEASE_TYPE=$@

release:
	$(AM_V_GEN)$(MAKE) _version
	$(AM_V_GEN)$(MAKE) $(release-type)

# Override this in cfg.mk if you follow different procedures.
release-prep-hook ?= release-prep

gl_noteworthy_news_ = * Noteworthy changes in release ?.? (????-??-??) [?]
.PHONY: release-prep
release-prep:
	$(AM_V_GEN)$(MAKE) --no-print-directory -s announcement \
	  > ~/announce-$(my_distdir)
	$(AM_V_at)if test -d $(release_archive_dir); then	\
	  ln $(rel-files) $(release_archive_dir);		\
	  chmod a-w $(rel-files);				\
	fi
	$(AM_V_at)echo $(VERSION) > $(prev_version_file)
	$(AM_V_at)$(MAKE) update-NEWS-hash
	$(AM_V_at)perl -pi						\
	  -e '$$. == 3 and print "$(gl_noteworthy_news_)\n\n\n"'	\
	  $(srcdir)/NEWS
	$(AM_V_at)msg=$$($(emit-commit-log)) || exit 1;		\
	cd $(srcdir) && $(VC) commit -m "$$msg" -a

# Override this with e.g., -s $(srcdir)/some_other_name.texi
# if the default $(PACKAGE)-derived name doesn't apply.
gendocs_options_ ?=

.PHONY: web-manual
web-manual:
	$(AM_V_GEN)test -z "$(manual_title)" \
	  && { echo define manual_title in cfg.mk 1>&2; exit 1; } || :
	$(AM_V_at)cd '$(srcdir)/doc'; \
	  $(SHELL) ../$(_build-aux)/gendocs.sh $(gendocs_options_) \
	     -o '$(abs_builddir)/doc/manual' \
	     --email $(PACKAGE_BUGREPORT) $(PACKAGE) \
	    "$(PACKAGE_NAME) - $(manual_title)"
	$(AM_V_at)echo " *** Upload the doc/manual directory to web-cvs."

.PHONY: web-manual-update
web-manual-update:
	$(AM_V_GEN)cd $(srcdir) \
	  && $(_build-aux)/gnu-web-doc-update -C $(abs_builddir)


# Code Coverage

init-coverage:
	$(MAKE) $(AM_MAKEFLAGS) clean
	lcov --directory . --zerocounters

COVERAGE_CCOPTS ?= "-g --coverage"
COVERAGE_OUT ?= doc/coverage

build-coverage:
	$(MAKE) $(AM_MAKEFLAGS) CFLAGS=$(COVERAGE_CCOPTS) CXXFLAGS=$(COVERAGE_CCOPTS)
	$(MAKE) $(AM_MAKEFLAGS) CFLAGS=$(COVERAGE_CCOPTS) CXXFLAGS=$(COVERAGE_CCOPTS) check
	mkdir -p $(COVERAGE_OUT)
	lcov --directory . --output-file $(COVERAGE_OUT)/$(PACKAGE).info \
		--capture

gen-coverage:
	genhtml --output-directory $(COVERAGE_OUT) \
		$(COVERAGE_OUT)/$(PACKAGE).info \
		--highlight --frames --legend \
		--title "$(PACKAGE_NAME)"

coverage: init-coverage build-coverage gen-coverage

# Some projects carry local adjustments for gnulib modules via patches in
# a gnulib patch directory whose default name is gl/ (defined in bootstrap
# via local_gl_dir=gl).  Those patches become stale as the originals evolve
# in gnulib.  Use this rule to refresh any stale patches.  It applies each
# patch to the original in $(gnulib_dir) and uses the temporary result to
# generate a fuzz-free .diff file.  If you customize the name of your local
# gnulib patch directory via bootstrap.conf, this rule detects that name.
# Run this from a non-VPATH (i.e., srcdir) build directory.
.PHONY: refresh-gnulib-patches
refresh-gnulib-patches:
	gl=gl;								\
	if test -f bootstrap.conf; then					\
	  t=$$(perl -lne '/^\s*local_gl_dir=(\S+)/ and $$d=$$1;'	\
	       -e 'END{defined $$d and print $$d}' bootstrap.conf);	\
	  test -n "$$t" && gl=$$t;					\
	fi;								\
	for diff in $$(cd $$gl; git ls-files | grep '\.diff$$'); do	\
	  b=$$(printf %s "$$diff"|$(SED) 's/\.diff$$//');		\
	  VERSION_CONTROL=none						\
	    patch "$(gnulib_dir)/$$b" "$$gl/$$diff" || exit 1;		\
	  ( cd $(gnulib_dir) || exit 1;					\
	    git diff "$$b" > "../$$gl/$$diff";				\
	    git checkout $$b ) || exit 1;				\
	done

# Update gettext files.
PACKAGE ?= $(shell basename $(PWD))
PO_DOMAIN ?= $(PACKAGE)
POURL = http://translationproject.org/latest/$(PO_DOMAIN)/
PODIR ?= po
refresh-po:
	rm -f $(PODIR)/*.po && \
	echo "$(ME): getting translations into po (please ignore the robots.txt ERROR 404)..." && \
	wget --no-verbose --directory-prefix $(PODIR) --no-directories --recursive --level 1 --accept .po --accept .po.1 $(POURL) && \
	echo 'en@boldquot' > $(PODIR)/LINGUAS && \
	echo 'en@quot' >> $(PODIR)/LINGUAS && \
	ls $(PODIR)/*.po | $(SED) 's/\.po//;s,$(PODIR)/,,' | \
	  sort >> $(PODIR)/LINGUAS

 # Running indent once is not idempotent, but running it twice is.
INDENT_SOURCES ?= $(C_SOURCES)
.PHONY: indent
indent:
	indent $(INDENT_SOURCES)
	indent $(INDENT_SOURCES)

# If you want to set UPDATE_COPYRIGHT_* environment variables,
# put the assignments in this variable.
update-copyright-env ?=

# Run this rule once per year (usually early in January)
# to update all FSF copyright year lists in your project.
# If you have an additional project-specific rule,
# add it in cfg.mk along with a line 'update-copyright: prereq'.
# By default, exclude all variants of COPYING; you can also
# add exemptions (such as ChangeLog..* for rotated change logs)
# in the file .x-update-copyright.
.PHONY: update-copyright
update-copyright:
	$(AM_V_GEN)grep -l -w Copyright                                  \
	  $$(export VC_LIST_EXCEPT_DEFAULT=COPYING && $(VC_LIST_EXCEPT)) \
	  | $(update-copyright-env) xargs $(srcdir)/$(_build-aux)/$@

# This tight_scope test is skipped with a warning if $(_gl_TS_headers) is not
# overridden and $(_gl_TS_dir)/Makefile.am does not mention noinst_HEADERS.

# NOTE: to override any _gl_TS_* default value, you must
# define the variable(s) using "export" in cfg.mk.
_gl_TS_dir ?= src

ALL_RECURSIVE_TARGETS += sc_tight_scope
sc_tight_scope: tight-scope.mk
	@fail=0;							\
	if ! grep '^ *export _gl_TS_headers *=' $(srcdir)/cfg.mk	\
		> /dev/null						\
	   && ! grep -w noinst_HEADERS $(srcdir)/$(_gl_TS_dir)/Makefile.am \
		> /dev/null 2>&1; then					\
	    echo '$(ME): skipping $@';					\
	else								\
	    $(MAKE) -s -C $(_gl_TS_dir)					\
		-f Makefile						\
		-f $(abs_top_srcdir)/cfg.mk				\
		-f $(abs_top_builddir)/$<				\
	      _gl_tight_scope						\
		|| fail=1;						\
	fi;								\
	rm -f $<;							\
	exit $$fail

tight-scope.mk: $(ME)
	@rm -f $@ $@-t
	@perl -ne '/^# TS-start/.../^# TS-end/ and print' $(srcdir)/$(ME) > $@-t
	@chmod a=r $@-t && mv $@-t $@

ifeq (a,b)
# TS-start

# Most functions should have static scope.
# Any that don't must be marked with 'extern', but 'main'
# and 'usage' are exceptions: they're always extern, but
# do not need to be marked.  Symbols matching '__.*' are
# reserved by the compiler, so are automatically excluded below.
_gl_TS_unmarked_extern_functions ?= main usage
_gl_TS_function_match ?= /^(?:$(_gl_TS_extern)) +.*?(\S+) *\(/

# If your project uses a macro like "XTERN", then put
# the following in cfg.mk to override this default:
# export _gl_TS_extern = extern|XTERN
_gl_TS_extern ?= extern

# The second nm|grep checks for file-scope variables with 'extern' scope.
# Without gnulib's progname module, you might put program_name here.
# Symbols matching '__.*' are reserved by the compiler,
# so are automatically excluded below.
_gl_TS_unmarked_extern_vars ?=

# NOTE: the _match variables are perl expressions -- not mere regular
# expressions -- so that you can extend them to match other patterns
# and easily extract matched variable names.
# For example, if your project declares some global variables via
# a macro like this: GLOBAL(type, var_name, initializer), then you
# can override this definition to automatically extract those names:
# export _gl_TS_var_match = \
#   /^(?:$(_gl_TS_extern)) .*?\**(\w+)(\[.*?\])?;/ || /\bGLOBAL\(.*?,\s*(.*?),/
_gl_TS_var_match ?= /^(?:$(_gl_TS_extern)) .*?(\w+)(\[.*?\])?;/

# The names of object files in (or relative to) $(_gl_TS_dir).
_gl_TS_obj_files ?= *.$(OBJEXT)

# Files in which to search for the one-line style extern declarations.
# $(_gl_TS_dir)-relative.
_gl_TS_headers ?= $(noinst_HEADERS)
_gl_TS_other_headers ?= *.h

.PHONY: _gl_tight_scope
_gl_tight_scope: $(bin_PROGRAMS)
	t=exceptions-$$$$;						\
	trap 's=$$?; rm -f $$t; exit $$s' 0;				\
	for sig in 1 2 3 13 15; do					\
	  eval "trap 'v=`expr $$sig + 128`; (exit $$v); exit $$v' $$sig"; \
	done;								\
	src=`for f in $(SOURCES); do					\
	       test -f $$f && d= || d=$(srcdir)/; echo $$d$$f; done`;	\
	hdr=`for f in $(_gl_TS_headers); do				\
	       test -f $$f && d= || d=$(srcdir)/; echo $$d$$f; done`;	\
	( printf '^%s$$\n' '__.*' $(_gl_TS_unmarked_extern_functions);	\
	  grep -h -A1 '^extern .*[^;]$$' $$src				\
	    | grep -vE '^(extern |--)' | $(SED) 's/ .*//';		\
	  perl -lne							\
	     '$(_gl_TS_function_match) and print "^$$1\$$"' $$hdr;	\
	) | sort -u > $$t;						\
	nm -g $(_gl_TS_obj_files)|$(SED) -n 's/.* T //p'|grep -Ev -f $$t \
	  && { echo the above functions should have static scope >&2;	\
	       exit 1; } || : ;						\
	( printf '^%s$$\n' '__.*' $(_gl_TS_unmarked_extern_vars);	\
	  perl -lne '$(_gl_TS_var_match) and print "^$$1\$$"'		\
		$$hdr $(_gl_TS_other_headers)				\
	) | sort -u > $$t;						\
	nm -g $(_gl_TS_obj_files) | $(SED) -n 's/.* [BCDGRS] //p'	\
            | sort -u | grep -Ev -f $$t					\
	  && { echo the above variables should have static scope >&2;	\
	       exit 1; } || :
# TS-end
endif
