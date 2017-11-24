#include"MNMainApp.h"

HINSTANCE hInstance_;
HINSTANCE prev_instance_;
PSTR cmd_lin_;
INT cmd_show_;

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
	switch (msg)
	{
	case WM_KEYDOWN:
		switch (wp)
		{
			/*　エスケープキーが押されたら終了　*/
		case VK_ESCAPE:
			//アプリケーションの終了コード
			PostQuitMessage(0);
			break;
		}
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hWnd, msg, wp, lp);
}

//WinMainをここで作っている
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInsta, LPSTR szStr, INT iCmdShow)
{
	hInstance_ = hInstance;
	prev_instance_ = hPrevInsta;
	cmd_lin_ = szStr;
	cmd_show_ = iCmdShow;
	return MNMainApp::my_instance->Boot();
}

MNMainApp* MNMainApp::my_instance = NULL;

MNMainApp::MNMainApp() :window_w(800), window_h(600), window_name("MNWindow"), app_name("MNApp")
{
	my_instance = this;
}

MNMainApp::~MNMainApp()
{

}

int MNMainApp::Boot()
{
	MNMainApp();
	Init();
	InitWindow();

	MSG msg;
	do
	{
		Sleep(1);
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			DispatchMessage(&msg);
		}
		else
		{
			if (!MainLoop())
			{
				msg.message = WM_QUIT;
			}
		}
	} while (msg.message != WM_QUIT);
	return 0;
}

int MNMainApp::InitWindow()
{
	WNDCLASS Wndclass;

	Wndclass.style = CS_HREDRAW | CS_VREDRAW;
	Wndclass.lpfnWndProc = WndProc;
	Wndclass.cbClsExtra = 0;
	Wndclass.cbWndExtra = 0;
	Wndclass.hInstance = hInstance_;
	Wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	Wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	Wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	Wndclass.lpszMenuName = NULL;
	Wndclass.lpszClassName = window_name;
	
	if (!RegisterClass(&Wndclass)) return 0;

	hWnd = CreateWindow(
		window_name,
		app_name,
		WS_OVERLAPPEDWINDOW,
		100,
		100,
		window_w,
		window_h,
		NULL,
		NULL,
		hInstance_,
		NULL);

	if (hWnd = NULL)return 0;

	ShowWindow(hWnd, SW_SHOW);

	return 0;
}


void MNMainApp::SetWindowSize(int w, int h)
{
	window_w = w;
	window_h = h;
}

void MNMainApp::SetWindowName(LPCSTR windowname)
{
	window_name = windowname;
}

void MNMainApp::SetAppName(LPCSTR appname)
{
	app_name = appname;
}