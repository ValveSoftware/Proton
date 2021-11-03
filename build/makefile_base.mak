# Enable secondary expansions, needed for font compilation rules
.SECONDEXPANSION:

SRC := $(abspath $(SRCDIR))
OBJ := $(abspath $(CURDIR))

ifeq ($(filter s,$(MAKEFLAGS)),s)
MAKEFLAGS += --quiet --no-print-directory
--quiet? := --quiet
else
MFLAGS += V=1 VERBOSE=1
-v? := -v
--verbose? := --verbose
endif

##
## Nested make
##

SHELL := /bin/bash

ifneq ($(NO_NESTED_MAKE),1)
# Pass all variables/goals to ourselves as a sub-make such that we will get a trailing error message upon failure.  (We
# invoke a lot of long-running build-steps, and make fails to re-print errors when they happened ten thousand lines
# ago.)
export
.DEFAULT_GOAL := default
.PHONY: $(MAKECMDGOALS) default nested_make
default $(MAKECMDGOALS): nested_make

nested_make:
	+$(MAKE) $(MAKECMDGOALS) -f $(firstword $(MAKEFILE_LIST)) NO_NESTED_MAKE=1

else # (Rest of the file is the else)

##
## General/global config
##

# We expect the configure script to conditionally set the following:
#   SRCDIR          - Path to source
#   BUILD_NAME      - Name of the build for manifests etc.
#   STEAMRT_IMAGE   - Name of the docker image to use for building
#   STEAMRT_NAME    - Name of the steam runtime to build against (scout / soldier)

ifeq ($(SRCDIR),)
	foo := $(error SRCDIR not set, do not include makefile_base directly, run ./configure.sh to generate Makefile)
endif

include $(SRC)/make/utility.mk
include $(SRC)/make/rules-source.mk
include $(SRC)/make/rules-common.mk
include $(SRC)/make/rules-meson.mk
include $(SRC)/make/rules-cmake.mk
include $(SRC)/make/rules-autoconf.mk
include $(SRC)/make/rules-winemaker.mk
include $(SRC)/make/rules-cargo.mk

# If CC is coming from make's defaults or nowhere, use our own default.  Otherwise respect environment.
CCACHE_ENV := $(patsubst %,-e %,$(shell env|cut -d= -f1|grep '^CCACHE_'))
ifeq ($(ENABLE_CCACHE),1)
	CCACHE_BIN := ccache
	export CCACHE_DIR := $(if $(CCACHE_DIR),$(CCACHE_DIR),$(HOME)/.ccache)
	DOCKER_OPTS := -v $(CCACHE_DIR):$(CCACHE_DIR)$(CONTAINER_MOUNT_OPTS) $(CCACHE_ENV) -e CCACHE_DIR=$(CCACHE_DIR) $(DOCKER_OPTS)
else
	export CCACHE_DISABLE := 1
	DOCKER_OPTS := $(CCACHE_ENV) -e CCACHE_DISABLE=1 $(DOCKER_OPTS)
endif

ifneq ($(ROOTLESS_CONTAINER),1)
	DOCKER_OPTS := -e HOME -e USER -e USERID=$(shell id -u) -u $(shell id -u):$(shell id -g) $(DOCKER_OPTS)
endif

ifeq ($(CONTAINER_ENGINE),)
	CONTAINER_ENGINE := docker
endif

DOCKER_BASE = $(CONTAINER_ENGINE) run --rm -v $(SRC):$(SRC)$(CONTAINER_MOUNT_OPTS) -v $(OBJ):$(OBJ)$(CONTAINER_MOUNT_OPTS) \
                -w $(OBJ) -e MAKEFLAGS \
                $(DOCKER_OPTS) $(STEAMRT_IMAGE)

STEAMRT_NAME ?= soldier
ifeq ($(STEAMRT_NAME),soldier)
TOOLMANIFEST_VDF_SRC := toolmanifest_runtime.vdf
else
TOOLMANIFEST_VDF_SRC := toolmanifest_noruntime.vdf
endif

ifneq ($(STEAMRT_IMAGE),)
CONTAINER_SHELL := $(DOCKER_BASE) /bin/bash
STEAM_RUNTIME_RUNSH := $(DOCKER_BASE)
else
CONTAINER_SHELL := $(SHELL)
STEAM_RUNTIME_RUNSH :=
endif


MAKECMDGOALS32 := $(filter-out all32,$(filter %32,$(MAKECMDGOALS)))
MAKECMDGOALS64 := $(filter-out all64,$(filter %64,$(MAKECMDGOALS)))
CONTAINERGOALS := $(MAKECMDGOALS32) $(MAKECMDGOALS64)

all: all32 all64
.PHONY: all

all32 $(MAKECMDGOALS32):
.PHONY: all32 $(MAKECMDGOALS32)

all32 $(MAKECMDGOALS64):
.PHONY: all64 $(MAKECMDGOALS64)

ifeq ($(CONTAINER),)
J := $(shell nproc)
ifeq ($(ENABLE_CCACHE),1)
container-build: $(shell mkdir -p $(CCACHE_DIR))
endif
container-build: private SHELL := $(CONTAINER_SHELL)
container-build:
	+$(MAKE) -j$(J) $(filter -j%,$(MAKEFLAGS)) -f $(firstword $(MAKEFILE_LIST)) $(MFLAGS) $(MAKEOVERRIDES) CONTAINER=1 $(CONTAINERGOALS)
.PHONY: container-build

all32 $(MAKECMDGOALS32): container-build
all64 $(MAKECMDGOALS64): container-build
else
J = $(patsubst -j%,%,$(filter -j%,$(MAKEFLAGS)))
endif


.PHONY: test-container
test-container:
	@echo >&2 ":: Testing container"
	$(CONTAINER_SHELL) -c "echo Hello World!"

# Many of the configure steps below depend on the makefile itself, such that they are dirtied by changing the recipes
# that create them.  This can be annoying when working on the makefile, building with NO_MAKEFILE_DEPENDENCY=1 disables
# this.
MAKEFILE_DEP := $(MAKEFILE_LIST)
ifeq ($(NO_MAKEFILE_DEPENDENCY),1)
MAKEFILE_DEP :=
endif

##
## Global config
##

DST_BASE := $(OBJ)/dist
DST_DIR := $(DST_BASE)/files
DST_LIBDIR32 := $(DST_DIR)/lib
DST_LIBDIR64 := $(DST_DIR)/lib64
DEPLOY_DIR := ./deploy
REDIST_DIR := ./redist

# All top level goals.  Lazy evaluated so they can be added below.
GOAL_TARGETS = $(GOAL_TARGETS_LIBS)
# Excluding goals like wine and dist that are either long running or slow per invocation
GOAL_TARGETS_LIBS =
# Any explicit thing, superset
ALL_TARGETS =

##
## Platform-specific variables
##

ifneq ($(UNSTRIPPED_BUILD),)
    STRIP :=
    INSTALL_PROGRAM_FLAGS :=
    MESON_STRIP_ARG :=
else
    STRIP := strip
    INSTALL_PROGRAM_FLAGS := -s
    MESON_STRIP_ARG := --strip
endif

