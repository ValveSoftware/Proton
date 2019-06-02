@echo off
Rem Configure Bison for DJGPP.

Rem WARNING WARNING WARNING: This file needs to have DOS CRLF end-of-line
Rem format, or else stock DOS/Windows shells will refuse to run it.

Rem Copyright (C) 2005-2015 Free Software Foundation, Inc.

Rem This program is free software: you can redistribute it and/or modify
Rem it under the terms of the GNU General Public License as published by
Rem the Free Software Foundation, either version 3 of the License, or
Rem (at your option) any later version.
Rem
Rem This program is distributed in the hope that it will be useful,
Rem but WITHOUT ANY WARRANTY; without even the implied warranty of
Rem MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
Rem GNU General Public License for more details.
Rem
Rem You should have received a copy of the GNU General Public License
Rem along with this program.  If not, see <http://www.gnu.org/licenses/>.

echo Configuring Bison for DJGPP v2.x...

Rem The SmallEnv tests protect against fixed and too small size
Rem of the environment in stock DOS shell.

Rem Find out if NLS is wanted or not,
Rem if dependency-tracking is wanted or not,
Rem if caching is wanted or not
Rem and where the sources are.
Rem We always default to NLS support,
Rem no dependency tracking
Rem and to in place configuration.
set ARGS=
set NLS=enabled
if not "%NLS%" == "enabled" goto SmallEnv
set CACHING=enabled
if not "%CACHING%" == "enabled" goto SmallEnv
set DEPENDENCY_TRACKING=disabled
if not "%DEPENDENCY_TRACKING%" == "disabled" goto SmallEnv
set LIBICONV_PREFIX=disabled
if not "%LIBICONV_PREFIX%" == "disabled" goto SmallEnv
set LIBINTL_PREFIX=disabled
if not "%LIBINTL_PREFIX%" == "disabled" goto SmallEnv
set HTML=enabled
if not "%HTML%" == "enabled" goto SmallEnv
set XSRC=.
if not "%XSRC%" == "." goto SmallEnv

