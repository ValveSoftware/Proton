
# TODO Missing vs build_proton
#   - Package/tarball step
#   - setup_wine_gecko

##
## Nested make
##

ifneq ($(NO_NESTED_MAKE),1)
# Pass all variables/goals to ourselves as a sub-make such that we will get a trailing error message upon failure.  (We
# invoke a lot of long-running build-steps, and make fails to re-print errors when they happened ten thousand lines
# ago.)
export
.DEFAULT_GOAL := default
.PHONY: $(MAKECMDGOALS) default nested_make
default $(MAKECMDGOALS): nested_make

nested_make:
	$(MAKE) $(MAKECMDGOALS) -f $(firstword $(MAKEFILE_LIST)) NO_NESTED_MAKE=1

else # (Rest of the file is the else)

##
## General/global config
##

# We expect the configure script to conditionally set the following:
#   SRCDIR          - Path to source
#   BUILD_NAME      - Name of the build for manifests etc.
#   NO_DXVK         - 1 if skipping DXVK steps
#   OSX             - 1 if OS X build
#   STEAMRT64_MODE  - 'docker' or '' for automatic Steam Runtime container
#   STEAMRT64_IMAGE - Name of the image if mode is set
#   STEAMRT32_MODE  - Same as above for 32-bit container (can be different type)
#   STEAMRT32_IMAGE - Same as above for 32-bit container

ifeq ($(SRCDIR),)
	foo := $(error SRCDIR not set, do not include makefile_base directly, run ./configure.sh to generate Makefile)
endif

# If CC is coming from make's defaults or nowhere, use our own default.  Otherwise respect environment.
ifneq ($(filter default undefined,$(origin CC)),)
	ifeq ($(OSX),1)
		CC = ccache clang
	else
		CC = ccache gcc
	endif
endif
ifneq ($(filter default undefined,$(origin CXX)),)
	ifeq ($(OSX),1)
		CXX = ccache clang++
	else
		CXX = ccache g++
	endif
endif

export CC
export CXX

# Selected container mode shell
DOCKER_SHELL_BASE = sudo docker run --rm --init -v $(HOME):$(HOME) -w $(CURDIR) -e HOME=$(HOME) \
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

$(info Testing configured 64bit container)
ifneq ($(shell $(CONTAINER_SHELL64) -c "echo hi"), hi)
$(error "Cannot run commands in 64bit container")
endif
$(info Testing configured 32bit container)
ifneq ($(shell $(CONTAINER_SHELL32) -c "echo hi"), hi)
$(error "Cannot run commands in 32bit container")
endif

# Many of the configure steps below depend on the makefile itself, such that they are dirtied by changing the recipes
# that create them.  This can be annoying when working on the makefile, building with NO_MAKEFILE_DEPENDENCY=1 disables
# this.
MAKEFILE_DEP := $(MAKEFILE_LIST)
ifeq ($(NO_MAKEFILE_DEPENDENCY),1)
MAKEFILE_DEP :=
endif

# TODO Release/debug configuration
INSTALL_PROGRAM_FLAGS :=

##
## Platform-specific variables
##

LIB_SUFFIX := "so"
STRIP := strip
FREETYPE32_CFLAGS :=
FREETYPE32_LIBS :=
FREETYPE64_CFLAGS :=
FREETYPE64_LIBS :=
PNG32_CFLAGS :=
PNG32_LIBS :=
PNG64_CFLAGS :=
PNG64_LIBS :=
JPEG32_CFLAGS :=
JPEG32_LIBS :=
JPEG64_CFLAGS :=
JPEG64_LIBS :=
WINE32_AUTOCONF :=
WINE64_AUTOCONF :=

# Use $(call QUOTE,$(VAR)) to flatten a list to a single element (for feeding to a shell)

# OS X specific
ifeq ($(OSX),1)
STRIP := strip -x
LIB_SUFFIX := dylib
WINE32_AUTOCONF := --without-x \
                   ac_cv_lib_soname_freetype32=libprotonfreetype.dylib \
                   ac_cv_lib_soname_png32=libprotonpng16.dylib \
                   ac_cv_lib_soname_jpeg32=libprotonjpeg.dylib
WINE64_AUTOCONF := --without-x \
                   ac_cv_lib_soname_freetype64=libprotonfreetype.dylib \
                   ac_cv_lib_soname_png64=libprotonpng16.dylib \
                   ac_cv_lib_soname_jpeg64=libprotonjpeg.dylib

FREETYPE32_CFLAGS := -I$(abspath $(TOOLS_DIR32))/include/freetype2
FREETYPE32_LIBS   := -L$(abspath $(TOOLS_DIR32))/lib -lprotonfreetype -framework CoreServices -framework ApplicationServices -lz
FREETYPE64_CFLAGS := -I$(abspath $(TOOLS_DIR64))/include/freetype2
FREETYPE64_LIBS   := -L$(abspath $(TOOLS_DIR64))/lib -lprotonfreetype
PNG32_CFLAGS      := -I$(abspath $(TOOLS_DIR32))/include
PNG32_LIBS        := -L$(abspath $(TOOLS_DIR32))/lib -lprotonpng
PNG64_CFLAGS      := -I$(abspath $(TOOLS_DIR64))/include
PNG64_LIBS        := -L$(abspath $(TOOLS_DIR64))/lib -lprotonpng
JPEG32_CFLAGS     := -I$(abspath $(TOOLS_DIR32))/include
JPEG32_LIBS       := -L$(abspath $(TOOLS_DIR32))/lib -lprotonjpeg
JPEG64_CFLAGS     := -I$(abspath $(TOOLS_DIR64))/include
JPEG64_LIBS       := -L$(abspath $(TOOLS_DIR64))/lib -lprotonjpeg
endif

# Make magic: We don't want the variables listed here to be lists, just single elements with spaces in them for passing
# to shells. But we don't want someone forgetting to type "\ " to cause bizarre bugs.  Just let them be entered
# free-form above, then enforce flattening on them all.
QUOTED_VARIABLES := LIB_SUFFIX \
                    FREETYPE32_CFLAGS \
                    FREETYPE32_LIBS \
                    FREETYPE64_CFLAGS \
                    FREETYPE64_LIBS \
                    PNG32_CFLAGS \
                    PNG32_LIBS \
                    PNG64_CFLAGS \
                    PNG64_LIBS \
                    JPEG32_CFLAGS \
                    JPEG32_LIBS \
                    JPEG64_CFLAGS \
                    JPEG64_LIBS \
                    WINE32_AUTOCONF \
                    WINE64_AUTOCONF

