#!/usr/bin/env python3

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../vrclient/gen_wrapper.py

CLANG_PATH='/usr/lib/clang/15'

from clang.cindex import Cursor, CursorKind, Index, TypeKind
import concurrent.futures
import os
import re

SDK_VERSIONS = [
    "160",
    "159",
    "158",
    "157",
    "156",
    "155",
    "154",
    "153a",
    "152",
    "151",
    "150",
    "149",
    "148a",
    "147",
    "146",
    "145",
    "144",
    "143y",
    "143x",
    "143",
    "142",
    "141",
    "140",
    "139",
    "138a",
    "138",
    "137",
    "136",
    "135a",
    "135",
    "134",
    "133x",
    "133b",
    "133a",
    "133",
    "132x",
    "132",
    "131",
    "130x",
    "130",
    "129a",
    "129",
    "128x",
    "128",
    "127",
    "126a",
    "126",
    "125",
    "124",
    "123a",
    "123",
    "122",
    "121x",
    "121",
    "120",
    "119x",
    "119",
    "118",
    "117",
    "116x",
    "116",
    "115",
    "114",
    "113",
    "112x",
    "112",
    "111x",
    "111",
    "110",
    "109",
    "108",
    "107",
    "106",
    "105",
    "104",
    "103",
    "102x",
    "102",
    "101x",
    "101",
    "100",
    "099y",
    "099x",
    "099w",
    "099v",
    "099u",
]

ABIS = ['u32', 'u64', 'w32', 'w64']

SDK_SOURCES = {
    "steam_api.h": [
        "ISteamApps",
        "ISteamAppList",
        "ISteamClient",
        "ISteamController",
        "ISteamGameSearch",
        "ISteamFriends",
        "ISteamHTMLSurface",
        "ISteamHTTP",
        "ISteamInput",
        "ISteamInventory",
        "ISteamMatchmaking",
        "ISteamMatchmakingServers",
        "ISteamMusic",
        "ISteamMusicRemote",
        "ISteamNetworking",
        "ISteamParties",
        "ISteamRemotePlay",
        "ISteamRemoteStorage",
        "ISteamScreenshots",
        "ISteamUGC",
        "ISteamUnifiedMessages",
        "ISteamUser",
        "ISteamUserStats",
        "ISteamUtils",
        "ISteamVideo"
    ],
    "isteamappticket.h": [
        "ISteamAppTicket"
    ],
    "isteamgameserver.h": [
        "ISteamGameServer"
    ],
    "isteamgameserverstats.h": [
        "ISteamGameServerStats"
    ],
    "isteamgamestats.h": [
        "ISteamGameStats"
    ],
    "isteammasterserverupdater.h": [
        "ISteamMasterServerUpdater"
    ],
    "isteamgamecoordinator.h": [
        "ISteamGameCoordinator"
    ],
    "isteamparentalsettings.h": [
        "ISteamParentalSettings"
    ],
    "isteamnetworkingmessages.h": [
        "ISteamNetworkingMessages"
    ],
    "isteamnetworkingsockets.h": [
        "ISteamNetworkingSockets"
    ],
    "isteamnetworkingsocketsserialized.h": [
        "ISteamNetworkingSocketsSerialized"
    ],
    "isteamnetworkingutils.h": [
        "ISteamNetworkingUtils"
    ],
    "steamnetworkingfakeip.h": [
        "ISteamNetworkingFakeUDPPort"
    ],
    "isteamtimeline.h": [
        "ISteamTimeline"
    ],
}

SDK_CLASSES = {klass: source for source, klasses in SDK_SOURCES.items()
               for klass in klasses}

VERSION_ALIASES = {
    #these interfaces are undocumented and binary compatible
    #"target interface": ["alias 1", "alias 2"],
    "SteamUtils004":["SteamUtils003"],
    "SteamUtils002":["SteamUtils001"],
    "SteamGameServer008":["SteamGameServer007","SteamGameServer006"],
    "SteamNetworkingSocketsSerialized002":["SteamNetworkingSocketsSerialized001"],
    "STEAMAPPS_INTERFACE_VERSION001":["SteamApps001"],
    "SteamNetworkingSockets002":["SteamNetworkingSockets003"],
}

# these structs are manually confirmed to be equivalent
EXEMPT_STRUCTS = {
    "CSteamID",
    "CGameID",
    "CCallbackBase",
    "SteamIPAddress_t",
    "SteamPS3Params_t",
    "ValvePackingSentinel_t"
}

# structs for which the size is important, either because of arrays or size parameters
SIZED_STRUCTS = {
    "SteamPartyBeaconLocation_t",
    "SteamItemDetails_t",
}

# we have converters for these written by hand because they're too complicated to generate
MANUAL_STRUCTS = [
    "SteamNetworkingMessage_t"
]

UNIX_FUNCS = [
    'steamclient_init',
    'steamclient_next_callback',
    'steamclient_CreateInterface',
    'steamclient_Steam_GetAPICallResult',
    'steamclient_Steam_BGetCallback',
    'steamclient_callback_message_receive',
    'steamclient_Steam_FreeLastCallback',
    'steamclient_Steam_ReleaseThreadLocalMemory',
    'steamclient_Steam_IsKnownInterface',
    'steamclient_Steam_NotifyMissingInterface',
    'steamclient_networking_messages_receive_144',
    'steamclient_networking_messages_receive_147',
    'steamclient_networking_messages_receive_153a',
    'steamclient_networking_message_release_147',
    'steamclient_networking_message_release_153a',
]

MANUAL_METHODS = {
    #TODO: 001 005 007
    #NOTE: 003 never appeared in a public SDK, but is an alias for 002 (the version in SDK 1.45 is actually 004 but incorrectly versioned as 003)
    "ISteamNetworkingSockets_ReceiveMessagesOnConnection": True,
    "ISteamNetworkingSockets_ReceiveMessagesOnListenSocket": True,
    "ISteamNetworkingSockets_ReceiveMessagesOnPollGroup": True,
    "ISteamNetworkingSockets_SendMessages": True,
    "ISteamNetworkingSockets_ConnectP2PCustomSignaling": lambda ver, abi: abi == 'u' and ver <= 8,
    "ISteamNetworkingSockets_ReceivedP2PCustomSignal": lambda ver, abi: abi == 'u' and ver <= 8,

    "ISteamMatchmakingServers_PingServer": lambda ver, abi: abi == 'u',
    "ISteamMatchmakingServers_PlayerDetails": lambda ver, abi: abi == 'u',
    "ISteamMatchmakingServers_ReleaseRequest": lambda ver, abi: abi == 'w',
    "ISteamMatchmakingServers_RequestFavoritesServerList": lambda ver, abi: abi == 'u',
    "ISteamMatchmakingServers_RequestFriendsServerList": lambda ver, abi: abi == 'u',
    "ISteamMatchmakingServers_RequestHistoryServerList": lambda ver, abi: abi == 'u',
    "ISteamMatchmakingServers_RequestInternetServerList": lambda ver, abi: abi == 'u',
    "ISteamMatchmakingServers_RequestLANServerList": lambda ver, abi: abi == 'u',
    "ISteamMatchmakingServers_RequestSpectatorServerList": lambda ver, abi: abi == 'u',
    "ISteamMatchmakingServers_ServerRules": lambda ver, abi: abi == 'u',

    "ISteamNetworkingUtils_AllocateMessage": True,
    "ISteamNetworkingUtils_SetConfigValue": lambda ver, abi: abi == 'u' and ver >= 3,

    "ISteamNetworkingMessages_ReceiveMessagesOnChannel": True,

    "ISteamInput_EnableActionEventCallbacks": lambda ver, abi: abi == 'u',
    "ISteamInput_GetGlyphForActionOrigin": True,
    "ISteamInput_GetGlyphPNGForActionOrigin": True,
    "ISteamInput_GetGlyphSVGForActionOrigin": True,
    "ISteamInput_GetGlyphForActionOrigin_Legacy": True,
    "ISteamInput_GetGlyphForXboxOrigin": True,

    "ISteamController_GetGlyphForActionOrigin": True,
    "ISteamController_GetGlyphForXboxOrigin": True,

    "ISteamNetworkingFakeUDPPort_DestroyFakeUDPPort": lambda ver, abi: abi == 'w',
    "ISteamNetworkingFakeUDPPort_ReceiveMessages": True,

    "ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess": lambda ver, abi: abi == 'u' and ver >= 20,

    "ISteamUtils_GetAPICallResult": lambda ver, abi: abi == 'u',
}