Rem Loop over all arguments.
Rem Special arguments are: NLS, XSRC, CACHE, STATIC_LIBS, LIBICONV_PREFIX, LIBINTL_PREFIX and DEPS.
Rem All other arguments are stored into ARGS.
:ArgLoop
if "%1" == "nls" goto NextArgument
if "%1" == "NLS" goto NextArgument
if "%1" == "no-nls" goto NoNLS
if "%1" == "no-NLS" goto NoNLS
if "%1" == "NO-NLS" goto NoNLS
goto CachingOption
:NoNLS
if "%1" == "no-nls" set NLS=disabled
if "%1" == "no-NLS" set NLS=disabled
if "%1" == "NO-NLS" set NLS=disabled
if not "%NLS%" == "disabled" goto SmallEnv
goto NextArgument
:CachingOption
if "%1" == "cache" goto NextArgument
if "%1" == "CACHE" goto NextArgument
if "%1" == "no-cache" goto NoCaching
if "%1" == "no-CACHE" goto NoCaching
if "%1" == "NO-CACHE" goto NoCaching
goto DependencyOption
:NoCaching
if "%1" == "no-cache" set CACHING=disabled
if "%1" == "no-CACHE" set CACHING=disabled
if "%1" == "NO-CACHE" set CACHING=disabled
if not "%CACHING%" == "disabled" goto SmallEnv
goto NextArgument
:DependencyOption
if "%1" == "no-dep" goto NextArgument
if "%1" == "no-DEP" goto NextArgument
if "%1" == "NO-DEP" goto NextArgument
if "%1" == "dep" goto DependecyTraking
if "%1" == "DEP" goto DependecyTraking
goto LibiconvPrefixOption
:DependecyTraking
if "%1" == "dep" set DEPENDENCY_TRACKING=enabled
if "%1" == "DEP" set DEPENDENCY_TRACKING=enabled
if not "%DEPENDENCY_TRACKING%" == "enabled" goto SmallEnv
goto NextArgument
:LibiconvPrefixOption
if "%1" == "no-libiconvprefix" goto NextArgument
if "%1" == "no-LIBICONVPREFIX" goto NextArgument
if "%1" == "NO-LIBICONVPREFIX" goto NextArgument
if "%1" == "libiconvprefix" goto WithLibiconvPrefix
if "%1" == "LIBICONVPREFIX" goto WithLibiconvPrefix
goto LibintlPrefixOption
:WithLibiconvPrefix
if "%1" == "libiconvprefix" set LIBICONV_PREFIX=enabled
if "%1" == "LIBICONVPREFIX" set LIBICONV_PREFIX=enabled
if not "%LIBICONV_PREFIX%" == "enabled" goto SmallEnv
goto NextArgument
:LibintlPrefixOption
if "%1" == "no-libiconvprefix" goto NextArgument
if "%1" == "no-LIBICONVPREFIX" goto NextArgument
if "%1" == "NO-LIBICONVPREFIX" goto NextArgument
if "%1" == "libintlprefix" goto _WithLibintlPrefix
if "%1" == "LIBINTLPREFIX" goto _WithLibintlPrefix
goto HTMLOption
:_WithLibintlPrefix
if "%1" == "libintlprefix" set LIBINTL_PREFIX=enabled
if "%1" == "LIBINTLPREFIX" set LIBINTL_PREFIX=enabled
if not "%LIBINTL_PREFIX%" == "enabled" goto SmallEnv
:HTMLOption
if "%1" == "withhtml" goto NextArgument
if "%1" == "withHTML" goto NextArgument
if "%1" == "WITHHTML" goto NextArgument
if "%1" == "withouthtml" goto _WithoutHTML
if "%1" == "withoutHTML" goto _WithoutHTML
if "%1" == "WITHOUTHTML" goto _WithoutHTML
goto SrcDirOption
:_WithoutHTML
if "%1" == "withouthtml" set HTML=disabled
if "%1" == "withoutHTML" set HTML=disabled
if "%1" == "WITHOUTHTML" set HTML=disabled
if not "%HTML%" == "disabled" goto SmallEnv
goto NextArgument
:SrcDirOption
echo %1 | grep -q "/"
if errorlevel 1 goto CollectArgument
set XSRC=%1
if not "%XSRC%" == "%1" goto SmallEnv
goto NextArgument
:CollectArgument
set _ARGS=%ARGS% %1
if not "%_ARGS%" == "%ARGS% %1" if not "%_ARGS%" == "%ARGS%%1" goto SmallEnv
echo %_ARGS% | grep -q "[^ ]"
if not errorlevel 0 set ARGS=%_ARGS%
set _ARGS=
:NextArgument
shift
if not "%1" == "" goto ArgLoop

Rem Create an arguments file for the configure script.
echo --srcdir=%XSRC% > args
if "%CACHING%" == "enabled"              echo --cache-file=%XSRC%/djgpp/config.cache >> args
if "%DEPENDENCY_TRACKING%" == "enabled"  echo --enable-dependency-tracking >> args
if "%DEPENDENCY_TRACKING%" == "disabled" echo --disable-dependency-tracking >> args
if "%LIBICONV_PREFIX%" == "enabled"      echo --with-libiconv-prefix >> args
if "%LIBICONV_PREFIX%" == "disabled"     echo --without-libiconv-prefix >> args
if "%LIBINTL_PREFIX%" == "enabled"       echo --with-libintl-prefix >> args
if "%LIBINTL_PREFIX%" == "disabled"      echo --without-libintl-prefix >> args
if "%HTML%" == "enabled"                 echo --enable-html >> args
if "%HTML%" == "disabled"                echo --disable-html >> args
if not "%ARGS%" == ""                    echo %ARGS% >> args
set ARGS=
set CACHING=
set DEPENDENCY_TRACKING=
set LIBICONV_PREFIX=
set LIBINTL_PREFIX=
set HTML=

