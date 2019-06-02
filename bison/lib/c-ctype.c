/* Character handling in C locale.

   Copyright 2000-2003, 2006, 2009-2015 Free Software Foundation, Inc.

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

#include <config.h>

/* Specification.  */
#define NO_C_CTYPE_MACROS
#include "c-ctype.h"

/* The function isascii is not locale dependent. Its use in EBCDIC is
   questionable. */
bool
c_isascii (int c)
{
  return (c >= 0x00 && c <= 0x7f);
}

bool
c_isalnum (int c)
{
#if C_CTYPE_CONSECUTIVE_DIGITS \
    && C_CTYPE_CONSECUTIVE_UPPERCASE && C_CTYPE_CONSECUTIVE_LOWERCASE
#if C_CTYPE_ASCII
  return ((c >= '0' && c <= '9')
          || ((c & ~0x20) >= 'A' && (c & ~0x20) <= 'Z'));
#else
  return ((c >= '0' && c <= '9')
          || (c >= 'A' && c <= 'Z')
          || (c >= 'a' && c <= 'z'));
#endif
#else
  switch (c)
    {
    case '0': case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9':
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
    case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
    case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
    case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
    case 'Y': case 'Z':
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
    case 'g': case 'h': case 'i': case 'j': case 'k': case 'l':
    case 'm': case 'n': case 'o': case 'p': case 'q': case 'r':
    case 's': case 't': case 'u': case 'v': case 'w': case 'x':
    case 'y': case 'z':
      return 1;
    default:
      return 0;
    }
#endif
}

bool
c_isalpha (int c)
{
#if C_CTYPE_CONSECUTIVE_UPPERCASE && C_CTYPE_CONSECUTIVE_LOWERCASE
#if C_CTYPE_ASCII
  return ((c & ~0x20) >= 'A' && (c & ~0x20) <= 'Z');
#else
  return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
#endif
#else
  switch (c)
    {
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
    case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
    case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
    case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
    case 'Y': case 'Z':
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
    case 'g': case 'h': case 'i': case 'j': case 'k': case 'l':
    case 'm': case 'n': case 'o': case 'p': case 'q': case 'r':
    case 's': case 't': case 'u': case 'v': case 'w': case 'x':
    case 'y': case 'z':
      return 1;
    default:
      return 0;
    }
#endif
}

bool
c_isblank (int c)
{
  return (c == ' ' || c == '\t');
}

bool
c_iscntrl (int c)
{
#if C_CTYPE_ASCII
  return ((c & ~0x1f) == 0 || c == 0x7f);
#else
  switch (c)
    {
    case ' ': case '!': case '"': case '#': case '$': case '%':
    case '&': case '\'': case '(': case ')': case '*': case '+':
    case ',': case '-': case '.': case '/':
    case '0': case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9':
    case ':': case ';': case '<': case '=': case '>': case '?':
    case '@':
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
    case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
    case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
    case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
    case 'Y': case 'Z':
    case '[': case '\\': case ']': case '^': case '_': case '`':
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
    case 'g': case 'h': case 'i': case 'j': case 'k': case 'l':
    case 'm': case 'n': case 'o': case 'p': case 'q': case 'r':
    case 's': case 't': case 'u': case 'v': case 'w': case 'x':
    case 'y': case 'z':
    case '{': case '|': case '}': case '~':
      return 0;
    default:
      return 1;
    }
#endif
}

bool
c_isdigit (int c)
{
#if C_CTYPE_CONSECUTIVE_DIGITS
  return (c >= '0' && c <= '9');
#else
  switch (c)
    {
    case '0': case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9':
      return 1;
    default:
      return 0;
    }
#endif
}

bool
c_islower (int c)
{
#if C_CTYPE_CONSECUTIVE_LOWERCASE
  return (c >= 'a' && c <= 'z');
#else
  switch (c)
    {
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
    case 'g': case 'h': case 'i': case 'j': case 'k': case 'l':
    case 'm': case 'n': case 'o': case 'p': case 'q': case 'r':
    case 's': case 't': case 'u': case 'v': case 'w': case 'x':
    case 'y': case 'z':
      return 1;
    default:
      return 0;
    }
#endif
}

bool
c_isgraph (int c)
{
#if C_CTYPE_ASCII
  return (c >= '!' && c <= '~');
#else
  switch (c)
    {
    case '!': case '"': case '#': case '$': case '%': case '&':
    case '\'': case '(': case ')': case '*': case '+': case ',':
    case '-': case '.': case '/':
    case '0': case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9':
    case ':': case ';': case '<': case '=': case '>': case '?':
    case '@':
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
    case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
    case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
    case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
    case 'Y': case 'Z':
    case '[': case '\\': case ']': case '^': case '_': case '`':
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
    case 'g': case 'h': case 'i': case 'j': case 'k': case 'l':
    case 'm': case 'n': case 'o': case 'p': case 'q': case 'r':
    case 's': case 't': case 'u': case 'v': case 'w': case 'x':
    case 'y': case 'z':
    case '{': case '|': case '}': case '~':
      return 1;
    default:
      return 0;
    }
#endif
}

