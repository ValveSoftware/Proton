/* A more-standard <time.h>.

   Copyright (C) 2007-2015 Free Software Foundation, Inc.

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

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

/* Don't get in the way of glibc when it includes time.h merely to
   declare a few standard symbols, rather than to declare all the
   symbols.  Also, Solaris 8 <time.h> eventually includes itself
   recursively; if that is happening, just include the system <time.h>
   without adding our own declarations.  */
#if (defined __need_time_t || defined __need_clock_t \
     || defined __need_timespec \
     || defined _@GUARD_PREFIX@_TIME_H)

# @INCLUDE_NEXT@ @NEXT_TIME_H@

#else

# define _@GUARD_PREFIX@_TIME_H

# @INCLUDE_NEXT@ @NEXT_TIME_H@

/* NetBSD 5.0 mis-defines NULL.  */
# include <stddef.h>

/* The definitions of _GL_FUNCDECL_RPL etc. are copied here.  */

/* The definition of _GL_ARG_NONNULL is copied here.  */

/* The definition of _GL_WARN_ON_USE is copied here.  */

/* Some systems don't define struct timespec (e.g., AIX 4.1, Ultrix 4.3).
   Or they define it with the wrong member names or define it in <sys/time.h>
   (e.g., FreeBSD circa 1997).  Stock Mingw prior to 3.0 does not define it,
   but the pthreads-win32 library defines it in <pthread.h>.  */
# if ! @TIME_H_DEFINES_STRUCT_TIMESPEC@
#  if @SYS_TIME_H_DEFINES_STRUCT_TIMESPEC@
#   include <sys/time.h>
#  elif @PTHREAD_H_DEFINES_STRUCT_TIMESPEC@
#   include <pthread.h>
#  elif @UNISTD_H_DEFINES_STRUCT_TIMESPEC@
#   include <unistd.h>
#  else

#   ifdef __cplusplus
extern "C" {
#   endif

#   if !GNULIB_defined_struct_timespec
#    undef timespec
#    define timespec rpl_timespec
struct timespec
{
  time_t tv_sec;
  long int tv_nsec;
};
#    define GNULIB_defined_struct_timespec 1
#   endif

#   ifdef __cplusplus
}
#   endif

#  endif
# endif

# if !GNULIB_defined_struct_time_t_must_be_integral
/* Per http://austingroupbugs.net/view.php?id=327, POSIX requires
   time_t to be an integer type, even though C99 permits floating
   point.  We don't know of any implementation that uses floating
   point, and it is much easier to write code that doesn't have to
   worry about that corner case, so we force the issue.  */
struct __time_t_must_be_integral {
  unsigned int __floating_time_t_unsupported : (time_t) 1;
};
#  define GNULIB_defined_struct_time_t_must_be_integral 1
# endif

/* Sleep for at least RQTP seconds unless interrupted,  If interrupted,
   return -1 and store the remaining time into RMTP.  See
   <http://www.opengroup.org/susv3xsh/nanosleep.html>.  */
