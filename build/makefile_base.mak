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
#   NO_DXVK         - 1 if skipping DXVK steps
#   STEAMRT64_MODE  - 'docker' or '' for automatic Steam Runtime container
#   STEAMRT64_IMAGE - Name of the image if mode is set
#   STEAMRT32_MODE  - Same as above for 32-bit container (can be different type)
#   STEAMRT32_IMAGE - Same as above for 32-bit container

ifeq ($(SRCDIR),)
	foo := $(error SRCDIR not set, do not include makefile_base directly, run ./configure.sh to generate Makefile)
endif

# If CC is coming from make's defaults or nowhere, use our own default.  Otherwise respect environment.
ifeq ($(ENABLE_CCACHE),1)
	CCACHE_BIN := ccache
else
	export CCACHE_DISABLE = 1
	DOCKER_CCACHE_FLAG = -e CCACHE_DISABLE=1
endif

ifneq ($(filter default undefined,$(origin CC)),)
	CC = $(CCACHE_BIN) gcc
endif
ifneq ($(filter default undefined,$(origin CXX)),)
	CXX = $(CCACHE_BIN) g++
endif
ifneq ($(filter default undefined,$(origin CROSSCC)),)
	CROSSCC32 = $(CCACHE_BIN) i686-w64-mingw32-gcc
	CROSSCC64 = $(CCACHE_BIN) x86_64-w64-mingw32-gcc
endif
ifneq ($(filter default undefined,$(origin CROSSCXX)),)
	CROSSCXX32 = $(CCACHE_BIN) i686-w64-mingw32-g++
	CROSSCXX64 = $(CCACHE_BIN) x86_64-w64-mingw32-g++
endif

export CC
export CXX

ifeq ($(ENABLE_CCACHE),1)
	export PATH := /usr/lib/ccache:$(PATH)
else
endif

CC32 := gcc -m32 -mstackrealign
CXX32 := g++ -m32 -mstackrealign
PKG_CONFIG32 := i686-linux-gnu-pkg-config

cc-option = $(shell if test -z "`echo 'void*p=1;' | \
              $(1) $(2) -S -o /dev/null -xc - 2>&1 | grep -- $(2) -`"; \
              then echo "$(2)"; else echo "$(3)"; fi ;)

# Selected container mode shell
DOCKER_BASE = docker run --rm --init --privileged --cap-add=SYS_ADMIN --security-opt apparmor:unconfined \
                                    -v $(HOME):$(HOME) -v /tmp:/tmp \
                                    -v /etc/passwd:/etc/passwd:ro -v /etc/group:/etc/group:ro  -v /etc/shadow:/etc/shadow:ro \
                                    -w $(CURDIR) -e HOME=$(HOME) -e PATH=$(PATH) $(DOCKER_CCACHE_FLAG) -u $(shell id -u):$(shell id -g) -h $(shell hostname) \
                                    $(DOCKER_OPTS) \
                                    $(SELECT_DOCKER_IMAGE) /sbin/docker-init -sg --

STEAM_RUNTIME_RUNSH :=
TOOLMANIFEST_VDF_SRC := toolmanifest_noruntime.vdf

# If STEAMRT64_MODE/STEAMRT32_MODE is set, set the nested SELECT_DOCKER_IMAGE to the _IMAGE variable and eval
# DOCKER_BASE with it to create the CONTAINER_SHELL setting.
ifeq ($(STEAMRT64_MODE),docker)
	SELECT_DOCKER_IMAGE := $(STEAMRT64_IMAGE)
	CONTAINER_SHELL64 := $(DOCKER_BASE) /bin/bash
	STEAM_RUNTIME_RUNSH := $(DOCKER_BASE)
	TOOLMANIFEST_VDF_SRC := toolmanifest_runtime.vdf
else ifneq ($(STEAMRT64_MODE),)
	foo := $(error Unrecognized STEAMRT64_MODE $(STEAMRT64_MODE))
endif
ifeq ($(STEAMRT32_MODE),docker)
	SELECT_DOCKER_IMAGE := $(STEAMRT32_IMAGE)
	CONTAINER_SHELL32 := $(DOCKER_BASE) /bin/bash
else ifneq ($(STEAMRT32_MODE),)
	foo := $(error Unrecognized STEAMRT32_MODE $(STEAMRT32_MODE))
endif

SELECT_DOCKER_IMAGE :=

# If we're using containers to sub-invoke the various builds, jobserver won't work, have some silly auto-jobs
# controllable by SUBMAKE_JOBS.  Not ideal.
ifneq ($(CONTAINER_SHELL32)$(CONTAINER_SHELL64),)
	SUBMAKE_JOBS ?= 36
	MAKE := make -j$(SUBMAKE_JOBS)
endif

# Use default shell if no STEAMRT_ variables setup a container to invoke.  Commands will just run natively.
ifndef CONTAINER_SHELL64
	CONTAINER_SHELL64 := $(SHELL)
endif
ifndef CONTAINER_SHELL32
	CONTAINER_SHELL32 := $(SHELL)
endif

# Helper to test
.PHONY: test-container test-container32 test-container64
test-container: test-container64 test-container32

test-container64:
	@echo >&2 ":: Testing 64-bit container"
	$(CONTAINER_SHELL64) -c "echo Hello World!"

test-container32:
	@echo >&2 ":: Testing 32-bit container"
	$(CONTAINER_SHELL32) -c "echo Hello World!"

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

OPTIMIZE_FLAGS := -O2 -march=nocona $(call cc-option,$(CC),-mtune=core-avx2,) -mfpmath=sse
SANITY_FLAGS   := -fwrapv -fno-strict-aliasing
COMMON_FLAGS   := $(OPTIMIZE_FLAGS) $(SANITY_FLAGS)
CARGO_BUILD_ARG := --release

# Use $(call QUOTE,$(VAR)) to flatten a list to a single element (for feeding to a shell)

# v-- This flattens a list when called. Don't look directly into it.
QUOTE = $(subst $(eval) ,\ ,$(1))
QUOTE_VARIABLE = $(eval $(1) := $$(call QUOTE,$$($(1))))
QUOTE_VARIABLE_LIST = $(foreach a,$(1),$(call QUOTE_VARIABLE,$(a)))

# These variables might need to be quoted, but might not
#
#   That is, $(STRIP) is how you invoke strip, STRIP=$(STRIP_QUOTED) is how you pass it to a shell script properly
#   quoted
STRIP_QUOTED = $(call QUOTE,$(STRIP))
CC_QUOTED    = $(call QUOTE,$(CC))
CXX_QUOTED   = $(call QUOTE,$(CXX))
CROSSCC32_QUOTED = $(call QUOTE,$(CROSSCC32))
CROSSCC64_QUOTED = $(call QUOTE,$(CROSSCC64))

##
## Target configs
##

COMPAT_MANIFEST_TEMPLATE := $(SRCDIR)/compatibilitytool.vdf.template
LICENSE := $(SRCDIR)/dist.LICENSE
OFL_LICENSE := $(SRCDIR)/fonts/liberation-fonts/LICENSE

GECKO_VER := 2.47.1
GECKO32_TARBALL := wine-gecko-$(GECKO_VER)-x86.tar.bz2
GECKO64_TARBALL := wine-gecko-$(GECKO_VER)-x86_64.tar.bz2

WINEMONO_VER := 5.1.1
WINEMONO_TARBALL := wine-mono-$(WINEMONO_VER)-x86.tar.xz

GST_ORC := $(SRCDIR)/gst-orc
GST_ORC_OBJ32 := ./obj-gst-orc32
GST_ORC_OBJ64 := ./obj-gst-orc64

GSTREAMER := $(SRCDIR)/gstreamer
GSTREAMER_OBJ32 := ./obj-gstreamer32
GSTREAMER_OBJ64 := ./obj-gstreamer64

GST_BASE := $(SRCDIR)/gst-plugins-base
GST_BASE_OBJ32 := ./obj-gst-base32
GST_BASE_OBJ64 := ./obj-gst-base64

GST_GOOD := $(SRCDIR)/gst-plugins-good
GST_GOOD_OBJ32 := ./obj-gst-good32
GST_GOOD_OBJ64 := ./obj-gst-good64

