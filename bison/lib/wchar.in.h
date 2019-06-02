/* A substitute for ISO C99 <wchar.h>, for platforms that have issues.

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

/* Written by Eric Blake.  */

/*
 * ISO C 99 <wchar.h> for platforms that have issues.
 * <http://www.opengroup.org/susv3xbd/wchar.h.html>
 *
 * For now, this just ensures proper prerequisite inclusion order and
 * the declaration of wcwidth().
 */

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

#if defined __need_mbstate_t || defined __need_wint_t || (defined __hpux && ((defined _INTTYPES_INCLUDED && !defined strtoimax) || defined _GL_JUST_INCLUDE_SYSTEM_WCHAR_H)) || defined _GL_ALREADY_INCLUDING_WCHAR_H
/* Special invocation convention:
   - Inside glibc and uClibc header files.
   - On HP-UX 11.00 we have a sequence of nested includes
     <wchar.h> -> <stdlib.h> -> <stdint.h>, and the latter includes <wchar.h>,
     once indirectly <stdint.h> -> <sys/types.h> -> <inttypes.h> -> <wchar.h>
     and once directly.  In both situations 'wint_t' is not yet defined,
     therefore we cannot provide the function overrides; instead include only
     the system's <wchar.h>.
   - On IRIX 6.5, similarly, we have an include <wchar.h> -> <wctype.h>, and
     the latter includes <wchar.h>.  But here, we have no way to detect whether
     <wctype.h> is completely included or is still being included.  */

#@INCLUDE_NEXT@ @NEXT_WCHAR_H@

#else
/* Normal invocation convention.  */

#ifndef _@GUARD_PREFIX@_WCHAR_H

#define _GL_ALREADY_INCLUDING_WCHAR_H

#if @HAVE_FEATURES_H@
# include <features.h> /* for __GLIBC__ */
#endif

/* Tru64 with Desktop Toolkit C has a bug: <stdio.h> must be included before
   <wchar.h>.
   BSD/OS 4.0.1 has a bug: <stddef.h>, <stdio.h> and <time.h> must be
   included before <wchar.h>.
   In some builds of uClibc, <wchar.h> is nonexistent and wchar_t is defined
   by <stddef.h>.
   But avoid namespace pollution on glibc systems.  */
#if !(defined __GLIBC__ && !defined __UCLIBC__)
# include <stddef.h>
#endif
#ifndef __GLIBC__
# include <stdio.h>
# include <time.h>
#endif

/* Include the original <wchar.h> if it exists.
   Some builds of uClibc lack it.  */
/* The include_next requires a split double-inclusion guard.  */
#if @HAVE_WCHAR_H@
# @INCLUDE_NEXT@ @NEXT_WCHAR_H@
#endif

#undef _GL_ALREADY_INCLUDING_WCHAR_H

#ifndef _@GUARD_PREFIX@_WCHAR_H
#define _@GUARD_PREFIX@_WCHAR_H

/* The __attribute__ feature is available in gcc versions 2.5 and later.
   The attribute __pure__ was added in gcc 2.96.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The definitions of _GL_FUNCDECL_RPL etc. are copied here.  */

/* The definition of _GL_ARG_NONNULL is copied here.  */

/* The definition of _GL_WARN_ON_USE is copied here.  */


/* Define wint_t and WEOF.  (Also done in wctype.in.h.)  */
#if !@HAVE_WINT_T@ && !defined wint_t
# define wint_t int
# ifndef WEOF
#  define WEOF -1
# endif
#else
/* MSVC defines wint_t as 'unsigned short' in <crtdefs.h>.
   This is too small: ISO C 99 section 7.24.1.(2) says that wint_t must be
   "unchanged by default argument promotions".  Override it.  */
# if defined _MSC_VER
#  if !GNULIB_defined_wint_t
#   include <crtdefs.h>
typedef unsigned int rpl_wint_t;
#   undef wint_t
#   define wint_t rpl_wint_t
#   define GNULIB_defined_wint_t 1
#  endif
# endif
# ifndef WEOF
#  define WEOF ((wint_t) -1)
# endif
#endif


/* Override mbstate_t if it is too small.
   On IRIX 6.5, sizeof (mbstate_t) == 1, which is not sufficient for
   implementing mbrtowc for encodings like UTF-8.  */
#if !(@HAVE_MBSINIT@ && @HAVE_MBRTOWC@) || @REPLACE_MBSTATE_T@
# if !GNULIB_defined_mbstate_t
typedef int rpl_mbstate_t;
#  undef mbstate_t
#  define mbstate_t rpl_mbstate_t
#  define GNULIB_defined_mbstate_t 1
# endif
#endif


/* Convert a single-byte character to a wide character.  */
#if @GNULIB_BTOWC@
# if @REPLACE_BTOWC@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef btowc
#   define btowc rpl_btowc
#  endif
_GL_FUNCDECL_RPL (btowc, wint_t, (int c) _GL_ATTRIBUTE_PURE);
_GL_CXXALIAS_RPL (btowc, wint_t, (int c));
# else
#  if !@HAVE_BTOWC@
_GL_FUNCDECL_SYS (btowc, wint_t, (int c) _GL_ATTRIBUTE_PURE);
#  endif
_GL_CXXALIAS_SYS (btowc, wint_t, (int c));
# endif
_GL_CXXALIASWARN (btowc);
#elif defined GNULIB_POSIXCHECK
# undef btowc
# if HAVE_RAW_DECL_BTOWC
_GL_WARN_ON_USE (btowc, "btowc is unportable - "
                 "use gnulib module btowc for portability");
# endif
#endif


