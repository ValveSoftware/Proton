SRC := $(abspath $(SRCDIR))
OBJ := $(abspath $(CURDIR))

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

# If CC is coming from make's defaults or nowhere, use our own default.  Otherwise respect environment.
ifeq ($(ENABLE_CCACHE),1)
	CCACHE_BIN := ccache
else
	export CCACHE_DISABLE = 1
	DOCKER_CCACHE_FLAG = -e CCACHE_DISABLE=1
endif

CC := $(CCACHE_BIN) x86_64-linux-gnu-gcc
CXX := $(CCACHE_BIN) x86_64-linux-gnu-g++
CROSSCC32 := $(CCACHE_BIN) i686-w64-mingw32-gcc
CROSSCC64 := $(CCACHE_BIN) x86_64-w64-mingw32-gcc
CROSSCXX32 := $(CCACHE_BIN) i686-w64-mingw32-g++
CROSSCXX64 := $(CCACHE_BIN) x86_64-w64-mingw32-g++

export CC
export CXX

ifeq ($(ENABLE_CCACHE),1)
	export PATH := /usr/lib/ccache:$(PATH)
else
endif

CC32 := $(CCACHE_BIN) i686-linux-gnu-gcc -mstackrealign
CXX32 := $(CCACHE_BIN) i686-linux-gnu-g++ -mstackrealign
PKG_CONFIG32 := i686-linux-gnu-pkg-config

cc-option = $(shell if test -z "`echo 'void*p=1;' | \
              $(1) $(2) -S -o /dev/null -xc - 2>&1 | grep -- $(2) -`"; \
              then echo "$(2)"; else echo "$(3)"; fi ;)

# Selected container mode shell
DOCKER_BASE = docker run --rm -e HOME -e USER -e USERID=$(shell id -u) -u $(shell id -u):$(shell id -g) \
                                    -v $(HOME):$(HOME) -v /tmp:/tmp \
                                    -w $(CURDIR) -e PATH=$(PATH) $(DOCKER_CCACHE_FLAG) \
                                    $(DOCKER_OPTS) \
                                    $(STEAMRT_IMAGE)

STEAMRT_NAME ?= soldier
ifeq ($(STEAMRT_NAME),soldier)
TOOLMANIFEST_VDF_SRC := toolmanifest_runtime.vdf
else
TOOLMANIFEST_VDF_SRC := toolmanifest_noruntime.vdf
endif

ifneq ($(STEAMRT_IMAGE),)
SUBMAKE_JOBS ?= 36
MAKE := make -j$(SUBMAKE_JOBS)
CONTAINER_SHELL := $(DOCKER_BASE) /bin/bash
STEAM_RUNTIME_RUNSH := $(DOCKER_BASE)
else
CONTAINER_SHELL := $(SHELL)
STEAM_RUNTIME_RUNSH :=
endif


MAKECMDGOALS32 := $(filter-out all32,$(filter %32,$(MAKECMDGOALS)))
MAKECMDGOALS64 := $(filter-out all64,$(filter %64,$(MAKECMDGOALS)))

all: all32 all64
.PHONY: all

all32 $(MAKECMDGOALS32):
.PHONY: all32 $(MAKECMDGOALS32)

all32 $(MAKECMDGOALS64):
.PHONY: all64 $(MAKECMDGOALS64)

ifeq ($(CONTAINER),)
container-build: private SHELL := $(CONTAINER_SHELL)
container-build:
	+$(MAKE) -f $(firstword $(MAKEFILE_LIST)) $(MFLAGS) $(MAKEOVERRIDES) CONTAINER=1 $(MAKECMDGOALS32) $(MAKECMDGOALS64)
.PHONY: container-build

all32 $(MAKECMDGOALS32): container-build
all64 $(MAKECMDGOALS64): container-build
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

TOOLS_DIR32 := ./obj-tools32
TOOLS_DIR64 := ./obj-tools64
DST_BASE := ./dist
DST_DIR := $(DST_BASE)/dist
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
OPTIMIZE_FLAGS := -O2 -march=nocona $(call cc-option,$(CC),-mtune=core-avx2,) -mfpmath=sse
SANITY_FLAGS   := -fwrapv -fno-strict-aliasing
COMMON_FLAGS    = $(OPTIMIZE_FLAGS) $(SANITY_FLAGS) -ffile-prefix-map=$(CCACHE_BASEDIR)=.
COMMON_FLAGS32 := -mstackrealign
CARGO_BUILD_ARG := --release

