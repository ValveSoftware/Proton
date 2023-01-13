# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
#   $(4): CROSS/<empty>, cross compile
define create-rules-common
$(2)_OBJ$(3) := $$(OBJ)/obj-$(1)$(3)
$(2)_DST$(3) := $$(OBJ)/dst-$(1)$(3)
$(2)_DEPS$(3) := $$(call toupper,$$($(2)_DEPENDS)) $$(call toupper,$$($(2)_DEPENDS$(3)))

$(2)_BINDIR$(3) ?= $$($(2)_DST$(3))/bin
$(2)_LIBDIR$(3) ?= $$($(2)_DST$(3))/lib$(subst 32,,$(3))
$(2)_INCDIR$(3) ?= $$($(2)_DST$(3))/include

$$(OBJ)/.$(1)-configure$(3): $$(shell mkdir -p $$($(2)_OBJ$(3)))
$$(OBJ)/.$(1)-configure$(3): CCACHE_BASEDIR = $$($(2)_SRC)
$$(OBJ)/.$(1)-configure$(3): $$(patsubst %,%-build$(3),$$($(2)_DEPENDS) $$($(2)_DEPENDS$(3)))
$$(OBJ)/.$(1)-configure$(3): | $$(OBJ)/.$(1)-post-source

$(1)-configure$(3): $$(OBJ)/.$(1)-configure$(3)
.INTERMEDIATE: $(1)-configure$(3)

all-configure$(3) $(1)-configure: $(1)-configure$(3)
.PHONY: all-configure$(3) $(1)-configure

all-configure: $(1)-configure
.PHONY: all-configure


$$(OBJ)/.$(1)-build$(3): CCACHE_BASEDIR = $$($(2)_SRC)
$$(OBJ)/.$(1)-build$(3): $$(OBJ)/.$(1)-source
$$(OBJ)/.$(1)-build$(3): $$(OBJ)/.$(1)-configure$(3)

$$(OBJ)/.$(1)-post-build$(3): $$(OBJ)/.$(1)-build$(3)

$(1)-build$(3): $$(OBJ)/.$(1)-build$(3)
.INTERMEDIATE: $(1)-build$(3)

all-build$(3) $(1)-build: $(1)-build$(3)
.PHONY: all-build$(3) $(1)-build

all-build: $(1)-build
.PHONY: all-build


$$(OBJ)/.$(1)-dist$(3): $$(OBJ)/.$(1)-build$(3)
$$(OBJ)/.$(1)-dist$(3): $$(OBJ)/.$(1)-post-build$(3)

ifneq ($(UNSTRIPPED_BUILD),)
$$(OBJ)/.$(1)-dist$(3):
	@echo ":: installing $(3)bit $(1)..." >&2
	mkdir -p $$($(2)_LIBDIR$(3))/ $$(DST_LIBDIR$(3))/
	cd $$($(2)_LIBDIR$(3)) && find -type f -printf '$$(DST_LIBDIR$(3))/%h\0' | sort -z | uniq -z | xargs $(--verbose?) -0 -r -P$$(J) mkdir -p
	cd $$($(2)_LIBDIR$(3)) && find -type l -printf '%p\0$$(DST_LIBDIR$(3))/%p\0' | xargs $(--verbose?) -0 -r -P$$(J) -n2 cp -a
	cd $$($(2)_LIBDIR$(3)) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.la' -or -iname '*.def' -or -iname '*.h' ')' \
	    -printf '--only-keep-debug\0%p\0$$(DST_LIBDIR$(3))/%p.debug\0' | \
	    xargs $(--verbose?) -0 -r -P$$(J) -n3 objcopy --file-alignment=4096
	cd $$($(2)_LIBDIR$(3)) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.la' -or -iname '*.def' -or -iname '*.h' ')' \
	    -printf '--add-gnu-debuglink=$$(DST_LIBDIR$(3))/%p.debug\0--strip-debug\0%p\0$$(DST_LIBDIR$(3))/%p\0' | \
	    xargs $(--verbose?) -0 -r -P$$(J) -n4 objcopy --file-alignment=4096 --set-section-flags .text=contents,alloc,load,readonly,code
	touch $$@