DEFINE_INTERFACE_VERSION = re.compile(r'^#define\s*(?P<name>STEAM(?:\w*)_VERSION(?:\w*))\s*"(?P<version>.*)"')


def is_manual_method(klass, method, abi):
    version = re.search(r'(\d+)$', klass.version)

    key = f'{klass.name}_{method.name}'
    needs_manual = MANUAL_METHODS.get(key, False)

    if callable(needs_manual) and version:
        return needs_manual(int(version[0]), abi)
    return needs_manual


# manual converters for simple types (function pointers)
MANUAL_TYPES = [
    "FSteamNetworkingSocketsDebugOutput",
    "SteamAPIWarningMessageHook_t",
    "SteamAPI_CheckCallbackRegistered_t",
    "SteamAPI_PostAPIResultInProcess_t",
    "void ()",
]

# manual converters for specific parameters
MANUAL_PARAMS = [
    "nNativeKeyCode"
]

converted_structs = []

all_classes = {}
all_records = {}
all_sources = {}
all_structs = {}
all_versions = {}
unique_structs = []


PATH_CONV_METHODS_UTOW = {
    "ISteamAppList_GetAppInstallDir": {
        "pchDirectory": {"len": "cchNameMax", "url": False},
        "ret_size": True,
    },
    "ISteamApps_GetAppInstallDir": {
        "pchFolder": {"len": "cchFolderBufferSize", "url": False},
        "ret_size": True,
    },
    "ISteamUGC_GetQueryUGCAdditionalPreview": {
        "pchURLOrVideoID": {"len": "cchURLSize", "url": True},
    },
    "ISteamUGC_GetItemInstallInfo": {
        "pchFolder": {"len": "cchFolderSize", "url": False},
    },
    "ISteamUser_GetUserDataFolder": {
        "pchBuffer": {"len": "cubBuffer", "url": False},
    },
}

PATH_CONV_METHODS_WTOU = {
    "ISteamApps_GetFileDetails": {
        "pszFileName": {"array": False, "url": False},
    },
    ### ISteamGameServer::SetModDir - "Just the folder name, not the whole path. I.e. "Spacewar"."
    "ISteamHTMLSurface_LoadURL": {
        "pchURL": {"array": False, "url": True},
    },
    "ISteamHTMLSurface_FileLoadDialogResponse": {
        "pchSelectedFiles": {"array": True, "url": False},
    },
    "ISteamRemoteStorage_PublishWorkshopFile": {
        "pchFile": {"array": False, "url": False},
        "pchPreviewFile": {"array": False, "url": False},
    },
    "ISteamRemoteStorage_UpdatePublishedFileFile": {
        "pchFile": {"array": False, "url": False},
    },
    "ISteamRemoteStorage_UpdatePublishedFilePreviewFile": {
        "pchPreviewFile": {"array": False, "url": False},
    },
    "ISteamRemoteStorage_PublishVideo": {
        "pchPreviewFile": {"array": False, "url": False},
    },
    "ISteamScreenshots_AddScreenshotToLibrary": {
        "pchFilename": {"array": False, "url": False},
        "pchThumbnailFilename": {"array": False, "url": False},
    },
    "ISteamScreenshots_AddVRScreenshotToLibrary": {
        "pchFilename": {"array": False, "url": False},
        "pchVRFilename": {"array": False, "url": False},
    },
    "ISteamRemoteStorage_UGCDownloadToLocation": {
        "pchLocation": {"array": False, "url": False},
    },
    "ISteamUGC_SetItemContent": {
        "pszContentFolder": {"array": False, "url": False},
    },
    "ISteamUGC_SetItemPreview": {
        "pszPreviewFile": {"array": False, "url": False},
    },
    "ISteamUGC_AddItemPreviewFile": {
        "pszPreviewFile": {"array": False, "url": False},
    },
    "ISteamUGC_UpdateItemPreviewFile": {
        "pszPreviewFile": {"array": False, "url": False},
    },
    "ISteamUGC_BInitWorkshopForGameServer": {
        "pszFolder": {"array": False, "url": False},
    },
    "ISteamUtils_CheckFileSignature": {
        "szFileName": {"array": False, "url": False},
    },
    "ISteamController_Init": {
        "pchAbsolutePathToControllerConfigVDF": {"array": False, "url": False},
    },
    "ISteamInput_SetInputActionManifestFilePath": {
        "pchInputActionManifestAbsolutePath": {"array": False, "url": False},
    },
    "ISteamFriends_ActivateGameOverlayToWebPage": {
        "pchURL": {"array": False, "url": True},
    },
}

PATH_CONV_STRUCTS = {
    "HTML_StartRequest_t": {
        "pchURL": True,
    },
    "HTML_URLChanged_t": {
        "pchURL": True,
    },
    "HTML_FinishedRequest_t": {
        "pchURL": True,
    },
    "HTML_OpenLinkInNewTab_t": {
        "pchURL": True,
    },
    "HTML_LinkAtPosition_t": {
        "pchURL": True,
    },
    "HTML_FileOpenDialog_t": {
        "pchInitialFile": True,
    },
    "HTML_NewWindow_t": {
        "pchURL": True,
    },
}

PRETOUCH_TYPES = {
    "const char *": "    IsBadStringPtrA({0}, -1);\n",
}

class Padding:
    def __init__(self, offset, size):
        self.offset = offset
        self.size = size


class Field:
    def __init__(self, cursor, struct, type, offset, name=None):
        self._cursor = cursor
        self._type = type

        self.name = cursor.spelling if not name else name
        self.type = cursor.type
        self.size = self.type.get_size()
        self.offset = offset

    def needs_conversion(self, other):
        return self._type.needs_conversion(other._type)


class BasicType:
    def __init__(self, type, abi):
        self._type = type.get_canonical()
        self._abi = abi
        self._decl_order = 0
        self._conv_cache = {}

        self.size = self._type.get_size()
        self.id = self._type.spelling

    @property
    def order(self):
        return self._decl_order

    def set_used(self, order=-1):
        if self._decl_order <= order:
            return
        self._decl_order = order

    def needs_conversion(self, other):
        if self._type.kind == TypeKind.POINTER and self._type.get_pointee().kind == TypeKind.FUNCTIONPROTO:
            return self._abi != other._abi
        return False


written_converters = set()