/* Convert a wide character to a single-byte character.  */
#if @GNULIB_WCTOB@
# if @REPLACE_WCTOB@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef wctob
#   define wctob rpl_wctob
#  endif
_GL_FUNCDECL_RPL (wctob, int, (wint_t wc) _GL_ATTRIBUTE_PURE);
_GL_CXXALIAS_RPL (wctob, int, (wint_t wc));
# else
#  if !defined wctob && !@HAVE_DECL_WCTOB@
/* wctob is provided by gnulib, or wctob exists but is not declared.  */
_GL_FUNCDECL_SYS (wctob, int, (wint_t wc) _GL_ATTRIBUTE_PURE);
#  endif
_GL_CXXALIAS_SYS (wctob, int, (wint_t wc));
# endif
_GL_CXXALIASWARN (wctob);
#elif defined GNULIB_POSIXCHECK
# undef wctob
# if HAVE_RAW_DECL_WCTOB
_GL_WARN_ON_USE (wctob, "wctob is unportable - "
                 "use gnulib module wctob for portability");
# endif
#endif


/* Test whether *PS is in the initial state.  */
#if @GNULIB_MBSINIT@
# if @REPLACE_MBSINIT@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef mbsinit
#   define mbsinit rpl_mbsinit
#  endif
_GL_FUNCDECL_RPL (mbsinit, int, (const mbstate_t *ps));
_GL_CXXALIAS_RPL (mbsinit, int, (const mbstate_t *ps));
# else
#  if !@HAVE_MBSINIT@
_GL_FUNCDECL_SYS (mbsinit, int, (const mbstate_t *ps));
#  endif
_GL_CXXALIAS_SYS (mbsinit, int, (const mbstate_t *ps));
# endif
_GL_CXXALIASWARN (mbsinit);
#elif defined GNULIB_POSIXCHECK
# undef mbsinit
# if HAVE_RAW_DECL_MBSINIT
_GL_WARN_ON_USE (mbsinit, "mbsinit is unportable - "
                 "use gnulib module mbsinit for portability");
# endif
#endif


/* Convert a multibyte character to a wide character.  */
#if @GNULIB_MBRTOWC@
# if @REPLACE_MBRTOWC@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef mbrtowc
#   define mbrtowc rpl_mbrtowc
#  endif
_GL_FUNCDECL_RPL (mbrtowc, size_t,
                  (wchar_t *pwc, const char *s, size_t n, mbstate_t *ps));
_GL_CXXALIAS_RPL (mbrtowc, size_t,
                  (wchar_t *pwc, const char *s, size_t n, mbstate_t *ps));
# else
#  if !@HAVE_MBRTOWC@
_GL_FUNCDECL_SYS (mbrtowc, size_t,
                  (wchar_t *pwc, const char *s, size_t n, mbstate_t *ps));
#  endif
_GL_CXXALIAS_SYS (mbrtowc, size_t,
                  (wchar_t *pwc, const char *s, size_t n, mbstate_t *ps));
# endif
_GL_CXXALIASWARN (mbrtowc);
#elif defined GNULIB_POSIXCHECK
# undef mbrtowc
# if HAVE_RAW_DECL_MBRTOWC
_GL_WARN_ON_USE (mbrtowc, "mbrtowc is unportable - "
                 "use gnulib module mbrtowc for portability");
# endif
#endif


/* Recognize a multibyte character.  */
#if @GNULIB_MBRLEN@
# if @REPLACE_MBRLEN@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef mbrlen
#   define mbrlen rpl_mbrlen
#  endif
_GL_FUNCDECL_RPL (mbrlen, size_t, (const char *s, size_t n, mbstate_t *ps));
_GL_CXXALIAS_RPL (mbrlen, size_t, (const char *s, size_t n, mbstate_t *ps));
# else
#  if !@HAVE_MBRLEN@
_GL_FUNCDECL_SYS (mbrlen, size_t, (const char *s, size_t n, mbstate_t *ps));
#  endif
_GL_CXXALIAS_SYS (mbrlen, size_t, (const char *s, size_t n, mbstate_t *ps));
# endif
_GL_CXXALIASWARN (mbrlen);
#elif defined GNULIB_POSIXCHECK
# undef mbrlen
# if HAVE_RAW_DECL_MBRLEN
_GL_WARN_ON_USE (mbrlen, "mbrlen is unportable - "
                 "use gnulib module mbrlen for portability");
# endif
#endif


/* Convert a string to a wide string.  */
#if @GNULIB_MBSRTOWCS@
# if @REPLACE_MBSRTOWCS@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef mbsrtowcs
#   define mbsrtowcs rpl_mbsrtowcs
#  endif
_GL_FUNCDECL_RPL (mbsrtowcs, size_t,
                  (wchar_t *dest, const char **srcp, size_t len, mbstate_t *ps)
                  _GL_ARG_NONNULL ((2)));
_GL_CXXALIAS_RPL (mbsrtowcs, size_t,
                  (wchar_t *dest, const char **srcp, size_t len,
                   mbstate_t *ps));
# else
#  if !@HAVE_MBSRTOWCS@
_GL_FUNCDECL_SYS (mbsrtowcs, size_t,
                  (wchar_t *dest, const char **srcp, size_t len, mbstate_t *ps)
                  _GL_ARG_NONNULL ((2)));
#  endif
_GL_CXXALIAS_SYS (mbsrtowcs, size_t,
                  (wchar_t *dest, const char **srcp, size_t len,
                   mbstate_t *ps));
