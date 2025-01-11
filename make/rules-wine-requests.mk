# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#
define create-rules-wine-requests
$$($(2)_SRC)/include/wine/server_protocol.h: | $$(OBJ)/.$(1)-post-source
$$($(2)_SRC)/include/wine/server_protocol.h: $$($(2)_ORIGIN)/include/wine/server_protocol.h
	cp -a $$< $$@
$$($(2)_SRC)/server/request_handlers.h: | $$(OBJ)/.$(1)-post-source
$$($(2)_SRC)/server/request_handlers.h: $$($(2)_ORIGIN)/server/request_handlers.h
	cp -a $$< $$@
$$($(2)_SRC)/server/request_trace.h: | $$(OBJ)/.$(1)-post-source
$$($(2)_SRC)/server/request_trace.h: $$($(2)_ORIGIN)/server/request_trace.h
	cp -a $$< $$@

$$(OBJ)/.$(1)-i386-configure: $$($(2)_SRC)/include/wine/server_protocol.h
$$(OBJ)/.$(1)-i386-configure: $$($(2)_SRC)/server/request_handlers.h
$$(OBJ)/.$(1)-i386-configure: $$($(2)_SRC)/server/request_trace.h

$$(OBJ)/.$(1)-x86_64-configure: $$($(2)_SRC)/include/wine/server_protocol.h
$$(OBJ)/.$(1)-x86_64-configure: $$($(2)_SRC)/server/request_handlers.h
$$(OBJ)/.$(1)-x86_64-configure: $$($(2)_SRC)/server/request_trace.h

$$(OBJ)/.$(1)-aarch64-configure: $$($(2)_SRC)/include/wine/server_protocol.h
$$(OBJ)/.$(1)-aarch64-configure: $$($(2)_SRC)/server/request_handlers.h
$$(OBJ)/.$(1)-aarch64-configure: $$($(2)_SRC)/server/request_trace.h

$$(OBJ)/.$(1)-wine-requests: $$($(2)_SRC)/include/wine/server_protocol.h
$$(OBJ)/.$(1)-wine-requests: $$($(2)_SRC)/server/request_handlers.h
$$(OBJ)/.$(1)-wine-requests: $$($(2)_SRC)/server/request_trace.h
$$(OBJ)/.$(1)-wine-requests: $$($(2)_ORIGIN)/server/protocol.def
$$(OBJ)/.$(1)-wine-requests: $$($(2)_ORIGIN)/tools/make_requests
$$(OBJ)/.$(1)-wine-requests: | $$(OBJ)/.$(1)-post-source
	@echo ":: wine-requesting $(1)..." >&2
	cd "$$($(2)_SRC)" && tools/make_requests
	touch $$@

$$(OBJ)/.$(1)-i386-build: $$(OBJ)/.$(1)-wine-requests
$$(OBJ)/.$(1)-x86_64-build: $$(OBJ)/.$(1)-wine-requests
$$(OBJ)/.$(1)-aarch64-build: $$(OBJ)/.$(1)-wine-requests
endef

rules-wine-requests = $(call create-rules-wine-requests,$(1),$(call toupper,$(1)))
