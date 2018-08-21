##
## Config
##

# FIXME If CC is coming from make's defaults or nowhere, use our own default.  Otherwise respect environment.
ifneq ($(filter default undefined,$(origin CC)),)
	CC = ccache gcc
endif
ifneq ($(filter default undefined,$(origin CXX)),)
	CXX = ccache g++
endif

export CC
export CXX

# Local name of this build, for dist/install steps
BUILD_NAME := proton-localbuild
SRCDIR := ..

# Selected container mode shell
CONTAINER_SHELL_BASE = sudo docker run --rm -i -v $(HOME):$(HOME) -w $(CURDIR) \
                                       -v /etc/passwd:/etc/passwd:ro -u $(shell id -u):$(shell id -g) -h $(shell hostname) \
                                       -v /tmp:/tmp $(SELECTED_CONTAINER) /bin/bash
CONTAINER32 := steamrt-proton-dev32
CONTAINER64 := steamrt-proton-dev
SELECTED_CONTAINER := $(CONTAINER32)
CONTAINER_SHELL32 := $(CONTAINER_SHELL_BASE)
SELECTED_CONTAINER := $(CONTAINER64)
CONTAINER_SHELL64 := $(CONTAINER_SHELL_BASE)
undefine SELECTED_CONTAINER

$(info Testing configured 64bit container)
ifneq ($(shell $(CONTAINER_SHELL64) -c "echo hi"), hi)
$(error "Cannot run commands in 64bit container")
endif
$(info Testing configured 32bit container)
ifneq ($(shell $(CONTAINER_SHELL32) -c "echo hi"), hi)
$(error "Cannot run commands in 32bit container")
endif

# FIXME Don't bother in native
SUBMAKE_JOBS ?= 24
MAKE := make -j$(SUBMAKE_JOBS)

# FIXME OS X-vs-others stuff
LIB_SUFFIX := "so"
STRIP := strip
FREETYPE32_CFLAGS :=
FREETYPE32_LIBS :=
FREETYPE32_AUTOCONF :=
FREETYPE64_CFLAGS :=
FREETYPE64_LIBS :=
FREETYPE64_AUTOCONF :=
PNG32_CFLAGS :=
PNG32_LIBS :=
PNG32_AUTOCONF :=
PNG64_CFLAGS :=
PNG64_LIBS :=
PNG64_AUTOCONF :=
JPEG32_CFLAGS :=
JPEG32_LIBS :=
JPEG32_AUTOCONF :=
JPEG64_CFLAGS :=
JPEG64_LIBS :=
JPEG64_AUTOCONF :=
WITHOUT_X :=

# FIXME Configure stuff needs to set these maybe
INSTALL_PROGRAM_FLAGS :=

# Many of the configure steps below depend on the makefile itself, such that they are dirtied by changing the recipes
# that create them.  This can be annoying when working on the makefile, building with NO_MAKEFILE_DEPENDENCY=1 disables
# this.
MAKEFILE_DEP := ./Makefile
ifeq ($(NO_MAKEFILE_DEPENDENCY),1)
MAKEFILE_DEP :=
endif

COMPAT_MANIFEST_TEMPLATE := $(SRCDIR)/compatibilitytool.vdf.template

TOOLS_DIR32 := ./obj-tools32
TOOLS_DIR64 := ./obj-tools64
DST_BASE := ./dist
DST_DIR := $(DST_BASE)/dist

FREETYPE := $(SRCDIR)/freetype2
FREETYPE_OBJ32 := ./obj-freetype32
FREETYPE_OBJ64 := ./obj-freetype64

OPENAL := $(SRCDIR)/openal-soft
OPENAL_OBJ32 := ./obj-openal32
OPENAL_OBJ64 := ./obj-openal64

FFMPEG := $(SRCDIR)/ffmpeg
FFMPEG_OBJ32 := ./obj-ffmpeg32
FFMPEG_OBJ64 := ./obj-ffmpeg64
FFMPEG_CROSS_CFLAGS := # FIXME Both of these are -m32 on Darwin
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

VRCLIENT := $(SRCDIR)/vrclient_x64
VRCLIENT32 := ./syn-vrclient32
VRCLIENT_OBJ64 := ./obj-vrclient64
VRCLIENT_OBJ32 := ./obj-vrclient32

