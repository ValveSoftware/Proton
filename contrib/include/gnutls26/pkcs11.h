#ifndef __GNUTLS_PKCS11_H
#define __GNUTLS_PKCS11_H


#include <stdarg.h>
#include <gnutls26/gnutls.h>
#include <gnutls26/x509.h>

#define GNUTLS_PKCS11_MAX_PIN_LEN 32

/* Token callback function. The callback will be used to
 * ask the user to re-enter the token with given null terminated
 * label. Callback should return zero if token has been inserted
 * by user and a negative error code otherwise. It might be called
 * multiple times if the token is not detected and the retry counter
 * will be increased.
 */
typedef int (*gnutls_pkcs11_token_callback_t) (void *const global_data,
                                               const char *const label,
                                               const unsigned retry);

/**
 * gnutls_pkcs11_pin_flag_t:
 * @GNUTLS_PKCS11_PIN_USER: The PIN for the user.
 * @GNUTLS_PKCS11_PIN_SO: The PIN for the security officer.
 * @GNUTLS_PKCS11_PIN_CONTEXT_SPECIFIC: The PIN is for a specific action and key like signing.
 * @GNUTLS_PKCS11_PIN_FINAL_TRY: This is the final try before blocking.
 * @GNUTLS_PKCS11_PIN_COUNT_LOW: Few tries remain before token blocks.
 * @GNUTLS_PKCS11_PIN_WRONG: Last given PIN was not correct.
 *
 * Enumeration of different PIN flags.
 */
typedef enum
  {
    GNUTLS_PKCS11_PIN_USER = (1 << 0),
    GNUTLS_PKCS11_PIN_SO = (1 << 1),
    GNUTLS_PKCS11_PIN_FINAL_TRY = (1 << 2),
    GNUTLS_PKCS11_PIN_COUNT_LOW = (1 << 3),
    GNUTLS_PKCS11_PIN_CONTEXT_SPECIFIC = (1 << 4),
    GNUTLS_PKCS11_PIN_WRONG = (1 << 5),
  } gnutls_pkcs11_pin_flag_t;

/**
 * gnutls_pkcs11_pin_callback_t:
 * @userdata: user-controlled data from gnutls_pkcs11_set_pin_function().
 * @attempt: pin-attempt counter, initially 0.
 * @token_url: PKCS11 URL.
 * @token_label: label of PKCS11 token.
 * @flags: a #gnutls_pkcs11_pin_flag_t flag.
 * @pin: buffer to hold PIN, of size @pin_max.
 * @pin_max: size of @pin buffer.
 *
 * Callback function type for PKCS#11 PIN entry.  It is set by
 * gnutls_pkcs11_set_pin_function().
 *
 * The callback should provides the PIN code to unlock the token with
 * label @token_label, specified by the URL @token_url.
 *
 * The PIN code, as a NUL-terminated ASCII string, should be copied
 * into the @pin buffer (of maximum size @pin_max), and return 0 to
 * indicate success.  Alternatively, the callback may return a
 * negative gnutls error code to indicate failure and cancel PIN entry
 * (in which case, the contents of the @pin parameter are ignored).
 *
 * When a PIN is required, the callback will be invoked repeatedly
 * (and indefinitely) until either the returned PIN code is correct,
 * the callback returns failure, or the token refuses login (e.g. when
 * the token is locked due to too many incorrect PINs!).  For the
 * first such invocation, the @attempt counter will have value zero;
 * it will increase by one for each subsequent attempt.
 *
 * Returns: %GNUTLS_E_SUCCESS (0) on success or a negative error code on error.
 *
 * Since: 2.12.0
 **/
typedef int (*gnutls_pkcs11_pin_callback_t) (void *userdata, int attempt,
                                             const char *token_url,
                                             const char *token_label,
                                             unsigned int flags
                                             /*gnutls_pkcs11_pin_flag_t */ ,
                                             char *pin, size_t pin_max);

struct gnutls_pkcs11_obj_st;
typedef struct gnutls_pkcs11_obj_st *gnutls_pkcs11_obj_t;