# These variables might need to be quoted, but might not
#
#   That is, $(STRIP) is how you invoke strip, STRIP=$(STRIP_QUOTED) is how you pass it to a shell script properly
#   quoted
STRIP_QUOTED = $(call QUOTE,$(STRIP))
CC_QUOTED    = $(call QUOTE,$(CC))
CC32_QUOTED  = $(call QUOTE,$(CC32))
CXX_QUOTED   = $(call QUOTE,$(CXX))
CXX32_QUOTED = $(call QUOTE,$(CXX32))
CROSSCC32_QUOTED = $(call QUOTE,$(CROSSCC32))
CROSSCC64_QUOTED = $(call QUOTE,$(CROSSCC64))

##
## Target configs
##

COMPAT_MANIFEST_TEMPLATE := $(SRCDIR)/compatibilitytool.vdf.template
LICENSE := $(SRCDIR)/dist.LICENSE
OFL_LICENSE := $(SRCDIR)/fonts/liberation-fonts/LICENSE

GECKO_VER := 2.47.2
GECKO32_TARBALL := wine-gecko-$(GECKO_VER)-x86.tar.xz
GECKO64_TARBALL := wine-gecko-$(GECKO_VER)-x86_64.tar.xz

WINEMONO_VER := 6.1.1
WINEMONO_TARBALL := wine-mono-$(WINEMONO_VER)-x86.tar.xz

# Wine outputs that need to exist for other steps (dist)
WINE_OUT_BIN := $(DST_DIR)/bin/wine64
WINE_OUT_SERVER := $(DST_DIR)/bin/wineserver
WINE_OUT := $(WINE_OUT_BIN) $(WINE_OUT_SERVER)

VRCLIENT := $(SRCDIR)/vrclient_x64
VRCLIENT32 := ./syn-vrclient32
VRCLIENT_OBJ64 := ./obj-vrclient64
VRCLIENT_OBJ32 := ./obj-vrclient32

MEDIACONV := $(SRCDIR)/media-converter
MEDIACONV_OBJ32 := ./obj-media-converter32
MEDIACONV_OBJ64 := ./obj-media-converter64

FONTS := $(SRCDIR)/fonts
FONTS_OBJ := ./obj-fonts

## Object directories
OBJ_DIRS := $(TOOLS_DIR32)        $(TOOLS_DIR64)        \
            $(VRCLIENT_OBJ32)     $(VRCLIENT_OBJ64)     \
            $(MEDIACONV_OBJ32)    $(MEDIACONV_OBJ64)

$(OBJ_DIRS):
	mkdir -p $@

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

DIST_VERSION := $(DST_DIR)/version
DIST_OVR32 := $(DST_DIR)/lib/wine/dxvk/openvr_api_dxvk.dll
DIST_OVR64 := $(DST_DIR)/lib64/wine/dxvk/openvr_api_dxvk.dll
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

DEPLOY_COPY_TARGETS := $(DIST_COPY_TARGETS) $(DIST_VERSION) $(DIST_LICENSE) $(DIST_TOOLMANIFEST) $(DIST_OFL_LICENSE)
REDIST_COPY_TARGETS := $(DEPLOY_COPY_TARGETS) $(DIST_COMPAT_MANIFEST)

$(DIST_LICENSE): $(LICENSE)
	cp -a $< $@

$(DIST_TOOLMANIFEST): $(addprefix $(SRCDIR)/,$(TOOLMANIFEST_VDF_SRC))
	cp -a $< $@

$(DIST_OFL_LICENSE): $(OFL_LICENSE)
	cp -a $< $@

$(DIST_OVR32): $(SRCDIR)/openvr/bin/win32/openvr_api.dll | $(DST_DIR)
	mkdir -p $(DST_DIR)/lib/wine/dxvk
	cp -a $< $@

