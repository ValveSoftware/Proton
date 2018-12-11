/*
 * Copyright (C) 2008, 2009, 2010 Free Software Foundation, Inc.
 *
 * Author: Nikos Mavrogiannopoulos
 *
 * This file is part of GnuTLS.
 *
 * The GnuTLS is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
 * USA
 *
 */

#ifndef GNUTLS_CRYPTO_H
#define GNUTLS_CRYPTO_H

#ifdef __cplusplus
extern "C"
{
#endif

  typedef struct cipher_hd_st *gnutls_cipher_hd_t;

  int gnutls_cipher_init (gnutls_cipher_hd_t * handle,
                          gnutls_cipher_algorithm_t cipher,
                          const gnutls_datum_t * key,
                          const gnutls_datum_t * iv);
  int gnutls_cipher_encrypt (const gnutls_cipher_hd_t handle,
                             void *text, size_t textlen);
  int gnutls_cipher_decrypt (const gnutls_cipher_hd_t handle,
                             void *ciphertext, size_t ciphertextlen);
  int gnutls_cipher_decrypt2 (gnutls_cipher_hd_t handle,
                              const void *ciphertext, size_t ciphertextlen,
                              void *text, size_t textlen);
  int gnutls_cipher_encrypt2 (gnutls_cipher_hd_t handle, void *text,
                              size_t textlen, void *ciphertext,
                              size_t ciphertextlen);

  void gnutls_cipher_deinit (gnutls_cipher_hd_t handle);
  int gnutls_cipher_get_block_size (gnutls_cipher_algorithm_t algorithm);


  typedef struct hash_hd_st *gnutls_hash_hd_t;
  typedef struct hmac_hd_st *gnutls_hmac_hd_t;

  int gnutls_hmac_init (gnutls_hmac_hd_t * dig,
                        gnutls_digest_algorithm_t algorithm, const void *key,
                        size_t keylen);
  int gnutls_hmac (gnutls_hmac_hd_t handle, const void *text, size_t textlen);
  void gnutls_hmac_output (gnutls_hmac_hd_t handle, void *digest);
  void gnutls_hmac_deinit (gnutls_hmac_hd_t handle, void *digest);
  int gnutls_hmac_get_len (gnutls_mac_algorithm_t algorithm);
  int gnutls_hmac_fast (gnutls_mac_algorithm_t algorithm, const void *key,
                        size_t keylen, const void *text, size_t textlen,
                        void *digest);

  int gnutls_hash_init (gnutls_hash_hd_t * dig,
                        gnutls_digest_algorithm_t algorithm);
  int gnutls_hash (gnutls_hash_hd_t handle, const void *text, size_t textlen);
  void gnutls_hash_output (gnutls_hash_hd_t handle, void *digest);
  void gnutls_hash_deinit (gnutls_hash_hd_t handle, void *digest);
  int gnutls_hash_get_len (gnutls_digest_algorithm_t algorithm);
  int gnutls_hash_fast (gnutls_digest_algorithm_t algorithm,
                        const void *text, size_t textlen, void *digest);

/* register ciphers */

#define GNUTLS_CRYPTO_API_VERSION 0x03

#define gnutls_crypto_single_cipher_st gnutls_crypto_cipher_st
#define gnutls_crypto_single_mac_st gnutls_crypto_mac_st
#define gnutls_crypto_single_digest_st gnutls_crypto_digest_st

  typedef struct
  {
    int (*init) (gnutls_cipher_algorithm_t, void **ctx);
    int (*setkey) (void *ctx, const void *key, size_t keysize);
    int (*setiv) (void *ctx, const void *iv, size_t ivsize);
    int (*encrypt) (void *ctx, const void *plain, size_t plainsize,
                    void *encr, size_t encrsize);
    int (*decrypt) (void *ctx, const void *encr, size_t encrsize,
                    void *plain, size_t plainsize);
    void (*deinit) (void *ctx);
  } gnutls_crypto_cipher_st;

  typedef struct
  {
    int (*init) (gnutls_mac_algorithm_t, void **ctx);
    int (*setkey) (void *ctx, const void *key, size_t keysize);
    int (*hash) (void *ctx, const void *text, size_t textsize);
    int (*output) (void *src_ctx, void *digest, size_t digestsize);
    void (*deinit) (void *ctx);
  } gnutls_crypto_mac_st;

  typedef struct
  {
    int (*init) (gnutls_mac_algorithm_t, void **ctx);
    int (*hash) (void *ctx, const void *text, size_t textsize);
    int (*copy) (void **dst_ctx, void *src_ctx);
    int (*output) (void *src_ctx, void *digest, size_t digestsize);
    void (*deinit) (void *ctx);
  } gnutls_crypto_digest_st;

/**
 * gnutls_rnd_level_t:
 * @GNUTLS_RND_NONCE: Non-predictable random number.  Fatal in parts
 *   of session if broken, i.e., vulnerable to statistical analysis.
 * @GNUTLS_RND_RANDOM: Pseudo-random cryptographic random number.
 *   Fatal in session if broken.
 * @GNUTLS_RND_KEY: Fatal in many sessions if broken.
 *
 * Enumeration of random quality levels.
 */
  typedef enum gnutls_rnd_level
  {
    GNUTLS_RND_NONCE = 0,
    GNUTLS_RND_RANDOM = 1,
    GNUTLS_RND_KEY = 2
  } gnutls_rnd_level_t;

  int gnutls_rnd (gnutls_rnd_level_t level, void *data, size_t len);


/**
 * gnutls_pk_flag_t:
 * @GNUTLS_PK_FLAG_NONE: No flag.
 *
 * Enumeration of public-key flag.
 */
  typedef enum
  {
    GNUTLS_PK_FLAG_NONE = 0
  } gnutls_pk_flag_t;

  typedef struct gnutls_crypto_rnd
  {
    int (*init) (void **ctx);
    int (*rnd) (void *ctx, int level, void *data, size_t datasize);
    void (*deinit) (void *ctx);
  } gnutls_crypto_rnd_st;

  typedef void *bigint_t;

/**
 * gnutls_bigint_format_t:
 * @GNUTLS_MPI_FORMAT_USG: Raw unsigned integer format.
 * @GNUTLS_MPI_FORMAT_STD: Raw signed integer format, always a leading
 *   zero when positive.
 * @GNUTLS_MPI_FORMAT_PGP: The pgp integer format.
 *
 * Enumeration of different bignum integer encoding formats.
 */
  typedef enum
  {
    /* raw unsigned integer format */
    GNUTLS_MPI_FORMAT_USG = 0,
    /* raw signed integer format - always a leading zero when positive */
    GNUTLS_MPI_FORMAT_STD = 1,
    /* the pgp integer format */
    GNUTLS_MPI_FORMAT_PGP = 2
  } gnutls_bigint_format_t;

  typedef struct
  {
    bigint_t g;                 /* group generator */
    bigint_t p;                 /* prime */
  } gnutls_group_st;

/* Multi precision integer arithmetic */
  typedef struct gnutls_crypto_bigint
  {
    bigint_t (*bigint_new) (int nbits);
    void (*bigint_release) (bigint_t n);
    /* 0 for equality, > 0 for m1>m2, < 0 for m1<m2 */
    int (*bigint_cmp) (const bigint_t m1, const bigint_t m2);
    /* as bigint_cmp */
    int (*bigint_cmp_ui) (const bigint_t m1, unsigned long m2);
    /* ret = a % b */
      bigint_t (*bigint_mod) (const bigint_t a, const bigint_t b);
    /* a = b -> ret == a */
      bigint_t (*bigint_set) (bigint_t a, const bigint_t b);
    /* a = b -> ret == a */
      bigint_t (*bigint_set_ui) (bigint_t a, unsigned long b);
    unsigned int (*bigint_get_nbits) (const bigint_t a);
    /* w = b ^ e mod m */
      bigint_t (*bigint_powm) (bigint_t w, const bigint_t b,
                               const bigint_t e, const bigint_t m);
    /* w = a + b mod m */
      bigint_t (*bigint_addm) (bigint_t w, const bigint_t a,
                               const bigint_t b, const bigint_t m);
    /* w = a - b mod m */
      bigint_t (*bigint_subm) (bigint_t w, const bigint_t a, const bigint_t b,
                               const bigint_t m);
    /* w = a * b mod m */
      bigint_t (*bigint_mulm) (bigint_t w, const bigint_t a, const bigint_t b,
                               const bigint_t m);
    /* w = a + b */ bigint_t (*bigint_add) (bigint_t w, const bigint_t a,
                                            const bigint_t b);
    /* w = a - b */ bigint_t (*bigint_sub) (bigint_t w, const bigint_t a,
                                            const bigint_t b);
    /* w = a * b */
      bigint_t (*bigint_mul) (bigint_t w, const bigint_t a, const bigint_t b);
    /* w = a + b */
      bigint_t (*bigint_add_ui) (bigint_t w, const bigint_t a,
                                 unsigned long b);
    /* w = a - b */
      bigint_t (*bigint_sub_ui) (bigint_t w, const bigint_t a,
                                 unsigned long b);
    /* w = a * b */
      bigint_t (*bigint_mul_ui) (bigint_t w, const bigint_t a,
                                 unsigned long b);
    /* q = a / b */
      bigint_t (*bigint_div) (bigint_t q, const bigint_t a, const bigint_t b);
    /* 0 if prime */
    int (*bigint_prime_check) (const bigint_t pp);
    int (*bigint_generate_group) (gnutls_group_st * gg, unsigned int bits);

    /* reads an bigint from a buffer */
    /* stores an bigint into the buffer.  returns
     * GNUTLS_E_SHORT_MEMORY_BUFFER if buf_size is not sufficient to
     * store this integer, and updates the buf_size;
     */
      bigint_t (*bigint_scan) (const void *buf, size_t buf_size,
                               gnutls_bigint_format_t format);
    int (*bigint_print) (const bigint_t a, void *buf, size_t * buf_size,
                         gnutls_bigint_format_t format);
  } gnutls_crypto_bigint_st;

#define GNUTLS_MAX_PK_PARAMS 16

  typedef struct
  {
    bigint_t params[GNUTLS_MAX_PK_PARAMS];
    unsigned int params_nr;     /* the number of parameters */
    unsigned int flags;
  } gnutls_pk_params_st;

  void gnutls_pk_params_release (gnutls_pk_params_st * p);
  void gnutls_pk_params_init (gnutls_pk_params_st * p);

/* params are:
 * RSA:
 *  [0] is modulus
 *  [1] is public exponent
 *  [2] is private exponent (private key only)
 *  [3] is prime1 (p) (private key only)
 *  [4] is prime2 (q) (private key only)
 *  [5] is coefficient (u == inverse of p mod q) (private key only)
 *  [6] e1 == d mod (p-1)
 *  [7] e2 == d mod (q-1)
 *
 *  note that for libgcrypt that does not use the inverse of q mod p,
 *  we need to perform conversions using fixup_params().
 *
 * DSA:
 *  [0] is p
 *  [1] is q
 *  [2] is g
 *  [3] is y (public key)
 *  [4] is x (private key only)
 */

/**
 * gnutls_direction_t:
 * @GNUTLS_IMPORT: Import direction.
 * @GNUTLS_EXPORT: Export direction.
 *
 * Enumeration of different directions.
 */
  typedef enum
  {
    GNUTLS_IMPORT = 0,
    GNUTLS_EXPORT = 1
  } gnutls_direction_t;

/* Public key algorithms */
  typedef struct gnutls_crypto_pk
  {
    /* The params structure should contain the private or public key
     * parameters, depending on the operation */
    int (*encrypt) (gnutls_pk_algorithm_t, gnutls_datum_t * ciphertext,
                    const gnutls_datum_t * plaintext,
                    const gnutls_pk_params_st * pub);
    int (*decrypt) (gnutls_pk_algorithm_t, gnutls_datum_t * plaintext,
                    const gnutls_datum_t * ciphertext,
                    const gnutls_pk_params_st * priv);

    int (*sign) (gnutls_pk_algorithm_t, gnutls_datum_t * signature,
                 const gnutls_datum_t * data,
                 const gnutls_pk_params_st * priv);
    int (*verify) (gnutls_pk_algorithm_t, const gnutls_datum_t * data,
                   const gnutls_datum_t * signature,
                   const gnutls_pk_params_st * pub);

    int (*generate) (gnutls_pk_algorithm_t, unsigned int nbits,
                     gnutls_pk_params_st *);
    /* this function should convert params to ones suitable
     * for the above functions
     */
    int (*pk_fixup_private_params) (gnutls_pk_algorithm_t, gnutls_direction_t,
                                    gnutls_pk_params_st *);

  } gnutls_crypto_pk_st;

/* priority: infinity for backend algorithms, 90 for kernel
   algorithms, lowest wins
 */
#define gnutls_crypto_single_cipher_register(algo, prio, st)		\
  gnutls_crypto_single_cipher_register2 (algo, prio, \
					 GNUTLS_CRYPTO_API_VERSION, st)
#define gnutls_crypto_single_mac_register(algo, prio, st)		\
  gnutls_crypto_single_mac_register2 (algo, prio, \
				      GNUTLS_CRYPTO_API_VERSION, st)
#define gnutls_crypto_single_digest_register(algo, prio, st)		\
  gnutls_crypto_single_digest_register2(algo, prio,			\
					GNUTLS_CRYPTO_API_VERSION, st)

  int gnutls_crypto_single_cipher_register2 (gnutls_cipher_algorithm_t
                                             algorithm, int priority,
                                             int version,
                                             const
                                             gnutls_crypto_single_cipher_st *
                                             s);
  int gnutls_crypto_single_mac_register2 (gnutls_mac_algorithm_t algorithm,
                                          int priority, int version,
                                          const gnutls_crypto_single_mac_st *
                                          s);
  int gnutls_crypto_single_digest_register2 (gnutls_digest_algorithm_t
                                             algorithm, int priority,
                                             int version,
                                             const
                                             gnutls_crypto_single_digest_st *
                                             s);

#define gnutls_crypto_cipher_register(prio, st)			\
  gnutls_crypto_cipher_register2 (prio, GNUTLS_CRYPTO_API_VERSION, st)
#define gnutls_crypto_mac_register(prio, st)				\
  gnutls_crypto_mac_register2 (prio, GNUTLS_CRYPTO_API_VERSION, st)
#define gnutls_crypto_digest_register(prio, st)			\
  gnutls_crypto_digest_register2 (prio, GNUTLS_CRYPTO_API_VERSION, st)

  int gnutls_crypto_cipher_register2 (int priority, int version,
                                      const gnutls_crypto_cipher_st * s);
  int gnutls_crypto_mac_register2 (int priority, int version,
                                   const gnutls_crypto_mac_st * s);
  int gnutls_crypto_digest_register2 (int priority, int version,
                                      const gnutls_crypto_digest_st * s);

#define gnutls_crypto_rnd_register(prio, st)				\
  gnutls_crypto_rnd_register2 (prio, GNUTLS_CRYPTO_API_VERSION, st)
#define gnutls_crypto_pk_register(prio, st)				\
  gnutls_crypto_pk_register2 (prio, GNUTLS_CRYPTO_API_VERSION, st)
#define gnutls_crypto_bigint_register(prio, st)			\
  gnutls_crypto_bigint_register2 (prio, GNUTLS_CRYPTO_API_VERSION, st)

  int gnutls_crypto_rnd_register2 (int priority, int version,
                                   const gnutls_crypto_rnd_st * s);
  int gnutls_crypto_pk_register2 (int priority, int version,
                                  const gnutls_crypto_pk_st * s);
  int gnutls_crypto_bigint_register2 (int priority, int version,
                                      const gnutls_crypto_bigint_st * s);

#ifdef __cplusplus
}
#endif

#endif
