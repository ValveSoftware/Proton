# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): build target arch
#   $(4): build target os
define create-rules-common
ifneq ($$(findstring $(3)-$(4),$$(ARCHS)),)
$(2)_$(3)_OBJ := $$(OBJ)/obj-$(1)-$(3)
$(2)_$(3)_DST := $$(OBJ)/dst-$(1)-$(3)
$(2)_$(3)_DEPS := $$(call toupper,$$($(2)_DEPENDS)) $$(call toupper,$$($(2)_$(3)_DEPENDS))
$(2)_$(3)_HOST_DEPS := $$(call toupper,$$($(2)_HOST_DEPENDS))

$(2)_$(3)_BINDIR ?= $$($(2)_$(3)_DST)/bin
$(2)_$(3)_LIBDIR ?= $$($(2)_$(3)_DST)/lib
$(2)_$(3)_INCDIR ?= $$($(2)_$(3)_DST)/include

$$(OBJ)/.$(1)-$(3)-configure: $$(shell mkdir -p $$($(2)_$(3)_OBJ))
$$(OBJ)/.$(1)-$(3)-configure: CCACHE_BASEDIR = $$($(2)_SRC)
$$(OBJ)/.$(1)-$(3)-configure: $$(patsubst %,%-$(3)-build,$$($(2)_DEPENDS) $$($(2)_$(3)_DEPENDS))
$$(OBJ)/.$(1)-$(3)-configure: $$(patsubst %,%-$$(HOST_ARCH)-build,$$($(2)_HOST_DEPENDS))
$$(OBJ)/.$(1)-$(3)-configure: | $$(OBJ)/.$(1)-post-source

$(1)-$(3)-configure: $$(OBJ)/.$(1)-$(3)-configure
.INTERMEDIATE: $(1)-$(3)-configure

all-$(3)-configure $(1)-configure: $(1)-$(3)-configure
.PHONY: all-$(3)-configure $(1)-configure

all-configure: $(1)-configure
.PHONY: all-configure


$$(OBJ)/.$(1)-$(3)-build: CCACHE_BASEDIR = $$($(2)_SRC)
$$(OBJ)/.$(1)-$(3)-build: $$(OBJ)/.$(1)-source
$$(OBJ)/.$(1)-$(3)-build: $$(OBJ)/.$(1)-$(3)-configure
$$(OBJ)/.$(1)-$(3)-build: $$(patsubst %,$$(OBJ)/.%-$(3)-post-build,$$($(2)_DEPENDS) $$($(2)_$(3)_DEPENDS))

$$(OBJ)/.$(1)-$(3)-post-build: $$(OBJ)/.$(1)-$(3)-build

$(1)-$(3)-build: $$(OBJ)/.$(1)-$(3)-build
.INTERMEDIATE: $(1)-$(3)-build

all-$(3)-build $(1)-build: $(1)-$(3)-build
.PHONY: all-$(3)-build $(1)-build

all-build: $(1)-build
.PHONY: all-build

$$(OBJ)/.$(1)-$(3)-dist: $$(OBJ)/.$(1)-$(3)-build
$$(OBJ)/.$(1)-$(3)-dist: $$(OBJ)/.$(1)-$(3)-post-build

$(2)_$(3)_SOURCE_DATE_EPOCH ?= $$($(3)_SOURCE_DATE_EPOCH)

$$(OBJ)/.$(1)-$(3)-dist:
	@echo ":: installing $(1)-$(3)..." >&2
	if [ -f "$$($(2)_$(3)_OBJ)/compile_commands.json" ]; then \
	    mkdir -p "$$(OBJ)/compile_commands/$(1)-$(3)/"; \
	    sed "s#$$($(2)_SRC)#$$($(2)_ORIGIN)#g" "$$($(2)_$(3)_OBJ)/compile_commands.json" > "$$(OBJ)/compile_commands/$(1)-$(3)/compile_commands.json"; \
	fi
	mkdir -p $$($(2)_$(3)_LIBDIR)/ $$(DST_LIBDIR)/
	cd $$($(2)_$(3)_LIBDIR) && find -type f -printf '$$(DST_LIBDIR)/%h\0' | sort -z | uniq -z | xargs $(--verbose?) -0 -r -P$$(J) mkdir -p
	cd $$($(2)_$(3)_LIBDIR) && find -type l -printf '%p\0$$(DST_LIBDIR)/%p\0' | xargs $(--verbose?) -0 -r -P$$(J) -n2 cp -a