FAUDIO := $(SRCDIR)/FAudio
FAUDIO_OBJ32 := ./obj-faudio32
FAUDIO_OBJ64 := ./obj-faudio64

JXRLIB := $(SRCDIR)/jxrlib
JXRLIB_OBJ32 := ./obj-jxrlib32
JXRLIB_OBJ64 := ./obj-jxrlib64

LSTEAMCLIENT := $(SRCDIR)/lsteamclient
LSTEAMCLIENT32 := ./syn-lsteamclient32/lsteamclient
LSTEAMCLIENT64 := ./syn-lsteamclient64/lsteamclient
LSTEAMCLIENT_OBJ32 := ./obj-lsteamclient32
LSTEAMCLIENT_OBJ64 := ./obj-lsteamclient64

WINEOPENXR := $(SRCDIR)/wineopenxr
WINEOPENXR64 := ./syn-wineopenxr64/wineopenxr
WINEOPENXR_OBJ64 := ./obj-wineopenxr64
WINEOPENXR_JSON64 := $(SRCDIR)/wineopenxr/wineopenxr64.json
WINEOPENXR_FAKEDLL64 := $(WINEOPENXR_OBJ64)/wineopenxr.dll.fake

OPENXR := $(SRCDIR)/OpenXR-SDK
OPENXR_OBJ64 := ./obj-openxr64

STEAMEXE_SRC := $(SRCDIR)/steam_helper
STEAMEXE_OBJ := ./obj-steam
STEAMEXE_SYN := ./syn-steam/steam

WINE := $(SRCDIR)/wine
WINE_DST32 := ./dist-wine32
WINE_OBJ32 := ./obj-wine32
WINE_OBJ64 := ./obj-wine64
WINEMAKER := $(abspath $(WINE)/tools/winemaker/winemaker)

# Wine outputs that need to exist for other steps (dist)
WINE_OUT_BIN := $(DST_DIR)/bin/wine64
WINE_OUT_SERVER := $(DST_DIR)/bin/wineserver
WINE_OUT := $(WINE_OUT_BIN) $(WINE_OUT_SERVER)
# Tool-only build outputs needed for other projects
WINEGCC32 := $(TOOLS_DIR32)/bin/winegcc
WINEBUILD32 := $(TOOLS_DIR32)/bin/winebuild
WINE_BUILDTOOLS32 := $(WINEGCC32) $(WINEBUILD32)
WINEGCC64 := $(TOOLS_DIR64)/bin/winegcc
WINEBUILD64 := $(TOOLS_DIR64)/bin/winebuild
WINE_BUILDTOOLS64 := $(WINEGCC64) $(WINEBUILD64)

VRCLIENT := $(SRCDIR)/vrclient_x64
VRCLIENT32 := ./syn-vrclient32
VRCLIENT_OBJ64 := ./obj-vrclient64
VRCLIENT_OBJ32 := ./obj-vrclient32

DXVK := $(SRCDIR)/dxvk
DXVK_OBJ32 := ./obj-dxvk32
DXVK_OBJ64 := ./obj-dxvk64

VKD3D := $(SRCDIR)/vkd3d-proton
VKD3D_OBJ32 := ./obj-vkd3d32
VKD3D_OBJ64 := ./obj-vkd3d64

MEDIACONV := $(SRCDIR)/media-converter
MEDIACONV_OBJ32 := ./obj-media-converter32
MEDIACONV_OBJ64 := ./obj-media-converter64

FONTS := $(SRCDIR)/fonts
FONTS_OBJ := ./obj-fonts

## Object directories
OBJ_DIRS := $(TOOLS_DIR32)        $(TOOLS_DIR64)        \
            $(GST_ORC_OBJ32)      $(GST_ORC_OBJ64)       \
            $(GSTREAMER_OBJ32)    $(GSTREAMER_OBJ64)    \
            $(GST_BASE_OBJ32)     $(GST_BASE_OBJ64)     \
            $(GST_GOOD_OBJ32)     $(GST_GOOD_OBJ64)     \
            $(FAUDIO_OBJ32)       $(FAUDIO_OBJ64)       \
            $(JXRLIB_OBJ32)       $(JXRLIB_OBJ64)       \
            $(LSTEAMCLIENT_OBJ32) $(LSTEAMCLIENT_OBJ64) \
            $(WINEOPENXR_OBJ64) \
            $(OPENXR_OBJ64) \
            $(STEAMEXE_OBJ)                             \
            $(WINE_OBJ32)         $(WINE_OBJ64)         \
            $(VRCLIENT_OBJ32)     $(VRCLIENT_OBJ64)     \
            $(DXVK_OBJ32)         $(DXVK_OBJ64)         \
            $(MEDIACONV_OBJ32)    $(MEDIACONV_OBJ64)    \
            $(VKD3D_OBJ32)        $(VKD3D_OBJ64)

$(OBJ_DIRS):
	mkdir -p $@


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

$(DIST_WINEOPENXR_JSON64): $(WINEOPENXR_JSON64)
	mkdir -p $(dir $@)
	cp -a $< $@

$(DIST_WINEOPENXR64): wineopenxr64
	mkdir -p $(dir $@)
	cp -a $(WINEOPENXR_FAKEDLL64) $@

.PHONY: dist

ALL_TARGETS += dist
GOAL_TARGETS += dist

dist_prefix: wine gst_good
	find $(DST_DIR)/lib/wine -type f -execdir chmod a-w '{}' '+'
	find $(DST_DIR)/lib64/wine -type f -execdir chmod a-w '{}' '+'
	rm -rf $(abspath $(DIST_PREFIX))
	python3 $(SRCDIR)/default_pfx.py $(abspath $(DIST_PREFIX)) $(abspath $(DST_DIR)) $(STEAM_RUNTIME_RUNSH)

dist_wineopenxr: dist_prefix $(DIST_WINEOPENXR_JSON64) $(DIST_WINEOPENXR64)

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

module32: SHELL = $(CONTAINER_SHELL32)
module32:
	+$(MAKE) -C $(WINE_OBJ32)/dlls/$(module)

module64: SHELL = $(CONTAINER_SHELL64)
module64:
	+$(MAKE) -C $(WINE_OBJ64)/dlls/$(module)

module: module32 module64

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

##
## gst-orc
##

GST_ORC_MESON_ARGS := \
	$(GST_COMMON_MESON_ARGS) \
	-Dorc-test=disabled


GST_ORC_CONFIGURE_FILES32 := $(GST_ORC_OBJ32)/build.ninja
GST_ORC_CONFIGURE_FILES64 := $(GST_ORC_OBJ64)/build.ninja

# 64-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(GST_ORC_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(GST_ORC_CONFIGURE_FILES64): $(MAKEFILE_DEP) | $(GST_ORC_OBJ64)
	if [ -e "$(abspath $(GST_ORC_OBJ64))"/build.ninja ]; then \
		rm -f "$(abspath $(GST_ORC_OBJ64))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(GST_ORC))" && \
	PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
		meson --prefix="$(abspath $(TOOLS_DIR64))" --libdir="lib" $(GST_ORC_MESON_ARGS) $(MESON_STRIP_ARG) "$(abspath $(GST_ORC_OBJ64))"

# 32-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(GST_ORC_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(GST_ORC_CONFIGURE_FILES32): $(MAKEFILE_DEP) | $(GST_ORC_OBJ32)
	if [ -e "$(abspath $(GST_ORC_OBJ32))"/build.ninja ]; then \
		rm -f "$(abspath $(GST_ORC_OBJ32))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(GST_ORC))" && \
	PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
		CC="$(CC32)" \
		CXX="$(CXX32)" \
		PKG_CONFIG="$(PKG_CONFIG32)" \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
		meson --prefix="$(abspath $(TOOLS_DIR32))" --libdir="lib" $(GST_ORC_MESON_ARGS) $(MESON_STRIP_ARG) "$(abspath $(GST_ORC_OBJ32))"

## gst-orc goals
GST_ORC_TARGETS = gst_orc gst_orc_configure gst_orc32 gst_orc64 gst_orc_configure32 gst_orc_configure64

ALL_TARGETS += $(GST_ORC_TARGETS)
GOAL_TARGETS_LIBS += gst_orc

.PHONY: $(GST_ORC_TARGETS)

gst_orc_configure: $(GST_ORC_CONFIGURE_FILES32) $(GST_ORC_CONFIGURE_FILES64)

