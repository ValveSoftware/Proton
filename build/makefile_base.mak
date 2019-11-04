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
#   WITH_FFMPEG     - 1 if including ffmpeg steps
#   STEAMRT64_MODE  - 'docker' or '' for automatic Steam Runtime container
#   STEAMRT64_IMAGE - Name of the image if mode is set
#   STEAMRT32_MODE  - Same as above for 32-bit container (can be different type)
#   STEAMRT32_IMAGE - Same as above for 32-bit container
#   STEAMRT_PATH    - Path to built runtime which contains run.sh

ifeq ($(SRCDIR),)
	foo := $(error SRCDIR not set, do not include makefile_base directly, run ./configure.sh to generate Makefile)
endif

# If CC is coming from make's defaults or nowhere, use our own default.  Otherwise respect environment.
ifneq ($(filter default undefined,$(origin CC)),)
#	CC = ccache gcc
	CC = gcc
endif
ifneq ($(filter default undefined,$(origin CXX)),)
#	CXX = ccache g++
	CXX = g++
endif

export CC
export CXX

cc-option = $(shell if test -z "`echo 'void*p=1;' | \
              $(1) $(2) -S -o /dev/null -xc - 2>&1 | grep -- $(2) -`"; \
              then echo "$(2)"; else echo "$(3)"; fi ;)

# Selected container mode shell
DOCKER_SHELL_BASE = docker run --rm --init --privileged --cap-add=SYS_ADMIN --security-opt apparmor:unconfined \
                                    -v $(HOME):$(HOME) -v /tmp:/tmp \
                                    -v /etc/passwd:/etc/passwd:ro -v /etc/group:/etc/group:ro  -v /etc/shadow:/etc/shadow:ro \
                                    -w $(CURDIR) -e HOME=$(HOME) -e PATH=$(PATH) -u $(shell id -u):$(shell id -g) -h $(shell hostname) \
                                    $(DOCKER_OPTS) \
                                    $(SELECT_DOCKER_IMAGE) /sbin/docker-init -sg -- /bin/bash

# If STEAMRT64_MODE/STEAMRT32_MODE is set, set the nested SELECT_DOCKER_IMAGE to the _IMAGE variable and eval
# DOCKER_SHELL_BASE with it to create the CONTAINER_SHELL setting.
ifeq ($(STEAMRT64_MODE),docker)
	SELECT_DOCKER_IMAGE := $(STEAMRT64_IMAGE)
	CONTAINER_SHELL64 := $(DOCKER_SHELL_BASE)
else ifneq ($(STEAMRT64_MODE),)
	foo := $(error Unrecognized STEAMRT64_MODE $(STEAMRT64_MODE))
endif
ifeq ($(STEAMRT32_MODE),docker)
	SELECT_DOCKER_IMAGE := $(STEAMRT32_IMAGE)
	CONTAINER_SHELL32 := $(DOCKER_SHELL_BASE)
else ifneq ($(STEAMRT32_MODE),)
	foo := $(error Unrecognized STEAMRT32_MODE $(STEAMRT32_MODE))
endif

ifneq ($(STEAMRT_PATH),)
	STEAM_RUNTIME_RUNSH := $(STEAMRT_PATH)/run.sh
else
	STEAM_RUNTIME_RUNSH :=
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
    VKD3D_INSTALL_TARGET := install
else
    STRIP := strip
    INSTALL_PROGRAM_FLAGS := -s
    MESON_STRIP_ARG := --strip
    VKD3D_INSTALL_TARGET := install-strip
endif
WINE32_AUTOCONF :=
WINE64_AUTOCONF :=

OPTIMIZE_FLAGS := -O2 -march=nocona $(call cc-option,$(CC),-mtune=core-avx2,) -mfpmath=sse
SANITY_FLAGS   := -fwrapv -fno-strict-aliasing
COMMON_FLAGS   := $(OPTIMIZE_FLAGS) $(SANITY_FLAGS)

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

##
## Target configs
##

COMPAT_MANIFEST_TEMPLATE := $(SRCDIR)/compatibilitytool.vdf.template
LICENSE := $(SRCDIR)/dist.LICENSE

GECKO_VER := 2.47
GECKO32_MSI := wine_gecko-$(GECKO_VER)-x86.msi
GECKO64_MSI := wine_gecko-$(GECKO_VER)-x86_64.msi

WINEMONO_VER := 4.9.4
WINEMONO_TARBALL := wine-mono-bin-$(WINEMONO_VER).tar.gz

FFMPEG := $(SRCDIR)/ffmpeg
FFMPEG_OBJ32 := ./obj-ffmpeg32
FFMPEG_OBJ64 := ./obj-ffmpeg64
FFMPEG_CROSS_CFLAGS :=
FFMPEG_CROSS_LDFLAGS :=

FAUDIO := $(SRCDIR)/FAudio
FAUDIO_OBJ32 := ./obj-faudio32
FAUDIO_OBJ64 := ./obj-faudio64

LSTEAMCLIENT := $(SRCDIR)/lsteamclient
LSTEAMCLIENT32 := ./syn-lsteamclient32/lsteamclient
LSTEAMCLIENT64 := ./syn-lsteamclient64/lsteamclient
LSTEAMCLIENT_OBJ32 := ./obj-lsteamclient32
LSTEAMCLIENT_OBJ64 := ./obj-lsteamclient64

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

WINEWIDL_OBJ32 := ./obj-widl32
WINEWIDL_OBJ64 := ./obj-widl64
WINEWIDL32 := $(WINEWIDL_OBJ32)/tools/widl/widl
WINEWIDL64 := $(WINEWIDL_OBJ64)/tools/widl/widl

VRCLIENT := $(SRCDIR)/vrclient_x64
VRCLIENT32 := ./syn-vrclient32
VRCLIENT_OBJ64 := ./obj-vrclient64
VRCLIENT_OBJ32 := ./obj-vrclient32

DXVK := $(SRCDIR)/dxvk
DXVK_OBJ32 := ./obj-dxvk32
DXVK_OBJ64 := ./obj-dxvk64

D9VK := $(SRCDIR)/d9vk
D9VK_OBJ32 := ./obj-d9vk32
D9VK_OBJ64 := ./obj-d9vk64

VULKAN_HEADERS := $(SRCDIR)/Vulkan-Headers
VULKAN_H_OBJ32 := ./obj-vulkan-headers32
VULKAN_H_OBJ64 := ./obj-vulkan-headers64
VULKAN_H32 := $(TOOLS_DIR32)/include/vulkan/vulkan.h
VULKAN_H64 := $(TOOLS_DIR64)/include/vulkan/vulkan.h

SPIRV_HEADERS := $(SRCDIR)/SPIRV-Headers
SPIRV_H_OBJ32 := ./obj-spirv-headers32
SPIRV_H_OBJ64 := ./obj-spirv-headers64
SPIRV_H32 := $(TOOLS_DIR32)/include/spirv/spirv.h
SPIRV_H64 := $(TOOLS_DIR64)/include/spirv/spirv.h

