/* Test for initial conversion state.
   Copyright (C) 2008-2015 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2008.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include <wchar.h>

#include "verify.h"

#if (defined _WIN32 || defined __WIN32__) && !defined __CYGWIN__

/* On native Windows, 'mbstate_t' is defined as 'int'.  */

int
mbsinit (const mbstate_t *ps)
{
  return ps == NULL || *ps == 0;
}

#else

/* Platforms that lack mbsinit() also lack mbrlen(), mbrtowc(), mbsrtowcs()
   and wcrtomb(), wcsrtombs().
   We assume that
     - sizeof (mbstate_t) >= 4,
     - only stateless encodings are supported (such as UTF-8 and EUC-JP, but
       not ISO-2022 variants),
     - for each encoding, the number of bytes for a wide character is <= 4.
       (This maximum is attained for UTF-8, GB18030, EUC-TW.)
   We define the meaning of mbstate_t as follows:
     - In mb -> wc direction, mbstate_t's first byte contains the number of
       buffered bytes (in the range 0..3), followed by up to 3 buffered bytes.
     - In wc -> mb direction, mbstate_t contains no information. In other
       words, it is always in the initial state.  */

verify (sizeof (mbstate_t) >= 4);

int
mbsinit (const mbstate_t *ps)
{
  const char *pstate = (const char *)ps;

  return pstate == NULL || pstate[0] == 0;
}

#endif