else
$$(OBJ)/.$(1)-dist$(3):
	@echo ":: installing $(3)bit $(1)..." >&2
	mkdir -p $$($(2)_LIBDIR$(3))/ $$(DST_LIBDIR$(3))/
	cd $$($(2)_LIBDIR$(3)) && find -type f -printf '$$(DST_LIBDIR$(3))/%h\0' | sort -z | uniq -z | xargs $(--verbose?) -0 -r -P$$(J) mkdir -p
	cd $$($(2)_LIBDIR$(3)) && find -type l -printf '%p\0$$(DST_LIBDIR$(3))/%p\0' | xargs $(--verbose?) -0 -r -P$$(J) -n2 cp -a
	cd $$($(2)_LIBDIR$(3)) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.la' -or -iname '*.def' -or -iname '*.h' ')' \
	    -printf '$$(DST_LIBDIR$(3))/%p.debug\0' | xargs $(--verbose?) -0 -r -P$$(J) rm -f
	cd $$($(2)_LIBDIR$(3)) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.la' -or -iname '*.def' -or -iname '*.h' ')' \
	    -printf '--strip-debug\0%p\0$$(DST_LIBDIR$(3))/%p\0' | \
	    xargs $(--verbose?) -0 -r -P$$(J) -n3 objcopy --file-alignment=4096 --set-section-flags .text=contents,alloc,load,readonly,code
	touch $$@
endif

$(1)-dist$(3): $$(OBJ)/.$(1)-dist$(3)
.INTERMEDIATE: $(1)-dist$(3)

all-dist$(3) $(1)-dist: $(1)-dist$(3)
.PHONY: all-dist$(3) $(1)-dist

all-dist: $(1)-dist
.PHONY: all-dist


$(1)$(3): $(1)-configure$(3) $(1)-build$(3) $(1)-dist$(3)
.INTERMEDIATE: $(1)$(3)

all$(3) $(1): $(1)$(3)
.PHONY: all$(3) $(1)

all: $(1)
.PHONY: all

$(2)_INCFLAGS$(3) = $$(foreach d,$$($(2)_DEPS$(3)),-I$$($$(d)_INCDIR$(3)))
$(2)_LIBFLAGS$(3) = $$(foreach d,$$($(2)_DEPS$(3)),-L$$($$(d)_LIBDIR$(3))) \
                    $$(foreach d,$$($(2)_DEPS$(3)),-Wl,-rpath-link=$$($$(d)_LIBDIR$(3))) \

# PKG_CONFIG is intentionally never using CROSS target, as it's missing
# wrapper scripts in the toolchain, we use PKG_CONFIG_LIBDIR directly
# instead.
#
# RC and WIDL are intentionally always using CROSS target, as their
# native version doesn't exist.

$(2)_ENV$(3) = \
    CARGO_TARGET_$$(call toupper,$$(CARGO_TARGET_$(3)))_LINKER="$$(TARGET_$(4)$(3))-gcc" \
    CCACHE_BASEDIR="$$(CCACHE_BASEDIR)" \
    STRIP="$$(STRIP)" \
    AR="$$(TARGET_$(4)$(3))-ar" \
    RANLIB="$$(TARGET_$(4)$(3))-ranlib" \
    CC="$$(TARGET_$(4)$(3))-gcc" \
    CXX="$$(TARGET_$(4)$(3))-g++" \
    LD="$$(TARGET_$(4)$(3))-ld" \
    RC="$$(TARGET_CROSS$(3))-windres" \
    WIDL="$$(TARGET_CROSS$(3))-widl" \
    PKG_CONFIG="$$(TARGET_$(3))-pkg-config" \
    PATH="$$(call list-join,:,$$(foreach d,$$($(2)_DEPS$(3)),$$($$(d)_BINDIR$(3))),,:):$$$$PATH" \
    LD_LIBRARY_PATH="$$(call list-join,:,$$(foreach d,$$($(2)_DEPS$(3)),$$($$(d)_LIBDIR$(3))),,:)$$$$LD_LIBRARY_PATH" \
    PKG_CONFIG_PATH="$$(call list-join,:,$$(foreach d,$$($(2)_DEPS$(3)),$$($$(d)_LIBDIR$(3))/pkgconfig))" \
    PKG_CONFIG_LIBDIR="/usr/lib/$$(PKG_CONFIG_TARGET_$(4)$(3))/pkgconfig:/usr/share/pkgconfig" \
    CFLAGS="$$($(2)_INCFLAGS$(3)) $$($(2)_CFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3))" \
    CPPFLAGS="$$($(2)_INCFLAGS$(3)) $$($(2)_CPPFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3))" \
    CXXFLAGS="$$($(2)_INCFLAGS$(3)) $$($(2)_CXXFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3)) -std=c++17" \
    LDFLAGS="$$($(2)_LIBFLAGS$(3)) $$($(2)_LDFLAGS$(3)) $$($(2)_LDFLAGS) $$($(4)LDFLAGS)" \

