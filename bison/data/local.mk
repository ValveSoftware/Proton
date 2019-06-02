## Copyright (C) 2002, 2005-2015 Free Software Foundation, Inc.

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

dist_pkgdata_DATA =                             \
  data/README                                   \
  data/bison.m4                                 \
  data/c++-skel.m4                              \
  data/c++.m4                                   \
  data/c-like.m4                                \
  data/c-skel.m4                                \
  data/c.m4                                     \
  data/glr.c                                    \
  data/glr.cc                                   \
  data/java-skel.m4                             \
  data/java.m4                                  \
  data/lalr1.cc                                 \
  data/lalr1.java                               \
  data/location.cc                              \
  data/stack.hh                                 \
  data/variant.hh                               \
  data/yacc.c

m4sugardir = $(pkgdatadir)/m4sugar
dist_m4sugar_DATA =                             \
  data/m4sugar/foreach.m4                       \
  data/m4sugar/m4sugar.m4

xsltdir = $(pkgdatadir)/xslt
dist_xslt_DATA =                                \
  data/xslt/bison.xsl                           \
  data/xslt/xml2dot.xsl                         \
  data/xslt/xml2text.xsl                        \
  data/xslt/xml2xhtml.xsl
