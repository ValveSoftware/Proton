/* Character handling in C locale.

   These functions work like the corresponding functions in <ctype.h>,
   except that they have the C (POSIX) locale hardwired, whereas the
   <ctype.h> functions' behaviour depends on the current locale set via
   setlocale.

   Copyright (C) 2000-2003, 2006, 2008-2015 Free Software Foundation, Inc.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, see <http://www.gnu.org/licenses/>.  */

#ifndef C_CTYPE_H
#define C_CTYPE_H

#include <stdbool.h>


#ifdef __cplusplus
extern "C" {
#endif


/* The functions defined in this file assume the "C" locale and a character
   set without diacritics (ASCII-US or EBCDIC-US or something like that).
   Even if the "C" locale on a particular system is an extension of the ASCII
   character set (like on BeOS, where it is UTF-8, or on AmigaOS, where it
   is ISO-8859-1), the functions in this file recognize only the ASCII
   characters.  */


/* Check whether the ASCII optimizations apply. */

/* ANSI C89 (and ISO C99 5.2.1.3 too) already guarantees that
   '0', '1', ..., '9' have consecutive integer values.  */
#define C_CTYPE_CONSECUTIVE_DIGITS 1

#if ('A' <= 'Z') \
    && ('A' + 1 == 'B') && ('B' + 1 == 'C') && ('C' + 1 == 'D') \
    && ('D' + 1 == 'E') && ('E' + 1 == 'F') && ('F' + 1 == 'G') \
    && ('G' + 1 == 'H') && ('H' + 1 == 'I') && ('I' + 1 == 'J') \
    && ('J' + 1 == 'K') && ('K' + 1 == 'L') && ('L' + 1 == 'M') \
    && ('M' + 1 == 'N') && ('N' + 1 == 'O') && ('O' + 1 == 'P') \
    && ('P' + 1 == 'Q') && ('Q' + 1 == 'R') && ('R' + 1 == 'S') \
    && ('S' + 1 == 'T') && ('T' + 1 == 'U') && ('U' + 1 == 'V') \
    && ('V' + 1 == 'W') && ('W' + 1 == 'X') && ('X' + 1 == 'Y') \
    && ('Y' + 1 == 'Z')
#define C_CTYPE_CONSECUTIVE_UPPERCASE 1
#endif

#if ('a' <= 'z') \
    && ('a' + 1 == 'b') && ('b' + 1 == 'c') && ('c' + 1 == 'd') \
    && ('d' + 1 == 'e') && ('e' + 1 == 'f') && ('f' + 1 == 'g') \
    && ('g' + 1 == 'h') && ('h' + 1 == 'i') && ('i' + 1 == 'j') \
    && ('j' + 1 == 'k') && ('k' + 1 == 'l') && ('l' + 1 == 'm') \
    && ('m' + 1 == 'n') && ('n' + 1 == 'o') && ('o' + 1 == 'p') \
    && ('p' + 1 == 'q') && ('q' + 1 == 'r') && ('r' + 1 == 's') \
    && ('s' + 1 == 't') && ('t' + 1 == 'u') && ('u' + 1 == 'v') \
    && ('v' + 1 == 'w') && ('w' + 1 == 'x') && ('x' + 1 == 'y') \
    && ('y' + 1 == 'z')
#define C_CTYPE_CONSECUTIVE_LOWERCASE 1
#endif

#if (' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
    && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
    && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
    && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
    && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
    && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
    && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
    && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
    && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
    && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
    && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
    && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
    && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
    && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
    && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
    && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
    && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
    && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
    && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
    && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
    && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
    && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
    && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126)
/* The character set is ASCII or one of its variants or extensions, not EBCDIC.
   Testing the value of '\n' and '\r' is not relevant.  */
#define C_CTYPE_ASCII 1
#endif


/* Function declarations. */

/* Unlike the functions in <ctype.h>, which require an argument in the range
   of the 'unsigned char' type, the functions here operate on values that are
   in the 'unsigned char' range or in the 'char' range.  In other words,
   when you have a 'char' value, you need to cast it before using it as
   argument to a <ctype.h> function:

         const char *s = ...;
         if (isalpha ((unsigned char) *s)) ...

   but you don't need to cast it for the functions defined in this file:

         const char *s = ...;
         if (c_isalpha (*s)) ...
 */

extern bool c_isascii (int c) _GL_ATTRIBUTE_CONST; /* not locale dependent */

extern bool c_isalnum (int c) _GL_ATTRIBUTE_CONST;
extern bool c_isalpha (int c) _GL_ATTRIBUTE_CONST;
extern bool c_isblank (int c) _GL_ATTRIBUTE_CONST;
extern bool c_iscntrl (int c) _GL_ATTRIBUTE_CONST;
extern bool c_isdigit (int c) _GL_ATTRIBUTE_CONST;
extern bool c_islower (int c) _GL_ATTRIBUTE_CONST;
extern bool c_isgraph (int c) _GL_ATTRIBUTE_CONST;
extern bool c_isprint (int c) _GL_ATTRIBUTE_CONST;
extern bool c_ispunct (int c) _GL_ATTRIBUTE_CONST;
extern bool c_isspace (int c) _GL_ATTRIBUTE_CONST;
extern bool c_isupper (int c) _GL_ATTRIBUTE_CONST;
extern bool c_isxdigit (int c) _GL_ATTRIBUTE_CONST;

