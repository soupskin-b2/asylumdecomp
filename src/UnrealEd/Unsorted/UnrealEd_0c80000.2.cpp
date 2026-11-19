// UnrealEd_0c80000.cpp (part 2 of 2): 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c815d0
void AActor::execFindBase(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	this->FindBase();
}

// @baa 0x00c816f0
void AActor::execFlushPersistentDebugLines( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	FlushPersistentDebugLines();
}

// @baa 0x00c814d0
void AActor::execGetTerminalVelocity(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = GetTerminalVelocity();
}

// @baa 0x00c81610
void AActor::execGetBaseMost(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = (AActor*)GetBaseMost();
}

// @baa 0x00c81570
void AActor::execSetOwner(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, NewOwner);
	P_FINISH;
	this->SetOwner(NewOwner);
}

// @baa 0x00c80ea0
void AActor::execSetCollisionType(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewCollisionType);
	P_FINISH;
	this->SetCollisionType(NewCollisionType);
}

struct AActor__00c80da0 : public AActor
{
	void FinishAnim(UAnimNodeSequence*);
};

// @baa 0x00c80da0
void AActor::execFinishAnim(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UAnimNodeSequence, SeqNode);
	P_FINISH;
	((AActor__00c80da0*)this)->FinishAnim(SeqNode);
}

// @baa 0x00c80d30
void AActor::execSleep(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Seconds);
	P_FINISH;
	this->Sleep(Seconds);
}

// @baa 0x00c80f00
void AActor::execSetDrawScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewScale);
	P_FINISH;
	SetDrawScale(NewScale);
}

// @baa 0x00c81460
void AActor::execAutonomousPhysics(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaSeconds);
	P_FINISH;
	this->AutonomousPhysics(DeltaSeconds);
}

// @baa 0x00c80f70
void AActor::execSetDrawScale3D(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewScale3D);
	P_FINISH;
	SetDrawScale3D(NewScale3D);
}

// @baa 0x00c81060
void AActor::execSetLocation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewLocation);
	P_FINISH;
	*(UBOOL*)Result = this->SetLocation(NewLocation);
}

// @baa 0x00c810e0
void AActor::execSetRotation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, NewRotation);
	P_FINISH;
	*(UBOOL*)Result = this->SetRotation(NewRotation);
}

// @baa 0x00c812a0
void AActor::execSetRelativeRotation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, NewRotation);
	P_FINISH;
	*(UBOOL*)Result = this->SetRelativeRotation(NewRotation);
}

// @baa 0x00c81320
void AActor::execSetRelativeLocation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewLocation);
	P_FINISH;
	*(UBOOL*)Result = this->SetRelativeLocation(NewLocation);
}

// @baa 0x00c80fe0
void AActor::execMove(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Delta);
	P_FINISH;
	*(UBOOL*)Result = this->Move(Delta);
}

// @baa 0x00c80cb0
void AActor::execSetExtraStasis(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(NewValue);
	P_FINISH;
	SetExtraStasis(NewValue);
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

// @baa 0x00c811f0
void AActor::execSetLocationForTest(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, NewLocation);
    P_GET_UBOOL(bNoCheck);
    P_FINISH;
    *(UBOOL*)Result = this->SetLocationForTest(NewLocation, bNoCheck);
}

// @baa 0x00c813a0
void AActor::execfixedTurn(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Current);
    P_GET_INT(Desired);
    P_GET_INT(DeltaRate);
    P_FINISH;
    *(INT*)Result = this->fixedTurn(Current, Desired, DeltaRate);
}

// @baa 0x00c81650
void AActor::execSetForcedInitialReplicatedProperty(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UProperty, PropToReplicate);
    P_GET_UBOOL(bAdd);
    P_FINISH;
    this->SetForcedInitialReplicatedProperty(PropToReplicate, bAdd);
}

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
    this->DrawDebugLine(LineStart, LineEnd, R, G, B, bPersistentLines);
}

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
    this->DrawDebugBox(Center, Extent, R, G, B, bPersistentLines);
}

// @baa 0x00c81160
void AActor::execMovingWhichWay(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_REF(Delta);
	P_FINISH;
	*(BYTE*)Result = MovingWhichWay(Delta);
}

// @baa 0x00c80bf0
void AActor::execForceUpdateComponents(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bCollisionUpdate, FALSE);
	P_GET_UBOOL_OPTX(bTransformOnly, TRUE);
	P_FINISH;
	ForceUpdateComponents(bCollisionUpdate, bTransformOnly);
}