class Struct:
    def __init__(self, sdkver, abi, cursor):
        self._cursor = cursor
        self._sdkver = sdkver
        self._abi = abi
        self._fields = None
        self._decl_order = 0
        self._conv_cache = {}

        self.name = canonical_typename(self._cursor)
        self.type = self._cursor.type.get_canonical()
        self.size = self.type.get_size()
        self.align = self.type.get_align()
        self.id = f'{abi}_{self.name}_{sdkver}'

        if self.name in EXEMPT_STRUCTS:
            self._fields = [Padding(0, self.size)]

    @property
    def order(self):
        return self._decl_order

    def set_used(self, order=-1):
        if self._decl_order <= order:
            return
        self._decl_order = order
        [f._type.set_used(order - 1) for f in self.fields]

    @property
    def callback_id(self):
        is_enum = lambda c: c.kind == CursorKind.ENUM_DECL
        enums = filter(is_enum, self._cursor.get_children())
        is_callback = lambda c: c.displayname == "k_iCallback"
        callbacks = [k for c in enums for k in filter(is_callback, c.get_children())]
        if len(callbacks): return int(callbacks[0].enum_value)
        return None

    @property
    def padded_fields(self):
        if self._fields: return self._fields

        size, self._fields = 0, []
        for cursor in self._cursor.get_children():
            if cursor.kind == CursorKind.CXX_BASE_SPECIFIER \
               and len(list(cursor.type.get_fields())) > 0:
                base_type = Type(cursor.type, self._sdkver, self._abi)
                self._fields += base_type.padded_fields
                size = cursor.type.get_size()
            break

        for cursor in self.type.get_fields():
            assert not cursor.is_bitfield()
            offset = self.type.get_offset(cursor.spelling)
            assert offset % 8 == 0
            offset = offset // 8
            # assert offset >= size or type(self) is Union

            if size < offset: self._fields.append(Padding(size, offset - size))
            field_type = Type(cursor.type, self._sdkver, self._abi)
            self._fields.append(Field(cursor, self, field_type, offset))
            size = max(size, offset + cursor.type.get_size())

        if size < self.size: self._fields.append(Padding(size, self.size - size))
        return self._fields

    @property
    def fields(self):
        return [f for f in self.padded_fields if type(f) is not Padding]

    def write_definition(self, out, prefix, converters):
        version = all_versions[sdkver][self.name]
        kind = 'union' if type(self) is Union else 'struct'
        wrapped = len(prefix) > 0

        out(f'#pragma pack( push, {self.align} )\n')
        out(f'{kind} {prefix}{version}\n')
        out(u'{\n')
        for f in self.padded_fields:
            if type(f) is Field:
                out(f'    {declspec(f._cursor, f.name, prefix, wrapped)};\n')
            else:
                out(f'    uint8_t __pad_{f.offset}[{f.size}];\n')
        for conv in converters:
            out(u'#ifdef __cplusplus\n')
            out(f'    operator {conv}{version}() const;\n')
            out(u'#endif /* __cplusplus */\n')
        out(u'};\n')
        out(u'#pragma pack( pop )\n\n')

    def write_checks(self, out, prefix):
        version = all_versions[sdkver][self.name]

        out(f'C_ASSERT( sizeof({prefix}{version}) >= {self.size} );\n')
        for f in self.fields:
            out(f'C_ASSERT( offsetof({prefix}{version}, {f.name}) == {f.offset} );\n')
            out(f'C_ASSERT( sizeof({prefix}{version}().{f.name}) >= {f.size} );\n')
        out(u'\n')

    def write_converter(self, prefix, path_conv_fields):
        version = all_versions[sdkver][self.name]
        from_abi = self._abi[0]
        func_name = f'{version}_{prefix[0]}_from_{from_abi}'
        if not func_name in written_converters:
            written_converters.add(func_name)
            out(f'static void {func_name}(void *dst, const void *src)\n')
            out(u'{\n')
            out(f'    {prefix[0]}_{version} *d = ({prefix[0]}_{version} *)dst;\n')
            out(f'    const {from_abi}_{version} *s = (const {from_abi}_{version} *)src;\n\n')
            for field in self.fields:
                if field.name not in path_conv_fields:
                    out(f'    d->{field.name} = s->{field.name};\n')
                else:
                    out(f'    steamclient_unix_path_to_dos_path(1, s->{field.name}, g_tmppath, TEMP_PATH_BUFFER_LENGTH, 1);\n')
                    out(f'    d->{field.name} = g_tmppath;\n')
            out(u'}\n')

        if self._abi[1:3] == '64':
            out(u'#ifdef __x86_64__\n')
        elif self._abi[1:3] == '32':
            out(u'#ifdef __i386__\n')
        else:
            assert False

        out(f'{self._abi}_{version}::operator {prefix}{version}() const\n')
        out(u'{\n')
        out(f'    {prefix}{version} ret;\n')
        out(f'    {func_name}((void *)&ret, (const void *)this);\n')
        out(u'    return ret;\n')
        out(u'}\n')
        out(u'#endif\n\n')

    def needs_conversion(self, other):
        if other.id in self._conv_cache:
            return self._conv_cache[other.id]
        self._conv_cache[other.id] = other._conv_cache[self.id] = True

        if self.name in PATH_CONV_STRUCTS and self._abi[0] != other._abi[0]:
            return True
        if self.name in SIZED_STRUCTS and self.size != other.size:
            return True
        if len(self.fields) != len(other.fields):
            return True
        if any([a.offset != b.offset or a.needs_conversion(b)
               for a, b in zip(self.fields, other.fields)]):
            return True

        self._conv_cache[other.id] = other._conv_cache[self.id] = False
        return False

    def get_children(self):
        return self._cursor.get_children()


class Union(Struct):
    def __init__(self, sdkver, abi, cursor):
        super().__init__(sdkver, abi, cursor)

    def needs_conversion(self, other):
        return True


class Method:
    def __init__(self, sdkver, abi, cursor, klass, index, override):
        self._sdkver = sdkver
        self._abi = abi

        self._cursor = cursor
        self._klass = klass
        self._index = index
        self._override = override

        self.result_type = cursor.result_type
        self.spelling = cursor.spelling

    @property
    def name(self):
        if self._override > 1: return f'{self.spelling}_{self._override}'
        return self.spelling

    @property
    def full_name(self):
        return f'{self._klass.full_name}_{self.name}'

    def get_arguments(self):
        return self._cursor.get_arguments()

    def needs_conversion(self, other):
        if len(list(self.get_arguments())) != len(list(other.get_arguments())):
            return True
        return False # FIXME

    def write_params(self, out):
        returns_record = self.result_type.get_canonical().kind == TypeKind.RECORD

        ret = "*_ret" if returns_record else "_ret"
        ret = f'{declspec(self.result_type, ret, "w_")}'

        names = [p.spelling if p.spelling != "" else f'_{chr(0x61 + i)}'
                 for i, p in enumerate(self.get_arguments())]
        params = [declspec(p, names[i], "w_") for i, p in enumerate(self.get_arguments())]

        if self.result_type.kind != TypeKind.VOID:
            params = [ret] + params
            names = ['_ret'] + names

        params = ['struct u_steam_iface *linux_side'] + params
        names = ['linux_side'] + names

        out(f'struct {self.full_name}_params\n')
        out(u'{\n')
        for param in params:
            out(f'    {param};\n')
        out(u'};\n\n')

    def get_children(self):
        return self._cursor.get_children()


class Destructor(Method):
    def __init__(self, sdkver, abi, cursor, klass, index, override):
        super().__init__(sdkver, abi, cursor, klass, index, override)

    @property
    def name(self):
        if self._override > 1: return f'destructor_{self._override}'
        return 'destructor'

    def write_params(self, out):
        pass