CROSSLDFLAGS   += -Wl,--file-alignment,4096
OPTIMIZE_FLAGS := -O2 -march=nocona -mtune=core-avx2 -mfpmath=sse
SANITY_FLAGS   := -fwrapv -fno-strict-aliasing
DEBUG_FLAGS    := -gdwarf-2 -gstrict-dwarf
COMMON_FLAGS    = $(DEBUG_FLAGS) $(OPTIMIZE_FLAGS) $(SANITY_FLAGS) -ffile-prefix-map=$(CCACHE_BASEDIR)=.
COMMON_FLAGS32 := -mstackrealign
CARGO_BUILD_ARG := --release

##
## Target configs
##

COMPAT_MANIFEST_TEMPLATE := $(SRCDIR)/compatibilitytool.vdf.template
LICENSE := $(SRCDIR)/dist.LICENSE
OFL_LICENSE := $(SRCDIR)/fonts/liberation-fonts/LICENSE
STEAMPIPE_FIXUPS_PY := $(SRCDIR)/steampipe_fixups.py

GECKO_VER := 2.47.2
GECKO32_TARBALL := wine-gecko-$(GECKO_VER)-x86.tar.xz
GECKO64_TARBALL := wine-gecko-$(GECKO_VER)-x86_64.tar.xz

WINEMONO_VER := 6.4.1
WINEMONO_TARBALL := wine-mono-$(WINEMONO_VER)-x86.tar.xz

FONTS := $(SRCDIR)/fonts
FONTS_OBJ := ./obj-fonts

ifeq ($(CONTAINER),)

## downloads -- Convenience target to download packages used during the build
## process. Places them in subdirs one up from the Proton source dir, so
## they won't be wiped during git-clean, vagrant rsync, etc.

.PHONY: downloads

GECKO64_TARBALL_URL := https://dl.winehq.org/wine/wine-gecko/$(GECKO_VER)/$(GECKO64_TARBALL)
GECKO32_TARBALL_URL := https://dl.winehq.org/wine/wine-gecko/$(GECKO_VER)/$(GECKO32_TARBALL)
MONO_TARBALL_URL := https://github.com/madewokherd/wine-mono/releases/download/wine-mono-$(WINEMONO_VER)/$(WINEMONO_TARBALL)

SHARED_GECKO64_TARBALL := $(SRCDIR)/../gecko/$(GECKO64_TARBALL)
SHARED_GECKO32_TARBALL := $(SRCDIR)/../gecko/$(GECKO32_TARBALL)
SHARED_MONO_TARBALL := $(SRCDIR)/../mono/$(WINEMONO_TARBALL)

$(SHARED_GECKO64_TARBALL):
	mkdir -p $(dir $@)
	wget -O "$@" "$(GECKO64_TARBALL_URL)"

$(SHARED_GECKO32_TARBALL):
	mkdir -p $(dir $@)
	wget -O "$@" "$(GECKO32_TARBALL_URL)"

$(SHARED_MONO_TARBALL):
	mkdir -p $(dir $@)
	wget -O "$@" "$(MONO_TARBALL_URL)"

downloads: $(SHARED_GECKO64_TARBALL) $(SHARED_GECKO32_TARBALL) $(SHARED_MONO_TARBALL)

##
## dist/install -- steps to finalize the install
##

$(DST_DIR):
	mkdir -p $@

STEAM_DIR := $(HOME)/.steam/root

FILELOCK_TARGET := $(addprefix $(DST_BASE)/,filelock.py)
$(FILELOCK_TARGET): $(addprefix $(SRCDIR)/,filelock.py)

PROTON_PY_TARGET := $(addprefix $(DST_BASE)/,proton)
$(PROTON_PY_TARGET): $(addprefix $(SRCDIR)/,proton)

PROTON37_TRACKED_FILES_TARGET := $(addprefix $(DST_BASE)/,proton_3.7_tracked_files)
$(PROTON37_TRACKED_FILES_TARGET): $(addprefix $(SRCDIR)/,proton_3.7_tracked_files)

USER_SETTINGS_PY_TARGET := $(addprefix $(DST_BASE)/,user_settings.sample.py)
$(USER_SETTINGS_PY_TARGET): $(addprefix $(SRCDIR)/,user_settings.sample.py)

DIST_COPY_TARGETS := $(FILELOCK_TARGET) $(PROTON_PY_TARGET) \
                     $(PROTON37_TRACKED_FILES_TARGET) $(USER_SETTINGS_PY_TARGET)

DIST_VERSION := $(DST_BASE)/version
DIST_OVR32 := $(DST_LIBDIR32)/wine/dxvk/openvr_api_dxvk.dll
DIST_OVR64 := $(DST_LIBDIR64)/wine/dxvk/openvr_api_dxvk.dll
DIST_PREFIX := $(DST_DIR)/share/default_pfx/
DIST_COMPAT_MANIFEST := $(DST_BASE)/compatibilitytool.vdf
DIST_LICENSE := $(DST_BASE)/LICENSE
DIST_TOOLMANIFEST := $(addprefix $(DST_BASE)/,toolmanifest.vdf)
DIST_OFL_LICENSE := $(DST_BASE)/LICENSE.OFL
DIST_GECKO_DIR := $(DST_DIR)/share/wine/gecko
DIST_GECKO32 := $(DIST_GECKO_DIR)/wine-gecko-$(GECKO_VER)-x86
DIST_GECKO64 := $(DIST_GECKO_DIR)/wine-gecko-$(GECKO_VER)-x86_64
DIST_WINEMONO_DIR := $(DST_DIR)/share/wine/mono
DIST_WINEMONO := $(DIST_WINEMONO_DIR)/wine-mono-$(WINEMONO_VER)
DIST_FONTS := $(DST_DIR)/share/fonts
DIST_WINEOPENXR_JSON64 := $(DIST_PREFIX)/drive_c/openxr/wineopenxr64.json
DIST_WINEOPENXR64 := $(DIST_PREFIX)/drive_c/windows/system32/wineopenxr.dll

DIST_TARGETS := $(DIST_COPY_TARGETS) $(DIST_OVR32) $(DIST_OVR64) \
                $(DIST_GECKO32) $(DIST_GECKO64) $(DIST_WINEMONO) \
                $(DIST_COMPAT_MANIFEST) $(DIST_LICENSE) $(DIST_TOOLMANIFEST) $(DIST_OFL_LICENSE) $(DIST_FONTS)

BASE_COPY_TARGETS := $(DIST_COPY_TARGETS) $(DIST_VERSION) $(DIST_LICENSE) $(DIST_TOOLMANIFEST) $(DIST_OFL_LICENSE) $(DST_DIR)
DEPLOY_COPY_TARGETS := $(BASE_COPY_TARGETS) $(STEAMPIPE_FIXUPS_PY)
REDIST_COPY_TARGETS := $(BASE_COPY_TARGETS) $(DIST_COMPAT_MANIFEST)

$(DIST_LICENSE): $(LICENSE)
	cp -a $< $@

$(DIST_TOOLMANIFEST): $(addprefix $(SRCDIR)/,$(TOOLMANIFEST_VDF_SRC))
	cp -a $< $@

$(DIST_OFL_LICENSE): $(OFL_LICENSE)
	cp -a $< $@

