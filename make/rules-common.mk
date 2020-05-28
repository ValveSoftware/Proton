# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
define create-rules-common
$(2)_OBJ$(3) := $$(OBJ)/obj-$(1)$(3)
$(2)_DST$(3) := $$(abspath $$(TOOLS_DIR$(3)))
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
else
$$(OBJ)/.$(1)-post-build$(3): $$(OBJ)/.$(1)-build$(3)
endif

$(1)-build$(3): $$(OBJ)/.$(1)-build$(3)
.INTERMEDIATE: $(1)-build$(3)

all-build$(3) $(1)-build: $(1)-build$(3)
.PHONY: all-build$(3) $(1)-build

all-build: $(1)-build
.PHONY: all-build


$(1)$(3): $(1)-configure$(3) $(1)-build$(3)
.INTERMEDIATE: $(1)$(3)

all$(3) $(1): $(1)$(3)
.PHONY: all$(3) $(1)

all: $(1)
.PHONY: all


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
    PATH="$$($(2)_BINDIR$(3)):$$(SRC)/glslang/bin:$$$$PATH" \
    LD_LIBRARY_PATH="$$($(2)_LIBDIR$(3)):$$$$LD_LIBRARY_PATH" \
    PKG_CONFIG_PATH="$$($(2)_LIBDIR$(3))/pkgconfig" \
    CFLAGS="-I$$($(2)_INCDIR$(3)) $$($(2)_CFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3))" \
    CXXFLAGS="-I$$($(2)_INCDIR$(3)) $$($(2)_CXXFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3)) -std=c++17" \
    LDFLAGS="-L$$($(2)_LIBDIR$(3)) \
             -Wl,-rpath-link=$$($(2)_LIBDIR$(3)) \
             $$($(2)_LDFLAGS) $$(LDFLAGS)"

endef

ARCH32 := i686
ARCH64 := x86_64

$(OBJ)/.%-post-build32:
	touch $@
$(OBJ)/.%-post-build64:
	touch $@

rules-common = $(call create-rules-common,$(1),$(call toupper,$(1)),$(2))
