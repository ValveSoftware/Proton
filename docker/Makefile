STEAMRT_VERSION = 3.0.20250826.159138
STEAMRT_URLBASE = registry.gitlab.steamos.cloud

BUILD_ARCH ?= x86_64

HOST_ARCH = $(shell uname -m)

ifneq ($(BUILD_ARCH),$(HOST_ARCH))
	foo := $(warning Trying to build container for BUILD_ARCH=$(BUILD_ARCH) on $(HOST_ARCH). This may be not what you want.)
endif

ifeq ($(BUILD_ARCH),aarch64)
	CONTAINER_URL_INFIX = /arm64
endif

PROTONSDK_URLBASE = $(STEAMRT_URLBASE)/proton/sniper/sdk$(CONTAINER_URL_INFIX)
PROTONSDK_VERSION = $(STEAMRT_VERSION)-0-dev

# this is just for building toolchain, as we do static builds it should
# not have any impact on the end result, but changing it will invalidate
# docker caches, so we need something that don't change much
BASE_IMAGE := $(STEAMRT_URLBASE)/steamrt/sniper/sdk$(CONTAINER_URL_INFIX):3.0.20250826.159138

BINUTILS_VERSION = 2.42
GCC_VERSION = 14.2.0
MINGW_VERSION = 13.0.0
RUST_VERSION = 1.68.0
NINJA_VERSION = 1.13.1
AFDKO_VERSION = 4.0.2
LLVM_VERSION = 21.1.0
LLVM_MINGW_VERSION = 20250910

SOURCES_URLBASE = https://repo.steampowered.com/proton-sdk
BINUTILS_URLBASE = $(SOURCES_URLBASE)
GCC_URLBASE = $(SOURCES_URLBASE)
MINGW_URLBASE = $(SOURCES_URLBASE)
RUST_URLBASE = https://static.rust-lang.org/dist
NINJA_URLBASE = $(SOURCES_URLBASE)
AFDKO_URLBASE = $(SOURCES_URLBASE)
LLVM_URLBASE = $(SOURCES_URLBASE)
LLVM_MINGW_URLBASE = $(SOURCES_URLBASE)

BINUTILS_SOURCE = binutils-$(BINUTILS_VERSION).tar.xz
GCC_SOURCE = gcc-$(GCC_VERSION).tar.xz
MINGW_SOURCE = mingw-w64-v$(MINGW_VERSION).tar.bz2
RUST_SOURCE_x86_64 = rust-$(RUST_VERSION)-x86_64-unknown-linux-gnu.tar.gz
RUST_SOURCE_i686 = rust-$(RUST_VERSION)-i686-unknown-linux-gnu.tar.gz
RUST_SOURCE_aarch64 = rust-$(RUST_VERSION)-aarch64-unknown-linux-gnu.tar.gz
NINJA_SOURCE = ninja-$(NINJA_VERSION).zip
AFDKO_SOURCE = afdko-$(AFDKO_VERSION).zip
LLVM_SOURCE = llvm-$(LLVM_VERSION).tar.gz
LLVM_MINGW_SOURCE = llvm-mingw-$(LLVM_MINGW_VERSION).tar.gz

BINUTILS_SHA256 = f6e4d41fd5fc778b06b7891457b3620da5ecea1006c6a4a41ae998109f85a800
GCC_SHA256 = a7b39bc69cbf9e25826c5a60ab26477001f7c08d85cec04bc0e29cabed6f3cc9
MINGW_SHA256 = 5afe822af5c4edbf67daaf45eec61d538f49eef6b19524de64897c6b95828caf
RUST_SHA256_x86_64 = 7be1acdac656d0b0b7e909e5c0d4ddf61c755c203ec26ebafbd306322335b361
RUST_SHA256_i686 = dc931adeb2943dcadfbd29546481f0296fcb97a511421053ecae6586a85869b1
RUST_SHA256_aarch64 = 7cf68cab37501d06fc55efcebf934a183e5cd4c804d1308c2907a3136a198c01
NINJA_SHA256 = 5bfe6e147f39347f53777fce2fff324811297f12f4199623a9e3d5a9dc431d69
AFDKO_SHA256 = 33b0e83b47bb7418594d9b10bd9907dbdc1df8ed0b6a9c385400490c32a46e1c
LLVM_SHA256 = fba0618cf8de48ec05880c446edd756a2669157eab9d29949e971c77da10275f
LLVM_MINGW_SHA256 = 48caa362f1256a8f0719332f2555d06e3e0bdc5414d3bf8cb6809ee8ec5a5ba2

