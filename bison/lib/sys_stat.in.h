/* Provide a more complete sys/stat header file.
   Copyright (C) 2005-2015 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.  */

/* Written by Eric Blake, Paul Eggert, and Jim Meyering.  */

/* This file is supposed to be used on platforms where <sys/stat.h> is
   incomplete.  It is intended to provide definitions and prototypes
   needed by an application.  Start with what the system provides.  */

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

#if defined __need_system_sys_stat_h
/* Special invocation convention.  */

#@INCLUDE_NEXT@ @NEXT_SYS_STAT_H@

#else
/* Normal invocation convention.  */

#ifndef _@GUARD_PREFIX@_SYS_STAT_H

/* Get nlink_t.
   May also define off_t to a 64-bit type on native Windows.  */
#include <sys/types.h>

/* Get struct timespec.  */
#include <time.h>

/* The include_next requires a split double-inclusion guard.  */
#@INCLUDE_NEXT@ @NEXT_SYS_STAT_H@

#ifndef _@GUARD_PREFIX@_SYS_STAT_H
#define _@GUARD_PREFIX@_SYS_STAT_H

/* The definitions of _GL_FUNCDECL_RPL etc. are copied here.  */

/* The definition of _GL_ARG_NONNULL is copied here.  */

/* The definition of _GL_WARN_ON_USE is copied here.  */

/* Before doing "#define mkdir rpl_mkdir" below, we need to include all
   headers that may declare mkdir().  Native Windows platforms declare mkdir
   in <io.h> and/or <direct.h>, not in <unistd.h>.  */
#if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__
# include <io.h>     /* mingw32, mingw64 */
# include <direct.h> /* mingw64, MSVC 9 */
#endif

/* Native Windows platforms declare umask() in <io.h>.  */
#if 0 && ((defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__)
# include <io.h>
#endif

/* Large File Support on native Windows.  */
#if @WINDOWS_64_BIT_ST_SIZE@
# define stat _stati64
#endif

#ifndef S_IFIFO
# ifdef _S_IFIFO
#  define S_IFIFO _S_IFIFO
# endif
#endif

#ifndef S_IFMT
# define S_IFMT 0170000
#endif

#if STAT_MACROS_BROKEN
# undef S_ISBLK
# undef S_ISCHR
# undef S_ISDIR
# undef S_ISFIFO
# undef S_ISLNK
# undef S_ISNAM
# undef S_ISMPB
# undef S_ISMPC
# undef S_ISNWK
# undef S_ISREG
# undef S_ISSOCK
#endif

#ifndef S_ISBLK
# ifdef S_IFBLK
#  define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
# else
#  define S_ISBLK(m) 0
# endif
#endif

#ifndef S_ISCHR
# ifdef S_IFCHR
#  define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
# else
#  define S_ISCHR(m) 0
# endif
#endif

#ifndef S_ISDIR
# ifdef S_IFDIR
#  define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
# else
#  define S_ISDIR(m) 0
# endif
#endif

#ifndef S_ISDOOR /* Solaris 2.5 and up */
# define S_ISDOOR(m) 0
#endif

#ifndef S_ISFIFO
# ifdef S_IFIFO
#  define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
# else
#  define S_ISFIFO(m) 0
# endif
#endif

#ifndef S_ISLNK
# ifdef S_IFLNK
#  define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
# else
#  define S_ISLNK(m) 0
# endif
#endif

#ifndef S_ISMPB /* V7 */
# ifdef S_IFMPB
#  define S_ISMPB(m) (((m) & S_IFMT) == S_IFMPB)
#  define S_ISMPC(m) (((m) & S_IFMT) == S_IFMPC)
# else
#  define S_ISMPB(m) 0
#  define S_ISMPC(m) 0
# endif
#endif

#ifndef S_ISMPX /* AIX */
# define S_ISMPX(m) 0
#endif

#ifndef S_ISNAM /* Xenix */
# ifdef S_IFNAM
#  define S_ISNAM(m) (((m) & S_IFMT) == S_IFNAM)
# else
#  define S_ISNAM(m) 0
# endif
#endif

