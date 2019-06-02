# sys_socket_h.m4 serial 23
dnl Copyright (C) 2005-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

dnl From Simon Josefsson.

AC_DEFUN([gl_HEADER_SYS_SOCKET],
[
  AC_REQUIRE([gl_SYS_SOCKET_H_DEFAULTS])
  AC_REQUIRE([AC_CANONICAL_HOST])

  dnl On OSF/1, the functions recv(), send(), recvfrom(), sendto() have
  dnl old-style declarations (with return type 'int' instead of 'ssize_t')
  dnl unless _POSIX_PII_SOCKET is defined.
  case "$host_os" in
    osf*)
      AC_DEFINE([_POSIX_PII_SOCKET], [1],
        [Define to 1 in order to get the POSIX compatible declarations
         of socket functions.])
      ;;
  esac

  AC_CACHE_CHECK([whether <sys/socket.h> is self-contained],
    [gl_cv_header_sys_socket_h_selfcontained],
    [
      AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[#include <sys/socket.h>]], [[]])],
        [gl_cv_header_sys_socket_h_selfcontained=yes],
        [gl_cv_header_sys_socket_h_selfcontained=no])
    ])
  if test $gl_cv_header_sys_socket_h_selfcontained = yes; then
    dnl If the shutdown function exists, <sys/socket.h> should define
    dnl SHUT_RD, SHUT_WR, SHUT_RDWR.
    AC_CHECK_FUNCS([shutdown])
    if test $ac_cv_func_shutdown = yes; then
      AC_CACHE_CHECK([whether <sys/socket.h> defines the SHUT_* macros],
        [gl_cv_header_sys_socket_h_shut],
        [
          AC_COMPILE_IFELSE(
            [AC_LANG_PROGRAM([[#include <sys/socket.h>]],
               [[int a[] = { SHUT_RD, SHUT_WR, SHUT_RDWR };]])],
            [gl_cv_header_sys_socket_h_shut=yes],
            [gl_cv_header_sys_socket_h_shut=no])
        ])
      if test $gl_cv_header_sys_socket_h_shut = no; then
        SYS_SOCKET_H='sys/socket.h'
      fi
    fi
  fi
  # We need to check for ws2tcpip.h now.
  gl_PREREQ_SYS_H_SOCKET
  AC_CHECK_TYPES([struct sockaddr_storage, sa_family_t],,,[
  /* sys/types.h is not needed according to POSIX, but the
     sys/socket.h in i386-unknown-freebsd4.10 and
     powerpc-apple-darwin5.5 required it. */
#include <sys/types.h>
#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif
#ifdef HAVE_WS2TCPIP_H
#include <ws2tcpip.h>
#endif
])
  if test $ac_cv_type_struct_sockaddr_storage = no; then
    HAVE_STRUCT_SOCKADDR_STORAGE=0
  fi
  if test $ac_cv_type_sa_family_t = no; then
    HAVE_SA_FAMILY_T=0
  fi
  if test $ac_cv_type_struct_sockaddr_storage != no; then
    AC_CHECK_MEMBERS([struct sockaddr_storage.ss_family],
      [],
      [HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY=0],
      [#include <sys/types.h>
       #ifdef HAVE_SYS_SOCKET_H
       #include <sys/socket.h>
       #endif
       #ifdef HAVE_WS2TCPIP_H
       #include <ws2tcpip.h>
       #endif
      ])
  fi
  if test $HAVE_STRUCT_SOCKADDR_STORAGE = 0 || test $HAVE_SA_FAMILY_T = 0 \
     || test $HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY = 0; then
    SYS_SOCKET_H='sys/socket.h'
  fi
  gl_PREREQ_SYS_H_WINSOCK2

  dnl Check for declarations of anything we want to poison if the
  dnl corresponding gnulib module is not in use.
  gl_WARN_ON_USE_PREPARE([[
/* Some systems require prerequisite headers.  */
#include <sys/types.h>
#include <sys/socket.h>
    ]], [socket connect accept bind getpeername getsockname getsockopt
    listen recv send recvfrom sendto setsockopt shutdown accept4])
])

AC_DEFUN([gl_PREREQ_SYS_H_SOCKET],
[
  dnl Check prerequisites of the <sys/socket.h> replacement.
  AC_REQUIRE([gl_CHECK_SOCKET_HEADERS])
  gl_CHECK_NEXT_HEADERS([sys/socket.h])
  if test $ac_cv_header_sys_socket_h = yes; then
    HAVE_SYS_SOCKET_H=1
    HAVE_WS2TCPIP_H=0
  else
    HAVE_SYS_SOCKET_H=0
    if test $ac_cv_header_ws2tcpip_h = yes; then
      HAVE_WS2TCPIP_H=1
    else
      HAVE_WS2TCPIP_H=0
    fi
  fi
  AC_SUBST([HAVE_SYS_SOCKET_H])
  AC_SUBST([HAVE_WS2TCPIP_H])
])

# Common prerequisites of the <sys/socket.h> replacement and of the
# <sys/select.h> replacement.
# Sets and substitutes HAVE_WINSOCK2_H.
AC_DEFUN([gl_PREREQ_SYS_H_WINSOCK2],
[
  m4_ifdef([gl_UNISTD_H_DEFAULTS], [AC_REQUIRE([gl_UNISTD_H_DEFAULTS])])
  m4_ifdef([gl_SYS_IOCTL_H_DEFAULTS], [AC_REQUIRE([gl_SYS_IOCTL_H_DEFAULTS])])
  AC_CHECK_HEADERS_ONCE([sys/socket.h])
  if test $ac_cv_header_sys_socket_h != yes; then
    dnl We cannot use AC_CHECK_HEADERS_ONCE here, because that would make
    dnl the check for those headers unconditional; yet cygwin reports
    dnl that the headers are present but cannot be compiled (since on
    dnl cygwin, all socket information should come from sys/socket.h).
    AC_CHECK_HEADERS([winsock2.h])
  fi
  if test "$ac_cv_header_winsock2_h" = yes; then
    HAVE_WINSOCK2_H=1
    UNISTD_H_HAVE_WINSOCK2_H=1
    SYS_IOCTL_H_HAVE_WINSOCK2_H=1
  else
    HAVE_WINSOCK2_H=0
  fi
  AC_SUBST([HAVE_WINSOCK2_H])
])

AC_DEFUN([gl_SYS_SOCKET_MODULE_INDICATOR],
[
  dnl Use AC_REQUIRE here, so that the default settings are expanded once only.
  AC_REQUIRE([gl_SYS_SOCKET_H_DEFAULTS])
  gl_MODULE_INDICATOR_SET_VARIABLE([$1])
  dnl Define it also as a C macro, for the benefit of the unit tests.
  gl_MODULE_INDICATOR_FOR_TESTS([$1])
])

AC_DEFUN([gl_SYS_SOCKET_H_DEFAULTS],
[
  GNULIB_SOCKET=0;      AC_SUBST([GNULIB_SOCKET])
  GNULIB_CONNECT=0;     AC_SUBST([GNULIB_CONNECT])
  GNULIB_ACCEPT=0;      AC_SUBST([GNULIB_ACCEPT])
  GNULIB_BIND=0;        AC_SUBST([GNULIB_BIND])
  GNULIB_GETPEERNAME=0; AC_SUBST([GNULIB_GETPEERNAME])
  GNULIB_GETSOCKNAME=0; AC_SUBST([GNULIB_GETSOCKNAME])
  GNULIB_GETSOCKOPT=0;  AC_SUBST([GNULIB_GETSOCKOPT])
  GNULIB_LISTEN=0;      AC_SUBST([GNULIB_LISTEN])
  GNULIB_RECV=0;        AC_SUBST([GNULIB_RECV])
  GNULIB_SEND=0;        AC_SUBST([GNULIB_SEND])
  GNULIB_RECVFROM=0;    AC_SUBST([GNULIB_RECVFROM])
  GNULIB_SENDTO=0;      AC_SUBST([GNULIB_SENDTO])
  GNULIB_SETSOCKOPT=0;  AC_SUBST([GNULIB_SETSOCKOPT])
  GNULIB_SHUTDOWN=0;    AC_SUBST([GNULIB_SHUTDOWN])
  GNULIB_ACCEPT4=0;     AC_SUBST([GNULIB_ACCEPT4])
  HAVE_STRUCT_SOCKADDR_STORAGE=1; AC_SUBST([HAVE_STRUCT_SOCKADDR_STORAGE])
  HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY=1;
                        AC_SUBST([HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY])
  HAVE_SA_FAMILY_T=1;   AC_SUBST([HAVE_SA_FAMILY_T])
  HAVE_ACCEPT4=1;       AC_SUBST([HAVE_ACCEPT4])
])