$(DIST_OVR64): $(SRCDIR)/openvr/bin/win64/openvr_api.dll | $(DST_DIR)
	mkdir -p $(DST_DIR)/lib64/wine/dxvk
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
	cp $(FONTS_OBJ)/*.otf "$@"

.PHONY: dist

ALL_TARGETS += dist
GOAL_TARGETS += dist

dist_prefix: wine gst_good
	find $(DST_DIR)/lib/wine -type f -execdir chmod a-w '{}' '+'
	find $(DST_DIR)/lib64/wine -type f -execdir chmod a-w '{}' '+'
	rm -rf $(abspath $(DIST_PREFIX))
	python3 $(SRCDIR)/default_pfx.py $(abspath $(DIST_PREFIX)) $(abspath $(DST_DIR)) $(STEAM_RUNTIME_RUNSH)

dist_wineopenxr: dist_prefix $(DIST_WINEOPENXR_JSON64)

dist: $(DIST_TARGETS) vrclient lsteamclient wineopenxr steam dxvk vkd3d-proton mediaconv dist_wineopenxr | $(DST_DIR)
	echo `date '+%s'` `GIT_DIR=$(abspath $(SRCDIR)/.git) git describe --tags` > $(DIST_VERSION)
	cp $(DIST_VERSION) $(DST_BASE)/

deploy: dist | $(filter-out dist deploy install redist,$(MAKECMDGOALS))
	mkdir -p $(DEPLOY_DIR) && \
	cp -a $(DEPLOY_COPY_TARGETS) $(DEPLOY_DIR) && \
	tar -C $(DST_DIR) -c . > $(DEPLOY_DIR)/proton_dist.tar
	@echo "Created deployment archive at "$(DEPLOY_DIR)"/proton_dist.tar"

install: dist | $(filter-out dist deploy install redist,$(MAKECMDGOALS))
	if [ ! -d $(STEAM_DIR) ]; then echo >&2 "!! "$(STEAM_DIR)" does not exist, cannot install"; return 1; fi
	mkdir -p $(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	cp -rf --no-dereference --preserve=mode,links $(DST_BASE)/* $(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	@echo "Installed Proton to "$(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	@echo "You may need to restart Steam to select this tool"

redist: dist | $(filter-out dist deploy install redist,$(MAKECMDGOALS))
	mkdir -p $(REDIST_DIR)
	cp -a $(REDIST_COPY_TARGETS) $(REDIST_DIR)
	tar -C $(DST_DIR) -c . | gzip -c -1 > $(REDIST_DIR)/proton_dist.tar.gz
	@echo "Created redistribution tarball at "$(REDIST_DIR)"/proton_dist.tar.gz"

.PHONY: module32 module64 module

module32: private SHELL := $(CONTAINER_SHELL)
module32: all-source
	+$(MAKE) -C $(WINE_OBJ32)/dlls/$(module)

module64: private SHELL := $(CONTAINER_SHELL)
module64: all-source
	+$(MAKE) -C $(WINE_OBJ64)/dlls/$(module)

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

$(OBJ)/.gstreamer-post-build64:
	cp -a $(TOOLS_DIR64)/lib64/libgst* $(DST_DIR)/lib64/ && \
	cp -a $(TOOLS_DIR64)/lib64/gstreamer-1.0 $(DST_DIR)/lib64/
	touch $@

$(OBJ)/.gstreamer-post-build32:
	cp -a $(TOOLS_DIR32)/lib/libgst* $(DST_DIR)/lib/ && \
	cp -a $(TOOLS_DIR32)/lib/gstreamer-1.0 $(DST_DIR)/lib/
	touch $@


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

$(OBJ)/.gst_base-post-build64:
	cp -a $(TOOLS_DIR64)/lib64/libgst* $(DST_DIR)/lib64/ && \
	cp -a $(TOOLS_DIR64)/lib64/gstreamer-1.0 $(DST_DIR)/lib64/
	touch $@

$(OBJ)/.gst_base-post-build32:
	cp -a $(TOOLS_DIR32)/lib/libgst* $(DST_DIR)/lib/ && \
	cp -a $(TOOLS_DIR32)/lib/gstreamer-1.0 $(DST_DIR)/lib/
	touch $@


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
	-Dvideobox=disabled \
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

$(OBJ)/.gst_good-post-build64:
	cp -a $(TOOLS_DIR64)/lib64/libgst* $(DST_DIR)/lib64/ && \
	cp -a $(TOOLS_DIR64)/lib64/gstreamer-1.0 $(DST_DIR)/lib64/
	touch $@

$(OBJ)/.gst_good-post-build32:
	cp -a $(TOOLS_DIR32)/lib/libgst* $(DST_DIR)/lib/ && \
	cp -a $(TOOLS_DIR32)/lib/gstreamer-1.0 $(DST_DIR)/lib/
	touch $@


##
## FAudio
##

FAUDIO_CMAKE_ARGS = -DGSTREAMER=ON -DFORCE_ENABLE_DEBUGCONFIGURATION=ON -DLOG_ASSERTIONS=ON -DXNASONG=OFF
FAUDIO_DEPENDS = gst_orc gstreamer gst_base

$(eval $(call rules-source,faudio,$(SRCDIR)/FAudio))
$(eval $(call rules-cmake,faudio,32))
$(eval $(call rules-cmake,faudio,64))

$(OBJ)/.faudio-post-build32:
	mkdir -p $(DST_DIR)/lib
	cp -a $(TOOLS_DIR32)/lib/libFAudio* $(DST_DIR)/lib/
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib/libFAudio.so
	touch $@

$(OBJ)/.faudio-post-build64:
	mkdir -p $(DST_DIR)/lib64
	cp -a $(TOOLS_DIR64)/lib64/libFAudio* $(DST_DIR)/lib64/
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib64/libFAudio.so
	touch $@


##
## jxrlib
##

JXRLIB_CMAKE_ARGS64 = -DJXRLIB_INSTALL_LIB_DIR=lib64

JXRLIB_INCDIR32 = $(JXRLIB_DST32)/include/jxrlib
JXRLIB_INCDIR64 = $(JXRLIB_DST64)/include/jxrlib

$(eval $(call rules-source,jxrlib,$(SRCDIR)/jxrlib))
$(eval $(call rules-cmake,jxrlib,32))
$(eval $(call rules-cmake,jxrlib,64))

$(OBJ)/.jxrlib-post-build32:
	mkdir -p $(DST_DIR)/lib
	cp -a $(TOOLS_DIR32)/lib/libjpegxr* $(DST_DIR)/lib/
	cp -a $(TOOLS_DIR32)/lib/libjxrglue* $(DST_DIR)/lib/
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib/libjpegxr.so
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib/libjxrglue.so
	touch $@

$(OBJ)/.jxrlib-post-build64:
	mkdir -p $(DST_DIR)/lib64
	cp -a $(TOOLS_DIR64)/lib/libjpegxr* $(DST_DIR)/lib64/
	cp -a $(TOOLS_DIR64)/lib/libjxrglue* $(DST_DIR)/lib64/
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib64/libjpegxr.so
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib64/libjxrglue.so
	touch $@


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

$(OBJ)/.lsteamclient-post-build64:
	[ x"$(STRIP)" = x ] || $(STRIP) $(LSTEAMCLIENT_OBJ64)/lsteamclient.dll.so
	mkdir -pv $(DST_DIR)/lib64/wine/
	cp -af $(LSTEAMCLIENT_OBJ64)/lsteamclient.dll.so $(DST_DIR)/lib64/wine/
	touch $@

$(OBJ)/.lsteamclient-post-build32:
	[ x"$(STRIP)" = x ] || $(STRIP) $(LSTEAMCLIENT_OBJ32)/lsteamclient.dll.so
	mkdir -pv $(DST_DIR)/lib/wine/
	cp -af $(LSTEAMCLIENT_OBJ32)/lsteamclient.dll.so $(DST_DIR)/lib/wine/
	touch $@


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

$(DIST_WINEOPENXR_JSON64): $(WINEOPENXR_SRC)/wineopenxr64.json
	mkdir -p $(dir $@)
	cp -a $< $@

$(OBJ)/.wineopenxr-post-build64:
	[ x"$(STRIP)" = x ] || $(STRIP) $(WINEOPENXR_OBJ64)/wineopenxr.dll.so && \
	mkdir -pv $(DST_DIR)/lib64/wine/fakedlls && \
	cp -a $(WINEOPENXR_OBJ64)/wineopenxr.dll.so $(DST_DIR)/lib64/wine/ && \
	cp -a $(WINEOPENXR_OBJ64)/wineopenxr.dll.fake $(DST_DIR)/lib64/wine/fakedlls/wineopenxr.dll
	touch $@


##
## steam.exe
##

STEAMEXE_CFLAGS = -Wno-attributes
STEAMEXE_CXXFLAGS = -Wno-attributes
STEAMEXE_LDFLAGS = -lsteam_api -lole32 -static-libgcc -static-libstdc++

STEAMEXE_WINEMAKER_ARGS = \
	"-I$(SRC)/lsteamclient/steamworks_sdk_142/" \
	"-L$(SRC)/steam_helper/"

STEAMEXE_DEPENDS = wine

$(eval $(call rules-source,steamexe,$(SRCDIR)/steam_helper))
$(eval $(call rules-winemaker,steamexe,32,steam.exe))

$(OBJ)/.steamexe-post-build32:
	[ x"$(STRIP)" = x ] || $(STRIP) $(STEAMEXE_OBJ32)/steam.exe.so
	mkdir -pv $(DST_DIR)/lib/wine/
	cp -af $(STEAMEXE_OBJ32)/steam.exe.so $(DST_DIR)/lib/wine/
	cp $(STEAMEXE_SRC)/libsteam_api.so $(DST_DIR)/lib/
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
  --disable-tests

WINE_CONFIGURE_ARGS64 = --enable-win64

WINE_DEPENDS = gst_orc gstreamer gst_base faudio jxrlib

$(eval $(call rules-source,wine,$(SRCDIR)/wine))
$(eval $(call rules-autoconf,wine,32))
$(eval $(call rules-autoconf,wine,64))

$(WINE_SRC)/configure: $(SRCDIR)/wine/configure.ac | $(OBJ)/.wine-source
	cd $(WINE_SRC) && autoreconf -fi
	touch $@

$(OBJ)/.wine-post-source: $(WINE_SRC)/configure
	cd $(WINE_SRC) && tools/make_requests
	touch $@

$(OBJ)/.wine-post-build64:
	mkdir -p $(DST_DIR)/{lib64,bin,share}
	cp -a $(TOOLS_DIR64)/lib64 $(DST_DIR)/
	cp -a $(TOOLS_DIR64)/bin/wine64 $(DST_DIR)/bin/
	cp -a $(TOOLS_DIR64)/bin/wine64-preloader $(DST_DIR)/bin/
	cp -a $(TOOLS_DIR64)/bin/wineserver $(DST_DIR)/bin/
	cp -a $(TOOLS_DIR64)/bin/msidb $(DST_DIR)/bin/
	cp -a $(TOOLS_DIR64)/share/wine $(DST_DIR)/share/
	touch $@

$(OBJ)/.wine-post-build32:
	mkdir -p $(DST_DIR)/{lib,bin}
	cp -a $(TOOLS_DIR32)/lib $(DST_DIR)/
	cp -a $(TOOLS_DIR32)/bin/wine $(DST_DIR)/bin/
	cp -a $(TOOLS_DIR32)/bin/wine-preloader $(DST_DIR)/bin/
	touch $@

##
## vrclient
##

## Create & configure object directory for vrclient

VRCLIENT_CONFIGURE_FILES32 := $(VRCLIENT_OBJ32)/Makefile
VRCLIENT_CONFIGURE_FILES64 := $(VRCLIENT_OBJ64)/Makefile

# The source directory for vrclient32 is a synthetic symlink clone of the oddly named vrclient_x64 with the spec files
# renamed.
$(VRCLIENT32): $(VRCLIENT) $(MAKEFILE_DEP)
	rm -rf ./$(VRCLIENT32)
	mkdir -p $(VRCLIENT32)/vrclient
	cd $(VRCLIENT32)/vrclient && \
		ln -sfv ../../$(VRCLIENT)/vrclient_x64/* .
	mv $(VRCLIENT32)/vrclient/vrclient_x64.spec $(VRCLIENT32)/vrclient/vrclient.spec

# 64bit-configure
$(VRCLIENT_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL)
$(VRCLIENT_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(VRCLIENT) $(VRCLIENT)/vrclient_x64 wine64 | $(VRCLIENT_OBJ64)
	cd $(VRCLIENT) && \
	env PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
		winemaker --nosource-fix --nolower-include --nodlls --nomsvcrt \
			--nosource-fix --nolower-include --nodlls --nomsvcrt \
			-I"$(abspath $(TOOLS_DIR64))"/include/ \
			-I"$(abspath $(TOOLS_DIR64))"/include/wine/ \
			-I"$(abspath $(TOOLS_DIR64))"/include/wine/windows/ \
			-I"$(abspath $(VRCLIENT))" \
			-L"$(abspath $(TOOLS_DIR64))"/lib64/ \
			-L"$(abspath $(TOOLS_DIR64))"/lib64/wine/ \
			--dll vrclient_x64 && \
		cp ./vrclient_x64/Makefile $(abspath $(dir $@)) && \
		echo >> $(abspath $(dir $@))/Makefile 'SRCDIR := ../$(VRCLIENT)/vrclient_x64' && \
		echo >> $(abspath $(dir $@))/Makefile 'vpath % $$(SRCDIR)' && \
		echo >> $(abspath $(dir $@))/Makefile 'vrclient_x64_dll_LDFLAGS := -ldl $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(vrclient_x64_dll_LDFLAGS))'

# 32-bit configure
$(VRCLIENT_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL)
$(VRCLIENT_CONFIGURE_FILES32): $(MAKEFILE_DEP) $(VRCLIENT32) wine32 | $(VRCLIENT_OBJ32)
	env PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
	winemaker --nosource-fix --nolower-include --nodlls --nomsvcrt \
		--wine32 \
		-I"$(abspath $(TOOLS_DIR32))"/include/ \
		-I"$(abspath $(TOOLS_DIR32))"/include/wine/ \
		-I"$(abspath $(TOOLS_DIR32))"/include/wine/windows/ \
		-I"$(abspath $(VRCLIENT))" \
		-L"$(abspath $(TOOLS_DIR32))"/lib/ \
		-L"$(abspath $(TOOLS_DIR32))"/lib/wine/ \
		--dll $(VRCLIENT32)/vrclient && \
	cp $(VRCLIENT32)/vrclient/Makefile $(dir $@) && \
	echo >> $(dir $@)/Makefile 'SRCDIR := ../$(VRCLIENT32)/vrclient' && \
	echo >> $(dir $@)/Makefile 'vpath % $$(SRCDIR)' && \
	echo >> $(dir $@)/Makefile 'vrclient_dll_LDFLAGS := -ldl -m32 $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(vrclient_dll_LDFLAGS))'


## vrclient goals
VRCLIENT_TARGETS = vrclient vrclient_configure vrclient32 vrclient64 vrclient_configure32 vrclient_configure64

ALL_TARGETS += $(VRCLIENT_TARGETS)
GOAL_TARGETS_LIBS += vrclient

.PHONY: $(VRCLIENT_TARGETS)

vrclient_configure: $(VRCLIENT_CONFIGURE_FILES32) $(VRCLIENT_CONFIGURE_FILES64)

vrclient_configure32: $(VRCLIENT_CONFIGURE_FILES32)

vrclient_configure64: $(VRCLIENT_CONFIGURE_FILES64)

vrclient: vrclient32 vrclient64

vrclient64: SHELL = $(CONTAINER_SHELL)
vrclient64: $(VRCLIENT_CONFIGURE_FILES64) wine64 | $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	+env CXXFLAGS="-Wno-attributes -std=c++0x $(COMMON_FLAGS) -g" CFLAGS="$(COMMON_FLAGS) -g" PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
		$(MAKE) -C $(VRCLIENT_OBJ64)
	cd $(VRCLIENT_OBJ64) && \
		PATH=$(abspath $(TOOLS_DIR64))/bin:$(PATH) \
			winebuild --dll --fake-module -E ../$(VRCLIENT)/vrclient_x64/vrclient_x64.spec -o vrclient_x64.dll.fake && \
		[ x"$(STRIP)" = x ] || $(STRIP) ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.so && \
		mkdir -pv ../$(DST_DIR)/lib64/wine/fakedlls && \
		cp -af ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.so ../$(DST_DIR)/lib64/wine/ && \
		cp -af ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.fake ../$(DST_DIR)/lib64/wine/fakedlls/vrclient_x64.dll

vrclient32: SHELL = $(CONTAINER_SHELL)
vrclient32: $(VRCLIENT_CONFIGURE_FILES32) wine32 | $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	+env CC="$(CC32)" CXX="$(CXX32)" LDFLAGS="-m32" CXXFLAGS="-m32 -Wno-attributes -std=c++0x $(COMMON_FLAGS) -g" CFLAGS="-m32 $(COMMON_FLAGS) -g" PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
		$(MAKE) -C $(VRCLIENT_OBJ32)
	cd $(VRCLIENT_OBJ32) && \
		PATH=$(abspath $(TOOLS_DIR32))/bin:$(PATH) \
			winebuild --dll --fake-module -E ../$(VRCLIENT32)/vrclient/vrclient.spec -o vrclient.dll.fake && \
		[ x"$(STRIP)" = x ] || $(STRIP) ../$(VRCLIENT_OBJ32)/vrclient.dll.so && \
		mkdir -pv ../$(DST_DIR)/lib/wine/fakedlls && \
		cp -af ../$(VRCLIENT_OBJ32)/vrclient.dll.so ../$(DST_DIR)/lib/wine/ && \
		cp -af ../$(VRCLIENT_OBJ32)/vrclient.dll.fake ../$(DST_DIR)/lib/wine/fakedlls/vrclient.dll


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
	mkdir -p "$(DST_DIR)/lib64/wine/dxvk"
	cp -f "$(DXVK_OBJ64)"/bin/dxgi.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/d3d11.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/d3d10.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/d3d10_1.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/d3d10core.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/d3d9.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/dxvk_config.dll "$(DST_DIR)"/lib64/wine/dxvk
	rm -f "$(DST_DIR)"/lib64/wine/dxvk/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- dxvk ) > "$(DST_DIR)"/lib64/wine/dxvk/version; fi
	touch $@

$(OBJ)/.dxvk-post-build32:
	mkdir -p "$(DST_DIR)"/lib/wine/dxvk
	cp -f "$(DXVK_OBJ32)"/bin/dxgi.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/d3d11.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/d3d10.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/d3d10_1.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/d3d10core.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/d3d9.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/dxvk_config.dll "$(DST_DIR)"/lib/wine/dxvk
	rm -f "$(DST_DIR)"/lib/wine/dxvk/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- dxvk ) > "$(DST_DIR)"/lib/wine/dxvk/version; fi
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
	mkdir -p $(abspath $(DST_DIR))/lib/ && \
	cp -af "$(VKD3D_PROTON_DST32)/bin/d3d12.dll" "$(DST_DIR)"/lib/wine/vkd3d-proton/
	mkdir -p "$(DST_DIR)"/lib/wine/vkd3d-proton
	rm -f "$(DST_DIR)"/lib/wine/vkd3d-proton/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- vkd3d-proton ) > "$(DST_DIR)"/lib/wine/vkd3d-proton/version; fi
	touch $@

$(OBJ)/.vkd3d-proton-post-build64:
	mkdir -p $(abspath $(DST_DIR))/lib64/ && \
	cp -af "$(VKD3D_PROTON_DST64)/bin/d3d12.dll" "$(DST_DIR)"/lib64/wine/vkd3d-proton/
	mkdir -p "$(DST_DIR)"/lib64/wine/vkd3d-proton
	rm -f "$(DST_DIR)"/lib64/wine/vkd3d-proton/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- vkd3d-proton ) > "$(DST_DIR)"/lib64/wine/vkd3d-proton/version; fi
	touch $@

# TODO Tests
#  build_vrclient64_tests
#  build_vrclient32_tests

mediaconv32: SHELL = $(CONTAINER_SHELL)
mediaconv32: $(MAKEFILE_DEP) gstreamer32 | $(MEDIACONV_OBJ32)
	cd $(abspath $(MEDIACONV)) && \
		CARGO_TARGET_I686_UNKNOWN_LINUX_GNU_LINKER="i686-linux-gnu-gcc" \
		PKG_CONFIG_ALLOW_CROSS=1 \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
		cargo build --target i686-unknown-linux-gnu --target-dir $(abspath $(MEDIACONV_OBJ32)) $(CARGO_BUILD_ARG)
	cp -a $(abspath $(MEDIACONV_OBJ32))/i686-unknown-linux-gnu/release/libprotonmediaconverter.so $(abspath $(DST_DIR))/lib/gstreamer-1.0/

mediaconv64: SHELL = $(CONTAINER_SHELL)
mediaconv64: $(MAKEFILE_DEP) gstreamer64 | $(MEDIACONV_OBJ64)
	cd $(abspath $(MEDIACONV)) && \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
		cargo build --target x86_64-unknown-linux-gnu --target-dir $(abspath $(MEDIACONV_OBJ64)) $(CARGO_BUILD_ARG)
	cp -a $(abspath $(MEDIACONV_OBJ64))/x86_64-unknown-linux-gnu/release/libprotonmediaconverter.so $(abspath $(DST_DIR))/lib64/gstreamer-1.0/

mediaconv: mediaconv32 mediaconv64

ifeq ($(CONTAINER),)
ALL_TARGETS += fonts
GOAL_TARGETS += fonts

.PHONY: fonts

FONTFORGE = fontforge -quiet
FONTSCRIPT = $(FONTS)/scripts/generatefont.pe
FONTLINKPATH = ../../../../fonts

LIBERATION_SRCDIR = $(FONTS)/liberation-fonts/src
SOURCE_HAN_SANS_SRCDIR =$(FONTS)/source-han-sans

LIBERATION_SANS_REGULAR_SFD = LiberationSans-Regular.sfd
LIBERATION_SANS_BOLD_SFD = LiberationSans-Bold.sfd
LIBERATION_SERIF_REGULAR_SFD = LiberationSerif-Regular.sfd
LIBERATION_MONO_REGULAR_SFD = LiberationMono-Regular.sfd

SOURCE_HAN_SANS_REGULAR_CIDFONTINFO = $(SOURCE_HAN_SANS_SRCDIR)/cidfontinfo.OTC.SC
SOURCE_HAN_SANS_REGULAR_CIDFONT = $(SOURCE_HAN_SANS_SRCDIR)/cidfont.ps.OTC.SC
SOURCE_HAN_SANS_REGULAR_FEATURES = $(SOURCE_HAN_SANS_SRCDIR)/features.OTC.SC
SOURCE_HAN_SANS_REGULAR_SEQUENCES = $(SOURCE_HAN_SANS_SRCDIR)/SourceHanSans_CN_sequences.txt
SOURCE_HAN_SANS_REGULAR_UNISOURCE = $(SOURCE_HAN_SANS_SRCDIR)/UniSourceHanSansCN-UTF32-H
YAHEI_MENUNAMEDB = $(FONTS)/patches/YaHei-FontMenuNameDB

LIBERATION_SANS_REGULAR_TTF = $(addprefix $(FONTS_OBJ)/, $(LIBERATION_SANS_REGULAR_SFD:.sfd=.ttf))
LIBERATION_SANS_BOLD_TTF = $(addprefix $(FONTS_OBJ)/, $(LIBERATION_SANS_BOLD_SFD:.sfd=.ttf))
LIBERATION_SERIF_REGULAR_TTF = $(addprefix $(FONTS_OBJ)/, $(LIBERATION_SERIF_REGULAR_SFD:.sfd=.ttf))
LIBERATION_MONO_REGULAR_TTF = $(addprefix $(FONTS_OBJ)/, $(LIBERATION_MONO_REGULAR_SFD:.sfd=.ttf))
SOURCE_HAN_SANS_REGULAR_OTF = $(FONTS_OBJ)/SourceHanSansSCRegular.otf

LIBERATION_SFDS = $(LIBERATION_SANS_REGULAR_SFD) $(LIBERATION_SANS_BOLD_SFD) $(LIBERATION_SERIF_REGULAR_SFD) $(LIBERATION_MONO_REGULAR_SFD)
FONT_TTFS = $(LIBERATION_SANS_REGULAR_TTF) $(LIBERATION_SANS_BOLD_TTF) \
            $(LIBERATION_SERIF_REGULAR_TTF) $(LIBERATION_MONO_REGULAR_TTF)
FONTS_SRC = $(FONT_TTFS:.ttf=.sfd)

#The use of "Arial" here is for compatibility with programs that require that exact string. This font is not Arial.
$(LIBERATION_SANS_REGULAR_TTF): $(FONTS_SRC) $(FONTSCRIPT)
	$(FONTFORGE) -script $(FONTSCRIPT) $(@:.ttf=.sfd) "Arial" "Arial" "Arial"

#The use of "Arial" here is for compatibility with programs that require that exact string. This font is not Arial.
$(LIBERATION_SANS_BOLD_TTF): $(FONTS_SRC) $(FONTSCRIPT)
	$(FONTFORGE) -script $(FONTSCRIPT) $(@:.ttf=.sfd) "Arial-Bold" "Arial" "Arial Bold"

#The use of "Times New Roman" here is for compatibility with programs that require that exact string. This font is not Times New Roman.
$(LIBERATION_SERIF_REGULAR_TTF): $(FONTS_SRC) $(FONTSCRIPT)
	$(FONTFORGE) -script $(FONTSCRIPT) $(@:.ttf=.sfd) "TimesNewRoman" "Times New Roman" "Times New Roman"

#The use of "Courier New" here is for compatibility with programs that require that exact string. This font is not Courier New.
$(LIBERATION_MONO_REGULAR_TTF): $(FONTS_SRC) $(FONTSCRIPT)
	patch $(@:.ttf=.sfd) $(FONTS)/patches/$(LIBERATION_MONO_REGULAR_SFD:.sfd=.patch)
	$(FONTFORGE) -script $(FONTSCRIPT) $(@:.ttf=.sfd) "CourierNew" "Courier New" "Courier New"

#The use of "YaHei" for compatibility with programs that require that exact string. This font is not Microsoft YaHei.
$(SOURCE_HAN_SANS_REGULAR_OTF): $(SOURCE_HAN_SANS_REGULAR_CIDFONTINFO) $(SOURCE_HAN_SANS_REGULAR_CIDFONT) \
		$(SOURCE_HAN_SANS_REGULAR_FEATURES) $(SOURCE_HAN_SANS_REGULAR_SEQUENCES) $(SOURCE_HAN_SANS_REGULAR_UNISOURCE) $(YAHEI_MENUNAMEDB)
	makeotf -f $(SOURCE_HAN_SANS_REGULAR_CIDFONT) -omitMacNames -ff $(SOURCE_HAN_SANS_REGULAR_FEATURES) \
		-fi $(SOURCE_HAN_SANS_REGULAR_CIDFONTINFO) -mf $(YAHEI_MENUNAMEDB) -r -nS -cs 25 -ch $(SOURCE_HAN_SANS_REGULAR_UNISOURCE) \
		-ci $(SOURCE_HAN_SANS_REGULAR_SEQUENCES) -o $(SOURCE_HAN_SANS_REGULAR_OTF)
	tx -cff +S -no_futile $(SOURCE_HAN_SANS_REGULAR_CIDFONT) $(FONTS_OBJ)/CFF.OTC.SC
	sfntedit -a CFF=$(FONTS_OBJ)/CFF.OTC.SC $(SOURCE_HAN_SANS_REGULAR_OTF)

$(FONTS_OBJ):
	mkdir -p $@

$(FONTS_SRC): $(FONTS_OBJ)
	cp -n $(addprefix $(LIBERATION_SRCDIR)/, $(LIBERATION_SFDS)) $<

fonts: $(LIBERATION_SANS_REGULAR_TTF) $(LIBERATION_SANS_BOLD_TTF) \
       $(LIBERATION_SERIF_REGULAR_TTF) $(LIBERATION_MONO_REGULAR_TTF) \
       $(SOURCE_HAN_SANS_REGULAR_OTF) | $(FONTS_SRC)

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