#ifndef S_ISNWK /* HP/UX */
# ifdef S_IFNWK
#  define S_ISNWK(m) (((m) & S_IFMT) == S_IFNWK)
# else
#  define S_ISNWK(m) 0
# endif
#endif

#ifndef S_ISPORT /* Solaris 10 and up */
# define S_ISPORT(m) 0
#endif

#ifndef S_ISREG
# ifdef S_IFREG
#  define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
# else
#  define S_ISREG(m) 0
# endif
#endif

#ifndef S_ISSOCK
# ifdef S_IFSOCK
#  define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
# else
#  define S_ISSOCK(m) 0
# endif
#endif


#ifndef S_TYPEISMQ
# define S_TYPEISMQ(p) 0
#endif

#ifndef S_TYPEISTMO
# define S_TYPEISTMO(p) 0
#endif


#ifndef S_TYPEISSEM
# ifdef S_INSEM
#  define S_TYPEISSEM(p) (S_ISNAM ((p)->st_mode) && (p)->st_rdev == S_INSEM)
# else
#  define S_TYPEISSEM(p) 0
# endif
#endif

#ifndef S_TYPEISSHM
# ifdef S_INSHD
#  define S_TYPEISSHM(p) (S_ISNAM ((p)->st_mode) && (p)->st_rdev == S_INSHD)
# else
#  define S_TYPEISSHM(p) 0
# endif
#endif

/* high performance ("contiguous data") */
#ifndef S_ISCTG
# define S_ISCTG(p) 0
#endif

/* Cray DMF (data migration facility): off line, with data  */
#ifndef S_ISOFD
# define S_ISOFD(p) 0
#endif

/* Cray DMF (data migration facility): off line, with no data  */
#ifndef S_ISOFL
# define S_ISOFL(p) 0
#endif

/* 4.4BSD whiteout */
#ifndef S_ISWHT
# define S_ISWHT(m) 0
#endif

/* If any of the following are undefined,
   define them to their de facto standard values.  */
#if !S_ISUID
# define S_ISUID 04000
#endif
#if !S_ISGID
# define S_ISGID 02000
#endif

/* S_ISVTX is a common extension to POSIX.  */
#ifndef S_ISVTX
# define S_ISVTX 01000
#endif

#if !S_IRUSR && S_IREAD
# define S_IRUSR S_IREAD
#endif
#if !S_IRUSR
# define S_IRUSR 00400
#endif
#if !S_IRGRP
# define S_IRGRP (S_IRUSR >> 3)
#endif
#if !S_IROTH
# define S_IROTH (S_IRUSR >> 6)
#endif

#if !S_IWUSR && S_IWRITE
# define S_IWUSR S_IWRITE
#endif
#if !S_IWUSR
# define S_IWUSR 00200
#endif
#if !S_IWGRP
# define S_IWGRP (S_IWUSR >> 3)
#endif
#if !S_IWOTH
# define S_IWOTH (S_IWUSR >> 6)
#endif

#if !S_IXUSR && S_IEXEC
# define S_IXUSR S_IEXEC
#endif
#if !S_IXUSR
# define S_IXUSR 00100
#endif
#if !S_IXGRP
# define S_IXGRP (S_IXUSR >> 3)
#endif
#if !S_IXOTH
# define S_IXOTH (S_IXUSR >> 6)
#endif

#if !S_IRWXU
# define S_IRWXU (S_IRUSR | S_IWUSR | S_IXUSR)
#endif
#if !S_IRWXG
# define S_IRWXG (S_IRGRP | S_IWGRP | S_IXGRP)
#endif
#if !S_IRWXO
# define S_IRWXO (S_IROTH | S_IWOTH | S_IXOTH)
#endif

/* S_IXUGO is a common extension to POSIX.  */
#if !S_IXUGO
# define S_IXUGO (S_IXUSR | S_IXGRP | S_IXOTH)
#endif

#ifndef S_IRWXUGO
# define S_IRWXUGO (S_IRWXU | S_IRWXG | S_IRWXO)
#endif

/* Macros for futimens and utimensat.  */
#ifndef UTIME_NOW
# define UTIME_NOW (-1)
# define UTIME_OMIT (-2)
#endif


