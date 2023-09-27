/*
 * Eric Pouech for CodeWeavers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include "config.h"

#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>


#define _XOPEN_SOURCE 700
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>


#include "windef.h"
#include "winbase.h"
#include "winnt.h"

static BOOL verbose;
static BOOL skip_managed_code;
static unsigned skipped_files;
static unsigned inserted_files;
static unsigned conflict_files;
static enum {MAP_ASIS, MAP_LOWERCASE, MAP_UPPERCASE} case_sensitivity;

static void usage(const char* error, ...)
{
    if (error)
    {
        va_list valist;

        va_start( valist, error );
        vfprintf( stderr, error, valist );
        va_end( valist );
    }
    fprintf(stderr,
            "symstore [options] <src> <dst>\n"
            "  <src> the top of a Proton dist tree\n"
            "  <dst> the top of a symstore-like tree generated from <src>\n");
    fprintf(stderr,
            "options:\n"
            "  -v             prints verbose information\n"
            " --lower-case    write every filename in <dst> in lower case\n"
            " --upper-case    write every filename in <dst> in upper case\n"
            "                 (by default, case of filename is preserved\n");

    exit(1);
}

static BOOL ensure_path_exists(const char* in)
{
    char path[MAX_PATH];
    char* p;

    p = strcpy(path, in);
    if (*p == '/') p++;
    for (;;)
    {
        p = strchr(p, '/');
        if (!p) break;
        *p = '\0';
        if (mkdir(path, 0777) < 0)
        {
            struct stat st;
            if (errno != EEXIST || stat(path, &st) < 0 || (st.st_mode & S_IFMT) != S_IFDIR)
            {
                printf("failed to create %s from %s\n", path, in);
                return FALSE;
            }
        }
        *p++ = '/';
    }
    return TRUE;
}

static BOOL copy_file(const char* from, const char* to)
{
    struct stat st;
    FILE* f1;
    FILE* f2;
    BOOL ret = FALSE;

    if (stat(to, &st) == 0) return FALSE;
    f1 = fopen(from, "rb");
    f2 = fopen(to, "wb");
    if (f1 && f2)
    {
        char buffer[512];
        size_t len1, len2;

        while ((len1 = fread(buffer, 1, ARRAYSIZE(buffer), f1)))
        {
            len2 = fwrite(buffer, 1, len1, f2);
            if (len1 != len2) break;
        }
        ret = feof(f1);
    }
    if (f1) fclose(f1);
    if (f2) fclose(f2);
    return ret;
}

static BOOL files_same_content(const char* file1, const char* file2)
{
    FILE* f1 = fopen(file1, "rb");
    FILE* f2 = fopen(file2, "rb");
    BOOL ret = FALSE;

    if (f1 && f2)
    {
        char buffer1[512], buffer2[512];
        size_t len1, len2;

        for (;;)
        {
            len1 = fread(buffer1, 1, ARRAYSIZE(buffer1), f1);
            len2 = fread(buffer2, 1, ARRAYSIZE(buffer2), f2);
            if (len1 != len2) break;
            if (len1 && memcmp(buffer1, buffer2, len1)) break;
            if ((ret = (feof(f1) && feof(f2)))) break;
        }
    }
    if (f1) fclose(f1);
    if (f2) fclose(f2);
    return ret;
}

static BOOL validate_proton_dist(const char* src)
{
    char buffer[MAX_PATH];
    struct stat st;
    BOOL allgood = TRUE;

    snprintf(buffer, ARRAYSIZE(buffer), "%s/%s", src, "version");
    allgood = stat(buffer, &st) == 0 && (st.st_mode & S_IFMT) == S_IFREG;

    snprintf(buffer, ARRAYSIZE(buffer), "%s/%s", src, "files");
    allgood = allgood && stat(buffer, &st) == 0 && (st.st_mode & S_IFMT) == S_IFDIR;

    return allgood;
}

static const IMAGE_DATA_DIRECTORY* get_directory(const IMAGE_NT_HEADERS64* nthdr, unsigned entry)
{
    if (nthdr->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR64_MAGIC)
        return entry < nthdr->OptionalHeader.NumberOfRvaAndSizes ?
            &nthdr->OptionalHeader.DataDirectory[entry] : NULL;
    if (nthdr->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR32_MAGIC)
    {
        const IMAGE_NT_HEADERS32* nthdr32 = (const IMAGE_NT_HEADERS32*)nthdr;
        return entry < nthdr32->OptionalHeader.NumberOfRvaAndSizes ?
            &nthdr32->OptionalHeader.DataDirectory[entry] : NULL;
    }
    return NULL;
}

static BOOL get_pe_srvinfo(const char* from, unsigned* timestamp, unsigned* size)
{
    static char header_buffer[1024];
    int fd;
    ssize_t header_read;
    const IMAGE_DOS_HEADER* dos;
    const IMAGE_NT_HEADERS64* nthdr;
    BOOL ret = FALSE;

    /* HACK!!! */
    /* find a better way to drop out debug only PE images */
    if (strlen(from) > 6 && !strcasecmp(from + strlen(from) - 6, ".debug")) return FALSE;

    if ((fd = open(from, O_RDONLY/* | O_BINARY */)) == -1) return FALSE;
    header_read = read(fd, header_buffer, sizeof(header_buffer));
    if (header_read >= 0)
    {
#define X(t, p) (((p) + sizeof(t) < header_read) ? (const t*)(header_buffer + p) : NULL)

        if ((dos = X(IMAGE_DOS_HEADER, 0)) != NULL &&
            dos->e_magic == IMAGE_DOS_SIGNATURE &&
            (nthdr = X(IMAGE_NT_HEADERS64, dos->e_lfanew)) != NULL &&
            nthdr->Signature == IMAGE_NT_SIGNATURE)
        {
            const IMAGE_DATA_DIRECTORY* dir = get_directory(nthdr, IMAGE_DIRECTORY_ENTRY_COM_DESCRIPTOR);
            *timestamp = nthdr->FileHeader.TimeDateStamp;

            ret = !(skip_managed_code && dir && dir->Size);

            if (nthdr->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR64_MAGIC)
            {
                *size = nthdr->OptionalHeader.SizeOfImage;
            }
            else if (nthdr->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR32_MAGIC)
            {
                const IMAGE_NT_HEADERS32* nthdr32 = (const IMAGE_NT_HEADERS32*)nthdr;
                *size = nthdr32->OptionalHeader.SizeOfImage;
            }
            else ret = FALSE;
        }
#undef X
    }
    close(fd);
    return ret;
}

