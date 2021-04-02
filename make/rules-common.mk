# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
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

$(1)-configure$(3): $$(OBJ)/.$(1)-configure$(3)
.INTERMEDIATE: $(1)-configure$(3)

all-configure$(3) $(1)-configure: $(1)-configure$(3)
.PHONY: all-configure$(3) $(1)-configure

all-configure: $(1)-configure
.PHONY: all-configure


$$(OBJ)/.$(1)-build$(3): CCACHE_BASEDIR = $$($(2)_SRC)
$$(OBJ)/.$(1)-build$(3): $$(OBJ)/.$(1)-source
$$(OBJ)/.$(1)-build$(3): $$(OBJ)/.$(1)-configure$(3)

ifeq ($(CONTAINER),)
$$(OBJ)/.$(1)-build$(3): container-build
$$(OBJ)/.$(1)-post-build$(3): container-build
$$(OBJ)/.$(1)-dist$(3): container-build
else
$$(OBJ)/.$(1)-post-build$(3): $$(OBJ)/.$(1)-build$(3)
endif

$(1)-build$(3): $$(OBJ)/.$(1)-build$(3)
.INTERMEDIATE: $(1)-build$(3)

all-build$(3) $(1)-build: $(1)-build$(3)
.PHONY: all-build$(3) $(1)-build

all-build: $(1)-build
.PHONY: all-build


ifeq ($(CONTAINER),1)
$$(OBJ)/.$(1)-dist$(3): $$(OBJ)/.$(1)-build$(3)
$$(OBJ)/.$(1)-dist$(3): $$(OBJ)/.$(1)-post-build$(3)

ifneq ($(UNSTRIPPED_BUILD),)
$$(OBJ)/.$(1)-dist$(3):
	@echo ":: installing $(3)bit $(1)..." >&2
	mkdir -p $$($(2)_LIBDIR$(3))/ $$(DST_LIBDIR$(3))/
	cd $$($(2)_LIBDIR$(3)) && find -type f -printf '$$(DST_LIBDIR$(3))/%h\0' | sort -z | uniq -z | xargs --verbose -0 -r -P8 mkdir -p
	cd $$($(2)_LIBDIR$(3)) && find -type l -printf '%p\0$$(DST_LIBDIR$(3))/%p\0' | xargs --verbose -0 -r -P8 -n2 cp -a
	cd $$($(2)_LIBDIR$(3)) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.def' ')' \
	    -printf '--only-keep-debug\0%p\0$$(DST_LIBDIR$(3))/%p.debug\0' | \
	    xargs --verbose -0 -r -P8 -n3 objcopy --file-alignment=4096
	cd $$($(2)_LIBDIR$(3)) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.def' ')' \
	    -printf '--add-gnu-debuglink=$$(DST_LIBDIR$(3))/%p.debug\0--strip-debug\0%p\0$$(DST_LIBDIR$(3))/%p\0' | \
	    xargs --verbose -0 -r -P8 -n4 objcopy --file-alignment=4096
	touch $$@
else
$$(OBJ)/.$(1)-dist$(3):
	@echo ":: installing $(3)bit $(1)..." >&2
	mkdir -p $$($(2)_LIBDIR$(3))/ $$(DST_LIBDIR$(3))/
	cd $$($(2)_LIBDIR$(3)) && find -type f -printf '$$(DST_LIBDIR$(3))/%h\0' | sort -z | uniq -z | xargs --verbose -0 -r -P8 mkdir -p
	cd $$($(2)_LIBDIR$(3)) && find -type l -printf '%p\0$$(DST_LIBDIR$(3))/%p\0' | xargs --verbose -0 -r -P8 -n2 cp -a
	cd $$($(2)_LIBDIR$(3)) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.def' ')' \
	    -printf '$$(DST_LIBDIR$(3))/%p.debug\0' | xargs --verbose -0 -r -P8 rm -f
	cd $$($(2)_LIBDIR$(3)) && find -type f -not '(' -iname '*.pc' -or -iname '*.cmake' -or -iname '*.a' -or -iname '*.def' ')' \
	    -printf '--strip-debug\0%p\0$$(DST_LIBDIR$(3))/%p\0' | \
	    xargs --verbose -0 -r -P8 -n3 objcopy --file-alignment=4096
	touch $$@
