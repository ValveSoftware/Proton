STEAMRT_VERSION = 0.20230509.49493
STEAMRT_URLBASE = registry.gitlab.steamos.cloud

PROTONSDK_URLBASE = $(STEAMRT_URLBASE)/proton/sniper/sdk
PROTONSDK_VERSION = $(STEAMRT_VERSION)-0-dev

# this is just for building toolchain, as we do static builds it should
# not have any impact on the end result, but changing it will invalidate
# docker caches, so we need something that don't change much
BASE_IMAGE = $(STEAMRT_URLBASE)/steamrt/sniper/sdk:0.20221017.1

BINUTILS_VERSION = 2.40
GCC_VERSION = 10.3.0
MINGW_VERSION = 9.0.0
RUST_VERSION = 1.68.0
NINJA_VERSION = 1.11.1

SOURCES_URLBASE = https://repo.steampowered.com/proton-sdk
BINUTILS_URLBASE = $(SOURCES_URLBASE)
GCC_URLBASE = $(SOURCES_URLBASE)
MINGW_URLBASE = $(SOURCES_URLBASE)
RUST_URLBASE = $(SOURCES_URLBASE)
NINJA_URLBASE = $(SOURCES_URLBASE)

BINUTILS_SOURCE = binutils-$(BINUTILS_VERSION).tar.xz
GCC_SOURCE = gcc-$(GCC_VERSION).tar.xz
MINGW_SOURCE = mingw-w64-v$(MINGW_VERSION).tar.bz2
RUST_SOURCE_x86_64 = rust-$(RUST_VERSION)-x86_64-unknown-linux-gnu.tar.gz
RUST_SOURCE_i686 = rust-$(RUST_VERSION)-i686-unknown-linux-gnu.tar.gz
NINJA_SOURCE = ninja-build_$(NINJA_VERSION).orig.tar.gz

BINUTILS_SHA256 = 0f8a4c272d7f17f369ded10a4aca28b8e304828e95526da482b0ccc4dfc9d8e1
GCC_SHA256 = 64f404c1a650f27fc33da242e1f2df54952e3963a49e06e73f6940f3223ac344
MINGW_SHA256 = 1929b94b402f5ff4d7d37a9fe88daa9cc55515a6134805c104d1794ae22a4181
RUST_SHA256_x86_64 = 7be1acdac656d0b0b7e909e5c0d4ddf61c755c203ec26ebafbd306322335b361
RUST_SHA256_i686 = dc931adeb2943dcadfbd29546481f0296fcb97a511421053ecae6586a85869b1
NINJA_SHA256 = 31747ae633213f1eda3842686f83c2aa1412e0f5691d1c14dbbcc67fe7400cea

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
	    -re 's!@RUST_SHA256_x86_64@!$(RUST_SHA256_x86_64)!g' \
	    -re 's!@RUST_SHA256_i686@!$(RUST_SHA256_i686)!g' \
	    -re 's!@NINJA_VERSION@!$(NINJA_VERSION)!g' \
	    -re 's!@NINJA_URLBASE@!$(NINJA_URLBASE)!g' \
	    -re 's!@NINJA_SOURCE@!$(NINJA_SOURCE)!g' \
	    -re 's!@NINJA_SHA256@!$(NINJA_SHA256)!g' \
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

$(eval $(call create-gcc-rules,i686,linux-gnu))
$(eval $(call create-gcc-rules,x86_64,linux-gnu))
$(eval $(call create-gcc-rules,i686,w64-mingw32))
$(eval $(call create-gcc-rules,x86_64,w64-mingw32))

define create-proton-rules
.PHONY: proton
all: proton
proton: BASE_IMAGE = $(STEAMRT_URLBASE)/steamrt/sniper/sdk:$(STEAMRT_VERSION)
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

sources::
	rm -f $(BINUTILS_SOURCE)
	rm -f $(MINGW_SOURCE)
	rm -f $(GCC_SOURCE)
	rm -f $(RUST_SOURCE_x86_64)
	rm -f $(RUST_SOURCE_i686)
	rm -f $(NINJA_SOURCE)
	wget $(BINUTILS_URLBASE)/$(BINUTILS_SOURCE)
	wget $(MINGW_URLBASE)/$(MINGW_SOURCE)
	wget $(GCC_URLBASE)/$(GCC_SOURCE)
	wget $(RUST_URLBASE)/$(RUST_SOURCE_x86_64)
	wget $(RUST_URLBASE)/$(RUST_SOURCE_i686)
	wget $(NINJA_URLBASE)/$(NINJA_SOURCE)
	echo $(BINUTILS_SHA256) $(BINUTILS_SOURCE) | sha256sum -c -
	echo $(MINGW_SHA256) $(MINGW_SOURCE) | sha256sum -c -
	echo $(GCC_SHA256) $(GCC_SOURCE) | sha256sum -c -
	echo $(RUST_SHA256_x86_64) $(RUST_SOURCE_x86_64) | sha256sum -c -
	echo $(RUST_SHA256_i686) $(RUST_SOURCE_i686) | sha256sum -c -
	echo $(NINJA_SHA256) $(NINJA_SOURCE) | sha256sum -c -
