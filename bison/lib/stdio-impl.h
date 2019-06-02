/* Implementation details of FILE streams.
   Copyright (C) 2007-2008, 2010-2015 Free Software Foundation, Inc.

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

/* Many stdio implementations have the same logic and therefore can share
   the same implementation of stdio extension API, except that some fields
   have different naming conventions, or their access requires some casts.  */


/* BSD stdio derived implementations.  */

#if defined __NetBSD__                         /* NetBSD */
/* Get __NetBSD_Version__.  */
# include <sys/param.h>
#endif

#include <errno.h>                             /* For detecting Plan9.  */

#if defined __sferror || defined __DragonFly__ /* FreeBSD, NetBSD, OpenBSD, DragonFly, Mac OS X, Cygwin */

# if defined __DragonFly__          /* DragonFly */
  /* See <http://www.dragonflybsd.org/cvsweb/src/lib/libc/stdio/priv_stdio.h?rev=HEAD&content-type=text/x-cvsweb-markup>.  */
#  define fp_ ((struct { struct __FILE_public pub; \
                         struct { unsigned char *_base; int _size; } _bf; \
                         void *cookie; \
                         void *_close; \
                         void *_read; \
                         void *_seek; \
                         void *_write; \
                         struct { unsigned char *_base; int _size; } _ub; \
                         int _ur; \
                         unsigned char _ubuf[3]; \
                         unsigned char _nbuf[1]; \
                         struct { unsigned char *_base; int _size; } _lb; \
                         int _blksize; \
                         fpos_t _offset; \
                         /* More fields, not relevant here.  */ \
                       } *) fp)
  /* See <http://www.dragonflybsd.org/cvsweb/src/include/stdio.h?rev=HEAD&content-type=text/x-cvsweb-markup>.  */
#  define _p pub._p
#  define _flags pub._flags
#  define _r pub._r
#  define _w pub._w
# else
#  define fp_ fp
# endif

# if (defined __NetBSD__ && __NetBSD_Version__ >= 105270000) || defined __OpenBSD__ || defined __ANDROID__ /* NetBSD >= 1.5ZA, OpenBSD, Android */
  /* See <http://cvsweb.netbsd.org/bsdweb.cgi/src/lib/libc/stdio/fileext.h?rev=HEAD&content-type=text/x-cvsweb-markup>
     and <http://www.openbsd.org/cgi-bin/cvsweb/src/lib/libc/stdio/fileext.h?rev=HEAD&content-type=text/x-cvsweb-markup> */
  struct __sfileext
    {
      struct  __sbuf _ub; /* ungetc buffer */
      /* More fields, not relevant here.  */
    };
#  define fp_ub ((struct __sfileext *) fp->_ext._base)->_ub
# else                                         /* FreeBSD, NetBSD <= 1.5Z, DragonFly, Mac OS X, Cygwin */
#  define fp_ub fp_->_ub
# endif

# define HASUB(fp) (fp_ub._base != NULL)

#endif


/* SystemV derived implementations.  */

#ifdef __TANDEM                     /* NonStop Kernel */
# ifndef _IOERR
/* These values were determined by the program 'stdioext-flags' at
   <http://lists.gnu.org/archive/html/bug-gnulib/2010-12/msg00165.html>.  */
#  define _IOERR   0x40
#  define _IOREAD  0x80
#  define _IOWRT    0x4
#  define _IORW   0x100
# endif
#endif

#if defined _IOERR

# if defined __sun && defined _LP64 /* Solaris/{SPARC,AMD64} 64-bit */
#  define fp_ ((struct { unsigned char *_ptr; \
                         unsigned char *_base; \
                         unsigned char *_end; \
                         long _cnt; \
                         int _file; \
                         unsigned int _flag; \
                       } *) fp)
# else
#  define fp_ fp
# endif

# if defined _SCO_DS                /* OpenServer */
#  define _cnt __cnt
#  define _ptr __ptr
#  define _base __base
#  define _flag __flag
# endif

#endif