if "%XSRC%" == "." goto InPlace

:NotInPlace
redir -e /dev/null update %XSRC%/configure.org ./configure
test -f ./configure
if errorlevel 1 update %XSRC%/configure ./configure

:InPlace
Rem Update configuration files
echo Updating configuration scripts...
test -f ./configure.org
if errorlevel 1 update configure configure.org
sed -f %XSRC%/djgpp/config.sed configure.org > configure
if errorlevel 1 goto SedError

Rem Make sure they have a config.site file
set CONFIG_SITE=%XSRC%/djgpp/config.site
if not "%CONFIG_SITE%" == "%XSRC%/djgpp/config.site" goto SmallEnv

Rem inttypes_.h and inttypes.h map to the same 8.3 alias.
test -f %XSRC%/lib/inttypes_.h
if not errorlevel 1 mv -f %XSRC%/lib/inttypes_.h %XSRC%/lib/_inttypes.h

Rem Make sure crucial file names are not munged by unpacking
test -f %XSRC%/po/Makefile.in.in
if not errorlevel 1 mv -f %XSRC%/po/Makefile.in.in %XSRC%/po/Makefile.in-in
test -f %XSRC%/po/Makefile.in-in
if errorlevel 1 mv -f %XSRC%/po/Makefile.in %XSRC%/po/Makefile.in-in
test -f %XSRC%/po/Makefile.in-in
if errorlevel 1 mv -f %XSRC%/po/Makefile.inin %XSRC%/po/Makefile.in-in
test -f %XSRC%/po/Makefile.in-in
if errorlevel 1 mv -f %XSRC%/po/Makefile.in_in %XSRC%/po/Makefile.in-in
test -f %XSRC%/po/Makefile.in-in
if errorlevel 1 mv -f %XSRC%/po/Makefile_in.in %XSRC%/po/Makefile.in-in
test -f %XSRC%/runtime-po/Makefile.in.in
if not errorlevel 1 mv -f %XSRC%/runtime-po/Makefile.in.in %XSRC%/runtime-po/Makefile.in-in
test -f %XSRC%/runtime-po/Makefile.in-in
if errorlevel 1 mv -f %XSRC%/runtime-po/Makefile.in %XSRC%/runtime-po/Makefile.in-in
test -f %XSRC%/runtime-po/Makefile.in-in
if errorlevel 1 mv -f %XSRC%/runtime-po/Makefile.inin %XSRC%/runtime-po/Makefile.in-in
test -f %XSRC%/runtime-po/Makefile.in-in
if errorlevel 1 mv -f %XSRC%/runtime-po/Makefile.in_in %XSRC%/runtime-po/Makefile.in-in
test -f %XSRC%/runtime-po/Makefile.in-in
if errorlevel 1 mv -f %XSRC%/runtime-po/Makefile_in.in %XSRC%/runtime-po/Makefile.in-in
test -f %XSRC%/data/c++.m4
if not errorlevel 1 mv -f %XSRC%/data/c++.m4 %XSRC%/data/cxx.m4
test -f %XSRC%/data/cxx.m4
if errorlevel 1 mv -f %XSRC%/data/cpp.m4 %XSRC%/data/cxx.m4
test -f %XSRC%/data/c++-skel.m4
if not errorlevel 1 mv -f %XSRC%/data/c++-skel.m4 %XSRC%/data/cxx-skel.m4
test -f %XSRC%/data/cxx-skel.m4
if errorlevel 1 mv -f %XSRC%/data/cpp-skel.m4 %XSRC%/data/cxx-skel.m4
test -f %XSRC%/build-aux/javacomp.sh.in
if not errorlevel 1 mv -f %XSRC%/build-aux/javacomp.sh.in %XSRC%/build-aux/javacomp.sh-in
test -f %XSRC%/build-aux/javacomp.sh-in
if errorlevel 1 mv -f %XSRC%/build-aux/javacomp.sh %XSRC%/build-aux/javacomp.sh-in
test -f %XSRC%/build-aux/javacomp.sh-in
if errorlevel 1 mv -f %XSRC%/build-aux/javacomp.shin %XSRC%/build-aux/javacomp.sh-in
test -f %XSRC%/build-aux/javacomp.sh-in
if errorlevel 1 mv -f %XSRC%/build-aux/javacomp.sh_in %XSRC%/build-aux/javacomp.sh-in
test -f %XSRC%/build-aux/javacomp.sh-in
if errorlevel 1 mv -f %XSRC%/build-aux/javacomp.sh.in %XSRC%/build-aux/javacomp.sh-in
test -f %XSRC%/build-aux/javaexec.sh.in
if not errorlevel 1 mv -f %XSRC%/build-aux/javaexec.sh.in %XSRC%/build-aux/javaexec.sh-in
test -f %XSRC%/build-aux/javaexec.sh-in
if errorlevel 1 mv -f %XSRC%/build-aux/javaexec.sh %XSRC%/build-aux/javaexec.sh-in
test -f %XSRC%/build-aux/javaexec.sh-in
if errorlevel 1 mv -f %XSRC%/build-aux/javaexec.shin %XSRC%/build-aux/javaexec.sh-in
test -f %XSRC%/build-aux/javaexec.sh-in
if errorlevel 1 mv -f %XSRC%/build-aux/javaexec.sh_in %XSRC%/build-aux/javaexec.sh-in
test -f %XSRC%/build-aux/javaexec.sh-in
if errorlevel 1 mv -f %XSRC%/build-aux/javaexec_sh.in %XSRC%/build-aux/javaexec.sh-in
test -f %XSRC%/doc/yacc.1.in
if not errorlevel 1 mv -f %XSRC%/doc/yacc.1.in %XSRC%/doc/yacc.1-in
test -f %XSRC%/doc/yacc.1-in
if errorlevel 1 mv -f %XSRC%/doc/yacc.1 %XSRC%/doc/yacc.1-in
test -f %XSRC%/doc/yacc.1-in
if errorlevel 1 mv -f %XSRC%/doc/yacc.1in %XSRC%/doc/yacc.1-in
test -f %XSRC%/doc/yacc.1-in
if errorlevel 1 mv -f %XSRC%/doc/yacc.1_in %XSRC%/doc/yacc.1-in
test -f %XSRC%/doc/yacc.1-in
if errorlevel 1 mv -f %XSRC%/doc/yacc_1.in %XSRC%/doc/yacc.1-in
test -f %XSRC%/etc/bench.pl.in
if not errorlevel 1 mv -f %XSRC%/etc/bench.pl.in %XSRC%/etc/bench.pl-in
test -f %XSRC%/etc/bench.pl-in
if errorlevel 1 mv -f %XSRC%/etc/bench.pl %XSRC%/etc/bench.pl-in
test -f %XSRC%/etc/bench.pl-in
if errorlevel 1 mv -f %XSRC%/etc/bench.plin %XSRC%/etc/bench.pl-in
test -f %XSRC%/etc/bench.pl-in
if errorlevel 1 mv -f %XSRC%/etc/bench.pl_in %XSRC%/etc/bench.pl-in
test -f %XSRC%/etc/bench.pl-in
if errorlevel 1 mv -f %XSRC%/etc/bench_pl.in %XSRC%/etc/bench.pl-in

