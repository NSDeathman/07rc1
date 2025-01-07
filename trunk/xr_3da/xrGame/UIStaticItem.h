#pragma once

#include "ui/uiabstract.h"
#include "uicustomitem.h"

void		CreateUIGeom		();
ref_geom	GetUIGeom			();
void		DestroyUIGeom		();

class CUIStaticItem: public IUISimpleTextureControl, public CUICustomItem
{
	ref_shader		hShader;
//	ref_geom		hGeom_fan;
	Fvector2		iPos;
	u32				dwColor;
	u32				dwBaseColor;
	int				iTileX;
	int				iTileY;
	float			iRemX;
	float			iRemY;
	int				alpha_ref;
protected:
	typedef CUICustomItem inherited;
public:
	using CUICustomItem::SetOriginalRect;

#ifdef DEBUG
	shared_str	dbg_tex_name;
#endif
					CUIStaticItem			();
	virtual			~CUIStaticItem			();

			void	SetAlphaRef				(int val)											{alpha_ref=val;};
	virtual void	CreateShader			(const char* tex, const char* sh = "hud\\default");
	virtual void	SetShader				(const ref_shader& sh);
	virtual	void	SetOriginalRect			(const Frect& r)									{iOriginalRect = r; uFlags|=flValidOriginalRect;}
	virtual void	SetOriginalRectEx		(const Frect& r)									{iOriginalRect = r; BaseTextureRect = r; uFlags|=flValidOriginalRect; SetRect(0,0,r.width(),r.height());}


	void			Init					(LPCSTR tex, LPCSTR sh, float left, float top, u32 align);
	
	
	
	void			Render					();
	void			Render					(float angle);

	IC void			SetTile					(int tile_x, int tile_y, float rem_x, float rem_y){iTileX=tile_x;iTileY=tile_y;iRemX=rem_x;iRemY=rem_y;}
	IC void			SetPos					(float left, float top)			{iPos.set(left,top);}
	IC void			SetPosX					(float left)					{iPos.x = left;}
	IC void			SetPosY					(float top)						{iPos.y = top;}

	IC float		GetPosX					()							{return iPos.x;}
	IC float		GetPosY					()							{return iPos.y;}

	IC void			SetTextureColor			(u32 clr)					{dwColor = clr;}
	IC void			SetTextureColor			(Fcolor clr)				{dwColor = clr.get();}
	IC void			SetBaseTextureColor		(u32 clr)					{dwBaseColor = clr; dwColor = clr;}
	IC void			SetBaseTextureColor		(Fcolor clr)				{dwBaseColor = clr.get(); dwColor = clr.get();}

	IC u32			GetTextureColor			() const					{return dwColor;}
	IC u32&			GetTextureColorRef		()							{return dwColor;}
	IC u32			GetBaseTextureColor		() const					{return dwBaseColor;}
	IC u32&			GetBaseTextureColorRef	()							{return dwBaseColor;}
	IC ref_shader&	GetShader				()							{return hShader;}
	void			SetBaseTextureRect		(const Frect& r) { BaseTextureRect = r; }
	const Frect&	GetBaseTextureRect		() const { return BaseTextureRect; };

	IC virtual void			SetMirrorMode	(EUIMirroring m)	{ eMirrorMode = m; }
	IC virtual EUIMirroring GetMirrorMode	() const			{ return eMirrorMode; }
};

extern ENGINE_API BOOL g_bRendering; 

