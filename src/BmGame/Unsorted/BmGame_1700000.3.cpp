// BmGame_1700000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

typedef AActor* (__thiscall* FSlot)(void*);

// @baa 0x017083b0
void ARExplosiveGooMine::execConditionalSetupPosition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = ((FSlot)(*(void***)this)[0x354 / 4])(this);
}
