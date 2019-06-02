/* Named symbol references for Bison

   Copyright (C) 2009-2015 Free Software Foundation, Inc.

   This file is part of Bison, the GNU Compiler Compiler.

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

#include <config.h>
#include "system.h"

#include "named-ref.h"

named_ref *
named_ref_new (uniqstr id, location loc)
{
  named_ref *res = xmalloc (sizeof *res);

  res->id = id;
  res->loc = loc;

  return res;
}

named_ref *
named_ref_copy (const named_ref *r)
{
  return named_ref_new (r->id, r->loc);
}

void
named_ref_free (named_ref *r)
{
  free (r);
}