:scan_gram_c_Test
test -f %XSRC%/src/c-scan-gram.c
if not errorlevel 1 goto scan_skel_c_Test
test -f %XSRC%/src/scan-gram-c.c
if not errorlevel 1 mv -f %XSRC%/src/scan-gram-c.c %XSRC%/src/c-scan-gram.c
:scan_skel_c_Test
test -f %XSRC%/src/c-scan-skel.c
if not errorlevel 1 goto FixFiles
test -f %XSRC%/src/scan-skel-c.c
if not errorlevel 1 mv -f %XSRC%/src/scan-skel-c.c %XSRC%/src/c-scan-skel.c

:FixFiles
Rem Fix data/lalr1.cc and data/location.cc to reflect the renaming of c++.m4
sed "s/c++\.m4/cxx.m4/" %XSRC%/data/lalr1.cc > lalr1.cc
if errorlevel 1 goto lalr1_ccFileError
mv ./lalr1.cc %XSRC%/data/lalr1.cc
sed "s/c++\.m4/cxx.m4/" %XSRC%/data/location.cc > location.cc
if errorlevel 1 goto location_ccFileError
mv ./location.cc %XSRC%/data/location.cc
sed "s/c++\.m4/cxx.m4/" %XSRC%/data/glr.cc > glr.cc
if errorlevel 1 goto glr_ccFileError
mv ./glr.cc %XSRC%/data/glr.cc

