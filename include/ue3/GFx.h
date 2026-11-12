/* Scaleform GFx 3.x as the engine's GFxUI module calls it: only what code here uses. Slots nothing
 * calls yet are placeholders (_slot_XXX). */
#ifndef UE3_GFX_H
#define UE3_GFX_H

typedef float Float;
typedef unsigned int UInt;

/* GFxMovie / GFxMovieView: the virtuals in their order in the game's GFx (slots in comments) */
class GFxMovieView
{
public:
#define S(n) virtual void _slot_##n() = 0;
	S(000) S(004) S(008) S(00c) S(010) S(014) S(018) S(01c) S(020) S(024) S(028) S(02c) S(030) S(034)
	S(038) S(03c) S(040) S(044) S(048) S(04c) S(050) S(054) S(058) S(05c) S(060) S(064) S(068) S(06c)
	S(070) S(074)
#undef S
	virtual Float Advance(Float deltaT, UInt frameCatchUpCount = 2) = 0;  /* 0x78 */
};

/* UnGFx's FGFxMovie (UGFxMovie::pMovie): the engine's wrapper around a movie view */
struct FGFxMovie
{
	BYTE _pad_0[0x34];
	GFxMovieView* pView; /* 0x34 */
};

class FGFxEngine;
extern FGFxEngine* GGFxEngine; /* 0x026caed4 */

#endif
