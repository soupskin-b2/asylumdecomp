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
	FLOAT LastTime; /* 0x38: the clock UGFxMovie::SetTimingMode resets */
	BYTE _pad_3c[0x10];
	INT TimingMode; /* 0x4c: the owner's ETimingMode */
};

/* UnGFx's FGFxEngine (GGFxEngine): only its out-of-line members the matched code calls are declared. The
 * address-named ones have no recovered name yet (their callers are noted). */
class FGFxEngine {
public:
    void Tick(FLOAT DeltaTime); /* 0x00e531e0 */
    UBOOL InputChar(INT ControllerId, TCHAR Character); /* 0x00e5fae0 */
    void SetFocus(FGFxMovie* Movie, UBOOL CaptureInput); /* 0x00e688b0 */
    void FlushPlayerInput(void* Keys); /* 0x00e68530: Keys is a movie's capture-key set (TSet<NAME_INDEX>*), NULL for every key */
    void sub_00e63ae0(FGFxMovie* Movie); /* UGFxMovie::execSetTopMost's call */
    void sub_00e689a0(INT A, INT B); /* UGFxInteraction slot 0x120 (00e68a60) forwards its two arguments here */
    void sub_00e52fa0(INT A); /* 00e53860 forwards a nonzero argument here */
    void sub_00e53400(); /* called by 00e53880 */
    void sub_00e5d3a0(); /* called by 00e5d870 */
    void sub_00e64fb0(); /* called by 00e65ec0 */
};
extern FGFxEngine* GGFxEngine; /* 0x026caed4 */

#endif
