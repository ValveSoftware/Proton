# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64, build type
#
define create-rules-cargo
$(call create-rules-common,$(1),$(2),$(3))

ifeq ($(CONTAINER),1)
$(OBJ)/.$(1)-configure$(3):
	@echo ":: configuring $(3)bit $(1)..." >&2
	touch $$@

$(OBJ)/.$(1)-build$(3):
	@echo ":: building $(3)bit $(1)..." >&2
	cd $$($(2)_SRC) && env $$($(2)_ENV$(3)) \
	cargo build --target "$$(ARCH$(3))-unknown-linux-gnu" --target-dir $$($(2)_OBJ$(3)) $$(CARGO_BUILD_ARG)
	touch $$@
endif
endef

rules-cargo = $(call create-rules-cargo,$(1),$(call toupper,$(1)),$(2))
