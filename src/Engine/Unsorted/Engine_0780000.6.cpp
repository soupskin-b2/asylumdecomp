// Engine_0780000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UAudioComponent_ : public UAudioComponent
{
	FLOAT GetMinDistance();
	void execGetMinDistance(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0078e4c0
void UAudioComponent_::execGetMinDistance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetMinDistance();
}

struct UAudioComponent__0078e500 : public UAudioComponent
{
	FLOAT GetMaxDistance();
	void execGetMaxDistance(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0078e500
void UAudioComponent__0078e500::execGetMaxDistance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetMaxDistance();
}