bool
c_isprint (int c)
{
#if C_CTYPE_ASCII
  return (c >= ' ' && c <= '~');
#else
  switch (c)
    {
    case ' ': case '!': case '"': case '#': case '$': case '%':
    case '&': case '\'': case '(': case ')': case '*': case '+':
    case ',': case '-': case '.': case '/':
    case '0': case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9':
    case ':': case ';': case '<': case '=': case '>': case '?':
    case '@':
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
    case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
    case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
    case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
    case 'Y': case 'Z':
    case '[': case '\\': case ']': case '^': case '_': case '`':
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
    case 'g': case 'h': case 'i': case 'j': case 'k': case 'l':
    case 'm': case 'n': case 'o': case 'p': case 'q': case 'r':
    case 's': case 't': case 'u': case 'v': case 'w': case 'x':
    case 'y': case 'z':
    case '{': case '|': case '}': case '~':
      return 1;
    default:
      return 0;
    }
#endif
}

bool
c_ispunct (int c)
{
#if C_CTYPE_ASCII
  return ((c >= '!' && c <= '~')
          && !((c >= '0' && c <= '9')
               || ((c & ~0x20) >= 'A' && (c & ~0x20) <= 'Z')));
#else
  switch (c)
    {
    case '!': case '"': case '#': case '$': case '%': case '&':
    case '\'': case '(': case ')': case '*': case '+': case ',':
    case '-': case '.': case '/':
    case ':': case ';': case '<': case '=': case '>': case '?':
    case '@':
    case '[': case '\\': case ']': case '^': case '_': case '`':
    case '{': case '|': case '}': case '~':
      return 1;
    default:
      return 0;
    }
#endif
}

bool
c_isspace (int c)
{
  return (c == ' ' || c == '\t'
          || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

bool
c_isupper (int c)
{
#if C_CTYPE_CONSECUTIVE_UPPERCASE
  return (c >= 'A' && c <= 'Z');
#else
  switch (c)
    {
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
    case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
    case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
    case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
    case 'Y': case 'Z':
      return 1;
    default:
      return 0;
    }
#endif
}

bool
c_isxdigit (int c)
{
#if C_CTYPE_CONSECUTIVE_DIGITS \
    && C_CTYPE_CONSECUTIVE_UPPERCASE && C_CTYPE_CONSECUTIVE_LOWERCASE
#if C_CTYPE_ASCII
  return ((c >= '0' && c <= '9')
          || ((c & ~0x20) >= 'A' && (c & ~0x20) <= 'F'));
#else
  return ((c >= '0' && c <= '9')
          || (c >= 'A' && c <= 'F')
          || (c >= 'a' && c <= 'f'));
#endif
#else
  switch (c)
    {
    case '0': case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9':
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
      return 1;
    default:
      return 0;
    }
#endif
}

int
c_tolower (int c)
{
#if C_CTYPE_CONSECUTIVE_UPPERCASE && C_CTYPE_CONSECUTIVE_LOWERCASE
  return (c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c);
#else
  switch (c)
    {
    case 'A': return 'a';
    case 'B': return 'b';
    case 'C': return 'c';
    case 'D': return 'd';
    case 'E': return 'e';
    case 'F': return 'f';
    case 'G': return 'g';
    case 'H': return 'h';
    case 'I': return 'i';
    case 'J': return 'j';
    case 'K': return 'k';
    case 'L': return 'l';
    case 'M': return 'm';
    case 'N': return 'n';
    case 'O': return 'o';
    case 'P': return 'p';
    case 'Q': return 'q';
    case 'R': return 'r';
    case 'S': return 's';
    case 'T': return 't';
    case 'U': return 'u';
    case 'V': return 'v';
    case 'W': return 'w';
    case 'X': return 'x';
    case 'Y': return 'y';
    case 'Z': return 'z';
    default: return c;
    }
#endif
}

int
c_toupper (int c)
{
#if C_CTYPE_CONSECUTIVE_UPPERCASE && C_CTYPE_CONSECUTIVE_LOWERCASE
  return (c >= 'a' && c <= 'z' ? c - 'a' + 'A' : c);
#else
  switch (c)
    {
    case 'a': return 'A';
    case 'b': return 'B';
    case 'c': return 'C';
    case 'd': return 'D';
    case 'e': return 'E';
    case 'f': return 'F';
    case 'g': return 'G';
    case 'h': return 'H';
    case 'i': return 'I';
    case 'j': return 'J';
    case 'k': return 'K';
    case 'l': return 'L';
    case 'm': return 'M';
    case 'n': return 'N';
    case 'o': return 'O';
    case 'p': return 'P';
    case 'q': return 'Q';
    case 'r': return 'R';
    case 's': return 'S';
    case 't': return 'T';
    case 'u': return 'U';
    case 'v': return 'V';
    case 'w': return 'W';
    case 'x': return 'X';
    case 'y': return 'Y';
    case 'z': return 'Z';
    default: return c;
    }
#endif
}