$(DIST_OVR32): $(SRCDIR)/openvr/bin/win32/openvr_api.dll | $(DST_DIR)
	mkdir -p $(DST_LIBDIR32)/wine/dxvk
	cp -a $< $@

$(DIST_OVR64): $(SRCDIR)/openvr/bin/win64/openvr_api.dll | $(DST_DIR)
	mkdir -p $(DST_LIBDIR64)/wine/dxvk
	cp -a $< $@

$(DIST_COPY_TARGETS): | $(DST_DIR)
	cp -a $(SRCDIR)/$(notdir $@) $@

$(DIST_COMPAT_MANIFEST): $(COMPAT_MANIFEST_TEMPLATE) $(MAKEFILE_DEP) | $(DST_DIR)
	sed -r 's|##BUILD_NAME##|$(BUILD_NAME)|' $< > $@

$(DIST_GECKO_DIR):
	mkdir -p $@

$(DIST_GECKO64): | $(DIST_GECKO_DIR)
	if [ -e "$(SHARED_GECKO64_TARBALL)" ]; then \
		tar -xf "$(SHARED_GECKO64_TARBALL)" -C "$(dir $@)"; \
	else \
		mkdir -p $(SRCDIR)/contrib/; \
		if [ ! -e "$(SRCDIR)/contrib/$(GECKO64_TARBALL)" ]; then \
			echo ">>>> Downloading wine-gecko. To avoid this in future, put it here: $(SRCDIR)/../gecko/$(GECKO64_TARBALL)"; \
			wget -O "$(SRCDIR)/contrib/$(GECKO64_TARBALL)" "$(GECKO64_TARBALL_URL)"; \
		fi; \
		tar -xf "$(SRCDIR)/contrib/$(GECKO64_TARBALL)" -C "$(dir $@)"; \
	fi

$(DIST_GECKO32): | $(DIST_GECKO_DIR)
	if [ -e "$(SHARED_GECKO32_TARBALL)" ]; then \
		tar -xf "$(SHARED_GECKO32_TARBALL)" -C "$(dir $@)"; \
	else \
		mkdir -p $(SRCDIR)/contrib/; \
		if [ ! -e "$(SRCDIR)/contrib/$(GECKO32_TARBALL)" ]; then \
			echo ">>>> Downloading wine-gecko. To avoid this in future, put it here: $(SRCDIR)/../gecko/$(GECKO32_TARBALL)"; \
			wget -O "$(SRCDIR)/contrib/$(GECKO32_TARBALL)" "$(GECKO32_TARBALL_URL)"; \
		fi; \
		tar -xf "$(SRCDIR)/contrib/$(GECKO32_TARBALL)" -C "$(dir $@)"; \
	fi

$(DIST_WINEMONO_DIR):
	mkdir -p $@

$(DIST_WINEMONO): | $(DIST_WINEMONO_DIR)
	if [ -e "$(SHARED_MONO_TARBALL)" ]; then \
		tar -xf "$(SHARED_MONO_TARBALL)" -C "$(dir $@)"; \
	else \
		mkdir -p $(SRCDIR)/contrib/; \
		if [ ! -e "$(SRCDIR)/contrib/$(WINEMONO_TARBALL)" ]; then \
			echo ">>>> Downloading wine-mono. To avoid this in future, put it here: $(SRCDIR)/../mono/$(WINEMONO_TARBALL)"; \
			wget -O "$(SRCDIR)/contrib/$(WINEMONO_TARBALL)" "$(MONO_TARBALL_URL)"; \
		fi; \
		tar -xf "$(SRCDIR)/contrib/$(WINEMONO_TARBALL)" -C "$(dir $@)"; \
	fi