VKD3D := $(SRCDIR)/vkd3d
VKD3D_OBJ32 := ./obj-vkd3d32
VKD3D_OBJ64 := ./obj-vkd3d64

CMAKE := $(SRCDIR)/cmake
CMAKE_OBJ32 := ./obj-cmake32
CMAKE_OBJ64 := ./obj-cmake64
CMAKE_BIN32 := $(CMAKE_OBJ32)/built/bin/cmake
CMAKE_BIN64 := $(CMAKE_OBJ64)/built/bin/cmake

BISON_VER = 3.3.2
BISON_TARBALL := bison-$(BISON_VER).tar.xz
BISON := $(SRCDIR)/contrib/bison-$(BISON_VER)
BISON_OBJ32 := ./obj-bison32
BISON_OBJ64 := ./obj-bison64
BISON_BIN32 := $(BISON_OBJ32)/built/bin/bison
BISON_BIN64 := $(BISON_OBJ64)/built/bin/bison


FONTS := $(SRCDIR)/fonts
FONTS_OBJ := ./obj-fonts

## Object directories
OBJ_DIRS := $(TOOLS_DIR32)        $(TOOLS_DIR64)        \
            $(FFMPEG_OBJ32)       $(FFMPEG_OBJ64)       \
            $(FAUDIO_OBJ32)       $(FAUDIO_OBJ64)       \
            $(LSTEAMCLIENT_OBJ32) $(LSTEAMCLIENT_OBJ64) \
            $(STEAMEXE_OBJ)                             \
            $(WINE_OBJ32)         $(WINE_OBJ64)         \
            $(VRCLIENT_OBJ32)     $(VRCLIENT_OBJ64)     \
            $(DXVK_OBJ32)         $(DXVK_OBJ64)         \
            $(D9VK_OBJ32)         $(D9VK_OBJ64)         \
            $(BISON_OBJ32)        $(BISON_OBJ64)        \
            $(VULKAN_H_OBJ32)     $(VULKAN_H_OBJ64)     \
            $(SPIRV_H_OBJ32)      $(SPIRV_H_OBJ64)      \
            $(WINEWIDL_OBJ32)     $(WINEWIDL_OBJ64)     \
            $(VKD3D_OBJ32)        $(VKD3D_OBJ64)        \
            $(CMAKE_OBJ32)        $(CMAKE_OBJ64)

$(OBJ_DIRS):
	mkdir -p $@


## downloads -- Convenience target to download packages used during the build
## process. Places them in subdirs one up from the Proton source dir, so
## they won't be wiped during git-clean, vagrant rsync, etc.

.PHONY: downloads

BISON_TARBALL_URL := https://ftpmirror.gnu.org/bison/$(BISON_TARBALL)
GECKO64_MSI_URL := https://dl.winehq.org/wine/wine-gecko/$(GECKO_VER)/$(GECKO64_MSI)
GECKO32_MSI_URL := https://dl.winehq.org/wine/wine-gecko/$(GECKO_VER)/$(GECKO32_MSI)
MONO_TARBALL_URL := https://github.com/madewokherd/wine-mono/releases/download/wine-mono-$(WINEMONO_VER)/$(WINEMONO_TARBALL)

SHARED_BISON_TARBALL := $(SRCDIR)/../bison/$(BISON_TARBALL)
SHARED_GECKO64_MSI := $(SRCDIR)/../gecko/$(GECKO64_MSI)
SHARED_GECKO32_MSI := $(SRCDIR)/../gecko/$(GECKO32_MSI)
SHARED_MONO_TARBALL := $(SRCDIR)/../mono/$(WINEMONO_TARBALL)

$(SHARED_BISON_TARBALL):
	mkdir -p $(dir $@)
	wget -O "$@" "$(BISON_TARBALL_URL)"

$(SHARED_GECKO64_MSI):
	mkdir -p $(dir $@)
	wget -O "$@" "$(GECKO64_MSI_URL)"

$(SHARED_GECKO32_MSI):
	mkdir -p $(dir $@)
	wget -O "$@" "$(GECKO32_MSI_URL)"

$(SHARED_MONO_TARBALL):
	mkdir -p $(dir $@)
	wget -O "$@" "$(MONO_TARBALL_URL)"

downloads: $(SHARED_BISON_TARBALL) $(SHARED_GECKO64_MSI) $(SHARED_GECKO32_MSI) $(SHARED_MONO_TARBALL)

##
## dist/install -- steps to finalize the install
##

$(DST_DIR):
	mkdir -p $@

STEAM_DIR := $(HOME)/.steam/root

TOOLMANIFEST_TARGET := $(addprefix $(DST_BASE)/,toolmanifest.vdf)
$(TOOLMANIFEST_TARGET): $(addprefix $(SRCDIR)/,toolmanifest.vdf)

FILELOCK_TARGET := $(addprefix $(DST_BASE)/,filelock.py)
$(FILELOCK_TARGET): $(addprefix $(SRCDIR)/,filelock.py)

PROTON_PY_TARGET := $(addprefix $(DST_BASE)/,proton)
$(PROTON_PY_TARGET): $(addprefix $(SRCDIR)/,proton)

PROTON37_TRACKED_FILES_TARGET := $(addprefix $(DST_BASE)/,proton_3.7_tracked_files)
$(PROTON37_TRACKED_FILES_TARGET): $(addprefix $(SRCDIR)/,proton_3.7_tracked_files)

USER_SETTINGS_PY_TARGET := $(addprefix $(DST_BASE)/,user_settings.sample.py)
$(USER_SETTINGS_PY_TARGET): $(addprefix $(SRCDIR)/,user_settings.sample.py)

DIST_COPY_TARGETS := $(TOOLMANIFEST_TARGET) $(FILELOCK_TARGET) $(PROTON_PY_TARGET) \
                     $(PROTON37_TRACKED_FILES_TARGET) $(USER_SETTINGS_PY_TARGET)

DIST_VERSION := $(DST_DIR)/version
DIST_OVR32 := $(DST_DIR)/lib/wine/dxvk/openvr_api_dxvk.dll
DIST_OVR64 := $(DST_DIR)/lib64/wine/dxvk/openvr_api_dxvk.dll
DIST_PREFIX := $(DST_DIR)/share/default_pfx/
DIST_COMPAT_MANIFEST := $(DST_BASE)/compatibilitytool.vdf
DIST_LICENSE := $(DST_BASE)/LICENSE
DIST_GECKO_DIR := $(DST_DIR)/share/wine/gecko
DIST_GECKO32 := $(DIST_GECKO_DIR)/$(GECKO32_MSI)
DIST_GECKO64 := $(DIST_GECKO_DIR)/$(GECKO64_MSI)
DIST_WINEMONO_DIR := $(DST_DIR)/share/wine/mono
DIST_WINEMONO := $(DIST_WINEMONO_DIR)/wine-mono-$(WINEMONO_VER)
DIST_FONTS := $(DST_DIR)/share/fonts