DOCKER = docker

%.Dockerfile: %.Dockerfile.in Makefile
	sed -re 's!@PROTONSDK_URLBASE@!$(PROTONSDK_URLBASE)!g' \
	    -re 's!@BASE_IMAGE@!$(BASE_IMAGE)!g' \
	    -re 's!@BINUTILS_VERSION@!$(BINUTILS_VERSION)!g' \
	    -re 's!@BINUTILS_URLBASE@!$(BINUTILS_URLBASE)!g' \
	    -re 's!@BINUTILS_SOURCE@!$(BINUTILS_SOURCE)!g' \
	    -re 's!@BINUTILS_SHA256@!$(BINUTILS_SHA256)!g' \
	    -re 's!@GCC_VERSION@!$(GCC_VERSION)!g' \
	    -re 's!@GCC_URLBASE@!$(GCC_URLBASE)!g' \
	    -re 's!@GCC_SOURCE@!$(GCC_SOURCE)!g' \
	    -re 's!@GCC_SHA256@!$(GCC_SHA256)!g' \
	    -re 's!@MINGW_VERSION@!$(MINGW_VERSION)!g' \
	    -re 's!@MINGW_URLBASE@!$(MINGW_URLBASE)!g' \
	    -re 's!@MINGW_SOURCE@!$(MINGW_SOURCE)!g' \
	    -re 's!@MINGW_SHA256@!$(MINGW_SHA256)!g' \
	    -re 's!@RUST_VERSION@!$(RUST_VERSION)!g' \
	    -re 's!@RUST_URLBASE@!$(RUST_URLBASE)!g' \
	    -re 's!@RUST_SOURCE_x86_64@!$(RUST_SOURCE_x86_64)!g' \
	    -re 's!@RUST_SOURCE_i686@!$(RUST_SOURCE_i686)!g' \
	    -re 's!@RUST_SOURCE_aarch64@!$(RUST_SOURCE_aarch64)!g' \
	    -re 's!@RUST_SHA256_x86_64@!$(RUST_SHA256_x86_64)!g' \
	    -re 's!@RUST_SHA256_i686@!$(RUST_SHA256_i686)!g' \
	    -re 's!@RUST_SHA256_aarch64@!$(RUST_SHA256_aarch64)!g' \
	    -re 's!@NINJA_VERSION@!$(NINJA_VERSION)!g' \
	    -re 's!@NINJA_URLBASE@!$(NINJA_URLBASE)!g' \
	    -re 's!@NINJA_SOURCE@!$(NINJA_SOURCE)!g' \
	    -re 's!@NINJA_SHA256@!$(NINJA_SHA256)!g' \
	    -re 's!@LLVM_VERSION@!$(LLVM_VERSION)!g' \
	    -re 's!@LLVM_URLBASE@!$(LLVM_URLBASE)!g' \
	    -re 's!@LLVM_SOURCE@!$(LLVM_SOURCE)!g' \
	    -re 's!@LLVM_SHA256@!$(LLVM_SHA256)!g' \
	    -re 's!@LLVM_MINGW_VERSION@!$(LLVM_MINGW_VERSION)!g' \
	    -re 's!@LLVM_MINGW_URLBASE@!$(LLVM_MINGW_URLBASE)!g' \
	    -re 's!@LLVM_MINGW_SOURCE@!$(LLVM_MINGW_SOURCE)!g' \
	    -re 's!@LLVM_MINGW_SHA256@!$(LLVM_MINGW_SHA256)!g' \
	    -re 's!@AFDKO_VERSION@!$(AFDKO_VERSION)!g' \
	    -re 's!@AFDKO_URLBASE@!$(AFDKO_URLBASE)!g' \
	    -re 's!@AFDKO_SOURCE@!$(AFDKO_SOURCE)!g' \
	    -re 's!@AFDKO_SHA256@!$(AFDKO_SHA256)!g' \
	    -re 's!@J@!$(shell nproc)!g' \
	    $< >$@

