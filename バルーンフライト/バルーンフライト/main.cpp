#include<Windows.h>
#include<d3dx9.h>
#include"Game.h"

/*　DirectX関係　構造体変数宣言 */
LPDIRECT3DTEXTURE9      g_Texture[]; // 画像情報を入れておく為の配列
IDirect3DDevice9*       g_pD3Device; // Direct3Dのデバイス
D3DPRESENT_PARAMETERS	g_D3DPresentParameters; //パラメータ
D3DDISPLAYMODE			g_D3DdisplayMode;
IDirect3D9*				g_pDirect3D;	//Direct3Dのインターフェース

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