endif
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

CONTAINERGOALS := $(CONTAINERGOALS) $(filter $(1),$(MAKECMDGOALS))


$(2)_ENV$(3) = \
    CARGO_HOME=$$(OBJ)/.cargo \
    CARGO_TARGET_$$(call toupper,$$(ARCH$(3))-unknown-linux-gnu)_LINKER="$$(ARCH$(3))-linux-gnu-gcc" \
    CCACHE_BASEDIR="$$(CCACHE_BASEDIR)" \
    STRIP="$$(STRIP)" \
    CC="$$(CCACHE_BIN) $$(ARCH$(3))-linux-gnu-gcc" \
    CXX="$$(CCACHE_BIN) $$(ARCH$(3))-linux-gnu-g++" \
    LD="$$(ARCH$(3))-linux-gnu-ld" \
    PKG_CONFIG="$$(ARCH$(3))-linux-gnu-pkg-config" \
    CROSSCC="$$(CCACHE_BIN) $$(ARCH$(3))-w64-mingw32-gcc" \
    CROSSCXX="$$(CCACHE_BIN) $$(ARCH$(3))-w64-mingw32-g++" \
    CROSSLD="$$(ARCH$(3))-w64-mingw32-ld" \
    CROSSPKG_CONFIG="$$(ARCH$(3))-linux-gnu-pkg-config" \
    PATH="$$(call list-join,:,$$(foreach d,$$($(2)_DEPS$(3)),$$($$(d)_BINDIR$(3))),,:):$$(SRC)/glslang/bin:$$$$PATH" \
    LD_LIBRARY_PATH="$$(call list-join,:,$$(foreach d,$$($(2)_DEPS$(3)),$$($$(d)_LIBDIR$(3))),,:)$$$$LD_LIBRARY_PATH" \
    PKG_CONFIG_PATH="$$(call list-join,:,$$(foreach d,$$($(2)_DEPS$(3)),$$($$(d)_LIBDIR$(3))/pkgconfig))" \
    CFLAGS="$$(foreach d,$$($(2)_DEPS$(3)),-I$$($$(d)_INCDIR$(3))) $$($(2)_CFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3))" \
    CXXFLAGS="$$(foreach d,$$($(2)_DEPS$(3)),-I$$($$(d)_INCDIR$(3))) $$($(2)_CXXFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3)) -std=c++17" \
    LDFLAGS="$$(foreach d,$$($(2)_DEPS$(3)),-L$$($$(d)_LIBDIR$(3))) \
             $$(foreach d,$$($(2)_DEPS$(3)),-Wl,-rpath-link=$$($$(d)_LIBDIR$(3))) \
             $$($(2)_LDFLAGS) $$(LDFLAGS)"

endef

ifneq ($(UNSTRIPPED_BUILD),)
install-strip = objcopy --file-alignment=4096 --only-keep-debug $(1) $(2)/$(notdir $(1)).debug && \
                objcopy --file-alignment=4096 --add-gnu-debuglink=$(2)/$(notdir $(1)).debug --strip-debug $(1) $(2)/$(notdir $(1))
else
install-strip = objcopy --file-alignment=4096 --strip-debug $(1) $(2)/$(notdir $(1)) && rm -f $(2)/$(notdir $(1)).debug
endif

ARCH32 := i686
ARCH64 := x86_64

$(OBJ)/.%-post-build32:
	touch $@
$(OBJ)/.%-post-build64:
	touch $@

rules-common = $(call create-rules-common,$(1),$(call toupper,$(1)),$(2))
