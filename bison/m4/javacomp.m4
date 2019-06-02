# javacomp.m4 serial 12
dnl Copyright (C) 2001-2003, 2006-2007, 2009-2015 Free Software Foundation,
dnl Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

# Prerequisites of javacomp.sh.
# gt_JAVACOMP([source-version], [target-version])
# Sets HAVE_JAVACOMP to nonempty if javacomp.sh will allow Java source code
# according to source-version to be compiled to Java bytecode classes in the
# target-version format.
#
# source-version can be:    support for
#           1.3             inner classes
#           1.4             assert keyword
#           1.5             generic classes and methods
#           1.6             (not yet supported)
#
# target-version can be:  classfile version:
#           1.1                 45.3
#           1.2                 46.0
#           1.3                 47.0
#           1.4                 48.0
#           1.5                 49.0
#           1.6                 50.0
# The classfile version of a .class file can be determined through the "file"
# command. More portably, the classfile major version can be determined through
# "od -A n -t d1 -j 7 -N 1 classfile".
# target-version can also be omitted. In this case, the required target-version
# is determined from the found JVM (see macro gt_JAVAEXEC):
#      target-version   for JVM
#           1.1         JDK 1.1, jview
#           1.2         JDK/JRE 1.2
#           1.3         JDK/JRE 1.3, gij 3.3, 3.4
#           1.4         JDK/JRE 1.4, gij 4.0, 4.1
#           1.5         JDK/JRE 1.5
#           1.6         JDK/JRE 1.6
# Note: gij >= 3.3 can in some cases handle classes compiled with -target 1.4,
# and gij >= 4.1 can in some cases partially handle classes compiled with
# -target 1.5, but I have no idea how complete this support is.
#
# Specifying target-version is useful when building a library (.jar) that is
# useful outside the given package. Omitting target-version is useful when
# building an application.
#
# It is unreasonable to ask for:
#   - target-version < 1.4 with source-version >= 1.4, or
#   - target-version < 1.5 with source-version >= 1.5, or
#   - target-version < 1.6 with source-version >= 1.6,
# because even Sun's javac doesn't support these combinations.
#
# It is redundant to ask for a target-version > source-version, since the
# smaller target-version = source-version will also always work and newer JVMs
# support the older target-versions too. Except for the case
# target-version = 1.4, source-version = 1.3, which allows gcj versions 3.0
# to 3.2 to be used.