ifneq ($(UNSTRIPPED_BUILD),)
	cd $$($(2)_$(3)_LIBDIR) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.la' -or -iname '*.def' -or -iname '*.h' ')' \
	    -printf '--only-keep-debug\0%p\0$$(DST_LIBDIR)/%p.debug\0' | \
	    xargs $(--verbose?) -0 -r -P$$(J) -n3 $(OBJCOPY) $(OBJCOPY_FLAGS)
	cd $$($(2)_$(3)_LIBDIR) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.la' -or -iname '*.def' -or -iname '*.h' ')' \
	    -printf '--add-gnu-debuglink=$$(DST_LIBDIR)/%p.debug\0--strip-debug\0%p\0$$(DST_LIBDIR)/%p\0' | \
	    xargs $(--verbose?) -0 -r -P$$(J) -n4 $(OBJCOPY) $(OBJCOPY_FLAGS) --set-section-flags .text=contents,alloc,load,readonly,code
	touch $$@
else
	cd $$($(2)_$(3)_LIBDIR) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.la' -or -iname '*.def' -or -iname '*.h' ')' \
	    -printf '$$(DST_LIBDIR)/%p.debug\0' | xargs $(--verbose?) -0 -r -P$$(J) rm -f
	cd $$($(2)_$(3)_LIBDIR) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.la' -or -iname '*.def' -or -iname '*.h' ')' \
	    -printf '--strip-debug\0%p\0$$(DST_LIBDIR)/%p\0' | \
	    xargs $(--verbose?) -0 -r -P$$(J) -n3 $(OBJCOPY) $(OBJCOPY_FLAGS) --set-section-flags .text=contents,alloc,load,readonly,code
	touch $$@
endif

$(1)-$(3)-dist: $$(OBJ)/.$(1)-$(3)-dist
.INTERMEDIATE: $(1)-$(3)-dist

all-$(3)-dist $(1)-dist: $(1)-$(3)-dist
.PHONY: all-$(3)-dist $(1)-dist

all-dist: $(1)-dist
.PHONY: all-dist


$(1)-$(3): $(1)-$(3)-configure $(1)-$(3)-build $(1)-$(3)-dist
.INTERMEDIATE: $(1)-$(3)

all-$(3) $(1): $(1)-$(3)
.PHONY: all-$(3) $(1)

all: $(1)
.PHONY: all

$(2)_$(3)_INCFLAGS = $$(foreach d,$$($(2)_$(3)_DEPS),-I$$($$(d)_$(3)_INCDIR))
$(2)_$(3)_LIBFLAGS = $$(foreach d,$$($(2)_$(3)_DEPS),-L$$($$(d)_$(3)_LIBDIR)/$$($(3)-$(4)_LIBDIR))
$(2)_$(3)-unix_LIBFLAGS = $$(foreach d,$$($(2)_$(3)_DEPS),-Wl,-rpath-link=$$($$(d)_$(3)_LIBDIR)/$$($(3)-unix_LIBDIR))

# PKG_CONFIG is intentionally never using windows target, as it's missing
# wrapper scripts in the toolchain, we use PKG_CONFIG_LIBDIR directly
# instead.
#
# RC and WIDL are intentionally always using windows target, as their
# unix version doesn't exist.

# HACK: forcing cargo to use gcc-10 as a linker because it's very unhappy about
# Sniper's gcc-14 and lack of libgcc_s. The only version we have guarantee for
# with SteamRT Sniper is the one from gcc 10.
#
# We also always need to specify the linker for the host architecture - a bunch
# of crates build host-native bits via build.rs.