# endif
_GL_CXXALIASWARN (mbsrtowcs);
#elif defined GNULIB_POSIXCHECK
# undef mbsrtowcs
# if HAVE_RAW_DECL_MBSRTOWCS
_GL_WARN_ON_USE (mbsrtowcs, "mbsrtowcs is unportable - "
                 "use gnulib module mbsrtowcs for portability");
# endif
#endif


/* Convert a string to a wide string.  */
#if @GNULIB_MBSNRTOWCS@
# if @REPLACE_MBSNRTOWCS@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef mbsnrtowcs
#   define mbsnrtowcs rpl_mbsnrtowcs
#  endif
_GL_FUNCDECL_RPL (mbsnrtowcs, size_t,
                  (wchar_t *dest, const char **srcp, size_t srclen, size_t len,
                   mbstate_t *ps)
                  _GL_ARG_NONNULL ((2)));
_GL_CXXALIAS_RPL (mbsnrtowcs, size_t,
                  (wchar_t *dest, const char **srcp, size_t srclen, size_t len,
                   mbstate_t *ps));
# else
#  if !@HAVE_MBSNRTOWCS@
_GL_FUNCDECL_SYS (mbsnrtowcs, size_t,
                  (wchar_t *dest, const char **srcp, size_t srclen, size_t len,
                   mbstate_t *ps)
                  _GL_ARG_NONNULL ((2)));
#  endif
_GL_CXXALIAS_SYS (mbsnrtowcs, size_t,
                  (wchar_t *dest, const char **srcp, size_t srclen, size_t len,
                   mbstate_t *ps));
# endif
_GL_CXXALIASWARN (mbsnrtowcs);
#elif defined GNULIB_POSIXCHECK
# undef mbsnrtowcs
# if HAVE_RAW_DECL_MBSNRTOWCS
_GL_WARN_ON_USE (mbsnrtowcs, "mbsnrtowcs is unportable - "
                 "use gnulib module mbsnrtowcs for portability");
# endif
#endif


/* Convert a wide character to a multibyte character.  */
#if @GNULIB_WCRTOMB@
# if @REPLACE_WCRTOMB@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef wcrtomb
#   define wcrtomb rpl_wcrtomb
#  endif
_GL_FUNCDECL_RPL (wcrtomb, size_t, (char *s, wchar_t wc, mbstate_t *ps));
_GL_CXXALIAS_RPL (wcrtomb, size_t, (char *s, wchar_t wc, mbstate_t *ps));
# else
#  if !@HAVE_WCRTOMB@
_GL_FUNCDECL_SYS (wcrtomb, size_t, (char *s, wchar_t wc, mbstate_t *ps));
#  endif
_GL_CXXALIAS_SYS (wcrtomb, size_t, (char *s, wchar_t wc, mbstate_t *ps));
# endif
_GL_CXXALIASWARN (wcrtomb);
#elif defined GNULIB_POSIXCHECK
# undef wcrtomb
# if HAVE_RAW_DECL_WCRTOMB
_GL_WARN_ON_USE (wcrtomb, "wcrtomb is unportable - "
                 "use gnulib module wcrtomb for portability");
# endif
#endif


/* Convert a wide string to a string.  */
#if @GNULIB_WCSRTOMBS@
# if @REPLACE_WCSRTOMBS@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef wcsrtombs
#   define wcsrtombs rpl_wcsrtombs
#  endif
_GL_FUNCDECL_RPL (wcsrtombs, size_t,
                  (char *dest, const wchar_t **srcp, size_t len, mbstate_t *ps)
                  _GL_ARG_NONNULL ((2)));
_GL_CXXALIAS_RPL (wcsrtombs, size_t,
                  (char *dest, const wchar_t **srcp, size_t len,
                   mbstate_t *ps));
# else
#  if !@HAVE_WCSRTOMBS@
_GL_FUNCDECL_SYS (wcsrtombs, size_t,
                  (char *dest, const wchar_t **srcp, size_t len, mbstate_t *ps)
                  _GL_ARG_NONNULL ((2)));
#  endif
_GL_CXXALIAS_SYS (wcsrtombs, size_t,
                  (char *dest, const wchar_t **srcp, size_t len,
                   mbstate_t *ps));
# endif
_GL_CXXALIASWARN (wcsrtombs);
#elif defined GNULIB_POSIXCHECK
# undef wcsrtombs
# if HAVE_RAW_DECL_WCSRTOMBS
_GL_WARN_ON_USE (wcsrtombs, "wcsrtombs is unportable - "
                 "use gnulib module wcsrtombs for portability");
# endif
#endif


/* Convert a wide string to a string.  */
#if @GNULIB_WCSNRTOMBS@
# if @REPLACE_WCSNRTOMBS@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef wcsnrtombs
#   define wcsnrtombs rpl_wcsnrtombs
#  endif
_GL_FUNCDECL_RPL (wcsnrtombs, size_t,
                  (char *dest, const wchar_t **srcp, size_t srclen, size_t len,
                   mbstate_t *ps)
                  _GL_ARG_NONNULL ((2)));
_GL_CXXALIAS_RPL (wcsnrtombs, size_t,
                  (char *dest, const wchar_t **srcp, size_t srclen, size_t len,
                   mbstate_t *ps));
# else
#  if !@HAVE_WCSNRTOMBS@
_GL_FUNCDECL_SYS (wcsnrtombs, size_t,
                  (char *dest, const wchar_t **srcp, size_t srclen, size_t len,
                   mbstate_t *ps)
                  _GL_ARG_NONNULL ((2)));
#  endif
_GL_CXXALIAS_SYS (wcsnrtombs, size_t,
                  (char *dest, const wchar_t **srcp, size_t srclen, size_t len,
                   mbstate_t *ps));
