AC_INIT(delay.c)
AM_INIT_AUTOMAKE(delay, 1.6)
AC_PROG_CC
AC_PROG_YACC
AM_PROG_LEX
#AC_DECL_YYTEXT
AC_HEADER_STDC

# Thanks to Vincent Archer

AC_DEFUN(AC_STRUCT_TM_GMTOFF,
[AC_REQUIRE([AC_STRUCT_TM])dnl
AC_CACHE_CHECK([for tm_gmtoff in struct tm], ac_cv_struct_tm_gmtoff,
[AC_TRY_COMPILE([#include <sys/types.h>
#include <$ac_cv_struct_tm>], [struct tm tm; tm.tm_gmtoff;],
  ac_cv_struct_tm_gmtoff=yes, ac_cv_struct_tm_gmtoff=no)])
if test "$ac_cv_struct_tm_gmtoff" = yes; then
  AC_DEFINE(HAVE_TM_GMTOFF)
else
  AC_CACHE_CHECK(for timezone, ac_cv_var_timezone,
[AC_TRY_LINK(
changequote(<<, >>)dnl
<<#include <time.h>
#ifndef timezone /* Just in case.  */
extern int timezone;
#endif>>,
changequote([, ])dnl
[0*timezone;], ac_cv_var_timezone=yes, ac_cv_var_timezone=no)])
  if test $ac_cv_var_timezone = yes; then
    AC_DEFINE(HAVE_TIMEZONE)
  fi
fi
])

AC_STRUCT_TM
AC_STRUCT_TM_GMTOFF

PKG_CHECK_MODULES([ncurses],[ncurses],[
  LIBS="$LIBS $ncurses_LIBS"
  AC_DEFINE([HAVE_CURSES_H])
  AC_DEFINE([HAVE_LIBCURSES])],
  [AC_MSG_ERROR([ncurses not found])])

AC_OUTPUT(Makefile)