#define GNUTLS_PKCS11_FLAG_MANUAL 0     /* Manual loading of libraries */
#define GNUTLS_PKCS11_FLAG_AUTO 1       /* Automatically load libraries by reading /etc/gnutls/pkcs11.conf */

/* pkcs11.conf format:
 * load = /lib/xxx-pkcs11.so
 * load = /lib/yyy-pkcs11.so
 */

int gnutls_pkcs11_init (unsigned int flags, const char *deprecated_config_file);
void gnutls_pkcs11_deinit (void);
void gnutls_pkcs11_set_token_function (gnutls_pkcs11_token_callback_t fn,
                                       void *userdata);

void gnutls_pkcs11_set_pin_function (gnutls_pkcs11_pin_callback_t fn,
                                     void *userdata);
int gnutls_pkcs11_add_provider (const char *name, const char *params);
int gnutls_pkcs11_obj_init (gnutls_pkcs11_obj_t * obj);

#define GNUTLS_PKCS11_OBJ_FLAG_LOGIN (1<<0)     /* force login in the token for the operation */
#define GNUTLS_PKCS11_OBJ_FLAG_MARK_TRUSTED (1<<1)      /* object marked as trusted */
#define GNUTLS_PKCS11_OBJ_FLAG_MARK_SENSITIVE (1<<2)    /* object marked as sensitive (unexportable) */
#define GNUTLS_PKCS11_OBJ_FLAG_LOGIN_SO (1<<3)     /* force login as a security officer in the token for the operation */

  /**
   * gnutls_pkcs11_url_type_t:
   * @GNUTLS_PKCS11_URL_GENERIC: A generic-purpose URL.
   * @GNUTLS_PKCS11_URL_LIB: A URL that specifies the library used as well.
   * @GNUTLS_PKCS11_URL_LIB_VERSION: A URL that specifies the library and its version.
   *
   * Enumeration of different URL extraction flags.
   */
typedef enum
{
  GNUTLS_PKCS11_URL_GENERIC,    /* URL specifies the object on token level */
  GNUTLS_PKCS11_URL_LIB,        /* URL specifies the object on module level */
  GNUTLS_PKCS11_URL_LIB_VERSION /* URL specifies the object on module and version level */
} gnutls_pkcs11_url_type_t;

int gnutls_pkcs11_obj_import_url (gnutls_pkcs11_obj_t, const char *url,
                                  unsigned int flags
                                  /* GNUTLS_PKCS11_OBJ_FLAG_* */ );
int gnutls_pkcs11_obj_export_url (gnutls_pkcs11_obj_t obj,
                                  gnutls_pkcs11_url_type_t detailed,
                                  char **url);
void gnutls_pkcs11_obj_deinit (gnutls_pkcs11_obj_t obj);

int gnutls_pkcs11_obj_export (gnutls_pkcs11_obj_t obj,
                              void *output_data, size_t * output_data_size);


int gnutls_pkcs11_copy_x509_crt (const char *token_url, gnutls_x509_crt_t crt,
                                 const char *label, unsigned int flags
                                 /* GNUTLS_PKCS11_OBJ_FLAG_* */ );
int gnutls_pkcs11_copy_x509_privkey (const char *token_url, gnutls_x509_privkey_t key, 
  const char *label, unsigned int key_usage /*GNUTLS_KEY_* */, unsigned int flags
                                     /* GNUTLS_PKCS11_OBJ_FLAG_* */ );
int gnutls_pkcs11_delete_url (const char *object_url, unsigned int flags
                              /* GNUTLS_PKCS11_OBJ_FLAG_* */ );