DIST_TARGETS := $(DIST_COPY_TARGETS) $(DIST_OVR32) $(DIST_OVR64) \
                $(DIST_GECKO32) $(DIST_GECKO64) $(DIST_WINEMONO) \
                $(DIST_COMPAT_MANIFEST) $(DIST_LICENSE) $(DIST_FONTS)

DEPLOY_COPY_TARGETS := $(DIST_COPY_TARGETS) $(DIST_VERSION) $(DIST_LICENSE)
REDIST_COPY_TARGETS := $(DEPLOY_COPY_TARGETS) $(DIST_COMPAT_MANIFEST)

$(DIST_LICENSE): $(LICENSE)
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
	if [ -e "$(SRCDIR)/../gecko/$(GECKO64_MSI)" ]; then \
		cp "$(SRCDIR)/../gecko/$(GECKO64_MSI)" "$@"; \
	else \
		mkdir -p $(SRCDIR)/contrib/; \
		if [ ! -e "$(SRCDIR)/contrib/$(GECKO64_MSI)" ]; then \
			echo ">>>> Downloading wine-gecko. To avoid this in future, put it here: $(SRCDIR)/../gecko/$(GECKO64_MSI)"; \
			wget -O "$(SRCDIR)/contrib/$(GECKO64_MSI)" "$(GECKO64_MSI_URL)"; \
		fi; \
		cp "$(SRCDIR)/contrib/$(GECKO64_MSI)" "$@"; \
	fi

$(DIST_GECKO32): | $(DIST_GECKO_DIR)
	if [ -e "$(SRCDIR)/../gecko/$(GECKO32_MSI)" ]; then \
		cp "$(SRCDIR)/../gecko/$(GECKO32_MSI)" "$@"; \
	else \
		mkdir -p $(SRCDIR)/contrib/; \
		if [ ! -e "$(SRCDIR)/contrib/$(GECKO32_MSI)" ]; then \
			echo ">>>> Downloading wine-gecko. To avoid this in future, put it here: $(SRCDIR)/../gecko/$(GECKO32_MSI)"; \
			wget -O "$(SRCDIR)/contrib/$(GECKO32_MSI)" "$(GECKO32_MSI_URL)"; \
		fi; \
		cp "$(SRCDIR)/contrib/$(GECKO32_MSI)" "$@"; \
	fi

$(DIST_WINEMONO_DIR):
	mkdir -p $@

$(DIST_WINEMONO): | $(DIST_WINEMONO_DIR)
	if [ -e "$(SRCDIR)/../mono/$(WINEMONO_TARBALL)" ]; then \
		tar -xf "$(SRCDIR)/../mono/$(WINEMONO_TARBALL)" -C "$(dir $@)"; \
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

dist: $(DIST_TARGETS) wine vrclient lsteamclient steam dxvk d9vk | $(DST_DIR)
	echo `date '+%s'` `GIT_DIR=$(abspath $(SRCDIR)/.git) git describe --tags` > $(DIST_VERSION)
	cp $(DIST_VERSION) $(DST_BASE)/
	rm -rf $(abspath $(DIST_PREFIX)) && \
	WINEPREFIX=$(abspath $(DIST_PREFIX)) $(STEAM_RUNTIME_RUNSH) $(WINE_OUT_BIN) wineboot && \
		WINEPREFIX=$(abspath $(DIST_PREFIX)) $(STEAM_RUNTIME_RUNSH) $(WINE_OUT_SERVER) -w && \
		ln -s $(FONTLINKPATH)/LiberationSans-Regular.ttf $(abspath $(DIST_PREFIX))/drive_c/windows/Fonts/arial.ttf && \
		ln -s $(FONTLINKPATH)/LiberationSans-Bold.ttf $(abspath $(DIST_PREFIX))/drive_c/windows/Fonts/arialbd.ttf && \
		ln -s $(FONTLINKPATH)/LiberationSerif-Regular.ttf $(abspath $(DIST_PREFIX))/drive_c/windows/Fonts/times.ttf && \
		ln -s $(FONTLINKPATH)/LiberationMono-Regular.ttf $(abspath $(DIST_PREFIX))/drive_c/windows/Fonts/cour.ttf && \
		ln -s $(FONTLINKPATH)/SourceHanSansSCRegular.otf $(abspath $(DIST_PREFIX))/drive_c/windows/Fonts/msyh.ttf
#The use of "arial" here is for compatibility with programs that require that exact string. These links do not point to Arial.
#The use of "times" here is for compatibility with programs that require that exact string. This link does not point to Times New Roman.
#The use of "cour" here is for compatibility with programs that require that exact string. This link does not point to Courier New.
#The use of "msyh" here is for compatibility with programs that require that exact string. This link does not point to Microsoft YaHei.

deploy: dist | $(filter-out dist deploy install redist,$(MAKECMDGOALS))
	mkdir -p $(DEPLOY_DIR) && \
	cp -a $(DEPLOY_COPY_TARGETS) $(DEPLOY_DIR) && \
	tar -C $(DST_DIR) -c . > $(DEPLOY_DIR)/proton_dist.tar
	@echo "Created deployment archive at "$(DEPLOY_DIR)"/proton_dist.tar"

