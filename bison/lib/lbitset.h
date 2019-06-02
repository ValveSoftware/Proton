/* Functions to support lbitsets.

   Copyright (C) 2002, 2004, 2009-2015 Free Software Foundation, Inc.

   Contributed by Michael Hayes (m.hayes@elec.canterbury.ac.nz).

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef _LBITSET_H
#define _LBITSET_H

#include "bitset.h"

extern size_t lbitset_bytes (bitset_bindex);

extern bitset lbitset_init (bitset, bitset_bindex);

extern void lbitset_release_memory (void);

#endif