DXVK := $(SRCDIR)/dxvk
DXVK_OBJ32 := ./obj-dxvk32
DXVK_OBJ64 := ./obj-dxvk64

## Object directories
OBJ_DIRS := $(TOOLS_DIR32)        $(TOOLS_DIR64)        \
            $(FREETYPE_OBJ32)     $(FREETYPE_OBJ64)     \
            $(OPENAL_OBJ32)       $(OPENAL_OBJ64)       \
            $(FFMPEG_OBJ32)       $(FFMPEG_OBJ64)       \
            $(LSTEAMCLIENT_OBJ32) $(LSTEAMCLIENT_OBJ64) \
            $(WINE_OBJ32)         $(WINE_OBJ64)         \
            $(VRCLIENT_OBJ32)     $(VRCLIENT_OBJ64)     \
            $(DXVK_OBJ32)         $(DXVK_OBJ64)

$(OBJ_DIRS):
	mkdir -p $@

##
## Targets
##

# FIXME OS X-only targets freetype

.PHONY: all all64 all32

GOAL_TARGETS_LIBS := openal ffmpeg lsteamclient vrclient dxvk
GOAL_TARGETS      := wine $(GOAL_TARGETS_LIBS)

all: $(GOAL_TARGETS)

all32: $(addsuffix 32,$(GOAL_TARGETS))

all64: $(addsuffix 64,$(GOAL_TARGETS))

# Libraries (not wine) only -- wine has a length install step that runs unconditionally, so this is useful for updating
# incremental builds when not iterating on wine itself.

all-lib: $(GOAL_TARGETS_LIBS)

all32-lib: $(addsuffix 32,$(GOAL_TARGETS_LIBS))

all64-lib: $(addsuffix 64,$(GOAL_TARGETS_LIBS))

# Explicit reconfigure all targets
all_configure: $(addsuffix _configure,$(GOAL_TARGETS))

all32_configure: $(addsuffix 32_configure,$(GOAL_TARGETS))

all64_configure: $(addsuffix 64_configure,$(GOAL_TARGETS))

##
## install -- steps to finalize the install
##

# FIXME Missing license step

$(DST_DIR):
	mkdir -p $@

DIST_COPY_FILES := toolmanifest.vdf filelock.py proton user_settings.sample.py
DIST_COPY_TARGETS := $(addprefix $(DST_BASE)/,$(DIST_COPY_FILES))
DIST_VERSION := $(DST_DIR)/version
DIST_VERSION_OUTER := $(DST_BASE)/version
DIST_OVR32 := $(DST_DIR)/lib/wine/dxvk/openvr_api_dxvk.dll
DIST_OVR64 := $(DST_DIR)/lib64/wine/dxvk/openvr_api_dxvk.dll
DIST_PREFIX := $(DST_DIR)/share/default_pfx/
DIST_COMPAT_MANIFEST := $(DST_BASE)/compatibilitytool.vdf

DIST_TARGETS := $(DIST_COPY_TARGETS) $(DIST_VERSION) $(DIST_VERSION_OUTER) $(DIST_OVR32) $(DIST_OVR64) $(DIST_COMPAT_MANIFEST)

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

# Only drag in WINE_OUT if they need to be built at all, otherwise this doesn't imply a rebuild of wine.  If wine is in
# the explicit targets, specify that this should occur after.
dist: $(DIST_TARGETS) | $(WINE_OUT) $(filter $(MAKECMDGOALS),wine64 wine32 wine) $(DST_DIR)
	WINEPREFIX=$(abspath $(DIST_PREFIX)) $(WINE_OUT_BIN) wineboot && \
		WINEPREFIX=$(abspath $(DIST_PREFIX)) $(WINE_OUT_SERVER) -w

##
## freetype
##

# FIXME OS X, not final

## Autogen steps for freetype
FREETYPE_AUTOGEN_FILES := $(FREETYPE)/builds/unix/configure

$(FREETYPE_AUTOGEN_FILES): $(FREETYPE)/builds/unix/configure.raw $(FREETYPE)/autogen.sh
	cd $(FREETYPE) && ./autogen.sh

## Create & configure object directory for freetype

# FIXME Configure had --prefix="$TOOLS_DIR32"
FREETYPE_CONFIGURE_FILES32 := $(FREETYPE_OBJ32)/unix-cc.mk $(FREETYPE_OBJ32)/Makefile
FREETYPE_CONFIGURE_FILES64 := $(FREETYPE_OBJ64)/unix-cc.mk $(FREETYPE_OBJ64)/Makefile