extern int c_tolower (int c) _GL_ATTRIBUTE_CONST;
extern int c_toupper (int c) _GL_ATTRIBUTE_CONST;


#if (defined __GNUC__ && !defined __STRICT_ANSI__ && defined __OPTIMIZE__ \
     && !defined __OPTIMIZE_SIZE__ && !defined NO_C_CTYPE_MACROS)

/* ASCII optimizations. */

#undef c_isascii
#define c_isascii(c) \
  ({ int __c = (c); \
     (__c >= 0x00 && __c <= 0x7f); \
   })

#if C_CTYPE_CONSECUTIVE_DIGITS \
    && C_CTYPE_CONSECUTIVE_UPPERCASE && C_CTYPE_CONSECUTIVE_LOWERCASE
#if C_CTYPE_ASCII
#undef c_isalnum
#define c_isalnum(c) \
  ({ int __c = (c); \
     ((__c >= '0' && __c <= '9') \
      || ((__c & ~0x20) >= 'A' && (__c & ~0x20) <= 'Z')); \
   })
#else
#undef c_isalnum
#define c_isalnum(c) \
  ({ int __c = (c); \
     ((__c >= '0' && __c <= '9') \
      || (__c >= 'A' && __c <= 'Z') \
      || (__c >= 'a' && __c <= 'z')); \
   })
#endif
#endif

#if C_CTYPE_CONSECUTIVE_UPPERCASE && C_CTYPE_CONSECUTIVE_LOWERCASE
#if C_CTYPE_ASCII
#undef c_isalpha
#define c_isalpha(c) \
  ({ int __c = (c); \
     ((__c & ~0x20) >= 'A' && (__c & ~0x20) <= 'Z'); \
   })
#else
#undef c_isalpha
#define c_isalpha(c) \
  ({ int __c = (c); \
     ((__c >= 'A' && __c <= 'Z') || (__c >= 'a' && __c <= 'z')); \
   })
#endif
#endif

#undef c_isblank
#define c_isblank(c) \
  ({ int __c = (c); \
     (__c == ' ' || __c == '\t'); \
   })

#if C_CTYPE_ASCII
#undef c_iscntrl
#define c_iscntrl(c) \
  ({ int __c = (c); \
     ((__c & ~0x1f) == 0 || __c == 0x7f); \
   })
#endif

#if C_CTYPE_CONSECUTIVE_DIGITS
#undef c_isdigit
#define c_isdigit(c) \
  ({ int __c = (c); \
     (__c >= '0' && __c <= '9'); \
   })
#endif

#if C_CTYPE_CONSECUTIVE_LOWERCASE
#undef c_islower
#define c_islower(c) \
  ({ int __c = (c); \
     (__c >= 'a' && __c <= 'z'); \
   })
#endif

#if C_CTYPE_ASCII
#undef c_isgraph
#define c_isgraph(c) \
  ({ int __c = (c); \
     (__c >= '!' && __c <= '~'); \
   })
#endif

#if C_CTYPE_ASCII
#undef c_isprint
#define c_isprint(c) \
  ({ int __c = (c); \
     (__c >= ' ' && __c <= '~'); \
   })
#endif

#if C_CTYPE_ASCII
#undef c_ispunct
#define c_ispunct(c) \
  ({ int _c = (c); \
     (c_isgraph (_c) && ! c_isalnum (_c)); \
   })
#endif

#undef c_isspace
#define c_isspace(c) \
  ({ int __c = (c); \
     (__c == ' ' || __c == '\t' \
      || __c == '\n' || __c == '\v' || __c == '\f' || __c == '\r'); \
   })

#if C_CTYPE_CONSECUTIVE_UPPERCASE
#undef c_isupper
#define c_isupper(c) \
  ({ int __c = (c); \
     (__c >= 'A' && __c <= 'Z'); \
   })
#endif

#if C_CTYPE_CONSECUTIVE_DIGITS \
    && C_CTYPE_CONSECUTIVE_UPPERCASE && C_CTYPE_CONSECUTIVE_LOWERCASE
#if C_CTYPE_ASCII
#undef c_isxdigit
#define c_isxdigit(c) \
  ({ int __c = (c); \
     ((__c >= '0' && __c <= '9') \
      || ((__c & ~0x20) >= 'A' && (__c & ~0x20) <= 'F')); \
   })
#else
#undef c_isxdigit
#define c_isxdigit(c) \
  ({ int __c = (c); \
     ((__c >= '0' && __c <= '9') \
      || (__c >= 'A' && __c <= 'F') \
      || (__c >= 'a' && __c <= 'f')); \
   })
#endif
#endif

#if C_CTYPE_CONSECUTIVE_UPPERCASE && C_CTYPE_CONSECUTIVE_LOWERCASE
#undef c_tolower
#define c_tolower(c) \
  ({ int __c = (c); \
     (__c >= 'A' && __c <= 'Z' ? __c - 'A' + 'a' : __c); \
   })
#undef c_toupper
#define c_toupper(c) \
  ({ int __c = (c); \
     (__c >= 'a' && __c <= 'z' ? __c - 'a' + 'A' : __c); \
   })
#endif

#endif /* optimizing for speed */


#ifdef __cplusplus
}
#endif

#endif /* C_CTYPE_H */