gst_orc_configure64: $(GST_ORC_CONFIGURE_FILES64)

gst_orc_configure32: $(GST_ORC_CONFIGURE_FILES32)

gst_orc: gst_orc32 gst_orc64

gst_orc64: SHELL = $(CONTAINER_SHELL64)
gst_orc64: $(GST_ORC_CONFIGURE_FILES64)
	PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
	LD_LIBRARY_PATH="$(abspath $(TOOLS_DIR64))/lib:$(LD_LIBRARY_PATH)" \
	ninja -C "$(GST_ORC_OBJ64)" install
	cp -a $(TOOLS_DIR64)/lib/liborc* $(DST_DIR)/lib64/

gst_orc32: SHELL = $(CONTAINER_SHELL32)
gst_orc32: $(GST_ORC_CONFIGURE_FILES32)
	PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
	LD_LIBRARY_PATH="$(abspath $(TOOLS_DIR32))/lib:$(LD_LIBRARY_PATH)" \
	ninja -C "$(GST_ORC_OBJ32)" install
	cp -a $(TOOLS_DIR32)/lib/liborc* $(DST_DIR)/lib/

##
## gstreamer
##

GSTREAMER_MESON_ARGS := \
	-Dgst_parse=false \
	-Dbenchmarks=disabled \
	-Dtools=disabled \
	-Dbash-completion=disabled \
	$(GST_COMMON_MESON_ARGS)

GSTREAMER_CONFIGURE_FILES32 := $(GSTREAMER_OBJ32)/build.ninja
GSTREAMER_CONFIGURE_FILES64 := $(GSTREAMER_OBJ64)/build.ninja

# 64-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(GSTREAMER_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(GSTREAMER_CONFIGURE_FILES64): $(MAKEFILE_DEP) gst_orc64 | $(GSTREAMER_OBJ64)
	if [ -e "$(abspath $(GSTREAMER_OBJ64))"/build.ninja ]; then \
		rm -f "$(abspath $(GSTREAMER_OBJ64))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(GSTREAMER))" && \
	PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
		meson --prefix="$(abspath $(TOOLS_DIR64))" --libdir="lib" $(GSTREAMER_MESON_ARGS) $(MESON_STRIP_ARG) --buildtype=release "$(abspath $(GSTREAMER_OBJ64))"

# 32-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(GSTREAMER_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(GSTREAMER_CONFIGURE_FILES32): $(MAKEFILE_DEP) gst_orc32 | $(GSTREAMER_OBJ32)
	if [ -e "$(abspath $(GSTREAMER_OBJ32))"/build.ninja ]; then \
		rm -f "$(abspath $(GSTREAMER_OBJ32))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(GSTREAMER))" && \
	PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
		CC="$(CC32)" \
		CXX="$(CXX32)" \
		PKG_CONFIG="$(PKG_CONFIG32)" \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
		meson --prefix="$(abspath $(TOOLS_DIR32))" --libdir="lib" $(GSTREAMER_MESON_ARGS) $(MESON_STRIP_ARG) --buildtype=release "$(abspath $(GSTREAMER_OBJ32))"

## gstreamer goals
GSTREAMER_TARGETS = gstreamer gstreamer_configure gstreamer32 gstreamer64 gstreamer_configure32 gstreamer_configure64

ALL_TARGETS += $(GSTREAMER_TARGETS)
GOAL_TARGETS_LIBS += gstreamer

.PHONY: $(GSTREAMER_TARGETS)

gstreamer_configure: $(GSTREAMER_CONFIGURE_FILES32) $(GSTREAMER_CONFIGURE_FILES64)

gstreamer_configure64: $(GSTREAMER_CONFIGURE_FILES64)

gstreamer_configure32: $(GSTREAMER_CONFIGURE_FILES32)

gstreamer: gstreamer32 gstreamer64

gstreamer64: SHELL = $(CONTAINER_SHELL64)
gstreamer64: $(GSTREAMER_CONFIGURE_FILES64)
	PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
	LD_LIBRARY_PATH="$(abspath $(TOOLS_DIR64))/lib:$(LD_LIBRARY_PATH)" \
	ninja -C "$(GSTREAMER_OBJ64)" install
	cp -a $(TOOLS_DIR64)/lib/libgst* $(DST_DIR)/lib64/ && \
	cp -a $(TOOLS_DIR64)/lib/gstreamer-1.0 $(DST_DIR)/lib64/

gstreamer32: SHELL = $(CONTAINER_SHELL32)
gstreamer32: $(GSTREAMER_CONFIGURE_FILES32)
	PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
	LD_LIBRARY_PATH="$(abspath $(TOOLS_DIR32))/lib:$(LD_LIBRARY_PATH)" \
	ninja -C "$(GSTREAMER_OBJ32)" install
	cp -a $(TOOLS_DIR32)/lib/libgst* $(DST_DIR)/lib/ && \
	cp -a $(TOOLS_DIR32)/lib/gstreamer-1.0 $(DST_DIR)/lib/


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

GST_BASE_CONFIGURE_FILES32 := $(GST_BASE_OBJ32)/build.ninja
GST_BASE_CONFIGURE_FILES64 := $(GST_BASE_OBJ64)/build.ninja

# 64-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(GST_BASE_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(GST_BASE_CONFIGURE_FILES64): $(MAKEFILE_DEP) gstreamer64 | $(GST_BASE_OBJ64)
	if [ -e "$(abspath $(GST_BASE_OBJ64))"/build.ninja ]; then \
		rm -f "$(abspath $(GST_BASE_OBJ64))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(GST_BASE))" && \
	PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
		meson --prefix="$(abspath $(TOOLS_DIR64))" --libdir="lib" $(GST_BASE_MESON_ARGS) $(MESON_STRIP_ARG) --buildtype=release "$(abspath $(GST_BASE_OBJ64))"

# 32-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(GST_BASE_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(GST_BASE_CONFIGURE_FILES32): $(MAKEFILE_DEP) gstreamer32 | $(GST_BASE_OBJ32)
	if [ -e "$(abspath $(GST_BASE_OBJ32))"/build.ninja ]; then \
		rm -f "$(abspath $(GST_BASE_OBJ32))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(GST_BASE))" && \
	PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
		CC="$(CC32)" \
		CXX="$(CXX32)" \
		PKG_CONFIG="$(PKG_CONFIG32)" \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
		meson --prefix="$(abspath $(TOOLS_DIR32))" --libdir="lib" $(GST_BASE_MESON_ARGS) $(MESON_STRIP_ARG) --buildtype=release "$(abspath $(GST_BASE_OBJ32))"

## gst_base goals
GST_BASE_TARGETS = gst_base gst_base_configure gst_base32 gst_base64 gst_base_configure32 gst_base_configure64

ALL_TARGETS += $(GST_BASE_TARGETS)
GOAL_TARGETS_LIBS += gst_base

.PHONY: $(GST_BASE_TARGETS)

gst_base_configure: $(GST_BASE_CONFIGURE_FILES32) $(GST_BASE_CONFIGURE_FILES64)

gst_base_configure64: $(GST_BASE_CONFIGURE_FILES64)

gst_base_configure32: $(GST_BASE_CONFIGURE_FILES32)

gst_base: gst_base32 gst_base64

gst_base64: SHELL = $(CONTAINER_SHELL64)
gst_base64: $(GST_BASE_CONFIGURE_FILES64)
	PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
	LD_LIBRARY_PATH="$(abspath $(TOOLS_DIR64))/lib:$(LD_LIBRARY_PATH)" \
	ninja -C "$(GST_BASE_OBJ64)" install
	cp -a $(TOOLS_DIR64)/lib/libgst* $(DST_DIR)/lib64/ && \
	cp -a $(TOOLS_DIR64)/lib/gstreamer-1.0 $(DST_DIR)/lib64/

gst_base32: SHELL = $(CONTAINER_SHELL32)
gst_base32: $(GST_BASE_CONFIGURE_FILES32)
	PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
	LD_LIBRARY_PATH="$(abspath $(TOOLS_DIR32))/lib:$(LD_LIBRARY_PATH)" \
	ninja -C "$(GST_BASE_OBJ32)" install
	cp -a $(TOOLS_DIR32)/lib/libgst* $(DST_DIR)/lib/ && \
	cp -a $(TOOLS_DIR32)/lib/gstreamer-1.0 $(DST_DIR)/lib/


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

