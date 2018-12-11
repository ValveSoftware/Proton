#ifndef __GNUTLS_ABSTRACT_H
#define __GNUTLS_ABSTRACT_H

#include <stdarg.h>
#include <gnutls26/gnutls.h>
#include <gnutls26/x509.h>
#include <gnutls26/pkcs11.h>
#include <gnutls26/openpgp.h>

/* Public key operations */

struct gnutls_pubkey_st;
typedef struct gnutls_pubkey_st *gnutls_pubkey_t;

struct gnutls_privkey_st;
typedef struct gnutls_privkey_st *gnutls_privkey_t;

int gnutls_pubkey_init (gnutls_pubkey_t * key);
void gnutls_pubkey_deinit (gnutls_pubkey_t key);
int gnutls_pubkey_get_pk_algorithm (gnutls_pubkey_t key, unsigned int *bits);

int gnutls_pubkey_import_x509 (gnutls_pubkey_t key, gnutls_x509_crt_t crt,
                               unsigned int flags);
int gnutls_pubkey_import_pkcs11 (gnutls_pubkey_t pkey,
                                 gnutls_pkcs11_obj_t crt, unsigned int flags);
int gnutls_pubkey_import_openpgp (gnutls_pubkey_t pkey,
                                  gnutls_openpgp_crt_t crt,
                                  unsigned int flags);
int
gnutls_pubkey_import_privkey (gnutls_pubkey_t key, gnutls_privkey_t pkey,
                              unsigned int usage, unsigned int flags);


int gnutls_pubkey_get_preferred_hash_algorithm (gnutls_pubkey_t key,
                                                gnutls_digest_algorithm_t *
                                                hash, unsigned int *mand);

int gnutls_pubkey_get_pk_rsa_raw (gnutls_pubkey_t key,
                                  gnutls_datum_t * m, gnutls_datum_t * e);
int gnutls_pubkey_get_pk_dsa_raw (gnutls_pubkey_t key,
                                  gnutls_datum_t * p, gnutls_datum_t * q,
                                  gnutls_datum_t * g, gnutls_datum_t * y);

int gnutls_pubkey_export (gnutls_pubkey_t key,
                          gnutls_x509_crt_fmt_t format,
                          void *output_data, size_t * output_data_size);

int gnutls_pubkey_get_key_id (gnutls_pubkey_t key, unsigned int flags,
                              unsigned char *output_data,
                              size_t * output_data_size);

int gnutls_pubkey_get_key_usage (gnutls_pubkey_t key, unsigned int *usage);
int gnutls_pubkey_set_key_usage (gnutls_pubkey_t key, unsigned int usage);

int gnutls_pubkey_import (gnutls_pubkey_t key,
                          const gnutls_datum_t * data,
                          gnutls_x509_crt_fmt_t format);


int gnutls_pubkey_import_pkcs11_url (gnutls_pubkey_t key, const char *url,
                                     unsigned int flags
                                     /* GNUTLS_PKCS11_OBJ_FLAG_* */ );
int gnutls_pubkey_import_dsa_raw (gnutls_pubkey_t key,
                                  const gnutls_datum_t * p,
                                  const gnutls_datum_t * q,
                                  const gnutls_datum_t * g,
                                  const gnutls_datum_t * y);
int gnutls_pubkey_import_rsa_raw (gnutls_pubkey_t key,
                                  const gnutls_datum_t * m,
                                  const gnutls_datum_t * e);

int gnutls_x509_crt_set_pubkey (gnutls_x509_crt_t crt, gnutls_pubkey_t key);

int gnutls_x509_crq_set_pubkey (gnutls_x509_crq_t crq, gnutls_pubkey_t key);

int
gnutls_pubkey_verify_hash (gnutls_pubkey_t key, unsigned int flags,
                           const gnutls_datum_t * hash,
                           const gnutls_datum_t * signature);
int
gnutls_pubkey_get_verify_algorithm (gnutls_pubkey_t key,
                                    const gnutls_datum_t * signature,
                                    gnutls_digest_algorithm_t * hash);

int gnutls_pubkey_verify_data (gnutls_pubkey_t pubkey,
                                   unsigned int flags,
                                   const gnutls_datum_t * data,
                                   const gnutls_datum_t * signature);

/* Private key operations */

int gnutls_privkey_init (gnutls_privkey_t * key);
void gnutls_privkey_deinit (gnutls_privkey_t key);
int gnutls_privkey_get_pk_algorithm (gnutls_privkey_t key,
                                     unsigned int *bits);

int
gnutls_privkey_get_preferred_hash_algorithm (gnutls_privkey_t key,
                                            gnutls_digest_algorithm_t *
                                            hash, unsigned int *mand);
gnutls_privkey_type_t gnutls_privkey_get_type (gnutls_privkey_t key);


#define GNUTLS_PRIVKEY_IMPORT_AUTO_RELEASE (1<<0)
#define GNUTLS_PRIVKEY_IMPORT_COPY (1<<1)
int gnutls_privkey_import_pkcs11 (gnutls_privkey_t pkey,
                                  gnutls_pkcs11_privkey_t key,
                                  unsigned int flags);
int gnutls_privkey_import_x509 (gnutls_privkey_t pkey,
                                gnutls_x509_privkey_t key,
                                unsigned int flags);
int gnutls_privkey_import_openpgp (gnutls_privkey_t pkey,
                                   gnutls_openpgp_privkey_t key,
                                   unsigned int flags);

int gnutls_privkey_sign_data (gnutls_privkey_t signer,
                              gnutls_digest_algorithm_t hash,
                              unsigned int flags,
                              const gnutls_datum_t * data,
                              gnutls_datum_t * signature);

int gnutls_privkey_sign_hash (gnutls_privkey_t signer,
			      gnutls_digest_algorithm_t hash_algo,
			      unsigned int flags,
			      const gnutls_datum_t * hash_data,
			      gnutls_datum_t * signature);

int gnutls_privkey_decrypt_data (gnutls_privkey_t key,
                                 unsigned int flags,
                                 const gnutls_datum_t * ciphertext,
                                 gnutls_datum_t * plaintext);

int gnutls_x509_crt_privkey_sign (gnutls_x509_crt_t crt,
                                  gnutls_x509_crt_t issuer,
                                  gnutls_privkey_t issuer_key,
                                  gnutls_digest_algorithm_t dig,
                                  unsigned int flags);

int gnutls_x509_crl_privkey_sign (gnutls_x509_crl_t crl,
                                  gnutls_x509_crt_t issuer,
                                  gnutls_privkey_t issuer_key,
                                  gnutls_digest_algorithm_t dig,
                                  unsigned int flags);

int gnutls_x509_crq_privkey_sign (gnutls_x509_crq_t crq,
                                  gnutls_privkey_t key,
                                  gnutls_digest_algorithm_t dig,
                                  unsigned int flags);

#endif
