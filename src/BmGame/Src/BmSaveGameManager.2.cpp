// BmSaveGameManager.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0170a5f0
void URSaveGameManager::execInitialise(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_10c();
}

// @baa 0x0170a670
void URSaveGameManager::execJoinSaveBuffers(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_118();
}

typedef UBOOL (__thiscall* FSlot)(void*);

// @baa 0x0170a630
void URSaveGameManager::execStoreOptionsToMemory(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x114 / 4])(this);
}