GST_GOOD_CONFIGURE_FILES32 := $(GST_GOOD_OBJ32)/build.ninja
GST_GOOD_CONFIGURE_FILES64 := $(GST_GOOD_OBJ64)/build.ninja

# 64-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(GST_GOOD_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(GST_GOOD_CONFIGURE_FILES64): $(MAKEFILE_DEP) gst_base64 | $(GST_GOOD_OBJ64)
	if [ -e "$(abspath $(GST_GOOD_OBJ64))"/build.ninja ]; then \
		rm -f "$(abspath $(GST_GOOD_OBJ64))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(GST_GOOD))" && \
	PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
		meson --prefix="$(abspath $(TOOLS_DIR64))" --libdir="lib" $(GST_GOOD_MESON_ARGS) $(MESON_STRIP_ARG) --buildtype=release "$(abspath $(GST_GOOD_OBJ64))"

# 32-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(GST_GOOD_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(GST_GOOD_CONFIGURE_FILES32): $(MAKEFILE_DEP) gst_base32 | $(GST_GOOD_OBJ32)
	if [ -e "$(abspath $(GST_GOOD_OBJ32))"/build.ninja ]; then \
		rm -f "$(abspath $(GST_GOOD_OBJ32))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(GST_GOOD))" && \
	PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
		CC="$(CC32)" \
		CXX="$(CXX32)" \
		PKG_CONFIG="$(PKG_CONFIG32)" \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
		meson --prefix="$(abspath $(TOOLS_DIR32))" --libdir="lib" $(GST_GOOD_MESON_ARGS) $(MESON_STRIP_ARG) --buildtype=release "$(abspath $(GST_GOOD_OBJ32))"

## gst_good goals
GST_GOOD_TARGETS = gst_good gst_good_configure gst_good32 gst_good64 gst_good_configure32 gst_good_configure64

ALL_TARGETS += $(GST_GOOD_TARGETS)
GOAL_TARGETS_LIBS += gst_good

.PHONY: $(GST_GOOD_TARGETS)

gst_good_configure: $(GST_GOOD_CONFIGURE_FILES32) $(GST_GOOD_CONFIGURE_FILES64)

gst_good_configure64: $(GST_GOOD_CONFIGURE_FILES64)

gst_good_configure32: $(GST_GOOD_CONFIGURE_FILES32)

gst_good: gst_good32 gst_good64

gst_good64: SHELL = $(CONTAINER_SHELL64)
gst_good64: $(GST_GOOD_CONFIGURE_FILES64)
	PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
	LD_LIBRARY_PATH="$(abspath $(TOOLS_DIR64))/lib:$(LD_LIBRARY_PATH)" \
	ninja -C "$(GST_GOOD_OBJ64)" install
	cp -a $(TOOLS_DIR64)/lib/libgst* $(DST_DIR)/lib64/ && \
	cp -a $(TOOLS_DIR64)/lib/gstreamer-1.0 $(DST_DIR)/lib64/

gst_good32: SHELL = $(CONTAINER_SHELL32)
gst_good32: $(GST_GOOD_CONFIGURE_FILES32)
	PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
	LD_LIBRARY_PATH="$(abspath $(TOOLS_DIR32))/lib:$(LD_LIBRARY_PATH)" \
	ninja -C "$(GST_GOOD_OBJ32)" install
	cp -a $(TOOLS_DIR32)/lib/libgst* $(DST_DIR)/lib/ && \
	cp -a $(TOOLS_DIR32)/lib/gstreamer-1.0 $(DST_DIR)/lib/


##
## FAudio
##

FAUDIO_CMAKE_FLAGS = -DGSTREAMER=ON -DCMAKE_BUILD_TYPE=Release -DFORCE_ENABLE_DEBUGCONFIGURATION=ON -DLOG_ASSERTIONS=ON -DCMAKE_INSTALL_LIBDIR="lib" -DXNASONG=OFF

FAUDIO_TARGETS = faudio faudio32 faudio64

ALL_TARGETS += $(FAUDIO_TARGETS)
GOAL_TARGETS_LIBS += faudio

.PHONY: faudio faudio32 faudio64

faudio: faudio32 faudio64

FAUDIO_CONFIGURE_FILES32 := $(FAUDIO_OBJ32)/Makefile
FAUDIO_CONFIGURE_FILES64 := $(FAUDIO_OBJ64)/Makefile