# v-- This flattens a list when called. Don't look directly into it.
QUOTE = $(subst $(eval) ,\ ,$(1))
QUOTE_VARIABLE = $(eval $(1) := $$(call QUOTE,$$($(1))))
QUOTE_VARIABLE_LIST = $(foreach a,$(1),$(call QUOTE_VARIABLE,$(a)))
$(call QUOTE_VARIABLE_LIST,$(QUOTED_VARIABLES))

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
LICENSE := $(SRCDIR)/dist.LICENSE.lin
ifeq ($(OSX),1)
	LICENSE := $(SRCDIR)/dist.LICENSE.osx
endif

TOOLS_DIR32 := ./obj-tools32
TOOLS_DIR64 := ./obj-tools64
DST_BASE := ./dist
DST_DIR := $(DST_BASE)/dist

FREETYPE := $(SRCDIR)/freetype2
FREETYPE_OBJ32 := ./obj-freetype32
FREETYPE_OBJ64 := ./obj-freetype64
FREETYPE_OUT64 := $(TOOLS_DIR64)/lib/libprotonfreetype.dylib
FREETYPE_OUT32 := $(TOOLS_DIR32)/lib/libprotonfreetype.dylib

OPENAL := $(SRCDIR)/openal-soft
OPENAL_OBJ32 := ./obj-openal32
OPENAL_OBJ64 := ./obj-openal64

FFMPEG := $(SRCDIR)/ffmpeg
FFMPEG_OBJ32 := ./obj-ffmpeg32
FFMPEG_OBJ64 := ./obj-ffmpeg64
# TODO if perserving OS X support
FFMPEG_CROSS_CFLAGS :=
FFMPEG_CROSS_LDFLAGS :=

LSTEAMCLIENT := $(SRCDIR)/lsteamclient
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

LIBPNG := $(SRCDIR)/libpng
LIBPNGPROTON := ./syn-libpng
LIBPNG_OBJ32 := ./obj-libpng32
LIBPNG_OBJ64 := ./obj-libpng64
LIBPNG_OUT64 := $(TOOLS_DIR64)/lib/libprotonpng16.dylib
LIBPNG_OUT32 := $(TOOLS_DIR32)/lib/libprotonpng16.dylib

LIBJPEG := $(SRCDIR)/libjpeg-turbo
LIBJPEGPROTON := ./syn-libjpeg
LIBJPEG_OBJ32 := ./obj-libjpeg32
LIBJPEG_OBJ64 := ./obj-libjpeg64
LIBJPEG_OUT64 := $(TOOLS_DIR64)/lib/libprotonjpeg.dylib
LIBJPEG_OUT32 := $(TOOLS_DIR32)/lib/libprotonjpeg.dylib

LIBSDL := $(SRCDIR)/SDL-mirror
LIBSDLPROTON := ./syn-libsdl
LIBSDL_OBJ32 := ./obj-libsdl32
LIBSDL_OBJ64 := ./obj-libsdl64
LIBSDL_OUT64 := $(TOOLS_DIR64)/lib/libSDL2.dylib
LIBSDL_OUT32 := $(TOOLS_DIR32)/lib/libSDL2.dylib

MOLTENVK := $(SRCDIR)/MoltenVK
MOLTENVKPROTON := ./syn-MoltenVK
MOLTENVK_OBJ := ./obj-moltenvk
MOLTENVK_OUT := $(TOOLS_DIR64)/lib/libMoltenVK.dylib

## Object directories
OBJ_DIRS := $(TOOLS_DIR32)        $(TOOLS_DIR64)        \
            $(FREETYPE_OBJ32)     $(FREETYPE_OBJ64)     \
            $(OPENAL_OBJ32)       $(OPENAL_OBJ64)       \
            $(FFMPEG_OBJ32)       $(FFMPEG_OBJ64)       \
            $(LSTEAMCLIENT_OBJ32) $(LSTEAMCLIENT_OBJ64) \
            $(WINE_OBJ32)         $(WINE_OBJ64)         \
            $(VRCLIENT_OBJ32)     $(VRCLIENT_OBJ64)     \
            $(DXVK_OBJ32)         $(DXVK_OBJ64)         \
            $(CMAKE_OBJ32)        $(CMAKE_OBJ64)        \
            $(LIBPNG_OBJ32)       $(LIBPNG_OBJ64)       \
            $(LIBJPEG_OBJ32)      $(LIBJPEG_OBJ64)      \
            $(LIBSDL_OBJ32)       $(LIBSDL_OBJ64)       \
            $(MOLTENVK_OBJ)

$(OBJ_DIRS):
	mkdir -p $@

# All top level goals.  Lazy evaluated so they can be added below.
GOAL_TARGETS = $(GOAL_TARGETS_LIBS)
# Excluding goals like wine and dist that are either long running or slow per invocation
GOAL_TARGETS_LIBS =
# Targets that have to be asked for explicitly
OPTIONAL_TARGETS =
# Any explicit thing, superset
ALL_TARGETS =

##
## dist/install -- steps to finalize the install
##

$(DST_DIR):
	mkdir -p $@

STEAM_DIR := $(HOME)/.steam/root

DIST_COPY_FILES := toolmanifest.vdf filelock.py proton user_settings.sample.py
DIST_COPY_TARGETS := $(addprefix $(DST_BASE)/,$(DIST_COPY_FILES))
DIST_VERSION := $(DST_DIR)/version
DIST_VERSION_OUTER := $(DST_BASE)/version
DIST_OVR32 := $(DST_DIR)/lib/wine/dxvk/openvr_api_dxvk.dll
DIST_OVR64 := $(DST_DIR)/lib64/wine/dxvk/openvr_api_dxvk.dll
DIST_PREFIX := $(DST_DIR)/share/default_pfx/
DIST_COMPAT_MANIFEST := $(DST_BASE)/compatibilitytool.vdf
DIST_LICENSE := $(DST_DIR)/LICENSE

DIST_TARGETS := $(DIST_COPY_TARGETS) $(DIST_VERSION) $(DIST_VERSION_OUTER) $(DIST_OVR32) $(DIST_OVR64) \
                $(DIST_COMPAT_MANIFEST) $(DIST_LICENSE)

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

$(DIST_VERSION_OUTER): $(DIST_VERSION) | $(DST_DIR)
	cp $< $@

$(DIST_COMPAT_MANIFEST): $(COMPAT_MANIFEST_TEMPLATE) $(MAKEFILE_DEP) | $(DST_DIR)
	sed -r 's|//##DISPLAY_NAME##|"display_name" "'$(BUILD_NAME)'"|' $< > $@

.PHONY: dist

ALL_TARGETS += dist
GOAL_TARGETS += dist