# 64-bit configure
# FIXME --prefix="$TOOLS_DIR64"
$(FREETYPE_CONFIGURE_FILES64): $(FREETYPE_AUTOGEN_FILES) $(MAKEFILE_DEP) | $(FREETYPE_OBJ64)
	cd $(dir $@) && \
		$(abspath $(FREETYPE)/configure) CC="$(CC)" CXX="$(CXX)" --without-png --host x86_64-apple-darwin \
				PKG_CONFIG=false && \
			echo 'LIBRARY := libprotonfreetype' >> unix-cc.mk

# 32bit-configure
$(FREETYPE_CONFIGURE_FILES32): $(FREETYPE_AUTOGEN_FILES) $(MAKEFILE_DEP) | $(FREETYPE_OBJ32)
	cd $(dir $@) && \
		$(abspath $(FREETYPE)/configure) CC="$(CC)" CXX="$(CXX)" --without-png --host i686-apple-darwin \
			CFLAGS='-m32 -g -O2' LDFLAGS=-m32 PKG_CONFIG=false && \
		echo 'LIBRARY := libprotonfreetype' >> unix-cc.mk

## Freetype goals

# FIXME freetype has some output-to-toolsdir output file... no copy-from-tools step for dist

.PHONY: freetype freetype_autogen freetype_configure freetype_configure32 freetype_configure64

freetype_configure: $(FREETYPE_CONFIGURE_FILES32) $(FREETYPE_CONFIGURE_FILES64)

freetype_configure64: $(FREETYPE_CONFIGURE_FILES64)

freetype_configure32: $(FREETYPE_CONFIGURE_FILES32)

freetype_autogen: $(FREETYPE_AUTOGEN_FILES)

freetype: $(FREETYPE_CONFIGURE_FILES32) $(FREETYPE_CONFIGURE_FILES64)

##
## OpenAL
##

## Create & configure object directory for openal

OPENAL_CONFIGURE_FILES32 := $(OPENAL_OBJ32)/Makefile
OPENAL_CONFIGURE_FILES64 := $(OPENAL_OBJ64)/Makefile


