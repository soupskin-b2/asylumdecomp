// UnrealEd_0c80000.cpp (part 2 of 2): 7 functions
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

struct AActor__00c81570 : public AActor
{
	void sub_00769500(AActor*);
};

// @baa 0x00c81570
void AActor::execSetOwner(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, NewOwner);
	P_FINISH;
	((AActor__00c81570*)this)->sub_00769500(NewOwner);
}

struct AActor__00c80ea0 : public AActor
{
	void sub_00784080(BYTE);
};

// @baa 0x00c80ea0
void AActor::execSetCollisionType(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewCollisionType);
	P_FINISH;
	((AActor__00c80ea0*)this)->sub_00784080(NewCollisionType);
}

struct AActor__00c80da0 : public AActor
{
	void sub_00c4afe0(UAnimNodeSequence*);
};

// @baa 0x00c80da0
void AActor::execFinishAnim(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UAnimNodeSequence, SeqNode);
	P_FINISH;
	((AActor__00c80da0*)this)->sub_00c4afe0(SeqNode);
}