Rem Fix src/getargs.c to reflect the renaming of c++-skel.m4
sed "s/c++-skel\.m4/cxx-skel.m4/" %XSRC%/src/getargs.c > getargs.c
if errorlevel 1 goto getargs_cFileError
mv ./getargs.c %XSRC%/src/getargs.c

Rem Define DJGPP specific defs in config.hin
echo Editing config.hin...
test -f %XSRC%/lib/config_h.org
if errorlevel 1 update %XSRC%/lib/config.hin %XSRC%/lib/config_h.org
sed -f %XSRC%/djgpp/config_h.sed %XSRC%/lib/config_h.org > config.hin
if errorlevel 1 goto SedError2
mv -f config.hin %XSRC%/lib/config.hin


Rem Fixing ilicit testsuite file name.
test -f %XSRC%/tests/c++.at
if not errorlevel 1 mv -f %XSRC%/tests/c++.at %XSRC%/tests/cxx.at

test -f %XSRC%/tests/testsuite.org
if errorlevel 1 update %XSRC%/tests/testsuite %XSRC%/tests/testsuite.org
sed -f %XSRC%/djgpp/testsuite.sed %XSRC%/tests/testsuite.org > testsuite.tmp
if errorlevel 1 goto SedError3
mv -f ./testsuite.tmp %XSRC%/tests/testsuite

