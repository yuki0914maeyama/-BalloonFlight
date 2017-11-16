#include"Window.h"
#include<Windows.h>

Window::Window()
{

}

Window::~Window()
{
	for (int i = 0; i <= TEXMAX; i++)
	{
		SAFE_RELEASE(g_pTexture[TEXMAX]);
	}

	SAFE_RELEASE(g_pD3Device);
	SAFE_RELEASE(g_pDirect3D);
}


int Window::WinMain(HINSTANCE hInstance, HINSTANCE hPrevInsta, LPSTR szStr, INT iCmdShow)
{

}

LRESULT Window::WndProc(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{

}