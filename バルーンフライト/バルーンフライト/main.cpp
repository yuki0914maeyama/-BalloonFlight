#include<Windows.h>
#include<d3dx9.h>
#include"Game.h"

/*�@DirectX�֌W�@�\���̕ϐ��錾 */
LPDIRECT3DTEXTURE9      g_Texture[]; // �摜�������Ă����ׂ̔z��
IDirect3DDevice9*       g_pD3Device; // Direct3D�̃f�o�C�X
D3DPRESENT_PARAMETERS	g_D3DPresentParameters; //�p�����[�^
D3DDISPLAYMODE			g_D3DdisplayMode;
IDirect3D9*				g_pDirect3D;	//Direct3D�̃C���^�[�t�F�[�X

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
	switch (msg)
	{
	case WM_KEYDOWN:
		switch (wp)
		{
		/*�@�G�X�P�[�v�L�[�������ꂽ��I���@*/
		case VK_ESCAPE:
			//�A�v���P�[�V�����̏I���R�[�h
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