Rem Fixing ilicit calc++ file names in the calc++ directory.
test -d %XSRC%/examples/calc++
if not errorlevel 1 mv -f %XSRC%/examples/calc++ %XSRC%/examples/calcxx
test -d %XSRC%/examples/calcxx
if errorlevel 1 mv -f %XSRC%/examples/calcpp %XSRC%/examples/calcxx
test -f %XSRC%/examples/calcxx/calc++-scanner.cc
if not errorlevel 1 mv -f %XSRC%/examples/calcxx/calc++-scanner.cc %XSRC%/examples/calcxx/calcxx-scanner.cc
test -f %XSRC%/examples/calcxx/calcxx-scanner.cc
if errorlevel 1 mv -f %XSRC%/examples/calcxx/calcpp-scanner.cc %XSRC%/examples/calcxx/calcxx-scanner.cc
test -f %XSRC%/examples/calcxx/calc++-scanner.ll
if not errorlevel 1 mv -f %XSRC%/examples/calcxx/calc++-scanner.ll %XSRC%/examples/calcxx/calcxx-scanner.ll
test -f %XSRC%/examples/calcxx/calcxx-scanner.ll
if errorlevel 1 mv -f %XSRC%/examples/calcxx/calcpp-scanner.ll %XSRC%/examples/calcxx/calcxx-scanner.ll
test -f %XSRC%/examples/calcxx/calc++-driver.cc
if not errorlevel 1 mv -f %XSRC%/examples/calcxx/calc++-driver.cc %XSRC%/examples/calcxx/calcxx-driver.cc
test -f %XSRC%/examples/calcxx/calcxx-driver.cc
if errorlevel 1 mv -f %XSRC%/examples/calcxx/calcpp-driver.cc %XSRC%/examples/calcxx/calcxx-driver.cc
test -f %XSRC%/examples/calcxx/calc++-driver.hh
if not errorlevel 1 mv -f %XSRC%/examples/calcxx/calc++-driver.hh %XSRC%/examples/calcxx/calcxx-driver.hh
test -f %XSRC%/examples/calcxx/calcxx-driver.hh
if errorlevel 1 mv -f %XSRC%/examples/calcxx/calcpp-driver.hh %XSRC%/examples/calcxx/calcxx-driver.hh
test -f %XSRC%/examples/calcxx/calc++-parser.cc
if not errorlevel 1 mv -f %XSRC%/examples/calcxx/calc++-parser.cc %XSRC%/examples/calcxx/calcxx-parser.cc
test -f %XSRC%/examples/calcxx/calcxx-parser.cc
if errorlevel 1 mv -f %XSRC%/examples/calcxx/calcpp-parser.cc %XSRC%/examples/calcxx/calcxx-parser.cc
test -f %XSRC%/examples/calcxx/calc++-parser.hh
if not errorlevel 1 mv -f %XSRC%/examples/calcxx/calc++-parser.hh %XSRC%/examples/calcxx/calcxx-parser.hh
test -f %XSRC%/examples/calcxx/calcxx-parser.hh
if errorlevel 1 mv -f %XSRC%/examples/calcxx/calcpp-parser.hh %XSRC%/examples/calcxx/calcxx-parser.hh
test -f %XSRC%/examples/calcxx/calc++-parser.stamp
if not errorlevel 1 mv -f %XSRC%/examples/calcxx/calc++-parser.stamp %XSRC%/examples/calcxx/calcxx-parser.stamp
test -f %XSRC%/examples/calcxx/calcxx-parser.stamp
if errorlevel 1 mv -f %XSRC%/examples/calcxx/calcpp-parser.stamp %XSRC%/examples/calcxx/calcxx-parser.stamp
test -f %XSRC%/examples/calcxx/calc++-parser.yy
if not errorlevel 1 mv -f %XSRC%/examples/calcxx/calc++-parser.yy %XSRC%/examples/calcxx/calcxx-parser.yy
test -f %XSRC%/examples/calcxx/calcxx-parser.yy
if errorlevel 1 mv -f %XSRC%/examples/calcxx/calcpp-parser.yy %XSRC%/examples/calcxx/calcxx-parser.yy
test -f %XSRC%/examples/calcxx/calc++.cc
if not errorlevel 1 mv -f %XSRC%/examples/calcxx/calc++.cc %XSRC%/examples/calcxx/calcxx.cc
test -f %XSRC%/examples/calcxx/calcxx.cc
if errorlevel 1 mv -f %XSRC%/examples/calcxx/calcpp.cc %XSRC%/examples/calcxx/calcxx.cc

