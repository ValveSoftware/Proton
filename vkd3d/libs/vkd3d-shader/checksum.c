/*
 * Copyright (C) 2001 Nikos Mavroyanopoulos
 * Copyright (C) 2004 Hans Leidekker
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

/*
 * This code implements the MD5 message-digest algorithm.
 * It is based on code in the public domain written by Colin
 * Plumb in 1993. The algorithm is due to Ron Rivest.
 *
 * Equivalent code is available from RSA Data Security, Inc.
 * This code has been tested against that, and is equivalent,
 * except that you don't need to include two pages of legalese
 * with every copy.
 *
 * To compute the message digest of a chunk of bytes, declare an
 * md5_ctx structure, pass it to md5_init, call md5_update as
 * needed on buffers full of bytes, and then call md5_final, which
 * will fill a supplied 16-byte array with the digest.
 */

#include "vkd3d_shader_private.h"

#define DXBC_CHECKSUM_BLOCK_SIZE 64

STATIC_ASSERT(sizeof(unsigned int) == 4);

struct md5_ctx
{
    unsigned int i[2];
    unsigned int buf[4];
    unsigned char in[DXBC_CHECKSUM_BLOCK_SIZE];
    unsigned char digest[16];
};

/* The four core functions - F1 is optimized somewhat */

/* #define F1(x, y, z) (x & y | ~x & z) */
#define F1(x, y, z) (z ^ (x & (y ^ z)))
#define F2(x, y, z) F1(z, x, y)
#define F3(x, y, z) (x ^ y ^ z)
#define F4(x, y, z) (y ^ (x | ~z))

/* This is the central step in the MD5 algorithm. */
#define MD5STEP(f, w, x, y, z, data, s) \
        (w += f(x, y, z) + data,  w = w << s | w >> (32 - s),  w += x)

/*
 * The core of the MD5 algorithm, this alters an existing MD5 hash to
 * reflect the addition of 16 longwords of new data. md5_update blocks
 * the data and converts bytes into longwords for this routine.
 */
