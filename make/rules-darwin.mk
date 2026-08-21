# Darwin (macOS) target rules and compiler flags for Proton on macOS
#

MACOS_SDK_PATH ?= $(shell xcrun --show-sdk-path 2>/dev/null)
MACOS_DEPLOYMENT_TARGET ?= 11.0

# Arch flags for x86_64 Darwin target (Rosetta 2 compatible)
x86_64_darwin_CC      := clang
x86_64_darwin_CXX     := clang++
x86_64_darwin_CFLAGS  := -target x86_64-apple-macos$(MACOS_DEPLOYMENT_TARGET) -isysroot $(MACOS_SDK_PATH) -mmacosx-version-min=$(MACOS_DEPLOYMENT_TARGET) -fPIC -O2
x86_64_darwin_CXXFLAGS:= -target x86_64-apple-macos$(MACOS_DEPLOYMENT_TARGET) -isysroot $(MACOS_SDK_PATH) -mmacosx-version-min=$(MACOS_DEPLOYMENT_TARGET) -std=c++17 -fPIC -O2
x86_64_darwin_LDFLAGS := -target x86_64-apple-macos$(MACOS_DEPLOYMENT_TARGET) -isysroot $(MACOS_SDK_PATH) -Wl,-macosx_version_min,$(MACOS_DEPLOYMENT_TARGET) -framework AppKit -framework CoreAudio -framework IOKit -framework Metal -framework Foundation
x86_64_darwin_LIBEXT  := .dylib
x86_64_darwin_SOEXT   := .dylib

# Cross compiler for Windows PE components under macOS (Homebrew mingw-w64)
x86_64_windows_CC     := x86_64-w64-mingw32-gcc
x86_64_windows_CXX    := x86_64-w64-mingw32-g++
i386_windows_CC       := i686-w64-mingw32-gcc
i386_windows_CXX      := i686-w64-mingw32-g++

# macOS Wine configure flags
WINE_DARWIN_CONFIGURE_FLAGS := \
    --host=x86_64-apple-darwin \
    --with-mingw \
    --without-x \
    --without-gstreamer \
    --without-oss \
    --without-alsa \
    --without-pulse \
    --with-coreaudio \
    --with-appkit
