// Engine_0790000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UAudioComponent_ : public UAudioComponent
{
	void Stop();
	void execStop(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0079ac70
void UAudioComponent_::execStop( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Stop();
}

struct UAudioComponent__0079aca0 : public UAudioComponent
{
	void KeyOff();
	void execKeyOff(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0079aca0
void UAudioComponent__0079aca0::execKeyOff( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	KeyOff();
}

struct UAudioComponent__0079acd0 : public UAudioComponent
{
	void KeyOffOnMarker();
	void execKeyOffOnMarker(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0079acd0
void UAudioComponent__0079acd0::execKeyOffOnMarker( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	KeyOffOnMarker();
}