# endif
_GL_CXXALIASWARN (wcsnrtombs);
#elif defined GNULIB_POSIXCHECK
# undef wcsnrtombs
# if HAVE_RAW_DECL_WCSNRTOMBS
_GL_WARN_ON_USE (wcsnrtombs, "wcsnrtombs is unportable - "
                 "use gnulib module wcsnrtombs for portability");
# endif
#endif


/* Return the number of screen columns needed for WC.  */
#if @GNULIB_WCWIDTH@
# if @REPLACE_WCWIDTH@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef wcwidth
#   define wcwidth rpl_wcwidth
#  endif
_GL_FUNCDECL_RPL (wcwidth, int, (wchar_t) _GL_ATTRIBUTE_PURE);
_GL_CXXALIAS_RPL (wcwidth, int, (wchar_t));
# else
#  if !@HAVE_DECL_WCWIDTH@
/* wcwidth exists but is not declared.  */
_GL_FUNCDECL_SYS (wcwidth, int, (wchar_t) _GL_ATTRIBUTE_PURE);
#  endif
_GL_CXXALIAS_SYS (wcwidth, int, (wchar_t));
# endif
_GL_CXXALIASWARN (wcwidth);
#elif defined GNULIB_POSIXCHECK
# undef wcwidth
# if HAVE_RAW_DECL_WCWIDTH
_GL_WARN_ON_USE (wcwidth, "wcwidth is unportable - "
                 "use gnulib module wcwidth for portability");
# endif
#endif


/* Search N wide characters of S for C.  */
#if @GNULIB_WMEMCHR@
# if !@HAVE_WMEMCHR@
_GL_FUNCDECL_SYS (wmemchr, wchar_t *, (const wchar_t *s, wchar_t c, size_t n)
                                      _GL_ATTRIBUTE_PURE);
# endif
  /* On some systems, this function is defined as an overloaded function:
       extern "C++" {
         const wchar_t * std::wmemchr (const wchar_t *, wchar_t, size_t);
         wchar_t * std::wmemchr (wchar_t *, wchar_t, size_t);
       }  */
_GL_CXXALIAS_SYS_CAST2 (wmemchr,
                        wchar_t *, (const wchar_t *, wchar_t, size_t),
                        const wchar_t *, (const wchar_t *, wchar_t, size_t));
# if ((__GLIBC__ == 2 && __GLIBC_MINOR__ >= 10) && !defined __UCLIBC__) \
     && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4))
_GL_CXXALIASWARN1 (wmemchr, wchar_t *, (wchar_t *s, wchar_t c, size_t n));
_GL_CXXALIASWARN1 (wmemchr, const wchar_t *,
                   (const wchar_t *s, wchar_t c, size_t n));
# else
_GL_CXXALIASWARN (wmemchr);
# endif
#elif defined GNULIB_POSIXCHECK
# undef wmemchr
# if HAVE_RAW_DECL_WMEMCHR
_GL_WARN_ON_USE (wmemchr, "wmemchr is unportable - "
                 "use gnulib module wmemchr for portability");
# endif
#endif


/* Compare N wide characters of S1 and S2.  */
#if @GNULIB_WMEMCMP@
# if !@HAVE_WMEMCMP@
_GL_FUNCDECL_SYS (wmemcmp, int,
                  (const wchar_t *s1, const wchar_t *s2, size_t n)
                  _GL_ATTRIBUTE_PURE);
# endif
_GL_CXXALIAS_SYS (wmemcmp, int,
                  (const wchar_t *s1, const wchar_t *s2, size_t n));
_GL_CXXALIASWARN (wmemcmp);
#elif defined GNULIB_POSIXCHECK
# undef wmemcmp
# if HAVE_RAW_DECL_WMEMCMP
_GL_WARN_ON_USE (wmemcmp, "wmemcmp is unportable - "
                 "use gnulib module wmemcmp for portability");
# endif
#endif


/* Copy N wide characters of SRC to DEST.  */
#if @GNULIB_WMEMCPY@
# if !@HAVE_WMEMCPY@
_GL_FUNCDECL_SYS (wmemcpy, wchar_t *,
                  (wchar_t *dest, const wchar_t *src, size_t n));
# endif
_GL_CXXALIAS_SYS (wmemcpy, wchar_t *,
                  (wchar_t *dest, const wchar_t *src, size_t n));
_GL_CXXALIASWARN (wmemcpy);
#elif defined GNULIB_POSIXCHECK
# undef wmemcpy
# if HAVE_RAW_DECL_WMEMCPY
_GL_WARN_ON_USE (wmemcpy, "wmemcpy is unportable - "
                 "use gnulib module wmemcpy for portability");
# endif
#endif


/* Copy N wide characters of SRC to DEST, guaranteeing correct behavior for
   overlapping memory areas.  */
#if @GNULIB_WMEMMOVE@
# if !@HAVE_WMEMMOVE@
_GL_FUNCDECL_SYS (wmemmove, wchar_t *,
                  (wchar_t *dest, const wchar_t *src, size_t n));
# endif
_GL_CXXALIAS_SYS (wmemmove, wchar_t *,
                  (wchar_t *dest, const wchar_t *src, size_t n));
_GL_CXXALIASWARN (wmemmove);
#elif defined GNULIB_POSIXCHECK
# undef wmemmove
# if HAVE_RAW_DECL_WMEMMOVE
_GL_WARN_ON_USE (wmemmove, "wmemmove is unportable - "
                 "use gnulib module wmemmove for portability");
# endif
#endif


