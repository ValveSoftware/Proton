/* obstack.c - subroutines used implicitly by object stack macros
   Copyright (C) 1988-2015 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 3 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */


#ifdef _LIBC
# include <obstack.h>
#else
# include <config.h>
# include "obstack.h"
#endif

/* NOTE BEFORE MODIFYING THIS FILE: _OBSTACK_INTERFACE_VERSION in
   obstack.h must be incremented whenever callers compiled using an old
   obstack.h can no longer properly call the functions in this file.  */

/* Comment out all this code if we are using the GNU C Library, and are not
   actually compiling the library itself, and the installed library
   supports the same library interface we do.  This code is part of the GNU
   C Library, but also included in many other GNU distributions.  Compiling
   and linking in this code is a waste when using the GNU C library
   (especially if it is a shared library).  Rather than having every GNU
   program understand 'configure --with-gnu-libc' and omit the object
   files, it is simpler to just do this in the source for each such file.  */
#if !defined _LIBC && defined __GNU_LIBRARY__ && __GNU_LIBRARY__ > 1
# include <gnu-versions.h>
# if (_GNU_OBSTACK_INTERFACE_VERSION == _OBSTACK_INTERFACE_VERSION	      \
      || (_GNU_OBSTACK_INTERFACE_VERSION == 1				      \
          && _OBSTACK_INTERFACE_VERSION == 2				      \
          && defined SIZEOF_INT && defined SIZEOF_SIZE_T		      \
          && SIZEOF_INT == SIZEOF_SIZE_T))
#  define _OBSTACK_ELIDE_CODE
# endif
#endif

#ifndef _OBSTACK_ELIDE_CODE
/* If GCC, or if an oddball (testing?) host that #defines __alignof__,
   use the already-supplied __alignof__.  Otherwise, this must be Gnulib
   (as glibc assumes GCC); defer to Gnulib's alignof_type.  */
# if !defined __GNUC__ && !defined __alignof__
#  include <alignof.h>
#  define __alignof__(type) alignof_type (type)
# endif
# include <stdlib.h>
# include <stdint.h>

# ifndef MAX
#  define MAX(a,b) ((a) > (b) ? (a) : (b))
# endif

/* Determine default alignment.  */

/* If malloc were really smart, it would round addresses to DEFAULT_ALIGNMENT.
   But in fact it might be less smart and round addresses to as much as
   DEFAULT_ROUNDING.  So we prepare for it to do that.

   DEFAULT_ALIGNMENT cannot be an enum constant; see gnulib's alignof.h.  */
#define DEFAULT_ALIGNMENT MAX (__alignof__ (long double),		      \
                               MAX (__alignof__ (uintmax_t),		      \
                                    __alignof__ (void *)))
#define DEFAULT_ROUNDING MAX (sizeof (long double),			      \
                               MAX (sizeof (uintmax_t),			      \
                                    sizeof (void *)))

/* Call functions with either the traditional malloc/free calling
   interface, or the mmalloc/mfree interface (that adds an extra first
   argument), based on the value of use_extra_arg.  */

static void *
call_chunkfun (struct obstack *h, size_t size)
{
  if (h->use_extra_arg)
    return h->chunkfun.extra (h->extra_arg, size);
  else
    return h->chunkfun.plain (size);
}

static void
call_freefun (struct obstack *h, void *old_chunk)
{
  if (h->use_extra_arg)
    h->freefun.extra (h->extra_arg, old_chunk);
  else
    h->freefun.plain (old_chunk);
}


/* Initialize an obstack H for use.  Specify chunk size SIZE (0 means default).
   Objects start on multiples of ALIGNMENT (0 means use default).

   Return nonzero if successful, calls obstack_alloc_failed_handler if
   allocation fails.  */

