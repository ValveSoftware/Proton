# isnan.m4 serial 5
dnl Copyright (C) 2007-2015 Free Software Foundation, Inc.
dnl This file is free software; the Free Software Foundation
dnl gives unlimited permission to copy and/or distribute it,
dnl with or without modifications, as long as this notice is preserved.

AC_DEFUN([gl_ISNAN],
[
  AC_REQUIRE([gl_MATH_H_DEFAULTS])
  AC_REQUIRE([gl_FUNC_ISNANF])
  AC_REQUIRE([gl_FUNC_ISNAND])
  AC_REQUIRE([gl_FUNC_ISNANL])

  # If we replaced any of the underlying isnan* functions, replace
  # the isnan macro; it undoubtedly suffers from the same flaws.
  AC_MSG_CHECKING([whether isnan macro works])
  if test $gl_func_isnanf = yes \
     && test $gl_func_isnand = yes \
     && test $gl_func_isnanl = yes; then
    AC_MSG_RESULT([yes])
    ISNAN_LIBM=
    dnl Append $ISNANF_LIBM to ISNAN_LIBM, avoiding gratuitous duplicates.
    case " $ISNAN_LIBM " in
      *" $ISNANF_LIBM "*) ;;
      *) ISNAN_LIBM="$ISNAN_LIBM $ISNANF_LIBM" ;;
    esac
    dnl Append $ISNAND_LIBM to ISNAN_LIBM, avoiding gratuitous duplicates.
    case " $ISNAN_LIBM " in
      *" $ISNAND_LIBM "*) ;;
      *) ISNAN_LIBM="$ISNAN_LIBM $ISNAND_LIBM" ;;
    esac
    dnl Append $ISNANL_LIBM to ISNAN_LIBM, avoiding gratuitous duplicates.
    case " $ISNAN_LIBM " in
      *" $ISNANL_LIBM "*) ;;
      *) ISNAN_LIBM="$ISNAN_LIBM $ISNANL_LIBM" ;;
    esac
  else
    AC_MSG_RESULT([no])
    dnl REPLACE_ISNAN=1 also makes sure the rpl_isnan[fdl] functions get built.
    REPLACE_ISNAN=1
    ISNAN_LIBM=
  fi
  AC_SUBST([ISNAN_LIBM])
])