static BOOL get_discriminant(const char* from, char* buffer, unsigned len)
{
    unsigned timestamp, size;

    if (get_pe_srvinfo(from, &timestamp, &size))
    {
        /* PE image */
        if (timestamp && size)
            return snprintf(buffer, len, "%X%x", timestamp, size) < len;
        if (!timestamp && size)
            fprintf(stderr, "Image %s has 0-timestamp\n", from);
    }
#if 0
    static GUID null_guid;
    /* PDB DS */
    if (!IsEqualGUID(&info.guid, &null_guid) && info.age)
        return snprintf(buffer, len, "%08x%04x%04x%02x%02x%02x%02x%02x%02x%02x%02x%lx",
                        info.guid.Data1, info.guid.Data2, info.guid.Data3,
                        info.guid.Data4[0], info.guid.Data4[1],
                        info.guid.Data4[2], info.guid.Data4[3],
                        info.guid.Data4[4], info.guid.Data4[5],
                        info.guid.Data4[6], info.guid.Data4[7],
                        info.age) < len;

    /* PDS JG and DBG are likely not needed */

    }
#endif
    if (verbose)
        fprintf(stderr, "Not a MS image or debug file %s\n", from);
    skipped_files++;

    return FALSE;
}

static void insert(const char* from, const char* dst)
{
    char discrim[64];

    if (get_discriminant(from, discrim, ARRAYSIZE(discrim)))
    {
        char out[MAX_PATH];
        const char* last = strrchr(from, '/');
        assert(last);

        snprintf(out, ARRAYSIZE(out), "%s/%s/%s/%s", dst, last + 1, discrim, last + 1);

        if (verbose)
            printf("Copying %s into %s\n", from, out);
        if (!ensure_path_exists(out))
        {
            fprintf(stderr, "Couldn't create directories for %s\n", out);
        }
        else if (copy_file(from, out) || files_same_content(from, out))
            inserted_files++;
        else
        {
            fprintf(stderr, "Conflict for file %s (%s)\n", out, from);
            conflict_files++;
        }
    }
}

