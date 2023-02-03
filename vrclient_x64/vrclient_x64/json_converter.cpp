#include <windows.h>
#include <wine/debug.h>

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "vrclient_private.h"

#include "json/json.h"
#include <fstream>

extern "C" {

static bool ends_with(const std::string &s, char c)
{
    auto e = s.end();
    if(e != s.begin()){
        --e;
        return *e == c;
    }
    return false;
}

static bool convert_path_to_win(std::string &s)
{
    bool need_slash = ends_with(s, '\\') || ends_with(s, '/');

    DWORD sz = MultiByteToWideChar(CP_UTF8, 0, s.c_str(), -1, NULL, 0);
    if(!sz)
    {
        return false;
    }

    WCHAR *dos_path = (WCHAR *)HeapAlloc(GetProcessHeap(), 0, sz * sizeof(WCHAR));
    if(!dos_path)
    {
        return false;
    }

    sz = MultiByteToWideChar(CP_UTF8, 0, s.c_str(), -1, dos_path, sz);
    if(!sz)
    {
        HeapFree(GetProcessHeap(), 0, dos_path);
        return false;
    }

    char *unix_path = wine_get_unix_file_name(dos_path);
    if(!unix_path)
    {
        HeapFree(GetProcessHeap(), 0, dos_path);
        return false;
    }

    /* XXX assuming the system encoding is UTF-8 */
    s = unix_path;

    if(need_slash)
        s += '/';

    HeapFree(GetProcessHeap(), 0, unix_path);
    HeapFree(GetProcessHeap(), 0, dos_path);

    return true;
}

char *json_convert_paths(const char *input)
{
    Json::Reader reader;
    Json::Value root;

    if(!reader.parse(input, root))
        return NULL;

    if(root.isMember("type") &&
            root["type"].isString() &&
            root["type"] == "set_paths")
    {
        if(root.isMember("webroot") &&
                root["webroot"].isString())
        {
            std::string path(root["webroot"].asString());
            if(convert_path_to_win(path))
                root["webroot"] = path;
        }

        if(root.isMember("models") &&
                root["models"].isString())
        {
            std::string path(root["models"].asString());
            if(convert_path_to_win(path))
                root["models"] = path;
        }

        Json::FastWriter writer;

        std::string contents(writer.write(root));

        char *ret = (char *)malloc(contents.length() + 1);
        if(!ret)
            return NULL;

        size_t len = contents.copy(ret, contents.length());
        ret[len] = 0;

        return ret;
    }

    return NULL;
}

char *json_convert_startup_info(const char *startup_info)
{
    char dst_path[PATH_MAX];
    std::string src_path;
    Json::Reader reader;
    Json::Value root;
    size_t len;
    char *ret;

    if(!startup_info || !reader.parse(startup_info, root))
        return NULL;

    if (!root.isMember("action_manifest_path") || !root["action_manifest_path"].isString())
        return NULL;

    src_path = root["action_manifest_path"].asString();
    WINE_TRACE("action_manifest_path %s.\n", src_path.c_str());

    if (!vrclient_dos_path_to_unix_path(src_path.c_str(), dst_path))
    {
        WINE_ERR("error converting path %s.\n", src_path.c_str());
        return NULL;
    }
    WINE_TRACE("converted path %s.\n", dst_path);

    root["action_manifest_path"] = dst_path;

    Json::FastWriter writer;

    std::string contents(writer.write(root));
    ret = (char *)malloc(contents.length() + 1);
    len = contents.copy(ret, contents.length());
    ret[len] = 0;

    return ret;
}

bool json_convert_action_manifest(const char *manifest_file)
{
    char dst_path[PATH_MAX];
    Json::CharReaderBuilder rbuilder;
    std::ifstream manifest(manifest_file, std::ifstream::binary);
    Json::Value root;
    std::string errs;

    WINE_TRACE("converting action manifest file %s.\n", manifest_file);

    bool ok = Json::parseFromStream(rbuilder, manifest, &root, &errs);
    manifest.close();
    if (!ok) {
        WINE_ERR("error parsing action manifest as JSON %s: %s.\n", manifest_file, errs.c_str());
        return false;
    }

    if (!root.isMember("default_bindings"))
        return true;

     if (!root["default_bindings"].isArray()) {
        WINE_ERR("error converting action manifest %s: default_bindings is not an array.\n", manifest_file);
        return false;
    }

    for (Json::Value::ArrayIndex i = 0; i != root["default_bindings"].size(); i++) {
        if (root["default_bindings"][i].isMember("binding_url")) {
            if (!root["default_bindings"][i]["binding_url"].isString()) {
                WINE_ERR("error converting action manifest %s: binding_url %i is not a string.\n", manifest_file, i);
                return false;
            }
            vrclient_dos_path_to_unix_path(root["default_bindings"][i]["binding_url"].asCString(), dst_path);
            root["default_bindings"][i]["binding_url"] = dst_path;
        }
    }

    std::ofstream ofstream(manifest_file);
    ofstream << root;
    ofstream.close();

    return true;
}

}