class Class:
    def __init__(self, sdkver, abi, cursor):
        self._cursor = cursor
        self._sdkver = sdkver
        self._abi = abi
        self._methods = None
        self._decl_order = 0

        self.name = cursor.spelling
        self.filename = SDK_CLASSES.get(self.name, None)
        versions = all_versions[sdkver]
        self.version = self.name[1:].upper()
        self.version = versions.get(self.version, "")

        self.type = self._cursor.type.get_canonical()
        self.id = f'{abi}_{self.name}_{sdkver}'

    @property
    def methods(self):
        if self._methods:
            return self._methods

        overrides = {}
        is_method = lambda c: c.kind == CursorKind.CXX_METHOD and c.is_virtual_method()
        in_vtable = lambda c: is_method(c) or c.kind == CursorKind.DESTRUCTOR

        self._methods = []
        for i, method in enumerate(filter(in_vtable, self._cursor.get_children())):
            index, override = overrides.get(method.spelling, (i, 1))
            overrides[method.spelling] = (index, override + 1)
            if method.kind == CursorKind.DESTRUCTOR:
                self._methods.append(Destructor(self._sdkver, self._abi, method, self, index, override))
            else:
                self._methods.append(Method(self._sdkver, self._abi, method, self, index, override))

        return self._methods

    @property
    def full_name(self):
        if len(self.version) == 0:
            return self.name
        return f'{self.name}_{self.version}'

    @property
    def order(self):
        return self._decl_order

    def set_used(self, order=-1):
        if self._decl_order <= order:
            return
        self._decl_order = order

    def needs_conversion(self, other):
        if self._abi[0] != other._abi[0]:
            return True
        if len(self.methods) != len(other.methods):
            return True
        if any(m.needs_conversion(n) for m, n in zip(self.methods, other.methods)):
            return True
        return False

    def write_definition(self, out, prefix):
        out(f'struct {prefix}{self.full_name}\n')
        out(u'{\n')
        out(u'#ifdef __cplusplus\n')
        for method in self.methods:
            types = [declspec(p, "", prefix) for p in method.get_arguments()]

            # CGameID -> CGameID &
            # Windows side follows the prototype in the header while Linux
            # steamclient treats gameID parameter as pointer
            if self.full_name == 'ISteamUser_SteamUser008' \
               and method.name == 'InitiateGameConnection':
                types[3] = 'CGameID *'

            if type(method) is Destructor:
                out(f'    virtual ~{prefix}{self.full_name}( {", ".join(types)} ) = 0;\n')
            else:
                method_name = f'{declspec(method.result_type, "", prefix)} {method.spelling}'
                out(f'    virtual {method_name}( {", ".join(types)} ) = 0;\n')
        out(u'#endif /* __cplusplus */\n')
        out(u'};\n\n')

    def get_children(self):
        return self._cursor.get_children()


def Record(sdkver, abi, cursor):
    if cursor.type.get_declaration().kind == CursorKind.UNION_DECL:
        return Union(sdkver, abi, cursor)

    method_kinds = (CursorKind.CXX_METHOD, CursorKind.DESTRUCTOR)
    is_method = lambda c: c.kind in method_kinds and c.is_virtual_method()
    for _ in filter(is_method, cursor.get_children()):
        return Class(sdkver, abi, cursor)

    return Struct(sdkver, abi, cursor)


def Type(decl, sdkver, abi):
    name = canonical_typename(decl)
    if name not in all_structs:
        return BasicType(decl, abi)
    return all_structs[name][sdkver][abi]


def canonical_typename(cursor):
    if type(cursor) in (Struct, Class, Cursor):
        return canonical_typename(cursor.type)

    name = cursor.get_canonical().spelling
    return name.removeprefix("const ")


def underlying_typename(decl):
    return canonical_typename(underlying_type(decl))


def find_struct_abis(name):
    if not name in all_structs:
        return None
    structs = all_structs[name]
    if not sdkver in structs:
        return None
    return structs[sdkver]


def struct_needs_conversion(struct):
    name = canonical_typename(struct)
    if name in EXEMPT_STRUCTS:
        return False
    if name in MANUAL_STRUCTS:
        return True
    if name in PATH_CONV_STRUCTS:
        return True

    abis = find_struct_abis(name)
    if abis is None: return False
    if abis['w32'].needs_conversion(abis['u32']):
        return True
    if abis['w64'].needs_conversion(abis['u64']):
        return True
    return False


def underlying_type(decl):
    if type(decl) is Cursor:
        decl = decl.type
    if decl.kind == TypeKind.LVALUEREFERENCE: return underlying_type(decl.get_pointee())
    if decl.kind == TypeKind.CONSTANTARRAY: return underlying_type(decl.element_type)
    if decl.kind == TypeKind.POINTER: return underlying_type(decl.get_pointee())
    return decl


def param_needs_conversion(decl):
    decl = underlying_type(decl)
    return decl.kind == TypeKind.RECORD and \
           struct_needs_conversion(decl)


def callconv(cursor, prefix):
    if type(cursor) is not Cursor:
        return ''
    canon = cursor.type.get_canonical()
    if canon.kind != TypeKind.POINTER:
        return ''
    canon = canon.get_pointee()
    if canon.kind != TypeKind.FUNCTIONPROTO:
        return ''
    if cursor.type.kind == TypeKind.TYPEDEF:
        cursor = cursor.type.get_declaration()

    tokens = cursor.get_tokens()
    while next(tokens).spelling != '(': pass
    token = next(tokens).spelling.strip('_')
    token = token.replace('*', 'cdecl')
    token = token.replace('S_CALLTYPE', 'cdecl')
    return f'{prefix[0].upper()}_{token.upper()} '


def declspec_func(decl, name, prefix):
    ret = declspec(decl.get_result(), "", prefix, False)
    params = [declspec(a, "", prefix, False) for a in decl.argument_types()]
    params = ", ".join(params) if len(params) else "void"
    return f'{ret} ({name})({params})'


def declspec(decl, name, prefix, wrapped=False):
    call = callconv(decl, prefix)
    if type(decl) is Cursor:
        decl = decl.type
    decl = decl.get_canonical()

    const = 'const ' if decl.is_const_qualified() else ''
    if decl.kind == TypeKind.FUNCTIONPROTO:
        return declspec_func(decl, name, prefix)
    if decl.kind in (TypeKind.POINTER, TypeKind.LVALUEREFERENCE):
        decl = decl.get_pointee()
        spec = declspec(decl, f"*{call}{const}{name}", prefix, False)
        if wrapped:
            return f'{prefix.upper()}PTR({spec}, {name})'
        return spec
    if decl.kind == TypeKind.CONSTANTARRAY:
        decl, count = decl.element_type, decl.element_count
        if wrapped:
            spec = declspec(decl, const, prefix, False)
            return f'{prefix.upper()}ARRAY({spec}, {count}, {name})'
        return declspec(decl, f"({const}{name})[{count}]", prefix, False)

    if len(name):
        name = f' {name}'

    if decl.kind in (TypeKind.UNEXPOSED, TypeKind.FUNCTIONPROTO):
        return f'void{name}'
    if decl.kind == TypeKind.ENUM:
        return f'uint{decl.get_size() * 8}_t{name}'

    type_name = decl.spelling.removeprefix("const ")
    if decl.kind == TypeKind.RECORD \
       and type_name in all_versions[sdkver] \
       and type_name not in EXEMPT_STRUCTS:
        if type_name in unique_structs:
            return f'{const}{all_versions[sdkver][type_name]}{name}'
        return f'{const}{prefix}{all_versions[sdkver][type_name]}{name}'

    if type_name.startswith('ISteam'):
        return f'{const}void /*{type_name}*/{name}'
    if type_name in ('void', 'char', 'float', 'double'):
        return f'{const}{type_name}{name}'
    if type_name.startswith(('bool', 'int', 'long', 'short', 'signed')):
        return f'{const}int{decl.get_size() * 8}_t{name}'
    if type_name.startswith(('uint', 'unsigned')):
        return f'{const}uint{decl.get_size() * 8}_t{name}'

    if 'unnamed union' in decl.spelling:
        return f'{const}struct {{ uint8_t _[{decl.get_size()}]; }}{name}'
    return f'{decl.spelling}{name}'


