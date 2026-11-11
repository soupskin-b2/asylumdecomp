// UnrealEd_0c80000.cpp (part 2 of 2): 11 functions
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

struct AActor__00c80d30 : public AActor
{
	void sub_008a7810(FLOAT);
};

// @baa 0x00c80d30
void AActor::execSleep(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Seconds);
	P_FINISH;
	((AActor__00c80d30*)this)->sub_008a7810(Seconds);
}

struct AActor__00c80f00 : public AActor
{
	void sub_00777400(FLOAT);
};

// @baa 0x00c80f00
void AActor::execSetDrawScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewScale);
	P_FINISH;
	((AActor__00c80f00*)this)->sub_00777400(NewScale);
}

struct AActor__00c81460 : public AActor
{
	void sub_00867da0(FLOAT);
};

// @baa 0x00c81460
void AActor::execAutonomousPhysics(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaSeconds);
	P_FINISH;
	((AActor__00c81460*)this)->sub_00867da0(DeltaSeconds);
}

struct AActor__00c80f70 : public AActor
{
	void sub_00777420(FVector);
};

// @baa 0x00c80f70
void AActor::execSetDrawScale3D(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewScale3D);
	P_FINISH;
	((AActor__00c80f70*)this)->sub_00777420(NewScale3D);
}