AC_DEFUN([gt_JAVACOMP],
[
  ifelse([$2], [], [AC_REQUIRE([gt_JAVAEXEC])], [])
  AC_EGREP_CPP([yes], [
#if defined _WIN32 || defined __WIN32__ || defined __CYGWIN__ || defined __EMX__ || defined __DJGPP__
  yes
#endif
], CLASSPATH_SEPARATOR=';', CLASSPATH_SEPARATOR=':')
  source_version=$1
  test -n "$source_version" || {
    AC_MSG_ERROR([missing source-version argument to gt_@&t@JAVACOMP])
  }
  ifelse([$2], [],
    [if test -n "$HAVE_JAVAEXEC"; then
       dnl Use $CONF_JAVA to determine the JVM's version.
changequote(,)dnl
       cat > conftestver.java <<EOF
public class conftestver {
  public static void main (String[] args) {
    System.out.println(System.getProperty("java.specification.version"));
  }
}
EOF
changequote([,])dnl
       dnl A precompiled version of conftestver.java, compiled with
       dnl "javac -target 1.1". This avoids having to compile conftestver.java
       dnl during each test for a suitable Java compiler.
       dnl For the conversion from binary to this ASCII encapsulation, avoiding
       dnl to assume the presence of uudecode, use the command
       dnl   $ od -A n -t o1 < conftestver.class | tr ' ' '\012'| sort | uniq | sed -e '/^$/d' -e 's,^,\\,' | tr -d '\012'
       dnl and the long tr command in opposite direction.
       dnl Finally move the position corresponding to \055 to the last position,
       dnl to work around a coreutils-5.x bug.
       echo 'yzwx!$!I!D,!)!3+!4!5*!6,!4!7,!8!9)!:)!;"!(MeienN"!$FGW"!%Ojab"!2QeibRohZblVYZgb"!%hYei"!9FXQfYpYKgYidKUnleidLGW"!,Ujol_bPegb"!3_jicnbmnpblJfYpY/!*!+)!</!=!>"!=fYpYJmkb_ece_YnejiJpblmeji/!?!@)!A/!B!C"!._jicnbmnpbl"!3fYpYKgYidKSZfb_n"!3fYpYKgYidKUqmnbh"!$jon"!8QfYpYKejKTleinUnlbYhL"!.dbnTljkblnq"!EFQfYpYKgYidKUnleidLGQfYpYKgYidKUnleidL"!6fYpYKejKTleinUnlbYh"!)kleingi"!8FQfYpYKgYidKUnleidLGW!D!(!)!!!!!#!"!*!+!"!,!!!@!"!"!!!&Hu!"r!!!"!.!!!(!"!!!"!+!/!0!"!,!!!F!#!"!!!/s!#5$v!%t!&r!!!"!.!!!,!#!!!$!.!%!"!1!!!#!2' \
         | tr -d '\012\015' \
         | tr '!"#$%&()*+,./0123456789:;<=>?@ABCDEFGHJKLMNOPQRSTUVWXYZ_abcdefghijklmnopqrstuvwxyzI' '\000\001\002\003\004\005\006\007\010\011\012\013\014\015\016\017\020\021\022\023\024\025\026\027\030\031\032\033\034\035\036\037\040\041\046\050\051\052\056\057\073\074\076\103\106\114\116\117\120\123\124\126\133\141\142\143\144\145\146\147\151\152\154\155\156\157\160\162\163\164\165\166\171\261\262\266\267\270\272\276\312\376\055' \
         > conftestver.class
       target_version=`{
         unset JAVA_HOME
         echo "$as_me:__oline__: CLASSPATH=.${CLASSPATH:+$CLASSPATH_SEPARATOR$CLASSPATH} $CONF_JAVA conftestver" >&AS_MESSAGE_LOG_FD
         CLASSPATH=.${CLASSPATH:+$CLASSPATH_SEPARATOR$CLASSPATH} $CONF_JAVA conftestver 2>&AS_MESSAGE_LOG_FD
       }`
       case "$target_version" in
         1.1 | 1.2 | 1.3 | 1.4 | 1.5 | 1.6) ;;
         null)
           dnl JDK 1.1.X returns null.
           target_version=1.1 ;;
         *) AC_MSG_WARN([unknown target-version $target_version, please update gt_@&t@JAVACOMP macro])
            target_version=1.1 ;;
       esac
     else
       target_version="1.1"
     fi
    ],
    [target_version=$2])
  case "$source_version" in
    1.3) goodcode='class conftest {}'
         failcode='class conftestfail { static { assert(true); } }' ;;
    1.4) goodcode='class conftest     { static { assert(true); } }'
         failcode='class conftestfail<T> { T foo() { return null; } }' ;;
    1.5) goodcode='class conftest<T>     { T foo() { return null; } }'
         failcode='class conftestfail syntax error' ;;
    *) AC_MSG_ERROR([invalid source-version argument to gt_@&t@JAVACOMP: $source_version]) ;;
  esac
  case "$target_version" in
    1.1) cfversion=45 ;;
    1.2) cfversion=46 ;;
    1.3) cfversion=47 ;;
    1.4) cfversion=48 ;;
    1.5) cfversion=49 ;;
    1.6) cfversion=50 ;;
    *) AC_MSG_ERROR([invalid target-version argument to gt_@&t@JAVACOMP: $target_version]) ;;
  esac
  # Function to output the classfile version of a file (8th byte) in decimal.
  if od -A x < /dev/null >/dev/null 2>/dev/null; then
    # Use POSIX od.
    func_classfile_version ()
    {
      od -A n -t d1 -j 7 -N 1 "[$]1"
    }
  else
    # Use BSD hexdump.
    func_classfile_version ()
    {
      dd if="[$]1" bs=1 count=1 skip=7 2>/dev/null | hexdump -e '1/1 "%3d "'
      echo
    }
  fi
  AC_MSG_CHECKING([for Java compiler])
  dnl
  dnl The support of GNU gcj for target-version and source-version:
  dnl
  dnl   gcj 3.0.4 to 4.2 does not have a way to specify the target-version.
  dnl   It always assumes target-version=1.4 but labels the class files as 1.1.
  dnl   One consequence of this is that gcj compiles GetURL.java to invalid
  dnl   bytecode, which crashes with a VerifyError when executed by Sun Java
  dnl   1.3.1. The bug is registered as java/7066, see
  dnl   http://gcc.gnu.org/bugzilla/show_bug.cgi?id=7066
  dnl   gcj 4.3 and newer has an option -ftarget=1.X.
  dnl
  dnl   For gcj < 3.3, the source-version always is 1.3.
  dnl   For 3.3 <= gcj < 4.3, the source-version defaults to 1.4; option
  dnl   "-fno-assert" switches to source-version 1.3.
  dnl   gcj >= 4.3 has an option -fsource=1.X.
  dnl
  dnl The support of Sun javac for target-version and source-version:
  dnl
  dnl   javac 1.3:   -target 1.1 1.2 1.3               default: 1.1
  dnl                                                  source always: 1.3
  dnl
  dnl   javac 1.4:   -target 1.1 1.2 1.3 1.4           default: 1.2
  dnl                -source 1.3 1.4                   default: 1.3
  dnl                -target 1.1/1.2/1.3 only possible with -source 1.3 or no -source
  dnl
  dnl   javac 1.5:   -target 1.1 1.2 1.3 1.4 1.5       default: 1.5
  dnl                -source 1.3 1.4 1.5               default: 1.5
  dnl                -target 1.1/1.2/1.3 only possible with -source 1.3
  dnl                -target 1.4 only possible with -source 1.3/1.4
  dnl
  dnl   javac 1.6:   -target 1.1 1.2 1.3 1.4 1.5 1.6   default: 1.6
  dnl                -source 1.3 1.4 1.5 1.6           default: 1.5
  dnl                -target 1.1/1.2/1.3 only possible with -source 1.3
  dnl                -target 1.4 only possible with -source 1.3/1.4
  dnl                -target 1.5 only possible with -source 1.3/1.4/1.5 or no -source
  dnl
  dnl The support of jikes for target-version and source-version:
  dnl
  dnl   jikes 1.14 does not have a way to specify the target-version. It
  dnl   always assumes target-version=1.1.
  dnl
  dnl   For jikes 1.14, the source-version always is 1.3.
  dnl
  CONF_JAVAC=
  HAVE_JAVAC_ENVVAR=
  HAVE_GCJ_C=
  HAVE_JAVAC=
  HAVE_JIKES=
  HAVE_JAVACOMP=
