#include "unix_private.h"

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <sys/stat.h>

#if 0
#pragma makedep unix
#endif

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

static char *prev_slash( char *s, char *end )
{
    while (end != s && *--end != '/')
        ;
    return end == s ? nullptr : end;
}

template< typename Iface, typename Params >
static NTSTATUS IVRApplications_LaunchInternalProcess( Iface *iface, Params *params, bool wow64 )
{
    static const char *pass_env[] =
    {
        "DISPLAY",
        "LD_LIBRARY_PATH",
        "PATH",
        "WINEARCH",
        "WINEPREFIX",
        "WINEDLLPATH",
        "WINEDEBUG",
        "WINEDLLOVERRIDES",
        "SteamGameId",
        "SteamAppId",
        "PROTON_LOG",
        "WINEFSYNC",
        "WINEESYNC",
        "PROTON_NO_NTSYNC",
        "WINE_HIDE_AMD_GPU",
        "WINE_HIDE_NVIDIA_GPU",
        "WINE_HIDE_VANGOGH_GPU",
        "WINE_LARGE_ADDRESS_AWARE",
        "WINE_CRASH_REPORT_DIR",
        "PROTON_CRASH_REPORT_DIR",
        "PROTON_VR_RUNTIME",
        "WINE_MONO_TRACE",
        "WINE_GST_REGISTRY_DIR",
        "SteamOverlayGameId",
        "WINE_CPU_TOPOLOGY",
        "STEAM_FOSSILIZE_DUMP_PATH",
        "STEAM_FOSSILIZE_DUMP_PATH_READ_ONLY",
        "MESA_SHADER_CACHE_DIR",
        "MESA_DISK_CACHE_READ_ONLY_FOZ_DBS",
        "MESA_GLSL_CACHE_DIR",
        "STEAM_COMPAT_SHADER_PATH",
        "STEAM_COMPAT_TOOL_PATHS",
        "STEAM_COMPAT_TRANSCODED_MEDIA_PATH",
    };
    char *preloader_path = NULL, *wine_path = NULL, *app_path = NULL, *work_dir = NULL, *s, *sgi;
    char args[64], script_fn[64], log_str[256];
    unsigned int i;
    ssize_t len;
    FILE *f;

    TRACE( "pchBinaryPath %s, pchArguments %s, pchWorkingDirectory %s.\n",
           debugstr_a(params->pchBinaryPath), debugstr_a(params->pchArguments), debugstr_a(params->pchWorkingDirectory));

    params->_ret = 104; /* VRApplicationError_UnknownApplication */

    preloader_path = (char *)malloc( PATH_MAX + 1 );
    if ((len = readlink( "/proc/self/exe", preloader_path, PATH_MAX )) < 0) goto done;
    preloader_path[len] = 0;

    TRACE( "self exe path %s.\n", debugstr_a(preloader_path) );
    len = strlen( preloader_path );
    wine_path = (char *)malloc( len + 32 );
    strcpy( wine_path, preloader_path );
    if (!(s = prev_slash( wine_path, wine_path + len ))) goto done;
    strcpy( s + 1, "wine64" );
    if (access( wine_path, R_OK ))
    {
        strcpy( s + 1, "wine" );
        if (access( wine_path, R_OK )) goto done;
    }
    TRACE( "wine_path %s.\n", debugstr_a(wine_path) );
    if (!(app_path = vrclient_dos_to_unix_path( params->pchBinaryPath ))) goto done;
    work_dir = vrclient_dos_to_unix_path( params->pchWorkingDirectory );
    TRACE( "work_dir %s.\n", debugstr_a(work_dir));

    sprintf( script_fn, "/tmp/vrclient_run_env_%d.txt", getpid() );
    sprintf( args, "-c %s", script_fn );

    if (!(f = fopen( script_fn, "w" ))) goto done;
    fprintf( f, "#! /bin/bash\n\n" );
    for (i = 0; i < ARRAY_SIZE(pass_env); ++i)
    {
        if (s = getenv( pass_env[i]))
            fprintf( f, "export %s=\"%s\"\n", pass_env[i], s );
        else
            fprintf( f, "unset %s\n", pass_env[i] );
    }
    fprintf( f, "export WINELOADERNOEXEC=1\n", pass_env[i], s );

    fprintf( f, "rm -- \"$0\"\n" );
    *log_str = 0;
    if (getenv( "PROTON_LOG" ) && (s = getenv( "HOME" )) && (sgi = getenv( "SteamGameId" ))
        && strlen( s ) + strlen( sgi ) + 16 < sizeof(log_str))
    {
        sprintf( log_str, "%s/steam-%s.log", s, sgi );
        if (!access( log_str, W_OK ))
            sprintf( log_str, ">>%s/steam-%s.log 2>&1", s, sgi );
        else
            *log_str = 0;
    }
    if (!*log_str) strcpy( log_str, ">& /dev/null" );
    fprintf( f, "\nexec \"%s\" \"%s\" \"%s\" %s %s\n",
             preloader_path, wine_path, app_path, params->pchArguments, log_str );
    fclose(f);
    if (chmod( script_fn, 0755 )) goto done;
    params->_ret = iface->LaunchInternalProcess( "/bin/bash", args, work_dir );
    if (!params->_ret)
    {
        /* The current process is supposed to exit quick, make sure the new process is registered before the prefix
         * is shut down. */
        usleep( 500 * 1000 );
    }

done:
    TRACE( "ret %d.\n", params->_ret );
    free( wine_path );
    free( preloader_path );
    vrclient_free_path( app_path );
    vrclient_free_path( work_dir );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS IVRApplications_RegisterSubprocess( Iface *iface, Params *params, bool wow64 )
{
    HANDLE handle;
    CLIENT_ID id;
    int pid;

    params->_ret = 102; /* VRApplicationError_NoApplication */
    id.UniqueProcess = ULongToHandle(params->nPid);
    id.UniqueThread  = 0;
    if (NtOpenProcess( &handle, PROCESS_QUERY_INFORMATION, NULL, &id ))
    {
        ERR( "NtOpenProcess failed for %d.\n", params->nPid );
        return 0;
    }
    if (NtQueryInformationProcess( handle, ProcessWineUnixPid, &pid, sizeof(pid), NULL ))
    {
        ERR( "NtQueryInformationProcess failed for %d.\n", params->nPid );
        NtClose( handle );
        return 0;
    }
    NtClose( handle );
    params->_ret = iface->RegisterSubprocess( pid );
    TRACE( "pid %04x, _ret %d.\n", params->nPid, params->_ret );
    return 0;
}

VRCLIENT_UNIX_IMPL( IVRApplications, 004, LaunchInternalProcess );
VRCLIENT_UNIX_IMPL( IVRApplications, 005, LaunchInternalProcess );
VRCLIENT_UNIX_IMPL( IVRApplications, 006, LaunchInternalProcess );
VRCLIENT_UNIX_IMPL( IVRApplications, 007, LaunchInternalProcess );
VRCLIENT_UNIX_IMPL( IVRApplications, 008, LaunchInternalProcess );
VRCLIENT_UNIX_IMPL( IVRApplications, 008, RegisterSubprocess );
