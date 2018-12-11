/* -*- c -*-
 * Copyright (C) 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008,
 * 2009, 2010 Free Software Foundation, Inc.
 *
 * Author: Nikos Mavroyanopoulos
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
 * USA
 *
 */

/* This file contains the types and prototypes for all the
 * high level functionality of gnutls main library. For the
 * extra functionality (which is under the GNU GPL license) check
 * the gnutls/extra.h header. The openssl compatibility layer is
 * in gnutls/openssl.h.
 *
 * The low level cipher functionality is in libgcrypt. Check
 * gcrypt.h
 */


#ifndef GNUTLS_H
#define GNUTLS_H

/* Get size_t. */
#include <stddef.h>
/* Get ssize_t. */
#ifndef HAVE_SSIZE_T
#define HAVE_SSIZE_T
/* *INDENT-OFF* */
#include <sys/types.h>
/* *INDENT-ON* */
#endif
/* Get time_t. */
#include <time.h>
#ifdef __cplusplus
extern "C"
{
#endif

#define GNUTLS_VERSION "2.12.14"

#define GNUTLS_VERSION_MAJOR 2
#define GNUTLS_VERSION_MINOR 12
#define GNUTLS_VERSION_PATCH 14

#define GNUTLS_VERSION_NUMBER 0x020c0e

#define GNUTLS_CIPHER_RIJNDAEL_128_CBC GNUTLS_CIPHER_AES_128_CBC
#define GNUTLS_CIPHER_RIJNDAEL_256_CBC GNUTLS_CIPHER_AES_256_CBC
#define GNUTLS_CIPHER_RIJNDAEL_CBC GNUTLS_CIPHER_AES_128_CBC
#define GNUTLS_CIPHER_ARCFOUR GNUTLS_CIPHER_ARCFOUR_128

  /**
   * gnutls_cipher_algorithm_t:
   * @GNUTLS_CIPHER_UNKNOWN: Unknown algorithm.
   * @GNUTLS_CIPHER_NULL: NULL algorithm.
   * @GNUTLS_CIPHER_ARCFOUR_128: ARCFOUR stream cipher with 128-bit keys.
   * @GNUTLS_CIPHER_3DES_CBC: 3DES in CBC mode.
   * @GNUTLS_CIPHER_AES_128_CBC: AES in CBC mode with 128-bit keys.
   * @GNUTLS_CIPHER_AES_256_CBC: AES in CBC mode with 256-bit keys.
   * @GNUTLS_CIPHER_ARCFOUR_40: ARCFOUR stream cipher with 40-bit keys.
   * @GNUTLS_CIPHER_CAMELLIA_128_CBC: Camellia in CBC mode with 128-bit keys.
   * @GNUTLS_CIPHER_CAMELLIA_256_CBC: Camellia in CBC mode with 256-bit keys.
   * @GNUTLS_CIPHER_RC2_40_CBC: RC2 in CBC mode with 40-bit keys.
   * @GNUTLS_CIPHER_DES_CBC: DES in CBC mode (56-bit keys).
   * @GNUTLS_CIPHER_AES_192_CBC: AES in CBC mode with 192-bit keys.
   * @GNUTLS_CIPHER_IDEA_PGP_CFB: IDEA in CFB mode.
   * @GNUTLS_CIPHER_3DES_PGP_CFB: 3DES in CFB mode.
   * @GNUTLS_CIPHER_CAST5_PGP_CFB: CAST5 in CFB mode.
   * @GNUTLS_CIPHER_BLOWFISH_PGP_CFB: Blowfish in CFB mode.
   * @GNUTLS_CIPHER_SAFER_SK128_PGP_CFB: Safer-SK in CFB mode with 128-bit keys.
   * @GNUTLS_CIPHER_AES128_PGP_CFB: AES in CFB mode with 128-bit keys.
   * @GNUTLS_CIPHER_AES192_PGP_CFB: AES in CFB mode with 192-bit keys.
   * @GNUTLS_CIPHER_AES256_PGP_CFB: AES in CFB mode with 256-bit keys.
   * @GNUTLS_CIPHER_TWOFISH_PGP_CFB: Twofish in CFB mode.
   *
   * Enumeration of different symmetric encryption algorithms.
   */
  typedef enum gnutls_cipher_algorithm
  {
    GNUTLS_CIPHER_UNKNOWN = 0,
    GNUTLS_CIPHER_NULL = 1,
    GNUTLS_CIPHER_ARCFOUR_128 = 2,
    GNUTLS_CIPHER_3DES_CBC = 3,
    GNUTLS_CIPHER_AES_128_CBC = 4,
    GNUTLS_CIPHER_AES_256_CBC = 5,
    GNUTLS_CIPHER_ARCFOUR_40 = 6,
    GNUTLS_CIPHER_CAMELLIA_128_CBC = 7,
    GNUTLS_CIPHER_CAMELLIA_256_CBC = 8,
    GNUTLS_CIPHER_RC2_40_CBC = 90,
    GNUTLS_CIPHER_DES_CBC = 91,
    GNUTLS_CIPHER_AES_192_CBC = 92,

    /* used only for PGP internals. Ignored in TLS/SSL
     */
    GNUTLS_CIPHER_IDEA_PGP_CFB = 200,
    GNUTLS_CIPHER_3DES_PGP_CFB = 201,
    GNUTLS_CIPHER_CAST5_PGP_CFB = 202,
    GNUTLS_CIPHER_BLOWFISH_PGP_CFB = 203,
    GNUTLS_CIPHER_SAFER_SK128_PGP_CFB = 204,
    GNUTLS_CIPHER_AES128_PGP_CFB = 205,
    GNUTLS_CIPHER_AES192_PGP_CFB = 206,
    GNUTLS_CIPHER_AES256_PGP_CFB = 207,
    GNUTLS_CIPHER_TWOFISH_PGP_CFB = 208
  } gnutls_cipher_algorithm_t;

  /**
   * gnutls_kx_algorithm_t:
   * @GNUTLS_KX_UNKNOWN: Unknown key-exchange algorithm.
   * @GNUTLS_KX_RSA: RSA key-exchange algorithm.
   * @GNUTLS_KX_DHE_DSS: DHE-DSS key-exchange algorithm.
   * @GNUTLS_KX_DHE_RSA: DHE-RSA key-exchange algorithm.
   * @GNUTLS_KX_ANON_DH: Anon-DH key-exchange algorithm.
   * @GNUTLS_KX_SRP: SRP key-exchange algorithm.
   * @GNUTLS_KX_RSA_EXPORT: RSA-EXPORT key-exchange algorithm.
   * @GNUTLS_KX_SRP_RSA: SRP-RSA key-exchange algorithm.
   * @GNUTLS_KX_SRP_DSS: SRP-DSS key-exchange algorithm.
   * @GNUTLS_KX_PSK: PSK key-exchange algorithm.
   * @GNUTLS_KX_DHE_PSK: DHE-PSK key-exchange algorithm.
   *
   * Enumeration of different key exchange algorithms.
   */
  typedef enum
  {
    GNUTLS_KX_UNKNOWN = 0,
    GNUTLS_KX_RSA = 1,
    GNUTLS_KX_DHE_DSS = 2,
    GNUTLS_KX_DHE_RSA = 3,
    GNUTLS_KX_ANON_DH = 4,
    GNUTLS_KX_SRP = 5,
    GNUTLS_KX_RSA_EXPORT = 6,
    GNUTLS_KX_SRP_RSA = 7,
    GNUTLS_KX_SRP_DSS = 8,
    GNUTLS_KX_PSK = 9,
    GNUTLS_KX_DHE_PSK = 10
  } gnutls_kx_algorithm_t;

  /**
   * gnutls_params_type_t:
   * @GNUTLS_PARAMS_RSA_EXPORT: Session RSA-EXPORT parameters.
   * @GNUTLS_PARAMS_DH: Session Diffie-Hellman parameters.
   *
   * Enumeration of different TLS session parameter types.
   */
  typedef enum
  {
    GNUTLS_PARAMS_RSA_EXPORT = 1,
    GNUTLS_PARAMS_DH = 2
  } gnutls_params_type_t;

  /**
   * gnutls_credentials_type_t:
   * @GNUTLS_CRD_CERTIFICATE: Certificate credential.
   * @GNUTLS_CRD_ANON: Anonymous credential.
   * @GNUTLS_CRD_SRP: SRP credential.
   * @GNUTLS_CRD_PSK: PSK credential.
   * @GNUTLS_CRD_IA: IA credential.
   *
   * Enumeration of different credential types.
   */
  typedef enum
  {
    GNUTLS_CRD_CERTIFICATE = 1,
    GNUTLS_CRD_ANON,
    GNUTLS_CRD_SRP,
    GNUTLS_CRD_PSK,
    GNUTLS_CRD_IA
  } gnutls_credentials_type_t;

#define GNUTLS_MAC_SHA GNUTLS_MAC_SHA1
#define GNUTLS_DIG_SHA GNUTLS_DIG_SHA1

  /**
   * gnutls_mac_algorithm_t:
   * @GNUTLS_MAC_UNKNOWN: Unknown MAC algorithm.
   * @GNUTLS_MAC_NULL: NULL MAC algorithm (empty output).
   * @GNUTLS_MAC_MD5: HMAC-MD5 algorithm.
   * @GNUTLS_MAC_SHA1: HMAC-SHA-1 algorithm.
   * @GNUTLS_MAC_RMD160: HMAC-RMD160 algorithm.
   * @GNUTLS_MAC_MD2: HMAC-MD2 algorithm.
   * @GNUTLS_MAC_SHA256: HMAC-SHA-256 algorithm.
   * @GNUTLS_MAC_SHA384: HMAC-SHA-384 algorithm.
   * @GNUTLS_MAC_SHA512: HMAC-SHA-512 algorithm.
   * @GNUTLS_MAC_SHA224: HMAC-SHA-224 algorithm.
   *
   * Enumeration of different Message Authentication Code (MAC)
   * algorithms.
   */
  typedef enum
  {
    GNUTLS_MAC_UNKNOWN = 0,
    GNUTLS_MAC_NULL = 1,
    GNUTLS_MAC_MD5 = 2,
    GNUTLS_MAC_SHA1 = 3,
    GNUTLS_MAC_RMD160 = 4,
    GNUTLS_MAC_MD2 = 5,
    GNUTLS_MAC_SHA256 = 6,
    GNUTLS_MAC_SHA384 = 7,
    GNUTLS_MAC_SHA512 = 8,
    GNUTLS_MAC_SHA224 = 9
      /* If you add anything here, make sure you align with
         gnutls_digest_algorithm_t. */
  } gnutls_mac_algorithm_t;

  /**
   * gnutls_digest_algorithm_t:
   * @GNUTLS_DIG_UNKNOWN: Unknown hash algorithm.
   * @GNUTLS_DIG_NULL: NULL hash algorithm (empty output).
   * @GNUTLS_DIG_MD5: MD5 algorithm.
   * @GNUTLS_DIG_SHA1: SHA-1 algorithm.
   * @GNUTLS_DIG_RMD160: RMD160 algorithm.
   * @GNUTLS_DIG_MD2: MD2 algorithm.
   * @GNUTLS_DIG_SHA256: SHA-256 algorithm.
   * @GNUTLS_DIG_SHA384: SHA-384 algorithm.
   * @GNUTLS_DIG_SHA512: SHA-512 algorithm.
   * @GNUTLS_DIG_SHA224: SHA-224 algorithm.
   *
   * Enumeration of different digest (hash) algorithms.
   */
  typedef enum
  {
    GNUTLS_DIG_UNKNOWN = GNUTLS_MAC_UNKNOWN,
    GNUTLS_DIG_NULL = GNUTLS_MAC_NULL,
    GNUTLS_DIG_MD5 = GNUTLS_MAC_MD5,
    GNUTLS_DIG_SHA1 = GNUTLS_MAC_SHA1,
    GNUTLS_DIG_RMD160 = GNUTLS_MAC_RMD160,
    GNUTLS_DIG_MD2 = GNUTLS_MAC_MD2,
    GNUTLS_DIG_SHA256 = GNUTLS_MAC_SHA256,
    GNUTLS_DIG_SHA384 = GNUTLS_MAC_SHA384,
    GNUTLS_DIG_SHA512 = GNUTLS_MAC_SHA512,
    GNUTLS_DIG_SHA224 = GNUTLS_MAC_SHA224
      /* If you add anything here, make sure you align with
         gnutls_mac_algorithm_t. */
  } gnutls_digest_algorithm_t;

  /* exported for other gnutls headers. This is the maximum number of
   * algorithms (ciphers, kx or macs).
   */
#define GNUTLS_MAX_ALGORITHM_NUM 16

  /**
   * gnutls_compression_method_t:
   * @GNUTLS_COMP_UNKNOWN: Unknown compression method.
   * @GNUTLS_COMP_NULL: The NULL compression method (uncompressed).
   * @GNUTLS_COMP_DEFLATE: The deflate/zlib compression method.
   * @GNUTLS_COMP_ZLIB: Same as %GNUTLS_COMP_DEFLATE.
   * @GNUTLS_COMP_LZO: The non-standard LZO compression method.
   *
   * Enumeration of different TLS compression methods.
   */
  typedef enum
  {
    GNUTLS_COMP_UNKNOWN = 0,
    GNUTLS_COMP_NULL = 1,
    GNUTLS_COMP_DEFLATE = 2,
    GNUTLS_COMP_ZLIB = GNUTLS_COMP_DEFLATE,
    GNUTLS_COMP_LZO = 3         /* only available if gnutls-extra has
                                   been initialized
                                 */
  } gnutls_compression_method_t;

  /**
   * gnutls_connection_end_t:
   * @GNUTLS_SERVER: Connection end is a server.
   * @GNUTLS_CLIENT: Connection end is a client.
   *
   * Enumeration of different TLS connection end types.
   */
  typedef enum
  {
    GNUTLS_SERVER = 1,
    GNUTLS_CLIENT
  } gnutls_connection_end_t;

  /**
   * gnutls_alert_level_t:
   * @GNUTLS_AL_WARNING: Alert of warning severity.
   * @GNUTLS_AL_FATAL: Alert of fatal severity.
   *
   * Enumeration of different TLS alert severities.
   */
  typedef enum
  {
    GNUTLS_AL_WARNING = 1,
    GNUTLS_AL_FATAL
  } gnutls_alert_level_t;

  /**
   * gnutls_alert_description_t:
   * @GNUTLS_A_CLOSE_NOTIFY: Close notify.
   * @GNUTLS_A_UNEXPECTED_MESSAGE: Unexpected message.
   * @GNUTLS_A_BAD_RECORD_MAC: Bad record MAC.
   * @GNUTLS_A_DECRYPTION_FAILED: Decryption failed.
   * @GNUTLS_A_RECORD_OVERFLOW: Record overflow.
   * @GNUTLS_A_DECOMPRESSION_FAILURE: Decompression failed.
   * @GNUTLS_A_HANDSHAKE_FAILURE: Handshake failed.
   * @GNUTLS_A_SSL3_NO_CERTIFICATE: No certificate.
   * @GNUTLS_A_BAD_CERTIFICATE: Certificate is bad.
   * @GNUTLS_A_UNSUPPORTED_CERTIFICATE: Certificate is not supported.
   * @GNUTLS_A_CERTIFICATE_REVOKED: Certificate was revoked.
   * @GNUTLS_A_CERTIFICATE_EXPIRED: Certificate is expired.
   * @GNUTLS_A_CERTIFICATE_UNKNOWN: Unknown certificate.
   * @GNUTLS_A_ILLEGAL_PARAMETER: Illegal parameter.
   * @GNUTLS_A_UNKNOWN_CA: CA is unknown.
   * @GNUTLS_A_ACCESS_DENIED: Access was denied.
   * @GNUTLS_A_DECODE_ERROR: Decode error.
   * @GNUTLS_A_DECRYPT_ERROR: Decrypt error.
   * @GNUTLS_A_EXPORT_RESTRICTION: Export restriction.
   * @GNUTLS_A_PROTOCOL_VERSION: Error in protocol version.
   * @GNUTLS_A_INSUFFICIENT_SECURITY: Insufficient security.
   * @GNUTLS_A_USER_CANCELED: User canceled.
   * @GNUTLS_A_INTERNAL_ERROR: Internal error.
   * @GNUTLS_A_NO_RENEGOTIATION: No renegotiation is allowed.
   * @GNUTLS_A_CERTIFICATE_UNOBTAINABLE: Could not retrieve the
   *   specified certificate.
   * @GNUTLS_A_UNSUPPORTED_EXTENSION: An unsupported extension was
   *   sent.
   * @GNUTLS_A_UNRECOGNIZED_NAME: The server name sent was not
   *   recognized.
   * @GNUTLS_A_UNKNOWN_PSK_IDENTITY: The SRP/PSK username is missing
   *   or not known.
   * @GNUTLS_A_INNER_APPLICATION_FAILURE: Inner application
   *   negotiation failed.
   * @GNUTLS_A_INNER_APPLICATION_VERIFICATION: Inner application
   *   verification failed.
   *
   * Enumeration of different TLS alerts.
   */
  typedef enum
  {
    GNUTLS_A_CLOSE_NOTIFY,
    GNUTLS_A_UNEXPECTED_MESSAGE = 10,
    GNUTLS_A_BAD_RECORD_MAC = 20,
    GNUTLS_A_DECRYPTION_FAILED,
    GNUTLS_A_RECORD_OVERFLOW,
    GNUTLS_A_DECOMPRESSION_FAILURE = 30,
    GNUTLS_A_HANDSHAKE_FAILURE = 40,
    GNUTLS_A_SSL3_NO_CERTIFICATE = 41,
    GNUTLS_A_BAD_CERTIFICATE = 42,
    GNUTLS_A_UNSUPPORTED_CERTIFICATE,
    GNUTLS_A_CERTIFICATE_REVOKED,
    GNUTLS_A_CERTIFICATE_EXPIRED,
    GNUTLS_A_CERTIFICATE_UNKNOWN,
    GNUTLS_A_ILLEGAL_PARAMETER,
    GNUTLS_A_UNKNOWN_CA,
    GNUTLS_A_ACCESS_DENIED,
    GNUTLS_A_DECODE_ERROR = 50,
    GNUTLS_A_DECRYPT_ERROR,
    GNUTLS_A_EXPORT_RESTRICTION = 60,
    GNUTLS_A_PROTOCOL_VERSION = 70,
    GNUTLS_A_INSUFFICIENT_SECURITY,
    GNUTLS_A_INTERNAL_ERROR = 80,
    GNUTLS_A_USER_CANCELED = 90,
    GNUTLS_A_NO_RENEGOTIATION = 100,
    GNUTLS_A_UNSUPPORTED_EXTENSION = 110,
    GNUTLS_A_CERTIFICATE_UNOBTAINABLE = 111,
    GNUTLS_A_UNRECOGNIZED_NAME = 112,
    GNUTLS_A_UNKNOWN_PSK_IDENTITY = 115,
    GNUTLS_A_INNER_APPLICATION_FAILURE = 208,
    GNUTLS_A_INNER_APPLICATION_VERIFICATION = 209
  } gnutls_alert_description_t;

  /**
   * gnutls_handshake_description_t:
   * @GNUTLS_HANDSHAKE_HELLO_REQUEST: Hello request.
   * @GNUTLS_HANDSHAKE_CLIENT_HELLO: Client hello.
   * @GNUTLS_HANDSHAKE_SERVER_HELLO: Server hello.
   * @GNUTLS_HANDSHAKE_NEW_SESSION_TICKET: New session ticket.
   * @GNUTLS_HANDSHAKE_CERTIFICATE_PKT: Certificate packet.
   * @GNUTLS_HANDSHAKE_SERVER_KEY_EXCHANGE: Server key exchange.
   * @GNUTLS_HANDSHAKE_CERTIFICATE_REQUEST: Certificate request.
   * @GNUTLS_HANDSHAKE_SERVER_HELLO_DONE: Server hello done.
   * @GNUTLS_HANDSHAKE_CERTIFICATE_VERIFY: Certificate verify.
   * @GNUTLS_HANDSHAKE_CLIENT_KEY_EXCHANGE: Client key exchange.
   * @GNUTLS_HANDSHAKE_FINISHED: Finished.
   * @GNUTLS_HANDSHAKE_SUPPLEMENTAL: Supplemental.
   *
   * Enumeration of different TLS handshake packets.
   */
  typedef enum
  {
    GNUTLS_HANDSHAKE_HELLO_REQUEST = 0,
    GNUTLS_HANDSHAKE_CLIENT_HELLO = 1,
    GNUTLS_HANDSHAKE_SERVER_HELLO = 2,
    GNUTLS_HANDSHAKE_NEW_SESSION_TICKET = 4,
    GNUTLS_HANDSHAKE_CERTIFICATE_PKT = 11,
    GNUTLS_HANDSHAKE_SERVER_KEY_EXCHANGE = 12,
    GNUTLS_HANDSHAKE_CERTIFICATE_REQUEST = 13,
    GNUTLS_HANDSHAKE_SERVER_HELLO_DONE = 14,
    GNUTLS_HANDSHAKE_CERTIFICATE_VERIFY = 15,
    GNUTLS_HANDSHAKE_CLIENT_KEY_EXCHANGE = 16,
    GNUTLS_HANDSHAKE_FINISHED = 20,
    GNUTLS_HANDSHAKE_SUPPLEMENTAL = 23
  } gnutls_handshake_description_t;

  /**
   * gnutls_certificate_status_t:
   * @GNUTLS_CERT_INVALID: Will be set if the certificate was not
   *   verified.
   * @GNUTLS_CERT_REVOKED: Certificate revoked.  In X.509 this will be
   *   set only if CRLs are checked.
   * @GNUTLS_CERT_SIGNER_NOT_FOUND: Certificate not verified.  Signer
   *   not found.
   * @GNUTLS_CERT_SIGNER_NOT_CA: Certificate not verified.  Signer
   *   not a CA certificate.
   * @GNUTLS_CERT_INSECURE_ALGORITHM: Certificate not verified,
   *   insecure algorithm.
   * @GNUTLS_CERT_NOT_ACTIVATED: Certificate not yet activated.
   * @GNUTLS_CERT_EXPIRED: Certificate expired.
   *
   * Enumeration of certificate status codes.  Note that the status
   * bits have different meanings in OpenPGP keys and X.509
   * certificate verification.
   */
  typedef enum
  {
    GNUTLS_CERT_INVALID = 2,
    GNUTLS_CERT_REVOKED = 32,
    GNUTLS_CERT_SIGNER_NOT_FOUND = 64,
    GNUTLS_CERT_SIGNER_NOT_CA = 128,
    GNUTLS_CERT_INSECURE_ALGORITHM = 256,
    GNUTLS_CERT_NOT_ACTIVATED = 512,
    GNUTLS_CERT_EXPIRED = 1024
  } gnutls_certificate_status_t;

  /**
   * gnutls_certificate_request_t:
   * @GNUTLS_CERT_IGNORE: Ignore certificate.
   * @GNUTLS_CERT_REQUEST: Request certificate.
   * @GNUTLS_CERT_REQUIRE: Require certificate.
   *
   * Enumeration of certificate request types.
   */
  typedef enum
  {
    GNUTLS_CERT_IGNORE = 0,
    GNUTLS_CERT_REQUEST = 1,
    GNUTLS_CERT_REQUIRE = 2
  } gnutls_certificate_request_t;

  /**
   * gnutls_openpgp_crt_status_t:
   * @GNUTLS_OPENPGP_CERT: Send entire certificate.
   * @GNUTLS_OPENPGP_CERT_FINGERPRINT: Send only certificate fingerprint.
   *
   * Enumeration of ways to send OpenPGP certificate.
   */
  typedef enum
  {
    GNUTLS_OPENPGP_CERT = 0,
    GNUTLS_OPENPGP_CERT_FINGERPRINT = 1
  } gnutls_openpgp_crt_status_t;

  /**
   * gnutls_close_request_t:
   * @GNUTLS_SHUT_RDWR: Disallow further receives/sends.
   * @GNUTLS_SHUT_WR: Disallow further sends.
   *
   * Enumeration of how TLS session should be terminated.  See gnutls_bye().
   */
  typedef enum
  {
    GNUTLS_SHUT_RDWR = 0,
    GNUTLS_SHUT_WR = 1
  } gnutls_close_request_t;

  /**
   * gnutls_protocol_t:
   * @GNUTLS_SSL3: SSL version 3.0.
   * @GNUTLS_TLS1_0: TLS version 1.0.
   * @GNUTLS_TLS1: Same as %GNUTLS_TLS1_0.
   * @GNUTLS_TLS1_1: TLS version 1.1.
   * @GNUTLS_TLS1_2: TLS version 1.2.
   * @GNUTLS_VERSION_MAX: Maps to the highest supported TLS version.
   * @GNUTLS_VERSION_UNKNOWN: Unknown SSL/TLS version.
   *
   * Enumeration of different SSL/TLS protocol versions.
   */
  typedef enum
  {
    GNUTLS_SSL3 = 1,
    GNUTLS_TLS1_0 = 2,
    GNUTLS_TLS1 = GNUTLS_TLS1_0,
    GNUTLS_TLS1_1 = 3,
    GNUTLS_TLS1_2 = 4,
    GNUTLS_VERSION_MAX = GNUTLS_TLS1_2,
    GNUTLS_VERSION_UNKNOWN = 0xff
  } gnutls_protocol_t;

  /**
   * gnutls_certificate_type_t:
   * @GNUTLS_CRT_UNKNOWN: Unknown certificate type.
   * @GNUTLS_CRT_X509: X.509 Certificate.
   * @GNUTLS_CRT_OPENPGP: OpenPGP certificate.
   *
   * Enumeration of different certificate types.
   */
  typedef enum
  {
    GNUTLS_CRT_UNKNOWN = 0,
    GNUTLS_CRT_X509 = 1,
    GNUTLS_CRT_OPENPGP = 2
  } gnutls_certificate_type_t;

  /**
   * gnutls_x509_crt_fmt_t:
   * @GNUTLS_X509_FMT_DER: X.509 certificate in DER format (binary).
   * @GNUTLS_X509_FMT_PEM: X.509 certificate in PEM format (text).
   *
   * Enumeration of different certificate encoding formats.
   */
  typedef enum
  {
    GNUTLS_X509_FMT_DER = 0,
    GNUTLS_X509_FMT_PEM = 1
  } gnutls_x509_crt_fmt_t;

  /**
   * gnutls_certificate_print_formats_t:
   * @GNUTLS_CRT_PRINT_FULL: Full information about certificate.
   * @GNUTLS_CRT_PRINT_ONELINE: Information about certificate in one line.
   * @GNUTLS_CRT_PRINT_UNSIGNED_FULL: All info for an unsigned certificate.
   *
   * Enumeration of different certificate printing variants.
   */
  typedef enum gnutls_certificate_print_formats
  {
    GNUTLS_CRT_PRINT_FULL = 0,
    GNUTLS_CRT_PRINT_ONELINE = 1,
    GNUTLS_CRT_PRINT_UNSIGNED_FULL = 2
  } gnutls_certificate_print_formats_t;

  /**
   * gnutls_pk_algorithm_t:
   * @GNUTLS_PK_UNKNOWN: Unknown public-key algorithm.
   * @GNUTLS_PK_RSA: RSA public-key algorithm.
   * @GNUTLS_PK_DSA: DSA public-key algorithm.
   * @GNUTLS_PK_DH: Diffie-Hellman algorithm. Used to generate parameters.
   *
   * Enumeration of different public-key algorithms.
   */
  typedef enum
  {
    GNUTLS_PK_UNKNOWN = 0,
    GNUTLS_PK_RSA = 1,
    GNUTLS_PK_DSA = 2,
    GNUTLS_PK_DH = 3
  } gnutls_pk_algorithm_t;

  const char *gnutls_pk_algorithm_get_name (gnutls_pk_algorithm_t algorithm);

  /**
   * gnutls_sign_algorithm_t:
   * @GNUTLS_SIGN_UNKNOWN: Unknown signature algorithm.
   * @GNUTLS_SIGN_RSA_SHA1: Digital signature algorithm RSA with SHA-1
   * @GNUTLS_SIGN_RSA_SHA: Same as %GNUTLS_SIGN_RSA_SHA1.
   * @GNUTLS_SIGN_DSA_SHA1: Digital signature algorithm DSA with SHA-1
   * @GNUTLS_SIGN_DSA_SHA224: Digital signature algorithm DSA with SHA-224
   * @GNUTLS_SIGN_DSA_SHA256: Digital signature algorithm DSA with SHA-256
   * @GNUTLS_SIGN_DSA_SHA: Same as %GNUTLS_SIGN_DSA_SHA1.
   * @GNUTLS_SIGN_RSA_MD5: Digital signature algorithm RSA with MD5.
   * @GNUTLS_SIGN_RSA_MD2: Digital signature algorithm RSA with MD2.
   * @GNUTLS_SIGN_RSA_RMD160: Digital signature algorithm RSA with RMD-160.
   * @GNUTLS_SIGN_RSA_SHA256: Digital signature algorithm RSA with SHA-256.
   * @GNUTLS_SIGN_RSA_SHA384: Digital signature algorithm RSA with SHA-384.
   * @GNUTLS_SIGN_RSA_SHA512: Digital signature algorithm RSA with SHA-512.
   * @GNUTLS_SIGN_RSA_SHA224: Digital signature algorithm RSA with SHA-224.
   *
   * Enumeration of different digital signature algorithms.
   */
  typedef enum
  {
    GNUTLS_SIGN_UNKNOWN = 0,
    GNUTLS_SIGN_RSA_SHA1 = 1,
    GNUTLS_SIGN_RSA_SHA = GNUTLS_SIGN_RSA_SHA1,
    GNUTLS_SIGN_DSA_SHA1 = 2,
    GNUTLS_SIGN_DSA_SHA = GNUTLS_SIGN_DSA_SHA1,
    GNUTLS_SIGN_RSA_MD5 = 3,
    GNUTLS_SIGN_RSA_MD2 = 4,
    GNUTLS_SIGN_RSA_RMD160 = 5,
    GNUTLS_SIGN_RSA_SHA256 = 6,
    GNUTLS_SIGN_RSA_SHA384 = 7,
    GNUTLS_SIGN_RSA_SHA512 = 8,
    GNUTLS_SIGN_RSA_SHA224 = 9,
    GNUTLS_SIGN_DSA_SHA224 = 10,
    GNUTLS_SIGN_DSA_SHA256 = 11
  } gnutls_sign_algorithm_t;

  const char *gnutls_sign_algorithm_get_name (gnutls_sign_algorithm_t sign);

  /**
   * gnutls_sec_param_t:
   * @GNUTLS_SEC_PARAM_UNKNOWN: Cannot be known
   * @GNUTLS_SEC_PARAM_WEAK: 50 or less bits of security
   * @GNUTLS_SEC_PARAM_LOW: 80 bits of security
   * @GNUTLS_SEC_PARAM_NORMAL: 112 bits of security
   * @GNUTLS_SEC_PARAM_HIGH: 128 bits of security
   * @GNUTLS_SEC_PARAM_ULTRA: 192 bits of security
   *
   * Enumeration of security parameters for passive attacks
   */
  typedef enum
  {
    GNUTLS_SEC_PARAM_UNKNOWN,
    GNUTLS_SEC_PARAM_WEAK,
    GNUTLS_SEC_PARAM_LOW,
    GNUTLS_SEC_PARAM_NORMAL,
    GNUTLS_SEC_PARAM_HIGH,
    GNUTLS_SEC_PARAM_ULTRA
  } gnutls_sec_param_t;

  /**
   * gnutls_channel_binding_t:
   * @GNUTLS_CB_TLS_UNIQUE: "tls-unique" (RFC 5929) channel binding
   *
   * Enumeration of support channel binding types.
   */
  typedef enum
  {
    GNUTLS_CB_TLS_UNIQUE
  } gnutls_channel_binding_t;

/* If you want to change this, then also change the define in
 * gnutls_int.h, and recompile.
 */
  typedef void *gnutls_transport_ptr_t;

  struct gnutls_session_int;
  typedef struct gnutls_session_int *gnutls_session_t;

  struct gnutls_dh_params_int;
  typedef struct gnutls_dh_params_int *gnutls_dh_params_t;

  /* XXX ugly. */
  struct gnutls_x509_privkey_int;
  typedef struct gnutls_x509_privkey_int *gnutls_rsa_params_t;

  struct gnutls_priority_st;
  typedef struct gnutls_priority_st *gnutls_priority_t;

  typedef struct
  {
    unsigned char *data;
    unsigned int size;
  } gnutls_datum_t;


  typedef struct gnutls_params_st
  {
    gnutls_params_type_t type;
    union params
    {
      gnutls_dh_params_t dh;
      gnutls_rsa_params_t rsa_export;
    } params;
    int deinit;
  } gnutls_params_st;

  typedef int gnutls_params_function (gnutls_session_t, gnutls_params_type_t,
                                      gnutls_params_st *);

/* internal functions */

  int gnutls_init (gnutls_session_t * session,
                   gnutls_connection_end_t con_end);
  void gnutls_deinit (gnutls_session_t session);
#define _gnutls_deinit(x) gnutls_deinit(x)

  int gnutls_bye (gnutls_session_t session, gnutls_close_request_t how);

  int gnutls_handshake (gnutls_session_t session);
  int gnutls_rehandshake (gnutls_session_t session);

  gnutls_alert_description_t gnutls_alert_get (gnutls_session_t session);
  int gnutls_alert_send (gnutls_session_t session,
                         gnutls_alert_level_t level,
                         gnutls_alert_description_t desc);
  int gnutls_alert_send_appropriate (gnutls_session_t session, int err);
  const char *gnutls_alert_get_name (gnutls_alert_description_t alert);

  gnutls_sec_param_t gnutls_pk_bits_to_sec_param (gnutls_pk_algorithm_t algo,
                                                  unsigned int bits);
  const char *gnutls_sec_param_get_name (gnutls_sec_param_t param);
  unsigned int gnutls_sec_param_to_pk_bits (gnutls_pk_algorithm_t algo,
                                            gnutls_sec_param_t param);

/* get information on the current session */
  gnutls_cipher_algorithm_t gnutls_cipher_get (gnutls_session_t session);
  gnutls_kx_algorithm_t gnutls_kx_get (gnutls_session_t session);
  gnutls_mac_algorithm_t gnutls_mac_get (gnutls_session_t session);
    gnutls_compression_method_t
    gnutls_compression_get (gnutls_session_t session);
    gnutls_certificate_type_t
    gnutls_certificate_type_get (gnutls_session_t session);
  int gnutls_sign_algorithm_get_requested (gnutls_session_t session,
                                           size_t indx,
                                           gnutls_sign_algorithm_t * algo);

  size_t gnutls_cipher_get_key_size (gnutls_cipher_algorithm_t algorithm);
  size_t gnutls_mac_get_key_size (gnutls_mac_algorithm_t algorithm);

/* the name of the specified algorithms */
  const char *gnutls_cipher_get_name (gnutls_cipher_algorithm_t algorithm);
  const char *gnutls_mac_get_name (gnutls_mac_algorithm_t algorithm);
  const char *gnutls_compression_get_name (gnutls_compression_method_t
                                           algorithm);
  const char *gnutls_kx_get_name (gnutls_kx_algorithm_t algorithm);
  const char *gnutls_certificate_type_get_name (gnutls_certificate_type_t
                                                type);
  const char *gnutls_pk_get_name (gnutls_pk_algorithm_t algorithm);
  const char *gnutls_sign_get_name (gnutls_sign_algorithm_t algorithm);

  gnutls_mac_algorithm_t gnutls_mac_get_id (const char *name);
  gnutls_compression_method_t gnutls_compression_get_id (const char *name);
  gnutls_cipher_algorithm_t gnutls_cipher_get_id (const char *name);
  gnutls_kx_algorithm_t gnutls_kx_get_id (const char *name);
  gnutls_protocol_t gnutls_protocol_get_id (const char *name);
  gnutls_certificate_type_t gnutls_certificate_type_get_id (const char *name);
  gnutls_pk_algorithm_t gnutls_pk_get_id (const char *name);
  gnutls_sign_algorithm_t gnutls_sign_get_id (const char *name);

  /* list supported algorithms */
  const gnutls_cipher_algorithm_t *gnutls_cipher_list (void);
  const gnutls_mac_algorithm_t *gnutls_mac_list (void);
  const gnutls_compression_method_t *gnutls_compression_list (void);
  const gnutls_protocol_t *gnutls_protocol_list (void);
  const gnutls_certificate_type_t *gnutls_certificate_type_list (void);
  const gnutls_kx_algorithm_t *gnutls_kx_list (void);
  const gnutls_pk_algorithm_t *gnutls_pk_list (void);
  const gnutls_sign_algorithm_t *gnutls_sign_list (void);
  const char *gnutls_cipher_suite_info (size_t idx,
                                        char *cs_id,
                                        gnutls_kx_algorithm_t * kx,
                                        gnutls_cipher_algorithm_t * cipher,
                                        gnutls_mac_algorithm_t * mac,
                                        gnutls_protocol_t * version);

  /* error functions */
  int gnutls_error_is_fatal (int error);
  int gnutls_error_to_alert (int err, int *level);

  void gnutls_perror (int error);
  const char *gnutls_strerror (int error);
  const char *gnutls_strerror_name (int error);

/* Semi-internal functions.
 */
  void gnutls_handshake_set_private_extensions (gnutls_session_t session,
                                                int allow);
    gnutls_handshake_description_t
    gnutls_handshake_get_last_out (gnutls_session_t session);
    gnutls_handshake_description_t
    gnutls_handshake_get_last_in (gnutls_session_t session);

/* Record layer functions.
 */
  ssize_t gnutls_record_send (gnutls_session_t session, const void *data,
                              size_t sizeofdata);
  ssize_t gnutls_record_recv (gnutls_session_t session, void *data,
                              size_t sizeofdata);
#define gnutls_read gnutls_record_recv
#define gnutls_write gnutls_record_send

  void gnutls_session_enable_compatibility_mode (gnutls_session_t session);

  void gnutls_record_disable_padding (gnutls_session_t session);

  int gnutls_record_get_direction (gnutls_session_t session);

  size_t gnutls_record_get_max_size (gnutls_session_t session);
  ssize_t gnutls_record_set_max_size (gnutls_session_t session, size_t size);

  size_t gnutls_record_check_pending (gnutls_session_t session);

  int gnutls_prf (gnutls_session_t session,
                  size_t label_size, const char *label,
                  int server_random_first,
                  size_t extra_size, const char *extra,
                  size_t outsize, char *out);

  int gnutls_prf_raw (gnutls_session_t session,
                      size_t label_size, const char *label,
                      size_t seed_size, const char *seed,
                      size_t outsize, char *out);

/* TLS Extensions */

  typedef int (*gnutls_ext_recv_func) (gnutls_session_t session,
                                       const unsigned char *data, size_t len);
  typedef int (*gnutls_ext_send_func) (gnutls_session_t session,
                                       unsigned char *data, size_t len);

  /**
   * gnutls_ext_parse_type_t:
   * @GNUTLS_EXT_NONE: Never parsed
   * @GNUTLS_EXT_ANY: Any extension type.
   * @GNUTLS_EXT_APPLICATION: Application extension.
   * @GNUTLS_EXT_TLS: TLS-internal extension.
   * @GNUTLS_EXT_MANDATORY: Extension parsed even if resuming (or extensions are disabled).
   *
   * Enumeration of different TLS extension types.  This flag
   * indicates for an extension whether it is useful to application
   * level or TLS level only.  This is (only) used to parse the
   * application level extensions before the "client_hello" callback
   * is called.
   */
  typedef enum
  {
    GNUTLS_EXT_ANY = 0,
    GNUTLS_EXT_APPLICATION = 1,
    GNUTLS_EXT_TLS = 2,
    GNUTLS_EXT_MANDATORY = 3,
    GNUTLS_EXT_NONE = 4
  } gnutls_ext_parse_type_t;


  /**
   * gnutls_server_name_type_t:
   * @GNUTLS_NAME_DNS: Domain Name System name type.
   *
   * Enumeration of different server name types.
   */
  typedef enum
  {
    GNUTLS_NAME_DNS = 1
  } gnutls_server_name_type_t;

  int gnutls_server_name_set (gnutls_session_t session,
                              gnutls_server_name_type_t type,
                              const void *name, size_t name_length);

  int gnutls_server_name_get (gnutls_session_t session,
                              void *data, size_t * data_length,
                              unsigned int *type, unsigned int indx);

  /* Safe renegotiation */
  int gnutls_safe_renegotiation_status (gnutls_session_t session);

  /**
   * gnutls_supplemental_data_format_type_t:
   * @GNUTLS_SUPPLEMENTAL_USER_MAPPING_DATA: Supplemental user mapping data.
   *
   * Enumeration of different supplemental data types (RFC 4680).
   */
  typedef enum
  {
    GNUTLS_SUPPLEMENTAL_USER_MAPPING_DATA = 0
  } gnutls_supplemental_data_format_type_t;

  const char
    *gnutls_supplemental_get_name (gnutls_supplemental_data_format_type_t
                                   type);

  /* SessionTicket, RFC 5077. */
  int gnutls_session_ticket_key_generate (gnutls_datum_t * key);
  int gnutls_session_ticket_enable_client (gnutls_session_t session);
  int gnutls_session_ticket_enable_server (gnutls_session_t session,
                                           const gnutls_datum_t * key);

/* if you just want some defaults, use the following.
 */
  int gnutls_priority_init (gnutls_priority_t * priority_cache,
                            const char *priorities, const char **err_pos);
  void gnutls_priority_deinit (gnutls_priority_t priority_cache);

  int gnutls_priority_set (gnutls_session_t session,
                           gnutls_priority_t priority);
  int gnutls_priority_set_direct (gnutls_session_t session,
                                  const char *priorities,
                                  const char **err_pos);

  /* for compatibility
   */
  int gnutls_set_default_priority (gnutls_session_t session);
  int gnutls_set_default_export_priority (gnutls_session_t session);

/* Returns the name of a cipher suite */
  const char *gnutls_cipher_suite_get_name (gnutls_kx_algorithm_t
                                            kx_algorithm,
                                            gnutls_cipher_algorithm_t
                                            cipher_algorithm,
                                            gnutls_mac_algorithm_t
                                            mac_algorithm);

/* get the currently used protocol version */
  gnutls_protocol_t gnutls_protocol_get_version (gnutls_session_t session);

  const char *gnutls_protocol_get_name (gnutls_protocol_t version);


/* get/set session 
 */
  int gnutls_session_set_data (gnutls_session_t session,
                               const void *session_data,
                               size_t session_data_size);
  int gnutls_session_get_data (gnutls_session_t session, void *session_data,
                               size_t * session_data_size);
  int gnutls_session_get_data2 (gnutls_session_t session,
                                gnutls_datum_t * data);

/* returns the session ID */
#define GNUTLS_MAX_SESSION_ID 32
  int gnutls_session_get_id (gnutls_session_t session, void *session_id,
                             size_t * session_id_size);


  int gnutls_session_channel_binding (gnutls_session_t session,
                                      gnutls_channel_binding_t cbtype,
                                      gnutls_datum_t * cb);

/* checks if this session is a resumed one 
 */
  int gnutls_session_is_resumed (gnutls_session_t session);

  typedef int (*gnutls_db_store_func) (void *, gnutls_datum_t key,
                                       gnutls_datum_t data);
  typedef int (*gnutls_db_remove_func) (void *, gnutls_datum_t key);
  typedef gnutls_datum_t (*gnutls_db_retr_func) (void *, gnutls_datum_t key);

  void gnutls_db_set_cache_expiration (gnutls_session_t session, int seconds);

  void gnutls_db_remove_session (gnutls_session_t session);
  void gnutls_db_set_retrieve_function (gnutls_session_t session,
                                        gnutls_db_retr_func retr_func);
  void gnutls_db_set_remove_function (gnutls_session_t session,
                                      gnutls_db_remove_func rem_func);
  void gnutls_db_set_store_function (gnutls_session_t session,
                                     gnutls_db_store_func store_func);
  void gnutls_db_set_ptr (gnutls_session_t session, void *ptr);
  void *gnutls_db_get_ptr (gnutls_session_t session);
  int gnutls_db_check_entry (gnutls_session_t session,
                             gnutls_datum_t session_entry);

  typedef int (*gnutls_handshake_post_client_hello_func) (gnutls_session_t);
  void
    gnutls_handshake_set_post_client_hello_function (gnutls_session_t session,
                                                     gnutls_handshake_post_client_hello_func
                                                     func);

  void gnutls_handshake_set_max_packet_length (gnutls_session_t session,
                                               size_t max);

/* returns libgnutls version (call it with a NULL argument)
 */
  const char *gnutls_check_version (const char *req_version);

/* Functions for setting/clearing credentials
 */
  void gnutls_credentials_clear (gnutls_session_t session);

/* cred is a structure defined by the kx algorithm
 */
  int gnutls_credentials_set (gnutls_session_t session,
                              gnutls_credentials_type_t type, void *cred);
#define gnutls_cred_set	gnutls_credentials_set

/* Credential structures - used in gnutls_credentials_set(); */

  struct gnutls_certificate_credentials_st;
  typedef struct gnutls_certificate_credentials_st
    *gnutls_certificate_credentials_t;
  typedef gnutls_certificate_credentials_t
    gnutls_certificate_server_credentials;
  typedef gnutls_certificate_credentials_t
    gnutls_certificate_client_credentials;

  typedef struct gnutls_anon_server_credentials_st
    *gnutls_anon_server_credentials_t;
  typedef struct gnutls_anon_client_credentials_st
    *gnutls_anon_client_credentials_t;

  void gnutls_anon_free_server_credentials (gnutls_anon_server_credentials_t
                                            sc);
  int
    gnutls_anon_allocate_server_credentials (gnutls_anon_server_credentials_t
                                             * sc);

  void gnutls_anon_set_server_dh_params (gnutls_anon_server_credentials_t res,
                                         gnutls_dh_params_t dh_params);

  void
    gnutls_anon_set_server_params_function (gnutls_anon_server_credentials_t
                                            res,
                                            gnutls_params_function * func);

  void
    gnutls_anon_free_client_credentials (gnutls_anon_client_credentials_t sc);
  int
    gnutls_anon_allocate_client_credentials (gnutls_anon_client_credentials_t
                                             * sc);

/* CERTFILE is an x509 certificate in PEM form.
 * KEYFILE is a pkcs-1 private key in PEM form (for RSA keys).
 */
  void
    gnutls_certificate_free_credentials (gnutls_certificate_credentials_t sc);
  int
    gnutls_certificate_allocate_credentials (gnutls_certificate_credentials_t
                                             * res);

  void gnutls_certificate_free_keys (gnutls_certificate_credentials_t sc);
  void gnutls_certificate_free_cas (gnutls_certificate_credentials_t sc);
  void gnutls_certificate_free_ca_names (gnutls_certificate_credentials_t sc);
  void gnutls_certificate_free_crls (gnutls_certificate_credentials_t sc);

  void gnutls_certificate_set_dh_params (gnutls_certificate_credentials_t res,
                                         gnutls_dh_params_t dh_params);
  void
    gnutls_certificate_set_rsa_export_params (gnutls_certificate_credentials_t
                                              res,
                                              gnutls_rsa_params_t rsa_params);
  void gnutls_certificate_set_verify_flags (gnutls_certificate_credentials_t
                                            res, unsigned int flags);
  void gnutls_certificate_set_verify_limits (gnutls_certificate_credentials_t
                                             res, unsigned int max_bits,
                                             unsigned int max_depth);

  int
    gnutls_certificate_set_x509_trust_file (gnutls_certificate_credentials_t
                                            res, const char *cafile,
                                            gnutls_x509_crt_fmt_t type);
  int gnutls_certificate_set_x509_trust_mem (gnutls_certificate_credentials_t
                                             res, const gnutls_datum_t * ca,
                                             gnutls_x509_crt_fmt_t type);

  int
    gnutls_certificate_set_x509_crl_file (gnutls_certificate_credentials_t
                                          res, const char *crlfile,
                                          gnutls_x509_crt_fmt_t type);
  int gnutls_certificate_set_x509_crl_mem (gnutls_certificate_credentials_t
                                           res, const gnutls_datum_t * CRL,
                                           gnutls_x509_crt_fmt_t type);

  int
    gnutls_certificate_set_x509_key_file (gnutls_certificate_credentials_t
                                          res, const char *certfile,
                                          const char *keyfile,
                                          gnutls_x509_crt_fmt_t type);
  int gnutls_certificate_set_x509_key_mem (gnutls_certificate_credentials_t
                                           res, const gnutls_datum_t * cert,
                                           const gnutls_datum_t * key,
                                           gnutls_x509_crt_fmt_t type);

  void gnutls_certificate_send_x509_rdn_sequence (gnutls_session_t session,
                                                  int status);

  int gnutls_certificate_set_x509_simple_pkcs12_file
    (gnutls_certificate_credentials_t res, const char *pkcs12file,
     gnutls_x509_crt_fmt_t type, const char *password);
  int gnutls_certificate_set_x509_simple_pkcs12_mem
    (gnutls_certificate_credentials_t res, const gnutls_datum_t * p12blob,
     gnutls_x509_crt_fmt_t type, const char *password);

/* New functions to allow setting already parsed X.509 stuff.
 */
  struct gnutls_x509_privkey_int;
  typedef struct gnutls_x509_privkey_int *gnutls_x509_privkey_t;

  struct gnutls_x509_crl_int;
  typedef struct gnutls_x509_crl_int *gnutls_x509_crl_t;

  struct gnutls_x509_crt_int;
  typedef struct gnutls_x509_crt_int *gnutls_x509_crt_t;

  struct gnutls_x509_crq_int;
  typedef struct gnutls_x509_crq_int *gnutls_x509_crq_t;

  struct gnutls_openpgp_keyring_int;
  typedef struct gnutls_openpgp_keyring_int *gnutls_openpgp_keyring_t;

  int
    gnutls_certificate_get_issuer (gnutls_certificate_credentials_t sc,
    gnutls_x509_crt_t cert, gnutls_x509_crt_t* issuer, unsigned int flags);

  int gnutls_certificate_set_x509_key (gnutls_certificate_credentials_t res,
                                       gnutls_x509_crt_t * cert_list,
                                       int cert_list_size,
                                       gnutls_x509_privkey_t key);
  int gnutls_certificate_set_x509_trust (gnutls_certificate_credentials_t res,
                                         gnutls_x509_crt_t * ca_list,
                                         int ca_list_size);
  int gnutls_certificate_set_x509_crl (gnutls_certificate_credentials_t res,
                                       gnutls_x509_crl_t * crl_list,
                                       int crl_list_size);



/* global state functions
 */
  int gnutls_global_init (void);
  void gnutls_global_deinit (void);

  typedef time_t (*gnutls_time_func) (time_t *t);
  typedef int (*mutex_init_func) (void **mutex);
  typedef int (*mutex_lock_func) (void **mutex);
  typedef int (*mutex_unlock_func) (void **mutex);
  typedef int (*mutex_deinit_func) (void **mutex);

  void gnutls_global_set_mutex (mutex_init_func init, mutex_deinit_func deinit,
                                mutex_lock_func lock, mutex_unlock_func unlock);

  typedef void *(*gnutls_alloc_function) (size_t);
  typedef void *(*gnutls_calloc_function) (size_t, size_t);
  typedef int (*gnutls_is_secure_function) (const void *);
  typedef void (*gnutls_free_function) (void *);
  typedef void *(*gnutls_realloc_function) (void *, size_t);

  void
    gnutls_global_set_mem_functions (gnutls_alloc_function alloc_func,
                                     gnutls_alloc_function secure_alloc_func,
                                     gnutls_is_secure_function is_secure_func,
                                     gnutls_realloc_function realloc_func,
                                     gnutls_free_function free_func);

  void gnutls_global_set_time_function (gnutls_time_func);

/* For use in callbacks */
  extern gnutls_alloc_function gnutls_malloc;
  extern gnutls_alloc_function gnutls_secure_malloc;
  extern gnutls_realloc_function gnutls_realloc;
  extern gnutls_calloc_function gnutls_calloc;
  extern gnutls_free_function gnutls_free;

  extern char *(*gnutls_strdup) (const char *);

  typedef void (*gnutls_log_func) (int, const char *);
  void gnutls_global_set_log_function (gnutls_log_func log_func);
  void gnutls_global_set_log_level (int level);

/* Diffie-Hellman parameter handling.
 */
  int gnutls_dh_params_init (gnutls_dh_params_t * dh_params);
  void gnutls_dh_params_deinit (gnutls_dh_params_t dh_params);
  int gnutls_dh_params_import_raw (gnutls_dh_params_t dh_params,
                                   const gnutls_datum_t * prime,
                                   const gnutls_datum_t * generator);
  int gnutls_dh_params_import_pkcs3 (gnutls_dh_params_t params,
                                     const gnutls_datum_t * pkcs3_params,
                                     gnutls_x509_crt_fmt_t format);
  int gnutls_dh_params_generate2 (gnutls_dh_params_t params,
                                  unsigned int bits);
  int gnutls_dh_params_export_pkcs3 (gnutls_dh_params_t params,
                                     gnutls_x509_crt_fmt_t format,
                                     unsigned char *params_data,
                                     size_t * params_data_size);
  int gnutls_dh_params_export_raw (gnutls_dh_params_t params,
                                   gnutls_datum_t * prime,
                                   gnutls_datum_t * generator,
                                   unsigned int *bits);
  int gnutls_dh_params_cpy (gnutls_dh_params_t dst, gnutls_dh_params_t src);


/* RSA params 
 */
  int gnutls_rsa_params_init (gnutls_rsa_params_t * rsa_params);
  void gnutls_rsa_params_deinit (gnutls_rsa_params_t rsa_params);
  int gnutls_rsa_params_cpy (gnutls_rsa_params_t dst,
                             gnutls_rsa_params_t src);
  int gnutls_rsa_params_import_raw (gnutls_rsa_params_t rsa_params,
                                    const gnutls_datum_t * m,
                                    const gnutls_datum_t * e,
                                    const gnutls_datum_t * d,
                                    const gnutls_datum_t * p,
                                    const gnutls_datum_t * q,
                                    const gnutls_datum_t * u);
  int gnutls_rsa_params_generate2 (gnutls_rsa_params_t params,
                                   unsigned int bits);
  int gnutls_rsa_params_export_raw (gnutls_rsa_params_t params,
                                    gnutls_datum_t * m, gnutls_datum_t * e,
                                    gnutls_datum_t * d, gnutls_datum_t * p,
                                    gnutls_datum_t * q, gnutls_datum_t * u,
                                    unsigned int *bits);
  int gnutls_rsa_params_export_pkcs1 (gnutls_rsa_params_t params,
                                      gnutls_x509_crt_fmt_t format,
                                      unsigned char *params_data,
                                      size_t * params_data_size);
  int gnutls_rsa_params_import_pkcs1 (gnutls_rsa_params_t params,
                                      const gnutls_datum_t * pkcs1_params,
                                      gnutls_x509_crt_fmt_t format);

/* Session stuff
 */
  typedef struct
  {
    void *iov_base;             /* Starting address */
    size_t iov_len;             /* Number of bytes to transfer */
  } giovec_t;

  typedef ssize_t (*gnutls_pull_func) (gnutls_transport_ptr_t, void *,
                                       size_t);
  typedef ssize_t (*gnutls_push_func) (gnutls_transport_ptr_t, const void *,
                                       size_t);

  typedef ssize_t (*gnutls_vec_push_func) (gnutls_transport_ptr_t,
                                           const giovec_t * iov, int iovcnt);

  typedef int (*gnutls_errno_func) (gnutls_transport_ptr_t);

  void gnutls_transport_set_ptr (gnutls_session_t session,
                                 gnutls_transport_ptr_t ptr);
  void gnutls_transport_set_ptr2 (gnutls_session_t session,
                                  gnutls_transport_ptr_t recv_ptr,
                                  gnutls_transport_ptr_t send_ptr);

  gnutls_transport_ptr_t gnutls_transport_get_ptr (gnutls_session_t session);
  void gnutls_transport_get_ptr2 (gnutls_session_t session,
                                  gnutls_transport_ptr_t * recv_ptr,
                                  gnutls_transport_ptr_t * send_ptr);



  void gnutls_transport_set_vec_push_function (gnutls_session_t session,
                                            gnutls_vec_push_func vec_func);
  void gnutls_transport_set_push_function (gnutls_session_t session,
                                           gnutls_push_func push_func);
  void gnutls_transport_set_pull_function (gnutls_session_t session,
                                           gnutls_pull_func pull_func);

  void gnutls_transport_set_errno_function (gnutls_session_t session,
                                            gnutls_errno_func errno_func);

  void gnutls_transport_set_errno (gnutls_session_t session, int err);

/* session specific 
 */
  void gnutls_session_set_ptr (gnutls_session_t session, void *ptr);
  void *gnutls_session_get_ptr (gnutls_session_t session);

  void gnutls_openpgp_send_cert (gnutls_session_t session,
                                 gnutls_openpgp_crt_status_t status);

/* fingerprint 
 * Actually this function returns the hash of the given data.
 */
  int gnutls_fingerprint (gnutls_digest_algorithm_t algo,
                          const gnutls_datum_t * data, void *result,
                          size_t * result_size);


/* SRP 
 */

  typedef struct gnutls_srp_server_credentials_st
    *gnutls_srp_server_credentials_t;
  typedef struct gnutls_srp_client_credentials_st
    *gnutls_srp_client_credentials_t;

  void
    gnutls_srp_free_client_credentials (gnutls_srp_client_credentials_t sc);
  int
    gnutls_srp_allocate_client_credentials (gnutls_srp_client_credentials_t *
                                            sc);
  int gnutls_srp_set_client_credentials (gnutls_srp_client_credentials_t res,
                                         const char *username,
                                         const char *password);

  void
    gnutls_srp_free_server_credentials (gnutls_srp_server_credentials_t sc);
  int
    gnutls_srp_allocate_server_credentials (gnutls_srp_server_credentials_t *
                                            sc);
  int gnutls_srp_set_server_credentials_file (gnutls_srp_server_credentials_t
                                              res, const char *password_file,
                                              const char *password_conf_file);

  const char *gnutls_srp_server_get_username (gnutls_session_t session);

  extern void gnutls_srp_set_prime_bits (gnutls_session_t session,
                                         unsigned int bits);

  int gnutls_srp_verifier (const char *username,
                           const char *password,
                           const gnutls_datum_t * salt,
                           const gnutls_datum_t * generator,
                           const gnutls_datum_t * prime,
                           gnutls_datum_t * res);

/* The static parameters defined in draft-ietf-tls-srp-05
 * Those should be used as input to gnutls_srp_verifier().
 */
  extern const gnutls_datum_t gnutls_srp_2048_group_prime;
  extern const gnutls_datum_t gnutls_srp_2048_group_generator;

  extern const gnutls_datum_t gnutls_srp_1536_group_prime;
  extern const gnutls_datum_t gnutls_srp_1536_group_generator;

  extern const gnutls_datum_t gnutls_srp_1024_group_prime;
  extern const gnutls_datum_t gnutls_srp_1024_group_generator;

  typedef int gnutls_srp_server_credentials_function (gnutls_session_t,
                                                      const char *username,
                                                      gnutls_datum_t * salt,
                                                      gnutls_datum_t *
                                                      verifier,
                                                      gnutls_datum_t *
                                                      generator,
                                                      gnutls_datum_t * prime);
  void
    gnutls_srp_set_server_credentials_function
    (gnutls_srp_server_credentials_t cred,
     gnutls_srp_server_credentials_function * func);

  typedef int gnutls_srp_client_credentials_function (gnutls_session_t,
                                                      char **, char **);
  void
    gnutls_srp_set_client_credentials_function
    (gnutls_srp_client_credentials_t cred,
     gnutls_srp_client_credentials_function * func);

  int gnutls_srp_base64_encode (const gnutls_datum_t * data, char *result,
                                size_t * result_size);
  int gnutls_srp_base64_encode_alloc (const gnutls_datum_t * data,
                                      gnutls_datum_t * result);

  int gnutls_srp_base64_decode (const gnutls_datum_t * b64_data, char *result,
                                size_t * result_size);
  int gnutls_srp_base64_decode_alloc (const gnutls_datum_t * b64_data,
                                      gnutls_datum_t * result);

/* PSK stuff */
  typedef struct gnutls_psk_server_credentials_st
    *gnutls_psk_server_credentials_t;
  typedef struct gnutls_psk_client_credentials_st
    *gnutls_psk_client_credentials_t;

  /**
   * gnutls_psk_key_flags:
   * @GNUTLS_PSK_KEY_RAW: PSK-key in raw format.
   * @GNUTLS_PSK_KEY_HEX: PSK-key in hex format.
   *
   * Enumeration of different PSK key flags.
   */
  typedef enum gnutls_psk_key_flags
  {
    GNUTLS_PSK_KEY_RAW = 0,
    GNUTLS_PSK_KEY_HEX
  } gnutls_psk_key_flags;

  void
    gnutls_psk_free_client_credentials (gnutls_psk_client_credentials_t sc);
  int
    gnutls_psk_allocate_client_credentials (gnutls_psk_client_credentials_t *
                                            sc);
  int gnutls_psk_set_client_credentials (gnutls_psk_client_credentials_t res,
                                         const char *username,
                                         const gnutls_datum_t * key,
                                         gnutls_psk_key_flags format);

  void
    gnutls_psk_free_server_credentials (gnutls_psk_server_credentials_t sc);
  int
    gnutls_psk_allocate_server_credentials (gnutls_psk_server_credentials_t *
                                            sc);
  int gnutls_psk_set_server_credentials_file (gnutls_psk_server_credentials_t
                                              res, const char *password_file);

  int
    gnutls_psk_set_server_credentials_hint (gnutls_psk_server_credentials_t
                                            res, const char *hint);

  const char *gnutls_psk_server_get_username (gnutls_session_t session);
  const char *gnutls_psk_client_get_hint (gnutls_session_t session);

  typedef int gnutls_psk_server_credentials_function (gnutls_session_t,
                                                      const char *username,
                                                      gnutls_datum_t * key);
  void
    gnutls_psk_set_server_credentials_function
    (gnutls_psk_server_credentials_t cred,
     gnutls_psk_server_credentials_function * func);

  typedef int gnutls_psk_client_credentials_function (gnutls_session_t,
                                                      char **username,
                                                      gnutls_datum_t * key);
  void
    gnutls_psk_set_client_credentials_function
    (gnutls_psk_client_credentials_t cred,
     gnutls_psk_client_credentials_function * func);

  int gnutls_hex_encode (const gnutls_datum_t * data, char *result,
                         size_t * result_size);
  int gnutls_hex_decode (const gnutls_datum_t * hex_data, char *result,
                         size_t * result_size);

  void
    gnutls_psk_set_server_dh_params (gnutls_psk_server_credentials_t res,
                                     gnutls_dh_params_t dh_params);

  void
    gnutls_psk_set_server_params_function (gnutls_psk_server_credentials_t
                                           res,
                                           gnutls_params_function * func);

  /**
   * gnutls_x509_subject_alt_name_t:
   * @GNUTLS_SAN_DNSNAME: DNS-name SAN.
   * @GNUTLS_SAN_RFC822NAME: E-mail address SAN.
   * @GNUTLS_SAN_URI: URI SAN.
   * @GNUTLS_SAN_IPADDRESS: IP address SAN.
   * @GNUTLS_SAN_OTHERNAME: OtherName SAN.
   * @GNUTLS_SAN_DN: DN SAN.
   * @GNUTLS_SAN_OTHERNAME_XMPP: Virtual SAN, used by
   *   gnutls_x509_crt_get_subject_alt_othername_oid().
   *
   * Enumeration of different subject alternative names types.
   */
  typedef enum gnutls_x509_subject_alt_name_t
  {
    GNUTLS_SAN_DNSNAME = 1,
    GNUTLS_SAN_RFC822NAME = 2,
    GNUTLS_SAN_URI = 3,
    GNUTLS_SAN_IPADDRESS = 4,
    GNUTLS_SAN_OTHERNAME = 5,
    GNUTLS_SAN_DN = 6,
    /* The following are "virtual" subject alternative name types, in
       that they are represented by an otherName value and an OID.
       Used by gnutls_x509_crt_get_subject_alt_othername_oid().  */
    GNUTLS_SAN_OTHERNAME_XMPP = 1000
  } gnutls_x509_subject_alt_name_t;

  struct gnutls_openpgp_crt_int;
  typedef struct gnutls_openpgp_crt_int *gnutls_openpgp_crt_t;

  struct gnutls_openpgp_privkey_int;
  typedef struct gnutls_openpgp_privkey_int *gnutls_openpgp_privkey_t;

  struct gnutls_pkcs11_privkey_st;
  typedef struct gnutls_pkcs11_privkey_st *gnutls_pkcs11_privkey_t;

  typedef enum
  {
    GNUTLS_PRIVKEY_X509,        /* gnutls_x509_privkey_t */
    GNUTLS_PRIVKEY_OPENPGP,     /* gnutls_openpgp_privkey_t */
    GNUTLS_PRIVKEY_PKCS11       /* gnutls_pkcs11_privkey_t */
  } gnutls_privkey_type_t;

  typedef struct gnutls_retr2_st
  {
    gnutls_certificate_type_t cert_type;
    gnutls_privkey_type_t key_type;

    union
    {
      gnutls_x509_crt_t *x509;
      gnutls_openpgp_crt_t pgp;
    } cert;
    unsigned int ncerts;        /* one for pgp keys */

    union
    {
      gnutls_x509_privkey_t x509;
      gnutls_openpgp_privkey_t pgp;
      gnutls_pkcs11_privkey_t pkcs11;
    } key;

    unsigned int deinit_all;    /* if non zero all keys will be deinited */
  } gnutls_retr2_st;


  /* Functions that allow auth_info_t structures handling
   */

  gnutls_credentials_type_t gnutls_auth_get_type (gnutls_session_t session);
    gnutls_credentials_type_t
    gnutls_auth_server_get_type (gnutls_session_t session);
    gnutls_credentials_type_t
    gnutls_auth_client_get_type (gnutls_session_t session);

  /* DH */

  void gnutls_dh_set_prime_bits (gnutls_session_t session, unsigned int bits);
  int gnutls_dh_get_secret_bits (gnutls_session_t session);
  int gnutls_dh_get_peers_public_bits (gnutls_session_t session);
  int gnutls_dh_get_prime_bits (gnutls_session_t session);

  int gnutls_dh_get_group (gnutls_session_t session, gnutls_datum_t * raw_gen,
                           gnutls_datum_t * raw_prime);
  int gnutls_dh_get_pubkey (gnutls_session_t session,
                            gnutls_datum_t * raw_key);

  /* RSA */
  int gnutls_rsa_export_get_pubkey (gnutls_session_t session,
                                    gnutls_datum_t * exponent,
                                    gnutls_datum_t * modulus);
  int gnutls_rsa_export_get_modulus_bits (gnutls_session_t session);

  /* X509PKI */


  /* These are set on the credentials structure.
   */

  typedef int gnutls_certificate_retrieve_function (gnutls_session_t,
                                                    const
                                                    gnutls_datum_t *
                                                    req_ca_rdn,
                                                    int nreqs,
                                                    const
                                                    gnutls_pk_algorithm_t
                                                    * pk_algos,
                                                    int
                                                    pk_algos_length,
                                                    gnutls_retr2_st *);


  void gnutls_certificate_set_retrieve_function
    (gnutls_certificate_credentials_t cred,
     gnutls_certificate_retrieve_function * func);

  typedef int gnutls_certificate_verify_function (gnutls_session_t);
  void
    gnutls_certificate_set_verify_function (gnutls_certificate_credentials_t
                                            cred,
                                            gnutls_certificate_verify_function
                                            * func);

  void
    gnutls_certificate_server_set_request (gnutls_session_t session,
                                           gnutls_certificate_request_t req);

  /* get data from the session
   */
  const gnutls_datum_t *gnutls_certificate_get_peers (gnutls_session_t
                                                      session,
                                                      unsigned int
                                                      *list_size);
  const gnutls_datum_t *gnutls_certificate_get_ours (gnutls_session_t
                                                     session);

  time_t gnutls_certificate_activation_time_peers (gnutls_session_t session);
  time_t gnutls_certificate_expiration_time_peers (gnutls_session_t session);

  int gnutls_certificate_client_get_request_status (gnutls_session_t session);
  int gnutls_certificate_verify_peers2 (gnutls_session_t session,
                                        unsigned int *status);

  int gnutls_pem_base64_encode (const char *msg, const gnutls_datum_t * data,
                                char *result, size_t * result_size);
  int gnutls_pem_base64_decode (const char *header,
                                const gnutls_datum_t * b64_data,
                                unsigned char *result, size_t * result_size);

  int gnutls_pem_base64_encode_alloc (const char *msg,
                                      const gnutls_datum_t * data,
                                      gnutls_datum_t * result);
  int gnutls_pem_base64_decode_alloc (const char *header,
                                      const gnutls_datum_t * b64_data,
                                      gnutls_datum_t * result);

  /* key_usage will be an OR of the following values:
   */

  /* when the key is to be used for signing: */
#define GNUTLS_KEY_DIGITAL_SIGNATURE	128
#define GNUTLS_KEY_NON_REPUDIATION	64
  /* when the key is to be used for encryption: */
#define GNUTLS_KEY_KEY_ENCIPHERMENT	32
#define GNUTLS_KEY_DATA_ENCIPHERMENT	16
#define GNUTLS_KEY_KEY_AGREEMENT	8
#define GNUTLS_KEY_KEY_CERT_SIGN	4
#define GNUTLS_KEY_CRL_SIGN		2
#define GNUTLS_KEY_ENCIPHER_ONLY	1
#define GNUTLS_KEY_DECIPHER_ONLY	32768

  void
    gnutls_certificate_set_params_function (gnutls_certificate_credentials_t
                                            res,
                                            gnutls_params_function * func);
  void gnutls_anon_set_params_function (gnutls_anon_server_credentials_t res,
                                        gnutls_params_function * func);
  void gnutls_psk_set_params_function (gnutls_psk_server_credentials_t res,
                                       gnutls_params_function * func);

  int gnutls_hex2bin (const char *hex_data, size_t hex_size,
                      char *bin_data, size_t * bin_size);

  /* Gnutls error codes. The mapping to a TLS alert is also shown in
   * comments.
   */

#define GNUTLS_E_SUCCESS 0
#define	GNUTLS_E_UNKNOWN_COMPRESSION_ALGORITHM -3
#define	GNUTLS_E_UNKNOWN_CIPHER_TYPE -6
#define	GNUTLS_E_LARGE_PACKET -7
#define GNUTLS_E_UNSUPPORTED_VERSION_PACKET -8  /* GNUTLS_A_PROTOCOL_VERSION */
#define GNUTLS_E_UNEXPECTED_PACKET_LENGTH -9    /* GNUTLS_A_RECORD_OVERFLOW */
#define GNUTLS_E_INVALID_SESSION -10
#define GNUTLS_E_FATAL_ALERT_RECEIVED -12
#define GNUTLS_E_UNEXPECTED_PACKET -15  /* GNUTLS_A_UNEXPECTED_MESSAGE */
#define GNUTLS_E_WARNING_ALERT_RECEIVED -16
#define GNUTLS_E_ERROR_IN_FINISHED_PACKET -18
#define GNUTLS_E_UNEXPECTED_HANDSHAKE_PACKET -19
#define	GNUTLS_E_UNKNOWN_CIPHER_SUITE -21       /* GNUTLS_A_HANDSHAKE_FAILURE */
#define	GNUTLS_E_UNWANTED_ALGORITHM -22
#define	GNUTLS_E_MPI_SCAN_FAILED -23
#define GNUTLS_E_DECRYPTION_FAILED -24  /* GNUTLS_A_DECRYPTION_FAILED, GNUTLS_A_BAD_RECORD_MAC */
#define GNUTLS_E_MEMORY_ERROR -25
#define GNUTLS_E_DECOMPRESSION_FAILED -26       /* GNUTLS_A_DECOMPRESSION_FAILURE */
#define GNUTLS_E_COMPRESSION_FAILED -27
#define GNUTLS_E_AGAIN -28
#define GNUTLS_E_EXPIRED -29
#define GNUTLS_E_DB_ERROR -30
#define GNUTLS_E_SRP_PWD_ERROR -31
#define GNUTLS_E_INSUFFICIENT_CREDENTIALS -32
#define GNUTLS_E_INSUFICIENT_CREDENTIALS GNUTLS_E_INSUFFICIENT_CREDENTIALS      /* for backwards compatibility only */
#define GNUTLS_E_INSUFFICIENT_CRED GNUTLS_E_INSUFFICIENT_CREDENTIALS
#define GNUTLS_E_INSUFICIENT_CRED GNUTLS_E_INSUFFICIENT_CREDENTIALS     /* for backwards compatibility only */

#define GNUTLS_E_HASH_FAILED -33
#define GNUTLS_E_BASE64_DECODING_ERROR -34

#define	GNUTLS_E_MPI_PRINT_FAILED -35
#define GNUTLS_E_REHANDSHAKE -37        /* GNUTLS_A_NO_RENEGOTIATION */
#define GNUTLS_E_GOT_APPLICATION_DATA -38
#define GNUTLS_E_RECORD_LIMIT_REACHED -39
#define GNUTLS_E_ENCRYPTION_FAILED -40

#define GNUTLS_E_PK_ENCRYPTION_FAILED -44
#define GNUTLS_E_PK_DECRYPTION_FAILED -45
#define GNUTLS_E_PK_SIGN_FAILED -46
#define GNUTLS_E_X509_UNSUPPORTED_CRITICAL_EXTENSION -47
#define GNUTLS_E_KEY_USAGE_VIOLATION -48
#define GNUTLS_E_NO_CERTIFICATE_FOUND -49       /* GNUTLS_A_BAD_CERTIFICATE */
#define GNUTLS_E_INVALID_REQUEST -50
#define GNUTLS_E_SHORT_MEMORY_BUFFER -51
#define GNUTLS_E_INTERRUPTED -52
#define GNUTLS_E_PUSH_ERROR -53
#define GNUTLS_E_PULL_ERROR -54
#define GNUTLS_E_RECEIVED_ILLEGAL_PARAMETER -55 /* GNUTLS_A_ILLEGAL_PARAMETER */
#define GNUTLS_E_REQUESTED_DATA_NOT_AVAILABLE -56
#define GNUTLS_E_PKCS1_WRONG_PAD -57
#define GNUTLS_E_RECEIVED_ILLEGAL_EXTENSION -58
#define GNUTLS_E_INTERNAL_ERROR -59
#define GNUTLS_E_DH_PRIME_UNACCEPTABLE -63
#define GNUTLS_E_FILE_ERROR -64
#define GNUTLS_E_TOO_MANY_EMPTY_PACKETS -78
#define GNUTLS_E_UNKNOWN_PK_ALGORITHM -80


  /* returned if libextra functionality was requested but
   * gnutls_global_init_extra() was not called.
   */
#define GNUTLS_E_INIT_LIBEXTRA -82
#define GNUTLS_E_LIBRARY_VERSION_MISMATCH -83


  /* returned if you need to generate temporary RSA
   * parameters. These are needed for export cipher suites.
   */
#define GNUTLS_E_NO_TEMPORARY_RSA_PARAMS -84

#define GNUTLS_E_LZO_INIT_FAILED -85
#define GNUTLS_E_NO_COMPRESSION_ALGORITHMS -86
#define GNUTLS_E_NO_CIPHER_SUITES -87

#define GNUTLS_E_OPENPGP_GETKEY_FAILED -88
#define GNUTLS_E_PK_SIG_VERIFY_FAILED -89

#define GNUTLS_E_ILLEGAL_SRP_USERNAME -90
#define GNUTLS_E_SRP_PWD_PARSING_ERROR -91
#define GNUTLS_E_NO_TEMPORARY_DH_PARAMS -93

  /* For certificate and key stuff
   */
#define GNUTLS_E_ASN1_ELEMENT_NOT_FOUND -67
#define GNUTLS_E_ASN1_IDENTIFIER_NOT_FOUND -68
#define GNUTLS_E_ASN1_DER_ERROR -69
#define GNUTLS_E_ASN1_VALUE_NOT_FOUND -70
#define GNUTLS_E_ASN1_GENERIC_ERROR -71
#define GNUTLS_E_ASN1_VALUE_NOT_VALID -72
#define GNUTLS_E_ASN1_TAG_ERROR -73
#define GNUTLS_E_ASN1_TAG_IMPLICIT -74
#define GNUTLS_E_ASN1_TYPE_ANY_ERROR -75
#define GNUTLS_E_ASN1_SYNTAX_ERROR -76
#define GNUTLS_E_ASN1_DER_OVERFLOW -77
#define GNUTLS_E_OPENPGP_UID_REVOKED -79
#define GNUTLS_E_CERTIFICATE_ERROR -43
#define GNUTLS_E_X509_CERTIFICATE_ERROR GNUTLS_E_CERTIFICATE_ERROR
#define GNUTLS_E_CERTIFICATE_KEY_MISMATCH -60
#define GNUTLS_E_UNSUPPORTED_CERTIFICATE_TYPE -61       /* GNUTLS_A_UNSUPPORTED_CERTIFICATE */
#define GNUTLS_E_X509_UNKNOWN_SAN -62
#define GNUTLS_E_OPENPGP_FINGERPRINT_UNSUPPORTED -94
#define GNUTLS_E_X509_UNSUPPORTED_ATTRIBUTE -95
#define GNUTLS_E_UNKNOWN_HASH_ALGORITHM -96
#define GNUTLS_E_UNKNOWN_PKCS_CONTENT_TYPE -97
#define GNUTLS_E_UNKNOWN_PKCS_BAG_TYPE -98
#define GNUTLS_E_INVALID_PASSWORD -99
#define GNUTLS_E_MAC_VERIFY_FAILED -100 /* for PKCS #12 MAC */
#define GNUTLS_E_CONSTRAINT_ERROR -101

#define GNUTLS_E_WARNING_IA_IPHF_RECEIVED -102
#define GNUTLS_E_WARNING_IA_FPHF_RECEIVED -103

#define GNUTLS_E_IA_VERIFY_FAILED -104
#define GNUTLS_E_UNKNOWN_ALGORITHM -105
#define GNUTLS_E_UNSUPPORTED_SIGNATURE_ALGORITHM -106
#define GNUTLS_E_SAFE_RENEGOTIATION_FAILED -107
#define GNUTLS_E_UNSAFE_RENEGOTIATION_DENIED -108
#define GNUTLS_E_UNKNOWN_SRP_USERNAME -109

#define GNUTLS_E_BASE64_ENCODING_ERROR -201
#define GNUTLS_E_INCOMPATIBLE_GCRYPT_LIBRARY -202       /* obsolete */
#define GNUTLS_E_INCOMPATIBLE_CRYPTO_LIBRARY -202
#define GNUTLS_E_INCOMPATIBLE_LIBTASN1_LIBRARY -203

#define GNUTLS_E_OPENPGP_KEYRING_ERROR -204
#define GNUTLS_E_X509_UNSUPPORTED_OID -205

#define GNUTLS_E_RANDOM_FAILED -206
#define GNUTLS_E_BASE64_UNEXPECTED_HEADER_ERROR -207

#define GNUTLS_E_OPENPGP_SUBKEY_ERROR -208

#define GNUTLS_E_CRYPTO_ALREADY_REGISTERED -209

#define GNUTLS_E_HANDSHAKE_TOO_LARGE -210

#define GNUTLS_E_CRYPTODEV_IOCTL_ERROR -211
#define GNUTLS_E_CRYPTODEV_DEVICE_ERROR -212

#define GNUTLS_E_CHANNEL_BINDING_NOT_AVAILABLE -213
#define GNUTLS_E_OPENPGP_PREFERRED_KEY_ERROR -215
#define GNUTLS_E_INCOMPAT_DSA_KEY_WITH_TLS_PROTOCOL -216

/* PKCS11 related */
#define GNUTLS_E_PKCS11_ERROR -300
#define GNUTLS_E_PKCS11_LOAD_ERROR -301
#define GNUTLS_E_PARSING_ERROR -302
#define GNUTLS_E_PKCS11_PIN_ERROR -303

#define GNUTLS_E_PKCS11_SLOT_ERROR -305
#define GNUTLS_E_LOCKING_ERROR -306
#define GNUTLS_E_PKCS11_ATTRIBUTE_ERROR -307
#define GNUTLS_E_PKCS11_DEVICE_ERROR -308
#define GNUTLS_E_PKCS11_DATA_ERROR -309
#define GNUTLS_E_PKCS11_UNSUPPORTED_FEATURE_ERROR -310
#define GNUTLS_E_PKCS11_KEY_ERROR -311
#define GNUTLS_E_PKCS11_PIN_EXPIRED -312
#define GNUTLS_E_PKCS11_PIN_LOCKED -313
#define GNUTLS_E_PKCS11_SESSION_ERROR -314
#define GNUTLS_E_PKCS11_SIGNATURE_ERROR -315
#define GNUTLS_E_PKCS11_TOKEN_ERROR -316
#define GNUTLS_E_PKCS11_USER_ERROR -317

#define GNUTLS_E_CRYPTO_INIT_FAILED -318
#define GNUTLS_E_CERTIFICATE_LIST_UNSORTED -324

#define GNUTLS_E_UNIMPLEMENTED_FEATURE -1250



#define GNUTLS_E_APPLICATION_ERROR_MAX -65000
#define GNUTLS_E_APPLICATION_ERROR_MIN -65500

#ifdef __cplusplus
}
#endif

#include <gnutls26/compat.h>

#endif                          /* GNUTLS_H */