%-i686.Dockerfile.in: %.Dockerfile.in
	sed -re 's!@ARCH@!i686!g' \
	    -re 's!@ARCH_FLAGS@!$(ARCH_FLAGS)!g' \
	    $< >$@

%-x86_64.Dockerfile.in: %.Dockerfile.in
	sed -re 's!@ARCH@!x86_64!g' \
	    -re 's!@ARCH_FLAGS@!$(ARCH_FLAGS)!g' \
	    $< >$@

%-linux-gnu.Dockerfile.in: %.Dockerfile.in
	sed -re 's!@TARGET@!linux-gnu!g' \
	    -re 's!@ARCH_FLAGS@!$(ARCH_FLAGS)!g' \
	    -re 's!@TARGET_FLAGS@!$(TARGET_FLAGS)!g' \
	    $< >$@

%-w64-mingw32.Dockerfile.in: %.Dockerfile.in
	sed -re 's!@TARGET@!w64-mingw32!g' \
	    -re 's!@ARCH_FLAGS@!$(ARCH_FLAGS)!g' \
	    -re 's!@TARGET_FLAGS@!$(TARGET_FLAGS)!g' \
	    $< >$@

define create-build-base-rules
.PHONY: build-base-$(1)
all build-base: build-base-$(1)
build-base-$(1): build-base-$(1).Dockerfile
	$(DOCKER) build -f $$< \
	  --cache-from=$(PROTONSDK_URLBASE)/build-base-$(1) \
	  -t $(PROTONSDK_URLBASE)/build-base-$(1):latest \
	  context
pull::
	-$(DOCKER) pull $(PROTONSDK_URLBASE)/build-base-$(1):latest
push::
	$(DOCKER) push $(PROTONSDK_URLBASE)/build-base-$(1):latest
endef

$(eval $(call create-build-base-rules,i686))
$(eval $(call create-build-base-rules,x86_64))

define create-binutils-rules
.PHONY: binutils-$(1)-$(2)
all binutils: binutils-$(1)-$(2)
binutils-$(1)-$(2): binutils-$(1)-$(2).Dockerfile | build-base
	$(DOCKER) build -f $$< \
	  --cache-from=$(PROTONSDK_URLBASE)/binutils-$(1)-$(2) \
	  -t $(PROTONSDK_URLBASE)/binutils-$(1)-$(2):$(BINUTILS_VERSION) \
	  -t $(PROTONSDK_URLBASE)/binutils-$(1)-$(2):latest \
	  context
pull::
	-$(DOCKER) pull $(PROTONSDK_URLBASE)/binutils-$(1)-$(2):$(BINUTILS_VERSION)
push::
	$(DOCKER) push $(PROTONSDK_URLBASE)/binutils-$(1)-$(2):$(BINUTILS_VERSION)
	$(DOCKER) push $(PROTONSDK_URLBASE)/binutils-$(1)-$(2):latest
endef

$(eval $(call create-binutils-rules,i686,w64-mingw32))
$(eval $(call create-binutils-rules,i686,linux-gnu))
$(eval $(call create-binutils-rules,x86_64,w64-mingw32))
$(eval $(call create-binutils-rules,x86_64,linux-gnu))

MINGW_ARCH_FLAGS_crt-x86_64 = --disable-lib32 CFLAGS="-mcmodel=small"
MINGW_ARCH_FLAGS_crt-i686 = --disable-lib64
MINGW_ARCH_FLAGS_pthread-x86_64 = CFLAGS="-mcmodel=small"
MINGW_ARCH_FLAGS_pthread-i686 =