/* Set N wide characters of S to C.  */
#if @GNULIB_WMEMSET@
# if !@HAVE_WMEMSET@
_GL_FUNCDECL_SYS (wmemset, wchar_t *, (wchar_t *s, wchar_t c, size_t n));
# endif
_GL_CXXALIAS_SYS (wmemset, wchar_t *, (wchar_t *s, wchar_t c, size_t n));
_GL_CXXALIASWARN (wmemset);
#elif defined GNULIB_POSIXCHECK
# undef wmemset
# if HAVE_RAW_DECL_WMEMSET
_GL_WARN_ON_USE (wmemset, "wmemset is unportable - "
                 "use gnulib module wmemset for portability");
# endif
#endif


/* Return the number of wide characters in S.  */
#if @GNULIB_WCSLEN@
# if !@HAVE_WCSLEN@
_GL_FUNCDECL_SYS (wcslen, size_t, (const wchar_t *s) _GL_ATTRIBUTE_PURE);
# endif
_GL_CXXALIAS_SYS (wcslen, size_t, (const wchar_t *s));
_GL_CXXALIASWARN (wcslen);
#elif defined GNULIB_POSIXCHECK
# undef wcslen
# if HAVE_RAW_DECL_WCSLEN
_GL_WARN_ON_USE (wcslen, "wcslen is unportable - "
                 "use gnulib module wcslen for portability");
# endif
#endif


/* Return the number of wide characters in S, but at most MAXLEN.  */
#if @GNULIB_WCSNLEN@
# if !@HAVE_WCSNLEN@
_GL_FUNCDECL_SYS (wcsnlen, size_t, (const wchar_t *s, size_t maxlen)
                                   _GL_ATTRIBUTE_PURE);
# endif
_GL_CXXALIAS_SYS (wcsnlen, size_t, (const wchar_t *s, size_t maxlen));
_GL_CXXALIASWARN (wcsnlen);
#elif defined GNULIB_POSIXCHECK
# undef wcsnlen
# if HAVE_RAW_DECL_WCSNLEN
_GL_WARN_ON_USE (wcsnlen, "wcsnlen is unportable - "
                 "use gnulib module wcsnlen for portability");
# endif
#endif


/* Copy SRC to DEST.  */
#if @GNULIB_WCSCPY@
# if !@HAVE_WCSCPY@
_GL_FUNCDECL_SYS (wcscpy, wchar_t *, (wchar_t *dest, const wchar_t *src));
# endif
_GL_CXXALIAS_SYS (wcscpy, wchar_t *, (wchar_t *dest, const wchar_t *src));
_GL_CXXALIASWARN (wcscpy);
#elif defined GNULIB_POSIXCHECK
# undef wcscpy
# if HAVE_RAW_DECL_WCSCPY
_GL_WARN_ON_USE (wcscpy, "wcscpy is unportable - "
                 "use gnulib module wcscpy for portability");
# endif
#endif


/* Copy SRC to DEST, returning the address of the terminating L'\0' in DEST.  */
#if @GNULIB_WCPCPY@
# if !@HAVE_WCPCPY@
_GL_FUNCDECL_SYS (wcpcpy, wchar_t *, (wchar_t *dest, const wchar_t *src));
# endif
_GL_CXXALIAS_SYS (wcpcpy, wchar_t *, (wchar_t *dest, const wchar_t *src));
_GL_CXXALIASWARN (wcpcpy);
#elif defined GNULIB_POSIXCHECK
# undef wcpcpy
# if HAVE_RAW_DECL_WCPCPY
_GL_WARN_ON_USE (wcpcpy, "wcpcpy is unportable - "
                 "use gnulib module wcpcpy for portability");
# endif
#endif


/* Copy no more than N wide characters of SRC to DEST.  */
#if @GNULIB_WCSNCPY@
# if !@HAVE_WCSNCPY@
_GL_FUNCDECL_SYS (wcsncpy, wchar_t *,
                  (wchar_t *dest, const wchar_t *src, size_t n));
# endif
_GL_CXXALIAS_SYS (wcsncpy, wchar_t *,
                  (wchar_t *dest, const wchar_t *src, size_t n));
_GL_CXXALIASWARN (wcsncpy);
#elif defined GNULIB_POSIXCHECK
# undef wcsncpy
# if HAVE_RAW_DECL_WCSNCPY
_GL_WARN_ON_USE (wcsncpy, "wcsncpy is unportable - "
                 "use gnulib module wcsncpy for portability");
# endif
#endif


/* Copy no more than N characters of SRC to DEST, returning the address of
   the last character written into DEST.  */
#if @GNULIB_WCPNCPY@
# if !@HAVE_WCPNCPY@
_GL_FUNCDECL_SYS (wcpncpy, wchar_t *,
                  (wchar_t *dest, const wchar_t *src, size_t n));
# endif
_GL_CXXALIAS_SYS (wcpncpy, wchar_t *,
                  (wchar_t *dest, const wchar_t *src, size_t n));
_GL_CXXALIASWARN (wcpncpy);
#elif defined GNULIB_POSIXCHECK
# undef wcpncpy
# if HAVE_RAW_DECL_WCPNCPY
_GL_WARN_ON_USE (wcpncpy, "wcpncpy is unportable - "
                 "use gnulib module wcpncpy for portability");
# endif
#endif


/* Append SRC onto DEST.  */
#if @GNULIB_WCSCAT@
# if !@HAVE_WCSCAT@
_GL_FUNCDECL_SYS (wcscat, wchar_t *, (wchar_t *dest, const wchar_t *src));
# endif
_GL_CXXALIAS_SYS (wcscat, wchar_t *, (wchar_t *dest, const wchar_t *src));
_GL_CXXALIASWARN (wcscat);
#elif defined GNULIB_POSIXCHECK
# undef wcscat
# if HAVE_RAW_DECL_WCSCAT
_GL_WARN_ON_USE (wcscat, "wcscat is unportable - "
                 "use gnulib module wcscat for portability");
