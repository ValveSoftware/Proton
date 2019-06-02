                                                            -*- Autoconf -*-

# Common code for C-like languages (C, C++, Java, etc.)

# Copyright (C) 2012-2015 Free Software Foundation, Inc.

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

# b4_comment_(TEXT, OPEN, CONTINUE, END)
# --------------------------------------
# Put TEXT in comment.  Avoid trailing spaces: don't indent empty lines.
# Avoid adding indentation to the first line, as the indentation comes
# from OPEN.  That's why we don't patsubst([$1], [^\(.\)], [   \1]).
#
# Prefix all the output lines with PREFIX.
m4_define([b4_comment_],
[$2[]m4_bpatsubst(m4_expand([[$1]]), [
\(.\)], [
$3\1])$4])


# b4_comment(TEXT, [PREFIX])
# --------------------------
# Put TEXT in comment.  Prefix all the output lines with PREFIX.
m4_define([b4_comment],
[b4_comment_([$1], [$2/* ], [$2   ], [  */])])




# b4_dollar_dollar_(VALUE, FIELD, DEFAULT-FIELD)
# ----------------------------------------------
# If FIELD (or DEFAULT-FIELD) is non-null, return "VALUE.FIELD",
# otherwise just VALUE.  Be sure to pass "(VALUE)" is VALUE is a
# pointer.
m4_define([b4_dollar_dollar_],
[b4_symbol_value([$1],
                 m4_if([$2], [[]],
                       [[$3]], [[$2]]))])

# b4_dollar_pushdef(VALUE-POINTER, DEFAULT-FIELD, LOCATION)
# b4_dollar_popdef
# ---------------------------------------------------------
# Define b4_dollar_dollar for VALUE and DEFAULT-FIELD,
# and b4_at_dollar for LOCATION.
m4_define([b4_dollar_pushdef],
[m4_pushdef([b4_dollar_dollar],
            [b4_dollar_dollar_([$1], m4_dquote($][1), [$2])])dnl
m4_pushdef([b4_at_dollar], [$3])dnl
])
m4_define([b4_dollar_popdef],
[m4_popdef([b4_at_dollar])dnl
m4_popdef([b4_dollar_dollar])dnl
])