int gnutls_pkcs11_copy_secret_key (const char *token_url,
                                   gnutls_datum_t * key, const char *label,
                                   unsigned int key_usage /* GNUTLS_KEY_* */ ,
                                   unsigned int flags
                                   /* GNUTLS_PKCS11_OBJ_FLAG_* */ );

  /**
   * gnutls_pkcs11_obj_info_t:
   * @GNUTLS_PKCS11_OBJ_ID_HEX: The object ID in hex.
   * @GNUTLS_PKCS11_OBJ_LABEL: The object label.
   * @GNUTLS_PKCS11_OBJ_TOKEN_LABEL: The token's label.
   * @GNUTLS_PKCS11_OBJ_TOKEN_SERIAL: The token's serial number.
   * @GNUTLS_PKCS11_OBJ_TOKEN_MANUFACTURER: The token's manufacturer.
   * @GNUTLS_PKCS11_OBJ_TOKEN_MODEL: The token's model.
   * @GNUTLS_PKCS11_OBJ_ID: The object ID.
   * @GNUTLS_PKCS11_OBJ_LIBRARY_VERSION: The library's used to access the object version.
   * @GNUTLS_PKCS11_OBJ_LIBRARY_DESCRIPTION: The library's used to access the object description (name).
   * @GNUTLS_PKCS11_OBJ_LIBRARY_MANUFACTURER: The library's used to access the object manufacturer name.
   *
   * Enumeration of several object information types.
   */
typedef enum
{
  GNUTLS_PKCS11_OBJ_ID_HEX = 1,
  GNUTLS_PKCS11_OBJ_LABEL,
  GNUTLS_PKCS11_OBJ_TOKEN_LABEL,
  GNUTLS_PKCS11_OBJ_TOKEN_SERIAL,
  GNUTLS_PKCS11_OBJ_TOKEN_MANUFACTURER,
  GNUTLS_PKCS11_OBJ_TOKEN_MODEL,
  GNUTLS_PKCS11_OBJ_ID,
  /* the pkcs11 provider library info  */
  GNUTLS_PKCS11_OBJ_LIBRARY_VERSION,
  GNUTLS_PKCS11_OBJ_LIBRARY_DESCRIPTION,
  GNUTLS_PKCS11_OBJ_LIBRARY_MANUFACTURER
} gnutls_pkcs11_obj_info_t;

int gnutls_pkcs11_obj_get_info (gnutls_pkcs11_obj_t crt,
                                gnutls_pkcs11_obj_info_t itype, void *output,
                                size_t * output_size);

  /**
   * gnutls_pkcs11_obj_attr_t:
   * @GNUTLS_PKCS11_OBJ_ATTR_CRT_ALL: Specify all certificates.
   * @GNUTLS_PKCS11_OBJ_ATTR_CRT_TRUSTED: Specify all certificates marked as trusted.
   * @GNUTLS_PKCS11_OBJ_ATTR_CRT_WITH_PRIVKEY: Specify all certificates with a corresponding private key.
   * @GNUTLS_PKCS11_OBJ_ATTR_PUBKEY: Specify all public keys.
   * @GNUTLS_PKCS11_OBJ_ATTR_PRIVKEY: Specify all private keys.
   * @GNUTLS_PKCS11_OBJ_ATTR_ALL: Specify all objects.
   *
   * Enumeration of several attributes for object enumeration.
   */
typedef enum
{
  GNUTLS_PKCS11_OBJ_ATTR_CRT_ALL = 1,   /* all certificates */
  GNUTLS_PKCS11_OBJ_ATTR_CRT_TRUSTED,   /* certificates marked as trusted */
  GNUTLS_PKCS11_OBJ_ATTR_CRT_WITH_PRIVKEY,      /* certificates with corresponding private key */
  GNUTLS_PKCS11_OBJ_ATTR_PUBKEY,        /* public keys */
  GNUTLS_PKCS11_OBJ_ATTR_PRIVKEY,       /* private keys */
  GNUTLS_PKCS11_OBJ_ATTR_ALL    /* everything! */
} gnutls_pkcs11_obj_attr_t;

  /**
   * gnutls_pkcs11_token_info_t:
   * @GNUTLS_PKCS11_TOKEN_LABEL: The token's label
   * @GNUTLS_PKCS11_TOKEN_SERIAL: The token's serial number
   * @GNUTLS_PKCS11_TOKEN_MANUFACTURER: The token's manufacturer
   * @GNUTLS_PKCS11_TOKEN_MODEL: The token's model
   *
   * Enumeration of types for retrieving token information.
   */