define create-mingw-rules
.PHONY: mingw-$(2)-$(1)
all mingw: mingw-$(2)-$(1)
mingw-$(2)-$(1): ARCH_FLAGS = $(MINGW_ARCH_FLAGS_$(2)-$(1))
mingw-$(2)-$(1): mingw-$(2)-$(1).Dockerfile | binutils
	$(DOCKER) build -f $$< \
	  --cache-from=$(PROTONSDK_URLBASE)/mingw-$(2)-$(1) \
	  -t $(PROTONSDK_URLBASE)/mingw-$(2)-$(1):$(MINGW_VERSION) \
	  -t $(PROTONSDK_URLBASE)/mingw-$(2)-$(1):latest \
	  context
pull::
	-$(DOCKER) pull $(PROTONSDK_URLBASE)/mingw-$(2)-$(1):$(MINGW_VERSION)
push::
	$(DOCKER) push $(PROTONSDK_URLBASE)/mingw-$(2)-$(1):$(MINGW_VERSION)
	$(DOCKER) push $(PROTONSDK_URLBASE)/mingw-$(2)-$(1):latest
endef

$(eval $(call create-mingw-rules,i686,headers))
$(eval $(call create-mingw-rules,i686,gcc))
$(eval $(call create-mingw-rules,i686,crt))
$(eval $(call create-mingw-rules,i686,pthreads))
$(eval $(call create-mingw-rules,i686,widl))
$(eval $(call create-mingw-rules,x86_64,headers))
$(eval $(call create-mingw-rules,x86_64,gcc))
$(eval $(call create-mingw-rules,x86_64,crt))
$(eval $(call create-mingw-rules,x86_64,pthreads))
$(eval $(call create-mingw-rules,x86_64,widl))

GCC_ARCH_FLAGS_x86_64 = CFLAGS_FOR_TARGET="-mcmodel=small" CXXFLAGS_FOR_TARGET="-mcmodel=small"
GCC_ARCH_FLAGS_i686 =

GCC_TARGET_FLAGS_w64-mingw32 = --disable-shared
GCC_TARGET_FLAGS_linux-gnu =

define create-gcc-rules
.PHONY: gcc-$(1)-$(2)
all gcc: gcc-$(1)-$(2)
gcc-$(1)-$(2): ARCH_FLAGS = $(GCC_ARCH_FLAGS_$(1))
gcc-$(1)-$(2): TARGET_FLAGS = $(GCC_TARGET_FLAGS_$(2))
gcc-$(1)-$(2): gcc-$(1)-$(2).Dockerfile | mingw
	$(DOCKER) build -f $$< \
	  --cache-from=$(PROTONSDK_URLBASE)/gcc-$(1)-$(2) \
	  -t $(PROTONSDK_URLBASE)/gcc-$(1)-$(2):$(GCC_VERSION) \
	  -t $(PROTONSDK_URLBASE)/gcc-$(1)-$(2):latest \
	  context
pull::
	-$(DOCKER) pull $(PROTONSDK_URLBASE)/gcc-$(1)-$(2):$(GCC_VERSION)
push::
	$(DOCKER) push $(PROTONSDK_URLBASE)/gcc-$(1)-$(2):$(GCC_VERSION)
	$(DOCKER) push $(PROTONSDK_URLBASE)/gcc-$(1)-$(2):latest
endef

$(eval $(call create-gcc-rules,i686,w64-mingw32))
$(eval $(call create-gcc-rules,x86_64,w64-mingw32))

define create-proton-rules
.PHONY: proton
all: proton
proton: BASE_IMAGE = $(STEAMRT_URLBASE)/steamrt/sniper/sdk$(CONTAINER_URL_INFIX):$(STEAMRT_VERSION)
proton: proton.Dockerfile | gcc
	$(DOCKER) build -f $$< \
	  --cache-from=$(PROTONSDK_URLBASE) \
	  -t $(PROTONSDK_URLBASE):$(PROTONSDK_VERSION) \
	  -t $(PROTONSDK_URLBASE):latest \
	  context
pull::
	-$(DOCKER) pull $(PROTONSDK_URLBASE):$(PROTONSDK_VERSION)
push::
	$(DOCKER) push $(PROTONSDK_URLBASE):$(PROTONSDK_VERSION)
	$(DOCKER) push $(PROTONSDK_URLBASE):latest
endef

$(eval $(call create-proton-rules))


