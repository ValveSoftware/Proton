/* strerror-override.c --- POSIX compatible system error routine

   Copyright (C) 2010-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* Written by Bruno Haible <bruno@clisp.org>, 2010.  */

#include <config.h>

#include "strerror-override.h"

#include <errno.h>

#if GNULIB_defined_EWINSOCK /* native Windows platforms */
# if HAVE_WINSOCK2_H
#  include <winsock2.h>
# endif
#endif

/* If ERRNUM maps to an errno value defined by gnulib, return a string
   describing the error.  Otherwise return NULL.  */
const char *
strerror_override (int errnum)
{
  /* These error messages are taken from glibc/sysdeps/gnu/errlist.c.  */
  switch (errnum)
    {
#if REPLACE_STRERROR_0
    case 0:
      return "Success";
#endif

#if GNULIB_defined_ESOCK /* native Windows platforms with older <errno.h> */
    case EINPROGRESS:
      return "Operation now in progress";
    case EALREADY:
      return "Operation already in progress";
    case ENOTSOCK:
      return "Socket operation on non-socket";
    case EDESTADDRREQ:
      return "Destination address required";
    case EMSGSIZE:
      return "Message too long";
    case EPROTOTYPE:
      return "Protocol wrong type for socket";
    case ENOPROTOOPT:
      return "Protocol not available";
    case EPROTONOSUPPORT:
      return "Protocol not supported";
    case EOPNOTSUPP:
      return "Operation not supported";
    case EAFNOSUPPORT:
      return "Address family not supported by protocol";
    case EADDRINUSE:
      return "Address already in use";
    case EADDRNOTAVAIL:
      return "Cannot assign requested address";
    case ENETDOWN:
      return "Network is down";
    case ENETUNREACH:
      return "Network is unreachable";
    case ECONNRESET:
      return "Connection reset by peer";
    case ENOBUFS:
      return "No buffer space available";
    case EISCONN:
      return "Transport endpoint is already connected";
    case ENOTCONN:
      return "Transport endpoint is not connected";
    case ETIMEDOUT:
      return "Connection timed out";
    case ECONNREFUSED:
      return "Connection refused";
    case ELOOP:
      return "Too many levels of symbolic links";
    case EHOSTUNREACH:
      return "No route to host";
    case EWOULDBLOCK:
      return "Operation would block";
#endif
#if GNULIB_defined_ESTREAMS /* native Windows platforms with older <errno.h> */
    case ETXTBSY:
      return "Text file busy";
    case ENODATA:
      return "No data available";
    case ENOSR:
      return "Out of streams resources";
    case ENOSTR:
      return "Device not a stream";
    case ETIME:
      return "Timer expired";
    case EOTHER:
      return "Other error";
#endif
#if GNULIB_defined_EWINSOCK /* native Windows platforms */
    case ESOCKTNOSUPPORT:
      return "Socket type not supported";
    case EPFNOSUPPORT:
      return "Protocol family not supported";
    case ESHUTDOWN:
      return "Cannot send after transport endpoint shutdown";
    case ETOOMANYREFS:
      return "Too many references: cannot splice";
    case EHOSTDOWN:
      return "Host is down";
    case EPROCLIM:
      return "Too many processes";
    case EUSERS:
      return "Too many users";
    case EDQUOT:
      return "Disk quota exceeded";
    case ESTALE:
      return "Stale NFS file handle";
    case EREMOTE:
      return "Object is remote";
# if HAVE_WINSOCK2_H
      /* WSA_INVALID_HANDLE maps to EBADF */
      /* WSA_NOT_ENOUGH_MEMORY maps to ENOMEM */
      /* WSA_INVALID_PARAMETER maps to EINVAL */
    case WSA_OPERATION_ABORTED:
      return "Overlapped operation aborted";
    case WSA_IO_INCOMPLETE:
      return "Overlapped I/O event object not in signaled state";
    case WSA_IO_PENDING:
      return "Overlapped operations will complete later";
      /* WSAEINTR maps to EINTR */
      /* WSAEBADF maps to EBADF */
      /* WSAEACCES maps to EACCES */
      /* WSAEFAULT maps to EFAULT */
      /* WSAEINVAL maps to EINVAL */
      /* WSAEMFILE maps to EMFILE */
      /* WSAEWOULDBLOCK maps to EWOULDBLOCK */
      /* WSAEINPROGRESS maps to EINPROGRESS */
      /* WSAEALREADY maps to EALREADY */
      /* WSAENOTSOCK maps to ENOTSOCK */
      /* WSAEDESTADDRREQ maps to EDESTADDRREQ */
      /* WSAEMSGSIZE maps to EMSGSIZE */
      /* WSAEPROTOTYPE maps to EPROTOTYPE */
      /* WSAENOPROTOOPT maps to ENOPROTOOPT */
      /* WSAEPROTONOSUPPORT maps to EPROTONOSUPPORT */
      /* WSAESOCKTNOSUPPORT is ESOCKTNOSUPPORT */
      /* WSAEOPNOTSUPP maps to EOPNOTSUPP */
      /* WSAEPFNOSUPPORT is EPFNOSUPPORT */
      /* WSAEAFNOSUPPORT maps to EAFNOSUPPORT */
      /* WSAEADDRINUSE maps to EADDRINUSE */
      /* WSAEADDRNOTAVAIL maps to EADDRNOTAVAIL */
      /* WSAENETDOWN maps to ENETDOWN */
      /* WSAENETUNREACH maps to ENETUNREACH */
      /* WSAENETRESET maps to ENETRESET */
      /* WSAECONNABORTED maps to ECONNABORTED */
      /* WSAECONNRESET maps to ECONNRESET */
      /* WSAENOBUFS maps to ENOBUFS */
      /* WSAEISCONN maps to EISCONN */
      /* WSAENOTCONN maps to ENOTCONN */
      /* WSAESHUTDOWN is ESHUTDOWN */
      /* WSAETOOMANYREFS is ETOOMANYREFS */
      /* WSAETIMEDOUT maps to ETIMEDOUT */
      /* WSAECONNREFUSED maps to ECONNREFUSED */
      /* WSAELOOP maps to ELOOP */
      /* WSAENAMETOOLONG maps to ENAMETOOLONG */
      /* WSAEHOSTDOWN is EHOSTDOWN */
      /* WSAEHOSTUNREACH maps to EHOSTUNREACH */
      /* WSAENOTEMPTY maps to ENOTEMPTY */
      /* WSAEPROCLIM is EPROCLIM */
      /* WSAEUSERS is EUSERS */
      /* WSAEDQUOT is EDQUOT */
      /* WSAESTALE is ESTALE */
      /* WSAEREMOTE is EREMOTE */
    case WSASYSNOTREADY:
      return "Network subsystem is unavailable";
    case WSAVERNOTSUPPORTED:
      return "Winsock.dll version out of range";
    case WSANOTINITIALISED:
      return "Successful WSAStartup not yet performed";
    case WSAEDISCON:
      return "Graceful shutdown in progress";
    case WSAENOMORE: case WSA_E_NO_MORE:
      return "No more results";
    case WSAECANCELLED: case WSA_E_CANCELLED:
      return "Call was canceled";
    case WSAEINVALIDPROCTABLE:
      return "Procedure call table is invalid";
    case WSAEINVALIDPROVIDER:
      return "Service provider is invalid";
    case WSAEPROVIDERFAILEDINIT:
      return "Service provider failed to initialize";
    case WSASYSCALLFAILURE:
      return "System call failure";
    case WSASERVICE_NOT_FOUND:
      return "Service not found";
    case WSATYPE_NOT_FOUND:
      return "Class type not found";
    case WSAEREFUSED:
      return "Database query was refused";
    case WSAHOST_NOT_FOUND:
      return "Host not found";
    case WSATRY_AGAIN:
      return "Nonauthoritative host not found";
    case WSANO_RECOVERY:
      return "Nonrecoverable error";
    case WSANO_DATA:
      return "Valid name, no data record of requested type";
      /* WSA_QOS_* omitted */
# endif
#endif

#if GNULIB_defined_ENOMSG
    case ENOMSG:
      return "No message of desired type";
#endif

#if GNULIB_defined_EIDRM
    case EIDRM:
      return "Identifier removed";
#endif

#if GNULIB_defined_ENOLINK
    case ENOLINK:
      return "Link has been severed";
#endif

#if GNULIB_defined_EPROTO
    case EPROTO:
      return "Protocol error";
#endif

#if GNULIB_defined_EMULTIHOP
    case EMULTIHOP:
      return "Multihop attempted";
#endif

#if GNULIB_defined_EBADMSG
    case EBADMSG:
      return "Bad message";
#endif

#if GNULIB_defined_EOVERFLOW
    case EOVERFLOW:
      return "Value too large for defined data type";
#endif

#if GNULIB_defined_ENOTSUP
    case ENOTSUP:
      return "Not supported";
#endif

#if GNULIB_defined_ENETRESET
    case ENETRESET:
      return "Network dropped connection on reset";
#endif

#if GNULIB_defined_ECONNABORTED
    case ECONNABORTED:
      return "Software caused connection abort";
#endif

#if GNULIB_defined_ESTALE
    case ESTALE:
      return "Stale NFS file handle";
#endif

#if GNULIB_defined_EDQUOT
    case EDQUOT:
      return "Disk quota exceeded";
#endif

#if GNULIB_defined_ECANCELED
    case ECANCELED:
      return "Operation canceled";
#endif

#if GNULIB_defined_EOWNERDEAD
    case EOWNERDEAD:
      return "Owner died";
#endif

#if GNULIB_defined_ENOTRECOVERABLE
    case ENOTRECOVERABLE:
      return "State not recoverable";
#endif

#if GNULIB_defined_EILSEQ
    case EILSEQ:
      return "Invalid or incomplete multibyte or wide character";
#endif

    default:
      return NULL;
    }
}
