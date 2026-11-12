// UnrealEd_0c80000.cpp (part 2 of 2): 24 functions
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

struct AActor__00c81060 : public AActor
{
	UBOOL sub_008a7bb0(FVector);
};

// @baa 0x00c81060
void AActor::execSetLocation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewLocation);
	P_FINISH;
	*(UBOOL*)Result = ((AActor__00c81060*)this)->sub_008a7bb0(NewLocation);
}

struct AActor__00c810e0 : public AActor
{
	UBOOL sub_008a7f10(FRotator);
};

// @baa 0x00c810e0
void AActor::execSetRotation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, NewRotation);
	P_FINISH;
	*(UBOOL*)Result = ((AActor__00c810e0*)this)->sub_008a7f10(NewRotation);
}

struct AActor__00c812a0 : public AActor
{
	UBOOL sub_008a7fc0(FRotator);
};

// @baa 0x00c812a0
void AActor::execSetRelativeRotation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, NewRotation);
	P_FINISH;
	*(UBOOL*)Result = ((AActor__00c812a0*)this)->sub_008a7fc0(NewRotation);
}

struct AActor__00c81320 : public AActor
{
	UBOOL sub_008a7bf0(FVector);
};

// @baa 0x00c81320
void AActor::execSetRelativeLocation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewLocation);
	P_FINISH;
	*(UBOOL*)Result = ((AActor__00c81320*)this)->sub_008a7bf0(NewLocation);
}

struct AActor__00c80fe0 : public AActor
{
	UBOOL sub_008a7b10(FVector);
};

// @baa 0x00c80fe0
void AActor::execMove(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Delta);
	P_FINISH;
	*(UBOOL*)Result = ((AActor__00c80fe0*)this)->sub_008a7b10(Delta);
}

// @baa 0x00c80cb0
void AActor::execSetExtraStasis(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(NewValue);
	P_FINISH;
	vf_110(NewValue);
}

// @baa 0x00c81510
void AActor::execGetZoneVelocity(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetZoneVelocity();
}

// @baa 0x00c80e00
void AActor::execSetCollisionSize(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(NewRadius);
    P_GET_FLOAT(NewHeight);
    P_FINISH;
    SetCollisionSize(NewRadius, NewHeight);
}

/* AActor::SetLocationForTest (0x8a7bd0) isn't declared in the kit. */
struct AActor__00c811f0 : public AActor
{
    UBOOL SetLocationForTest(FVector NewLocation, UBOOL bNoCheck);
};

// @baa 0x00c811f0
void AActor::execSetLocationForTest(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, NewLocation);
    P_GET_UBOOL(bNoCheck);
    P_FINISH;
    *(UBOOL*)Result = ((AActor__00c811f0*)this)->SetLocationForTest(NewLocation, bNoCheck);
}

/* AActor::fixedTurn (0x873ba0) isn't declared in the kit. */
struct AActor__00c813a0 : public AActor
{
    INT fixedTurn(INT Current, INT Desired, INT DeltaRate);
};

// @baa 0x00c813a0
void AActor::execfixedTurn(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Current);
    P_GET_INT(Desired);
    P_GET_INT(DeltaRate);
    P_FINISH;
    *(INT*)Result = ((AActor__00c813a0*)this)->fixedTurn(Current, Desired, DeltaRate);
}

/* AActor::SetForcedInitialReplicatedProperty (0x77e1a0) isn't declared in the kit. */
struct AActor__00c81650 : public AActor
{
    void SetForcedInitialReplicatedProperty(class UProperty* PropToReplicate, UBOOL bAdd);
};

// @baa 0x00c81650
void AActor::execSetForcedInitialReplicatedProperty(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UProperty, PropToReplicate);
    P_GET_UBOOL(bAdd);
    P_FINISH;
    ((AActor__00c81650*)this)->SetForcedInitialReplicatedProperty(PropToReplicate, bAdd);
}

/* AActor::DrawDebugLine (0x8a9620) isn't declared in the kit. */
struct AActor__00c81720 : public AActor
{
    void DrawDebugLine(FVector LineStart, FVector LineEnd, BYTE R, BYTE G, BYTE B, UBOOL bPersistentLines);
};

// @baa 0x00c81720
void AActor::execDrawDebugLine(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, LineStart);
    P_GET_STRUCT(FVector, LineEnd);
    P_GET_BYTE(R);
    P_GET_BYTE(G);
    P_GET_BYTE(B);
    P_GET_UBOOL_OPTX(bPersistentLines, FALSE);
    P_FINISH;
    ((AActor__00c81720*)this)->DrawDebugLine(LineStart, LineEnd, R, G, B, bPersistentLines);
}

/* AActor::DrawDebugBox (0x8a96a0) isn't declared in the kit. */
struct AActor__00c81880 : public AActor
{
    void DrawDebugBox(FVector Center, FVector Extent, BYTE R, BYTE G, BYTE B, UBOOL bPersistentLines);
};

// @baa 0x00c81880
void AActor::execDrawDebugBox(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Center);
    P_GET_STRUCT(FVector, Extent);
    P_GET_BYTE(R);
    P_GET_BYTE(G);
    P_GET_BYTE(B);
    P_GET_UBOOL_OPTX(bPersistentLines, FALSE);
    P_FINISH;
    ((AActor__00c81880*)this)->DrawDebugBox(Center, Extent, R, G, B, bPersistentLines);
}
