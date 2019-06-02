@echo off
Rem
Rem WARNING WARNING WARNING: This file needs to have DOS CRLF end-of-line
Rem format, or else stock DOS/Windows shells will refuse to run it.
Rem
Rem This batch file unpacks the Bison distribution while simultaneously
Rem renaming some of the files whose names are invalid on DOS or conflict
Rem with other file names after truncation to DOS 8+3 namespace.
Rem
Rem Copyright (C) 2005-2015 Free Software Foundation, Inc.
Rem
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
Rem
Rem
Rem Invoke like this:
Rem
Rem     djunpack bison-XYZ.tar.gz
Rem or
Rem     djunpack bison-XYZ.tar.bz2
Rem
Rem where XYZ is the version number.  If the argument includes leading
Rem directories, it MUST use backslashes, not forward slashes.
Rem

set ENVIRONMENT_SIZE_TEST_STRING=ENVIRONMENT_SIZE_TEST_STRING
if "%ENVIRONMENT_SIZE_TEST_STRING%"=="ENVIRONMENT_SIZE_TEST_STRING" GoTo EnvOk
Rem If their environment space is too small, re-exec with a larger one
command.com /e:4096 /c %0 %1
GoTo End

:EnvOk
set ENVIRONMENT_SIZE_TEST_STRING=
if "%1" == "" GoTo NoArgument
if not exist %1 GoTo NoArchive
Rem Extract top src dir from archive file.
djtar -t %1 > top_src.dir
Rem The following uses a feature of COPY whereby it does not copy
Rem empty files.  We need that because the previous line will create
Rem an empty fnchange.tmp even if the command failed for some reason.
copy top_src.dir junk.tmp > nul
if not exist junk.tmp GoTo NoDjTar
del junk.tmp
sed "1{s/^.*bison-/djtar -x -p -o bison-/;s|$|djgpp/fnchange.lst %%1 > fnchange.tmp|};2,$d" top_src.dir > ext_list.bat
Rem See the comment above about the reason for using COPY.
copy ext_list.bat junk.tmp > nul
if not exist junk.tmp GoTo NoSed
del junk.tmp
Rem Extract fnchange.lst from archive.
call ext_list.bat %1
del ext_list.bat
sed "1{s|^.*bison-|s/@V@/bison-|;s|$|g|};2,$d" top_src.dir > version.sed
sed -f version.sed < fnchange.tmp > fnchange.lst
del version.sed
del fnchange.tmp
del top_src.dir
Rem unpack the source distribution
djtar -x -n fnchange.lst %1
del fnchange.lst
GoTo End

:NoSed
del junk.tmp
echo FAIL: Sed is not available.
GoTo End
:NoDjTar
del junk.tmp
echo FAIL: DJTAR is not available or no fnchange.lst file in %1.
GoTo End
:NoArchive
echo FAIL: the file %1 does not seem to exist.
echo Remember that %1 cannot use forward slashes, only backslashes.
GoTo End
:NoArgument
echo FAIL: no archive file has been specified.
echo Remember that the file name cannot use forward slashes, only backslashes.
:End