typedef enum
{
  GNUTLS_PKCS11_TOKEN_LABEL,
  GNUTLS_PKCS11_TOKEN_SERIAL,
  GNUTLS_PKCS11_TOKEN_MANUFACTURER,
  GNUTLS_PKCS11_TOKEN_MODEL
} gnutls_pkcs11_token_info_t;

  /**
   * gnutls_pkcs11_obj_type_t:
   * @GNUTLS_PKCS11_OBJ_UNKNOWN: Unknown PKCS11 object.
   * @GNUTLS_PKCS11_OBJ_X509_CRT: X.509 certificate.
   * @GNUTLS_PKCS11_OBJ_PUBKEY: Public key.
   * @GNUTLS_PKCS11_OBJ_PRIVKEY: Private key.
   * @GNUTLS_PKCS11_OBJ_SECRET_KEY: Secret key.
   * @GNUTLS_PKCS11_OBJ_DATA: Data object.
   *
   * Enumeration of object types.
   */
typedef enum
{
  GNUTLS_PKCS11_OBJ_UNKNOWN,
  GNUTLS_PKCS11_OBJ_X509_CRT,
  GNUTLS_PKCS11_OBJ_PUBKEY,
  GNUTLS_PKCS11_OBJ_PRIVKEY,
  GNUTLS_PKCS11_OBJ_SECRET_KEY,
  GNUTLS_PKCS11_OBJ_DATA
} gnutls_pkcs11_obj_type_t;

int
gnutls_pkcs11_token_init (const char *token_url,
                          const char *so_pin, const char *label);

int
gnutls_pkcs11_token_get_mechanism (const char *url, int idx,
                                   unsigned long *mechanism);

int gnutls_pkcs11_token_set_pin (const char *token_url, const char *oldpin, const char *newpin, unsigned int flags      /*gnutls_pkcs11_pin_flag_t */
  );

int gnutls_pkcs11_token_get_url (unsigned int seq,
                                 gnutls_pkcs11_url_type_t detailed,
                                 char **url);
int gnutls_pkcs11_token_get_info (const char *url, gnutls_pkcs11_token_info_t ttype,
                                  void *output, size_t * output_size);

#define GNUTLS_PKCS11_TOKEN_HW 1
int gnutls_pkcs11_token_get_flags (const char *url, unsigned int *flags);

int gnutls_pkcs11_obj_list_import_url (gnutls_pkcs11_obj_t * p_list,
                                       unsigned int *const n_list,
                                       const char *url,
                                       gnutls_pkcs11_obj_attr_t attrs,
                                       unsigned int flags
                                       /* GNUTLS_PKCS11_OBJ_FLAG_* */ );

int gnutls_x509_crt_import_pkcs11 (gnutls_x509_crt_t crt,
                                   gnutls_pkcs11_obj_t pkcs11_crt);
int gnutls_x509_crt_import_pkcs11_url (gnutls_x509_crt_t crt, const char *url,
                                       unsigned int flags
                                       /* GNUTLS_PKCS11_OBJ_FLAG_* */ );

gnutls_pkcs11_obj_type_t gnutls_pkcs11_obj_get_type (gnutls_pkcs11_obj_t
                                                     certificate);
const char *gnutls_pkcs11_type_get_name (gnutls_pkcs11_obj_type_t);

int gnutls_x509_crt_list_import_pkcs11 (gnutls_x509_crt_t * certs, unsigned int cert_max, 
  gnutls_pkcs11_obj_t * const objs, unsigned int flags  /* must be zero */);


/* private key functions...*/
int gnutls_pkcs11_privkey_init (gnutls_pkcs11_privkey_t * key);
void gnutls_pkcs11_privkey_deinit (gnutls_pkcs11_privkey_t key);
int gnutls_pkcs11_privkey_get_pk_algorithm (gnutls_pkcs11_privkey_t key,
                                            unsigned int *bits);
int gnutls_pkcs11_privkey_get_info (gnutls_pkcs11_privkey_t pkey,
                                    gnutls_pkcs11_obj_info_t itype,
                                    void *output, size_t * output_size);

int gnutls_pkcs11_privkey_import_url (gnutls_pkcs11_privkey_t pkey,
                                      const char *url, unsigned int flags);

int gnutls_pkcs11_privkey_export_url (gnutls_pkcs11_privkey_t key,
                                      gnutls_pkcs11_url_type_t detailed,
                                      char **url);

/** @} */

#endif