# endif
#endif


/* Append no more than N wide characters of SRC onto DEST.  */
#if @GNULIB_WCSNCAT@
# if !@HAVE_WCSNCAT@
_GL_FUNCDECL_SYS (wcsncat, wchar_t *,
                  (wchar_t *dest, const wchar_t *src, size_t n));
# endif
_GL_CXXALIAS_SYS (wcsncat, wchar_t *,
                  (wchar_t *dest, const wchar_t *src, size_t n));
_GL_CXXALIASWARN (wcsncat);
#elif defined GNULIB_POSIXCHECK
# undef wcsncat
# if HAVE_RAW_DECL_WCSNCAT
_GL_WARN_ON_USE (wcsncat, "wcsncat is unportable - "
                 "use gnulib module wcsncat for portability");
# endif
#endif


/* Compare S1 and S2.  */
#if @GNULIB_WCSCMP@
# if !@HAVE_WCSCMP@
_GL_FUNCDECL_SYS (wcscmp, int, (const wchar_t *s1, const wchar_t *s2)
                               _GL_ATTRIBUTE_PURE);
# endif
_GL_CXXALIAS_SYS (wcscmp, int, (const wchar_t *s1, const wchar_t *s2));
_GL_CXXALIASWARN (wcscmp);
#elif defined GNULIB_POSIXCHECK
# undef wcscmp
# if HAVE_RAW_DECL_WCSCMP
_GL_WARN_ON_USE (wcscmp, "wcscmp is unportable - "
                 "use gnulib module wcscmp for portability");
# endif
#endif


/* Compare no more than N wide characters of S1 and S2.  */
#if @GNULIB_WCSNCMP@
# if !@HAVE_WCSNCMP@
_GL_FUNCDECL_SYS (wcsncmp, int,
                  (const wchar_t *s1, const wchar_t *s2, size_t n)
                  _GL_ATTRIBUTE_PURE);
# endif
_GL_CXXALIAS_SYS (wcsncmp, int,
                  (const wchar_t *s1, const wchar_t *s2, size_t n));
_GL_CXXALIASWARN (wcsncmp);
#elif defined GNULIB_POSIXCHECK
# undef wcsncmp
# if HAVE_RAW_DECL_WCSNCMP
_GL_WARN_ON_USE (wcsncmp, "wcsncmp is unportable - "
                 "use gnulib module wcsncmp for portability");
# endif
#endif


/* Compare S1 and S2, ignoring case.  */
#if @GNULIB_WCSCASECMP@
# if !@HAVE_WCSCASECMP@
_GL_FUNCDECL_SYS (wcscasecmp, int, (const wchar_t *s1, const wchar_t *s2)
                                   _GL_ATTRIBUTE_PURE);
# endif
_GL_CXXALIAS_SYS (wcscasecmp, int, (const wchar_t *s1, const wchar_t *s2));
_GL_CXXALIASWARN (wcscasecmp);
#elif defined GNULIB_POSIXCHECK
# undef wcscasecmp
# if HAVE_RAW_DECL_WCSCASECMP
_GL_WARN_ON_USE (wcscasecmp, "wcscasecmp is unportable - "
                 "use gnulib module wcscasecmp for portability");
# endif
#endif


/* Compare no more than N chars of S1 and S2, ignoring case.  */
#if @GNULIB_WCSNCASECMP@
# if !@HAVE_WCSNCASECMP@
_GL_FUNCDECL_SYS (wcsncasecmp, int,
                  (const wchar_t *s1, const wchar_t *s2, size_t n)
                  _GL_ATTRIBUTE_PURE);
# endif
_GL_CXXALIAS_SYS (wcsncasecmp, int,
                  (const wchar_t *s1, const wchar_t *s2, size_t n));
_GL_CXXALIASWARN (wcsncasecmp);
#elif defined GNULIB_POSIXCHECK
# undef wcsncasecmp
# if HAVE_RAW_DECL_WCSNCASECMP
_GL_WARN_ON_USE (wcsncasecmp, "wcsncasecmp is unportable - "
                 "use gnulib module wcsncasecmp for portability");
# endif
#endif


/* Compare S1 and S2, both interpreted as appropriate to the LC_COLLATE
   category of the current locale.  */
#if @GNULIB_WCSCOLL@
# if !@HAVE_WCSCOLL@
_GL_FUNCDECL_SYS (wcscoll, int, (const wchar_t *s1, const wchar_t *s2));
# endif
_GL_CXXALIAS_SYS (wcscoll, int, (const wchar_t *s1, const wchar_t *s2));
_GL_CXXALIASWARN (wcscoll);
#elif defined GNULIB_POSIXCHECK
# undef wcscoll
# if HAVE_RAW_DECL_WCSCOLL
_GL_WARN_ON_USE (wcscoll, "wcscoll is unportable - "
                 "use gnulib module wcscoll for portability");
# endif
#endif


/* Transform S2 into array pointed to by S1 such that if wcscmp is applied
   to two transformed strings the result is the as applying 'wcscoll' to the
   original strings.  */
