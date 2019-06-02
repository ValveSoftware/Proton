/* Provide a more complete sys/time.h.

   Copyright (C) 2007-2015 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.  */

/* Written by Paul Eggert.  */

#ifndef _@GUARD_PREFIX@_SYS_TIME_H

#if __GNUC__ >= 3
@PRAGMA_SYSTEM_HEADER@
#endif
@PRAGMA_COLUMNS@

/* On Cygwin and on many BSDish systems, <sys/time.h> includes itself
   recursively via <sys/select.h>.
   Simply delegate to the system's header in this case; it is a no-op.
   Without this extra ifdef, the C++ gettimeofday declaration below
   would be a forward declaration in gnulib's nested <sys/time.h>.  */
#if defined _CYGWIN_SYS_TIME_H || defined _SYS_TIME_H || defined _SYS_TIME_H_
# @INCLUDE_NEXT@ @NEXT_SYS_TIME_H@
#else

/* The include_next requires a split double-inclusion guard.  */
#if @HAVE_SYS_TIME_H@
# @INCLUDE_NEXT@ @NEXT_SYS_TIME_H@
#endif

#ifndef _@GUARD_PREFIX@_SYS_TIME_H
#define _@GUARD_PREFIX@_SYS_TIME_H

#if ! @HAVE_SYS_TIME_H@
# include <time.h>
#endif

/* On native Windows with MSVC, get the 'struct timeval' type.
   Also, on native Windows with a 64-bit time_t, where we are overriding the
   'struct timeval' type, get all declarations of system functions whose
   signature contains 'struct timeval'.  */
#if (defined _MSC_VER || @REPLACE_STRUCT_TIMEVAL@) && @HAVE_WINSOCK2_H@ && !defined _GL_INCLUDING_WINSOCK2_H
# define _GL_INCLUDING_WINSOCK2_H
# include <winsock2.h>
# undef _GL_INCLUDING_WINSOCK2_H
#endif

/* The definitions of _GL_FUNCDECL_RPL etc. are copied here.  */

/* The definition of _GL_ARG_NONNULL is copied here.  */

/* The definition of _GL_WARN_ON_USE is copied here.  */

#ifdef __cplusplus
extern "C" {
#endif

#if !@HAVE_STRUCT_TIMEVAL@ || @REPLACE_STRUCT_TIMEVAL@

# if @REPLACE_STRUCT_TIMEVAL@
#  define timeval rpl_timeval
# endif

# if !GNULIB_defined_struct_timeval
struct timeval
{
  time_t tv_sec;
  long int tv_usec;
};
#  define GNULIB_defined_struct_timeval 1
# endif

#endif

#ifdef __cplusplus
}
#endif

#if @GNULIB_GETTIMEOFDAY@
# if @REPLACE_GETTIMEOFDAY@
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef gettimeofday
#   define gettimeofday rpl_gettimeofday
#  endif
_GL_FUNCDECL_RPL (gettimeofday, int,
                  (struct timeval *restrict, void *restrict)
                  _GL_ARG_NONNULL ((1)));
_GL_CXXALIAS_RPL (gettimeofday, int,
                  (struct timeval *restrict, void *restrict));
# else
#  if !@HAVE_GETTIMEOFDAY@
_GL_FUNCDECL_SYS (gettimeofday, int,
                  (struct timeval *restrict, void *restrict)
                  _GL_ARG_NONNULL ((1)));
#  endif
/* Need to cast, because on glibc systems, by default, the second argument is
                                                  struct timezone *.  */
_GL_CXXALIAS_SYS_CAST (gettimeofday, int,
                       (struct timeval *restrict, void *restrict));
# endif
_GL_CXXALIASWARN (gettimeofday);
#elif defined GNULIB_POSIXCHECK
# undef gettimeofday
# if HAVE_RAW_DECL_GETTIMEOFDAY
_GL_WARN_ON_USE (gettimeofday, "gettimeofday is unportable - "
                 "use gnulib module gettimeofday for portability");
# endif
#endif

/* Hide some function declarations from <winsock2.h>.  */

#if defined _MSC_VER && @HAVE_WINSOCK2_H@
# if !defined _@GUARD_PREFIX@_UNISTD_H
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef close
#   define close close_used_without_including_unistd_h
#  else
     _GL_WARN_ON_USE (close,
                      "close() used without including <unistd.h>");
#  endif
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef gethostname
#   define gethostname gethostname_used_without_including_unistd_h
#  else
     _GL_WARN_ON_USE (gethostname,
                      "gethostname() used without including <unistd.h>");
#  endif
# endif
# if !defined _@GUARD_PREFIX@_SYS_SOCKET_H
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef socket
#   define socket              socket_used_without_including_sys_socket_h
#   undef connect
#   define connect             connect_used_without_including_sys_socket_h
#   undef accept
#   define accept              accept_used_without_including_sys_socket_h
#   undef bind
#   define bind                bind_used_without_including_sys_socket_h
#   undef getpeername
#   define getpeername         getpeername_used_without_including_sys_socket_h
#   undef getsockname
#   define getsockname         getsockname_used_without_including_sys_socket_h
#   undef getsockopt
#   define getsockopt          getsockopt_used_without_including_sys_socket_h
#   undef listen
#   define listen              listen_used_without_including_sys_socket_h
#   undef recv
#   define recv                recv_used_without_including_sys_socket_h
#   undef send
#   define send                send_used_without_including_sys_socket_h
#   undef recvfrom
#   define recvfrom            recvfrom_used_without_including_sys_socket_h
#   undef sendto
#   define sendto              sendto_used_without_including_sys_socket_h
#   undef setsockopt
#   define setsockopt          setsockopt_used_without_including_sys_socket_h
#   undef shutdown
#   define shutdown            shutdown_used_without_including_sys_socket_h
#  else
     _GL_WARN_ON_USE (socket,
                      "socket() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (connect,
                      "connect() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (accept,
                      "accept() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (bind,
                      "bind() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (getpeername,
                      "getpeername() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (getsockname,
                      "getsockname() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (getsockopt,
                      "getsockopt() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (listen,
                      "listen() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (recv,
                      "recv() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (send,
                      "send() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (recvfrom,
                      "recvfrom() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (sendto,
                      "sendto() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (setsockopt,
                      "setsockopt() used without including <sys/socket.h>");
     _GL_WARN_ON_USE (shutdown,
                      "shutdown() used without including <sys/socket.h>");
#  endif
# endif
# if !defined _@GUARD_PREFIX@_SYS_SELECT_H
#  if !(defined __cplusplus && defined GNULIB_NAMESPACE)
#   undef select
#   define select select_used_without_including_sys_select_h
#  else
     _GL_WARN_ON_USE (select,
                      "select() used without including <sys/select.h>");
#  endif
# endif
#endif

#endif /* _@GUARD_PREFIX@_SYS_TIME_H */
#endif /* _CYGWIN_SYS_TIME_H */
#endif /* _@GUARD_PREFIX@_SYS_TIME_H */
