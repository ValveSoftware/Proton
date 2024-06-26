# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): source directory
#
# inputs:
#   $(PKG): variable, package source folder
#
# outputs:
#   $($(2)_SRC): variable, absolute rsynced source folder
#   $($(2)_ORIGIN): variable, absolute origin source folder
#   $(1)-rebuild: target, call it to force package rebuild
#   $(1)-source: target, tracking package source changes
#   $(1)-clean: target, clean package and force rebuild
#
define create-rules-source
$(2)_SRC = $$(OBJ)/src-$(1)
$(2)_ORIGIN = $(realpath $(3))

$(1)-rebuild:
.PHONY: $(1)-rebuild

$$(OBJ)/.$(1)-source: SHELL := $$(SHELL)
$$(OBJ)/.$(1)-source: $$(if $$(NO_MAKEFILE_DEPENDENCY),,$$(MAKEFILE_LIST))
$$(OBJ)/.$(1)-source: $$(shell echo -n 'syncing $(1)... ' >&2 && \
                              rsync --dry-run --filter=:C --exclude '*~' --exclude .git --exclude compile_commands.json $$($(2)_SOURCE_ARGS) --info=name -Oarx --delete "$$(abspath $(3))/" "$$($(2)_SRC)" | \
                              grep -v -e ^$$$$ 2>/dev/null | grep -q ^ && echo $(1)-rebuild && \
                              echo 'done, dirty' >&2 || echo 'done' >&2)
	rsync --filter=:C --exclude '*~' --exclude .git --exclude compile_commands.json $$($(2)_SOURCE_ARGS) --info=name -Oarx --delete "$$(abspath $(3))/" "$$($(2)_SRC)" $(--quiet?)
	touch $$@

$$(OBJ)/.$(1)-post-source: $$(OBJ)/.$(1)-source

$(1)-source: $$(OBJ)/.$(1)-post-source
.PHONY: $(1)-source

all-source: $(1)-source
.PHONY: all-source

all: all-source
.PHONY: all

$(1)-clean::
$(1)-distclean::
	rm -rf $$($(2)_SRC)

clean: $(1)-clean
distclean: $(1)-distclean
.PHONY: clean distclean
endef

rules-source = $(call create-rules-source,$(1),$(call toupper,$(1)),$(2))

$(OBJ)/.%-post-source:
	touch $@
