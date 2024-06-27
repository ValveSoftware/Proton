#include <stdarg.h>
#include <stddef.h>

#include "ntstatus.h"
#define WIN32_NO_STATUS
#include "windef.h"
#include "winbase.h"

#undef min
#undef max
#undef wcsncpy
#include <algorithm>
#include <string>
#include <cwchar>
#include "json/json.h"

#include "unix_private.h"

#include <stdlib.h>
#include <linux/limits.h>

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#define IS_ABSOLUTE( x ) (*x == '/' || *x == '\\' || (*x && *(x + 1) == ':'))

static char *get_unix_file_name( const WCHAR *path )
{
    UNICODE_STRING nt_name;
    OBJECT_ATTRIBUTES attr;
    NTSTATUS status;
    ULONG size = 256;
    char *buffer;

    nt_name.Buffer = (WCHAR *)path;
    nt_name.MaximumLength = nt_name.Length = lstrlenW( path ) * sizeof(WCHAR);
    InitializeObjectAttributes( &attr, &nt_name, 0, 0, NULL );
    for (;;)
    {
        if (!(buffer = (char *)malloc( size ))) return NULL;
        status = wine_nt_to_unix_file_name( &attr, buffer, &size, FILE_OPEN_IF );
        if (status != STATUS_BUFFER_TOO_SMALL) break;
        free( buffer );
    }
    if (status && status != STATUS_NO_SUCH_FILE)
    {
        free( buffer );
        return NULL;
    }
    return buffer;
}

char *vrclient_dos_to_unix_path( const char *src )
{
    char buffer[4096], *dst = buffer;
    uint32_t len;

    TRACE( "src %s\n", debugstr_a(src) );

    if (!src) return NULL;

    *dst = 0;
    if (!*src) goto done;

    if (IS_ABSOLUTE( src ))
    {
        /* absolute path, use wine conversion */
        WCHAR srcW[PATH_MAX] = {'\\', '?', '?', '\\', 0}, *tmp;
        char *unix_path;
        uint32_t r;

        r = ntdll_umbstowcs( src, strlen( src ) + 1, srcW + 4, PATH_MAX - 4 );
        if (r == 0) unix_path = NULL;
        else
        {
            for (tmp = srcW; *tmp; ++tmp) if (*tmp == '/') *tmp = '\\';
            unix_path = get_unix_file_name( srcW );
        }

        if (!unix_path)
        {
            WARN( "Unable to convert DOS filename to unix: %s\n", src );
            return NULL;
        }

        if (!realpath( unix_path, dst ))
        {
            ERR( "Could not get real path for %s.\n", unix_path );
            lstrcpynA( dst, unix_path, PATH_MAX );
        }

        free( unix_path );
    }
    else
    {
        /* relative path, just fix up backslashes */
        const char *s;
        char *d;

        for (s = src, d = dst; *src; ++s, ++d)
        {
            if (*s == '\\') *d = '/';
            else *d = *s;
        }

        *d = 0;
    }

done:
    len = strlen( buffer ) + 1;
    if (!(dst = (char *)malloc( len ))) return NULL;
    memcpy( dst, buffer, len );

    TRACE( "-> %s\n", debugstr_a(dst) );
    return dst;
}

void vrclient_free_path( char *path )
{
    free( path );
}

/* returns the number of bytes written to dst, not including the NUL terminator */
unsigned int vrclient_unix_path_to_dos_path( bool api_result, const char *src, char *dst, uint32_t dst_bytes )
{
    NTSTATUS status;
    uint32_t r = 0;
    ULONG size = 0;
    WCHAR *dosW;

    TRACE( "api_result %u, src %s, dst %p, dst_bytes %u\n", api_result, debugstr_a(src), dst, dst_bytes );

    if (!src || !*src || !api_result || !dst || !dst_bytes)
    {
        if (dst && dst_bytes) *dst = 0;
        return 0;
    }

    status = wine_unix_to_nt_file_name( src, NULL, &size );
    if (status != STATUS_BUFFER_TOO_SMALL)
    {
        WARN( "Unable to convert unix filename to DOS: %s, status %#x.\n", debugstr_a(src), status );
        *dst = 0;
        return 0;
    }

    dosW = (WCHAR *)malloc( size * sizeof(WCHAR) );
    status = wine_unix_to_nt_file_name( src, dosW, &size );
    if (!status) r = ntdll_wcstoumbs( dosW, size, dst, dst_bytes, FALSE );
    else *dst = 0;
    free( dosW );

    if (!strncmp( dst, "\\??\\", 4 ))
    {
        memmove( dst, dst + 4, r - 4 );
        r -= 4;
    }

    TRACE( "-> dst %s, r %u\n", debugstr_a(dst), r );
    return r == 0 ? 0 : r - 1;
}

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
    WCHAR srcW[PATH_MAX] = {'\\', '?', '?', '\\', 0}, *tmp;
    char *unix_path;
    uint32_t sz;

    sz = ntdll_umbstowcs( s.c_str(), strlen( s.c_str() ) + 1, srcW + 4, PATH_MAX - 4 );
    if (!sz) return false;

    for (tmp = srcW; *tmp; ++tmp) if (*tmp == '/') *tmp = '\\';
    if (!(unix_path = get_unix_file_name( srcW ))) return false;

    /* XXX assuming the system encoding is UTF-8 */
    s = unix_path;
    free( unix_path );

    if (need_slash) s += '/';
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
    std::string src_path;
    Json::Reader reader;
    Json::Value root;
    char *dst_path;
    size_t len;
    char *ret;

    if(!startup_info || !reader.parse(startup_info, root))
        return NULL;

    if (!root.isMember("action_manifest_path") || !root["action_manifest_path"].isString())
        return NULL;

    src_path = root["action_manifest_path"].asString();
    WINE_TRACE("action_manifest_path %s.\n", src_path.c_str());

    if (!(dst_path = vrclient_dos_to_unix_path(src_path.c_str())))
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

    vrclient_free_path(dst_path);

    return ret;
}

}