# 64bit-configure
$(OPENAL_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(OPENAL_CONFIGURE_FILES64): $(OPENAL)/CMakeLists.txt $(MAKEFILE_DEP) | $(OPENAL_OBJ64)
	cd $(dir $@) && \
		cmake $(abspath $(OPENAL)) -DCMAKE_INSTALL_PREFIX="$(abspath $(TOOLS_DIR64))" \
			-DALSOFT_EXAMPLES=Off -DALSOFT_UTILS=Off -DALSOFT_TESTS=Off \
			-DCMAKE_INSTALL_LIBDIR="lib"

# 32-bit configure
$(OPENAL_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(OPENAL_CONFIGURE_FILES32): $(OPENAL)/CMakeLists.txt $(MAKEFILE_DEP) | $(OPENAL_OBJ32)
	cd $(dir $@) && \
		cmake $(abspath $(OPENAL)) \
			-DCMAKE_INSTALL_PREFIX="$(abspath $(TOOLS_DIR32))" \
			-DALSOFT_EXAMPLES=Off -DALSOFT_UTILS=Off -DALSOFT_TESTS=Off \
			-DCMAKE_INSTALL_LIBDIR="lib" \
			-DCMAKE_C_FLAGS="-m32" -DCMAKE_CXX_FLAGS="-m32"

## OpenAL goals

.PHONY: openal openal_configure openal32 openal64 openal_configure32 openal_configure64

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
			--cc="$(CC)" --cxx="$(CXX)" \
			--prefix="$(abspath $(TOOLS_DIR64))" \
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
		# ffmpeg's configure script doesn't update the timestamp on this guy in the case of a no-op
		[ ! -f ./Makefile ] || touch ./Makefile

# 32-bit configure
$(FFMPEG_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(FFMPEG_CONFIGURE_FILES32): $(FFMPEG)/configure $(MAKEFILE_DEP) | $(FFMPEG_OBJ32)
	cd $(dir $@) && \
		$(abspath $(FFMPEG))/configure \
			--cc="$(CC)" --cxx="$(CXX)" \
			--prefix="$(abspath $(TOOLS_DIR32))" \
			--extra-cflags="$(FFMPEG_CROSS_CFLAGS)" --extra-ldflags="$(FFMPEG_CROSS_LDFLAGS)" \
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
		# ffmpeg's configure script doesn't update the timestamp on this guy in the case of a no-op
		[ ! -f ./Makefile ] || touch ./Makefile

## ffmpeg goals

# FIXME ffmpeg is optional in build_proton

.PHONY: ffmpeg ffmpeg_configure ffmpeg32 ffmpeg64 ffmpeg_configure32 ffmpeg_configure64

ffmpeg_configure: $(FFMPEG_CONFIGURE_FILES32) $(FFMPEG_CONFIGURE_FILES64)

ffmpeg_configure64: $(FFMPEG_CONFIGURE_FILES64)

ffmpeg_configure32: $(FFMPEG_CONFIGURE_FILES32)

ffmpeg: ffmpeg32 ffmpeg64

ffmpeg64: SHELL = $(CONTAINER_SHELL64)
ffmpeg64: $(FFMPEG_CONFIGURE_FILES64)
	cd $(FFMPEG_OBJ64) && \
	$(MAKE) && \
	$(MAKE) install

ffmpeg32: SHELL = $(CONTAINER_SHELL32)
ffmpeg32: $(FFMPEG_CONFIGURE_FILES32)
	cd $(FFMPEG_OBJ32) && \
	$(MAKE) && \
	$(MAKE) install

##
## lsteamclient
##

## Create & configure object directory for lsteamclient

LSTEAMCLIENT_CONFIGURE_FILES32 := $(LSTEAMCLIENT_OBJ32)/Makefile
LSTEAMCLIENT_CONFIGURE_FILES64 := $(LSTEAMCLIENT_OBJ64)/Makefile

# 64bit-configure
$(LSTEAMCLIENT_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(LSTEAMCLIENT_CONFIGURE_FILES64): $(LSTEAMCLIENT) $(WINEMAKER) $(MAKEFILE_DEP) | $(LSTEAMCLIENT_OBJ64)
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
		# Point makefile back at srcdir
		echo >> ./Makefile 'SRCDIR := ../$(LSTEAMCLIENT)' && \
		echo >> ./Makefile 'vpath % $$(SRCDIR)' && \
		echo >> ./Makefile 'lsteamclient_dll_LDFLAGS := $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(lsteamclient_dll_LDFLAGS))'

# 32-bit configure
$(LSTEAMCLIENT_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(LSTEAMCLIENT_CONFIGURE_FILES32): $(LSTEAMCLIENT) $(WINEMAKER) $(MAKEFILE_DEP) | $(LSTEAMCLIENT_OBJ32)
	cd $(dir $@) && \
		$(WINEMAKER) --nosource-fix --nolower-include --nodlls --nomsvcrt --wine32 \
			-DSTEAM_API_EXPORTS \
			-I"../$(TOOLS_DIR32)"/include/ \
			-I"../$(TOOLS_DIR32)"/include/wine/ \
			-I"../$(TOOLS_DIR32)"/include/wine/windows/ \
			-L"../$(TOOLS_DIR32)"/lib/ \
			-L"../$(TOOLS_DIR32)"/lib/wine/ \
			--dll ../$(LSTEAMCLIENT) && \
		cp $(LSTEAMCLIENT)/Makefile . && \
		# Point makefile back at srcdir
		echo >> ./Makefile 'SRCDIR := ../$(LSTEAMCLIENT)' && \
		echo >> ./Makefile 'vpath % $$(SRCDIR)' && \
		echo >> ./Makefile 'lsteamclient_dll_LDFLAGS := -m32 $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(lsteamclient_dll_LDFLAGS))'

## lsteamclient goals

.PHONY: lsteamclient lsteamclient_configure lsteamclient32 lsteamclient64 lsteamclient_configure32 lsteamclient_configure64

lsteamclient_configure: $(LSTEAMCLIENT_CONFIGURE_FILES32) $(LSTEAMCLIENT_CONFIGURE_FILES64)

lsteamclient_configure64: $(LSTEAMCLIENT_CONFIGURE_FILES64)

lsteamclient_configure32: $(LSTEAMCLIENT_CONFIGURE_FILES32)

lsteamclient: lsteamclient32 lsteamclient64

lsteamclient64: SHELL = $(CONTAINER_SHELL64)
lsteamclient64: $(LSTEAMCLIENT_CONFIGURE_FILES64)
	cd $(LSTEAMCLIENT_OBJ64) && \
		CXXFLAGS="-Wno-attributes -O2" CFLAGS="-O2 -g" PATH="$(TOOLS_DIR64)/bin:$(PATH)" $(MAKE)

	[ x"$(STRIP)" = x ] || $(STRIP) "$(LSTEAMCLIENT_OBJ64)"/lsteamclient.dll.so
	cp -a $(LSTEAMCLIENT_OBJ64)/lsteamclient.dll.so "$(DST_DIR)"/lib64/wine/

lsteamclient32: SHELL = $(CONTAINER_SHELL32)
lsteamclient32: $(LSTEAMCLIENT_CONFIGURE_FILES32)
	cd $(LSTEAMCLIENT_OBJ32) && \
		LDFLAGS="-m32" CXXFLAGS="-m32 -Wno-attributes -O2" CFLAGS="-m32 -O2 -g" PATH="$(TOOLS_DIR32)/bin:$(PATH)" \
			$(MAKE)

	[ x"$(STRIP)" = x ] || $(STRIP) "$(LSTEAMCLIENT_OBJ32)"/lsteamclient.dll.so
	cp -a $(LSTEAMCLIENT_OBJ32)/lsteamclient.dll.so "$(DST_DIR)"/lib/wine/

##
## wine
##

## Create & configure object directory for wine

WINE_CONFIGURE_FILES32 := $(WINE_OBJ32)/Makefile
WINE_CONFIGURE_FILES64 := $(WINE_OBJ64)/Makefile

# 64bit-configure
$(WINE_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(WINE_CONFIGURE_FILES64): $(MAKEFILE_DEP) | $(WINE_OBJ64)
	cd $(dir $@) && \
	STRIP="$(STRIP)" \
	CFLAGS="-I$(abspath $(TOOLS_DIR64))/include -g -O2" \
	LDFLAGS="-L$(abspath $(TOOLS_DIR64))/lib" \
	PKG_CONFIG_PATH="$(abspath $(TOOLS_DIR64))/lib/pkgconfig" \
	CC="$(CC)" \
	CXX="$(CXX)" \
	PNG_CFLAGS="$(PNG64_CFLAGS)" \
	PNG_LIBS="$(PNG64_LIBS)" \
	JPEG_CFLAGS="$(JPEG64_CFLAGS)" \
	JPEG_LIBS="$(JPEG64_LIBS)" \
	FREETYPE_CFLAGS="$(FREETYPE64_CFLAGS)" \
	FREETYPE_LIBS="$(FREETYPE64_LIBS)" \
	../$(WINE)/configure \
		$(FREETYPE64_AUTOCONF) \
		$(JPEG64_AUTOCONF) \
		$(PNG64_AUTOCONF) \
		--without-curses $(WITHOUT_X) \
		--enable-win64 --disable-tests --prefix="$(abspath $(DST_DIR))"

# 32-bit configure
$(WINE_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(WINE_CONFIGURE_FILES32): $(MAKEFILE_DEP) | $(WINE_OBJ32)
	cd $(dir $@) && \
	STRIP="$(STRIP)" \
	CFLAGS="-I$(abspath $(TOOLS_DIR32))/include -g -O2" \
	LDFLAGS="-L$(abspath $(TOOLS_DIR32))/lib" \
	PKG_CONFIG_PATH="$(abspath $(TOOLS_DIR32))/lib/pkgconfig" \
	CC="$(CC)" \
	CXX="$(CXX)" \
	PNG_CFLAGS="$(PNG32_CFLAGS)" \
	PNG_LIBS="$(PNG32_LIBS)" \
	JPEG_CFLAGS="$(JPEG32_CFLAGS)" \
	JPEG_LIBS="$(JPEG32_LIBS)" \
	FREETYPE_CFLAGS="$(FREETYPE32_CFLAGS)" \
	FREETYPE_LIBS="$(FREETYPE32_LIBS)" \
	../$(WINE)/configure \
		$(FREETYPE32_AUTOCONF) \
		$(JPEG32_AUTOCONF) \
		$(PNG32_AUTOCONF) \
		--without-curses $(WITHOUT_X) \
		--disable-tests --prefix="$(abspath $(WINE_DST32))"

## wine goals

.PHONY: wine wine_configure wine32 wine64 wine_configure32 wine_configure64

wine_configure: $(WINE_CONFIGURE_FILES32) $(WINE_CONFIGURE_FILES64)

wine_configure64: $(WINE_CONFIGURE_FILES64)

wine_configure32: $(WINE_CONFIGURE_FILES32)

wine: wine32 wine64

# WINE_OUT are outputs needed by other rules, though we don't explicitly track all state here -- make all or make wine
# are needed to ensure all deps are up to date, this just ensures 'make dist' will trag in wine if you've never built
# wine.
$(WINE_OUT) wine64: SHELL = $(CONTAINER_SHELL64)
$(WINE_OUT) wine64: $(WINE_CONFIGURE_FILES64)
	+cd $(WINE_OBJ64) && \
	env STRIP="$(STRIP)" $(MAKE) && \
	INSTALL_PROGRAM_FLAGS="$(INSTALL_PROGRAM_FLAGS)" STRIP="$(STRIP)" $(MAKE) install-lib && \
	INSTALL_PROGRAM_FLAGS="$(INSTALL_PROGRAM_FLAGS)" STRIP="$(STRIP)" $(MAKE) \
		prefix="$(abspath $(TOOLS_DIR64))" libdir="$(abspath $(TOOLS_DIR64))/lib64" \
		dlldir="$(abspath $(TOOLS_DIR64))/lib64/wine" \
		install-dev install-lib

	rm -f "$(DST_DIR)"/bin/{msiexec,notepad,regedit,regsvr32,wineboot,winecfg,wineconsole,winedbg,winefile,winemine,winepath}
	rm -rf "$(DST_DIR)/share/man/"

wine32: SHELL = $(CONTAINER_SHELL32)
wine32: $(WINE_CONFIGURE_FILES32)
	cd $(WINE_OBJ32) && \
	STRIP="$(STRIP)" \
		$(MAKE) $(SUBMAKE_FLAGS) && \
	INSTALL_PROGRAM_FLAGS="$(INSTALL_PROGRAM_FLAGS)" STRIP="$(STRIP)" \
		$(MAKE) $(SUBMAKE_FLAGS) install-lib && \
	INSTALL_PROGRAM_FLAGS="$(INSTALL_PROGRAM_FLAGS)" STRIP="$(STRIP)" \
		$(MAKE) $(SUBMAKE_FLAGS) \
			prefix="$(abspath $(TOOLS_DIR32))" libdir="$(abspath $(TOOLS_DIR32))/lib" \
			dlldir="$(abspath $(TOOLS_DIR32))/lib/wine" \
			install-dev install-lib && \
	# installing 32-bit stuff manually, see
	#   https://wiki.winehq.org/Packaging#WoW64_Workarounds
	cp -a "../$(WINE_DST32)"/lib "../$(DST_DIR)"/ && \
	cp -a "../$(WINE_DST32)"/bin/wine "../$(DST_DIR)"/bin && \
	# FIXME not on Darwin
	cp -a "../$(WINE_DST32)"/bin/wine-preloader "../$(DST_DIR)"/bin/

##
## vrclient
##

## Create & configure object directory for vrclient

VRCLIENT_CONFIGURE_FILES32 := $(VRCLIENT_OBJ32)/Makefile
VRCLIENT_CONFIGURE_FILES64 := $(VRCLIENT_OBJ64)/Makefile

# The source directory for vrclient32 is a synthetic symlink clone of the oddly named vrclient_x64 with the spec files
# renamed.
$(VRCLIENT32): SHELL = $(CONTAINER_SHELL32)
$(VRCLIENT32): $(VRCLIENT) $(MAKEFILE_DEP)
	rm -rf ./$(VRCLIENT32)
	mkdir -p $(VRCLIENT32)/vrclient
	cd $(VRCLIENT32)/vrclient && \
		ln -sfv ../../$(VRCLIENT)/vrclient_x64/*.{c,cpp,dat,h,spec} .
	mv $(VRCLIENT32)/vrclient/vrclient_x64.spec $(VRCLIENT32)/vrclient/vrclient.spec

# 64bit-configure
$(VRCLIENT_CONFIGURE_FILES64): SHELL = $(CONTAINER_SHELL64)
$(VRCLIENT_CONFIGURE_FILES64): $(MAKEFILE_DEP) $(VRCLIENT) $(VRCLIENT)/vrclient_x64 | $(VRCLIENT_OBJ64)
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
		cp ../$(VRCLIENT)/vrclient_x64/Makefile ../$(dir $@) && \
		# Point makefile back at srcdir
		echo >> ../$(dir $@)/Makefile 'SRCDIR := ../$(VRCLIENT)/vrclient_x64' && \
		echo >> ../$(dir $@)/Makefile 'vpath % $$(SRCDIR)' && \
		echo >> ../$(dir $@)/Makefile 'vrclient_x64_dll_LDFLAGS := $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(vrclient_x64_dll_LDFLAGS))'

# 32-bit configure
$(VRCLIENT_CONFIGURE_FILES32): SHELL = $(CONTAINER_SHELL32)
$(VRCLIENT_CONFIGURE_FILES32): $(MAKEFILE_DEP) $(VRCLIENT32) | $(VRCLIENT_OBJ32)
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
	# Point makefile back at srcdir
	echo >> $(dir $@)/Makefile 'SRCDIR := ../$(VRCLIENT32)/vrclient' && \
	echo >> $(dir $@)/Makefile 'vpath % $$(SRCDIR)' && \
	echo >> $(dir $@)/Makefile 'vrclient_dll_LDFLAGS := -m32 $$(patsubst %.spec,$$(SRCDIR)/%.spec,$$(vrclient_dll_LDFLAGS))'


## vrclient goals

.PHONY: vrclient vrclient_configure vrclient32 vrclient64 vrclient_configure32 vrclient_configure64

vrclient_configure: $(VRCLIENT_CONFIGURE_FILES32) $(VRCLIENT_CONFIGURE_FILES64)

vrclient_configure32: $(VRCLIENT_CONFIGURE_FILES32)

vrclient_configure64: $(VRCLIENT_CONFIGURE_FILES64)

vrclient: vrclient32 vrclient64

vrclient64: $(VRCLIENT_CONFIGURE_FILES64)
	cd $(VRCLIENT_OBJ64) && \
	CXXFLAGS="-Wno-attributes -std=c++0x -O2 -g" CFLAGS="-O2 -g" PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
		$(MAKE) && \
	PATH="$(abspath $(TOOLS_DIR64))/bin:$(PATH)" \
		winebuild --dll --fake-module -E ../$(VRCLIENT)/vrclient_x64/vrclient_x64.spec -o vrclient_x64.dll.fake

	[ x"$(STRIP)" = x ] || $(STRIP) $(VRCLIENT_OBJ64)/vrclient_x64.dll.so
	cp -a $(VRCLIENT_OBJ64)/vrclient_x64.dll.so "$(DST_DIR)"/lib64/wine/
	cp -a $(VRCLIENT_OBJ64)/vrclient_x64.dll.fake "$(DST_DIR)"/lib64/wine/fakedlls/vrclient_x64.dll

vrclient32: $(VRCLIENT_CONFIGURE_FILES32)
	cd $(VRCLIENT_OBJ32) && \
	LDFLAGS="-m32" CXXFLAGS="-m32 -Wno-attributes -std=c++0x -O2 -g" CFLAGS="-m32 -O2 -g" PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
		$(MAKE) && \
	PATH="$(abspath $(TOOLS_DIR32))/bin:$(PATH)" \
		winebuild --dll --fake-module -E ../$(VRCLIENT32)/vrclient/vrclient.spec -o vrclient.dll.fake

	[ x"$(STRIP)" = x ] || $(STRIP) $(VRCLIENT_OBJ32)/vrclient.dll.so
	cp -a $(VRCLIENT_OBJ32)/vrclient.dll.so "$(DST_DIR)"/lib/wine/
	cp -a $(VRCLIENT_OBJ32)/vrclient.dll.fake "$(DST_DIR)"/lib/wine/fakedlls/vrclient.dll

##
## dxvk
##

## Create & configure object directory for dxvk

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

.PHONY: dxvk dxvk_configure dxvk32 dxvk64 dxvk_configure32 dxvk_configure64

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

# TODO FIXME OS X
# FIXME TODO build_libpng
# FIXME TODO build_libjpeg
# FIXME TODO build_libSDL
# FIXME TODO build_moltenvk

# TODO FIXME Tests
# FIXME TODO build_vrclient64_tests
# FIXME TODO build_vrclient32_tests
