/*
 * Copyright 2016 Józef Kucia for CodeWeavers
 * Copyright 2016 Henri Verbeet for CodeWeavers
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

#include <vkd3d_dxgi1_4.h>
#include <stdbool.h>
#include <stdio.h>

#define DEMO_WINDOW_CLASS_NAME L"demo_wc"

struct demo
{
    size_t window_count;
    bool quit;

    void *user_data;
    void (*idle_func)(struct demo *demo, void *user_data);
};

struct demo_window
{
    HINSTANCE instance;
    HWND hwnd;
    struct demo *demo;
    void *user_data;
    void (*expose_func)(struct demo_window *window, void *user_data);
    void (*key_press_func)(struct demo_window *window, demo_key key, void *user_data);
};

struct demo_swapchain
{
    IDXGISwapChain3 *swapchain;
};

static inline struct demo_window *demo_window_create(struct demo *demo, const char *title,
        unsigned int width, unsigned int height, void *user_data)
{
    RECT rect = {0, 0, width, height};
    struct demo_window *window;
    int title_size;
    WCHAR *title_w;
    DWORD style;

    if (!(window = malloc(sizeof(*window))))
        return NULL;

    title_size = MultiByteToWideChar(CP_UTF8, 0, title, -1, NULL, 0);
    if (!(title_w = calloc(title_size, sizeof(*title_w))))
    {
        free(window);
        return NULL;
    }
    MultiByteToWideChar(CP_UTF8, 0, title, -1, title_w, title_size);

    window->instance = GetModuleHandle(NULL);
    window->user_data = user_data;
    window->expose_func = NULL;
    window->key_press_func = NULL;

    style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_VISIBLE;
    AdjustWindowRect(&rect, style, FALSE);
    window->hwnd = CreateWindowExW(0, DEMO_WINDOW_CLASS_NAME, title_w, style, CW_USEDEFAULT, CW_USEDEFAULT,
            rect.right - rect.left, rect.bottom - rect.top, NULL, NULL, window->instance, NULL);
    free(title_w);
    if (!window->hwnd)
    {
        free(window);
        return NULL;
    }
    SetWindowLongPtrW(window->hwnd, GWLP_USERDATA, (LONG_PTR)window);
    window->demo = demo;
    ++demo->window_count;

    return window;
}

static inline void demo_window_destroy(struct demo_window *window)
{
    DestroyWindow(window->hwnd);
}

static inline demo_key demo_key_from_vkey(DWORD vkey)
{
    static const struct
    {
        DWORD vkey;
        demo_key demo_key;
    }
    lookup[] =
    {
        {VK_ESCAPE, DEMO_KEY_ESCAPE},
        {VK_LEFT,   DEMO_KEY_LEFT},
        {VK_RIGHT,  DEMO_KEY_RIGHT},
        {VK_UP,     DEMO_KEY_UP},
        {VK_DOWN,   DEMO_KEY_DOWN},
    };
    unsigned int i;

    if (vkey >= '0' && vkey <= '9')
        return vkey;
    if (vkey >= 'A' && vkey <= 'Z')
        return vkey;

    for (i = 0; i < ARRAY_SIZE(lookup); ++i)
    {
        if (lookup[i].vkey == vkey)
            return lookup[i].demo_key;
    }

    return DEMO_KEY_UNKNOWN;
}

static inline LRESULT CALLBACK demo_window_proc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam)
{
    struct demo_window *window = (void *)GetWindowLongPtrW(hwnd, GWLP_USERDATA);

    switch (message)
    {
        case WM_PAINT:
            if (window && window->expose_func)
                window->expose_func(window, window->user_data);
            return 0;

        case WM_KEYDOWN:
            if (!window->key_press_func)
                break;
            window->key_press_func(window, demo_key_from_vkey(wparam), window->user_data);
            return 0;

        case WM_DESTROY:
            if (!--window->demo->window_count)
                window->demo->quit = true;
            free(window);
            return 0;
    }

    return DefWindowProcW(hwnd, message, wparam, lparam);
}

static inline void demo_window_set_key_press_func(struct demo_window *window,
        void (*key_press_func)(struct demo_window *window, demo_key key, void *user_data))
{
    window->key_press_func = key_press_func;
}

static inline void demo_window_set_expose_func(struct demo_window *window,
        void (*expose_func)(struct demo_window *window, void *user_data))
{
    window->expose_func = expose_func;
}

static inline void demo_process_events(struct demo *demo)
{
    MSG msg = {0};

    for (;;)
    {
        if (!demo->idle_func)
        {
            if (GetMessageW(&msg, NULL, 0, 0) == -1)
                break;
        }
        else if (!PeekMessageW(&msg, 0, 0, 0, PM_REMOVE))
        {
            demo->idle_func(demo, demo->user_data);
            continue;
        }

        if (msg.message == WM_QUIT)
            break;
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
        if (demo->quit)
            PostQuitMessage(0);
    }
}

static inline bool demo_init(struct demo *demo, void *user_data)
{
    WNDCLASSEXW wc;

    wc.cbSize = sizeof(wc);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = demo_window_proc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = GetModuleHandle(NULL);
    wc.hIcon = LoadIconW(NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursorW(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = DEMO_WINDOW_CLASS_NAME;
    wc.hIconSm = LoadIconW(NULL, IDI_WINLOGO);
    if (!RegisterClassExW(&wc))
        return false;

    demo->window_count = 0;
    demo->quit = false;
    demo->user_data = user_data;
    demo->idle_func = NULL;

    return true;
}

static inline void demo_cleanup(struct demo *demo)
{
    UnregisterClassW(DEMO_WINDOW_CLASS_NAME, GetModuleHandle(NULL));
}

static inline void demo_set_idle_func(struct demo *demo,
        void (*idle_func)(struct demo *demo, void *user_data))
{
    demo->idle_func = idle_func;
}

static inline struct demo_swapchain *demo_swapchain_create(ID3D12CommandQueue *command_queue,
        struct demo_window *window, const struct demo_swapchain_desc *desc)
{
    DXGI_SWAP_CHAIN_DESC1 swapchain_desc;
    struct demo_swapchain *swapchain;
    IDXGISwapChain1 *swapchain1;
    IDXGIFactory2 *factory;
    HRESULT hr;

    if (!(swapchain = malloc(sizeof(*swapchain))))
        return NULL;

    if (FAILED(CreateDXGIFactory1(&IID_IDXGIFactory2, (void **)&factory)))
        goto fail;

    memset(&swapchain_desc, 0, sizeof(swapchain_desc));
    swapchain_desc.BufferCount = desc->buffer_count;
    swapchain_desc.Width = desc->width;
    swapchain_desc.Height = desc->height;
    swapchain_desc.Format = desc->format;
    swapchain_desc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    swapchain_desc.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
    swapchain_desc.SampleDesc.Count = 1;

    hr = IDXGIFactory2_CreateSwapChainForHwnd(factory, (IUnknown *)command_queue,
            window->hwnd, &swapchain_desc, NULL, NULL, &swapchain1);
    IDXGIFactory2_Release(factory);
    if (FAILED(hr))
        goto fail;

    hr = IDXGISwapChain1_QueryInterface(swapchain1, &IID_IDXGISwapChain3, (void **)&swapchain->swapchain);
    IDXGISwapChain1_Release(swapchain1);
    if (FAILED(hr))
        goto fail;

    return swapchain;

fail:
    free(swapchain);
    return NULL;
}

static inline unsigned int demo_swapchain_get_current_back_buffer_index(struct demo_swapchain *swapchain)
{
    return IDXGISwapChain3_GetCurrentBackBufferIndex(swapchain->swapchain);
}

static inline ID3D12Resource *demo_swapchain_get_back_buffer(struct demo_swapchain *swapchain, unsigned int index)
{
    ID3D12Resource *buffer;

    if (FAILED(IDXGISwapChain3_GetBuffer(swapchain->swapchain, index,
            &IID_ID3D12Resource, (void **)&buffer)))
        return NULL;

    return buffer;
}

static inline void demo_swapchain_present(struct demo_swapchain *swapchain)
{
    IDXGISwapChain3_Present(swapchain->swapchain, 1, 0);
}

static inline void demo_swapchain_destroy(struct demo_swapchain *swapchain)
{
    IDXGISwapChain3_Release(swapchain->swapchain);
    free(swapchain);
}

static inline HANDLE demo_create_event(void)
{
    return CreateEventA(NULL, FALSE, FALSE, NULL);
}

static inline unsigned int demo_wait_event(HANDLE event, unsigned int ms)
{
    return WaitForSingleObject(event, ms);
}

static inline void demo_destroy_event(HANDLE event)
{
    CloseHandle(event);
}