static void recurse(char* buffer, const char* dst)
{
    DIR*                dp;
    struct dirent*      ep;
    size_t              at;
    struct stat         st;

    if (verbose > 1)
        fprintf(stderr, "Recursing into %s\n", buffer);

    at = strlen(buffer);

    if ((dp = opendir(buffer)) == NULL)
    {
        fprintf(stderr, "'%s' doesn't exist\n", buffer);
        usage(NULL);
    }
    while ((ep = readdir(dp)) != NULL)
    {
        if (!strcmp(ep->d_name, ".") || !strcmp(ep->d_name, "..")) continue;

        if (at + 1 + strlen(ep->d_name) < MAX_PATH)
        {
            char* ptr;

            buffer[at] = '/';
            strcpy(buffer + at + 1, ep->d_name);
            switch (case_sensitivity)
            {
            case MAP_ASIS:
                break;
            case MAP_LOWERCASE:
                for (ptr = buffer + at; *ptr; ptr++)
                    *ptr = tolower(*ptr);
                break;
            case MAP_UPPERCASE:
                for (ptr = buffer + at; *ptr; ptr++)
                    *ptr = toupper(*ptr);
                break;
            }
            if (stat(buffer, &st) == 0 && (st.st_mode & S_IFMT) == S_IFDIR)
                recurse(buffer, dst);
            else
                insert(buffer, dst);
        }
        else
        {
            fprintf(stderr, "Too long filename at %s %s\n", buffer, ep->d_name);
        }
    }
    closedir (dp);
    buffer[at] = '\0';
}

int main(int argc, char* argv[])
{
    char src_buffer[MAX_PATH];
    const char* src = NULL;
    const char* dst = NULL;
    int i;

    for (i = 1; i < argc; i++)
    {
        if (argv[i][0] == '-')
        {
            if (!strcmp(argv[i], "-v")) verbose++;
            else if (!strcmp(argv[i], "--skip-managed")) skip_managed_code = TRUE;
            else if (!strcmp(argv[i], "--lower-case")) case_sensitivity = MAP_LOWERCASE;
            else if (!strcmp(argv[i], "--upper-case")) case_sensitivity = MAP_UPPERCASE;
            else usage("Unknown option %s\n", argv[i]);
        }
        else
        {
            if (!src) src = argv[i];
            else if (!dst) dst = argv[i];
            else usage("Incorrect argument %s\n", argv[i]);
        }
    }
    if (!dst) usage("Missing argument\n");
    if (!validate_proton_dist(src)) usage("%s isn't a Proton directory\n", src);

    strcpy(src_buffer, src);
    if (src_buffer[strlen(src_buffer) - 1] == '/') src_buffer[strlen(src_buffer) - 1] = '\0';

    recurse(src_buffer, dst);

    printf("Status for inserting %s into %s\n", src, dst);
    printf("  %4u files copied\n", inserted_files);
    printf("  %4u files skipped\n", skipped_files);
    if (conflict_files)
    printf("  %4u files in conflict\n", conflict_files);

    return 0;
}