static int
_obstack_begin_worker (struct obstack *h,
                       _OBSTACK_SIZE_T size, _OBSTACK_SIZE_T alignment)
{
  struct _obstack_chunk *chunk; /* points to new chunk */

  if (alignment == 0)
    alignment = DEFAULT_ALIGNMENT;
  if (size == 0)
    /* Default size is what GNU malloc can fit in a 4096-byte block.  */
    {
      /* 12 is sizeof (mhead) and 4 is EXTRA from GNU malloc.
         Use the values for range checking, because if range checking is off,
         the extra bytes won't be missed terribly, but if range checking is on
         and we used a larger request, a whole extra 4096 bytes would be
         allocated.

         These number are irrelevant to the new GNU malloc.  I suspect it is
         less sensitive to the size of the request.  */
      int extra = ((((12 + DEFAULT_ROUNDING - 1) & ~(DEFAULT_ROUNDING - 1))
                    + 4 + DEFAULT_ROUNDING - 1)
                   & ~(DEFAULT_ROUNDING - 1));
      size = 4096 - extra;
    }

  h->chunk_size = size;
  h->alignment_mask = alignment - 1;

  chunk = h->chunk = call_chunkfun (h, h->chunk_size);
  if (!chunk)
    (*obstack_alloc_failed_handler) ();
  h->next_free = h->object_base = __PTR_ALIGN ((char *) chunk, chunk->contents,
                                               alignment - 1);
  h->chunk_limit = chunk->limit = (char *) chunk + h->chunk_size;
  chunk->prev = 0;
  /* The initial chunk now contains no empty object.  */
  h->maybe_empty_object = 0;
  h->alloc_failed = 0;
  return 1;
}

int
_obstack_begin (struct obstack *h,
                _OBSTACK_SIZE_T size, _OBSTACK_SIZE_T alignment,
                void *(*chunkfun) (size_t),
                void (*freefun) (void *))
{
  h->chunkfun.plain = chunkfun;
  h->freefun.plain = freefun;
  h->use_extra_arg = 0;
  return _obstack_begin_worker (h, size, alignment);
}

int
_obstack_begin_1 (struct obstack *h,
                  _OBSTACK_SIZE_T size, _OBSTACK_SIZE_T alignment,
                  void *(*chunkfun) (void *, size_t),
                  void (*freefun) (void *, void *),
                  void *arg)
{
  h->chunkfun.extra = chunkfun;
  h->freefun.extra = freefun;
  h->extra_arg = arg;
  h->use_extra_arg = 1;
  return _obstack_begin_worker (h, size, alignment);
}

/* Allocate a new current chunk for the obstack *H
   on the assumption that LENGTH bytes need to be added
   to the current object, or a new object of length LENGTH allocated.
   Copies any partial object from the end of the old chunk
   to the beginning of the new one.  */

void
_obstack_newchunk (struct obstack *h, _OBSTACK_SIZE_T length)
{
  struct _obstack_chunk *old_chunk = h->chunk;
  struct _obstack_chunk *new_chunk = 0;
  size_t obj_size = h->next_free - h->object_base;
  char *object_base;

  /* Compute size for new chunk.  */
  size_t sum1 = obj_size + length;
  size_t sum2 = sum1 + h->alignment_mask;
  size_t new_size = sum2 + (obj_size >> 3) + 100;
  if (new_size < sum2)
    new_size = sum2;
  if (new_size < h->chunk_size)
    new_size = h->chunk_size;

  /* Allocate and initialize the new chunk.  */
  if (obj_size <= sum1 && sum1 <= sum2)
    new_chunk = call_chunkfun (h, new_size);
  if (!new_chunk)
    (*obstack_alloc_failed_handler)();
  h->chunk = new_chunk;
  new_chunk->prev = old_chunk;
  new_chunk->limit = h->chunk_limit = (char *) new_chunk + new_size;

  /* Compute an aligned object_base in the new chunk */
  object_base =
    __PTR_ALIGN ((char *) new_chunk, new_chunk->contents, h->alignment_mask);

  /* Move the existing object to the new chunk.  */
  memcpy (object_base, h->object_base, obj_size);

  /* If the object just copied was the only data in OLD_CHUNK,
     free that chunk and remove it from the chain.
     But not if that chunk might contain an empty object.  */
  if (!h->maybe_empty_object
      && (h->object_base
          == __PTR_ALIGN ((char *) old_chunk, old_chunk->contents,
                          h->alignment_mask)))
    {
      new_chunk->prev = old_chunk->prev;
      call_freefun (h, old_chunk);
    }

  h->object_base = object_base;
  h->next_free = h->object_base + obj_size;
  /* The new chunk certainly contains no empty object yet.  */
  h->maybe_empty_object = 0;
}

