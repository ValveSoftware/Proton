:: Copyright (C) 2019 Google, Inc.
::
:: All rights reserved.
::
:: Redistribution and use in source and binary forms, with or without
:: modification, are permitted provided that the following conditions
:: are met:
::
::    Redistributions of source code must retain the above copyright
::    notice, this list of conditions and the following disclaimer.
::
::    Redistributions in binary form must reproduce the above
::    copyright notice, this list of conditions and the following
::    disclaimer in the documentation and/or other materials provided
::    with the distribution.
::
::    Neither the name of Google Inc. nor the names of its
::    contributors may be used to endorse or promote products derived
::    from this software without specific prior written permission.
::
:: THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
:: "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
:: LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
:: FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
:: COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
:: INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
:: BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
:: LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
:: CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
:: LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
:: ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
:: POSSIBILITY OF SUCH DAMAGE.
:: Copyright (c) 2019 Google LLC.
::
:: Windows Build Script.

@echo on

set SRC=%cd%\github\glslang

:: Force usage of python 3.6
set PATH=C:\python36;%PATH%
cd %SRC%

mv External third_party

:: REM Install Bazel.
wget -q https://github.com/bazelbuild/bazel/releases/download/0.29.1/bazel-0.29.1-windows-x86_64.zip
unzip -q bazel-0.29.1-windows-x86_64.zip

:: Set up MSVC
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x64
set BAZEL_VS=C:\Program Files (x86)\Microsoft Visual Studio 14.0
set BAZEL_VC=C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC
set BAZEL_SH=c:\tools\msys64\usr\bin\bash.exe
set BAZEL_PYTHON=c:\tools\python2\python.exe

:: #########################################
:: Start building.
:: #########################################
echo "Build everything... %DATE% %TIME%"
bazel.exe build :all
if %ERRORLEVEL% NEQ 0 exit /b %ERRORLEVEL%
echo "Build Completed %DATE% %TIME%"

:: ##############
:: Run the tests
:: ##############
echo "Running Tests... %DATE% %TIME%"
bazel.exe test :all --test_output=all
if %ERRORLEVEL% NEQ 0 exit /b %ERRORLEVEL%
echo "Tests Completed %DATE% %TIME%"

exit /b 0