Rem Fixing #include lines in calcxx files.
sed "/#[	 ]*include/s/++/xx/" %XSRC%/examples/calcxx/calcxx.cc > calcxx.cc
if errorlevel 1 goto calcxxFileError
mv ./calcxx.cc %XSRC%/examples/calcxx/calcxx.cc
sed "/#[	 ]*include/s/++/xx/" %XSRC%/examples/calcxx/calcxx-driver.cc > calcxx-driver.cc
if errorlevel 1 goto calcxxFileError
mv ./calcxx-driver.cc %XSRC%/examples/calcxx/calcxx-driver.cc
sed "/#[	 ]*include/s/++/xx/" %XSRC%/examples/calcxx/calcxx-driver.hh > calcxx-driver.hh
if errorlevel 1 goto calcxxFileError
mv ./calcxx-driver.hh %XSRC%/examples/calcxx/calcxx-driver.hh
sed "/#[	 ]*include/s/++/xx/" %XSRC%/examples/calcxx/calcxx-parser.cc > calcxx-parser.cc
if errorlevel 1 goto calcxxFileError
mv ./calcxx-parser.cc %XSRC%/examples/calcxx/calcxx-parser.cc
sed "/#[	 ]*include/s/++/xx/" %XSRC%/examples/calcxx/calcxx-parser.hh > calcxx-parser.hh
if errorlevel 1 goto calcxxFileError
mv ./calcxx-parser.hh %XSRC%/examples/calcxx/calcxx-parser.hh
:sed "/#[	 ]*include/s/++/xx/" %XSRC%/examples/calcxx/calcxx-parser.yy > calcxx-parser.yy
:if errorlevel 1 goto calcxxFileError
:mv ./calcxx-parser.yy %XSRC%/examples/calcxx/calcxx-parser.yy
sed "/#[	 ]*include/s/++/xx/" %XSRC%/examples/calcxx/calcxx-scanner.cc > calcxx-scanner.cc
if errorlevel 1 goto calcxxFileError
mv ./calcxx-scanner.cc %XSRC%/examples/calcxx/calcxx-scanner.cc
:sed "/#[	 ]*include/s/++/xx/" %XSRC%/examples/calcxx/calcxx-scanner.ll > calcxx-scanner.ll
:if errorlevel 1 goto calcxxFileError
:mv ./calcxx-scanner.ll %XSRC%/examples/calcxx/calcxx-scanner.ll
sed "s/calc++/calcxx/" %XSRC%/examples/calcxx/test > test
if errorlevel 1 goto calcxxFileError
mv ./test %XSRC%/examples/calcxx/test


Rem Fixing the scanner files to make file names 8.3 valid.
Rem Use only if you want to change the scan-gram.l and scan-skel.l files.
: sed "/outfile=/s/\.yy/yy/" %XSRC%/src/scan-gram.l > scan-gram.l
: if errorlevel 1 goto ScannerFileError
: mv ./scan-gram.l %XSRC%/src/scan-gram.l
: sed "/outfile=/s/\.yy/yy/" %XSRC%/src/scan-skel.l > scan-skel.l
: if errorlevel 1 goto ScannerFileError
: mv ./scan-skel.l %XSRC%/src/scan-skel.l


