#ifndef GAME_H
#define GAME_H

/*���_�o�b�t�@�������ō쐬���Ă���*/
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

	//�L�����N�^�[�̃X�e�[�^�X�������Ō���
	struct CHARCTER_STATE
	{
		float x, y, scale;
	};

	//�����ŃL�����N�^�[�̃T�C�Y������Ă�
	struct CUSTOMVERTEX
	{
		FLOAT x, y, z, rhw;
		DWORD color;
		FLOAT tu, tv;
	};

	//�摜��ID(���ԍ�)�����߂Ă���
	enum TEXTURE
	{
		BACKGROUND,
		TEXMAX,
	};

	//Directx�֌W		�\���̕ϐ��錾
	/*�z��̗v�f����0�Ȃ̂ŃG���[���N���Ă���*/
	LPDIRECT3DTEXTURE9	  g_pTexture[TEXMAX];	//	�摜�̏������Ă����ׂ̔z��
	IDirect3DDevice9*	  g_pD3Device;		//	Direct3D�̃f�o�C�X
	D3DPRESENT_PARAMETERS g_D3dPresentParameters;		//	�p�����[�^
	D3DDISPLAYMODE		  g_D3DdisplayMode;
	IDirect3D9*			  g_pDirect3D;		//	Direct3D�̃C���^�[�t�F�C�X


private:

};

#endif 