#if @GNULIB_WCSXFRM@
# if !@HAVE_WCSXFRM@
_GL_FUNCDECL_SYS (wcsxfrm, size_t, (wchar_t *s1, const wchar_t *s2, size_t n));
# endif
_GL_CXXALIAS_SYS (wcsxfrm, size_t, (wchar_t *s1, const wchar_t *s2, size_t n));
_GL_CXXALIASWARN (wcsxfrm);
#elif defined GNULIB_POSIXCHECK
# undef wcsxfrm
# if HAVE_RAW_DECL_WCSXFRM
_GL_WARN_ON_USE (wcsxfrm, "wcsxfrm is unportable - "
                 "use gnulib module wcsxfrm for portability");
# endif
#endif


/* Duplicate S, returning an identical malloc'd string.  */
#if @GNULIB_WCSDUP@
# if !@HAVE_WCSDUP@
_GL_FUNCDECL_SYS (wcsdup, wchar_t *, (const wchar_t *s));
# endif
_GL_CXXALIAS_SYS (wcsdup, wchar_t *, (const wchar_t *s));
_GL_CXXALIASWARN (wcsdup);
#elif defined GNULIB_POSIXCHECK
# undef wcsdup
# if HAVE_RAW_DECL_WCSDUP
_GL_WARN_ON_USE (wcsdup, "wcsdup is unportable - "
                 "use gnulib module wcsdup for portability");
# endif
#endif


/* Find the first occurrence of WC in WCS.  */
#if @GNULIB_WCSCHR@
# if !@HAVE_WCSCHR@
_GL_FUNCDECL_SYS (wcschr, wchar_t *, (const wchar_t *wcs, wchar_t wc)
                                     _GL_ATTRIBUTE_PURE);
# endif
  /* On some systems, this function is defined as an overloaded function:
       extern "C++" {
         const wchar_t * std::wcschr (const wchar_t *, wchar_t);
         wchar_t * std::wcschr (wchar_t *, wchar_t);
       }  */
_GL_CXXALIAS_SYS_CAST2 (wcschr,
                        wchar_t *, (const wchar_t *, wchar_t),
                        const wchar_t *, (const wchar_t *, wchar_t));
# if ((__GLIBC__ == 2 && __GLIBC_MINOR__ >= 10) && !defined __UCLIBC__) \
     && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4))
_GL_CXXALIASWARN1 (wcschr, wchar_t *, (wchar_t *wcs, wchar_t wc));
_GL_CXXALIASWARN1 (wcschr, const wchar_t *, (const wchar_t *wcs, wchar_t wc));
# else
_GL_CXXALIASWARN (wcschr);
# endif
#elif defined GNULIB_POSIXCHECK
# undef wcschr
# if HAVE_RAW_DECL_WCSCHR
_GL_WARN_ON_USE (wcschr, "wcschr is unportable - "
                 "use gnulib module wcschr for portability");
# endif
#endif


/* Find the last occurrence of WC in WCS.  */
#if @GNULIB_WCSRCHR@
# if !@HAVE_WCSRCHR@
_GL_FUNCDECL_SYS (wcsrchr, wchar_t *, (const wchar_t *wcs, wchar_t wc)
                                      _GL_ATTRIBUTE_PURE);
# endif
  /* On some systems, this function is defined as an overloaded function:
       extern "C++" {
         const wchar_t * std::wcsrchr (const wchar_t *, wchar_t);
         wchar_t * std::wcsrchr (wchar_t *, wchar_t);
       }  */
_GL_CXXALIAS_SYS_CAST2 (wcsrchr,
                        wchar_t *, (const wchar_t *, wchar_t),
                        const wchar_t *, (const wchar_t *, wchar_t));
# if ((__GLIBC__ == 2 && __GLIBC_MINOR__ >= 10) && !defined __UCLIBC__) \
     && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4))
_GL_CXXALIASWARN1 (wcsrchr, wchar_t *, (wchar_t *wcs, wchar_t wc));
_GL_CXXALIASWARN1 (wcsrchr, const wchar_t *, (const wchar_t *wcs, wchar_t wc));
# else
_GL_CXXALIASWARN (wcsrchr);
# endif
#elif defined GNULIB_POSIXCHECK
# undef wcsrchr
# if HAVE_RAW_DECL_WCSRCHR
_GL_WARN_ON_USE (wcsrchr, "wcsrchr is unportable - "
                 "use gnulib module wcsrchr for portability");
# endif
#endif


/* Return the length of the initial segmet of WCS which consists entirely
   of wide characters not in REJECT.  */
#if @GNULIB_WCSCSPN@
# if !@HAVE_WCSCSPN@
_GL_FUNCDECL_SYS (wcscspn, size_t, (const wchar_t *wcs, const wchar_t *reject)
                                   _GL_ATTRIBUTE_PURE);
# endif
_GL_CXXALIAS_SYS (wcscspn, size_t, (const wchar_t *wcs, const wchar_t *reject));
_GL_CXXALIASWARN (wcscspn);
#elif defined GNULIB_POSIXCHECK
# undef wcscspn
# if HAVE_RAW_DECL_WCSCSPN
_GL_WARN_ON_USE (wcscspn, "wcscspn is unportable - "
                 "use gnulib module wcscspn for portability");
# endif
#endif


/* Return the length of the initial segmet of WCS which consists entirely
   of wide characters in ACCEPT.  */
#if @GNULIB_WCSSPN@
# if !@HAVE_WCSSPN@
_GL_FUNCDECL_SYS (wcsspn, size_t, (const wchar_t *wcs, const wchar_t *accept)
                                  _GL_ATTRIBUTE_PURE);
