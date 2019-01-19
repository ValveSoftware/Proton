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
DOCKER_SHELL_BASE = docker run --rm --init -v $(HOME):$(HOME) -w $(CURDIR) -e HOME=$(HOME) \
                                    -v /etc/passwd:/etc/passwd:ro -u $(shell id -u):$(shell id -g) -h $(shell hostname) \
                                    -v /tmp:/tmp $(SELECT_DOCKER_IMAGE) /dev/init -sg -- /bin/bash

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

SELECT_DOCKER_IMAGE :=

# If we're using containers to sub-invoke the various builds, jobserver won't work, have some silly auto-jobs
# controllable by SUBMAKE_JOBS.  Not ideal.
ifneq ($(CONTAINER_SHELL32)$(CONTAINER_SHELL64),)
	SUBMAKE_JOBS ?= 24
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

# TODO Release/debug configuration
INSTALL_PROGRAM_FLAGS :=

# All top level goals.  Lazy evaluated so they can be added below.
GOAL_TARGETS = $(GOAL_TARGETS_LIBS)
# Excluding goals like wine and dist that are either long running or slow per invocation
GOAL_TARGETS_LIBS =
# Any explicit thing, superset
ALL_TARGETS =

##
## Platform-specific variables
##

STRIP := strip
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

CMAKE := $(SRCDIR)/cmake
CMAKE_OBJ32 := ./obj-cmake32
CMAKE_OBJ64 := ./obj-cmake64
CMAKE_BIN32 := $(CMAKE_OBJ32)/built/bin/cmake
CMAKE_BIN64 := $(CMAKE_OBJ64)/built/bin/cmake

FONTS := $(SRCDIR)/fonts
FONTS_OBJ := ./obj-fonts

## Object directories
OBJ_DIRS := $(TOOLS_DIR32)        $(TOOLS_DIR64)        \
            $(FFMPEG_OBJ32)       $(FFMPEG_OBJ64)       \
            $(FAUDIO_OBJ32)       $(FAUDIO_OBJ64)       \
            $(LSTEAMCLIENT_OBJ32) $(LSTEAMCLIENT_OBJ64) \
            $(WINE_OBJ32)         $(WINE_OBJ64)         \
            $(VRCLIENT_OBJ32)     $(VRCLIENT_OBJ64)     \
            $(DXVK_OBJ32)         $(DXVK_OBJ64)         \
            $(CMAKE_OBJ32)        $(CMAKE_OBJ64)

$(OBJ_DIRS):
	mkdir -p $@

##
## dist/install -- steps to finalize the install
##

$(DST_DIR):
	mkdir -p $@

STEAM_DIR := $(HOME)/.steam/root

DIST_COPY_FILES := toolmanifest.vdf filelock.py proton proton_3.7_tracked_files user_settings.sample.py
DIST_COPY_TARGETS := $(addprefix $(DST_BASE)/,$(DIST_COPY_FILES))
DIST_VERSION := $(DST_DIR)/version
DIST_OVR32 := $(DST_DIR)/lib/wine/dxvk/openvr_api_dxvk.dll
DIST_OVR64 := $(DST_DIR)/lib64/wine/dxvk/openvr_api_dxvk.dll
DIST_PREFIX := $(DST_DIR)/share/default_pfx/
DIST_COMPAT_MANIFEST := $(DST_BASE)/compatibilitytool.vdf
DIST_LICENSE := $(DST_BASE)/LICENSE
DIST_GECKO_DIR := $(DST_DIR)/share/wine/gecko
DIST_GECKO32 := $(DIST_GECKO_DIR)/$(GECKO32_MSI)
DIST_GECKO64 := $(DIST_GECKO_DIR)/$(GECKO64_MSI)
DIST_FONTS := $(DST_DIR)/share/fonts

DIST_TARGETS := $(DIST_COPY_TARGETS) $(DIST_VERSION) $(DIST_OVR32) $(DIST_OVR64) \
                $(DIST_GECKO32) $(DIST_GECKO64) $(DIST_COMPAT_MANIFEST) $(DIST_LICENSE) \
                $(DIST_FONTS)

DEPLOY_COPY_TARGETS := $(DIST_COPY_TARGETS) $(DIST_VERSION) $(DIST_LICENSE)

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

$(DIST_VERSION): | $(DST_DIR)
	date '+%s' > $@
	cp $(DIST_VERSION) $(DST_BASE)/

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
			wget -O "$(SRCDIR)/contrib/$(GECKO64_MSI)" "https://dl.winehq.org/wine/wine-gecko/$(GECKO_VER)/$(GECKO64_MSI)"; \
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
			wget -O "$(SRCDIR)/contrib/$(GECKO32_MSI)" "https://dl.winehq.org/wine/wine-gecko/$(GECKO_VER)/$(GECKO32_MSI)"; \
		fi; \
		cp "$(SRCDIR)/contrib/$(GECKO32_MSI)" "$@"; \
	fi