install: dist | $(filter-out dist deploy install redist,$(MAKECMDGOALS))
	if [ ! -d $(STEAM_DIR) ]; then echo >&2 "!! "$(STEAM_DIR)" does not exist, cannot install"; return 1; fi
	mkdir -p $(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	cp -r $(DST_BASE)/* $(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
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
	cd $(WINE_OBJ32)/dlls/$(module) && make

module64: SHELL = $(CONTAINER_SHELL64)
module64:
	cd $(WINE_OBJ64)/dlls/$(module) && make

module: module32 module64

##
## ffmpeg
##

ifeq ($(WITH_FFMPEG),1)

FFMPEG_CONFIGURE_FILES32 := $(FFMPEG_OBJ32)/Makefile
FFMPEG_CONFIGURE_FILES64 := $(FFMPEG_OBJ64)/Makefile

# 64bit-configure
$(FFMPEG_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(FFMPEG_CONFIGURE_FILES64): $(FFMPEG)/configure $(MAKEFILE_DEP) | $(FFMPEG_OBJ64)
	cd $(dir $@) && \
		$(abspath $(FFMPEG))/configure \
			--cc=$(CC_QUOTED) --cxx=$(CXX_QUOTED) \
			--prefix=$(abspath $(TOOLS_DIR64)) \
			--disable-static \
			--enable-shared \
			--disable-programs \
			--disable-doc \
			--disable-avdevice \
			--disable-avformat \
			--disable-swresample \
			--disable-swscale \
			--disable-postproc \
			--disable-avfilter \
			--disable-alsa \
			--disable-iconv \
			--disable-libxcb_shape \
			--disable-libxcb_shm \
			--disable-libxcb_xfixes \
			--disable-sdl2 \
			--disable-xlib \
			--disable-zlib \
			--disable-bzlib \
			--disable-libxcb \
			--disable-vaapi \
			--disable-vdpau \
			--disable-everything \
			--enable-decoder=wmav2 \
			--enable-decoder=adpcm_ms && \
		[ ! -f ./Makefile ] || touch ./Makefile
# ^ ffmpeg's configure script doesn't update the timestamp on this guy in the case of a no-op

# 32-bit configure
$(FFMPEG_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(FFMPEG_CONFIGURE_FILES32): $(FFMPEG)/configure $(MAKEFILE_DEP) | $(FFMPEG_OBJ32)
	cd $(dir $@) && \
		$(abspath $(FFMPEG))/configure \
			--cc=$(CC_QUOTED) --cxx=$(CXX_QUOTED) \
			--prefix=$(abspath $(TOOLS_DIR32)) \
			--extra-cflags=$(FFMPEG_CROSS_CFLAGS) --extra-ldflags=$(FFMPEG_CROSS_LDFLAGS) \
			--disable-static \
			--enable-shared \
			--disable-programs \
			--disable-doc \
			--disable-avdevice \
			--disable-avformat \
			--disable-swresample \
			--disable-swscale \
			--disable-postproc \
			--disable-avfilter \
			--disable-alsa \
			--disable-iconv \
			--disable-libxcb_shape \
			--disable-libxcb_shm \
			--disable-libxcb_xfixes \
			--disable-sdl2 \
			--disable-xlib \
			--disable-zlib \
			--disable-bzlib \
			--disable-libxcb \
			--disable-vaapi \
			--disable-vdpau \
			--disable-everything \
			--enable-decoder=wmav2 \
			--enable-decoder=adpcm_ms && \
		[ ! -f ./Makefile ] || touch ./Makefile
# ^ ffmpeg's configure script doesn't update the timestamp on this guy in the case of a no-op

## ffmpeg goals
FFMPEG_TARGETS = ffmpeg ffmpeg_configure ffmpeg32 ffmpeg64 ffmpeg_configure32 ffmpeg_configure64

ALL_TARGETS += $(FFMPEG_TARGETS)
GOAL_TARGETS_LIBS += ffmpeg

.PHONY: $(FFMPEG_TARGETS)

ffmpeg_configure: $(FFMPEG_CONFIGURE_FILES32) $(FFMPEG_CONFIGURE_FILES64)

ffmpeg_configure64: $(FFMPEG_CONFIGURE_FILES64)

ffmpeg_configure32: $(FFMPEG_CONFIGURE_FILES32)

ffmpeg: ffmpeg32 ffmpeg64

ffmpeg64: SHELL = $(CONTAINER_SHELL64)
ffmpeg64: $(FFMPEG_CONFIGURE_FILES64)
	+$(MAKE) -C $(FFMPEG_OBJ64)
	+$(MAKE) -C $(FFMPEG_OBJ64) install
	mkdir -pv $(DST_DIR)/lib64
	cp -a $(TOOLS_DIR64)/lib/{libavcodec,libavutil}* $(DST_DIR)/lib64

ffmpeg32: SHELL = $(CONTAINER_SHELL32)
ffmpeg32: $(FFMPEG_CONFIGURE_FILES32)
	+$(MAKE) -C $(FFMPEG_OBJ32)
	+$(MAKE) -C $(FFMPEG_OBJ32) install
	mkdir -pv $(DST_DIR)/lib
	cp -a $(TOOLS_DIR32)/lib/{libavcodec,libavutil}* $(DST_DIR)/lib

endif # ifeq ($(WITH_FFMPEG),1)

##
## FAudio
##

FAUDIO_CMAKE_FLAGS = -DCMAKE_BUILD_TYPE=Release -DFORCE_ENABLE_DEBUGCONFIGURATION=ON -DLOG_ASSERTIONS=ON -DCMAKE_INSTALL_LIBDIR="lib" -DXNASONG=OFF
ifeq ($(WITH_FFMPEG),1)
FAUDIO_CMAKE_FLAGS += -DFFMPEG=ON
endif # ifeq ($(WITH_FFMPEG),1)

FAUDIO_TARGETS = faudio faudio32 faudio64

ALL_TARGETS += $(FAUDIO_TARGETS)
GOAL_TARGETS_LIBS += faudio

.PHONY: faudio faudio32 faudio64

faudio: faudio32 faudio64

FAUDIO_CONFIGURE_FILES32 := $(FAUDIO_OBJ32)/Makefile
FAUDIO_CONFIGURE_FILES64 := $(FAUDIO_OBJ64)/Makefile

$(FAUDIO_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(FAUDIO_CONFIGURE_FILES32): $(FAUDIO)/CMakeLists.txt $(MAKEFILE_DEP) $(CMAKE_BIN32) | $(FAUDIO_OBJ32)
	cd $(dir $@) && \
		../$(CMAKE_BIN32) $(abspath $(FAUDIO)) \
			-DCMAKE_INSTALL_PREFIX="$(abspath $(TOOLS_DIR32))" \
			$(FAUDIO_CMAKE_FLAGS) \
			-DCMAKE_C_FLAGS="-m32" -DCMAKE_CXX_FLAGS="-m32"

$(FAUDIO_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(FAUDIO_CONFIGURE_FILES64): $(FAUDIO)/CMakeLists.txt $(MAKEFILE_DEP) $(CMAKE_BIN64) | $(FAUDIO_OBJ64)
	cd $(dir $@) && \
		../$(CMAKE_BIN64) $(abspath $(FAUDIO)) \
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
			-L"../$(TOOLS_DIR64)"/lib64/ \
			-L"../$(TOOLS_DIR64)"/lib64/wine/ \
			--dll ../$(LSTEAMCLIENT64) && \
		cp ../$(LSTEAMCLIENT64)/Makefile . && \
		echo >> ./Makefile 'SRCDIR := ../$(LSTEAMCLIENT64)' && \
		echo >> ./Makefile 'vpath % $$(SRCDIR)' && \
		echo >> ./Makefile 'lsteamclient_dll_LDFLAGS := $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(lsteamclient_dll_LDFLAGS))'

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
			-L"../$(TOOLS_DIR32)"/lib/ \
			-L"../$(TOOLS_DIR32)"/lib/wine/ \
			--dll ../$(LSTEAMCLIENT32) && \
		cp ../$(LSTEAMCLIENT32)/Makefile . && \
		echo >> ./Makefile 'SRCDIR := ../$(LSTEAMCLIENT32)' && \
		echo >> ./Makefile 'vpath % $$(SRCDIR)' && \
		echo >> ./Makefile 'lsteamclient_dll_LDFLAGS := -m32 $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(lsteamclient_dll_LDFLAGS))'

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
	+env PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" CXXFLAGS="-Wno-attributes $(COMMON_FLAGS) -g" CFLAGS="$(COMMON_FLAGS) -g" \
		$(MAKE) -C $(LSTEAMCLIENT_OBJ64)
	[ x"$(STRIP)" = x ] || $(STRIP) $(LSTEAMCLIENT_OBJ64)/lsteamclient.dll.so
	mkdir -pv $(DST_DIR)/lib64/wine/
	cp -a $(LSTEAMCLIENT_OBJ64)/lsteamclient.dll.so $(DST_DIR)/lib64/wine/

lsteamclient32: SHELL = $(CONTAINER_SHELL32)
lsteamclient32: $(LSTEAMCLIENT_CONFIGURE_FILES32) | $(WINE_BUILDTOOLS32) $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	+env PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" LDFLAGS="-m32" CXXFLAGS="-m32 -Wno-attributes $(COMMON_FLAGS) -g" CFLAGS="-m32 $(COMMON_FLAGS) -g" \
		$(MAKE) -C $(LSTEAMCLIENT_OBJ32)
	[ x"$(STRIP)" = x ] || $(STRIP) $(LSTEAMCLIENT_OBJ32)/lsteamclient.dll.so
	mkdir -pv $(DST_DIR)/lib/wine/
	cp -a $(LSTEAMCLIENT_OBJ32)/lsteamclient.dll.so $(DST_DIR)/lib/wine/

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
			-I"../$(TOOLS_DIR32)"/include/wine/msvcrt/ \
			-I"../$(SRCDIR)"/lsteamclient/steamworks_sdk_142/ \
			-L"../$(TOOLS_DIR32)"/lib/ \
			-L"../$(TOOLS_DIR32)"/lib/wine/ \
			-L"../$(SRCDIR)"/steam_helper/ \
			--guiexe ../$(STEAMEXE_SYN) && \
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
	+env PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" LDFLAGS="-m32" CXXFLAGS="-m32 -Wno-attributes $(COMMON_FLAGS) -g" CFLAGS="-m32 $(COMMON_FLAGS) -g" \
		$(MAKE) -C $(STEAMEXE_OBJ)
	[ x"$(STRIP)" = x ] || $(STRIP) $(STEAMEXE_OBJ)/steam.exe.so
	mkdir -pv $(DST_DIR)/lib/wine/
	cp -a $(STEAMEXE_OBJ)/steam.exe.so $(DST_DIR)/lib/wine/
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
$(WINE_CONFIGURE_FILES64): $(MAKEFILE_DEP) | faudio64 vkd3d64 $(WINE_OBJ64) bison64
	cd $(dir $@) && \
		STRIP=$(STRIP_QUOTED) \
		PATH="$(dir $(abspath $(BISON_BIN64))):$(PATH)" \
		CFLAGS="-I$(abspath $(TOOLS_DIR64))/include -g $(COMMON_FLAGS)" \
		CXXFLAGS="-I$(abspath $(TOOLS_DIR64))/include -g $(COMMON_FLAGS) -fno-gnu-unique -std=c++17" \
		LDFLAGS=-L$(abspath $(TOOLS_DIR64))/lib \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
		CC=$(CC_QUOTED) \
		CXX=$(CXX_QUOTED) \
		../$(WINE)/configure \
			$(WINE64_AUTOCONF) \
			--without-curses \
			--enable-win64 --disable-tests --prefix=$(abspath $(DST_DIR))

# 32-bit configure
$(WINE_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(WINE_CONFIGURE_FILES32): $(MAKEFILE_DEP) | faudio32 vkd3d32 $(WINE_OBJ32) bison32
	cd $(dir $@) && \
		STRIP=$(STRIP_QUOTED) \
		PATH="$(dir $(abspath $(BISON_BIN32))):$(PATH)" \
		CFLAGS="-I$(abspath $(TOOLS_DIR32))/include -g $(COMMON_FLAGS)" \
		CXXFLAGS="-I$(abspath $(TOOLS_DIR32))/include -g $(COMMON_FLAGS) -fno-gnu-unique -std=c++17" \
		LDFLAGS=-L$(abspath $(TOOLS_DIR32))/lib \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
		CC=$(CC_QUOTED) \
		CXX=$(CXX_QUOTED) \
		../$(WINE)/configure \
			$(WINE32_AUTOCONF) \
			--without-curses \
			--disable-tests --prefix=$(abspath $(WINE_DST32))

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
	+PATH="$(dir $(abspath $(BISON_BIN64))):$(PATH)" $(MAKE) -C $(WINE_OBJ64) $(WINE_COMMON_MAKE_ARGS)
	+$(MAKE) -C $(WINE_OBJ64) $(WINE_COMMON_MAKE_ARGS) install-lib
	+$(MAKE) -C $(WINE_OBJ64) $(WINE64_MAKE_ARGS) install-lib install-dev
	if [ "$(UNSTRIPPED_BUILD)" == "" ]; then rm -rf $(DST_DIR)/lib64/wine/.debug; fi
	if [ "$(UNSTRIPPED_BUILD)" != "" ]; then make -C $(WINE_OBJ64) $(WINE64_MAKE_ARGS) install-cross-debug; cp -a $(TOOLS_DIR64)/lib64/wine/.debug $(DST_DIR)/lib64/wine/; fi
	rm -f $(DST_DIR)/bin/{msiexec,notepad,regedit,regsvr32,wineboot,winecfg,wineconsole,winedbg,winefile,winemine,winepath}
	rm -rf $(DST_DIR)/share/man/

## This installs 32-bit stuff manually, see
##   https://wiki.winehq.org/Packaging#WoW64_Workarounds
$(WINE_BUILDTOOLS32) wine32: wine32-intermediate

wine32-intermediate: SHELL = $(CONTAINER_SHELL32)
wine32-intermediate: $(WINE_CONFIGURE_FILES32)
	+PATH="$(dir $(abspath $(BISON_BIN32))):$(PATH)" $(MAKE) -C $(WINE_OBJ32) $(WINE_COMMON_MAKE_ARGS)
	+$(MAKE) -C $(WINE_OBJ32) $(WINE_COMMON_MAKE_ARGS) install-lib
	+$(MAKE) -C $(WINE_OBJ32) $(WINE32_MAKE_ARGS) install-lib install-dev
	mkdir -p $(DST_DIR)/{lib,bin}
	cp -a $(WINE_DST32)/lib $(DST_DIR)/
	cp -a $(WINE_DST32)/bin/wine $(DST_DIR)/bin/
	cp -a $(WINE_DST32)/bin/wine-preloader $(DST_DIR)/bin/
	if [ "$(UNSTRIPPED_BUILD)" == "" ]; then rm -rf $(DST_DIR)/lib/wine/.debug; fi
	if [ "$(UNSTRIPPED_BUILD)" != "" ]; then make -C $(WINE_OBJ32) $(WINE32_MAKE_ARGS) install-cross-debug; cp -a $(TOOLS_DIR32)/lib/wine/.debug $(DST_DIR)/lib/wine/; fi

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
		ln -sfv ../../$(VRCLIENT)/vrclient_x64/*.{c,cpp,dat,h,spec} .
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
		echo >> $(abspath $(dir $@))/Makefile 'vrclient_x64_dll_LDFLAGS := $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(vrclient_x64_dll_LDFLAGS))'

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
	echo >> $(dir $@)/Makefile 'vrclient_dll_LDFLAGS := -m32 $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(vrclient_dll_LDFLAGS))'


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
		cp -a ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.so ../$(DST_DIR)/lib64/wine/ && \
		cp -a ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.fake ../$(DST_DIR)/lib64/wine/fakedlls/vrclient_x64.dll

vrclient32: SHELL = $(CONTAINER_SHELL32)
vrclient32: $(VRCLIENT_CONFIGURE_FILES32) | $(WINE_BUILDTOOLS32) $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	+env LDFLAGS="-m32" CXXFLAGS="-m32 -Wno-attributes -std=c++0x $(COMMON_FLAGS) -g" CFLAGS="-m32 $(COMMON_FLAGS) -g" PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
		$(MAKE) -C $(VRCLIENT_OBJ32)
	cd $(VRCLIENT_OBJ32) && \
		PATH=$(abspath $(TOOLS_DIR32))/bin:$(PATH) \
			winebuild --dll --fake-module -E ../$(VRCLIENT32)/vrclient/vrclient.spec -o vrclient.dll.fake && \
		[ x"$(STRIP)" = x ] || $(STRIP) ../$(VRCLIENT_OBJ32)/vrclient.dll.so && \
		mkdir -pv ../$(DST_DIR)/lib/wine/fakedlls && \
		cp -a ../$(VRCLIENT_OBJ32)/vrclient.dll.so ../$(DST_DIR)/lib/wine/ && \
		cp -a ../$(VRCLIENT_OBJ32)/vrclient.dll.fake ../$(DST_DIR)/lib/wine/fakedlls/vrclient.dll

##
## cmake -- necessary for FAudio, not part of steam runtime
##

# TODO Don't bother with this in native mode

## Create & configure object directory for cmake

CMAKE_CONFIGURE_FILES32 := $(CMAKE_OBJ32)/Makefile
CMAKE_CONFIGURE_FILES64 := $(CMAKE_OBJ64)/Makefile

# 64-bit configure
$(CMAKE_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(CMAKE_CONFIGURE_FILES64): $(MAKEFILE_DEP) | $(CMAKE_OBJ64)
	cd "$(CMAKE_OBJ64)" && \
		../$(CMAKE)/configure --parallel=$(SUBMAKE_JOBS) --prefix=$(abspath $(CMAKE_OBJ64))/built

# 32-bit configure
$(CMAKE_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(CMAKE_CONFIGURE_FILES32): $(MAKEFILE_DEP) | $(CMAKE_OBJ32)
	cd "$(CMAKE_OBJ32)" && \
		../$(CMAKE)/configure --parallel=$(SUBMAKE_JOBS) --prefix=$(abspath $(CMAKE_OBJ32))/built


## cmake goals
CMAKE_TARGETS = cmake cmake_configure cmake32 cmake64 cmake_configure32 cmake_configure64

ALL_TARGETS += $(CMAKE_TARGETS)

.PHONY: $(CMAKE_TARGETS)

cmake_configure: $(CMAKE_CONFIGURE_FILES32) $(CMAKE_CONFIGURE_FILES64)

cmake_configure32: $(CMAKE_CONFIGURE_FILES32)

cmake_configure64: $(CMAKE_CONFIGURE_FILES64)

cmake: cmake32 cmake64

# These have multiple targets that come from one invocation.  The way to do that is to have both targets on a single
# intermediate.
.INTERMEDIATE: cmake64-intermediate cmake32-intermediate

$(CMAKE_BIN64) cmake64: cmake64-intermediate

cmake64-intermediate: SHELL = $(CONTAINER_SHELL64)
cmake64-intermediate: $(CMAKE_CONFIGURE_FILES64) $(filter $(MAKECMDGOALS),cmake64)
	+$(MAKE) -C $(CMAKE_OBJ64)
	+$(MAKE) -C $(CMAKE_OBJ64) install
	touch $(CMAKE_BIN64)

$(CMAKE_BIN32) cmake32: cmake32-intermediate

cmake32-intermediate: SHELL = $(CONTAINER_SHELL32)
cmake32-intermediate: $(CMAKE_CONFIGURE_FILES32) $(filter $(MAKECMDGOALS),cmake32)
	+$(MAKE) -C $(CMAKE_OBJ32)
	+$(MAKE) -C $(CMAKE_OBJ32) install
	touch $(CMAKE_BIN32)

##
## bison -- necessary for wine, steam runtime version too old
##

# TODO Don't bother with this in native mode

$(BISON):
	if [ -e "$(SRCDIR)/../bison/$(BISON_TARBALL)" ]; then \
		mkdir -p $(dir $@); \
		tar -xf "$(SRCDIR)/../bison/$(BISON_TARBALL)" -C "$(dir $@)"; \
	else \
		mkdir -p $(SRCDIR)/contrib/; \
		if [ ! -e "$(SRCDIR)/contrib/$(BISON_TARBALL)" ]; then \
			echo ">>>> Downloading bison. To avoid this in future, put it here: $(SRCDIR)/../bison/$(BISON_TARBALL)"; \
			wget -O "$(SRCDIR)/contrib/$(BISON_TARBALL)" "$(BISON_TARBALL_URL)"; \
		fi; \
		tar -xf "$(SRCDIR)/contrib/$(BISON_TARBALL)" -C "$(dir $@)"; \
	fi

BISON_CONFIGURE_FILES32 := $(BISON_OBJ32)/Makefile
BISON_CONFIGURE_FILES64 := $(BISON_OBJ64)/Makefile

# 64-bit configure
$(BISON_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(BISON_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(BISON) | $(BISON_OBJ64)
	cd "$(BISON_OBJ64)" && \
		LIBS='-lrt' ../$(BISON)/configure --prefix=$(abspath $(BISON_OBJ64))/built

# 32-bit configure
$(BISON_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(BISON_CONFIGURE_FILES32): $(MAKEFILE_DEP) $(BISON) | $(BISON_OBJ32)
	cd "$(BISON_OBJ32)" && \
		LIBS='-lrt' ../$(BISON)/configure --prefix=$(abspath $(BISON_OBJ32))/built


## bison goals
BISON_TARGETS = bison bison_configure bison32 bison64 bison_configure32 bison_configure64

ALL_TARGETS += $(BISON_TARGETS)

.PHONY: $(BISON_TARGETS)

bison_configure: $(BISON_CONFIGURE_FILES32) $(BISON_CONFIGURE_FILES64)

bison_configure32: $(BISON_CONFIGURE_FILES32)

bison_configure64: $(BISON_CONFIGURE_FILES64)

bison: bison32 bison64

# These have multiple targets that come from one invocation.  The way to do that is to have both targets on a single
# intermediate.
.INTERMEDIATE: bison64-intermediate bison32-intermediate

$(BISON_BIN64) bison64: bison64-intermediate

bison64-intermediate: SHELL = $(CONTAINER_SHELL64)
bison64-intermediate: $(BISON_CONFIGURE_FILES64) $(filter $(MAKECMDGOALS),bison64)
	+$(MAKE) -C $(BISON_OBJ64)
	+$(MAKE) -C $(BISON_OBJ64) install
	touch $(BISON_BIN64)

$(BISON_BIN32) bison32: bison32-intermediate

bison32-intermediate: SHELL = $(CONTAINER_SHELL32)
bison32-intermediate: $(BISON_CONFIGURE_FILES32) $(filter $(MAKECMDGOALS),bison32)
	+$(MAKE) -C $(BISON_OBJ32)
	+$(MAKE) -C $(BISON_OBJ32) install
	touch $(BISON_BIN32)

##
## dxvk
##

# TODO Builds outside container, could simplify a lot if it did not.

## Create & configure object directory for dxvk

ifneq ($(NO_DXVK),1) # May be disabled by configure

DXVK_CONFIGURE_FILES32 := $(DXVK_OBJ32)/build.ninja
DXVK_CONFIGURE_FILES64 := $(DXVK_OBJ64)/build.ninja

# 64bit-configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(DXVK_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(DXVK)/build-win64.txt | $(DXVK_OBJ64)
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
	cp "$(DXVK_OBJ64)"/bin/dxgi.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp "$(DXVK_OBJ64)"/bin/d3d11.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp "$(DXVK_OBJ64)"/bin/d3d10.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp "$(DXVK_OBJ64)"/bin/d3d10_1.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp "$(DXVK_OBJ64)"/bin/d3d10core.dll "$(DST_DIR)"/lib64/wine/dxvk
	if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- dxvk ) > "$(DST_DIR)"/lib64/wine/dxvk/version; fi


dxvk32: $(DXVK_CONFIGURE_FILES32)
	env PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" ninja -C "$(DXVK_OBJ32)" install
	mkdir -p "$(DST_DIR)"/lib/wine/dxvk
	cp "$(DXVK_OBJ32)"/bin/dxgi.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp "$(DXVK_OBJ32)"/bin/d3d11.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp "$(DXVK_OBJ32)"/bin/d3d10.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp "$(DXVK_OBJ32)"/bin/d3d10_1.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp "$(DXVK_OBJ32)"/bin/d3d10core.dll "$(DST_DIR)"/lib/wine/dxvk/
	if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- dxvk ) > "$(DST_DIR)"/lib/wine/dxvk/version; fi

D9VK_CONFIGURE_FILES32 := $(D9VK_OBJ32)/build.ninja
D9VK_CONFIGURE_FILES64 := $(D9VK_OBJ64)/build.ninja

# 64bit-configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(D9VK_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(D9VK)/build-win64.txt | $(D9VK_OBJ64)
	if [ -e "$(abspath $(D9VK_OBJ64))"/build.ninja ]; then \
		rm -f "$(abspath $(D9VK_OBJ64))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(D9VK))" && \
	PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" \
		meson --prefix="$(abspath $(D9VK_OBJ64))" --cross-file "$(abspath $(D9VK))/build-win64.txt" $(MESON_STRIP_ARG) --buildtype=release -Denable_dxgi=false -Denable_d3d10=false -Denable_d3d11=false "$(abspath $(D9VK_OBJ64))"

# 32-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
$(D9VK_CONFIGURE_FILES32): $(MAKEFILE_DEP) $(D9VK)/build-win32.txt | $(D9VK_OBJ32)
	if [ -e "$(abspath $(D9VK_OBJ32))"/build.ninja ]; then \
		rm -f "$(abspath $(D9VK_OBJ32))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(D9VK))" && \
	PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" \
		meson --prefix="$(abspath $(D9VK_OBJ32))" --cross-file "$(abspath $(D9VK))/build-win32.txt" $(MESON_STRIP_ARG) --buildtype=release -Denable_dxgi=false -Denable_d3d10=false -Denable_d3d11=false "$(abspath $(D9VK_OBJ32))"

## d9vk goals
D9VK_TARGETS = d9vk d9vk_configure d9vk32 d9vk64 d9vk_configure32 d9vk_configure64

ALL_TARGETS += $(D9VK_TARGETS)
GOAL_TARGETS_LIBS += d9vk

.PHONY: $(D9VK_TARGETS)

d9vk_configure: $(D9VK_CONFIGURE_FILES32) $(D9VK_CONFIGURE_FILES64)

d9vk_configure64: $(D9VK_CONFIGURE_FILES64)

d9vk_configure32: $(D9VK_CONFIGURE_FILES32)

d9vk: d9vk32 d9vk64

d9vk64: $(D9VK_CONFIGURE_FILES64)
	env PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" ninja -C "$(D9VK_OBJ64)" install
	mkdir -p "$(DST_DIR)/lib64/wine/dxvk"
	cp "$(D9VK_OBJ64)"/bin/d3d9.dll "$(DST_DIR)"/lib64/wine/dxvk
	if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- d9vk ) > "$(DST_DIR)"/lib64/wine/dxvk/d9vk_version; fi


d9vk32: $(D9VK_CONFIGURE_FILES32)
	env PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" ninja -C "$(D9VK_OBJ32)" install
	mkdir -p "$(DST_DIR)"/lib/wine/dxvk
	cp "$(D9VK_OBJ32)"/bin/d3d9.dll "$(DST_DIR)"/lib/wine/dxvk/
	if test -e $(SRCDIR)/.git; then ( cd $(SRCDIR) && git submodule status -- d9vk ) > "$(DST_DIR)"/lib/wine/dxvk/d9vk_version; fi

endif # NO_DXVK

# Vulkan-Headers

VULKAN_H_CONFIGURE_FILES32 := $(VULKAN_H_OBJ32)/Makefile
VULKAN_H_CONFIGURE_FILES64 := $(VULKAN_H_OBJ64)/Makefile

$(VULKAN_H_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(VULKAN_H_CONFIGURE_FILES32): $(MAKEFILE_DEP) $(CMAKE_BIN32) $(VULKAN_HEADERS)/CMakeLists.txt | $(VULKAN_H_OBJ32)
	cd $(abspath $(VULKAN_H_OBJ32)) && \
	../$(CMAKE_BIN32) -DCMAKE_INSTALL_PREFIX=$(abspath $(TOOLS_DIR32)) $(abspath $(VULKAN_HEADERS))

$(VULKAN_H_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(VULKAN_H_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(CMAKE_BIN64) $(VULKAN_HEADERS)/CMakeLists.txt | $(VULKAN_H_OBJ64)
	cd $(abspath $(VULKAN_H_OBJ64)) && \
	../$(CMAKE_BIN64) -DCMAKE_INSTALL_PREFIX=$(abspath $(TOOLS_DIR64)) $(abspath $(VULKAN_HEADERS))

$(VULKAN_H32): SHELL = $(CONTAINER_SHELL32)
$(VULKAN_H32): $(VULKAN_H_CONFIGURE_FILES32) | $(VULKAN_H_OBJ32)
	cd $(abspath $(VULKAN_H_OBJ32)) && \
	../$(CMAKE_BIN32) --build . --target install

$(VULKAN_H64): SHELL = $(CONTAINER_SHELL64)
$(VULKAN_H64): $(VULKAN_H_CONFIGURE_FILES64) | $(VULKAN_H_OBJ64)
	cd $(abspath $(VULKAN_H_OBJ64)) && \
	../$(CMAKE_BIN64) --build . --target install

# SPIRV-Headers

SPIRV_H_CONFIGURE_FILES32 := $(SPIRV_H_OBJ32)/Makefile
SPIRV_H_CONFIGURE_FILES64 := $(SPIRV_H_OBJ64)/Makefile

$(SPIRV_H_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(SPIRV_H_CONFIGURE_FILES32): $(MAKEFILE_DEP) $(CMAKE_BIN32) $(SPIRV_HEADERS)/CMakeLists.txt | $(SPIRV_H_OBJ32)
	cd $(abspath $(SPIRV_H_OBJ32)) && \
	../$(CMAKE_BIN32) -DCMAKE_INSTALL_PREFIX=$(abspath $(TOOLS_DIR32)) $(abspath $(SPIRV_HEADERS))

$(SPIRV_H_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(SPIRV_H_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(CMAKE_BIN64) $(SPIRV_HEADERS)/CMakeLists.txt | $(SPIRV_H_OBJ64)
	cd $(abspath $(SPIRV_H_OBJ64)) && \
	../$(CMAKE_BIN64) -DCMAKE_INSTALL_PREFIX=$(abspath $(TOOLS_DIR64)) $(abspath $(SPIRV_HEADERS))

$(SPIRV_H32): SHELL = $(CONTAINER_SHELL32)
$(SPIRV_H32): $(SPIRV_H_CONFIGURE_FILES32)
	cd $(abspath $(SPIRV_H_OBJ32)) && \
	../$(CMAKE_BIN32) --build . --target install

$(SPIRV_H64): SHELL = $(CONTAINER_SHELL64)
$(SPIRV_H64): $(SPIRV_H_CONFIGURE_FILES64)
	cd $(abspath $(SPIRV_H_OBJ64)) && \
	../$(CMAKE_BIN64) --build . --target install

# widl; required for vkd3d, which is built before wine

WINEWIDL_CONFIGURE_FILES64 := $(WINEWIDL_OBJ64)/Makefile
WINEWIDL_CONFIGURE_FILES32 := $(WINEWIDL_OBJ32)/Makefile

$(WINEWIDL_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(WINEWIDL_CONFIGURE_FILES32): $(MAKEFILE_DEP) | $(WINEWIDL_OBJ32) bison32
	cd $(dir $@) && \
		STRIP=$(STRIP_QUOTED) \
		BISON=$(abspath $(BISON_BIN32)) \
		CFLAGS=-I$(abspath $(TOOLS_DIR64))"/include -g $(COMMON_FLAGS)" \
		LDFLAGS=-L$(abspath $(TOOLS_DIR32))/lib \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
		CC=$(CC_QUOTED) \
		CXX=$(CXX_QUOTED) \
		../$(WINE)/configure \
			$(WINE32_AUTOCONF) \
			--without-curses \
			--disable-tests

$(WINEWIDL32): SHELL = $(CONTAINER_SHELL32)
$(WINEWIDL32): $(WINEWIDL_CONFIGURE_FILES32)
	cd $(WINEWIDL_OBJ32) && \
	make tools/widl

$(WINEWIDL_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(WINEWIDL_CONFIGURE_FILES64): $(MAKEFILE_DEP) | $(WINEWIDL_OBJ64) bison64
	cd $(dir $@) && \
		STRIP=$(STRIP_QUOTED) \
		BISON=$(abspath $(BISON_BIN64)) \
		CFLAGS=-I$(abspath $(TOOLS_DIR64))"/include -g $(COMMON_FLAGS)" \
		LDFLAGS=-L$(abspath $(TOOLS_DIR64))/lib \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
		CC=$(CC_QUOTED) \
		CXX=$(CXX_QUOTED) \
		../$(WINE)/configure \
			$(WINE64_AUTOCONF) \
			--without-curses \
			--enable-win64 --disable-tests

$(WINEWIDL64): SHELL = $(CONTAINER_SHELL64)
$(WINEWIDL64): $(WINEWIDL_CONFIGURE_FILES64)
	cd $(WINEWIDL_OBJ64) && \
	make tools/widl

# VKD3D

VKD3D_CONFIGURE_FILES32 := $(VKD3D_OBJ32)/Makefile
VKD3D_CONFIGURE_FILES64 := $(VKD3D_OBJ64)/Makefile

#use host autotools to generate configure script
$(VKD3D)/configure: SHELL = /bin/bash
$(VKD3D)/configure: $(MAKEFILE_DEP) $(VKD3D)/configure.ac
	cd $(abspath $(VKD3D)) && ./autogen.sh

$(VKD3D_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(VKD3D_CONFIGURE_FILES32): $(MAKEFILE_DEP) $(VULKAN_H32) $(SPIRV_H32) $(VKD3D)/configure $(WINEWIDL32) | $(VKD3D_OBJ32)
	cd $(abspath $(VKD3D_OBJ32)) && \
	CFLAGS="-I$(abspath $(TOOLS_DIR32))/include -g $(COMMON_FLAGS) -DNDEBUG" \
	LDFLAGS=-L$(abspath $(TOOLS_DIR32))/lib \
	WIDL="$(abspath $(WINEWIDL32))" \
	$(abspath $(VKD3D))/configure --disable-tests --prefix=$(abspath $(TOOLS_DIR32))

vkd3d32: SHELL = $(CONTAINER_SHELL32)
vkd3d32: $(VKD3D_CONFIGURE_FILES32)
	cd $(abspath $(VKD3D_OBJ32)) && \
	make V=1 && make $(VKD3D_INSTALL_TARGET) && \
	mkdir -p $(abspath $(DST_DIR))/lib/ && \
	cp -a $(abspath $(TOOLS_DIR32))/lib/libvkd3d*.so* $(abspath $(DST_DIR))/lib/

$(VKD3D_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(VKD3D_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(VULKAN_H64) $(SPIRV_H64) $(VKD3D)/configure $(WINEWIDL64) | $(VKD3D_OBJ64)
	cd $(abspath $(VKD3D_OBJ64)) && \
	CFLAGS="-I$(abspath $(TOOLS_DIR64))/include -g $(COMMON_FLAGS) -DNDEBUG" \
	LDFLAGS=-L$(abspath $(TOOLS_DIR64))/lib \
	WIDL="$(abspath $(WINEWIDL64))" \
	$(abspath $(VKD3D))/configure --disable-tests --prefix=$(abspath $(TOOLS_DIR64))

vkd3d64: SHELL = $(CONTAINER_SHELL64)
vkd3d64: $(VKD3D_CONFIGURE_FILES64)
	cd $(abspath $(VKD3D_OBJ64)) && \
	make V=1 && make $(VKD3D_INSTALL_TARGET) && \
	mkdir -p $(abspath $(DST_DIR))/lib64/ && \
	cp -a $(abspath $(TOOLS_DIR64))/lib/libvkd3d*.so* $(abspath $(DST_DIR))/lib64/

vkd3d: vkd3d32 vkd3d64

# TODO Tests
#  build_vrclient64_tests
#  build_vrclient32_tests

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