changequote(,)dnl
  cat > conftestlib.java <<EOF
public class conftestlib {
  public static void main (String[] args) {
  }
}
EOF
changequote([,])dnl
  echo "$goodcode" > conftest.java
  echo "$failcode" > conftestfail.java
  dnl If the user has set the JAVAC environment variable, use that, if it
  dnl satisfies the constraints (possibly after adding -target and -source
  dnl options).
  if test -n "$JAVAC"; then
    dnl Try the original $JAVAC.
    if $JAVAC --version 2>/dev/null | sed -e 1q | grep gcj > /dev/null; then
      dnl It's a version of gcj.
changequote(,)dnl
      if $JAVAC --version 2>/dev/null | sed -e 's,^[^0-9]*,,' -e 1q | sed -e '/^4\.[012]/d' | grep '^[4-9]' >/dev/null; then
changequote([,])dnl
        dnl It's a version of gcj >= 4.3. Assume the classfile versions are correct.
        dnl Try $JAVAC.
        rm -f conftest.class
        if { echo "$as_me:__oline__: $JAVAC -d . conftest.java" >&AS_MESSAGE_LOG_FD
             $JAVAC -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
           } \
           && test -f conftest.class \
           && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD; then
          dnl Try adding -fsource option if it is useful.
          rm -f conftest.class
          rm -f conftestfail.class
          if { echo "$as_me:__oline__: $JAVAC -fsource=$source_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
               $JAVAC -fsource="$source_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
             } \
             && test -f conftest.class \
             && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD \
             && { echo "$as_me:__oline__: $JAVAC -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                  $JAVAC -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                } \
             && test -f conftestfail.class \
             && ! { echo "$as_me:__oline__: $JAVAC -fsource=$source_version -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                    $JAVAC -fsource="$source_version" -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                  }; then
            CONF_JAVAC="$JAVAC -fsource=$source_version"
            HAVE_JAVAC_ENVVAR=1
            HAVE_JAVACOMP=1
          else
            CONF_JAVAC="$JAVAC"
            HAVE_JAVAC_ENVVAR=1
            HAVE_JAVACOMP=1
          fi
        else
          dnl Try with -fsource and -ftarget options.
          rm -f conftest.class
          rm -f conftestfail.class
          if { echo "$as_me:__oline__: $JAVAC -fsource=$source_version -ftarget=$target_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
               $JAVAC -fsource="$source_version" -ftarget="$target_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
             } \
             && test -f conftest.class \
             && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD; then
            CONF_JAVAC="$JAVAC -fsource=$source_version -ftarget=$target_version"
            HAVE_JAVAC_ENVVAR=1
            HAVE_JAVACOMP=1
          fi
        fi
      else
        dnl It's a version of gcj < 4.3. Ignore the version of conftest.class.
        if test "$target_version" = 1.4 && test "$source_version" = 1.4; then
          dnl Try $JAVAC.
          rm -f conftest.class
          if { echo "$as_me:__oline__: $JAVAC -d . conftest.java" >&AS_MESSAGE_LOG_FD
               $JAVAC -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
             } \
             && test -f conftest.class; then
            CONF_JAVAC="$JAVAC"
            HAVE_JAVAC_ENVVAR=1
            HAVE_JAVACOMP=1
          fi
        else
          if test "$target_version" = 1.4 && test "$source_version" = 1.3; then
            dnl Try $JAVAC and "$JAVAC -fno-assert". But add -fno-assert only if
            dnl it makes a difference. (It could already be part of $JAVAC.)
            javac_works=
            rm -f conftest.class
            if { echo "$as_me:__oline__: $JAVAC -d . conftest.java" >&AS_MESSAGE_LOG_FD
                 $JAVAC -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
               } \
               && test -f conftest.class; then
              javac_works=1
            fi
            javac_noassert_works=
            rm -f conftest.class
            if { echo "$as_me:__oline__: $JAVAC -fno-assert -d . conftest.java" >&AS_MESSAGE_LOG_FD
                 $JAVAC -fno-assert -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
               } \
               && test -f conftest.class; then
              javac_noassert_works=1
            fi
            if test -n "$javac_works" && test -n "$javac_noassert_works"; then
              rm -f conftestfail.class
              if { echo "$as_me:__oline__: $JAVAC -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                   $JAVAC -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                 } \
                 && test -f conftestfail.class \
                 && ! { echo "$as_me:__oline__: $JAVAC -fno-assert -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                        $JAVAC -fno-assert -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                      }; then
                dnl "$JAVAC -fno-assert" works better than $JAVAC.
                javac_works=
              fi
            fi
            if test -n "$javac_works"; then
              CONF_JAVAC="$JAVAC"
              HAVE_JAVAC_ENVVAR=1
              HAVE_JAVACOMP=1
            else
              if test -n "$javac_noassert_works"; then
                CONF_JAVAC="$JAVAC -fno-assert"
                HAVE_JAVAC_ENVVAR=1
                HAVE_JAVACOMP=1
              fi
            fi
          fi
        fi
      fi
    else
      dnl It's not gcj. Assume the classfile versions are correct.
      dnl Try $JAVAC.
      rm -f conftest.class
      if { echo "$as_me:__oline__: $JAVAC -d . conftest.java" >&AS_MESSAGE_LOG_FD
           $JAVAC -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
         } \
         && test -f conftest.class \
         && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD; then
        dnl Try adding -source option if it is useful.
        rm -f conftest.class
        rm -f conftestfail.class
        if { echo "$as_me:__oline__: $JAVAC -source $source_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
             $JAVAC -source "$source_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
           } \
           && test -f conftest.class \
           && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD \
           && { echo "$as_me:__oline__: $JAVAC -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                $JAVAC -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
              } \
           && test -f conftestfail.class \
           && ! { echo "$as_me:__oline__: $JAVAC -source $source_version -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                  $JAVAC -source "$source_version" -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                }; then
          CONF_JAVAC="$JAVAC -source $source_version"
          HAVE_JAVAC_ENVVAR=1
          HAVE_JAVACOMP=1
        else
          CONF_JAVAC="$JAVAC"
          HAVE_JAVAC_ENVVAR=1
          HAVE_JAVACOMP=1
        fi
      else
        dnl Try with -target option alone. (Sun javac 1.3.1 has the -target
        dnl option but no -source option.)
        rm -f conftest.class
        if { echo "$as_me:__oline__: $JAVAC -target $target_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
             $JAVAC -target "$target_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
           } \
           && test -f conftest.class \
           && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD; then
          dnl Try adding -source option if it is useful.
          rm -f conftest.class
          rm -f conftestfail.class
          if { echo "$as_me:__oline__: $JAVAC -target $target_version -source $source_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
               $JAVAC -target "$target_version" -source "$source_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
             } \
             && test -f conftest.class \
             && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD \
             && { echo "$as_me:__oline__: $JAVAC -target $target_version -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                  $JAVAC -target "$target_version" -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                } \
             && test -f conftestfail.class \
             && ! { echo "$as_me:__oline__: $JAVAC -target $target_version -source $source_version -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                    $JAVAC -target "$target_version" -source "$source_version" -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                  }; then
            CONF_JAVAC="$JAVAC -target $target_version -source $source_version"
            HAVE_JAVAC_ENVVAR=1
            HAVE_JAVACOMP=1
          else
            CONF_JAVAC="$JAVAC -target $target_version"
            HAVE_JAVAC_ENVVAR=1
            HAVE_JAVACOMP=1
          fi
        else
          dnl Maybe this -target option requires a -source option? Try with
          dnl -target and -source options. (Supported by Sun javac 1.4 and
          dnl higher.)
          rm -f conftest.class
          if { echo "$as_me:__oline__: $JAVAC -target $target_version -source $source_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
               $JAVAC -target "$target_version" -source "$source_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
             } \
             && test -f conftest.class \
             && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD; then
            CONF_JAVAC="$JAVAC -target $target_version -source $source_version"
            HAVE_JAVAC_ENVVAR=1
            HAVE_JAVACOMP=1
          fi
        fi
      fi
    fi
  fi
  if test -z "$HAVE_JAVACOMP"; then
    pushdef([AC_MSG_CHECKING],[:])dnl
    pushdef([AC_CHECKING],[:])dnl
    pushdef([AC_MSG_RESULT],[:])dnl
    AC_CHECK_PROG([HAVE_GCJ_IN_PATH], [gcj], [yes])
    AC_CHECK_PROG([HAVE_JAVAC_IN_PATH], [javac], [yes])
    AC_CHECK_PROG([HAVE_JIKES_IN_PATH], [jikes], [yes])
    popdef([AC_MSG_RESULT])dnl
    popdef([AC_CHECKING])dnl
    popdef([AC_MSG_CHECKING])dnl
    if test -z "$HAVE_JAVACOMP" && test -n "$HAVE_GCJ_IN_PATH"; then
      dnl Test for a good gcj version (>= 3.0).
changequote(,)dnl
      if gcj --version 2>/dev/null | sed -e 's,^[^0-9]*,,' -e 1q | sed -e '/^3\.[01]/d' | grep '^[3-9]' >/dev/null; then
changequote([,])dnl
        dnl See if libgcj.jar is well installed.
        if { echo "$as_me:__oline__: gcj -C -d . conftestlib.java" >&AS_MESSAGE_LOG_FD
             gcj -C -d . conftestlib.java >&AS_MESSAGE_LOG_FD 2>&1
           }; then
          dnl OK, gcj works.
changequote(,)dnl
          if gcj --version 2>/dev/null | sed -e 's,^[^0-9]*,,' -e 1q | sed -e '/^4\.[012]/d' | grep '^[4-9]' >/dev/null; then
changequote([,])dnl
            dnl It's a version of gcj >= 4.3. Assume the classfile versions are correct.
            dnl Try gcj.
            rm -f conftest.class
            if { echo "$as_me:__oline__: gcj -C -d . conftest.java" >&AS_MESSAGE_LOG_FD
                 gcj -C -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
               } \
               && test -f conftest.class \
               && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD; then
              dnl Try adding -fsource option if it is useful.
              rm -f conftest.class
              rm -f conftestfail.class
              if { echo "$as_me:__oline__: gcj -C -fsource=$source_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
                   gcj -C -fsource="$source_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
                 } \
                 && test -f conftest.class \
                 && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD \
                 && { echo "$as_me:__oline__: gcj -C -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                      gcj -C -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                    } \
                 && test -f conftestfail.class \
                 && ! { echo "$as_me:__oline__: gcj -C -fsource=$source_version -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                        gcj -C -fsource="$source_version" -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                      }; then
                CONF_JAVAC="gcj -C -fsource=$source_version"
                HAVE_JAVAC_ENVVAR=1
                HAVE_JAVACOMP=1
              else
                CONF_JAVAC="gcj -C"
                HAVE_JAVAC_ENVVAR=1
                HAVE_JAVACOMP=1
              fi
            else
              dnl Try with -fsource and -ftarget options.
              rm -f conftest.class
              rm -f conftestfail.class
              if { echo "$as_me:__oline__: gcj -C -fsource=$source_version -ftarget=$target_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
                   gcj -C -fsource="$source_version" -ftarget="$target_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
                 } \
                 && test -f conftest.class \
                 && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD; then
                CONF_JAVAC="gcj -C -fsource=$source_version -ftarget=$target_version"
                HAVE_JAVAC_ENVVAR=1
                HAVE_JAVACOMP=1
              fi
            fi
          else
            dnl It's a version of gcj < 4.3. Ignore the version of conftest.class.
            dnl Now test whether it supports the desired target-version and
            dnl source-version.
            if test "$target_version" = 1.4 && test "$source_version" = 1.4; then
              rm -f conftest.class
              if { echo "$as_me:__oline__: gcj -C -d . conftest.java" >&AS_MESSAGE_LOG_FD
                   gcj -C -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
                 } \
                 && test -f conftest.class; then
                CONF_JAVAC="gcj -C"
                HAVE_GCJ_C=1
                HAVE_JAVACOMP=1
              fi
            else
              if test "$target_version" = 1.4 && test "$source_version" = 1.3; then
                dnl Try gcj and "gcj -fno-assert". But add -fno-assert only if
                dnl it works (not gcj < 3.3).
                rm -f conftest.class
                if { echo "$as_me:__oline__: gcj -C -fno-assert -d . conftest.java" >&AS_MESSAGE_LOG_FD
                     gcj -C -fno-assert -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
                   } \
                   && test -f conftest.class; then
                  CONF_JAVAC="gcj -C -fno-assert"
                  HAVE_GCJ_C=1
                  HAVE_JAVACOMP=1
                else
                  rm -f conftest.class
                  if { echo "$as_me:__oline__: gcj -C -d . conftest.java" >&AS_MESSAGE_LOG_FD
                       gcj -C -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
                     } \
                     && test -f conftest.class; then
                    CONF_JAVAC="gcj -C"
                    HAVE_GCJ_C=1
                    HAVE_JAVACOMP=1
                  fi
                fi
              fi
            fi
          fi
        fi
      fi
    fi
    if test -z "$HAVE_JAVACOMP" && test -n "$HAVE_JAVAC_IN_PATH"; then
      dnl Test whether javac is usable.
      if { javac -version >/dev/null 2>/dev/null || test $? -le 2; } \
         && ( if javac -help 2>&1 >/dev/null | grep at.dms.kjc.Main >/dev/null && javac -help 2>/dev/null | grep 'released.*2000' >/dev/null ; then exit 1; else exit 0; fi ); then
        dnl OK, javac works.
        dnl Now test whether it supports the desired target-version and
        dnl source-version.
        rm -f conftest.class
        if { echo "$as_me:__oline__: javac -d . conftest.java" >&AS_MESSAGE_LOG_FD
             javac -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
           } \
           && test -f conftest.class \
           && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD; then
          dnl Try adding -source option if it is useful.
          rm -f conftest.class
          rm -f conftestfail.class
          if { echo "$as_me:__oline__: javac -source $source_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
               javac -source "$source_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
             } \
             && test -f conftest.class \
             && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD \
             && { echo "$as_me:__oline__: javac -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                  javac -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                } \
             && test -f conftestfail.class \
             && ! { echo "$as_me:__oline__: javac -source $source_version -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                    javac -source "$source_version" -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                  }; then
            CONF_JAVAC="javac -source $source_version"
            HAVE_JAVAC=1
            HAVE_JAVACOMP=1
          else
            CONF_JAVAC="javac"
            HAVE_JAVAC=1
            HAVE_JAVACOMP=1
          fi
        else
          dnl Try with -target option alone. (Sun javac 1.3.1 has the -target
          dnl option but no -source option.)
          rm -f conftest.class
          if { echo "$as_me:__oline__: javac -target $target_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
               javac -target "$target_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
             } \
             && test -f conftest.class \
             && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD; then
            dnl Try adding -source option if it is useful.
            rm -f conftest.class
            rm -f conftestfail.class
            if { echo "$as_me:__oline__: javac -target $target_version -source $source_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
                 javac -target "$target_version" -source "$source_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
               } \
               && test -f conftest.class \
               && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD \
               && { echo "$as_me:__oline__: javac -target $target_version -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                    javac -target "$target_version" -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                  } \
               && test -f conftestfail.class \
               && ! { echo "$as_me:__oline__: javac -target $target_version -source $source_version -d . conftestfail.java" >&AS_MESSAGE_LOG_FD
                      javac -target "$target_version" -source "$source_version" -d . conftestfail.java >&AS_MESSAGE_LOG_FD 2>&1
                    }; then
              CONF_JAVAC="javac -target $target_version -source $source_version"
              HAVE_JAVAC=1
              HAVE_JAVACOMP=1
            else
              CONF_JAVAC="javac -target $target_version"
              HAVE_JAVAC=1
              HAVE_JAVACOMP=1
            fi
          else
            dnl Maybe this -target option requires a -source option? Try with
            dnl -target and -source options. (Supported by Sun javac 1.4 and
            dnl higher.)
            rm -f conftest.class
            if { echo "$as_me:__oline__: javac -target $target_version -source $source_version -d . conftest.java" >&AS_MESSAGE_LOG_FD
                 javac -target "$target_version" -source "$source_version" -d . conftest.java >&AS_MESSAGE_LOG_FD 2>&1
               } \
               && test -f conftest.class \
               && expr `func_classfile_version conftest.class` '<=' $cfversion >/dev/null 2>&AS_MESSAGE_LOG_FD; then
              CONF_JAVAC="javac -target $target_version -source $source_version"
              HAVE_JAVAC=1
              HAVE_JAVACOMP=1
            fi
          fi
        fi
      fi
    fi
    if test -z "$HAVE_JAVACOMP" && test -n "$HAVE_JIKES_IN_PATH"; then
      dnl Test whether jikes is usable.
      if { jikes >/dev/null 2>/dev/null || test $? = 1; } \
         && (
              # See if the existing CLASSPATH is sufficient to make jikes work.
              unset JAVA_HOME
              jikes conftestlib.java >&AS_MESSAGE_LOG_FD 2>&1
              error=$?
              rm -f conftestlib.class
              exit $error
            ); then
        dnl OK, jikes works.
        dnl Now test whether it supports the desired target-version and
        dnl source-version.
        if test "$source_version" = 1.3; then
          CONF_JAVAC="jikes"
          HAVE_JIKES=1
          HAVE_JAVACOMP=1
        fi
      fi
    fi
  fi
  rm -f conftest*.java conftest*.class
  if test -n "$HAVE_JAVACOMP"; then
    ac_result="$CONF_JAVAC"
  else
    ac_result="no"
  fi
  AC_MSG_RESULT([$ac_result])
  AC_SUBST([CONF_JAVAC])
  AC_SUBST([CLASSPATH])
  AC_SUBST([CLASSPATH_SEPARATOR])
  AC_SUBST([HAVE_JAVAC_ENVVAR])
  AC_SUBST([HAVE_GCJ_C])
  AC_SUBST([HAVE_JAVAC])
  AC_SUBST([HAVE_JIKES])
])
