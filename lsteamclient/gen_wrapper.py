#!/usr/bin/env python2

#NOTE: If you make modifications here, consider whether they should
#be duplicated in ../vrclient/gen_wrapper.py

from __future__ import print_function

CLANG_PATH='/usr/lib/clang/9.0.0'

import pprint
import sys
import clang.cindex
import os
import re
import math

sdk_versions = [
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

files = [
    ("steam_api.h", [
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
    ]),
    ("isteamappticket.h", [
        "ISteamAppTicket"
    ]),
    ("isteamgameserver.h", [
        "ISteamGameServer"
    ]),
    ("isteamgameserverstats.h", [
        "ISteamGameServerStats"
    ]),
    ("isteamgamestats.h", [
        "ISteamGameStats"
    ]),
    ("isteammasterserverupdater.h", [
        "ISteamMasterServerUpdater"
    ]),
    ("isteamgamecoordinator.h", [
        "ISteamGameCoordinator"
    ]),
    ("isteamparentalsettings.h", [
        "ISteamParentalSettings"
    ]),
    ("isteamnetworkingsockets.h", [
        "ISteamNetworkingSockets"
    ]),
    ("isteamnetworkingsocketsserialized.h", [
        "ISteamNetworkingSocketsSerialized"
    ]),
    ("isteamnetworkingutils.h", [
        "ISteamNetworkingUtils"
    ]),
]

aliases = {
    #these interfaces are undocumented and binary compatible
    "SteamUtils004":["SteamUtils003"],
    "SteamUtils002":["SteamUtils001"],
    "SteamGameServer008":["SteamGameServer007","SteamGameServer006"],
    "SteamNetworkingSocketsSerialized002":["SteamNetworkingSocketsSerialized001"],
    "STEAMAPPS_INTERFACE_VERSION001":["SteamApps001"],
}

# these structs are manually confirmed to be equivalent
exempt_structs = [
        "CSteamID",
        "CGameID",
        "CCallbackBase",
        "SteamPS3Params_t",
        "ValvePackingSentinel_t"
]

# we have converters for these written by hand because they're too complicated to generate
manually_handled_structs = [
        "SteamNetworkingMessage_t"
]

manually_handled_methods = {
        "cppISteamNetworkingSockets_SteamNetworkingSockets002": [
            "ReceiveMessagesOnConnection",
            "ReceiveMessagesOnListenSocket"
        ],
        "cppISteamNetworkingSockets_SteamNetworkingSockets003": [
            "ReceiveMessagesOnConnection",
            "ReceiveMessagesOnListenSocket"
        ],
        "cppISteamNetworkingSockets_SteamNetworkingSockets006": [
            "ReceiveMessagesOnConnection",
            "ReceiveMessagesOnListenSocket",
            "SendMessages"
        ],
        "cppISteamNetworkingUtils_SteamNetworkingUtils003": [
            "AllocateMessage",
        ],
}

# manual converters for simple types (function pointers)
manual_type_converters = [
        "FSteamNetworkingSocketsDebugOutput",
        "SteamAPI_CheckCallbackRegistered_t"
]

# manual converters for specific parameters
manual_param_converters = [
        "nNativeKeyCode"
]

#struct_conversion_cache = {
#    '142': {
#                'SteamUGCDetails_t': True,
#                'SteamUGCQueryCompleted_t': False
#           }
#}
struct_conversion_cache = {}

converted_structs = []

# callback classes for which we have a linux wrapper
wrapped_classes = [
        "ISteamMatchmakingServerListResponse",
        "ISteamMatchmakingPingResponse",
        "ISteamMatchmakingPlayersResponse",
        "ISteamMatchmakingRulesResponse"
]

print_sizes = []

class_versions = {}

path_conversions = [
        {
            "parent_name": "GetAppInstallDir",
            "l2w_names": ["pchDirectory"],
            "l2w_lens": ["cchNameMax"],
            "l2w_urls": [False],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": True
        },
        {
            "parent_name": "GetAppInstallDir",
            "l2w_names": ["pchFolder"],
            "l2w_lens": ["cchFolderBufferSize"],
            "l2w_urls": [False],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": True
        },
        {
            "parent_name": "GetFileDetails",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pszFileName"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": True
        },
        {
            "parent_name": "GetGlyphForActionOrigin",
            "l2w_names": [None], #return value
            "l2w_lens": [None],
            "l2w_urls": [None],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        ### ISteamGameServer::SetModDir - "Just the folder name, not the whole path. I.e. "Spacewar"."
        {
            "parent_name": "LoadURL",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pchURL"],
            "w2l_arrays": [False],
            "w2l_urls": [True],
            "return_is_size": False
        },
        {
            "parent_name": "FileLoadDialogResponse",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pchSelectedFiles"],
            "w2l_arrays": [True],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "HTML_StartRequest_t",
            "l2w_names": ["pchURL"],
            "l2w_lens": [None],
            "l2w_urls": [True],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        {
            "parent_name": "HTML_URLChanged_t",
            "l2w_names": ["pchURL"],
            "l2w_lens": [None],
            "l2w_urls": [True],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        {
            "parent_name": "HTML_FinishedRequest_t",
            "l2w_names": ["pchURL"],
            "l2w_lens": [None],
            "l2w_urls": [True],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        {
            "parent_name": "HTML_OpenLinkInNewTab_t",
            "l2w_names": ["pchURL"],
            "l2w_lens": [None],
            "l2w_urls": [True],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        {
            "parent_name": "HTML_LinkAtPosition_t",
            "l2w_names": ["pchURL"],
            "l2w_lens": [None],
            "l2w_urls": [True],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        {
            "parent_name": "HTML_FileOpenDialog_t",
            "l2w_names": ["pchInitialFile"],
            "l2w_lens": [None],
            "l2w_urls": [True],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        {
            "parent_name": "HTML_NewWindow_t",
            "l2w_names": ["pchURL"],
            "l2w_lens": [None],
            "l2w_urls": [True],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        {
            "parent_name": "PublishWorkshopFile",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pchFile", "pchPreviewFile"],
            "w2l_arrays": [False, False],
            "w2l_urls": [False, False],
            "return_is_size": False
        },
        {
            "parent_name": "UpdatePublishedFileFile",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pchFile"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "UpdatePublishedFilePreviewFile",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pchPreviewFile"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "PublishVideo",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pchPreviewFile"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "AddScreenshotToLibrary",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pchFilename", "pchThumbnailFilename"],
            "w2l_arrays": [False, False],
            "w2l_urls": [False, False],
            "return_is_size": False
        },
        {
            "parent_name": "AddVRScreenshotToLibrary",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pchFilename", "pchVRFilename"],
            "w2l_arrays": [False, False],
            "w2l_urls": [False, False],
            "return_is_size": False
        },
        {
            "parent_name": "UGCDownloadToLocation",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pchLocation"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "GetQueryUGCAdditionalPreview",
            "l2w_names": ["pchURLOrVideoID"],
            "l2w_lens": ["cchURLSize"],
            "l2w_urls": [True],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        {
            "parent_name": "SetItemContent",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pszContentFolder"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "SetItemPreview",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pszPreviewFile"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "AddItemPreviewFile",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pszPreviewFile"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "UpdateItemPreviewFile",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pszPreviewFile"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "GetItemInstallInfo",
            "l2w_names": ["pchFolder"],
            "l2w_lens": ["cchFolderSize"],
            "l2w_urls": [False],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        {
            "parent_name": "BInitWorkshopForGameServer",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pszFolder"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "GetUserDataFolder",
            "l2w_names": ["pchBuffer"],
            "l2w_lens": ["cubBuffer"],
            "l2w_urls": [False],
            "w2l_names": [],
            "w2l_arrays": [],
            "w2l_urls": [],
            "return_is_size": False
        },
        {
            "parent_name": "CheckFileSignature",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["szFileName"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        },
        {
            "parent_name": "Init",
            "l2w_names": [],
            "l2w_lens": [],
            "l2w_urls": [],
            "w2l_names": ["pchAbsolutePathToControllerConfigVDF"],
            "w2l_arrays": [False],
            "w2l_urls": [False],
            "return_is_size": False
        }
]

def strip_const(typename):
    return typename.replace("const ", "", 1)

def find_windows_struct(struct):
    for child in list(windows_build.cursor.get_children()):
        if strip_const(struct.spelling) == child.spelling:
            return child.type
    return None

def find_windows64_struct(struct):
    for child in list(windows_build64.cursor.get_children()):
        if strip_const(struct.spelling) == child.spelling:
            return child.type
    return None

def find_linux64_struct(struct):
    for child in list(linux_build64.cursor.get_children()):
        if strip_const(struct.spelling) == child.spelling:
            return child.type
    return None

def struct_needs_conversion_nocache(struct):
    if strip_const(struct.spelling) in exempt_structs:
        return False
    if strip_const(struct.spelling) in manually_handled_structs:
        return True

    #check 32-bit compat
    windows_struct = find_windows_struct(struct)
    assert(not windows_struct is None) #must find windows_struct
    for field in struct.get_fields():
        if struct.get_offset(field.spelling) != windows_struct.get_offset(field.spelling):
            return True
        if field.type.kind == clang.cindex.TypeKind.RECORD and \
                struct_needs_conversion(field.type):
            return True

    #check 64-bit compat
    windows_struct = find_windows64_struct(struct)
    assert(not windows_struct is None) #must find windows_struct
    lin64_struct = find_linux64_struct(struct)
    assert(not lin64_struct is None) #must find lin64_struct
    for field in lin64_struct.get_fields():
        if lin64_struct.get_offset(field.spelling) != windows_struct.get_offset(field.spelling):
            return True
        if field.type.kind == clang.cindex.TypeKind.RECORD and \
                struct_needs_conversion(field.type):
            return True

    #check if any members need path conversion
    path_conv = get_path_converter(struct)
    if path_conv:
        return True
    return False

def struct_needs_conversion(struct):
    if not sdkver in struct_conversion_cache:
        struct_conversion_cache[sdkver] = {}
    if not strip_const(struct.spelling) in struct_conversion_cache[sdkver]:
        struct_conversion_cache[sdkver][strip_const(struct.spelling)] = struct_needs_conversion_nocache(struct)
    return struct_conversion_cache[sdkver][strip_const(struct.spelling)]

def handle_destructor(cfile, classname, winclassname, method):
    cfile.write("DEFINE_THISCALL_WRAPPER(%s_destructor, 4)\n" % winclassname)
    cfile.write("void __thiscall %s_destructor(%s *_this)\n{/* never called */}\n\n" % (winclassname, winclassname))
    return "destructor"

def get_path_converter(parent):
    for conv in path_conversions:
        if conv["parent_name"] in parent.spelling:
            if None in conv["l2w_names"]:
                return conv
            if type(parent) == clang.cindex.Type:
                children = list(parent.get_fields())
            else:
                children = list(parent.get_children())
            for child in children:
                if child.spelling in conv["w2l_names"] or \
                        child.spelling in conv["l2w_names"]:
                    return conv
    return None

class DummyWriter(object):
    def write(self, s):
        #noop
        pass

def to_c_bool(b):
    if b:
        return "1"
    return "0"

dummy_writer = DummyWriter()

def handle_method(cfile, classname, winclassname, cppname, method, cpp, cpp_h, existing_methods):
    used_name = method.spelling
    if used_name in existing_methods:
        number = '2'
        while used_name in existing_methods:
            idx = existing_methods.index(used_name)
            used_name = "%s_%s" % (method.spelling, number)
            number = chr(ord(number) + 1)
        existing_methods.insert(idx, used_name)
    else:
        existing_methods.append(used_name)
    returns_record = method.result_type.get_canonical().kind == clang.cindex.TypeKind.RECORD
    if returns_record:
        parambytes = 8 #_this + return pointer
    else:
        parambytes = 4 #_this
    for param in list(method.get_children()):
        if param.kind == clang.cindex.CursorKind.PARM_DECL:
            parambytes += int(math.ceil(param.type.get_size()/4.0) * 4)
    if cppname in manually_handled_methods and \
            used_name in manually_handled_methods[cppname]:
        #just don't write the cpp function
        cpp = dummy_writer
    cfile.write("DEFINE_THISCALL_WRAPPER(%s_%s, %s)\n" % (winclassname, used_name, parambytes))
    cpp_h.write("extern ")
    if method.result_type.spelling.startswith("ISteam"):
        cfile.write("win%s " % (method.result_type.spelling))
        cpp.write("void *")
        cpp_h.write("void *")
    elif returns_record:
        cfile.write("%s *" % method.result_type.spelling)
        cpp.write("%s " % (method.result_type.spelling))
        cpp_h.write("%s " % (method.result_type.spelling))
    else:
        cfile.write("%s " % (method.result_type.spelling))
        cpp.write("%s " % (method.result_type.spelling))
        cpp_h.write("%s " % (method.result_type.spelling))
    cfile.write('__thiscall %s_%s(%s *_this' % (winclassname, used_name, winclassname))
    cpp.write("%s_%s(void *linux_side" % (cppname, used_name))
    cpp_h.write("%s_%s(void *" % (cppname, used_name))
    if returns_record:
        cfile.write(", %s *_r" % method.result_type.spelling)
    unnamed = 'a'
    need_convert = []
    manual_convert = []
    for param in list(method.get_children()):
        if param.kind == clang.cindex.CursorKind.PARM_DECL:
            if param.type.kind == clang.cindex.TypeKind.POINTER and \
                    param.type.get_pointee().kind == clang.cindex.TypeKind.FUNCTIONPROTO:
                #unspecified function pointer
                typename = "void *"
            else:
                typename = param.type.spelling.split("::")[-1];

            real_type = param.type;
            while real_type.kind == clang.cindex.TypeKind.POINTER:
                real_type = real_type.get_pointee()
            win_name = typename
            if real_type.kind == clang.cindex.TypeKind.RECORD and \
                    not real_type.spelling in wrapped_classes and \
                    struct_needs_conversion(real_type):
                need_convert.append(param)
                #preserve pointers
                win_name = typename.replace(real_type.spelling, "win%s_%s" % (real_type.spelling, sdkver))
            elif real_type.spelling in manual_type_converters:
                manual_convert.append(param)
            elif param.spelling in manual_param_converters:
                manual_convert.append(param)

            if param.spelling == "":
                cfile.write(", %s _%s" % (win_name, unnamed))
                cpp.write(", %s _%s" % (win_name, unnamed))
                cpp_h.write(", %s" % win_name)
                unnamed = chr(ord(unnamed) + 1)
            else:
                cfile.write(", %s %s" % (win_name, param.spelling))
                cpp.write(", %s %s" % (win_name, param.spelling))
                cpp_h.write(", %s" % (win_name))
    cfile.write(")\n{\n")
    cpp.write(")\n{\n")
    cpp_h.write(");\n")

    path_conv = get_path_converter(method)

    if path_conv:
        for i in range(len(path_conv["w2l_names"])):
            if path_conv["w2l_arrays"][i]:
                cfile.write("    const char **lin_%s = steamclient_dos_to_unix_stringlist(%s);\n" % (path_conv["w2l_names"][i], path_conv["w2l_names"][i]))
                # TODO
                pass
            else:
                cfile.write("    char lin_%s[PATH_MAX];\n" % path_conv["w2l_names"][i])
                cfile.write("    steamclient_dos_path_to_unix_path(%s, lin_%s, %s);\n" % (path_conv["w2l_names"][i], path_conv["w2l_names"][i], to_c_bool(path_conv["w2l_urls"][i])))
        if None in path_conv["l2w_names"]:
            cfile.write("    const char *path_result;\n")
        elif path_conv["return_is_size"]:
            cfile.write("    uint32 path_result;\n")
        elif len(path_conv["l2w_names"]) > 0:
            cfile.write("    %s path_result;\n" % method.result_type.spelling)

    for param in need_convert:
        if param.type.kind == clang.cindex.TypeKind.POINTER:
            #handle single pointers, but not double pointers
            real_type = param.type;
            while real_type.kind == clang.cindex.TypeKind.POINTER:
                real_type = real_type.get_pointee()
            assert(param.type.get_pointee().kind == clang.cindex.TypeKind.RECORD or \
                    strip_const(real_type.spelling) in manually_handled_structs)
            cpp.write("    %s lin_%s;\n" % (strip_const(param.type.get_pointee().spelling), param.spelling))
            cpp.write("    win_to_lin_struct_%s_%s(%s, &lin_%s);\n" % (strip_const(real_type.spelling), sdkver, param.spelling, param.spelling))
        else:
            #raw structs
            cpp.write("    %s lin_%s;\n" % (param.type.spelling, param.spelling))
            cpp.write("    win_to_lin_struct_%s_%s(&%s, &lin_%s);\n" % (param.type.spelling, sdkver, param.spelling, param.spelling))
    for param in manual_convert:
        if param.spelling in manual_param_converters:
            cpp.write("    %s = manual_convert_%s(%s);\n" % (param.spelling, param.spelling, param.spelling))
        else:
            cpp.write("    %s = (%s)manual_convert_%s((void*)%s);\n" % (param.spelling, param.type.spelling, param.type.spelling, param.spelling))

    cfile.write("    TRACE(\"%p\\n\", _this);\n")

    if method.result_type.kind == clang.cindex.TypeKind.VOID:
        cfile.write("    ")
    elif path_conv and (len(path_conv["l2w_names"]) > 0 or path_conv["return_is_size"]):
        cfile.write("    path_result = ")
    elif returns_record:
        cfile.write("    *_r = ")
    else:
        cfile.write("    return ")

    if method.result_type.kind == clang.cindex.TypeKind.VOID:
        cpp.write("    ")
    elif len(need_convert) > 0:
        cpp.write("    %s retval = " % (method.result_type.spelling))
    else:
        cpp.write("    return ")

    should_do_cb_wrap = "GetAPICallResult" in used_name
    should_gen_wrapper = method.result_type.spelling.startswith("ISteam") or \
            used_name.startswith("GetISteamGenericInterface")

    if should_do_cb_wrap:
        cfile.write("do_cb_wrap(0, _this->linux_side, &%s_%s" % (cppname, used_name))
    else:
        if should_gen_wrapper:
            cfile.write("create_win_interface(pchVersion,\n        ")
        cfile.write("%s_%s(_this->linux_side" % (cppname, used_name))
    cpp.write("((%s*)linux_side)->%s(" % (classname, method.spelling))
    unnamed = 'a'
    first = True
    for param in list(method.get_children()):
        if param.kind == clang.cindex.CursorKind.PARM_DECL:
            if not first:
                cpp.write(", ")
            else:
                first = False
            if param.spelling == "":
                cfile.write(", _%s" % unnamed)
                cpp.write("(%s)_%s" % (param.type.spelling, unnamed))
                unnamed = chr(ord(unnamed) + 1)
            elif param.type.kind == clang.cindex.TypeKind.POINTER and \
                    param.type.get_pointee().spelling in wrapped_classes:
                cfile.write(", create_Linux%s(%s, \"%s\")" % (param.type.get_pointee().spelling, param.spelling, winclassname))
                cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
            elif path_conv and param.spelling in path_conv["w2l_names"]:
                cfile.write(", %s ? lin_%s : NULL" % (param.spelling, param.spelling))
                cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
            elif param in need_convert:
                cfile.write(", %s" % param.spelling)
                if param.type.kind != clang.cindex.TypeKind.POINTER:
                    cpp.write("lin_%s" % (param.spelling))
                else:
                    cpp.write("&lin_%s" % (param.spelling))
            else:
                cfile.write(", %s" % param.spelling)
                cpp.write("(%s)%s" % (param.type.spelling, param.spelling))
    if should_gen_wrapper:
        cfile.write(")")
    cfile.write(");\n")
    cpp.write(");\n")
    if returns_record:
        cfile.write("    return _r;\n")
    if path_conv and len(path_conv["l2w_names"]) > 0:
        for i in range(len(path_conv["l2w_names"])):
            if path_conv["l2w_names"][i]:
                cfile.write("    ")
                if path_conv["return_is_size"]:
                    cfile.write("path_result = ")
                cfile.write("steamclient_unix_path_to_dos_path(path_result, %s, %s, %s, %s);\n" % (path_conv["l2w_names"][i], path_conv["l2w_names"][i], path_conv["l2w_lens"][i], to_c_bool(path_conv["l2w_urls"][i])))
            else:
                #string is in return value
                #ISteamController::GetGlyphForActionOrigin is the only user here for now
                cfile.write("    path_result = steamclient_isteamcontroller_getglyph(eOrigin, path_result);\n")
        cfile.write("    return path_result;\n")
    if path_conv:
        for i in range(len(path_conv["w2l_names"])):
            if path_conv["w2l_arrays"][i]:
                cfile.write("    steamclient_free_stringlist(lin_%s);\n" % path_conv["w2l_names"][i])
    cfile.write("}\n\n")
    for param in need_convert:
        if param.type.kind == clang.cindex.TypeKind.POINTER:
            if not "const " in param.type.spelling: #don't modify const arguments
                real_type = param.type;
                while real_type.kind == clang.cindex.TypeKind.POINTER:
                    real_type = real_type.get_pointee()
                cpp.write("    lin_to_win_struct_%s_%s(&lin_%s, %s);\n" % (real_type.spelling, sdkver, param.spelling, param.spelling))
        else:
            cpp.write("    lin_to_win_struct_%s_%s(&lin_%s, &%s);\n" % (param.type.spelling, sdkver, param.spelling, param.spelling))
    if method.result_type.kind != clang.cindex.TypeKind.VOID and \
            len(need_convert) > 0:
        cpp.write("    return retval;\n")
    cpp.write("}\n\n")

def get_iface_version(classname):
    # ISteamClient -> STEAMCLIENT_INTERFACE_VERSION
    defname = "%s_INTERFACE_VERSION" % classname[1:].upper()
    if defname in iface_versions.keys():
        ver = iface_versions[defname]
    else:
        ver = "UNVERSIONED"
    if classname in class_versions.keys() and ver in class_versions[classname]:
        return (ver, True)
    if not classname in class_versions.keys():
        class_versions[classname] = []
    class_versions[classname].append(ver)
    return (ver, False)

def handle_class(sdkver, classnode):
    children = list(classnode.get_children())
    if len(children) == 0:
        return
    (iface_version, already_generated) = get_iface_version(classnode.spelling)
    if already_generated:
        return
    winname = "win%s" % classnode.spelling
    cppname = "cpp%s_%s" % (classnode.spelling, iface_version)

    file_exists = os.path.isfile("%s.c" % winname)
    cfile = open("%s.c" % winname, "a")
    if not file_exists:
        cfile.write("""/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

""")

    cpp = open("%s.cpp" % cppname, "w")
    cpp.write("#include \"steam_defs.h\"\n")
    cpp.write("#pragma push_macro(\"__cdecl\")\n")
    cpp.write("#undef __cdecl\n")
    cpp.write("#include \"steamworks_sdk_%s/steam_api.h\"\n" % sdkver)
    if os.path.isfile("steamworks_sdk_%s/steamnetworkingtypes.h" % sdkver):
        cpp.write("#include \"steamworks_sdk_%s/steamnetworkingtypes.h\"\n" % sdkver)
    if not fname == "steam_api.h":
        cpp.write("#include \"steamworks_sdk_%s/%s\"\n" % (sdkver, fname))
    cpp.write("#pragma pop_macro(\"__cdecl\")\n")
    cpp.write("#include \"steamclient_private.h\"\n")
    cpp.write("#ifdef __cplusplus\nextern \"C\" {\n#endif\n")
    cpp.write("#define SDKVER_%s\n" % sdkver)
    cpp.write("#include \"struct_converters.h\"\n")
    cpp.write("#include \"%s.h\"\n" % cppname)

    cpp_h = open("%s.h" % cppname, "w")

    winclassname = "win%s_%s" % (classnode.spelling, iface_version)
    cfile.write("#include \"%s.h\"\n\n" % cppname)
    cfile.write("typedef struct __%s {\n" % winclassname)
    cfile.write("    vtable_ptr *vtable;\n")
    cfile.write("    void *linux_side;\n")
    cfile.write("} %s;\n\n" % winclassname)
    methods = []
    for child in children:
        if child.kind == clang.cindex.CursorKind.CXX_METHOD and \
                child.is_virtual_method():
            handle_method(cfile, classnode.spelling, winclassname, cppname, child, cpp, cpp_h, methods)
        elif child.kind == clang.cindex.CursorKind.DESTRUCTOR:
            methods.append(handle_destructor(cfile, classnode.spelling, winclassname, child))

    cfile.write("extern vtable_ptr %s_vtable;\n\n" % winclassname)
    cfile.write("#ifndef __GNUC__\n")
    cfile.write("void __asm_dummy_vtables(void) {\n")
    cfile.write("#endif\n")
    cfile.write("    __ASM_VTABLE(%s,\n" % winclassname)
    for method in methods:
        cfile.write("        VTABLE_ADD_FUNC(%s_%s)\n" % (winclassname, method))
    cfile.write("    );\n")
    cfile.write("#ifndef __GNUC__\n")
    cfile.write("}\n")
    cfile.write("#endif\n\n")
    cfile.write("%s *create_%s(void *linux_side)\n{\n" % (winclassname, winclassname))
    cfile.write("    %s *r = HeapAlloc(GetProcessHeap(), 0, sizeof(%s));\n" % (winclassname, winclassname))
    cfile.write("    TRACE(\"-> %p\\n\", r);\n")
    cfile.write("    r->vtable = &%s_vtable;\n" % winclassname)
    cfile.write("    r->linux_side = linux_side;\n")
    cfile.write("    return r;\n}\n\n")

    cpp.write("#ifdef __cplusplus\n}\n#endif\n")

    constructors = open("win_constructors.h", "a")
    constructors.write("extern void *create_%s(void *);\n" % winclassname)

    constructors = open("win_constructors_table.dat", "a")
    constructors.write("    {\"%s\", &create_%s},\n" % (iface_version, winclassname))
    if iface_version in aliases.keys():
        for alias in aliases[iface_version]:
            constructors.write("    {\"%s\", &create_%s}, /* alias */\n" % (alias, winclassname))


generated_cb_handlers = []
generated_cb_ids = []
cpp_files_need_close_brace = []
cb_table = {}
cb_table64 = {}

def get_field_attribute_str(field):
    if field.type.kind != clang.cindex.TypeKind.RECORD:
        return ""
    win_struct = find_windows_struct(field.type)
    if win_struct is None:
        align = field.type.get_align()
    else:
        align = win_struct.get_align()
    return " __attribute__((aligned(" + str(align) + ")))"

#because of struct packing differences between win32 and linux, we
#need to convert these structs from their linux layout to the win32
#layout.
def handle_struct(sdkver, struct):
    members = struct.get_children()
    cb_num = None
    has_fields = False
    for c in members:
        if c.kind == clang.cindex.CursorKind.ENUM_DECL:
            enums = c.get_children()
            for e in enums:
                if e.displayname == "k_iCallback":
                    cb_num = e.enum_value
        if c.kind == clang.cindex.CursorKind.FIELD_DECL:
            has_fields = True

    w2l_handler_name = None
    l2w_handler_name = None

    def dump_win_struct(to_file, name):
        to_file.write("#pragma pack( push, 8 )\n")
        to_file.write("struct win%s {\n" % name)
        for m in struct.get_children():
            if m.kind == clang.cindex.CursorKind.FIELD_DECL:
                if m.type.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                    to_file.write("    %s %s[%u];\n" % (m.type.element_type.spelling, m.displayname, m.type.element_count))
                elif m.type.kind == clang.cindex.TypeKind.RECORD and \
                        struct_needs_conversion(m.type):
                    to_file.write("    win%s_%s %s;\n" % (m.type.spelling, sdkver, m.displayname))
                else:
                    if m.type.kind == clang.cindex.TypeKind.POINTER and \
                            m.type.get_pointee().kind == clang.cindex.TypeKind.FUNCTIONPROTO:
                        to_file.write("    void *%s; /*fn pointer*/\n" % m.displayname)
                    else:
                        to_file.write("    %s %s%s;\n" % (m.type.spelling, m.displayname, get_field_attribute_str(m)))
        to_file.write("}  __attribute__ ((ms_struct));\n")
        to_file.write("#pragma pack( pop )\n")

    if cb_num is None:
        hfile = open("struct_converters.h", "a")

        if not has_fields:
            return
        if struct.spelling == "":
            return
        if not struct_needs_conversion(struct.type):
            return

        struct_name = "%s_%s" % (struct.displayname, sdkver)

        if struct_name in converted_structs:
            return
        converted_structs.append(struct_name)

        w2l_handler_name = "win_to_lin_struct_%s" % struct_name;
        l2w_handler_name = "lin_to_win_struct_%s" % struct_name;
        l2w_handler_name64 = None

        hfile.write("#if defined(SDKVER_%s) || !defined(__cplusplus)\n" % sdkver)
        dump_win_struct(hfile, struct_name)
        hfile.write("typedef struct win%s win%s;\n" % (struct_name, struct_name))
        hfile.write("struct %s;\n" % struct.displayname);

        if strip_const(struct.spelling) in manually_handled_structs:
            hfile.write("#endif\n\n")
            return

        hfile.write("extern void %s(const struct win%s *w, struct %s *l);\n" % (w2l_handler_name, struct_name, struct.displayname))
        hfile.write("extern void %s(const struct %s *l, struct win%s *w);\n" % (l2w_handler_name, struct.displayname, struct_name))
        hfile.write("#endif\n\n")
    else:
        #for callbacks, we use the windows struct size in the cb dispatch switch
        windows_struct = find_windows_struct(struct.type)
        windows_struct64 = find_windows64_struct(struct.type)
        struct64 = find_linux64_struct(struct.type)
        struct_name = "%s_%s" % (struct.displayname, windows_struct.get_size())
        l2w_handler_name = "cb_%s" % struct_name;
        if windows_struct64.get_size() != windows_struct.get_size():
            struct_name64 = "%s_%s" % (struct.displayname, windows_struct64.get_size())
            l2w_handler_name64 = "cb_%s" % struct_name64;
        else:
            l2w_handler_name64 = None
        if l2w_handler_name in generated_cb_handlers:
            # we already have a handler for the callback struct of this size
            return
        if not struct_needs_conversion(struct.type):
            return

        cb_id = cb_num | (struct.type.get_size() << 16)
        cb_id64 = cb_num | (struct64.get_size() << 16)
        if cb_id in generated_cb_ids:
            # either this cb changed name, or steam used the same ID for different structs
            return

        generated_cb_ids.append(cb_id)

        datfile = open("cb_converters.dat", "a")
        if l2w_handler_name64:
            datfile.write("#ifdef __i386__\n")
            datfile.write("case 0x%08x: win_msg->m_cubParam = %s; win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); %s((void*)lin_msg.m_pubParam, (void*)win_msg->m_pubParam); break;\n" % (cb_id, windows_struct.get_size(), l2w_handler_name))
            datfile.write("#endif\n")

            datfile.write("#ifdef __x86_64__\n")
            datfile.write("case 0x%08x: win_msg->m_cubParam = %s; win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); %s((void*)lin_msg.m_pubParam, (void*)win_msg->m_pubParam); break;\n" % (cb_id64, windows_struct64.get_size(), l2w_handler_name64))
            datfile.write("#endif\n")
        else:
            datfile.write("case 0x%08x: win_msg->m_cubParam = %s; win_msg->m_pubParam = HeapAlloc(GetProcessHeap(), 0, win_msg->m_cubParam); %s((void*)lin_msg.m_pubParam, (void*)win_msg->m_pubParam); break;\n" % (cb_id, windows_struct.get_size(), l2w_handler_name))

        generated_cb_handlers.append(l2w_handler_name)

        if not cb_num in cb_table.keys():
            # latest SDK linux size, list of windows struct sizes and names
            cb_table[cb_num] = (struct.type.get_size(), [])
            if l2w_handler_name64:
                cb_table64[cb_num] = (struct64.get_size(), [])
            else:
                cb_table64[cb_num] = (struct.type.get_size(), [])
        cb_table[cb_num][1].append((windows_struct.get_size(), struct_name))
        if l2w_handler_name64:
            cb_table64[cb_num][1].append((windows_struct64.get_size(), struct_name64))
        else:
            cb_table64[cb_num][1].append((windows_struct.get_size(), struct_name))

        hfile = open("cb_converters.h", "a")
        hfile.write("struct %s;\n" % struct.displayname)
        if l2w_handler_name64:
            hfile.write("#ifdef __i386__\n")
            hfile.write("struct win%s;\n" % struct_name)
            hfile.write("extern void %s(const struct %s *l, struct win%s *w);\n" % (l2w_handler_name, struct.displayname, struct_name))
            hfile.write("#endif\n")
            hfile.write("#ifdef __x86_64__\n")
            hfile.write("struct win%s;\n" % struct_name64)
            hfile.write("extern void %s(const struct %s *l, struct win%s *w);\n" % (l2w_handler_name64, struct.displayname, struct_name64))
            hfile.write("#endif\n\n")
        else:
            hfile.write("struct win%s;\n" % struct_name)
            hfile.write("extern void %s(const struct %s *l, struct win%s *w);\n\n" % (l2w_handler_name, struct.displayname, struct_name))

    cppname = "struct_converters_%s.cpp" % sdkver
    file_exists = os.path.isfile(cppname)
    cppfile = open(cppname, "a")
    if not file_exists:
        cppfile.write("#include \"steam_defs.h\"\n")
        cppfile.write("#pragma push_macro(\"__cdecl\")\n")
        cppfile.write("#undef __cdecl\n")
        cppfile.write("#include \"steamworks_sdk_%s/steam_api.h\"\n" % sdkver)
        cppfile.write("#include \"steamworks_sdk_%s/isteamgameserver.h\"\n" % (sdkver))
        if os.path.isfile("steamworks_sdk_%s/isteamnetworkingsockets.h" % sdkver):
            cppfile.write("#include \"steamworks_sdk_%s/isteamnetworkingsockets.h\"\n" % (sdkver))
        if os.path.isfile("steamworks_sdk_%s/isteamgameserverstats.h" % sdkver):
            cppfile.write("#include \"steamworks_sdk_%s/isteamgameserverstats.h\"\n" % (sdkver))
        if os.path.isfile("steamworks_sdk_%s/isteamgamecoordinator.h" % sdkver):
            cppfile.write("#include \"steamworks_sdk_%s/isteamgamecoordinator.h\"\n" % sdkver)
        if os.path.isfile("steamworks_sdk_%s/steamnetworkingtypes.h" % sdkver):
            cppfile.write("#include \"steamworks_sdk_%s/steamnetworkingtypes.h\"\n" % sdkver)
        cppfile.write("#pragma pop_macro(\"__cdecl\")\n")
        cppfile.write("#include \"steamclient_private.h\"\n")
        cppfile.write("extern \"C\" {\n")
        cppfile.write("#define SDKVER_%s\n" % sdkver)
        cppfile.write("#include \"struct_converters.h\"\n")
        cpp_files_need_close_brace.append(cppname)

    path_conv = get_path_converter(struct.type)

    def handle_field(m, src, dst):
        if m.kind == clang.cindex.CursorKind.FIELD_DECL:
            if m.type.kind == clang.cindex.TypeKind.CONSTANTARRAY:
                assert(m.type.element_type.kind != clang.cindex.TypeKind.RECORD or \
                        not struct_needs_conversion(m.type.element_type))
                cppfile.write("    memcpy(%s->%s, %s->%s, sizeof(%s->%s));\n" % (dst, m.displayname, src, m.displayname, dst, m.displayname))
            elif m.type.kind == clang.cindex.TypeKind.RECORD and \
                    struct_needs_conversion(m.type):
                cppfile.write("    %s_to_%s_struct_%s_%s(&%s->%s, &%s->%s);\n" % (src, dst, m.type.spelling, sdkver, src, m.displayname, dst, m.displayname))
            elif path_conv and m.displayname in path_conv["l2w_names"]:
                for i in range(len(path_conv["l2w_names"])):
                    if path_conv["l2w_names"][i] == m.displayname:
                        url = path_conv["l2w_urls"][i]
                        break
                cppfile.write("    steamclient_unix_path_to_dos_path(1, %s->%s, g_tmppath, sizeof(g_tmppath), %s);\n" % (src, m.displayname, to_c_bool(url)))
                cppfile.write("    %s->%s = g_tmppath;\n" % (dst, m.displayname))
            else:
                cppfile.write("    %s->%s = %s->%s;\n" % (dst, m.displayname, src, m.displayname))

    if not cb_num is None:
        if l2w_handler_name64:
            cppfile.write("#ifdef __i386__\n")
            dump_win_struct(cppfile, struct_name)
            cppfile.write("#endif\n")
            cppfile.write("#ifdef __x86_64__\n")
            dump_win_struct(cppfile, struct_name64)
            cppfile.write("#endif\n")
        else:
            dump_win_struct(cppfile, struct_name)

    if w2l_handler_name:
        cppfile.write("void %s(const struct win%s *win, struct %s *lin)\n{\n" % (w2l_handler_name, struct_name, struct.displayname))
        for m in struct.get_children():
            handle_field(m, "win", "lin")
        cppfile.write("}\n\n")

    if l2w_handler_name64:
        cppfile.write("#ifdef __x86_64__\n")
        cppfile.write("void %s(const struct %s *lin, struct win%s *win)\n{\n" % (l2w_handler_name64, struct.displayname, struct_name64))
        for m in struct.get_children():
            handle_field(m, "lin", "win")
        cppfile.write("}\n")
        cppfile.write("#endif\n\n")

    if l2w_handler_name:
        if l2w_handler_name64:
            cppfile.write("#ifdef __i386__\n")
        cppfile.write("void %s(const struct %s *lin, struct win%s *win)\n{\n" % (l2w_handler_name, struct.displayname, struct_name))
        for m in struct.get_children():
            handle_field(m, "lin", "win")
        cppfile.write("}\n")
        if l2w_handler_name64:
            cppfile.write("#endif\n\n")
        else:
            cppfile.write("\n")

prog = re.compile("^#define\s*(\w*)\s*\"(.*)\"")
for sdkver in sdk_versions:
    iface_versions = {}
    for f in os.listdir("steamworks_sdk_%s" % sdkver):
        x = open("steamworks_sdk_%s/%s" % (sdkver, f), "r")
        for l in x:
            if "INTERFACE_VERSION" in l:
                result = prog.match(l)
                if result:
                    iface, version = result.group(1, 2)
                    iface_versions[iface] = version

    for fname, classes in files:
        input_name = "steamworks_sdk_%s/%s" % (sdkver, fname)
        sys.stdout.write("about to parse %s\n" % input_name)
        if not os.path.isfile(input_name):
            continue
        index = clang.cindex.Index.create()
        linux_build = index.parse(input_name, args=['-x', 'c++', '-m32', '-Isteamworks_sdk_%s/' % sdkver, '-I' + CLANG_PATH + '/include/'])
        linux_build64 = index.parse(input_name, args=['-x', 'c++', '-Isteamworks_sdk_%s/' % sdkver, '-I' + CLANG_PATH + '/include/'])

        diagnostics = list(linux_build.diagnostics)
        if len(diagnostics) > 0:
            print('There were parse errors')
            pprint.pprint(diagnostics)
        else:
            windows_build = index.parse(input_name, args=['-x', 'c++', '-m32', '-Isteamworks_sdk_%s/' % sdkver, '-I' + CLANG_PATH + '/include/', '-mms-bitfields', '-U__linux__', '-Wno-incompatible-ms-struct'])
            windows_build64 = index.parse(input_name, args=['-x', 'c++', '-Isteamworks_sdk_%s/' % sdkver, '-I' + CLANG_PATH + '/include/', '-mms-bitfields', '-U__linux__', '-Wno-incompatible-ms-struct'])
            diagnostics = list(windows_build.diagnostics)
            if len(diagnostics) > 0:
                print('There were parse errors (windows build)')
                pprint.pprint(diagnostics)
            else:
                children = list(linux_build.cursor.get_children())
                for child in children:
                    if child.kind == clang.cindex.CursorKind.CLASS_DECL and child.displayname in classes:
                        handle_class(sdkver, child)
                    if child.kind == clang.cindex.CursorKind.STRUCT_DECL or \
                            child.kind == clang.cindex.CursorKind.CLASS_DECL:
                        handle_struct(sdkver, child)
                    if child.displayname in print_sizes:
                        sys.stdout.write("size of %s is %u\n" % (child.displayname, child.type.get_size()))

for f in cpp_files_need_close_brace:
    m = open(f, "a")
    m.write("\n}\n")

getapifile = open("cb_getapi_table.dat", "w")
cbsizefile = open("cb_getapi_sizes.dat", "w")

cbsizefile.write("#ifdef __i386__\n")
getapifile.write("#ifdef __i386__\n")
for cb in cb_table.keys():
    cbsizefile.write("case %u: /* %s */\n" % (cb, cb_table[cb][1][0][1]))
    cbsizefile.write("    return %u;\n" % cb_table[cb][0])
    getapifile.write("case %u:\n" % cb)
    getapifile.write("    switch(callback_len){\n")
    getapifile.write("    default:\n") # the first one should be the latest, should best support future SDK versions
    for (size, name) in cb_table[cb][1]:
        getapifile.write("    case %s: cb_%s(lin_callback, callback); break;\n" % (size, name))
    getapifile.write("    }\n    break;\n")
cbsizefile.write("#endif\n")
getapifile.write("#endif\n")

cbsizefile.write("#ifdef __x86_64__\n")
getapifile.write("#ifdef __x86_64__\n")
for cb in cb_table64.keys():
    cbsizefile.write("case %u: /* %s */\n" % (cb, cb_table64[cb][1][0][1]))
    cbsizefile.write("    return %u;\n" % cb_table64[cb][0])
    getapifile.write("case %u:\n" % cb)
    getapifile.write("    switch(callback_len){\n")
    getapifile.write("    default:\n") # the first one should be the latest, should best support future SDK versions
    for (size, name) in cb_table64[cb][1]:
        getapifile.write("    case %s: cb_%s(lin_callback, callback); break;\n" % (size, name))
    getapifile.write("    }\n    break;\n")
cbsizefile.write("#endif\n")
getapifile.write("#endif\n")