Rem This is required because DOS/Windows are case-insensitive
Rem to file names, and "make install" will do nothing if Make
Rem finds a file called `install'.
if exist INSTALL ren INSTALL INSTALL.txt

Rem Set SHELL to a sane default or some configure tests stop working
Rem if the package is configured across partitions.
if not "%SHELL%" == "" goto HomeName
set SHELL=/bin/sh
if not "%SHELL%" == "/bin/sh" goto SmallEnv
echo No SHELL found in the environment, using default value

:HomeName
Rem Set HOME to a sane default so configure stops complaining.
if not "%HOME%" == "" goto HostName
set HOME=%XSRC%/djgpp
if not "%HOME%" == "%XSRC%/djgpp" goto SmallEnv
echo No HOME found in the environment, using default value

:HostName
Rem Set HOSTNAME so it shows in config.status
if not "%HOSTNAME%" == "" goto hostdone
if "%windir%" == "" goto msdos
set OS=MS-Windows
if not "%OS%" == "MS-Windows" goto SmallEnv
goto haveos
:msdos
set OS=MS-DOS
if not "%OS%" == "MS-DOS" goto SmallEnv
:haveos
if not "%USERNAME%" == "" goto haveuname
if not "%USER%" == "" goto haveuser
echo No USERNAME and no USER found in the environment, using default values
set HOSTNAME=Unknown PC
if not "%HOSTNAME%" == "Unknown PC" goto SmallEnv
goto userdone
:haveuser
set HOSTNAME=%USER%'s PC
if not "%HOSTNAME%" == "%USER%'s PC" goto SmallEnv
goto userdone
:haveuname
set HOSTNAME=%USERNAME%'s PC
if not "%HOSTNAME%" == "%USERNAME%'s PC" goto SmallEnv
:userdone
set _HOSTNAME=%HOSTNAME%, %OS%
if not "%_HOSTNAME%" == "%HOSTNAME%, %OS%" goto SmallEnv
set HOSTNAME=%_HOSTNAME%
:hostdone
set _HOSTNAME=
set OS=

Rem install-sh is required by the configure script but clashes with the
Rem various Makefile install-foo targets, so we MUST have it before the
Rem script runs and rename it afterwards
test -f %XSRC%/install-sh
if not errorlevel 1 goto NoRen0
test -f %XSRC%/install-sh.sh
if not errorlevel 1 mv -f %XSRC%/install-sh.sh %XSRC%/install-sh
:NoRen0

if "%NLS%" == "disabled" goto WithoutNLS

:WithNLS
Rem Check for the needed libraries and binaries.
test -x /dev/env/DJDIR/bin/msgfmt.exe
if errorlevel 1 goto MissingNLSTools
test -x /dev/env/DJDIR/bin/xgettext.exe
if errorlevel 1 goto MissingNLSTools
test -f /dev/env/DJDIR/include/libcharset.h
if errorlevel 1 goto MissingNLSTools
test -f /dev/env/DJDIR/lib/libcharset.a
if errorlevel 1 goto MissingNLSTools
test -f /dev/env/DJDIR/include/iconv.h
if errorlevel 1 goto MissingNLSTools
test -f /dev/env/DJDIR/lib/libiconv.a
if errorlevel 1 goto MissingNLSTools
test -f /dev/env/DJDIR/include/libintl.h
if errorlevel 1 goto MissingNLSTools
test -f /dev/env/DJDIR/lib/libintl.a
if errorlevel 1 goto MissingNLSTools

Rem Recreate the files in the %XSRC%/po subdir with our ported tools.
redir -e /dev/null rm %XSRC%/po/*.gmo
redir -e /dev/null rm %XSRC%/po/bison.pot
redir -e /dev/null rm %XSRC%/po/cat-id-tbl.c
redir -e /dev/null rm %XSRC%/po/stamp-cat-id

Rem Update the arguments file for the configure script.
Rem We prefer without-included-gettext because libintl.a from gettext package
Rem is the only one that is guaranteed to have been ported to DJGPP.
echo --enable-nls --without-included-gettext >> args
goto ConfigurePackage

:MissingNLSTools
echo Needed libs/tools for NLS not found. Configuring without NLS.
:WithoutNLS
Rem Update the arguments file for the configure script.
echo --disable-nls >> args

:ConfigurePackage
echo Running the ./configure script...
sh ./configure @args
if errorlevel 1 goto CfgError
rm args
echo Done.
goto End

:lalr1_ccFileError
echo ./data/lalr1.cc file editing failed!
goto End

:glr_ccFileError
echo ./data/glr.cc file editing failed!
goto End

:getargs_cFileError
echo ./src/getargs.c file editing failed!
goto End

:location_ccFileError
echo ./data/location.cc file editing failed!
goto End

:calcxxFileError
echo ./examples/calcxx file editing failed!
goto End

:ScannerFileError
echo ./scanner file editing failed!
goto End

:SedError
echo ./configure script editing failed!
goto End

:SedError2
echo ./lib/config.hin editing failed!
goto End

:SedError3
echo ./tests/testsuite editing failed!
goto End

:CfgError
echo ./configure script exited abnormally!
goto End

:SmallEnv
echo Your environment size is too small.  Enlarge it and run me again.
echo Configuration NOT done!

:End
test -f %XSRC%/install-sh.sh
if not errorlevel 1 goto NoRen1
test -f %XSRC%/install-sh
if not errorlevel 1 mv -f %XSRC%/install-sh %XSRC%/install-sh.sh
:NoRen1
if "%SHELL%" == "/bin/sh" set SHELL=
if "%HOME%" == "%XSRC%/djgpp" set HOME=
set CONFIG_SITE=
set HOSTNAME=
set NLS=
set XSRC=