/* Return nonzero if object OBJ has been allocated from obstack H.
   This is here for debugging.
   If you use it in a program, you are probably losing.  */

/* Suppress -Wmissing-prototypes warning.  We don't want to declare this in
   obstack.h because it is just for debugging.  */
int _obstack_allocated_p (struct obstack *h, void *obj) __attribute_pure__;

int
_obstack_allocated_p (struct obstack *h, void *obj)
{
  struct _obstack_chunk *lp;    /* below addr of any objects in this chunk */
  struct _obstack_chunk *plp;   /* point to previous chunk if any */

  lp = (h)->chunk;
  /* We use >= rather than > since the object cannot be exactly at
     the beginning of the chunk but might be an empty object exactly
     at the end of an adjacent chunk.  */
  while (lp != 0 && ((void *) lp >= obj || (void *) (lp)->limit < obj))
    {
      plp = lp->prev;
      lp = plp;
    }
  return lp != 0;
}

/* Free objects in obstack H, including OBJ and everything allocate
   more recently than OBJ.  If OBJ is zero, free everything in H.  */

void
_obstack_free (struct obstack *h, void *obj)
{
  struct _obstack_chunk *lp;    /* below addr of any objects in this chunk */
  struct _obstack_chunk *plp;   /* point to previous chunk if any */

  lp = h->chunk;
  /* We use >= because there cannot be an object at the beginning of a chunk.
     But there can be an empty object at that address
     at the end of another chunk.  */
  while (lp != 0 && ((void *) lp >= obj || (void *) (lp)->limit < obj))
    {
      plp = lp->prev;
      call_freefun (h, lp);
      lp = plp;
      /* If we switch chunks, we can't tell whether the new current
         chunk contains an empty object, so assume that it may.  */
      h->maybe_empty_object = 1;
    }
  if (lp)
    {
      h->object_base = h->next_free = (char *) (obj);
      h->chunk_limit = lp->limit;
      h->chunk = lp;
    }
  else if (obj != 0)
    /* obj is not in any of the chunks! */
    abort ();
}

_OBSTACK_SIZE_T
_obstack_memory_used (struct obstack *h)
{
  struct _obstack_chunk *lp;
  _OBSTACK_SIZE_T nbytes = 0;

  for (lp = h->chunk; lp != 0; lp = lp->prev)
    {
      nbytes += lp->limit - (char *) lp;
    }
  return nbytes;
}

# ifndef _OBSTACK_NO_ERROR_HANDLER
/* Define the error handler.  */
#  include <stdio.h>

/* Exit value used when 'print_and_abort' is used.  */
#  ifdef _LIBC
int obstack_exit_failure = EXIT_FAILURE;
#  else
#   include "exitfail.h"
#   define obstack_exit_failure exit_failure
#  endif

#  ifdef _LIBC
#   include <libintl.h>
#  else
#   include "gettext.h"
#  endif
#  ifndef _
#   define _(msgid) gettext (msgid)
#  endif

#  ifdef _LIBC
#   include <libio/iolibio.h>
#  endif

static _Noreturn void
print_and_abort (void)
{
  /* Don't change any of these strings.  Yes, it would be possible to add
     the newline to the string and use fputs or so.  But this must not
     happen because the "memory exhausted" message appears in other places
     like this and the translation should be reused instead of creating
     a very similar string which requires a separate translation.  */
#  ifdef _LIBC
  (void) __fxprintf (NULL, "%s\n", _("memory exhausted"));
#  else
  fprintf (stderr, "%s\n", _("memory exhausted"));
#  endif
  exit (obstack_exit_failure);
}

/* The functions allocating more room by calling 'obstack_chunk_alloc'
   jump to the handler pointed to by 'obstack_alloc_failed_handler'.
   This can be set to a user defined function which should either
   abort gracefully or use longjump - but shouldn't return.  This
   variable by default points to the internal function
   'print_and_abort'.  */
void (*obstack_alloc_failed_handler) (void) = print_and_abort;
# endif /* !_OBSTACK_NO_ERROR_HANDLER */
#endif /* !_OBSTACK_ELIDE_CODE */
