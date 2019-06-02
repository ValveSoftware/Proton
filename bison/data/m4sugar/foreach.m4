#                                                  -*- Autoconf -*-
# This file is part of Autoconf.
# foreach-based replacements for recursive functions.
# Speeds up GNU M4 1.4.x by avoiding quadratic $@ recursion, but penalizes
# GNU M4 1.6 by requiring more memory and macro expansions.
#
# Copyright (C) 2008-2013 Free Software Foundation, Inc.

# This file is part of Autoconf.  This program is free
# software; you can redistribute it and/or modify it under the
# terms of the GNU General Public License as published by the
# Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# Under Section 7 of GPL version 3, you are granted additional
# permissions described in the Autoconf Configure Script Exception,
# version 3.0, as published by the Free Software Foundation.
#
# You should have received a copy of the GNU General Public License
# and a copy of the Autoconf Configure Script Exception along with
# this program; see the files COPYINGv3 and COPYING.EXCEPTION
# respectively.  If not, see <http://www.gnu.org/licenses/>.

# Written by Eric Blake.

# In M4 1.4.x, every byte of $@ is rescanned.  This means that an
# algorithm on n arguments that recurses with one less argument each
# iteration will scan n * (n + 1) / 2 arguments, for O(n^2) time.  In
# M4 1.6, this was fixed so that $@ is only scanned once, then
# back-references are made to information stored about the scan.
# Thus, n iterations need only scan n arguments, for O(n) time.
# Additionally, in M4 1.4.x, recursive algorithms did not clean up
# memory very well, requiring O(n^2) memory rather than O(n) for n
# iterations.
#
# This file is designed to overcome the quadratic nature of $@
# recursion by writing a variant of m4_foreach that uses m4_for rather
# than $@ recursion to operate on the list.  This involves more macro
# expansions, but avoids the need to rescan a quadratic number of
# arguments, making these replacements very attractive for M4 1.4.x.
# On the other hand, in any version of M4, expanding additional macros
# costs additional time; therefore, in M4 1.6, where $@ recursion uses
# fewer macros, these replacements actually pessimize performance.
# Additionally, the use of $10 to mean the tenth argument violates
# POSIX; although all versions of m4 1.4.x support this meaning, a
# future m4 version may switch to take it as the first argument
# concatenated with a literal 0, so the implementations in this file
# are not future-proof.  Thus, this file is conditionally included as
# part of m4_init(), only when it is detected that M4 probably has
# quadratic behavior (ie. it lacks the macro __m4_version__).
#
# Please keep this file in sync with m4sugar.m4.

