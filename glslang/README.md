# News

1. Visual Studio 2013 is no longer supported

   [As scheduled](https://github.com/KhronosGroup/glslang/blob/9eef54b2513ca6b40b47b07d24f453848b65c0df/README.md#planned-deprecationsremovals),
Microsoft Visual Studio 2013 is no longer officially supported. \
   Please upgrade to at least Visual Studio 2015.

2. The versioning scheme is being improved, and you might notice some differences.  This is currently WIP, but will be coming soon.  See, for example, PR #2277.

3. If you get a new **compilation error due to a missing header**, it might be caused by this planned removal:

**SPIRV Folder, 1-May, 2020.** Glslang, when installed through CMake,
will install a `SPIRV` folder into `${CMAKE_INSTALL_INCLUDEDIR}`.
This `SPIRV` folder is being moved to `glslang/SPIRV`.
During the transition the `SPIRV` folder will be installed into both locations.
The old install of `SPIRV/` will be removed as a CMake install target no sooner than May 1, 2020.
See issue #1964.

If people are only using this location to get spirv.hpp, I recommend they get that from [SPIRV-Headers](https://github.com/KhronosGroup/SPIRV-Headers) instead.

[![appveyor status](https://ci.appveyor.com/api/projects/status/q6fi9cb0qnhkla68/branch/master?svg=true)](https://ci.appveyor.com/project/Khronoswebmaster/glslang/branch/master)
![Continuous Deployment](https://github.com/KhronosGroup/glslang/actions/workflows/continuous_deployment.yml/badge.svg)

# Glslang Components and Status

There are several components:

### Reference Validator and GLSL/ESSL -> AST Front End

An OpenGL GLSL and OpenGL|ES GLSL (ESSL) front-end for reference validation and translation of GLSL/ESSL into an internal abstract syntax tree (AST).

**Status**: Virtually complete, with results carrying similar weight as the specifications.

### HLSL -> AST Front End

An HLSL front-end for translation of an approximation of HLSL to glslang's AST form.

**Status**: Partially complete. Semantics are not reference quality and input is not validated.
This is in contrast to the [DXC project](https://github.com/Microsoft/DirectXShaderCompiler), which receives a much larger investment and attempts to have definitive/reference-level semantics.

See [issue 362](https://github.com/KhronosGroup/glslang/issues/362) and [issue 701](https://github.com/KhronosGroup/glslang/issues/701) for current status.

### AST -> SPIR-V Back End

Translates glslang's AST to the Khronos-specified SPIR-V intermediate language.

**Status**: Virtually complete.

### Reflector

An API for getting reflection information from the AST, reflection types/variables/etc. from the HLL source (not the SPIR-V).

**Status**: There is a large amount of functionality present, but no specification/goal to measure completeness against.  It is accurate for the input HLL and AST, but only approximate for what would later be emitted for SPIR-V.

### Standalone Wrapper

`glslangValidator` is command-line tool for accessing the functionality above.

Status: Complete.

Tasks waiting to be done are documented as GitHub issues.

## Other References

Also see the Khronos landing page for glslang as a reference front end:

https://www.khronos.org/opengles/sdk/tools/Reference-Compiler/

The above page, while not kept up to date, includes additional information regarding glslang as a reference validator.

# How to Use Glslang

## Execution of Standalone Wrapper

To use the standalone binary form, execute `glslangValidator`, and it will print
a usage statement.  Basic operation is to give it a file containing a shader,
and it will print out warnings/errors and optionally an AST.

The applied stage-specific rules are based on the file extension:
* `.vert` for a vertex shader
* `.tesc` for a tessellation control shader
* `.tese` for a tessellation evaluation shader
* `.geom` for a geometry shader
* `.frag` for a fragment shader
* `.comp` for a compute shader

For ray tracing pipeline shaders:
* `.rgen` for a ray generation shader
* `.rint` for a ray intersection shader
* `.rahit` for a ray any-hit shader
* `.rchit` for a ray closest-hit shader
* `.rmiss` for a ray miss shader
* `.rcall` for a callable shader

There is also a non-shader extension:
* `.conf` for a configuration file of limits, see usage statement for example

## Building (CMake)

Instead of building manually, you can also download the binaries for your
platform directly from the [master-tot release][master-tot-release] on GitHub.
Those binaries are automatically uploaded by the buildbots after successful
testing and they always reflect the current top of the tree of the master
branch.

### Dependencies

* A C++11 compiler.
  (For MSVS: use 2015 or later.)
* [CMake][cmake]: for generating compilation targets.
* make: _Linux_, ninja is an alternative, if configured.
* [Python 3.x][python]: for executing SPIRV-Tools scripts. (Optional if not using SPIRV-Tools and the 'External' subdirectory does not exist.)
* [bison][bison]: _optional_, but needed when changing the grammar (glslang.y).
* [googletest][googletest]: _optional_, but should use if making any changes to glslang.

### Build steps

The following steps assume a Bash shell. On Windows, that could be the Git Bash
shell or some other shell of your choosing.

#### 1) Check-Out this project

```bash
cd <parent of where you want glslang to be>
git clone https://github.com/KhronosGroup/glslang.git
```

#### 2) Check-Out External Projects

```bash
cd <the directory glslang was cloned to, "External" will be a subdirectory>
git clone https://github.com/google/googletest.git External/googletest
```

TEMPORARY NOTICE: additionally perform the following to avoid a current
breakage in googletest:

```bash
cd External/googletest
git checkout 0c400f67fcf305869c5fb113dd296eca266c9725
cd ../..
```

If you wish to assure that SPIR-V generated from HLSL is legal for Vulkan,
wish to invoke -Os to reduce SPIR-V size from HLSL or GLSL, or wish to run the
integrated test suite, install spirv-tools with this:

```bash
./update_glslang_sources.py
```

#### 3) Configure

Assume the source directory is `$SOURCE_DIR` and the build directory is
`$BUILD_DIR`. First ensure the build directory exists, then navigate to it:

```bash
mkdir -p $BUILD_DIR
cd $BUILD_DIR
```

For building on Linux:

```bash
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX="$(pwd)/install" $SOURCE_DIR
# "Release" (for CMAKE_BUILD_TYPE) could also be "Debug" or "RelWithDebInfo"
```

For building on Android:
```bash
cmake $SOURCE_DIR -G "Unix Makefiles" -DCMAKE_INSTALL_PREFIX="$(pwd)/install" -DANDROID_ABI=arm64-v8a -DCMAKE_BUILD_TYPE=Release -DANDROID_STL=c++_static -DANDROID_PLATFORM=android-24 -DCMAKE_SYSTEM_NAME=Android -DANDROID_TOOLCHAIN=clang -DANDROID_ARM_MODE=arm -DCMAKE_MAKE_PROGRAM=$ANDROID_NDK_HOME/prebuilt/linux-x86_64/bin/make -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK_HOME/build/cmake/android.toolchain.cmake
# If on Windows will be -DCMAKE_MAKE_PROGRAM=%ANDROID_NDK_HOME%\prebuilt\windows-x86_64\bin\make.exe
# -G is needed for building on Windows
# -DANDROID_ABI can also be armeabi-v7a for 32 bit
```

For building on Windows:

```bash
cmake $SOURCE_DIR -DCMAKE_INSTALL_PREFIX="$(pwd)/install"
# The CMAKE_INSTALL_PREFIX part is for testing (explained later).
```

The CMake GUI also works for Windows (version 3.4.1 tested).

Also, consider using `git config --global core.fileMode false` (or with `--local`) on Windows
to prevent the addition of execution permission on files.

#### 4) Build and Install

```bash
# for Linux:
make -j4 install

# for Windows:
cmake --build . --config Release --target install
# "Release" (for --config) could also be "Debug", "MinSizeRel", or "RelWithDebInfo"
```

If using MSVC, after running CMake to configure, use the
Configuration Manager to check the `INSTALL` project.

### Building (GN)

glslang can also be built with the [GN build system](https://gn.googlesource.com/gn/).

#### 1) Install `depot_tools`

Download [depot_tools.zip](https://storage.googleapis.com/chrome-infra/depot_tools.zip),
extract to a directory, and add this directory to your `PATH`.

#### 2) Synchronize dependencies and generate build files

This only needs to be done once after updating `glslang`.

With the current directory set to your `glslang` checkout, type:

```bash
./update_glslang_sources.py
gclient sync --gclientfile=standalone.gclient
gn gen out/Default
```

#### 3) Build

With the current directory set to your `glslang` checkout, type:

```bash
cd out/Default
ninja
```

### If you need to change the GLSL grammar

The grammar in `glslang/MachineIndependent/glslang.y` has to be recompiled with
bison if it changes, the output files are committed to the repo to avoid every
developer needing to have bison configured to compile the project when grammar
changes are quite infrequent. For windows you can get binaries from
[GnuWin32][bison-gnu-win32].

The command to rebuild is:

```bash
m4 -P MachineIndependent/glslang.m4 > MachineIndependent/glslang.y
bison --defines=MachineIndependent/glslang_tab.cpp.h
      -t MachineIndependent/glslang.y
      -o MachineIndependent/glslang_tab.cpp
```

The above commands are also available in the bash script in `updateGrammar`,
when executed from the glslang subdirectory of the glslang repository.
With no arguments it builds the full grammar, and with a "web" argument,
the web grammar subset (see more about the web subset in the next section).

### Building to WASM for the Web and Node
### Building a standalone JS/WASM library for the Web and Node

Use the steps in [Build Steps](#build-steps), with the following notes/exceptions:
* `emsdk` needs to be present in your executable search path, *PATH* for
  Bash-like environments:
  + [Instructions located here](https://emscripten.org/docs/getting_started/downloads.html#sdk-download-and-install)
* Wrap cmake call: `emcmake cmake`
* Set `-DBUILD_TESTING=OFF -DENABLE_OPT=OFF -DINSTALL_GTEST=OFF`.
* Set `-DENABLE_HLSL=OFF` if HLSL is not needed.
* For a standalone JS/WASM library, turn on `-DENABLE_GLSLANG_JS=ON`.
* For building a minimum-size web subset of core glslang:
  + turn on `-DENABLE_GLSLANG_WEBMIN=ON` (disables HLSL)
  + execute `updateGrammar web` from the glslang subdirectory
    (or if using your own scripts, `m4` needs a `-DGLSLANG_WEB` argument)
  + optionally, for GLSL compilation error messages, turn on
    `-DENABLE_GLSLANG_WEBMIN_DEVEL=ON`
* To get a fully minimized build, make sure to use `brotli` to compress the .js
  and .wasm files

Example:

```sh
emcmake cmake -DCMAKE_BUILD_TYPE=Release -DENABLE_GLSLANG_JS=ON \
    -DENABLE_HLSL=OFF -DBUILD_TESTING=OFF -DENABLE_OPT=OFF -DINSTALL_GTEST=OFF ..
```

## Building glslang - Using vcpkg

You can download and install glslang using the [vcpkg](https://github.com/Microsoft/vcpkg) dependency manager:

    git clone https://github.com/Microsoft/vcpkg.git
    cd vcpkg
    ./bootstrap-vcpkg.sh
    ./vcpkg integrate install
    ./vcpkg install glslang

The glslang port in vcpkg is kept up to date by Microsoft team members and community contributors. If the version is out of date, please [create an issue or pull request](https://github.com/Microsoft/vcpkg) on the vcpkg repository.

## Testing

Right now, there are two test harnesses existing in glslang: one is [Google
Test](gtests/), one is the [`runtests` script](Test/runtests). The former
runs unit tests and single-shader single-threaded integration tests, while
the latter runs multiple-shader linking tests and multi-threaded tests.

### Running tests

The [`runtests` script](Test/runtests) requires compiled binaries to be
installed into `$BUILD_DIR/install`. Please make sure you have supplied the
correct configuration to CMake (using `-DCMAKE_INSTALL_PREFIX`) when building;
otherwise, you may want to modify the path in the `runtests` script.

Running Google Test-backed tests:

```bash
cd $BUILD_DIR

# for Linux:
ctest

# for Windows:
ctest -C {Debug|Release|RelWithDebInfo|MinSizeRel}

# or, run the test binary directly
# (which gives more fine-grained control like filtering):
<dir-to-glslangtests-in-build-dir>/glslangtests
```

Running `runtests` script-backed tests:

```bash
cd $SOURCE_DIR/Test && ./runtests
```

If some tests fail with validation errors, there may be a mismatch between the
version of `spirv-val` on the system and the version of glslang.  In this
case, it is necessary to run `update_glslang_sources.py`.  See "Check-Out
External Projects" above for more details.

### Contributing tests

Test results should always be included with a pull request that modifies
functionality.

If you are writing unit tests, please use the Google Test framework and
place the tests under the `gtests/` directory.

Integration tests are placed in the `Test/` directory. It contains test input
and a subdirectory `baseResults/` that contains the expected results of the
tests.  Both the tests and `baseResults/` are under source-code control.

Google Test runs those integration tests by reading the test input, compiling
them, and then compare against the expected results in `baseResults/`. The
integration tests to run via Google Test is registered in various
`gtests/*.FromFile.cpp` source files. `glslangtests` provides a command-line
option `--update-mode`, which, if supplied, will overwrite the golden files
under the `baseResults/` directory with real output from that invocation.
For more information, please check `gtests/` directory's
[README](gtests/README.md).

For the `runtests` script, it will generate current results in the
`localResults/` directory and `diff` them against the `baseResults/`.
When you want to update the tracked test results, they need to be
copied from `localResults/` to `baseResults/`.  This can be done by
the `bump` shell script.

You can add your own private list of tests, not tracked publicly, by using
`localtestlist` to list non-tracked tests.  This is automatically read
by `runtests` and included in the `diff` and `bump` process.

## Programmatic Interfaces

Another piece of software can programmatically translate shaders to an AST
using one of two different interfaces:
* A new C++ class-oriented interface, or
* The original C functional interface

The `main()` in `StandAlone/StandAlone.cpp` shows examples using both styles.

### C++ Class Interface (new, preferred)

This interface is in roughly the last 1/3 of `ShaderLang.h`.  It is in the
glslang namespace and contains the following, here with suggested calls
for generating SPIR-V:

```cxx
const char* GetEsslVersionString();
const char* GetGlslVersionString();
bool InitializeProcess();
void FinalizeProcess();

class TShader
    setStrings(...);
    setEnvInput(EShSourceHlsl or EShSourceGlsl, stage,  EShClientVulkan or EShClientOpenGL, 100);
    setEnvClient(EShClientVulkan or EShClientOpenGL, EShTargetVulkan_1_0 or EShTargetVulkan_1_1 or EShTargetOpenGL_450);
    setEnvTarget(EShTargetSpv, EShTargetSpv_1_0 or EShTargetSpv_1_3);
    bool parse(...);
    const char* getInfoLog();

class TProgram
    void addShader(...);
    bool link(...);
    const char* getInfoLog();
    Reflection queries
```

For just validating (not generating code), substitute these calls:

```cxx
    setEnvInput(EShSourceHlsl or EShSourceGlsl, stage,  EShClientNone, 0);
    setEnvClient(EShClientNone, 0);
    setEnvTarget(EShTargetNone, 0);
```

See `ShaderLang.h` and the usage of it in `StandAlone/StandAlone.cpp` for more
details. There is a block comment giving more detail above the calls for
`setEnvInput, setEnvClient, and setEnvTarget`.

### C Functional Interface (original)

This interface is in roughly the first 2/3 of `ShaderLang.h`, and referred to
as the `Sh*()` interface, as all the entry points start `Sh`.

The `Sh*()` interface takes a "compiler" call-back object, which it calls after
building call back that is passed the AST and can then execute a back end on it.

The following is a simplified resulting run-time call stack:

```c
ShCompile(shader, compiler) -> compiler(AST) -> <back end>
```

In practice, `ShCompile()` takes shader strings, default version, and
warning/error and other options for controlling compilation.

### C Functional Interface (new)

This interface is located `glslang_c_interface.h` and exposes functionality similar to the C++ interface. The following snippet is a complete example showing how to compile GLSL into SPIR-V 1.5 for Vulkan 1.2.

```cxx
std::vector<uint32_t> compileShaderToSPIRV_Vulkan(glslang_stage_t stage, const char* shaderSource, const char* fileName)
{
    const glslang_input_t input = {
        .language = GLSLANG_SOURCE_GLSL,
        .stage = stage,
        .client = GLSLANG_CLIENT_VULKAN,
        .client_version = GLSLANG_TARGET_VULKAN_1_2,
        .target_language = GLSLANG_TARGET_SPV,
        .target_language_version = GLSLANG_TARGET_SPV_1_5,
        .code = shaderSource,
        .default_version = 100,
        .default_profile = GLSLANG_NO_PROFILE,
        .force_default_version_and_profile = false,
        .forward_compatible = false,
        .messages = GLSLANG_MSG_DEFAULT_BIT,
        .resource = reinterpret_cast<const glslang_resource_t*>(&glslang::DefaultTBuiltInResource),
    };

    glslang_shader_t* shader = glslang_shader_create(&input);

    if (!glslang_shader_preprocess(shader, &input))	{
        printf("GLSL preprocessing failed %s\n", fileName);
        printf("%s\n", glslang_shader_get_info_log(shader));
        printf("%s\n", glslang_shader_get_info_debug_log(shader));
        printf("%s\n", input.code);
        glslang_shader_delete(shader);
        return std::vector<uint32_t>();
    }

    if (!glslang_shader_parse(shader, &input)) {
        printf("GLSL parsing failed %s\n", fileName);
        printf("%s\n", glslang_shader_get_info_log(shader));
        printf("%s\n", glslang_shader_get_info_debug_log(shader));
        printf("%s\n", glslang_shader_get_preprocessed_code(shader));
        glslang_shader_delete(shader);
        return std::vector<uint32_t>();
    }

    glslang_program_t* program = glslang_program_create();
    glslang_program_add_shader(program, shader);

    if (!glslang_program_link(program, GLSLANG_MSG_SPV_RULES_BIT | GLSLANG_MSG_VULKAN_RULES_BIT)) {
        printf("GLSL linking failed %s\n", fileName);
        printf("%s\n", glslang_program_get_info_log(program));
        printf("%s\n", glslang_program_get_info_debug_log(program));
        glslang_program_delete(program);
        glslang_shader_delete(shader);
        return std::vector<uint32_t>();
    }

    glslang_program_SPIRV_generate(program, stage);

    std::vector<uint32_t> outShaderModule(glslang_program_SPIRV_get_size(program));
    glslang_program_SPIRV_get(program, outShaderModule.data());

    const char* spirv_messages = glslang_program_SPIRV_get_messages(program);
    if (spirv_messages)
        printf("(%s) %s\b", fileName, spirv_messages);

    glslang_program_delete(program);
    glslang_shader_delete(shader);

    return outShaderModule;
}
```

## Basic Internal Operation

* Initial lexical analysis is done by the preprocessor in
  `MachineIndependent/Preprocessor`, and then refined by a GLSL scanner
  in `MachineIndependent/Scan.cpp`.  There is currently no use of flex.

* Code is parsed using bison on `MachineIndependent/glslang.y` with the
  aid of a symbol table and an AST.  The symbol table is not passed on to
  the back-end; the intermediate representation stands on its own.
  The tree is built by the grammar productions, many of which are
  offloaded into `ParseHelper.cpp`, and by `Intermediate.cpp`.

* The intermediate representation is very high-level, and represented
  as an in-memory tree.   This serves to lose no information from the
  original program, and to have efficient transfer of the result from
  parsing to the back-end.  In the AST, constants are propagated and
  folded, and a very small amount of dead code is eliminated.

  To aid linking and reflection, the last top-level branch in the AST
  lists all global symbols.

* The primary algorithm of the back-end compiler is to traverse the
  tree (high-level intermediate representation), and create an internal
  object code representation.  There is an example of how to do this
  in `MachineIndependent/intermOut.cpp`.

* Reduction of the tree to a linear byte-code style low-level intermediate
  representation is likely a good way to generate fully optimized code.

* There is currently some dead old-style linker-type code still lying around.

* Memory pool: parsing uses types derived from C++ `std` types, using a
  custom allocator that puts them in a memory pool.  This makes allocation
  of individual container/contents just few cycles and deallocation free.
  This pool is popped after the AST is made and processed.

  The use is simple: if you are going to call `new`, there are three cases:

  - the object comes from the pool (its base class has the macro
    `POOL_ALLOCATOR_NEW_DELETE` in it) and you do not have to call `delete`

  - it is a `TString`, in which case call `NewPoolTString()`, which gets
    it from the pool, and there is no corresponding `delete`

  - the object does not come from the pool, and you have to do normal
    C++ memory management of what you `new`

* Features can be protected by version/extension/stage/profile:
  See the comment in `glslang/MachineIndependent/Versions.cpp`.

[cmake]: https://cmake.org/
[python]: https://www.python.org/
[bison]: https://www.gnu.org/software/bison/
[googletest]: https://github.com/google/googletest
[bison-gnu-win32]: http://gnuwin32.sourceforge.net/packages/bison.htm
[master-tot-release]: https://github.com/KhronosGroup/glslang/releases/tag/master-tot
