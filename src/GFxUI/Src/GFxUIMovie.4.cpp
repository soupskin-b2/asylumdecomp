// GFxUIMovie.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00e41fb0
void UGFxMovie::execRefreshDataStoreBindings( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_124();
}

// @baa 0x00e41ff0
void UGFxMovie::execPublishDataStoreValues( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_128();
}

extern UEngine* g_026c3cdc;
// @baa 0x00e488e0
void UGFxMovie::execGetGameViewportClient(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UGameViewportClient**)Result = g_026c3cdc ? g_026c3cdc->GameViewport : NULL;
}

extern void* g_026caed4;
struct GFxViewport_
{
	void sub_00e63ae0(void*);
};

// @baa 0x00e64f70
void UGFxMovie::execSetTopMost(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	if (g_026caed4 && pMovie.Dummy)
		((GFxViewport_*)g_026caed4)->sub_00e63ae0((void*)pMovie.Dummy);
}

struct UGFxMovie_ : public UGFxMovie
{
	void sub_00e67ad0(FName);
};

// @baa 0x00e67ea0
void UGFxMovie::execAddCaptureKey(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(Key);
	P_FINISH;
	((UGFxMovie_*)this)->sub_00e67ad0(Key);
}

struct UGFxMovie__00e64ef0 : public UGFxMovie
{
	void sub_00e64310(UBOOL);
};

// @baa 0x00e64ef0
void UGFxMovie::execClose(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(Unload, 1);
	P_FINISH;
	((UGFxMovie__00e64ef0*)this)->sub_00e64310(Unload);
}

// @baa 0x00e41ec0
void UGFxMovie::execPause(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(pauseplay, 1);
	P_FINISH;
	vf_118(pauseplay);
}

// @baa 0x00e41e40
// @baa 0x00e41e40
void UGFxMovie::execGetStickMagAng(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Stick);
    P_FINISH;
    *(FName*)Result = GetStickMagAng(Stick);
}
