/* Like <fcntl.h>, but with non-working flags defined to 0.

   Copyright (C) 2006-2015 Free Software Foundation, Inc.

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

/* written by Paul Eggert */

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

#if defined __need_system_fcntl_h
/* Special invocation convention.  */

/* Needed before <sys/stat.h>.
   May also define off_t to a 64-bit type on native Windows.  */
#include <sys/types.h>
/* On some systems other than glibc, <sys/stat.h> is a prerequisite of
   <fcntl.h>.  On glibc systems, we would like to avoid namespace pollution.
   But on glibc systems, <fcntl.h> includes <sys/stat.h> inside an
   extern "C" { ... } block, which leads to errors in C++ mode with the
   overridden <sys/stat.h> from gnulib.  These errors are known to be gone
   with g++ version >= 4.3.  */
#if !(defined __GLIBC__ || defined __UCLIBC__) || (defined __cplusplus && defined GNULIB_NAMESPACE && (defined __ICC || !(__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))))
# include <sys/stat.h>
#endif
#@INCLUDE_NEXT@ @NEXT_FCNTL_H@

#else
/* Normal invocation convention.  */

#ifndef _@GUARD_PREFIX@_FCNTL_H

/* Needed before <sys/stat.h>.
   May also define off_t to a 64-bit type on native Windows.  */
#include <sys/types.h>
/* On some systems other than glibc, <sys/stat.h> is a prerequisite of
   <fcntl.h>.  On glibc systems, we would like to avoid namespace pollution.
   But on glibc systems, <fcntl.h> includes <sys/stat.h> inside an
   extern "C" { ... } block, which leads to errors in C++ mode with the
   overridden <sys/stat.h> from gnulib.  These errors are known to be gone
   with g++ version >= 4.3.  */
#if !(defined __GLIBC__ || defined __UCLIBC__) || (defined __cplusplus && defined GNULIB_NAMESPACE && (defined __ICC || !(__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))))
# include <sys/stat.h>
#endif
/* The include_next requires a split double-inclusion guard.  */
#@INCLUDE_NEXT@ @NEXT_FCNTL_H@

#ifndef _@GUARD_PREFIX@_FCNTL_H
#define _@GUARD_PREFIX@_FCNTL_H

#ifndef __GLIBC__ /* Avoid namespace pollution on glibc systems.  */
# include <unistd.h>
#endif