.PHONY: llvm-mingw
all: llvm-mingw
llvm-mingw: BASE_IMAGE = $(STEAMRT_URLBASE)/steamrt/sniper/sdk$(CONTAINER_URL_INFIX):$(STEAMRT_VERSION)
llvm-mingw: llvm-mingw.Dockerfile
	$(DOCKER) build -f $< \
	  --cache-from=$(PROTONSDK_URLBASE)/llvm-mingw \
	  -t $(PROTONSDK_URLBASE)/llvm-mingw:$(LLVM_MINGW_VERSION) \
	  -t $(PROTONSDK_URLBASE)/llvm-mingw:latest \
	  context
pull::
	-$(DOCKER) pull $(PROTONSDK_URLBASE)/llvm-mingw:$(LLVM_MINGW_VERSION)
push::
	$(DOCKER) push $(PROTONSDK_URLBASE)/llvm-mingw:$(LLVM_MINGW_VERSION)
	$(DOCKER) push $(PROTONSDK_URLBASE)/llvm-mingw:latest

.PHONY: proton-llvm
all: proton-llvm
proton-llvm: BASE_IMAGE = $(STEAMRT_URLBASE)/steamrt/sniper/sdk$(CONTAINER_URL_INFIX):$(STEAMRT_VERSION)
proton-llvm: proton-llvm.Dockerfile | llvm-mingw
	$(DOCKER) build -f $< \
	  --build-arg=BUILD_ARCH=$(BUILD_ARCH) \
	  --cache-from=$(PROTONSDK_URLBASE) \
	  -t $(PROTONSDK_URLBASE)/llvm:$(PROTONSDK_VERSION) \
	  -t $(PROTONSDK_URLBASE)/llvm:latest \
	  context
pull::
	-$(DOCKER) pull $(PROTONSDK_URLBASE)/llvm:$(PROTONSDK_VERSION)
push::
	$(DOCKER) push $(PROTONSDK_URLBASE)/llvm:$(PROTONSDK_VERSION)
	$(DOCKER) push $(PROTONSDK_URLBASE)/llvm:latest


sources::
	rm -f $(BINUTILS_SOURCE)
	rm -f $(MINGW_SOURCE)
	rm -f $(GCC_SOURCE)
	rm -f $(RUST_SOURCE_x86_64)
	rm -f $(RUST_SOURCE_i686)
	rm -f $(RUST_SOURCE_aarch64)
	rm -f $(NINJA_SOURCE)
	rm -f $(LLVM_SOURCE)
	rm -f $(LLVM_MINGW_SOURCE)
	wget $(BINUTILS_URLBASE)/$(BINUTILS_SOURCE)
	wget $(MINGW_URLBASE)/$(MINGW_SOURCE)
	wget $(GCC_URLBASE)/$(GCC_SOURCE)
	wget $(RUST_URLBASE)/$(RUST_SOURCE_x86_64)
	wget $(RUST_URLBASE)/$(RUST_SOURCE_i686)
	wget $(RUST_URLBASE)/$(RUST_SOURCE_aarch64)
	wget $(NINJA_URLBASE)/$(NINJA_SOURCE)
	wget $(LLVM_URLBASE)/$(LLVM_SOURCE)
	wget $(LLVM_MINGW_URLBASE)/$(LLVM_MINGW_SOURCE)
	echo $(BINUTILS_SHA256) $(BINUTILS_SOURCE) | sha256sum -c -
	echo $(MINGW_SHA256) $(MINGW_SOURCE) | sha256sum -c -
	echo $(GCC_SHA256) $(GCC_SOURCE) | sha256sum -c -
	echo $(RUST_SHA256_x86_64) $(RUST_SOURCE_x86_64) | sha256sum -c -
	echo $(RUST_SHA256_i686) $(RUST_SOURCE_i686) | sha256sum -c -
	echo $(RUST_SHA256_aarch64) $(RUST_SOURCE_aarch64) | sha256sum -c -
	echo $(NINJA_SHA256) $(NINJA_SOURCE) | sha256sum -c -
	echo $(LLVM_SHA256) $(LLVM_SOURCE) | sha256sum -c -
	echo $(LLVM_MINGW_SHA256) $(LLVM_MINGW_SOURCE) | sha256sum -c -
