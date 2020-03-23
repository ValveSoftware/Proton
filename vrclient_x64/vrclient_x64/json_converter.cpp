#include <windows.h>
#include <wine/debug.h>

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "vrclient_private.h"

#include "json/json.h"

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

}
