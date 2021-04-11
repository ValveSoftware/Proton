STEAMRT_VERSION = 0.20210126.1
STEAMRT_URLBASE = registry.gitlab.steamos.cloud

PROTONSDK_URLBASE = $(STEAMRT_URLBASE)/proton/soldier/sdk
PROTONSDK_VERSION = $(STEAMRT_VERSION)-0-dev

# this is just for building toolchain, as we do static builds it should
# not have any impact on the end result, but changing it will invalidate
# docker caches, so we need something that don't change much
BASE_IMAGE_i686 = i386/ubuntu:18.04
BASE_IMAGE_x86_64 = ubuntu:18.04

BINUTILS_VERSION = 2.36.1
GCC_VERSION = 10.2.0
MINGW_VERSION = 8.0.0
RUST_VERSION = 1.50.0

SOURCES_URLBASE = https://repo.steampowered.com/proton-sdk
BINUTILS_URLBASE = $(SOURCES_URLBASE)
GCC_URLBASE = $(SOURCES_URLBASE)
MINGW_URLBASE = $(SOURCES_URLBASE)
RUST_URLBASE = $(SOURCES_URLBASE)

BINUTILS_SOURCE = binutils-$(BINUTILS_VERSION).tar.xz
GCC_SOURCE = gcc-$(GCC_VERSION).tar.xz
MINGW_SOURCE = mingw-w64-v$(MINGW_VERSION).tar.bz2
RUST_SOURCE_x86_64 = rust-$(RUST_VERSION)-x86_64-unknown-linux-gnu.tar.gz
RUST_SOURCE_i686 = rust-$(RUST_VERSION)-i686-unknown-linux-gnu.tar.gz

BINUTILS_SHA256 = e81d9edf373f193af428a0f256674aea62a9d74dfe93f65192d4eae030b0f3b0
GCC_SHA256 = b8dd4368bb9c7f0b98188317ee0254dd8cc99d1e3a18d0ff146c855fe16c1d8c
MINGW_SHA256 = 44c740ea6ab3924bc3aa169bad11ad3c5766c5c8459e3126d44eabb8735a5762
RUST_SHA256_x86_64 = fa889b53918980aea2dea42bfae4e858dcb2104c6fdca6e4fe359f3a49767701
RUST_SHA256_i686 = dee56dc425ed5d8e8112f26fba3060fd324c49f1261e0b7e8e29f7d9b852b09a

DOCKER = docker

%.Dockerfile: %.Dockerfile.in
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
	    -re 's!@J@!$(shell nproc)!g' \
	    $< >$@

%-i686.Dockerfile.in: %.Dockerfile.in
	sed -re 's!@ARCH@!i686!g' \
	    $< >$@

%-x86_64.Dockerfile.in: %.Dockerfile.in
	sed -re 's!@ARCH@!x86_64!g' \
	    $< >$@

%-linux-gnu.Dockerfile.in: %.Dockerfile.in
	sed -re 's!@TARGET@!linux-gnu!g' \
	    -re 's!@TARGET_FLAGS@!$(TARGET_FLAGS)!g' \
	    $< >$@

%-w64-mingw32.Dockerfile.in: %.Dockerfile.in
	sed -re 's!@TARGET@!w64-mingw32!g' \
	    -re 's!@TARGET_FLAGS@!$(TARGET_FLAGS)!g' \
	    $< >$@

define create-build-base-rules
.PHONY: build-base-$(1)
all build-base: build-base-$(1)
build-base-$(1): BASE_IMAGE = $(BASE_IMAGE_$(1))
build-base-$(1): build-base-$(1).Dockerfile
	rm -rf build; mkdir -p build
	$(DOCKER) build -f $$< \
	  --cache-from=$(PROTONSDK_URLBASE)/build-base-$(1):latest \
	  -t $(PROTONSDK_URLBASE)/build-base-$(1):latest \
	  build
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
	rm -rf build; mkdir -p build
	$(DOCKER) build -f $$< \
	  --cache-from=$(PROTONSDK_URLBASE)/binutils-$(1)-$(2):$(BINUTILS_VERSION) \
	  -t $(PROTONSDK_URLBASE)/binutils-$(1)-$(2):$(BINUTILS_VERSION) \
	  -t $(PROTONSDK_URLBASE)/binutils-$(1)-$(2):latest \
	  build
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

define create-mingw-rules
.PHONY: mingw-$(2)-$(1)
all mingw: mingw-$(2)-$(1)
mingw-$(2)-$(1): mingw-$(2)-$(1).Dockerfile | binutils
	rm -rf build; mkdir -p build
	$(DOCKER) build -f $$< \
	  --cache-from=$(PROTONSDK_URLBASE)/mingw-$(2)-$(1):$(MINGW_VERSION) \
	  -t $(PROTONSDK_URLBASE)/mingw-$(2)-$(1):$(MINGW_VERSION) \
	  -t $(PROTONSDK_URLBASE)/mingw-$(2)-$(1):latest \
	  build
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

GCC_TARGET_FLAGS_w64-mingw32 = --disable-shared
GCC_TARGET_FLAGS_linux-gnu =

define create-gcc-rules
.PHONY: gcc-$(1)-$(2)
all gcc: gcc-$(1)-$(2)
gcc-$(1)-$(2): TARGET_FLAGS = $(GCC_TARGET_FLAGS_$(2))
gcc-$(1)-$(2): gcc-$(1)-$(2).Dockerfile | mingw
	rm -rf build; mkdir -p build
	$(DOCKER) build -f $$< \
	  --cache-from=$(PROTONSDK_URLBASE)/gcc-$(1)-$(2):$(GCC_VERSION) \
	  -t $(PROTONSDK_URLBASE)/gcc-$(1)-$(2):$(GCC_VERSION) \
	  -t $(PROTONSDK_URLBASE)/gcc-$(1)-$(2):latest \
	  build
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
proton: BASE_IMAGE = $(STEAMRT_URLBASE)/steamrt/soldier/sdk:$(STEAMRT_VERSION)
proton: proton.Dockerfile | gcc
	rm -rf build; mkdir -p build
	$(DOCKER) build -f $$< \
	  --cache-from=$(PROTONSDK_URLBASE):$(PROTONSDK_VERSION) \
	  -t $(PROTONSDK_URLBASE):$(PROTONSDK_VERSION) \
	  -t $(PROTONSDK_URLBASE):latest \
	  build
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
	wget $(BINUTILS_URLBASE)/$(BINUTILS_SOURCE)
	wget $(MINGW_URLBASE)/$(MINGW_SOURCE)
	wget $(GCC_URLBASE)/$(GCC_SOURCE)
	wget $(RUST_URLBASE)/$(RUST_SOURCE_x86_64)
	wget $(RUST_URLBASE)/$(RUST_SOURCE_i686)
	echo $(BINUTILS_SHA256) $(BINUTILS_SOURCE) | sha256sum -c -
	echo $(MINGW_SHA256) $(MINGW_SOURCE) | sha256sum -c -
	echo $(GCC_SHA256) $(GCC_SOURCE) | sha256sum -c -
	echo $(RUST_SHA256_x86_64) $(RUST_SOURCE_x86_64) | sha256sum -c -
	echo $(RUST_SHA256_i686) $(RUST_SOURCE_i686) | sha256sum -c -
