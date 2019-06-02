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

include lib/gnulib.mk

# Implementation of bitsets.
lib_libbison_a_SOURCES +=                       \
  lib/abitset.c                                 \
  lib/abitset.h                                 \
  lib/bbitset.h                                 \
  lib/bitset.c                                  \
  lib/bitset.h                                  \
  lib/bitset_stats.c                            \
  lib/bitset_stats.h                            \
  lib/bitsetv.c                                 \
  lib/bitsetv.h                                 \
  lib/ebitset.c                                 \
  lib/ebitset.h                                 \
  lib/lbitset.c                                 \
  lib/lbitset.h                                 \
  lib/libiberty.h                               \
  lib/vbitset.c                                 \
  lib/vbitset.h

# Additional bitset operations.
lib_libbison_a_SOURCES +=                       \
  lib/bitsetv-print.h                           \
  lib/bitsetv-print.c

# timevars, stolen from GCC.
lib_libbison_a_SOURCES +=                       \
  lib/timevar.h                                 \
  lib/timevar.c                                 \
  lib/timevar.def

# Non-gnulib sources in Bison's internal library.
lib_libbison_a_SOURCES +=                       \
  lib/get-errno.h                               \
  lib/get-errno.c

# The Yacc compatibility library.
if ENABLE_YACC
lib_LIBRARIES = lib/liby.a
EXTRA_LIBRARIES = lib/liby.a
lib_liby_a_SOURCES = lib/main.c lib/yyerror.c
endif
