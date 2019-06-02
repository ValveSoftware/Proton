/* strerror_r.c --- POSIX compatible system error routine

   Copyright (C) 2010-2015 Free Software Foundation, Inc.

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

/* Written by Bruno Haible <bruno@clisp.org>, 2010.  */

#include <config.h>

/* Enable declaration of sys_nerr and sys_errlist in <errno.h> on NetBSD.  */
#define _NETBSD_SOURCE 1

/* Specification.  */
#include <string.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include "strerror-override.h"

#if (__GLIBC__ >= 2 || defined __UCLIBC__ || defined __CYGWIN__) && HAVE___XPG_STRERROR_R /* glibc >= 2.3.4, cygwin >= 1.7.9 */

# define USE_XPG_STRERROR_R 1
extern
#ifdef __cplusplus
"C"
#endif
int __xpg_strerror_r (int errnum, char *buf, size_t buflen);

#elif HAVE_DECL_STRERROR_R && !(__GLIBC__ >= 2 || defined __UCLIBC__ || defined __CYGWIN__)

/* The system's strerror_r function is OK, except that its third argument
   is 'int', not 'size_t', or its return type is wrong.  */

# include <limits.h>

# define USE_SYSTEM_STRERROR_R 1

#else /* (__GLIBC__ >= 2 || defined __UCLIBC__ || defined __CYGWIN__ ? !HAVE___XPG_STRERROR_R : !HAVE_DECL_STRERROR_R) */

/* Use the system's strerror().  Exclude glibc and cygwin because the
   system strerror_r has the wrong return type, and cygwin 1.7.9
   strerror_r clobbers strerror.  */
# undef strerror

# define USE_SYSTEM_STRERROR 1

# if defined __NetBSD__ || defined __hpux || ((defined _WIN32 || defined __WIN32__) && !defined __CYGWIN__) || defined __sgi || (defined __sun && !defined _LP64) || defined __CYGWIN__

/* No locking needed.  */

/* Get catgets internationalization functions.  */
#  if HAVE_CATGETS
#   include <nl_types.h>
#  endif

#ifdef __cplusplus
extern "C" {
#endif

/* Get sys_nerr, sys_errlist on HP-UX (otherwise only declared in C++ mode).
   Get sys_nerr, sys_errlist on IRIX (otherwise only declared with _SGIAPI).  */
#  if defined __hpux || defined __sgi
extern int sys_nerr;
extern char *sys_errlist[];
#  endif

/* Get sys_nerr on Solaris.  */
#  if defined __sun && !defined _LP64
extern int sys_nerr;
#  endif

#ifdef __cplusplus
}
#endif

# else

#  include "glthread/lock.h"

/* This lock protects the buffer returned by strerror().  We assume that
   no other uses of strerror() exist in the program.  */
gl_lock_define_initialized(static, strerror_lock)

# endif

#endif

/* On MSVC, there is no snprintf() function, just a _snprintf().
   It is of lower quality, but sufficient for the simple use here.
   We only have to make sure to NUL terminate the result (_snprintf
   does not NUL terminate, like strncpy).  */
#if !HAVE_SNPRINTF
static int
local_snprintf (char *buf, size_t buflen, const char *format, ...)
{
  va_list args;
  int result;

  va_start (args, format);
  result = _vsnprintf (buf, buflen, format, args);
  va_end (args);
  if (buflen > 0 && (result < 0 || result >= buflen))
    buf[buflen - 1] = '\0';
  return result;
}
# define snprintf local_snprintf
#endif

/* Copy as much of MSG into BUF as possible, without corrupting errno.
   Return 0 if MSG fit in BUFLEN, otherwise return ERANGE.  */
static int
safe_copy (char *buf, size_t buflen, const char *msg)
{
  size_t len = strlen (msg);
  int ret;

  if (len < buflen)
    {
      /* Although POSIX allows memcpy() to corrupt errno, we don't
         know of any implementation where this is a real problem.  */
      memcpy (buf, msg, len + 1);
      ret = 0;
    }
  else
    {
      memcpy (buf, msg, buflen - 1);
      buf[buflen - 1] = '\0';
      ret = ERANGE;
    }
  return ret;
}