static void md5_transform(unsigned int buf[4], const unsigned int in[16])
{
    unsigned int a, b, c, d;

    a = buf[0];
    b = buf[1];
    c = buf[2];
    d = buf[3];

    MD5STEP(F1, a, b, c, d, in[0] + 0xd76aa478, 7);
    MD5STEP(F1, d, a, b, c, in[1] + 0xe8c7b756, 12);
    MD5STEP(F1, c, d, a, b, in[2] + 0x242070db, 17);
    MD5STEP(F1, b, c, d, a, in[3] + 0xc1bdceee, 22);
    MD5STEP(F1, a, b, c, d, in[4] + 0xf57c0faf, 7);
    MD5STEP(F1, d, a, b, c, in[5] + 0x4787c62a, 12);
    MD5STEP(F1, c, d, a, b, in[6] + 0xa8304613, 17);
    MD5STEP(F1, b, c, d, a, in[7] + 0xfd469501, 22);
    MD5STEP(F1, a, b, c, d, in[8] + 0x698098d8, 7);
    MD5STEP(F1, d, a, b, c, in[9] + 0x8b44f7af, 12);
    MD5STEP(F1, c, d, a, b, in[10] + 0xffff5bb1, 17);
    MD5STEP(F1, b, c, d, a, in[11] + 0x895cd7be, 22);
    MD5STEP(F1, a, b, c, d, in[12] + 0x6b901122, 7);
    MD5STEP(F1, d, a, b, c, in[13] + 0xfd987193, 12);
    MD5STEP(F1, c, d, a, b, in[14] + 0xa679438e, 17);
    MD5STEP(F1, b, c, d, a, in[15] + 0x49b40821, 22);

    MD5STEP(F2, a, b, c, d, in[1] + 0xf61e2562, 5);
    MD5STEP(F2, d, a, b, c, in[6] + 0xc040b340, 9);
    MD5STEP(F2, c, d, a, b, in[11] + 0x265e5a51, 14);
    MD5STEP(F2, b, c, d, a, in[0] + 0xe9b6c7aa, 20);
    MD5STEP(F2, a, b, c, d, in[5] + 0xd62f105d, 5);
    MD5STEP(F2, d, a, b, c, in[10] + 0x02441453, 9);
    MD5STEP(F2, c, d, a, b, in[15] + 0xd8a1e681, 14);
    MD5STEP(F2, b, c, d, a, in[4] + 0xe7d3fbc8, 20);
    MD5STEP(F2, a, b, c, d, in[9] + 0x21e1cde6, 5);
    MD5STEP(F2, d, a, b, c, in[14] + 0xc33707d6, 9);
    MD5STEP(F2, c, d, a, b, in[3] + 0xf4d50d87, 14);
    MD5STEP(F2, b, c, d, a, in[8] + 0x455a14ed, 20);
    MD5STEP(F2, a, b, c, d, in[13] + 0xa9e3e905, 5);
    MD5STEP(F2, d, a, b, c, in[2] + 0xfcefa3f8, 9);
    MD5STEP(F2, c, d, a, b, in[7] + 0x676f02d9, 14);
    MD5STEP(F2, b, c, d, a, in[12] + 0x8d2a4c8a, 20);

    MD5STEP(F3, a, b, c, d, in[5] + 0xfffa3942, 4);
    MD5STEP(F3, d, a, b, c, in[8] + 0x8771f681, 11);
    MD5STEP(F3, c, d, a, b, in[11] + 0x6d9d6122, 16);
    MD5STEP(F3, b, c, d, a, in[14] + 0xfde5380c, 23);
    MD5STEP(F3, a, b, c, d, in[1] + 0xa4beea44, 4);
    MD5STEP(F3, d, a, b, c, in[4] + 0x4bdecfa9, 11);
    MD5STEP(F3, c, d, a, b, in[7] + 0xf6bb4b60, 16);
    MD5STEP(F3, b, c, d, a, in[10] + 0xbebfbc70, 23);
    MD5STEP(F3, a, b, c, d, in[13] + 0x289b7ec6, 4);
    MD5STEP(F3, d, a, b, c, in[0] + 0xeaa127fa, 11);
    MD5STEP(F3, c, d, a, b, in[3] + 0xd4ef3085, 16);
    MD5STEP(F3, b, c, d, a, in[6] + 0x04881d05, 23);
    MD5STEP(F3, a, b, c, d, in[9] + 0xd9d4d039, 4);
    MD5STEP(F3, d, a, b, c, in[12] + 0xe6db99e5, 11);
    MD5STEP(F3, c, d, a, b, in[15] + 0x1fa27cf8, 16);
    MD5STEP(F3, b, c, d, a, in[2] + 0xc4ac5665, 23);

    MD5STEP(F4, a, b, c, d, in[0] + 0xf4292244, 6);
    MD5STEP(F4, d, a, b, c, in[7] + 0x432aff97, 10);
    MD5STEP(F4, c, d, a, b, in[14] + 0xab9423a7, 15);
    MD5STEP(F4, b, c, d, a, in[5] + 0xfc93a039, 21);
    MD5STEP(F4, a, b, c, d, in[12] + 0x655b59c3, 6);
    MD5STEP(F4, d, a, b, c, in[3] + 0x8f0ccc92, 10);
    MD5STEP(F4, c, d, a, b, in[10] + 0xffeff47d, 15);
    MD5STEP(F4, b, c, d, a, in[1] + 0x85845dd1, 21);
    MD5STEP(F4, a, b, c, d, in[8] + 0x6fa87e4f, 6);
    MD5STEP(F4, d, a, b, c, in[15] + 0xfe2ce6e0, 10);
    MD5STEP(F4, c, d, a, b, in[6] + 0xa3014314, 15);
    MD5STEP(F4, b, c, d, a, in[13] + 0x4e0811a1, 21);
    MD5STEP(F4, a, b, c, d, in[4] + 0xf7537e82, 6);
    MD5STEP(F4, d, a, b, c, in[11] + 0xbd3af235, 10);
    MD5STEP(F4, c, d, a, b, in[2] + 0x2ad7d2bb, 15);
    MD5STEP(F4, b, c, d, a, in[9] + 0xeb86d391, 21);

    buf[0] += a;
    buf[1] += b;
    buf[2] += c;
    buf[3] += d;
}

/*
 * Note: this code is harmless on little-endian machines.
 */
static void byte_reverse(unsigned char *buf, unsigned longs)
{
    unsigned int t;

    do
    {
        t = ((unsigned)buf[3] << 8 | buf[2]) << 16 |
            ((unsigned)buf[1] << 8 | buf[0]);
        *(unsigned int *)buf = t;
        buf += 4;
    } while (--longs);
}

/*
 * Start MD5 accumulation. Set bit count to 0 and buffer to mysterious
 * initialization constants.
 */