$(DIST_FONTS): fonts
	mkdir -p $@
	cp $(FONTS_OBJ)/*.ttf "$@"

.PHONY: dist

ALL_TARGETS += dist
GOAL_TARGETS += dist

# Only drag in WINE_OUT if they need to be built at all, otherwise this doesn't imply a rebuild of wine.  If wine is in
# the explicit targets, specify that this should occur after.
dist: $(DIST_TARGETS) | $(WINE_OUT) $(filter $(MAKECMDGOALS),wine64 wine32 wine) $(DST_DIR)
	rm -rf $(abspath $(DIST_PREFIX)) && \
	WINEPREFIX=$(abspath $(DIST_PREFIX)) $(WINE_OUT_BIN) wineboot && \
		WINEPREFIX=$(abspath $(DIST_PREFIX)) $(WINE_OUT_SERVER) -w && \
		ln -s $(FONTLINKPATH)/LiberationSans-Regular.ttf $(abspath $(DIST_PREFIX))/drive_c/windows/Fonts/arial.ttf && \
		ln -s $(FONTLINKPATH)/LiberationSans-Bold.ttf $(abspath $(DIST_PREFIX))/drive_c/windows/Fonts/arialbd.ttf && \
		ln -s $(FONTLINKPATH)/LiberationSerif-Regular.ttf $(abspath $(DIST_PREFIX))/drive_c/windows/Fonts/times.ttf && \
		ln -s $(FONTLINKPATH)/LiberationMono-Regular.ttf $(abspath $(DIST_PREFIX))/drive_c/windows/Fonts/cour.ttf
#The use of "arial" here is for compatibility with programs that require that exact string. These links do not point to Arial.
#The use of "times" here is for compatibility with programs that require that exact string. This link does not point to Times New Roman.
#The use of "cour" here is for compatibility with programs that require that exact string. This link does not point to Courier New.

deploy: dist | $(filter-out dist deploy install,$(MAKECMDGOALS))
	mkdir -p $(DEPLOY_DIR) && \
	cp -a $(DEPLOY_COPY_TARGETS) $(DEPLOY_DIR) && \
	tar -C $(DST_DIR) -c . | gzip -c -1 > $(DEPLOY_DIR)/proton_dist.tar.gz
	@echo "Created deployment tarball at "$(DEPLOY_DIR)"/proton_dist.tar.gz"

install: dist | $(filter-out dist deploy install,$(MAKECMDGOALS))
	if [ ! -d $(STEAM_DIR) ]; then echo >&2 "!! "$(STEAM_DIR)" does not exist, cannot install"; return 1; fi
	mkdir -p $(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	cp -a $(DST_BASE)/* $(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	@echo "Installed Proton to "$(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	@echo "You may need to restart Steam to select this tool"


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
	cp -L $(TOOLS_DIR64)/lib/{libavcodec,libavutil}* $(DST_DIR)/lib64

ffmpeg32: SHELL = $(CONTAINER_SHELL32)
ffmpeg32: $(FFMPEG_CONFIGURE_FILES32)
	+$(MAKE) -C $(FFMPEG_OBJ32)
	+$(MAKE) -C $(FFMPEG_OBJ32) install
	mkdir -pv $(DST_DIR)/lib
	cp -L $(TOOLS_DIR32)/lib/{libavcodec,libavutil}* $(DST_DIR)/lib

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
	cp -L $(TOOLS_DIR32)/lib/libFAudio* $(DST_DIR)/lib/
	[ x"$(STRIP)" = x ] || $(STRIP) $(DST_DIR)/lib/libFAudio.so

faudio64: SHELL = $(CONTAINER_SHELL64)
faudio64: $(FAUDIO_CONFIGURE_FILES64)
	+$(MAKE) -C $(FAUDIO_OBJ64) VERBOSE=1
	+$(MAKE) -C $(FAUDIO_OBJ64) install VERBOSE=1
	mkdir -p $(DST_DIR)/lib64
	cp -L $(TOOLS_DIR64)/lib/libFAudio* $(DST_DIR)/lib64/
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
$(WINE_CONFIGURE_FILES64): $(MAKEFILE_DEP) | $(WINE_OBJ64)
	cd $(dir $@) && \
		STRIP=$(STRIP_QUOTED) \
		CFLAGS="-I$(abspath $(TOOLS_DIR64))/include -I$(abspath $(SRCDIR))/contrib/include -g $(COMMON_FLAGS)" \
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
$(WINE_CONFIGURE_FILES32): $(MAKEFILE_DEP) | $(WINE_OBJ32) $(WINE_ORDER_DEPS32)
	cd $(dir $@) && \
		STRIP=$(STRIP_QUOTED) \
		CFLAGS="-I$(abspath $(TOOLS_DIR32))/include -I$(abspath $(SRCDIR))/contrib/include -g $(COMMON_FLAGS)" \
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
	+$(MAKE) -C $(WINE_OBJ64) $(WINE_COMMON_MAKE_ARGS)
	+$(MAKE) -C $(WINE_OBJ64) $(WINE_COMMON_MAKE_ARGS) install-lib
	+$(MAKE) -C $(WINE_OBJ64) $(WINE64_MAKE_ARGS) install-lib install-dev
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
	cp -a $(WINE_DST32)/lib $(DST_DIR)/
	cp -a $(WINE_DST32)/bin/wine $(DST_DIR)/bin/
	cp -a $(WINE_DST32)/bin/wine-preloader $(DST_DIR)/bin/

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
## dxvk
##

# TODO Builds outside container, could simplify a lot if it did not.

## Create & configure object directory for dxvk

ifneq ($(NO_DXVK),1) # May be disabled by configure

DXVK_CONFIGURE_FILES32 := $(DXVK_OBJ32)/build.ninja
DXVK_CONFIGURE_FILES64 := $(DXVK_OBJ64)/build.ninja

# 64bit-configure.  Remove coredata file if already configured (due to e.g. makefile changing)
#   the sed junk is to work around meson not supporting command line args for --cross-file builds
#   we need to pass in wine's header files since the debian9 mingw-w64 is too old for dxvk.
$(DXVK_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(DXVK)/build-win64.txt | $(DXVK_OBJ64)
	if [ -e "$(abspath $(DXVK_OBJ64))"/build.ninja ]; then \
		rm -f "$(abspath $(DXVK_OBJ64))"/meson-private/coredata.dat; \
	fi
	mkdir -p "$(abspath $(DXVK_OBJ64))/new_includes" && \
	cp $(abspath $(TOOLS_DIR64))/include/wine/windows/dxgi*.h "$(abspath $(DXVK_OBJ64))/new_includes" && \
	cd "$(abspath $(DXVK))" && \
	sed -e "s|@PROTON_C_ARGS@|'-I$(abspath $(DXVK_OBJ64))/new_includes'|" < build-win64.txt > proton-build-win64.txt && \
	PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" \
		meson --prefix="$(abspath $(DXVK_OBJ64))" --cross-file proton-build-win64.txt --strip --buildtype=release "$(abspath $(DXVK_OBJ64))"

# 32-bit configure.  Remove coredata file if already configured (due to e.g. makefile changing)
#   the sed junk is to work around meson not supporting command line args for --cross-file builds
#   we need to pass in wine's header files since the debian9 mingw-w64 is too old for dxvk.
$(DXVK_CONFIGURE_FILES32): $(MAKEFILE_DEP) $(DXVK)/build-win32.txt | $(DXVK_OBJ32)
	if [ -e "$(abspath $(DXVK_OBJ32))"/build.ninja ]; then \
		rm -f "$(abspath $(DXVK_OBJ32))"/meson-private/coredata.dat; \
	fi
	cd "$(abspath $(DXVK))" && \
	mkdir -p "$(abspath $(DXVK_OBJ32))/new_includes" && \
	cp $(abspath $(TOOLS_DIR32))/include/wine/windows/dxgi*.h "$(abspath $(DXVK_OBJ32))/new_includes" && \
	cd "$(abspath $(DXVK))" && \
	sed -e "s|@PROTON_C_ARGS@|'-I$(abspath $(DXVK_OBJ32))/new_includes'|" < build-win32.txt > proton-build-win32.txt && \
	PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" \
		meson --prefix="$(abspath $(DXVK_OBJ32))" --cross-file proton-build-win32.txt --strip --buildtype=release "$(abspath $(DXVK_OBJ32))"

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

endif # NO_DXVK

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

LIBERATION_SANS_REGULAR_SFD = LiberationSans-Regular.sfd
LIBERATION_SANS_BOLD_SFD = LiberationSans-Bold.sfd
LIBERATION_SERIF_REGULAR_SFD = LiberationSerif-Regular.sfd
LIBERATION_MONO_REGULAR_SFD = LiberationMono-Regular.sfd

LIBERATION_SANS_REGULAR_TTF = $(addprefix $(FONTS_OBJ)/, $(LIBERATION_SANS_REGULAR_SFD:.sfd=.ttf))
LIBERATION_SANS_BOLD_TTF = $(addprefix $(FONTS_OBJ)/, $(LIBERATION_SANS_BOLD_SFD:.sfd=.ttf))
LIBERATION_SERIF_REGULAR_TTF = $(addprefix $(FONTS_OBJ)/, $(LIBERATION_SERIF_REGULAR_SFD:.sfd=.ttf))
LIBERATION_MONO_REGULAR_TTF = $(addprefix $(FONTS_OBJ)/, $(LIBERATION_MONO_REGULAR_SFD:.sfd=.ttf))

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

$(FONTS_OBJ):
	mkdir -p $@

$(FONTS_SRC): $(FONTS_OBJ)
	cp -n $(addprefix $(LIBERATION_SRCDIR)/, $(LIBERATION_SFDS)) $<

fonts: $(LIBERATION_SANS_REGULAR_TTF) $(LIBERATION_SANS_BOLD_TTF) \
       $(LIBERATION_SERIF_REGULAR_TTF) $(LIBERATION_MONO_REGULAR_TTF) | $(FONTS_SRC)

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
