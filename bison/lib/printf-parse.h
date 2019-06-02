/* Parse printf format string.
   Copyright (C) 1999, 2002-2003, 2005, 2007, 2010-2015 Free Software
   Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef _PRINTF_PARSE_H
#define _PRINTF_PARSE_H

/* This file can be parametrized with the following macros:
     ENABLE_UNISTDIO    Set to 1 to enable the unistdio extensions.
     STATIC             Set to 'static' to declare the function static.  */

#if HAVE_FEATURES_H
# include <features.h> /* for __GLIBC__, __UCLIBC__ */
#endif

#include "printf-args.h"


/* Flags */
#define FLAG_GROUP       1      /* ' flag */
#define FLAG_LEFT        2      /* - flag */
#define FLAG_SHOWSIGN    4      /* + flag */
#define FLAG_SPACE       8      /* space flag */
#define FLAG_ALT        16      /* # flag */
#define FLAG_ZERO       32
#if __GLIBC__ >= 2 && !defined __UCLIBC__
# define FLAG_LOCALIZED 64      /* I flag, uses localized digits */
#endif

/* arg_index value indicating that no argument is consumed.  */
#define ARG_NONE        (~(size_t)0)

/* xxx_directive: A parsed directive.
   xxx_directives: A parsed format string.  */

/* Number of directly allocated directives (no malloc() needed).  */
#define N_DIRECT_ALLOC_DIRECTIVES 7

/* A parsed directive.  */
typedef struct
{
  const char* dir_start;
  const char* dir_end;
  int flags;
  const char* width_start;
  const char* width_end;
  size_t width_arg_index;
  const char* precision_start;
  const char* precision_end;
  size_t precision_arg_index;
  char conversion; /* d i o u x X f F e E g G a A c s p n U % but not C S */
  size_t arg_index;
}
char_directive;

/* A parsed format string.  */
typedef struct
{
  size_t count;
  char_directive *dir;
  size_t max_width_length;
  size_t max_precision_length;
  char_directive direct_alloc_dir[N_DIRECT_ALLOC_DIRECTIVES];
}
char_directives;

#if ENABLE_UNISTDIO

/* A parsed directive.  */
typedef struct
{
  const uint8_t* dir_start;
  const uint8_t* dir_end;
  int flags;
  const uint8_t* width_start;
  const uint8_t* width_end;
  size_t width_arg_index;
  const uint8_t* precision_start;
  const uint8_t* precision_end;
  size_t precision_arg_index;
  uint8_t conversion; /* d i o u x X f F e E g G a A c s p n U % but not C S */
  size_t arg_index;
}
u8_directive;

/* A parsed format string.  */
typedef struct
{
  size_t count;
  u8_directive *dir;
  size_t max_width_length;
  size_t max_precision_length;
  u8_directive direct_alloc_dir[N_DIRECT_ALLOC_DIRECTIVES];
}
u8_directives;

/* A parsed directive.  */
typedef struct
{
  const uint16_t* dir_start;
  const uint16_t* dir_end;
  int flags;
  const uint16_t* width_start;
  const uint16_t* width_end;
  size_t width_arg_index;
  const uint16_t* precision_start;
  const uint16_t* precision_end;
  size_t precision_arg_index;
  uint16_t conversion; /* d i o u x X f F e E g G a A c s p n U % but not C S */
  size_t arg_index;
}
u16_directive;

/* A parsed format string.  */
typedef struct
{
  size_t count;
  u16_directive *dir;
  size_t max_width_length;
  size_t max_precision_length;
  u16_directive direct_alloc_dir[N_DIRECT_ALLOC_DIRECTIVES];
}
u16_directives;

/* A parsed directive.  */
typedef struct
{
  const uint32_t* dir_start;
  const uint32_t* dir_end;
  int flags;
  const uint32_t* width_start;
  const uint32_t* width_end;
  size_t width_arg_index;
  const uint32_t* precision_start;
  const uint32_t* precision_end;
  size_t precision_arg_index;
  uint32_t conversion; /* d i o u x X f F e E g G a A c s p n U % but not C S */
  size_t arg_index;
}
u32_directive;

/* A parsed format string.  */
typedef struct
{
  size_t count;
  u32_directive *dir;
  size_t max_width_length;
  size_t max_precision_length;
  u32_directive direct_alloc_dir[N_DIRECT_ALLOC_DIRECTIVES];
}
u32_directives;

#endif


/* Parses the format string.  Fills in the number N of directives, and fills
   in directives[0], ..., directives[N-1], and sets directives[N].dir_start
   to the end of the format string.  Also fills in the arg_type fields of the
   arguments and the needed count of arguments.  */
#if ENABLE_UNISTDIO
extern int
       ulc_printf_parse (const char *format, char_directives *d, arguments *a);
extern int
       u8_printf_parse (const uint8_t *format, u8_directives *d, arguments *a);
extern int
       u16_printf_parse (const uint16_t *format, u16_directives *d,
                         arguments *a);
extern int
       u32_printf_parse (const uint32_t *format, u32_directives *d,
                         arguments *a);
#else
# ifdef STATIC
STATIC
# else
extern
# endif
int printf_parse (const char *format, char_directives *d, arguments *a);
#endif

#endif /* _PRINTF_PARSE_H */