# _m4_foreach(PRE, POST, IGNORED, ARG...)
# ---------------------------------------
# Form the common basis of the m4_foreach and m4_map macros.  For each
# ARG, expand PRE[ARG]POST[].  The IGNORED argument makes recursion
# easier, and must be supplied rather than implicit.
#
# This version minimizes the number of times that $@ is evaluated by
# using m4_for to generate a boilerplate into _m4_f then passing $@ to
# that temporary macro.  Thus, the recursion is done in m4_for without
# reparsing any user input, and is not quadratic.  For an idea of how
# this works, note that m4_foreach(i,[1,2],[i]) calls
#   _m4_foreach([m4_define([i],],[)i],[],[1],[2])
# which defines _m4_f:
#   $1[$4]$2[]$1[$5]$2[]_m4_popdef([_m4_f])
# then calls _m4_f([m4_define([i],],[)i],[],[1],[2]) for a net result:
#   m4_define([i],[1])i[]m4_define([i],[2])i[]_m4_popdef([_m4_f]).
m4_define([_m4_foreach],
[m4_if([$#], [3], [],
       [m4_pushdef([_m4_f], _m4_for([4], [$#], [1],
   [$0_([1], [2],], [)])[_m4_popdef([_m4_f])])_m4_f($@)])])

m4_define([_m4_foreach_],
[[$$1[$$3]$$2[]]])

# m4_case(SWITCH, VAL1, IF-VAL1, VAL2, IF-VAL2, ..., DEFAULT)
# -----------------------------------------------------------
# Find the first VAL that SWITCH matches, and expand the corresponding
# IF-VAL.  If there are no matches, expand DEFAULT.
#
# Use m4_for to create a temporary macro in terms of a boilerplate
# m4_if with final cleanup.  If $# is even, we have DEFAULT; if it is
# odd, then rounding the last $# up in the temporary macro is
# harmless.  For example, both m4_case(1,2,3,4,5) and
# m4_case(1,2,3,4,5,6) result in the intermediate _m4_case being
#   m4_if([$1],[$2],[$3],[$1],[$4],[$5],_m4_popdef([_m4_case])[$6])
m4_define([m4_case],
[m4_if(m4_eval([$# <= 2]), [1], [$2],
[m4_pushdef([_$0], [m4_if(]_m4_for([2], m4_eval([($# - 1) / 2 * 2]), [2],
     [_$0_(], [)])[_m4_popdef(
	 [_$0])]m4_dquote($m4_eval([($# + 1) & ~1]))[)])_$0($@)])])

m4_define([_m4_case_],
[$0_([1], [$1], m4_incr([$1]))])

m4_define([_m4_case__],
[[[$$1],[$$2],[$$3],]])

# m4_bmatch(SWITCH, RE1, VAL1, RE2, VAL2, ..., DEFAULT)
# -----------------------------------------------------
# m4 equivalent of
#
# if (SWITCH =~ RE1)
#   VAL1;
# elif (SWITCH =~ RE2)
#   VAL2;
# elif ...
#   ...
# else
#   DEFAULT
#
# We build the temporary macro _m4_b:
#   m4_define([_m4_b], _m4_defn([_m4_bmatch]))_m4_b([$1], [$2], [$3])...
#   _m4_b([$1], [$m-1], [$m])_m4_b([], [], [$m+1]_m4_popdef([_m4_b]))
# then invoke m4_unquote(_m4_b($@)), for concatenation with later text.
m4_define([m4_bmatch],
[m4_if([$#], 0, [m4_fatal([$0: too few arguments: $#])],
       [$#], 1, [m4_fatal([$0: too few arguments: $#: $1])],
       [$#], 2, [$2],
       [m4_pushdef([_m4_b], [m4_define([_m4_b],
  _m4_defn([_$0]))]_m4_for([3], m4_eval([($# + 1) / 2 * 2 - 1]),
  [2], [_$0_(], [)])[_m4_b([], [],]m4_dquote([$]m4_eval(
  [($# + 1) / 2 * 2]))[_m4_popdef([_m4_b]))])m4_unquote(_m4_b($@))])])

m4_define([_m4_bmatch],
[m4_if(m4_bregexp([$1], [$2]), [-1], [], [[$3]m4_define([$0])])])

m4_define([_m4_bmatch_],
[$0_([1], m4_decr([$1]), [$1])])

m4_define([_m4_bmatch__],
[[_m4_b([$$1], [$$2], [$$3])]])


# m4_cond(TEST1, VAL1, IF-VAL1, TEST2, VAL2, IF-VAL2, ..., [DEFAULT])
# -------------------------------------------------------------------
# Similar to m4_if, except that each TEST is expanded when encountered.
# If the expansion of TESTn matches the string VALn, the result is IF-VALn.
# The result is DEFAULT if no tests passed.  This macro allows
# short-circuiting of expensive tests, where it pays to arrange quick
# filter tests to run first.
#
# m4_cond already guarantees either 3*n or 3*n + 1 arguments, 1 <= n.
# We only have to speed up _m4_cond, by building the temporary _m4_c:
#   m4_define([_m4_c], _m4_defn([m4_unquote]))_m4_c([m4_if(($1), [($2)],
#   [[$3]m4_define([_m4_c])])])_m4_c([m4_if(($4), [($5)],
#   [[$6]m4_define([_m4_c])])])..._m4_c([m4_if(($m-2), [($m-1)],
#   [[$m]m4_define([_m4_c])])])_m4_c([[$m+1]]_m4_popdef([_m4_c]))
# We invoke m4_unquote(_m4_c($@)), for concatenation with later text.
m4_define([_m4_cond],
[m4_pushdef([_m4_c], [m4_define([_m4_c],
  _m4_defn([m4_unquote]))]_m4_for([2], m4_eval([$# / 3 * 3 - 1]), [3],
  [$0_(], [)])[_m4_c(]m4_dquote(m4_dquote(
  [$]m4_eval([$# / 3 * 3 + 1])))[_m4_popdef([_m4_c]))])m4_unquote(_m4_c($@))])

m4_define([_m4_cond_],
[$0_(m4_decr([$1]), [$1], m4_incr([$1]))])

m4_define([_m4_cond__],
[[_m4_c([m4_if(($$1), [($$2)], [[$$3]m4_define([_m4_c])])])]])

# m4_bpatsubsts(STRING, RE1, SUBST1, RE2, SUBST2, ...)
# ----------------------------------------------------
# m4 equivalent of
#
#   $_ = STRING;
#   s/RE1/SUBST1/g;
#   s/RE2/SUBST2/g;
#   ...
#
# m4_bpatsubsts already validated an odd number of arguments; we only
# need to speed up _m4_bpatsubsts.  To avoid nesting, we build the
# temporary _m4_p:
#   m4_define([_m4_p], [$1])m4_define([_m4_p],
#   m4_bpatsubst(m4_dquote(_m4_defn([_m4_p])), [$2], [$3]))m4_define([_m4_p],
#   m4_bpatsubst(m4_dquote(_m4_defn([_m4_p])), [$4], [$5]))m4_define([_m4_p],...
#   m4_bpatsubst(m4_dquote(_m4_defn([_m4_p])), [$m-1], [$m]))m4_unquote(
#   _m4_defn([_m4_p])_m4_popdef([_m4_p]))
m4_define([_m4_bpatsubsts],
[m4_pushdef([_m4_p], [m4_define([_m4_p],
  ]m4_dquote([$]1)[)]_m4_for([3], [$#], [2], [$0_(],
  [)])[m4_unquote(_m4_defn([_m4_p])_m4_popdef([_m4_p]))])_m4_p($@)])

m4_define([_m4_bpatsubsts_],
[$0_(m4_decr([$1]), [$1])])

m4_define([_m4_bpatsubsts__],
[[m4_define([_m4_p],
m4_bpatsubst(m4_dquote(_m4_defn([_m4_p])), [$$1], [$$2]))]])

# m4_shiftn(N, ...)
# -----------------
# Returns ... shifted N times.  Useful for recursive "varargs" constructs.
#
# m4_shiftn already validated arguments; we only need to speed up
# _m4_shiftn.  If N is 3, then we build the temporary _m4_s, defined as
#   ,[$5],[$6],...,[$m]_m4_popdef([_m4_s])
# before calling m4_shift(_m4_s($@)).
m4_define([_m4_shiftn],
[m4_if(m4_incr([$1]), [$#], [], [m4_pushdef([_m4_s],
  _m4_for(m4_eval([$1 + 2]), [$#], [1],
  [[,]m4_dquote($], [)])[_m4_popdef([_m4_s])])m4_shift(_m4_s($@))])])

# m4_do(STRING, ...)
# ------------------
# This macro invokes all its arguments (in sequence, of course).  It is
# useful for making your macros more structured and readable by dropping
# unnecessary dnl's and have the macros indented properly.
#
# Here, we use the temporary macro _m4_do, defined as
#   $1[]$2[]...[]$n[]_m4_popdef([_m4_do])
m4_define([m4_do],
[m4_if([$#], [0], [],
       [m4_pushdef([_$0], _m4_for([1], [$#], [1],
		   [$], [[[]]])[_m4_popdef([_$0])])_$0($@)])])

# m4_dquote_elt(ARGS)
# -------------------
# Return ARGS as an unquoted list of double-quoted arguments.
#
# _m4_foreach to the rescue.
m4_define([m4_dquote_elt],
[m4_if([$#], [0], [], [[[$1]]_m4_foreach([,m4_dquote(], [)], $@)])])

# m4_reverse(ARGS)
# ----------------
# Output ARGS in reverse order.
#
# Invoke _m4_r($@) with the temporary _m4_r built as
#   [$m], [$m-1], ..., [$2], [$1]_m4_popdef([_m4_r])
m4_define([m4_reverse],
[m4_if([$#], [0], [], [$#], [1], [[$1]],
[m4_pushdef([_m4_r], [[$$#]]_m4_for(m4_decr([$#]), [1], [-1],
    [[, ]m4_dquote($], [)])[_m4_popdef([_m4_r])])_m4_r($@)])])


# m4_map_args_pair(EXPRESSION, [END-EXPR = EXPRESSION], ARG...)
# -------------------------------------------------------------
# Perform a pairwise grouping of consecutive ARGs, by expanding
# EXPRESSION([ARG1], [ARG2]).  If there are an odd number of ARGs, the
# final argument is expanded with END-EXPR([ARGn]).
#
# Build the temporary macro _m4_map_args_pair, with the $2([$m+1])
# only output if $# is odd:
#   $1([$3], [$4])[]$1([$5], [$6])[]...$1([$m-1],
#   [$m])[]m4_default([$2], [$1])([$m+1])[]_m4_popdef([_m4_map_args_pair])
m4_define([m4_map_args_pair],
[m4_if([$#], [0], [m4_fatal([$0: too few arguments: $#])],
       [$#], [1], [m4_fatal([$0: too few arguments: $#: $1])],
       [$#], [2], [],
       [$#], [3], [m4_default([$2], [$1])([$3])[]],
       [m4_pushdef([_$0], _m4_for([3],
   m4_eval([$# / 2 * 2 - 1]), [2], [_$0_(], [)])_$0_end(
   [1], [2], [$#])[_m4_popdef([_$0])])_$0($@)])])

m4_define([_m4_map_args_pair_],
[$0_([1], [$1], m4_incr([$1]))])

m4_define([_m4_map_args_pair__],
[[$$1([$$2], [$$3])[]]])

m4_define([_m4_map_args_pair_end],
[m4_if(m4_eval([$3 & 1]), [1], [[m4_default([$$2], [$$1])([$$3])[]]])])

# m4_join(SEP, ARG1, ARG2...)
# ---------------------------
# Produce ARG1SEPARG2...SEPARGn.  Avoid back-to-back SEP when a given ARG
# is the empty string.  No expansion is performed on SEP or ARGs.
#
# Use a self-modifying separator, since we don't know how many
# arguments might be skipped before a separator is first printed, but
# be careful if the separator contains $.  _m4_foreach to the rescue.
m4_define([m4_join],
[m4_pushdef([_m4_sep], [m4_define([_m4_sep], _m4_defn([m4_echo]))])]dnl
[_m4_foreach([_$0([$1],], [)], $@)_m4_popdef([_m4_sep])])

m4_define([_m4_join],
[m4_if([$2], [], [], [_m4_sep([$1])[$2]])])

# m4_joinall(SEP, ARG1, ARG2...)
# ------------------------------
# Produce ARG1SEPARG2...SEPARGn.  An empty ARG results in back-to-back SEP.
# No expansion is performed on SEP or ARGs.
#
# A bit easier than m4_join.  _m4_foreach to the rescue.
m4_define([m4_joinall],
[[$2]m4_if(m4_eval([$# <= 2]), [1], [],
	   [_m4_foreach([$1], [], m4_shift($@))])])

# m4_list_cmp(A, B)
# -----------------
# Compare the two lists of integer expressions A and B.
#
# m4_list_cmp takes care of any side effects; we only override
# _m4_list_cmp_raw, where we can safely expand lists multiple times.
# First, insert padding so that both lists are the same length; the
# trailing +0 is necessary to handle a missing list.  Next, create a
# temporary macro to perform pairwise comparisons until an inequality
# is found.  For example, m4_list_cmp([1], [1,2]) creates _m4_cmp as
#   m4_if(m4_eval([($1) != ($3)]), [1], [m4_cmp([$1], [$3])],
#         m4_eval([($2) != ($4)]), [1], [m4_cmp([$2], [$4])],
#         [0]_m4_popdef([_m4_cmp]))
# then calls _m4_cmp([1+0], [0*2], [1], [2+0])
m4_define([_m4_list_cmp_raw],
[m4_if([$1], [$2], 0,
       [_m4_list_cmp($1+0_m4_list_pad(m4_count($1), m4_count($2)),
		     $2+0_m4_list_pad(m4_count($2), m4_count($1)))])])

m4_define([_m4_list_pad],
[m4_if(m4_eval($1 < $2), [1],
       [_m4_for(m4_incr([$1]), [$2], [1], [,0*])])])

m4_define([_m4_list_cmp],
[m4_pushdef([_m4_cmp], [m4_if(]_m4_for(
   [1], m4_eval([$# >> 1]), [1], [$0_(], [,]m4_eval([$# >> 1])[)])[
      [0]_m4_popdef([_m4_cmp]))])_m4_cmp($@)])

m4_define([_m4_list_cmp_],
[$0_([$1], m4_eval([$1 + $2]))])

m4_define([_m4_list_cmp__],
[[m4_eval([($$1) != ($$2)]), [1], [m4_cmp([$$1], [$$2])],
]])

# m4_max(EXPR, ...)
# m4_min(EXPR, ...)
# -----------------
# Return the decimal value of the maximum (or minimum) in a series of
# integer expressions.
#
# _m4_foreach to the rescue; we only need to replace _m4_minmax.  Here,
# we need a temporary macro to track the best answer so far, so that
# the foreach expression is tractable.
m4_define([_m4_minmax],
[m4_pushdef([_m4_best], m4_eval([$2]))_m4_foreach(
  [m4_define([_m4_best], $1(_m4_best,], [))], m4_shift($@))]dnl
[_m4_best[]_m4_popdef([_m4_best])])

# m4_set_add_all(SET, VALUE...)
# -----------------------------
# Add each VALUE into SET.  This is O(n) in the number of VALUEs, and
# can be faster than calling m4_set_add for each VALUE.
#
# _m4_foreach to the rescue.  If no deletions have occurred, then
# avoid the speed penalty of m4_set_add.
m4_define([m4_set_add_all],
[m4_if([$#], [0], [], [$#], [1], [],
       [m4_define([_m4_set_size($1)], m4_eval(m4_set_size([$1])
	  + m4_len(_m4_foreach(m4_ifdef([_m4_set_cleanup($1)],
  [[m4_set_add]], [[_$0]])[([$1],], [)], $@))))])])

m4_define([_m4_set_add_all],
[m4_ifdef([_m4_set([$1],$2)], [],
	  [m4_define([_m4_set([$1],$2)],
		     [1])m4_pushdef([_m4_set([$1])], [$2])-])])
