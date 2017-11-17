#ifndef GAME_H
#define GAME_H

/*頂点バッファをここで作成している*/
#define D3DFVF_CUSTOMVERTEX (D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1)


#include<Windows.h>
#include<d3d9.h>
#include<d3dx9.h>

#pragma comment(lib,"winmm.lib")
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib,"d3dx9.lib")
#pragma comment(lib,"dxguid.lib")


class Game
{
public:
	Game();

	~Game();

	//キャラクターのステータスをここで決め
	struct CHARCTER_STATE
	{
		float x, y, scale;
	};

	//ここでキャラクターのサイズを作ってる
	struct CUSTOMVERTEX
	{
		FLOAT x, y, z, rhw;
		DWORD color;
		FLOAT tu, tv;
	};

	//画像のID(自番号)を決めている
	enum TEXTURE
	{
		BACKGROUND,
		TEXMAX,
	};

	//Directx関係		構造体変数宣言
	/*配列の要素数が0なのでエラーが起きていた*/
	LPDIRECT3DTEXTURE9	  g_pTexture[TEXMAX];	//	画像の情報を入れておく為の配列
	IDirect3DDevice9*	  g_pD3Device;		//	Direct3Dのデバイス
	D3DPRESENT_PARAMETERS g_D3dPresentParameters;		//	パラメータ
	D3DDISPLAYMODE		  g_D3DdisplayMode;
	IDirect3D9*			  g_pDirect3D;		//	Direct3Dのインターフェイス


private:

};

#endif 