$(FAUDIO_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(FAUDIO_CONFIGURE_FILES32): $(FAUDIO)/CMakeLists.txt $(MAKEFILE_DEP) gst_base32 | $(FAUDIO_OBJ32)
	cd $(dir $@) && \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
		CC="$(CC32)" \
		CXX="$(CXX32)" \
		PKG_CONFIG="$(PKG_CONFIG32)" \
		cmake $(abspath $(FAUDIO)) \
			-DCMAKE_INSTALL_PREFIX="$(abspath $(TOOLS_DIR32))" \
			$(FAUDIO_CMAKE_FLAGS)

$(FAUDIO_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(FAUDIO_CONFIGURE_FILES64): $(FAUDIO)/CMakeLists.txt $(MAKEFILE_DEP) gst_base64 | $(FAUDIO_OBJ64)
	cd $(dir $@) && \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
		CFLAGS="$(OPTIMIZE_FLAGS)" \
		cmake $(abspath $(FAUDIO)) \
			-DCMAKE_INSTALL_PREFIX="$(abspath $(TOOLS_DIR64))" \
			$(FAUDIO_CMAKE_FLAGS)

faudio32: SHELL = $(CONTAINER_SHELL32)
faudio32: $(FAUDIO_CONFIGURE_FILES32)
	+$(MAKE) -C $(FAUDIO_OBJ32) VERBOSE=1
	+$(MAKE) -C $(FAUDIO_OBJ32) install VERBOSE=1
	mkdir -p $(DST_DIR)/lib
	cp -a $(TOOLS_DIR32)/lib/libFAudio* $(DST_DIR)/lib/
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib/libFAudio.so

faudio64: SHELL = $(CONTAINER_SHELL64)
faudio64: $(FAUDIO_CONFIGURE_FILES64)
	+$(MAKE) -C $(FAUDIO_OBJ64) VERBOSE=1
	+$(MAKE) -C $(FAUDIO_OBJ64) install VERBOSE=1
	mkdir -p $(DST_DIR)/lib64
	cp -a $(TOOLS_DIR64)/lib/libFAudio* $(DST_DIR)/lib64/
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib64/libFAudio.so

##
## jxrlib
##

JXRLIB_CMAKE_FLAGS = -DCMAKE_BUILD_TYPE=Release -DJXRLIB_INSTALL_LIB_DIR=lib

JXRLIB_TARGETS = jxrlib jxrlib32 jxrlib64

ALL_TARGETS += $(JXRLIB_TARGETS)
GOAL_TARGETS_LIBS += jxrlib

.PHONY: jxrlib jxrlib32 jxrlib64

jxrlib: jxrlib32 jxrlib64

JXRLIB_CONFIGURE_FILES32 := $(JXRLIB_OBJ32)/Makefile
JXRLIB_CONFIGURE_FILES64 := $(JXRLIB_OBJ64)/Makefile

$(JXRLIB_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(JXRLIB_CONFIGURE_FILES32): $(JXRLIB)/CMakeLists.txt $(MAKEFILE_DEP) | $(JXRLIB_OBJ32)
	cd $(dir $@) && \
		CC="$(CC32)" \
		CXX="$(CXX32)" \
		CFLAGS="$(OPTIMIZE_FLAGS)" \
		cmake $(abspath $(JXRLIB)) \
			-DCMAKE_INSTALL_PREFIX="$(abspath $(TOOLS_DIR32))" \
			$(JXRLIB_CMAKE_FLAGS)

$(JXRLIB_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(JXRLIB_CONFIGURE_FILES64): $(JXRLIB)/CMakeLists.txt $(MAKEFILE_DEP) | $(JXRLIB_OBJ64)
	cd $(dir $@) && \
		CFLAGS="$(OPTIMIZE_FLAGS)" \
		cmake $(abspath $(JXRLIB)) \
			-DCMAKE_INSTALL_PREFIX="$(abspath $(TOOLS_DIR64))" \
			$(JXRLIB_CMAKE_FLAGS)

jxrlib32: SHELL = $(CONTAINER_SHELL32)
jxrlib32: $(JXRLIB_CONFIGURE_FILES32)
	+$(MAKE) -C $(JXRLIB_OBJ32) VERBOSE=1
	+$(MAKE) -C $(JXRLIB_OBJ32) install VERBOSE=1
	mkdir -p $(DST_DIR)/lib
	cp -a $(TOOLS_DIR32)/lib/libjpegxr* $(DST_DIR)/lib/
	cp -a $(TOOLS_DIR32)/lib/libjxrglue* $(DST_DIR)/lib/
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib/libjpegxr.so
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib/libjxrglue.so

jxrlib64: SHELL = $(CONTAINER_SHELL64)
jxrlib64: $(JXRLIB_CONFIGURE_FILES64)
	+$(MAKE) -C $(JXRLIB_OBJ64) VERBOSE=1
	+$(MAKE) -C $(JXRLIB_OBJ64) install VERBOSE=1
	mkdir -p $(DST_DIR)/lib64
	cp -a $(TOOLS_DIR64)/lib/libjpegxr* $(DST_DIR)/lib64/
	cp -a $(TOOLS_DIR64)/lib/libjxrglue* $(DST_DIR)/lib64/
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib64/libjpegxr.so
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib64/libjxrglue.so

##
## lsteamclient
##

# The source directory for lsteamclient is a synthetic symlink clone of the source directory, because we need to run
# winemaker in tree and it can stomp itself in parallel builds.
$(LSTEAMCLIENT64)/.created: $(LSTEAMCLIENT) $(MAKEFILE_DEP)
	rm -rf ./$(LSTEAMCLIENT64)
	mkdir -p $(LSTEAMCLIENT64)/
	cd $(LSTEAMCLIENT64)/ && ln -sfv ../../$(LSTEAMCLIENT)/* .
	touch $@

$(LSTEAMCLIENT32)/.created: $(LSTEAMCLIENT) $(MAKEFILE_DEP)
	rm -rf ./$(LSTEAMCLIENT32)
	mkdir -p $(LSTEAMCLIENT32)/
	cd $(LSTEAMCLIENT32)/ && ln -sfv ../../$(LSTEAMCLIENT)/* .
	touch $@

$(LSTEAMCLIENT64): $(LSTEAMCLIENT64)/.created
$(LSTEAMCLIENT32): $(LSTEAMCLIENT32)/.created

## Create & configure object directory for lsteamclient

LSTEAMCLIENT_CONFIGURE_FILES32 := $(LSTEAMCLIENT_OBJ32)/Makefile
LSTEAMCLIENT_CONFIGURE_FILES64 := $(LSTEAMCLIENT_OBJ64)/Makefile

# 64bit-configure
$(LSTEAMCLIENT_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(LSTEAMCLIENT_CONFIGURE_FILES64): $(LSTEAMCLIENT64) $(MAKEFILE_DEP) | $(LSTEAMCLIENT_OBJ64) $(WINEMAKER)
	cd $(dir $@) && \
		$(WINEMAKER) --nosource-fix --nolower-include --nodlls --nomsvcrt \
			-DSTEAM_API_EXPORTS \
			-Dprivate=public -Dprotected=public \
			-I"../$(TOOLS_DIR64)"/include/ \
			-I"../$(TOOLS_DIR64)"/include/wine/ \
			-I"../$(TOOLS_DIR64)"/include/wine/windows/ \
			-I"../$(WINE)"/include/ \
			-L"../$(TOOLS_DIR64)"/lib64/ \
			-L"../$(TOOLS_DIR64)"/lib64/wine/ \
			--dll ../$(LSTEAMCLIENT64) && \
		cp ../$(LSTEAMCLIENT64)/Makefile . && \
		echo >> ./Makefile 'SRCDIR := ../$(LSTEAMCLIENT64)' && \
		echo >> ./Makefile 'vpath % $$(SRCDIR)' && \
		echo >> ./Makefile 'lsteamclient_dll_LDFLAGS := -ldl $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(lsteamclient_dll_LDFLAGS))'

# 32-bit configure
$(LSTEAMCLIENT_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(LSTEAMCLIENT_CONFIGURE_FILES32): $(LSTEAMCLIENT32) $(MAKEFILE_DEP) | $(LSTEAMCLIENT_OBJ32) $(WINEMAKER)
	cd $(dir $@) && \
		$(WINEMAKER) --nosource-fix --nolower-include --nodlls --nomsvcrt --wine32 \
			-DSTEAM_API_EXPORTS \
			-Dprivate=public -Dprotected=public \
			-I"../$(TOOLS_DIR32)"/include/ \
			-I"../$(TOOLS_DIR32)"/include/wine/ \
			-I"../$(TOOLS_DIR32)"/include/wine/windows/ \
			-I"../$(WINE)"/include/ \
			-L"../$(TOOLS_DIR32)"/lib/ \
			-L"../$(TOOLS_DIR32)"/lib/wine/ \
			--dll ../$(LSTEAMCLIENT32) && \
		cp ../$(LSTEAMCLIENT32)/Makefile . && \
		echo >> ./Makefile 'SRCDIR := ../$(LSTEAMCLIENT32)' && \
		echo >> ./Makefile 'vpath % $$(SRCDIR)' && \
		echo >> ./Makefile 'lsteamclient_dll_LDFLAGS := -ldl -m32 $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(lsteamclient_dll_LDFLAGS))'

## lsteamclient goals
LSTEAMCLIENT_TARGETS = lsteamclient lsteamclient_configure lsteamclient32 lsteamclient64 lsteamclient_configure32 lsteamclient_configure64

ALL_TARGETS += $(LSTEAMCLIENT_TARGETS)
GOAL_TARGETS_LIBS += lsteamclient

.PHONY: $(LSTEAMCLIENT_TARGETS)

lsteamclient_configure: $(LSTEAMCLIENT_CONFIGURE_FILES32) $(LSTEAMCLIENT_CONFIGURE_FILES64)

lsteamclient_configure64: $(LSTEAMCLIENT_CONFIGURE_FILES64)

lsteamclient_configure32: $(LSTEAMCLIENT_CONFIGURE_FILES32)

lsteamclient: lsteamclient32 lsteamclient64

lsteamclient64: SHELL = $(CONTAINER_SHELL64)
lsteamclient64: $(LSTEAMCLIENT_CONFIGURE_FILES64) | $(WINE_BUILDTOOLS64) $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	+env PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" CXXFLAGS="-Wno-attributes $(COMMON_FLAGS) -std=gnu++11 -g" CFLAGS="$(COMMON_FLAGS) -g" \
		$(MAKE) -C $(LSTEAMCLIENT_OBJ64)
	[ x"$(STRIP)" = x ] || $(STRIP) $(LSTEAMCLIENT_OBJ64)/lsteamclient.dll.so
	mkdir -pv $(DST_DIR)/lib64/wine/
	cp -af $(LSTEAMCLIENT_OBJ64)/lsteamclient.dll.so $(DST_DIR)/lib64/wine/

lsteamclient32: SHELL = $(CONTAINER_SHELL32)
lsteamclient32: $(LSTEAMCLIENT_CONFIGURE_FILES32) | $(WINE_BUILDTOOLS32) $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	+env PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" LDFLAGS="-m32" CXXFLAGS="-m32 -Wno-attributes $(COMMON_FLAGS) -std=gnu++11 -g" CFLAGS="-m32 $(COMMON_FLAGS) -g" \
		$(MAKE) -C $(LSTEAMCLIENT_OBJ32)
	[ x"$(STRIP)" = x ] || $(STRIP) $(LSTEAMCLIENT_OBJ32)/lsteamclient.dll.so
	mkdir -pv $(DST_DIR)/lib/wine/
	cp -af $(LSTEAMCLIENT_OBJ32)/lsteamclient.dll.so $(DST_DIR)/lib/wine/


##
## openxr
## Note 32-bit is not supported by SteamVR, so we don't build it.
##

OPENXR_CMAKE_FLAGS = -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_LIBDIR="lib"

OPENXR_TARGETS = openxr openxr64

ALL_TARGETS += $(OPENXR_TARGETS)
GOAL_TARGETS_LIBS += openxr

.PHONY: openxr openxr64

openxr: openxr64

OPENXR_CONFIGURE_FILES64 := $(OPENXR_OBJ64)/Makefile

$(OPENXR_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(OPENXR_CONFIGURE_FILES64): $(OPENXR)/CMakeLists.txt $(MAKEFILE_DEP) | $(OPENXR_OBJ64)
	cd $(dir $@) && \
		CFLAGS="$(OPTIMIZE_FLAGS)" \
		cmake $(abspath $(OPENXR)) \
			-DCMAKE_INSTALL_PREFIX="$(abspath $(TOOLS_DIR64))" \
			$(OPENXR_CMAKE_FLAGS)

openxr64: SHELL = $(CONTAINER_SHELL64)
openxr64: $(OPENXR_CONFIGURE_FILES64)
	+$(MAKE) -C $(OPENXR_OBJ64) VERBOSE=1
	+$(MAKE) -C $(OPENXR_OBJ64) install VERBOSE=1
	mkdir -p $(DST_DIR)/lib64
	cp -a $(TOOLS_DIR64)/lib/libopenxr_loader* $(DST_DIR)/lib64/
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib64/libopenxr_loader.so

##
## wineopenxr
## Note 32-bit is not supported by SteamVR, so we don't build it.
##

# The source directory for wineopenxr is a synthetic symlink clone of the source directory, because we need to run
# winemaker in tree and it can stomp itself in parallel builds.
$(WINEOPENXR64)/.created: $(WINEOPENXR) $(MAKEFILE_DEP)
	rm -rf ./$(WINEOPENXR64)
	mkdir -p $(WINEOPENXR64)/
	cd $(WINEOPENXR64)/ && ln -sfv ../../$(WINEOPENXR)/* .
	touch $@

$(WINEOPENXR64): $(WINEOPENXR64)/.created

## Create & configure object directory for wineopenxr

WINEOPENXR_CONFIGURE_FILES64 := $(WINEOPENXR_OBJ64)/Makefile

# 64bit-configure
$(WINEOPENXR_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(WINEOPENXR_CONFIGURE_FILES64): $(WINEOPENXR64) $(MAKEFILE_DEP) | $(WINEOPENXR_OBJ64) $(WINEMAKER)
	cd $(dir $@) && \
		$(WINEMAKER) --nosource-fix --nolower-include --nodlls --nomsvcrt \
			-I"../$(TOOLS_DIR64)"/include/ \
			-I"../$(TOOLS_DIR64)"/include/wine/ \
			-I"../$(TOOLS_DIR64)"/include/wine/windows/ \
			-I"../$(WINE)"/include/ \
			-I"$(abspath $(OPENXR))"/include/ \
			-L"../$(TOOLS_DIR64)"/lib/ \
			-l"openxr_loader" \
			-l"dxgi" \
			-l"vulkan" \
			--dll ../$(WINEOPENXR64) && \
		cp ../$(WINEOPENXR64)/Makefile . && \
		echo >> ./Makefile 'SRCDIR := ../$(WINEOPENXR64)' && \
		echo >> ./Makefile 'vpath % $$(SRCDIR)' && \
		echo >> ./Makefile 'wineopenxr_dll_LDFLAGS := -ldl $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(wineopenxr_dll_LDFLAGS))'

#			-L"../$(TOOLS_DIR64)"/lib64/wine/ \
## wineopenxr goals
WINEOPENXR_TARGETS = wineopenxr wineopenxr_configure wineopenxr64 wineopenxr_configure64

ALL_TARGETS += $(WINEOPENXR_TARGETS)
GOAL_TARGETS_LIBS += wineopenxr

.PHONY: $(WINEOPENXR_TARGETS)

wineopenxr_configure: $(WINEOPENXR_CONFIGURE_FILES64)

wineopenxr_configure64: $(WINEOPENXR_CONFIGURE_FILES64)

wineopenxr: wineopenxr64

wineopenxr64: SHELL = $(CONTAINER_SHELL64)
wineopenxr64: $(WINEOPENXR_CONFIGURE_FILES64) openxr64 | $(WINE_BUILDTOOLS64) $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	+env PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" CFLAGS="$(COMMON_FLAGS) -g" \
		$(MAKE) -C $(WINEOPENXR_OBJ64)
	$(TOOLS_DIR64)/bin/winebuild -m64 --dll --fake-module -E $(abspath $(WINEOPENXR))/wineopenxr.spec -o $(WINEOPENXR_OBJ64)/wineopenxr.dll.fake
	[ x"$(STRIP)" = x ] || $(STRIP) $(WINEOPENXR_OBJ64)/wineopenxr.dll.so
	mkdir -pv $(DST_DIR)/lib64/wine/
	cp -af $(WINEOPENXR_OBJ64)/wineopenxr.dll.so $(DST_DIR)/lib64/wine/

## steam.exe

$(STEAMEXE_SYN)/.created: $(STEAMEXE_SRC) $(MAKEFILE_DEP)
	rm -rf $(STEAMEXE_SYN)
	mkdir -p $(STEAMEXE_SYN)/
	cd $(STEAMEXE_SYN)/ && ln -sfv ../../$(STEAMEXE_SRC)/* .
	touch $@

$(STEAMEXE_SYN): $(STEAMEXE_SYN)/.created

STEAMEXE_CONFIGURE_FILES := $(STEAMEXE_OBJ)/Makefile

# 32-bit configure
$(STEAMEXE_CONFIGURE_FILES): SHELL = $(CONTAINER_SHELL32)
$(STEAMEXE_CONFIGURE_FILES): $(STEAMEXE_SYN) $(MAKEFILE_DEP) | $(STEAMEXE_OBJ) $(WINEMAKER)
	cd $(dir $@) && \
		$(WINEMAKER) --nosource-fix --nolower-include --nodlls --wine32 \
			-I"../$(TOOLS_DIR32)"/include/ \
			-I"../$(TOOLS_DIR32)"/include/wine/ \
			-I"../$(TOOLS_DIR32)"/include/wine/windows/ \
			-I"../$(SRCDIR)"/lsteamclient/steamworks_sdk_142/ \
			-L"../$(TOOLS_DIR32)"/lib/ \
			-L"../$(TOOLS_DIR32)"/lib/wine/ \
			-L"../$(SRCDIR)"/steam_helper/ \
			--guiexe --nomsvcrt ../$(STEAMEXE_SYN) && \
		cp ../$(STEAMEXE_SYN)/Makefile . && \
		echo >> ./Makefile 'SRCDIR := ../$(STEAMEXE_SYN)' && \
		echo >> ./Makefile 'vpath % $$(SRCDIR)' && \
		echo >> ./Makefile 'steam_exe_LDFLAGS := -m32 -lsteam_api -lole32 $$(steam_exe_LDFLAGS)'

## steam goals
STEAMEXE_TARGETS = steam steam_configure

ALL_TARGETS += $(STEAMEXE_TARGETS)
GOAL_TARGETS_LIBS += steam

.PHONY: $(STEAMEXE_TARGETS)

steam_configure: $(STEAMEXE_CONFIGURE_FILES)

steam: SHELL = $(CONTAINER_SHELL32)
steam: $(STEAMEXE_CONFIGURE_FILES) | $(WINE_BUILDTOOLS32) $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	+env PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" LDFLAGS="-m32" CXXFLAGS="-std=gnu++11 -m32 -Wno-attributes $(COMMON_FLAGS) -g" CFLAGS="-m32 $(COMMON_FLAGS) -g" \
		$(MAKE) -C $(STEAMEXE_OBJ)
	[ x"$(STRIP)" = x ] || $(STRIP) $(STEAMEXE_OBJ)/steam.exe.so
	mkdir -pv $(DST_DIR)/lib/wine/
	cp -af $(STEAMEXE_OBJ)/steam.exe.so $(DST_DIR)/lib/wine/
	cp $(STEAMEXE_SRC)/libsteam_api.so $(DST_DIR)/lib/


##
## wine
##

## Create & configure object directory for wine

WINE_CONFIGURE_FILES32 := $(WINE_OBJ32)/Makefile
WINE_CONFIGURE_FILES64 := $(WINE_OBJ64)/Makefile

WINE_COMMON_MAKE_ARGS := \
	STRIP="$(STRIP_QUOTED)" \
	INSTALL_PROGRAM_FLAGS="$(INSTALL_PROGRAM_FLAGS)"

WINE64_MAKE_ARGS := \
	$(WINE_COMMON_MAKE_ARGS) \
	prefix="$(abspath $(TOOLS_DIR64))" \
	libdir="$(abspath $(TOOLS_DIR64))/lib64" \
	dlldir="$(abspath $(TOOLS_DIR64))/lib64/wine"

WINE32_MAKE_ARGS := \
	$(WINE_COMMON_MAKE_ARGS) \
	prefix="$(abspath $(TOOLS_DIR32))" \
	libdir="$(abspath $(TOOLS_DIR32))/lib" \
	dlldir="$(abspath $(TOOLS_DIR32))/lib/wine"

# 64bit-configure
$(WINE_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(WINE_CONFIGURE_FILES64): $(MAKEFILE_DEP) | faudio64 jxrlib64 gst_base64 $(WINE_OBJ64)
	cd $(dir $@) && \
		../$(WINE)/configure \
			--without-curses \
			--enable-win64 \
			--disable-tests \
			--prefix=$(abspath $(DST_DIR)) \
			LD_LIBRARY_PATH=$(abspath $(TOOLS_DIR64))/lib \
			STRIP=$(STRIP_QUOTED) \
			CFLAGS="-I$(abspath $(TOOLS_DIR64))/include -g $(COMMON_FLAGS)" \
			CROSSCFLAGS="-g $(COMMON_FLAGS)" \
			LDFLAGS=-L$(abspath $(TOOLS_DIR64))/lib \
			PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
			JXRLIB_CFLAGS=-I$(abspath $(TOOLS_DIR64))/include/jxrlib \
			CC=$(CC_QUOTED) \
			CROSSCC=$(CROSSCC64_QUOTED) \
			CROSSDEBUG=split-dwarf

# 32-bit configure
$(WINE_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(WINE_CONFIGURE_FILES32): $(MAKEFILE_DEP) | faudio32 jxrlib32 gst_base32 $(WINE_OBJ32)
	cd $(dir $@) && \
		../$(WINE)/configure \
			--without-curses \
			--disable-tests \
			--prefix=$(abspath $(WINE_DST32)) \
			LD_LIBRARY_PATH=$(abspath $(TOOLS_DIR32))/lib \
			STRIP=$(STRIP_QUOTED) \
			CFLAGS="-I$(abspath $(TOOLS_DIR32))/include -g $(COMMON_FLAGS)" \
			CROSSCFLAGS="-g $(COMMON_FLAGS)" \
			LDFLAGS=-L$(abspath $(TOOLS_DIR32))/lib \
			PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
			JXRLIB_CFLAGS=-I$(abspath $(TOOLS_DIR32))/include/jxrlib \
			CC=$(CC_QUOTED) \
			CROSSCC=$(CROSSCC32_QUOTED) \
			PKG_CONFIG="$(PKG_CONFIG32)" \
			CROSSDEBUG=split-dwarf

## wine goals
WINE_TARGETS = wine wine_configure wine32 wine64 wine_configure32 wine_configure64

ALL_TARGETS += $(WINE_TARGETS)
GOAL_TARGETS += wine

.PHONY: $(WINE_TARGETS)

wine_configure: $(WINE_CONFIGURE_FILES32) $(WINE_CONFIGURE_FILES64)

wine_configure64: $(WINE_CONFIGURE_FILES64)

wine_configure32: $(WINE_CONFIGURE_FILES32)

wine: wine32 wine64

# WINE_OUT and WINE_BUILDTOOLS are outputs needed by other rules, though we don't explicitly track all state here --
# make all or make wine are needed to ensure all deps are up to date, this just ensures 'make dist' or 'make vrclient'
# will drag in wine if you've never built wine.
.INTERMEDIATE: wine64-intermediate wine32-intermediate

$(WINE_BUILDTOOLS64) $(WINE_OUT) wine64: wine64-intermediate

wine64-intermediate: SHELL = $(CONTAINER_SHELL64)
wine64-intermediate: $(WINE_CONFIGURE_FILES64)
	+$(MAKE) -C $(WINE_OBJ64) $(WINE_COMMON_MAKE_ARGS)
	+$(MAKE) -C $(WINE_OBJ64) $(WINE_COMMON_MAKE_ARGS) install-lib
	+$(MAKE) -C $(WINE_OBJ64) $(WINE64_MAKE_ARGS) install-lib install-dev
	if [ "$(UNSTRIPPED_BUILD)" == "" ]; then rm -rf $(DST_DIR)/lib64/wine/.debug; fi
	if [ "$(UNSTRIPPED_BUILD)" != "" ]; then make -C $(WINE_OBJ64) $(WINE64_MAKE_ARGS) install-cross-debug; cp -af $(TOOLS_DIR64)/lib64/wine/.debug $(DST_DIR)/lib64/wine/; fi
	rm -f $(DST_DIR)/bin/{msiexec,notepad,regedit,regsvr32,wineboot,winecfg,wineconsole,winedbg,winefile,winemine,winepath}
	rm -rf $(DST_DIR)/share/man/

## This installs 32-bit stuff manually, see
##   https://wiki.winehq.org/Packaging#WoW64_Workarounds
$(WINE_BUILDTOOLS32) wine32: wine32-intermediate

wine32-intermediate: SHELL = $(CONTAINER_SHELL32)
wine32-intermediate: $(WINE_CONFIGURE_FILES32)
	+$(MAKE) -C $(WINE_OBJ32) $(WINE_COMMON_MAKE_ARGS)
	+$(MAKE) -C $(WINE_OBJ32) $(WINE_COMMON_MAKE_ARGS) install-lib
	+$(MAKE) -C $(WINE_OBJ32) $(WINE32_MAKE_ARGS) install-lib install-dev
	mkdir -p $(DST_DIR)/{lib,bin}
	cp -af $(WINE_DST32)/lib $(DST_DIR)/
	cp -a $(WINE_DST32)/bin/wine $(DST_DIR)/bin/
	cp -a $(WINE_DST32)/bin/wine-preloader $(DST_DIR)/bin/
	if [ "$(UNSTRIPPED_BUILD)" == "" ]; then rm -rf $(DST_DIR)/lib/wine/.debug; fi
	if [ "$(UNSTRIPPED_BUILD)" != "" ]; then make -C $(WINE_OBJ32) $(WINE32_MAKE_ARGS) install-cross-debug; cp -af $(TOOLS_DIR32)/lib/wine/.debug $(DST_DIR)/lib/wine/; fi

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
$(VRCLIENT_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(VRCLIENT_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(VRCLIENT) $(VRCLIENT)/vrclient_x64 | $(VRCLIENT_OBJ64) $(WINEMAKER)
	cd $(VRCLIENT) && \
		$(WINEMAKER) --nosource-fix --nolower-include --nodlls --nomsvcrt \
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
$(VRCLIENT_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(VRCLIENT_CONFIGURE_FILES32): $(MAKEFILE_DEP) $(VRCLIENT32) | $(VRCLIENT_OBJ32) $(WINEMAKER)
	$(WINEMAKER) --nosource-fix --nolower-include --nodlls --nomsvcrt \
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

vrclient64: SHELL = $(CONTAINER_SHELL64)
vrclient64: $(VRCLIENT_CONFIGURE_FILES64) | $(WINE_BUILDTOOLS64) $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	+env CXXFLAGS="-Wno-attributes -std=c++0x $(COMMON_FLAGS) -g" CFLAGS="$(COMMON_FLAGS) -g" PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
		$(MAKE) -C $(VRCLIENT_OBJ64)
	cd $(VRCLIENT_OBJ64) && \
		PATH=$(abspath $(TOOLS_DIR64))/bin:$(PATH) \
			winebuild --dll --fake-module -E ../$(VRCLIENT)/vrclient_x64/vrclient_x64.spec -o vrclient_x64.dll.fake && \
		[ x"$(STRIP)" = x ] || $(STRIP) ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.so && \
		mkdir -pv ../$(DST_DIR)/lib64/wine/fakedlls && \
		cp -af ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.so ../$(DST_DIR)/lib64/wine/ && \
		cp -af ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.fake ../$(DST_DIR)/lib64/wine/fakedlls/vrclient_x64.dll

vrclient32: SHELL = $(CONTAINER_SHELL32)
vrclient32: $(VRCLIENT_CONFIGURE_FILES32) | $(WINE_BUILDTOOLS32) $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	+env LDFLAGS="-m32" CXXFLAGS="-m32 -Wno-attributes -std=c++0x $(COMMON_FLAGS) -g" CFLAGS="-m32 $(COMMON_FLAGS) -g" PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
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

## Create & configure object directory for dxvk

ifneq ($(NO_DXVK),1) # May be disabled by configure

DXVK_CONFIGURE_FILES32 := $(DXVK_OBJ32)/build.ninja
DXVK_CONFIGURE_FILES64 := $(DXVK_OBJ64)/build.ninja

# 64bit-configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(DXVK_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(DXVK)/build-win64.txt wineopenxr64 | $(DXVK_OBJ64)
	if [ -e "$(abspath $(DXVK_OBJ64))"/build.ninja ]; then \
		rm -f "$(abspath $(DXVK_OBJ64))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(DXVK))" && \
	PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" \
		meson --prefix="$(abspath $(DXVK_OBJ64))" --cross-file "$(abspath $(DXVK))/build-win64.txt" $(MESON_STRIP_ARG) --buildtype=release "$(abspath $(DXVK_OBJ64))"

# 32-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(DXVK_CONFIGURE_FILES32): $(MAKEFILE_DEP) $(DXVK)/build-win32.txt | $(DXVK_OBJ32)
	if [ -e "$(abspath $(DXVK_OBJ32))"/build.ninja ]; then \
		rm -f "$(abspath $(DXVK_OBJ32))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(DXVK))" && \
	PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" \
		meson --prefix="$(abspath $(DXVK_OBJ32))" --cross-file "$(abspath $(DXVK))/build-win32.txt" $(MESON_STRIP_ARG) --buildtype=release "$(abspath $(DXVK_OBJ32))"

## dxvk goals
DXVK_TARGETS = dxvk dxvk_configure dxvk32 dxvk64 dxvk_configure32 dxvk_configure64

ALL_TARGETS += $(DXVK_TARGETS)
GOAL_TARGETS_LIBS += dxvk

.PHONY: $(DXVK_TARGETS)

dxvk_configure: $(DXVK_CONFIGURE_FILES32) $(DXVK_CONFIGURE_FILES64)

dxvk_configure64: $(DXVK_CONFIGURE_FILES64)

dxvk_configure32: $(DXVK_CONFIGURE_FILES32)

dxvk: dxvk32 dxvk64

dxvk64: $(DXVK_CONFIGURE_FILES64)
	env PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" ninja -C "$(DXVK_OBJ64)" install
	mkdir -p "$(DST_DIR)/lib64/wine/dxvk"
	cp -f "$(DXVK_OBJ64)"/bin/dxgi.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/d3d11.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/d3d10.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/d3d10_1.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/d3d10core.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/d3d9.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp -f "$(DXVK_OBJ64)"/bin/dxvk_config.dll "$(DST_DIR)"/lib64/wine/dxvk
	rm -f "$(DST_DIR)"/lib64/wine/dxvk/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- dxvk ) > "$(DST_DIR)"/lib64/wine/dxvk/version; fi


dxvk32: $(DXVK_CONFIGURE_FILES32)
	env PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" ninja -C "$(DXVK_OBJ32)" install
	mkdir -p "$(DST_DIR)"/lib/wine/dxvk
	cp -f "$(DXVK_OBJ32)"/bin/dxgi.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/d3d11.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/d3d10.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/d3d10_1.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/d3d10core.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/d3d9.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp -f "$(DXVK_OBJ32)"/bin/dxvk_config.dll "$(DST_DIR)"/lib/wine/dxvk
	rm -f "$(DST_DIR)"/lib/wine/dxvk/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- dxvk ) > "$(DST_DIR)"/lib/wine/dxvk/version; fi

endif # NO_DXVK

# VKD3D

VKD3D_CONFIGURE_FILES32 := $(VKD3D_OBJ32)/build.ninja
VKD3D_CONFIGURE_FILES64 := $(VKD3D_OBJ64)/build.ninja

$(VKD3D_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(VKD3D_CONFIGURE_FILES32): $(VKD3D)/meson.build $(VKD3D)/build-win32.txt | $(VKD3D_OBJ32)
	cd $(abspath $(VKD3D_OBJ32)) && \
		PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" \
			meson --prefix="$(abspath $(VKD3D_OBJ32))" \
				--cross-file "$(abspath $(VKD3D))/build-win32.txt" \
				$(MESON_STRIP_ARG) \
				--buildtype=release -Denable_standalone_d3d12=true \
				"$(abspath $(VKD3D))"

vkd3d32: SHELL = $(CONTAINER_SHELL32)
vkd3d32: $(VKD3D_CONFIGURE_FILES32)
	ninja -C "$(VKD3D_OBJ32)" install
	mkdir -p "$(DST_DIR)"/lib/wine/vkd3d-proton
	cp -af "$(VKD3D_OBJ32)/bin/d3d12.dll" "$(DST_DIR)"/lib/wine/vkd3d-proton/
	rm -f "$(DST_DIR)"/lib/wine/vkd3d-proton/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- vkd3d-proton ) > "$(DST_DIR)"/lib/wine/vkd3d-proton/version; fi

$(VKD3D_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(VKD3D_CONFIGURE_FILES64): $(VKD3D)/meson.build $(VKD3D)/build-win64.txt | $(VKD3D_OBJ64)
	cd $(abspath $(VKD3D_OBJ64)) && \
		PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" \
			meson --prefix="$(abspath $(VKD3D_OBJ64))" \
				--cross-file "$(abspath $(VKD3D))/build-win64.txt" \
				$(MESON_STRIP_ARG) \
				--buildtype=release -Denable_standalone_d3d12=true \
				"$(abspath $(VKD3D))"

vkd3d64: SHELL = $(CONTAINER_SHELL64)
vkd3d64: $(VKD3D_CONFIGURE_FILES64)
	ninja -C "$(VKD3D_OBJ64)" install
	mkdir -p "$(DST_DIR)"/lib64/wine/vkd3d-proton
	cp -af "$(VKD3D_OBJ64)/bin/d3d12.dll" "$(DST_DIR)"/lib64/wine/vkd3d-proton/
	rm -f "$(DST_DIR)"/lib64/wine/vkd3d-proton/version && if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- vkd3d-proton ) > "$(DST_DIR)"/lib64/wine/vkd3d-proton/version; fi

vkd3d: vkd3d-proton

vkd3d-proton: vkd3d32 vkd3d64

# TODO Tests
#  build_vrclient64_tests
#  build_vrclient32_tests

mediaconv32: SHELL = $(CONTAINER_SHELL32)
mediaconv32: $(MAKEFILE_DEP) gstreamer32 | $(MEDIACONV_OBJ32)
	cd $(abspath $(MEDIACONV)) && \
		PKG_CONFIG_ALLOW_CROSS=1 \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
		cargo build --target i686-unknown-linux-gnu --target-dir $(abspath $(MEDIACONV_OBJ32)) $(CARGO_BUILD_ARG)
	cp -a $(abspath $(MEDIACONV_OBJ32))/i686-unknown-linux-gnu/release/libprotonmediaconverter.so $(abspath $(DST_DIR))/lib/gstreamer-1.0/

mediaconv64: SHELL = $(CONTAINER_SHELL64)
mediaconv64: $(MAKEFILE_DEP) gstreamer64 | $(MEDIACONV_OBJ64)
	cd $(abspath $(MEDIACONV)) && \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
		cargo build --target x86_64-unknown-linux-gnu --target-dir $(abspath $(MEDIACONV_OBJ64)) $(CARGO_BUILD_ARG)
	cp -a $(abspath $(MEDIACONV_OBJ64))/x86_64-unknown-linux-gnu/release/libprotonmediaconverter.so $(abspath $(DST_DIR))/lib64/gstreamer-1.0/

mediaconv: mediaconv32 mediaconv64

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

endif # End of NESTED_MAKE from beginning
