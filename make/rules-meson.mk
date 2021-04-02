# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
#
define create-rules-meson
$(call create-rules-common,$(1),$(2),$(3))

ifeq ($(CONTAINER),1)
$$(OBJ)/.$(1)-configure$(3): $$($(2)_SRC)/meson.build
	@echo ":: configuring $(3)bit $(1)..." >&2
	rm -rf "$$($(2)_OBJ$(3))/meson-private/coredata.dat"

	grep -s -v -e c_args -e cpp_args -e link_args "$$($(2)_SRC)/build-win$(3).txt" | \
	sed -e "s:\[properties\]:[properties]\nc_args = [$$(call list-quote,$$(COMMON_FLAGS))]:" \
	    -e "s:\[properties\]:[properties]\ncpp_args = [$$(call list-quote,$$(COMMON_FLAGS))]:" \
	    -e "s:\[properties\]:[properties]\nlink_args = [$$(call list-quote,$$(CROSSLDFLAGS))]:" \
	  > "$$($(2)_OBJ$(3))/build-win$(3).txt"

	env $$($(2)_ENV$(3)) \
	meson "$$($(2)_OBJ$(3))" "$$($(2)_SRC)" \
	      --prefix="$$($(2)_DST$(3))" \
	      --libdir="lib$(subst 32,,$(3))" \
	      --buildtype=plain \
	      $$($(2)_MESON_ARGS) \
	      $$($(2)_MESON_ARGS$(3)) \
	      $$(MESON_STRIP_ARG)

	touch $$@

$$(OBJ)/.$(1)-build$(3):
	@echo ":: building $(3)bit $(1)..." >&2
	env $$($(2)_ENV$(3)) \
	ninja $$(filter -j%,$$(MAKEFLAGS)) -C "$$($(2)_OBJ$(3))" install
	touch $$@
endif
endef

rules-meson = $(call create-rules-meson,$(1),$(call toupper,$(1)),$(2))
