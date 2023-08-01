# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
#   $(4): CROSS/<empty>, cross compile
#
define create-rules-meson
# Don't pass CROSS here, we need a native environment and we'll handle
# cross compilation below with the CROSS-prefixed variables.
$(call create-rules-common,$(1),$(2),$(3))

define $(2)_MESON_CROSS$(3)
cat <<EOF
[binaries]
ar = '$$$$CROSSAR'
c = '$$$$CROSSCC'
cpp = '$$$$CROSSCXX'
ld = '$$$$CROSSLD'
windres = '$$$$RC'
strip = '$$$$STRIP'
widl = '$$$$WIDL'
pkgconfig = '$$$$PKG_CONFIG'

[properties]
needs_exe_wrapper = true
c_args = [$$(call list-quote,$$($(2)_INCFLAGS$(3)) $$($(2)_CPPFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3)))]
cpp_args = [$$(call list-quote,$$($(2)_INCFLAGS$(3)) $$($(2)_CPPFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3)) -std=c++17)]
link_args = [$$(call list-quote,$$($(2)_LIBFLAGS$(3)) $$($(2)_LDFLAGS$(3)) $$($(2)_LDFLAGS) $$(CROSSLDFLAGS))]
pkg_config_libdir = '$$$$CROSSPKG_CONFIG_LIBDIR'

[host_machine]
system = 'windows'
cpu_family = '$$(MESON_CPU$(3))'
cpu = '$$(MESON_CPU$(3))'
endian = 'little'
EOF
endef

export $(2)_MESON_CROSS$(3)

$$($(2)_SRC)/meson.build: | $$(OBJ)/.$(1)-post-source

$$(OBJ)/.$(1)-configure$(3): $$($(2)_SRC)/meson.build
	@echo ":: configuring $(3)bit $(1)..." >&2
	rm -rf "$$($(2)_OBJ$(3))/meson-private/coredata.dat"

	echo "$$$$$(2)_MESON_CROSS$(3)" | env $$($(2)_ENV$(3)) sh >"$$($(2)_OBJ$(3))/cross-$(3).txt"

	env $$($(2)_ENV$(3)) \
	meson "$$($(2)_OBJ$(3))" "$$($(2)_SRC)" \
	      --prefix="$$($(2)_DST$(3))" \
	      --libdir="lib$(subst 32,,$(3))" \
	      --buildtype=plain \
	      $(if $(4),--cross-file="$$($(2)_OBJ$(3))/cross-$(3).txt",) \
	      $$($(2)_MESON_ARGS) \
	      $$($(2)_MESON_ARGS$(3)) \
	      $$(MESON_STRIP_ARG)

	touch $$@

$$(OBJ)/.$(1)-build$(3):
	@echo ":: building $(3)bit $(1)..." >&2
	+env $$($(2)_ENV$(3)) \
	ninja -C "$$($(2)_OBJ$(3))" install
	touch $$@
endef

MESON_CPU32 = x86
MESON_CPU64 = x86_64

rules-meson = $(call create-rules-meson,$(1),$(call toupper,$(1)),$(2),$(3))