#if @GNULIB_FCHMODAT@
# if !@HAVE_FCHMODAT@
_GL_FUNCDECL_SYS (fchmodat, int,
                  (int fd, char const *file, mode_t mode, int flag)
                  _GL_ARG_NONNULL ((2)));
# endif
_GL_CXXALIAS_SYS (fchmodat, int,
                  (int fd, char const *file, mode_t mode, int flag));
_GL_CXXALIASWARN (fchmodat);
#elif defined GNULIB_POSIXCHECK
# undef fchmodat
# if HAVE_RAW_DECL_FCHMODAT
_GL_WARN_ON_USE (fchmodat, "fchmodat is not portable - "
                 "use gnulib module openat for portability");
# endif
#endif


#if @GNULIB_FSTAT@
# if @REPLACE_FSTAT@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef fstat
#   define fstat rpl_fstat
#  endif
_GL_FUNCDECL_RPL (fstat, int, (int fd, struct stat *buf) _GL_ARG_NONNULL ((2)));
_GL_CXXALIAS_RPL (fstat, int, (int fd, struct stat *buf));
# else
_GL_CXXALIAS_SYS (fstat, int, (int fd, struct stat *buf));
# endif
_GL_CXXALIASWARN (fstat);
#elif @WINDOWS_64_BIT_ST_SIZE@
/* Above, we define stat to _stati64.  */
# define fstat _fstati64
#elif defined GNULIB_POSIXCHECK
# undef fstat
# if HAVE_RAW_DECL_FSTAT
_GL_WARN_ON_USE (fstat, "fstat has portability problems - "
                 "use gnulib module fstat for portability");
# endif
#endif


#if @GNULIB_FSTATAT@
# if @REPLACE_FSTATAT@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef fstatat
#   define fstatat rpl_fstatat
#  endif
_GL_FUNCDECL_RPL (fstatat, int,
                  (int fd, char const *name, struct stat *st, int flags)
                  _GL_ARG_NONNULL ((2, 3)));
_GL_CXXALIAS_RPL (fstatat, int,
                  (int fd, char const *name, struct stat *st, int flags));
# else
#  if !@HAVE_FSTATAT@
_GL_FUNCDECL_SYS (fstatat, int,
                  (int fd, char const *name, struct stat *st, int flags)
                  _GL_ARG_NONNULL ((2, 3)));
#  endif
_GL_CXXALIAS_SYS (fstatat, int,
                  (int fd, char const *name, struct stat *st, int flags));
# endif
_GL_CXXALIASWARN (fstatat);
#elif defined GNULIB_POSIXCHECK
# undef fstatat
# if HAVE_RAW_DECL_FSTATAT
_GL_WARN_ON_USE (fstatat, "fstatat is not portable - "
                 "use gnulib module openat for portability");
# endif
#endif


#if @GNULIB_FUTIMENS@
/* Use the rpl_ prefix also on Solaris <= 9, because on Solaris 9 our futimens
   implementation relies on futimesat, which on Solaris 10 makes an invocation
   to futimens that is meant to invoke the libc's futimens(), not gnulib's
   futimens().  */
# if @REPLACE_FUTIMENS@ || (!@HAVE_FUTIMENS@ && defined __sun)
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef futimens
#   define futimens rpl_futimens
#  endif
_GL_FUNCDECL_RPL (futimens, int, (int fd, struct timespec const times[2]));
_GL_CXXALIAS_RPL (futimens, int, (int fd, struct timespec const times[2]));
# else
#  if !@HAVE_FUTIMENS@
_GL_FUNCDECL_SYS (futimens, int, (int fd, struct timespec const times[2]));
#  endif
_GL_CXXALIAS_SYS (futimens, int, (int fd, struct timespec const times[2]));
# endif
# if @HAVE_FUTIMENS@
_GL_CXXALIASWARN (futimens);
# endif
#elif defined GNULIB_POSIXCHECK
# undef futimens
# if HAVE_RAW_DECL_FUTIMENS
_GL_WARN_ON_USE (futimens, "futimens is not portable - "
                 "use gnulib module futimens for portability");
# endif
#endif


#if @GNULIB_LCHMOD@
/* Change the mode of FILENAME to MODE, without dereferencing it if FILENAME
   denotes a symbolic link.  */
