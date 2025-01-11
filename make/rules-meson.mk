# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): build target arch
#   $(4): build target os
#
define create-rules-meson
$(call create-rules-common,$(1),$(2),$(3),$(4))
ifneq ($(findstring $(3)-$(4),$(ARCHS)),)

define $(2)_$(3)_MESON_CROSS
cat <<EOF
[binaries]
ar = '$$$$AR'
c = '$$$$CC'
cpp = '$$$$CXX'
ld = '$$$$LD'
windres = '$$$$RC'
strip = '$$$$STRIP'
widl = '$$$$WIDL'
pkgconfig = '$$$$PKG_CONFIG'

[properties]
needs_exe_wrapper = true
c_args = [$$(call list-quote,$$($(2)_$(3)_INCFLAGS) $$($(2)_CFLAGS) $$($(3)_CFLAGS) $$(CFLAGS))]
cpp_args = [$$(call list-quote,$$($(2)_$(3)_INCFLAGS) $$($(2)_CFLAGS) $$($(3)_CFLAGS) $$(CFLAGS))]
link_args = [$$(call list-quote,$$($(2)_$(3)-$(4)_LIBFLAGS) $$($(2)_$(3)_LIBFLAGS) $$($(2)_LDFLAGS) $$($(3)_LDFLAGS) $$(LDFLAGS))]
pkg_config_libdir = '$$$$PKG_CONFIG_LIBDIR'

[host_machine]
system = '$$($(4)_MESON_SYSTEM)'
cpu_family = '$$($(3)_MESON_CPU)'
cpu = '$$($(3)_MESON_CPU)'
endian = 'little'
EOF
endef

export $(2)_$(3)_MESON_CROSS

$$($(2)_SRC)/meson.build: | $$(OBJ)/.$(1)-post-source

$$(OBJ)/.$(1)-$(3)-configure: $$($(2)_SRC)/meson.build
	@echo ":: configuring $(1)-$(3)..." >&2
	rm -rf "$$($(2)_$(3)_OBJ)/meson-private/coredata.dat"

	echo "$$$$$(2)_$(3)_MESON_CROSS" | env $$($(2)_$(3)_ENV) sh >"$$($(2)_$(3)_OBJ)/cross.txt"

	env $$($(2)_$(3)_ENV) \
	meson "$$($(2)_$(3)_OBJ)" "$$($(2)_SRC)" \
	      --prefix="$$($(2)_$(3)_DST)" \
	      --libdir="lib/$$($(3)-$(4)_LIBDIR)" \
	      --buildtype=plain \
	      --cross-file=$$($(2)_$(3)_OBJ)/cross.txt \
	      $$($(3)-$(4)_MESON_ARGS) \
	      $$($(2)_MESON_ARGS) \
	      $$($(2)_$(3)_MESON_ARGS) \
	      $$(MESON_STRIP_ARG)

	touch $$@

$$(OBJ)/.$(1)-$(3)-build:
	@echo ":: building $(1)-$(3)..." >&2
	+env $$($(2)_$(3)_ENV) \
	ninja -C "$$($(2)_$(3)_OBJ)" install
	touch $$@
endif
endef

i386_MESON_CPU := x86
x86_64_MESON_CPU := x86_64
aarch64_MESON_CPU := aarch64

unix_MESON_SYSTEM := linux
windows_MESON_SYSTEM := windows

rules-meson = $(call create-rules-meson,$(1),$(call toupper,$(1)),$(2),$(3))
