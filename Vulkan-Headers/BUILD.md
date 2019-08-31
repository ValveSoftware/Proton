# Build Instructions

Instructions for building this repository on Windows, Linux, and MacOS.

## Index

1. [Contributing](#contributing-to-the-repository)
1. [Repository Content](#repository-content)
1. [Repository Set-up](#repository-set-up)
1. [Windows Build](#building-on-windows)
1. [Linux Build](#building-on-linux)
1. [MacOS Build](#building-on-macos)

## Contributing to the Repository

The contents of this repository are sourced primarily from the Khronos Vulkan
API specification [repository](https://github.com/KhronosGroup/Vulkan-Docs).
Please visit that repository for information on contributing.

## Repository Content

This repository contains the Vulkan header files and the Vulkan API definition
(registry) with its related files. This repository does not create libraries
or executables.

However, this repository contains CMake build configuration files to "install"
the files from this repository to a specific install directory. For example,
you can install the files to a system directory such as `/usr/local` on Linux.

If you are building other Vulkan-related repositories such as
[Vulkan-Loader](https://github.com/KhronosGroup/Vulkan-Loader),
you need to build the install target of this repository and provide the
resulting install directory to those repositories.

### Installed Files

The `install` target installs the following files under the directory
indicated by *install_dir*:

- *install_dir*`/include/vulkan` : The header files found in the
 `include/vulkan` directory of this repository
- *install_dir*`/share/vulkan/registry` : The registry files found in the
  `registry` directory of this repository

The `uninstall` target can be used to remove the above files from the install
directory.

## Repository Set-Up

### Download the Repository

To create your local git repository:

    git clone https://github.com/KhronosGroup/Vulkan-Headers.git

### Repository Dependencies

This repository does not depend on any other repositories.

### Build and Install Directories

A common convention is to place the build directory in the top directory of
the repository with a name of `build` and place the install directory as a
child of the build directory with the name `install`. The remainder of these
instructions follow this convention, although you can use any name for these
directories and place them in any location.

## Building On Windows

### Windows Development Environment Requirements

- Windows
  - Any Personal Computer version supported by Microsoft
- Microsoft [Visual Studio](https://www.visualstudio.com/)
  - Versions
    - [2013 (update 4)](https://www.visualstudio.com/vs/older-downloads/)
    - [2015](https://www.visualstudio.com/vs/older-downloads/)
    - [2017](https://www.visualstudio.com/vs/downloads/)
  - The Community Edition of each of the above versions is sufficient, as
    well as any more capable edition.
- [CMake 3.10.2](https://cmake.org/files/v3.10/cmake-3.10.2-win64-x64.zip) is recommended.
  - Use the installer option to add CMake to the system PATH
- Git Client Support
  - [Git for Windows](http://git-scm.com/download/win) is a popular solution
    for Windows
  - Some IDEs (e.g., [Visual Studio](https://www.visualstudio.com/),
    [GitHub Desktop](https://desktop.github.com/)) have integrated
    Git client support

### Windows Build - Microsoft Visual Studio

The general approach is to run CMake to generate the Visual Studio project
files. Then either run CMake with the `--build` option to build from the
command line or use the Visual Studio IDE to open the generated solution and
work with the solution interactively.

#### Windows Quick Start

    cd Vulkan-Headers
    mkdir build
    cd build
    cmake ..
    cmake --build . --target install

See below for the details.

#### Use `CMake` to Create the Visual Studio Project Files

Change your current directory to the top of the cloned repository directory,
create a build directory and generate the Visual Studio project files:

    cd Vulkan-Headers
    mkdir build
    cd build
    cmake ..

> Note: The `..` parameter tells `cmake` the location of the top of the
> repository. If you place your build directory someplace else, you'll need to
> specify the location of the repository top differently.

The CMake configuration files set the default install directory location to
`$CMAKE_BINARY_DIR\install`, which is a child of your build directory. In this
example, the install directory becomes the `Vulkan-Headers\build\install`
directory.

The project installs the header files to

    Vulkan-Headers\build\install\include\vulkan

and installs the registry files to

    Vulkan-Headers\build\install\share\vulkan\registry

You can change the install directory with the `CMAKE_INSTALL_PREFIX` CMake
variable.

For example:

    cd Vulkan-Headers
    mkdir build
    cd build
    cmake -DCMAKE_INSTALL_PREFIX=/c/Users/dev/install ..  # MINGW64 shell

As it starts generating the project files, `cmake` responds with something
like:

    -- Building for: Visual Studio 14 2015

which is a 32-bit generator.

Since this repository does not compile anything, there is no need to specify a
specific generator such as "Visual Studio 14 2015 Win64", so the default
generator should suffice.

The above steps create a Windows solution file named `Vulkan-Headers.sln` in
the build directory.

At this point, you can build the solution from the command line or open the
generated solution with Visual Studio.

#### Build the Solution From the Command Line

While still in the build directory:

    cmake --build . --target install

to build the install target.

Build the `uninstall` target to remove the files from the install directory.

    cmake --build . --target uninstall

#### Build the Solution With Visual Studio

Launch Visual Studio and open the "Vulkan-Headers.sln" solution file in the
build directory. Build the `INSTALL` target from the Visual Studio solution
explorer.

Build the `uninstall` target to remove the files from the install directory.

> Note: Since there are only the `INSTALL` and `uninstall` projects in the
> solution, building the solution from the command line may be more efficient
> than starting Visual Studio for these simple operations.

## Building On Linux

### Linux Development Environment Requirements

There are no specific Linux distribution or compiler version requirements for
building this repository. The required tools are

- [CMake 3.10.2](https://cmake.org/files/v3.10/cmake-3.10.2-Linux-x86_64.tar.gz) is recommended.
- git

### Linux Build

The general approach is to run CMake to generate make files. Then either run
CMake with the `--build` option or `make` to build from the command line.

#### Linux Quick Start

    cd Vulkan-Headers
    mkdir build
    cd build
    cmake -DCMAKE_INSTALL_PREFIX=install ..
    make install

See below for the details.

#### Use CMake to Create the Make Files

Change your current directory to the top of the cloned repository directory,
create a build directory and generate the make files:

    cd Vulkan-Headers
    mkdir build
    cd build
    cmake -DCMAKE_INSTALL_PREFIX=install ..

> Note: The `..` parameter tells `cmake` the location of the top of the
> repository. If you place your `build` directory someplace else, you'll need
> to specify the location of the repository top differently.

Set the `CMAKE_INSTALL_PREFIX` variable to the directory to serve as the
destination directory for the `install` target.

The above `cmake` command sets the install directory to
`$CMAKE_BINARY_DIR/install`, which is a child of your `build` directory. In
this example, the install directory becomes the `Vulkan-Headers/build/install`
directory.

The make file install target installs the header files to

    Vulkan-Headers/build/install/include/vulkan

and installs the registry files to

    Vulkan-Headers/build/install/share/vulkan/registry

> Note: For Linux, the default value for `CMAKE_INSTALL_PREFIX` is
> `/usr/local`, which would be used if you do not specify
> `CMAKE_INSTALL_PREFIX`. In this case, you may need to use `sudo` to install
> to system directories later when you run `make install`.

Note that after generating the make files, running `make`:

    make

does nothing, since there are no libraries or executables to build.

To install the header files:

    make install

or

    cmake --build . --target install

To uninstall the files from the install directories, you can execute:

    make uninstall

or

    cmake --build . --target uninstall

## Building on MacOS

The instructions for building this repository on MacOS are similar to those for Linux.

[CMake 3.10.2](https://cmake.org/files/v3.10/cmake-3.10.2-Darwin-x86_64.tar.gz) is recommended.
