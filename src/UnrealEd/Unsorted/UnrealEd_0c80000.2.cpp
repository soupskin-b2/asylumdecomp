// UnrealEd_0c80000.cpp (part 2 of 2): 4 functions
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

// @baa 0x00c814d0
void AActor::execGetTerminalVelocity(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_11c();
}

// @baa 0x00c81610
void AActor::execGetBaseMost(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = (AActor*)vf_128();
}
