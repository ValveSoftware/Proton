# macOS App Bundle and Distribution packaging for Proton
#

PROTON_APP_NAME ?= ProtonMac.app
BUNDLE_DIR      := $(OBJ)/$(PROTON_APP_NAME)
BUNDLE_CONTENTS := $(BUNDLE_DIR)/Contents
BUNDLE_MACOS    := $(BUNDLE_CONTENTS)/MacOS
BUNDLE_RES      := $(BUNDLE_CONTENTS)/Resources

.PHONY: macos-app-bundle macos-dist-tarball

macos-app-bundle: $(DST_DIR)
	@echo ":: Creating $(PROTON_APP_NAME) bundle..."
	mkdir -p $(BUNDLE_MACOS) $(BUNDLE_RES)
	cp -a $(SRCDIR)/proton $(BUNDLE_MACOS)/proton
	cp -a $(SRCDIR)/proton_platform $(BUNDLE_MACOS)/proton_platform
	cp -a $(DST_DIR) $(BUNDLE_RES)/files
	@printf '<?xml version="1.0" encoding="UTF-8"?>\n' > $(BUNDLE_CONTENTS)/Info.plist
	@printf '<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '<plist version="1.0">\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '<dict>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <key>CFBundleExecutable</key>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <string>proton</string>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <key>CFBundleIdentifier</key>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <string>com.valvesoftware.proton.mac</string>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <key>CFBundleName</key>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <string>Proton macOS</string>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <key>CFBundlePackageType</key>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <string>APPL</string>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <key>CFBundleShortVersionString</key>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <string>11.0-100</string>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <key>LSMinimumSystemVersion</key>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '    <string>11.0</string>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '</dict>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@printf '</plist>\n' >> $(BUNDLE_CONTENTS)/Info.plist
	@echo ":: $(PROTON_APP_NAME) created at $(BUNDLE_DIR)"

macos-dist-tarball: macos-app-bundle
	@echo ":: Packaging $(BUILD_NAME)-macos.tar.gz..."
	mkdir -p $(DEPLOY_DIR)
	tar -czf $(DEPLOY_DIR)/$(BUILD_NAME)-macos.tar.gz -C $(OBJ) $(PROTON_APP_NAME)
	@echo ":: Distribution archive created at $(DEPLOY_DIR)/$(BUILD_NAME)-macos.tar.gz"