def handle_method_cpp(method, classname, out):
    returns_void = method.result_type.kind == TypeKind.VOID
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD

    names = [p.spelling if p.spelling != "" else f'_{chr(0x61 + i)}'
             for i, p in enumerate(method.get_arguments())]

    need_convert = {n: p for n, p in zip(names, method.get_arguments())
                    if param_needs_conversion(p)}
    manual_convert = {n: p for n, p in zip(names, method.get_arguments())
                      if underlying_type(p).spelling in MANUAL_TYPES
                      or p.spelling in MANUAL_PARAMS}

    names = ['linux_side'] + names

    out(f'NTSTATUS {method.full_name}( void *args )\n')
    out(u'{\n')
    out(f'    struct {method.full_name}_params *params = (struct {method.full_name}_params *)args;\n')
    out(f'    struct u_{klass.full_name} *iface = (struct u_{klass.full_name} *)params->linux_side;\n')

    params = list(zip(names[1:], method.get_arguments()))
    for i, (name, param) in enumerate(params[:-1]):
        if underlying_type(param).kind != TypeKind.RECORD:
            continue
        next_name, next_param = params[i + 1]
        if not any(w in next_name.lower() for w in ('count', 'len', 'size', 'num')):
            continue
        assert underlying_typename(param) in SIZED_STRUCTS | EXEMPT_STRUCTS

    for i, (name, param) in enumerate(params[1:]):
        if underlying_type(param).kind != TypeKind.RECORD:
            continue
        prev_name, prev_param = params[i - 1]
        if not any(w in prev_name.lower() for w in ('count', 'len', 'size', 'num')):
            continue
        if underlying_typename(param) not in SIZED_STRUCTS | EXEMPT_STRUCTS:
            print('Warning:', underlying_typename(param), name, 'following', prev_name)

    path_conv_wtou = PATH_CONV_METHODS_WTOU.get(f'{klass.name}_{method.spelling}', {})

    for name, conv in filter(lambda x: x[0] in names, path_conv_wtou.items()):
        if conv['array']:
            out(f'    const char **u_{name} = steamclient_dos_to_unix_path_array( params->{name} );\n')
        else:
            out(f'    char *u_{name} = steamclient_dos_to_unix_path( params->{name}, {int(conv["url"])} );\n')

    need_output = {}

    for name, param in sorted(need_convert.items()):
        if param.type.kind != TypeKind.POINTER:
            out(f'    {declspec(param.type, f"u_{name}", "u_")} = params->{name};\n')
            continue

        pointee = param.type.get_pointee()
        if pointee.kind == TypeKind.POINTER:
            need_output[name] = param
            out(f'    {declspec(pointee, f"lin_{name}", "u_")};\n')
            continue

        if not pointee.is_const_qualified():
            need_output[name] = param

        out(f'    {declspec(pointee, f"u_{name}", "u_")} = *params->{name};\n')

    for name, param in sorted(manual_convert.items()):
        if name in MANUAL_PARAMS:
            out(f'    {declspec(param, f"u_{name}", "u_")} = manual_convert_{name}( params->{name} );\n')
        else:
            out(f'    {declspec(param, f"u_{name}", "u_")} = manual_convert_{method.name}_{name}( params->{name} );\n')

    if returns_void:
        out(u'    ')
    elif returns_record:
        out(u'    *params->_ret = ')
    else:
        out(u'    params->_ret = ')

    def param_call(name, param):
        pfx = '&' if param.type.kind == TypeKind.POINTER else ''
        if name in need_convert: return f"{pfx}u_{name}"
        if name in manual_convert: return f"u_{name}"
        if name in path_conv_wtou: return f"u_{name}"
        return f'params->{name}'

    params = [param_call(n, p) for n, p in zip(names[1:], method.get_arguments())]

    # CGameID -> CGameID &
    # Windows side follows the prototype in the header while Linux
    # steamclient treats gameID parameter as pointer
    if klass.full_name == 'ISteamUser_SteamUser008' \
       and method.name == 'InitiateGameConnection':
        params[3] = f'&{params[3]}'

    out(f'iface->{method.spelling}( {", ".join(params)} );\n')

    for name, param in sorted(need_output.items()):
        out(f'    *params->{name} = u_{name};\n')

    path_conv_utow = PATH_CONV_METHODS_UTOW.get(f'{klass.name}_{method.spelling}', {})

    for name, conv in filter(lambda x: x[0] in names, path_conv_utow.items()):
        out(u'    ')
        if "ret_size" in path_conv_utow:
            out(u'params->_ret = ')
        out(f'steamclient_unix_path_to_dos_path( params->_ret, params->{name}, params->{name}, params->{conv["len"]}, {int(conv["url"])} );\n')

    for name, conv in filter(lambda x: x[0] in names, path_conv_wtou.items()):
        if conv["array"]:
            out(f'    steamclient_free_path_array( u_{name} );\n')
        else:
            out(f'    steamclient_free_path( u_{name} );\n')

    out(u'    return 0;\n')
    out(u'}\n\n')