$(DIST_FONTS): fonts
	mkdir -p $@
	cp $(FONTS_OBJ)/*.ttf "$@"
	cp $(FONTS_OBJ)/source-han/msyh.ttf "$@"
	cp $(FONTS_OBJ)/source-han/simsun.ttc "$@"
	cp $(FONTS_OBJ)/source-han/msgothic.ttc "$@"
	cp $(FONTS_OBJ)/source-han/malgun.ttf "$@"
	cp $(FONTS)/noto/NotoSansArabic-Regular.ttf "$@"

.PHONY: dist

ALL_TARGETS += dist
GOAL_TARGETS += dist

dist_prefix: wine gst_good
	find $(DST_LIBDIR32)/wine -type f -execdir chmod a-w '{}' '+'
	find $(DST_LIBDIR64)/wine -type f -execdir chmod a-w '{}' '+'
	rm -rf $(abspath $(DIST_PREFIX))
	python3 $(SRCDIR)/default_pfx.py $(abspath $(DIST_PREFIX)) $(abspath $(DST_DIR)) $(STEAM_RUNTIME_RUNSH)

dist_wineopenxr: dist_prefix $(DIST_WINEOPENXR_JSON64)

dist: $(DIST_TARGETS) all-dist dist_wineopenxr | $(DST_DIR)
	echo `date '+%s'` `GIT_DIR=$(abspath $(SRCDIR)/.git) git describe --tags` > $(DIST_VERSION)

deploy: dist | $(filter-out dist deploy install redist,$(MAKECMDGOALS))
	mkdir -p $(DEPLOY_DIR)
	cp -af --no-dereference --preserve=mode,links $(DEPLOY_COPY_TARGETS) $(DEPLOY_DIR)
	python3 $(STEAMPIPE_FIXUPS_PY) process $(DEPLOY_DIR)

install: dist | $(filter-out dist deploy install redist,$(MAKECMDGOALS))
	if [ ! -d $(STEAM_DIR) ]; then echo >&2 "!! "$(STEAM_DIR)" does not exist, cannot install"; return 1; fi
	mkdir -p $(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	# Use -r instead of -a for sshfs
	cp -rf --no-dereference --preserve=mode,links $(DST_BASE)/* $(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	@echo "Installed Proton to "$(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	@echo "You may need to restart Steam to select this tool"

redist: dist | $(filter-out dist deploy install redist,$(MAKECMDGOALS))
	mkdir -p $(REDIST_DIR)
	cp -af --no-dereference --preserve=mode,links $(REDIST_COPY_TARGETS) $(REDIST_DIR)

.PHONY: module32 module64 module

module32: private SHELL := $(CONTAINER_SHELL)
module32: CONTAINERGOALS := $(CONTAINERGOALS) wine-configure32
module32: | all-source wine-configure32
	+$(MAKE) -j$(J) $(filter -j%,$(MAKEFLAGS)) $(MFLAGS) $(MAKEOVERRIDES) -C $(WINE_OBJ32)/dlls/$(module) && \
	find $(WINE_OBJ32)/dlls/$(module) -type f -name '*.dll' -printf '%p\0' | \
	    xargs $(--verbose?) -0 -r -P$(J) -n1 $(SRC)/make/pefixup.py

module64: private SHELL := $(CONTAINER_SHELL)
module64: CONTAINERGOALS := $(CONTAINERGOALS) wine-configure64
module64: | all-source wine-configure64
	+$(MAKE) -j$(J) $(filter -j%,$(MAKEFLAGS)) $(MFLAGS) $(MAKEOVERRIDES) -C $(WINE_OBJ64)/dlls/$(module) && \
	find $(WINE_OBJ64)/dlls/$(module) -type f -name '*.dll' -printf '%p\0' | \
	    xargs $(--verbose?) -0 -r -P$(J) -n1 $(SRC)/make/pefixup.py

module: CONTAINERGOALS := $(CONTAINERGOALS) wine-configure
module: | all-source wine-configure
module: module32 module64

endif # ifeq ($(CONTAINER),)

##
## gst-orc
##

GST_COMMON_MESON_ARGS := \
	-Dexamples=disabled \
	-Dtests=disabled \
	-Dgtk_doc=disabled \
	-Dintrospection=disabled \
	-Dgobject-cast-checks=disabled \
	-Dglib-asserts=disabled \
	-Dglib-checks=disabled \
	-Dnls=disabled \
	-Dbenchmarks=disabled

GST_ORC_MESON_ARGS := \
	-Dorc-test=disabled \
	$(GST_COMMON_MESON_ARGS)

$(eval $(call rules-source,gst_orc,$(SRCDIR)/gst-orc))
$(eval $(call rules-meson,gst_orc,32))
$(eval $(call rules-meson,gst_orc,64))


##
## gstreamer
##

GSTREAMER_MESON_ARGS := \
	-Dgst_parse=false \
	-Dbenchmarks=disabled \
	-Dtools=disabled \
	-Dbash-completion=disabled \
	$(GST_COMMON_MESON_ARGS)

GSTREAMER_DEPENDS = gst_orc

$(eval $(call rules-source,gstreamer,$(SRCDIR)/gstreamer))
$(eval $(call rules-meson,gstreamer,32))
$(eval $(call rules-meson,gstreamer,64))


##
## gst-plugins-base
##

GST_BASE_MESON_ARGS := \
	-Daddr=disabled \
	-Dalsa=disabled \
	-Daudiomixer=disabled \
	-Daudiorate=disabled \
	-Daudiotestsrc=disabled \
	-Dcdparanoia=disabled \
	-Dcompositor=disabled \
	-Dencoding=disabled \
	-Dgio=disabled \
	-Dgl=disabled \
	-Dlibvisual=disabled \
	-Doverlaycomposition=disabled \
	-Dpango=disabled \
	-Drawparse=disabled \
	-Dsubparse=disabled \
	-Dtcp=disabled \
	-Dtremor=disabled \
	-Dvideorate=disabled \
	-Dvideotestsrc=disabled \
	-Dvolume=disabled \
	-Dx11=disabled \
	-Dxshm=disabled \
	-Dxvideo=disabled \
	-Dtools=disabled \
	$(GST_COMMON_MESON_ARGS)

GST_BASE_DEPENDS = gst_orc gstreamer

$(eval $(call rules-source,gst_base,$(SRCDIR)/gst-plugins-base))
$(eval $(call rules-meson,gst_base,32))
$(eval $(call rules-meson,gst_base,64))


##
## gst-plugins-good
##

GST_GOOD_MESON_ARGS := \
	-Daalib=disabled \
	-Dalpha=disabled \
	-Dapetag=disabled \
	-Daudiofx=disabled \
	-Dauparse=disabled \
	-Dcairo=disabled \
	-Dcutter=disabled \
	-Ddtmf=disabled \
	-Deffectv=disabled \
	-Dequalizer=disabled \
	-Dgdk-pixbuf=disabled \
	-Dgtk3=disabled \
	-Dgoom=disabled \
	-Dgoom2k1=disabled \
	-Dicydemux=disabled \
	-Dimagefreeze=disabled \
	-Dinterleave=disabled \
	-Djack=disabled \
	-Dlaw=disabled \
	-Dlevel=disabled \
	-Dlibcaca=disabled \
	-Dmonoscope=disabled \
	-Dmultifile=disabled \
	-Dmultipart=disabled \
	-Doss=disabled \
	-Doss4=disabled \
	-Dpng=disabled \
	-Dpulse=disabled \
	-Dqt5=disabled \
	-Dreplaygain=disabled \
	-Drtp=disabled \
	-Drtpmanager=disabled \
	-Drtsp=disabled \
	-Dshapewipe=disabled \
	-Dshout2=disabled \
	-Dsmpte=disabled \
	-Dsoup=disabled \
	-Dspectrum=disabled \
	-Dtaglib=disabled \
	-Dudp=disabled \
	-Dv4l2=disabled \
	-Dvideocrop=disabled \
	-Dvideomixer=disabled \
	-Dwavenc=disabled \
	-Dximagesrc=disabled \
	-Dy4m=disabled \
	-Dtools=disabled \
	$(GST_COMMON_MESON_ARGS)

GST_GOOD_DEPENDS = gst_orc gstreamer gst_base

$(eval $(call rules-source,gst_good,$(SRCDIR)/gst-plugins-good))
$(eval $(call rules-meson,gst_good,32))
$(eval $(call rules-meson,gst_good,64))


##
## FAudio
##

FAUDIO_CMAKE_ARGS = -DGSTREAMER=ON -DFORCE_ENABLE_DEBUGCONFIGURATION=ON -DLOG_ASSERTIONS=ON -DXNASONG=OFF
FAUDIO_DEPENDS = gst_orc gstreamer gst_base

$(eval $(call rules-source,faudio,$(SRCDIR)/FAudio))
$(eval $(call rules-cmake,faudio,32))
$(eval $(call rules-cmake,faudio,64))


##
## jxrlib
##

JXRLIB_CMAKE_ARGS64 = -DJXRLIB_INSTALL_LIB_DIR=lib64

JXRLIB_INCDIR32 = $(JXRLIB_DST32)/include/jxrlib
JXRLIB_INCDIR64 = $(JXRLIB_DST64)/include/jxrlib

$(eval $(call rules-source,jxrlib,$(SRCDIR)/jxrlib))
$(eval $(call rules-cmake,jxrlib,32))
$(eval $(call rules-cmake,jxrlib,64))


##
## Vulkan-Headers
##

$(eval $(call rules-source,vulkan-headers,$(SRCDIR)/Vulkan-Headers))
$(eval $(call rules-cmake,vulkan-headers,32))
$(eval $(call rules-cmake,vulkan-headers,64))


##
## SPIRV-Headers
##

$(eval $(call rules-source,spirv-headers,$(SRCDIR)/SPIRV-Headers))
$(eval $(call rules-cmake,spirv-headers,32))
$(eval $(call rules-cmake,spirv-headers,64))


##
## lsteamclient
##

LSTEAMCLIENT_CFLAGS = -Wno-attributes
LSTEAMCLIENT_CXXFLAGS = -Wno-attributes
LSTEAMCLIENT_LDFLAGS = -static-libgcc -static-libstdc++ -ldl

LSTEAMCLIENT_WINEMAKER_ARGS = \
	-DSTEAM_API_EXPORTS \
	-Dprivate=public \
	-Dprotected=public

LSTEAMCLIENT_DEPENDS = wine

$(eval $(call rules-source,lsteamclient,$(SRCDIR)/lsteamclient))
$(eval $(call rules-winemaker,lsteamclient,32,lsteamclient.dll))
$(eval $(call rules-winemaker,lsteamclient,64,lsteamclient.dll))


##

##
## openxr
## Note 32-bit is not supported by SteamVR, so we don't build it.
##

OPENXR_CMAKE_ARGS = -DHAVE_FILESYSTEM_WITHOUT_LIB=0

$(eval $(call rules-source,openxr,$(SRCDIR)/OpenXR-SDK))
# $(eval $(call rules-cmake,openxr,32))
$(eval $(call rules-cmake,openxr,64))


##
## wineopenxr
## Note 32-bit is not supported by SteamVR, so we don't build it.
##

WINEOPENXR_LDFLAGS = -lopenxr_loader -ldxgi -lvulkan

WINEOPENXR_DEPENDS = wine openxr

$(eval $(call rules-source,wineopenxr,$(SRCDIR)/wineopenxr))
# $(eval $(call rules-winemaker,wineopenxr,32,wineopenxr.dll))
$(eval $(call rules-winemaker,wineopenxr,64,wineopenxr.dll))

$(DIST_WINEOPENXR_JSON64): $(WINEOPENXR_SRC)/wineopenxr64.json dist_prefix
	mkdir -p $(dir $@)
	cp -a $< $@


##
## steam.exe
##

STEAMEXE_CFLAGS = -Wno-attributes
STEAMEXE_CXXFLAGS = -Wno-attributes
STEAMEXE_LDFLAGS = -L$(STEAMEXE_SRC)/32/ -L$(STEAMEXE_SRC)/64/ -lsteam_api -lole32 -ldl -static-libgcc -static-libstdc++

STEAMEXE_WINEMAKER_ARGS = \
	"-I$(SRC)/lsteamclient/steamworks_sdk_142/" \
	"-I$(SRC)/openvr/headers/" \
	"-L$(SRC)/steam_helper/"

STEAMEXE_DEPENDS = wine

$(eval $(call rules-source,steamexe,$(SRCDIR)/steam_helper))
$(eval $(call rules-winemaker,steamexe,64,steam.exe))
$(eval $(call rules-winemaker,steamexe,32,steam.exe))

$(OBJ)/.steamexe-post-build32:
	cp $(STEAMEXE_SRC)/32/libsteam_api.so $(DST_LIBDIR32)/
	touch $@

$(OBJ)/.steamexe-post-build64:
	cp $(STEAMEXE_SRC)/64/libsteam_api.so $(DST_LIBDIR64)/
	touch $@


##
## wine
##

WINE_SOURCE_ARGS = \
  --exclude configure \
  --exclude autom4te.cache \
  --exclude include/config.h.in \

WINE_CONFIGURE_ARGS = \
  --with-mingw \
  --without-xpresent \
  --disable-tests

WINE_CONFIGURE_ARGS64 = --enable-win64

WINE_DEPENDS = gst_orc gstreamer gst_base faudio jxrlib

$(eval $(call rules-source,wine,$(SRCDIR)/wine))
$(eval $(call rules-autoconf,wine,32))
$(eval $(call rules-autoconf,wine,64))

$(OBJ)/.wine-post-source:
	cd $(WINE_SRC) && tools/make_requests
	touch $@

$(OBJ)/.wine-post-build64:
	mkdir -p $(DST_DIR)/{bin,share}
	$(call install-strip,$(WINE_DST64)/bin/wine64,$(DST_DIR)/bin)
	$(call install-strip,$(WINE_DST64)/bin/wine64-preloader,$(DST_DIR)/bin)
	$(call install-strip,$(WINE_DST64)/bin/wineserver,$(DST_DIR)/bin)
	cp -a $(WINE_DST64)/share/wine $(DST_DIR)/share
	cp -a $(WINE_DST64)/bin/msidb $(DST_DIR)/bin
	touch $@

$(OBJ)/.wine-post-build32:
	mkdir -p $(DST_DIR)/bin
	$(call install-strip,$(WINE_DST32)/bin/wine,$(DST_DIR)/bin)
	$(call install-strip,$(WINE_DST32)/bin/wine-preloader,$(DST_DIR)/bin)
	touch $@


##
## vrclient
##

VRCLIENT_CFLAGS = -Wno-attributes
VRCLIENT_CXXFLAGS = -Wno-attributes
VRCLIENT_LDFLAGS = -static-libgcc -static-libstdc++ -ldl

VRCLIENT_WINEMAKER_ARGS = \
	"-I$(VRCLIENT_SRC)/" \
	"-I$(VRCLIENT_SRC)/vrclient_x64/"

VRCLIENT_DEPENDS = wine

$(eval $(call rules-source,vrclient,$(SRCDIR)/vrclient_x64))
$(eval $(call rules-winemaker,vrclient,32,vrclient.dll))
$(eval $(call rules-winemaker,vrclient,64,vrclient_x64.dll))

$(OBJ)/.vrclient-post-source:
	mkdir -p $(VRCLIENT_OBJ32) && cp -a $(VRCLIENT_SRC)/vrclient_x64/vrclient_x64.spec $(VRCLIENT_OBJ32)/vrclient.spec
	mkdir -p $(VRCLIENT_OBJ64) && cp -a $(VRCLIENT_SRC)/vrclient_x64/vrclient_x64.spec $(VRCLIENT_OBJ64)/vrclient_x64.spec
	touch $@


##
## dxvk
##

DXVK_MESON_ARGS32 = \
    --bindir=$(DXVK_DST32)/lib/wine/dxvk \
    --cross-file=$(DXVK_OBJ32)/build-win32.txt
DXVK_MESON_ARGS64 = \
    --bindir=$(DXVK_DST64)/lib64/wine/dxvk \
    --cross-file=$(DXVK_OBJ64)/build-win64.txt

$(eval $(call rules-source,dxvk,$(SRCDIR)/dxvk))
$(eval $(call rules-meson,dxvk,32))
$(eval $(call rules-meson,dxvk,64))

$(OBJ)/.dxvk-post-build64:
	mkdir -p "$(DST_DIR)"/lib64/wine/dxvk
	rm -f "$(DST_DIR)"/lib64/wine/dxvk/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- dxvk ) > "$(DST_DIR)"/lib64/wine/dxvk/version; fi
	touch $@

$(OBJ)/.dxvk-post-build32:
	mkdir -p "$(DST_DIR)"/lib/wine/dxvk
	rm -f "$(DST_DIR)"/lib/wine/dxvk/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- dxvk ) > "$(DST_DIR)"/lib/wine/dxvk/version; fi
	touch $@


##
## dxvk-nvapi
##

DXVK_NVAPI_MESON_ARGS32 = \
    --bindir=$(DXVK_NVAPI_DST32)/lib/wine/nvapi \
    --cross-file=$(DXVK_NVAPI_OBJ32)/build-win32.txt
DXVK_NVAPI_MESON_ARGS64 = \
    --bindir=$(DXVK_NVAPI_DST64)/lib64/wine/nvapi \
    --cross-file=$(DXVK_NVAPI_OBJ64)/build-win64.txt

$(eval $(call rules-source,dxvk-nvapi,$(SRCDIR)/dxvk-nvapi))
$(eval $(call rules-meson,dxvk-nvapi,32))
$(eval $(call rules-meson,dxvk-nvapi,64))

$(OBJ)/.dxvk-nvapi-post-build64:
	mkdir -p "$(DST_DIR)"/lib64/wine/nvapi
	rm -f "$(DST_DIR)"/lib64/wine/nvapi/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- dxvk-nvapi ) > "$(DST_DIR)"/lib64/wine/nvapi/version; fi
	touch $@

$(OBJ)/.dxvk-nvapi-post-build32:
	mkdir -p "$(DST_DIR)"/lib/wine/nvapi
	rm -f "$(DST_DIR)"/lib/wine/nvapi/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- dxvk-nvapi ) > "$(DST_DIR)"/lib/wine/nvapi/version; fi
	touch $@


##
## vkd3d
##

VKD3D_SOURCE_ARGS = \
  --exclude aclocal.m4 \
  --exclude autom4te.cache \
  --exclude bin/ \
  --exclude configure \
  --exclude include/config.h.in \
  --exclude Makefile.in \
  --exclude m4/libtool.m4 \
  --exclude m4/ltoptions.m4 \
  --exclude m4/ltsugar.m4 \
  --exclude m4/ltversion.m4 \
  --exclude m4/lt~obsolete.m4 \

VKD3D_CONFIGURE_ARGS = \
  --disable-doxygen-doc \
  --disable-tests \
  --disable-demos \
  --without-ncurses \
  WIDL=$(WINE_OBJ64)/tools/widl/widl

VKD3D_CONFIGURE_ARGS32 = \
  --host=i686-w64-mingw32 \
  CC="$(CCACHE_BIN) i686-w64-mingw32-gcc" \
  LD="i686-w64-mingw32-ld" \

VKD3D_CONFIGURE_ARGS64 = \
  --host=x86_64-w64-mingw32 \
  CC="$(CCACHE_BIN) x86_64-w64-mingw32-gcc" \
  LD="x86_64-w64-mingw32-ld" \

VKD3D_LDFLAGS = -static-libgcc $(CROSSLDFLAGS)
VKD3D_LDFLAGS32 = -L$(WINE_OBJ32)/dlls/vulkan-1/
VKD3D_LDFLAGS64 = -L$(WINE_OBJ64)/dlls/vulkan-1/

VKD3D_DEPENDS = wine vulkan-headers spirv-headers

$(eval $(call rules-source,vkd3d,$(SRCDIR)/vkd3d))
$(eval $(call rules-autoconf,vkd3d,32))
$(eval $(call rules-autoconf,vkd3d,64))

$(OBJ)/.vkd3d-post-build64:
	mkdir -p $(DST_DIR)/lib64/vkd3d/
	$(call install-strip,$(VKD3D_DST64)/bin/libvkd3d-shader-1.dll,$(DST_LIBDIR64)/vkd3d)
	touch $@

$(OBJ)/.vkd3d-post-build32:
	mkdir -p $(DST_DIR)/lib/vkd3d/
	$(call install-strip,$(VKD3D_DST32)/bin/libvkd3d-shader-1.dll,$(DST_LIBDIR32)/vkd3d)
	touch $@

##
## vkd3d-proton
##

VKD3D_PROTON_SOURCE_ARGS = \
  --exclude vkd3d_build.h.in \
  --exclude vkd3d_version.h.in \

VKD3D_PROTON_MESON_ARGS = -Denable_standalone_d3d12=true
VKD3D_PROTON_MESON_ARGS32 = \
    --bindir=$(VKD3D_PROTON_DST32)/lib/wine/vkd3d-proton \
    --cross-file=$(VKD3D_PROTON_OBJ32)/build-win32.txt
VKD3D_PROTON_MESON_ARGS64 = \
    --bindir=$(VKD3D_PROTON_DST64)/lib64/wine/vkd3d-proton \
    --cross-file=$(VKD3D_PROTON_OBJ64)/build-win64.txt

$(eval $(call rules-source,vkd3d-proton,$(SRCDIR)/vkd3d-proton))
$(eval $(call rules-meson,vkd3d-proton,32))
$(eval $(call rules-meson,vkd3d-proton,64))

$(OBJ)/.vkd3d-proton-post-source:
	sed -re 's#@VCS_TAG@#$(shell git -C $(SRCDIR)/vkd3d-proton describe --always --exclude=* --abbrev=15 --dirty=0)#' \
	    $(SRCDIR)/vkd3d-proton/vkd3d_build.h.in > $(VKD3D_PROTON_SRC)/vkd3d_build.h.in
	sed -re 's#@VCS_TAG@#$(shell git -C $(SRCDIR)/vkd3d-proton describe --always --tags --dirty=+)#' \
	    $(SRCDIR)/vkd3d-proton/vkd3d_version.h.in > $(VKD3D_PROTON_SRC)/vkd3d_version.h.in
	touch $@

$(OBJ)/.vkd3d-proton-post-build32:
	mkdir -p "$(DST_DIR)"/lib/wine/vkd3d-proton
	rm -f "$(DST_DIR)"/lib/wine/vkd3d-proton/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- vkd3d-proton ) > "$(DST_DIR)"/lib/wine/vkd3d-proton/version; fi
	touch $@

$(OBJ)/.vkd3d-proton-post-build64:
	mkdir -p "$(DST_DIR)"/lib64/wine/vkd3d-proton
	rm -f "$(DST_DIR)"/lib64/wine/vkd3d-proton/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- vkd3d-proton ) > "$(DST_DIR)"/lib64/wine/vkd3d-proton/version; fi
	touch $@



##
## mediaconv
##

MEDIACONV_SOURCE_ARGS = \
    --exclude Cargo.lock \

MEDIACONV_DEPENDS = gst_orc gstreamer gst_base

$(eval $(call rules-source,mediaconv,$(SRCDIR)/media-converter))
$(eval $(call rules-cargo,mediaconv,32))
$(eval $(call rules-cargo,mediaconv,64))

$(OBJ)/.mediaconv-post-build64:
	mkdir -p $(MEDIACONV_DST64)/lib64/gstreamer-1.0/
	cp -a $(MEDIACONV_OBJ64)/x86_64-unknown-linux-gnu/release/libprotonmediaconverter.so $(MEDIACONV_DST64)/lib64/gstreamer-1.0/
	touch $@

$(OBJ)/.mediaconv-post-build32:
	mkdir -p $(MEDIACONV_DST32)/lib/gstreamer-1.0/
	cp -a $(MEDIACONV_OBJ32)/i686-unknown-linux-gnu/release/libprotonmediaconverter.so $(MEDIACONV_DST32)/lib/gstreamer-1.0/
	touch $@


ifeq ($(CONTAINER),)
ALL_TARGETS += fonts
GOAL_TARGETS += fonts

.PHONY: fonts

FONTFORGE = fontforge -quiet
FONTSCRIPT = $(FONTS)/scripts/generatefont.pe

LIBERATION_SRCDIR = $(FONTS)/liberation-fonts/src
SOURCE_HAN_SANS_SRCDIR = $(FONTS)/source-han-sans

msyh.ttf_CIDFONTINFO = $(SOURCE_HAN_SANS_SRCDIR)/cidfontinfo.OTC.SC
msyh.ttf_CIDFONT = $(SOURCE_HAN_SANS_SRCDIR)/cidfont.ps.OTC.SC
msyh.ttf_FEATURES = $(SOURCE_HAN_SANS_SRCDIR)/features.OTC.SC
msyh.ttf_SEQUENCES = $(SOURCE_HAN_SANS_SRCDIR)/SourceHanSans_CN_sequences.txt
msyh.ttf_UNISOURCE = $(SOURCE_HAN_SANS_SRCDIR)/UniSourceHanSansCN-UTF32-H
msyh.ttf_MENUNAMEDB = $(FONTS)/patches/YaHei-FontMenuNameDB
msyh.ttf = $(FONTS_OBJ)/source-han/msyh.ttf

simsun.ttf_CIDFONTINFO = $(SOURCE_HAN_SANS_SRCDIR)/cidfontinfo.OTC.SC
simsun.ttf_CIDFONT = $(SOURCE_HAN_SANS_SRCDIR)/cidfont.ps.OTC.SC
simsun.ttf_FEATURES = $(SOURCE_HAN_SANS_SRCDIR)/features.OTC.SC
simsun.ttf_SEQUENCES = $(SOURCE_HAN_SANS_SRCDIR)/SourceHanSans_CN_sequences.txt
simsun.ttf_UNISOURCE = $(SOURCE_HAN_SANS_SRCDIR)/UniSourceHanSansCN-UTF32-H
simsun.ttf_MENUNAMEDB = $(FONTS)/patches/SimSun-FontMenuNameDB
simsun.ttf = $(FONTS_OBJ)/source-han/simsun.ttf

nsimsun.ttf_CIDFONTINFO = $(SOURCE_HAN_SANS_SRCDIR)/cidfontinfo.OTC.SC
nsimsun.ttf_CIDFONT = $(SOURCE_HAN_SANS_SRCDIR)/cidfont.ps.OTC.SC
nsimsun.ttf_FEATURES = $(SOURCE_HAN_SANS_SRCDIR)/features.OTC.SC
nsimsun.ttf_SEQUENCES = $(SOURCE_HAN_SANS_SRCDIR)/SourceHanSans_CN_sequences.txt
nsimsun.ttf_UNISOURCE = $(SOURCE_HAN_SANS_SRCDIR)/UniSourceHanSansCN-UTF32-H
nsimsun.ttf_MENUNAMEDB = $(FONTS)/patches/NSimSun-FontMenuNameDB
nsimsun.ttf = $(FONTS_OBJ)/source-han/nsimsun.ttf

msgothic.ttf_CIDFONTINFO = $(SOURCE_HAN_SANS_SRCDIR)/cidfontinfo.OTC.J
msgothic.ttf_CIDFONT = $(SOURCE_HAN_SANS_SRCDIR)/cidfont.ps.OTC.J
msgothic.ttf_FEATURES = $(SOURCE_HAN_SANS_SRCDIR)/features.OTC.J
msgothic.ttf_SEQUENCES = $(SOURCE_HAN_SANS_SRCDIR)/SourceHanSans_JP_sequences.txt
msgothic.ttf_UNISOURCE = $(SOURCE_HAN_SANS_SRCDIR)/UniSourceHanSansJP-UTF32-H
msgothic.ttf_MENUNAMEDB = $(FONTS)/patches/MSGothic-FontMenuNameDB
msgothic.ttf = $(FONTS_OBJ)/source-han/msgothic.ttf

mspgothic.ttf_CIDFONTINFO = $(SOURCE_HAN_SANS_SRCDIR)/cidfontinfo.OTC.J
mspgothic.ttf_CIDFONT = $(SOURCE_HAN_SANS_SRCDIR)/cidfont.ps.OTC.J
mspgothic.ttf_FEATURES = $(SOURCE_HAN_SANS_SRCDIR)/features.OTC.J
mspgothic.ttf_SEQUENCES = $(SOURCE_HAN_SANS_SRCDIR)/SourceHanSans_JP_sequences.txt
mspgothic.ttf_UNISOURCE = $(SOURCE_HAN_SANS_SRCDIR)/UniSourceHanSansJP-UTF32-H
mspgothic.ttf_MENUNAMEDB = $(FONTS)/patches/MSPGothic-FontMenuNameDB
mspgothic.ttf = $(FONTS_OBJ)/source-han/mspgothic.ttf

msuigothic.ttf_CIDFONTINFO = $(SOURCE_HAN_SANS_SRCDIR)/cidfontinfo.OTC.J
msuigothic.ttf_CIDFONT = $(SOURCE_HAN_SANS_SRCDIR)/cidfont.ps.OTC.J
msuigothic.ttf_FEATURES = $(SOURCE_HAN_SANS_SRCDIR)/features.OTC.J
msuigothic.ttf_SEQUENCES = $(SOURCE_HAN_SANS_SRCDIR)/SourceHanSans_JP_sequences.txt
msuigothic.ttf_UNISOURCE = $(SOURCE_HAN_SANS_SRCDIR)/UniSourceHanSansJP-UTF32-H
msuigothic.ttf_MENUNAMEDB = $(FONTS)/patches/MSUIGothic-FontMenuNameDB
msuigothic.ttf = $(FONTS_OBJ)/source-han/msuigothic.ttf

malgun.ttf_CIDFONTINFO = $(SOURCE_HAN_SANS_SRCDIR)/cidfontinfo.OTC.K
malgun.ttf_CIDFONT = $(SOURCE_HAN_SANS_SRCDIR)/cidfont.ps.OTC.K
malgun.ttf_FEATURES = $(SOURCE_HAN_SANS_SRCDIR)/features.OTC.K
malgun.ttf_SEQUENCES = $(SOURCE_HAN_SANS_SRCDIR)/SourceHanSans_KR_sequences.txt
malgun.ttf_UNISOURCE = $(SOURCE_HAN_SANS_SRCDIR)/UniSourceHanSansKR-UTF32-H
malgun.ttf_MENUNAMEDB = $(FONTS)/patches/Malgun-FontMenuNameDB
malgun.ttf = $(FONTS_OBJ)/source-han/malgun.ttf

simsun.ttc = $(FONTS_OBJ)/source-han/simsun.ttc
msgothic.ttc = $(FONTS_OBJ)/source-han/msgothic.ttc

#The use of "Arial" here is for compatibility with programs that require that exact string. This font is not Arial.
LiberationSans-Regular_NAMES := "Arial" "Arial" "Arial"
#The use of "Arial" here is for compatibility with programs that require that exact string. This font is not Arial.
LiberationSans-Bold_NAMES := "Arial-Bold" "Arial" "Arial Bold"
#The use of "Times New Roman" here is for compatibility with programs that require that exact string. This font is not Times New Roman.
LiberationSerif-Regular_NAMES := "TimesNewRoman" "Times New Roman" "Times New Roman"
#The use of "Courier New" here is for compatibility with programs that require that exact string. This font is not Courier New.
LiberationMono-Regular_NAMES := "CourierNew" "Courier New" "Courier New"
LiberationMono-Regular_PATCH := $(FONTS)/patches/LiberationMono-Regular.patch
#The use of "Courier New" here is for compatibility with programs that require that exact string. This font is not Courier New.
LiberationMono-Bold_NAMES := "CourierNewPS-BoldMT" "Courier New" "Courier New Bold"

$(FONTS_OBJ):
	mkdir -p $@

$(FONTS_OBJ)/%.ttf: $(FONTS_OBJ)/%.sfd $(FONTSCRIPT) | $(FONTS_OBJ)
	$(FONTFORGE) -script $(FONTSCRIPT) $< $($(*)_NAMES)

$(FONTS_OBJ)/%.sfd: $(LIBERATION_SRCDIR)/%.sfd | $(FONTS_OBJ)
	patch $< -o $@ $(firstword $($(*)_PATCH) /dev/null)

#The use of "YaHei" for compatibility with programs that require that exact string. This font is not Microsoft YaHei.
$(FONTS_OBJ)/source-han/%.ttf: $$(%.ttf_CIDFONTINFO) $$(%.ttf_CIDFONTINFO) $$(%.ttf_CIDFONT) \
		$$(%.ttf_FEATURES) $$(%.ttf_SEQUENCES) $$(%.ttf_UNISOURCE) $$(%.ttf_MENUNAMEDB)
	mkdir -p $(FONTS_OBJ)/source-han
	# Do not immediately create the target file, so that make is interrupted
	# it will restart again
	$(AFDKO_VERB) makeotf -f $($(notdir $@)_CIDFONT) -omitMacNames -ff $($(notdir $@)_FEATURES) \
		-fi $($(notdir $@)_CIDFONTINFO) -mf $($(notdir $@)_MENUNAMEDB) -r -nS -cs 25 -ch $($(notdir $@)_UNISOURCE) \
		-ci $($(notdir $@)_SEQUENCES) -o $@.tmp
	$(AFDKO_VERB) tx -cff +S -no_futile $($(notdir $@)_CIDFONT) $@.cff
	# sftnedit uses a hardcoded temporary file in the local directory, so we have
	# to run it in a dedicated temporary directory to prevent concurrent instances
	# to step onto each other's feet
	(TEMP_DIR=`mktemp -d` && cd $$TEMP_DIR && $(AFDKO_VERB) sfntedit -a CFF=$(abspath $($(notdir $@)).cff) $(abspath $@.tmp) && rm -fr $$TEMP_DIR)
	mv $@.tmp $@

$(simsun.ttc): $(simsun.ttf) $(nsimsun.ttf)
	$(AFDKO_VERB) otf2otc -o $@ $^

$(msgothic.ttc): $(msgothic.ttf) $(mspgothic.ttf) $(msuigothic.ttf)
	$(AFDKO_VERB) otf2otc -o $@ $^

fonts: $(FONTS_OBJ)/LiberationSans-Regular.ttf
fonts: $(FONTS_OBJ)/LiberationSans-Bold.ttf
fonts: $(FONTS_OBJ)/LiberationSerif-Regular.ttf
fonts: $(FONTS_OBJ)/LiberationMono-Regular.ttf
fonts: $(FONTS_OBJ)/LiberationMono-Bold.ttf
fonts: $(msyh.ttf)
fonts: $(simsun.ttc)
fonts: $(msgothic.ttc)
fonts: $(malgun.ttf)

##
## Targets
##

.PHONY: all all64 all32 default help targets

# Produce a working dist directory by default
default: all dist
.DEFAULT_GOAL := default

# For suffixes 64/32/_configure64/_configure32 automatically check if they exist compared to ALL_TARGETS and make
# all_configure32/etc aliases
GOAL_TARGETS64           := $(filter $(addsuffix 64,$(GOAL_TARGETS)),$(ALL_TARGETS))
GOAL_TARGETS32           := $(filter $(addsuffix 32,$(GOAL_TARGETS)),$(ALL_TARGETS))
GOAL_TARGETS_LIBS64      := $(filter $(addsuffix 64,$(GOAL_TARGETS_LIBS)),$(ALL_TARGETS))
GOAL_TARGETS_LIBS32      := $(filter $(addsuffix 32,$(GOAL_TARGETS_LIBS)),$(ALL_TARGETS))
GOAL_TARGETS_CONFIGURE   := $(filter $(addsuffix _configure,$(GOAL_TARGETS)),$(ALL_TARGETS))
GOAL_TARGETS_CONFIGURE64 := $(filter $(addsuffix _configure64,$(GOAL_TARGETS)),$(ALL_TARGETS))
GOAL_TARGETS_CONFIGURE32 := $(filter $(addsuffix _configure32,$(GOAL_TARGETS)),$(ALL_TARGETS))

# Anything in all-targets that didn't end up in here
OTHER_TARGETS := $(filter-out $(ALL_TARGETS),$(GOAL_TARGETS) $(GOAL_TARGETS64) $(GOAL_TARGETS32) \
                                             $(GOAL_TARGETS_LIBS64) $(GOAL_TARGETS_LIBS32) $(GOAL_TARGETS_CONFIGURE) \
                                             $(GOAL_TARGETS_CONFIGURE64) $(GOAL_TARGETS_CONFIGURE32))

help: targets
targets:
	$(info Default targets      (make all):              $(strip $(GOAL_TARGETS)))
	$(info Default targets      (make all_lib):          $(strip $(GOAL_TARGETS_LIBS)))
	$(info Default targets      (make all_configure):    $(strip $(GOAL_TARGETS_CONFIGURE)))
	$(info Default targets      (make all64):            $(strip $(GOAL_TARGETS64)))
	$(info Default targets      (make all32):            $(strip $(GOAL_TARGETS32)))
	$(info Default targets      (make all64_lib):        $(strip $(GOAL_TARGETS_LIBS64)))
	$(info Default targets      (make all32_lib):        $(strip $(GOAL_TARGETS_LIBS32)))
	$(info Reconfigure targets  (make all64_configure):  $(strip $(GOAL_TARGETS_CONFIGURE64)))
	$(info Reconfigure targets  (make all32_configure):  $(strip $(GOAL_TARGETS_CONFIGURE32)))
	$(info Other targets:    $(OTHER_TARGETS))

# All target
all: $(GOAL_TARGETS)
	@echo ":: make $@ succeeded"

all32: $(GOAL_TARGETS32)
	@echo ":: make $@ succeeded"

all64: $(GOAL_TARGETS64)
	@echo ":: make $@ succeeded"

# Libraries (not wine) only -- wine has a length install step that runs unconditionally, so this is useful for updating
# incremental builds when not iterating on wine itself.
all_lib: $(GOAL_TARGETS_LIBS)
	@echo ":: make $@ succeeded"

all32_lib: $(GOAL_TARGETS_LIBS32)
	@echo ":: make $@ succeeded"

all64_lib: $(GOAL_TARGETS_LIBS64)
	@echo ":: make $@ succeeded"

# Explicit reconfigure all targets
all_configure: $(GOAL_TARGETS_CONFIGURE)
	@echo ":: make $@ succeeded"

all32_configure: $(GOAL_TARGETS_CONFIGURE32)
	@echo ":: make $@ succeeded"

all64_configure: $(GOAL_TARGETS_CONFIGURE64)
	@echo ":: make $@ succeeded"

endif # ifeq ($(CONTAINER),)
endif # End of NESTED_MAKE from beginning
