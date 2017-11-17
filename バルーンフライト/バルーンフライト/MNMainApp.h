#ifndef MNMAIN_H
#define	MNMAIN_H

#include<Windows.h>
#include<d3d9.h>
#include<d3dx9.h>
#include"Game.h"

#pragma comment(lib,"winmm.lib")
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib,"d3dx9.lib")
#pragma comment(lib,"dxguid.lib")

class MNMainApp
{
public:
	/* staticをつけてインスタンス化させると他のファイルでインスタンス化させても同じ変数になる */
	static MNMainApp* my_instance;
	MNMainApp();
	virtual ~MNMainApp();
	virtual bool MainLoop() { return false; }
	int Boot();

	void SetWindowSize(int w, int h);
	void SetWindowName(LPCSTR  window_name);
	void SetAppName(LPCSTR app_name);

	virtual void Init() {};

private:
	int InitWindow();

private:
	HWND hWnd;

	int window_w;
	int window_h;

	LPCSTR window_name;
	LPCSTR app_name;
};

#endif