# Only drag in WINE_OUT if they need to be built at all, otherwise this doesn't imply a rebuild of wine.  If wine is in
# the explicit targets, specify that this should occur after.
dist: $(DIST_TARGETS) | $(WINE_OUT) $(filter $(MAKECMDGOALS),wine64 wine32 wine) $(DST_DIR)
	WINEPREFIX=$(abspath $(DIST_PREFIX)) $(WINE_OUT_BIN) wineboot && \
		WINEPREFIX=$(abspath $(DIST_PREFIX)) $(WINE_OUT_SERVER) -w

install: dist
	if [ ! -d $(STEAM_DIR) ]; then echo >&2 "!! "$(STEAM_DIR)" does not exist, cannot install"; return 1; fi
	mkdir -p $(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	cp -a $(DST_BASE)/* $(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	@echo "Installed Proton to "$(STEAM_DIR)/compatibilitytools.d/$(BUILD_NAME)
	@echo "You may need to restart Steam to select this tool"

##
## freetype
##

ifeq ($(OSX),1) # currently only for OS X builds

## Autogen steps for freetype
FREETYPE_AUTOGEN_FILES := $(FREETYPE)/builds/unix/configure

$(FREETYPE_AUTOGEN_FILES): $(FREETYPE)/builds/unix/configure.raw $(FREETYPE)/autogen.sh
	cd $(FREETYPE) && ./autogen.sh

## Create & configure object directory for freetype

FREETYPE_CONFIGURE_FILES32 := $(FREETYPE_OBJ32)/unix-cc.mk $(FREETYPE_OBJ32)/Makefile
FREETYPE_CONFIGURE_FILES64 := $(FREETYPE_OBJ64)/unix-cc.mk $(FREETYPE_OBJ64)/Makefile

# 64-bit configure
$(FREETYPE_CONFIGURE_FILES64): $(FREETYPE_AUTOGEN_FILES) $(MAKEFILE_DEP) | $(FREETYPE_OBJ64)
	cd $(dir $@) && \
		$(abspath $(FREETYPE)/configure) CC=$(CC_QUOTED) CXX=$(CXX_QUOTED) PKG_CONFIG=false \
			--prefix=$(abspath $(TOOLS_DIR64)) --without-png --host x86_64-apple-darwin && \
		echo 'LIBRARY := libprotonfreetype' >> unix-cc.mk

# 32bit-configure
$(FREETYPE_CONFIGURE_FILES32): $(FREETYPE_AUTOGEN_FILES) $(MAKEFILE_DEP) | $(FREETYPE_OBJ32)
	cd $(dir $@) && \
		$(abspath $(FREETYPE)/configure) CC=$(CC_QUOTED) CXX=$(CXX_QUOTED) PKG_CONFIG=false \
			CFLAGS='-m32 -g -O2' LDFLAGS=-m32 \
			--prefix=$(abspath $(TOOLS_DIR32)) --without-png --host i686-apple-darwin && \
		echo 'LIBRARY := libprotonfreetype' >> unix-cc.mk

## Freetype goals
FREETYPE_TARGETS = freetype freetype32 freetype64 freetype_autogen freetype_configure freetype_configure32 freetype_configure64

ALL_TARGETS += $(FREETYPE_TARGETS)
GOAL_TARGETS_LIBS += freetype

.PHONY: $(FREETYPE_TARGETS)

freetype_configure: $(FREETYPE_CONFIGURE_FILES32) $(FREETYPE_CONFIGURE_FILES64)

freetype_configure64: $(FREETYPE_CONFIGURE_FILES64)

freetype_configure32: $(FREETYPE_CONFIGURE_FILES32)

freetype_autogen: $(FREETYPE_AUTOGEN_FILES)

freetype: freetype32 freetype64

# Make silliness to make both the explicit freetype goal and the outfile come from the same recipe
.INTERMEDIATE: freetype64-intermediate freetype32-intermediate

$(FREETYPE_OUT64) freetype64: freetype64-intermediate

$(FREETYPE_OUT32) freetype32: freetype32-intermediate

freetype64-intermediate: $(FREETYPE_CONFIGURE_FILES64)
	$(MAKE) -C $(FREETYPE_OBJ64)
	$(MAKE) -C $(FREETYPE_OBJ64) install
	cp $(FREETYPE_OUT64) $(DST_DIR)/lib64
	$(STRIP) $(DST_DIR)/lib64/libprotonfreetype.dylib

freetype32-intermediate: $(FREETYPE_CONFIGURE_FILES32)
	$(MAKE) -C $(FREETYPE_OBJ32)
	$(MAKE) -C $(FREETYPE_OBJ32) install
	cp $(FREETYPE_OUT32) $(DST_DIR)/lib
	$(STRIP) $(DST_DIR)/lib/libprotonfreetype.dylib

endif # ifeq ($(OSX),1)

##
## libpng
##

ifeq ($(OSX),1) # currently only for OS X builds

## Synthetic libpng with modified Makefile.am for autogen
$(LIBPNGPROTON)/.created: $(LIBPNG) $(MAKEFILE_DEP) $(LIBPNG)/autogen.sh $(LIBPNG)/configure.ac
	rm -rf ./$(LIBPNGPROTON)
	mkdir -p $(LIBPNGPROTON)/
	cd $(LIBPNGPROTON)/ && \
		ln -sfv ../$(LIBPNG)/* .
	rm $(LIBPNGPROTON)/Makefile.am
	cp $(LIBPNG)/Makefile.am $(LIBPNGPROTON)
	sed -i -e 's/libpng@PNGLIB_MAJOR@@PNGLIB_MINOR@/libprotonpng@PNGLIB_MAJOR@@PNGLIB_MINOR@/' $(LIBPNGPROTON)/Makefile.am
	cd $(LIBPNGPROTON) && ./autogen.sh --maintainer
	touch $(LIBPNGPROTON)/.created

$(LIBPNGPROTON): $(LIBPNGPROTON)/.created

## Create & configure object directory for libpng

LIBPNG_CONFIGURE_FILES32 := $(LIBPNG_OBJ32)/Makefile
LIBPNG_CONFIGURE_FILES64 := $(LIBPNG_OBJ64)/Makefile

# 64-bit configure
$(LIBPNG_CONFIGURE_FILES64): $(LIBPNG_AUTOGEN_FILES) $(MAKEFILE_DEP) $(LIBPNGPROTON) | $(LIBPNG_OBJ64)
	cd $(dir $@) && \
		$(abspath $(LIBPNGPROTON)/configure) --prefix=$(abspath $(TOOLS_DIR64)) --host x86_64-apple-darwin

# 32bit-configure
$(LIBPNG_CONFIGURE_FILES32): $(LIBPNG_AUTOGEN_FILES) $(MAKEFILE_DEP) $(LIBPNGPROTON) | $(LIBPNG_OBJ32)
	cd $(dir $@) && \
		$(abspath $(LIBPNGPROTON)/configure) --prefix=$(abspath $(TOOLS_DIR32)) --host i686-apple-darwin \
			CFLAGS='-m32 -g -O2' LDFLAGS=-m32

## Libpng goals
LIBPNG_TARGETS = libpng libpng32 libpng64 libpng_configure libpng_configure32 libpng_configure64

ALL_TARGETS += $(LIBPNG_TARGETS)
GOAL_TARGETS_LIBS += libpng

.PHONY: $(LIBPNG_TARGETS)

libpng_configure: $(LIBPNG_CONFIGURE_FILES32) $(LIBPNG_CONFIGURE_FILES64)

libpng_configure64: $(LIBPNG_CONFIGURE_FILES64)

libpng_configure32: $(LIBPNG_CONFIGURE_FILES32)

libpng: libpng32 libpng64

# Make silliness to make both the explicit libpng goal and the outfile come from the same recipe
.INTERMEDIATE: libpng64-intermediate libpng32-intermediate

$(LIBPNG_OUT64) libpng64: libpng64-intermediate

$(LIBPNG_OUT32) libpng32: libpng32-intermediate

libpng64-intermediate: $(LIBPNG_CONFIGURE_FILES64)
	$(MAKE) -C $(LIBPNG_OBJ64)
	$(MAKE) -C $(LIBPNG_OBJ64) install
	cp $(LIBPNG_OUT64) $(DST_DIR)/lib64
	$(STRIP) $(DST_DIR)/lib64/libprotonpng16.dylib

libpng32-intermediate: $(LIBPNG_CONFIGURE_FILES32)
	$(MAKE) -C $(LIBPNG_OBJ32)
	$(MAKE) -C $(LIBPNG_OBJ32) install
	cp $(LIBPNG_OUT32) $(DST_DIR)/lib
	$(STRIP) $(DST_DIR)/lib/libprotonpng16.dylib

endif # ifeq ($(OSX),1)

##
## libjpeg
##

ifeq ($(OSX),1) # currently only for OS X builds

## Synthetic libjpeg for autogen
$(LIBJPEGPROTON)/.created: $(LIBJPEG) $(MAKEFILE_DEP) $(LIBJPEG)/configure.ac
	rm -rf ./$(LIBJPEGPROTON)
	mkdir -p $(LIBJPEGPROTON)/
	cd $(LIBJPEGPROTON)/ && \
		ln -sfv ../$(LIBJPEG)/* .
	rm -f $(LIBJPEGPROTON)/configure
	cd $(LIBJPEGPROTON) && autoreconf -fiv
	touch $(LIBJPEGPROTON)/.created

$(LIBJPEGPROTON): $(LIBJPEGPROTON)/.created

## Create & configure object directory for libjpeg

LIBJPEG_CONFIGURE_FILES32 := $(LIBJPEG_OBJ32)/Makefile
LIBJPEG_CONFIGURE_FILES64 := $(LIBJPEG_OBJ64)/Makefile

# 64-bit configure
$(LIBJPEG_CONFIGURE_FILES64): $(LIBJPEG_AUTOGEN_FILES) $(MAKEFILE_DEP) $(LIBJPEGPROTON) | $(LIBJPEG_OBJ64)
	cd $(dir $@) && \
		$(abspath $(LIBJPEGPROTON)/configure) --prefix=$(abspath $(TOOLS_DIR64)) --host x86_64-apple-darwin

# 32bit-configure
$(LIBJPEG_CONFIGURE_FILES32): $(LIBJPEG_AUTOGEN_FILES) $(MAKEFILE_DEP) $(LIBJPEGPROTON) | $(LIBJPEG_OBJ32)
	cd $(dir $@) && \
		$(abspath $(LIBJPEGPROTON)/configure) --prefix=$(abspath $(TOOLS_DIR32)) --host i686-apple-darwin \
			CFLAGS='-O3 -g -m32' LDFLAGS=-m32

## Libjpeg goals
LIBJPEG_TARGETS = libjpeg libjpeg32 libjpeg64 libjpeg_configure libjpeg_configure32 libjpeg_configure64

ALL_TARGETS += $(LIBJPEG_TARGETS)
GOAL_TARGETS_LIBS += libjpeg

.PHONY: $(LIBJPEG_TARGETS)

libjpeg_configure: $(LIBJPEG_CONFIGURE_FILES32) $(LIBJPEG_CONFIGURE_FILES64)

libjpeg_configure64: $(LIBJPEG_CONFIGURE_FILES64)

libjpeg_configure32: $(LIBJPEG_CONFIGURE_FILES32)

libjpeg: libjpeg32 libjpeg64

# Make silliness to make both the explicit libjpeg goal and the outfile come from the same recipe
.INTERMEDIATE: libjpeg64-intermediate libjpeg32-intermediate

$(LIBJPEG_OUT64) libjpeg64: libjpeg64-intermediate

$(LIBJPEG_OUT32) libjpeg32: libjpeg32-intermediate

libjpeg64-intermediate: $(LIBJPEG_CONFIGURE_FILES64)
	$(MAKE) -C $(LIBJPEG_OBJ64)
	$(MAKE) -C $(LIBJPEG_OBJ64) install
	mv $(TOOLS_DIR64)/lib/lib{,proton}jpeg.dylib
	cp $(LIBJPEG_OUT64) $(DST_DIR)/lib64
	$(STRIP) $(DST_DIR)/lib64/libprotonjpeg.dylib

libjpeg32-intermediate: $(LIBJPEG_CONFIGURE_FILES32)
	$(MAKE) -C $(LIBJPEG_OBJ32)
	$(MAKE) -C $(LIBJPEG_OBJ32) install
	mv $(TOOLS_DIR32)/lib/lib{,proton}jpeg.dylib
	cp $(LIBJPEG_OUT32) $(DST_DIR)/lib
	$(STRIP) $(DST_DIR)/lib/libprotonjpeg.dylib

endif # ifeq ($(OSX),1)


##
## moltenvk
##

ifeq ($(OSX),1) # currently only for OS X builds
ifneq ($(NO_DXVK),1) # May be disabled by configure

## Symlink'd moltenvk directory because it has hard-coded build steps that look for ./Package
$(MOLTENVKPROTON)/.created: $(MOLTENVK) $(MAKEFILE_DEP) $(MOLTENVK_OBJ) | $(MOLTENVK)/External
	rm -rf ./$(MOLTENVKPROTON)
	mkdir -p $(MOLTENVKPROTON)/
	cd $(MOLTENVKPROTON)/ && \
		ln -sfv ../$(MOLTENVK)/* .
	# Package -> obj-moltenvk/Package
	rm -f $(MOLTENVKPROTON)/Package
	cd $(MOLTENVKPROTON)/ && \
		ln -sv ../$(MOLTENVK_OBJ)/Package
	touch $(MOLTENVKPROTON)/.created

# This needs to exist before we do symlinking
$(MOLTENVK)/External:
	mkdir -p $@

$(MOLTENVKPROTON): $(MOLTENVKPROTON)/.created

## Moltenvk goals

.PHONY: moltenvk

ALL_TARGETS += moltenvk
GOAL_TARGETS_LIBS += moltenvk

# Make silliness to make both the explicit moltenvk goal and the outfile come from the same recipe
.INTERMEDIATE: moltenvk-intermediate

$(MOLTENVK_OUT) moltenvk: moltenvk-intermediate

# The ./fetchDependencies step is not contained within the build directory, but the way it works is very messy to split
# out as such.  We could run it in the symlink'd directory, but then we'd be fetching all of its dependencies per build,
# when they are invariant.  This should still work decently with multiple builds, though perhaps not running them in
# parallel.
moltenvk-intermediate: $(MAKEFILE_DEP) $(MOLTENVKPROTON) | $(MOLTENVK_OBJ)
	cd $(MOLTENVK) && ./fetchDependencies
	mkdir -p $(MOLTENVK_OBJ)/Package
	cd $(MOLTENVKPROTON) && xcodebuild -scheme 'MoltenVK (Release)' build -derivedDataPath $(abspath $(MOLTENVK_OBJ)) \
		BUILD_DIR=$(abspath $(MOLTENVK_OBJ)) CC= CXX=

	cp -a $(MOLTENVK_OBJ)/Package/Release/MoltenVK/include/* $(TOOLS_DIR64)/include/
	cp -a $(MOLTENVK_OBJ)/Package/Release/MoltenVK/macOS/libMoltenVK.dylib $(TOOLS_DIR64)/lib/
	cp -a $(MOLTENVK_OBJ)/Package/Release/MoltenVK/macOS/libMoltenVK.dylib $(DST_DIR)/lib64/

endif # ifneq($(NO_DXVK),1)
endif # ifeq ($(OSX),1)

##
## libsdl
##

ifeq ($(OSX),1) # currently only for OS X builds

## Synthetic libsdl for autogen
$(LIBSDLPROTON)/.created: $(LIBSDL) $(MAKEFILE_DEP) $(LIBSDL)/configure.in $(LIBSDL)/autogen.sh
	rm -rf ./$(LIBSDLPROTON)
	mkdir -p $(LIBSDLPROTON)/
	cd $(LIBSDLPROTON)/ && \
		ln -sfv ../$(LIBSDL)/* .
	rm -f $(LIBSDLPROTON)/configure
	cd $(LIBSDLPROTON) && ./autogen.sh
	touch $(LIBSDLPROTON)/.created

$(LIBSDLPROTON): $(LIBSDLPROTON)/.created

## Create & configure object directory for libsdl

LIBSDL_CONFIGURE_FILES32 := $(LIBSDL_OBJ32)/Makefile
LIBSDL_CONFIGURE_FILES64 := $(LIBSDL_OBJ64)/Makefile

# 64-bit configure
$(LIBSDL_CONFIGURE_FILES64): $(LIBSDL_AUTOGEN_FILES) $(MAKEFILE_DEP) $(LIBSDLPROTON) | $(LIBSDL_OBJ64)
	cd $(dir $@) && \
		$(abspath $(LIBSDLPROTON)/configure) --prefix=$(abspath $(TOOLS_DIR64)) --host x86_64-apple-darwin

# 32bit-configure
$(LIBSDL_CONFIGURE_FILES32): $(LIBSDL_AUTOGEN_FILES) $(MAKEFILE_DEP) $(LIBSDLPROTON) | $(LIBSDL_OBJ32)
	cd $(dir $@) && \
		$(abspath $(LIBSDLPROTON)/configure) --prefix=$(abspath $(TOOLS_DIR32)) --host i686-apple-darwin \
			CFLAGS='-m32 -g -O2' LDFLAGS=-m32

## Libsdl goals
LIBSDL_TARGETS = libsdl libsdl32 libsdl64 libsdl_configure libsdl_configure32 libsdl_configure64

ALL_TARGETS += $(LIBSDL_TARGETS)
GOAL_TARGETS_LIBS += libsdl

.PHONY: $(LIBSDL_TARGETS)

libsdl_configure: $(LIBSDL_CONFIGURE_FILES32) $(LIBSDL_CONFIGURE_FILES64)

libsdl_configure64: $(LIBSDL_CONFIGURE_FILES64)

libsdl_configure32: $(LIBSDL_CONFIGURE_FILES32)

libsdl: libsdl32 libsdl64

# Make silliness to make both the explicit libsdl goal and the outfile come from the same recipe
.INTERMEDIATE: libsdl64-intermediate libsdl32-intermediate

$(LIBSDL_OUT64) libsdl64: libsdl64-intermediate

$(LIBSDL_OUT32) libsdl32: libsdl32-intermediate

libsdl64-intermediate: $(LIBSDL_CONFIGURE_FILES64)
	$(MAKE) -C $(LIBSDL_OBJ64)
	$(MAKE) -C $(LIBSDL_OBJ64) install-hdrs
	$(MAKE) -C $(LIBSDL_OBJ64) install-lib
	cp $(LIBSDL_OUT64) $(DST_DIR)/lib64
	$(STRIP) $(DST_DIR)/lib64/libSDL2.dylib

libsdl32-intermediate: $(LIBSDL_CONFIGURE_FILES32)
	$(MAKE) -C $(LIBSDL_OBJ32)
	$(MAKE) -C $(LIBSDL_OBJ32) install-hdrs
	$(MAKE) -C $(LIBSDL_OBJ32) install-lib
	cp $(LIBSDL_OUT32) $(DST_DIR)/lib
	$(STRIP) $(DST_DIR)/lib/libSDL2.dylib

endif # ifeq ($(OSX),1)

##
## OpenAL
##

## Create & configure object directory for openal

OPENAL_CONFIGURE_FILES32 := $(OPENAL_OBJ32)/Makefile
OPENAL_CONFIGURE_FILES64 := $(OPENAL_OBJ64)/Makefile

# 64bit-configure
$(OPENAL_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(OPENAL_CONFIGURE_FILES64): $(OPENAL)/CMakeLists.txt $(MAKEFILE_DEP) $(CMAKE_BIN64) | $(OPENAL_OBJ64)
	cd $(dir $@) && \
		../$(CMAKE_BIN64) $(abspath $(OPENAL)) -DCMAKE_INSTALL_PREFIX="$(abspath $(TOOLS_DIR64))" \
			-DALSOFT_EXAMPLES=Off -DALSOFT_UTILS=Off -DALSOFT_TESTS=Off \
			-DCMAKE_INSTALL_LIBDIR="lib"

# 32-bit configure
$(OPENAL_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(OPENAL_CONFIGURE_FILES32): $(OPENAL)/CMakeLists.txt $(MAKEFILE_DEP) $(CMAKE_BIN32) | $(OPENAL_OBJ32)
	cd $(dir $@) && \
		../$(CMAKE_BIN32) $(abspath $(OPENAL)) \
			-DCMAKE_INSTALL_PREFIX="$(abspath $(TOOLS_DIR32))" \
			-DALSOFT_EXAMPLES=Off -DALSOFT_UTILS=Off -DALSOFT_TESTS=Off \
			-DCMAKE_INSTALL_LIBDIR="lib" \
			-DCMAKE_C_FLAGS="-m32" -DCMAKE_CXX_FLAGS="-m32"

## OpenAL goals
OPENAL_TARGETS = openal openal_configure openal32 openal64 openal_configure32 openal_configure64

ALL_TARGETS += $(OPENAL_TARGETS)
GOAL_TARGETS_LIBS += openal

.PHONY: $(OPENAL_TARGETS)

openal_configure: $(OPENAL_CONFIGURE_FILES32) $(OPENAL_CONFIGURE_FILES64)

openal_configure64: $(OPENAL_CONFIGURE_FILES64)

openal_configure32: $(OPENAL_CONFIGURE_FILES32)

openal: openal32 openal64

openal64: SHELL = $(CONTAINER_SHELL64)
openal64: $(OPENAL_CONFIGURE_FILES64)
	cd $(OPENAL_OBJ64) && \
		$(MAKE) VERBOSE=1 && \
		$(MAKE) install VERBOSE=1 && \
		mkdir -p ../$(DST_DIR)/lib64 && \
		cp -L ../$(TOOLS_DIR64)/lib/libopenal* ../$(DST_DIR)/lib64/ && \
		[ x"$(STRIP)" = x ] || $(STRIP) ../$(DST_DIR)/lib64/libopenal.$(LIB_SUFFIX)


openal32: SHELL = $(CONTAINER_SHELL32)
openal32: $(OPENAL_CONFIGURE_FILES32)
	cd $(OPENAL_OBJ32) && \
		$(MAKE) VERBOSE=1 && \
		$(MAKE) install VERBOSE=1 && \
		mkdir -p ../$(DST_DIR)/lib && \
		cp -L ../$(TOOLS_DIR32)/lib/libopenal* ../$(DST_DIR)/lib/ && \
		[ x"$(STRIP)" = x ] || $(STRIP) ../$(DST_DIR)/lib/libopenal.$(LIB_SUFFIX)


##
## ffmpeg
##

## Create & configure object directory for ffmpeg

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
OPTIONAL_TARGETS += $(FFMPEG_TARGETS)

.PHONY: $(FFMPEG_TARGETS)

ffmpeg_configure: $(FFMPEG_CONFIGURE_FILES32) $(FFMPEG_CONFIGURE_FILES64)

ffmpeg_configure64: $(FFMPEG_CONFIGURE_FILES64)

ffmpeg_configure32: $(FFMPEG_CONFIGURE_FILES32)

ffmpeg: ffmpeg32 ffmpeg64

ffmpeg64: SHELL = $(CONTAINER_SHELL64)
ffmpeg64: $(FFMPEG_CONFIGURE_FILES64)
	cd $(FFMPEG_OBJ64) && \
	$(MAKE) && \
	$(MAKE) install && \
	cp -L ../$(TOOLS_DIR64)/lib/{libavcodec,libavutil}* ../$(DST_DIR)/lib64

ffmpeg32: SHELL = $(CONTAINER_SHELL32)
ffmpeg32: $(FFMPEG_CONFIGURE_FILES32)
	cd $(FFMPEG_OBJ32) && \
	$(MAKE) && \
	$(MAKE) install && \
	cp -L ../$(TOOLS_DIR32)/lib/{libavcodec,libavutil}* ../$(DST_DIR)/lib

##
## lsteamclient
##

## Create & configure object directory for lsteamclient

LSTEAMCLIENT_CONFIGURE_FILES32 := $(LSTEAMCLIENT_OBJ32)/Makefile
LSTEAMCLIENT_CONFIGURE_FILES64 := $(LSTEAMCLIENT_OBJ64)/Makefile

# 64bit-configure
$(LSTEAMCLIENT_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(LSTEAMCLIENT_CONFIGURE_FILES64): $(LSTEAMCLIENT) $(MAKEFILE_DEP) | $(LSTEAMCLIENT_OBJ64) $(WINEMAKER)
	cd $(dir $@) && \
		$(WINEMAKER) --nosource-fix --nolower-include --nodlls --nomsvcrt \
			-DSTEAM_API_EXPORTS \
			-I"../$(TOOLS_DIR64)"/include/ \
			-I"../$(TOOLS_DIR64)"/include/wine/ \
			-I"../$(TOOLS_DIR64)"/include/wine/windows/ \
			-L"../$(TOOLS_DIR64)"/lib64/ \
			-L"../$(TOOLS_DIR64)"/lib64/wine/ \
			--dll ../$(LSTEAMCLIENT) && \
		cp ../$(LSTEAMCLIENT)/Makefile . && \
		echo >> ./Makefile 'SRCDIR := ../$(LSTEAMCLIENT)' && \
		echo >> ./Makefile 'vpath % $$(SRCDIR)' && \
		echo >> ./Makefile 'lsteamclient_dll_LDFLAGS := $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(lsteamclient_dll_LDFLAGS))'

# 32-bit configure
$(LSTEAMCLIENT_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(LSTEAMCLIENT_CONFIGURE_FILES32): $(LSTEAMCLIENT) $(MAKEFILE_DEP) | $(LSTEAMCLIENT_OBJ32) $(WINEMAKER)
	cd $(dir $@) && \
		$(WINEMAKER) --nosource-fix --nolower-include --nodlls --nomsvcrt --wine32 \
			-DSTEAM_API_EXPORTS \
			-I"../$(TOOLS_DIR32)"/include/ \
			-I"../$(TOOLS_DIR32)"/include/wine/ \
			-I"../$(TOOLS_DIR32)"/include/wine/windows/ \
			-L"../$(TOOLS_DIR32)"/lib/ \
			-L"../$(TOOLS_DIR32)"/lib/wine/ \
			--dll ../$(LSTEAMCLIENT) && \
		cp ../$(LSTEAMCLIENT)/Makefile . && \
		echo >> ./Makefile 'SRCDIR := ../$(LSTEAMCLIENT)' && \
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
	cd $(LSTEAMCLIENT_OBJ64) && \
		PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
		CXXFLAGS="-Wno-attributes -O2" CFLAGS="-O2 -g" $(MAKE) && \
		[ x"$(STRIP)" = x ] || $(STRIP) ../$(LSTEAMCLIENT_OBJ64)/lsteamclient.dll.so && \
		cp -a ./lsteamclient.dll.so ../$(DST_DIR)/lib64/wine/

lsteamclient32: SHELL = $(CONTAINER_SHELL32)
lsteamclient32: $(LSTEAMCLIENT_CONFIGURE_FILES32) | $(WINE_BUILDTOOLS32) $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	cd $(LSTEAMCLIENT_OBJ32) && \
		PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
		LDFLAGS="-m32" CXXFLAGS="-m32 -Wno-attributes -O2" CFLAGS="-m32 -O2 -g" \
			$(MAKE) && \
		[ x"$(STRIP)" = x ] || $(STRIP) ../$(LSTEAMCLIENT_OBJ32)/lsteamclient.dll.so && \
		cp -a ./lsteamclient.dll.so ../$(DST_DIR)/lib/wine/

##
## wine
##

## Create & configure object directory for wine

WINE_CONFIGURE_FILES32 := $(WINE_OBJ32)/Makefile
WINE_CONFIGURE_FILES64 := $(WINE_OBJ64)/Makefile

# On OS X we need ordering dependencies on these projects so configure can find them properly
WINE_ORDER_DEPS64 :=
WINE_ORDER_DEPS32 :=
ifeq ($(OSX),1)
	WINE_ORDER_DEPS64 += $(FREETYPE_OUT64) $(LIBPNG_OUT64) $(LIBJPEG_OUT64) $(LIBSDL_OUT64) $(MOLTENVK_OUT)
	WINE_ORDER_DEPS32 += $(FREETYPE_OUT32) $(LIBPNG_OUT32) $(LIBJPEG_OUT32) $(LIBSDL_OUT32) $(MOLTENVK_OUT)
endif

# 64bit-configure
$(WINE_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(WINE_CONFIGURE_FILES64): $(MAKEFILE_DEP) | $(WINE_OBJ64) $(WINE_ORDER_DEPS64)
	cd $(dir $@) && \
		STRIP=$(STRIP_QUOTED) \
		CFLAGS=-I$(abspath $(TOOLS_DIR64))"/include -g -O2" \
		LDFLAGS=-L$(abspath $(TOOLS_DIR64))/lib \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR64))/lib/pkgconfig \
		CC=$(CC_QUOTED) \
		CXX=$(CXX_QUOTED) \
		PNG_CFLAGS=$(PNG64_CFLAGS) \
		PNG_LIBS=$(PNG64_LIBS) \
		JPEG_CFLAGS=$(JPEG64_CFLAGS) \
		JPEG_LIBS=$(JPEG64_LIBS) \
		FREETYPE_CFLAGS=$(FREETYPE64_CFLAGS) \
		FREETYPE_LIBS=$(FREETYPE64_LIBS) \
		../$(WINE)/configure \
			$(FREETYPE64_AUTOCONF) \
			$(JPEG64_AUTOCONF) \
			$(PNG64_AUTOCONF) \
			--without-curses $(WINE_AUTOCONF) \
			--enable-win64 --disable-tests --prefix=$(abspath $(DST_DIR))

# 32-bit configure
$(WINE_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(WINE_CONFIGURE_FILES32): $(MAKEFILE_DEP) | $(WINE_OBJ32) $(WINE_ORDER_DEPS32)
	cd $(dir $@) && \
		STRIP=$(STRIP_QUOTED) \
		CFLAGS=-I$(abspath $(TOOLS_DIR32))"/include -g -O2" \
		LDFLAGS=-L$(abspath $(TOOLS_DIR32))/lib \
		PKG_CONFIG_PATH=$(abspath $(TOOLS_DIR32))/lib/pkgconfig \
		CC=$(CC_QUOTED) \
		CXX=$(CXX_QUOTED) \
		PNG_CFLAGS=$(PNG32_CFLAGS) \
		PNG_LIBS=$(PNG32_LIBS) \
		JPEG_CFLAGS=$(JPEG32_CFLAGS) \
		JPEG_LIBS=$(JPEG32_LIBS) \
		FREETYPE_CFLAGS=$(FREETYPE32_CFLAGS) \
		FREETYPE_LIBS=$(FREETYPE32_LIBS) \
		../$(WINE)/configure \
			$(FREETYPE32_AUTOCONF) \
			$(JPEG32_AUTOCONF) \
			$(PNG32_AUTOCONF) \
			--without-curses $(WINE_AUTOCONF) \
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
	cd $(WINE_OBJ64) && \
		STRIP=$(STRIP_QUOTED) \
			$(MAKE) && \
		INSTALL_PROGRAM_FLAGS=$(INSTALL_PROGRAM_FLAGS) STRIP=$(STRIP_QUOTED) \
			$(MAKE) install-lib && \
		INSTALL_PROGRAM_FLAGS=$(INSTALL_PROGRAM_FLAGS) STRIP=$(STRIP_QUOTED) \
			$(MAKE) \
				prefix=$(abspath $(TOOLS_DIR64)) libdir=$(abspath $(TOOLS_DIR64))/lib64 \
				dlldir=$(abspath $(TOOLS_DIR64))/lib64/wine \
				install-dev install-lib && \
		rm -f ../$(DST_DIR)/bin/{msiexec,notepad,regedit,regsvr32,wineboot,winecfg,wineconsole,winedbg,winefile,winemine,winepath}
		rm -rf ../$(DST_DIR)/share/man/

## This installs 32-bit stuff manually, see
##   https://wiki.winehq.org/Packaging#WoW64_Workarounds
$(WINE_BUILDTOOLS32) wine32: wine32-intermediate

wine32-intermediate: SHELL = $(CONTAINER_SHELL32)
wine32-intermediate: $(WINE_CONFIGURE_FILES32)
	cd $(WINE_OBJ32) && \
		STRIP=$(STRIP_QUOTED) \
			$(MAKE) && \
		INSTALL_PROGRAM_FLAGS=$(INSTALL_PROGRAM_FLAGS) STRIP=$(STRIP_QUOTED) \
			$(MAKE) install-lib && \
		INSTALL_PROGRAM_FLAGS=$(INSTALL_PROGRAM_FLAGS) STRIP=$(STRIP_QUOTED) \
			$(MAKE) \
				prefix=$(abspath $(TOOLS_DIR32)) libdir=$(abspath $(TOOLS_DIR32))/lib \
				dlldir=$(abspath $(TOOLS_DIR32))/lib/wine \
				install-dev install-lib && \
		mkdir -p ../$(DST_DIR)/{lib,bin} && \
		cp -a ../$(WINE_DST32)/lib ../$(DST_DIR)/ && \
		cp -a ../$(WINE_DST32)/bin/wine ../$(DST_DIR)/bin && \
		cp -a ../$(WINE_DST32)/bin/wine-preloader ../$(DST_DIR)/bin/
# TODO not on Darwin^

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
	cd $(VRCLIENT_OBJ64) && \
		CXXFLAGS="-Wno-attributes -std=c++0x -O2 -g" CFLAGS="-O2 -g" PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
			$(MAKE) && \
		PATH=$(abspath $(TOOLS_DIR64))/bin:$(PATH) \
			winebuild --dll --fake-module -E ../$(VRCLIENT)/vrclient_x64/vrclient_x64.spec -o vrclient_x64.dll.fake && \
		[ x"$(STRIP)" = x ] || $(STRIP) ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.so && \
		cp -a ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.so ../$(DST_DIR)/lib64/wine/ && \
		cp -a ../$(VRCLIENT_OBJ64)/vrclient_x64.dll.fake ../$(DST_DIR)/lib64/wine/fakedlls/vrclient_x64.dll

vrclient32: SHELL = $(CONTAINER_SHELL32)
vrclient32: $(VRCLIENT_CONFIGURE_FILES32) | $(WINE_BUILDTOOLS32) $(filter $(MAKECMDGOALS),wine64 wine32 wine)
	cd $(VRCLIENT_OBJ32) && \
		LDFLAGS="-m32" CXXFLAGS="-m32 -Wno-attributes -std=c++0x -O2 -g" CFLAGS="-m32 -O2 -g" PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
			$(MAKE) && \
		PATH=$(abspath $(TOOLS_DIR32))/bin:$(PATH) \
			winebuild --dll --fake-module -E ../$(VRCLIENT32)/vrclient/vrclient.spec -o vrclient.dll.fake && \
		[ x"$(STRIP)" = x ] || $(STRIP) ../$(VRCLIENT_OBJ32)/vrclient.dll.so && \
		cp -a ../$(VRCLIENT_OBJ32)/vrclient.dll.so ../$(DST_DIR)/lib/wine/ && \
		cp -a ../$(VRCLIENT_OBJ32)/vrclient.dll.fake ../$(DST_DIR)/lib/wine/fakedlls/vrclient.dll

##
## cmake -- necessary for openal, not part of steam runtime
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
	cd $(CMAKE_OBJ64) && \
		$(MAKE) && $(MAKE) install && \
		touch ../$(CMAKE_BIN64)

$(CMAKE_BIN32) cmake32: cmake32-intermediate

cmake32-intermediate: SHELL = $(CONTAINER_SHELL32)
cmake32-intermediate: $(CMAKE_CONFIGURE_FILES32) $(filter $(MAKECMDGOALS),cmake32)
	cd $(CMAKE_OBJ32) && \
		$(MAKE) && $(MAKE) install && \
		touch ../$(CMAKE_BIN32)

##
## dxvk
##

# TODO Builds outside container, could simplify a lot if it did not.

## Create & configure object directory for dxvk

ifneq ($(NO_DXVK),1) # May be disabled by configure

DXVK_CONFIGURE_FILES32 := $(DXVK_OBJ32)/build.ninja
DXVK_CONFIGURE_FILES64 := $(DXVK_OBJ64)/build.ninja

# 64bit-configure
$(DXVK_CONFIGURE_FILES64): $(MAKEFILE_DEP) | $(DXVK_OBJ64)
	cd "$(DXVK)" && \
		PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" \
			meson --prefix="$(abspath $(DXVK_OBJ64))" --cross-file build-win64.txt "$(abspath $(DXVK_OBJ64))"

	cd "$(DXVK_OBJ64)" && \
		PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" meson configure -Dbuildtype=release

# 32-bit configure
$(DXVK_CONFIGURE_FILES32): $(MAKEFILE_DEP) | $(DXVK_OBJ32)
	cd "$(DXVK)" && \
		PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" \
			meson --prefix="$(abspath $(DXVK_OBJ32))" --cross-file build-win32.txt "$(abspath $(DXVK_OBJ32))"

	cd "$(DXVK_OBJ32)" && \
		PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" meson configure -Dbuildtype=release

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
	cd "$(DXVK_OBJ64)" && \
		PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" ninja && \
		PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" ninja install

	mkdir -p "$(DST_DIR)/lib64/wine/dxvk"
	cp "$(DXVK_OBJ64)"/bin/dxgi.dll "$(DST_DIR)"/lib64/wine/dxvk
	cp "$(DXVK_OBJ64)"/bin/d3d11.dll "$(DST_DIR)"/lib64/wine/dxvk
	( cd $(SRCDIR) && git submodule status -- dxvk ) > "$(DST_DIR)"/lib64/wine/dxvk/version


dxvk32: $(DXVK_CONFIGURE_FILES32)
	cd "$(DXVK_OBJ32)" && \
		PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" ninja && \
		PATH="$(abspath $(SRCDIR))/glslang/bin/:$(PATH)" ninja install

	mkdir -p "$(DST_DIR)"/lib/wine/dxvk
	cp "$(DXVK_OBJ32)"/bin/dxgi.dll "$(DST_DIR)"/lib/wine/dxvk/
	cp "$(DXVK_OBJ32)"/bin/d3d11.dll "$(DST_DIR)"/lib/wine/dxvk/
	( cd $(SRCDIR) && git submodule status -- dxvk ) > "$(DST_DIR)"/lib/wine/dxvk/version

endif # NO_DXVK

# TODO OS X
#  build_moltenvk

# TODO Tests
#  build_vrclient64_tests
#  build_vrclient32_tests


##
## Targets
##

.PHONY: all all64 all32 default help targets

# Produce a working dist directory by default
default: all dist
.DEFAULT_GOAL := default

# TODO ffmpeg is optional, disabled

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
OTHER_TARGETS := $(filter-out $(ALL_TARGETS),$(GOAL_TARGETS) $(OPTIONAL_TARGETS) $(GOAL_TARGETS64) $(GOAL_TARGETS32) \
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
	$(info Optional targets: $(OPTIONAL_TARGETS))
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