# if @GNULIB_NANOSLEEP@
#  if @REPLACE_NANOSLEEP@
#   if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#    define nanosleep rpl_nanosleep
#   endif
_GL_FUNCDECL_RPL (nanosleep, int,
                  (struct timespec const *__rqtp, struct timespec *__rmtp)
                  _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (nanosleep, int,
                  (struct timespec const *__rqtp, struct timespec *__rmtp));
#  else
#   if ! @HAVE_NANOSLEEP@
_GL_FUNCDECL_SYS (nanosleep, int,
                  (struct timespec const *__rqtp, struct timespec *__rmtp)
                  _GL_ARG_NONNULL ((1)));
#   endif
_GL_CXXALIAS_SYS (nanosleep, int,
                  (struct timespec const *__rqtp, struct timespec *__rmtp));
#  endif
_GL_CXXALIASWARN (nanosleep);
# endif

/* Return the 'time_t' representation of TP and normalize TP.  */
# if @GNULIB_MKTIME@
#  if @REPLACE_MKTIME@
#   if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#    define mktime rpl_mktime
#   endif
_GL_FUNCDECL_RPL (mktime, time_t, (struct tm *__tp) _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (mktime, time_t, (struct tm *__tp));
#  else
_GL_CXXALIAS_SYS (mktime, time_t, (struct tm *__tp));
#  endif
_GL_CXXALIASWARN (mktime);
# endif

/* Convert TIMER to RESULT, assuming local time and UTC respectively.  See
   <http://www.opengroup.org/susv3xsh/localtime_r.html> and
   <http://www.opengroup.org/susv3xsh/gmtime_r.html>.  */
# if @GNULIB_TIME_R@
#  if @REPLACE_LOCALTIME_R@
#   if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#    undef localtime_r
#    define localtime_r rpl_localtime_r
#   endif
_GL_FUNCDECL_RPL (localtime_r, struct tm *, (time_t const *restrict __timer,
                                             struct tm *restrict __result)
                                            _GL_ARG_NONNULL ((1, 2)));
_GL_CXXALIAS_RPL (localtime_r, struct tm *, (time_t const *restrict __timer,
                                             struct tm *restrict __result));
#  else
#   if ! @HAVE_DECL_LOCALTIME_R@
_GL_FUNCDECL_SYS (localtime_r, struct tm *, (time_t const *restrict __timer,
                                             struct tm *restrict __result)
                                            _GL_ARG_NONNULL ((1, 2)));
#   endif
_GL_CXXALIAS_SYS (localtime_r, struct tm *, (time_t const *restrict __timer,
                                             struct tm *restrict __result));
#  endif
#  if @HAVE_DECL_LOCALTIME_R@
_GL_CXXALIASWARN (localtime_r);
#  endif
#  if @REPLACE_LOCALTIME_R@
#   if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#    undef gmtime_r
#    define gmtime_r rpl_gmtime_r
#   endif
_GL_FUNCDECL_RPL (gmtime_r, struct tm *, (time_t const *restrict __timer,
                                          struct tm *restrict __result)
                                         _GL_ARG_NONNULL ((1, 2)));
_GL_CXXALIAS_RPL (gmtime_r, struct tm *, (time_t const *restrict __timer,
                                          struct tm *restrict __result));
#  else
#   if ! @HAVE_DECL_LOCALTIME_R@
_GL_FUNCDECL_SYS (gmtime_r, struct tm *, (time_t const *restrict __timer,
                                          struct tm *restrict __result)
                                         _GL_ARG_NONNULL ((1, 2)));
#   endif
_GL_CXXALIAS_SYS (gmtime_r, struct tm *, (time_t const *restrict __timer,
                                          struct tm *restrict __result));
#  endif
#  if @HAVE_DECL_LOCALTIME_R@
_GL_CXXALIASWARN (gmtime_r);
#  endif
# endif

/* Convert TIMER to RESULT, assuming local time and UTC respectively.  See
   <http://www.opengroup.org/susv3xsh/localtime.html> and
   <http://www.opengroup.org/susv3xsh/gmtime.html>.  */
# if @GNULIB_GETTIMEOFDAY@
#  if @REPLACE_LOCALTIME@
#   if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#    undef localtime
#    define localtime rpl_localtime
#   endif
_GL_FUNCDECL_RPL (localtime, struct tm *, (time_t const *__timer)
		                          _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (localtime, struct tm *, (time_t const *__timer));
#  else
_GL_CXXALIAS_SYS (localtime, struct tm *, (time_t const *__timer));
#  endif
_GL_CXXALIASWARN (localtime);
# endif

# if @GNULIB_GETTIMEOFDAY@
#  if @REPLACE_GMTIME@
#   if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#    undef gmtime
#    define gmtime rpl_gmtime
#   endif
_GL_FUNCDECL_RPL (gmtime, struct tm *, (time_t const *__timer)
                                       _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (gmtime, struct tm *, (time_t const *__timer));
#  else
_GL_CXXALIAS_SYS (gmtime, struct tm *, (time_t const *__timer));
#  endif
_GL_CXXALIASWARN (gmtime);
# endif

/* Parse BUF as a time stamp, assuming FORMAT specifies its layout, and store
   the resulting broken-down time into TM.  See
   <http://www.opengroup.org/susv3xsh/strptime.html>.  */
# if @GNULIB_STRPTIME@
#  if ! @HAVE_STRPTIME@
_GL_FUNCDECL_SYS (strptime, char *, (char const *restrict __buf,
                                     char const *restrict __format,
                                     struct tm *restrict __tm)
                                    _GL_ARG_NONNULL ((1, 2, 3)));
#  endif
_GL_CXXALIAS_SYS (strptime, char *, (char const *restrict __buf,
                                     char const *restrict __format,
                                     struct tm *restrict __tm));
_GL_CXXALIASWARN (strptime);
# endif

/* Convert TM to a time_t value, assuming UTC.  */
# if @GNULIB_TIMEGM@
#  if @REPLACE_TIMEGM@
#   if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#    undef timegm
#    define timegm rpl_timegm
#   endif
_GL_FUNCDECL_RPL (timegm, time_t, (struct tm *__tm) _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (timegm, time_t, (struct tm *__tm));
#  else
#   if ! @HAVE_TIMEGM@
_GL_FUNCDECL_SYS (timegm, time_t, (struct tm *__tm) _GL_ARG_NONNULL ((1)));
#   endif
_GL_CXXALIAS_SYS (timegm, time_t, (struct tm *__tm));
#  endif
_GL_CXXALIASWARN (timegm);
# endif

/* Encourage applications to avoid unsafe functions that can overrun
   buffers when given outlandish struct tm values.  Portable
   applications should use strftime (or even sprintf) instead.  */
# if defined GNULIB_POSIXCHECK
#  undef asctime
_GL_WARN_ON_USE (asctime, "asctime can overrun buffers in some cases - "
                 "better use strftime (or even sprintf) instead");
# endif
# if defined GNULIB_POSIXCHECK
#  undef asctime_r
_GL_WARN_ON_USE (asctime, "asctime_r can overrun buffers in some cases - "
                 "better use strftime (or even sprintf) instead");
# endif
# if defined GNULIB_POSIXCHECK
#  undef ctime
_GL_WARN_ON_USE (asctime, "ctime can overrun buffers in some cases - "
                 "better use strftime (or even sprintf) instead");
# endif
# if defined GNULIB_POSIXCHECK
#  undef ctime_r
_GL_WARN_ON_USE (asctime, "ctime_r can overrun buffers in some cases - "
                 "better use strftime (or even sprintf) instead");
# endif

#endif
