# javaexec.m4 serial 5
dnl Copyright (C) 2001-2003, 2006, 2009-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# Prerequisites of javaexec.sh.
# gt_JAVAEXEC or gt_JAVAEXEC(testclass, its-directory)
# Sets HAVE_JAVAEXEC to nonempty if javaexec.sh will work.

AC_DEFUN([gt_JAVAEXEC],
[
  AC_MSG_CHECKING([for Java virtual machine])
  AC_EGREP_CPP([yes], [
#if defined _WIN32 || defined __WIN32__ || defined __CYGWIN__ || defined __EMX__ || defined __DJGPP__
  yes
#endif
], CLASSPATH_SEPARATOR=';', CLASSPATH_SEPARATOR=':')
  CONF_JAVA=
  HAVE_JAVA_ENVVAR=
  HAVE_GIJ=
  HAVE_JAVA=
  HAVE_JRE=
  HAVE_JVIEW=
  HAVE_JAVAEXEC=1
  if test -n "$JAVA"; then
    HAVE_JAVA_ENVVAR=1
    CONF_JAVA="$JAVA"
  else
    pushdef([AC_MSG_CHECKING],[:])dnl
    pushdef([AC_CHECKING],[:])dnl
    pushdef([AC_MSG_RESULT],[:])dnl
    AC_CHECK_PROG([HAVE_GIJ_IN_PATH], [gij], [yes])
    AC_CHECK_PROG([HAVE_JAVA_IN_PATH], [java], [yes])
    AC_CHECK_PROG([HAVE_JRE_IN_PATH], [jre], [yes])
    AC_CHECK_PROG([HAVE_JVIEW_IN_PATH], [jview], [yes])
    popdef([AC_MSG_RESULT])dnl
    popdef([AC_CHECKING])dnl
    popdef([AC_MSG_CHECKING])dnl
    ifelse([$1], , , [
      save_CLASSPATH="$CLASSPATH"
      CLASSPATH="$2"${CLASSPATH+"$CLASSPATH_SEPARATOR$CLASSPATH"}
      ])
    export CLASSPATH
    if test -n "$HAVE_GIJ_IN_PATH" \
       && gij --version >/dev/null 2>/dev/null \
       ifelse([$1], , , [&& {
         echo "$as_me:__oline__: gij $1" >&AS_MESSAGE_LOG_FD
         gij $1 >&AS_MESSAGE_LOG_FD 2>&1
       }]); then
      HAVE_GIJ=1
      CONF_JAVA="gij"
    else
      if test -n "$HAVE_JAVA_IN_PATH" \
         && java -version >/dev/null 2>/dev/null \
         ifelse([$1], , , [&& {
           echo "$as_me:__oline__: gij $1" >&AS_MESSAGE_LOG_FD
           java $1 >&AS_MESSAGE_LOG_FD 2>&1
         }]); then
        HAVE_JAVA=1
        CONF_JAVA="java"
      else
        if test -n "$HAVE_JRE_IN_PATH" \
           && (jre >/dev/null 2>/dev/null || test $? = 1) \
           ifelse([$1], , , [&& {
             echo "$as_me:__oline__: gij $1" >&AS_MESSAGE_LOG_FD
             jre $1 >&AS_MESSAGE_LOG_FD 2>&1
           }]); then
          HAVE_JRE=1
          CONF_JAVA="jre"
        else
          if test -n "$HAVE_JVIEW_IN_PATH" \
             && (jview -? >/dev/null 2>/dev/null || test $? = 1) \
             ifelse([$1], , , [&& {
               echo "$as_me:__oline__: gij $1" >&AS_MESSAGE_LOG_FD
               jview $1 >&AS_MESSAGE_LOG_FD 2>&1
             }]); then
            HAVE_JVIEW=1
            CONF_JAVA="jview"
          else
            HAVE_JAVAEXEC=
          fi
        fi
      fi
    fi
    ifelse([$1], , , [
      CLASSPATH="$save_CLASSPATH"
    ])
  fi
  if test -n "$HAVE_JAVAEXEC"; then
    ac_result="$CONF_JAVA"
  else
    ac_result="no"
  fi
  AC_MSG_RESULT([$ac_result])
  AC_SUBST([CONF_JAVA])
  AC_SUBST([CLASSPATH])
  AC_SUBST([CLASSPATH_SEPARATOR])
  AC_SUBST([HAVE_JAVA_ENVVAR])
  AC_SUBST([HAVE_GIJ])
  AC_SUBST([HAVE_JAVA])
  AC_SUBST([HAVE_JRE])
  AC_SUBST([HAVE_JVIEW])
])