def handle_thiscall_wrapper(klass, method, out):
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD

    def param_stack_size(param):
        if param.type.kind == TypeKind.LVALUEREFERENCE: return 4
        return ((param.type.get_size() + 3) // 4) * 4

    size = 4 + sum(param_stack_size(p) for p in method.get_arguments())
    if returns_record: size += 4

    name = f'win{klass.full_name}_{method.name}'
    out(f'DEFINE_THISCALL_WRAPPER({name}, {size})\n')


def handle_method_c(klass, method, winclassname, out):
    returns_void = method.result_type.kind == TypeKind.VOID
    returns_record = method.result_type.get_canonical().kind == TypeKind.RECORD

    ret = "*" if returns_record else ""
    ret = f'{declspec(method.result_type, ret, "w_")} '

    names = [p.spelling if p.spelling != "" else f'_{chr(0x61 + i)}'
             for i, p in enumerate(method.get_arguments())]
    params = [declspec(p, names[i], "w_") for i, p in enumerate(method.get_arguments())]

    if returns_record:
        params = [f'{declspec(method.result_type, "*_ret", "w_")}'] + params
        names = ['_ret'] + names

    params = ['struct w_steam_iface *_this'] + params
    names = ['_this'] + names

    out(f'{ret}__thiscall {winclassname}_{method.name}({", ".join(params)})\n')
    out(u'{\n')

    out(f'    struct {method.full_name}_params params =\n')
    out(u'    {\n')
    out(u'        .linux_side = _this->u_iface,\n')
    for name in names[1:]: out(f'        .{name} = {name},\n')
    out(u'    };\n')

    out(u'    TRACE("%p\\n", _this);\n')

    # Some games pass pointers to the data in PE modules which have no access. Access violation is handled
    # by VEH (which decrypts data and changes page protection). That can only work if such access violation happens
    # on the PE side, so access the data before passing to the Unix side.
    for _, p in enumerate(method.get_arguments()):
        pretouch = PRETOUCH_TYPES.get(p.type.spelling)
        if pretouch is not None:
            out(pretouch.format(p.spelling))

    out(f'    STEAMCLIENT_CALL( {method.full_name}, &params );\n')

    if method.name.startswith('CreateFakeUDPPort'):
        out(u'    params._ret = create_winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001( params._ret );\n')
    elif method.name.startswith("GetISteamGenericInterface"):
        out(u'    params._ret = create_win_interface( pchVersion, params._ret );\n')
    elif method.result_type.spelling.startswith("ISteam"):
        out(u'    params._ret = create_win_interface( pchVersion, params._ret );\n')

    if not returns_void:
        out(u'    return params._ret;\n')
    out(u'}\n\n')


def handle_class(klass):
    cppname = f"cpp{klass.full_name}"

    with open(f"{cppname}.cpp", "w") as file:
        out = file.write

        out(u'/* This file is auto-generated, do not edit. */\n')
        out(u'#include "unix_private.h"\n\n')

        out(u'#if 0\n')
        out(u'#pragma makedep unix\n')
        out(u'#endif\n\n')

        for method in klass.methods:
            if type(method) is Destructor:
                continue
            if is_manual_method(klass, method, "u"):
                continue
            handle_method_cpp(method, klass.name, out)


    winclassname = f"win{klass.full_name}"
    with open(f"win{klass.name}.c", "a") as file:
        out = file.write

        for method in klass.methods:
            handle_thiscall_wrapper(klass, method, out)
        out('\n')

        for method in klass.methods:
            if is_manual_method(klass, method, "w"):
                continue
            if type(method) is Destructor:
                out(f'void __thiscall {winclassname}_{method.name}(struct w_steam_iface *_this)\n{{/* never called */}}\n\n')
            else:
                handle_method_c(klass, method, winclassname, out)

        out(f'extern vtable_ptr {winclassname}_vtable;\n')
        out(u'\n')
        out(f'DEFINE_RTTI_DATA0({winclassname}, 0, \".?AV{klass.name}@@\")\n')
        out(u'\n')
        out(f'__ASM_BLOCK_BEGIN({winclassname}_vtables)\n')
        out(f'    __ASM_VTABLE({winclassname},\n')
        for method in sorted(klass.methods, key=lambda x: (x._index, -x._override)):
            out(f'        VTABLE_ADD_FUNC({winclassname}_{method.name})\n')
        out(u'    );\n')
        out(u'__ASM_BLOCK_END\n')
        out(u'\n')
        out(f'struct w_steam_iface *create_{winclassname}(void *u_iface)\n')
        out(u'{\n')
        out(f'    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "{klass.version}");\n')
        out(u'    TRACE("-> %p\\n", r);\n')
        out(f'    r->vtable = alloc_vtable(&{winclassname}_vtable, {len(klass.methods)}, "{klass.version}");\n')
        out(u'    r->u_iface = u_iface;\n')
        out(u'    return r;\n')
        out(u'}\n\n')


def parse(sources, sdkver, abi):
    args = [f'-m{abi[1:]}', '-I' + CLANG_PATH + '/include/']
    if abi[0] == 'w':
        args += ["-D_WIN32", "-U__linux__"]
        args += ["-fms-extensions", "-mms-bitfields"]
        args += ["-Wno-ignored-attributes", "-Wno-incompatible-ms-struct"]
    if abi[0] == 'u':
        args += ["-DGNUC"]

    index = Index.create()
    build = index.parse("source.cpp", args=args, unsaved_files=sources.items())
    diagnostics = list(build.diagnostics)
    for diag in diagnostics: print(diag)
    assert len(diagnostics) == 0

    return sdkver, abi, build


def load(sdkver):
    sdkdir = f"steamworks_sdk_{sdkver}"

    sources = {}
    versions = {}
    for file in os.listdir(sdkdir):
        # Some files from Valve have non-UTF-8 stuff in the comments
        # (typically the copyright symbol); therefore we ignore UTF-8
        # encoding errors
        lines = open(f"{sdkdir}/{file}", "r", errors="replace").readlines()
        if """#error "This file isn't used any more"\n""" in lines:
            sources[f"{sdkdir}/{file}"] = ""

        results = (DEFINE_INTERFACE_VERSION.match(l) for l in lines)
        for result in (r.groupdict() for r in results if r):
            name, version = result['name'], result['version']
            name = name.replace('_INTERFACE_VERSION', '')
            name = name.replace('_VERSION', '')
            versions[name] = version

    source = [f'#if __has_include("{sdkdir}/{file}")\n'
              f'#include "{sdkdir}/{file}"\n'
              f'#endif\n'
              for file in SDK_SOURCES.keys()]
    sources["source.cpp"] = "\n".join(source)

    return versions, sources


def classify_struct(name):
    if name in EXEMPT_STRUCTS:
        return None
    structs = all_structs[name]

    prev = []
    versions = {}
    unique = True

    def set_class_version(abis, version):
        for abi in filter(lambda x: type(x) is Class, abis):
            abi.version = version

    for sdkver in filter(lambda v: v in structs, reversed(SDK_VERSIONS)):
        abis = [structs[sdkver][a] for a in ABIS]

        if any(abis[0].needs_conversion(a) for a in abis[1:]):
            unique = False

        def is_always_compatible(other):
            for a, b in zip(abis, other):
                if a.needs_conversion(b):
                    return False
            return True

        compat = next((k for k, v in prev if is_always_compatible(v)), None)
        if compat:
            versions[sdkver] = versions[compat]
            set_class_version(abis, compat)
        else:
            [abi.set_used() for abi in abis] # make sure order is computed
            versions[sdkver] = f"{name}_{sdkver}"
            prev += [(sdkver, abis)]
            set_class_version(abis, sdkver)

    if unique:
        unique_structs.append(name)

    if len(set(versions.values())) == 1:
        versions = {sdkver: name for sdkver in versions.keys()}
        for sdkver in filter(lambda v: v in structs, reversed(SDK_VERSIONS)):
            abis = [structs[sdkver][a] for a in ABIS]
            set_class_version(abis, "")

    return versions


for i, sdkver in enumerate(SDK_VERSIONS):
    print(f'loading SDKs... {i * 100 // len(SDK_VERSIONS)}%', end='\r')
    all_versions[sdkver], all_sources[sdkver] = load(sdkver)
print('loading SDKs... 100%')


tmp_classes = {}

with concurrent.futures.ThreadPoolExecutor() as executor:
    arg0 = [sdkver for sdkver in SDK_VERSIONS for abi in ABIS]
    arg1 = [abi for sdkver in SDK_VERSIONS for abi in ABIS]
    def parse_map(sdkver, abi):
        return parse(all_sources[sdkver], sdkver, abi)

    results = executor.map(parse_map, arg0, arg1)
    for i, result in enumerate(results):
        print(f'parsing SDKs... {i * 100 // len(arg0)}%', end='\r')
        sdkver, abi, build = result
        if sdkver not in all_records: all_records[sdkver] = {}
        if sdkver not in tmp_classes: tmp_classes[sdkver] = {}

        versions = all_versions[sdkver]

        structs = build.cursor.get_children()
        structs = filter(lambda c: c.is_definition(), structs)
        structs = filter(lambda c: c.type.get_canonical().kind == TypeKind.RECORD, structs)
        structs = filter(lambda c: c.kind != CursorKind.TYPEDEF_DECL, structs)
        structs = filter(lambda c: c.spelling not in SDK_CLASSES, structs)
        structs = [Record(sdkver, abi, c) for c in structs]
        structs = {c.name: c for c in structs}

        classes = build.cursor.get_children()
        classes = filter(lambda c: c.is_definition(), classes)
        classes = filter(lambda c: c.kind == CursorKind.CLASS_DECL, classes)
        classes = filter(lambda c: c.spelling in SDK_CLASSES, classes)
        classes = filter(lambda c: c.spelling[1:].upper() in versions, classes)
        classes = [Class(sdkver, abi, c) for c in classes]
        classes = {c.version: c for c in classes}

        all_records[sdkver][abi] = structs
        tmp_classes[sdkver][abi] = classes

        for name, struct in structs.items():
            if name not in all_structs:
                all_structs[name] = {}
            if sdkver not in all_structs[name]:
                all_structs[name][sdkver] = {}
            all_structs[name][sdkver][abi] = struct

for i, sdkver in enumerate(reversed(SDK_VERSIONS)):
    all_classes.update(tmp_classes[sdkver]['u32'])

print('parsing SDKs... 100%')


tmp_structs = {}

for i, name in enumerate(all_structs.keys()):
    print(f'classifying structs... {i * 100 // len(all_structs.keys())}%', end='\r')
    versions = classify_struct(name)
    for sdkver in SDK_VERSIONS:
        if not versions or sdkver not in versions: continue
        all_versions[sdkver][name] = versions[sdkver]

def struct_order(x):
    name, structs = x if type(x) is tuple else (x, all_structs[x])
    order = (struct.order for abis in structs.values()
             for struct in abis.values())
    return (min(order), name)

for name, structs in sorted(all_structs.items(), key=struct_order):
    tmp_structs[name] = {}
    for sdkver in filter(lambda v: v in structs, SDK_VERSIONS):
        tmp_structs[name][sdkver] = {a: structs[sdkver][a] for a in ABIS}

all_structs = tmp_structs

print('classifying structs... 100%')


for klass in all_classes.values():
    with open(f"win{klass.name}.c", "w") as file:
        out = file.write

        out(u'/* This file is auto-generated, do not edit. */\n')
        out(u'#include "steamclient_private.h"\n')
        out(u'\n')
        out(u'WINE_DEFAULT_DEBUG_CHANNEL(steamclient);\n')
        out(u'\n')


for _, klass in sorted(all_classes.items()):
    sdkver = klass._sdkver
    handle_class(klass)


for name in sorted(set(k.name for k in all_classes.values())):
    with open(f"win{name}.c", "a") as file:
        out = file.write
        out(f'void init_win{name}_rtti( char *base )\n')
        out(u'{\n')
        out(u'#ifdef __x86_64__\n')

for _, klass in sorted(all_classes.items()):
    with open(f"win{klass.name}.c", "a") as file:
        out = file.write
        out(f'    init_win{klass.full_name}_rtti( base );\n')

for name in sorted(set(k.name for k in all_classes.values())):
    with open(f"win{name}.c", "a") as file:
        out = file.write
        out(u'#endif /* __x86_64__ */\n')
        out(u'}\n')


with open("steamclient_generated.h", "w") as file:
    out = file.write

    out(u'/* This file is auto-generated, do not edit. */\n\n')

    for _, klass in sorted(all_classes.items()):
        out(f"extern struct w_steam_iface *create_win{klass.full_name}(void *);\n")


with open("steamclient_generated.c", "w") as file:
    out = file.write

    out(u'/* This file is auto-generated, do not edit. */\n\n')
    out(u'#include "steamclient_private.h"\n\n')

    out(u'static const struct { const char *iface_version; iface_constructor ctor; } constructors[] =\n')
    out(u'{\n')
    for _, klass in sorted(all_classes.items()):
        out(f'    {{"{klass.version}", &create_win{klass.full_name}}},\n')
        for alias in VERSION_ALIASES.get(klass.version, []):
            out(f'    {{"{alias}", &create_win{klass.full_name}}}, /* alias */\n')
    out(u'};\n')
    out(u'\n')
    out(u'iface_constructor find_iface_constructor( const char *iface_version )\n')
    out(u'{\n')
    out(u'    int i;\n')
    out(u'    for (i = 0; i < ARRAYSIZE(constructors); ++i)\n')
    out(u'        if (!strcmp( iface_version, constructors[i].iface_version ))\n')
    out(u'            return constructors[i].ctor;\n')
    out(u'    return NULL;\n')
    out(u'}\n\n')

    for name in sorted(set(k.name for k in all_classes.values())):
        out(f'extern void init_win{name}_rtti( char * );\n')
    out(u'\n')
    out(u'void init_rtti( char *base )\n')
    out(u'{\n')
    for name in sorted(set(k.name for k in all_classes.values())):
        out(f'    init_win{name}_rtti( base );\n')
    out(u'}\n')


for name, klasses in all_classes.items():
    if name not in SDK_CLASSES: continue
    for sdkver, klass in klasses.items():
        version = all_versions[sdkver][name[1:].upper()]
        handle_class(sdkver, klass, version, SDK_CLASSES[name])


declared = {}

with open('steamclient_structs_generated.h', 'w') as file:
    out = file.write

    for name in sorted(unique_structs, key=struct_order):
        if name in EXEMPT_STRUCTS: continue
        for sdkver, abis in all_structs[name].items():
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'struct {version}' in declared: continue
            declared[f'struct {version}'] = True

            kind = 'union' if type(abis['w64']) is Union else 'struct'

            out(f'typedef {kind} {version} {version};\n')
            abis['w64'].write_definition(out, "", [])

    for name, structs in all_structs.items():
        if name in EXEMPT_STRUCTS: continue
        if name in unique_structs: continue
        for sdkver, abis in structs.items():
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'typedef {version}' in declared: continue
            declared[f'typedef {version}'] = True

            kind = 'union' if type(abis['w64']) is Union else 'struct'

            if type(abis['w64']) is Class:
                out(f'typedef {kind} u_{version} u_{version};\n')
                out(f'typedef {kind} u_{version} u64_{version};\n')
                out(f'typedef {kind} u_{version} u32_{version};\n')
                out(f'typedef {kind} w_{version} w_{version};\n')
                out(f'typedef {kind} w_{version} w64_{version};\n')
                out(f'typedef {kind} w_{version} w32_{version};\n')
                continue

            if abis["w64"].needs_conversion(abis["u64"]):
                out(f'typedef {kind} u64_{version} u64_{version};\n')
            else:
                out(f'typedef {kind} w64_{version} u64_{version};\n')
            out(f'typedef {kind} w64_{version} w64_{version};\n')

            if abis["w32"].needs_conversion(abis["u32"]):
                out(f'typedef {kind} u32_{version} u32_{version};\n')
            else:
                out(f'typedef {kind} w32_{version} u32_{version};\n')
            out(f'typedef {kind} w32_{version} w32_{version};\n')

    for name, structs in all_structs.items():
        if name in EXEMPT_STRUCTS: continue
        if name in unique_structs: continue
        for sdkver, abis in structs.items():
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'struct {version}' in declared: continue
            declared[f'struct {version}'] = True

            kind = 'union' if type(abis['w64']) is Union else 'struct'

            if type(abis['w64']) is Class:
                abis['w64'].write_definition(out, "w_")
                abis['u64'].write_definition(out, "u_")
                continue

            if not abis["w64"].needs_conversion(abis["u64"]):
                abis['w64'].write_definition(out, "w64_", [])
            else:
                abis['w64'].write_definition(out, "w64_", ["u64_"])
                abis['u64'].write_definition(out, "u64_", ["w64_"])

            if not abis["w32"].needs_conversion(abis["u32"]):
                abis['w32'].write_definition(out, "w32_", [])
            else:
                abis['w32'].write_definition(out, "w32_", ["u32_"])
                abis['u32'].write_definition(out, "u32_", ["w32_"])

            out(u'#ifdef __i386__\n')
            out(f'typedef w32_{version} w_{version};\n')
            out(f'typedef u32_{version} u_{version};\n')
            out(u'#endif\n')
            out(u'#ifdef __x86_64__\n')
            out(f'typedef w64_{version} w_{version};\n')
            out(f'typedef u64_{version} u_{version};\n')
            out(u'#endif\n')
            out(u'\n')


all_methods = [(k, m) for _, k in sorted(all_classes.items())
               for m in k.methods]

with open("unix_private_generated.h", "w") as file:
    out = file.write

    out(u'/* This file is auto-generated, do not edit. */\n\n')
    out(u'#ifdef __cplusplus\n')
    out(u'extern "C" {\n')
    out(u'#endif /* __cplusplus */\n')
    out(u'\n')

    for klass in all_classes.values():
        sdkver = klass._sdkver
        klass.write_definition(out, "u_")
    out(u'\n')

    for klass, method in all_methods:
        sdkver = klass._sdkver
        if type(method) is Destructor:
            continue
        out(f'NTSTATUS {method.full_name}( void * );\n')
    out(u'\n')

    out(u'#ifdef __cplusplus\n')
    out(u'} /* extern "C" */\n')
    out(u'#endif /* __cplusplus */\n')


with open(u"unixlib_generated.h", "w") as file:
    out = file.write

    out(u'/* This file is auto-generated, do not edit. */\n')
    out(u'#include <stdarg.h>\n')
    out(u'#include <stddef.h>\n')
    out(u'#include <stdint.h>\n')
    out(u'\n')
    out(u'#ifdef __cplusplus\n')
    out(u'extern "C" {\n')
    out(u'#endif /* __cplusplus */\n')
    out(u'\n')

    out(u'#include <pshpack1.h>\n\n')
    for klass, method in all_methods:
        sdkver = klass._sdkver
        method.write_params(out)
    out(u'#include <poppack.h>\n\n')

    out(u'enum unix_funcs\n')
    out(u'{\n')
    for func in UNIX_FUNCS:
        out(f'    unix_{func},\n')
    for klass, method in all_methods:
        sdkver = klass._sdkver
        if type(method) is Destructor:
            continue
        out(f'    unix_{method.full_name},\n')
    out(u'};\n')
    out(u'\n')

    out(u'#ifdef __cplusplus\n')
    out(u'} /* extern "C" */\n')
    out(u'#endif /* __cplusplus */\n')


with open('unixlib_generated.cpp', 'w') as file:
    out = file.write

    out(u'/* This file is auto-generated, do not edit. */\n\n')
    out(u'#if 0\n')
    out(u'#pragma makedep unix\n')
    out(u'#endif\n')
    out(u'\n')
    out(u'#include "unix_private.h"\n\n')

    out(u'extern "C" const unixlib_entry_t __wine_unix_call_funcs[] =\n')
    out(u'{\n')
    for func in UNIX_FUNCS:
        out(f'    {func},\n')
    for klass, method in all_methods:
        sdkver = klass._sdkver
        if type(method) is Destructor:
            continue
        out(f'    {method.full_name},\n')
    out(u'};\n')
    out(u'\n')

    callbacks = []

    for name in sorted(unique_structs, key=struct_order):
        for sdkver, abis in all_structs[name].items():
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'checks {version}' in declared: continue
            declared[f'checks {version}'] = True

            abis['w64'].write_checks(out, "")

    for name, structs in all_structs.items():
        if name in EXEMPT_STRUCTS: continue
        if name in unique_structs: continue
        for sdkver, abis in structs.items():
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'checks {version}' in declared: continue
            declared[f'checks {version}'] = True

            if type(abis['w64']) is Class:
                continue

            cbid = abis["w64"].callback_id
            if cbid is not None and (abis["w64"] != abis["u64"] or abis["w32"] != abis["u32"]):
                callbacks += [(cbid, sdkver, abis)]

            abis['w64'].write_checks(out, "w64_")
            abis['u64'].write_checks(out, "u64_")
            abis['w32'].write_checks(out, "w32_")
            abis['u32'].write_checks(out, "u32_")

        if name in MANUAL_STRUCTS: continue

        for sdkver, abis in structs.items():
            if name not in all_versions[sdkver]: continue

            version = all_versions[sdkver][name]
            if f'struct {version} convert' in declared: continue
            declared[f'struct {version} convert'] = True

            if type(abis['w64']) in (Class, Union):
                continue

            path_conv_fields = PATH_CONV_STRUCTS.get(name, {})

            if abis["w64"].needs_conversion(abis["u64"]):
                abis['w64'].write_converter('u64_', {})
                out(u'\n')
                abis['u64'].write_converter('w64_', path_conv_fields)

            if abis["w32"].needs_conversion(abis["u32"]):
                abis['w32'].write_converter('u32_', {})
                out(u'\n')
                abis['u32'].write_converter('w32_', path_conv_fields)

    out(u'#ifdef __i386__\n')
    out(u'const struct callback_def callback_data[] =\n{\n');
    values = set()
    for cbid, sdkver, abis in sorted(callbacks, key=lambda x: x[0]):
        name, value = abis["u32"].name, (cbid, abis["w32"].size, abis["u32"].size)
        if name in all_versions[sdkver]: name = all_versions[sdkver][name]

        w_from_u = f'{name}_w_from_u'
        if not w_from_u in written_converters:
            w_from_u = u'nullptr'

        if value not in values:
            out(f'    {{ {cbid}, {sdkver}, {abis["w32"].size}, {abis["u32"].size}, {w_from_u} }},\n')
        else:
            out(f'    /*{{ {cbid}, {sdkver}, {abis["w32"].size}, {abis["u32"].size}, {w_from_u} }},*/\n')
        values.add(value)
    out(u'};\n');
    out(u'#endif\n')
    out(u'#ifdef __x86_64__\n')
    out(u'const struct callback_def callback_data[] =\n{\n');
    values = set()
    for cbid, sdkver, abis in sorted(callbacks, key=lambda x: x[0]):
        name, value = abis["u64"].name, (cbid, abis["w64"].size, abis["u64"].size)
        if name in all_versions[sdkver]: name = all_versions[sdkver][name]

        w_from_u = f'{name}_w_from_u'
        if not w_from_u in written_converters:
            w_from_u = u'nullptr'

        if value not in values:
            out(f'    {{ {cbid}, {sdkver}, {abis["w64"].size}, {abis["u64"].size}, {w_from_u} }},\n')
        else:
            out(f'    /*{{ {cbid}, {sdkver}, {abis["w64"].size}, {abis["u64"].size}, {w_from_u} }},*/\n')
        values.add(value)
    out(u'};\n');
    out(u'#endif\n')
    out(u'const unsigned int callback_data_size = ARRAY_SIZE(callback_data);\n');