$(2)_$(3)_ENV = \
    $$(CARGO_LINKERS) \
    CCACHE_BASEDIR="$$(CCACHE_BASEDIR)" \
    STRIP="$$(STRIP)" \
    AR="$$($(3)-$(4)_TARGET)-ar" \
    RANLIB="$$($(3)-$(4)_TARGET)-ranlib" \
    CC="$$($(3)-$(4)_TARGET)-gcc" \
    CXX="$$($(3)-$(4)_TARGET)-g++" \
    LD="$$($(3)-$(4)_TARGET)-ld" \
    RC="$$($(3)-windows_TARGET)-windres" \
    WIDL="$$($(3)-windows_TARGET)-widl" \
    PKG_CONFIG="$$($$(HOST_ARCH)-unix_TARGET)-pkg-config" \
    PATH="$$(call list-join,:,$$(foreach d,$$($(2)_$(3)_HOST_DEPS),$$($$(d)_$$(HOST_ARCH)_BINDIR)),,:):$$$$PATH" \
    LD_LIBRARY_PATH="$$(call list-join,:,$$(foreach d,$$($(2)_$(3)_HOST_DEPS),$$($$(d)_$$(HOST_ARCH)_LIBDIR)/$$($$(HOST_ARCH)-unix_LIBDIR)),,:)$$$$LD_LIBRARY_PATH" \
    PKG_CONFIG_PATH="$$(call list-join,:,$$(foreach d,$$($(2)_$(3)_DEPS),$$($$(d)_$(3)_LIBDIR)/$$($(3)-$(4)_LIBDIR)/pkgconfig))" \
    PKG_CONFIG_LIBDIR="/usr/lib/$$($(3)-$(4)_LIBDIR)/pkgconfig:/usr/share/pkgconfig" \
    CMAKE_PREFIX_PATH="$$(call list-join,:,$$(foreach d,$$($(2)_$(3)_DEPS),$$($$(d)_$(3)_DST)))" \
    CFLAGS="$$($(2)_$(3)_INCFLAGS) $$($(2)_CFLAGS) $$($(3)_CFLAGS) $$(CFLAGS)" \
    CPPFLAGS="$$($(2)_$(3)_INCFLAGS) $$($(2)_CFLAGS) $$($(3)_CFLAGS) $$(CFLAGS)" \
    CXXFLAGS="$$($(2)_$(3)_INCFLAGS) -std=c++17 $$($(2)_CFLAGS) $$($(3)_CFLAGS) $$(CFLAGS)" \
    LDFLAGS="$$($(2)_$(3)-$(4)_LIBFLAGS) $$($(2)_$(3)_LIBFLAGS) $$($(2)_LDFLAGS) $$($(3)_LDFLAGS) $$(LDFLAGS)" \
    SOURCE_DATE_EPOCH="$$($(2)_$(3)_SOURCE_DATE_EPOCH)" \

ifeq ($(1),wine)