# if !@HAVE_LCHMOD@
/* The lchmod replacement follows symbolic links.  Callers should take
   this into account; lchmod should be applied only to arguments that
   are known to not be symbolic links.  On hosts that lack lchmod,
   this can lead to race conditions between the check and the
   invocation of lchmod, but we know of no workarounds that are
   reliable in general.  You might try requesting support for lchmod
   from your operating system supplier.  */
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   define lchmod chmod
#  endif
/* Need to cast, because on mingw, the second parameter of chmod is
                                                int mode.  */
_GL_CXXALIAS_RPL_CAST_1 (lchmod, chmod, int,
                         (const char *filename, mode_t mode));
# else
#  if 0 /* assume already declared */
_GL_FUNCDECL_SYS (lchmod, int, (const char *filename, mode_t mode)
                               _GL_ARG_NONNULL ((1)));
#  endif
_GL_CXXALIAS_SYS (lchmod, int, (const char *filename, mode_t mode));
# endif
# if @HAVE_LCHMOD@
_GL_CXXALIASWARN (lchmod);
# endif
#elif defined GNULIB_POSIXCHECK
# undef lchmod
# if HAVE_RAW_DECL_LCHMOD
_GL_WARN_ON_USE (lchmod, "lchmod is unportable - "
                 "use gnulib module lchmod for portability");
# endif
#endif


#if @GNULIB_LSTAT@
# if ! @HAVE_LSTAT@
/* mingw does not support symlinks, therefore it does not have lstat.  But
   without links, stat does just fine.  */
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   define lstat stat
#  endif
_GL_CXXALIAS_RPL_1 (lstat, stat, int, (const char *name, struct stat *buf));
# elif @REPLACE_LSTAT@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef lstat
#   define lstat rpl_lstat
#  endif
_GL_FUNCDECL_RPL (lstat, int, (const char *name, struct stat *buf)
                              _GL_ARG_NONNULL ((1, 2)));
_GL_CXXALIAS_RPL (lstat, int, (const char *name, struct stat *buf));
# else
_GL_CXXALIAS_SYS (lstat, int, (const char *name, struct stat *buf));
# endif
# if @HAVE_LSTAT@
_GL_CXXALIASWARN (lstat);
# endif
#elif defined GNULIB_POSIXCHECK
# undef lstat
# if HAVE_RAW_DECL_LSTAT
_GL_WARN_ON_USE (lstat, "lstat is unportable - "
                 "use gnulib module lstat for portability");
# endif
#endif