int
strerror_r (int errnum, char *buf, size_t buflen)
#undef strerror_r
{
  /* Filter this out now, so that rest of this replacement knows that
     there is room for a non-empty message and trailing NUL.  */
  if (buflen <= 1)
    {
      if (buflen)
        *buf = '\0';
      return ERANGE;
    }
  *buf = '\0';

  /* Check for gnulib overrides.  */
  {
    char const *msg = strerror_override (errnum);

    if (msg)
      return safe_copy (buf, buflen, msg);
  }

  {
    int ret;
    int saved_errno = errno;

#if USE_XPG_STRERROR_R

    {
      ret = __xpg_strerror_r (errnum, buf, buflen);
      if (ret < 0)
        ret = errno;
      if (!*buf)
        {
          /* glibc 2.13 would not touch buf on err, so we have to fall
             back to GNU strerror_r which always returns a thread-safe
             untruncated string to (partially) copy into our buf.  */
          safe_copy (buf, buflen, strerror_r (errnum, buf, buflen));
        }
    }

#elif USE_SYSTEM_STRERROR_R

    if (buflen > INT_MAX)
      buflen = INT_MAX;

# ifdef __hpux
    /* On HP-UX 11.31, strerror_r always fails when buflen < 80; it
       also fails to change buf on EINVAL.  */
    {
      char stackbuf[80];

      if (buflen < sizeof stackbuf)
        {
          ret = strerror_r (errnum, stackbuf, sizeof stackbuf);
          if (ret == 0)
            ret = safe_copy (buf, buflen, stackbuf);
        }
      else
        ret = strerror_r (errnum, buf, buflen);
    }
# else
    ret = strerror_r (errnum, buf, buflen);

    /* Some old implementations may return (-1, EINVAL) instead of EINVAL.  */
    if (ret < 0)
      ret = errno;
# endif

# ifdef _AIX
    /* AIX returns 0 rather than ERANGE when truncating strings; try
       again until we are sure we got the entire string.  */
    if (!ret && strlen (buf) == buflen - 1)
      {
        char stackbuf[STACKBUF_LEN];
        size_t len;
        strerror_r (errnum, stackbuf, sizeof stackbuf);
        len = strlen (stackbuf);
        /* STACKBUF_LEN should have been large enough.  */
        if (len + 1 == sizeof stackbuf)
          abort ();
        if (buflen <= len)
          ret = ERANGE;
      }
# else
    /* Solaris 10 does not populate buf on ERANGE.  OpenBSD 4.7
       truncates early on ERANGE rather than return a partial integer.
       We prefer the maximal string.  We set buf[0] earlier, and we
       know of no implementation that modifies buf to be an
       unterminated string, so this strlen should be portable in
       practice (rather than pulling in a safer strnlen).  */
    if (ret == ERANGE && strlen (buf) < buflen - 1)
      {
        char stackbuf[STACKBUF_LEN];

        /* STACKBUF_LEN should have been large enough.  */
        if (strerror_r (errnum, stackbuf, sizeof stackbuf) == ERANGE)
          abort ();
        safe_copy (buf, buflen, stackbuf);
      }
# endif

#else /* USE_SYSTEM_STRERROR */

    /* Try to do what strerror (errnum) does, but without clobbering the
       buffer used by strerror().  */

# if defined __NetBSD__ || defined __hpux || ((defined _WIN32 || defined __WIN32__) && !defined __CYGWIN__) || defined __CYGWIN__ /* NetBSD, HP-UX, native Windows, Cygwin */

    /* NetBSD:         sys_nerr, sys_errlist are declared through _NETBSD_SOURCE
                       and <errno.h> above.
       HP-UX:          sys_nerr, sys_errlist are declared explicitly above.
       native Windows: sys_nerr, sys_errlist are declared in <stdlib.h>.
       Cygwin:         sys_nerr, sys_errlist are declared in <errno.h>.  */
    if (errnum >= 0 && errnum < sys_nerr)
      {
#  if HAVE_CATGETS && (defined __NetBSD__ || defined __hpux)
#   if defined __NetBSD__
        nl_catd catd = catopen ("libc", NL_CAT_LOCALE);
        const char *errmsg =
          (catd != (nl_catd)-1
           ? catgets (catd, 1, errnum, sys_errlist[errnum])
           : sys_errlist[errnum]);
#   endif
#   if defined __hpux
        nl_catd catd = catopen ("perror", NL_CAT_LOCALE);
        const char *errmsg =
          (catd != (nl_catd)-1
           ? catgets (catd, 1, 1 + errnum, sys_errlist[errnum])
           : sys_errlist[errnum]);
#   endif
#  else
        const char *errmsg = sys_errlist[errnum];
#  endif
        if (errmsg == NULL || *errmsg == '\0')
          ret = EINVAL;
        else
          ret = safe_copy (buf, buflen, errmsg);
#  if HAVE_CATGETS && (defined __NetBSD__ || defined __hpux)
        if (catd != (nl_catd)-1)
          catclose (catd);
#  endif
      }
    else
      ret = EINVAL;

# elif defined __sgi || (defined __sun && !defined _LP64) /* IRIX, Solaris <= 9 32-bit */

    /* For a valid error number, the system's strerror() function returns
       a pointer to a not copied string, not to a buffer.  */
    if (errnum >= 0 && errnum < sys_nerr)
      {
        char *errmsg = strerror (errnum);

        if (errmsg == NULL || *errmsg == '\0')
          ret = EINVAL;
        else
          ret = safe_copy (buf, buflen, errmsg);
      }
    else
      ret = EINVAL;

# else

    gl_lock_lock (strerror_lock);

    {
      char *errmsg = strerror (errnum);

      /* For invalid error numbers, strerror() on
           - IRIX 6.5 returns NULL,
           - HP-UX 11 returns an empty string.  */
      if (errmsg == NULL || *errmsg == '\0')
        ret = EINVAL;
      else
        ret = safe_copy (buf, buflen, errmsg);
    }

    gl_lock_unlock (strerror_lock);

# endif

#endif

    if (ret == EINVAL && !*buf)
      snprintf (buf, buflen, "Unknown error %d", errnum);

    errno = saved_errno;
    return ret;
  }
}
