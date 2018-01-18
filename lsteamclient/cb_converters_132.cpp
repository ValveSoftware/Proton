#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_132/steam_api.h"
#include "steamworks_sdk_132/isteamgameserver.h"
#include "steamworks_sdk_132/isteamgameserverstats.h"
#include "steamworks_sdk_132/isteamgamecoordinator.h"
extern "C" {
struct winHTTPRequestCompleted_t_20 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    bool m_bRequestSuccessful;
    EHTTPStatusCode m_eStatusCode;
}  __attribute__ ((ms_struct));
void cb_HTTPRequestCompleted_t_20(void *l, void *w)
{
    HTTPRequestCompleted_t *lin = (HTTPRequestCompleted_t *)l;
    struct winHTTPRequestCompleted_t_20 *win = (struct winHTTPRequestCompleted_t_20 *)w;
    win->m_hRequest = lin->m_hRequest;
    win->m_ulContextValue = lin->m_ulContextValue;
    win->m_bRequestSuccessful = lin->m_bRequestSuccessful;
    win->m_eStatusCode = lin->m_eStatusCode;
}

struct winHTML_ComboNeedsPaint_t_16 {
    HHTMLBrowser unBrowserHandle;
    const char * pBGRA;
    uint32 unWide;
    uint32 unTall;
}  __attribute__ ((ms_struct));
void cb_HTML_ComboNeedsPaint_t_16(void *l, void *w)
{
    HTML_ComboNeedsPaint_t *lin = (HTML_ComboNeedsPaint_t *)l;
    struct winHTML_ComboNeedsPaint_t_16 *win = (struct winHTML_ComboNeedsPaint_t_16 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pBGRA = lin->pBGRA;
    win->unWide = lin->unWide;
    win->unTall = lin->unTall;
}

struct winHTML_ShowPopup_t_4 {
    HHTMLBrowser unBrowserHandle;
}  __attribute__ ((ms_struct));
void cb_HTML_ShowPopup_t_4(void *l, void *w)
{
    HTML_ShowPopup_t *lin = (HTML_ShowPopup_t *)l;
    struct winHTML_ShowPopup_t_4 *win = (struct winHTML_ShowPopup_t_4 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
}

struct winHTML_HidePopup_t_4 {
    HHTMLBrowser unBrowserHandle;
}  __attribute__ ((ms_struct));
void cb_HTML_HidePopup_t_4(void *l, void *w)
{
    HTML_HidePopup_t *lin = (HTML_HidePopup_t *)l;
    struct winHTML_HidePopup_t_4 *win = (struct winHTML_HidePopup_t_4 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
}

struct winHTML_SizePopup_t_20 {
    HHTMLBrowser unBrowserHandle;
    uint32 unX;
    uint32 unY;
    uint32 unWide;
    uint32 unTall;
}  __attribute__ ((ms_struct));
void cb_HTML_SizePopup_t_20(void *l, void *w)
{
    HTML_SizePopup_t *lin = (HTML_SizePopup_t *)l;
    struct winHTML_SizePopup_t_20 *win = (struct winHTML_SizePopup_t_20 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->unX = lin->unX;
    win->unY = lin->unY;
    win->unWide = lin->unWide;
    win->unTall = lin->unTall;
}

struct winHTML_NewWindow_t_24 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    uint32 unX;
    uint32 unY;
    uint32 unWide;
    uint32 unTall;
}  __attribute__ ((ms_struct));
void cb_HTML_NewWindow_t_24(void *l, void *w)
{
    HTML_NewWindow_t *lin = (HTML_NewWindow_t *)l;
    struct winHTML_NewWindow_t_24 *win = (struct winHTML_NewWindow_t_24 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchURL = lin->pchURL;
    win->unX = lin->unX;
    win->unY = lin->unY;
    win->unWide = lin->unWide;
    win->unTall = lin->unTall;
}


}