# endif
_GL_CXXALIAS_SYS (wcsspn, size_t, (const wchar_t *wcs, const wchar_t *accept));
_GL_CXXALIASWARN (wcsspn);
#elif defined GNULIB_POSIXCHECK
# undef wcsspn
# if HAVE_RAW_DECL_WCSSPN
_GL_WARN_ON_USE (wcsspn, "wcsspn is unportable - "
                 "use gnulib module wcsspn for portability");
# endif
#endif


/* Find the first occurrence in WCS of any character in ACCEPT.  */
#if @GNULIB_WCSPBRK@
# if !@HAVE_WCSPBRK@
_GL_FUNCDECL_SYS (wcspbrk, wchar_t *,
                  (const wchar_t *wcs, const wchar_t *accept)
                  _GL_ATTRIBUTE_PURE);
# endif
  /* On some systems, this function is defined as an overloaded function:
       extern "C++" {
         const wchar_t * std::wcspbrk (const wchar_t *, const wchar_t *);
         wchar_t * std::wcspbrk (wchar_t *, const wchar_t *);
       }  */
_GL_CXXALIAS_SYS_CAST2 (wcspbrk,
                        wchar_t *, (const wchar_t *, const wchar_t *),
                        const wchar_t *, (const wchar_t *, const wchar_t *));
# if ((__GLIBC__ == 2 && __GLIBC_MINOR__ >= 10) && !defined __UCLIBC__) \
     && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4))
_GL_CXXALIASWARN1 (wcspbrk, wchar_t *,
                   (wchar_t *wcs, const wchar_t *accept));
_GL_CXXALIASWARN1 (wcspbrk, const wchar_t *,
                   (const wchar_t *wcs, const wchar_t *accept));
# else
_GL_CXXALIASWARN (wcspbrk);
# endif
#elif defined GNULIB_POSIXCHECK
# undef wcspbrk
# if HAVE_RAW_DECL_WCSPBRK
_GL_WARN_ON_USE (wcspbrk, "wcspbrk is unportable - "
                 "use gnulib module wcspbrk for portability");
# endif
#endif


/* Find the first occurrence of NEEDLE in HAYSTACK.  */
#if @GNULIB_WCSSTR@
# if !@HAVE_WCSSTR@
_GL_FUNCDECL_SYS (wcsstr, wchar_t *,
                  (const wchar_t *haystack, const wchar_t *needle)
                  _GL_ATTRIBUTE_PURE);
# endif
  /* On some systems, this function is defined as an overloaded function:
       extern "C++" {
         const wchar_t * std::wcsstr (const wchar_t *, const wchar_t *);
         wchar_t * std::wcsstr (wchar_t *, const wchar_t *);
       }  */
_GL_CXXALIAS_SYS_CAST2 (wcsstr,
                        wchar_t *, (const wchar_t *, const wchar_t *),
                        const wchar_t *, (const wchar_t *, const wchar_t *));
# if ((__GLIBC__ == 2 && __GLIBC_MINOR__ >= 10) && !defined __UCLIBC__) \
     && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 4))
_GL_CXXALIASWARN1 (wcsstr, wchar_t *,
                   (wchar_t *haystack, const wchar_t *needle));
_GL_CXXALIASWARN1 (wcsstr, const wchar_t *,
                   (const wchar_t *haystack, const wchar_t *needle));
# else
_GL_CXXALIASWARN (wcsstr);
# endif
#elif defined GNULIB_POSIXCHECK
# undef wcsstr
# if HAVE_RAW_DECL_WCSSTR
_GL_WARN_ON_USE (wcsstr, "wcsstr is unportable - "
                 "use gnulib module wcsstr for portability");
# endif
#endif


/* Divide WCS into tokens separated by characters in DELIM.  */
#if @GNULIB_WCSTOK@
# if !@HAVE_WCSTOK@
_GL_FUNCDECL_SYS (wcstok, wchar_t *,
                  (wchar_t *wcs, const wchar_t *delim, wchar_t **ptr));
# endif
_GL_CXXALIAS_SYS (wcstok, wchar_t *,
                  (wchar_t *wcs, const wchar_t *delim, wchar_t **ptr));
_GL_CXXALIASWARN (wcstok);
#elif defined GNULIB_POSIXCHECK
# undef wcstok
# if HAVE_RAW_DECL_WCSTOK
_GL_WARN_ON_USE (wcstok, "wcstok is unportable - "
                 "use gnulib module wcstok for portability");
# endif
#endif


/* Determine number of column positions required for first N wide
   characters (or fewer if S ends before this) in S.  */
#if @GNULIB_WCSWIDTH@
# if @REPLACE_WCSWIDTH@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef wcswidth
#   define wcswidth rpl_wcswidth
#  endif
_GL_FUNCDECL_RPL (wcswidth, int, (const wchar_t *s, size_t n)
                                 _GL_ATTRIBUTE_PURE);
_GL_CXXALIAS_RPL (wcswidth, int, (const wchar_t *s, size_t n));
# else
#  if !@HAVE_WCSWIDTH@
_GL_FUNCDECL_SYS (wcswidth, int, (const wchar_t *s, size_t n)
                                 _GL_ATTRIBUTE_PURE);
#  endif
_GL_CXXALIAS_SYS (wcswidth, int, (const wchar_t *s, size_t n));
# endif
_GL_CXXALIASWARN (wcswidth);
#elif defined GNULIB_POSIXCHECK
# undef wcswidth
# if HAVE_RAW_DECL_WCSWIDTH
_GL_WARN_ON_USE (wcswidth, "wcswidth is unportable - "
                 "use gnulib module wcswidth for portability");
# endif
#endif


#endif /* _@GUARD_PREFIX@_WCHAR_H */
#endif /* _@GUARD_PREFIX@_WCHAR_H */
#endif