ifneq ($(4),CROSS)

# CROSS-prefixed variables for non-CROSS builds which may need to cross
# compile some binaries.
#
# This is for instance used by Wine, but also Meson, as it requires the
# environment variable to ones for native.

$(2)_ENV$(3) += \
    CROSSAR="$$(TARGET_CROSS$(3))-ar" \
    CROSSRANLIB="$$(TARGET_CROSS$(3))-ranlib" \
    CROSSCC="$$(TARGET_CROSS$(3))-gcc" \
    CROSSCXX="$$(TARGET_CROSS$(3))-g++" \
    CROSSLD="$$(TARGET_CROSS$(3))-ld" \
    CROSSCFLAGS="$$($(2)_INCFLAGS$(3)) $$($(2)_CFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3))" \
    CROSSCPPFLAGS="$$($(2)_INCFLAGS$(3)) $$($(2)_CPPFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3))" \
    CROSSCXXFLAGS="$$($(2)_INCFLAGS$(3)) $$($(2)_CXXFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3)) -std=c++17" \
    CROSSLDFLAGS="$$($(2)_LIBFLAGS$(3)) $$($(2)_LDFLAGS$(3)) $$($(2)_LDFLAGS) $$(CROSSLDFLAGS)" \
    CROSSPKG_CONFIG_LIBDIR="/usr/lib/$$(PKG_CONFIG_TARGET_CROSS$(3))/pkgconfig:/usr/share/pkgconfig" \

endif

endef

ifneq ($(UNSTRIPPED_BUILD),)
install-strip = objcopy --file-alignment=4096 --only-keep-debug $(1) $(2)/$(notdir $(1)).debug && \
                objcopy --file-alignment=4096 --add-gnu-debuglink=$(2)/$(notdir $(1)).debug --strip-debug $(1) $(2)/$(notdir $(1))
else
install-strip = objcopy --file-alignment=4096 --strip-debug $(1) $(2)/$(notdir $(1)) && rm -f $(2)/$(notdir $(1)).debug
endif

TARGET_32 := i686-linux-gnu
TARGET_64 := x86_64-linux-gnu
TARGET_CROSS32 := i686-w64-mingw32
TARGET_CROSS64 := x86_64-w64-mingw32

PKG_CONFIG_TARGET_32 := i386-linux-gnu
PKG_CONFIG_TARGET_64 := x86_64-linux-gnu
PKG_CONFIG_TARGET_CROSS32 := i386-w64-mingw32
PKG_CONFIG_TARGET_CROSS64 := x86_64-w64-mingw32

LIBDIR_WINE_32 := wine/i386-unix
LIBDIR_WINE_64 := wine/x86_64-unix
LIBDIR_WINE_CROSS32 := wine/i386-windows
LIBDIR_WINE_CROSS64 := wine/x86_64-windows

$(OBJ)/.%-post-build32:
	touch $@
$(OBJ)/.%-post-build64:
	touch $@

rules-common = $(call create-rules-common,$(1),$(call toupper,$(1)),$(2),$(3))
