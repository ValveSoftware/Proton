/* A simple, memory-efficient bitset implementation.

   Copyright (C) 2009-2015 Free Software Foundation, Inc.

   This file is part of Bison, the GNU Compiler Compiler.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef SBITSET_H_
# define SBITSET_H_

typedef unsigned char *Sbitset;
typedef size_t Sbitset__Index;
# define SBITSET__INDEX__CONVERSION_SPEC "zu"

# define Sbitset__nbytes(NBITS) \
  (((NBITS) + CHAR_BIT - 1) / CHAR_BIT)
# define Sbitset__byteAddress(SELF, INDEX) \
  (((SELF) + (INDEX) / CHAR_BIT))
# define Sbitset__bit_mask(INDEX) \
  (1 << (CHAR_BIT - 1 - (INDEX) % CHAR_BIT))
# define Sbitset__last_byte_mask(NBITS) \
  (UCHAR_MAX << (CHAR_BIT - 1 - ((NBITS) - 1) % CHAR_BIT))

/* nbits must not be 0.  */
Sbitset Sbitset__new (Sbitset__Index nbits);
Sbitset Sbitset__new_on_obstack (Sbitset__Index nbits,
                                 struct obstack *obstackp);
void Sbitset__delete (Sbitset self);

# define Sbitset__test(SELF, INDEX)                                     \
  ((*Sbitset__byteAddress ((SELF), (INDEX)) & Sbitset__bit_mask (INDEX)) != 0)

bool Sbitset__isEmpty (Sbitset self, Sbitset__Index nbits);

void Sbitset__fprint (Sbitset self, Sbitset__Index nbits, FILE *file);

# define Sbitset__set(SELF, INDEX)                                      \
  do {                                                                  \
    *Sbitset__byteAddress ((SELF), (INDEX)) =                           \
      *Sbitset__byteAddress ((SELF), (INDEX)) | Sbitset__bit_mask (INDEX); \
  } while (0)

# define Sbitset__reset(SELF, INDEX)                                    \
  do {                                                                  \
    *Sbitset__byteAddress ((SELF), (INDEX)) =                           \
      *Sbitset__byteAddress ((SELF), (INDEX)) & ~Sbitset__bit_mask (INDEX); \
  } while (0)

/* NBITS is the size of the bitset.  More than NBITS bits might be reset.  */
# define Sbitset__zero(SELF, NBITS)             \
  do {                                          \
    memset (SELF, 0, Sbitset__nbytes (NBITS));  \
  } while (0)

/* NBITS is the size of the bitset.  More than NBITS bits might be set.  */
# define Sbitset__ones(SELF, NBITS)                     \
  do {                                                  \
    memset (SELF, UCHAR_MAX, Sbitset__nbytes (NBITS));  \
  } while (0)

/* NBITS is the size of every bitset.  More than NBITS bits might be set.  */
# define Sbitset__or(SELF, OTHER1, OTHER2, NBITS)                       \
  do {                                                                  \
    Sbitset ptr_self = (SELF);                                          \
    Sbitset ptr_other1 = (OTHER1);                                      \
    Sbitset ptr_other2 = (OTHER2);                                      \
    Sbitset end_self = ptr_self + Sbitset__nbytes (NBITS);              \
    for (; ptr_self < end_self; ++ptr_self, ++ptr_other1, ++ptr_other2) \
      *ptr_self = *ptr_other1 | *ptr_other2;                            \
  } while (0)

# define SBITSET__FOR_EACH(SELF, NBITS, ITER, INDEX)                    \
  for ((ITER) = (SELF); (ITER) < (SELF) + Sbitset__nbytes (NBITS); ++(ITER)) \
    if (*(ITER) != 0)                                                   \
      for ((INDEX) = ((ITER)-(SELF))*CHAR_BIT;                          \
           (INDEX) < (NBITS) && (SELF)+(INDEX)/CHAR_BIT < (ITER)+1;     \
           ++(INDEX))                                                   \
        if (((*ITER) & Sbitset__bit_mask (INDEX)) != 0)

#endif /* !SBITSET_H_ */