# aarch64 always builds wine with clang directly so build tools do not need to be specified
$(2)_$(3)_ENV += \
    CROSSCFLAGS="$$($(2)_$(3)_INCFLAGS) $$($(2)_CFLAGS) $$($(3)_CFLAGS) $$(CFLAGS)" \
    CROSSLDFLAGS="$$($(2)_$(3)-windows_LIBFLAGS) $$($(2)_$(3)_LIBFLAGS) $$($(2)_LDFLAGS) $$($(3)_LDFLAGS) $$(LDFLAGS)" \
    i386_AR="$$(i386-windows_TARGET)-ar" \
    i386_RANLIB="$$(i386-windows_TARGET)-ranlib" \
    i386_CC="$$(i386-windows_TARGET)-gcc" \
    i386_CXX="$$(i386-windows_TARGET)-g++" \
    i386_LD="$$(i386-windows_TARGET)-ld" \
    i386_CFLAGS="$$($(2)_i386_INCFLAGS) $$($(2)_CFLAGS) $$(i386_CFLAGS) $$(CFLAGS)" \
    i386_CPPFLAGS="$$($(2)_i386_INCFLAGS) $$($(2)_CFLAGS) $$(i386_CFLAGS) $$(CFLAGS)" \
    i386_CXXFLAGS="$$($(2)_i386_INCFLAGS) -std=c++17 $$($(2)_CFLAGS) $$(i386_CFLAGS) $$(CFLAGS)" \
    i386_LDFLAGS="$$($(2)_i386-windows_LIBFLAGS) $$($(2)_i386_LIBFLAGS) $$($(2)_LDFLAGS) $$(i386_LDFLAGS) $$(LDFLAGS)" \
    i386_PKG_CONFIG_LIBDIR="/usr/lib/$$(i386-windows_LIBDIR)/pkgconfig:/usr/share/pkgconfig" \
    x86_64_AR="$$(x86_64-windows_TARGET)-ar" \
    x86_64_RANLIB="$$(x86_64-windows_TARGET)-ranlib" \
    x86_64_CC="$$(x86_64-windows_TARGET)-gcc" \
    x86_64_CXX="$$(x86_64-windows_TARGET)-g++" \
    x86_64_LD="$$(x86_64-windows_TARGET)-ld" \
    x86_64_CFLAGS="$$($(2)_x86_64_INCFLAGS) $$($(2)_CFLAGS) $$(x86_64_CFLAGS) $$(CFLAGS)" \
    x86_64_CPPFLAGS="$$($(2)_x86_64_INCFLAGS) $$($(2)_CFLAGS) $$(x86_64_CFLAGS) $$(CFLAGS)" \
    x86_64_CXXFLAGS="$$($(2)_x86_64_INCFLAGS) -std=c++17 $$($(2)_CFLAGS) $$(x86_64_CFLAGS) $$(CFLAGS)" \
    x86_64_LDFLAGS="$$($(2)_x86_64-windows_LIBFLAGS) $$($(2)_x86_64_LIBFLAGS) $$($(2)_LDFLAGS) $$(x86_64_LDFLAGS) $$(LDFLAGS)" \
    x86_64_PKG_CONFIG_LIBDIR="/usr/lib/$$(x86_64-windows_LIBDIR)/pkgconfig:/usr/share/pkgconfig" \
    aarch64_CFLAGS="$$($(2)_aarch64_INCFLAGS) $$($(2)_CFLAGS) $$(aarch64_CFLAGS) $$(CFLAGS)" \
    aarch64_CPPFLAGS="$$($(2)_aarch64_INCFLAGS) $$($(2)_CFLAGS) $$(aarch64_CFLAGS) $$(CFLAGS)" \
    aarch64_CXXFLAGS="$$($(2)_aarch64_INCFLAGS) -std=c++17 $$($(2)_CFLAGS) $$(aarch64_CFLAGS) $$(CFLAGS)" \
    aarch64_LDFLAGS="$$($(2)_aarch64_LIBFLAGS) $$($(2)_LDFLAGS) $$(aarch64_LDFLAGS) $$(LDFLAGS)" \

endif

endif
endef

ifneq ($(UNSTRIPPED_BUILD),)
install-strip = $(OBJCOPY) $(OBJCOPY_FLAGS) --only-keep-debug $(1) $(2)/$(notdir $(1)).debug && \
                $(OBJCOPY) $(OBJCOPY_FLAGS) --add-gnu-debuglink=$(2)/$(notdir $(1)).debug --strip-debug $(1) $(2)/$(notdir $(1))
else
install-strip = $(OBJCOPY) $(OBJCOPY_FLAGS) --strip-debug $(1) $(2)/$(notdir $(1)) && rm -f $(2)/$(notdir $(1)).debug
endif

i386-unix_TARGET := i686-linux-gnu
x86_64-unix_TARGET := x86_64-linux-gnu
aarch64-unix_TARGET := aarch64-linux-gnu
i386-windows_TARGET := i686-w64-mingw32
x86_64-windows_TARGET := x86_64-w64-mingw32
aarch64-windows_TARGET := arm64ec-w64-mingw32

i386-unix_LIBDIR := i386-linux-gnu
x86_64-unix_LIBDIR := x86_64-linux-gnu
aarch64-unix_LIBDIR := aarch64-linux-gnu
i386-windows_LIBDIR := i386-w64-mingw32
x86_64-windows_LIBDIR := x86_64-w64-mingw32
aarch64-windows_LIBDIR := arm64ec-w64-mingw32

$(OBJ)/.%-i386-post-build:
	touch $@
$(OBJ)/.%-x86_64-post-build:
	touch $@
$(OBJ)/.%-aarch64-post-build:
	touch $@

rules-common = $(call create-rules-common,$(1),$(call toupper,$(1)),$(2),$(3))
