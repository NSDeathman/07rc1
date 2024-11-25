#include "stdafx.h"

#include "UIEditBoxEx.h"
#include "UIFrameWindow.h"

CUIEditBoxEx::CUIEditBoxEx()
{
	m_pFrameWindow = xr_new<CUIFrameWindow>();
	AttachChild(m_pFrameWindow);

	SetTextComplexMode( true );
}

CUIEditBoxEx::~CUIEditBoxEx()
{
	xr_delete(m_pFrameWindow);
}	

void CUIEditBoxEx::InitCustomEdit(Fvector2 pos, Fvector2 size)
{
	m_pFrameWindow->Init	(0.f,0.f, size.x, size.y);
	CUICustomEdit::InitCustomEdit	(pos, size);
}

void  CUIEditBoxEx::InitTextureEx(LPCSTR texture, LPCSTR shader)
{
	m_pFrameWindow->InitTexture(texture);
}

void CUIEditBoxEx::InitTexture(LPCSTR texture)
{
	m_pFrameWindow->InitTexture(texture);
}