/* Native Windows platforms declare open(), creat() in <io.h>.  */
#if (@GNULIB_OPEN@ || defined GNULIB_POSIXCHECK) \
    && ((defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__)
# include <io.h>
#endif


/* The definitions of _GL_FUNCDECL_RPL etc. are copied here.  */

/* The definition of _GL_ARG_NONNULL is copied here.  */

/* The definition of _GL_WARN_ON_USE is copied here.  */


/* Declare overridden functions.  */

#if @GNULIB_FCNTL@
# if @REPLACE_FCNTL@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef fcntl
#   define fcntl rpl_fcntl
#  endif
_GL_FUNCDECL_RPL (fcntl, int, (int fd, int action, ...));
_GL_CXXALIAS_RPL (fcntl, int, (int fd, int action, ...));
# else
#  if !@HAVE_FCNTL@
_GL_FUNCDECL_SYS (fcntl, int, (int fd, int action, ...));
#  endif
_GL_CXXALIAS_SYS (fcntl, int, (int fd, int action, ...));
# endif
_GL_CXXALIASWARN (fcntl);
#elif defined GNULIB_POSIXCHECK
# undef fcntl
# if HAVE_RAW_DECL_FCNTL
_GL_WARN_ON_USE (fcntl, "fcntl is not always POSIX compliant - "
                 "use gnulib module fcntl for portability");
# endif
#endif

#if @GNULIB_OPEN@
# if @REPLACE_OPEN@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef open
#   define open rpl_open
#  endif
_GL_FUNCDECL_RPL (open, int, (const char *filename, int flags, ...)
                             _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (open, int, (const char *filename, int flags, ...));
# else
_GL_CXXALIAS_SYS (open, int, (const char *filename, int flags, ...));
# endif
/* On HP-UX 11, in C++ mode, open() is defined as an inline function with a
   default argument.  _GL_CXXALIASWARN does not work in this case.  */
# if !defined __hpux
_GL_CXXALIASWARN (open);
# endif
#elif defined GNULIB_POSIXCHECK
# undef open
/* Assume open is always declared.  */
_GL_WARN_ON_USE (open, "open is not always POSIX compliant - "
                 "use gnulib module open for portability");
#endif

#if @GNULIB_OPENAT@
# if @REPLACE_OPENAT@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef openat
#   define openat rpl_openat
#  endif
_GL_FUNCDECL_RPL (openat, int,
                  (int fd, char const *file, int flags, /* mode_t mode */ ...)
                  _GL_ARG_NONNULL ((2)));
_GL_CXXALIAS_RPL (openat, int,
                  (int fd, char const *file, int flags, /* mode_t mode */ ...));
# else
#  if !@HAVE_OPENAT@
_GL_FUNCDECL_SYS (openat, int,
                  (int fd, char const *file, int flags, /* mode_t mode */ ...)
                  _GL_ARG_NONNULL ((2)));
#  endif
_GL_CXXALIAS_SYS (openat, int,
                  (int fd, char const *file, int flags, /* mode_t mode */ ...));
# endif
_GL_CXXALIASWARN (openat);
#elif defined GNULIB_POSIXCHECK
# undef openat
# if HAVE_RAW_DECL_OPENAT
_GL_WARN_ON_USE (openat, "openat is not portable - "
                 "use gnulib module openat for portability");
# endif
#endif


/* Fix up the FD_* macros, only known to be missing on mingw.  */

#ifndef FD_CLOEXEC
# define FD_CLOEXEC 1
#endif

/* Fix up the supported F_* macros.  Intentionally leave other F_*
   macros undefined.  Only known to be missing on mingw.  */

#ifndef F_DUPFD_CLOEXEC
# define F_DUPFD_CLOEXEC 0x40000000
/* Witness variable: 1 if gnulib defined F_DUPFD_CLOEXEC, 0 otherwise.  */
# define GNULIB_defined_F_DUPFD_CLOEXEC 1
#else
# define GNULIB_defined_F_DUPFD_CLOEXEC 0
#endif

#ifndef F_DUPFD
# define F_DUPFD 1
#endif

#ifndef F_GETFD
# define F_GETFD 2
#endif

/* Fix up the O_* macros.  */

/* AIX 7.1 with XL C 12.1 defines O_CLOEXEC, O_NOFOLLOW, and O_TTY_INIT
   to values outside 'int' range, so omit these misdefinitions.
   But avoid namespace pollution on non-AIX systems.  */
#ifdef _AIX
# include <limits.h>
# if defined O_CLOEXEC && ! (INT_MIN <= O_CLOEXEC && O_CLOEXEC <= INT_MAX)
#  undef O_CLOEXEC
# endif
# if defined O_NOFOLLOW && ! (INT_MIN <= O_NOFOLLOW && O_NOFOLLOW <= INT_MAX)
#  undef O_NOFOLLOW
# endif
# if defined O_TTY_INIT && ! (INT_MIN <= O_TTY_INIT && O_TTY_INIT <= INT_MAX)
#  undef O_TTY_INIT
# endif
#endif

#if !defined O_DIRECT && defined O_DIRECTIO
/* Tru64 spells it 'O_DIRECTIO'.  */
# define O_DIRECT O_DIRECTIO
#endif

#if !defined O_CLOEXEC && defined O_NOINHERIT
/* Mingw spells it 'O_NOINHERIT'.  */
# define O_CLOEXEC O_NOINHERIT
#endif

#ifndef O_CLOEXEC
# define O_CLOEXEC 0
#endif

#ifndef O_DIRECT
# define O_DIRECT 0
#endif

#ifndef O_DIRECTORY
# define O_DIRECTORY 0
#endif

#ifndef O_DSYNC
# define O_DSYNC 0
#endif

#ifndef O_EXEC
# define O_EXEC O_RDONLY /* This is often close enough in older systems.  */
#endif

#ifndef O_IGNORE_CTTY
# define O_IGNORE_CTTY 0
#endif

#ifndef O_NDELAY
# define O_NDELAY 0
#endif

#ifndef O_NOATIME
# define O_NOATIME 0
#endif

#ifndef O_NONBLOCK
# define O_NONBLOCK O_NDELAY
#endif

/* If the gnulib module 'nonblocking' is in use, guarantee a working non-zero
   value of O_NONBLOCK.  Otherwise, O_NONBLOCK is defined (above) to O_NDELAY
   or to 0 as fallback.  */
#if @GNULIB_NONBLOCKING@
# if O_NONBLOCK
#  define GNULIB_defined_O_NONBLOCK 0
# else
#  define GNULIB_defined_O_NONBLOCK 1
#  undef O_NONBLOCK
#  define O_NONBLOCK 0x40000000
# endif
#endif

#ifndef O_NOCTTY
# define O_NOCTTY 0
#endif

#ifndef O_NOFOLLOW
# define O_NOFOLLOW 0
#endif

#ifndef O_NOLINK
# define O_NOLINK 0
#endif

#ifndef O_NOLINKS
# define O_NOLINKS 0
#endif

#ifndef O_NOTRANS
# define O_NOTRANS 0
#endif

#ifndef O_RSYNC
# define O_RSYNC 0
#endif

#ifndef O_SEARCH
# define O_SEARCH O_RDONLY /* This is often close enough in older systems.  */
#endif

#ifndef O_SYNC
# define O_SYNC 0
#endif

#ifndef O_TTY_INIT
# define O_TTY_INIT 0
#endif

#if ~O_ACCMODE & (O_RDONLY | O_WRONLY | O_RDWR | O_EXEC | O_SEARCH)
# undef O_ACCMODE
# define O_ACCMODE (O_RDONLY | O_WRONLY | O_RDWR | O_EXEC | O_SEARCH)
#endif

/* For systems that distinguish between text and binary I/O.
   O_BINARY is usually declared in fcntl.h  */
#if !defined O_BINARY && defined _O_BINARY
  /* For MSC-compatible compilers.  */
# define O_BINARY _O_BINARY
# define O_TEXT _O_TEXT
#endif

#if defined __BEOS__ || defined __HAIKU__
  /* BeOS 5 and Haiku have O_BINARY and O_TEXT, but they have no effect.  */
# undef O_BINARY
# undef O_TEXT
#endif

#ifndef O_BINARY
# define O_BINARY 0
# define O_TEXT 0
#endif

/* Fix up the AT_* macros.  */

/* Work around a bug in Solaris 9 and 10: AT_FDCWD is positive.  Its
   value exceeds INT_MAX, so its use as an int doesn't conform to the
   C standard, and GCC and Sun C complain in some cases.  If the bug
   is present, undef AT_FDCWD here, so it can be redefined below.  */
#if 0 < AT_FDCWD && AT_FDCWD == 0xffd19553
# undef AT_FDCWD
#endif

/* Use the same bit pattern as Solaris 9, but with the proper
   signedness.  The bit pattern is important, in case this actually is
   Solaris with the above workaround.  */
#ifndef AT_FDCWD
# define AT_FDCWD (-3041965)
#endif

/* Use the same values as Solaris 9.  This shouldn't matter, but
   there's no real reason to differ.  */
#ifndef AT_SYMLINK_NOFOLLOW
# define AT_SYMLINK_NOFOLLOW 4096
#endif

#ifndef AT_REMOVEDIR
# define AT_REMOVEDIR 1
#endif

/* Solaris 9 lacks these two, so just pick unique values.  */
#ifndef AT_SYMLINK_FOLLOW
# define AT_SYMLINK_FOLLOW 2
#endif

#ifndef AT_EACCESS
# define AT_EACCESS 4
#endif


#endif /* _@GUARD_PREFIX@_FCNTL_H */
#endif /* _@GUARD_PREFIX@_FCNTL_H */
#endif
