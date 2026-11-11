// UnrealEd_0c80000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c815d0
void AActor::execFindBase(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	this->vf_124();
}

struct AActor_ : public AActor
{
	void FlushPersistentDebugLines();
	void execFlushPersistentDebugLines(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c816f0
void AActor_::execFlushPersistentDebugLines( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	FlushPersistentDebugLines();
}