static void md5_init(struct md5_ctx *ctx)
{
    ctx->buf[0] = 0x67452301;
    ctx->buf[1] = 0xefcdab89;
    ctx->buf[2] = 0x98badcfe;
    ctx->buf[3] = 0x10325476;

    ctx->i[0] = ctx->i[1] = 0;
}

/*
 * Update context to reflect the concatenation of another buffer full
 * of bytes.
 */
static void md5_update(struct md5_ctx *ctx, const unsigned char *buf, unsigned int len)
{
    unsigned int t;

    /* Update bitcount */
    t = ctx->i[0];

    if ((ctx->i[0] = t + (len << 3)) < t)
        ctx->i[1]++;        /* Carry from low to high */

    ctx->i[1] += len >> 29;
    t = (t >> 3) & 0x3f;

    /* Handle any leading odd-sized chunks */
    if (t)
    {
        unsigned char *p = (unsigned char *)ctx->in + t;
        t = DXBC_CHECKSUM_BLOCK_SIZE - t;

        if (len < t)
        {
            memcpy(p, buf, len);
            return;
        }

        memcpy(p, buf, t);
        byte_reverse(ctx->in, 16);

        md5_transform(ctx->buf, (unsigned int *)ctx->in);

        buf += t;
        len -= t;
    }

    /* Process data in 64-byte chunks */
    while (len >= DXBC_CHECKSUM_BLOCK_SIZE)
    {
        memcpy(ctx->in, buf, DXBC_CHECKSUM_BLOCK_SIZE);
        byte_reverse(ctx->in, 16);

        md5_transform(ctx->buf, (unsigned int *)ctx->in);

        buf += DXBC_CHECKSUM_BLOCK_SIZE;
        len -= DXBC_CHECKSUM_BLOCK_SIZE;
    }

    /* Handle any remaining bytes of data. */
    memcpy(ctx->in, buf, len);
}

static void dxbc_checksum_final(struct md5_ctx *ctx)
{
    unsigned int padding;
    unsigned int length;
    unsigned int count;
    unsigned char *p;

    /* Compute number of bytes mod 64 */
    count = (ctx->i[0] >> 3) & 0x3F;

    /* Set the first char of padding to 0x80.  This is safe since there is
       always at least one byte free */
    p = ctx->in + count;
    *p++ = 0x80;
    ++count;

    /* Bytes of padding needed to make 64 bytes */
    padding = DXBC_CHECKSUM_BLOCK_SIZE - count;

    /* Pad out to 56 mod 64 */
    if (padding < 8)
    {
        /* Two lots of padding:  Pad the first block to 64 bytes */
        memset(p, 0, padding);
        byte_reverse(ctx->in, 16);
        md5_transform(ctx->buf, (unsigned int *)ctx->in);

        /* Now fill the next block */
        memset(ctx->in, 0, DXBC_CHECKSUM_BLOCK_SIZE);
    }
    else
    {
        /* Make place for bitcount at the beginning of the block */
        memmove(&ctx->in[4], ctx->in, count);

        /* Pad block to 60 bytes */
        memset(p + 4, 0, padding - 4);
    }

    /* Append length in bits and transform */
    length = ctx->i[0];
    memcpy(&ctx->in[0], &length, sizeof(length));
    byte_reverse(&ctx->in[4], 14);
    length = ctx->i[0] >> 2 | 0x1;
    memcpy(&ctx->in[DXBC_CHECKSUM_BLOCK_SIZE - 4], &length, sizeof(length));

    md5_transform(ctx->buf, (unsigned int *)ctx->in);
    byte_reverse((unsigned char *)ctx->buf, 4);
    memcpy(ctx->digest, ctx->buf, 16);
}

#define DXBC_CHECKSUM_SKIP_BYTE_COUNT 20

void vkd3d_compute_dxbc_checksum(const void *dxbc, size_t size, uint32_t checksum[4])
{
    const uint8_t *ptr = dxbc;
    struct md5_ctx ctx;

    assert(size > DXBC_CHECKSUM_SKIP_BYTE_COUNT);
    ptr += DXBC_CHECKSUM_SKIP_BYTE_COUNT;
    size -= DXBC_CHECKSUM_SKIP_BYTE_COUNT;

    md5_init(&ctx);
    md5_update(&ctx, ptr, size);
    dxbc_checksum_final(&ctx);

    memcpy(checksum, ctx.digest, sizeof(ctx.digest));
}
