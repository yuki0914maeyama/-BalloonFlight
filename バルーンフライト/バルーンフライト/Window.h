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

/*���_�o�b�t�@�������ō쐬���Ă���*/
#define D3DFVF_CUSTOMVERTEX (D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1)

/*�^�C�g��*/
#define TITLE TEXT("�o���[���t���C�g")

/*��ʂ̑傫��*/
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
