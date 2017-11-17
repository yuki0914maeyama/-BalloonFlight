#ifndef WINDOW_H
#define WINDOW_H

#include<Windows.h>
#include<d3d9.h>
#include<d3dx9.h>
#include"Game.h"

#pragma comment(lib,"winmm.lib")
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib,"d3dx9.lib")
#pragma comment(lib,"dxguid.lib")


#define SAFE_RELEASE(p){if(p){(p)->Release();(p)=NULL;}}

/*頂点バッファをここで作成している*/
#define D3DFVF_CUSTOMVERTEX (D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1)

/*タイトル*/
#define TITLE TEXT("バルーンフライト")

/*画面の大きさ*/
#define WIDTH	1280
#define HEIGHT	780

class Window:public Game
{
public:
	Window();
	~Window();

private:

};


#endif