#if @REPLACE_MKDIR@
# if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#  undef mkdir
#  define mkdir rpl_mkdir
# endif
_GL_FUNCDECL_RPL (mkdir, int, (char const *name, mode_t mode)
                              _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (mkdir, int, (char const *name, mode_t mode));
#else
/* mingw's _mkdir() function has 1 argument, but we pass 2 arguments.
   Additionally, it declares _mkdir (and depending on compile flags, an
   alias mkdir), only in the nonstandard includes <direct.h> and <io.h>,
   which are included above.  */
# if (defined _WIN32 || defined __WIN32__) && ! defined __CYGWIN__

#  if !GNULIB_defined_rpl_mkdir
static int
rpl_mkdir (char const *name, mode_t mode)
{
  return _mkdir (name);
}
#   define GNULIB_defined_rpl_mkdir 1
#  endif

#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   define mkdir rpl_mkdir
#  endif
_GL_CXXALIAS_RPL (mkdir, int, (char const *name, mode_t mode));
# else
_GL_CXXALIAS_SYS (mkdir, int, (char const *name, mode_t mode));
# endif
#endif
_GL_CXXALIASWARN (mkdir);


#if @GNULIB_MKDIRAT@
# if !@HAVE_MKDIRAT@
_GL_FUNCDECL_SYS (mkdirat, int, (int fd, char const *file, mode_t mode)
                                _GL_ARG_NONNULL ((2)));
# endif
_GL_CXXALIAS_SYS (mkdirat, int, (int fd, char const *file, mode_t mode));
_GL_CXXALIASWARN (mkdirat);
#elif defined GNULIB_POSIXCHECK
# undef mkdirat
# if HAVE_RAW_DECL_MKDIRAT
_GL_WARN_ON_USE (mkdirat, "mkdirat is not portable - "
                 "use gnulib module openat for portability");
# endif
#endif


#if @GNULIB_MKFIFO@
# if @REPLACE_MKFIFO@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef mkfifo
#   define mkfifo rpl_mkfifo
#  endif
_GL_FUNCDECL_RPL (mkfifo, int, (char const *file, mode_t mode)
                               _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (mkfifo, int, (char const *file, mode_t mode));
# else
#  if !@HAVE_MKFIFO@
_GL_FUNCDECL_SYS (mkfifo, int, (char const *file, mode_t mode)
                               _GL_ARG_NONNULL ((1)));
#  endif
_GL_CXXALIAS_SYS (mkfifo, int, (char const *file, mode_t mode));
# endif
_GL_CXXALIASWARN (mkfifo);
#elif defined GNULIB_POSIXCHECK
# undef mkfifo
# if HAVE_RAW_DECL_MKFIFO
_GL_WARN_ON_USE (mkfifo, "mkfifo is not portable - "
                 "use gnulib module mkfifo for portability");
# endif
#endif


#if @GNULIB_MKFIFOAT@
# if !@HAVE_MKFIFOAT@
_GL_FUNCDECL_SYS (mkfifoat, int, (int fd, char const *file, mode_t mode)
                                 _GL_ARG_NONNULL ((2)));
# endif
_GL_CXXALIAS_SYS (mkfifoat, int, (int fd, char const *file, mode_t mode));
_GL_CXXALIASWARN (mkfifoat);
#elif defined GNULIB_POSIXCHECK
# undef mkfifoat
# if HAVE_RAW_DECL_MKFIFOAT
_GL_WARN_ON_USE (mkfifoat, "mkfifoat is not portable - "
                 "use gnulib module mkfifoat for portability");
# endif
#endif


#if @GNULIB_MKNOD@
# if @REPLACE_MKNOD@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef mknod
#   define mknod rpl_mknod
#  endif
_GL_FUNCDECL_RPL (mknod, int, (char const *file, mode_t mode, dev_t dev)
                              _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (mknod, int, (char const *file, mode_t mode, dev_t dev));
# else
#  if !@HAVE_MKNOD@
_GL_FUNCDECL_SYS (mknod, int, (char const *file, mode_t mode, dev_t dev)
                              _GL_ARG_NONNULL ((1)));
#  endif
/* Need to cast, because on OSF/1 5.1, the third parameter is '...'.  */
_GL_CXXALIAS_SYS_CAST (mknod, int, (char const *file, mode_t mode, dev_t dev));
# endif
_GL_CXXALIASWARN (mknod);
#elif defined GNULIB_POSIXCHECK
# undef mknod
# if HAVE_RAW_DECL_MKNOD
_GL_WARN_ON_USE (mknod, "mknod is not portable - "
                 "use gnulib module mknod for portability");
# endif
#endif


#if @GNULIB_MKNODAT@
# if !@HAVE_MKNODAT@
_GL_FUNCDECL_SYS (mknodat, int,
                  (int fd, char const *file, mode_t mode, dev_t dev)
                  _GL_ARG_NONNULL ((2)));
# endif
_GL_CXXALIAS_SYS (mknodat, int,
                  (int fd, char const *file, mode_t mode, dev_t dev));
_GL_CXXALIASWARN (mknodat);
#elif defined GNULIB_POSIXCHECK
# undef mknodat
# if HAVE_RAW_DECL_MKNODAT
_GL_WARN_ON_USE (mknodat, "mknodat is not portable - "
                 "use gnulib module mkfifoat for portability");
# endif
#endif


#if @GNULIB_STAT@
# if @REPLACE_STAT@
/* We can't use the object-like #define stat rpl_stat, because of
   struct stat.  This means that rpl_stat will not be used if the user
   does (stat)(a,b).  Oh well.  */
#  if defined _AIX && defined stat && defined _LARGE_FILES
    /* With _LARGE_FILES defined, AIX (only) defines stat to stat64,
       so we have to replace stat64() instead of stat(). */
#   undef stat64
#   define stat64(name, st) rpl_stat (name, st)
#  elif @WINDOWS_64_BIT_ST_SIZE@
    /* Above, we define stat to _stati64.  */
#   if defined __MINGW32__ && defined _stati64
#    ifndef _USE_32BIT_TIME_T
      /* The system headers define _stati64 to _stat64.  */
#     undef _stat64
#     define _stat64(name, st) rpl_stat (name, st)
#    endif
#   elif defined _MSC_VER && defined _stati64
#    ifdef _USE_32BIT_TIME_T
      /* The system headers define _stati64 to _stat32i64.  */
#     undef _stat32i64
#     define _stat32i64(name, st) rpl_stat (name, st)
#    else
      /* The system headers define _stati64 to _stat64.  */
#     undef _stat64
#     define _stat64(name, st) rpl_stat (name, st)
#    endif
#   else
#    undef _stati64
#    define _stati64(name, st) rpl_stat (name, st)
#   endif
#  elif defined __MINGW32__ && defined stat
#   ifdef _USE_32BIT_TIME_T
     /* The system headers define stat to _stat32i64.  */
#    undef _stat32i64
#    define _stat32i64(name, st) rpl_stat (name, st)
#   else
     /* The system headers define stat to _stat64.  */
#    undef _stat64
#    define _stat64(name, st) rpl_stat (name, st)
#   endif
#  elif defined _MSC_VER && defined stat
#   ifdef _USE_32BIT_TIME_T
     /* The system headers define stat to _stat32.  */
#    undef _stat32
#    define _stat32(name, st) rpl_stat (name, st)
#   else
     /* The system headers define stat to _stat64i32.  */
#    undef _stat64i32
#    define _stat64i32(name, st) rpl_stat (name, st)
#   endif
#  else /* !(_AIX ||__MINGW32__ ||  _MSC_VER) */
#   undef stat
#   define stat(name, st) rpl_stat (name, st)
#  endif /* !_LARGE_FILES */
_GL_EXTERN_C int stat (const char *name, struct stat *buf)
                      _GL_ARG_NONNULL ((1, 2));
# endif
#elif defined GNULIB_POSIXCHECK
# undef stat
# if HAVE_RAW_DECL_STAT
_GL_WARN_ON_USE (stat, "stat is unportable - "
                 "use gnulib module stat for portability");
# endif
#endif


#if @GNULIB_UTIMENSAT@
/* Use the rpl_ prefix also on Solaris <= 9, because on Solaris 9 our utimensat
   implementation relies on futimesat, which on Solaris 10 makes an invocation
   to utimensat that is meant to invoke the libc's utimensat(), not gnulib's
   utimensat().  */
# if @REPLACE_UTIMENSAT@ || (!@HAVE_UTIMENSAT@ && defined __sun)
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef utimensat
#   define utimensat rpl_utimensat
#  endif
_GL_FUNCDECL_RPL (utimensat, int, (int fd, char const *name,
                                   struct timespec const times[2], int flag)
                                  _GL_ARG_NONNULL ((2)));
_GL_CXXALIAS_RPL (utimensat, int, (int fd, char const *name,
                                   struct timespec const times[2], int flag));
# else
#  if !@HAVE_UTIMENSAT@
_GL_FUNCDECL_SYS (utimensat, int, (int fd, char const *name,
                                   struct timespec const times[2], int flag)
                                  _GL_ARG_NONNULL ((2)));
#  endif
_GL_CXXALIAS_SYS (utimensat, int, (int fd, char const *name,
                                   struct timespec const times[2], int flag));
# endif
# if @HAVE_UTIMENSAT@
_GL_CXXALIASWARN (utimensat);
# endif
#elif defined GNULIB_POSIXCHECK
# undef utimensat
# if HAVE_RAW_DECL_UTIMENSAT
_GL_WARN_ON_USE (utimensat, "utimensat is not portable - "
                 "use gnulib module utimensat for portability");
# endif
#endif


#endif /* _@GUARD_PREFIX@_SYS_STAT_H */
#endif /* _@GUARD_PREFIX@_SYS_STAT_H */
#endif
