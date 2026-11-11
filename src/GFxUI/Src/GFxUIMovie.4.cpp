// GFxUIMovie.cpp: 4 functions
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
