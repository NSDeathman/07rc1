// File:		UI_IB_Static.h
// Description:	Inheritance of UIInteractiveBackground template class with some
//				CUIStatic features
// Created:		09.02.2005
// Author:		Serge Vynnychenko
// Mail:		narrator@gsc-game.kiev.ua

// Copyright 2005 GSC Game World

#include "StdAfx.h"
#include "UIIBStatic.h"

void CUIIBStatic::SetBaseTextureOffset(float x, float y)
{
	if (m_stateCurrent)
		m_stateCurrent->SetBaseTextureOffset(x,y);

	if (m_stateEnabled)
		m_stateEnabled->SetBaseTextureOffset(x,y);

	if (m_stateDisabled)
		m_stateDisabled->SetBaseTextureOffset(x,y);

	if (m_stateHighlighted)
		m_stateHighlighted->SetBaseTextureOffset(x,y);

	if (m_stateTouched)
		m_stateTouched->SetBaseTextureOffset(x,y);
}

void CUIIBStatic::SetTextureOffset(float x, float y)
{
	if (m_stateCurrent)
		m_stateCurrent->SetTextureOffset(x,y);

	if (m_stateEnabled)
		m_stateEnabled->SetTextureOffset(x,y);

	if (m_stateDisabled)
		m_stateDisabled->SetTextureOffset(x,y);

	if (m_stateHighlighted)
		m_stateHighlighted->SetTextureOffset(x,y);

	if (m_stateTouched)
		m_stateTouched->SetTextureOffset(x,y);
}

void CUIIBStatic::SetBaseTextureOffset(Fvector2 offset)
{
	if (m_stateCurrent)
		m_stateCurrent->SetBaseTextureOffset(offset);

	if (m_stateEnabled)
		m_stateEnabled->SetBaseTextureOffset(offset);

	if (m_stateDisabled)
		m_stateDisabled->SetBaseTextureOffset(offset);

	if (m_stateHighlighted)
		m_stateHighlighted->SetBaseTextureOffset(offset);

	if (m_stateTouched)
		m_stateTouched->SetBaseTextureOffset(offset);
}

void CUIIBStatic::SetTextureOffset(Fvector2 offset)
{
	if (m_stateCurrent)
		m_stateCurrent->SetTextureOffset(offset);

	if (m_stateEnabled)
		m_stateEnabled->SetTextureOffset(offset);

	if (m_stateDisabled)
		m_stateDisabled->SetTextureOffset(offset);

	if (m_stateHighlighted)
		m_stateHighlighted->SetTextureOffset(offset);

	if (m_stateTouched)
		m_stateTouched->SetTextureOffset(offset);
}

void CUIIBStatic::SetStretchTexture(bool stretch_texture)
{
	if (m_stateCurrent)
		m_stateCurrent->SetStretchTexture(stretch_texture);

	if (m_stateEnabled)
		m_stateEnabled->SetStretchTexture(stretch_texture);

	if (m_stateDisabled)
		m_stateDisabled->SetStretchTexture(stretch_texture);

	if (m_stateHighlighted)
		m_stateHighlighted->SetStretchTexture(stretch_texture);

	if (m_stateTouched)
		m_stateTouched->SetStretchTexture(stretch_texture);
}

void CUIIBStatic::SetScaleTexUsing(bool status)
{
	if (m_stateCurrent)
		m_stateCurrent->SetScaleTexUsing(status);

	if (m_stateEnabled)
		m_stateEnabled->SetScaleTexUsing(status);

	if (m_stateDisabled)
		m_stateDisabled->SetScaleTexUsing(status);

	if (m_stateHighlighted)
		m_stateHighlighted->SetScaleTexUsing(status);

	if (m_stateTouched)
		m_stateTouched->SetScaleTexUsing(status);
}

void CUIIBStatic::SetScaleTex(float tex_scale)
{
	if (m_stateCurrent)
		m_stateCurrent->SetScaleTex(tex_scale);

	if (m_stateEnabled)
		m_stateEnabled->SetScaleTex(tex_scale);

	if (m_stateDisabled)
		m_stateDisabled->SetScaleTex(tex_scale);

	if (m_stateHighlighted)
		m_stateHighlighted->SetScaleTex(tex_scale);

	if (m_stateTouched)
		m_stateTouched->SetScaleTex(tex_scale);
}

void CUIIBStatic::SetMirrorMode(EUIMirroring m)
{
	if (m_stateCurrent)
		m_stateCurrent->GetUIStaticItem().SetMirrorMode(m);

	if (m_stateEnabled)
		m_stateEnabled->GetUIStaticItem().SetMirrorMode(m);

	if (m_stateDisabled)
		m_stateDisabled->GetUIStaticItem().SetMirrorMode(m);

	if (m_stateHighlighted)
		m_stateHighlighted->GetUIStaticItem().SetMirrorMode(m);

	if (m_stateTouched)
		m_stateTouched->GetUIStaticItem().SetMirrorMode(m);
}
